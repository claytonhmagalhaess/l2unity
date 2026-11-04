import os, sys; sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import numpy as np, json, math, os
from collections import Counter, defaultdict
from classify import classify
import multi as M  # reaproveita cell_layers/surfaces (roda o resumo de novo, sem problema)
o = json.load(open('spawns.json'))
# classificacao final por ponto, com a camada certa nas celulas de 3+ camadas
final = []
for p in o:
    x, y, z = p['x'], p['y'], p['z']; rx, ry = math.floor(x/32768)+20, math.floor(y/32768)+18; t = f'{rx}_{ry}'
    c = p['c']; nlay = None
    if os.path.exists(f'{M.SA}/geodata/{t}.l2d') and c != 'sem-geo':
        L = M.cell_layers(x, y); nlay = len(L)
        if nlay > 2:
            g = min(L, key=lambda h: abs(h-z)); S = M.surfaces(t, x, y)
            ue = M.uecache.get(t)
            if ue is None: ue = M.uecache[t] = np.load(f'sweep/{t}.npz')['ue']
            cx, cy = int((x-(rx-20)*32768)//16), int((y-(ry-18)*32768)//16)
            if ((S >= g-48) & (S <= g+8)).any(): c = 'piso'
            elif ue.size and -20 <= g-ue[cy, cx] <= 84: c = 'terreno'
            else: c = 'flutua' if (ue.size and g-ue[cy, cx] > 84) else 'afunda'
    final.append(dict(p, c=c, tile=t, layers=nlay))
json.dump(final, open('spawns_final.json', 'w'))
per = defaultdict(Counter)
for p in final: per[p['tile']][p['c']] += 1; per[p['tile']]['n'] += 1; per[p['tile']]['multi'] += 1 if (p['layers'] or 0) > 2 else 0
rows = []
for f in sorted(f for f in os.listdir('sweep') if f.endswith('_cls.npz')):
    t = f[:-8]; r, hasue = classify(t); z = np.load(f'sweep/{t}.npz')
    lo = z['lo'].reshape(256, 8, 256, 8); flat = np.kron(lo.max(axis=(1, 3)) == lo.min(axis=(1, 3)), np.ones((8, 8), bool))
    n = r['lo']['n'] + r['hi']['n']
    fu = r['lo']['fu'] | r['hi']['fu']; fd = r['lo']['fd'] | r['hi']['fd']
    fora_np = (((r['lo']['fu'] | r['lo']['fd']) & ~flat).sum() + ((r['hi']['fu'] | r['hi']['fd']) & ~flat).sum()) / max(1, n)
    if hasue:
        d = (z['lo'].astype(np.float32) - z['ue'])[z['nl'] == 1]; q = np.percentile(d, [5, 50, 95, 99])
    else: q = None
    s = per.get(t, Counter())
    rows.append((t, hasue, q, (r['lo']['piso']+r['hi']['piso'])/n, (r['lo']['ter']+r['hi']['ter'])/n, (r['lo']['up']+r['hi']['up']+r['lo']['down']+r['hi']['down'])/n, fora_np, s))
L = []
L.append('| Tile | Terreno UE | geodata − terreno: p5 / mediana / p95 / p99 | Células: piso / terreno / fora | Fora sem blocos planos | Pontos do servidor | No chão antes | No chão depois | Pontos em 3+ andares |')
L.append('|---|---|---|---|---|---|---|---|---|')
tot = Counter()
for t, hasue, q, pi, te, fo, fnp, s in rows:
    n = s['n']; before = s['piso']; after = s['piso'] + s['terreno']
    tot['n'] += n; tot['before'] += before; tot['after'] += after; tot['multi'] += s['multi']
    qs = ' / '.join(f'{v:.0f}' for v in q) if q is not None else '—'
    pct = lambda a: f'{a/n*100:.1f}%' if n else '—'
    L.append(f"| {t} | {'sim' if hasue else 'não'} | {qs} | {pi*100:.1f}% / {te*100:.1f}% / {fo*100:.1f}% | {fnp*100:.2f}% | {n} | {pct(before)} | {pct(after)} | {s['multi']} |")
open('tabela.md', 'w', encoding='utf-8').write('\n'.join(L) + '\n')
by = Counter(p['c'] for p in final)
kinds = defaultdict(Counter)
for p in final: kinds[p['kind']][p['c']] += 1
print('total', dict(by)); print({k: dict(v) for k, v in kinds.items()}); print(dict(tot))
res = [p for p in final if p['c'] in ('flutua', 'afunda')]
g = defaultdict(list)
for p in res: g[p['tile']].append(p)
R = ['| Tile | Pontos | Exemplos (nome, x, y, z do servidor) |', '|---|---|---|']
for t, v in sorted(g.items(), key=lambda kv: -len(kv[1])):
    ex = '; '.join(f"{p['name'] or p['kind']} ({p['x']}, {p['y']}, {p['z']}) {p['c']}" for p in v[:3])
    R.append(f'| {t} | {len(v)} | {ex} |')
open('residuos.md', 'w', encoding='utf-8').write('\n'.join(R) + '\n')
