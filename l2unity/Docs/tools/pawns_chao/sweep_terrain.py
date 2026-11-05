# geodata x terreno UE por tile (numpy). Saida: npz por tile com geo (lo, hi, layers) e ue no centro de cada celula
import numpy as np, json, os, sys, glob
SA = r"C:/Users/Clayton/workspace-claude/L2Unity-workspace/shared/StreamingAssets-L2Web"
OUT = sys.argv[1]
os.makedirs(OUT, exist_ok=True)
N = 2048
def load_geo(path):
    b = np.frombuffer(open(path, 'rb').read(), dtype=np.uint8)
    lo = np.zeros((N, N), np.int16); hi = np.zeros((N, N), np.int16); nl = np.zeros((N, N), np.uint8)
    p = 0
    for bx in range(256):
        for by in range(256):
            t = int(b[p]); p += 1; x0 = bx*8; y0 = by*8
            if t == 0xd0:
                h = np.int16(b[p] | (b[p+1] << 8)).astype(np.int16) if False else np.frombuffer(b[p:p+2].tobytes(), '<i2')[0]; p += 2
                lo[y0:y0+8, x0:x0+8] = h; hi[y0:y0+8, x0:x0+8] = h; nl[y0:y0+8, x0:x0+8] = 1
            elif t == 0xd1:
                rec = np.frombuffer(b[p:p+192].tobytes(), dtype=[('n','u1'),('h','<i2')]); p += 192
                h = rec['h'].reshape(8, 8)  # c = cx*8 + cy -> [cx][cy]
                lo[y0:y0+8, x0:x0+8] = h.T; hi[y0:y0+8, x0:x0+8] = h.T; nl[y0:y0+8, x0:x0+8] = 1
            elif t == 0xd2:
                for c in range(64):
                    L = int(b[p]); p += 1
                    rec = np.frombuffer(b[p:p+3*L].tobytes(), dtype=[('n','u1'),('h','<i2')]); p += 3*L
                    cy, cx = c % 8, c // 8
                    lo[y0+cy, x0+cx] = rec['h'].min(); hi[y0+cy, x0+cx] = rec['h'].max(); nl[y0+cy, x0+cx] = L
            else:
                raise Exception(hex(t))
    return lo, hi, nl
def ue_grid(tile, rx, ry):
    d = f"{SA}/cache/terrain_ue/{tile}"
    if not os.path.exists(d + "/terrain.json"): return None
    j = json.load(open(d + "/terrain.json")); W, V = j["size"]
    H = np.frombuffer(open(d + "/height.bin", 'rb').read()[:W*V*2], '<u2').astype(np.float64).reshape(V, W)
    lx, ly, lz = j["location"]; sx, sy, sz = j["scale"]
    xs = (rx-20)*32768 + np.arange(N)*16 + 8; ys = (ry-18)*32768 + np.arange(N)*16 + 8
    fi = (xs - lx)/sx + W/2; fj = (ys - ly)/sy + V/2
    i = np.clip(np.floor(fi).astype(int), 0, W-1); jj = np.clip(np.floor(fj).astype(int), 0, V-1)
    u = np.clip(fi - i, 0, 1); v = np.clip(fj - jj, 0, 1)
    i1 = np.minimum(i+1, W-1); j1 = np.minimum(jj+1, V-1)
    Z = lambda a, b: lz + (H[np.ix_(b, a)] - 32768) * sz / 256
    h00, h10, h01, h11 = Z(i, jj), Z(i1, jj), Z(i, j1), Z(i1, j1)
    U = u[None, :]; Vv = v[:, None]
    t1 = h00 + U*(h10-h00) + Vv*(h01-h00)
    t2 = h11 + (1-U)*(h01-h11) + (1-Vv)*(h10-h11)
    return np.where(U + Vv <= 1, t1, t2).astype(np.float32), j["location"], j["scale"]
for f in sorted(glob.glob(f"{SA}/geodata/*.l2d")):
    tile = os.path.basename(f)[:-4]; rx, ry = map(int, tile.split('_'))
    o = f"{OUT}/{tile}.npz"
    if os.path.exists(o): continue
    lo, hi, nl = load_geo(f)
    ue = ue_grid(tile, rx, ry)
    np.savez_compressed(o, lo=lo, hi=hi, nl=nl, ue=ue[0] if ue else np.zeros(0, np.float32), loc=np.array(ue[1] if ue else []), sc=np.array(ue[2] if ue else []))
    print(tile, 'ue' if ue else 'sem ue', flush=True)
