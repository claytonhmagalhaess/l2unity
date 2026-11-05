# Para cada tile: classifica cada celula/camada do geodata pela regra do PickFloor
# (Statics/BSP em [z-48, z+8], terreno UE em [z-84, z+20]). Grava sweep/<tile>_cls.npz e imprime resumo.
import numpy as np, json, os, sys, glob, struct, math
SA = r"C:/Users/Clayton/workspace-claude/L2Unity-workspace/shared/StreamingAssets-L2Web"
N = 2048; SD, SU, TD, TU = 48, 8, 84, 20
CT = {5126: np.float32, 5125: np.uint32, 5123: np.uint16, 5121: np.uint8}
NC = {'SCALAR': 1, 'VEC3': 3, 'VEC2': 2, 'VEC4': 4}
def node_mat(n):
    if 'matrix' in n: return np.array(n['matrix'], np.float64).reshape(4, 4).T
    T = np.eye(4); T[:3, 3] = n.get('translation', [0, 0, 0])
    x, y, z, w = n.get('rotation', [0, 0, 0, 1])
    R = np.eye(4); R[:3, :3] = [[1-2*(y*y+z*z), 2*(x*y-z*w), 2*(x*z+y*w)], [2*(x*y+z*w), 1-2*(x*x+z*z), 2*(y*z-x*w)], [2*(x*z-y*w), 2*(y*z+x*w), 1-2*(x*x+y*y)]]
    S = np.diag(list(n.get('scale', [1, 1, 1])) + [1])
    return T @ R @ S
def glb_tris(p):
    """triangulos (k, 3, 3) em unidades do UE no espaco do glb (x, y, z do L2)."""
    b = open(p, 'rb').read(); L = struct.unpack_from('<I', b, 12)[0]; j = json.loads(b[20:20+L])
    bin0 = 20 + L + 8
    def acc(i):
        a = j['accessors'][i]; bv = j['bufferViews'][a['bufferView']]
        off = bin0 + bv.get('byteOffset', 0) + a.get('byteOffset', 0); nc = NC[a['type']]; dt = CT[a['componentType']]
        stride = bv.get('byteStride', 0); isz = np.dtype(dt).itemsize * nc
        if stride and stride != isz:
            raw = np.frombuffer(b, np.uint8, a['count'] * stride, off).reshape(a['count'], stride)[:, :isz]
            return np.frombuffer(raw.tobytes(), dt).reshape(a['count'], nc)
        return np.frombuffer(b, dt, a['count'] * nc, off).reshape(a['count'], nc)
    out = []
    def walk(ni, M):
        n = j['nodes'][ni]; M = M @ node_mat(n)
        if 'mesh' in n:
            for pr in j['meshes'][n['mesh']]['primitives']:
                if pr.get('mode', 4) != 4: continue
                P = acc(pr['attributes']['POSITION']).astype(np.float64)
                P = (np.c_[P, np.ones(len(P))] @ M.T)[:, :3]
                I = acc(pr['indices']).reshape(-1) if 'indices' in pr else np.arange(len(P))
                T = P[I.reshape(-1, 3)]
                out.append(T[:, :, [0, 2, 1]] * 100.0)  # glTF/three (x, z, y)*0.01 -> L2
        for c in n.get('children', []): walk(c, M)
    sc = j['scenes'][j.get('scene', 0)]
    for r in sc['nodes']: walk(r, np.eye(4))
    return np.concatenate(out) if out else np.zeros((0, 3, 3))
tpl = {}
def actor_tris(a):
    url = a.get('url')
    if not url: return None
    if url not in tpl:
        f = SA + '/cache' + url
        tpl[url] = glb_tris(f) if os.path.exists(f) else None
    T = tpl[url]
    if T is None or len(T) == 0: return None
    k = math.pi * 2 / 65536; r = a.get('rot') or [0, 0, 0]
    P_, Y_, R_ = r[0]*k, r[1]*k, r[2]*k
    SP, CP, SY, CY, SR, CR = math.sin(P_), math.cos(P_), math.sin(Y_), math.cos(Y_), math.sin(R_), math.cos(R_)
    M = np.array([[CP*CY, CP*SY, SP], [SR*SP*CY-CR*SY, SR*SP*SY+CR*CY, -SR*CP], [-(CR*SP*CY+SR*SY), CY*SR-CR*SP*SY, CR*CP]])
    s = np.array(a.get('scale3d') or [1, 1, 1], np.float64) * (a.get('scale') or 1.0)
    pp = np.array(a.get('prePivot') or [0, 0, 0], np.float64)
    return ((T - pp) * s) @ M + np.array(a['loc'], np.float64)
def raster(T, ox, oy, lo, hi, nl, cov_lo, cov_hi, zlist=None):
    if len(T) == 0: return
    T = T[np.isfinite(T).all(axis=(1, 2))]
    e1 = T[:, 1] - T[:, 0]; e2 = T[:, 2] - T[:, 0]
    nz = e1[:, 0]*e2[:, 1] - e1[:, 1]*e2[:, 0]
    nn = np.linalg.norm(np.cross(e1, e2), axis=1)
    T = T[(nn > 1e-6) & (np.abs(nz) > 0.1 * nn)]
    if len(T) == 0: return
    mn = T.min(1); mx = T.max(1)
    cx0 = np.clip(np.ceil((mn[:, 0] - ox - 8) / 16), 0, N).astype(np.int64); cx1 = np.clip(np.floor((mx[:, 0] - ox - 8) / 16), -1, N-1).astype(np.int64)
    cy0 = np.clip(np.ceil((mn[:, 1] - oy - 8) / 16), 0, N).astype(np.int64); cy1 = np.clip(np.floor((mx[:, 1] - oy - 8) / 16), -1, N-1).astype(np.int64)
    w = np.maximum(cx1 - cx0 + 1, 0); h = np.maximum(cy1 - cy0 + 1, 0); cnt = w * h
    keep = cnt > 0; T, cx0, cy0, w, cnt = T[keep], cx0[keep], cy0[keep], w[keep], cnt[keep]
    CH = 4_000_000
    starts = np.r_[0, np.cumsum(cnt)]
    i0 = 0
    while i0 < len(T):
        i1 = int(np.searchsorted(starts, starts[i0] + CH, 'right')) - 1
        i1 = max(i1, i0 + 1); i1 = min(i1, len(T))
        c = cnt[i0:i1]; tri = np.repeat(np.arange(i0, i1), c)
        local = np.arange(c.sum()) - np.repeat(starts[i0:i1] - starts[i0], c)
        cx = cx0[tri] + local % w[tri]; cy = cy0[tri] + local // w[tri]
        px = ox + cx * 16 + 8.0; py = oy + cy * 16 + 8.0
        A = T[tri, 0]; B = T[tri, 1]; C = T[tri, 2]
        v0x, v0y = B[:, 0]-A[:, 0], B[:, 1]-A[:, 1]; v1x, v1y = C[:, 0]-A[:, 0], C[:, 1]-A[:, 1]
        v2x, v2y = px - A[:, 0], py - A[:, 1]
        den = v0x*v1y - v1x*v0y
        u = (v2x*v1y - v1x*v2y) / den; v = (v0x*v2y - v2x*v0y) / den
        ins = (u >= -1e-6) & (v >= -1e-6) & (u + v <= 1 + 1e-6)
        z = A[:, 2] + u*(B[:, 2]-A[:, 2]) + v*(C[:, 2]-A[:, 2])
        cx, cy, z = cx[ins], cy[ins], z[ins]
        zl = lo[cy, cx]; zh = hi[cy, cx]
        okl = (z >= zl - SD) & (z <= zl + SU); okh = (z >= zh - SD) & (z <= zh + SU)
        cov_lo[cy[okl], cx[okl]] = True; cov_hi[cy[okh], cx[okh]] = True
        i0 = i1
def run(tile):
    rx, ry = map(int, tile.split('_'))
    z = np.load(f'sweep/{tile}.npz'); lo = z['lo'].astype(np.float64); hi = z['hi'].astype(np.float64); nl = z['nl']; ue = z['ue']
    ox, oy = (rx-20)*32768, (ry-18)*32768
    cov_lo = np.zeros((N, N), bool); cov_hi = np.zeros((N, N), bool)
    nb = ns = 0
    bp = f'{SA}/cache/bsp/{tile}.glb'
    if os.path.exists(bp):
        T = glb_tris(bp); nb = len(T); raster(T, ox, oy, lo, hi, nl, cov_lo, cov_hi)
    mp = f'{SA}/cache/map/{tile}.json'
    if os.path.exists(mp):
        acts = json.load(open(mp)).get('actors', [])
        Ts = [t for t in (actor_tris(a) for a in acts) if t is not None]
        if Ts:
            T = np.concatenate(Ts); ns = len(T); raster(T, ox, oy, lo, hi, nl, cov_lo, cov_hi)
    np.savez_compressed(f'sweep/{tile}_cls.npz', cov_lo=cov_lo, cov_hi=cov_hi)
    return nb, ns
if __name__ == '__main__':
    tiles = sys.argv[1:] or sorted(os.path.basename(f)[:-4] for f in glob.glob('sweep/*.npz') if '_cls' not in f)
    for t in tiles:
        if os.path.exists(f'sweep/{t}_cls.npz') and len(sys.argv) == 1: continue
        nb, ns = run(t); print(t, 'bsp', nb, 'statics', ns, flush=True)
