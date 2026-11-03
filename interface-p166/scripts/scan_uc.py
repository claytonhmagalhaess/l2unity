"""Varre .uc de duas versoes (Interlude exportado e P166) e lista, por classe,
os callbacks On* sobrescritos, usos de IsKeyDown/IK_*, tooltips e natives chamadas.
uso: python -I scan_uc.py <dir_interlude> <dir_p166> <saida.json>"""
import json, os, re, sys

FN = re.compile(r'^\s*(?:simulated\s+|final\s+|static\s+)*(event|function)\s+(?:\w+\s+)?(On\w+)\s*\(', re.I)
KEY = re.compile(r'IsKeyDown\s*\(\s*(IK_\w+)', re.I)
IK = re.compile(r'\b(IK_\w+)\b')
TIP = re.compile(r'\b(SetTooltip\w*|SetTooltipString|MakeTooltip\w*|ReturnTooltipInfo|SetToolTip\w*)\s*\(', re.I)
WHEEL = re.compile(r'MouseWheel|IK_MouseWheel\w*', re.I)
CLASS = re.compile(r'^\s*class\s+(\w+)\s+extends\s+(\w+)', re.I | re.M)

def read(p):
    b = open(p, 'rb').read()
    for enc in ('utf-8', 'cp949', 'latin-1'):
        try:
            return b.decode(enc)
        except UnicodeDecodeError:
            pass

def scan(d):
    out = {}
    for f in sorted(os.listdir(d)):
        if not f.lower().endswith('.uc'):
            continue
        t = read(os.path.join(d, f))
        lines = t.splitlines()
        m = CLASS.search(t)
        rec = {'extends': m.group(2) if m else None, 'lines': len(lines), 'cb': {}, 'keys': {}, 'ik': {}, 'tip': [], 'wheel': []}
        incomment = False
        for i, l in enumerate(lines, 1):
            s = l.strip()
            if s.startswith('//'):
                continue
            mm = FN.match(l)
            if mm:
                rec['cb'].setdefault(mm.group(2), []).append(i)
            for k in KEY.findall(l):
                rec['keys'].setdefault(k, []).append(i)
            for k in IK.findall(l):
                rec['ik'].setdefault(k, []).append(i)
            if TIP.search(l):
                rec['tip'].append(i)
            if WHEEL.search(l):
                rec['wheel'].append(i)
        out[f[:-3]] = rec
    return out

il = scan(sys.argv[1])
p = scan(sys.argv[2])
json.dump({'interlude': il, 'p166': p}, open(sys.argv[3], 'w', encoding='utf-8'), indent=1)
