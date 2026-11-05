#!/bin/sh
# Refresca os assets no Editor aberto e recompila; imprime os erros de compilacao (uso: sh compile.sh)
P="$(cd "$(dirname "$0")" && pwd -W)"
unity command script eval --project-path "$P" --caller plugin --skill unity-cli --code 'UnityEditor.AssetDatabase.Refresh(); return "ok";' --format json >/dev/null 2>&1
unity recompile --project-path "$P" --timeout 300 --format json 2>&1 | python -c "
import sys,json
d=json.load(sys.stdin)
data=d.get('data') or {}
print('status:', data.get('status'), 'errors:', (data.get('summary') or {}).get('errors'), 'warnings:', (data.get('summary') or {}).get('warnings'))
for e in (data.get('errors') or [])[:80]:
    print(e if isinstance(e,str) else (e.get('file','')+':'+str(e.get('line',''))+': '+e.get('message','')))
if not d.get('success'): print(d.get('errors'))
"
