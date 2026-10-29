"""Gera Assets/L2Web/Scripts/UI/L2EventIds.cs (id de cada EV_* do UIEventManager.uc, out/re/events_script.json) e a fixture
Golden/events.json (por evento: id, origem, chaves montadas pelo nativo e lidas pelo script; pares pacote -> evento do
out/re/chain_verification.json com a tabela e o opcode).

Uso: python -I Docs/tools/gen_events.py [raiz_l2anim]
"""
import json
import os
import sys

L2ANIM = sys.argv[1] if len(sys.argv) > 1 else r'C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim'
RE = os.path.join(L2ANIM, 'out', 're')
HERE = os.path.dirname(os.path.abspath(__file__))
PROJECT = os.path.dirname(os.path.dirname(HERE))

ev = [e for e in json.load(open(os.path.join(RE, 'events_script.json'), encoding='utf-8'))['events'] if not e.get('commented_out')]
native = {e['name']: e for e in json.load(open(os.path.join(RE, 'native_events.json'), encoding='utf-8'))['events']}
origin = json.load(open(os.path.join(RE, 'game_map.json'), encoding='utf-8'))['event_origin']
chain = json.load(open(os.path.join(RE, 'chain_verification.json'), encoding='utf-8'))

lines = ['        public const int %s = %d;' % (e['name'], e['id']) for e in ev]
names = ['            [%d] = "%s",' % (e['id'], e['name']) for e in ev]
src = '''// GERADO por Docs/tools/gen_events.py a partir de l2anim/out/re/events_script.json: nao edite a mao.
// Ids dos eventos EV_* do UIEventManager.uc (os %d ativos, sem os comentados).
using System.Collections.Generic;

namespace L2Web.UI
{
    public static class Ev
    {
%s

        public static readonly Dictionary<int, string> Names = new()
        {
%s
        };
    }
}
''' % (len(ev), '\n'.join(lines), '\n'.join(names))
open(os.path.join(PROJECT, 'Assets', 'L2Web', 'Scripts', 'UI', 'L2EventIds.cs'), 'w', encoding='utf-8', newline='\n').write(src)

out = {'events': {}, 'pairs': []}
for e in ev:
    n = native.get(e['name'], {})
    out['events'][e['name']] = {'id': e['id'], 'origin': origin.get(e['name']), 'native_keys': n.get('native_keys', []),
                                'script_keys': n.get('script_keys', [])}
for c in chain:
    out['pairs'].append({'packet': c['packet'], 'table': c['table'], 'opcode': int(c['opcode'], 16), 'event': c['event'], 'verified': c['verified']})
g = os.path.join(PROJECT, 'Assets', 'L2Web', 'Tests', 'Editor', 'Golden', 'events.json')
json.dump(out, open(g, 'w', encoding='utf-8', newline='\n'), ensure_ascii=False, indent=1)
print(len(ev), 'eventos,', len(out['pairs']), 'pares')
