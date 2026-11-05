"""K8: atributos dos itens para a MultiSellItemInfo (NCVIPShopItemInfoWnd recarrega os campos das tabelas do cliente):
weapongrp / armorgrp (l2anim/txt, exportadas do cliente) e ItemName-e (nome adicional e descricao). Grava
StreamingAssets/L2Web/cache/itemdata.json: {"w": {id: [...]}, "a": {id: [...]}, "n": {id: [add_name, description]}}.

Uso: python -I Docs/tools/export_itemdata.py [pasta_txt] [saida]
"""
import json
import os
import sys

TXT = sys.argv[1] if len(sys.argv) > 1 else r'C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim\txt'
OUT = sys.argv[2] if len(sys.argv) > 2 else os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', 'Assets',
                                                         'StreamingAssets', 'L2Web', 'cache', 'itemdata.json')
W_COLS = ['weight', 'material', 'durability', 'weapon_type', 'crystal_type', 'patt', 'matt', 'shield_pdef', 'shield_rate', 'avoid_mod',
          'speed', 'SS_count', 'SPS_count', 'body_part', 'mp_consume']
A_COLS = ['weight', 'material', 'durability', 'armor_type', 'crystal_type', 'avoid_mod', 'pdef', 'mdef', 'mpbonus', 'body_part']


def rows(name):
    with open(os.path.join(TXT, name), encoding='utf-8', errors='replace') as f:
        head = f.readline().rstrip('\n').split('\t')
        for line in f:
            v = line.rstrip('\n').split('\t')
            yield dict(zip(head, v))


def num(s):
    try:
        return int(s)
    except ValueError:
        try:
            return float(s)
        except ValueError:
            return 0


def text(s):
    # formato do exportador: "a," + texto + "\0"
    if s.startswith('a,'):
        s = s[2:]
    return s.replace('\\0', '').strip()


def main():
    out = {'wcols': W_COLS, 'acols': A_COLS, 'w': {}, 'a': {}, 'n': {}}
    for r in rows('weapongrp.txt'):
        out['w'][r['id']] = [num(r.get(c, '0')) for c in W_COLS]
    for r in rows('armorgrp.txt'):
        out['a'][r['id']] = [num(r.get(c, '0')) for c in A_COLS]
    for r in rows('ItemName-e.txt'):
        add, desc = text(r.get('add_name', '')), text(r.get('description', ''))
        if add or desc:
            out['n'][r['id']] = [add, desc]
    os.makedirs(os.path.dirname(OUT), exist_ok=True)
    json.dump(out, open(OUT, 'w', encoding='utf-8'), ensure_ascii=False, separators=(',', ':'))
    print('armas', len(out['w']), 'armaduras', len(out['a']), 'nomes', len(out['n']), os.path.getsize(OUT))


if __name__ == '__main__':
    main()
