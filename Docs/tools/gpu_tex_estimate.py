"""Fase 3 da #0023: quanto ocupariam as texturas em BC (DXT1 sem alfa, DXT5 com alfa), com a cadeia de mips, contra o
PNG em disco e o RGBA32 com mips que o glTFast sobe hoje para a GPU. So mede; nao grava textura nenhuma.

Uso: python -I Docs/tools/gpu_tex_estimate.py <pasta ou lista.txt> [...]   (lista: um caminho de PNG por linha)
"""
import json
import os
import sys

from PIL import Image


def mips(w, h):
    while True:
        yield w, h
        if w == 1 and h == 1:
            return
        w, h = max(1, w // 2), max(1, h // 2)


def files(arg):
    if os.path.isdir(arg):
        for r, _, fs in os.walk(arg):
            for f in fs:
                if f.lower().endswith('.png'):
                    yield os.path.join(r, f)
    else:
        for line in open(arg, encoding='utf-8'):
            if line.strip():
                yield line.strip()


def main():
    t = dict(n=0, alpha=0, png=0, rgba_mips=0, bc_mips=0, bc1_n=0, bc3_n=0, npot=0)
    for arg in sys.argv[1:]:
        for f in files(arg):
            im = Image.open(f)
            w, h = im.size
            has_alpha = False
            if im.mode in ('RGBA', 'LA', 'P') or 'transparency' in im.info:
                a = im.convert('RGBA').getchannel('A').getextrema()
                has_alpha = a[0] < 255
            block = 16 if has_alpha else 8
            t['n'] += 1
            t['alpha'] += has_alpha
            t['png'] += os.path.getsize(f)
            t['bc3_n' if has_alpha else 'bc1_n'] += 1
            t['npot'] += (w & (w - 1)) != 0 or (h & (h - 1)) != 0
            for mw, mh in mips(w, h):
                t['rgba_mips'] += mw * mh * 4
                t['bc_mips'] += ((mw + 3) // 4) * ((mh + 3) // 4) * block
    t['png_GB'] = round(t['png'] / 1e9, 3)
    t['bc_mips_GB'] = round(t['bc_mips'] / 1e9, 3)
    t['rgba_mips_GB'] = round(t['rgba_mips'] / 1e9, 3)
    print(json.dumps(t))


if __name__ == '__main__':
    main()
