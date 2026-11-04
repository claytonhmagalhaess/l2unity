import os, sys; sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import numpy as np, json, math, os
from collections import Counter
import multi as M
fin = json.load(open('spawns_final.json'))
res = Counter(); drops = []
for p in fin:
    if p['c'] not in ('flutua', 'afunda'): continue
    x, y, z = p['x'], p['y'], p['z']; rx, ry = math.floor(x/32768)+20, math.floor(y/32768)+18; t = f'{rx}_{ry}'
    L = M.cell_layers(x, y); g = min(L, key=lambda h: abs(h-z))
    S = M.surfaces(t, x, y)
    ue = np.load(f'sweep/{t}.npz')['ue']; cx, cy = int((x-(rx-20)*32768)//16), int((y-(ry-18)*32768)//16)
    c = [s for s in S if g-900 <= s <= g+8]
    if ue.size and g-900 <= ue[cy, cx] <= g+20: c.append(float(ue[cy, cx]))
    if c:
        f = max(c); res['acha'] += 1; drops.append(g-f)
    else: res['nada'] += 1; print('nada', p['name'], x, y, z, g, sorted(round(s) for s in S)[-5:], ue[cy, cx] if ue.size else None)
print(dict(res)); print('queda', np.percentile(drops, [0, 25, 50, 75, 100]).round())
