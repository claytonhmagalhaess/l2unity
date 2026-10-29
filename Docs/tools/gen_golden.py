"""Gera as fixtures golden dos testes de paridade (Assets/L2Web/Tests/Editor/Golden) a partir das evidencias do l2anim
(out/re/*.json) e dos arquivos do cliente original. Nada e copiado a mao: rode de novo quando as evidencias mudarem.

Uso: python -I Docs/tools/gen_golden.py [raiz_l2anim] [pasta_do_cliente]
"""
import hashlib
import importlib.util
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
PROJECT = os.path.dirname(os.path.dirname(HERE))
OUT = os.path.join(PROJECT, 'Assets', 'L2Web', 'Tests', 'Editor', 'Golden')
L2ANIM = sys.argv[1] if len(sys.argv) > 1 else r'C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim'
CLIENT = sys.argv[2] if len(sys.argv) > 2 else r'C:\Program Files (x86)\Lineage II Interlude'
RE = os.path.join(L2ANIM, 'out', 're')


def load(name):
    return json.load(open(os.path.join(RE, name), encoding='utf-8'))


def module(name):
    spec = importlib.util.spec_from_file_location(name, os.path.join(L2ANIM, 'scripts', name + '.py'))
    m = importlib.util.module_from_spec(spec)
    sys.path.insert(0, os.path.join(L2ANIM, 'scripts'))
    spec.loader.exec_module(m)
    return m


def write(name, data):
    os.makedirs(OUT, exist_ok=True)
    with open(os.path.join(OUT, name), 'w', encoding='utf-8', newline='\n') as f:
        json.dump(data, f, ensure_ascii=False, indent=1)
    print('gravado', name)


def requests():
    """Os 245 envios do engine.dll (95): metodo, servidor, opcode, sub-opcode e formato."""
    out = []
    for r in load('request_table.json'):
        for s in r['sends']:
            out.append({
                'method': r['method'].split(') ')[-1] if r['method'].startswith('(') else r['method'],
                'server': s['server'],
                'opcode': int(s['opcode'], 16),
                'sub': int(s['sub'], 16) if s['sub'] else None,
                'format': s['format'],
                'note': s.get('note', ''),
            })
    return out


def protocol_block():
    """Bloco de 0x100 bytes do ProtocolVersion (FUN_10401dc0): engine.dll 0x1087e5e8 XOR chave de 8 bytes em 0x1087e6ec."""
    pe = module('pe_util').PE(os.path.join(CLIENT, 'System', 'engine.dll'))
    data = pe.b[pe.off(0x1087e5e8):pe.off(0x1087e5e8) + 0x100]
    key = pe.b[pe.off(0x1087e6ec):pe.off(0x1087e6ec) + 8]
    rev = pe.b[pe.off(0x1087f1ec + 8):pe.off(0x1087f1ec + 8) + 16].decode()
    return {
        'engine_sha256': hashlib.sha256(pe.b).hexdigest(),
        'revision': int(rev.split()[1]),
        'format': pe.b[pe.off(0x1087f1ec):pe.off(0x1087f1ec) + 4].decode(),
        'block': bytes(data[i] ^ key[i % 8] for i in range(0x100)).hex(),
    }


def game_static_key():
    """Metade fixa da chave do GameCrypt, lida do pseudocodigo do tratador do VersionCheck (FUN_1040d000)."""
    import re
    src = open(os.path.join(RE, 'decomp_all', 'engine', '00020.c'), encoding='utf-8', errors='replace').read()
    body = src[src.index('// ==== 1040d000'):]
    body = body[:body.index('// ==== ', 10)]
    a = int(re.search(r'local_4c = (0x[0-9a-f]+);', body).group(1), 16)
    b = int(re.search(r'local_48 = (0x[0-9a-f]+);', body).group(1), 16)
    return {'staticKey': (a.to_bytes(4, 'little') + b.to_bytes(4, 'little')).hex(), 'fonte': 'FUN_1040d000 local_4c/local_48'}


def decomp(module_name, addr):
    """Pseudocodigo de uma funcao em out/re/decomp_all/<modulo> (pelo index.tsv)."""
    import re
    d = os.path.join(RE, 'decomp_all', module_name)
    for line in open(os.path.join(d, 'index.tsv'), encoding='utf-8'):
        f = line.rstrip('\n').split('\t')
        if f[0] == addr:
            src = open(os.path.join(d, f[2]), encoding='utf-8', errors='replace').read()
            body = src[src.index('// ==== ' + addr):]
            m = re.search(r'\n// ==== (?!' + addr + ')', body)
            return body[:m.start()] if m else body
    raise KeyError(addr)


def chat_prefixes():
    """Prefixos de canal do chat (93 §8.1): texto de cada um lido do NWindow.dll (tabela de ponteiros em 0x10350e18) e o
    tipo de chat que o FUN_10139c50 atribui a cada endereco. '＂' e comparado direto no codigo."""
    import re
    pe = module('pe_util').PE(os.path.join(CLIENT, 'System', 'NWindow.dll'))
    body = decomp('nwindow', '10139c50')
    region = body[body.index('switchD_10139cdc_default:'):]
    out = []
    pending = []
    for tok in re.finditer(r"PTR_DAT_(1035[0-9a-f]{4})|iVar5 = (0x[0-9a-f]+|\d+);|L'(.)'", region):
        if tok.group(1):
            pending.append(int(tok.group(1), 16))
        elif tok.group(3):
            pending.append(tok.group(3))
        else:
            typ = int(tok.group(2), 0)
            for p in pending:
                text = p if isinstance(p, str) else pe.wstr(pe.dword(p), 8)
                if not any(o['text'] == text for o in out):
                    out.append({'text': text, 'type': typ, 'addr': p if isinstance(p, str) else hex(p)})
            pending = []
            if typ == 0:
                break
    return {'prefixes': out, 'command': [pe.wstr(pe.dword(a), 4) for a in (0x10350dbc, 0x10350dc0)],
            'tabType': {'0': 0, '1': 8, '2': 3, '3': 4, '4': 9}, 'fonte': 'NWindow.dll FUN_10139c50 / 0x10350e18'}


def antiflood():
    """Constantes do anti-flood do chat (construtor FUN_10136b70)."""
    import re
    body = decomp('nwindow', '10136b70')
    vals = [int(v, 0) for v in re.findall(r'= (0x[0-9a-f]+|\d+);', body)]
    chk = decomp('nwindow', '10138860')
    color = int(re.search(r'FUN_10170650\(0x3c4,(0x[0-9a-f]+)\)', chk).group(1), 16)
    return {'constructor': vals, 'blockMsgColor': color, 'fonte': 'NWindow.dll FUN_10136b70, FUN_10138860'}


def obscene():
    """Lista do obscene-e.dat (decifrado pelo l2dec413.py) e a mascara (sysstring 740 do out/re/strings.json)."""
    import struct
    d = module('l2dec413').decrypt(open(os.path.join(CLIENT, 'System', 'obscene-e.dat'), 'rb').read())
    n, p, words = struct.unpack_from('<i', d, 0)[0], 4, []
    for _ in range(n):
        p += 4
        ln = d[p]
        p += 1
        words.append(d[p:p + ln - 1].decode('ascii'))
        p += ln
    return {'words': words, 'mask': load('strings.json')['sysstring']['740']}


def texts():
    """L: amostra de 100 ids de cada tabela (espalhados) mais os ids usados nos outros itens, de out/re/strings.json e
    out/re/systemmsg_full.json (o systemmsg completo: texto, grupo, cor, som e tipo)."""
    ss = load('strings.json')['sysstring']
    full = load('systemmsg_full.json')
    used_ss = [140, 141, 149, 153, 154, 155, 740, 805]
    used_sm = [964, 965, 966, 1078]
    ids = sorted(int(k) for k in ss)
    pick_ss = sorted(set(ids[::max(1, len(ids) // 100)][:100]) | set(used_ss))
    by_id = {r['id']: r for r in full}
    mids = sorted(by_id)
    pick_sm = sorted(set(mids[::max(1, len(mids) // 100)][:100]) | set(used_sm))
    # N4 (decisao do usuario): textos oficiais = systemmsg-e.dat da copia _back (2.083 registros); o instalado tem os
    # textos editados pelo servidor (2.380). O parser e conferido contra o systemmsg_full.json (instalado).
    official = systemmsg_records(os.path.join(CLIENT + '_back', 'System', 'systemmsg-e.dat'))
    oid = {r['id']: r for r in official}
    pick_off = sorted(set(sorted(oid)[::max(1, len(oid) // 100)][:100]) | set(used_sm))
    fields = ('msg', 'group', 'col', 'snd', 'voice', 'typ')
    return {
        'sysstringCount': len(ss),
        'sysstring': {str(i): ss[str(i)] for i in pick_ss},
        'systemmsgCount': len(full),
        'systemmsg': {str(i): {k: by_id[i][k] for k in fields} for i in pick_sm},
        'officialCount': len(official),
        'official': {str(i): {k: oid[i][k] for k in fields} for i in pick_off},
    }


def systemmsg_records(path):
    """Mesmo layout do scripts/systemmsg_parse.py do l2anim."""
    import struct
    b = module('l2dec413').decrypt(open(path, 'rb').read())

    def cstr(p):
        b0 = b[p]
        p += 1
        v = b0 & 0x3F
        if b0 & 0x40:
            sh = 6
            while True:
                x = b[p]
                p += 1
                v |= (x & 0x7F) << sh
                sh += 7
                if not x & 0x80:
                    break
        if b0 & 0x80:
            v = -v
        if v == 0:
            return '', p
        if v > 0:
            return b[p:p + v - 1].decode('cp1252', 'replace'), p + v
        return b[p:p - 2 * v - 2].decode('utf-16-le', 'replace'), p - 2 * v

    n = struct.unpack_from('<i', b, 0)[0]
    p, recs = 4, []
    for _ in range(n):
        id_, unk = struct.unpack_from('<ii', b, p)
        p += 8
        msg, p = cstr(p)
        group, = struct.unpack_from('<i', b, p)
        p += 4
        col = list(b[p:p + 4])
        p += 4
        snd, p = cstr(p)
        voice, p = cstr(p)
        p += 20
        scr, p = cstr(p)
        typ, p = cstr(p)
        recs.append(dict(id=id_, msg=msg, group=group, col=col, snd=snd, voice=voice, typ=typ))
    return recs


def native_layout():
    """G: controles das telas nativas (out/re/native_screen_layout.json) com as formulas avaliadas em 1024x768 e
    1920x1080. Janela: relativa a tela (W, H = tela); controle: relativo a janela (W, H = tamanho da janela). 'alt' = o
    1o valor vale no modo OTP; aqui vai o 2o (sem OTP). Valor None = calculado em execucao (fica None)."""
    d = load('native_screen_layout.json')

    def ev(v, W, H):
        if isinstance(v, list) and v and v[0] == 'alt':
            v = v[2]
        if v is None or isinstance(v, (int, float)):
            return v
        expr = v.replace('GSEKScreenX', 'W').replace('GSEKScreenY', 'H')
        return int(round(eval(expr, {'__builtins__': {}}, {'W': W, 'H': H})))

    out = {}
    for res in ((1024, 768), (1920, 1080)):
        key = '%dx%d' % res
        out[key] = {}
        for scr, fns in d.items():
            rows = []
            win = None
            for fn in fns:
                for c in fn['controls']:
                    rect = next((o[1] for o in c['ops'] if o[0] == 'rect'), None)
                    size = next((o[1] for o in c['ops'] if o[0] == 'size'), None)
                    own = c['class'].startswith('(a própria janela')
                    if own and win is None:
                        W, H = res
                    else:
                        W, H = (win[2], win[3]) if win else res
                    r = [ev(v, W, H) for v in rect] if rect else None
                    if own and win is None and r:
                        win = r
                    rows.append({'class': c['class'], 'id': c.get('id'), 'rect': r,
                                 'size': [int(v) for v in size] if size else None,
                                 'labels': [s for s in c.get('strings', []) if s.startswith('rótulo')],
                                 'textures': [s for s in c.get('strings', []) if s.startswith(('L2UI', 'l2ui'))]})
            out[key][scr] = rows
    return out


def logos():
    """Logos do NCConsole::OnCreate (desmontagem): tamanhos float em 0x1027de70 (start_logo, quadrado) e
    0x1027de10/0x1027de14 (minilogo); y da ancora TopCenter do start_logo = imediato de 'mov edx, imm32' em 0x1013f239."""
    import struct
    pe = module('pe_util').PE(os.path.join(CLIENT, 'System', 'NWindow.dll'))
    f = lambda a: struct.unpack('<f', pe.b[pe.off(a):pe.off(a) + 4])[0]
    o = pe.off(0x1013f239)
    assert pe.b[o] == 0xBA, 'esperado mov edx, imm32'
    return {'startLogo': [f(0x1027de70), f(0x1027de70)], 'startLogoAnchorY': struct.unpack('<i', pe.b[o + 1:o + 5])[0],
            'miniLogo': [f(0x1027de10), f(0x1027de14)]}


XDAT_WINDOWS = ['StatusWnd', 'TargetStatusWnd', 'AbnormalStatusWnd', 'ChatWnd', 'SystemMsgWnd', 'ChatFilterWnd', 'MenuWnd',
                'SystemMenuWnd', 'RadarContainerWnd', 'RestartMenuWnd', 'DialogBox', 'InventoryWnd', 'ShortcutWnd']


def xdat_rects():
    """F1/F2: retangulo de cada controle (relativo a janela, que fica em (0, 0) com o tamanho do xdat), calculado do
    out/re/interface_layout.json com a semantica da 93 §2: anchor.this = ponto do proprio controle (NONE = TopLeft),
    anchor.parent = ponto do controle de referencia (anchor.ctrl, ou a janela-mae unk4); size_percent sobre a mae;
    superName herda as propriedades nao definidas."""
    lay = load('interface_layout.json')
    defs = {w['name']: w for w in lay['windows']}
    AL = {'NONE': (0, 0), 'TOP_LEFT': (0, 0), 'TOP_CENTER': (.5, 0), 'TOP_RIGHT': (1, 0), 'CENTER_LEFT': (0, .5),
          'CENTER': (.5, .5), 'CENTER_RIGHT': (1, .5), 'BOTTOM_LEFT': (0, 1), 'BOTTOM_CENTER': (.5, 1), 'BOTTOM_RIGHT': (1, 1)}

    def is_set(v):
        return v is not None and v != 'undefined' and v != -9999

    out = {}
    for wn in defs:
        w = defs[wn]
        W, H = w.get('size') or [0, 0]
        by = {}

        def collect(n):
            for c in n.get('children', []):
                by.setdefault(c['name'], c)
                collect(c)
        collect(w)

        def inherit(c, depth=0):
            sn = c.get('superName')
            if not is_set(sn) or depth > 20:
                return c
            sup = sn.split('.')[-1]
            b0 = by.get(sup) or defs.get(sup)
            if b0 is None or b0 is c:
                return c
            b = dict(inherit(b0, depth + 1))
            for k, v in c.items():
                if is_set(v) or k in ('name', 'unk4'):
                    b[k] = v
            return b

        ctrl = {k: inherit(v) for k, v in by.items()}
        memo = {}

        def rect(name, depth=0):
            if name in memo:
                return memo[name]
            c = ctrl.get(name)
            if c is None or depth > 40:
                return (0, 0, W, H)
            par = rect(c['unk4'], depth + 1) if c.get('unk4') in ctrl else (0, 0, W, H)
            sp, sz = c.get('size_percent'), c.get('size')
            if sp is not None:
                cw, ch = par[2] * sp[0] + (sz[0] if sz else 0), par[3] * sp[1] + (sz[1] if sz else 0)
            elif sz is not None:
                cw, ch = sz
            else:
                cw = ch = 0
            x, y = par[0], par[1]
            a = c.get('anchor')
            if a:
                ref = (a.get('ctrl') or '').split('.')[-1]
                rf = rect(ref, depth + 1) if ref and ref in ctrl and ref != name else par
                own, tgt = AL.get(a.get('this'), (0, 0)), AL.get(a.get('parent'), (0, 0))
                x = rf[0] + rf[2] * tgt[0] + a.get('x', 0) - cw * own[0]
                y = rf[1] + rf[3] * tgt[1] + a.get('y', 0) - ch * own[1]
            memo[name] = (x, y, cw, ch)
            return memo[name]

        out[wn] = {'size': [W, H], 'rects': {n: [round(v, 2) for v in rect(n)] for n in ctrl}}
    return out


def xdat_fields():
    """F3: os 64 campos unk* com o nome XML (out/re/xdat_field_names.json)."""
    d = load('xdat_field_names.json')
    return [{'class': c, 'unk': u, 'xml': v['xml']} for c, f in d.items() if not c.startswith('_') for u, v in f.items()]


def windows_info():
    """F4: secoes e chaves do WindowsInfo.ini gravado pelo original (out/re/runtime/WindowsInfo.ini, sessao do 87), na
    ordem do arquivo."""
    import re
    text = open(os.path.join(RE, 'runtime', 'WindowsInfo.ini'), encoding='latin-1').read()
    out = []
    for m in re.finditer(r'^\[(.+)\]\s*\n((?:[^\[\n][^\n]*\n?)*)', text, re.M):
        keys = [l.split('=')[0].strip() for l in m.group(2).splitlines() if '=' in l]
        out.append({'section': m.group(1), 'keys': keys})
    return out


def option_ini():
    """J6: secoes e chaves do Option.ini gravado pelo original (out/re/runtime/Option.ini, sessao do 87), na ordem."""
    out = []
    for line in open(os.path.join(RE, 'runtime', 'Option.ini'), encoding='latin-1').read().splitlines():
        line = line.strip()
        if line.startswith('[') and line.endswith(']'):
            out.append({'section': line[1:-1], 'keys': []})
        elif out and '=' in line:
            out[-1]['keys'].append(line.split('=')[0].strip())
    return out


def received():
    """C: os 361 pacotes que o engine.dll trata (out/re/game_map.json): tabela, opcode, nome, aCis, efeito, eventos e janelas."""
    out = []
    for x in load('game_map.json')['packets']:
        out.append({'table': x['table'], 'opcode': int(x['opcode'], 16), 'name': x.get('name'), 'acis': x.get('acis'),
                    'effect': x.get('effect'), 'events': sorted((x.get('events') or {}).keys()), 'windows': x.get('windows') or [],
                    'formats': x.get('formats') or []})
    return out


def skillgrp():
    """J4: Skillgrp.dat com o layout do FUN_1044e890 (strings = int com o tamanho em bytes + UTF-16): contagem, quantos
    tem debuff e uma amostra de (id, nivel, debuff, icone)."""
    import struct
    b = module('l2dec413').decrypt(open(os.path.join(CLIENT, 'System', 'skillgrp.dat'), 'rb').read())
    p = 4
    recs = []

    def ws(p):
        n, = struct.unpack_from('<i', b, p)
        return b[p + 4:p + 4 + n].decode('utf-16-le'), p + 4 + n
    for _ in range(struct.unpack_from('<i', b, 0)[0]):
        sid, lv = struct.unpack_from('<2i', b, p)
        p += 32
        _, p = ws(p)
        _, p = ws(p)
        icon, p = ws(p)
        deb, = struct.unpack_from('<i', b, p)
        p += 24
        recs.append((sid, lv, deb, icon))
    sample = recs[::300] + [r for r in recs if (r[0], r[1]) in ((102, 1), (1160, 1), (1204, 2), (1040, 3))]
    return {'count': len(recs), 'debuffs': sum(1 for r in recs if r[2]), 'consumed': p,
            'sample': [{'id': r[0], 'level': r[1], 'debuff': r[2], 'icon': r[3]} for r in sample]}


def shortcuts():
    """J1: tabela de teclas do Interface.xdat (out/re/interface_layout.json "shortcuts"): estado, teclas e comando."""
    out = []
    for st in load('interface_layout.json')['shortcuts']:
        for a in st['actions']:
            out.append({'state': st['unk1'], 'keys': [a['key_1'], a['key_2'], a['key_3']], 'action': a['action']})
    return out


def camera():
    """M2: camera pelas fontes do cliente: user.ini oficial (pasta _back, [Engine.LineagePlayerController] e as ligacoes)
    e o pseudocodigo do ALineagePlayerController::CalcBehindView (250 + zoom, 30 antes do fim, zoom inicial -20, pitch
    limitado a [-15000, 0x4000]) e do UInput::Exec (zoom minimo -200)."""
    import re
    import struct
    t = module('l2dec413').decrypt(open(os.path.join(CLIENT + '_back', 'System', 'user.ini'), 'rb').read()).decode('latin-1')
    ini = dict(l.split('=', 1) for l in t.splitlines() if '=' in l and not l.startswith(';'))
    body = decomp('engine', '10314d8f')
    z0 = int(re.search(r'\+ 0x994\) = (0x[0-9a-f]+);', body).group(1), 16)
    retry = open(os.path.join(RE, 'decomp_all', 'engine', 'retry.c'), encoding='utf-8', errors='replace').read()
    zmin = struct.unpack('<f', int(re.search(r'\(iVar6 \+ 0x994\) = (0xc3480000);', retry).group(1), 16).to_bytes(4, 'little'))[0]
    presets = []
    for i in range(int(float(ini['FixedDefaultViewNum']))):
        presets.append({k: float(ini['FixedDefaultCamera%s[%d]' % (k, i)]) for k in ('Yaw', 'Pitch', 'Dist', 'ViewHeight', 'HidePlayer', 'DisableZoom')})
    return {
        'traceBase': 250.0 if '+ 250.0' in body else None, 'beforeHit': 30.0 if '- 30.0' in body else None,
        'zoomInitial': struct.unpack('<f', z0.to_bytes(4, 'little'))[0],
        'pitchMin': -15000 if 'iVar4 < -15000' in body else None, 'pitchMax': 0x4000 if '0x4000 < iVar4' in body else None,
        'zoomMin': zmin, 'zoomMax': float(ini['MaxZoomingDist']), 'wheelStep': float(ini['MouseWheelDown'].split('Speed=')[1]),
        'mouseSpeed': float(ini['MouseX'].split('Speed=')[1]), 'fov': float(ini['DefaultFOV']),
        'autoTracking': float(ini['AutoTrackingPawnSpeed']), 'presets': presets,
        'keys': {k: ini.get(k) for k in ('Home', 'PageUp', 'PageDown', 'End', 'MiddleMouse')},
    }


def movement():
    """M1: constantes do UGameEngine::OnValidateLocation (correcao de 3 s = 0x40400000, ignora abaixo de 2, reposiciona acima
    de 200) e o fator 12 (walkanimframe) do mesmo tratador."""
    import re
    import struct
    body = decomp('engine', '1030b668')
    t = int(re.search(r'\+ 0x6d0\) = (0x[0-9a-f]+);', body).group(1), 16)
    lo, hi = re.search(r'\(([0-9.]+) < fVar1\) && \(fVar1 < ([0-9.]+)\)', body).groups()
    return {'catchup': struct.unpack('<f', t.to_bytes(4, 'little'))[0], 'idleMin': float(lo), 'snap': float(hi)}


def combat():
    """M3: constantes do ataque no pseudocodigo do engine.dll: APawn::SwordAttackProcess (rate * 1.1, tween 0.1 / rate) e
    APawn::BowAttackProcess (tween 0.2 / rate)."""
    import re
    sw = decomp('engine', '103031e8')
    bw = decomp('engine', '103078d3')
    return {'meleeRate': float(re.search(r'fStack_1c \* ([0-9.]+);', sw).group(1)),
            'meleeTween': float(re.search(r'\(0,fStack_18,fVar8,([0-9.]+) /', sw).group(1)),
            'bowTween': float(re.search(r'\(([0-9.]+) / \(fVar7 \* \*\(float \*\)\(this \+ 0x6b0\)\)\)', bw).group(1))}


def skills():
    """M4: escolha do lead (antecedencia do disparo) no APawn::InitSkillProcess (out/re/InitSkillProcess_APawn.txt,
    desmontagem): sem efeito visual, cast_style ebx(=2)/10/5/8 -> 0,4; 3/12 -> 0; 14 -> 2; resto 0,15; com efeito, o
    FlyingTime se >= 0,15."""
    import re
    asm = open(os.path.join(RE, 'InitSkillProcess_APawn.txt'), encoding='utf-8', errors='replace').read()
    ebx = int(re.search(r'mov\s+ebx, (\d+)', asm).group(1))
    lines = [l for l in asm.splitlines() if re.match(r'\s*104ef[0-9a-f]{3}\s', l)]
    seg = chr(10).join(l for l in lines if 0x6de <= int(l.split()[0][-3:], 16) < 0x736)
    cmps = [int(v, 0) for v in re.findall(r'cmp\s+eax, (0x[0-9a-f]+|\d+)', seg)]
    consts = [float(v) for v in re.findall(r'const=([0-9.]+)', seg)]
    return {'projectile': [ebx] + cmps[:3], 'physical': cmps[3:5], 'special': cmps[5], 'specialLead': consts[0],
            'defaultLead': consts[1], 'projectileLead': consts[2], 'flyMin': 0.15}


def commands():
    """Comandos de barra (I4, 02 §3.7): tabela do commandname-e.dat (l2dec413) e, para cada id, os passos possiveis do
    switch FUN_1013a320 do NWindow.dll. Cada chamada vira um token: pedido de rede pelo slot da vtable do UNetworkHandler
    (rtti_engine 0x108b2224 + request_table) com os argumentos literais, DoAction (FUN_10170860) = act:n, mensagem de
    sistema (FUN_10170650 ou FString em GL2GameData+off) = msg:n, evento (FUN_10005c30) = ev:n, dialogo (FUN_1000dd30) =
    dlg:n e as rotinas locais pelo nome. Um goto para rotulo de outro case acrescenta os tokens do rotulo."""
    import re
    import struct
    dec = module('l2dec413').decrypt(open(os.path.join(CLIENT, 'System', 'commandname-e.dat'), 'rb').read())
    n = struct.unpack_from('<i', dec, 0)[0]
    p = 4
    names = []
    for _ in range(n):
        seq, cid = struct.unpack_from('<ii', dec, p)
        ln = dec[p + 8]
        assert ln < 0x40
        names.append({'seq': seq, 'id': cid, 'name': dec[p + 9:p + 9 + ln - 1].decode('latin-1')})
        p += 9 + ln
    vt = next(x for x in load('rtti_engine.json') if x['vtable'] == '0x108b2224')
    req = {x['entry'].lower(): x for x in load('request_table.json')}

    def net(addr):
        try:
            b = decomp('nwindow', addr)
        except KeyError:
            return None
        ms = set(re.findall(r'\+ 0x60\) \+ (0x[0-9a-f]+|\d+)\)\)', b))
        if len(ms) != 1 or len(b.splitlines()) > 40:
            return None
        e = req.get(vt['raw_entries'][int(ms.pop(), 0) // 4].lower().replace('0x', ''))
        if not e or not e['sends']:
            return None
        s = e['sends'][0]
        return s['opcode'] + ('/' + s['sub'] if s['sub'] else '')

    local = {'1014c7c0': 'targetnext', '1014c720': 'pickup', '1015a770': 'assist', '10144c60': 'petpickup',
             '10171680': 'useshortcut', '1015a2d0': 'equip'}
    as_action = {'1014ca10', '1014c6a0'}  # chamam o slot 0x100 (Action, 0x04)

    def lit(a):
        a = a.strip()
        m = re.fullmatch(r'(?:\(void \*\))?(0x[0-9a-f]+|\d+)', a)
        if not m:
            return None
        v = int(m.group(1), 0)
        return v - (1 << 32) if v >= 1 << 31 else v

    def tokens(text):
        out = []
        pushed = []
        def call_args(i):
            # argumentos da chamada que abre em text[i] (parenteses balanceados)
            depth, j = 0, i
            while j < len(text):
                if text[j] == '(':
                    depth += 1
                elif text[j] == ')':
                    depth -= 1
                    if depth == 0:
                        break
                j += 1
            inner, parts, d, cur = text[i + 1:j], [], 0, ''
            for ch in inner:
                if ch == ',' and d == 0:
                    parts.append(cur)
                    cur = ''
                    continue
                d += ch == '('
                d -= ch == ')'
                cur += ch
            if cur.strip():
                parts.append(cur)
            return parts
        for m in re.finditer(r'L2ParamStack::L2ParamStack\(|L2ParamStack::PushBack\(local_2c,([^;]*)\);|'
                             r'(?<!thunk_)FUN_([0-9a-f]{8})\(|GL2GameData_exref \+ (0x[0-9a-f]+)\)\)|'
                             r'\+ 0x60\) \+ 0x98\)\)|FL2ReplayManager::', text):
            if m.group(0).startswith('L2ParamStack::L2ParamStack'):
                pushed = []
            elif m.group(0).startswith('L2ParamStack::PushBack'):
                v = lit(m.group(1))
                if v is not None:
                    pushed.append(v)
            elif m.group(3):
                off = int(m.group(3), 16) - 0x240e8 - 4
                if off % 0x5c == 0:
                    out.append('msg:%d' % (off // 0x5c))
            elif '0x98' in m.group(0):
                out.append('local:findprivatestore')
            elif m.group(0).startswith('FL2ReplayManager'):
                out.append('local:replay')
            else:
                f = m.group(2)
                argv = [lit(x) for x in call_args(m.end() - 1)]
                if f == '10170860':
                    out.append('act:%d' % argv[0])
                elif f == '10170650':
                    out.append('msg:%d' % argv[0])
                elif f == '10005c30':
                    out.append('ev:%d' % argv[0])
                elif f == '1000dd30':
                    out.append('dlg:%d' % argv[0])
                elif f in local:
                    out.append('local:' + local[f])
                elif f in as_action:
                    out.append('pkt:0x4')
                else:
                    op = net(f)
                    if op:
                        ls = pushed + [v for v in argv if v is not None]
                        out.append('pkt:' + op + ('(%s)' % ','.join(map(str, ls)) if ls else ''))
                        pushed = []
        return out

    body = decomp('nwindow', '1013a320')
    sw = body[body.index('switch(param_1) {'):]
    labels = {m.group(1): m.end() for m in re.finditer(r'\n(LAB_[0-9a-f]+):', sw)}

    def label_tokens(lab):
        rest = sw[labels[lab]:]
        end = re.search(r'\bbreak;|\bgoto ', rest)
        return tokens(rest[:end.start() if end else None])

    parts = re.split(r'\n  (case \(undefined1 \*\)(0x[0-9a-f]+|\d+):|default:)', sw)
    dispatch = {}
    pending = []
    i = 1
    while i < len(parts):
        head, num, text = parts[i], parts[i + 1], parts[i + 2]
        key = int(num, 0) if num else 'default'
        pending.append(key)
        if text.strip():
            toks = tokens(text)
            for lab in re.findall(r'goto (LAB_[0-9a-f]+);', text):
                if lab in labels and labels[lab] < sw.index(text) or lab in labels and labels[lab] > sw.index(text) + len(text):
                    toks += label_tokens(lab)
            if key == 'default':
                toks = ['pkt:0xaa']
            for k in pending:
                dispatch[str(k)] = sorted(set(toks))
            pending = []
        i += 3
    return {'names': names, 'dispatch': dispatch, 'badFormatMsg': (0x4044c - 0x240e8 - 4) // 0x5c}


def sysmsg_of(off):
    """FString de mensagem em GL2GameData+off -> id do systemmsg (registros de 0x5c bytes em +0x240e8, texto em +4)."""
    d = off - 0x240e8 - 4
    assert d % 0x5c == 0, hex(off)
    return d // 0x5c


def login_msgs():
    """C1: textos do LoginFail (console+0x90 = NWindow FUN_10150be0: motivo -> 1 a 3 sysmsg juntadas com " ") e do
    AccountKicked (console+0x544 = FUN_10150730, se nao achar bit: console+0x540 = FUN_10150920). As cadeias de if do
    pseudocodigo viram Python e sao avaliadas para cada bit."""
    import re
    body = decomp('nwindow', '10150be0')
    sw = body[body.index('switch(param_1) {'):]
    parts = re.split(r'\n  (case (0x[0-9a-f]+|\d+):|default:)', sw)
    fail = {}
    pending = []
    i = 1
    while i < len(parts):
        num, text = parts[i + 1], parts[i + 2]
        pending.append(int(num, 0) if num else 'default')
        if text.strip():
            offs = [int(x, 16) for x in re.findall(r'GL2GameData_exref \+ (0x[0-9a-f]+)\)', text)]
            # os argumentos do appSprintf saem na ordem inversa das atribuicoes (puVar3, puVar1, pFVar4)
            ids = [sysmsg_of(o) for o in reversed(offs)]
            for k in pending:
                fail[str(k)] = ids
            pending = []
        i += 3

    def bits(addr):
        src = decomp('nwindow', addr)
        src = src[src.index('{', src.index(addr + '(') if (addr + '(') in src else 0) + 1:]
        out, ind = ['def f(param_1):', ' r = None'], 1
        for raw in src.splitlines():
            l = raw.strip()
            if not l or l.startswith('//'):
                continue
            m = re.match(r'if \((.*)\) \{$', l)
            if m:
                c = m.group(1).replace('&&', ' and ').replace('||', ' or ')
                c = re.sub(r"\(char\)param_1 < '\\0'", '(param_1 & 0x80) != 0', c)
                out += [' ' * ind + 'if ' + c + ':', ' ' * (ind + 1) + 'pass']
                ind += 1
            elif l == 'else {':
                out += [' ' * ind + 'else:', ' ' * (ind + 1) + 'pass']
                ind += 1
            elif l == '}':
                ind -= 1
                if ind == 0:
                    break
            else:
                m = re.search(r'GL2GameData_exref \+ (0x[0-9a-f]+)\)', l)
                if m and '=' in l:
                    out.append(' ' * ind + 'r = %d' % sysmsg_of(int(m.group(1), 16)))
                elif l.startswith('goto ') or l.startswith('return'):
                    # sem bit nenhum r continua None (return 0 / return sem mostrar nada)
                    out.append(' ' * ind + 'return r')
        out.append(' return r')
        env = {}
        exec('\n'.join(out), env)
        f = env['f']
        # prioridade = ordem dos testes no texto (cada mascara uma vez); mensagem = f(bit) de cada bit da mascara
        order = []
        for m in re.finditer(r"\(param_1 & (0x[0-9a-f]+|\d+)\)|\(char\)param_1 < '\\0'", src):
            mask = int(m.group(1), 0) if m.group(1) else 0x80
            if any(o[0] == mask for o in order):
                continue
            msgs = {f(1 << k) for k in range(32) if mask >> k & 1}
            assert len(msgs) == 1, (addr, hex(mask), msgs)
            order.append([mask, msgs.pop()])
        # conferencia: a ordem reproduz f para todas as combinacoes de 2 bits
        def by_order(v):
            return next((msg for mask, msg in order if v & mask), None)
        for a in range(32):
            for b in range(32):
                assert by_order(1 << a | 1 << b) == f(1 << a | 1 << b), (addr, a, b)
        return order

    return {'fail': fail, 'kickedFirst': bits('10150730'), 'kickedSecond': bits('10150920')}


def packet_layouts(debug=None):
    """C2/C3: layout de leitura de cada pacote do jogo (e Ex) pelo pseudocodigo do handler no Engine.dll: as chamadas
    thunk_FUN_104026b0(.., formato, &a, &b..) em ordem, dentro de quais lacos (for/while/do com o contador lido antes) e se
    estao num if. A expansao usa contador 2 e para no 1o trecho incerto (if, helper, laco sem contador lido)."""
    import re
    pe = module('pe_util').PE(os.path.join(CLIENT, 'System', 'Engine.dll'))

    def ascii_at(va):
        o = pe.off(va)
        e = pe.b.index(b'\0', o)
        return pe.b[o:e].decode('latin-1')

    def split_args(s):
        parts, d, cur = [], 0, ''
        for ch in s:
            if ch == ',' and d == 0:
                parts.append(cur.strip())
                cur = ''
                continue
            d += ch == '('
            d -= ch == ')'
            cur += ch
        if cur.strip():
            parts.append(cur.strip())
        return parts

    def var(a):
        a = re.sub(r'\([a-z0-9_ ]+\*?\)', '', a).strip()  # casts
        return a.lstrip('&').strip()

    def layout(body):
        lines = body.splitlines()
        stack = []  # (indent, kind, bound, id)
        nodes = []  # (path de lacos, cond, fmt, args)
        aliases = {}
        loop_id = 0
        i = 0
        while i < len(lines):
            raw = lines[i]
            l = raw.strip()
            ind = len(raw) - len(raw.lstrip(' '))
            if l.startswith('}'):
                while stack and stack[-1][0] >= ind:
                    top = stack.pop()
                    if top[1] == 'do' and l.startswith('} while'):
                        m = re.search(r'< ([^;]+)\);', l)
                        for n in nodes:
                            if top[3] in n[0]:
                                n[4][top[3]] = var(m.group(1)) if m else None
                    if top[0] == ind:
                        break
                if l.startswith('} while') or l == '}':
                    i += 1
                    continue
                l = l[1:].strip()
            m = re.match(r'(for|while) \((.*)\) \{$', l)
            if m:
                loop_id += 1
                cond = m.group(2)
                c2 = cond.split(';')[1] if m.group(1) == 'for' else cond
                b = re.fullmatch(r'\s*0 < (.+?)\s*', c2) or re.search(r'< ([^;]+?)(;|$)', c2)
                stack.append((ind, 'loop', var(b.group(1)) if b else None, loop_id))
                i += 1
                continue
            if l == 'do {':
                loop_id += 1
                stack.append((ind, 'do', None, loop_id))
                i += 1
                continue
            if re.match(r'(if \(.*\)|else) \{$', l) or l == 'else {':
                # if = caminho tomado (guardas de estado: objeto existe etc.), salvo se a condicao usa um campo lido;
                # else = incerto
                cm = re.match(r'if \((.*)\) \{$', l)
                stack.append((ind, 'else' if l.startswith('else') else 'if', cm.group(1) if cm else None, 0))
                i += 1
                continue
            am = re.match(r'(\w+) = (?:\([a-z0-9_ ]+\*?\))*(\w+);$', l)
            if am:
                aliases[am.group(1)] = am.group(2)
            if 'thunk_FUN_104026b0(' in l:
                call = l
                while call.count('(') > call.count(')') and i + 1 < len(lines):
                    i += 1
                    call += ' ' + lines[i].strip()
                inner = call[call.index('thunk_FUN_104026b0(') + len('thunk_FUN_104026b0('):]
                depth, j = 1, 0
                while j < len(inner) and depth:
                    depth += inner[j] == '('
                    depth -= inner[j] == ')'
                    j += 1
                args = split_args(inner[:j - 1])
                f = args[2] if len(args) > 2 else ''
                if f.startswith('"'):
                    fmt = f.strip('"')
                else:
                    mm = re.search(r'DAT_([0-9a-f]{8})', f)
                    fmt = ascii_at(int(mm.group(1), 16)) if mm else None
                loops = tuple(s[3] for s in stack if s[1] in ('loop', 'do'))
                cond = any(s[1] == 'else' for s in stack)
                branch = any(s[1] == 'if' for s in stack)
                bounds = {s[3]: s[2] for s in stack if s[1] in ('loop', 'do')}
                conds = [s[2] for s in stack if s[1] == 'if' and s[2]]
                nodes.append([loops, cond, fmt, [var(a) for a in args[3:]], bounds, branch, conds])
            i += 1
        return nodes, aliases

    def expand(nodes, aliases):
        # contadores: variaveis que limitam um laco (seguindo as copias "a = (short)b;"); valor 2
        def resolve(v):
            seen = set()
            while v in aliases and v not in seen:
                seen.add(v)
                v = aliases[v]
            return v
        for n in nodes:
            for k in list(n[4]):
                if n[4][k]:
                    n[4][k] = resolve(n[4][k])
        bounds = {}
        for n in nodes:
            bounds.update(n[4])
        counters = {b for b in bounds.values() if b}
        readvars = set()
        heuristic = []
        out = []
        complete = True

        def emit(n):
            fmt, args = n[2], n[3]
            k = 0
            for ch in fmt:
                if ch in 'cdhfQS':
                    a = args[k] if k < len(args) else None
                    out.append(ch + (':2' if a in counters and ch in 'cdh' else ''))
                    k += 1
                elif ch == 'b':
                    size = args[k] if k < len(args) else None
                    k += 2
                    try:
                        out.append('b%d' % int(size, 0))
                    except (TypeError, ValueError):
                        return False
                else:
                    return False
            return True

        def value_dependent(n):
            for c in n[6]:
                if re.fullmatch(r'\s*0 < .*', c):
                    continue  # guarda do laco
                if any(re.search(r'\b%s\b' % re.escape(v), c) for v in readvars):
                    return True
            return False

        idx = 0
        while idx < len(nodes):
            n = nodes[idx]
            if n[2] is None or n[1] or value_dependent(n):
                complete = False
                break
            if not n[0]:
                if not emit(n):
                    complete = False
                    break
                readvars.update(a for a in n[3] if a)
                idx += 1
                continue
            # bloco do laco mais externo: os nos seguidos com o mesmo 1o laco
            lid = n[0][0]
            block = []
            while idx < len(nodes) and nodes[idx][0][:1] == (lid,):
                block.append(nodes[idx])
                idx += 1
            if any(len(b[0]) > 1 or b[1] or b[2] is None for b in block) or not n[4].get(lid) or n[4][lid] not in counters:
                complete = False
                break
            if n[4][lid] not in readvars:
                # o Ghidra perdeu a ligacao entre o contador e o argumento lido (ex.: UserInfo, "uVar8 = (uint3)psStack_118"):
                # o contador e o campo logo antes do laco
                if out and out[-1] in ('c', 'h', 'd'):
                    out[-1] += ':2'
                    heuristic.append(len(out) - 1)
                else:
                    complete = False
                    break
            ok = True
            for _ in range(2):
                for b in block:
                    ok = ok and emit(b)
            if not ok:
                complete = False
                break
        return out, complete, heuristic

    res = {}
    fmts = load('packet_formats.json')
    for e in load('packet_table.json'):
        if e['table'] not in ('game', 'ex') or not e.get('handler'):
            continue
        try:
            body = decomp('engine', e['handler'][2:])
        except KeyError:
            continue
        nodes, aliases = layout(body)
        toks, complete, heuristic = expand(nodes, aliases)
        if debug == e['opcode']:
            for n in nodes:
                print(n)
            print(aliases)
        key = ('ex:' if e['table'] == 'ex' else '') + e['opcode']
        source = 'decomp'
        if not toks and (not nodes or nodes[0][2] is None):
            # o Ghidra perdeu os argumentos da leitura: packet_formats.json (formatos lidos do binario) no padrao
            # "contador de 1 campo + corpo do laco"
            pf = next((x['formats'] for x in fmts if x['table'] == e['table'] and x['opcode'] == e['opcode']), [])
            if len(pf) == 2 and len(pf[0]) == 1 and pf[0] in 'cdh' and all(ch in 'cdhfQS' for ch in pf[1]):
                toks, complete, source = [pf[0] + ':2'] + list(pf[1]) * 2, True, 'packet_formats'
        res[key] = {'source': source, 'acis': e['acis'], 'tokens': toks, 'complete': complete, 'reads': len(nodes),
                    'ifTaken': any(n[5] for n in nodes), 'counterBeforeLoop': heuristic}
    return res


def special_digit():
    """H1: UCanvas::DrawSpecialDigit (Engine 0x10305542): caractere -> celula (u = celula * largura); FUN_100212f0 (NWindow):
    tipo -> (textura carregada em +0x60/+100/+0x68, largura, altura); textos do NCStatusBarCtrl (FUN_1004c7c0)."""
    import re
    b = decomp('engine', '10305542')
    cells = {}
    for m in re.finditer(r'case (0x[0-9a-f]+):\s*iVar4 = param_1 (\* (0x[0-9a-f]+|\d+)|<< (\d+));', b):
        cells[chr(int(m.group(1), 16))] = int(m.group(3), 0) if m.group(3) else 1 << int(m.group(4))
    if '(uVar1 - 0x30) < 10' in b:
        for d in range(10):
            cells[str(d)] = d
    w = decomp('nwindow', '100212f0')
    sizes = [(int(a, 0), int(b2, 0)) for a, b2 in re.findall(r'uVar3 = (0x[0-9a-f]+|\d+);\s*uVar4 = (0x[0-9a-f]+|\d+);', w)]
    src = open(os.path.join(RE, 'decomp_all', 'nwindow', '00001.c'), encoding='utf-8', errors='replace').read()
    i = src.index('L"L2UI.NWindow.Number"')
    texs = re.findall(r'FUN_1003f630\(L"([^"]+)",1\);\s*\*\(undefined4 \*\)\(in_ECX \+ (0x[0-9a-f]+|\d+)\)', src[i - 400:i + 300])
    by_off = {int(o, 0): t for t, o in texs}
    types = [{'tex': by_off[0x60], 'w': sizes[0][0], 'h': sizes[0][1]}, {'tex': by_off[100], 'w': sizes[1][0], 'h': sizes[1][1]},
             {'tex': by_off[0x68], 'w': sizes[2][0], 'h': sizes[2][1]}]
    return {'cells': cells, 'types': types}


def etc_status():
    """K10: EtcStatusUpdate 0xF3 (FUN_1041a880): os 7 campos lidos ("ddddddd", na ordem dos argumentos) e, na ordem dos
    PushBack, (campo, skill, nivel) com nivel = o proprio campo ou 1."""
    import re
    b = decomp('engine', '1041a880')
    m = re.search(r'"ddddddd",(.*?)\);', b, re.S)
    fields = [a.strip().lstrip('&') for a in m.group(1).split(',')]
    out = []
    for mm in re.finditer(r'if \(0 < (?:\(int\))?(\w+)\) \{\s*L2ParamStack::PushBack\(aLStack_1c,\(void \*\)(0x[0-9a-f]+)\);\s*'
                          r'L2ParamStack::PushBack\(aLStack_1c,(?:\(void \*\))?(\w+)\);', b):
        lv = mm.group(3)
        out.append({'field': fields.index(mm.group(1)), 'skill': int(mm.group(2), 16),
                    'level': 'value' if lv == mm.group(1) else int(lv, 0)})
    return out


def target_status():
    """K2: cor do nome do alvo (UUIDATA_TARGET::execGetTargetNameColor, NWindow 0x1012a950) avaliada de -20 a +20 a partir do
    pseudocodigo; rank do PC (FUN_1014a3b0: switch -> FString do sysstring em GL2GameData+off, (off-0x6A8DC)/12); listas
    IsAllWhiteID/IsNoBarID do TargetStatusWnd.uc."""
    import re
    body = decomp('nwindow', '1012a950')
    chain = body[body.index('if (local_18 < -8)'):body.index('FColor::FColor')]
    py = ['def f(local_18):']
    for l in chain.splitlines():
        l = l.strip()
        m = re.match(r'(?:\} )?(else )?if \((.*)\) \{$', l)
        if m:
            py.append(' %s %s:' % ('elif' if m.group(1) else 'if', m.group(2)))
        elif l in ('else {', '} else {', '}else {'):
            py.append(' else:')
        elif l.startswith('uVar3 ='):
            e = l[len('uVar3 ='):].rstrip(';').strip()
            e = re.sub(r'\((\d+) < local_18\)', r'(1 if \1 < local_18 else 0)', e)
            py.append('  return (%s) & 0xffffffff' % e)
    env = {}
    exec('\n'.join(py), env)
    colors = {str(d): '%08x' % env['f'](d) for d in range(-20, 21)}
    rb = decomp('nwindow', '1014a3b0')
    ranks = {}
    for m in re.finditer(r'case (\d+):\s*this = \(FString \*\)\(GL2GameData_exref \+ (0x[0-9a-f]+)\);', rb):
        off = int(m.group(2), 16) - 0x6A8DC
        assert off % 12 == 0
        ranks[m.group(1)] = off // 12
    uc = open(os.path.join(L2ANIM, 'export', 'uc', 'Interface', 'TargetStatusWnd.uc'), encoding='latin-1').read()

    def ids(fn):
        part = uc[uc.index('function bool ' + fn):]
        part = part[:part.index('return')]
        return [int(x) for x in re.findall(r'case (\d+):', part)]
    return {'nameColor': colors, 'rankSysString': ranks, 'allWhite': ids('IsAllWhiteID'), 'noBar': ids('IsNoBarID')}


def party():
    """K4: tabelas nativas da janela de grupo, do pseudocodigo do NWindow: estilo da classe (FUN_10147480), icone do estilo
    (FUN_1014eb90), GetClassStr (FUN_1014e370) e GetClassType (FUN_101460d0) como indice do sysstring ((off-0x6A8DC)/12),
    GetRoutingString (execGetRoutingString 0x10100df0); e as constantes dos scripts PartyWnd.uc/PartyWndCompact.uc."""
    import re

    def ss(off):
        off = int(off, 16) - 0x6A8DC
        assert off % 12 == 0
        return off // 12
    b = decomp('nwindow', '10147480')
    style, pend, neg = {}, [], []
    for m in re.finditer(r'param_1 (==|!=) (0x[0-9a-f]+|\d+)|return (0x[0-9a-f]+|\d+);', b):
        if m.group(3):
            for x in pend:
                style.setdefault(x, int(m.group(3), 0))
            pend = []
        elif m.group(1) == '==':
            pend.append(int(m.group(2), 0))
        else:
            neg.append(int(m.group(2), 0))
    for x in neg:
        style[x] = 0
    icons = {}
    for m in re.finditer(r'case (0x[0-9a-f]+|\d+):\s*return L"([^"]+)";', decomp('nwindow', '1014eb90')):
        icons[int(m.group(1), 0)] = m.group(2)
    cls_str = {}
    pend = []
    for m in re.finditer(r'case (0x[0-9a-f]+|\d+):|GL2GameData_exref \+ (0x[0-9a-f]+)\)', decomp('nwindow', '1014e370')):
        if m.group(1):
            pend.append(int(m.group(1), 0))
        else:
            for x in pend:
                cls_str[x] = ss(m.group(2))
            pend = []
    t = decomp('nwindow', '101460d0')
    lim = int(re.search(r'param_1 < (0x[0-9a-f]+)', t).group(1), 16)
    offs = re.findall(r'param_1 \* 0xc \+ (0x[0-9a-f]+)', t)
    cls_type = {'limit': lim, 'below': ss(offs[0]), 'above': ss(offs[1])}
    r = decomp('nwindow', '10100df0')
    label = ss(re.search(r'puVar3 = FString::operator\*\(\(FString \*\)\(GL2GameData_exref \+ (0x[0-9a-f]+)\)\)', r).group(1))
    routing = {}
    for k in range(5):
        m = re.search(r'local_41c [!=]= %d\)' % k, r)
        routing[k] = ss(re.search(r'GL2GameData_exref \+ (0x[0-9a-f]+)', r[m.end():]).group(1))
    fmt = re.search(r'appSprintf\(local_408,\(ushort \*\)L"([^"]+)"', r).group(1)
    ui = os.path.join(L2ANIM, 'export', 'uc', 'Interface')
    out = {}
    for name in ('PartyWnd', 'PartyWndCompact'):
        uc = open(os.path.join(ui, name + '.uc'), encoding='latin-1').read()
        consts = {k: int(v) for k, v in re.findall(r'const (\w+) = (\d+);', uc)}
        lb = uc[uc.index('function OnLButtonDown'):uc.index('function OnRButtonUp')]
        xs = [int(v) for v in re.findall(r'rectWnd\.nX \+ (?:rectWnd\.nWidth -)?(\d+)', lb)]
        sp = re.search(r'info\.Size = (\d+);', uc)
        tips = [int(v) for v in re.findall(r'case \d:\s*idx = (\d+);', uc)]
        out[name] = {'height': consts['NPARTYSTATUS_HEIGHT'], 'maxCount': consts['NPARTYSTATUS_MAXCOUNT'], 'clickX': xs,
                     'buffSize': int(sp.group(1)), 'buffTooltips': tips,
                     'showWhenSmall': 'if (bOption)' in uc[uc.index('function ResizeWnd'):]}
    return {'style': {str(k): v for k, v in sorted(style.items())}, 'icons': {str(k): v for k, v in sorted(icons.items())},
            'classStr': {str(k): v for k, v in sorted(cls_str.items())}, 'classType': cls_type,
            'routing': {str(k): v for k, v in routing.items()}, 'routingLabel': label, 'routingFormat': fmt, 'scripts': out}


def wnd_defpos():
    """F5/K4: WndDefPos do Interface.xdat (out/re/interface_layout.json) e as posicoes gravadas pelo original no
    out/re/runtime/WindowsInfo.ini (sessao em 1374x1071, deduzida das janelas centralizadas: OptionWnd 256x480 em
    (559, 298), BoardWnd 646x530 em (364, 270), TargetStatusWnd 176 em x=599)."""
    import re
    L = json.load(open(os.path.join(RE, 'interface_layout.json'), encoding='utf-8'))
    text = open(os.path.join(RE, 'runtime', 'WindowsInfo.ini'), encoding='latin-1').read()
    saved = {}
    for m in re.finditer(r'^\[(.+)\]\s*\n((?:[^\[\n][^\n]*\n?)*)', text, re.M):
        kv = dict(l.split('=', 1) for l in m.group(2).splitlines() if '=' in l)
        if 'posX' in kv:
            saved[m.group(1)] = [int(kv['posX']), int(kv['posY'])]
    return {'defPos': [{k: d[k] for k in ('wnd', 'alignment', 'x', 'y', 'width', 'height')} for d in L['wndDefPos']],
            'screen': [1374, 1071], 'saved': saved}


def zone_names():
    """K6: zona atual (Engine.dll) a partir dos arquivos do cliente: ZoneName-e.dat (l2dec413) e os indices P8 de
    SysTextures/l2zonename.utx (lidos aqui pelo ukx_parse, sem o .bin do Unity). Algoritmo do pseudocodigo/desmontagem:
    regiao = trunc((x+360448)/32768+9), trunc((y+294912)/32768+9) (GetSWMapXY 0x105887b0); texel = trunc((x-origem)*128/32768)
    (0x10462970); chave FUN_1044bf90; andares em chave+1 so para id >= 200 (ZoneNameListLoad); Bottom < z < Top
    (GetZoneNameInfo 0x10462780). Amostra: grade de 8192 unidades em tres alturas."""
    import struct
    dec = module('l2dec413')
    d = dec.decrypt(open(os.path.join(CLIENT, 'System', 'ZoneName-e.dat'), 'rb').read())

    def ascf(p):
        b = d[p]
        p += 1
        v = b & 0x3f
        if b & 0x40:
            sh = 6
            while True:
                x = d[p]
                p += 1
                v |= (x & 0x7f) << sh
                sh += 7
                if not x & 0x80:
                    break
        if b & 0x80:
            return d[p:p + 2 * v - 2].decode('utf-16-le'), p + 2 * v
        if v == 0:
            return '', p
        return d[p:p + v - 1].decode('cp1252'), p + v
    n = struct.unpack_from('<I', d, 0)[0]
    p = 4
    by_key = {}

    def key(i, mx, my):
        return i << 8 if i < 200 else ((((my << 8) | mx) << 8 | i) << 8) & 0xffffffff
    for _ in range(n):
        seq, i, mx, my = struct.unpack_from('<4i', d, p)
        top, bot = struct.unpack_from('<2f', d, p + 16)
        p += 24
        name, p = ascf(p)
        p += 28
        tex, p = ascf(p)
        k = key(i, mx, my)
        while k in by_key and i > 199:
            k += 1
        by_key[k] = (name, top, bot)
    sys.path.insert(0, os.path.join(L2ANIM, 'scripts'))
    from ukx_parse import Package
    pk = Package(os.path.join(CLIENT, 'SysTextures', 'l2zonename.utx'))
    tiles = {}
    for e in pk.exports:
        if pk.class_name(e) != 'Texture':
            continue
        r = pk.r
        r.seek(e['offset'])
        pr = pk.read_props()
        r.i32()
        r.idx()
        r.i32()
        cnt = r.idx()
        tiles[tuple(int(a) for a in e['name'].split('_'))] = (pr['USize'], pr['VSize'], r.d[r.p:r.p + cnt])

    def lookup(x, y, z):
        tx = int((x + 360448.0) * (1.0 / 32768) + 9.0)
        ty = int((y + 294912.0) * (1.0 / 32768) + 9.0)
        idx = 0
        if (tx, ty) in tiles:
            w, h, raw = tiles[(tx, ty)]
            u = int((x - int((tx - 20) * 32768.0)) * w * (1.0 / 32768))
            v = int((y - int((ty - 18) * 32768.0)) * h * (1.0 / 32768))
            idx = raw[v * w + u]
        k = key(idx, tx, ty)
        for _ in range(256):
            if k not in by_key:
                return idx, None
            name, top, bot = by_key[k]
            if bot < z < top:
                return idx, name
            k += 1
        return idx, None
    pts = []
    for x in range(-131072, 229377, 8192):
        for y in range(-262144, 262145, 8192):
            for z in (-3400, -6000, 2000):
                idx, name = lookup(x + 37, y + 91, z)
                pts.append([x + 37, y + 91, z, idx, name])
    return {'records': n, 'keys': len(by_key), 'tiles': len(tiles), 'points': pts}


def minimap():
    """K6: constantes do NCMinimapWnd tiradas da desmontagem do NWindow.dll (o pseudocodigo perde os operandos x87):
    InitExceptForLocationList (0x1018ae40, 8 chamadas a AddExceptLocationList 0x10188ad0 com maxX, minX, maxY, minY, maxZ,
    minZ, px, py), GetMinimapPosition (0x10187c10: deslocamentos e o double em 0x1028e030), GetMapWidth/Height
    (0x10187e90/0x10187f50) e DrawGrid (0x10187130: celula, margens dos rotulos, cores)."""
    import re
    import struct
    sys.path.insert(0, os.path.join(L2ANIM, 'scripts'))
    import pe_util
    import capstone
    pe = pe_util.PE(os.path.join(CLIENT, 'System', 'NWindow.dll'))
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)

    def dis(a, n):
        out = []
        for ins in md.disasm(pe.b[pe.off(a):pe.off(a) + n], a):
            out.append(ins)
            if ins.mnemonic == 'ret':
                break
        return out

    def imm(op):
        v = int(op, 0)
        return v - (1 << 32) if v >= 1 << 31 else v
    exc, pushes = [], []
    for ins in dis(0x1018ae40, 0x300):
        if ins.mnemonic == 'push' and re.fullmatch(r'0x[0-9a-f]+|\d+', ins.op_str):
            pushes.append(imm(ins.op_str))
        elif ins.mnemonic == 'call' and ins.op_str == '0x10188ad0':
            a = list(reversed(pushes[-8:]))
            exc.append({'maxX': a[0], 'minX': a[1], 'maxY': a[2], 'minY': a[3], 'maxZ': a[4], 'minZ': a[5], 'px': a[6], 'py': a[7]})
            pushes = []
        elif ins.mnemonic == 'call':
            pushes = []
    gp = dis(0x10187c10, 0x150)
    adds = [imm(i.op_str.split(', ')[1]) for i in gp if i.mnemonic == 'add' and i.op_str.endswith(('0x20000', '0x40000'))]
    k = struct.unpack_from('<d', pe.b, pe.off(0x1028e030))[0]
    w = [imm(i.op_str.split(', ')[1]) for i in dis(0x10187e90, 0xc0) if i.mnemonic == 'mov' and i.op_str.startswith('eax, 0x')]
    h = [imm(i.op_str.split(', ')[1]) for i in dis(0x10187f50, 0xc0) if i.mnemonic == 'mov' and i.op_str.startswith('eax, 0x')]
    g = dis(0x10187130, 0x300)
    cells = sorted({imm(i.op_str.split(', ')[1]) for i in g if i.mnemonic == 'mov' and i.op_str.endswith(', 0x3d')})
    labs = [imm(i.op_str.split(', ')[1]) for i in g if i.mnemonic == 'add' and i.op_str.endswith(', 0x14')]
    cmps = [imm(i.op_str.split(', ')[1]) for i in g if i.mnemonic == 'cmp' and re.search(r', 0x(f|14)$', i.op_str)]
    cols = [i.op_str for i in g if i.mnemonic == 'push' and i.op_str in ('0xffdcdcdc', '0x40000000')]
    return {'exceptions': exc, 'offsetX': adds[0], 'offsetY': adds[1], 'unitsToPixel': k, 'mapWidth': w[0], 'mapHeight': h[0],
            'gridCell': cells[0], 'gridLabelBase': labs[0], 'gridLabelMinX': cmps[0], 'gridLabelMinY': cmps[1],
            'gridColors': sorted(set(cols))}


def chat_list():
    """H3: NCChatListBox (xdat ChatWindow). Desmontagem do NWindow.dll: AddString (0x100339c0: largura da 1a linha W - 22,
    das seguintes W - 16 - 6 - recuo), OnPaint (0x10137f00: linhas visiveis (H - 10) / 15, linha y = 0x318 + (lineGap + 11) *
    i), ctor (0x100d4e90: 200 linhas); pseudocodigo: OnCreate (0x10137e50: origem do texto 0x17, 0xe; SetScrollBarPosition
    5, 10, 0) e o exec AddString (0x10131a80: recuo 12)."""
    import re
    import struct
    sys.path.insert(0, os.path.join(L2ANIM, 'scripts'))
    import pe_util
    import capstone
    pe = pe_util.PE(os.path.join(CLIENT, 'System', 'NWindow.dll'))
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)

    def ins(a, n):
        return list(md.disasm(pe.b[pe.off(a):pe.off(a) + n], a))

    def dconst(i):
        m = re.search(r'qword ptr \[(0x1[0-9a-f]{7})\]', i.op_str)
        return struct.unpack_from('<d', pe.b, pe.off(int(m.group(1), 16)))[0]
    first = [dconst(i) for i in ins(0x10033a12, 0x10) if i.mnemonic == 'fsub']
    nxt = [dconst(i) for i in ins(0x10033b77, 0x20) if i.mnemonic == 'fsub' and 'qword' in i.op_str]
    rows = [(i.mnemonic, dconst(i)) for i in ins(0x1013809a, 0x40) if i.mnemonic in ('fsub', 'fdiv')]
    pitch = [int(i.op_str.split(', ')[1], 16) for i in ins(0x1013820d, 0x10) if i.mnemonic == 'add']
    ctor = [int(i.op_str, 0) for i in ins(0x100d4eec, 0x10) if i.mnemonic == 'push']
    oc = decomp('nwindow', '10137e50')
    org = [int(v, 16) for v in re.findall(r'in_ECX\[0xc[56]\] = (0x[0-9a-f]+);', oc)]
    sb = [int(v) for v in re.search(r'\+ 0x20c\)\)\((\d+),(\d+),(-?\d+)\)', oc).groups()]
    ex = decomp('nwindow', '10131a80')
    indent = int(re.search(r'uVar7 = (0x[0-9a-f]+|\d+);', ex).group(1), 0)
    return {'firstMinus': first[0], 'nextMinus': sum(nxt), 'rowsMinus': rows[0][1], 'rowsDiv': rows[1][1], 'pitchAdd': pitch[0],
            'maxLines': ctor[2], 'originX': org[0], 'originY': org[1], 'scrollBar': sb, 'indent': indent}


def multisell():
    """K8: MultiSellList 0xd0 (Engine.dll FUN_104183a0): os formatos lidos e o que vai para OnSetVIPShopID (so com a pagina 1),
    OnAddVIPItemList e OnAddVIPNeedItemList; as chaves dos eventos na ordem dos emissores do NWindow (FUN_10163500 /
    FUN_10163800)."""
    import re
    b = decomp('engine', '104183a0')
    fmts = re.findall(r'thunk_FUN_104026b0\([^"]*"([a-z]+)"', b)
    item = re.search(r'OnAddVIPItemList\s*\((.*?)\);', b, re.S).group(1)
    need = re.search(r'OnAddVIPNeedItemList\s*\((.*?)\);', b, re.S).group(1)

    def args(a):
        return [x.strip() for x in re.sub(r'\s+', ' ', a).split(',')[1:]]
    page_if = re.search(r'if \((\w+) == 1\) \{\s*UGameEngine::OnSetVIPShopID', b).group(1)
    end_if = re.search(r'if \((\w+) == 1\) \{\s*UGameEngine::OnVIPItemListEnd', b).group(1)
    hdr = re.search(r'"ddddd",([^;]*)\);', b).group(1)
    hdr = [x.strip().lstrip('&') for x in hdr.split(',')]

    def keys(addr):
        # chaves curtas vem como &DAT_... (UTF-16 no NWindow.dll)
        sys.path.insert(0, os.path.join(L2ANIM, 'scripts'))
        import pe_util
        pe = pe_util.PE(os.path.join(CLIENT, 'System', 'NWindow.dll'))
        out = []
        for m in re.finditer(r'FString::FString\(\w+,\(ushort \*\)(?:L"(\w+)"|&DAT_([0-9a-f]+))\);', decomp('nwindow', addr)):
            out.append(m.group(1) or pe.wstr(int(m.group(2), 16)))
        return out
    return {'formats': fmts, 'itemArgs': args(item), 'needArgs': args(need), 'header': hdr,
            'shopIdWhen': hdr.index(page_if), 'endWhen': hdr.index(end_if),
            'itemKeys': keys('10163500'), 'needKeys': keys('10163800')}


def item_info():
    """K8: NCVIPShopItemInfoWnd (MultiSellItemInfo). Tabelas de encantamento (6 doubles por grau de cristal) lidas do
    NWindow.dll: P.Atk @0x1027df48/0x1027df78/0x1027dfa8, M.Atk @0x10351020/50/80, defesa @0x1027dfd8; limites do texto de
    velocidade de ataque (0x10145ed0, cmp eax, imm) e os sysstring do switch (FString em GL2GameData+off)."""
    import re
    import struct
    sys.path.insert(0, os.path.join(L2ANIM, 'scripts'))
    import pe_util
    import capstone
    pe = pe_util.PE(os.path.join(CLIENT, 'System', 'NWindow.dll'))

    def tab(a):
        return list(struct.unpack_from('<6d', pe.b, pe.off(a)))
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    cmps = []
    for ins in md.disasm(pe.b[pe.off(0x10145ed0):pe.off(0x10145ed0) + 0xc0], 0x10145ed0):
        if ins.mnemonic == 'int3':
            break
        if ins.mnemonic == 'cmp' and ins.op_str.startswith('eax, 0x'):
            cmps.append(int(ins.op_str.split(', ')[1], 16))
    b = decomp('nwindow', '10145ed0')
    ss = [(int(o, 16) - 0x6A8DC) // 12 for o in re.findall(r'GL2GameData_exref \+ (0x[0-9a-f]+)\)', b)]
    return {'patk': [tab(0x1027df48), tab(0x1027df78), tab(0x1027dfa8)], 'matk': [tab(0x10351020), tab(0x10351050), tab(0x10351080)],
            'def': tab(0x1027dfd8), 'speedLimits': cmps, 'speedStrings': ss}


def pawn_select():
    """G (lobby): NCPawnSelectWnd::OnPaint (0x1017e280). Tabela de EXP int64 por nivel em 0x1028b320 + 8*L (lida do
    NWindow.dll ate o primeiro valor que nao cresce), a largura maxima da barra de EXP (double em 0x1028b880) e o formato
    do nivel (0x1028757c)."""
    import struct
    sys.path.insert(0, os.path.join(L2ANIM, 'scripts'))
    import pe_util
    pe = pe_util.PE(os.path.join(CLIENT, 'System', 'NWindow.dll'))
    t = []
    for lv in range(0, 90):
        v = struct.unpack_from('<q', pe.b, pe.off(0x1028b320 + 8 * lv))[0]
        if lv > 2 and t and v <= t[-1]:
            break
        t.append(v)
    return {'exp': t, 'expBarMax': struct.unpack_from('<d', pe.b, pe.off(0x1028b880))[0], 'levelFormat': pe.wstr(0x1028757c)}


def dat_hashes():
    """Saida do scripts/l2dec413.py (referencia) para os .dat do cliente: tamanho e SHA-256 do conteudo decifrado."""
    dec = module('l2dec413')
    out = {}
    for name in ['sysstring-e.dat', 'systemmsg-e.dat', 'commandname-e.dat', 'obscene-e.dat', 'skillgrp.dat']:
        raw = open(os.path.join(CLIENT, 'System', name), 'rb').read()
        data = dec.decrypt(raw)
        out[name] = {'size': len(data), 'sha256': hashlib.sha256(data).hexdigest(), 'head': data[:32].hex()}
    raw = open(os.path.join(CLIENT, 'System', 'Interface.u'), 'rb').read()
    body = bytes(b ^ 0xAC for b in raw[28:])
    out['Interface.u'] = {'size': len(body), 'sha256': hashlib.sha256(body).hexdigest(), 'head': body[:32].hex()}
    return out


if __name__ == '__main__':
    write('requests.json', requests())
    write('protocol.json', dict(protocol_block(), **game_static_key()))
    write('dat_files.json', dat_hashes())
    write('chat.json', dict(chat_prefixes(), antiflood=antiflood(), obscene=obscene()))
    write('texts.json', texts())
    write('native_layout.json', dict(native_layout(), logos=logos()))
    write('xdat_rects.json', xdat_rects())
    write('xdat_fields.json', xdat_fields())
    write('windowsinfo.json', windows_info())
    write('option_ini.json', option_ini())
    write('received.json', received())
    write('skillgrp.json', skillgrp())
    write('shortcuts.json', shortcuts())
    write('camera.json', camera())
    write('movement.json', movement())
    write('combat.json', combat())
    write('skills.json', skills())
    write('commands.json', commands())
    write('login_msgs.json', login_msgs())
    write('packet_layouts.json', packet_layouts())
    write('target_status.json', target_status())
    write('etc_status.json', etc_status())
    write('special_digit.json', special_digit())
    write('party.json', party())
    write('wnd_defpos.json', wnd_defpos())
    write('zone_names.json', zone_names())
    write('minimap.json', minimap())
    write('chat_list.json', chat_list())
    write('multisell.json', multisell())
    write('item_info.json', item_info())
    write('pawn_select.json', pawn_select())
