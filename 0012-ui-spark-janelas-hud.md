# #0012 — Janelas da HUD (Status, Target, Buff, Party, menus, Exit, Restart)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-07-janelas-hud` |
| Estado | pronta p/ merge |
| Spec | `06_hud_status.md`, `04_opcoes_e_menus.md` |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Comportamento de clique e hover das janelas fixas da HUD.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Status: clique = alvo em si; Shift+clique = RequestAction 0x04; HP pisca quando baixo
- [ ] Target: cor do nome pela diferença de nível; fechar = RequestCancel 0x37
- [ ] Buff: Alt+clique só como gesto (cancelar buff é pacote do Spark: pendente de decisão); tamanho do ícone
- [ ] Party: hover mostra buffs (atraso **a validar**), clique abre o menu do membro (itens **a validar**), clique fora fecha, Alt+F alterna Buffs/Debuffs/Canções/Nada
- [ ] SystemMenu (itens **a validar**), Exit (Restart 0x46, Exit 0x09, resumo da sessão), RestartPoint 0x6D; itens do MenuWindow **a validar**
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

- 2026-10-29 — branch `feat/ui-spark-07-janelas-hud` saído da ponta do `06` (`877df00`).
- 2026-10-29 — clique no StatusWnd (RequestSelfTarget/Shift), Alt+clique no buff só como gesto, tamanho do ícone de buff, `PopupMenu`, resumo da sessão (`SessionItems`) no sair, `SparkParity.PartyMenu`/`ExitSummary`; `UiKit.Destroy` no `L2Wnd.SideFrame`/barra e no `L2Digits` (o `Object.Destroy` falhava em EditMode); 9 testes em `SparkHudWindowsTests.cs` (`88bc942`).

## Decisões e REA

- **Status**: Interlude `StatusWnd.uc:47-55` — `OnLButtonDown` entre `nX+13` e `nX+w-10` chama `RequestSelfTarget()`; Spark `StatusWindow.OnClickSelf` mira em si e `ShiftCliqueEmMim` manda `RequestAction(id, 1)` (o Action 0x04 com shift). Os dois concordam; ficou a faixa do Interlude + o Shift do Spark (`deps.SelfTarget`, padrão = `Action` no próprio objectId).
- **HP baixo**: o Interlude mostra a `warnTexture` da barra abaixo de 30% (`L2Wnd.WarnOn`, já no porte); o Spark tem `SparkPiscaHp` (pisca), sem o código da função na REA (só a chamada no `StatusWindow.Update`): **a validar** o período/limite do piscar. Vale o aviso fixo do Interlude.
- **Alvo**: cor do nome pela diferença de nível (`UIDATA_TARGET.GetTargetNameColor(LevelDiff)`, `TargetStatus.Compute`, já no porte e em `TargetStatus*Tests`); `btnClose` = `RequestTargetCancel` (0x37). O Spark faz o mesmo (`CorPelaDiferenca`, `SetTargetColor`).
- **Buff**: Alt+clique (`BuffSlot.AltClique`) → `SparkPacoteLivre` com o id do jogador e do buff: **pacote do servidor Spark, não enviado** (decisão 3, pendente de decisão). O gesto fica em `GameUi.PendingBuffCancel`. Tamanho do ícone: opção `TamanhoBuff` do Spark (24 = Interlude até 30, padrão do Spark 30); aqui 24..30 com padrão **24** (Interlude) até o usuário escolher, `Config "buff.size"`; o controle na janela de Opções é da #0016.
- **Divergência Party**: o Interlude mira o membro no clique esquerdo e faz assist no direito (`PartyWnd.uc:647-690`, já no porte); o Spark abre um menu (`MenuDeMembros`) cujos itens vêm de lambdas sem literais na REA → **a validar** os itens. O menu existe como modelo (`PopupMenu`: abre com itens, fecha no clique fora como o `FechaMenuFora` pelo `worldBound`, escolher fecha) e fica atrás de `SparkParity.PartyMenu` = false. **Aguarda o usuário.**
- **Divergência Alt+F**: o Interlude cicla **3** modos (`m_CurBf` 0..2, `PartyWnd.uc:496-520`, já no porte); o Spark cicla 4 (Buffs/Debuffs/Canções/Nada, `TrocaModoBuff`). Vale o do Interlude.
- **Hover na party** (`_buffSobMouseDesde`): o Interlude mostra os buffs do membro pelo modo, sem hover; o atraso do Spark não tem valor na REA → **a validar**, não portado.
- **Menu do sistema**: o Spark monta Community, Friend Manager, Macro, Mailbox, Options, Shortcut, Attendance/VIP, YouTube/Discord/Facebook, Restart e Exit (`SystemMenuWindow.MontaLista`); o Interlude tem os botões do xdat (BBS, Macro, Help, Petition, Option, Restart, Quit). Vale o layout do Interlude; os itens extras do Spark (links externos, VIP, correio) ficam fora (decisão 4). **A validar**: itens do `MenuWindow` do Spark.
- **Sair/Restart**: sm126 → `RequestRestart` 0x46; sm125 → `Logout` 0x09 (Interlude `SystemMenuWnd.uc:31-63`, já no porte). `RestartPoint` 0x6D na janela de morte (já no porte). **Divergência**: o `ExitWindow` do Spark acrescenta o resumo da sessão ("Acquired Items", item/quantidade, "No items acquired yet."); entrou como `SessionItems` (o que aumentou nos InventoryUpdate desde a entrada no mundo) e só aparece no diálogo com `SparkParity.ExitSummary` = true. **Aguarda o usuário.** O Spark também mostra EXP/Adena: sem os literais na REA, **a validar**.

## Entrega

- **Commits:** `88bc942` UI: Status (alvo em si/Shift), buff (Alt+clique so gesto, tamanho do icone), menu de contexto, resumo da sessao.
- **Testes:** `sh Docs/tools/run_tests.sh` → total 495, passou 495, falhou 0 (+9 em `SparkHudWindowsTests`).
- **Tabela comportamento Spark → l2unity → teste:**

| Comportamento Spark | Onde no l2unity | Teste (`SparkHudWindowsTests`) |
|---|---|---|
| Clique no Status = alvo em si; Shift = RequestAction com shift | `Scripts/UI/GameUi.Hud.cs:250`, `GameUi.cs:265` | `Status_CliqueMiraEmSi_ShiftComShift_ForaDaFaixaNada` |
| HP baixo (Interlude: aviso; piscar do Spark a validar) | `L2Wnd.cs:1089` | `Status_HpBaixoMostraOAviso` |
| Fechar o alvo = RequestCancel 0x37 | `GameUi.cs:270` | `Alvo_FecharMandaCancel` |
| Cor do nome pela diferença de nível | `TargetStatus.cs` (já existia) | `TargetStatus*Tests` (existentes) |
| Alt+clique no buff: só gesto, sem pacote | `GameUi.Hud.cs:269`, `GameUi.Hud.cs:353` | `Buff_AltCliqueSoGesto_ETamanhoDoIcone` |
| Tamanho do ícone de buff (24..30) | `GameUi.Hud.cs:277`, `GameUi.Hud.cs:353` | `Buff_AltCliqueSoGesto_ETamanhoDoIcone` |
| Alt+F alterna os modos de buff da party (Interlude: 3) | `PartyWnd.cs:142` | `Party_AltF_CiclaOsTresModosDoInterlude` |
| Menu abre no clique e fecha no clique fora | `UiHudSpark.cs:60`, `UiInteract.cs:48` | `Menu_FechaNoCliqueFora_EEscolheItem` |
| Restart 0x46 / Exit 0x09 com confirmação | `GameUi.cs:463`, `GameUi.cs:470` | `SistemaRestartESair_ComSm126Sm125` |
| Resumo da sessão no sair | `UiHudSpark.cs:26`, `UiHudSpark.cs:34`, `GameUi.Hud.cs:288`, `GameUi.Windows.cs:252`, `GameUi.cs:414` | `Sair_ResumoDaSessao_SoComOSpark` |
| RestartPoint 0x6D | `GameUi.Windows.cs` (`ShowDeath`, já existia) | `Morte_PontoDeReinicio_RequestRestartPoint` |

- **Falta / fora do escopo:**
  - **Aguardam o usuário**: `SparkParity.PartyMenu` (menu do membro) e `SparkParity.ExitSummary` (resumo no sair); cancelar buff por Alt+clique (pacote do Spark, decisão 3).
  - A validar: piscar do HP, itens do menu do membro, atraso do hover da party, itens do MenuWindow/SystemMenu do Spark, EXP/Adena do resumo.
  - Controles de tamanho do buff e da barra na janela de Opções: #0016.

## Pedidos

- nenhum.
