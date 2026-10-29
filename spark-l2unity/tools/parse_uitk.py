"""Extrai UXML (VisualTreeAsset) e USS (StyleSheet) serializados do cliente Unity 6000.3 (layout
reconstruido empiricamente, ver REA/hud/README.md). Uso: parse_uitk.py <pylib UnityPy> <saida>"""
import sys, os, struct, json, re, collections
sys.path.insert(0, sys.argv[1]); OUT = sys.argv[2]
import UnityPy
ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))) + '/'
ENUMS = json.load(open(ROOT + 'REA/raw/uielements_enums.json'))
PROP_ID = {v: k for k, v in ENUMS['StylePropertyId'].items()}
KEYWORD = {v: k.lower() for k, v in ENUMS['StyleValueKeyword'].items()}
SELTYPE = {v: k for k, v in ENUMS['StyleSelectorType'].items()}
UNITS = {0: '', 1: 'px', 2: '%', 3: 'deg', 4: 'grad', 5: 'rad', 6: 'turn', 7: 's', 8: 'ms'}
def kebab(n):
    return re.sub(r'(?<!^)(?=[A-Z])', '-', n).lower()

class R:
    def __init__(s, b, p=0): s.b = b; s.p = p
    def i32(s): v = struct.unpack_from('<i', s.b, s.p)[0]; s.p += 4; return v
    def i64(s): v = struct.unpack_from('<q', s.b, s.p)[0]; s.p += 8; return v
    def f32(s): v = struct.unpack_from('<f', s.b, s.p)[0]; s.p += 4; return v
    def str(s):
        n = s.i32()
        if n < 0 or n > 100000: raise ValueError('bad str len %d at %x' % (n, s.p - 4))
        v = s.b[s.p:s.p + n].decode('utf-8', 'replace'); s.p += n; s.align(); return v
    def align(s): s.p = (s.p + 3) & ~3
    def pptr(s): f = s.i32(); pid = s.i64(); return (f, pid)
    def header(s):
        s.pptr(); s.p += 1; s.align(); s.pptr(); return s.str()   # m_GameObject, m_Enabled, m_Script, m_Name

# ---------------- USS ----------------
def parse_uss(b):
    r = R(b); name = r.header()
    r.p += 2; r.align(); r.i32()           # flags, X
    nrules = r.i32(); rules = []
    for _ in range(nrules):
        ncs = r.i32(); css = []
        for _ in range(ncs):
            spec = r.i32(); nsel = r.i32(); sels = []
            for _ in range(nsel):
                nparts = r.i32(); parts = [(r.str(), r.i32()) for _ in range(nparts)]
                prev = r.i32(); sels.append((parts, prev))
            ruleIndex = r.i32(); css.append(dict(spec=spec, sels=sels, ruleIndex=ruleIndex))
        nprops = r.i32(); props = []
        for _ in range(nprops):
            pid = r.i32(); pname = r.str(); line = r.i32(); nv = r.i32()
            vals = [(r.i32(), r.i32()) for _ in range(nv)]
            props.append(dict(id=pid, name=pname, line=line, vals=vals))
        line = r.i32(); rules.append(dict(css=css, props=props, line=line))
    floats = [r.f32() for _ in range(r.i32())]
    dims = [(r.i32(), r.f32()) for _ in range(r.i32())]
    colors = [tuple(r.f32() for _ in range(4)) for _ in range(r.i32())]
    strings = [r.str() for _ in range(r.i32())]
    assets = [r.pptr() for _ in range(r.i32())]
    return dict(name=name, rules=rules, floats=floats, dims=dims, colors=colors, strings=strings, assets=assets, end=r.p, size=len(b))

def sel_text(cs):
    out = ''
    for parts, prev in cs['sels']:
        rel = {0: '', 1: ' > ', 2: ' '}.get(prev, ' ')
        t = ''
        for val, typ in parts:
            k = SELTYPE.get(typ, '?')
            t += {'Class': '.', 'PseudoClass': ':', 'ID': '#', 'RecursivePseudoClass': '::', 'Wildcard': '*', 'Type': ''}.get(k, '?') + val
        out = (out + rel + t) if out else t
    return out or '<inline>'

def val_text(sheet, t, i, assetname):
    try:
        if t == 1: return KEYWORD.get(i, 'kw%d' % i)
        if t == 2: return '%g' % sheet['floats'][i]
        if t == 3: u, v = sheet['dims'][i]; return '%g%s' % (v, UNITS.get(u, 'u%d' % u))
        if t == 4: c = sheet['colors'][i]; return 'rgba(%d, %d, %d, %.2f)' % (round(c[0]*255), round(c[1]*255), round(c[2]*255), c[3])
        if t == 5: return 'resource("%s")' % sheet['strings'][i]
        if t == 6: f, pid = sheet['assets'][i]; return 'asset(%s)' % assetname.get(pid, 'pathid:%d' % pid)
        if t == 7: return sheet['strings'][i]
        if t == 8: return 'var(%s)' % sheet['strings'][i]
        if t == 9: return '"%s"' % sheet['strings'][i]
        if t == 10: return 'fn:%s' % sheet['strings'][i]
        if t == 11: return ','
        if t == 12: return 'scalable-image#%d' % i
    except Exception: pass
    return '?(%d,%d)' % (t, i)

def uss_text(sheet, assetname):
    out = ['/* %s  (%d regras) */' % (sheet['name'], len(sheet['rules']))]
    for ri, rule in enumerate(sheet['rules']):
        sel = ', '.join(sel_text(cs) for cs in rule['css']) if rule['css'] else '/* inline rule #%d */' % ri
        out.append('%s {' % sel)
        for p in rule['props']:
            nm = p['name'] or kebab(PROP_ID.get(p['id'], 'prop-%d' % p['id']))
            out.append('    %s: %s;' % (nm, ' '.join(val_text(sheet, t, i, assetname) for t, i in p['vals'])))
        out.append('}')
    return '\n'.join(out)

# ---------------- UXML ----------------
def find_registry(b, start):
    # procura: int version(2), int count, int64 rid(-2)
    i = b.find(b'\x02\x00\x00\x00', start)
    while i >= 0:
        if b[i+8:i+16] == b'\xfe\xff\xff\xff\xff\xff\xff\xff' or b[i+8:i+16] == b'\xe8\x03\x00\x00\x00\x00\x00\x00':
            return i
        i = b.find(b'\x02\x00\x00\x00', i + 4)
    return -1

def parse_vea(r):
    e = {}
    e['type'] = r.str(); e['xmlns'] = (r.str(), r.str())
    e['id'] = r.i32(); e['parentRid'] = r.i32(); e['flags'] = r.i32()
    e['children'] = [r.i64() for _ in range(r.i32())]
    e['vta'] = r.pptr()
    e['nsdefs'] = [(r.str(), r.str()) for _ in range(r.i32())]
    e['props'] = [(r.str(), r.str()) for _ in range(r.i32())]
    e['ruleIndex'] = r.i32()
    e['classes'] = [r.str() for _ in range(r.i32())]
    e['sspaths'] = [r.str() for _ in range(r.i32())]
    e['stylesheets'] = [r.pptr() for _ in range(r.i32())]
    e['serializedData'] = r.i64()
    r.p += 1; r.align()
    return e

def parse_vta(b):
    r = R(b); name = r.header()
    reg = find_registry(b, r.p)
    if reg < 0: raise ValueError('registry not found')
    # campos fixos antes do registro
    r2 = R(b, reg - 4 * 6); inline = None; root_rid = None
    try:
        tail = R(b, reg - 24); inlineSheet = tail.pptr(); root_rid = tail.i64();
    except Exception: inlineSheet = (0, 0)
    r.p = reg; r.i32(); n = r.i32(); entries = {}; order = []
    for k in range(n):
        rid = r.i64(); cls = r.str(); ns = r.str(); asm = r.str()
        ent = dict(rid=rid, cls=cls, ns=ns, asm=asm); start = r.p
        try:
            if cls in ('VisualElementAsset', 'TemplateAsset'):
                ent.update(parse_vea(r))
                if cls == 'TemplateAsset':
                    try:
                        ent['templateAlias'] = r.str()
                        ent['slotUsages'] = [(r.str(), r.i32()) for _ in range(r.i32())]
                    except Exception: pass
            elif cls == '':
                pass
        except Exception as ex:
            ent['error'] = str(ex)
        # realinha no proximo rid (sequencial) por busca
        if k + 1 < n and (cls not in ('VisualElementAsset', 'TemplateAsset', '') or 'error' in ent or cls == 'TemplateAsset'):
            nxt = None
            for cand in ([1000] if rid < 0 else range(rid + 1, rid + 60)):
                pat = struct.pack('<q', cand)
                j = b.find(pat, start)
                while j >= 0:
                    ln = struct.unpack_from('<i', b, j + 8)[0]
                    if 0 < ln < 80 and all(32 <= c < 127 for c in b[j+12:j+12+ln]):
                        nxt = j; break
                    j = b.find(pat, j + 4)
                if nxt is not None: break
            if nxt is None: ent['realign_failed'] = True; entries[rid] = ent; order.append(rid); break
            r.p = nxt
        entries[rid] = ent; order.append(rid)
    return dict(name=name, inlineSheet=inlineSheet, root=root_rid, entries=entries, order=order)

def short(t):
    return t.split('.')[-1] if t.startswith('UnityEngine.UIElements.') else t

def uxml_text(vta, sheets_by_pid, inline_rules, assetname, vtaname):
    E = vta['entries']; out = []
    def emit(rid, depth):
        e = E.get(rid)
        if not e or 'type' not in e: out.append('  ' * depth + '<!-- rid %d ausente -->' % rid); return
        attrs = []
        for k, v in e['props']: attrs.append('%s="%s"' % (k, v.replace('"', '&quot;')))
        if e['classes']: attrs.append('class="%s"' % ' '.join(e['classes']))
        if e['ruleIndex'] >= 0 and inline_rules is not None and e['ruleIndex'] < len(inline_rules):
            attrs.append('style="%s"' % inline_rules[e['ruleIndex']])
        for f, pid in e['stylesheets']: attrs.append('uss="%s"' % sheets_by_pid.get(pid, 'pathid:%d' % pid))
        for p in e['sspaths']: attrs.append('src="%s"' % p)
        if e['cls'] == 'TemplateAsset':
            attrs.insert(0, 'template="%s"' % e.get('templateAlias', '?'))
        tag = 'ui:' + short(e['type']) if e['cls'] != 'TemplateAsset' else 'ui:Instance'
        if e['type'] == 'UnityEngine.UIElements.UXML':
            tag = 'ui:UXML'; attrs.append('xmlns:ui="UnityEngine.UIElements"')
        if 'error' in e: attrs.append('PARSE-ERROR="%s"' % e['error'])
        line = '  ' * depth + '<' + tag + (' ' + ' '.join(attrs) if attrs else '')
        if e['children']:
            out.append(line + '>')
            for c in e['children']: emit(c, depth + 1)
            out.append('  ' * depth + '</' + tag + '>')
        else: out.append(line + ' />')
    root = None
    for rid in vta['order']:
        e = E.get(rid, {})
        if e.get('type') == 'UnityEngine.UIElements.UXML' or (e.get('cls') == 'VisualElementAsset' and e.get('parentRid', 0) < 0):
            root = rid; break
    if root is None: root = vta['order'][0] if vta['order'] else None
    if root is not None: emit(root, 0)
    return '\n'.join(out)

if __name__ == '__main__':
    env = UnityPy.load(ROOT + 'L2_Data/resources.assets', ROOT + 'L2_Data/sharedassets0.assets', ROOT + 'L2_Data/sharedassets1.assets')
    assetname = {}; sheets = {}; vtas = []; errors = []
    for o in env.objects:
        if o.type.name in ('Texture2D', 'Sprite', 'Font'):
            try: assetname[o.path_id] = o.read(check_read=False).m_Name
            except Exception: pass
    for o in env.objects:
        if o.type.name != 'MonoBehaviour': continue
        d = o.read(check_read=False); sid = d.m_Script.path_id if d.m_Script else None
        raw = o.get_raw_data(); fn = o.assets_file.name.split('/')[-1]
        if sid == 11998:
            try: s = parse_uss(raw); s['pid'] = o.path_id; s['file'] = fn; sheets[(fn, o.path_id)] = s
            except Exception as ex: errors.append(('USS', d.m_Name, o.path_id, str(ex)))
        elif sid == 11995:
            try: v = parse_vta(raw); v['pid'] = o.path_id; v['file'] = fn; vtas.append(v)
            except Exception as ex: errors.append(('VTA', d.m_Name, o.path_id, str(ex)))
    os.makedirs(OUT + '/uxml', exist_ok=True); os.makedirs(OUT + '/uss', exist_ok=True)
    name_by_pid = {pid: s['name'] for (fn, pid), s in sheets.items()}
    used = collections.Counter()
    for (fn, pid), s in sheets.items():
        if s['name'] == 'inlineStyle': continue
        used[s['name']] += 1; nm = s['name'] + ('' if used[s['name']] == 1 else '_%d' % used[s['name']])
        open('%s/uss/%s.uss' % (OUT, nm), 'w', encoding='utf-8').write(uss_text(s, assetname))
    used = collections.Counter()
    index = []
    for v in vtas:
        inl = None
        for (fn, pid), s in sheets.items():
            if pid == v['inlineSheet'][1] and fn == v['file']:
                inl = []
                for rule in s['rules']:
                    inl.append(' '.join('%s: %s;' % (p['name'] or kebab(PROP_ID.get(p['id'], 'prop-%d' % p['id'])), ' '.join(val_text(s, t, i, assetname) for t, i in p['vals'])) for p in rule['props']))
        used[v['name']] += 1; nm = v['name'] + ('' if used[v['name']] == 1 else '_%d' % used[v['name']])
        txt = uxml_text(v, name_by_pid, inl, assetname, v['name'])
        open('%s/uxml/%s.uxml' % (OUT, nm), 'w', encoding='utf-8').write(txt)
        nel = sum(1 for e in v['entries'].values() if e['cls'] in ('VisualElementAsset', 'TemplateAsset'))
        nerr = sum(1 for e in v['entries'].values() if 'error' in e)
        index.append((nm, v['file'], v['pid'], nel, nerr, len(txt.split('\n'))))
    open(OUT + '/index.tsv', 'w', encoding='utf-8').write('uxml\tfile\tpath_id\telements\terrors\tlines\n' + '\n'.join('\t'.join(str(x) for x in r) for r in index))
    print('uss', len(sheets), 'vta', len(vtas), 'errors', len(errors)); print(errors[:10])
    bad = [s for s in sheets.values() if s['end'] + 20 < s['size']]
    print('uss incomplete parses', len(bad), [(s['name'], s['end'], s['size']) for s in bad[:8]])
    print('vta element errors', sum(r[4] for r in index), 'of', sum(r[3] for r in index))
