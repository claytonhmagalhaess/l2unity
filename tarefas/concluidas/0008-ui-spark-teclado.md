# #0008 — Teclado remapeável

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-03-teclado` |
| Estado | cancelada (descartada pelo usuário em 2026-10-29; branches apagados, nada entrou no `main`) |
| Spec | `05_barra_de_atalhos_e_teclado.md` |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Atalhos de teclado com os padrões do Spark, remapeáveis, com duas teclas por ação e persistência.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Padrões: I/Tab/Alt+V inventário, Alt+T ficha, C ações, K skills, X menu do sistema, U quests, N clã, Y amigos, M mapa, Alt+O/R/B/L/H/J/F/P, "." mudo, F1–F12 barra 1, 1–0 - = barra 2, Alt+F1–F5 página, F atacar, "," sentar, T alvo em si, Ctrl forçar ataque, Shift ficar parado, Enter chat, Esc
- [ ] Duas teclas por ação; captura: Esc cancela, Backspace limpa, Alt/Ctrl/Shift viram prefixo, recusa tecla que digita no chat ("That key types text in the chat…")
- [ ] Persistência das teclas (no mecanismo que a área já usa)
- [ ] Atalhos bloqueados enquanto se digita (`IsTyping`) e durante a captura
- [ ] Atalhos da barra repetem ao segurar (`PlayerShortcuts.ComecaRepeticao/Repete`)
- [ ] Divergências com a tabela `GamingStateShortcut` do Interlude registradas (ex.: Alt+L, Alt+P, Tab)
- [ ] Cada comportamento implementado tem teste EditMode em `Assets/L2Web/Tests/Editor` que simula o evento (clique, tecla, arrasto, pacote recebido) e confere o efeito na UI ou os bytes do pacote montado
- [ ] Entrega com a tabela **comportamento Spark → onde ficou no l2unity (`arquivo:linha`) → teste**, uma linha por comportamento desta tarefa
- [ ] Itens sem evidência no decompilado do Spark nem na spec do Interlude aparecem como **a validar**, com o que falta, sem valor inventado
- [ ] Divergências Interlude × Spark registradas em "Decisões e REA"; o comportamento do Interlude fica valendo até o usuário confirmar o do Spark
- [ ] Nenhum pacote exclusivo do servidor Spark é enviado (decisão 3): o gesto existe, sem envio, marcado "pendente de decisão"
- [ ] Nada copiado do Spark (UXML, USS, texturas, código decompilado): uGUI montado em código no estilo de `Scripts/UI`; layout e texturas do `Interface.xdat`/spec do Interlude
- [ ] `sh Docs/tools/run_tests.sh` sem falhas novas; total de testes na Entrega

## Fontes

- `analises\spark-l2unity\hud\README.md` (inteiro; §1 arquitetura, §3 comportamento)
- `analises\spark-l2unity\hud\events.md`, `hud\code_summaries.md`, `hud\code\*.c` (confirmar cada detalhe)
- `analises\spark-l2unity\raw\InputActionAsset_strings.txt`
- `analises\spark-l2unity\hud\opcoes.md` (aba Shortcut, `spark.opt.teclas`/`spark.opt.binds`)

## Andamento

- 2026-10-29 — branch `feat/ui-spark-03-teclado` saído da ponta do `02` (`9af9f0b`).
- 2026-10-29 — `Scripts/UI/UiKeys.cs` (KeyBind, KeyAction, SparkKeys com padrões, captura e persistência; ShortcutRepeat); `GameUi.Key`/`RunKeyAction`/`KeyFrame`; `SparkParity.Keymap`; 13 testes em `SparkKeysTests.cs` (`21f7ff5`). Pedido 0003 ao App.
- 2026-10-29 — coordenadora: **cancelada a pedido do usuário** ("não ficou bom"). Branches `feat/ui-spark-*` e `integracao/ui-spark` apagados sem merge, worktrees e sub-sessões excluídas, `shared\...\client\spark_hud\` apagada.

## Decisões e REA

- **Observado** (padrões): mapa `InGame` do `InputActionAsset` (Inventory = Tab, I, Alt+V; CharacterStatus = Alt+T; Actions = C, Alt+C; SystemMenu = X, Alt+X; Skills = K, Alt+K; TargetSelf = T; Attack = F; Sit = ","; Ctrl/Shift; CloseWindow = Esc; Validate = Enter/NumpadEnter; ArrowUp/Down; Shortcut1 = F1–F12; Shortcut2 = 1–0 - =; barras 3–5 sem tecla) + `SparkTeclas.CriaNosso@0x1804cb900` (Quest U, Clan N, Friends Y, Map M com Alt; Radar Alt+O, Macro Alt+R, Gm Alt+G, Board Alt+B, ResetLayout Alt+L, HideUI Alt+H, HideChat Alt+J, PartyBuffs Alt+F, LowDetail Alt+P, Mute "."; voo Space/Z/WASD/setas; BarPage = `alt+<Keyboard>/f` + n).
- **Observado** `SparkTeclas.Captura.Update@0x1804b4b30`: ignora os primeiros 0,05 s; **Esc** grava `<Keyboard>/escape` se a ação for `CloseWindow` sem modificador, senão cancela; **Backspace** grava vazio; tecla de modificador só guarda o último (`+0x44`); soltando todos sem outra tecla, Ctrl/Shift/Alt viram a ligação (Meta não); outra tecla: com os três modificadores o Shift cai; se a ação "lê com o chat aberto" e não há Alt nem Ctrl, tecla de texto é recusada com a mensagem e a captura continua; senão grava e termina. Leitura dos campos do `Keyboard`: `+0x198` Shift, `+0x1a0` Ctrl, `+0x1a8` Alt (ordem dos ButtonControl).
- **Observado** `TeclaDeTexto@0x1804b4a70`: `Key` 1..50 menos Enter (2) e Tab (3), e 78..93 (teclado numérico sem o Enter). `EModificador@0x1804b4900`: 51..58.
- **Inferido** `LidaDigitando@0x1804b4920`: devolve false para o mapa próprio do Spark e true para `Validate`; o Ghidra cortou as outras comparações, mas a função registra `ArrowUp`, `ArrowDown` e `CloseWindow`. Ficou: só essas 4 ações recusam tecla de texto. O README do Spark dizia o contrário ("quando a ação não é só com chat"); os padrões do próprio Spark (K, ".", ",") confirmam que as ações de jogo aceitam letras.
- **Observado** `PlayerShortcuts.ComecaRepeticao@0x1804d1d90` / `Repete@0x1804d2f40` / `RepeteAtalho@0x1804d29a0`: repetem a ação 5 (pegar) e skills ativas fora de {172, 248, 1050, 1312–1315, 1320} com `operateType != 3`; item não repete. A 1ª repetição é 0,25 s depois; depois `min(1, n × 0,25)` s; recarga, conjuração ou estado 10 esperam; soltar a tecla ou trocar o atalho do slot para.
- **A validar**: `operateType` do skillgrp (o porte não lê; skills toggle podem repetir); o estado 10 do PlayerStateMachine; a ordem dos prefixos no texto ("Alt+Ctrl+Shift+X" é a do porte); o InputSystem do Spark casa `alt+K` mesmo com Ctrl ou Shift seguros, aqui o casamento é exato como na tabela do xdat.
- **Persistência**: `Config` (PlayerPrefs `l2web.keys.spark`), formato `acao/caixa=tecla;…` como o `spark.opt.teclas`, gravando só o que difere do padrão. `spark.opt.binds` e as flags `atacarsemf`/`statussemp` são migrações do Spark: fora.
- **Divergências com a GamingStateShortcut** (spec 05 §5.1) — mesma tecla, efeito diferente; **vale o Interlude** com `SparkParity.Keymap` = false (**aguarda o usuário**):

| Tecla | Interlude (xdat) | Spark |
|---|---|---|
| I | `ShowMainWindow` (última aba) | inventário |
| T | MainWnd aba Status | alvo em si |
| F | `ShowPartyBuff` | atacar (Alt+F = buffs da party) |
| 1..0 - = | barra 1 (página atual) | barra 2 |
| Esc | `TargetCancel` | cadeia CloseWindow (#0006) |
| V, B, G, O, P, R sem Alt | inventário, board, GM, petição, `ApplyMinFrame`, macros | nada |
| Alt+1..0, Alt+F6..F10 | páginas da barra | nada (Spark só Alt+F1..F5) |
| Tab | `TabShowInventoryWindow` | inventário (igual) |
| Alt+P | `ApplyMinFrame` | `LowDetail` (mesma ideia) |

  Teclas que o Interlude **não usa** (Alt+L, ".", ",") entram pelo mapa do Spark mesmo com a chave desligada. Remapear uma ação só vale onde a tabela do xdat não usa a tecla, até a confirmação.
- **Bloqueios**: `SparkKeys.Decide` — captura em andamento bloqueia tudo (inclusive a tabela do xdat); digitando no chat nada do mapa vale. O App já não entrega teclas enquanto o campo tem foco (`App.cs:2540`).
- **Fora do porte**: barras 4 e 5 (o ShortcutWnd do Interlude tem 3), voo (Wyvern), Macro e Gm (sem janela). As caixas de tecla da aba Shortcut são da #0016 (bloqueada pelo desenho das Opções); a captura já tem a API (`SparkKeys.BeginCapture`, quadro a quadro em `GameUi.KeyFrame`).

## Entrega

- **Commits:** `21f7ff5` UI: teclado remapeavel do Spark (padroes, captura, persistencia, repeticao da barra).
- **Testes:** `sh Docs/tools/run_tests.sh` → total 460, passou 460, falhou 0 (+13 em `SparkKeysTests`).
- **Tabela comportamento Spark → l2unity → teste:**

| Comportamento Spark | Onde no l2unity | Teste (`SparkKeysTests`) |
|---|---|---|
| Padrões (janelas, interface, personagem, chat, barras, páginas) | `Scripts/UI/UiKeys.cs:360`, `UiKeys.cs:174` | `Padroes_DoSpark` |
| Duas caixas por ação, texto "Alt+K", "Keys in use" | `UiKeys.cs:51`, `UiKeys.cs:189` | `DuasCaixasPorAcao_ETextoDaCaixa` |
| Captura: Esc cancela / grava no CloseWindow, Backspace limpa | `UiKeys.cs:277` | `Captura_EscCancela_BackspaceLimpa`, `Captura_EscNoCloseWindow_GravaEsc` |
| Captura: Alt/Ctrl/Shift prefixo, sozinho vira tecla, 3 mods sem Shift | `UiKeys.cs:277` | `Captura_ModificadoresViramPrefixo_SozinhoViraTecla` |
| Recusa tecla de texto nas ações do chat, com a mensagem | `UiKeys.cs:277`, `UiKeys.cs:349` | `Captura_TeclaDeTextoNasAcoesDoChat_Recusada`, `TeclaDeTexto_FaixasDoKey` |
| Persistência | `UiKeys.cs:217`, `UiKeys.cs:235`, `UiKeys.cs:248`, `GameUi.cs:244`, `GameUi.Hud.cs:206` | `Persistencia_SoODiferente_EIdaEVolta` |
| Bloqueio por IsTyping e pela captura | `UiKeys.cs:207`, `GameUi.Hud.cs:113` | `Bloqueio_CapturaEDigitando` |
| Divergências com a GamingStateShortcut (vale o Interlude) | `UiInteract.cs:42`, `GameUi.Hud.cs:113` | `Divergencias_TabelaDoInterludeMandaComOMapaDesligado` |
| Ação → janela/pacote (inventário, MainWnd, menus, mapa, board, Alt+L, páginas, slots) | `GameUi.Hud.cs:127` | (as janelas já cobertas pelos testes delas; rota em `Divergencias_*`) |
| Repetição segurando a tecla da barra | `UiKeys.cs:441`, `UiKeys.cs:449`, `UiKeys.cs:468`, `GameUi.Hud.cs:206` | `Repeticao_QuemRepete`, `Repeticao_IntervalosCrescemAte1s_ESoltarPara`, `Repeticao_RecargaEspera_AtalhoTrocadoPara` |

- **Falta / fora do escopo:**
  - Pedido 0003 (App.cs): sem ele a UI não recebe a tecla (mapa, captura e repetição ficam inertes) e as ações Attack/TargetSelf/NextTarget/Mute/LowDetail não têm efeito.
  - `SparkParity.Keymap` desligada: **aguarda o usuário** (tabela de divergências acima).
  - Caixas de tecla na janela de Opções: #0016 (**bloqueado: decisão do usuário**, desenho das Opções).
  - Remapear Ctrl/Shift de segurar: o clique no mundo ainda lê as teclas fixas (`L2Input.IsPKMode`, App).
  - A validar: `operateType` das skills, estado 10, ordem dos prefixos, casamento solto do InputSystem.

## Pedidos

- [pedido 0003: App.cs — tecla pela UI antes do xdat; ações de jogo do mapa de teclas](pedidos/0003-ui-teclas-app.md)
