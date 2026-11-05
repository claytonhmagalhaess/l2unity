"""Texturas de cache/raw que ninguem usa (tarefa #0023, fase 2).

1. Candidatas: PNG de cache/raw cujo nome (sem diferenciar caixa) nao aparece como palavra em nenhum .json/.js de
   StreamingAssets/L2Web fora de cache/raw, nem como caminho /raw/...; L2_Skies fica sempre (o L2Sky monta o nome no
   codigo) e nomes com caracteres fora de [A-Za-z0-9_-] tambem ficam. O FxAssets monta /raw/<pacote>/Texture/<nome>.png
   pelo nome da referencia, por isso a palavra basta para manter.
2. Confirmacao: os logs do cliente rodado com -l2rawlog ("[raw] 200 /raw/..." e "[raw] 404 /raw/..."); uma candidata
   pedida em qualquer log fica.
3. --apply: move as que sobraram (PNG e .meta) para --backup, mantendo o caminho relativo, e grava a lista.

Uso: python -I Docs/tools/raw_unused.py [--log arquivo]... [--out Docs/raw_sem_uso.tsv] [--backup PASTA] [--apply]
     python -I Docs/tools/raw_unused.py --restore    (devolve do backup para cache/raw o que a lista registra)
"""
import os
import re
import shutil
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.normpath(os.path.join(HERE, '..', '..', 'Assets', 'StreamingAssets', 'L2Web'))
RAW = os.path.join(ROOT, 'cache', 'raw')
BACKUP = r'C:\Users\Clayton\workspace-claude\L2Unity-workspace\backup\0023\raw'
OUT = os.path.join(HERE, '..', 'raw_sem_uso.tsv')
KEEP_PKGS = {'l2_skies'}
WORD = re.compile(r'[a-z0-9_\-]+')


def args(name):
    return [sys.argv[i + 1] for i, a in enumerate(sys.argv[:-1]) if a == name]


def corpus():
    """Palavras e caminhos /raw/ de todo .json/.js lido pelo cliente (fora de cache/raw)."""
    words, paths = set(), set()
    for r, dirs, fs in os.walk(ROOT):
        if os.path.normpath(r) == RAW:
            dirs[:] = []
            continue
        for f in fs:
            if f.endswith(('.json', '.js')):
                t = open(os.path.join(r, f), encoding='utf-8', errors='replace').read().lower()
                words.update(WORD.findall(t))
                paths.update(re.findall(r'/raw/[^"\s\\]+', t))
    return words, paths


def candidates():
    words, paths = corpus()
    out = []
    for r, _, fs in os.walk(RAW):
        for f in fs:
            if not f.lower().endswith('.png'):
                continue
            rel = os.path.relpath(os.path.join(r, f), RAW).replace(os.sep, '/')
            stem = f[:-4].lower()
            if rel.split('/')[0].lower() in KEEP_PKGS or not WORD.fullmatch(stem):
                continue
            if stem in words or '/raw/' + rel.lower() in paths:
                continue
            out.append((rel, os.path.getsize(os.path.join(r, f))))
    return sorted(out)


def requested(logs):
    """Caminhos /raw/ pedidos nos logs do -l2rawlog (relativos a cache/raw, minusculos) e as contagens 200/404."""
    seen, n200, n404 = set(), set(), set()
    for lf in logs:
        for line in open(lf, encoding='utf-8', errors='replace'):
            m = re.search(r'\[raw\] (200|404) /raw/(\S+)', line)
            if m:
                p = m.group(2).lower()
                seen.add(p)
                (n200 if m.group(1) == '200' else n404).add(p)
    return seen, n200, n404


def main():
    out = (args('--out') or [OUT])[0]
    backup = (args('--backup') or [BACKUP])[0]
    if '--restore' in sys.argv:
        n = 0
        for line in open(out, encoding='utf-8'):
            if line.startswith('#') or not line.strip():
                continue
            rel = line.split('\t')[0]
            for suffix in ('', '.meta'):
                src = os.path.join(backup, rel + suffix)
                if os.path.exists(src):
                    dst = os.path.join(RAW, rel + suffix)
                    os.makedirs(os.path.dirname(dst), exist_ok=True)
                    shutil.move(src, dst)
                    n += suffix == ''
        print('devolvidos', n)
        return
    logs = args('--log')
    cand = candidates()
    seen, n200, n404 = requested(logs)
    final = [(r, s) for r, s in cand if r.lower() not in seen]
    asked = len(cand) - len(final)
    total = sum(s for _, s in final)
    print(f'candidatas {len(cand)} ({sum(s for _, s in cand) / 1e9:.3f} GB); pedidas no percurso {len(seen)} '
          f'(200: {len(n200)}, 404: {len(n404)}), {asked} delas candidatas; saem {len(final)} ({total / 1e9:.3f} GB)')
    if not logs:
        print('sem --log: so a lista candidata, nada movido')
    with open(out, 'w', encoding='utf-8', newline='\n') as f:
        f.write(f'# #0023 fase 2: {len(final)} PNG de cache/raw sem uso, {total} bytes ({total / 1e9:.3f} GB); '
                f'{"movidos para " + backup if "--apply" in sys.argv else "candidatas"}; logs: {", ".join(os.path.basename(x) for x in logs) or "-"}\n')
        for r, s in final:
            f.write(f'{r}\t{s}\n')
    if '--apply' in sys.argv:
        if not logs:
            sys.exit('--apply exige --log (a confirmacao em execucao)')
        for r, _ in final:
            for suffix in ('', '.meta'):
                src = os.path.join(RAW, r + suffix)
                if os.path.exists(src):
                    dst = os.path.join(backup, r + suffix)
                    os.makedirs(os.path.dirname(dst), exist_ok=True)
                    shutil.move(src, dst)
        print('movidos', len(final), 'para', backup)


if __name__ == '__main__':
    main()
