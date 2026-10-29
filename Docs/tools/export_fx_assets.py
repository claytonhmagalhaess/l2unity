"""Assets e tabelas dos efeitos de skill (spec 09) para StreamingAssets/L2Web:

  fx/*.json                    copia de l2anim/out/re/fx (lineageeffect, LineageKetraEffect, Rider_Effect, engine_defaults,
                               skill_fx_map, legacy_skill_fx) e fx_tables.json gerado dos txt do l2anim (weapongrp effect/effA/effB,
                               Npcgrp rb_effect/effect, armorgrp att_eff, chargrp attack_eff, skillsoundgrp) + env.int [EnchantEffect]
                               + soulshot.int (do legacy_skill_fx.json) + fx_assets.json (ref -> url local);
  cache/raw/<Pacote>/Texture/  texturas das particulas (umodel -png);
  cache/statics/<ref>.glb      malhas estaticas dos MeshEmitter (tools/map/build_statics.py do l2web, modo --one, sem modifica-lo);
  cache/fx/vm/<nome>.vmesh     malhas de vertices (VertMesh .3d do umodel convertidas: quadros de vertices + triangulos + UV);
  client/System/env.int        copia do cliente (Ver111).

Uso: python -I Docs/tools/export_fx_assets.py [l2anim] [cliente] [--no-umodel]
"""
import glob
import json
import os
import re
import shutil
import struct
import subprocess
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
PROJECT = os.path.dirname(os.path.dirname(HERE))
L2ANIM = sys.argv[1] if len(sys.argv) > 1 and not sys.argv[1].startswith('--') else r'C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim'
CLIENT = sys.argv[2] if len(sys.argv) > 2 and not sys.argv[2].startswith('--') else r'C:\Program Files (x86)\Lineage II Interlude'
NO_UMODEL = '--no-umodel' in sys.argv
L2WEB = r'C:\Users\Clayton\projeto\l2web'
FX = os.path.join(L2ANIM, 'out', 're', 'fx')
SA = os.path.join(PROJECT, 'Assets', 'StreamingAssets', 'L2Web')
CACHE = os.path.join(SA, 'cache')
RAW = os.path.join(CACHE, 'raw')
OUT_FX = os.path.join(SA, 'fx')
UMODEL = os.path.join(L2ANIM, 'ext', 'umodel_dl', 'bin', 'umodel_64.exe')
BUILD_STATICS = os.path.join(L2WEB, 'tools', 'map', 'build_statics.py')


def log(*a):
    print(*a, flush=True)


def load(name):
    return json.load(open(os.path.join(FX, name), encoding='utf-8'))


# ---------------------------------------------------------------- tabelas txt
def table(name):
    rows = [l.rstrip('\r\n').split('\t') for l in open(os.path.join(L2ANIM, 'txt', name + '.txt'), encoding='utf-8', errors='replace')]
    h = rows[0]
    out = []
    for r in rows[1:]:
        if len(r) < 2:
            continue
        d = {}
        for i, c in enumerate(h):
            if i < len(r):
                d.setdefault(c, r[i])
        out.append((r, d))
    return h, out


def col_index(h, name):
    return h.index(name) if name in h else -1


def floats(vals):
    out = []
    for v in vals:
        try:
            out.append(float(v))
        except ValueError:
            out.append(0.0)
    return out


def weapon_table():
    """effect / effA / effB e os 5 floats de cada slot (junk1A/junk1B: offset xyz, fator de tamanho, fator de velocidade [I])."""
    h, rows = table('weapongrp')
    ia, ib = col_index(h, 'effA'), col_index(h, 'effB')
    out = {}
    for r, d in rows:
        if not d.get('id'):
            continue
        eff, ea, eb = d.get('effect', ''), d.get('effA', ''), d.get('effB', '')
        if not (eff or ea or eb) or (eff in ('', 'None') and ea in ('', 'None') and eb in ('', 'None')):
            continue
        out[d['id']] = dict(effect=eff if eff != 'None' else '', effA=ea if ea != 'None' else '', effB=eb if eb != 'None' else '',
                            A=floats(r[ia + 2:ia + 7]) if ia >= 0 else [], B=floats(r[ib + 1:ib + 6]) if ib >= 0 else [],
                            mesh=d.get('wpn_mesh[0]', ''), type=d.get('weapon_type', ''), handness=d.get('handness', ''))
    return out


def npc_table():
    h, rows = table('Npcgrp')
    out = {}
    for r, d in rows:
        tag = d.get('tag')
        if not tag or not tag.isdigit():
            continue
        e = dict(effect=d.get('effect', ''), rb_on=int(d.get('rb_effect_on', '0') or 0), rb_effect=d.get('rb_effect', ''),
                 rb_fl=float(d.get('rb_effect_fl', '0') or 0), cls=d.get('class', ''))
        if e['effect'] == 'None':
            e['effect'] = ''
        out[tag] = e
    return out


def simple_table(name, key, col):
    h, rows = table(name)
    out = {}
    for r, d in rows:
        k = d.get(key)
        v = d.get(col, '')
        if k and v and v != 'None':
            out[k] = v
    return out


def skillsound_table():
    h, rows = table('skillsoundgrp')
    out = {}
    for r, d in rows:
        sid, lv = d.get('skill_id'), d.get('skill_level')
        if not sid:
            continue

        def snd(prefix):
            names = [d.get('%s_sound_%d' % (prefix, i), '') for i in (1, 2, 3)]
            vols = [float(d.get('%s_sound_vol_%d' % (prefix, i), '0') or 0) for i in (1, 2, 3)]
            rads = [float(d.get('%s_sound_rad_%d' % (prefix, i), '0') or 0) for i in (1, 2, 3)]
            return [dict(n=n, v=v, r=rd) for n, v, rd in zip(names, vols, rads) if n]

        # vozes por classe de modelo (PlaySkillSound tipo 1 = *_sub, tipo 2 = *_throw; indice = CharClassID):
        # mfighter, ffighter, mdarkelf, fdarkelf, mdwarf, fdwarf, melf, felf, mmagic, fmagic, morc, forc, mshaman, fshaman, reservado
        sub = [d.get(c, '') for c in h if c.endswith('_sub') or c == 'RESERVED_sub_?']
        throw = [d.get(c, '') for c in h if c.endswith('_throw') or c == 'RESERVED_throw_?']
        e = dict(cast=snd('spelleffect'), shot=snd('shoteffect'), exp=snd('expeffect'))
        if any(sub) or any(throw):
            e['voice_cast'] = sub
            e['voice_shot'] = throw
            e['voice_vol'] = float(d.get('sound_vol', '0') or 0)
            e['voice_rad'] = float(d.get('sound_rad', '0') or 0)
        out['%s_%s' % (sid, lv)] = e
    return out, h


def env_int():
    src = os.path.join(CLIENT, 'system', 'env.int')
    if not os.path.exists(src):
        return {}
    b = open(src, 'rb').read()
    t = bytes(x ^ 0xAC for x in b[28:]).decode('latin-1')
    sec, out = None, {}
    for line in t.splitlines():
        line = line.strip()
        if line.startswith('['):
            sec = line.strip('[]')
            continue
        if sec != 'EnchantEffect' or '=' not in line:
            continue
        k, v = line.split('=', 1)
        if v.startswith('(') and v.endswith(')'):
            vals = {}
            for kv in v[1:-1].split(','):
                if '=' in kv:
                    a, b2 = kv.split('=', 1)
                    try:
                        vals[a] = float(b2)
                    except ValueError:
                        vals[a] = b2
            out[k] = vals
        else:
            try:
                out[k] = float(v)
            except ValueError:
                out[k] = v
    os.makedirs(os.path.join(SA, 'client', 'System'), exist_ok=True)
    shutil.copy2(src, os.path.join(SA, 'client', 'System', 'env.int'))
    return out


# ---------------------------------------------------------------- assets
def umodel(pkg, obj=None, cls=None):
    args = [UMODEL, '-export', '-png', '-game=l2', '-path=' + CLIENT, '-out=' + RAW, pkg]
    if obj:
        args.append(obj)
    if cls:
        args.append(cls)
    r = subprocess.run(args, capture_output=True, text=True, errors='replace')
    return r.returncode == 0


def find_raw(pkg, name, ext):
    for base in (os.path.join(RAW, pkg), RAW):
        hits = glob.glob(os.path.join(base, '**', name + ext), recursive=True)
        if hits:
            return hits[0]
    return None


def url_of(path):
    return '/' + os.path.relpath(path, CACHE).replace('\\', '/')


def collect_refs(packages, map_jsons):
    tex, mesh, vmesh = set(), set(), set()
    for pk in packages:
        for cname, c in pk['classes'].items():
            for e in c.get('emitters', []):
                p = e.get('props') or {}
                if p.get('Texture'):
                    tex.add(p['Texture'])
                if p.get('StaticMesh'):
                    mesh.add(p['StaticMesh'])
                if p.get('VertexMesh'):
                    vmesh.add(p['VertexMesh'])
    for mj in map_jsons:
        for em in json.load(open(mj, encoding='utf-8')).get('emitters', []):
            for s in em.get('subs', []):
                if s.get('Texture'):
                    tex.add(s['Texture'])
                if s.get('StaticMesh'):
                    mesh.add(s['StaticMesh'])
                if s.get('VertexMesh'):
                    vmesh.add(s['VertexMesh'])
    return sorted(tex), sorted(mesh), sorted(vmesh)


def export_textures(refs, assets):
    missing = []
    by_pkg = {}
    for ref in refs:
        parts = ref.split('.')
        by_pkg.setdefault(parts[0], []).append((ref, parts[-1]))
    for pkg, items in sorted(by_pkg.items()):
        todo = [(ref, name) for ref, name in items if not find_raw(pkg, name, '.png')]
        if todo and not NO_UMODEL:
            log('umodel texturas', pkg, len(todo))
            if len(todo) > 40:
                umodel(pkg, None, 'Texture')
            for ref, name in todo:
                if not find_raw(pkg, name, '.png'):
                    umodel(pkg, name, 'Texture')
        for ref, name in items:
            p = find_raw(pkg, name, '.png')
            if p:
                assets[ref] = url_of(p)
            else:
                missing.append(ref)
    return missing


def export_meshes(refs, assets):
    missing = []
    out_dir = os.path.join(CACHE, 'statics')
    os.makedirs(out_dir, exist_ok=True)
    for ref in refs:
        out = os.path.join(out_dir, ref + '.glb')
        if not os.path.exists(out) and not NO_UMODEL:
            r = subprocess.run([sys.executable, '-I', BUILD_STATICS, L2ANIM, CLIENT, '--one', CACHE, ref, '-', out],
                               capture_output=True, text=True, errors='replace')
            if not os.path.exists(out):
                log('malha falhou', ref, (r.stdout + r.stderr)[-200:].strip())
        if os.path.exists(out):
            assets[ref] = '/statics/' + ref + '.glb'
        else:
            missing.append(ref)
    return missing


def read_3d(d_path, a_path):
    """Formato .3d do Unreal 1 (James-Schmalz): _d = polys, _a = quadros de vertices compactados (11/11/10 bits)."""
    d = open(d_path, 'rb').read()
    npolys, nverts = struct.unpack_from('<HH', d, 0)
    polys = []
    off = 48
    for i in range(npolys):
        v0, v1, v2, ptype, color = struct.unpack_from('<HHHBB', d, off)
        uv = struct.unpack_from('<6B', d, off + 8)
        tex, flags = struct.unpack_from('<BB', d, off + 14)
        polys.append((v0, v1, v2, ptype, uv, tex))
        off += 16
    a = open(a_path, 'rb').read()
    nframes, framesize = struct.unpack_from('<HH', a, 0)
    frames = []
    off = 4
    for f in range(nframes):
        verts = []
        for v in range(nverts):
            (packed,) = struct.unpack_from('<I', a, off)
            off += 4
            x = packed & 0x7FF
            y = (packed >> 11) & 0x7FF
            z = (packed >> 22) & 0x3FF
            if x & 0x400:
                x -= 0x800
            if y & 0x400:
                y -= 0x800
            if z & 0x200:
                z -= 0x400
            verts.append((x / 8.0, y / 8.0, z / 4.0))
        frames.append(verts)
    return polys, frames


def export_vmeshes(refs, assets):
    missing = []
    out_dir = os.path.join(CACHE, 'fx', 'vm')
    os.makedirs(out_dir, exist_ok=True)
    for ref in refs:
        parts = ref.split('.')
        pkg, name = parts[0], parts[-1]
        out = os.path.join(out_dir, name + '.vmesh')
        if not os.path.exists(out):
            dp, ap = find_raw(pkg, name + '_d', '.3d'), find_raw(pkg, name + '_a', '.3d')
            if (not dp or not ap) and not NO_UMODEL:
                umodel(pkg, name)
                dp, ap = find_raw(pkg, name + '_d', '.3d'), find_raw(pkg, name + '_a', '.3d')
            if dp and ap:
                try:
                    polys, frames = read_3d(dp, ap)
                    with open(out, 'wb') as f:
                        f.write(b'L2VM')
                        f.write(struct.pack('<III', len(frames), len(frames[0]) if frames else 0, len(polys)))
                        for fr in frames:
                            for x, y, z in fr:
                                f.write(struct.pack('<fff', x, y, z))
                        for v0, v1, v2, ptype, uv, tex in polys:
                            f.write(struct.pack('<HHHBB6B', v0, v1, v2, ptype, tex, *uv))
                except Exception as e:  # noqa: BLE001
                    log('vmesh falhou', ref, e)
        if os.path.exists(out):
            assets[ref] = '/fx/vm/' + name + '.vmesh'
        else:
            missing.append(ref)
    return missing


def main():
    t0 = time.time()
    os.makedirs(OUT_FX, exist_ok=True)
    packages = []
    for fn in ('lineageeffect.json', 'LineageKetraEffect.json', 'Rider_Effect.json'):
        shutil.copy2(os.path.join(FX, fn), os.path.join(OUT_FX, fn))
        packages.append(load(fn))
    for fn in ('engine_defaults.json', 'skill_fx_map.json', 'legacy_skill_fx.json'):
        shutil.copy2(os.path.join(FX, fn), os.path.join(OUT_FX, fn))
    legacy = load('legacy_skill_fx.json')
    sounds, sh = skillsound_table()
    tables = dict(weapons=weapon_table(), npcs=npc_table(), armors=simple_table('armorgrp', 'id', 'att_eff'),
                  chars=simple_table('chargrp', 'id', 'attack_eff'), skillsounds=sounds, enchant=env_int(),
                  soulshot=(legacy.get('_soulshot_int') or {}).get('tabela', {}))
    with open(os.path.join(OUT_FX, 'fx_tables.json'), 'w', encoding='utf-8') as f:
        json.dump(tables, f, ensure_ascii=False)
    log('fx_tables.json: armas', len(tables['weapons']), 'npcs', len(tables['npcs']), 'sons', len(sounds), 'enchant', len(tables['enchant']))
    map_jsons = glob.glob(os.path.join(CACHE, 'map', '*_emitters.json'))
    tex, mesh, vmesh = collect_refs(packages, map_jsons)
    log('refs: texturas', len(tex), 'malhas', len(mesh), 'vertmesh', len(vmesh))
    assets = {}
    mt = export_textures(tex, assets)
    mm = export_meshes(mesh, assets)
    mv = export_vmeshes(vmesh, assets)
    with open(os.path.join(OUT_FX, 'fx_assets.json'), 'w', encoding='utf-8') as f:
        json.dump(dict(assets=assets, missing=dict(textures=mt, meshes=mm, vmeshes=mv)), f, ensure_ascii=False, indent=0)
    log('fx_assets.json:', len(assets), 'ok; faltam texturas', len(mt), 'malhas', len(mm), 'vertmesh', len(mv), '(%.0fs)' % (time.time() - t0))
    if mt:
        log('texturas faltando:', mt[:20])
    if mm:
        log('malhas faltando:', mm[:20])


if __name__ == '__main__':
    main()
