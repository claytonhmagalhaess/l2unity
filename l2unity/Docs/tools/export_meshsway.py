"""G8 (lobby): malhas que balancam com o vento (UStaticMesh.bSwayObject / Frequency / MaxSwayAngle; defaults false, 1, 1 em
UStaticMesh::StaticConstructor 0x106f47d0; estudo em scratchpad/lobby_sway_re.md) para
StreamingAssets/L2Web/cache/statics/sway.json: {"<Pacote.Grupo.Malha>": [Frequency, MaxSwayAngle]} so das que balancam.

Le as propriedades com o ukx_parse/unr_inventory do l2anim nos .usx do cliente, para as malhas dos mapas pedidos
(cache/map/<mapa>.json) e dos atores moveis (cache/map/<mapa>_movers.json).

Uso: python -I Docs/tools/export_meshsway.py [mapa ...]   (padrao: Lobby)
"""
import collections
import json
import os
import sys

L2ANIM = r'C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim'
sys.path.insert(0, os.path.join(L2ANIM, 'scripts'))
import ukx_parse  # noqa: E402
import unr_inventory as ui  # noqa: E402

CLIENT = r'C:\Program Files (x86)\Lineage II Interlude'
CACHE = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', 'Assets', 'StreamingAssets', 'L2Web', 'cache')
OUT = os.path.join(CACHE, 'statics', 'sway.json')


def meshes_of(map_name):
    out = set()
    p = os.path.join(CACHE, 'map', map_name + '.json')
    if os.path.exists(p):
        out.update(a['mesh'] for a in json.load(open(p))['actors'])
    p = os.path.join(CACHE, 'map', map_name + '_movers.json')
    if os.path.exists(p):
        out.update(m['mesh'] for m in json.load(open(p))['movers'] if m.get('mesh'))
    return out


def main():
    maps = sys.argv[1:] or ['Lobby']
    wanted = set()
    for m in maps:
        wanted |= meshes_of(m)
    by_pkg = collections.defaultdict(dict)
    for full in wanted:
        parts = full.split('.')
        by_pkg[parts[0]][parts[-1].lower()] = full
    res = json.load(open(OUT)) if os.path.exists(OUT) else {}
    for pkg, names in sorted(by_pkg.items()):
        f = os.path.join(CLIENT, 'StaticMeshes', pkg + '.usx')
        if not os.path.exists(f):
            print('sem pacote', pkg)
            continue
        p = ukx_parse.Package(f)
        for e in p.exports:
            if p.class_name(e) != 'StaticMesh' or e['name'].lower() not in names:
                continue
            pr = ui.props_of(p, e)
            full = names[e['name'].lower()]
            if pr.get('bSwayObject'):
                res[full] = [float(pr.get('Frequency', 1.0)), float(pr.get('MaxSwayAngle', 1.0))]
            else:
                res.pop(full, None)
    json.dump(res, open(OUT, 'w'), indent=0, sort_keys=True)
    print('malhas que balancam', len(res))


if __name__ == '__main__':
    main()
