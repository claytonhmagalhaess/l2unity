#!/bin/sh
# Teste ponta a ponta no Editor: Play mode, login, servidor, personagem, mundo; capturas em $S.
P="$(cd "$(dirname "$0")" && pwd -W)"
S="${S:-/c/Users/Clayton/AppData/Local/Temp/claude/C--Users-Clayton-My-project/09e7e9fd-83d7-421d-8453-506df9ff9b15/scratchpad/e2e}"
mkdir -p "$S"
E() { unity command script eval --project-path "$P" --caller plugin --skill unity-cli --code "$1" --format json 2>&1 | grep '"result"' | tail -1 | sed 's/.*"result": //'; }
cap() { E 'var t=System.Type.GetType("UnityEditor.GameView,UnityEditor"); foreach (var w in UnityEngine.Resources.FindObjectsOfTypeAll(t)) ((UnityEditor.EditorWindow)w).Repaint(); UnityEditor.EditorApplication.QueuePlayerLoopUpdate(); return "ok";' >/dev/null; sleep 1; unity command capture game_view --source screen --save_path "Assets/Temp/$1.png" --project-path "$P" --caller plugin --skill unity-cli --format json >/dev/null 2>&1; mv "Assets/Temp/$1.png" "$S/" 2>/dev/null; rm -f "Assets/Temp/$1.png.meta"; echo "captura $S/$1.png"; }
logs() { unity command console get --tail ${1:-40} --level ${2:-error} --project-path "$P" --caller plugin --skill unity-cli --format json 2>&1 | python -c "
import sys,json;d=json.load(sys.stdin);r=(d.get('data') or {}).get('result') or {}
es=r.get('entries') or r.get('logs') or []
print(len(es),'entradas')
for e in es[-40:]: print(' ', (e.get('type') or e.get('level')), (e.get('message') or '').replace(chr(10),' | ')[:400])
"; }
case "$1" in
  start)
    unity command console clear --project-path "$P" --caller plugin --skill unity-cli >/dev/null 2>&1
    unity command editor.playmode start --project-path "$P" --caller plugin --skill unity-cli --format json 2>&1 | grep -m1 success
    sleep 25; E 'return L2Web.App.Instance.CurrentScreen;' ;;
  login)
    E 'L2Web.App.Instance.autoServer = true; L2Web.App.Instance.TestLogin("'"${2:-l2webtest}"'","'"${3:-l2webtest}"'"); return "ok";'
    sleep 10; E 'var a=L2Web.App.Instance; return a.CurrentScreen + " chars=" + a.Chars.Count;' ;;
  enter)
    E 'L2Web.App.Instance.TestEnter('"${2:-0}"'); return "ok";'
    sleep ${3:-25}; E 'var a=L2Web.App.Instance; var s=a.World.Self; return a.CurrentScreen + " inWorld=" + a.InWorld + " ents=" + a.World.Entities.Count + (s==null?"":" self="+s.Name+" "+s.X+","+s.Y+","+s.Z);' ;;
  eval) E "$2" ;;
  cap) cap "$2" ;;
  logs) logs "$2" "$3" ;;
  stop) unity command editor.playmode stop --project-path "$P" --caller plugin --skill unity-cli --format json 2>&1 | grep -m1 success ;;
esac
