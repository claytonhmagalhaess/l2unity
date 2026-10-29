"""G8 (lobby): luz embutida do terreno de um mapa, como o cliente a monta (scratchpad/baked_light_re.md 4):
UTerrainSector::Serialize (0x10730fa0) guarda por setor 8 mapas de intensidade 17x17 (um por hora, time(i) = 3 i + 1,5) e
as luzes pontuais com bits de visibilidade; ATerrainInfo::UpdateShadow -> SetInterpolatedIntensityMap (0x1072ccb0) e
SetIntensityMap (0x10729bc0):
    Int[v]   = round(Map_i0[v] (1 - f) + Map_i1[v] f)          i0/i1/f como InterpolateSunLight (12h: 3, 4, 0,5)
    Color[v] = Static[v] + FColor(Int[v]/255 0,5 S) + (Amb >> 1)    saturando; S = HSVTerrainSunLight(t), Amb = TerrainAmbient(t)
e o D3D desenha com MODULATE2X: pixel = sat(2 tex Color). Static (luzes pontuais do setor, StaticLight 0x1071fc20) fica
de fora: no Lobby so a Light16 aparece, em 4 setores, com 4 bytes de bits (32 vertices de 289) [O contagem; I efeito].

Saida: StreamingAssets/L2Web/cache/terrain_ue/<mapa>/light.bin = 257 x 257 x RGB (linha a linha, x mais rapido), a grade
global do TerrainInfo (setor (OffsetX, OffsetY) + (col, row)).

Uso: python -I Docs/tools/export_terrainlight.py [mapa=Lobby] [hora=12]
"""
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.append(HERE)
import export_smlight as S  # noqa: E402

MAP = sys.argv[1] if len(sys.argv) > 1 else 'Lobby'
HOUR = float(sys.argv[2]) if len(sys.argv) > 2 else 12.0
CACHE = os.path.join(HERE, '..', '..', 'Assets', 'StreamingAssets', 'L2Web', 'cache')
# env_golden 12h: GetColorPlane_HSVTerrainSunLight = 0,644; GetTerrainAmbientColor = (120, 120, 120) [O]
SUN_12H = (0.644, 0.644, 0.644)
AMB_12H = (120, 120, 120)
GRID = 257


def read_sector(p, e):
    S.read_props(p, e)
    r = p.r
    r.idx()
    # QuadsX (+0x6c), QuadsY (+0x70), OffsetX (+0x74), OffsetY (+0x78)
    qx, qy, ox, oy = struct.unpack_from('<4i', r.d, r.p)
    r.p += 16 + 25
    nl = r.idx()
    for _ in range(nl):
        r.idx()
        nb = r.idx()
        r.p += nb
    use = r.i32()
    nmap = r.i32() if use else 0
    maps = []
    for _ in range(nmap):
        n = r.idx()
        maps.append(bytes(r.d[r.p:r.p + n]))
        r.p += n
    return ox, oy, qx, qy, maps


def sun_index(t, n=8):
    times = [(i + 0.5) * 24 / n for i in range(n)]
    i0 = n - 1
    for i in range(n):
        if times[i] <= t:
            i0 = i
    i1 = (i0 + 1) % n
    t0, t1 = times[i0], times[i1]
    if t < t0:
        t += 24
    if t1 <= t0:
        t1 += 24
    return i0, i1, (t - t0) / (t1 - t0)


def main():
    p = S.package(MAP, 'map')
    i0, i1, f = sun_index(HOUR)
    out = bytearray(GRID * GRID * 3)
    # os 8 mapas crus (TIntMap global 257x257 por hora), para o cliente misturar a cada ShadowTick
    raw = [bytearray(GRID * GRID) for _ in range(8)]
    filled = 0
    for e in p.exports:
        if p.class_name(e) != 'TerrainSector':
            continue
        ox, oy, qx, qy, maps = read_sector(p, e)
        if len(maps) < 8:
            continue
        m0, m1 = maps[i0], maps[i1]
        for row in range(qy + 1):
            for col in range(qx + 1):
                v = row * (qx + 1) + col
                if v >= len(m0):
                    continue
                inten = int(round(m0[v] * (1 - f) + m1[v] * f))
                gx, gy = ox + col, oy + row
                if gx >= GRID or gy >= GRID:
                    continue
                o = (gy * GRID + gx) * 3
                for k in range(8):
                    raw[k][gy * GRID + gx] = maps[k][v]
                for c in range(3):
                    val = int(inten / 255 * 0.5 * SUN_12H[c] * 255) + (AMB_12H[c] >> 1)
                    out[o + c] = min(255, val)
                filled += 1
    # os setores da ultima linha/coluna tem 15 quads (o mapa tem 256 vertices por lado): a borda 256 da grade do porte,
    # que ele estende para fechar a fresta com o tile vizinho, copia a 255
    for gy in range(GRID):
        o, src = (gy * GRID + 256) * 3, (gy * GRID + 255) * 3
        out[o:o + 3] = out[src:src + 3]
        for k in range(8):
            raw[k][gy * GRID + 256] = raw[k][gy * GRID + 255]
    for gx in range(GRID):
        o, src = (256 * GRID + gx) * 3, (255 * GRID + gx) * 3
        out[o:o + 3] = out[src:src + 3]
        for k in range(8):
            raw[k][256 * GRID + gx] = raw[k][255 * GRID + gx]
    d = os.path.join(CACHE, 'terrain_ue', MAP)
    os.makedirs(d, exist_ok=True)
    open(os.path.join(d, 'light.bin'), 'wb').write(out)
    open(os.path.join(d, 'intmaps.bin'), 'wb').write(b''.join(raw))
    print('terreno', MAP, 'hora', HOUR, 'i0/i1/f', i0, i1, f, 'vertices', filled, 'arquivo', os.path.join(d, 'light.bin'))


if __name__ == '__main__':
    main()
