"""Prototype: decode the BSP lightmaps of an L2 Interlude map (Ver 123 / LicenseeVer 28) and export them.

Format and formulas reverse-engineered from Engine.dll / D3DDrv.dll (see bsp_lightmap_re.md next to this file):
  UModel::Serialize 0x105ef340, FBspSection<< 0x10303acb, FLightMap<< 0x10310820, FLightBitmap<< 0x1038d830,
  FMultiLightMapTexture<< 0x1030ca72, FLightMapTexture<< 0x10308f5d, FStaticLightMapTexture<< 0x1030f35d,
  FLightingTables 0x10670de0, SmoothLightBitmap 0x10671600, light sampler 0x10671890, MergeLightMap 0x106712c0,
  FLightMap::GetTextureData 0x10675bc0, UModel::BuildRenderData 0x105ee860 (lightmap UVs),
  FBspDrawList::Render 0x10669de0 (texture choice by hour, EnableLighting(0,0,Modulate2X=1,lightmap)).

Usage (run with python -I):
  bsp_lm_export.py stats   <map.unr>
  bsp_lm_export.py verify  <map.unr> [hour]             rebuilt (non-sun zone) lightmaps vs the stored DXT1 atlas
  bsp_lm_export.py export  <map.unr> <out_dir> [hour] [material substrings...]
  bsp_lm_export.py check-glb <map.unr> <bsp.glb>        the replicated unr_bsp.py loop vs the port's glb
Default hour 12 (lobby). Material substrings default: GL_CA_floortile Kent_capet_m GL_CA_wall
"""
import json
import math
import os
import struct
import sys

import numpy as np

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, r'C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim\scripts')
sys.path.append(HERE)  # at the end: the scratchpad has a dis.py that would shadow the stdlib module
from ukx_parse import Package  # noqa: E402

ATLAS = 512  # FLightMapTexture::GetWidth/GetHeight 0x103365b0/0x103365c0 return 0x200

# ----------------------------------------------------------------------------------------------- package helpers


def vec_array(d, r):
    n = r.idx()
    a = np.frombuffer(d, dtype='<f4', count=n * 3, offset=r.p).reshape(n, 3).astype(np.float64)
    r.p += 12 * n
    return a


def read_bytes_array(r):
    n = r.idx()
    b = bytes(r.d[r.p:r.p + n])
    r.p += n
    return b


def read_lazy_bytes(r):
    """TLazyArray<BYTE> (Ver >= 62): INT SeekPos then TArray<BYTE>; 0x1037a940."""
    seek = r.i32()
    b = read_bytes_array(r)
    assert r.p == seek, (r.p, seek)
    return b


def read_model(p, e):
    """Full UModel (UModel::Serialize 0x105ef340, Ver 123 / Lic 28)."""
    r, d = p.r, p.r.d
    r.seek(e['offset'])
    end = e['offset'] + e['size']
    p.read_props()
    r.p += 25 + 16  # UPrimitive: FBox, FSphere
    m = {}
    m['vectors'] = vec_array(d, r)
    m['points'] = vec_array(d, r)
    nodes = []
    for _ in range(r.idx()):  # FBspNode
        plane = struct.unpack_from('<4f', d, r.p)
        r.p += 16 + 8  # Plane, ZoneMask
        r.p += 1  # NodeFlags
        vp, surf = r.idx(), r.idx()
        back, front, iplane, cb, rb = (r.idx() for _ in range(5))
        r.p += 16 + 16  # ExclusiveSphereBound + 16 unknown bytes
        zone0, zone1, nv = d[r.p], d[r.p + 1], d[r.p + 2]
        r.p += 3
        r.p += 8  # iLeaf[2]
        isec, ifirst, ilm = struct.unpack_from('<iii', d, r.p)
        r.p += 12
        nodes.append(dict(vp=vp, surf=surf, nv=nv, plane=plane, zone=(zone0, zone1), isection=isec,
                          ifirstvertex=ifirst, ilightmap=ilm, back=back, front=front, iplane=iplane))
    m['nodes'] = nodes
    surfs = []
    for _ in range(r.idx()):  # FBspSurf (0x44 in memory)
        mat = r.idx()
        flags = r.u32()
        base, normal, tu, tv = r.idx(), r.idx(), r.idx(), r.idx()
        ibrush = r.idx()
        actor = r.idx()
        plane = struct.unpack_from('<4f', d, r.p)
        r.p += 16
        lms = r.f32()
        ilm = r.i32()
        surfs.append(dict(mat=mat, flags=flags, base=base, normal=normal, tu=tu, tv=tv, actor=actor, plane=plane,
                          lightmapscale=lms, ilightmap=ilm, ibrushpoly=ibrush))
    m['surfs'] = surfs
    verts = []
    for _ in range(r.idx()):
        verts.append(r.idx())
        r.idx()  # iSide
    m['verts'] = verts
    m['numsharedsides'] = r.i32()
    nz = r.i32()
    m['numzones'] = nz
    zones = []
    for _ in range(nz):  # FZoneProperties 0x105e99b0: ZoneActor, Connectivity, Visibility, LastRenderTime
        za = r.idx()
        conn = r.u32() | (r.u32() << 32)
        vis = r.u32() | (r.u32() << 32)
        lrt = r.f32()
        zones.append(dict(actor=za, connectivity=conn, visibility=vis, lastrender=lrt))
    m['zones'] = zones
    m['polys'] = r.idx()
    bounds = []
    for _ in range(r.idx()):  # FBox 25 B
        bounds.append(struct.unpack_from('<6f', d, r.p))
        r.p += 25
    m['bounds'] = bounds
    n = r.idx()
    m['leafhulls'] = list(struct.unpack_from('<%di' % n, d, r.p))
    r.p += 4 * n
    leaves = []
    for _ in range(r.idx()):  # FLeaf 0x105e9a90: CI iZone, iPermeating, iVolumetric, QWORD VisibleZones
        a, b, c = r.idx(), r.idx(), r.idx()
        r.p += 8
        leaves.append((a, b, c))
    m['leaves'] = leaves
    m['lights'] = [r.idx() for _ in range(r.idx())]
    m['rootoutside'] = r.i32()
    m['linked'] = r.i32()
    # Ver >= 105: Sections.  L2 FBspVertex (40 B) = Position, U, V, U2, V2, Normal  [data]
    sections = []
    for _ in range(r.idx()):
        nvtx = r.idx()
        vtx = np.frombuffer(d, dtype='<f4', count=nvtx * 10, offset=r.p).reshape(nvtx, 10).copy()
        r.p += 40 * nvtx
        numnodes = r.i32()
        mat = r.idx()
        pflags = r.u32()
        inode = r.i32()
        ilmt = r.i32()
        sections.append(dict(vertices=vtx, numnodes=numnodes, mat=mat, polyflags=pflags, inode=inode, ilmtex=ilmt))
    m['sections'] = sections
    # Ver > 104: LightMaps
    lightmaps = []
    for _ in range(r.idx()):
        lm = {}
        lm['itex'], lm['isurf'], lm['izone'], lm['offx'], lm['offy'], lm['sizex'], lm['sizey'] = (r.idx() for _ in range(7))
        lm['world_to_lm'] = np.frombuffer(d, dtype='<f4', count=16, offset=r.p).reshape(4, 4).astype(np.float64)
        r.p += 64
        lm['base'] = np.array(struct.unpack_from('<3f', d, r.p)); r.p += 12
        lm['x'] = np.array(struct.unpack_from('<3f', d, r.p)); r.p += 12
        lm['y'] = np.array(struct.unpack_from('<3f', d, r.p)); r.p += 12
        bms = []
        for _ in range(r.idx()):  # FLightBitmap 0x1038d830
            bm = {}
            bm['actor'] = r.idx()
            bm['bits'] = read_bytes_array(r)
            bm['sizex'], bm['sizey'] = r.i32(), r.i32()
            bm['stride'] = r.i32()
            bm['minx'], bm['miny'], bm['maxx'], bm['maxy'] = r.i32(), r.i32(), r.i32(), r.i32()
            bms.append(bm)
        lm['bitmaps'] = bms
        lm['level'] = r.idx()
        lm['revision'] = r.i32()
        lightmaps.append(lm)
    m['lightmaps'] = lightmaps
    # Lic >= 9: TArray<FMultiLightMapTexture>
    multis = []
    for _ in range(r.idx()):
        texs = []
        for _ in range(r.idx()):  # FLightMapTexture 0x10308f5d
            t = {}
            t['model'] = r.idx()
            n = r.idx()
            t['lightmaps'] = list(struct.unpack_from('<%di' % n, d, r.p))
            r.p += 4 * n
            t['cacheid'] = r.u32() | (r.u32() << 32)
            t['revision'] = r.i32()
            st = {}
            st['mips'] = [read_lazy_bytes(r), read_lazy_bytes(r)]
            st['format'] = r.u8()
            st['width'], st['height'], st['revision'] = r.i32(), r.i32(), r.i32()
            t['static'] = st
            texs.append(t)
        n = r.idx()
        ints = list(struct.unpack_from('<%di' % n, d, r.p))
        r.p += 4 * n
        multis.append(dict(textures=texs, ints=ints))
    m['multis'] = multis
    m['_end'] = (r.p, end)
    assert r.p == end, m['_end']
    return m


def load_model(path):
    p = Package(path)
    models = [e for e in p.exports if p.class_name(e) == 'Model' and e['size'] > 0]
    e = max(models, key=lambda e: e['size'])
    return p, read_model(p, e)


# ----------------------------------------------------------------------------------------------- lighting tables

def falloff_table():
    """FLightingTables 0x10670de0: T[i] = (2r^3 - 3r^2 + 1) / r, r = sqrt((i+1)/4096)."""
    i = np.arange(4096, dtype=np.float64)
    r = np.sqrt((i + 1) / 4096.0)
    return (2 * r * r * r - 3 * r * r + 1) / r


TABLE = falloff_table()
KERNEL = np.array([[0x18, 0x28, 0x18], [0x28, 0x40, 0x28], [0x18, 0x28, 0x18]], dtype=np.int64)  # sum 320


def smooth_bitmap(bm):
    """SmoothLightBitmap 0x10671600: 3x3 filtered coverage (0..254) of the visibility bits, edge clamped.
    Returns int array [sizey][stride*8]."""
    sx, sy, stride = bm['sizex'], bm['sizey'], bm['stride']
    bits = np.frombuffer(bm['bits'], dtype=np.uint8)
    if sy == 0 or stride == 0 or len(bits) < stride * sy:
        return None
    rows = np.unpackbits(bits[:stride * sy].reshape(sy, stride), axis=1, bitorder='little').astype(np.int64)
    left = np.concatenate([rows[:, :1], rows[:, :-1]], axis=1)      # bit -1 := bit 0
    right = np.concatenate([rows[:, 1:], rows[:, -1:]], axis=1)     # bit w := bit w-1 (padded row)
    out = np.zeros_like(rows)
    for ky in range(3):
        rowsum = KERNEL[ky][0] * left + KERNEL[ky][1] * rows + KERNEL[ky][2] * right
        contrib = (rowsum * 255) // 320                            # table built as Sum*255/Total per row
        if ky == 0:        # kernel row 0 of input row y -> output row y-1 (row 0 -> row 0)
            out[0] += contrib[0]
            out[:-1] += contrib[1:]
        elif ky == 1:
            out += contrib
        else:              # kernel row 2 -> output row y+1 (last row -> last row)
            out[-1] += contrib[-1]
            out[1:] += contrib[:-1]
    return out


def fcolor(c):
    """FColor(FPlane) 0x10373aa0: clamp(floor(c*255), 0, 255)."""
    return tuple(int(min(255, max(0, math.floor(x * 255.0)))) for x in c)


def palette(c):
    """MergeLightMap 0x106712c0: 256-entry ramp, entry i ~ floor(i*c) in fixed point, saturated."""
    if c <= 0:
        return np.zeros(256, dtype=np.int64)
    n = int(math.floor(c * 256.0 + 0.5))
    ceil_log2 = 0 if n <= 1 else (n - 1).bit_length()  # appCeilLogTwo
    shift = 32 - ceil_log2
    step = int(math.floor((1 << shift) * c))
    acc = np.arange(256, dtype=np.int64) * step
    return np.minimum(255, acc >> shift)


def light_from_smi(L):
    return dict(pos=np.array(L.pos, dtype=np.float64), radius=float(L.radius), color=list(L.color), effect=L.effect,
                dir=np.array(L.dir, dtype=np.float64), name=L.name)


def bake_lightmap(lm, model, lights, ambient, sun_index=None, bsp_sun_color=None):
    """FLightMap::GetTextureData 0x10675bc0 -> uint8 RGB [sizey][sizex] (D3D order in memory is BGRA)."""
    sx, sy = lm['sizex'], lm['sizey']
    img = np.zeros((sy, sx, 3), dtype=np.int64)
    img[:, :] = ambient
    surf = model['surfs'][lm['isurf']]
    N = np.array(surf['plane'][:3], dtype=np.float64)
    seen_sun = 0
    for bm in lm['bitmaps']:
        L = lights.get(bm['actor'])
        if L is None:
            continue
        if L['effect'] == 19 and sun_index is not None:   # sun zone: bitmap k of the sun (order = index) [I];
            k = seen_sun                                   # non-sun zone: every bitmap applies (0x10675f3b)
            seen_sun += 1
            if k != sun_index:
                continue
        cov = smooth_bitmap(bm)
        if cov is None:
            continue
        x0, y0, x1, y1 = bm['minx'], bm['miny'], bm['maxx'], bm['maxy']
        w, h = x1 - x0 + 1, y1 - y0 + 1
        cov = cov[:h, :w]
        pos, radius, color = L['pos'], L['radius'], L['color']
        if L['effect'] == 19:                      # LE_Sunlight: byte = floor(cov * max(0, -N.Dir))
            k = max(0.0, -float(np.dot(N, L['dir'])))
            inten = np.floor(cov * k)
            if bsp_sun_color is not None:
                color = bsp_sun_color
        else:                                      # default: byte = round(cov * |h|/R * T[4093 d^2/R^2])
            if radius <= 0:
                continue
            ii = np.arange(x0, x1 + 1) + 0.5
            jj = np.arange(y0, y1 + 1) + 0.5
            P = lm['base'][None, None, :] + ii[None, :, None] * lm['x'][None, None, :] + jj[:, None, None] * lm['y'][None, None, :]
            D = P - pos[None, None, :]
            d2 = (D * D).sum(axis=2)
            hplane = abs(float(np.dot(N, pos - lm['base']))) / radius
            fixed = np.rint(d2 * (4093.0 * 4096.0 / (radius * radius))).astype(np.int64)
            ok = (fixed <= 0xffffff) & (cov > 0)
            idx = np.clip(fixed >> 12, 0, 4095)
            inten = np.where(ok, np.rint(cov * hplane * TABLE[idx]), 0)
        inten = np.clip(inten, 0, 255).astype(np.int64)
        for ch in range(3):
            img[y0:y1 + 1, x0:x1 + 1, ch] += palette(color[ch])[inten]
        img = np.minimum(img, 255)  # FColor::operator+= saturates per add
    return img.astype(np.uint8)


# ----------------------------------------------------------------------------------------------- DXT1

def decode_dxt1(data, w, h):
    """DXT1 -> uint8 RGBA [h][w] (numpy)."""
    bw, bh = w // 4, h // 4
    blk = np.frombuffer(data, dtype='<u2', count=bw * bh * 4).reshape(bh, bw, 4)
    c0 = blk[:, :, 0].astype(np.int64)
    c1 = blk[:, :, 1].astype(np.int64)
    bits = (blk[:, :, 2].astype(np.int64) | (blk[:, :, 3].astype(np.int64) << 16))

    def rgb(c):
        r = (c >> 11) & 31
        g = (c >> 5) & 63
        b = c & 31
        return np.stack([(r << 3) | (r >> 2), (g << 2) | (g >> 4), (b << 3) | (b >> 2)], axis=-1)
    p0, p1 = rgb(c0), rgb(c1)
    four = (c0 > c1)[..., None]
    p2 = np.where(four, (2 * p0 + p1) // 3, (p0 + p1) // 2)
    p3 = np.where(four, (p0 + 2 * p1) // 3, 0)
    pal = np.stack([p0, p1, p2, p3], axis=2)  # bh, bw, 4, 3
    out = np.zeros((h, w, 4), dtype=np.uint8)
    out[:, :, 3] = 255
    for py in range(4):
        for px in range(4):
            idx = (bits >> (2 * (py * 4 + px))) & 3
            out[py::4, px::4, :3] = np.take_along_axis(pal, idx[..., None, None].repeat(3, -1), axis=2)[:, :, 0]
    return out


def static_atlas(model, k):
    t = model['multis'][0]['textures'][k]
    st = t['static']
    assert st['format'] == 3, st['format']  # TEXF_DXT1
    return decode_dxt1(st['mips'][0], st['width'], st['height'])


def hour_index(hour, n):
    """FBspDrawList::Render 0x1066a11f: k = (int)(n * t / 24) % n."""
    return int(n * float(hour) / 24.0) % n


# ----------------------------------------------------------------------------------------------- map data (lights, zones)

def map_data(path, hour):
    import export_smlight as smi_export
    name = os.path.splitext(os.path.basename(path))[0]
    md = smi_export.MapData(name, hour)
    return md


def zone_ambient(md, model, izone):
    """Non-sun zone: FColor(FGetHSV(AmbientHue, AmbientSaturation, AmbientBrightness) * 0.5) (0x10675e7f).
    Sun zone: round(GetBSPAmbientColor(t)/2) per channel via the env manager (0x10675dd9) -> needs env_golden."""
    import env_golden
    zref = model['zones'][izone]['actor']
    name, zp = md.zones.get(zref, (None, {}))
    sun = zp.get('bSunAffect', True) if name else True
    if sun:
        return None, name
    h, s, v = zp.get('AmbientHue', 0), zp.get('AmbientSaturation', 255), zp.get('AmbientBrightness', 0)
    pl = env_golden.fgethsv(h, s, v)
    return fcolor([c * 0.5 for c in pl[:3]]), name


# ----------------------------------------------------------------------------------------------- unr_bsp.py loop replica

PF_INVISIBLE, PF_MASKED, PF_TRANSLUCENT, PF_MODULATED, PF_FAKEBACKDROP, PF_TWOSIDED, PF_PORTAL = 0x1, 0x2, 0x4, 0x40, 0x80, 0x100, 0x4000000
SKIP = PF_INVISIBLE | PF_FAKEBACKDROP | PF_PORTAL


def material_name(p, ref):
    return p.full_import(ref) if ref < 0 else p.obj_name(ref)


def iter_port_triangles(p, m):
    """Same node loop, filters and fan order as tools/map/unr_bsp.py main() (named map: no tile filter).
    Yields (material_name, node_index, [(point_index_in_node, P)] x3) per triangle, grouped like `groups`."""
    points, vectors, verts, surfs = m['points'], m['vectors'], m['verts'], m['surfs']
    for ni, n in enumerate(m['nodes']):
        nv, si = n['nv'], n['surf']
        if nv < 3 or si >= len(surfs):
            continue
        s = surfs[si]
        flags = s['flags']
        if flags & SKIP or flags & PF_MODULATED:
            continue
        full = material_name(p, s['mat'])
        if full and ('Portal' in full or full.endswith('.Invisible') or full.startswith('L2_Skies.')):
            continue
        P = points[[verts[n['vp'] + k] for k in range(nv)]]
        if (P.max(axis=0) - P.min(axis=0)).max() > 70000 or (np.abs(P[:, 2] + 16384) < 8).all():
            continue
        nrm = np.array(n['plane'][:3])
        for k in range(1, nv - 1):
            tri = (0, k, k + 1)
            a, b, c = P[tri[0]], P[tri[1]], P[tri[2]]
            if np.dot(np.cross(b - a, c - a), nrm) > 0:
                tri = (0, k + 1, k)
            yield full, ni, [(t, P[t]) for t in tri]


def node_uv2(m, n, P):
    """UModel::BuildRenderData 0x105ee860: (u,v) = P * WorldToLightMap; U2 = (OffsetX+u)/512, V2 = (OffsetY+v)/512.
    Returns (uv2 in the 512 atlas, uv local to the FLightMap in texels, lightmap index) or None when unlit."""
    if n['ilightmap'] < 0:
        return None
    lm = m['lightmaps'][n['ilightmap']]
    uvw = np.c_[P, np.ones(len(P))] @ lm['world_to_lm']
    local = uvw[:, :2]
    atlas = (local + np.array([lm['offx'], lm['offy']])) / ATLAS
    return atlas, local, n['ilightmap']


# ----------------------------------------------------------------------------------------------- commands

def cmd_stats(path):
    p, m = load_model(path)
    print('ver', p.ver, 'lic', p.lic, 'model end ok', m['_end'])
    print('nodes', len(m['nodes']), 'surfs', len(m['surfs']), 'zones', m['numzones'], 'sections', len(m['sections']),
          'lightmaps', len(m['lightmaps']), 'multis', len(m['multis']))
    szs = {}
    for lm in m['lightmaps']:
        szs[(lm['sizex'], lm['sizey'])] = szs.get((lm['sizex'], lm['sizey']), 0) + 1
    print('lightmap sizes', sorted(szs.items(), key=lambda kv: -kv[1]))
    for i, mu in enumerate(m['multis']):
        for k, t in enumerate(mu['textures']):
            st = t['static']
            print('multi %d tex %d: lightmaps %d rev %d static fmt %d %dx%d mips %s staticrev %d ints[:4] %s' % (
                i, k, len(t['lightmaps']), t['revision'], st['format'], st['width'], st['height'],
                [len(x) for x in st['mips']], st['revision'], mu['ints'][:4]))
    zs = {}
    for lm in m['lightmaps']:
        zs[lm['izone']] = zs.get(lm['izone'], 0) + 1
    print('lightmaps per zone', zs, 'zone actors', [(i, p.obj_name(z['actor'])) for i, z in enumerate(m['zones'])])
    acts = {}
    for lm in m['lightmaps']:
        for bm in lm['bitmaps']:
            acts[p.obj_name(bm['actor'])] = acts.get(p.obj_name(bm['actor']), 0) + 1
    print('bitmaps per light actor', sorted(acts.items(), key=lambda kv: -kv[1])[:40])


def cmd_verify(path, hour):
    p, m = load_model(path)
    md = map_data(path, hour)
    lights = {ref: light_from_smi(L) for ref, L in md.lights.items()}
    n = len(m['multis'][0]['textures'])
    k = hour_index(hour, n)
    atlas = static_atlas(m, k)
    tot = np.zeros(3)
    cnt = 0
    worst = []
    for i, lm in enumerate(m['lightmaps']):
        amb, zname = zone_ambient(md, m, lm['izone'])
        if amb is None:
            continue  # sun zone: editor bake uses the BSP sun colour per index; not verified here
        img = bake_lightmap(lm, m, lights, amb)
        ref = atlas[lm['offy']:lm['offy'] + lm['sizey'], lm['offx']:lm['offx'] + lm['sizex'], :3].astype(np.int64)
        d = np.abs(img.astype(np.int64) - ref)
        tot += d.reshape(-1, 3).sum(axis=0)
        cnt += d.shape[0] * d.shape[1]
        worst.append((d.max(), i, lm['sizex'], lm['sizey'], zname, p.obj_name(m['surfs'][lm['isurf']]['mat']),
                      material_name(p, m['surfs'][lm['isurf']]['mat']), amb, img.reshape(-1, 3).mean(axis=0).round(1).tolist(),
                      ref.reshape(-1, 3).mean(axis=0).round(1).tolist()))
    worst.sort(reverse=True)
    print('hour', hour, 'texture index', k, 'non-sun lightmaps', len(worst), 'texels', cnt)
    print('mean abs diff per channel vs DXT1 atlas', (tot / max(cnt, 1)).round(3).tolist())
    for w in worst[:12]:
        print('  max %3d lm %3d %3dx%-3d %-10s %-45s amb %s baked mean %s stored mean %s' % (w[0], w[1], w[2], w[3], w[4], w[6], w[7], w[8], w[9]))


def cmd_export(path, out, hour, mats):
    from PIL import Image
    os.makedirs(out, exist_ok=True)
    p, m = load_model(path)
    md = map_data(path, hour)
    lights = {ref: light_from_smi(L) for ref, L in md.lights.items()}
    n = len(m['multis'][0]['textures'])
    k = hour_index(hour, n)
    # 1. the 8 stored atlases (DXT1) and the full-precision rebuilt atlas for the non-sun zones
    for kk in range(n):
        Image.fromarray(static_atlas(m, kk)[:, :, :3]).save(os.path.join(out, 'lm_atlas_static_k%d.png' % kk))
    baked = static_atlas(m, k)[:, :, :3].copy()
    for lm in m['lightmaps']:
        amb, zname = zone_ambient(md, m, lm['izone'])
        if amb is None:
            continue
        img = bake_lightmap(lm, m, lights, amb)
        baked[lm['offy']:lm['offy'] + lm['sizey'], lm['offx']:lm['offx'] + lm['sizex']] = img
    Image.fromarray(baked).save(os.path.join(out, 'lm_atlas_baked_k%d.png' % k))
    # 2. per material, in the port's primitive order: TEXCOORD_1 (atlas uv) per emitted vertex
    groups = {}
    nodes_out = {}
    for full, ni, tri in iter_port_triangles(p, m):
        g = groups.setdefault(full, {'uv2': [], 'lit': []})
        node = m['nodes'][ni]
        P = np.array([t[1] for t in tri])
        r = node_uv2(m, node, P)
        if r is None:
            g['uv2'].extend([[0.0, 0.0]] * 3)
            g['lit'].extend([0] * 3)
        else:
            atlas_uv, local, ilm = r
            g['uv2'].extend(atlas_uv.round(6).tolist())
            g['lit'].extend([1] * 3)
            if ni not in nodes_out and any(s in (full or '') for s in mats):
                lm = m['lightmaps'][ilm]
                Pn = m['points'][[m['verts'][node['vp'] + j] for j in range(node['nv'])]]
                a_uv, loc, _ = node_uv2(m, node, Pn)
                crop = baked[lm['offy']:lm['offy'] + lm['sizey'], lm['offx']:lm['offx'] + lm['sizex']]
                fn = 'node_%03d_lm%03d_%s.png' % (ni, ilm, (full or 'bsp').split('.')[-1])
                Image.fromarray(crop).save(os.path.join(out, fn))
                amb, zname = zone_ambient(md, m, lm['izone'])
                nodes_out[ni] = dict(node=ni, surf=node['surf'], material=full, lightmap=ilm, zone=zname, png=fn,
                                     atlas_rect=[lm['offx'], lm['offy'], lm['sizex'], lm['sizey']],
                                     world_to_lightmap=lm['world_to_lm'].round(9).tolist(),
                                     base=lm['base'].tolist(), axis_x=lm['x'].tolist(), axis_y=lm['y'].tolist(),
                                     ambient=amb,
                                     lights=[lights[bm['actor']]['name'] for bm in lm['bitmaps'] if bm['actor'] in lights],
                                     vertices=Pn.round(3).tolist(), uv_atlas=a_uv.round(6).tolist(),
                                     uv_local_texels=loc.round(4).tolist(),
                                     uv_png=(loc / np.array([lm['sizex'], lm['sizey']])).round(6).tolist())
    doc = dict(map=os.path.basename(path), hour=hour, texture_index=k, atlas=ATLAS, atlas_png='lm_atlas_baked_k%d.png' % k,
               pixel='sat(2 * base_tex * lightmap)   (D3DTOP_MODULATE2X, lightmap stage with D3DTADDRESS_CLAMP; no vertex lighting)',
               materials=[dict(name=name, vertices=len(g['uv2']), uv2=g['uv2'], lit=g['lit']) for name, g in groups.items()],
               nodes=list(nodes_out.values()))
    json.dump(doc, open(os.path.join(out, 'bsp_lm_uv2.json'), 'w'), indent=0)
    print('materials', len(groups), 'vertices', sum(len(g['uv2']) for g in groups.values()), 'node pngs', len(nodes_out),
          '->', out)


def cmd_check_glb(path, glb):
    p, m = load_model(path)
    with open(glb, 'rb') as f:
        hdr = f.read(12)
        ln, typ = struct.unpack_from('<II', f.read(8))
        js = json.loads(f.read(ln))
        bl, bt = struct.unpack_from('<II', f.read(8))
        binb = f.read(bl)
    prims = js['meshes'][0]['primitives']
    mats = js['materials']
    mine = {}
    for full, ni, tri in iter_port_triangles(p, m):
        mine.setdefault(full, []).extend([t[1] for t in tri])
    print('glb primitives', len(prims), 'mine', len(mine))
    ok = True
    for pr, (full, pos) in zip(prims, mine.items()):
        acc = js['accessors'][pr['attributes']['POSITION']]
        bv = js['bufferViews'][acc['bufferView']]
        arr = np.frombuffer(binb, dtype='<f4', count=acc['count'] * 3, offset=bv.get('byteOffset', 0) + acc.get('byteOffset', 0)).reshape(-1, 3)
        pos = np.array(pos)
        gl = np.stack([pos[:, 0], pos[:, 2], pos[:, 1]], axis=1) * 0.01
        same = acc['count'] == len(pos) and np.abs(arr - gl).max() < 1e-3
        ok &= bool(same)
        print('%-50s glb %-5d mine %-5d %s' % (mats[pr['material']]['name'], acc['count'], len(pos), 'OK' if same else 'DIFF'))
    print('ORDER MATCH' if ok else 'ORDER MISMATCH')


if __name__ == '__main__':
    cmd = sys.argv[1]
    if cmd == 'stats':
        cmd_stats(sys.argv[2])
    elif cmd == 'verify':
        cmd_verify(sys.argv[2], float(sys.argv[3]) if len(sys.argv) > 3 else 12.0)
    elif cmd == 'export':
        hour = float(sys.argv[4]) if len(sys.argv) > 4 else 12.0
        mats = sys.argv[5:] or ['GL_CA_floortile', 'Kent_capet_m', 'GL_CA_wall']
        cmd_export(sys.argv[2], sys.argv[3], hour, mats)
    elif cmd == 'check-glb':
        cmd_check_glb(sys.argv[2], sys.argv[3])
