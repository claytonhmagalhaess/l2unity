# 04 — O que Engine, Core, NWindow e as DLLs fornecem à interface

Comparação entre o que a camada de baixo entrega à interface (callbacks, eventos `EV_*`, natives, controles e desenho) e o que o l2unity cobre com `L2Events`, `L2EventIds`, `PacketEvents` e `UiEvents`.

Legenda: **[O]** observado, **[I]** inferido, **[V]** a validar. Convenções de fonte como no 02.

## 1. Tamanho das camadas: Interlude × P166

[O] As contagens vêm de `scripts\scan_uc.py` e das contagens de `native` por classe (comando no 00 §4).

| Camada | Interlude (`tools\l2anim\export\uc\…`) | P166 (`Interface_P166\…\Classes`) |
|---|---|---|
| `Interface` (janelas e scripts) | 142 classes | 460 classes (77 GFx) |
| `NWindow` (API nativa para o script) | 87 classes, 818 `native` | 134 classes, 2.073 `native` |
| `UIScript` (base de todo script) | 247 natives | 744 natives (524 novas, 27 removidas) |
| `WindowHandle` | 44 | 104 |
| `ItemWindowHandle` | 19 | 37 |
| Eventos `EV_*` (`UIEventManager.uc`) | 322 constantes (319 ativas) | 1.209 constantes |
| `Engine` | 280 classes exportadas | 270 `.uc`; faltam `L2Radar`, `LineagePlayerController`, `SkillAction*` e outras do Interlude: é um subconjunto |
| `Core` | `Object`, `Commandlet`, `Locale`, `Subsystem`, `Time`… | 6 classes (`Object`, `ParamStack`, `Commandlet`, `Locale`, `Subsystem`, `Time`) |
| Cabeçalhos C++ | — | `Engine\Inc\EngineClasses.h` (10.079 linhas) e `NWindow\Inc\NWindowClasses.h` (12.683 linhas, 274 classes e estruturas; ex. `FItemInfo` na linha 1067, `FDrawItemInfo` na 1593) |

- [O] Classes de API só da P166 (todas posteriores): `ArenaAPI`, `AuctionAPI`, `BookMarkAPI`, `ConsignmentSaleAPI`, `EnsoulAPI`, `GFxMovieView`/`GFxUIScript`/`GFxValue`, `HairshopAPI`, `InputAPI`, `ItemLookChangeAPI`, `NewEnchantAPI`, `PostWndAPI`, `TeamMatchAPI`, `VehicleAPI`, `UIDATA_ARTIFACT`/`ENSOUL`/`TRANSFORM` etc.
- [O] Só no Interlude: `UIAPI_BARCTRL`, `UIAPI_HTMLCTRL`, `UIAPI_LISTBOX`, `UIAPI_NAMECTRL`, `UIAPI_PROGRESSCTRL`, `UIAPI_RADAR` e `UIAPI_TABCTRL`. Na P166 viraram handles (`ListBoxHandle`, `ProgressCtrlHandle`, `TabHandle`…).
- [I] Os cabeçalhos da P166 dão nomes de campo úteis (por exemplo, a ordem dos campos de `FItemInfo`), mas o layout é da P166. Para o Interlude valem `UIEventManager.uc` (struct `ItemInfo`, IL) e os deslocamentos lidos no `NWindow.dll` (spec 93).

## 2. Callbacks que o nativo chama no script

[O] Os 46 callbacks do Interlude estão na spec 01 §1.3.2 (`IL NWindow\UIScript.uc:273-367`). A P166 acrescenta `OnEventWithParamMap`, `OnRegisterEvent`, `OnSetFocus`, `OnReceivedCloseUI`, `OnMButtonDown/Up`, `OnMouseOver/Out/Move`, `OnDragItemStartTiny`, `OnDropItemWithHandle`, `OnDropWnd`, `OnRClickButton`, `OnLButtonClickListBoxItem`, `OnRButtonClickListBoxItem`, `OnDBClickListBoxItem`, `OnDrawerShowFinished/HideFinished`, `OnPropertyControllerResize`, `OnHtmlMsgHideWindow`, `OnFlashCtrlMsg` e `OnCallUCFunction` (`P166 NWindow\Classes\UIScript.uc:446-565`). Ela também muda as assinaturas de `OnKeyDown/Up`, `OnLButtonDblClick` e `OnRButton*`, que passam a receber o `WindowHandle`. **Nada disso é Interlude.**

O l2unity não tem callbacks de script. `UiEvents` (`u:UI/UiEvents.cs:10-124`) é uma ponte de ponteiro do uGUI com 13 campos.

| Callback do Interlude | Equivalente no l2unity | Estado |
|---|---|---|
| `OnLButtonDown/Up` | `UiEvents.OnDown/OnUp` | feito (mecanismo) |
| `OnLButtonDblClick` / `OnDBClickItem` | `OnDoubleClick` (`UiTexButton` via `clickCount`) | feito (mecanismo). [I] O original usa o duplo clique do Windows (`WM_LBUTTONDBLCLK` 0x203, `WinDrv.c:3455`, invertido com `GIsLeftHandedMouse`), com o tempo de duplo clique do sistema; o Unity usa o seu próprio |
| `OnRButtonDown/Up` / `OnRClickItem` | `OnRightClick`, `OnUp` | feito (mecanismo) |
| `OnRButtonDblClick` / `OnRDBClickItem` | — | falta (nenhuma janela do Interlude usa; `NCItemWnd` slot 112 existe) |
| `OnDragItemStart/End`, `OnDropItem`, `OnDropItemSource` | `OnBeginDrag/OnDrag/OnEndDrag` + `GameUi.Draggable` | parcial: só arrastar → barra; não existe "solto no mundo" (`OnDropItemSource("Console")`) |
| `OnClickListCtrlRecord` / `OnDBClickListCtrlRecord` | linhas das listas (`MultiSellListCtrl`, servidor) | parcial |
| `OnTabSplit` / `OnTabMerge` | — | falta |
| `OnMinimize`, `OnFrameExpandClick` | — | falta |
| `OnCompleteEditBox`, `OnChangeEditBox`, `OnChatMarkedEditBox` | campo de chat e caixas | parcial (`OnChatMarkedEditBox` falta) |
| `OnSendPacketWhenHiding` | — | falta (fechar a janela de party matching avisa o servidor) |
| `OnDefaultPosition` | `L2Layer.ResetPositions` | feito |
| `OnKeyDown/OnKeyUp` | — | não se aplica (só `TeaserSlideWnd` usa) |
| `OnTimer`, `OnTick`, `OnShow/OnHide`, `OnEnterState/OnExitState` | métodos dos componentes | parcial (sem máquina de estados de UI; ver spec 01 §1.6) |

## 3. Eventos `EV_*`

- [O] O l2unity usa os ids do **Interlude**: `u:UI/L2EventIds.cs` tem 319 constantes, gerado de `UIEventManager.uc` por `Docs/tools/gen_events.py`. Exemplos: `EV_RequestTooltipInfo = 2920` (`:327`) e `EV_ChatWndSetFocus = 570` (`:64`).
- [O] **Ids que mudaram na P166.** Dos 312 nomes comuns, 302 têm o mesmo id e 10 mudaram:

| Evento | Interlude | P166 |
|---|---|---|
| `EV_LoginOK` | 20 | 5650 |
| `EV_LoginFail` | 30 | 5640 |
| `EV_FishViewportWndFinalAction` | 2500 | 2522 |
| `EV_FishRankEventButtonShow` | 2510 | 2500 |
| `EV_FishRankEventButtonHide` | 2520 | 2510 |
| `EV_SkillTrainInfoWndAddExtendInfo` | 2060 | 2051 |
| `EV_EnchantHide` | 2870 | 2865 |
| `EV_EnchantResult` | 2890 | 2870 |
| `EV_PawnViewerWndAddItem` | 2910 | 4300 |
| `EV_RequestTooltipInfo` | 2920 | 2960 |

  **Regra para quem portar a partir da P166:** nunca copie id de evento da P166. Use o nome e o id do `IL UIEventManager.uc` (ou do `L2EventIds.cs`, que já está certo).
- [O] Só no Interlude: `EV_ActionSummonedList`, `EV_ActionSummonedListStart`, `EV_ClanSkillListAdd`, `EV_MinimapChangeOnTick`, `EV_MultiSellItemList`, `EV_MultiSellItemListEnd`, `EV_MultiSellNeededItemList`, `EV_MultiSellShopID`, `EV_PetSummonedStatusClose` e `EV_ShowPlaySceneInterface`.
- **Cobertura no l2unity** (inventário do `main`): 319 ids definidos, 58 referenciados no código, 18 com handler (`EV_ShowMinimap`, os de minimapa, `EV_BeginShowZoneTitleWnd`, os de party, os 4 de MultiSell, `EV_ShowBuffIcon`, `EV_Restart`). `PacketEvents` tem 29 construtores. A maior parte do HUD é atualizada por chamadas diretas `ui.*` a partir do `App` (ex. `u:App.cs:1642,1991,2003`), não pelo barramento. Eventos emitidos sem ouvinte: `EV_Inventory*`, `EV_Shortcut*`, `EV_AbnormalStatus*`, `EV_Shop*`, `EV_Trade*`, `EV_PrivateShop*`, `EV_ChatMessage`, `EV_SystemMessage`, `EV_Update*`.
- [I] Eventos de interação que o Interlude dispara do nativo e o l2unity não tem:

| Evento | Quem dispara (Interlude) | Para quê |
|---|---|---|
| `EV_RequestTooltipInfo` (2920) | `MakeTooltipInfo` `nw:0x101b8f10` | montar o tooltip no script (02 §1.2) |
| `EV_ChatWndSetFocus` (570) | `HandleKeyboardInput` `nw:0x101734e0` | tecla de digitação foca o chat (03 §1) |
| `EV_ChatWndSetString` (560) | `AttachWhisperName` `nw:0x10139700` | responder ao sussurro (03 §5) |
| `EV_ShortcutCommand` (90) | `ExecuteShortcutCommand` | comandos de tecla tratados no script (03 §2, Exec `S`) |
| `EV_DialogOK` / `EV_DialogCancel` | `DialogBox.uc:352-370` (script) | resposta dos diálogos de quantidade, destruir, largar |
| `EV_MacroShowListWnd` (1230) | `NCConsole::ShowMacroListWnd` | tecla R |

## 4. Natives que as interações chamam (Interlude) × pacote no l2unity

[O] Natives declaradas em `IL NWindow\UIScript.uc` e nas APIs. Os pacotes do aCis estão em `C:\Workspace-java\aCis_gameserver\java\net\sf\l2j\gameserver\network\clientpackets\`.

| Native (Interlude) | Interação | Pacote (aCis) | l2unity envia? |
|---|---|---|---|
| `RequestUseItem(serverID)` | duplo clique ou clique direito no item; arrastar para o equipamento | `UseItem.java` | sim (`UiPackets.UseItem`) |
| `RequestUnequipItem(id, slot)` | equipado → inventário | `RequestUnEquipItem.java` | **não** |
| `RequestDropItem` (no `EV_DialogOK` do `InventoryWnd`) | arrastar para o mundo | `RequestDropItem.java` | **não** |
| `RequestDestroyItem` | arrastar para a lixeira | `RequestDestroyItem.java` | **não** |
| `RequestCrystallizeItem` | arrastar para cristalizar | `RequestCrystallizeItem.java` | **não** |
| `PetAPI.RequestGiveItemToPet` / `RequestGetItemFromPet` / `RequestPetUseItem` | inventário ↔ pet | `RequestGiveItemToPet.java`, `RequestGetItemFromPet.java`, `RequestPetUseItem.java` | **não** |
| `UseSkill(id)` | clique na skill | `RequestMagicSkillUse.java` (ctrl, shift) | sim (`MagicSkillUse`) |
| `DoAction(id)` | clique na ação | `RequestActionUse.java` | sim |
| `RequestAction` / `RequestAttack` / `RequestAssist` / `RequestTargetUser` / `RequestSelfTarget` | clique no grupo, status, pet, duelo | `Action.java`, `AttackRequest.java`, `RequestAssist` (via `Action`) [V] | parcial: falta `RequestSelfTarget` (clique no StatusWnd) e o clique no pet |
| `RequestAddTradeItem` | troca | `AddTradeItem.java` | sim (`SocialUi`) |
| `MacroAPI.RequestUseMacro` / `RequestMakeMacro` / `RequestDeleteMacro` | macros | `RequestMakeMacro.java`, `RequestDeleteMacro.java` | **não** |
| `RequestShortCutReg` / `RequestShortCutDel` (nativo) | barra | `RequestShortCutReg.java`, `RequestShortCutDel.java` | sim |
| `RequestAutoSoulShot` (nativo) | clique direito no shot | `RequestAutoSoulShot.java` | sim, mas no Ctrl+clique (02 §1.6) |
| depósito e retirada do armazém, frete | `WarehouseWnd`, `DeliverWnd` | `SendWarehouseDepositList.java`, `SendWarehouseWithdrawList.java`, `RequestPackageSend.java` | **não** |
| montar loja privada | `PrivateShopWnd` | `SetPrivateStoreListSell.java`, `SetPrivateStoreListBuy.java`, `SetPrivateStoreMsg*.java` | **não** |
| `RefineryAPI.*` | augment | `RequestConfirmTargetItem.java`, `RequestRefine.java`, `RequestRefineCancel.java` | **não** |
| enchant | `ItemEnchantWnd` | `RequestEnchantItem.java` | **não** |
| `RequestDispel` | — | **não existe no aCis**: é posterior (02 §4) | não se aplica |

## 5. Controles nativos e desenho

- [O] Os 168 controles `NC*` e o desenho de cada um estão na spec 98. Os comportamentos de interação que este levantamento acrescenta:
  - tooltip: 02 §1.2;
  - início de arrasto com Alt: 02 §1.3;
  - roda: 02 §1.4;
  - barra de atalhos (clique direito, troca, remoção): 02 §1.6;
  - teclado: 03 §1.
- [O] Layout, ordem dos itens e cores do tooltip ficam no **script** (`IL:ToolTip.uc`). O nativo só mede (`TooltipInfo::CalculateSize`, `nw:0x10054120`) e desenha a lista de `DrawItemInfo` (`TooltipInfo::GetDrawItem`, `nw:0x10054530`).
- [O] As DLLs do Tryskell correspondem ao Interlude. Os caminhos de assert apontam para `d:\work\interlude\2007_05_23\warfare2110\` (`nwindow.c:7671`, `engine.c:12236`), e as funções do `nwindow.c` têm os mesmos endereços do `NWindow.dll` de referência (00 §2). [I] Para o `NWindow`, o `nwindow.c` é uma segunda decompilação do mesmo binário que `analises\l2-interlude\re\decomp_all\nwindow`. O que ele acrescenta é uma leitura independente, útil quando o Ghidra do `decomp_all` falhou numa função. O `engine.unpacked.dll` (30 MB) e o `orc.unpacked.dll` são versões desempacotadas. [V] Se o `engine.unpacked.dll` tem as mesmas funções e endereços do `engine.dll` de referência (8,7 MB): o arquivo de referência tem data de 2026-04-26, o que sugere uma cópia modificada.
- [O] Entrada do Windows (`WinDrv.c`): os botões passam por `UWindowsViewport` (casos 0x201–0x206 em `WinDrv.c:3449-3470`), com troca esquerdo/direito quando `GIsLeftHandedMouse` está ligado. A roda chega como `0x20a` (`WinDrv.c:3957,4347`). [V] O l2unity não tem a opção de mouse para canhoto.

## 6. Engine e Core

- [O] A precedência das teclas (UI antes do `PlayerInput`) vem do `Interactions`/`InteractionMaster` do UE2 (`Engine\Classes\Interaction.uc`, `InteractionMaster.uc`; spec 05 §5.6). O `UIEventManager` do Interlude estende `Interactions`.
- [O] `Interaction.WorldToScreen/ScreenToWorld` (`P166 Engine\Classes\Interaction.uc:45-50`) e `GetClickLocation()` (`IL:InventoryWnd.uc:354`) dão o ponto do mundo sob o cursor, usado para largar item no chão.
- [I] Fora isso, Engine e Core não trazem nada de interação que a UI do l2unity precise reproduzir: são o mundo, o render e os pacotes, que já estão nas specs 08, 09 e 92–96.
