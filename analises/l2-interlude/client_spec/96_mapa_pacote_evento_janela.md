# Mapa pacote → engine → UI → evento → janela

Gerado por `scripts/game_map.py` (dados: `out/re/game_map.json`). Cadeia observada no binário e validada ponta a ponta com `CreatureSay` → `EV_ChatMessage`:

`opcode` → tratador (tabela de despacho do `engine.dll`) → `GE->vtbl[x]` = `UGameEngine::On*` → `[GE+0x68]->vtbl[y]` ou `GL2Console->vtbl[y]` = slot do console (`UL2ConsoleWnd`) → função sobrescrita no `NWindow.dll` → despachante `FUN_100d1790(EV_*, param)` → `OnEvent` das janelas que registraram o evento.

Fecho transitivo pelo grafo de chamadas do Ghidra, com 448 arestas virtuais de `UGameEngine`; profundidade até 3 no engine e até 6 no NWindow; funções chamadas por mais de 60 outras não são expandidas. A profundidade entre parênteses indica quão direta é a ligação: 0 a 3 é forte; valores altos podem vir de ramos condicionais.

## Origem de todos os eventos de UI

| origem | eventos |
|---|---|
| pacote do servidor | 230 |
| UI nativa (NWindow: clique, timer, native chamada pelo script) | 27 |
| engine fora de pacote (entrada, tick, estado) | 26 |
| registrado, sem emissor neste build | 15 |
| script (ExecuteEvent) | 11 |
| sem uso | 10 |
| **total** | **319** |

**UI nativa (NWindow: clique, timer, native chamada pelo script)** (quem dispara):

| evento | origem |
|---|---|
| EV_Test | UUIScript::execRequestTest |
| EV_RadarTransitionFinished | FUN_10043160 |
| EV_GamingStateEnter | FUN_1006fb10 |
| EV_GamingStateExit | FUN_1006fc40 |
| EV_ChatWndSetString | UUIScript::execSetChatMessage, FUN_10139700, FUN_10139700, FUN_101398c0, FUN_101398c0, FUN_101398c0 |
| EV_ChatWndMsnStatus | FUN_100c1ad0 |
| EV_QuestSetCurrentID | FUN_100065e0 |
| EV_PetWndRegPetNameFailed | UUIScript::execRequestChangePetName |
| EV_ShowHelp | FUN_10181970 |
| EV_LoadHelpHtml | FUN_1008caf0 |
| EV_LoadPetitionHtml | FUN_1008caf0 |
| EV_MacroList | UMacroAPI::execRequestMacroList |
| EV_MacroDeleted | UMacroAPI::execRequestDeleteMacro |
| EV_ActionListStart | UActionAPI::execRequestActionList |
| EV_ActionList | UActionAPI::execRequestActionList |
| EV_ActionPetListStart | UActionAPI::execRequestPetActionList |
| EV_ActionPetList | UActionAPI::execRequestPetActionList |
| EV_ActionSummonedListStart | UActionAPI::execRequestSummonedActionList |
| EV_ActionSummonedList | UActionAPI::execRequestSummonedActionList |
| EV_IMEStatusChange | FUN_1002a840, FUN_1002a8e0, FUN_1006fb10 |
| EV_MinimapHideQuest | FUN_10165630 |
| EV_MinimapShowReduceBtn | FUN_101880f0, FUN_1018a9f0 |
| EV_MinimapHideReduceBtn | FUN_10187b50 |
| EV_MinimapUpdateGameTime | FUN_101895c0 |
| EV_LanguageChanged | FUN_10164610 |
| EV_PawnViewerWndAddItem | FUN_1016e410 |
| EV_RequestTooltipInfo | FUN_101b8ab0, FUN_101b8d20, FUN_101b8f10, FUN_101b90f0 |

**engine fora de pacote (entrada, tick, estado)** (quem dispara):

| evento | origem |
|---|---|
| EV_ShortcutCommand | UGameEngine::InputEvent |
| EV_ServerAgeLimitChange | NCServerSelectWnd (tela de selecao de servidor; RTTI .?AVNCServerSelectWnd@@, vtable 0x10295e9c slot 125 = FUN_101a8d60) -> FUN_1014fc30 -> emissor FUN_1014fb40; tambem pelo slot 513 do console (slot so do NWindow) |
| EV_ReceiveMagicSkillUse | UGameEngine::OnReceiveMagicSkillUse |
| EV_ShowReplayQuitDialogBox | WinDrv.dll UWindowsViewport: WM_SYSCOMMAND com SC_CLOSE (wParam & 0xFFF0 == 0xF060) em modo replay -> console->vtbl[0x748] (slot 466) |
| EV_ClanSetAcademyMaster | UGameEngine::OnReceiveSetAcademyMaster |
| EV_ChatWndSetFocus | UGameEngine::InputEvent |
| EV_ChatWndMacroCommand | Tick do console a cada quadro (slot 26, UL2ConsoleWnd::Tick) -> FUN_101b4df0 (execucao de macro, um comando por tick) -> emissor FUN_101b45f0 |
| EV_JoypadLButtonUp | UInput::ExecJoyPad |
| EV_JoypadRButtonUp | UInput::ExecJoyPad |
| EV_ShortcutPageUpdate | UGameEngine::InputEvent, UInput::ExecJoyPad |
| EV_ShortcutJoypad | WinDrv.dll (entrada de joystick): GL2Console->vtbl[0x2cc] (slot 179) |
| EV_ShowShortcutWnd | UGameEngine::InputEvent |
| EV_QuestList | UGameEngine::AddQuestID |
| EV_ShowBuffIcon | UGameEngine::InputEvent |
| EV_ShowBBS | UGameEngine::InputEvent |
| EV_MacroShowListWnd | UGameEngine::InputEvent |
| EV_RestartMenuShow | FUN_104bac30 |
| EV_PartyMatchCommand | UInput::ExecJoyPad |
| EV_MinimapChangeOnTick | ALineagePlayerController::Tick |
| EV_ShowUserPetitionWnd | natives de script UUIScript::execExecuteCommand (slot 462) e execExecuteCommandFromAction (slot 463): comando executado por uma janela |
| EV_ShowGMWnd | UGameEngine::InputEvent |
| EV_BeginShowZoneTitleWnd | ALineagePlayerController::Tick |
| EV_FishViewportWndHide | FL2ReplayManager::Tick |
| EV_InventoryToggleWindow | UGameEngine::InputEvent, UInput::ExecJoyPad |
| EV_DuelEnemyRelation | UGameEngine::OnDuelEnemyRelation |
| EV_ResolutionChanged | WinDrv.dll UWindowsViewport (redimensionamento): [Viewport+0x68]->vtbl[0x510] (slot 324) |

**registrado, sem emissor neste build:** EV_ClanCrestChange, EV_ClanClearWarList, EV_MinFrameRateChanged, EV_JoypadLButtonDown, EV_JoypadRButtonDown, EV_HeroRecord, EV_TargetHideWindow, EV_PetStatusSpelledList, EV_SummonedWndShow, EV_SummonedStatusShow, EV_PartySpelledList, EV_RadarDeleteTarget, EV_MinimapShowQuest, EV_FishRankEventButtonShow, EV_EnchantHide

**script (ExecuteEvent):** EV_RecipeShowRecipeTreeWnd, EV_OlympiadBuffShow, EV_MacroShowEditWnd, EV_DialogOK, EV_DialogCancel, EV_ManorCropSellWndSetCropSell, EV_ManorCropSellChangeWndSetCropNameAndRewardType, EV_ManorSeedInfoSettingWndChangeValue, EV_ManorSeedInfoChangeWndShow, EV_ManorCropInfoSettingWndChangeValue, EV_ManorCropInfoChangeWndShow

**sem uso:** EV_LoginOK, EV_LoginFail, EV_CardKeyLogin, EV_MagicSkillList, EV_ShortcutPageDown, EV_ShortcutPageUp, EV_RadarColor, EV_EventMatchDestroyed, EV_FishViewportWndInit, EV_FishViewportWndFinalAction

## Estado de login: 13 pacotes

| opcode | pacote | aCis | formato lido | efeito | métodos UGameEngine / funções | eventos (profundidade) | janelas / nota |
|---|---|---|---|---|---|---|---|
| 0x0 | — | Init | `dd` `dddd` `s` | UI nativa (C++, sem EV_) | OnGameGuardQuery | — | chama o console (slots 33) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x1 | — | LoginFail | `c` | UI nativa (C++, sem EV_) | — | — | chama o console (slots 36) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x2 | — | AccountKicked | `dd` | UI nativa (C++, sem EV_) | — | — | chama o console (slots 336, 337) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x3 | — | LoginOk | `dddddddd` `b` | UI nativa (C++, sem EV_) | CheckLoginType | — | chama o console (slots 37) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x4 | — | ServerList | `cc` `cddcchhcdc` | UI nativa (C++, sem EV_) | — | — | chama o console (slots 47, 48, 49) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x5 | — | — | `c` | UI nativa (C++, sem EV_) | — | — | chama o console (slots 36) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x6 | — | PlayFail | `c` | UI nativa (C++, sem EV_) | — | — | chama o console (slots 36) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x7 | — | PlayOk | `dd` | rede | — | — | PlayOk do servidor de login: le a sessao (formato "dd"), fecha o socket de login, zera o estado de rede e conecta ao servidor de jogo (inet_ntoa + FUN_10420c60); estado de rede -> 2 (jogo). |
| 0x8 | — | — | `c` | UI nativa (C++, sem EV_) | — | — | chama o console (slots 36) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x9 | — | — | `c` `hS` | UI nativa (C++, sem EV_) | — | — | chama o console (slots 335) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0xa | — | — | `dc` | UI nativa (C++, sem EV_) | — | — | chama o console (slots 35) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0xb | — | GGAuth | `ddddd` | UI nativa (C++, sem EV_) | OnGameGuardQuery | — | chama o console (slots 33) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0xc | — | — | — | log | — | — | Tratador "Dummy": so registra "(Receive)Dummy" no log de rede e descarta. Usado nos DummyPacket e como padrao do estado de login para opcodes >= 0x0C. |

## Estado de jogo: 255 pacotes

| opcode | pacote | aCis | formato lido | efeito | métodos UGameEngine / funções | eventos (profundidade) | janelas / nota |
|---|---|---|---|---|---|---|---|
| 0x0 | VersionCheckPacket | KeyPacket | `cQdd` | UI nativa (C++, sem EV_) | OnReceiveVersionCheck | — | chama o console (slots 198) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x1 | — | MoveToLocation | `ddddddd` | mundo/engine | OnMoveToLocation, AdjustPawnLocation | — | — |
| 0x2 | NSPacket | NpcSay | `dddS` | UI | — | EV_PartyMatchChatMessage(1), EV_ShowPetitionWnd(1), EV_PetitionChatMessage(1), EV_ChatMessage(2) | ChatWnd, PartyMatchRoomWnd, PetitionWnd |
| 0x3 | CIPacket | CharInfo | `dddddSdddddddddddddddhhhhhhhhhhhhhhhhhhhhhhhhddddddddddddddffffdddSdddddccccccch` `h` `c` `dchd` `ddc` `c` … | UI | OnServerClose, OnEquipItem, OnCharInfo, OnFishingStart | EV_FishViewportWndShow(1), EV_FishRankEventButtonHide(2) | FishViewportWnd |
| 0x4 | UIPacket | UserInfo | `dddddSddddQddddddddddddddddddddddddddddddddddddddddddddddddhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhddddddddddddddddddddffffddddSdddddcccddh` `h` `c` `dc` `d` `hhdh` … | UI | OnReceivePledgeMyAuth, OnEquipItemPlaySound, OnEquipItem, OnUserInfo | EV_UpdateUserInfo(0), EV_ClanMyAuth(1), EV_ChatWndStatusChange(1), EV_FishViewportWndShow(1), EV_FishRankEventButtonHide(2) | ChatWnd, ClanWnd, DetailStatusWnd, FishViewportWnd, InventoryWnd, StatusWnd |
| 0x5 | AttackPacket | Attack | `dddcdddh` `ddc` `dd` `d` | UI | OnAttack, OnAssociatedAttack, OnAttacked, OnAttackCanceled | EV_ReceiveAttack(1) | OlympiadPlayerWnd |
| 0x6 | DiePacket | Die | `ddddddd` | UI | OnDie | EV_Die(1) | AbnormalStatusWnd, RestartMenuWnd |
| 0x7 | RevivePacket | Revive | `d` | UI | OnRevive | EV_RestartMenuHide(1) | RestartMenuWnd |
| 0x8 | AttackOutofRangePacket | — | — | mundo/engine | OnAttackOutofRange | — | — |
| 0x9 | AttackinCoolTimePacket | — | — | mundo/engine | OnAttackinCoolTime | — | — |
| 0xa | AttackDeadTargetPacket | — | — | mundo/engine | OnAttackDeadTarget | — | — |
| 0xb | SpawnItemPacket | SpawnItem | `dddddddd` | mundo/engine | OnSpawnItem | — | — |
| 0xc | DropItemPacket | DropItem | `ddddddddd` | mundo/engine | OnDropItem | — | — |
| 0xd | GetItemPacket | GetItem | `ddddd` | UI nativa (C++, sem EV_) | OnGetItem, AdjustPawnLocation | — | chama o console (slots 278) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0xe | StatusUpdatePacket | StatusUpdate | `dd` `dd` | UI | OnClassUpdate, OnLevelUpdate, OnStrUpdate, OnDexUpdate | EV_UpdateHP(1), EV_UpdateMaxHP(1), EV_UpdateCP(1), EV_UpdateMaxCP(1), EV_UpdateMP(1), EV_UpdateMaxMP(1) | DetailStatusWnd, RecipeBuyListWnd, RecipeBuyManufactureWnd, RecipeManufactureWnd, StatusWnd, TargetStatusWnd |
| 0xf | NpcHtmlMessagePacket | NpcHtmlMessage | `dSd` | UI nativa (C++, sem EV_) | OnNpcHtmlMessage | — | chama o console (slots 81) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x10 | SellListPacket | SellList | `ddh` `h` `dddhhdhhhd` | UI | OnStartSellList, OnAddSellList | EV_InventoryHideWindow(1), EV_ShopOpenWindow(1), EV_ShopAddItem(1) | InventoryWnd, ShopWnd |
| 0x11 | BuyListPacket | BuyList | `ddh` `h` `dddhhdhhhd` | UI | OnStartBuyList, OnAddBuyList | EV_ShopOpenWindow(1), EV_ShopAddItem(1) | ShopWnd |
| 0x12 | DeleteObjectPacket | DeleteObject | `dd` | UI | OnDeleteUser, OnHidePetWnd, OnDeleteItem | EV_PetSummonedStatusClose(1) | PetStatusWnd, PetWnd, SummonedStatusWnd, SummonedWnd |
| 0x13 | CharacterSelectionInfoPacket | CharSelectInfo | `d` `SdSddddddddddffdQddddddddddddddddddddddddddddddddddddddddddddddddffdddchh` | UI nativa (C++, sem EV_) | User::User | — | chama o console (slots 39, 40) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x14 | LoginFailPacket | AuthLoginFail | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0x15 | CharacterSelectedPacket | CharSelected | `SdSddddddddddffdQddddddddddddddddddddddddddddddddddddddddddd` `d` `b` `dddd` `d` `dddd` … | UI nativa (C++, sem EV_) | OnReceiveCharacterSelectedPacket, OnReceiveServerTime, OnSearchOrc, OnGameGuardQuery | — | chama o console (slots 33, 374, 376, 377) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x16 | NpcInfoPacket | AbstractNpcInfo | `ddddddddddddddddddffffdddcccccSSddd` `dddddccffdd` | UI nativa (C++, sem EV_) | OnNpcInfo, OnServerClose | — | chama o console (slots 46) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x17 | NewCharacterSuccessPacket | CharTemplates | `d` `dddddddddddddddddddd` | UI nativa (C++, sem EV_) | OnAcceptNewCharacter, AddRecommandedData, EndRecommandedData | — | chama o console (slots 43, 60, 61) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x18 | NewCharacterFailPacket | — | — | UI nativa (C++, sem EV_) | OnAcceptNewCharacter | — | chama o console (slots 43) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x19 | CharacterCreateSuccessPacket | CharCreateOk | — | UI nativa (C++, sem EV_) | OnAcceptCharacterCreate | — | chama o console (slots 44) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x1a | CharacterCreateFailPacket | CharCreateFail | `d` | UI nativa (C++, sem EV_) | — | — | chama o console (slots 38) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x1b | ItemListPacket | ItemList | `hh` `h` `dddhhhdhhhhd` | UI | OnReceiveItemList, AddInventoryItem, OnUpdateShortCutItem, OnEndItemList | EV_InventoryClear(1), EV_InventoryOpenWindow(1), EV_InventoryAddItem(1), EV_InventoryItemListEnd(1), EV_ShortcutUpdate(2) | InventoryWnd, QuestTreeWnd, RecipeBuyManufactureWnd, RecipeManufactureWnd, ShortcutWnd |
| 0x1c | SunRisePacket | SunRise | — | mundo/engine | OnReceiveServerTime | — | — |
| 0x1d | SunSetPacket | SunSet | — | mundo/engine | OnReceiveServerTime | — | — |
| 0x1e | TradeStartPacket | TradeStart | `d` `h` `h` `dddhhdhhh` | UI | OnReceiveTradeStart, OnReceiveAddTradeInventoryItem | EV_InventoryHideWindow(1), EV_TradeStart(1), EV_TradeAddItem(1) | InventoryWnd, TradeWnd |
| 0x1f | TradeStartOkPacket | — | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0x20 | TradeOwnAddPacket | TradeOwnAdd | `h` `h` `dddhhdhhh` | UI | OnReceiveAddTradeOwnItem | EV_TradeAddItem(1) | TradeWnd |
| 0x21 | TradeOtherAddPacket | TradeOtherAdd | `h` `h` `dddhhdhhh` | UI | OnReceiveAddTradeOtherItem | EV_TradeAddItem(1) | TradeWnd |
| 0x22 | TradeDonePacket | SendTradeDone | `d` | UI | OnReceiveTradeDoneMsg | EV_TradeDone(1) | TradeWnd |
| 0x23 | CharacterDeleteSuccessPacket | CharDeleteOk | — | UI nativa (C++, sem EV_) | OnAcceptCharacterDelete | — | chama o console (slots 42) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x24 | CharacterDeleteFailPacket | CharDeleteFail | `d` | UI nativa (C++, sem EV_) | OnAcceptCharacterDelete | — | chama o console (slots 42) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x25 | ActionFailPacket | ActionFailed | — | mundo/engine | OnActionFail | — | — |
| 0x26 | SeverClosePacket | ServerClose | — | UI nativa (C++, sem EV_) | OnServerClose | — | chama o console (slots 46) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x27 | InventoryUpdatePacket | InventoryUpdate | `h` `hh` `dddhhhdhhhhd` | UI | OnReceiveUpdateItemList, OnUpdateShortCutItem | EV_InventoryUpdateItem(1), EV_ShortcutUpdate(2) | InventoryWnd, QuestTreeWnd, RecipeBuyManufactureWnd, RecipeManufactureWnd, ShortcutWnd |
| 0x28 | TeleportToLocationPacket | TeleportToLocation | `ddddd` | mundo/engine | OnTeleportToLocation, ScreenFadeOut, L2_Teleport, Flush | — | — |
| 0x29 | TargetSelectedPacket | TargetSelected | `dddddd` | UI nativa (C++, sem EV_) | OnTargetSelected | — | chama o console (slots 34) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x2a | TargetUnselectedPacket | TargetUnselected | `ddddd` | mundo/engine | OnTargetUnselected, AdjustPawnLocation | — | — |
| 0x2b | AutoAttackStartPacket | AutoAttackStart | `d` | mundo/engine | OnAutoAttackStart | — | — |
| 0x2c | AutoAttackStopPacket | AutoAttackStop | `d` | mundo/engine | OnAutoAttackStop | — | — |
| 0x2d | SocialActionPacket | SocialAction | `dd` | mundo/engine | OnSocialAction, OnFirecracker | — | — |
| 0x2e | ChangeMoveTypePacket | ChangeMoveType | `ddd` | mundo/engine | OnChangeMoveType | — | — |
| 0x2f | ChangeWaitTypePacket | ChangeWaitType | `ddddd` | mundo/engine | OnChangeWaitType, AdjustPawnLocation | — | — |
| 0x30 | ManagePledgePowerPacket | ManagePledgePower | `ddd` | UI | OnPledgePower | EV_ClanAuth(1) | ClanDrawerWnd |
| 0x31 | CreatePledgePacket | — | `d` | UI | OnReceiveCreatePledge | EV_SystemMessage(3), EV_ChatMessage(4) | ChatWnd, OnScreenMessageWnd |
| 0x32 | AskJoinPledgePacket | AskJoinPledge | `dSd` `S` | UI nativa (C++, sem EV_) | OnReceiveAskJoinPledge | — | chama o console (slots 109) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x33 | JoinPledgePacket | JoinPledge | `d` | UI | OnReceiveJoinPledge | EV_SystemMessage(3), EV_ChatMessage(4) | ChatWnd, OnScreenMessageWnd |
| 0x34 | WithdrawalPledgePacket | — | `d` | UI | OnReceiveWidthdrawalPledge | EV_SystemMessage(3), EV_ChatMessage(4) | ChatWnd, OnScreenMessageWnd |
| 0x35 | OustPledgeMemberPacket | — | `d` | UI | OnReceiveOustPledgeMember | EV_SystemMessage(3), EV_ChatMessage(4) | ChatWnd, OnScreenMessageWnd |
| 0x36 | SetOustPledgeMemberPacket | — | — | UI | OnReceiveOustPledgeMessage | EV_SystemMessage(3), EV_ChatMessage(4) | ChatWnd, OnScreenMessageWnd |
| 0x37 | DismissPledgePacket | — | `d` | UI | OnReceiveDismissPledge | EV_SystemMessage(3), EV_ChatMessage(4) | ChatWnd, OnScreenMessageWnd |
| 0x38 | SetDismissPledgePacket | — | — | UI | OnReceiveOustPledgeMessage | EV_SystemMessage(3), EV_ChatMessage(4) | ChatWnd, OnScreenMessageWnd |
| 0x39 | AskJoinPartyPacket | AskJoinParty | `Sd` | UI nativa (C++, sem EV_) | OnReceiveAskJoinParty | — | chama o console (slots 122) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x3a | JoinPartyPacket | JoinParty | `d` | UI | OnReceiveJoinParty | EV_SystemMessage(3), EV_ChatMessage(4) | ChatWnd, OnScreenMessageWnd |
| 0x3b | WithdrawalPartyPacket | — | `d` | UI | OnReceiveWithdrawalParty | EV_SystemMessage(2), EV_ChatMessage(3) | ChatWnd, OnScreenMessageWnd |
| 0x3c | OustPartyMemberPacket | — | `d` | UI | OnReceiveOustPartyMember | EV_SystemMessage(3), EV_ChatMessage(4) | ChatWnd, OnScreenMessageWnd |
| 0x3d | SetOustPartyMemberPacket | — | — | UI | OnReceiveOustPartyMessage | EV_SystemMessage(3), EV_ChatMessage(4) | ChatWnd, OnScreenMessageWnd |
| 0x3e | DismissPartyPacket | — | `d` | UI | OnReceiveDismissParty | EV_SystemMessage(2), EV_ChatMessage(3) | ChatWnd, OnScreenMessageWnd |
| 0x3f | SetDismissPartyPacket | — | — | UI | OnReceiveDismissPartyMessage | EV_SystemMessage(3), EV_ChatMessage(4) | ChatWnd, OnScreenMessageWnd |
| 0x40 | MagicAndSkillList | — | `ddd` | UI nativa (C++, sem EV_) | OnReceiveMagicSkillListPacket | — | chama o console (slots 186) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x41 | WareHouseDepositListPacket | WarehouseDepositList | `hdh` `h` `dddhhdhhhddd` | UI | OnStartDepositList, OnAddDepositList | EV_InventoryHideWindow(1), EV_WarehouseOpenWindow(1), EV_WarehouseAddItem(1) | InventoryWnd, WarehouseWnd |
| 0x42 | WareHouseWithdrawListPacket | WarehouseWithdrawList | `hdh` `h` `dddhhdhhhddd` | UI | OnStartWithdrawList, OnAddWithdrawList | EV_WarehouseOpenWindow(1), EV_WarehouseAddItem(1) | WarehouseWnd |
| 0x43 | WareHouseDonePacket | — | `d` | UI | OnReceiveWareHouseDonePacket | EV_SystemMessage(3), EV_ChatMessage(4) | ChatWnd, OnScreenMessageWnd |
| 0x44 | ShortCutRegisterPacket | ShortCutRegister | `dd` `dddddhh` `ddcd` `dd` `dd` `dd` | UI | — | EV_ShortcutUpdate(1) | ShortcutWnd |
| 0x45 | ShortCutInitPacket | ShortCutInit | `d` `dd` `dddddhh` `ddcd` `dd` `dd` … | UI | OnReceiveShortCutList | EV_ShortcutUpdate(1), EV_ShortcutClear(1) | ShortcutWnd |
| 0x46 | ShortCutDeletePacket | ShortCutDelete | `d` | UI nativa (C++, sem EV_) | OnReceiveShortCutDelete | — | chama o console (slots 184) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x47 | StopMovePacket | StopMove | `ddddd` | mundo/engine | OnStopMove, AdjustPawnLocation | — | — |
| 0x48 | MagicSkillUse | MagicSkillUse | `dddddddddh` `h` `h` `ddd` | UI nativa (C++, sem EV_) | OnServerClose, OnReceiveMagicSkillUse, AdjustPawnLocation, OnFirecracker | — | chama o console (slots 273, 276, 46) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x49 | MagicSkillCanceled | MagicSkillCanceled | `d` | UI nativa (C++, sem EV_) | OnReceiveMagicSkillCanceled | — | chama o console (slots 276) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x4a | SayPacket2 | CreatureSay | `dd` `dd` `SS` | UI | OnSay2 | EV_PartyMatchChatMessage(2), EV_ShowPetitionWnd(2), EV_PetitionChatMessage(2), EV_ChatMessage(3) | ChatWnd, PartyMatchRoomWnd, PetitionWnd |
| 0x4b | EquipUpdatePacket | EquipUpdate | `ddd` | UI nativa (C++, sem EV_) | OnUpdateEquipItem | — | chama o console (slots 199) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x4c | DoorInfoPacket | DoorInfo | `ddd` | mundo/engine | OnDoorInfo | — | — |
| 0x4d | DoorStatusUpdatePacket | DoorStatusUpdate | `ddddddd` | UI | OnDoorStatusUpdate | EV_TargetUpdate(1) | GMWnd, TargetStatusWnd |
| 0x4e | — | PartySmallWindowAll | `ddd` `dSdddddddddd` | UI | OnPartyAddMemberPacket | EV_ChatWndStatusChange(1), EV_PartyAddParty(1), EV_PartyMemberChanged(1) | ChatWnd, MinimapWnd, MinimapWnd_Expand, OptionWnd, PartyWnd, PartyWndCompact |
| 0x4f | PartySmallWindowAddPacket | PartySmallWindowAdd | `dddSdddddddddd` | UI | OnPartyAddMemberPacket | EV_ChatWndStatusChange(1), EV_PartyAddParty(1), EV_PartyMemberChanged(1) | ChatWnd, MinimapWnd, MinimapWnd_Expand, OptionWnd, PartyWnd, PartyWndCompact |
| 0x50 | PartySmallWindowDeleteAllPacket | PartySmallWindowDeleteAll | — | UI | OnPartyDeleteAllPacket | EV_ChatWndStatusChange(1), EV_PartyDeleteAllParty(1), EV_PartyMemberChanged(1) | ChatWnd, MinimapWnd, MinimapWnd_Expand, OptionWnd, PartyWnd, PartyWndCompact |
| 0x51 | PartySmallWindowDeletePacket | PartySmallWindowDelete | `dS` | UI | OnPartyDeleteMemberPacket | EV_PartyDeleteParty(1), EV_PartyMemberChanged(1) | MinimapWnd, MinimapWnd_Expand, OptionWnd, PartyWnd, PartyWndCompact |
| 0x52 | PartySmallWindowUpdatePacket | PartySmallWindowUpdate | `dSdddddddd` | UI | OnPartyUpdateMemberPacket | EV_PartyUpdateParty(1) | PartyWnd, PartyWndCompact |
| 0x53 | PledgeShowMemberListAllPacket | PledgeShowMemberListAll | `dddSS` `dddddddddSdd` `d` `Sdddddd` | UI | OnReceivePledgeInfo, OnAddPledgeMemberMultiple | EV_ClanInfo(1), EV_ClanAddMemberMultiple(1) | ClanWnd |
| 0x54 | PledgeShowMemberListUpdatePacket | PledgeShowMemberListUpdate | `Sddddddd` | UI | OnUpdatePledgeMember | EV_ClanMemberInfoUpdate(1) | ClanWnd |
| 0x55 | PledgeShowMemberListAddPacket | PledgeShowMemberListAdd | `Sdddddd` | UI | OnAddPledgeMember | EV_ClanAddMember(1) | ClanWnd |
| 0x56 | PledgeShowMemberListDeletePacket | PledgeShowMemberListDelete | `S` | UI | OnDeletePledgeMember | EV_ClanDeleteMember(1) | ClanWnd |
| 0x57 | MagicListPacket | — | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0x58 | SkillListPacket | SkillList | `d` `dddc` | UI | OnShowSkillWnd, OnSkillListPacket | EV_SkillListStart(1), EV_SkillList(1) | MagicSkillWnd |
| 0x59 | VehicleInfoPacket | VehicleInfo | `ddddd` | mundo/engine | OnVehicleInfo | — | — |
| 0x5a | VehicleDeparturePacket | VehicleDeparture | `dddddd` | mundo/engine | OnVehicleDeparture | — | — |
| 0x5b | VehicleCheckLocationPacket | OnVehicleCheckLocation | `dddd` | log | — | — | VehicleCheckLocation: so le id/x/y/z/yaw e registra no log de rede; sem efeito no mundo. |
| 0x5c | GetOnVehiclePacket | GetOnVehicle | `ddddd` | mundo/engine | OnGetOnVehicle | — | — |
| 0x5d | GetOffVehiclePacket | GetOffVehicle | `ddddd` | mundo/engine | OnGetOffVehicle | — | — |
| 0x5e | TradeRequestPacket | SendTradeRequest | `d` | UI | OnReceiveTradeDemand | EV_TradeRequestStartExchange(1) | TradeWnd |
| 0x5f | RestartResponsePacket | RestartResponse | `dS` | UI | OnRestartResponse | EV_Restart(1), EV_ObserverWndHide(1) | AbnormalStatusWnd, ObserverWnd, PartyMatchRoomWnd, PartyWnd, PartyWndCompact, RestartMenuWnd |
| 0x60 | MoveToPawnPacket | MoveToPawn | `dddddd` | mundo/engine | OnMoveToPawn, OnMoveToActor, AdjustPawnLocation | — | — |
| 0x61 | ValidateLocationPacket | ValidateLocation | `ddddd` | mundo/engine | OnValidateLocation, L2_Teleport, AdjustPawnLocation, Flush | — | — |
| 0x62 | StartRotatingPacket | StartRotation | `dddd` | mundo/engine | OnStartRotating | — | — |
| 0x63 | FinishRotatingPacket | StopRotation | `ddd` | mundo/engine | OnFinishRotating | — | — |
| 0x64 | SystemMessagePacket | SystemMessage | `d` `d` `d` `S` `d` `dhh` … | UI | FL2GameData::GetZoneName | EV_SystemMessage(1), EV_ShowPetitionWnd(2), EV_PetitionChatMessage(2), EV_ChatMessage(3) | ChatWnd, OnScreenMessageWnd, PetitionWnd |
| 0x65 | StartPledgeWarPacket | StartPledgeWar | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0x66 | ReplyStartPledgeWarPacket | — | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0x67 | StopPledgeWarPacket | StopPledgeWar | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0x68 | ReplyStopPledgeWarPacket | — | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0x69 | SurrenderPledgeWarPacket | SurrenderPledgeWar | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0x6a | ReplySurrenderPledgeWarPacket | — | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0x6b | SetPledgeCrestPacket | — | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0x6c | PledgeCrestPacket | PledgeCrest | `dd` | mundo/engine | OnMakeDDSCrestFile, OnImportCrestFile | — | — |
| 0x6d | SetupGaugePacket | SetupGauge | `ddd` | mundo/engine | OnSetupGaugePacket | — | — |
| 0x6e | ShowBoardPacket | ShowBoard | `c` `SSSSSSSSS` | UI | OnShowboardPacket | EV_ShowBoardPacket(1) | BoardWnd |
| 0x6f | ChooseInventoryItemPacket | ChooseInventoryItem | `d` | UI | OnSelectItemToEnchant | EV_EnchantShow(1), EV_EnchantItemList(1) | ItemEnchantWnd |
| 0x70 | DummyPacket | — | — | log | — | — | Tratador "Dummy": so registra "(Receive)Dummy" no log de rede e descarta. Usado nos DummyPacket e como padrao do estado de login para opcodes >= 0x0C. |
| 0x71 | MoveToLocationInVehiclePacket | MoveToLocationInVehicle | `dddddddd` | mundo/engine | OnMoveToLocationInVehicle | — | — |
| 0x72 | StopMoveInVehiclePacket | StopMoveInVehicle | `dddddd` | mundo/engine | OnStopMoveInVehicle | — | — |
| 0x73 | ValidateLocationInVehiclePacket | ValidateLocationInVehicle | `dddddd` | mundo/engine | OnValidateLocationInVehicle, L2_Teleport, Flush | — | — |
| 0x74 | TradeUpdatePacket | TradeItemUpdate | `h` `hh` `dddhhdhhh` | UI | OnReceiveTradeUpdate | EV_TradeUpdateInventoryItem(1) | TradeWnd |
| 0x75 | TradePressOwnOkPacket | TradePressOwnOk | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0x76 | MagicSkillLaunchedPacket | MagicSkillLaunched | `dddd` `d` | UI nativa (C++, sem EV_) | OnReceiveMagicSkillLaunched | — | chama o console (slots 475) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x77 | FriendAddRequestResult | — | `d` | UI | OnReceiveFriendAddRequestResult | EV_SystemMessage(3), EV_ChatMessage(4) | ChatWnd, OnScreenMessageWnd |
| 0x78 | FriendAdd | — | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0x79 | FriendRemove | — | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0x7a | FriendList | — | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0x7b | FriendStatus | FriendStatus | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0x7c | TradePressOtherOkPacket | TradePressOtherOk | — | UI | OnReceiveTradePressOtherOk | EV_TradeOtherOK(1) | TradeWnd |
| 0x7d | FriendAddRequest | FriendAddRequest | `S` | UI nativa (C++, sem EV_) | OnReceiveFriendAddRequest | — | chama o console (slots 136) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x7e | LogOutOkPacket | LeaveWorld | — | UI nativa (C++, sem EV_) | OnAcceptLogOut | — | chama o console (slots 45) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x7f | AbnormalStatusUpdatePacket | AbnormalStatusUpdate | `h` `dhd` | UI | OnReceiveAbnormalStatus, AddAbnormalStatus | EV_AbnormalStatusNormalItem(1) | AbnormalStatusWnd |
| 0x80 | QuestListPacket | QuestList | `h` `dd` `b` | UI | OnEndQuestList | EV_QuestListStart(1), EV_QuestListEnd(1) | QuestTreeWnd |
| 0x81 | EnchantResultPacket | EnchantResult | `d` | UI | OnReceiveEnchantResult | EV_EnchantResult(1) | ItemEnchantWnd |
| 0x82 | PledgeShowMemberListDeleteAllPacket | PledgeShowMemberListDeleteAll | — | UI | OnDeleteAllPledgeMember | EV_ClanDeleteAllMember(1) | ClanWnd |
| 0x83 | PledgeInfoPacket | PledgeInfo | `dSS` | dados | — | — | PledgeInfo: le id do cla, nome do cla e nome da alianca e grava no cache de clas (NET->vtbl[0xac] = GetPledgeInfo; nomes em +0x04 e +0x9c), lido depois por nameplates, alvo e janelas. |
| 0x84 | PledgeExtendedInfoPacket | — | `SddSddddddddSd` | UI nativa (C++, sem EV_) | OnReceivePledgeExtendedInfo | — | chama o console (slots 90) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x85 | SurrenderPersonallyPacket | — | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0x86 | RidePacket | Ride | `ddddddd` | mundo/engine | OnRide | — | — |
| 0x87 | DummyPacket | — | — | log | — | — | Tratador "Dummy": so registra "(Receive)Dummy" no log de rede e descarta. Usado nos DummyPacket e como padrao do estado de login para opcodes >= 0x0C. |
| 0x88 | PledgeShowInfoUpdatePacket | PledgeShowInfoUpdate | `ddddddddddSdd` | UI | OnReceivePledgeInfoUpdate | EV_ClanInfoUpdate(1) | ClanWnd |
| 0x89 | ClientActionPacket | — | `d` | UI nativa (C++, sem EV_) | OnReceiveAction | — | chama o console (slots 219) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x8a | AcquireSkillListPacket | AcquireSkillList | `dd` `ddddd` | UI | OnShowTrainListWnd, AddAcquireSkillInfo | EV_SkillTrainListWndShow(1), EV_SkillTrainListWndAddSkill(1) | SkillTrainListWnd |
| 0x8b | AcquireSkillInfoPacket | AcquireSkillInfo | `dddd` `d` `dddd` | UI | OnShowTrainInfoWnd, AddAcquireSkillExtendedInfo | EV_SkillTrainInfoWndShow(1), EV_SkillTrainInfoWndAddExtendInfo(1) | SkillTrainInfoWnd |
| 0x8c | ServerObjectInfoPacket | ServerObjectInfo | `ddSdddddffffdddd` | mundo/engine | OnServerObjectInfo | — | — |
| 0x8d | GMHidePacket | — | `d` | mundo/engine | OnGMHide | — | — |
| 0x8e | AcquireSkillDonePacket | — | — | UI | OnHideTrainWnd | EV_SkillTrainInfoWndHide(1), EV_SkillTrainListWndHide(1) | SkillTrainInfoWnd, SkillTrainListWnd |
| 0x8f | GMViewCharacterInfoPacket | GMViewCharacterInfo | `dddddSddddQddddddddddddddddddddddddddddddddddddddddddddddddhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhddddddddddddddddddddffffddddSdddcccddhhddddccdccdd` | UI | OnGMViewCharacterInfo | EV_GMObservingUserInfoUpdate(2) | GMDetailStatusWnd |
| 0x90 | GMViewPledgeInfoPacket | GMViewPledgeInfo | `dSddSS` `dddddddddSdd` `d` `Sdddddd` | UI | OnGMViewReceivePledgeInfo, OnGMViewReceivePledgeMemberList, OnGMViewAddPledgeMember | EV_GMObservingClan(1), EV_GMObservingClanMemberStart(1), EV_GMObservingClanMember(1) | GMClanWnd |
| 0x91 | GMViewSkillInfoPacket | GMViewSkillInfo | `Sd` `dddc` | UI | OnGMViewShowSkillWnd, OnGMViewSkillListPacket | EV_GMObservingSkillListStart(1), EV_GMObservingSkillList(1) | GMMagicSkillWnd |
| 0x92 | GMViewMagicInfoPacket | — | `Sd` `ddd` | UI nativa (C++, sem EV_) | OnGMViewShowMagicWnd, OnGMViewMagicListPacket | — | chama o console (slots 310, 311) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x93 | GMViewQuestInfoPacket | GMViewQuestList | `Sh` `dd` `h` `dddd` | UI | OnGMViewReceiveQuestList, GMViewAddQuestID, OnGMViewReceiveQuestListEnd, GMViewAddQuestItem | EV_GMObservingQuestListStart(1), EV_GMObservingQuestList(1), EV_GMObservingQuestListEnd(1), EV_GMObservingQuestItem(1) | GMQuestWnd |
| 0x94 | GMViewItemListPacket | GMViewItemList | `Sdhh` `h` `dddhhhdhhhhd` | UI | GMViewAddInventoryItem | EV_GMObservingInventoryClear(0), EV_GMObservingInventoryAddItem(1) | GMInventoryWnd |
| 0x95 | GMViewWarehouseWithdrawListPacket | GMViewWarehouseWithdrawList | `Sdh` `h` `dddhh` `dhhhdd` `d` | UI | OnGMViewStartWithdrawList, OnGMViewAddWithdrawList | EV_GMObservingWarehouseItemListStart(1), EV_GMObservingWarehouseItemList(1) | GMWarehouseWnd |
| 0x96 | ListPartyWatingPacket | PartyMatchList | `dd` `dSdddddS` | UI | OnStartPartyMatch, OnListPartyWating | EV_PartyMatchStart(1), EV_PartyMatchList(1) | PartyMatchWnd |
| 0x97 | PartyRoomInfoPacket | PartyMatchDetail | `ddddddS` | UI | OnPartyRoomInfo | EV_PartyMatchRoomStart(1) | OptionWnd, PartyMatchRoomWnd, PartyMatchWaitListWnd, PartyMatchWnd |
| 0x98 | PlaySoundPacket | PlaySound | `dSdddddd` | mundo/engine | OnPlaySound | — | — |
| 0x99 | StaticObjectPacket | StaticObjectInfo | `dd` | mundo/engine | OnStaticObjectInfo | — | — |
| 0x9a | PrivateStoreManageList | PrivateStoreManageListSell | `dddd` `ddddhhhdd` `d` `ddddhhhddd` | UI | OnStartPrivateStoreManageList, OnPrivateStoreManageList | EV_PrivateShopOpenWindow(1), EV_PrivateShopAddItem(1) | PrivateShopWnd |
| 0x9b | PrivateStoreList | PrivateStoreListSell | `dddd` `ddddhhhddd` | UI | OnStartPrivateStoreList, OnPrivateStoreList | EV_PrivateShopOpenWindow(1), EV_PrivateShopAddItem(1) | PrivateShopWnd |
| 0x9c | PrivateStoreMsg | PrivateStoreMsgSell | `dS` | dados | — | — | PrivateStoreMsg (venda): grava a mensagem da loja no objeto do jogador (+0x204 -> +0x17ac), exibida acima do personagem. |
| 0x9d | — | ShowMiniMap | `dc` | UI | OnShowMinimap | EV_ShowMinimap(2) | MinimapWnd |
| 0x9e | ReviveRequestPacket | — | — | ignorado | — | — | ReviveRequest: tratador vazio (retorna 0); o pedido de ressurreicao chega por ConfirmDlg/SystemMessage. |
| 0x9f | AbnormalVisualEffectPacket | — | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0xa0 | TutorialShowHtmlPacket | TutorialShowHtml | `S` | UI | OnTutorialShowHtml | EV_TutorialViewerWndShow(1) | TutorialViewerWnd |
| 0xa1 | TutorialShowQuestionMarkPacket | TutorialShowQuestionMark | `d` | UI | OnTutorialShowQuestionMark | EV_ArriveNewTutorialQuestion(1) | TutorialBtnWnd |
| 0xa2 | TutorialEnableClientEventPacket | TutorialEnableClientEvent | `d` | UI nativa (C++, sem EV_) | OnTutorialEnableClientEvent | — | chama o console (slots 84) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0xa3 | TutorialCloseHtmlPacket | TutorialCloseHtml | — | UI | OnTutorialCloseHtml | EV_TutorialViewerWndHide(1) | TutorialViewerWnd |
| 0xa4 | ShowRadarPacket | — | `ddddd` | UI | OnShowRadar | EV_RadarDeleteAllTarget(1), EV_RadarAddTarget(1), EV_MinimapDeleteAllTarget(1), EV_MinimapAddTarget(1) | MinimapWnd, MinimapWnd_Expand, RadarContainerWnd |
| 0xa5 | DeleteRadarPacket | — | `ddd` | UI | OnDeleteRadar | EV_MinimapDeleteTarget(1) | MinimapWnd, MinimapWnd_Expand |
| 0xa6 | MyTargetSelectedPacket | MyTargetSelected | `dhd` | UI | OnMyTargetSelected | EV_ReceiveTargetLevelDiff(1) | TargetStatusWnd |
| 0xa7 | PartyMemberPositionPacket | PartyMemberPosition | `d` `dddd` | dados | — | — | PartyMemberPosition: para cada membro (id, x, y, z) atualiza a tabela de posicoes da party (FUN_10422800), lida pelo minimapa/radar. |
| 0xa8 | AskJoinAlliancePacket | AskJoinAlly | `dSSS` | UI nativa (C++, sem EV_) | OnReceiveAskJoinAlly | — | chama o console (slots 130) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0xa9 | JoinAlliancePacket | — | `d` | UI | OnReceiveJoinAlly | EV_SystemMessage(3), EV_ChatMessage(4) | ChatWnd, OnScreenMessageWnd |
| 0xaa | WithdrawAlliancePacket | — | `d` | UI | OnReceiveWithdrawAlly | EV_SystemMessage(2), EV_ChatMessage(3) | ChatWnd, OnScreenMessageWnd |
| 0xab | OustAllianceMemberPledgePacket | — | `d` | UI | OnReceiveOustAlly | EV_SystemMessage(2), EV_ChatMessage(3) | ChatWnd, OnScreenMessageWnd |
| 0xac | DismissAlliancePacket | — | `d` | UI | OnReceiveDismissAlly | EV_SystemMessage(2), EV_ChatMessage(3) | ChatWnd, OnScreenMessageWnd |
| 0xad | SetAllianceCrestPacket | — | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0xae | AllianceCrestPacket | AllyCrest | `dd` | mundo/engine | OnMakeDDSCrestFile, OnImportCrestFile | — | — |
| 0xaf | ServerCloseSocketPacket | — | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0xb0 | PetStatusShowPacket | PetStatusShow | `d` | UI | OnShowPetStatusWnd | EV_PetWndShow(1) | PetWnd |
| 0xb1 | PetInfoPacket | PetInfo | `dddddddddddddddddddffffdddcccccSSdddddddddddQQQddddddddddddddccdd` | UI | OnShowPetNameBtn, OnShowPetPartyWnd, OnNpcInfo | EV_UpdatePetInfo(0), EV_PetWndShowNameBtn(1), EV_PetStatusShow(1) | PetStatusWnd, PetWnd, SummonedStatusWnd, SummonedWnd |
| 0xb2 | PetItemListPacket | PetItemList | `h` `h` `dddhhhdhh` | UI | OnReceivePetItemList, AddPetInventoryItem | EV_PetInventoryItemStart(1), EV_PetInventoryItemList(1) | PetWnd |
| 0xb3 | PetInventoryUpdatePacket | PetInventoryUpdate | `h` `hh` `dddhhhdhh` | UI | UpdatePetInventoryItem, OnUpdatePetShortCutItem | EV_PetInventoryItemUpdate(1), EV_ShortcutUpdate(2) | PetWnd, ShortcutWnd |
| 0xb4 | AllianceInfoPacket | AllianceInfo | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0xb5 | PetStatusUpdatePacket | PetStatusUpdate | `dddddSdddddddQQQ` | UI | OnReceivePetStatusInfo | EV_UpdatePetInfo(1) | PetStatusWnd, PetWnd, SummonedStatusWnd, SummonedWnd |
| 0xb6 | PetDeletePacket | PetDelete | `dd` | UI | OnHidePetWnd | EV_PetSummonedStatusClose(1) | PetStatusWnd, PetWnd, SummonedStatusWnd, SummonedWnd |
| 0xb7 | PrivateStoreBuyManageList | PrivateStoreManageListBuy | `ddd` `dhddhdh` `d` `dhddhdhdd` | UI | OnStartPrivateStoreBuyManageList, OnPrivateStoreBuyManageList | EV_PrivateShopOpenWindow(1), EV_PrivateShopAddItem(1) | PrivateShopWnd |
| 0xb8 | PrivateStoreBuyList | PrivateStoreListBuy | `ddd` `ddhddhdhdd` | UI | OnStartPrivateStoreBuyList, OnPrivateStoreBuyList | EV_PrivateShopOpenWindow(1), EV_PrivateShopAddItem(1) | PrivateShopWnd |
| 0xb9 | PrivateStoreBuyMsg | PrivateStoreMsgBuy | `dS` | dados | — | — | PrivateStoreBuyMsg (compra): grava a mensagem da loja de compra no objeto do jogador (+0x204 -> +0x17b8). |
| 0xba | VehicleStartPacket | VehicleStarted | `dd` | mundo/engine | OnVehicleStartPacket | — | — |
| 0xbb | RequestTimeCheckPacket | — | `d` | mundo/engine | OnRequestTimeCheckPacket | — | — |
| 0xbc | StartAllianceWarPacket | — | `SS` | UI nativa (C++, sem EV_) | OnStartAllianceWar | — | chama o console (slots 284) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0xbd | ReplyStartAllianceWarPacket | — | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0xbe | StopAllianceWarPacket | — | `SS` | UI nativa (C++, sem EV_) | OnStopAllianceWar | — | chama o console (slots 285) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0xbf | ReplyStopAllianceWarPacket | — | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0xc0 | SurrenderAllianceWarPacket | — | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0xc1 | SkillCoolTimePacket | SkillCoolTime | `d` `dddd` | UI nativa (C++, sem EV_) | OnSkillCoolTimeReset, OnSkillCoolTimePacket | — | chama o console (slots 272, 273) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0xc2 | PackageToListPacket | PackageToList | `d` `dS` | UI | AddPackageToList | EV_SelectDeliverClear(1), EV_SelectDeliverAddName(1) | SelectDeliverWnd |
| 0xc3 | PackageSendableListPacket | PackageSendableList | `ddd` `h` `dddhhdhhhd` | UI | AddSendableItemList | EV_DeliverOpenWindow(1), EV_DeliverAddItem(1) | DeliverWnd |
| 0xc4 | EarthQuakePacket | Earthquake | `dddddd` | mundo/engine | OnEarthQuake | — | — |
| 0xc5 | FlyToLoactionPacket | FlyToLocation | `dddddddd` | mundo/engine | OnFlyToLocation, AdjustPawnLocation | — | — |
| 0xc6 | BlockListPacket | — | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0xc7 | SpecialCameraPacket | SpecialCamera | `ddddddddddd` | UI nativa (C++, sem EV_) | OnSpecialCamera | — | chama o console (slots 474) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0xc8 | NormalCameraPacket | NormalCamera | — | UI nativa (C++, sem EV_) | OnNormalCamera | — | chama o console (slots 475) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0xc9 | CastleSiegeInfoPacket | SiegeInfo | `dddSSdSdd` `d` `d` | UI | OnReceiveSiegeInfo, OnAddSelectableTime | EV_SiegeInfo(1), EV_SiegeInfoSelectableTime(1) | SiegeInfoWnd |
| 0xca | CastleSiegeAttackerListPacket | SiegeAttackerList | `dddddd` `dSSdddSSd` | UI | ClearAttackerList, OnReceiveSiegeAttackerList, OnEndSiegeAttackerlist | EV_SiegeInfoClanListStart(1), EV_SiegeInfoClanList(1), EV_SiegeInfoClanListEnd(1) | SiegeInfoWnd |
| 0xcb | — | SiegeDefenderList | `dddddd` `dSSddddSSd` | UI | ClearDefenderList, OnReceiveSiegeDefenderList, OnEndSiegeDefenderlist | EV_SiegeInfoClanListStart(1), EV_SiegeInfoClanList(1), EV_SiegeInfoClanListEnd(1) | SiegeInfoWnd |
| 0xcc | NickNameChangedPacket | TitleUpdate | `dS` | dados | — | — | NickNameChanged (titulo): grava o titulo no objeto do jogador (+0x254). |
| 0xcd | PledgeStatusChangedPacket | PledgeStatusChanged | `ddddddd` | dados | — | — | PledgeStatusChanged: le 7 ints ("ddddddd": objeto, cla, brasao, alianca, brasao da alianca, ...) e atualiza +0x284..+0x310 do objeto, recalcula a relacao (FUN_104317d0) e avisa o gerenciador (NET->vtbl[0xc4]). |
| 0xce | RelationChangedPacket | RelationChanged | `ddddd` | UI | UpdateChatWndStatus | EV_ChatWndStatusChange(1) | ChatWnd |
| 0xcf | EventTriggerPacket | EventTrigger | `dc` | mundo/engine | OnEventTrigger, L2EventTrigger | — | — |
| 0xd0 | MultiSellListPacket | MultiSellList | `ddddd` `dddchh` `hdhdhdd` `hhdhdd` | UI | OnAddVIPNeedItemList, OnVIPItemListEnd, OnAddVIPItemList, OnSetVIPShopID | EV_MultiSellNeededItemList(2), EV_MultiSellItemListEnd(2), EV_MultiSellItemList(2), EV_MultiSellShopID(2) | MultiSellWnd |
| 0xd1 | SetSummonRemainTimePacket | SetSummonRemainTime | `dd` | UI | OnSetSummonRemainTime | EV_SummonedStatusRemainTime(2) | SummonedStatusWnd |
| 0xd2 | SkillRemainSecPacket | — | `ddddddd` | mundo/engine | OnSkillRemainSec | — | — |
| 0xd3 | NetPingPacket | — | `d` | rede | — | — | NetPing: le o id do ping e responde ao servidor (NET->vtbl[0x448]). |
| 0xd4 | DicePacket | Dice | `dddddd` | mundo/engine | OnDice | — | — |
| 0xd5 | SnoopPacket | Snoop | `dSddSS` | UI | OnSnoop | EV_GMSnoop(1) | GMSnoopWnd |
| 0xd6 | RecipeBookItemListPacket | RecipeBookItemList | `ddd` `dd` | UI | OnReceiveRecipeBookItemList, AddRecipeBookItem | EV_RecipeShowBookWnd(1), EV_RecipeAddBookItem(1) | RecipeBookWnd |
| 0xd7 | RecipeItemMakeInfoPacket | RecipeItemMakeInfo | `ddddd` | UI | ReceiveRecipeItemMakeInfo | EV_RecipeItemMakeInfo(1) | RecipeManufactureWnd |
| 0xd8 | RecipeShopManageListPacket | RecipeShopManageList | `dddd` `dd` `d` `ddd` | UI | ReceiveRecipeShopManageList, AddRecipeShopManageItem, AddRecipeShopRegisterdItem | EV_RecipeShopShowWnd(1), EV_RecipeShopAddBookItem(1), EV_RecipeShopAddShopItem(1) | RecipeShopWnd |
| 0xd9 | RecipeShopSellListPacket | RecipeShopSellList | `ddddd` `ddd` | UI | ReceiveRecipeShopSellList, AddRecipeShopSellItem | EV_RecipeShowBuyListWnd(1), EV_RecipeShopSellItem(1) | RecipeBuyListWnd |
| 0xda | RecipeShopItemInfoPacket | RecipeShopItemInfo | `dddddd` | UI | ReceiveRecipeShopItemInfo | EV_RecipeShopItemInfo(1) | RecipeBuyManufactureWnd |
| 0xdb | RecipeShopMsgPacket | RecipeShopMsg | `dS` | dados | — | — | RecipeShopMsg: grava a mensagem da loja de receitas no objeto do jogador. |
| 0xdc | ShowCalcPacket | ShowCalculator | `d` | UI | OnShowCalc | EV_CalculatorWndShowHide(1) | CalculatorWnd |
| 0xdd | MonRaceInfoPacket | MonRaceInfo | `dd` `d` `ddddddddffd` `c` `d` | mundo/engine | OnNpcInfo | — | — |
| 0xde | ShowTownMapPacket | ShowTownMap | `Sdd` | UI | — | EV_ShowTownMap(0) | TownMapWnd |
| 0xdf | ObserverStartPacket | ObservationMode | `ddddd` | UI | OnObserverStartPacket, OnTeleportToLocation, ScreenFadeOut, L2_Teleport | EV_ObserverWndShow(1) | ObserverWnd |
| 0xe0 | ObserverEndPacket | ObservationReturn | `ddd` | UI | OnObserverEndPacket, OnTeleportToLocation, ScreenFadeOut, L2_Teleport | EV_ObserverWndHide(1) | ObserverWnd |
| 0xe1 | ChairSitPacket | ChairSit | `dd` | mundo/engine | OnChairSitPacket | — | — |
| 0xe2 | HennaEquipListPacket | HennaEquipList | `ddd` `ddddd` | UI | ReceiveHennaEquipList, AddHennaEquipInfo | EV_HennaListWndShowHideEquip(1), EV_HennaListWndAddHennaEquip(1) | HennaListWnd |
| 0xe3 | HennaItemInfoPacket | HennaItemInfo | `dddddddcdcdcdcdcdc` | UI | ReceiveHennaItemInfo | EV_HennaInfoWndShowHideEquip(1) | HennaInfoWnd |
| 0xe4 | HennaInfoPacket | HennaInfo | `ccccccdd` `dd` | UI | ReceiveHennaInfo, AddHennaInfo | EV_UpdateHennaInfo(1), EV_InventoryAddHennaInfo(1) | DetailStatusWnd, InventoryWnd |
| 0xe5 | HennaUnequipListPacket | HennaRemoveList | `ddd` `ddddd` | UI | ReceiveHennaUnequipList, AddHennaUnequipInfo | EV_HennaListWndShowHideUnEquip(1), EV_HennaListWndAddHennaUnEquip(1) | HennaListWnd |
| 0xe6 | HennaUnequipInfoPacket | HennaItemRemoveInfo | `dddddddcdcdcdcdcdc` | UI | ReceiveHennaUnequipItemInfo | EV_HennaInfoWndShowHideUnEquip(1) | HennaInfoWnd |
| 0xe7 | MacroListPacket | SendMacroList | `c` `d` `c` `c` `dSSScc` `ccdcS` | UI | ReceiveMacroListInfo | EV_MacroUpdate(1) | MacroListWnd |
| 0xe8 | BuyListSeedPacket | BuyListSeed | `ddh` `h` `dddhh` `dhhh` `d` | UI | OnStartManorBuyList, OnAddManorBuyList | EV_ManorShopWndOpen(1), EV_ManorShopWndAddItem(1) | ManorShopWnd |
| 0xe9 | SellListProcurePacket | SellListProcure | `ddh` `h` `dddhh` `dhhh` `d` | UI | OnStartManorSellList, OnAddManorSellList | EV_InventoryHideWindow(1), EV_ManorShopWndOpen(1), EV_ManorShopWndAddItem(1) | InventoryWnd, ManorShopWnd |
| 0xea | GMHennaInfoPacket | GMViewHennaInfo | `ccccccdd` `dd` | UI | GMReceiveHennaInfo, GMAddHennaInfo | EV_GMUpdateHennaInfo(1), EV_GMAddHennaInfo(1) | GMDetailStatusWnd, GMInventoryWnd |
| 0xeb | RadarControlPacket | RadarControl | `ddddd` | UI | OnShowRadar | EV_RadarDeleteAllTarget(1), EV_RadarAddTarget(1), EV_MinimapDeleteAllTarget(1), EV_MinimapAddTarget(1) | MinimapWnd, MinimapWnd_Expand, RadarContainerWnd |
| 0xec | — | ClientSetTime | `dd` | mundo/engine | OnClientSetTime | — | — |
| 0xed | ConfirmDlgPacket | ConfirmDlg | `d` `d` `d` `S` `d` `dd` … | UI nativa (C++, sem EV_) | FL2GameData::GetZoneName | — | chama o console (slots 212, 408) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0xee | PartySpelledPacket | PartySpelled | `ddd` `dhd` | UI | — | EV_SummonedStatusSpelledList(0) | SummonedStatusWnd |
| 0xef | ShopPreviewListPacket | ShopPreviewList | `dddh` `dhhd` | UI | OnStartPreviewList, OnAddPreviewList | EV_ShopOpenWindow(1), EV_ShopAddItem(1) | ShopWnd |
| 0xf0 | ShopPreviewInfoPacket | ShopPreviewInfo | `dddddddddddddddd` | mundo/engine | OnPreviewInfo | — | — |
| 0xf1 | CameraModePacket | CameraMode | `d` | UI nativa (C++, sem EV_) | OnCameraMode | — | chama o console (slots 476, 477) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0xf2 | ShowXMasSealPacket | ShowXMasSeal | `d` | UI nativa (C++, sem EV_) | OnShowXMasSeal | — | chama o console (slots 411) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0xf3 | EtcStatusUpdatePacket | EtcStatusUpdate | `ddddddd` | UI | OnReceiveEtcStatus, AddEtcStatus | EV_AbnormalStatusEtcItem(1) | AbnormalStatusWnd |
| 0xf4 | ShortBuffStatusUpdatePacket | ShortBuffStatusUpdate | `ddd` | UI | OnReceiveShortStatus, AddShortStatus | EV_AbnormalStatusShortItem(1) | AbnormalStatusWnd |
| 0xf5 | SSQStatusPacket | SSQStatus | `c` `c` `dddccdddddcdddc` `c` `cc` `cddc` … | UI | OnSetSSQStatus, OnStartSSQMainEvent, OnSetSSQMainEvent, OnSetSSQSealStatus | EV_SSQStatus(1), EV_SSQMainEvent(1), EV_SSQSealStatus(1), EV_SSQPreInfo(1) | SSQMainBoard |
| 0xf6 | PetitionVotePacket | — | — | UI | OnPetitionVote | EV_EnablePetitionFeedback(1) | PetitionWnd |
| 0xf7 | AgitDecoInfoPacket | ClanHallDecoration | `d` | mundo/engine | OnAgitInfo | — | — |
| 0xf8 | SSQInfoPacket | SSQInfo | `cc` | mundo/engine | OnSSQInfo | — | — |
| 0xf9 | GameGuardQueryPacket | GameGuardQuery | `dddd` | UI nativa (C++, sem EV_) | OnGameGuardQuery | — | chama o console (slots 33) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0xfa | L2FriendListPacket | FriendList | `d` `dSdd` | UI nativa (C++, sem EV_) | OnReceiveL2FriendList, OnAddL2Friend, OnEndL2FriendList | — | chama o console (slots 344, 345, 346) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0xfb | L2FriendPacket | — | `ddSdd` | UI nativa (C++, sem EV_) | OnUpdateL2Friend | — | chama o console (slots 347) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0xfc | L2FriendStatusPacket | — | `dSd` | UI nativa (C++, sem EV_) | OnUpdateL2FriendStatus | — | chama o console (slots 348) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0xfd | L2FriendSayPacket | L2FriendSay | `dSSS` | UI nativa (C++, sem EV_) | OnReceiveL2FriendSay | — | chama o console (slots 349) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0xfe | DummyPacket | — | — | log | — | — | Tratador "Dummy": so registra "(Receive)Dummy" no log de rede e descarta. Usado nos DummyPacket e como padrao do estado de login para opcodes >= 0x0C. |

## Pacotes Ex (0xFE): 93 pacotes

| opcode | pacote | aCis | formato lido | efeito | métodos UGameEngine / funções | eventos (profundidade) | janelas / nota |
|---|---|---|---|---|---|---|---|
| 0x0 | ExDummyPacket | — | — | sem tratador | — | — | entrada sem tratador na tabela |
| 0x1 | — | ExRegenMax | `dddf` | UI | OnRegenStatus | EV_RegenStatus(1) | StatusWnd |
| 0x2 | ExEventMatchListPacket | — | — | ignorado | — | — | ExEventMatchList: tratador vazio (retorna 0). |
| 0x3 | ExEventMatchObserverPacket | — | `dccSSddd` | UI | OnEventMatchObserver | EV_StartEventMatchObserver(1), EV_EventMatchUpdateTeamName(1) | EventMatchObserverWnd |
| 0x4 | ExEventMatchMessagePacket | — | `cS` | UI | OnEventMatchMessage | EV_EventMatchGMMessage(1) | EventMatchGMMsgWnd, EventMatchSpecialMsgWnd |
| 0x5 | ExEventMatchScorePacket | — | `ddd` | UI | OnEventMatchScore | EV_EventMatchUpdateScore(1) | EventMatchObserverWnd |
| 0x6 | ExEventMatchTeamInfoPacket | — | `dcd` `dSdddddddddd` | UI | OnEventMatchTeamInfoStart, OnEventMatchTeamInfoEnd | EV_EventMatchUpdateTeamInfo(1) | EventMatchGMWnd, EventMatchObserverWnd |
| 0x7 | ExEventMatchCreatePacket | — | `d` | UI | OnEventMatchCreate | EV_EventMatchCreated(1) | EventMatchGMWnd |
| 0x8 | ExEventMatchUserInfoPacket | — | `dSdddddddd` | UI | OnEventMatchUserInfo | EV_EventMatchUpdateUserInfo(1) | EventMatchObserverWnd |
| 0x9 | ExColosseumFenceInfoPacket | ExColosseumFenceInfo | `ddddddd` | mundo/engine | OnColosseumFence | — | — |
| 0xa | ExEventMatchSpelledInfoPacket | — | `ddd` `dhd` | UI | OnEventMatchSpellInfoStart, OnEventMatchSpellInfo, OnEventMatchSpellInfoEnd | EV_EventMatchUpdateUserInfo(1) | EventMatchObserverWnd |
| 0xb | ExEventMatchFirecrackerPacket | — | `d` | mundo/engine | OnFirecracker | — | — |
| 0xc | ExEventMatchTeamUnlockedPacket | — | `dc` | UI nativa (C++, sem EV_) | OnEventMatchTeamUnlocked | — | chama o console (slots 439) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0xd | ExEventMatchGMTestPacket | — | — | UI | OnEventMatchGMTest | EV_ShowEventMatchGMWnd(1) | EventMatchGMFenceWnd, EventMatchGMWnd |
| 0xe | ExPartyRoomMemberPacket | ExPartyRoomMember | `dd` `dSdddd` | UI | OnExPartyRoomMember | EV_PartyMatchRoomMember(1) | PartyMatchRoomWnd |
| 0xf | ExClosePartyRoomPacket | ExClosePartyRoom | — | UI | OnExClosePartyRoom | EV_PartyMatchRoomClose(1) | OptionWnd, PartyMatchRoomWnd |
| 0x10 | ExManagePartyRoomMemberPacket | ExManagePartyRoomMember | `ddSdddd` | UI | OnExManagePartyRoomMember | EV_PartyMatchRoomMemberUpdate(1) | PartyMatchRoomWnd |
| 0x11 | ExEventMatchLockResult | — | — | ignorado | — | — | tratador vazio (xor al,al; ret): o cliente descarta o pacote |
| 0x12 | ExAutoSoulShot | ExAutoSoulShot | `dd` | UI nativa (C++, sem EV_) | OnExAutoSoulShot | — | chama o console (slots 452) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x13 | ExFishingStartPacket | ExFishingStart | `dddddcc` | UI | OnFishingStart | EV_FishViewportWndShow(1), EV_FishRankEventButtonHide(2) | FishViewportWnd |
| 0x14 | ExFishingEndPacket | ExFishingEnd | `dc` | UI | OnFishingEnd | EV_SystemMessage(6), EV_ShowPetitionWnd(7), EV_PetitionChatMessage(7) | OnScreenMessageWnd, PetitionWnd |
| 0x15 | ExFishingStartCombatPacket | ExFishingStartCombat | `dddccc` | UI | OnFishingCombatStart | EV_SystemMessage(6), EV_ShowPetitionWnd(7), EV_PetitionChatMessage(7) | OnScreenMessageWnd, PetitionWnd |
| 0x16 | ExFishingHpRegenPacket | ExFishingHpRegen | `dddcccdc` | UI | OnFishingHPRegen | EV_SystemMessage(6), EV_ShowPetitionWnd(7), EV_PetitionChatMessage(7) | OnScreenMessageWnd, PetitionWnd |
| 0x17 | ExEnchantSkillListPacket | ExEnchantSkillList | `d` `dddQ` | UI | OnShowTrainListWnd, AddAcquireSkillInfo | EV_SkillTrainListWndShow(1), EV_SkillTrainListWndAddSkill(1) | SkillTrainListWnd |
| 0x18 | ExEnchantSkillInfoPacket | ExEnchantSkillInfo | `dddQd` `d` `dddd` | UI | OnShowTrainInfoWnd, AddAcquireSkillExtendedInfo | EV_SkillTrainInfoWndShow(1), EV_SkillTrainInfoWndAddExtendInfo(1) | SkillTrainInfoWnd |
| 0x19 | ExShowQuestInfoPacket | ExQuestInfo | — | UI | OnShowQuestInfo | EV_QuestInfoStart(1), EV_QuestInfo(1) | QuestListWnd |
| 0x1a | ExShowQuestMarkPacket | ExShowQuestMark | `d` | UI | OnShowQuestMark | EV_ArriveShowQuest(1) | QuestBtnWnd |
| 0x1b | ExSendManorListPacket | ExSendManorList | `d` `dS` | UI nativa (C++, sem EV_) | OnSendManorList | — | chama o console (slots 240) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x1c | ExShowSeedInfoPacket | ExShowSeedInfo | `cddd` `dddddc` `d` `c` `d` | UI | OnShowSeedInfo | EV_ManorInfoWndSeedShow(1), EV_ManorInfoWndSeedAdd(1) | ManorInfoWnd |
| 0x1d | ExShowCropInfoPacket | ExShowCropInfo | `cddd` `ddddcdc` `d` `c` `d` | UI | OnShowCropInfo | EV_ManorInfoWndCropShow(1), EV_ManorInfoWndCropAdd(1) | ManorInfoWnd |
| 0x1e | ExShowManorDefaultInfoPacket | ExShowManorDefaultInfo | `cd` `ddddc` `d` `c` `d` | UI | OnShowManorDefaultInfo | EV_ManorInfoWndDefaultShow(1), EV_ManorInfoWndDefaultAdd(1) | ManorInfoWnd |
| 0x1f | ExShowSeedSettingPacket | ExShowSeedSetting | `dd` `ddc` `d` `c` `d` `dddddddd` | UI | OnShowSeedSetting | EV_ManorSeedInfoSettingWndShow(1), EV_ManorSeedInfoSettingWndAddItem(1), EV_ManorSeedInfoSettingWndAddItemEnd(1) | ManorSeedInfoSettingWnd |
| 0x20 | ExShowCropSettingPacket | ExShowCropSetting | `dd` `ddc` `d` `c` `d` `ddddddcddc` | UI | OnShowCropSetting | EV_ManorCropInfoSettingWndShow(1), EV_ManorCropInfoSettingWndAddItem(1), EV_ManorCropInfoSettingWndAddItemEnd(1) | ManorCropInfoSettingWnd |
| 0x21 | ExShowSellCropListPacket | ExShowSellCropList | `dd` `dddc` `d` `c` `d` `dddcd` | UI | OnShowSellCropList | EV_ManorCropSellWndShow(1), EV_ManorCropSellWndAddItem(1) | ManorCropSellWnd |
| 0x22 | ExShowProcureCropDetailPacket | ExShowProcureCropDetail | `dd` `dddc` | UI | OnShowProcureCropDetail | EV_ManorCropSellChangeWndShow(1), EV_ManorCropSellChangeWndAddItem(1) | ManorCropSellChangeWnd |
| 0x23 | ExHeroListPacket | ExHeroList | `d` `SdSdSdd` | UI | OnHeroList | EV_HeroShowList(1) | HeroTowerWnd |
| 0x24 | ExServerPrimitivePacket | ExServerPrimitive | `Sdddddd` `c` `Sddddddd` `Sdddd` `ddd` `ddd` | debug | — | — | ExServerPrimitive: desenha primitivas de depuracao (pontos/linhas com cor) enviadas pelo servidor (FUN_1036f7b0). |
| 0x25 | ExOpenMPCCPacket | ExOpenMPCC | — | UI | OnExOpenMPCC | EV_CommandChannelStart(1) | UnionWnd |
| 0x26 | ExCloseMPCCPacket | ExCloseMPCC | — | UI | OnExCloseMPCC | EV_CommandChannelEnd(1) | UnionWnd |
| 0x27 | ExAskJoinMPCCPacket | ExAskJoinMPCC | `Sd` | UI nativa (C++, sem EV_) | OnExAskJoinMPCC | — | chama o console (slots 256) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x28 | ExPledgeCrestLargePacket | ExPledgeCrestLarge | `ddd` | mundo/engine | OnMakeDDSCrestFile, OnImportCrestFile | — | — |
| 0x29 | ExOlympiadUserInfoPacket | ExOlympiadUserInfo | `cdSddddd` | UI | OnOlympiadUserInfo | EV_OlympiadUserInfo(1) | OlympiadPlayerWnd, OlympiadTargetWnd |
| 0x2a | ExOlympiadSpelledInfoPacket | ExOlympiadSpelledInfo | `dd` `dhd` | UI | OnOlympiadSpelledInfo | EV_OlympiadBuffInfo(1) | OlympiadBuffWnd |
| 0x2b | ExOlympiadModePacket | ExOlympiadMode | `c` | UI | OnOlympiadMode | EV_OlympiadTargetShow(1), EV_OlympiadMatchEnd(1) | OlympiadBuffWnd, OlympiadPlayerWnd, OlympiadTargetWnd |
| 0x2c | ExOlympiadMatchEndPacket | ExOlympiadMatchEnd | — | UI | OnOlympiadMatchEnd | EV_OlympiadMatchEnd(1) | OlympiadBuffWnd, OlympiadPlayerWnd, OlympiadTargetWnd |
| 0x2d | ExMailArrivedPacket | ExMailArrived | — | UI | OnExMailArrivedPacket | EV_ArriveNewMail(1) | MailBtnWnd |
| 0x2e | ExStorageMaxCountPacket | ExStorageMaxCount | `ddddddd` | UI | OnExStorageMaxCountPacket | EV_SetMaxCount(1) | PrivateShopWnd, RecipeBookWnd, WarehouseWnd |
| 0x2f | ExEventMatchManagePacket | — | `dccScScd` `ccdSdd` | UI | OnExEventMatchManage, OnExEventMatchManageAddMember | EV_EventMatchManage(1) | EventMatchGMWnd |
| 0x30 | ExMultiPartyCommandChannelInfoPacket | ExMultiPartyCommandChannelInfo | `Sddd` `Sdd` | UI | OnExMultiPartyCommandChannelInfo, OnExMultiPartyCommandChannelInfoAddMember | EV_CommandChannelInfo(1), EV_CommandChannelPartyList(1) | UnionWnd |
| 0x31 | ExPCCafePointInfoPacket | ExPCCafePointInfo | `ddcdc` | UI | OnExPCCafePointInfo | EV_PCCafePointInfo(1) | PCCafeEventWnd |
| 0x32 | ExSetCompassZoneCode | ExSetCompassZoneCode | `d` | UI | OnExSetCompassZoneCode | EV_SetRadarZoneCode(1) | RadarWnd |
| 0x33 | ExGetBossRecord | ExGetBossRecord | `ddd` `ddd` | UI | OnExGetBossRecord | EV_RaidRecord(1) | GuideWnd |
| 0x34 | ExAskJoinPartyRoom | ExAskJoinPartyRoom | `S` | UI nativa (C++, sem EV_) | OnExAskJoinPartyRoom | — | chama o console (slots 487) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x35 | ExListPartyMatchingWaitingRoom | ExListPartyMatchingWaitingRoom | `d` `d` `Sdd` | UI | OnExListPartyMatchingWaitingRoomStart, OnExListPartyMatchingWaitingRoom | EV_PartyMatchWaitListStart(1), EV_PartyMatchWaitList(1) | PartyMatchOutWaitListWnd, PartyMatchWaitListWnd |
| 0x36 | ExSetMpccRouting | — | `d` | UI | OnExSetMpccRouting | EV_CommandChannelRoutingType(1) | UnionWnd |
| 0x37 | ExShowAdventurerGuideBook | ExShowAdventurerGuideBook | — | UI | OnExShowAdventurerGuideBook | EV_ShowGuideWnd(1) | GuideWnd |
| 0x38 | ExShowScreenMessage | ExShowScreenMessage | `ddddddddddS` | UI | OnExShowScreenMessage | EV_ShowScreenMessage(1) | OnScreenMessageWnd |
| 0x39 | PledgeSkillListPacket | PledgeSkillList | `d` `dd` | UI | OnReceivePledgeSkillList | EV_ClanSkillList(1) | ClanDrawerWnd |
| 0x3a | PledgeSkillListAddPacket | PledgeSkillListAdd | `dd` | UI | OnReceivePledgeSkillAdd | EV_ClanSkillListAdd(1) | ClanDrawerWnd |
| 0x3b | PledgePowerGradeList | PledgePowerGradeList | `d` `dd` | UI | OnReceivePledgePowerGradeList | EV_ClanAuthGradeList(1) | ClanDrawerWnd |
| 0x3c | PledgeReceivePowerInfo | PledgeReceivePowerInfo | `dSd` | UI | OnReceivePledgePower | EV_ClanAuthMember(1) | ClanDrawerWnd |
| 0x3d | PledgeReceiveMemberInfo | PledgeReceiveMemberInfo | `dSSdSS` | UI | OnReceivePledgeMemberInfo | EV_ClanMemberInfo(1) | ClanDrawerWnd |
| 0x3e | PledgeReceiveWarList | PledgeReceiveWarList | `ddd` `Sdd` | UI | OnReceivePledgeWarList | EV_ClanWarList(1) | ClanDrawerWnd |
| 0x3f | PledgeReceiveSubPledgeCreated | PledgeReceiveSubPledgeCreated | `ddSS` | UI | OnReceiveSubPledgeCreated | EV_ClanSubClanUpdated(1) | ClanWnd |
| 0x40 | ExRedSkyPacket | ExRedSky | `d` | mundo/engine | OnRedSky | — | — |
| 0x41 | PledgeReceiveUpdatePower | — | `d` | UI | OnReceivePledgeMyAuth | EV_ClanMyAuth(1) | ClanWnd |
| 0x42 | FlySelfDestinationPacket | — | `dddd` | mundo/engine | OnFlySelfDestination | — | — |
| 0x43 | ShowPCCafeCouponShowUI | ShowPCCafeCouponShowUI | — | UI | — | EV_ShowPCCafeCouponUI(0) | CouponEventWnd |
| 0x44 | ExSearchOrc | ExOrcMove | `b` | mundo/engine | OnSearchOrc | — | — |
| 0x45 | ExCursedWeaponList | ExCursedWeaponList | `d` `d` | UI | OnCursedWeaponList | EV_MinimapCursedWeaponList(1) | MinimapWnd, MinimapWnd_Expand |
| 0x46 | ExCursedWeaponLocation | ExCursedWeaponLocation | `d` `ddddd` | UI | OnCursedWeaponLocation | EV_MinimapCursedWeaponLocation(1) | MinimapWnd, MinimapWnd_Expand |
| 0x47 | ExRestartClient | ExRestartClient | — | UI nativa (C++, sem EV_) | — | — | chama o console (slots 32) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x48 | ExRequestHackShield | ExRequestHackShield | — | log | — | — | ExRequestHackShield: so registra no log; anti-cheat nao implementado aqui. |
| 0x49 | ExUseSharedGroupItem | ExUseSharedGroupItem | `dddd` | UI nativa (C++, sem EV_) | OnReceiveUseSharedGroupItem | — | chama o console (slots 274) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |
| 0x4a | ExMPCCShowPartyMemberInfo | ExMPCCShowPartyMemberInfo | `d` `Sdd` | UI | OnExMultiPartyCommandChannelInfoAddPartyMember | EV_CommandChannelPartyMember(1) | UnionDetailWnd |
| 0x4b | ExDuelAskStart | ExDuelAskStart | `Sd` | UI | OnDuelAskStart | EV_DuelAskStart(1) | DuelManager |
| 0x4c | ExDuelReady | ExDuelReady | `d` | UI | OnDuelReady | EV_DuelReady(1) | DuelManager |
| 0x4d | ExDuelStart | ExDuelStart | `d` | UI | OnDuelStart | EV_DuelStart(1) | DuelManager |
| 0x4e | — | ExDuelEnd | `d` | UI | OnDuelEnd | EV_DuelEnd(1) | DuelManager |
| 0x4f | ExDuelUpdateUserInfo | ExDuelUpdateUserInfo | `Sddddddddd` | UI | OnDuelUpdateUserInfo | EV_DuelUpdateUserInfo(1) | DuelManager |
| 0x50 | ExShowVariationMakeWindow | ExShowVariationMakeWindow | — | UI | OnReceiveShowRefineryInterface | EV_ShowRefineryInteface(1) | RefineryWnd |
| 0x51 | ExShowVariationCancelWindow | ExShowVariationCancelWindow | — | UI | OnReceiveShowRefineryCancelInterface | EV_ShowRefineryCancelInteface(1) | UnrefineryWnd |
| 0x52 | ExPutItemResultForVariationMake | ExConfirmVariationItem | `ddd` | UI | OnReceiveConfirmTargetItemResult | EV_RefineryConfirmTargetItemResult(1) | RefineryWnd |
| 0x53 | ExPutIntensiveResultForVariationMake | ExConfirmVariationRefiner | `ddddd` | UI | OnReceiveConfirmRefinerItemResult | EV_RefineryConfirmRefinerItemResult(1) | RefineryWnd |
| 0x54 | ExPutCommissionResultForVariationMake | ExConfirmVariationGemstone | `ddddd` | UI | OnReceiveConfirmGemStoneResult | EV_RefineryConfirmGemStoneResult(1) | RefineryWnd |
| 0x55 | ExVariationResult | ExVariationResult | `ddd` | UI | OnReceiveRefineResult | EV_RefineryRefineResult(1) | RefineryWnd |
| 0x56 | ExPutItemResultForVariationCancel | ExConfirmCancelItem | `ddddQd` | UI | OnReceiveConfirmCancelItemResult | EV_RefineryConfirmCancelItemResult(1) | UnrefineryWnd |
| 0x57 | ExVariationCancelResult | ExVariationCancelResult | `d` | UI | OnReceiveRefineCancelResult | EV_RefineryRefineCancelResult(1) | UnrefineryWnd |
| 0x58 | ExDuelEnemyRelation | ExDuelEnemyRelation | — | ignorado | — | — | ExDuelEnemyRelation: tratador vazio (retorna 0). |
| 0x59 | ExPlayAnimation | — | `dcdS` | mundo/engine | OnPlayAnimation | — | — |
| 0x5a | ExMPCCPartyInfoUpdate | ExMPCCPartyInfoUpdate | `Sddd` | UI | OnExMPCCPartyInfoUpdate | EV_CommandChannelPartyUpdate(1) | UnionWnd |
| 0x5b | ExPlayScene | ExPlayScene | `d` | UI | OnReceiveShowPlaySceneInterface | EV_ShowPlaySceneInterface(1) | TeaserSlideWnd |
| 0x5c | ExNeedToChangeName | — | `ddS` | UI nativa (C++, sem EV_) | OnExNeedToChangeName | — | chama o console (slots 460) cujas funcoes no NWindow desenham direto (ex.: telas de login/servidor, sem script) |

