# #0007 — Diálogos genéricos (confirmação, quantidade, sysmsg)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-02-dialogos` |
| Estado | pronta p/ merge |
| Spec | `04_opcoes_e_menus.md` (diálogos), `89_telas_nativas.md` |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Confirmação com fila e prazo, janela de quantidade e mensagens por sysmsg, reutilizáveis por todas as janelas.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Confirmação com fila: um pedido por vez; ao vencer o prazo vale a resposta padrão e aparece o próximo da fila
- [ ] Quantidade: teclado numérico, limites mín./máx., Enter confirma, Esc cancela
- [ ] Mensagens por id de sysmsg (`systemmsg-e.dat`) com os parâmetros, no chat e/ou em caixa conforme o tipo
- [ ] Enter/Esc nos diálogos seguem a cadeia da #0006
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
- `analises\spark-l2unity\hud\uxml_inventory.md` (L2ConfirmWindow, L2InputAmountWindow)

## Andamento

- 2026-10-29 — branch `feat/ui-spark-02-dialogos` saído da ponta do `01` (`2c5fe35`).
- 2026-10-29 — `Scripts/UI/UiDialogs.cs` (DialogQueue, DialogRequest, SysMsgRoute); o DialogBox do `GameUi` passa a usar a fila (ConfirmDlg, Ask, AskAmount, caixa da group 4); Enter e Esc ligados; 12 testes em `SparkDialogTests.cs` (`9af9f0b`). Pedido 0002 ao App.

## Decisões e REA

- **Observado** `L2ConfirmWindow.Update@0x180770f20`: percorre a fila de trás para a frente; pedido com prazo (`+0x28 > 0`) vencido sai e executa `+0x20` (a ação do prazo) sem aparecer. O pedido na tela (`+0xb0`), visível e com prazo, chama `Responde(0)` ao vencer, senão `AtualizaTempo`.
- **Observado** `HideWindow@0x18076fa80`: com pedido na tela, zera o estado, fecha (`window_close`), executa a ação de cancelar (`+0x90`) e chama `MostraProximo`. `MostraProximo@0x180770760` tira o primeiro da fila: com prazo vencido executa a ação do prazo e segue; senão mostra.
- **Inferido**: `Responde(0)` = resposta "não" (o argumento 0). Ficou `DialogRequest.TimeoutAnswer = false`; o ConfirmDlg vencido manda DlgAnswer 0.
- **Interlude** (04 §6.3, 01 §DialogBox): um diálogo de script por vez (`m_bInUse`; quem abre chama `DialogHide` antes) → `DialogQueue.Replace` para `Ask`/`AskAmount` (cancela o da tela). O pedido do servidor (ConfirmDlg) entra na **fila** do Spark: o comportamento do nativo do Interlude com dois ConfirmDlg seguidos não tem evidência (**a validar**); antes, o porte sobrescrevia o da tela sem responder ao servidor.
- **Divergência Enter**: Interlude = ação padrão (OK só com `DialogSetDefaultOK`, senão **Cancelar**, `DialogBox.uc:429-448`); Spark = o `Validate` confirma. Ficou `SparkParity.EnterConfirms` = **false** (Interlude). **Aguarda o usuário.**
- **Esc**: `DialogBox` entrou em `GameUi.EscPopups`; fechar pelo X ou pelo Esc da cadeia = Cancelar (como o HideWindow do Spark). Com `SparkParity.EscChain` desligada vale o Esc do Interlude (TargetCancel), que não fecha o diálogo.
- **NumberPad**: os botões do Interlude (`num0..9`, `numAll` = o máximo, `numBS`, `numC`) são os mesmos do `L2InputAmountWindow` do Spark (`Number0..9`, `NumberAll`, `NumberBS`, `NumberC`). Digitar no campo aceita só dígitos. **A validar**: o que o Interlude faz ao passar do máximo (aqui vira o máximo) e o mínimo do OK com o campo vazio (aqui o `Min`); o texto por extenso `ConvertNumToTextNoAdena` em `DialogReadingText` não foi feito.
- **A validar**: a contagem regressiva na tela (`L2ConfirmWindow.MontaTempo`/`AtualizaTempo` desenha uma barra e um rótulo; o DialogBox do Interlude não tem esse elemento — só o `DialogProgress` do tipo Progress). Sem desenho até haver evidência no Interlude.
- **SystemMessage** (FUN_101b7cd0, 02 §3.6): group 4 abre a caixa com OK (`CenterOKButton`) e não vai ao chat; group 6 vai à petição (sem janela no porte: fora do escopo); o resto vai ao chat; `windowType ≠ 0` também vai à tela (o caminho do `EV_SystemMessage` já existente). O Spark usa o mesmo `SystemMessage.PrintMessage` no `L2ConfirmWindow.ShowWindow(id)`.

## Entrega

- **Commits:** `9af9f0b` UI: dialogos com fila e prazo, NumberPad e caixa da SystemMessage group 4.
- **Testes:** `sh Docs/tools/run_tests.sh` → total 447, passou 447, falhou 0 (+12 em `SparkDialogTests`).
- **Tabela comportamento Spark → l2unity → teste:**

| Comportamento Spark | Onde no l2unity | Teste (`SparkDialogTests`) |
|---|---|---|
| Um pedido por vez; o próximo ao responder | `Scripts/UI/UiDialogs.cs:58`, `UiDialogs.cs:88` | `Fila_UmPorVez_ProximoAoResponder` |
| Prazo vencido na tela = resposta padrão + próximo | `UiDialogs.cs:109` | `Prazo_VencidoNaTela_RespondePadraoEMostraOProximo`, `TimeoutAnswer_RespondeOValorDoPedido` |
| Prazo vencido na fila = responde sem mostrar | `UiDialogs.cs:109` | `Prazo_VencidoNaFila_RespondeSemMostrar` |
| MostraProximo pula os vencidos | `UiDialogs.cs:125` | `Proximo_VencidoAntesDoTick_EPulado` |
| Diálogo local do Interlude substitui o da tela | `UiDialogs.cs:68`, `GameUi.Windows.cs:786` | `Replace_CancelaODaTela_FilaContinua` |
| Enter (Interlude: padrão; Spark: confirma, desligado) | `UiDialogs.cs:102`, `GameUi.Hud.cs:62`, `UiInteract.cs:35` | `Enter_InterludeCancelaSemDefaultOK`, `Enter_ValidateDoSpark_ConfirmaQuandoLigado` |
| Quantidade: dígitos, All, BS, C, teclado, mín./máx. | `UiDialogs.cs:138`–`UiDialogs.cs:184`, `GameUi.Windows.cs:719`, `GameUi.Windows.cs:790` | `NumberPad_DigitosTudoApagarLimpar_ELimites`, `NumberPad_VazioValeOMinimo_CancelarNaoMandaQuantidade` |
| X/Esc = cancelar (HideWindow) pela cadeia da #0006 | `UiDialogs.cs:99`, `GameUi.cs:201`, `GameUi.Windows.cs:719` | `DialogBox_NoEscDoSpark_FechaComCancelar` |
| ConfirmDlg com prazo → DlgAnswer | `GameUi.Windows.cs:775` | (fila: `Prazo_*`; bytes do DlgAnswer já cobertos por `PacketTests`) |
| SystemMessage por group/windowType (caixa, chat, petição, tela) | `UiDialogs.cs:203`, `GameUi.Windows.cs:803`, `GameUi.Windows.cs:753` | `SysMsg_DestinoPeloGroupEWindowType` |

- **Falta / fora do escopo:**
  - Pedido 0002 (App.cs): passar o `Time` do ConfirmDlg e chamar `ui.SystemMessageBox` antes do chat. Sem ele, o prazo do servidor não vence e a group 4 continua só no chat.
  - `SparkParity.EnterConfirms` desligada: **aguarda o usuário**.
  - A validar: dois ConfirmDlg seguidos no nativo do Interlude, contagem regressiva na tela, limites do NumberPad, texto por extenso da quantidade.
  - Janela de petição (group 6): não existe no porte.

## Pedidos

- [pedido 0002: App.cs — prazo do ConfirmDlg e caixa da SystemMessage group 4](pedidos/0002-ui-dialogos-app.md)
