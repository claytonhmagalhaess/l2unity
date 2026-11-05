import os, sys; sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import numpy as np, json, math, os, struct
from collections import Counter, defaultdict
import sweep_floor as sf
SA = sf.SA
def cell_layers(x, y):
    rx, ry = math.floor(x/32768)+20, math.floor(y/32768)+18
    f = f'{SA}/geodata/{rx}_{ry}.l2d'
    b = blobs.get(f) or blobs.setdefault(f, open(f, 'rb').read())
    cx, cy = int((x-(rx-20)*32768)//16), int((y-(ry-18)*32768)//16)
    bx, by = cx//8, cy//8
    # avanca ate o bloco (bx, by) (bx externo, by interno)
    key = (f, bx)
    p = offs.get(key)
    if p is None:
        p = 0
        for bbx in range(bx):
            for bby in range(256): p = skip(b, p)
        offs[key] = p
    for bby in range(by): p = skip(b, p)
    t = b[p]; p += 1
    if t == 0xd0: return [struct.unpack_from('<h', b, p)[0]]
    if t == 0xd1:
        c = (cx % 8)*8 + (cy % 8); return [struct.unpack_from('<h', b, p+3*c+1)[0]]
    c = (cx % 8)*8 + (cy % 8)
    for k in range(c):
        L = b[p]; p += 1 + 3*L
    L = b[p]; p += 1
    return [struct.unpack_from('<h', b, p+3*l+1)[0] for l in range(L)]
def skip(b, p):
    t = b[p]; p += 1
    if t == 0xd0: return p + 2
    if t == 0xd1: return p + 192
    for c in range(64):
        L = b[p]; p += 1 + 3*L
    return p
blobs = {}; offs = {}
tris = {}
def tile_tris(t):
    if t in tris: return tris[t]
    Ts = []
    bp = f'{SA}/cache/bsp/{t}.glb'
    if os.path.exists(bp): Ts.append(sf.glb_tris(bp))
    mp = f'{SA}/cache/map/{t}.json'
    if os.path.exists(mp):
        for a in json.load(open(mp)).get('actors', []):
            T = sf.actor_tris(a)
            if T is not None: Ts.append(T)
    T = np.concatenate(Ts) if Ts else np.zeros((0, 3, 3))
    tris[t] = (T, T.min(1), T.max(1))
    return tris[t]
def surfaces(t, x, y):
    T, mn, mx = tile_tris(t)
    sel = (mn[:, 0] <= x) & (mx[:, 0] >= x) & (mn[:, 1] <= y) & (mx[:, 1] >= y)
    T = T[sel]
    if len(T) == 0: return np.zeros(0)
    A, B, C = T[:, 0], T[:, 1], T[:, 2]; v0 = B-A; v1 = C-A
    den = v0[:, 0]*v1[:, 1]-v1[:, 0]*v0[:, 1]
    with np.errstate(all='ignore'):
        u = ((x-A[:, 0])*v1[:, 1]-v1[:, 0]*(y-A[:, 1]))/den; v = (v0[:, 0]*(y-A[:, 1])-(x-A[:, 0])*v0[:, 1])/den
        ok = (u >= 0) & (v >= 0) & (u+v <= 1) & np.isfinite(u)
        return (A[:, 2]+u*v0[:, 2]+v*v1[:, 2])[ok]
uecache = {}
if __name__ == '__main__':
    o = json.load(open('spawns.json'))
    res = Counter(); bad = defaultdict(list)
    for p in o:
        x, y, z = p['x'], p['y'], p['z']; rx, ry = math.floor(x/32768)+20, math.floor(y/32768)+18; t = f'{rx}_{ry}'
        if not os.path.exists(f'{SA}/geodata/{t}.l2d'): continue
        L = cell_layers(x, y)
        if len(L) <= 2: continue
        g = min(L, key=lambda h: abs(h-z))
        S = surfaces(t, x, y)
        if t not in uecache: uecache[t] = np.load(f'sweep/{t}.npz')['ue']
        ue = uecache[t]; cx, cy = int((x-(rx-20)*32768)//16), int((y-(ry-18)*32768)//16)
        if ((S >= g-48) & (S <= g+8)).any(): c = 'piso'
        elif ue.size and -20 <= g - ue[cy, cx] <= 84: c = 'terreno'
        else:
            c = 'fora'; bad[t].append((p['name'] or p['kind'], x, y, z, g, sorted([round(s) for s in S if abs(s-g) < 400])[:6]))
        res[c] += 1
    print('pontos em celulas com 3+ camadas:', dict(res))
    for t, v in sorted(bad.items(), key=lambda kv: -len(kv[1])):
        print(t, len(v), v[:3])
