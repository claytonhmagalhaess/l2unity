# #0006 — Base de interação da HUD (Spark)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-01-base` |
| Estado | cancelada (descartada pelo usuário em 2026-10-29; branches apagados, nada entrou no `main`) |
| Spec | `01_framework_e_fluxo.md`, `98_desenho_controles_nativos.md` |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Modelo único de clique, foco, Esc, tooltip, sons e trazer-para-frente que todas as janelas do porte usam.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Slot: botão 0 no down; Shift num slot de inventário = link do item no chat (consome o evento); senão intervalo > 300 ms = clique simples e ≤ 300 ms = duplo (`L2ClickableSlot.HandleSlotClickDown/Up`). Flags +0x68/+0x69 = disparar no UP em vez do down (não são "rightClickEnabled")
- [ ] Botão do meio: o modelo reconhece o gesto (down e up), mas nenhuma ação destrutiva é ligada — **bloqueado: decisão do usuário** (ver #0010)
- [ ] Cadeia do Esc (`CheckUIInputs`): ignorado durante captura de tecla → chat com foco: fecha o chat → senão HideWindow no último popup aberto → sem popup: ClearTarget (RequestCancel 0x37). Não cancela cast
- [ ] Trazer janela para frente com MouseDown em qualquer ponto dela (BringToFront: **a validar** — a regra exata não tem evidência)
- [ ] Alt+L: todas as janelas na posição padrão (WndDefPos/xdat) + chat no tamanho padrão, com a mensagem do Spark ("The interface was reset to the default layout."), registrando a divergência com o Interlude
- [ ] Sons de interface com o volume das Opções: click_03 no PointerDown de todo slot, click_01 nos botões, window_open ao trocar de aba, open/close próprios de inventário, ficha e menu de sistema, game_start ao entrar (mapeados para os sons do Interlude; o que não existir fica a validar)
- [ ] Tooltip ao entrar/sair do slot (`TooltipManipulator`); o atraso fica **a validar**
- [ ] Ponteiro sobre a UI bloqueia o clique no mundo (`MouseOverUI`): a UI expõe o estado e a ligação no clique do mundo vira pedido (App.cs/world)
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

## Observações da coordenadora

- As tarefas #0007–#0021 dependem desta base: os componentes precisam ser reutilizáveis (slot, popup, tooltip, som).

## Andamento

- 2026-10-29 — branch `feat/ui-spark-01-base` saído do `main` (`0d71a77`); suíte de base: 413/413.
- 2026-10-29 — modelo de interação em `Scripts/UI/UiInteract.cs` (SlotClick, UiSlot, UiSounds, PopupStack, EscChain, UiHover, SparkParity), ganchos de abrir/fechar no `L2Layer`/`L2Wnd`/`UiWindow`, Alt+L, som de aba e tooltip testável; 22 testes novos em `SparkBaseTests.cs` (`2c5fe35`).
- 2026-10-29 — coordenadora: **cancelada a pedido do usuário** ("não ficou bom"). Branches `feat/ui-spark-*` e `integracao/ui-spark` apagados sem merge, worktrees e sub-sessões excluídas, `shared\...\client\spark_hud\` apagada.

## Decisões e REA

Regra usada em todo o porte: **mesmo gesto com efeito diferente** no Interlude e no Spark = divergência, fica atrás de uma chave em `SparkParity` (desligada = Interlude) até o usuário confirmar. **Gesto que o Interlude não tem** (sem tecla, sem som, sem ação) entra ligado.

- **Observado** `L2ClickableSlot__HandleSlotClickDown@0x18076ed00`: botão em `+0x88` do MouseDownEvent; Shift só no botão 0 e só se o slot for `InventorySlot` (teste de tipo pela hierarquia `+0x130`); `Linka` devolvendo true consome (`StopPropagation`) e sai **sem** gravar o instante. O instante `+0x70` é gravado nos três ramos (direito e meio também), então direito seguido de esquerdo em ≤ 300 ms vira duplo. `300 < agora - último` = simples (300 ms exatos = duplo). Com `+0x68` o down só chama o virtual "pressionado" (+0x1a8).
- **Observado** `HandleSlotClickUp@0x18076ef20`: sempre o virtual "solto" (+0x1b8); depois exige o dado do slot (`+0x60`) com `+0x48` ligado; botão 0 com `+0x68` → clique esquerdo; botão 1 com `+0x69` → direito; meio → `HandleMiddleClick` de novo. O README dizia que `+0x69` era "rightClickEnabled": é "disparar no up", como a tarefa-mãe já corrigiu.
- **Observado** `SlotClickSoundManipulator.MouseDownHandler@0x1807b2d60`: botão `!= 0` (`+0x94` do PointerDownEvent) sai sem som; o som é `event:/InterfaceSound/click_03`. `ButtonClickSoundManipulator` toca `click_01`.
- **Observado** `L2GameUI.CheckUIInputs@0x1807714d0`, ramo do Esc (`InputManager+0xf7`): sai se `SparkTeclas.Trocando`; sai se `frame - SparkTeclas+0x38 ≤ 1` (o quadro seguinte ao fim da captura); sai se `PlayerStateMachine+0x24 == 10`; chat com `+0x88` → `CloseChat`; senão `RemoveAll` (predicado `_CheckUIInputs_b__17_0`) e `HideWindow` no último da lista de popups; senão `HasTarget` → `ClearTarget`. Nada de cancelar cast.
- **Observado** `WindowOpened@0x180776020` = `Remove` + `Add` (reabrir vai para o fim); `WindowClosed@0x180775fc0` = `Remove`.
- **Divergência Esc** (Interlude × Spark): o Interlude liga Escape a `TargetCancel` na `GamingStateShortcut` (spec 05 §5.1) e não fecha janelas. A cadeia do Spark ficou em `SparkParity.EscChain` = **false**: com ela desligada, `GameUi.Command("TargetCancel")` devolve false e o App manda o RequestTargetCanceld como hoje. **Aguarda o usuário.**
- **Divergência Alt+L**: o Interlude não tem a tecla (nem reset de layout por tecla). Entra como gesto novo; a tecla em si é ligada na #0008 (camada de teclas do Spark).
- **A validar**: o estado 10 do `PlayerStateMachine` que bloqueia o Esc (a tabela de estados não está na REA); exposto como `EscChain.Blocked`, sem ligação.
- **A validar**: `TargetWindow` também deriva de `L2PopupWindow` no Spark; se ela entra na lista, o Esc a esconderia antes do `ClearTarget`. Ficou fora de `GameUi.EscPopups`.
- **A validar (BringToFront)**: `L2PopupWindow._RegisterClickWindowEvent_b__1_0/1` (MouseDown) — a regra exata não foi lida no decompilado. O porte já trazia a janela para a frente em qualquer MouseDown (`L2Layer.Front`, `UiWindow.Focus`); mantido e coberto por teste.
- **A validar (tooltip)**: o atraso do `TooltipManipulator` (`UpdateToolTipCoroutine`) não tem valor no decompilado lido; ficou `UiTooltip.Delay = 0,5 s` (o do porte web).
- **Sons**: `click_01` → `InterfaceSound.Interface.click_01`; `window_open` (troca de aba, `L2Tab`) → `ItemSound.Interface.window_open`; inventário/ficha/menu do sistema → `InterfaceSound.Interface.{inventory,charstat,system}_{open,close}_01` (já tocados pelo `L2Wnd`); `trash_basket` → `ItemSound.Interface.trash_basket`. **A validar**: `click_03` (o Interlude não tem `interfacesound…click_03`; há `ItemSound.Interface.click_1/2/3`, sem evidência de qual é) e `game_start` (sem som parecido no `sounds.json`): ficaram `null` e não tocam. O som de aba é gesto novo (o NCTabControl do Interlude não tem som conhecido): **a validar** no nativo.
- **Volume**: os sons de interface passam por `L2WndUtil.UiSound` → `SfxPlayer.PlayUi`, que usa o volume de efeitos das Opções. Um volume próprio de interface fica para a #0016.
- **MouseOverUI**: o App já ignora o clique no mundo com `UiRoot.PointerOverUi()` (`App.cs:2489`); agora ele também considera `UiHover.Any` (janelas marcadas, como o `MouseOverDetectionManipulator`). Nenhum pedido ao App foi preciso.
- **Botão do meio**: o modelo reconhece down e up; nenhum `UiSlot` liga ação ao meio. **Bloqueado: decisão do usuário** (#0010, destruir sem confirmação no Spark).

## Entrega

- **Commits:** `2c5fe35` UI: base de interacao do Spark (slot, Esc, popups, Alt+L, sons, hover, tooltip).
- **Testes:** `sh Docs/tools/run_tests.sh` → total 435, passou 435, falhou 0 (eram 413; +22 em `SparkBaseTests`).
- **Tabela comportamento Spark → l2unity → teste:**

| Comportamento Spark | Onde no l2unity | Teste (`SparkBaseTests`) |
|---|---|---|
| Esquerdo no down: > 300 ms simples, ≤ 300 ms duplo | `Scripts/UI/UiInteract.cs:66` | `Slot_EsquerdoSimplesEDuplo_300msDownADown` |
| Instante do último down vale para os 3 botões | `UiInteract.cs:66` | `Slot_InstanteUnicoParaOsTresBotoes` |
| Shift+esquerdo no InventorySlot = link, consome | `UiInteract.cs:68`, `UiInteract.cs:121` | `Slot_ShiftNoInventario_LinkaEConsome`, `UiSlot_ShiftLinkConsomeOEvento` |
| Shift fora do inventário / link recusado = clique normal | `UiInteract.cs:68` | `Slot_ShiftForaDoInventarioOuLinkRecusado_CliqueNormal` |
| Flags +0x68/+0x69 disparam no up; up exige dado | `UiInteract.cs:88` | `Slot_FlagsDisparamNoUp`, `Slot_SemFlags_UpNaoRepeteEsquerdoNemDireito` |
| Meio no down e no up, sem ação destrutiva | `UiInteract.cs:66`, `UiInteract.cs:88` | `Slot_Meio_ReconhecidoNoDownENoUp_SemAcaoLigada` |
| click_03 só no botão 0 do slot | `UiInteract.cs:121` | `UiSlot_SomSoNoEsquerdo_EBotoesMapeados` |
| Lista de popups (WindowOpened/Closed) | `UiInteract.cs:164`, `L2Wnd.cs:1236`, `GameUi.cs:217` | `Popups_UltimoAbertoFechaPrimeiro_ReabrirVaiParaOFim`, `Camada_AvisaAbrirEFecharDasJanelas_EPilhaFechaAUltima` |
| Cadeia do Esc (captura, quadro, chat, popup, alvo) | `UiInteract.cs:249`, `GameUi.Hud.cs:49` | `Esc_CadeiaDoCheckUIInputs`, `Esc_EstadoBloqueado_Ignora` |
| Esc do Interlude (TargetCancel) até a confirmação | `UiInteract.cs:29` | `Esc_PadraoDoInterlude_SoTargetCancel` |
| MouseDown traz para frente | `L2Wnd.cs:192` | `MouseDownNaJanela_TrazParaFrente` |
| Alt+L: posição padrão + chat no tamanho padrão + mensagem | `L2Layer.cs:98`, `L2Wnd.cs:794`, `GameUi.cs:365`, `GameUi.Hud.cs:55` | `AltL_PosicaoETamanhoPadrao`, `UiWindow_ResetPosition_VoltaAPadrao` |
| Sons do Spark → Interlude | `UiInteract.cs:136` | `Sons_MapeadosParaOInterlude`, `AbrirFecharJanelaComSomProprio` |
| window_open ao trocar de aba | `L2Wnd.cs:620` | `TrocarDeAba_TocaWindowOpen_SoQuandoMuda` |
| game_start ao entrar (a validar, não toca) | `GameUi.cs:376` | `Sons_MapeadosParaOInterlude` |
| Tooltip PointerIn/PointerOut (atraso a validar) | `UiTooltip.cs:19`, `UiTooltip.cs:55` | `Tooltip_EntraMostraDepoisDoAtraso_SaiEsconde` |
| MouseOverUI bloqueia o clique no mundo | `UiInteract.cs:271`, `UiRoot.cs:74` (usado em `App.cs:2489`) | `Hover_JanelaMarcaPonteiroSobreAUi` |

- **Falta / fora do escopo:**
  - A tecla Alt+L e o Esc vêm pela camada de teclas da #0008 (o comando `ResetLayout` já existe em `GameUi.Command`).
  - `SparkParity.EscChain` desligada: **aguarda o usuário** confirmar o Esc do Spark.
  - Botão do meio: **bloqueado: decisão do usuário** (#0010).
  - A validar: estado 10 do Esc, `TargetWindow` como popup, regra exata do BringToFront, atraso do tooltip, `click_03`, `game_start`, som de aba no nativo.
  - Os slots existentes (inventário, barra) passam a usar o `UiSlot` nas tarefas #0009/#0010.

## Pedidos

- nenhum (o MouseOverUI já estava ligado no App).
