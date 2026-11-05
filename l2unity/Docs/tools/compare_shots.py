"""Compara capturas do mesmo ponto (antes/depois da #0023, ou PNG x BC da fase 3): por par, a fracao de pixels
diferentes (qualquer canal), a fracao com diferenca > 8 e a media absoluta por canal, e uma folha lado a lado
(A | B | diferenca x8) reduzida a metade.

Uso: python -I Docs/tools/compare_shots.py <saida.md> <rotulo> <a.png> <b.png> [<rotulo> <a.png> <b.png> ...]
     acrescenta uma linha por par na tabela de <saida.md> (cria o arquivo com o cabecalho) e grava
     <pasta de saida>/<rotulo>_lado_a_lado.png
"""
import os
import sys

import numpy as np
from PIL import Image


def compare(a_path, b_path):
    a = np.asarray(Image.open(a_path).convert('RGB')).astype(np.int16)
    b = np.asarray(Image.open(b_path).convert('RGB')).astype(np.int16)
    if a.shape != b.shape:
        raise SystemExit(f'tamanhos diferentes: {a_path} {a.shape} x {b_path} {b.shape}')
    d = np.abs(a - b)
    m = d.max(axis=2)
    return dict(px=float((m > 0).mean()), px8=float((m > 8).mean()), mean=float(d.mean()), max=int(d.max())), a, b, d


def sheet(a, b, d, out):
    h, w, _ = a.shape
    s = np.concatenate([a, b, np.clip(d * 8, 0, 255)], axis=1).astype(np.uint8)
    Image.fromarray(s).resize((w * 3 // 2, h // 2), Image.LANCZOS).save(out)


def main():
    out = sys.argv[1]
    rest = sys.argv[2:]
    new = not os.path.exists(out)
    with open(out, 'a', encoding='utf-8', newline='\n') as f:
        if new:
            f.write('| captura | A | B | pixels diferentes | diferença > 8 | média abs. | máx. |\n|---|---|---|---|---|---|---|\n')
        for i in range(0, len(rest), 3):
            label, ap, bp = rest[i:i + 3]
            r, a, b, d = compare(ap, bp)
            sheet(a, b, d, os.path.join(os.path.dirname(out), label + '_lado_a_lado.png'))
            rel = lambda p: os.path.relpath(p, os.path.dirname(out)).replace(os.sep, '/')  # noqa: E731
            f.write(f'| {label} | `{rel(ap)}` | `{rel(bp)}` | {r["px"] * 100:.2f}% | {r["px8"] * 100:.2f}% | {r["mean"]:.3f} | {r["max"]} |\n')
            print(label, r)


if __name__ == '__main__':
    main()
