"""#0047: copia para StreamingAssets/L2Web os assets da interface que o l2unity usa e que ainda nao estavam la.

1. L2_SkillTime (ToggleEffect001..013, Rotation_Type/cooltime0..359, CooltimeEnd001..009), ja exportados pelo
   tools/l2anim/scripts/build_ui_sprites.py em tools/l2anim/out/tool/ui/l2_skilltime/<grupo>/<nome>.png:
   -> cache/ui/l2_skilltime/Texture/<nome>.png e as chaves "l2_skilltime.<grupo>.<nome>" e "l2_skilltime.<nome>" no
   cache/ui/textures.json (mesmo formato das outras: [url, w, h, w, h]).
   Usados pela barra de atalhos (NCShortcutItemWnd::OnPaint nw:0x10047b40).
2. Os .htm de ajuda do cliente (help*.htm e pet_help*.htm, ainda cifrados em Lineage2Ver111; o LobbyServerScreen.ReadL2Text
   decifra) -> client/l2text/. Usados pela HelpHtmlWnd (EV_ShowHelp) e pela UserPetitionWnd (PetitionCategoryLink).

Idempotente. Uso: python -I Docs/tools/copy_ui_assets.py [raiz_do_workspace] [destino_L2Web]
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
SRC_UI = os.path.join(ROOT, 'tools', 'l2anim', 'out', 'tool', 'ui', 'l2_skilltime')
SRC_TXT = os.path.join(ROOT, 'reference', 'l2-interlude', 'client', 'l2text')


def skilltime():
    out_dir = os.path.join(DST, 'cache', 'ui', 'l2_skilltime', 'Texture')
    os.makedirs(out_dir, exist_ok=True)
    idx_path = os.path.join(DST, 'cache', 'ui', 'textures.json')
    with open(idx_path, encoding='utf-8') as f:
        idx = json.load(f)
    n = 0
    for group in ('ToggleEffect', 'Rotation_Type', 'CooltimeEnd'):
        for png in sorted(glob.glob(os.path.join(SRC_UI, group, '*.png'))):
            name = os.path.splitext(os.path.basename(png))[0]
            shutil.copyfile(png, os.path.join(out_dir, name + '.png'))
            w, h = Image.open(png).size
            entry = ['/ui/l2_skilltime/Texture/%s.png' % name, w, h, w, h]
            idx[('l2_skilltime.%s.%s' % (group, name)).lower()] = entry
            idx[('l2_skilltime.%s' % name).lower()] = entry
            n += 1
    with open(idx_path, 'w', encoding='utf-8') as f:
        json.dump(idx, f, separators=(',', ':'))
    print('l2_skilltime:', n, 'texturas ->', out_dir)


def l2text():
    out_dir = os.path.join(DST, 'client', 'l2text')
    os.makedirs(out_dir, exist_ok=True)
    files = sorted(glob.glob(os.path.join(SRC_TXT, 'help*.htm')) + glob.glob(os.path.join(SRC_TXT, 'pet_help*.htm')))
    for f in files:
        shutil.copyfile(f, os.path.join(out_dir, os.path.basename(f)))
    print('l2text:', len(files), 'arquivos ->', out_dir)


if __name__ == '__main__':
    skilltime()
    l2text()
