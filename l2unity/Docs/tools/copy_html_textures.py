"""#0055: copia para StreamingAssets/L2Web as texturas que os HTMLs do servidor citam e que ainda nao estavam la.

Os pacotes ja foram exportados pelo tools/l2anim/scripts/build_ui_sprites.py (umodel) em tools/l2anim/out/tool/ui:
  sek/<nome>.png          (sem grupo)  -> chaves "sek.<nome>"           ex.: sek.cbui94 / sek.cbui92 (738 botoes do
                                                                            admin e dos servidores privados)
  default/<grupo>/<nome>  (com grupo)  -> "default.<grupo>.<nome>" e "default.<nome>"  ex.: Default.BlackTexture e
                                                                            Default.WhiteTexture, padrao do back/fore do
                                                                            <button> (NCHtmlTagInfo::LoadHtml)
Destino: cache/ui/<pacote>/Texture/<nome>.png e cache/ui/textures.json (mesmo formato das outras: [url, w, h, w, h]).
Nao sobrescreve chave que ja existe no textures.json.

Idempotente. Uso: python -I Docs/tools/copy_html_textures.py [raiz_do_workspace] [destino_L2Web]
  raiz: C:\\Users\\Clayton\\workspace-claude\\L2Unity-workspace
  destino: <raiz>\\shared\\StreamingAssets-L2Web
"""
import glob
import json
import os
import shutil
import sys

from PIL import Image

ROOT = sys.argv[1] if len(sys.argv) > 1 else r'C:\Users\Clayton\workspace-claude\L2Unity-workspace'
DST = sys.argv[2] if len(sys.argv) > 2 else os.path.join(ROOT, 'shared', 'StreamingAssets-L2Web')
SRC = os.path.join(ROOT, 'tools', 'l2anim', 'out', 'tool', 'ui')
PACKAGES = ['sek', 'default']


def main():
    idx_path = os.path.join(DST, 'cache', 'ui', 'textures.json')
    with open(idx_path, encoding='utf-8') as f:
        idx = json.load(f)
    total = 0
    for pkg in PACKAGES:
        src = os.path.join(SRC, pkg)
        if not os.path.isdir(src):
            print(pkg, ': nao exportado em', src)
            continue
        out_dir = os.path.join(DST, 'cache', 'ui', pkg, 'Texture')
        os.makedirs(out_dir, exist_ok=True)
        n = 0
        for png in sorted(glob.glob(os.path.join(src, '**', '*.png'), recursive=True)):
            rel = os.path.relpath(png, src).replace('\\', '/')
            parts = rel[:-4].split('/')
            name = parts[-1]
            group = parts[0] if len(parts) > 1 else None
            dst_png = os.path.join(out_dir, name + '.png')
            if not os.path.exists(dst_png):
                shutil.copyfile(png, dst_png)
            w, h = Image.open(png).size
            entry = ['/ui/%s/Texture/%s.png' % (pkg, name), w, h, w, h]
            keys = [('%s.%s' % (pkg, name)).lower()]
            if group:
                keys.insert(0, ('%s.%s.%s' % (pkg, group, name)).lower())
            for k in keys:
                if k not in idx:
                    idx[k] = entry
                    n += 1
        total += n
        print(pkg, ':', n, 'chaves novas ->', out_dir)
    with open(idx_path, 'w', encoding='utf-8') as f:
        json.dump(idx, f, separators=(',', ':'))
    print('total', total)


if __name__ == '__main__':
    main()
