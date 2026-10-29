"""Comparacao do ciclo dia/noite com o original (Docs/iluminacao.md, condicao de conclusao).

Entrada: uma pasta com as capturas do original, nomeadas h03.png, h07.png, h12.png, h20.png e red.png (SSQInfo 259), todas
no mesmo ponto do mundo e na mesma resolucao. Saida: as capturas do porte no mesmo ponto e hora (Build/L2Web.exe com
-l2login/-l2enter/-l2time/-l2ssq) e, por hora, uma folha lado a lado em Docs/evidencias/comparacoes/ilum_cmp_<hora>.png com a
media RGB de tres regioes (ceu, chao, meio) do original e do porte.

Uso: python -I Docs/tools/compare_env.py <pasta_original> <x,y,z> [conta:senha=l2webtest:l2webtest] [slot=0]
Nao roda o cliente original: as capturas dele sao feitas pelo usuario (login proprio, hora pelo comando de GM do aCis).
"""
import os
import subprocess
import sys

from PIL import Image

HERE = os.path.dirname(os.path.abspath(__file__))
PROJ = os.path.abspath(os.path.join(HERE, '..', '..'))
OUT = os.path.join(PROJ, 'Docs', 'evidencias', 'comparacoes')
SHOTS = os.path.join(HERE, '..', 'evidencias', 'ilum_porte')
HOURS = {'h03': ('03:00', None), 'h07': ('07:00', None), 'h12': ('12:00', None), 'h20': ('20:00', None), 'red': ('12:00', 3)}
REGIONS = {'ceu': (0.3, 0.0, 0.7, 0.2), 'meio': (0.3, 0.4, 0.7, 0.6), 'chao': (0.3, 0.8, 0.7, 1.0)}


def avg(im, box):
    w, h = im.size
    c = im.crop((int(box[0] * w), int(box[1] * h), int(box[2] * w), int(box[3] * h))).convert('RGB')
    px = list(c.getdata())
    return tuple(sum(p[i] for p in px) // len(px) for i in range(3))


def main():
    orig = sys.argv[1]
    xyz = sys.argv[2]
    acct = sys.argv[3] if len(sys.argv) > 3 else 'l2webtest:l2webtest'
    slot = sys.argv[4] if len(sys.argv) > 4 else '0'
    os.makedirs(SHOTS, exist_ok=True)
    os.makedirs(OUT, exist_ok=True)
    exe = os.path.join(PROJ, 'Build', 'L2Web.exe')
    for key, (hour, ssq) in HOURS.items():
        d = os.path.join(SHOTS, key)
        os.makedirs(d, exist_ok=True)
        args = [exe, '-screen-fullscreen', '0', '-screen-width', '1920', '-screen-height', '1080', '-l2login', acct, '-l2enter', slot,
                '-l2walk', xyz, '-l2time', hour, '-l2shots', d, '-l2quit', '12', '-logFile', os.path.join(d, 'player.log')]
        if ssq is not None:
            args += ['-l2ssq', str(ssq)]
        print('porte', key, hour, 'ssq', ssq)
        subprocess.run(args, timeout=240)
        ours = None
        for f in sorted(os.listdir(d)):
            if f.endswith('.png'):
                ours = os.path.join(d, f)
        op = os.path.join(orig, key + '.png')
        if not ours or not os.path.exists(op):
            print('  sem captura:', 'porte' if not ours else 'original')
            continue
        a = Image.open(ours).convert('RGB').resize((960, 540))
        b = Image.open(op).convert('RGB').resize((960, 540))
        sheet = Image.new('RGB', (1920, 540))
        sheet.paste(a, (0, 0))
        sheet.paste(b, (960, 0))
        sheet.save(os.path.join(OUT, 'ilum_cmp_%s.png' % key))
        for name, box in REGIONS.items():
            print('  %-5s porte %s original %s' % (name, avg(a, box), avg(b, box)))


if __name__ == '__main__':
    main()
