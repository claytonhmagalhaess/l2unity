# Cobertura dos pacotes recebidos (C)

Gerado por `ReceivedPacketTests.CoberturaDosRecebidos` a partir de `Golden/received.json` (`out/re/game_map.json`).

- UI: 198 no original, 97 tratados no Unity
- UI nativa (C++, sem EV_): 61 no original, 34 tratados no Unity
- mundo/engine: 57 no original, 23 tratados no Unity
- ignorado: 28 no original, 0 tratados no Unity
- dados: 7 no original, 4 tratados no Unity
- log: 6 no original, 2 tratados no Unity
- rede: 2 no original, 2 tratados no Unity
- sem tratador: 1 no original, 0 tratados no Unity
- debug: 1 no original, 0 tratados no Unity

| tabela | opcode | nome no cliente | aCis | efeito | eventos | Unity |
|---|---|---|---|---|---|---|
| ex | 0x00 | ExDummyPacket |  | sem tratador |  | falta |
| ex | 0x01 |  | ExRegenMax | UI | EV_RegenStatus | tratado |
| ex | 0x02 | ExEventMatchListPacket |  | ignorado |  | ignorado (igual) |
| ex | 0x03 | ExEventMatchObserverPacket |  | UI | EV_EventMatchUpdateTeamName, EV_StartEventMatchObserver | falta |
| ex | 0x04 | ExEventMatchMessagePacket |  | UI | EV_EventMatchGMMessage | falta |
| ex | 0x05 | ExEventMatchScorePacket |  | UI | EV_EventMatchUpdateScore | falta |
| ex | 0x06 | ExEventMatchTeamInfoPacket |  | UI | EV_EventMatchUpdateTeamInfo | falta |
| ex | 0x07 | ExEventMatchCreatePacket |  | UI | EV_EventMatchCreated | falta |
| ex | 0x08 | ExEventMatchUserInfoPacket |  | UI | EV_EventMatchUpdateUserInfo | falta |
| ex | 0x09 | ExColosseumFenceInfoPacket | ExColosseumFenceInfo | mundo/engine |  | falta |
| ex | 0x0a | ExEventMatchSpelledInfoPacket |  | UI | EV_EventMatchUpdateUserInfo | falta |
| ex | 0x0b | ExEventMatchFirecrackerPacket |  | mundo/engine |  | falta |
| ex | 0x0c | ExEventMatchTeamUnlockedPacket |  | UI nativa (C++, sem EV_) |  | falta |
| ex | 0x0d | ExEventMatchGMTestPacket |  | UI | EV_ShowEventMatchGMWnd | falta |
| ex | 0x0e | ExPartyRoomMemberPacket | ExPartyRoomMember | UI | EV_PartyMatchRoomMember | falta |
| ex | 0x0f | ExClosePartyRoomPacket | ExClosePartyRoom | UI | EV_PartyMatchRoomClose | falta |
| ex | 0x10 | ExManagePartyRoomMemberPacket | ExManagePartyRoomMember | UI | EV_PartyMatchRoomMemberUpdate | falta |
| ex | 0x11 | ExEventMatchLockResult |  | ignorado |  | ignorado (igual) |
| ex | 0x12 | ExAutoSoulShot | ExAutoSoulShot | UI nativa (C++, sem EV_) |  | tratado |
| ex | 0x13 | ExFishingStartPacket | ExFishingStart | UI | EV_FishRankEventButtonHide, EV_FishViewportWndShow | falta |
| ex | 0x14 | ExFishingEndPacket | ExFishingEnd | UI | EV_PetitionChatMessage, EV_ShowPetitionWnd, EV_SystemMessage | falta |
| ex | 0x15 | ExFishingStartCombatPacket | ExFishingStartCombat | UI | EV_PetitionChatMessage, EV_ShowPetitionWnd, EV_SystemMessage | falta |
| ex | 0x16 | ExFishingHpRegenPacket | ExFishingHpRegen | UI | EV_PetitionChatMessage, EV_ShowPetitionWnd, EV_SystemMessage | falta |
| ex | 0x17 | ExEnchantSkillListPacket | ExEnchantSkillList | UI | EV_SkillTrainListWndAddSkill, EV_SkillTrainListWndShow | falta |
| ex | 0x18 | ExEnchantSkillInfoPacket | ExEnchantSkillInfo | UI | EV_SkillTrainInfoWndAddExtendInfo, EV_SkillTrainInfoWndShow | falta |
| ex | 0x19 | ExShowQuestInfoPacket | ExQuestInfo | UI | EV_QuestInfo, EV_QuestInfoStart | falta |
| ex | 0x1a | ExShowQuestMarkPacket | ExShowQuestMark | UI | EV_ArriveShowQuest | falta |
| ex | 0x1b | ExSendManorListPacket | ExSendManorList | UI nativa (C++, sem EV_) |  | falta |
| ex | 0x1c | ExShowSeedInfoPacket | ExShowSeedInfo | UI | EV_ManorInfoWndSeedAdd, EV_ManorInfoWndSeedShow | falta |
| ex | 0x1d | ExShowCropInfoPacket | ExShowCropInfo | UI | EV_ManorInfoWndCropAdd, EV_ManorInfoWndCropShow | falta |
| ex | 0x1e | ExShowManorDefaultInfoPacket | ExShowManorDefaultInfo | UI | EV_ManorInfoWndDefaultAdd, EV_ManorInfoWndDefaultShow | falta |
| ex | 0x1f | ExShowSeedSettingPacket | ExShowSeedSetting | UI | EV_ManorSeedInfoSettingWndAddItem, EV_ManorSeedInfoSettingWndAddItemEnd, EV_ManorSeedInfoSettingWndShow | falta |
| ex | 0x20 | ExShowCropSettingPacket | ExShowCropSetting | UI | EV_ManorCropInfoSettingWndAddItem, EV_ManorCropInfoSettingWndAddItemEnd, EV_ManorCropInfoSettingWndShow | falta |
| ex | 0x21 | ExShowSellCropListPacket | ExShowSellCropList | UI | EV_ManorCropSellWndAddItem, EV_ManorCropSellWndShow | falta |
| ex | 0x22 | ExShowProcureCropDetailPacket | ExShowProcureCropDetail | UI | EV_ManorCropSellChangeWndAddItem, EV_ManorCropSellChangeWndShow | falta |
| ex | 0x23 | ExHeroListPacket | ExHeroList | UI | EV_HeroShowList | falta |
| ex | 0x24 | ExServerPrimitivePacket | ExServerPrimitive | debug |  | falta |
| ex | 0x25 | ExOpenMPCCPacket | ExOpenMPCC | UI | EV_CommandChannelStart | falta |
| ex | 0x26 | ExCloseMPCCPacket | ExCloseMPCC | UI | EV_CommandChannelEnd | falta |
| ex | 0x27 | ExAskJoinMPCCPacket | ExAskJoinMPCC | UI nativa (C++, sem EV_) |  | falta |
| ex | 0x28 | ExPledgeCrestLargePacket | ExPledgeCrestLarge | mundo/engine |  | falta |
| ex | 0x29 | ExOlympiadUserInfoPacket | ExOlympiadUserInfo | UI | EV_OlympiadUserInfo | falta |
| ex | 0x2a | ExOlympiadSpelledInfoPacket | ExOlympiadSpelledInfo | UI | EV_OlympiadBuffInfo | falta |
| ex | 0x2b | ExOlympiadModePacket | ExOlympiadMode | UI | EV_OlympiadMatchEnd, EV_OlympiadTargetShow | falta |
| ex | 0x2c | ExOlympiadMatchEndPacket | ExOlympiadMatchEnd | UI | EV_OlympiadMatchEnd | falta |
| ex | 0x2d | ExMailArrivedPacket | ExMailArrived | UI | EV_ArriveNewMail | falta |
| ex | 0x2e | ExStorageMaxCountPacket | ExStorageMaxCount | UI | EV_SetMaxCount | tratado |
| ex | 0x2f | ExEventMatchManagePacket |  | UI | EV_EventMatchManage | falta |
| ex | 0x30 | ExMultiPartyCommandChannelInfoPacket | ExMultiPartyCommandChannelInfo | UI | EV_CommandChannelInfo, EV_CommandChannelPartyList | falta |
| ex | 0x31 | ExPCCafePointInfoPacket | ExPCCafePointInfo | UI | EV_PCCafePointInfo | falta |
| ex | 0x32 | ExSetCompassZoneCode | ExSetCompassZoneCode | UI | EV_SetRadarZoneCode | falta |
| ex | 0x33 | ExGetBossRecord | ExGetBossRecord | UI | EV_RaidRecord | falta |
| ex | 0x34 | ExAskJoinPartyRoom | ExAskJoinPartyRoom | UI nativa (C++, sem EV_) |  | falta |
| ex | 0x35 | ExListPartyMatchingWaitingRoom | ExListPartyMatchingWaitingRoom | UI | EV_PartyMatchWaitList, EV_PartyMatchWaitListStart | falta |
| ex | 0x36 | ExSetMpccRouting |  | UI | EV_CommandChannelRoutingType | falta |
| ex | 0x37 | ExShowAdventurerGuideBook | ExShowAdventurerGuideBook | UI | EV_ShowGuideWnd | falta |
| ex | 0x38 | ExShowScreenMessage | ExShowScreenMessage | UI | EV_ShowScreenMessage | falta |
| ex | 0x39 | PledgeSkillListPacket | PledgeSkillList | UI | EV_ClanSkillList | tratado |
| ex | 0x3a | PledgeSkillListAddPacket | PledgeSkillListAdd | UI | EV_ClanSkillListAdd | tratado |
| ex | 0x3b | PledgePowerGradeList | PledgePowerGradeList | UI | EV_ClanAuthGradeList | tratado |
| ex | 0x3c | PledgeReceivePowerInfo | PledgeReceivePowerInfo | UI | EV_ClanAuthMember | tratado |
| ex | 0x3d | PledgeReceiveMemberInfo | PledgeReceiveMemberInfo | UI | EV_ClanMemberInfo | tratado |
| ex | 0x3e | PledgeReceiveWarList | PledgeReceiveWarList | UI | EV_ClanWarList | tratado |
| ex | 0x3f | PledgeReceiveSubPledgeCreated | PledgeReceiveSubPledgeCreated | UI | EV_ClanSubClanUpdated | tratado |
| ex | 0x40 | ExRedSkyPacket | ExRedSky | mundo/engine |  | falta |
| ex | 0x41 | PledgeReceiveUpdatePower |  | UI | EV_ClanMyAuth | falta |
| ex | 0x42 | FlySelfDestinationPacket |  | mundo/engine |  | falta |
| ex | 0x43 | ShowPCCafeCouponShowUI | ShowPCCafeCouponShowUI | UI | EV_ShowPCCafeCouponUI | falta |
| ex | 0x44 | ExSearchOrc | ExOrcMove | mundo/engine |  | falta |
| ex | 0x45 | ExCursedWeaponList | ExCursedWeaponList | UI | EV_MinimapCursedWeaponList | tratado |
| ex | 0x46 | ExCursedWeaponLocation | ExCursedWeaponLocation | UI | EV_MinimapCursedWeaponLocation | tratado |
| ex | 0x47 | ExRestartClient | ExRestartClient | UI nativa (C++, sem EV_) |  | falta |
| ex | 0x48 | ExRequestHackShield | ExRequestHackShield | log |  | falta |
| ex | 0x49 | ExUseSharedGroupItem | ExUseSharedGroupItem | UI nativa (C++, sem EV_) |  | falta |
| ex | 0x4a | ExMPCCShowPartyMemberInfo | ExMPCCShowPartyMemberInfo | UI | EV_CommandChannelPartyMember | falta |
| ex | 0x4b | ExDuelAskStart | ExDuelAskStart | UI | EV_DuelAskStart | tratado |
| ex | 0x4c | ExDuelReady | ExDuelReady | UI | EV_DuelReady | falta |
| ex | 0x4d | ExDuelStart | ExDuelStart | UI | EV_DuelStart | falta |
| ex | 0x4e |  | ExDuelEnd | UI | EV_DuelEnd | falta |
| ex | 0x4f | ExDuelUpdateUserInfo | ExDuelUpdateUserInfo | UI | EV_DuelUpdateUserInfo | falta |
| ex | 0x50 | ExShowVariationMakeWindow | ExShowVariationMakeWindow | UI | EV_ShowRefineryInteface | tratado |
| ex | 0x51 | ExShowVariationCancelWindow | ExShowVariationCancelWindow | UI | EV_ShowRefineryCancelInteface | tratado |
| ex | 0x52 | ExPutItemResultForVariationMake | ExConfirmVariationItem | UI | EV_RefineryConfirmTargetItemResult | tratado |
| ex | 0x53 | ExPutIntensiveResultForVariationMake | ExConfirmVariationRefiner | UI | EV_RefineryConfirmRefinerItemResult | tratado |
| ex | 0x54 | ExPutCommissionResultForVariationMake | ExConfirmVariationGemstone | UI | EV_RefineryConfirmGemStoneResult | tratado |
| ex | 0x55 | ExVariationResult | ExVariationResult | UI | EV_RefineryRefineResult | tratado |
| ex | 0x56 | ExPutItemResultForVariationCancel | ExConfirmCancelItem | UI | EV_RefineryConfirmCancelItemResult | tratado |
| ex | 0x57 | ExVariationCancelResult | ExVariationCancelResult | UI | EV_RefineryRefineCancelResult | tratado |
| ex | 0x58 | ExDuelEnemyRelation | ExDuelEnemyRelation | ignorado |  | ignorado (igual) |
| ex | 0x59 | ExPlayAnimation |  | mundo/engine |  | falta |
| ex | 0x5a | ExMPCCPartyInfoUpdate | ExMPCCPartyInfoUpdate | UI | EV_CommandChannelPartyUpdate | falta |
| ex | 0x5b | ExPlayScene | ExPlayScene | UI | EV_ShowPlaySceneInterface | falta |
| ex | 0x5c | ExNeedToChangeName |  | UI nativa (C++, sem EV_) |  | falta |
| game | 0x00 | VersionCheckPacket | KeyPacket | UI nativa (C++, sem EV_) |  | tratado |
| game | 0x01 |  | MoveToLocation | mundo/engine |  | tratado |
| game | 0x02 | NSPacket | NpcSay | UI | EV_ChatMessage, EV_PartyMatchChatMessage, EV_PetitionChatMessage, EV_ShowPetitionWnd | falta |
| game | 0x03 | CIPacket | CharInfo | UI | EV_FishRankEventButtonHide, EV_FishViewportWndShow | tratado |
| game | 0x04 | UIPacket | UserInfo | UI | EV_ChatWndStatusChange, EV_ClanMyAuth, EV_FishRankEventButtonHide, EV_FishViewportWndShow, EV_UpdateUserInfo | tratado |
| game | 0x05 | AttackPacket | Attack | UI | EV_ReceiveAttack | tratado |
| game | 0x06 | DiePacket | Die | UI | EV_Die | tratado |
| game | 0x07 | RevivePacket | Revive | UI | EV_RestartMenuHide | tratado |
| game | 0x08 | AttackOutofRangePacket |  | mundo/engine |  | tratado |
| game | 0x09 | AttackinCoolTimePacket |  | mundo/engine |  | tratado |
| game | 0x0a | AttackDeadTargetPacket |  | mundo/engine |  | tratado |
| game | 0x0b | SpawnItemPacket | SpawnItem | mundo/engine |  | tratado |
| game | 0x0c | DropItemPacket | DropItem | mundo/engine |  | tratado |
| game | 0x0d | GetItemPacket | GetItem | UI nativa (C++, sem EV_) |  | tratado |
| game | 0x0e | StatusUpdatePacket | StatusUpdate | UI | EV_UpdateCP, EV_UpdateHP, EV_UpdateMP, EV_UpdateMaxCP, EV_UpdateMaxHP, EV_UpdateMaxMP | tratado |
| game | 0x0f | NpcHtmlMessagePacket | NpcHtmlMessage | UI nativa (C++, sem EV_) |  | tratado |
| game | 0x10 | SellListPacket | SellList | UI | EV_InventoryHideWindow, EV_ShopAddItem, EV_ShopOpenWindow | tratado |
| game | 0x11 | BuyListPacket | BuyList | UI | EV_ShopAddItem, EV_ShopOpenWindow | tratado |
| game | 0x12 | DeleteObjectPacket | DeleteObject | UI | EV_PetSummonedStatusClose | tratado |
| game | 0x13 | CharacterSelectionInfoPacket | CharSelectInfo | UI nativa (C++, sem EV_) |  | tratado |
| game | 0x14 | LoginFailPacket | AuthLoginFail | ignorado |  | ignorado (igual) |
| game | 0x15 | CharacterSelectedPacket | CharSelected | UI nativa (C++, sem EV_) |  | tratado |
| game | 0x16 | NpcInfoPacket | AbstractNpcInfo | UI nativa (C++, sem EV_) |  | tratado |
| game | 0x17 | NewCharacterSuccessPacket | CharTemplates | UI nativa (C++, sem EV_) |  | falta |
| game | 0x18 | NewCharacterFailPacket |  | UI nativa (C++, sem EV_) |  | falta |
| game | 0x19 | CharacterCreateSuccessPacket | CharCreateOk | UI nativa (C++, sem EV_) |  | tratado |
| game | 0x1a | CharacterCreateFailPacket | CharCreateFail | UI nativa (C++, sem EV_) |  | tratado |
| game | 0x1b | ItemListPacket | ItemList | UI | EV_InventoryAddItem, EV_InventoryClear, EV_InventoryItemListEnd, EV_InventoryOpenWindow, EV_ShortcutUpdate | tratado |
| game | 0x1c | SunRisePacket | SunRise | mundo/engine |  | falta |
| game | 0x1d | SunSetPacket | SunSet | mundo/engine |  | falta |
| game | 0x1e | TradeStartPacket | TradeStart | UI | EV_InventoryHideWindow, EV_TradeAddItem, EV_TradeStart | tratado |
| game | 0x1f | TradeStartOkPacket |  | ignorado |  | ignorado (igual) |
| game | 0x20 | TradeOwnAddPacket | TradeOwnAdd | UI | EV_TradeAddItem | tratado |
| game | 0x21 | TradeOtherAddPacket | TradeOtherAdd | UI | EV_TradeAddItem | tratado |
| game | 0x22 | TradeDonePacket | SendTradeDone | UI | EV_TradeDone | tratado |
| game | 0x23 | CharacterDeleteSuccessPacket | CharDeleteOk | UI nativa (C++, sem EV_) |  | falta |
| game | 0x24 | CharacterDeleteFailPacket | CharDeleteFail | UI nativa (C++, sem EV_) |  | falta |
| game | 0x25 | ActionFailPacket | ActionFailed | mundo/engine |  | tratado |
| game | 0x26 | SeverClosePacket | ServerClose | UI nativa (C++, sem EV_) |  | falta |
| game | 0x27 | InventoryUpdatePacket | InventoryUpdate | UI | EV_InventoryUpdateItem, EV_ShortcutUpdate | tratado |
| game | 0x28 | TeleportToLocationPacket | TeleportToLocation | mundo/engine |  | tratado |
| game | 0x29 | TargetSelectedPacket | TargetSelected | UI nativa (C++, sem EV_) |  | tratado |
| game | 0x2a | TargetUnselectedPacket | TargetUnselected | mundo/engine |  | tratado |
| game | 0x2b | AutoAttackStartPacket | AutoAttackStart | mundo/engine |  | tratado |
| game | 0x2c | AutoAttackStopPacket | AutoAttackStop | mundo/engine |  | tratado |
| game | 0x2d | SocialActionPacket | SocialAction | mundo/engine |  | falta |
| game | 0x2e | ChangeMoveTypePacket | ChangeMoveType | mundo/engine |  | tratado |
| game | 0x2f | ChangeWaitTypePacket | ChangeWaitType | mundo/engine |  | tratado |
| game | 0x30 | ManagePledgePowerPacket | ManagePledgePower | UI | EV_ClanAuth | tratado |
| game | 0x31 | CreatePledgePacket |  | UI | EV_ChatMessage, EV_SystemMessage | falta |
| game | 0x32 | AskJoinPledgePacket | AskJoinPledge | UI nativa (C++, sem EV_) |  | tratado |
| game | 0x33 | JoinPledgePacket | JoinPledge | UI | EV_ChatMessage, EV_SystemMessage | falta |
| game | 0x34 | WithdrawalPledgePacket |  | UI | EV_ChatMessage, EV_SystemMessage | falta |
| game | 0x35 | OustPledgeMemberPacket |  | UI | EV_ChatMessage, EV_SystemMessage | falta |
| game | 0x36 | SetOustPledgeMemberPacket |  | UI | EV_ChatMessage, EV_SystemMessage | falta |
| game | 0x37 | DismissPledgePacket |  | UI | EV_ChatMessage, EV_SystemMessage | falta |
| game | 0x38 | SetDismissPledgePacket |  | UI | EV_ChatMessage, EV_SystemMessage | falta |
| game | 0x39 | AskJoinPartyPacket | AskJoinParty | UI nativa (C++, sem EV_) |  | tratado |
| game | 0x3a | JoinPartyPacket | JoinParty | UI | EV_ChatMessage, EV_SystemMessage | tratado |
| game | 0x3b | WithdrawalPartyPacket |  | UI | EV_ChatMessage, EV_SystemMessage | falta |
| game | 0x3c | OustPartyMemberPacket |  | UI | EV_ChatMessage, EV_SystemMessage | falta |
| game | 0x3d | SetOustPartyMemberPacket |  | UI | EV_ChatMessage, EV_SystemMessage | falta |
| game | 0x3e | DismissPartyPacket |  | UI | EV_ChatMessage, EV_SystemMessage | falta |
| game | 0x3f | SetDismissPartyPacket |  | UI | EV_ChatMessage, EV_SystemMessage | falta |
| game | 0x40 | MagicAndSkillList |  | UI nativa (C++, sem EV_) |  | falta |
| game | 0x41 | WareHouseDepositListPacket | WarehouseDepositList | UI | EV_InventoryHideWindow, EV_WarehouseAddItem, EV_WarehouseOpenWindow | tratado |
| game | 0x42 | WareHouseWithdrawListPacket | WarehouseWithdrawList | UI | EV_WarehouseAddItem, EV_WarehouseOpenWindow | tratado |
| game | 0x43 | WareHouseDonePacket |  | UI | EV_ChatMessage, EV_SystemMessage | falta |
| game | 0x44 | ShortCutRegisterPacket | ShortCutRegister | UI | EV_ShortcutUpdate | tratado |
| game | 0x45 | ShortCutInitPacket | ShortCutInit | UI | EV_ShortcutClear, EV_ShortcutUpdate | tratado |
| game | 0x46 | ShortCutDeletePacket | ShortCutDelete | UI nativa (C++, sem EV_) |  | tratado |
| game | 0x47 | StopMovePacket | StopMove | mundo/engine |  | tratado |
| game | 0x48 | MagicSkillUse | MagicSkillUse | UI nativa (C++, sem EV_) |  | tratado |
| game | 0x49 | MagicSkillCanceled | MagicSkillCanceled | UI nativa (C++, sem EV_) |  | tratado |
| game | 0x4a | SayPacket2 | CreatureSay | UI | EV_ChatMessage, EV_PartyMatchChatMessage, EV_PetitionChatMessage, EV_ShowPetitionWnd | tratado |
| game | 0x4b | EquipUpdatePacket | EquipUpdate | UI nativa (C++, sem EV_) |  | falta |
| game | 0x4c | DoorInfoPacket | DoorInfo | mundo/engine |  | tratado |
| game | 0x4d | DoorStatusUpdatePacket | DoorStatusUpdate | UI | EV_TargetUpdate | tratado |
| game | 0x4e |  | PartySmallWindowAll | UI | EV_ChatWndStatusChange, EV_PartyAddParty, EV_PartyMemberChanged | tratado |
| game | 0x4f | PartySmallWindowAddPacket | PartySmallWindowAdd | UI | EV_ChatWndStatusChange, EV_PartyAddParty, EV_PartyMemberChanged | tratado |
| game | 0x50 | PartySmallWindowDeleteAllPacket | PartySmallWindowDeleteAll | UI | EV_ChatWndStatusChange, EV_PartyDeleteAllParty, EV_PartyMemberChanged | tratado |
| game | 0x51 | PartySmallWindowDeletePacket | PartySmallWindowDelete | UI | EV_PartyDeleteParty, EV_PartyMemberChanged | tratado |
| game | 0x52 | PartySmallWindowUpdatePacket | PartySmallWindowUpdate | UI | EV_PartyUpdateParty | tratado |
| game | 0x53 | PledgeShowMemberListAllPacket | PledgeShowMemberListAll | UI | EV_ClanAddMemberMultiple, EV_ClanInfo | tratado |
| game | 0x54 | PledgeShowMemberListUpdatePacket | PledgeShowMemberListUpdate | UI | EV_ClanMemberInfoUpdate | tratado |
| game | 0x55 | PledgeShowMemberListAddPacket | PledgeShowMemberListAdd | UI | EV_ClanAddMember | tratado |
| game | 0x56 | PledgeShowMemberListDeletePacket | PledgeShowMemberListDelete | UI | EV_ClanDeleteMember | tratado |
| game | 0x57 | MagicListPacket |  | ignorado |  | ignorado (igual) |
| game | 0x58 | SkillListPacket | SkillList | UI | EV_SkillList, EV_SkillListStart | tratado |
| game | 0x59 | VehicleInfoPacket | VehicleInfo | mundo/engine |  | falta |
| game | 0x5a | VehicleDeparturePacket | VehicleDeparture | mundo/engine |  | falta |
| game | 0x5b | VehicleCheckLocationPacket | OnVehicleCheckLocation | log |  | falta |
| game | 0x5c | GetOnVehiclePacket | GetOnVehicle | mundo/engine |  | falta |
| game | 0x5d | GetOffVehiclePacket | GetOffVehicle | mundo/engine |  | falta |
| game | 0x5e | TradeRequestPacket | SendTradeRequest | UI | EV_TradeRequestStartExchange | tratado |
| game | 0x5f | RestartResponsePacket | RestartResponse | UI | EV_ObserverWndHide, EV_Restart | tratado |
| game | 0x60 | MoveToPawnPacket | MoveToPawn | mundo/engine |  | tratado |
| game | 0x61 | ValidateLocationPacket | ValidateLocation | mundo/engine |  | tratado |
| game | 0x62 | StartRotatingPacket | StartRotation | mundo/engine |  | tratado |
| game | 0x63 | FinishRotatingPacket | StopRotation | mundo/engine |  | tratado |
| game | 0x64 | SystemMessagePacket | SystemMessage | UI | EV_ChatMessage, EV_PetitionChatMessage, EV_ShowPetitionWnd, EV_SystemMessage | tratado |
| game | 0x65 | StartPledgeWarPacket | StartPledgeWar | ignorado |  | ignorado (igual) |
| game | 0x66 | ReplyStartPledgeWarPacket |  | ignorado |  | ignorado (igual) |
| game | 0x67 | StopPledgeWarPacket | StopPledgeWar | ignorado |  | ignorado (igual) |
| game | 0x68 | ReplyStopPledgeWarPacket |  | ignorado |  | ignorado (igual) |
| game | 0x69 | SurrenderPledgeWarPacket | SurrenderPledgeWar | ignorado |  | ignorado (igual) |
| game | 0x6a | ReplySurrenderPledgeWarPacket |  | ignorado |  | ignorado (igual) |
| game | 0x6b | SetPledgeCrestPacket |  | ignorado |  | ignorado (igual) |
| game | 0x6c | PledgeCrestPacket | PledgeCrest | mundo/engine |  | falta |
| game | 0x6d | SetupGaugePacket | SetupGauge | mundo/engine |  | tratado |
| game | 0x6e | ShowBoardPacket | ShowBoard | UI | EV_ShowBoardPacket | tratado |
| game | 0x6f | ChooseInventoryItemPacket | ChooseInventoryItem | UI | EV_EnchantItemList, EV_EnchantShow | tratado |
| game | 0x70 | DummyPacket |  | log |  | falta |
| game | 0x71 | MoveToLocationInVehiclePacket | MoveToLocationInVehicle | mundo/engine |  | falta |
| game | 0x72 | StopMoveInVehiclePacket | StopMoveInVehicle | mundo/engine |  | falta |
| game | 0x73 | ValidateLocationInVehiclePacket | ValidateLocationInVehicle | mundo/engine |  | falta |
| game | 0x74 | TradeUpdatePacket | TradeItemUpdate | UI | EV_TradeUpdateInventoryItem | falta |
| game | 0x75 | TradePressOwnOkPacket | TradePressOwnOk | ignorado |  | ignorado (igual) |
| game | 0x76 | MagicSkillLaunchedPacket | MagicSkillLaunched | UI nativa (C++, sem EV_) |  | tratado |
| game | 0x77 | FriendAddRequestResult |  | UI | EV_ChatMessage, EV_SystemMessage | falta |
| game | 0x78 | FriendAdd |  | ignorado |  | ignorado (igual) |
| game | 0x79 | FriendRemove |  | ignorado |  | ignorado (igual) |
| game | 0x7a | FriendList |  | ignorado |  | ignorado (igual) |
| game | 0x7b | FriendStatus | FriendStatus | ignorado |  | ignorado (igual) |
| game | 0x7c | TradePressOtherOkPacket | TradePressOtherOk | UI | EV_TradeOtherOK | tratado |
| game | 0x7d | FriendAddRequest | FriendAddRequest | UI nativa (C++, sem EV_) |  | tratado |
| game | 0x7e | LogOutOkPacket | LeaveWorld | UI nativa (C++, sem EV_) |  | tratado |
| game | 0x7f | AbnormalStatusUpdatePacket | AbnormalStatusUpdate | UI | EV_AbnormalStatusNormalItem | tratado |
| game | 0x80 | QuestListPacket | QuestList | UI | EV_QuestListEnd, EV_QuestListStart | tratado |
| game | 0x81 | EnchantResultPacket | EnchantResult | UI | EV_EnchantResult | tratado |
| game | 0x82 | PledgeShowMemberListDeleteAllPacket | PledgeShowMemberListDeleteAll | UI | EV_ClanDeleteAllMember | tratado |
| game | 0x83 | PledgeInfoPacket | PledgeInfo | dados |  | falta |
| game | 0x84 | PledgeExtendedInfoPacket |  | UI nativa (C++, sem EV_) |  | falta |
| game | 0x85 | SurrenderPersonallyPacket |  | ignorado |  | ignorado (igual) |
| game | 0x86 | RidePacket | Ride | mundo/engine |  | falta |
| game | 0x87 | DummyPacket |  | log |  | falta |
| game | 0x88 | PledgeShowInfoUpdatePacket | PledgeShowInfoUpdate | UI | EV_ClanInfoUpdate | tratado |
| game | 0x89 | ClientActionPacket |  | UI nativa (C++, sem EV_) |  | falta |
| game | 0x8a | AcquireSkillListPacket | AcquireSkillList | UI | EV_SkillTrainListWndAddSkill, EV_SkillTrainListWndShow | tratado |
| game | 0x8b | AcquireSkillInfoPacket | AcquireSkillInfo | UI | EV_SkillTrainInfoWndAddExtendInfo, EV_SkillTrainInfoWndShow | tratado |
| game | 0x8c | ServerObjectInfoPacket | ServerObjectInfo | mundo/engine |  | falta |
| game | 0x8d | GMHidePacket |  | mundo/engine |  | falta |
| game | 0x8e | AcquireSkillDonePacket |  | UI | EV_SkillTrainInfoWndHide, EV_SkillTrainListWndHide | tratado |
| game | 0x8f | GMViewCharacterInfoPacket | GMViewCharacterInfo | UI | EV_GMObservingUserInfoUpdate | falta |
| game | 0x90 | GMViewPledgeInfoPacket | GMViewPledgeInfo | UI | EV_GMObservingClan, EV_GMObservingClanMember, EV_GMObservingClanMemberStart | falta |
| game | 0x91 | GMViewSkillInfoPacket | GMViewSkillInfo | UI | EV_GMObservingSkillList, EV_GMObservingSkillListStart | falta |
| game | 0x92 | GMViewMagicInfoPacket |  | UI nativa (C++, sem EV_) |  | falta |
| game | 0x93 | GMViewQuestInfoPacket | GMViewQuestList | UI | EV_GMObservingQuestItem, EV_GMObservingQuestList, EV_GMObservingQuestListEnd, EV_GMObservingQuestListStart | falta |
| game | 0x94 | GMViewItemListPacket | GMViewItemList | UI | EV_GMObservingInventoryAddItem, EV_GMObservingInventoryClear | falta |
| game | 0x95 | GMViewWarehouseWithdrawListPacket | GMViewWarehouseWithdrawList | UI | EV_GMObservingWarehouseItemList, EV_GMObservingWarehouseItemListStart | falta |
| game | 0x96 | ListPartyWatingPacket | PartyMatchList | UI | EV_PartyMatchList, EV_PartyMatchStart | falta |
| game | 0x97 | PartyRoomInfoPacket | PartyMatchDetail | UI | EV_PartyMatchRoomStart | falta |
| game | 0x98 | PlaySoundPacket | PlaySound | mundo/engine |  | falta |
| game | 0x99 | StaticObjectPacket | StaticObjectInfo | mundo/engine |  | tratado |
| game | 0x9a | PrivateStoreManageList | PrivateStoreManageListSell | UI | EV_PrivateShopAddItem, EV_PrivateShopOpenWindow | tratado |
| game | 0x9b | PrivateStoreList | PrivateStoreListSell | UI | EV_PrivateShopAddItem, EV_PrivateShopOpenWindow | tratado |
| game | 0x9c | PrivateStoreMsg | PrivateStoreMsgSell | dados |  | tratado |
| game | 0x9d |  | ShowMiniMap | UI | EV_ShowMinimap | tratado |
| game | 0x9e | ReviveRequestPacket |  | ignorado |  | ignorado (igual) |
| game | 0x9f | AbnormalVisualEffectPacket |  | ignorado |  | ignorado (igual) |
| game | 0xa0 | TutorialShowHtmlPacket | TutorialShowHtml | UI | EV_TutorialViewerWndShow | falta |
| game | 0xa1 | TutorialShowQuestionMarkPacket | TutorialShowQuestionMark | UI | EV_ArriveNewTutorialQuestion | falta |
| game | 0xa2 | TutorialEnableClientEventPacket | TutorialEnableClientEvent | UI nativa (C++, sem EV_) |  | falta |
| game | 0xa3 | TutorialCloseHtmlPacket | TutorialCloseHtml | UI | EV_TutorialViewerWndHide | falta |
| game | 0xa4 | ShowRadarPacket |  | UI | EV_MinimapAddTarget, EV_MinimapDeleteAllTarget, EV_RadarAddTarget, EV_RadarDeleteAllTarget | falta |
| game | 0xa5 | DeleteRadarPacket |  | UI | EV_MinimapDeleteTarget | falta |
| game | 0xa6 | MyTargetSelectedPacket | MyTargetSelected | UI | EV_ReceiveTargetLevelDiff | tratado |
| game | 0xa7 | PartyMemberPositionPacket | PartyMemberPosition | dados |  | tratado |
| game | 0xa8 | AskJoinAlliancePacket | AskJoinAlly | UI nativa (C++, sem EV_) |  | falta |
| game | 0xa9 | JoinAlliancePacket |  | UI | EV_ChatMessage, EV_SystemMessage | falta |
| game | 0xaa | WithdrawAlliancePacket |  | UI | EV_ChatMessage, EV_SystemMessage | falta |
| game | 0xab | OustAllianceMemberPledgePacket |  | UI | EV_ChatMessage, EV_SystemMessage | falta |
| game | 0xac | DismissAlliancePacket |  | UI | EV_ChatMessage, EV_SystemMessage | falta |
| game | 0xad | SetAllianceCrestPacket |  | ignorado |  | ignorado (igual) |
| game | 0xae | AllianceCrestPacket | AllyCrest | mundo/engine |  | falta |
| game | 0xaf | ServerCloseSocketPacket |  | ignorado |  | ignorado (igual) |
| game | 0xb0 | PetStatusShowPacket | PetStatusShow | UI | EV_PetWndShow | tratado |
| game | 0xb1 | PetInfoPacket | PetInfo | UI | EV_PetStatusShow, EV_PetWndShowNameBtn, EV_UpdatePetInfo | tratado |
| game | 0xb2 | PetItemListPacket | PetItemList | UI | EV_PetInventoryItemList, EV_PetInventoryItemStart | tratado |
| game | 0xb3 | PetInventoryUpdatePacket | PetInventoryUpdate | UI | EV_PetInventoryItemUpdate, EV_ShortcutUpdate | tratado |
| game | 0xb4 | AllianceInfoPacket | AllianceInfo | ignorado |  | ignorado (igual) |
| game | 0xb5 | PetStatusUpdatePacket | PetStatusUpdate | UI | EV_UpdatePetInfo | tratado |
| game | 0xb6 | PetDeletePacket | PetDelete | UI | EV_PetSummonedStatusClose | tratado |
| game | 0xb7 | PrivateStoreBuyManageList | PrivateStoreManageListBuy | UI | EV_PrivateShopAddItem, EV_PrivateShopOpenWindow | tratado |
| game | 0xb8 | PrivateStoreBuyList | PrivateStoreListBuy | UI | EV_PrivateShopAddItem, EV_PrivateShopOpenWindow | tratado |
| game | 0xb9 | PrivateStoreBuyMsg | PrivateStoreMsgBuy | dados |  | tratado |
| game | 0xba | VehicleStartPacket | VehicleStarted | mundo/engine |  | falta |
| game | 0xbb | RequestTimeCheckPacket |  | mundo/engine |  | falta |
| game | 0xbc | StartAllianceWarPacket |  | UI nativa (C++, sem EV_) |  | falta |
| game | 0xbd | ReplyStartAllianceWarPacket |  | ignorado |  | ignorado (igual) |
| game | 0xbe | StopAllianceWarPacket |  | UI nativa (C++, sem EV_) |  | falta |
| game | 0xbf | ReplyStopAllianceWarPacket |  | ignorado |  | ignorado (igual) |
| game | 0xc0 | SurrenderAllianceWarPacket |  | ignorado |  | ignorado (igual) |
| game | 0xc1 | SkillCoolTimePacket | SkillCoolTime | UI nativa (C++, sem EV_) |  | falta |
| game | 0xc2 | PackageToListPacket | PackageToList | UI | EV_SelectDeliverAddName, EV_SelectDeliverClear | tratado |
| game | 0xc3 | PackageSendableListPacket | PackageSendableList | UI | EV_DeliverAddItem, EV_DeliverOpenWindow | tratado |
| game | 0xc4 | EarthQuakePacket | Earthquake | mundo/engine |  | falta |
| game | 0xc5 | FlyToLoactionPacket | FlyToLocation | mundo/engine |  | falta |
| game | 0xc6 | BlockListPacket |  | ignorado |  | ignorado (igual) |
| game | 0xc7 | SpecialCameraPacket | SpecialCamera | UI nativa (C++, sem EV_) |  | falta |
| game | 0xc8 | NormalCameraPacket | NormalCamera | UI nativa (C++, sem EV_) |  | falta |
| game | 0xc9 | CastleSiegeInfoPacket | SiegeInfo | UI | EV_SiegeInfo, EV_SiegeInfoSelectableTime | falta |
| game | 0xca | CastleSiegeAttackerListPacket | SiegeAttackerList | UI | EV_SiegeInfoClanList, EV_SiegeInfoClanListEnd, EV_SiegeInfoClanListStart | falta |
| game | 0xcb |  | SiegeDefenderList | UI | EV_SiegeInfoClanList, EV_SiegeInfoClanListEnd, EV_SiegeInfoClanListStart | falta |
| game | 0xcc | NickNameChangedPacket | TitleUpdate | dados |  | falta |
| game | 0xcd | PledgeStatusChangedPacket | PledgeStatusChanged | dados |  | falta |
| game | 0xce | RelationChangedPacket | RelationChanged | UI | EV_ChatWndStatusChange | falta |
| game | 0xcf | EventTriggerPacket | EventTrigger | mundo/engine |  | falta |
| game | 0xd0 | MultiSellListPacket | MultiSellList | UI | EV_MultiSellItemList, EV_MultiSellItemListEnd, EV_MultiSellNeededItemList, EV_MultiSellShopID | tratado |
| game | 0xd1 | SetSummonRemainTimePacket | SetSummonRemainTime | UI | EV_SummonedStatusRemainTime | tratado |
| game | 0xd2 | SkillRemainSecPacket |  | mundo/engine |  | falta |
| game | 0xd3 | NetPingPacket |  | rede |  | tratado |
| game | 0xd4 | DicePacket | Dice | mundo/engine |  | falta |
| game | 0xd5 | SnoopPacket | Snoop | UI | EV_GMSnoop | falta |
| game | 0xd6 | RecipeBookItemListPacket | RecipeBookItemList | UI | EV_RecipeAddBookItem, EV_RecipeShowBookWnd | tratado |
| game | 0xd7 | RecipeItemMakeInfoPacket | RecipeItemMakeInfo | UI | EV_RecipeItemMakeInfo | tratado |
| game | 0xd8 | RecipeShopManageListPacket | RecipeShopManageList | UI | EV_RecipeShopAddBookItem, EV_RecipeShopAddShopItem, EV_RecipeShopShowWnd | tratado |
| game | 0xd9 | RecipeShopSellListPacket | RecipeShopSellList | UI | EV_RecipeShopSellItem, EV_RecipeShowBuyListWnd | tratado |
| game | 0xda | RecipeShopItemInfoPacket | RecipeShopItemInfo | UI | EV_RecipeShopItemInfo | tratado |
| game | 0xdb | RecipeShopMsgPacket | RecipeShopMsg | dados |  | tratado |
| game | 0xdc | ShowCalcPacket | ShowCalculator | UI | EV_CalculatorWndShowHide | falta |
| game | 0xdd | MonRaceInfoPacket | MonRaceInfo | mundo/engine |  | falta |
| game | 0xde | ShowTownMapPacket | ShowTownMap | UI | EV_ShowTownMap | falta |
| game | 0xdf | ObserverStartPacket | ObservationMode | UI | EV_ObserverWndShow | falta |
| game | 0xe0 | ObserverEndPacket | ObservationReturn | UI | EV_ObserverWndHide | falta |
| game | 0xe1 | ChairSitPacket | ChairSit | mundo/engine |  | falta |
| game | 0xe2 | HennaEquipListPacket | HennaEquipList | UI | EV_HennaListWndAddHennaEquip, EV_HennaListWndShowHideEquip | tratado |
| game | 0xe3 | HennaItemInfoPacket | HennaItemInfo | UI | EV_HennaInfoWndShowHideEquip | tratado |
| game | 0xe4 | HennaInfoPacket | HennaInfo | UI | EV_InventoryAddHennaInfo, EV_UpdateHennaInfo | tratado |
| game | 0xe5 | HennaUnequipListPacket | HennaRemoveList | UI | EV_HennaListWndAddHennaUnEquip, EV_HennaListWndShowHideUnEquip | tratado |
| game | 0xe6 | HennaUnequipInfoPacket | HennaItemRemoveInfo | UI | EV_HennaInfoWndShowHideUnEquip | tratado |
| game | 0xe7 | MacroListPacket | SendMacroList | UI | EV_MacroUpdate | tratado |
| game | 0xe8 | BuyListSeedPacket | BuyListSeed | UI | EV_ManorShopWndAddItem, EV_ManorShopWndOpen | falta |
| game | 0xe9 | SellListProcurePacket | SellListProcure | UI | EV_InventoryHideWindow, EV_ManorShopWndAddItem, EV_ManorShopWndOpen | falta |
| game | 0xea | GMHennaInfoPacket | GMViewHennaInfo | UI | EV_GMAddHennaInfo, EV_GMUpdateHennaInfo | falta |
| game | 0xeb | RadarControlPacket | RadarControl | UI | EV_MinimapAddTarget, EV_MinimapDeleteAllTarget, EV_RadarAddTarget, EV_RadarDeleteAllTarget | falta |
| game | 0xec |  | ClientSetTime | mundo/engine |  | tratado |
| game | 0xed | ConfirmDlgPacket | ConfirmDlg | UI nativa (C++, sem EV_) |  | tratado |
| game | 0xee | PartySpelledPacket | PartySpelled | UI | EV_SummonedStatusSpelledList | tratado |
| game | 0xef | ShopPreviewListPacket | ShopPreviewList | UI | EV_ShopAddItem, EV_ShopOpenWindow | falta |
| game | 0xf0 | ShopPreviewInfoPacket | ShopPreviewInfo | mundo/engine |  | falta |
| game | 0xf1 | CameraModePacket | CameraMode | UI nativa (C++, sem EV_) |  | falta |
| game | 0xf2 | ShowXMasSealPacket | ShowXMasSeal | UI nativa (C++, sem EV_) |  | falta |
| game | 0xf3 | EtcStatusUpdatePacket | EtcStatusUpdate | UI | EV_AbnormalStatusEtcItem | tratado |
| game | 0xf4 | ShortBuffStatusUpdatePacket | ShortBuffStatusUpdate | UI | EV_AbnormalStatusShortItem | tratado |
| game | 0xf5 | SSQStatusPacket | SSQStatus | UI | EV_SSQMainEvent, EV_SSQPreInfo, EV_SSQSealStatus, EV_SSQStatus | falta |
| game | 0xf6 | PetitionVotePacket |  | UI | EV_EnablePetitionFeedback | falta |
| game | 0xf7 | AgitDecoInfoPacket | ClanHallDecoration | mundo/engine |  | falta |
| game | 0xf8 | SSQInfoPacket | SSQInfo | mundo/engine |  | tratado |
| game | 0xf9 | GameGuardQueryPacket | GameGuardQuery | UI nativa (C++, sem EV_) |  | falta |
| game | 0xfa | L2FriendListPacket | FriendList | UI nativa (C++, sem EV_) |  | tratado |
| game | 0xfb | L2FriendPacket |  | UI nativa (C++, sem EV_) |  | tratado |
| game | 0xfc | L2FriendStatusPacket |  | UI nativa (C++, sem EV_) |  | tratado |
| game | 0xfd | L2FriendSayPacket | L2FriendSay | UI nativa (C++, sem EV_) |  | tratado |
| game | 0xfe | DummyPacket |  | log |  | tratado |
| login | 0x00 |  | Init | UI nativa (C++, sem EV_) |  | tratado |
| login | 0x01 |  | LoginFail | UI nativa (C++, sem EV_) |  | tratado |
| login | 0x02 |  | AccountKicked | UI nativa (C++, sem EV_) |  | tratado |
| login | 0x03 |  | LoginOk | UI nativa (C++, sem EV_) |  | tratado |
| login | 0x04 |  | ServerList | UI nativa (C++, sem EV_) |  | tratado |
| login | 0x05 |  |  | UI nativa (C++, sem EV_) |  | tratado |
| login | 0x06 |  | PlayFail | UI nativa (C++, sem EV_) |  | tratado |
| login | 0x07 |  | PlayOk | rede |  | tratado |
| login | 0x08 |  |  | UI nativa (C++, sem EV_) |  | tratado |
| login | 0x09 |  |  | UI nativa (C++, sem EV_) |  | tratado |
| login | 0x0a |  |  | UI nativa (C++, sem EV_) |  | tratado |
| login | 0x0b |  | GGAuth | UI nativa (C++, sem EV_) |  | tratado |
| login | 0x0c |  |  | log |  | tratado |
