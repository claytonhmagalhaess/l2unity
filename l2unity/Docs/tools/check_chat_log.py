"""I7: confere, no log de chat do aCis, o tipo de cada Say2 enviado pelo roteiro -l2chat do executavel.

Uso: Build\\L2Web.exe -l2login conta:senha -l2enter 0 -l2chat -l2quit 5 -logFile <log>
     python -I Docs/tools/check_chat_log.py <log> [C:/Workspace-java/aCis_gameserver/log/chat/chat_0.txt]
"""
import re
import sys

NAMES = ["ALL", "SHOUT", "TELL", "PARTY", "CLAN", "GM", "PETITION_PLAYER", "PETITION_GM", "TRADE", "ALLIANCE", "ANNOUNCEMENT",
         "BOAT", "WILLCRASHCLIENT:)", "FAKEALL?", "PARTYMATCH_ROOM", "PARTYROOM_COMMANDER", "PARTYROOM_ALL", "HERO_VOICE",
         "CRITICAL_ANNOUNCEMENT"]  # CHAT_NAMES do Say2.java do aCis

unity_log = sys.argv[1]
acis_log = sys.argv[2] if len(sys.argv) > 2 else r'C:/Workspace-java/aCis_gameserver/log/chat/chat_0.txt'
sent = [l.split('] ', 1)[1] for l in open(unity_log, encoding='utf-8', errors='replace').read().splitlines()
        if l.startswith('[chat] aba')]
log = open(acis_log, encoding='utf-8', errors='replace').read().splitlines()[-200:]
ok, bad = 0, []
for s in sent:
    m = re.match(r'aba=(\d) texto=(.*) tipo esperado=(\d+)', s)
    typ = int(m.group(3))
    key = re.search(r'(p\d\d|t\d)$', m.group(2)).group(1)
    hit = [l for l in log if l.endswith(' ' + key)]
    if hit and (' ' + NAMES[typ] + ' ') in hit[-1]:
        ok += 1
    else:
        bad.append((m.group(2), NAMES[typ], hit[-1] if hit else None))
print(f'{ok} de {len(sent)} com o tipo esperado')
for b in bad:
    print('divergente:', b)
sys.exit(0 if sent and not bad else 1)
