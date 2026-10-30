# #0023 fase 1: capturas antes/depois das texturas únicas

Mesmo executável (`L2WebBuild.Windows` do branch `feat/render-texturas-unicas`), 1920×1080, assets locais. "antes" = build com
`cache/statics` original (5,99 GB de `.glb` com PNG embutido); "depois" = build novo com os `.glb` reescritos + `cache/statics_tex`.

- Lobby: tela de login (que já mostra a cena do lobby) aos 45 s, `-l2shotat 45`. TI, Gludio e Giran: vista offline
  (`-l2offline 60`, `-l2offlinepos x,y,z`; Giran é o ponto padrão), 12:00 forçado.
- As linhas `ruido_*` comparam duas execuções **iguais** (mesmo build, mesmos dados): é a variação natural entre execuções
  (animação de espera dos personagens, câmera e luz do lobby, que dependem do instante em que a carga termina).
- Resultado: em TI e Gludio a diferença antes×depois é a mesma do ruído; em Giran a diferença > 8 fica só nos personagens
  (`giran_diferenca_maior_que_8.png`: vermelho = diferença > 8), que vêm do `l2anim` e não foram mexidos; no lobby o ruído entre
  execuções iguais (99,98%) é maior que antes×depois, então a diferença de pixels não mede nada ali, e a olho a cena é a mesma
  (`lobby_lado_a_lado.png`).
- Prova independente das capturas: `python -I Docs/tools/dedup_statics_tex.py --verify` compara cada um dos 6.571 originais do
  backup com o `.glb` reescrito (JSON fora das imagens, bytes de cada accessor, bytes de cada imagem contra o PNG apontado):
  `{"verified": 6571, "different": 0}`.
- `*_lado_a_lado.png`: A | B | diferença ×8, reduzidas à metade.

| captura | A | B | pixels diferentes | diferença > 8 | média abs. | máx. |
|---|---|---|---|---|---|---|
| lobby | `antes/lobby/shot_45.png` | `depois/lobby/shot_45.png` | 94.48% | 45.16% | 7.920 | 235 |
| ruido_lobby | `depois/lobby/shot_45.png` | `ruido/lobby/shot_45.png` | 99.98% | 99.32% | 32.115 | 251 |
| talking_island | `antes/ti/offline.png` | `depois/ti/offline.png` | 13.90% | 0.21% | 0.141 | 194 |
| ruido_talking_island | `depois/ti/offline.png` | `ruido/ti/offline.png` | 13.99% | 0.28% | 0.157 | 178 |
| gludio | `antes/gludio/offline.png` | `depois/gludio/offline.png` | 12.55% | 0.38% | 0.164 | 181 |
| ruido_gludio | `depois/gludio/offline.png` | `ruido/gludio/offline.png` | 12.59% | 0.38% | 0.164 | 177 |
| giran | `antes/giran/offline.png` | `depois/giran/offline.png` | 3.55% | 1.01% | 0.285 | 220 |
| ruido_giran | `antes/giran/offline.png` | `ruido/giran/offline.png` | 2.12% | 0.06% | 0.035 | 206 |
