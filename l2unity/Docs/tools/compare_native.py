"""G: compara capturas do original e do Unity (mesma resolucao fisica) com os retangulos das telas nativas desenhados
por cima (Golden/native_layout.json, escala = DPI do Windows) e mede, em cada retangulo, a diferenca media de pixels.

Uso: python -I Docs/tools/compare_native.py <res 1024x768> <escala 1.25> <original.png> <unity.png> <telas,...> <saida.png>
"""
import json
import os
import sys

from PIL import Image, ImageChops, ImageDraw, ImageStat

HERE = os.path.dirname(os.path.abspath(__file__))
G = json.load(open(os.path.join(HERE, '..', '..', 'Assets', 'L2Web', 'Tests', 'Editor', 'Golden', 'native_layout.json'), encoding='utf-8'))
res, scale, orig, unity, screens, out = sys.argv[1], float(sys.argv[2]), sys.argv[3], sys.argv[4], sys.argv[5].split(','), sys.argv[6]
# janela-mae de cada tela (para os controles relativos); as que nao tem rect proprio ficam na tela
PARENT = {'NCServerSelectWnd': (354, 113), 'NCServerSelectListCtrl': None, 'NCServerInfoWnd': (354, 113)}


def rects(W, H):
    out = []
    for scr in screens:
        rows = G[res][scr]
        base = (0, 0)
        if scr in ('NCServerSelectWnd', 'NCServerInfoWnd'):
            base = ((W - 316) // 2, (H - 542) // 2)
        if scr == 'NCServerSelectListCtrl':
            base = ((W - 316) // 2, (H - 542) // 2)
        win = None
        for i, r in enumerate(rows):
            if not r['rect'] or None in r['rect']:
                continue
            x, y, w, h = r['rect']
            if win is None and r['class'].startswith('(a própria') :
                win = (base[0] + x, base[1] + y)
                out.append((scr, i, win[0], win[1], w, h))
            elif win:
                out.append((scr, i, win[0] + x, win[1] + y, w, h))
            else:
                out.append((scr, i, base[0] + x, base[1] + y, w, h))
    return out


a = Image.open(orig).convert('RGB')
b = Image.open(unity).convert('RGB').resize(a.size)
W, H = int(round(a.size[0] / scale)), int(round(a.size[1] / scale))
report = []
for im in (a, b):
    d = ImageDraw.Draw(im)
    for scr, i, x, y, w, h in rects(W, H):
        d.rectangle([x * scale, y * scale, (x + w) * scale - 1, (y + h) * scale - 1], outline=(255, 0, 0))
for scr, i, x, y, w, h in rects(W, H):
    box = tuple(int(v) for v in (x * scale, y * scale, (x + w) * scale, (y + h) * scale))
    diff = sum(ImageStat.Stat(ImageChops.difference(a.crop(box), b.crop(box))).mean) / 3
    report.append((scr, i, x, y, w, h, round(diff, 1)))
sheet = Image.new('RGB', (a.size[0] * 2 + 8, a.size[1]), 'white')
sheet.paste(a, (0, 0))
sheet.paste(b, (a.size[0] + 8, 0))
sheet.save(out)
for r in report:
    print('%-26s %2d (%4d,%4d,%3d,%3d) dif media %5.1f' % r)
