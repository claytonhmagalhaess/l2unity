#!/bin/sh
# Roda a suite EditMode em batchmode (com o Editor fechado) e resume Docs/test-results.xml.
P="$(cd "$(dirname "$0")/../.." && pwd -W)"
# sem o resultado antigo: se a compilacao falhar, o resumo abaixo nao mostra testes de outra rodada
rm -f "$P/Docs/test-results.xml"
"/c/Program Files/Unity/Hub/Editor/6000.6.7f1/Editor/Unity.exe" -batchmode -nographics -projectPath "$P" -runTests -testPlatform EditMode \
  -testResults "$P/Docs/test-results.xml" -logFile "$P/Docs/test-log.txt"
echo "exit $?"
L2_RESULTS="$P/Docs/test-results.xml" python -I - <<'PY'
import os
import xml.etree.ElementTree as ET
r = ET.parse(os.environ['L2_RESULTS']).getroot()
print('total', r.get('total'), 'passou', r.get('passed'), 'falhou', r.get('failed'), 'ignorado', r.get('skipped'))
for tc in r.iter('test-case'):
    if tc.get('result') != 'Passed':
        m = tc.find('failure/message') if tc.find('failure/message') is not None else tc.find('reason/message')
        print('-', tc.get('fullname'), tc.get('result'), (m.text if m is not None else '')[:2000])
PY
