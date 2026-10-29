"""G8 (lobby): luz embutida (baked) por vertice das malhas estaticas de um mapa, como o cliente a recalcula ao carregar
(Engine.dll CalculateStaticMeshLighting 0x10677fa0 + InterpolateSunLight 0x10679960; estudo em
scratchpad/baked_light_re.md), para StreamingAssets/L2Web/cache/map/<mapa>_smlight.json. Le os pacotes cifrados direto
(l2anim/scripts/ukx_parse.py); o UStaticMeshInstance guarda um ColorStream RGBA por vertice na ordem do VertexStream da
malha (= a ordem do glb do build_statics.py).

Uso (python -I):
  export_smlight.py verify [--map Lobby] [--limit N]           recomputa e compara com o que o mapa gravou
  export_smlight.py dump   [--map Lobby] --actor Nome [--out f] cores de um ator (e conferencia de contagens)
  export_smlight.py all    [--map Lobby] --out f [--hour 12]    cores de todos os StaticMeshActor com instancia usavel
  export_smlight.py hours  [--map Lobby] --out f                 parte estatica (luzes) + intensidade do sol por mapa k
        (RenderStaticMesh refaz CalculateStaticMeshLighting + InterpolateSunLight a cada ShadowTick [O hourly_relight_re.md]:
        o cliente recompoe static + floor(I_k x w x 0,5 x S(t)) com as curvas da hora; I_k gravado como byte = I x 127)
"""
import base64
import glob
import json
import math
import os
import struct
import sys

L2ANIM = r'C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim'
CLIENT = r'C:\Program Files (x86)\Lineage II Interlude'
RAWCACHE = r'C:\Users\Clayton\workspace-claude\L2Unity-workspace\shared\StreamingAssets-L2Web\cache\raw'
sys.path.insert(0, os.path.join(L2ANIM, 'scripts'))
import unr_inventory  # noqa: E402,F401  (installs the fast XOR decrypt + nested structs on ukx_parse)
import ukx_parse  # noqa: E402
import env_golden  # noqa: E402  (FGetHSV and the TimeEnv curve interpolation)

ukx_parse.Package.keep_refs = True
STATE_FRAME = 0x02000000

# ----------------------------------------------------------------------------------------------- packages

_pk = {}


def package(name, kind):
    key = (name.lower(), kind)
    if key not in _pk:
        sub = {'map': ('maps', '.unr'), 'usx': ('staticmeshes', '.usx'), 'u': ('system', '.u')}[kind]
        path = os.path.join(CLIENT, sub[0], name + sub[1])
        if not os.path.exists(path):
            hits = [h for h in glob.glob(os.path.join(CLIENT, sub[0], '*' + sub[1]))
                    if os.path.basename(h).lower() == (name + sub[1]).lower()]
            path = hits[0] if hits else path
        _pk[key] = ukx_parse.Package(path)
    return _pk[key]


def read_props(p, e):
    r = p.r
    r.seek(e['offset'])
    if e['flags'] & STATE_FRAME:
        node = r.idx()
        r.idx()
        r.p += 8
        r.i32()
        if node:
            r.idx()
    return p.read_props()


# ----------------------------------------------------------------------------------------------- UStaticMesh

def read_static_mesh(p, e):
    """UStaticMesh::Serialize (Engine 0x103108c5), Ver 123: UPrimitive (props, FBox 25 B, FSphere 16 B), Sections
    (TArray<FStaticMeshSection> 14 B each), FBox, VertexStream (TArray<{FVector Pos, FVector Normal}> + Revision),
    ColorStream and AlphaStream (TArray<FColor B,G,R,A serialised as R,G,B,A> + Revision)."""
    props = read_props(p, e)
    r = p.r
    r.p += 25 + 16
    nsec = r.idx()
    sections = [struct.unpack_from('<i5H', r.d, r.p + 14 * k) for k in range(nsec)]
    r.p += 14 * nsec + 25
    nv = r.idx()
    verts = [struct.unpack_from('<6f', r.d, r.p + 24 * k) for k in range(nv)]
    r.p += 24 * nv + 4

    def colors():
        n = r.idx()
        raw = r.d[r.p:r.p + 4 * n]
        r.p += 4 * n + 4
        return [(raw[4 * k], raw[4 * k + 1], raw[4 * k + 2], raw[4 * k + 3]) for k in range(n)]  # R,G,B,A
    color, alpha = colors(), colors()
    return dict(props=props, sections=sections, verts=verts, color=color, alpha=alpha,
                use_vertex_color=bool(props.get('UseVertexColor', False)))


_mesh = {}


def mesh_by_ref(ref):
    """'Castle_Kent_s.Hall_Side_Wall' or 'Pkg.Group.Name' -> parsed UStaticMesh (cached)."""
    if ref not in _mesh:
        parts = ref.split('.')
        p = package(parts[0], 'usx')
        e = next(e for e in p.exports if e['name'] == parts[-1] and p.class_name(e) == 'StaticMesh')
        _mesh[ref] = read_static_mesh(p, e)
    return _mesh[ref]


# ----------------------------------------------------------------------------------------------- UStaticMeshInstance

def read_smi(p, e):
    """UStaticMeshInstance::Serialize (Engine 0x1030d292 -> 0x106f7770), Ver 123 / licensee 28:
    UObject props ('None'), FRawColorStream ColorStream (TArray<FColor> + INT Revision), TArray<FStaticMeshLightInfo>
    Lights (+0x34), TArray<FStaticMeshLightInfo> SunLights (+0x40, LicenseeVer>3), UObject* LodInstance[2]
    (+0x68/+0x6c, LicenseeVer>11). FStaticMeshLightInfo = {UObject* LightActor, TArray<BYTE> VisibilityBits, INT Applied}."""
    props = read_props(p, e)
    r = p.r
    n = r.idx()
    raw = r.d[r.p:r.p + 4 * n]
    r.p += 4 * n
    rev = r.i32()

    def lights():
        out = []
        for _ in range(r.idx()):
            ref = r.idx()
            nb = r.idx()
            bits = bytes(r.d[r.p:r.p + nb])
            r.p += nb
            out.append(dict(ref=ref, bits=bits, applied=r.i32()))
        return out
    l1, l2 = lights(), lights()
    lod = (r.idx(), r.idx())
    assert r.p == e['offset'] + e['size'], 'StaticMeshInstance size mismatch'
    return dict(props=props, colors=[(raw[4 * k], raw[4 * k + 1], raw[4 * k + 2], raw[4 * k + 3]) for k in range(n)],
                revision=rev, lights=l1, sun_lights=l2, lod=lod)


# ----------------------------------------------------------------------------------------------- math

U2R = math.pi / 32768.0


def rot_matrix(rot):
    """FRotationMatrix (row-vector convention: world = v * M), rotator (Pitch, Yaw, Roll) in 65536 units."""
    pitch, yaw, roll = (x * U2R for x in rot)
    sp, cp, sy, cy, sr, cr = math.sin(pitch), math.cos(pitch), math.sin(yaw), math.cos(yaw), math.sin(roll), math.cos(roll)
    return [[cp * cy, cp * sy, sp],
            [sr * sp * cy - cr * sy, sr * sp * sy + cr * cy, -sr * cp],
            [-(cr * sp * cy + sr * sy), cy * sr - cr * sp * sy, cr * cp]]


def rot_vector(rot):
    pitch, yaw = rot[0] * U2R, rot[1] * U2R
    return (math.cos(pitch) * math.cos(yaw), math.cos(pitch) * math.sin(yaw), math.sin(pitch))


def vec_rotation(v):
    """FVector::Rotation (pitch/yaw in rotator units, roll 0)."""
    yaw = int(math.atan2(v[1], v[0]) * 32768 / math.pi)
    pitch = int(math.atan2(v[2], math.hypot(v[0], v[1])) * 32768 / math.pi)
    return (pitch, yaw, 0)


def local_to_world(pr):
    """AActor::LocalToWorld = T(-PrePivot) * S(DrawScale*DrawScale3D) * R(Rotation) * T(Location)  [I: UE2 layout]."""
    loc = pr.get('Location', [0, 0, 0])
    rot = pr.get('Rotation', [0, 0, 0])
    ds = pr.get('DrawScale', 1.0)
    ds3 = pr.get('DrawScale3D', [1.0, 1.0, 1.0])
    pp = pr.get('PrePivot', [0, 0, 0])
    m = rot_matrix(rot)
    s = [ds * ds3[0], ds * ds3[1], ds * ds3[2]]

    def xf_point(v):
        x, y, z = ((v[0] - pp[0]) * s[0], (v[1] - pp[1]) * s[1], (v[2] - pp[2]) * s[2])
        return tuple(x * m[0][c] + y * m[1][c] + z * m[2][c] + loc[c] for c in range(3))

    def xf_normal(n):  # same matrix with w=0 (no inverse transpose), then SafeNormal - as the engine does
        x, y, z = n[0] * s[0], n[1] * s[1], n[2] * s[2]
        w = [x * m[0][c] + y * m[1][c] + z * m[2][c] for c in range(3)]
        ln = math.sqrt(sum(a * a for a in w))
        return tuple(a / ln for a in w) if ln > 1e-8 else (0.0, 0.0, 0.0)
    return xf_point, xf_normal


def fcolor(rgb):
    """FColor(FPlane) (0x10373aa0): clamp(appFloor(c*255), 0, 255) per channel; W=0 -> A=0."""
    return tuple(min(255, max(0, math.floor(c * 255.0))) for c in rgb)


def sat_add(a, b):
    """FColor::operator+= (0x103316e0): per-channel saturating byte add."""
    return tuple(min(255, x + y) for x, y in zip(a, b))


# ----------------------------------------------------------------------------------------------- lights (FDynamicLight)

LIGHT_DEFAULTS = dict(LightType=1, LightBrightness=64.0, LightRadius=64.0, LightHue=0, LightSaturation=255,
                      LightPeriod=32, LightCone=128, LightEffect=0)   # Engine.u class Light defaults [O]
CLASS_DEFAULTS = {'NMovableSunLight': dict(LightEffect=19, bSunlightColor=True, bDirectional=True)}  # Engine.u [O]


class Env:
    """TimeEnv0 curves at a fixed hour (lobby: Env.int StartTime = 12, frozen)."""

    def __init__(self, hour):
        cfg = json.load(open(os.path.join(L2ANIM, 'out', 're', 'env', 'env_config.json'), encoding='utf-8'))
        self.t = hour
        self.cur = cfg['TimeEnv0.INT']

    def plane(self, section):  # GetColorPlane_<section> = lerp(FGetHSV) * lerp(Bri)/255 (spec 08 s3.1)
        pl, _ = env_golden.hsv_plane(self.cur[section]['chaves'], self.t)
        return pl[:3] if pl else [0.0, 0.0, 0.0]

    def color(self, section):
        c = env_golden.color(self.cur[section]['chaves'], self.t)
        return c or [0, 0, 0]

    def sun_dir(self):  # direction towards the sun (UL2NEnvManager::GetSunLightDirection)
        return env_golden.sun_direction(self.t)


class Light:
    def __init__(self, cls, name, pr, env, level_brightness=1.0):
        d = dict(LIGHT_DEFAULTS)
        d.update(CLASS_DEFAULTS.get(cls, {}))
        d.update(pr)
        self.name, self.cls, self.p = name, cls, d
        self.effect = d['LightEffect']
        self.pos = tuple(d.get('Location', [0, 0, 0]))
        rot = d.get('Rotation', [0, 0, 0])
        if cls == 'NMovableSunLight' and env:          # ANMovableSunLight::Tick: Rotation = (-SunDir).Rotation()
            rot = vec_rotation([-x for x in env.sun_dir()])
        self.dir = rot_vector(rot)
        self.radius = 25.0 * (d['LightRadius'] + 1.0)  # ALight::WorldLightRadius (0x10343130)
        self.cone = d['LightCone']
        lt = d['LightType']
        factor = 1.0 if lt == 1 else 0.0               # LT_Steady=1; others time-varying / 0 (None, Backdrop=6) [O]
        if d.get('bSunlightColor') and env and lt not in (8, 9):
            # FDynamicLight::Update sun path: +0x38 = GetBaseColorPlane_HSVActorSunLight * Bri/255 (vtbl 0x74/0x78)
            base = env.plane('HSVActorLight')
            self.color = [c * factor * level_brightness for c in base]
        else:
            hsv = env_golden.fgethsv(d['LightHue'], d['LightSaturation'], 255)
            self.color = [c * d['LightBrightness'] / 255.0 * factor * level_brightness for c in hsv[:3]]
        self.dynamic = bool(d.get('bDynamicLight', False))   # FDynamicLight+0x24 = Actor+0x64 bit 9
        self.static = not self.dynamic and lt != 0

    def intensity(self, P, N):
        """FDynamicLight::SampleIntensity (0x10670640). P world position, N world unit normal."""
        e = self.effect
        if e == 19:  # LE_Sunlight
            d = N[0] * self.dir[0] + N[1] * self.dir[1] + N[2] * self.dir[2]
            return 0.0 if d >= 0.0 else -2.0 * d
        L = (self.pos[0] - P[0], self.pos[1] - P[1], self.pos[2] - P[2])
        d2 = L[0] * L[0] + L[1] * L[1] + L[2] * L[2]
        dist = math.sqrt(d2)
        ndl = L[0] * N[0] + L[1] * N[1] + L[2] * N[2]
        R = self.radius
        if e == 17:  # LE_Cylinder
            if dist >= R:
                return 0.0
            v = 1.0 - (L[0] * L[0] + L[1] * L[1]) / (R * R)
            return 2.0 * max(v, 0.0)
        if e == 13:  # LE_NonIncidence
            return 2.0 * math.sqrt(1.02 - dist / R) if (ndl > 0 and dist < R) else 0.0
        if e == 20:  # LE_QuadraticNonIncidence
            return 2.0 * (1.02 - d2 / (R * R)) if (ndl > 0 and d2 < R * R) else 0.0
        base = falloff(dist, R, ndl)
        if e in (8, 12):  # LE_StaticSpot / LE_Spotlight
            if base <= 0:
                return 0.0
            c0 = 1.0 - self.cone / 256.0
            k = 1.0 / (1.0 - c0)
            cs = -(L[0] * self.dir[0] + L[1] * self.dir[1] + L[2] * self.dir[2])
            if cs > 0 and c0 * c0 * d2 < cs * cs:
                s = (k * cs) / dist - k * c0
                return base * s * s
            return 0.0
        return base


def falloff(dist, radius, ndl):
    """FUN_10670550: 2 * cos(theta) * (1 - 3r^2 + 2r^3), r = d/R, for N.L>0 and d<=R (cos = N.L/d)."""
    if ndl <= 0.0 or radius < dist:
        return 0.0
    r = dist / radius
    f = 2.0 * r * r * r - 3.0 * r * r + 1.0
    return abs(ndl / radius) * (f / r) * 2.0


# ----------------------------------------------------------------------------------------------- the lighting

def bit(bits, i):
    return (bits[i >> 3] >> (i & 7)) & 1 if bits else 0


def calc_static(mesh, inst, actor_pr, lights_by_ref, xf):
    """CalculateStaticMeshLighting (0x10677fa0) for one (mesh, instance) pair. Returns list of (R,G,B,A)."""
    xf_point, xf_normal = xf
    nv = len(mesh['verts'])
    out = [(0, 0, 0, 0)] * nv
    scale = actor_pr.get('ScaleGlow', 1.0) * 0.5
    world = [(xf_point(v[:3]), xf_normal(v[3:])) for v in mesh['verts']]
    for li in inst['lights']:
        L = lights_by_ref.get(li['ref'])
        if L is None or not L.static:
            continue
        lc = [c * scale for c in L.color]
        for i in range(nv):
            if bit(li['bits'], i):
                P, N = world[i]
                s = L.intensity(P, N)
                out[i] = sat_add(out[i], fcolor([s * lc[0], s * lc[1], s * lc[2]]) + (0,))
    return finish(mesh, out), world


def finish(mesh, out):
    mc = mesh['color']
    res = []
    for i, c in enumerate(out):
        r, g, b, _ = c
        if mesh['use_vertex_color']:
            r, g, b = r * mc[i][0] // 255, g * mc[i][1] // 255, b * mc[i][2] // 255
        res.append((r, g, b, mc[i][3] if i < len(mc) else 255))
    return res


def sun_time_index(t, n):
    """FUN_106f40d0 / GetTimeForIndex (0x106f4010): time(i) = (i + 0.5) * 24/n."""
    idx = n - 1
    for i in range(n):
        if t < (i + 0.5) * 24.0 / n:
            break
        idx = i
    return idx


def interpolate_sun(mesh, inst, world, colors, lights_by_ref, env):
    """InterpolateSunLight (0x10679960): adds the two bracketing sun-visibility samples of inst+0x40."""
    n = len(inst['sun_lights'])
    if n < 1:
        return colors
    t = env.t
    i0 = sun_time_index(t, n)
    i1 = (i0 + 1) % n
    t0, t1 = (i0 + 0.5) * 24.0 / n, (i1 + 0.5) * 24.0 / n
    while t1 < t0:
        t1 += 24.0
    tt = t
    while tt < t0:
        tt += 24.0
    f = (tt - t0) / (t1 - t0)
    sun_col = env.plane('HSVStaticMeshLight')     # GetColorPlane_HSVStaticMeshSunLight(t) (vtbl 0x7c)
    acc = [(0, 0, 0, 0)] * len(world)
    for k, idx in enumerate((i0, i1)):
        li = inst['sun_lights'][idx]
        L = lights_by_ref.get(li['ref'])
        if L is None or not L.static:
            continue
        w = (1.0 - f) if k == 0 else f
        lc = [c * w * 0.5 for c in sun_col]
        for v in range(len(world)):
            if bit(li['bits'], v):
                s = L.intensity(*world[v])
                acc[v] = sat_add(acc[v], fcolor([s * lc[0], s * lc[1], s * lc[2]]) + (0,))
    out = [sat_add(c, a) for c, a in zip(colors, acc)]
    return finish(mesh, out)


# ----------------------------------------------------------------------------------------------- map scan

class MapData:
    def __init__(self, name, hour):
        self.p = p = package(name, 'map')
        self.env = Env(hour)
        self.lights, self.zones, self.actors, self.insts = {}, {}, {}, {}
        for i, e in enumerate(p.exports):
            c = p.class_name(e)
            if c in ('Light', 'Spotlight', 'NMovableSunLight', 'TriggerLight', 'SunLight'):
                self.lights[i + 1] = Light(c, e['name'], read_props(p, e), self.env)
            elif c in ('ZoneInfo', 'LevelInfo', 'SkyZoneInfo'):
                self.zones[i + 1] = (e['name'], read_props(p, e))
            elif c in ('StaticMeshActor', 'MovableStaticMeshActor'):
                self.actors[e['name']] = (i + 1, read_props(p, e))
            elif c == 'StaticMeshInstance':
                self.insts[i + 1] = e

    def zone_of(self, pr):
        reg = pr.get('Region')
        zr = reg.get('_ref_Zone') if isinstance(reg, dict) else None
        name, zp = self.zones.get(zr, ('LevelInfo0', {}))
        return name, zp

    def actor_hours(self, name):
        """Parte estatica (CalculateStaticMeshLighting) e, por mapa de sol k, a intensidade SampleIntensity(P, N) dos vertices
        com o bit do sol ligado (InterpolateSunLight sem a cor e sem o peso), para o cliente recompor por hora."""
        o = self.actor_lighting(name)
        if not o or not o['instance_usable'] or o['use_vertex_color']:
            return o
        idx, pr = self.actors[name]
        mesh = mesh_by_ref(o['mesh'])
        iref = pr.get('_ref_StaticMeshInstance')
        inst = read_smi(self.p, self.insts[iref])
        xf = local_to_world(pr)
        cols, world = calc_static(mesh, inst, pr, self.lights, xf)
        o['static'] = cols
        suns = []
        if o['sun_zone']:
            for li in inst['sun_lights']:
                L = self.lights.get(li['ref'])
                arr = bytearray(len(world))
                if L is not None and L.static:
                    for v in range(len(world)):
                        if bit(li['bits'], v):
                            arr[v] = max(0, min(255, int(round(L.intensity(*world[v]) * 127.0))))
                suns.append(bytes(arr))
        o['sun'] = suns
        return o

    def actor_lighting(self, name):
        idx, pr = self.actors[name]
        ref = pr.get('_ref_StaticMesh')
        mref = self.p.full_import(ref) if ref and ref < 0 else None
        if not mref:
            return None
        mesh = mesh_by_ref(mref)
        iref = pr.get('_ref_StaticMeshInstance')
        zname, zp = self.zone_of(pr)
        sun_zone = zp.get('bSunAffect', True)       # ZoneInfo default bSunAffect=True (Engine.u) [O]
        out = dict(actor=name, mesh=mref, nverts=len(mesh['verts']), zone=zname, sun_zone=bool(sun_zone),
                   use_vertex_color=mesh['use_vertex_color'], unlit=bool(pr.get('bUnlit', False)))
        inst = read_smi(self.p, self.insts[iref]) if iref in self.insts else None
        usable = (inst is not None and len(inst['colors']) == len(mesh['verts'])
                  and all(len(li['bits']) == (len(mesh['verts']) + 7) // 8 for li in inst['lights']))
        out['instance'] = self.p.exports[iref - 1]['name'] if iref else None
        out['instance_usable'] = usable                # RenderStaticMesh 0x1067ae9b: else instance ignored
        xf = local_to_world(pr)
        if usable:
            cols, world = calc_static(mesh, inst, pr, self.lights, xf)
            if sun_zone:
                cols = interpolate_sun(mesh, inst, world, cols, self.lights, self.env)
            out['stored_applied'] = [li['applied'] for li in inst['lights']]
            out['stored_colors'] = inst['colors']
        else:
            cols = None
        out['colors'] = cols
        # D3D ambient (RenderStaticMesh 0x1067b310..0x1067b36e): FColor(zone ambient + AmbientGlow)/2, or
        # GetStaticMeshAmbientColor(t)/2 in sun zones (vtbl 0xd0); unlit -> 255 and no 2x
        if out['unlit']:
            amb = (255, 255, 255)
        elif sun_zone:
            amb = tuple(c >> 1 for c in self.env.color('StaticMeshAmbient'))
        else:
            av = zp.get('AmbientVector', [0.0, 0.0, 0.0])
            g = pr.get('AmbientGlow', 0) / 255.0
            amb = tuple(c >> 1 for c in fcolor([a + g for a in av]))
        out['d3d_ambient'] = amb
        m2 = mesh['color'] if mesh['use_vertex_color'] else mesh['alpha']
        if cols:
            # fixed-function: diffuse = sat(Emissive=COLOR1 + Ambient*COLOR2 [+ dynamic lights]); stage MODULATE2X
            out['lit'] = [tuple(min(255, c[k] + amb[k] * m2[i][k] // 255) for k in range(3)) for i, c in enumerate(cols)]
        return out


# ----------------------------------------------------------------------------------------------- pskx check

def pskx_check(path, mesh):
    sys.path.insert(0, os.path.join(L2ANIM, 'scripts'))
    import l2glb
    ch = l2glb.read_chunks(path)
    raw, _, npts = ch['PNTS0000']
    pts = [struct.unpack_from('<3f', raw, 12 * k) for k in range(npts)]
    raw, wsize, nw = ch['VTXW0000']
    big = npts > 65536
    wp = [struct.unpack_from('<i' if big else '<H', raw, k * wsize)[0] for k in range(nw)]
    worst = 0.0
    for i, v in enumerate(mesh['verts'][:nw]):
        q = pts[wp[i]]
        worst = max(worst, abs(q[0] - v[0]), abs(-q[1] - v[1]), abs(q[2] - v[2]))  # umodel mirrors Y
    return dict(pskx=path, wedges=nw, points=npts, vertex_stream=len(mesh['verts']), same_count=nw == len(mesh['verts']),
                max_pos_err=worst)


STATICS = os.path.join(os.path.dirname(RAWCACHE), 'statics')


def glb_check(path, mesh):
    """build_statics.py glb: one POSITION accessor shared by all primitives, vertex i = pskx wedge i,
    position = (X, Z, Y) * 0.01 of the UE vertex. Compare it with UStaticMesh.VertexStream."""
    b = open(path, 'rb').read()
    jl = struct.unpack_from('<I', b, 12)[0]
    gj = json.loads(b[20:20 + jl])
    bin_off = 20 + jl + 8
    acc = gj['accessors'][gj['meshes'][0]['primitives'][0]['attributes']['POSITION']]
    bv = gj['bufferViews'][acc['bufferView']]
    o = bin_off + bv.get('byteOffset', 0) + acc.get('byteOffset', 0)
    n = acc['count']
    worst = 0.0
    for i, v in enumerate(mesh['verts'][:n]):
        x, y, z = struct.unpack_from('<3f', b, o + 12 * i)
        worst = max(worst, abs(x - v[0] * 0.01), abs(y - v[2] * 0.01), abs(z - v[1] * 0.01))
    shared = len({p['attributes']['POSITION'] for p in gj['meshes'][0]['primitives']}) == 1
    return dict(glb=path, glb_vertices=n, vertex_stream=len(mesh['verts']), same_count=n == len(mesh['verts']),
                one_shared_vertex_buffer=shared, max_pos_err_m=worst)


def find_glb(mref):
    p = os.path.join(STATICS, mref + '.glb')
    return p if os.path.exists(p) else None


def find_pskx(mref):
    parts = mref.split('.')
    hits = glob.glob(os.path.join(RAWCACHE, parts[0].lower(), 'StaticMesh', parts[-1] + '.pskx'))
    hits += glob.glob(os.path.join(RAWCACHE, '*', 'StaticMesh', parts[-1] + '.pskx'))
    return hits[0] if hits else None


# ----------------------------------------------------------------------------------------------- CLI

def arg(name, default=None):
    return sys.argv[sys.argv.index(name) + 1] if name in sys.argv else default


def main():
    mode = sys.argv[1] if len(sys.argv) > 1 else 'verify'
    md = MapData(arg('--map', 'Lobby'), float(arg('--hour', '12')))
    if mode == 'verify':
        limit = int(arg('--limit', '100000'))
        stats = dict(instances=0, vertices=0, exact=0, off_by_1=0, worse=0, max_err=0)
        for name, (idx, pr) in sorted(md.actors.items()):
            iref = pr.get('_ref_StaticMeshInstance')
            if iref not in md.insts:
                continue
            inst = read_smi(md.p, md.insts[iref])
            if not inst['lights'] or not all(li['applied'] == 1 for li in inst['lights']):
                continue
            ref = pr.get('_ref_StaticMesh')
            mesh = mesh_by_ref(md.p.full_import(ref))
            if len(mesh['verts']) != len(inst['colors']):
                continue
            cols, world = calc_static(mesh, inst, pr, md.lights, local_to_world(pr))
            if md.zone_of(pr)[1].get('bSunAffect', True) and '--no-sun' not in sys.argv:
                cols = interpolate_sun(mesh, inst, world, cols, md.lights, md.env)
            stats['instances'] += 1
            for a, b in zip(cols, inst['colors']):
                e = max(abs(a[k] - b[k]) for k in range(3))
                stats['vertices'] += 1
                stats['max_err'] = max(stats['max_err'], e)
                stats['exact' if e == 0 else 'off_by_1' if e == 1 else 'worse'] += 1
            if stats['instances'] >= limit:
                break
        print(json.dumps(stats, indent=1))
    elif mode == 'hours':
        res = []
        for n in sorted(md.actors):
            o = md.actor_hours(n)
            if not o:
                continue
            for k in ('stored_colors', 'lit', 'stored_applied', 'instance'):
                o.pop(k, None)
            if o.get('colors'):
                o['colors'] = base64.b64encode(bytes(x for c in o['colors'] for x in c)).decode()
            if o.get('static'):
                o['static'] = base64.b64encode(bytes(x for c in o['static'] for x in c)).decode()
            if o.get('sun') is not None:
                o['sun'] = [base64.b64encode(b).decode() for b in o['sun']]
            res.append(o)
        txt = json.dumps(res, default=list)
        open(arg('--out'), 'w', encoding='utf-8').write(txt)
        print('wrote', arg('--out'), len(res), 'com sol', sum(1 for o in res if o.get('sun')))
    elif mode in ('dump', 'all'):
        names = [arg('--actor')] if mode == 'dump' else sorted(md.actors)
        res = []
        for n in names:
            o = md.actor_lighting(n)
            if not o:
                continue
            if mode == 'dump':
                pk = arg('--pskx') or find_pskx(o['mesh'])
                if pk:
                    o['pskx_check'] = pskx_check(pk, mesh_by_ref(o['mesh']))
                gl = find_glb(o['mesh'])
                if gl:
                    o['glb_check'] = glb_check(gl, mesh_by_ref(o['mesh']))
            if mode == 'all':
                for k in ('stored_colors', 'lit'):
                    o.pop(k, None)
                if o['colors']:
                    o['colors'] = base64.b64encode(bytes(x for c in o['colors'] for x in c)).decode()
            res.append(o)
        txt = json.dumps(res if mode == 'all' else res[0], default=list)
        if arg('--out'):
            open(arg('--out'), 'w', encoding='utf-8').write(txt)
            print('wrote', arg('--out'), len(res))
        else:
            o = res[0]
            print(json.dumps({k: v for k, v in o.items() if k not in ('colors', 'stored_colors', 'lit')}, default=list))
            for i in range(min(8, o['nverts'])):
                print(i, mesh_by_ref(o['mesh'])['verts'][i][:3], 'calc', o['colors'][i] if o['colors'] else None,
                      'stored', o.get('stored_colors', [None] * (i + 1))[i], 'lit', (o.get('lit') or [None] * (i + 1))[i])


if __name__ == '__main__':
    main()
