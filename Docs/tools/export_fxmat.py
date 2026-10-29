"""G8 (lobby, P3 do lobby_env_plan): semantica dos materiais de efeito das malhas estaticas de um mapa (chamas das tochas,
cachoeiras, planos de luz, lua) para StreamingAssets/L2Web/cache/statics/fxmat.json, por nome de material do glTF (= nome
do material do UE).

Le os Shader/FinalBlend/Combiner/FadeColor/TexPanner e a cadeia AnimNext das texturas direto dos .utx (ukx_parse; o
props.txt do umodel nao traz AnimNext) e exporta os quadros que faltam com o umodel para cache/raw/<Pacote>/Texture.

Saida: {"<material>": {"blend": "translucent|brighten|alpha|darken", "twoSided": bool, "tex": "/raw/...png",
         "frames": [...], "fps": 30, "minFps": 25, "fade": {"c1": [r,g,b], "c2": [...], "period": s, "phase": p, "type": n},
         "mod2x": bool, "pan": {"rate": r, "dir": [p, y, r]}}}

Uso: python -I Docs/tools/export_fxmat.py [mapa=Lobby] [cliente]
"""
import glob
import json
import os
import struct
import subprocess
import sys

L2ANIM = r'C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim'
sys.path.insert(0, os.path.join(L2ANIM, 'scripts'))
from ukx_parse import Package  # noqa: E402

MAP = sys.argv[1] if len(sys.argv) > 1 else 'Lobby'
CLIENT = sys.argv[2] if len(sys.argv) > 2 else r'C:\Program Files (x86)\Lineage II Interlude'
CACHE = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', 'Assets', 'StreamingAssets', 'L2Web', 'cache')
RAW = os.path.join(CACHE, 'raw')
UMODEL = os.path.join(L2ANIM, 'ext', 'umodel_dl', 'bin', 'umodel_64.exe')
OUT = os.path.join(CACHE, 'statics', 'fxmat.json')

# Shader.OutputBlending (EOutputBlending) e FinalBlend.FrameBufferBlending (EFrameBufferBlending) do UE2
OB = {0: None, 1: None, 2: 'modulate', 3: 'translucent', 4: 'invisible', 5: 'brighten', 6: 'darken'}
FB = {0: None, 1: 'modulate', 2: 'alpha', 3: 'alphamod', 4: 'translucent', 5: 'darken', 6: 'brighten', 7: 'invisible'}

pkgs = {}


def package(name):
    key = name.lower()
    if key not in pkgs:
        hits = [f for f in glob.glob(os.path.join(CLIENT, 'Textures', '*.utx')) if os.path.splitext(os.path.basename(f))[0].lower() == key]
        pkgs[key] = Package(hits[0]) if hits else None
    return pkgs[key]


def find_export(name):
    """(pacote, classe, props) do objeto de material com esse nome, procurando os pacotes que o cache/raw ja conhece."""
    for d in glob.glob(os.path.join(RAW, '*', '*', name + '.*')):
        pk = os.path.basename(os.path.dirname(os.path.dirname(d)))
        p = package(pk)
        if not p:
            continue
        for e in p.exports:
            if e['name'].lower() == name.lower():
                p.r.seek(e['offset'])
                try:
                    return pk, p.class_name(e), p.read_props(), p
                except Exception:  # noqa: BLE001
                    return pk, p.class_name(e), {}, p
    return None


def props_in(p, name):
    for e in p.exports:
        if e['name'].lower() == name.lower():
            p.r.seek(e['offset'])
            try:
                return p.class_name(e), p.read_props()
            except Exception:  # noqa: BLE001
                return p.class_name(e), {}
    return None, {}


def png(pk, tex):
    path = os.path.join(RAW, pk, 'Texture', tex + '.png')
    if not os.path.exists(path):
        subprocess.run([UMODEL, '-export', '-png', '-game=l2', '-path=' + CLIENT, '-out=' + RAW, pk, tex, 'Texture'], capture_output=True)
    hits = glob.glob(os.path.join(RAW, '*', 'Texture', tex + '.png'))
    if not hits:
        return None
    rel = os.path.relpath(hits[0], CACHE).replace('\\', '/')
    return '/' + rel


def texture(entry, pk, p, name, depth=0):
    """Segue Combiner/FadeColor/TexPanner ate a textura difusa e anota as animacoes no caminho."""
    if not name or depth > 6:
        return
    cls, pr = props_in(p, name)
    if cls == 'Texture':
        entry['tex'] = png(pk, name)
        if pr.get('AnimNext'):
            frames, cur, seen = [], name, set()
            while cur and cur.lower() not in seen:
                seen.add(cur.lower())
                frames.append(png(pk, cur))
                cur = props_in(p, cur)[1].get('AnimNext')
            entry['frames'] = frames
            entry['fps'] = pr.get('MaxFrameRate', 0.0)
            entry['minFps'] = pr.get('MinFrameRate', 0.0)
    elif cls == 'Combiner':
        entry['mod2x'] = bool(pr.get('Modulate2X'))
        entry['combine'] = pr.get('CombineOperation', 0)
        texture(entry, pk, p, pr.get('Material1'), depth + 1)
        texture(entry, pk, p, pr.get('Material2'), depth + 1)
    elif cls == 'FadeColor':
        c1, c2 = pr.get('Color1', {}), pr.get('Color2', {})
        entry['fade'] = {'c1': [c1.get('R', 0), c1.get('G', 0), c1.get('B', 0)], 'c2': [c2.get('R', 0), c2.get('G', 0), c2.get('B', 0)],
                         'period': pr.get('FadePeriod', 0.0), 'phase': pr.get('FadePhase', 0.0), 'type': pr.get('ColorFadeType', 0)}
    elif cls in ('TexPanner', 'TexOscillator', 'TexRotator', 'TexScaler'):
        if cls == 'TexPanner':
            entry['pan'] = {'rate': pr.get('PanRate', 0.0), 'dir': pr.get('PanDirection', [0, 0, 0])}
        texture(entry, pk, p, pr.get('Material'), depth + 1)
    elif cls in ('Shader', 'FinalBlend'):
        texture(entry, pk, p, pr.get('Diffuse') or pr.get('Material'), depth + 1)


def material(name):
    hit = find_export(name)
    if not hit:
        return None
    pk, cls, pr, p = hit
    if cls == 'Shader':
        blend = OB.get(pr.get('OutputBlending', 0))
    elif cls == 'FinalBlend':
        blend = FB.get(pr.get('FrameBufferBlending', 0))
        # FinalBlend sobre um Shader: o blend de fora vale, a textura vem do Shader
    else:
        return None
    if not blend:
        return None
    e = {'blend': blend, 'twoSided': bool(pr.get('TwoSided')), 'zwrite': bool(pr.get('ZWrite', False))}
    texture(e, pk, p, pr.get('Diffuse') or pr.get('Material'))
    return e


def glb_materials(path):
    with open(path, 'rb') as f:
        f.read(12)
        n, _ = struct.unpack('<II', f.read(8))
        js = json.loads(f.read(n))
    return [m.get('name', '') for m in js.get('materials', [])]


def main():
    data = json.load(open(os.path.join(CACHE, 'map', MAP + '.json')))
    names = set()
    for url in {a['url'] for a in data['actors']}:
        path = os.path.join(CACHE, url.lstrip('/'))
        if os.path.exists(path):
            names.update(glb_materials(path))
    old = json.load(open(OUT)) if os.path.exists(OUT) else {}
    for n in sorted(names):
        m = material(n)
        if m:
            old[n] = m
            print(n, json.dumps(m)[:200])
    json.dump(old, open(OUT, 'w'), indent=1)


if __name__ == '__main__':
    main()
