# Classifica pontos reais (spawns do aCis e teleportes) pela regra do PickFloor, com a camada do geodata mais perto do z do ponto.
import os, sys; sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import numpy as np, re, glob, os, json, math
from classify import TD, TU
AC = r"C:/Workspace-java/aCis_gameserver"
types = {}; names = {}
for f in glob.glob(AC + '/data/xml/npcs/*.xml'):
    s = open(f, encoding='utf-8', errors='replace').read()
    for m in re.finditer(r'<npc id="(\d+)" name="([^"]*)".*?<set name="type" val="(\w+)"', s, re.S):
        types[int(m.group(1))] = m.group(3); names[int(m.group(1))] = m.group(2)
pts = []
for m in re.finditer(r"VALUES \('(\d+)', '(-?\d+)', '(-?\d+)', '(-?\d+)'", open(AC + '/sql/spawnlist.sql').read()):
    i, x, y, z = map(int, m.groups()); pts.append(('monstro' if types.get(i) in ('Monster', 'RaidBoss', 'GrandBoss') else 'npc', i, x, y, z))
for m in re.finditer(r'<teleport id="(\d+)" x="(-?\d+)" y="(-?\d+)" z="(-?\d+)"', open(AC + '/data/xml/teleportLocations.xml').read()):
    i, x, y, z = map(int, m.groups()); pts.append(('teleporte', i, x, y, z))
cache = {}
def tile(t):
    if t not in cache:
        if not os.path.exists(f'sweep/{t}.npz'): cache[t] = None
        else:
            z = np.load(f'sweep/{t}.npz'); c = np.load(f'sweep/{t}_cls.npz')
            cache[t] = (z['lo'], z['hi'], z['nl'], z['ue'], c['cov_lo'], c['cov_hi'])
    return cache[t]
R = [(0, 0)] + [(round(200*math.cos(a)), round(200*math.sin(a))) for a in np.linspace(0, 2*math.pi, 8, endpoint=False)]
out = []
for kind, i, x, y, z in pts:
    res = []
    for dx, dy in R:
        px, py = x+dx, y+dy
        rx, ry = math.floor(px/32768)+20, math.floor(py/32768)+18
        T = tile(f'{rx}_{ry}')
        if T is None: res.append('sem-geo'); continue
        lo, hi, nl, ue, cl, ch = T
        cx, cy = int((px-(rx-20)*32768)//16), int((py-(ry-18)*32768)//16)
        if nl[cy, cx] == 0: res.append('sem-geo'); continue
        use_hi = abs(int(hi[cy, cx]) - z) < abs(int(lo[cy, cx]) - z)
        g = float(hi[cy, cx] if use_hi else lo[cy, cx]); cov = (ch if use_hi else cl)[cy, cx]
        if cov: res.append('piso'); continue
        if ue.size == 0: res.append('sem-ue'); continue
        d = g - float(ue[cy, cx])
        res.append('terreno' if -TU <= d <= TD else ('flutua' if d > TD else 'afunda'))
    out.append(dict(kind=kind, id=i, x=x, y=y, z=z, tile=f'{math.floor(x/32768)+20}_{math.floor(y/32768)+18}', c=res[0], ring=res[1:], name=names.get(i, '')))
json.dump(out, open('spawns.json', 'w'))
from collections import Counter
for k in ('monstro', 'npc', 'teleporte'):
    o = [p for p in out if p['kind'] == k]
    c = Counter(p['c'] for p in o); ring = Counter(r for p in o for r in p['ring'])
    print(k, len(o), 'centro', dict(c), 'anel200', dict(ring))
