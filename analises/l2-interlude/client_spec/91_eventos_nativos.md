# Eventos de UI disparados pelo código nativo (NWindow.dll)

Gerado por `scripts/native_events.py` a partir da decompilação Ghidra (`ghidra_scripts/ExtractUIEvents.java`) de todas as funções do `NWindow.dll` que chamam o despachante de eventos `FUN_100d1790` (base 0x10000000, SHA-256 `af6c3437f3ccf1b26af8b066e0bbd791c7909c94bd3c7d9e3c68c5edcfe059a7`). Dados completos: `out/re/native_events.json`; C decompilado: `out/re/nwindow_events.c`.

- Funções nativas que disparam eventos: **303**; chamadas com id não resolvido estaticamente: **1** (a `execExecuteEvent`, que repassa o id vindo do script).
- Eventos `EV_*` declarados no script: **319**; disparados por algum ponto nativo do NWindow.dll: **283**. Os demais são disparados pelo próprio script (`ExecuteEvent`) ou por outro módulo (ver seção final).
- Validação cruzada: dos 111 eventos disparados no nativo cujo tratador no script lê chaves, **97** têm todas as chaves lidas presentes entre as strings da função nativa que os dispara.
- Ids disparados sem nome `EV_*` no script: nenhum.

**Chaves nativas** = literais `L"..."` e strings referenciadas pela função que dispara (pode incluir chaves de outros eventos se a função dispara mais de um). **Lidas no script** = `Parse*(param, "Chave")` no `case` do evento ou na função chamada por ele. **Faltando** = lidas no script mas não achadas no nativo (string montada de outro jeito, ou chave não enviada → valor padrão).

| id | evento | funções nativas | chaves nativas | quem trata (script) | chaves lidas no script | faltando |
|---|---|---|---|---|---|---|
| 10 | EV_Test | 10108680 | INT64 | — | — | ok |
| 20 | EV_LoginOK | — | — | — | — | — |
| 30 | EV_LoginFail | — | — | — | — | — |
| 40 | EV_Restart | 101511b0 | LoadingState | AbnormalStatusWnd, PartyMatchRoomWnd, PartyWnd, PartyWndCompact, RestartMenuWnd | — | ok |
| 50 | EV_Die | 101512c0 | Agit, BattleCamp, Castle, Original, Village | AbnormalStatusWnd, RestartMenuWnd | — | ok |
| 60 | EV_CardKeyLogin | — | — | — | — | — |
| 70 | EV_RegenStatus | 10166b20 | Amount, Duration, Ticks, Type | StatusWnd | Amount, Duration, Ticks, Type | ok |
| 80 | EV_RadarTransitionFinished | 10043160 | — | — | — | ok |
| 90 | EV_ShortcutCommand | 10172350 | ACTION, AnimationType, ApplyMinFrame, BackgroundType, CAMERAVIEWHEIGHTADJUST, CameraSpeed, ChinaWarnMsgOKButton, Command, EulaWndOKButton, EventMatchToggleTargetName, FocusChatWindow, FontSize, FontType, GamingState, HideAllWindow, ISKEEPMINFRAMERATE, LifeTime, Msg, MsgColor, MsgNo, MsgType, PLEDGE, Param1, Param2, Perspective, QUEST, QuestTreeWnd, RequestOpenMinimap, SKILL, STATUS, ServerSelectOKButton, SetGamingState, SetShortcutPage, ShadowType, ShowBoardWindow, ShowGMPetitionWindow, ShowGMWindow, ShowInventoryWindow, ShowMacroListWindow, ShowMainWindow, ShowMessengerWindow, ShowOptionWindow, ShowPartyBuff, ShowShortcutWnd, ShowSystemMenuWindow, ShowTestWindow, ShowWindow, TabShowInventoryWindow, TargetCancel, UseShortcutItem, Video, WindowType, hahaha | EventMatchObserverWnd, Shortcut | Command | ok |
| 100 | EV_MagicSkillList | — | — | — | — | — |
| 110 | EV_SetRadarZoneCode | 101692f0 | ZoneCode | RadarWnd | — | ok |
| 120 | EV_RaidRecord | 101693e0 | Count, RaidRank, SeasonPoint | GuideWnd | Count, CurrentPoint, MonsterID, RaidRank, SeasonPoint, TotalPoint | CurrentPoint, MonsterID, TotalPoint |
| 130 | EV_ShowGuideWnd | 101695f0 | — | GuideWnd | — | ok |
| 140 | EV_ShowScreenMessage | 101696b0 10172350 | ACTION, AnimationType, ApplyMinFrame, BackgroundType, CAMERAVIEWHEIGHTADJUST, CameraSpeed, ChinaWarnMsgOKButton, Command, EulaWndOKButton, EventMatchToggleTargetName, FocusChatWindow, FontSize, FontType, GamingState, HideAllWindow, ISKEEPMINFRAMERATE, LifeTime, Msg, MsgColor, MsgNo, MsgType, PLEDGE, Param1, Param2, Perspective, QUEST, QuestTreeWnd, RequestOpenMinimap, SKILL, STATUS, ServerSelectOKButton, SetGamingState, SetShortcutPage, ShadowType, ShowBoardWindow, ShowGMPetitionWindow, ShowGMWindow, ShowInventoryWindow, ShowMacroListWindow, ShowMainWindow, ShowMessengerWindow, ShowOptionWindow, ShowPartyBuff, ShowShortcutWnd, ShowSystemMenuWindow, ShowTestWindow, ShowWindow, TabShowInventoryWindow, TargetCancel, UseShortcutItem, Video, WindowType, hahaha | OnScreenMessageWnd | — | ok |
| 150 | EV_GamingStateEnter | 1006fb10 | — | ClanWnd, ObserverWnd, SystemMsgWnd | — | ok |
| 160 | EV_GamingStateExit | 1006fc40 | BroadcastObserverState, GamingHideWindowState, OlympiadObserverState, SpecialCameraState | ClanDrawerWnd, ClanWnd, InviteClanPopWnd | — | ok |
| 170 | EV_ServerAgeLimitChange | 1014fb40 | ServerAgeLimit | LoadingWnd | — | ok |
| 180 | EV_UpdateUserInfo | 101679b0 | — | DetailStatusWnd, InventoryWnd, StatusWnd | — | ok |
| 190 | EV_UpdateHP | 101583a0 | CurrentHP, ServerID | DetailStatusWnd, StatusWnd, TargetStatusWnd | — | ok |
| 200 | EV_UpdateMaxHP | 101585c0 | MaxHP, ServerID | DetailStatusWnd, StatusWnd, TargetStatusWnd | ServerID | ok |
| 210 | EV_UpdateMP | 10158290 | CurrentMP, ServerID | DetailStatusWnd, RecipeBuyListWnd, RecipeBuyManufactureWnd, RecipeManufactureWnd, StatusWnd, TargetStatusWnd | ServerID | ok |
| 220 | EV_UpdateMaxMP | 101584b0 | MaxMP, ServerID | DetailStatusWnd, StatusWnd, TargetStatusWnd | ServerID | ok |
| 230 | EV_UpdateCP | 101586d0 | CurrentCP, ServerID | DetailStatusWnd, StatusWnd | ServerID | ok |
| 240 | EV_UpdateMaxCP | 101587e0 | MaxCP, ServerID | DetailStatusWnd, StatusWnd | ServerID | ok |
| 250 | EV_UpdatePetInfo | 1015fd20 10167a70 | — | PetStatusWnd, PetWnd, SummonedStatusWnd, SummonedWnd | — | ok |
| 260 | EV_UpdateHennaInfo | 10159350 | — | DetailStatusWnd, InventoryWnd | — | ok |
| 280 | EV_ReceiveAttack | 10167770 | AttackerID, AttackerName, Critical, DefenderID, DefenderName, ShieldDefense | OlympiadPlayerWnd | — | ok |
| 290 | EV_ReceiveMagicSkillUse | 10167620 | AttackerID, DefenderID, SkillID | EventMatchObserverWnd, OlympiadPlayerWnd | AttackerID, DefenderID, SkillID | ok |
| 300 | EV_ReceiveTargetLevelDiff | 1015a920 | LevelDiff | TargetStatusWnd | — | ok |
| 310 | EV_ShowReplayQuitDialogBox | 1016e950 | — | AbnormalStatusWnd | — | ok |
| 320 | EV_ClanInfo | 1015aa00 | AgitID, AllianceCrestID, AllianceID, AllianceName, CastleID, ClanID, ClanMasterName, ClanName, ClanNameValue, ClanRank, ClanType, CrestID, Guilty, InWar, SkillLevel, Status | ClanWnd | AgitID, AllianceCrestID, AllianceID, AllianceName, CastleID, ClanID, ClanMasterName, ClanName, ClanNameValue, ClanRank, ClanType, CrestID, Guilty, InWar, SkillLevel, Status | ok |
| 330 | EV_ClanInfoUpdate | 1015ae50 | AgitID, AllianceCrestID, AllianceID, AllianceName, CastleID, ClanID, ClanNameValue, ClanRank, CrestID, Guilty, InWar, LargeCrestID, SkillLevel, Status | ClanWnd | AgitID, AllianceCrestID, AllianceID, AllianceName, CastleID, ClanID, ClanNameValue, ClanRank, CrestID, Guilty, InWar, LargeCrestID, SkillLevel, Status | ok |
| 340 | EV_ClanMyAuth | 1015c020 | ClanCrest, ClanMaster, Grade, Join, ManageMaster, NickName, OustMember, War | ClanWnd | ClanCrest, ClanMaster, Grade, Join, ManageMaster, NickName, OustMember, War | ok |
| 350 | EV_ClanAuthGradeList | 1015b510 | Count | ClanDrawerWnd | Count, GradeID, GradeMemberCount | GradeID, GradeMemberCount |
| 360 | EV_ClanCrestChange | — | — | ClanDrawerWnd | — | — |
| 370 | EV_ClanAuth | 10165b90 | Command, GradeID | ClanDrawerWnd | Command, GradeID, PowerValue | PowerValue |
| 380 | EV_ClanAuthMember | 1015c290 | Grade, Name | ClanDrawerWnd | Grade, Name, PowerValue | PowerValue |
| 390 | EV_ClanSetAcademyMaster | 1015b450 | — | — | — | ok |
| 400 | EV_ClanAddMember | 1015b730 | ClanType, Class, Gender, ID, Level, Name, Race | ClanWnd | ClanType, Class, Gender, ID, Level, Name, Race | ok |
| 410 | EV_ClanAddMemberMultiple | 1015b970 | ClanType, Class, Gender, HaveMaster, ID, Level, Name, Race | ClanWnd | ClanType, Class, Gender, HaveMaster, ID, Level, Name, Race | ok |
| 420 | EV_ClanDeleteAllMember | 1015b680 1015bf70 | — | ClanWnd | — | ok |
| 430 | EV_ClanMemberInfo | 1015c420 | ClanType, GradeID, MasterName, Name, NickName, OrderName | ClanDrawerWnd | ClanType, GradeID, MasterName, Name, NickName, OrderName | ok |
| 440 | EV_ClanMemberInfoUpdate | 1015bbf0 | Class, Gender, HaveMaster, ID, Level, Name, PledgeType, Race | ClanWnd | Class, Gender, HaveMaster, ID, Level, Name, PledgeType, Race | ok |
| 450 | EV_ClanDeleteMember | 1015be70 | Name | ClanWnd | Name | ok |
| 460 | EV_ClanWarList | 1015c6a0 | ClanName, Condition, Page, Period, Type | ClanDrawerWnd | ClanName, Page, Period, Type | ok |
| 470 | EV_ClanClearWarList | — | — | ClanDrawerWnd | Condition | — |
| 480 | EV_ClanSubClanUpdated | 1015c8b0 | ClanID, ClanName, ClanType, MasterName | ClanWnd | ClanID, ClanName, ClanType, MasterName | ok |
| 490 | EV_ClanSkillList | 1015b1c0 | Count | ClanDrawerWnd | Count, SkillID, SkillLevel | SkillID, SkillLevel |
| 500 | EV_ClanSkillListAdd | 1015b330 | SkillID, SkillLevel | ClanDrawerWnd | SkillID, SkillLevel | ok |
| 510 | EV_MinFrameRateChanged | — | — | OptionWnd | — | — |
| 520 | EV_PartyMemberChanged | 1015e640 1015eec0 1015f020 | ClassID, CurCP, CurHP, CurMP, ID, Level, MasterID, MaxCP, MaxHP, MaxMP, Name, PartyMemberCount, RoutingType | MinimapWnd, MinimapWnd_Expand, OptionWnd | PartyMemberCount | ok |
| 530 | EV_ShowPCCafeCouponUI | 10157030 | — | CouponEventWnd | — | ok |
| 540 | EV_ChatMessage | 101392c0 | ColorB, ColorG, ColorR, Msg, SysType, Type | ChatWnd | ColorB, ColorG, ColorR, Msg, SysType, Type | ok |
| 550 | EV_ChatWndStatusChange | 1015e640 1015f020 10163ab0 | ClassID, CurCP, CurHP, CurMP, ID, Level, MasterID, MaxCP, MaxHP, MaxMP, Name, PartyMemberCount, RoutingType | ChatWnd | — | ok |
| 560 | EV_ChatWndSetString | 101095f0 10139700 10139700 101398c0 101398c0 101398c0 | String | ChatWnd | String | ok |
| 570 | EV_ChatWndSetFocus | 101734e0 | GAMINGSTATE, LOGINSTATE, OLYMPIADOBSERVERSTATE | ChatWnd | — | ok |
| 571 | EV_ChatWndMsnStatus | 100c1ad0 | AWY, BRB, BSY, CHG, FLN, HDN, IDL, LUN, NLN, PHN, away, berightback, busy, idle, invisible, lunch, none, offline, online, onthephone, status | ChatWnd | status | ok |
| 572 | EV_ChatWndMacroCommand | 101b45f0 | Command | ChatWnd | Command | ok |
| 580 | EV_SystemMessage | 1013e510 101b7cd0 | Index | OnScreenMessageWnd | — | ok |
| 590 | EV_JoypadLButtonDown | — | — | ShortcutWnd | — | — |
| 600 | EV_JoypadLButtonUp | 10165700 | — | ShortcutWnd | — | ok |
| 610 | EV_JoypadRButtonDown | — | — | ShortcutWnd | — | — |
| 620 | EV_JoypadRButtonUp | 101657d0 | — | ShortcutWnd | — | ok |
| 630 | EV_ShortcutUpdate | 100461d0 10046690 100468e0 10046b10 10046ca0 10046eb0 | Game, IsLockShortcutWnd, ShortcutID, pItem, pShortcutDelay, pShortcutItem, pShortcutItemInfo | ShortcutWnd | ShortcutID | ok |
| 640 | EV_ShortcutPageUpdate | 10047070 | ShortcutPage | ShortcutWnd | ShortcutPage | ok |
| 650 | EV_ShortcutClear | 1015a4a0 | — | ShortcutWnd | — | ok |
| 660 | EV_ShortcutJoypad | 10164250 | OnOff | ShortcutWnd | OnOff | ok |
| 670 | EV_ShortcutPageDown | — | — | — | — | — |
| 680 | EV_ShortcutPageUp | — | — | — | — | — |
| 690 | EV_ShowShortcutWnd | 10172350 | ACTION, AnimationType, ApplyMinFrame, BackgroundType, CAMERAVIEWHEIGHTADJUST, CameraSpeed, ChinaWarnMsgOKButton, Command, EulaWndOKButton, EventMatchToggleTargetName, FocusChatWindow, FontSize, FontType, GamingState, HideAllWindow, ISKEEPMINFRAMERATE, LifeTime, Msg, MsgColor, MsgNo, MsgType, PLEDGE, Param1, Param2, Perspective, QUEST, QuestTreeWnd, RequestOpenMinimap, SKILL, STATUS, ServerSelectOKButton, SetGamingState, SetShortcutPage, ShadowType, ShowBoardWindow, ShowGMPetitionWindow, ShowGMWindow, ShowInventoryWindow, ShowMacroListWindow, ShowMainWindow, ShowMessengerWindow, ShowOptionWindow, ShowPartyBuff, ShowShortcutWnd, ShowSystemMenuWindow, ShowTestWindow, ShowWindow, TabShowInventoryWindow, TargetCancel, UseShortcutItem, Video, WindowType, hahaha | — | — | ok |
| 700 | EV_QuestListStart | 1011fa60 1016f110 | — | QuestTreeWnd | — | ok |
| 710 | EV_QuestList | 1016ac70 | Completed, Level, QuestID | QuestTreeWnd | — | ok |
| 720 | EV_QuestListEnd | 1011fa60 1016f110 | — | QuestTreeWnd | — | ok |
| 730 | EV_QuestSetCurrentID | 100065e0 | Index, QuestID | QuestTreeWnd | — | ok |
| 740 | EV_SSQStatus | 10166050 | Contribution, MsgNum1, MsgNum2, Period, SSQStatus, SSQTeam, SealStoneAdena, SelectedSeal, Team1HuntingMark, Team1MainEventMark, Team1Per, Team1TotalMark, Team2HuntingMark, Team2MainEventMark, Team2Per, Team2TotalMark | SSQMainBoard | — | ok |
| 750 | EV_SSQMainEvent | 10166400 | EventNum, SSQStatus | SSQMainBoard | — | ok |
| 760 | EV_SSQSealStatus | 10166800 | NeedPoint1, NeedPoint2, SSQStatus, SealNum | SSQMainBoard | — | ok |
| 770 | EV_SSQPreInfo | 10165e70 | RoomNum, Winner | SSQMainBoard | — | ok |
| 780 | EV_RecipeShowBuyListWnd | 10157e20 | Adena, CurrentMP, MaxMP, ServerID | RecipeBuyListWnd | — | ok |
| 790 | EV_RecipeShopSellItem | 10157f90 | CanbeMade, MakingFee, RecipeID | RecipeBuyListWnd | — | ok |
| 800 | EV_RecipeShopItemInfo | 101580d0 | Adena, CurrentMP, MakingResult, MaxMP, MerchantID, RecipeID | RecipeBuyManufactureWnd | — | ok |
| 810 | EV_RecipeShowRecipeTreeWnd | — | — | RecipeTreeWnd | — | — |
| 820 | EV_RecipeShowBookWnd | 10157790 | CurrentMP, Type | RecipeBookWnd | — | ok |
| 830 | EV_RecipeAddBookItem | 101578a0 | RecipeID | RecipeBookWnd | — | ok |
| 840 | EV_RecipeItemMakeInfo | 10157980 | CurrentMP, MakingResult, MaxMP, RecipeID, Type | RecipeManufactureWnd | — | ok |
| 850 | EV_RecipeShopShowWnd | 10157b20 | Type | RecipeShopWnd | — | ok |
| 860 | EV_RecipeShopAddBookItem | 10157c00 | RecipeID | RecipeShopWnd | — | ok |
| 870 | EV_RecipeShopAddShopItem | 10157ce0 | CanbeMade, MakingFee, RecipeID | RecipeShopWnd | — | ok |
| 880 | EV_HeroShowList | 10156060 | Max | HeroTowerWnd | — | ok |
| 890 | EV_HeroRecord | — | — | HeroTowerWnd | — | — |
| 900 | EV_OlympiadTargetShow | 10156650 10156650 | GamingState, OlympiadObserverState, OlympiadTargetWnd, PlayerNum | OlympiadTargetWnd | — | ok |
| 910 | EV_OlympiadMatchEnd | 10156650 10156920 | GamingState, OlympiadObserverState, OlympiadTargetWnd, PlayerNum | OlympiadBuffWnd, OlympiadPlayerWnd, OlympiadTargetWnd | — | ok |
| 920 | EV_OlympiadUserInfo | 10156350 | ClassID, CurCP, CurHP, ID, IsPlayer, MaxCP, MaxHP, Name, OlympiadObserverState, PlayerNum | OlympiadPlayerWnd, OlympiadTargetWnd | — | ok |
| 930 | EV_OlympiadBuffShow | — | — | OlympiadBuffWnd | — | — |
| 940 | EV_OlympiadBuffInfo | 1016b560 | Max, PlayerID | OlympiadBuffWnd | — | ok |
| 950 | EV_AbnormalStatusNormalItem | 1015a560 1016caa0 | Max, OlympiadObserverState | AbnormalStatusWnd | — | ok |
| 960 | EV_AbnormalStatusEtcItem | 1015a6c0 1016cf50 | Max | AbnormalStatusWnd | — | ok |
| 970 | EV_AbnormalStatusShortItem | 1015a610 1016d310 | Max | AbnormalStatusWnd | — | ok |
| 980 | EV_TargetUpdate | 1014fe90 101588f0 | — | GMWnd, TargetStatusWnd | — | ok |
| 990 | EV_TargetHideWindow | — | — | TargetStatusWnd | — | — |
| 1000 | EV_ShowBuffIcon | 10165d00 | Show | PartyWnd, PartyWndCompact, PetStatusWnd, SummonedStatusWnd | — | ok |
| 1010 | EV_PetWndShow | 1015f8f0 | — | PetWnd | — | ok |
| 1020 | EV_PetWndShowNameBtn | 1015fc60 | Show | PetWnd | — | ok |
| 1030 | EV_PetWndRegPetNameFailed | 10108d00 | ErrMsgNo | PetWnd | — | ok |
| 1040 | EV_PetStatusShow | 1015f9a0 | — | PetStatusWnd | — | ok |
| 1050 | EV_PetStatusSpelledList | — | — | PetStatusWnd | — | — |
| 1060 | EV_PetInventoryItemStart | 1011f2e0 1015fdb0 | — | PetWnd | — | ok |
| 1070 | EV_PetInventoryItemList | 1011f2e0 1015fe40 | — | PetWnd | — | ok |
| 1080 | EV_PetInventoryItemUpdate | 1015ff10 | WorkType | PetWnd | — | ok |
| 1090 | EV_SummonedWndShow | — | — | SummonedWnd | — | — |
| 1100 | EV_SummonedStatusShow | — | — | SummonedStatusWnd | — | — |
| 1110 | EV_SummonedStatusSpelledList | 1015e410 | ID, Max | SummonedStatusWnd | — | ok |
| 1120 | EV_SummonedStatusRemainTime | 1015fa50 | MaxTime, RemainTime | SummonedStatusWnd | — | ok |
| 1130 | EV_PetSummonedStatusClose | 1015fb40 1015fbd0 | — | PetStatusWnd, PetWnd, SummonedStatusWnd, SummonedWnd | — | ok |
| 1140 | EV_PartyAddParty | 1015e640 | ClassID, CurCP, CurHP, CurMP, ID, Level, MasterID, MaxCP, MaxHP, MaxMP, Name, PartyMemberCount, RoutingType | PartyWnd, PartyWndCompact | — | ok |
| 1150 | EV_PartyUpdateParty | 1015eaf0 | ClassID, CurCP, CurHP, CurMP, ID, Level, MaxCP, MaxHP, MaxMP, Name | PartyWnd, PartyWndCompact | — | ok |
| 1160 | EV_PartyDeleteParty | 1015eec0 | ID, PartyMemberCount | PartyWnd, PartyWndCompact | — | ok |
| 1170 | EV_PartyDeleteAllParty | 1015f020 | PartyMemberCount | PartyWnd, PartyWndCompact | — | ok |
| 1180 | EV_PartySpelledList | — | — | PartyWnd, PartyWndCompact | — | — |
| 1190 | EV_ShowBBS | 100065e0 1013dc20 | Index, Init, QuestID | BoardWnd | — | ok |
| 1200 | EV_ShowBoardPacket | 1015f290 | Address, Command1, Command2, Command3, Command4, Command5, Command6, Command7, Command8, OK | BoardWnd | — | ok |
| 1210 | EV_ShowHelp | 10181970 | FilePath | HelpHtmlWnd | — | ok |
| 1220 | EV_LoadHelpHtml | 1008caf0 | HtmlString | HelpHtmlWnd | — | ok |
| 1221 | EV_LoadPetitionHtml | 1008caf0 | HtmlString | UserPetitionWnd | HtmlString | ok |
| 1230 | EV_MacroShowListWnd | 1013ddd0 | — | MacroListWnd | — | ok |
| 1240 | EV_MacroUpdate | 10159b40 | — | MacroListWnd | — | ok |
| 1250 | EV_MacroList | 1011d670 | Max | MacroListWnd | — | ok |
| 1260 | EV_MacroShowEditWnd | — | — | MacroEditWnd | — | — |
| 1270 | EV_MacroDeleted | 1011d970 | MacroID | MacroEditWnd | — | ok |
| 1280 | EV_SkillListStart | 10157710 | — | MagicSkillWnd | — | ok |
| 1290 | EV_SkillList | 1016c5e0 | ClassID, Command, Description, EnchantName, IconName, Level, Lock, Name, Type | MagicSkillWnd | — | ok |
| 1300 | EV_ActionListStart | 1011a860 | ActionID, Command, Description, IconName, Name, Type | ActionWnd | — | ok |
| 1310 | EV_ActionList | 1011a860 | ActionID, Command, Description, IconName, Name, Type | ActionWnd | — | ok |
| 1320 | EV_ActionPetListStart | 1011ace0 | ActionID, Command, Description, IconName, Name, Type | PetWnd | — | ok |
| 1330 | EV_ActionPetList | 1011ace0 | ActionID, Command, Description, IconName, Name, Type | PetWnd | — | ok |
| 1340 | EV_ActionSummonedListStart | 1011b190 | ActionID, Command, Description, IconName, Name, Type | SummonedWnd | — | ok |
| 1350 | EV_ActionSummonedList | 1011b190 | ActionID, Command, Description, IconName, Name, Type | SummonedWnd | — | ok |
| 1360 | EV_CommandChannelStart | 101570e0 | — | UnionWnd | — | ok |
| 1370 | EV_CommandChannelEnd | 101571a0 | — | UnionWnd | — | ok |
| 1380 | EV_CommandChannelInfo | 101569d0 | OwnerName, PartyMemberNum, PartyNum, RoutingType | UnionWnd | — | ok |
| 1390 | EV_CommandChannelPartyList | 10156b70 | MasterID, MasterName, PartyNum | UnionWnd | — | ok |
| 1395 | EV_CommandChannelPartyUpdate | 10156ea0 | MasterID, MasterName, MemberCount, Type | UnionWnd | — | ok |
| 1400 | EV_CommandChannelRoutingType | 101699d0 | RoutingType | UnionWnd | — | ok |
| 1420 | EV_CommandChannelPartyMember | 10156ce0 | MemberCount | UnionDetailWnd | — | ok |
| 1430 | EV_RestartMenuShow | 10151580 | — | RestartMenuWnd | — | ok |
| 1440 | EV_RestartMenuHide | 10151500 | — | RestartMenuWnd | — | ok |
| 1450 | EV_SiegeInfo | 1015d4c0 | AllianceID, AllianceName, CastleID, ClanID, ClanName, IsOwner, NowTime, OwnerName, SiegeTime | SiegeInfoWnd | — | ok |
| 1460 | EV_SiegeInfoClanListStart | 1015e2b0 1015e360 | Type | SiegeInfoWnd | — | ok |
| 1470 | EV_SiegeInfoClanList | 1015d880 1015dc70 | AllianceID, AllianceMasterName, AllianceName, ClanCrestID, ClanID, ClanMasterName, ClanName, ProposeTime, Status, Type | SiegeInfoWnd | — | ok |
| 1480 | EV_SiegeInfoClanListEnd | 1015e150 1015e200 | Type | SiegeInfoWnd | — | ok |
| 1490 | EV_SiegeInfoSelectableTime | 1015e0a0 | TimeID | SiegeInfoWnd | — | ok |
| 1500 | EV_IMEStatusChange | 1002a840 1002a8e0 1006fb10 | — | ChatWnd | — | ok |
| 1510 | EV_ArriveNewTutorialQuestion | 1015f790 | QuestionID | TutorialBtnWnd | — | ok |
| 1520 | EV_ArriveShowQuest | 10153b50 | QuestID | QuestBtnWnd | — | ok |
| 1530 | EV_ArriveNewMail | 10164170 | IdxMail | MailBtnWnd | — | ok |
| 1540 | EV_PartyMatchStart | 101682c0 | — | PartyMatchWnd | — | ok |
| 1550 | EV_PartyMatchRoomStart | 10168370 | LootingMethodID, MaxLevel, MaxMember, MinLevel, RoomName, RoomNum, ZoneID | OptionWnd, PartyMatchRoomWnd, PartyMatchWaitListWnd, PartyMatchWnd | LootingMethodID, MaxLevel, MaxMember, MinLevel, RoomName, RoomNum, ZoneID | ok |
| 1560 | EV_PartyMatchRoomClose | 10168830 | — | OptionWnd, PartyMatchRoomWnd | — | ok |
| 1570 | EV_PartyMatchList | 10167f90 | PageNum, RoomCount | PartyMatchWnd | CurMember_, Leader_, MaxLevel_, MaxMember_, MinLevel_, PageNum, RoomCount, RoomName_, RoomNum_, ZoneID_ | CurMember_, Leader_, MaxLevel_, MaxMember_, MinLevel_, RoomName_, RoomNum_, ZoneID_ |
| 1580 | EV_PartyMatchRoomMember | 10168590 | MemberCount, MyMembershipType | PartyMatchRoomWnd | ClassID_, Level_, MemberCount, MemberID_, MemberName_, MembershipType_, MyMembershipType, ZoneID_ | ClassID_, Level_, MemberID_, MemberName_, MembershipType_, ZoneID_ |
| 1590 | EV_PartyMatchRoomMemberUpdate | 101688f0 | ClassID, Level, MemberID, MemberName, MembershipType, UpdateType, ZoneID | PartyMatchRoomWnd | ClassID, Level, MemberID, MemberName, MembershipType, UpdateType, ZoneID | ok |
| 1600 | EV_PartyMatchChatMessage | 10138600 10138a40 10138a40 10138a40 10138a40 1013df30 | ColorA, ColorB, ColorG, ColorR, Message, Msg | PartyMatchRoomWnd | ColorA, ColorB, ColorG, ColorR, Msg | ok |
| 1610 | EV_PartyMatchWaitListStart | 10169ac0 | AllCount, Count | PartyMatchOutWaitListWnd, PartyMatchWaitListWnd | AllCount, Count | ok |
| 1620 | EV_PartyMatchWaitList | 10169be0 | ClassID, Level, Name | PartyMatchOutWaitListWnd, PartyMatchWaitListWnd | ClassID, Level, Name | ok |
| 1630 | EV_PartyMatchCommand | 1013a320 10170860 | Message | PartyMatchRoomWnd | — | ok |
| 1640 | EV_HennaListWndShowHideEquip | 101589c0 | Adena | HennaListWnd | Adena | ok |
| 1650 | EV_HennaListWndAddHennaEquip | 10158aa0 | ClassID, Description, HennaID, IconName, NumberOfItem | HennaListWnd | — | ok |
| 1660 | EV_HennaInfoWndShowHideEquip | 10158dd0 | Adena, CONchange, CONnow, ClassID, DEXchange, DEXnow, DyeIconName, DyeName, HennaID, INTchange, INTnow, MENchange, MENnow, NumOfItem, STRchange, STRnow, TattooAddName, TattooIconName, TattooName, WITchange, WITnow | HennaInfoWnd | Adena, CONchange, CONnow, ClassID, DEXchange, DEXnow, DyeIconName, DyeName, Fee, HennaID, INTchange, INTnow, MENchange, MENnow, NumOfItem, STRchange, STRnow, TattooAddName, TattooIconName, TattooName, WITchange, WITnow | Fee |
| 1670 | EV_HennaListWndShowHideUnEquip | 10159560 | Adena | HennaListWnd | Adena | ok |
| 1680 | EV_HennaListWndAddHennaUnEquip | 10159640 | ClassID, Description, HennaID, IconName, NumberOfItem | HennaListWnd | ClassID, Description, Fee, HennaID, IconName, Name, NumOfItem | Fee, Name, NumOfItem |
| 1690 | EV_HennaInfoWndShowHideUnEquip | 10159cd0 | Adena, CONchange, CONnow, ClassID, DEXchange, DEXnow, DyeIconName, DyeName, HennaID, INTchange, INTnow, MENchange, MENnow, NumOfItem, STRchange, STRnow, TattooAddName, TattooIconName, TattooName, WITchange, WITnow | HennaInfoWnd | Adena, CONchange, CONnow, ClassID, DEXchange, DEXnow, DyeIconName, DyeName, Fee, HennaID, INTchange, INTnow, MENchange, MENnow, NumOfItem, STRchange, STRnow, TattooAddName, TattooIconName, TattooName, WITchange, WITnow | Fee |
| 1700 | EV_CalculatorWndShowHide | 101625b0 | — | CalculatorWnd | — | ok |
| 1710 | EV_DialogOK | — | — | DeliverWnd, DuelManager, GMWnd, InventoryWnd, MacroEditWnd, MacroListWnd, ManorCropInfoSettingWnd, ManorSeedInfoSettingWnd, ManorShopWnd, MultiSellWnd, PetWnd, PrivateShopWnd, QuestTreeWnd, RecipeBookWnd, RecipeShopWnd, RefineryWnd, ShopWnd, SiegeInfoWnd, SystemMenuWnd, TradeWnd, WarehouseWnd | — | — |
| 1720 | EV_DialogCancel | — | — | DuelManager, GMWnd, TradeWnd | — | — |
| 1730 | EV_RadarAddTarget | 101610a0 | X, Y, Z | RadarContainerWnd | X, Y, Z | ok |
| 1740 | EV_RadarDeleteTarget | — | — | RadarContainerWnd | X, Y, Z | — |
| 1750 | EV_RadarDeleteAllTarget | 101610a0 | X, Y, Z | RadarContainerWnd | — | ok |
| 1760 | EV_RadarColor | — | — | — | — | — |
| 1770 | EV_ShowTownMap | 101658a0 | TownMapName, UserPosX, UserPosY | TownMapWnd | TownMapName, UserPosX, UserPosY | ok |
| 1780 | EV_ShowMinimap | 1013db40 | SSQStatus | MinimapWnd | SSQStatus | ok |
| 1790 | EV_MinimapAddTarget | 101610a0 | X, Y, Z | MinimapWnd, MinimapWnd_Expand | X, Y, Z | ok |
| 1800 | EV_MinimapDeleteTarget | 10161310 | X, Y, Z | MinimapWnd, MinimapWnd_Expand | X, Y, Z | ok |
| 1810 | EV_MinimapDeleteAllTarget | 101610a0 | X, Y, Z | MinimapWnd, MinimapWnd_Expand | — | ok |
| 1820 | EV_MinimapShowQuest | — | — | MinimapWnd, MinimapWnd_Expand | — | — |
| 1830 | EV_MinimapHideQuest | 10165630 | — | MinimapWnd, MinimapWnd_Expand | — | ok |
| 1840 | EV_MinimapChangeOnTick | 10161450 | — | MinimapWnd, MinimapWnd_Expand | — | ok |
| 1850 | EV_MinimapCursedWeaponList | 10161500 | NUM | MinimapWnd, MinimapWnd_Expand | ID, NAME, NUM | ID, NAME |
| 1860 | EV_MinimapCursedWeaponLocation | 101616d0 | NUM | MinimapWnd, MinimapWnd_Expand | ID, ISOWNED, NAME, NUM, X, Y, Z | ID, ISOWNED, NAME, X, Y, Z |
| 1870 | EV_MinimapShowReduceBtn | 101880f0 1018a9f0 | — | MinimapWnd, MinimapWnd_Expand | — | ok |
| 1880 | EV_MinimapHideReduceBtn | 10187b50 | — | MinimapWnd, MinimapWnd_Expand | — | ok |
| 1890 | EV_MinimapUpdateGameTime | 101895c0 | GameHour, GameMinute | MinimapWnd, MinimapWnd_Expand | GameHour, GameMinute | ok |
| 1900 | EV_LanguageChanged | 10164610 | — | AbnormalStatusWnd, ActionWnd, GametipWnd, MagicSkillWnd, PetWnd, QuestTreeWnd, SummonedWnd, SystemMenuWnd | — | ok |
| 1910 | EV_PCCafePointInfo | 10169140 | AddPoint, PeriodType, PointType, RemainTime, TotalPoint | PCCafeEventWnd | AddPoint, PeriodType, PointType, RemainTime, TotalPoint | ok |
| 1920 | EV_ShowPetitionWnd | 1013df30 1013e640 | ColorA, ColorB, ColorG, ColorR, Message, Msg | PetitionWnd | — | ok |
| 1921 | EV_ShowUserPetitionWnd | 1013a320 | Message | UserPetitionWnd | Message | ok |
| 1930 | EV_PetitionChatMessage | 1013df30 1013e640 | ColorA, ColorB, ColorG, ColorR, Message, Msg | PetitionWnd | ColorA, ColorB, ColorG, ColorR, Message | ok |
| 1940 | EV_EnablePetitionFeedback | 10166a70 | — | PetitionWnd | Enable | Enable |
| 1950 | EV_TradeStart | 10152250 | targetID | TradeWnd | targetId | ok |
| 1960 | EV_TradeAddItem | 10152360 10152450 10152540 | destination, inventoryList, myList, otherList | TradeWnd | destination | ok |
| 1970 | EV_TradeDone | 101527d0 | — | TradeWnd | — | ok |
| 1980 | EV_TradeOtherOK | 101528c0 | — | TradeWnd | — | ok |
| 1990 | EV_TradeUpdateInventoryItem | 10152630 | add, delete, type, update | TradeWnd | type | ok |
| 2000 | EV_TradeRequestStartExchange | 10152120 | targetID | TradeWnd | targetID | ok |
| 2010 | EV_SkillTrainListWndShow | 10157260 | Type | SkillTrainListWnd | Type | ok |
| 2020 | EV_SkillTrainListWndHide | 10157650 | — | SkillTrainListWnd | — | ok |
| 2030 | EV_SkillTrainListWndAddSkill | 1016bea0 | bItemConsume, iEXPConsume, iID, iLevel, iMaxLevel, iSPConsume, iType, strDescription, strEnchantName, strIconName, strName, strOperateType | SkillTrainListWnd | iID, iLevel, iSPConsume, strEnchantName, strIconName, strName | ok |
| 2040 | EV_SkillTrainInfoWndShow | 1016b870 | iCastRange, iEXPConsume, iLevel, iMPConsume, iPercent, iSPConsume, strDescription, strEnchantDesc, strEnchantName, strIconName, strName, strOperateType | SkillTrainInfoWnd | Type, iCastRange, iEXPConsume, iID, iLevel, iMPConsume, iPercent, iSPConsume, strDescription, strEnchantDesc, strEnchantName, strIconName, strName, strOperateType | Type, iID |
| 2050 | EV_SkillTrainInfoWndHide | 10157650 | — | SkillTrainInfoWnd | — | ok |
| 2060 | EV_SkillTrainInfoWndAddExtendInfo | 1016c400 | iNumOfItem, strIconName, strName | SkillTrainInfoWnd | iNumOfItem, strIconName, strName | ok |
| 2070 | EV_SetMaxCount | 10153490 | dwarvenRecipe, inventory, privateShopBuy, privateShopSell, recipe, warehouseClan, warehousePrivate | PrivateShopWnd, RecipeBookWnd, WarehouseWnd | privateShopBuy, privateShopSell, warehousePrivate | ok |
| 2080 | EV_ShopOpenWindow | 10152e00 10152ff0 10153250 | adena, buy, merchant, npc, preview, sell, type | ShopWnd | adena, merchant, npc, type | ok |
| 2090 | EV_ShopAddItem | 10152f60 10153190 10153400 | — | ShopWnd | — | ok |
| 2100 | EV_WarehouseOpenWindow | 101536c0 10153900 | adena, category, deposit, type, withdraw | WarehouseWnd | adena, category, type | ok |
| 2110 | EV_WarehouseAddItem | 10153870 10153a60 | — | WarehouseWnd | — | ok |
| 2120 | EV_PrivateShopOpenWindow | 10162640 101627e0 10162d90 10162f00 | adena, bulk, buy, buyList, sell, sellList, type, userID | PrivateShopWnd | adena, bulk, type, userID | ok |
| 2130 | EV_PrivateShopAddItem | 10162980 10162980 10162c40 10163070 10163070 10163300 | bottomList, buy, buyList, sell, sellList, target, topList, type | PrivateShopWnd | target | ok |
| 2140 | EV_SelectDeliverClear | 1015d1f0 | id, name | SelectDeliverWnd | — | ok |
| 2150 | EV_SelectDeliverAddName | 1015d1f0 | id, name | SelectDeliverWnd | id, name | ok |
| 2160 | EV_DeliverOpenWindow | 1015d370 | adena, destinationID | DeliverWnd | adena, destinationID | ok |
| 2170 | EV_DeliverAddItem | 1015d370 | adena, destinationID | DeliverWnd | — | ok |
| 2180 | EV_ShowEventMatchGMWnd | 10167570 | — | EventMatchGMFenceWnd, EventMatchGMWnd | — | ok |
| 2190 | EV_EventMatchCreated | 10167190 | MatchID | EventMatchGMWnd | MatchID | ok |
| 2200 | EV_EventMatchDestroyed | — | — | — | — | — |
| 2210 | EV_EventMatchManage | 10168b10 | FenceStat, MatchID, MatchStat, Team1Name, Team1Stat, Team2Name, Team2Stat | EventMatchGMWnd | FenceStat, MatchID, MatchStat, Team1Name, Team1Stat, Team2Name, Team2Stat | ok |
| 2220 | EV_StartEventMatchObserver | 10166ca0 | EventMatchObserverState, GamingState | EventMatchObserverWnd | — | ok |
| 2230 | EV_EventMatchUpdateTeamName | 10166ca0 | EventMatchObserverState, GamingState | EventMatchObserverWnd | — | ok |
| 2240 | EV_EventMatchUpdateScore | 10166fa0 | — | EventMatchObserverWnd | — | ok |
| 2250 | EV_EventMatchUpdateTeamInfo | 10167090 | TeamID | EventMatchGMWnd, EventMatchObserverWnd | TeamID | ok |
| 2260 | EV_EventMatchUpdateUserInfo | 10167290 10167420 | TeamID, UserID | EventMatchObserverWnd | TeamID, UserID | ok |
| 2270 | EV_EventMatchGMMessage | 10166e80 | Message, Type | EventMatchGMMsgWnd, EventMatchSpecialMsgWnd | Message, Type | ok |
| 2280 | EV_ShowGMWnd | 1013de80 | — | GMWnd | — | ok |
| 2290 | EV_GMObservingUserInfoUpdate | 101b1b50 | — | GMDetailStatusWnd | — | ok |
| 2300 | EV_GMObservingSkillListStart | 10160710 | — | GMMagicSkillWnd | — | ok |
| 2310 | EV_GMObservingSkillList | 1016d860 | ClassID, Command, Description, EnchantName, IconName, Level, Lock, Name, Type | GMMagicSkillWnd | — | ok |
| 2320 | EV_GMObservingQuestListStart | 101607c0 | — | GMQuestWnd | — | ok |
| 2330 | EV_GMObservingQuestList | 1016dea0 | Completed, Level, QuestID | GMQuestWnd | — | ok |
| 2340 | EV_GMObservingQuestListEnd | 10160870 | — | GMQuestWnd | — | ok |
| 2350 | EV_GMObservingQuestItem | 10160920 | ClassID, ItemCount | GMQuestWnd | ClassID, ItemCount | ok |
| 2360 | EV_GMObservingWarehouseItemListStart | 10160bd0 | adena, category, type, withdraw | GMWarehouseWnd | — | ok |
| 2370 | EV_GMObservingWarehouseItemList | 10160d30 | — | GMWarehouseWnd | — | ok |
| 2380 | EV_GMObservingClan | 10160010 | AgitID, AllianceCrestID, AllianceID, AllianceName, CastleID, ClanID, ClanMasterName, ClanName, ClanNameValue, ClanRank, ClanType, CrestID, Guilty, InWar, SkillLevel, Status | GMClanWnd | — | ok |
| 2390 | EV_GMObservingClanMemberStart | 10160410 | — | GMClanWnd | — | ok |
| 2400 | EV_GMObservingClanMember | 101604c0 | ClanType, Class, Gender, ID, Level, Name, Race | GMClanWnd | — | ok |
| 2401 | EV_GMObservingInventoryAddItem | 10160b10 | — | GMInventoryWnd | — | ok |
| 2402 | EV_GMObservingInventoryClear | 10160a30 | InvenLimit | GMInventoryWnd | InvenLimit | ok |
| 2403 | EV_GMAddHennaInfo | 10159970 | ID, bActive | GMInventoryWnd | ID, bActive | ok |
| 2404 | EV_GMUpdateHennaInfo | 10159a80 | — | GMDetailStatusWnd, GMInventoryWnd | — | ok |
| 2410 | EV_GMSnoop | 10163b30 | CharacterName, ChatMessage, CreatureID, SnoopID, SnoopName, Type | GMSnoopWnd | CharacterName, ChatMessage, CreatureID, SnoopID, SnoopName, Type | ok |
| 2420 | EV_BeginShowZoneTitleWnd | 10151600 | GAMINGSTATE, Game, ShowZoneTitle, SubZoneName1, SubZoneName2, ZoneName | MinimapWnd, MinimapWnd_Expand, ZoneTitleWnd | SubZoneName1, SubZoneName2, ZoneName | ok |
| 2430 | EV_TutorialViewerWndShow | 1015f190 | HtmlString | TutorialViewerWnd | HtmlString | ok |
| 2440 | EV_TutorialViewerWndHide | 1015f870 | — | TutorialViewerWnd | — | ok |
| 2450 | EV_ObserverWndShow | 10165a10 | — | ObserverWnd | — | ok |
| 2460 | EV_ObserverWndHide | 10165ad0 1016e950 | — | ObserverWnd | — | ok |
| 2470 | EV_FishViewportWndShow | 10167e50 | — | FishViewportWnd | — | ok |
| 2480 | EV_FishViewportWndHide | 10167ee0 101ab9f0 | — | FishViewportWnd | — | ok |
| 2490 | EV_FishViewportWndInit | — | — | — | Event | — |
| 2500 | EV_FishViewportWndFinalAction | — | — | — | — | — |
| 2510 | EV_FishRankEventButtonShow | — | — | FishViewportWnd | — | — |
| 2520 | EV_FishRankEventButtonHide | 101ab8c0 | — | FishViewportWnd | — | ok |
| 2530 | EV_MultiSellShopID | 10163450 | shopID | MultiSellWnd | shopID | ok |
| 2540 | EV_MultiSellItemList | 10163500 | ID, OutputRefineryOp1, OutputRefineryOp2, classID, enchant, index, itemCount, itemType, refineryOp1, refineryOp2, slotBitType, type | MultiSellWnd | ID, OutputRefineryOp1, OutputRefineryOp2, classID, index, itemCount, itemType, slotBitType, type | ok |
| 2550 | EV_MultiSellNeededItemList | 10163800 | ClassID, ID, count, enchant, inputRefineryOp1, inputRefineryOp2, refineryOp1, refineryOp2 | MultiSellWnd | ClassID, ID, count, enchant, inputRefineryOp1, inputRefineryOp2, refineryOp1, refineryOp2 | ok |
| 2560 | EV_MultiSellItemListEnd | 10163a30 | — | MultiSellWnd | — | ok |
| 2570 | EV_InventoryClear | 10151830 10151930 | — | InventoryWnd | — | ok |
| 2580 | EV_InventoryOpenWindow | 10151830 | — | InventoryWnd | — | ok |
| 2590 | EV_InventoryHideWindow | 10152250 10152ba0 10153250 101536c0 | adena, category, deposit, merchant, sell, targetID, type | InventoryWnd | — | ok |
| 2600 | EV_InventoryAddItem | 101519f0 | — | InventoryWnd, QuestTreeWnd, RecipeBuyManufactureWnd, RecipeManufactureWnd | — | ok |
| 2610 | EV_InventoryUpdateItem | 10151ad0 | add, delete, type, update | InventoryWnd, QuestTreeWnd, RecipeBuyManufactureWnd, RecipeManufactureWnd | type | ok |
| 2620 | EV_InventoryItemListEnd | 10151cb0 | — | InventoryWnd | — | ok |
| 2630 | EV_InventoryAddHennaInfo | 10159430 | ID, bActive | InventoryWnd | ID, bActive | ok |
| 2631 | EV_InventoryToggleWindow | 1013dac0 1015a250 | — | InventoryWnd | — | ok |
| 2640 | EV_ManorCropSellWndShow | 10155890 | CropID, CropLevel, CropName, CropPrice, CropRemainCnt, CropServerID, ManorID, ManorName, MyCropCnt, ProcureType, RewardType1, RewardType2 | ManorCropSellWnd | — | ok |
| 2645 | EV_ManorCropSellWndAddItem | 10155890 | CropID, CropLevel, CropName, CropPrice, CropRemainCnt, CropServerID, ManorID, ManorName, MyCropCnt, ProcureType, RewardType1, RewardType2 | ManorCropSellWnd | CropID, CropLevel, CropName, CropPrice, CropRemainCnt, CropServerID, ManorID, ManorName, MyCropCnt, ProcureType, RewardType1, RewardType2 | ok |
| 2646 | EV_ManorCropSellWndSetCropSell | — | — | ManorCropSellWnd | CropPriceString, CropRemainCntString, ManorID, ManorName, ProcureTypeString, SellCntString | — |
| 2647 | EV_ManorCropSellChangeWndShow | 10155e10 | CropPrice, CropRemainCnt, ManorID, ManorName, ProcureType | ManorCropSellChangeWnd | — | ok |
| 2648 | EV_ManorCropSellChangeWndAddItem | 10155e10 | CropPrice, CropRemainCnt, ManorID, ManorName, ProcureType | ManorCropSellChangeWnd | CropPrice, CropRemainCnt, ManorID, ManorName, ProcureType | ok |
| 2649 | EV_ManorCropSellChangeWndSetCropNameAndRewardType | — | — | ManorCropSellChangeWnd | CropName, RewardType1, RewardType2 | — |
| 2650 | EV_ManorInfoWndSeedShow | 10153c40 | ManorID, ManorName, MerchantOrChamberlain, RewardType1, RewardType2, SeedID, SeedLevel, SeedName, SeedPrice, SeedRemainCnt, SeedTotalCnt | ManorInfoWnd | ManorID, ManorName, MerchantOrChamberlain | ok |
| 2651 | EV_ManorInfoWndSeedAdd | 10153c40 | ManorID, ManorName, MerchantOrChamberlain, RewardType1, RewardType2, SeedID, SeedLevel, SeedName, SeedPrice, SeedRemainCnt, SeedTotalCnt | ManorInfoWnd | RewardType1, RewardType2, SeedID, SeedLevel, SeedName, SeedPrice, SeedRemainCnt, SeedTotalCnt | ok |
| 2652 | EV_ManorInfoWndCropShow | 10154170 | CropID, CropLevel, CropName, CropPrice, CropRemainCnt, CropTotalCnt, ManorID, ManorName, MerchantOrChamberlain, ProcureType, RewardType1, RewardType2 | ManorInfoWnd | ManorID, MerchantOrChamberlain | ok |
| 2653 | EV_ManorInfoWndCropAdd | 10154170 | CropID, CropLevel, CropName, CropPrice, CropRemainCnt, CropTotalCnt, ManorID, ManorName, MerchantOrChamberlain, ProcureType, RewardType1, RewardType2 | ManorInfoWnd | CropID, CropLevel, CropName, CropPrice, CropRemainCnt, CropTotalCnt, ProcureType, RewardType1, RewardType2 | ok |
| 2654 | EV_ManorInfoWndDefaultShow | 10154700 | CropID, CropLevel, CropName, CropPrice, MerchantOrChamberlain, RewardType1, RewardType2, SeedPrice | ManorInfoWnd | MerchantOrChamberlain | ok |
| 2655 | EV_ManorInfoWndDefaultAdd | 10154700 | CropID, CropLevel, CropName, CropPrice, MerchantOrChamberlain, RewardType1, RewardType2, SeedPrice | ManorInfoWnd | CropID, CropLevel, CropName, CropPrice, RewardType1, RewardType2, SeedPrice | ok |
| 2656 | EV_ManorSeedInfoSettingWndShow | 10154b60 | DefaultSeedPrice, ManorID, ManorName, MaxCropPrice, MaxSeedTotalCnt, MinCropPrice, NextSeedPrice, RewardType1, RewardType2, SeedID, SeedLevel, SeedName, TodayNextSeedTotalCnt, TodaySeedPrice, TodaySeedTotalCnt | ManorSeedInfoSettingWnd | ManorID, ManorName | ok |
| 2657 | EV_ManorSeedInfoSettingWndAddItem | 10154b60 | DefaultSeedPrice, ManorID, ManorName, MaxCropPrice, MaxSeedTotalCnt, MinCropPrice, NextSeedPrice, RewardType1, RewardType2, SeedID, SeedLevel, SeedName, TodayNextSeedTotalCnt, TodaySeedPrice, TodaySeedTotalCnt | ManorSeedInfoSettingWnd | DefaultSeedPrice, MaxCropPrice, MaxSeedTotalCnt, MinCropPrice, NextSeedPrice, RewardType1, RewardType2, SeedID, SeedLevel, SeedName, TodayNextSeedTotalCnt, TodaySeedPrice, TodaySeedTotalCnt | ok |
| 2658 | EV_ManorSeedInfoSettingWndAddItemEnd | 10154b60 | DefaultSeedPrice, ManorID, ManorName, MaxCropPrice, MaxSeedTotalCnt, MinCropPrice, NextSeedPrice, RewardType1, RewardType2, SeedID, SeedLevel, SeedName, TodayNextSeedTotalCnt, TodaySeedPrice, TodaySeedTotalCnt | ManorSeedInfoSettingWnd | — | ok |
| 2659 | EV_ManorSeedInfoSettingWndChangeValue | — | — | ManorSeedInfoSettingWnd | TomorrowPrice, TomorrowSalesVolume | — |
| 2660 | EV_ManorSeedInfoChangeWndShow | — | — | ManorSeedInfoChangeWnd | MaxCropPrice, MinCropPrice, SeedName, TomorrowLimit, TomorrowPrice, TomorrowVolumeOfSales | — |
| 2665 | EV_ManorCropInfoSettingWndShow | 101551b0 | CropID, CropLevel, CropName, DefaultCropPrice, ManorID, ManorName, MaxCropPrice, MaxCropTotalCnt, MinCropPrice, NextCropPrice, NextCropTotalCnt, NextProcureType, RewardType1, RewardType2, TodayCropPrice, TodayCropTotalCnt, TodayProcureType | ManorCropInfoSettingWnd | ManorID, ManorName | ok |
| 2666 | EV_ManorCropInfoSettingWndAddItem | 101551b0 | CropID, CropLevel, CropName, DefaultCropPrice, ManorID, ManorName, MaxCropPrice, MaxCropTotalCnt, MinCropPrice, NextCropPrice, NextCropTotalCnt, NextProcureType, RewardType1, RewardType2, TodayCropPrice, TodayCropTotalCnt, TodayProcureType | ManorCropInfoSettingWnd | CropID, CropLevel, CropName, DefaultCropPrice, MaxCropPrice, MaxCropTotalCnt, MinCropPrice, NextCropPrice, NextCropTotalCnt, NextProcureType, RewardType1, RewardType2, TodayCropPrice, TodayCropTotalCnt, TodayProcureType | ok |
| 2667 | EV_ManorCropInfoSettingWndAddItemEnd | 101551b0 | CropID, CropLevel, CropName, DefaultCropPrice, ManorID, ManorName, MaxCropPrice, MaxCropTotalCnt, MinCropPrice, NextCropPrice, NextCropTotalCnt, NextProcureType, RewardType1, RewardType2, TodayCropPrice, TodayCropTotalCnt, TodayProcureType | ManorCropInfoSettingWnd | — | ok |
| 2668 | EV_ManorCropInfoSettingWndChangeValue | — | — | ManorCropInfoSettingWnd | TomorrowAmountOfPurchase, TomorrowProcure, TomorrowPurchasePrice | — |
| 2670 | EV_ManorCropInfoChangeWndShow | — | — | ManorCropInfoChangeWnd | CropName, MaxCropPrice, MinCropPrice, TomorrowLimit, TomorrowPrice, TomorrowProcure, TomorrowVolumeOfBuy | — |
| 2680 | EV_ManorShopWndOpen | 10152970 10152ba0 | adena, buy, merchant, sell, type | ManorShopWnd | — | ok |
| 2690 | EV_ManorShopWndAddItem | 10152ae0 10152d40 | — | ManorShopWnd | — | ok |
| 2700 | EV_DuelAskStart | 1015ca70 | type, userName | DuelManager | type, userName | ok |
| 2710 | EV_DuelReady | 1015cb90 | type | DuelManager | — | ok |
| 2720 | EV_DuelStart | 1015cc50 | type | DuelManager | — | ok |
| 2730 | EV_DuelEnd | 1015cd10 | type | DuelManager | — | ok |
| 2740 | EV_DuelUpdateUserInfo | 1015cdd0 | ID, class, currentCP, currentHP, currentMP, level, maxCP, maxHP, maxMP, userName | DuelManager | ID, class, currentCP, currentHP, currentMP, level, maxCP, maxHP, maxMP, userName | ok |
| 2750 | EV_DuelEnemyRelation | 1015d090 | bEnemy, id, userName | DuelManager | — | ok |
| 2760 | EV_ShowRefineryInteface | 10161be0 | — | RefineryWnd | — | ok |
| 2770 | EV_RefineryConfirmTargetItemResult | 10161d40 | Result, TargetItemClassID, TargetItemServerID | RefineryWnd | Result, TargetItemClassID, TargetItemServerID | ok |
| 2780 | EV_RefineryConfirmRefinerItemResult | 10161e80 | GemStoneClassID, GemStoneCount, RefinerItemClassID, RefinerItemServerID, Result | RefineryWnd | GemStoneClassID, GemStoneCount, RefinerItemClassID, RefinerItemServerID, Result | ok |
| 2790 | EV_RefineryConfirmGemStoneResult | 10162020 | GemStoneClassID, GemStoneCount, GemStoneServerID, NecessaryGemStoneCount, Result | RefineryWnd | GemStoneClassID, GemStoneCount, GemStoneServerID, NecessaryGemStoneCount, Result | ok |
| 2800 | EV_RefineryRefineResult | 101621c0 | Option1, Option2, Result | RefineryWnd | Option1, Option2, Result | ok |
| 2810 | EV_ShowRefineryCancelInteface | 10161c90 | — | UnrefineryWnd | — | ok |
| 2820 | EV_RefineryConfirmCancelItemResult | 10162300 | Adena, CancelItemClassID, CancelItemServerID, Option1, Option2, Result | UnrefineryWnd | Adena, CancelItemClassID, CancelItemServerID, Option1, Option2, Result | ok |
| 2830 | EV_RefineryRefineCancelResult | 101624d0 | Result | UnrefineryWnd | Result | ok |
| 2840 | EV_QuestInfoStart | 1016b0a0 | QuestDecription, QuestID, QuestLevel, QuestName, QuestNpcName, QuestRequirement, QuestType | QuestListWnd | — | ok |
| 2850 | EV_QuestInfo | 1016b0a0 | QuestDecription, QuestID, QuestLevel, QuestName, QuestNpcName, QuestRequirement, QuestType | QuestListWnd | QuestDecription, QuestID, QuestLevel, QuestName, QuestNpcName, QuestRequirement, QuestType | ok |
| 2860 | EV_EnchantShow | 10151d30 | ClassID | ItemEnchantWnd | — | ok |
| 2870 | EV_EnchantHide | — | — | ItemEnchantWnd | — | — |
| 2880 | EV_EnchantItemList | 10151d30 10151d30 | ClassID | ItemEnchantWnd | — | ok |
| 2890 | EV_EnchantResult | 10152070 | Result | ItemEnchantWnd | — | ok |
| 2900 | EV_ResolutionChanged | 10161a20 | NewHeight, NewWidth | MinimapWnd_Expand, TeaserSlideWnd | NewHeight, NewWidth | ok |
| 2910 | EV_PawnViewerWndAddItem | 1016e410 | TabNum | — | — | ok |
| 2920 | EV_RequestTooltipInfo | 101b8ab0 101b8d20 101b8f10 101b90f0 | Description, ID, MaxColumn, SourceType, Text, TooltipType, nReserved1, nReserved2, nReserved3, szReserved | ToolTip | SourceType, TooltipType | ok |
| 3000 | EV_ShowPlaySceneInterface | 10161b30 | — | TeaserSlideWnd | — | ok |
