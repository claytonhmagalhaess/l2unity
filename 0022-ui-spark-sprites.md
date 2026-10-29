# #0022 — Sprites da HUD do Spark (tema visual)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-sprites` (a partir de `integracao/ui-spark`) |
| Estado | aberta |
| Spec | Mapa visual: `analises\spark-l2unity\hud\uss\*.uss`, `hud\uxml\*.uxml`, `hud\uxml_inventory.md`; texturas em `hud\textures\`. Layout: `Interface.xdat`/`WindowsInfo.ini` (sem mudança) |
| Sessão | ui: sprites da HUD Spark |
| Criada | 2026-10-29 |

## Objetivo

Aplicar na HUD do l2unity as texturas (sprites) da HUD do cliente Spark, como tema selecionável (`ui.tema` = `spark`, padrão, ou `interlude`), sem mudar posição, tamanho nem comportamento de nenhuma janela. O comportamento já foi portado (#0005–#0021, juntos em `integracao/ui-spark`); esta tarefa é só visual.

## Autorização do usuário (só para esta tarefa)

- Revoga a decisão 2 da #0005 **apenas para as texturas** do cliente L2 contidas no Spark (regra 1 abaixo). UXML, USS e código do Spark continuam proibidos de copiar: servem só de mapa.
- A sub-sessão pode criar e escrever em `shared\StreamingAssets-L2Web\client\spark_hud\` (pasta nova). O resto de `shared\` continua só leitura.

## Escopo

**Entra:** as janelas 2D do jogo e do lobby que o porte cobriu: molduras e fundos de janela, barra de título e botão fechar, botões (normal/Over/Down), abas, barras de HP/MP/CP/EXP (gauges), slots e molduras de slot, barra de atalhos, inventário e paperdoll, chat (abas, fundo, botões), party, buffs, alvo, status, menu de ícones, menu de sistema, tooltips, diálogos de confirmação e de quantidade, NpcHtml (botões e ícones QUEST/TELEPORT/RETURN), lojas, troca e armazém, clã e amigos, Opções, e as telas 2D do lobby (login, servidores, seleção e criação de personagem: só os painéis e botões).

**Não entra (não editar):**
- mapa do mundo, minimapa e radar (MinimapView/Model/Script, RadarView), nem a cena 3D;
- câmera e enquadramento, LobbyScene, céu, luz e qualquer coisa de `Render\` ou `World\`;
- nameplates (são da render);
- posição e tamanho das janelas (continuam vindo do Interface.xdat/WindowsInfo.ini);
- comportamento (cliques, teclas, pacotes): se algo quebrar ao trocar a textura, conserte só o necessário para manter igual.

## Regras

1. Só as texturas do cliente L2 (família `*_DF_*`, ícones e molduras do jogo). **Não** usar a arte própria do Spark: arquivos com nome em português (`Aba*`, `Blocked_*` etc.), o logo "INFINITY", os ícones de redes sociais e as telas de VIP/Attend/tutorial. Janela do porte que só tenha arte própria do Spark fica com a do Interlude, anotada.
2. UXML e USS do Spark só como mapa (qual textura vai onde, slices, estados). Nada copiado para o projeto: a montagem continua em uGUI no código.
3. Tema selecionável pela chave de Config `ui.tema` = `spark` (padrão) ou `interlude`. Sem sprite no Spark para um elemento, usa o do Interlude. Trocar o tema não muda posição nem tamanho de nenhuma janela.
4. 9-slice pelos `-unity-slice-*` do USS; sem slice no USS, estica como hoje.
5. Em `shared\` só `client\spark_hud\`. `App.cs` e arquivos da coordenadora não se editam: o que precisar vira pedido em `tarefas\pedidos\`.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] `Docs/tools/gen_spark_hud.py` (python -I, reexecutável) copia para `shared\StreamingAssets-L2Web\client\spark_hud\` só as texturas da regra 1 e gera o `spark_hud.json` (nome → arquivo, largura, altura, slices do USS quando houver) no formato do índice que o `L2WndUtil.Tex` lê; contagem de copiadas e excluídas registrada aqui
- [ ] Mapa "elemento da HUD → textura Spark (estados normal/Over/Down) → arquivo:linha no l2unity" na Entrega, cobrindo todas as janelas do escopo
- [ ] Teste EditMode: com o tema spark, cada elemento mapeado resolve uma textura existente no `spark_hud.json`; com o tema interlude, nada muda em relação ao `main`; os retângulos de todas as janelas são iguais nos dois temas
- [ ] Capturas do jogo e do lobby nos dois temas (1024×768 e 1920×1080) em `Docs/evidencias/spark_hud/`
- [ ] Suíte da área verde (`sh Docs/tools/run_tests.sh`, sem falha nova)
- [ ] Lista dos elementos que ficaram com a textura do Interlude e por quê

## Andamento

- 2026-10-29 — coordenadora criou a tarefa.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

## Entrega

- **Commits:** 
- **Testes:** 
- **Texturas:** copiadas / excluídas pela regra 1
- **Mapa elemento → textura → arquivo:linha:** 
- **Ficou com o Interlude (e por quê):** 
- **Falta / fora do escopo:** 

## Pedidos

<!-- links para pedidos\NNNN-....md abertos por esta tarefa -->
