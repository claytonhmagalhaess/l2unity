Material de apoio sobre o cliente Lineage II Interlude:

1. Cliente original instalado: C:\Program Files (x86)\Lineage II Interlude
   - É um build modificado pelo servidor.
   - Não contorne a proteção: nada de injeção nem leitura de memória.

2. Animações (L2 Animation Lab): C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim
   - Para iniciar, rode node server/serve.mjs e abra http://localhost:8642/. A prévia 3D tem modelos, animações, equipamento, timing de ataque e skill.
   - Leia antes o README.md.
   - Os modelos convertidos ficam em export\cache.
   - Os dados das animações e modelos ficam em out\model_spec.json e out\tool.
   - O pipeline está em scripts\ (umodel → psk/psa/png → l2glb.py → glb).

3. Engenharia reversa do cliente oficial: C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim
   - Especificação em docs\client_spec. Comece por 00_indice.md (índice) e 97_cobertura.md (o que está coberto e o que falta).
   - Evidências em out\re:
     - decomp_all\<módulo>\ guarda o pseudocódigo de todas as funções (engine, core, nwindow, l2, window, fire…), com index.tsv;
     - function_map_<módulo>.json mapeia função → classe;
     - env\ tem a iluminação e o ciclo de dia e noite;
     - maps\ tem o inventário de cada mapa;
     - fx\ tem os efeitos de skill e as partículas (doc 09_efeitos_skill.md).
   - Para buscar no pseudocódigo: python -I C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim\scripts\decomp_get.py C:\Users\Clayton\workspace-claude\L2Unity-workspace\analises\l2-interlude\re <módulo> "<regex>"
   - Fonte de verdade, nesta ordem: o que foi observado em execução, depois o pseudocódigo [O] e, por último, o que foi inferido [I]. Se a spec divergir do pseudocódigo, vale o pseudocódigo.
