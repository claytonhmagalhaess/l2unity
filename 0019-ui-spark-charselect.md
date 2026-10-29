# #0019 — Lobby: CharSelect

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-L3-charselect` |
| Estado | pronta p/ merge |
| Spec | `89_telas_nativas.md` (NCLobbyStartWnd, NCPawnSelectWnd) |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Seleção de personagem com clique no 3D, Start, Delete e Restore.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Clique no personagem 3D só com o mouse fora da UI; Enter/Esc
- [ ] Start com game_start; Start sem seleção = "Please select a character"
- [ ] Delete com confirmação, Restore e o tempo de exclusão no nome (fluxo pela spec do Interlude; desenho na LobbyScene = pedido à render)
- [ ] Duplo clique no personagem, girar e zoom **a validar**
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

## Andamento

- 2026-10-29 — branch `feat/ui-spark-L3-charselect` saído da ponta do `L2` (`93e994f`).
- 2026-10-29 — `LobbyDialog` (o DialogBox do xdat no lobby com a fila da #0007), `CharSelectRules`; `LobbyCharsScreen`: Enter/Esc, `TryStart`, `AskDelete`; 4 testes em `SparkCharSelectTests.cs` (`46487cf`). Pedido 0010 ao App.

## Decisões e REA

- **Clique no 3D só fora da UI**: a `LobbyScene` (render) já ignora o clique com `UiRoot.PointerOverUi()` (`LobbyScene.cs:641`), que agora também conta as janelas com `UiHover` (#0006). Nada a pedir.
- **Enter/Esc**: `CharSelectWindow.Update` (literais `click_01`, `game_start`, `Disconnect`): Enter = Start; Esc = desconectar e voltar ao login (o Re-Login do NCLobbyFunctionWnd), com `click_01`. O Interlude não tem tecla nesse estado (05 §5.2 só lista EULA/China/ServerList): gesto novo. Com um diálogo aberto as teclas da tela ficam paradas.
- **Start**: `StartGamePressed` sem personagem = "Please select a character"; com ele, `game_start` (sem som equivalente no Interlude: não toca, #0006) e `RequestCharSelect`. Ficou `LobbyCharsScreen.TryStart` (pedido 0010 para o App usar).
- **Apagar/Restaurar**: o Spark pergunta com uma sysmsg com `$s1` = nome (`DeletePressed`) no `L2ConfirmWindow`; no systemmsg do Interlude é a **sm78** "Do you wish to delete $s1?"; marcado para exclusão, a **sm180** "You have $s1 day(s) left until deletion. Do you wish to cancel this action?" → `CharacterRestore`. O porte tinha "clique em Delete de novo em 5 s" (improviso); agora vai no DialogBox do xdat (`LobbyDialog`). **Inferido**: o id 78 do Spark (o decompilado não mostra o número).
- **Prazo no nome**: dias que faltam (arredondado para cima) + **sm1185** "days left until deletion." (`CharSelectRules.DeletionText`); o formato exato junto do nome é **a validar**; o desenho na LobbyScene é da render (pedido 0001).
- **A validar**: duplo clique no personagem (o porte toca a animação de escolhido e não entra, como o FUN_10173db0), girar e zoom do CharSelect do Spark (sem código na REA).

## Entrega

- **Commits:** `46487cf` UI: selecao de personagem com Enter/Esc, Start com aviso, apagar/restaurar no DialogBox (sm78/sm180).
- **Testes:** `sh Docs/tools/run_tests.sh` → total 524, passou 524, falhou 0 (+4 em `SparkCharSelectTests`).
- **Tabela comportamento Spark → l2unity → teste:**

| Comportamento Spark | Onde no l2unity | Teste (`SparkCharSelectTests`) |
|---|---|---|
| Clique no 3D só fora da UI | `Render/LobbyScene.cs:641` + `UiRoot.PointerOverUi` (já existia) | `SparkBaseTests.Hover_JanelaMarcaPonteiroSobreAUi` |
| Enter = Start, Esc = Re-Login (click_01) | `Scripts/UI/LobbyCharsScreen.cs:42`, `LobbyCharsScreen.cs:55` | `EnterEntra_EscVoltaAoLogin` |
| Start sem seleção = "Please select a character"; game_start | `LobbyCharsScreen.cs:72`, `UiLobbySpark.cs:157` | `Start_SemSelecaoAvisa_ComSelecaoEntra` |
| Delete com confirmação (sm78), Restore (sm180) | `LobbyCharsScreen.cs:84`, `UiLobbySpark.cs:107`, `UiLobbySpark.cs:142`, `UiLobbySpark.cs:160`, `UiLobbySpark.cs:163` | `Apagar_Sm78_Restaurar_Sm180` |
| Tempo de exclusão no nome | `UiLobbySpark.cs:166`, `UiLobbySpark.cs:169` | `PrazoDeExclusao_EmDias` |

- **Falta / fora do escopo:**
  - Pedido 0010 (App.cs): `Enter()` pelo `TryStart` e `DeleteCharacter()` pelo `AskDelete`.
  - Desenho do prazo no nome na LobbyScene: render (pedido 0001).
  - A validar: duplo clique no personagem, girar e zoom, formato do prazo.

## Pedidos

- [pedido 0010: App.cs — Start e Delete pelas regras da UI](pedidos/0010-ui-charselect-app.md)
- (pedido 0001 da coordenadora à render cobre o desenho do prazo)
