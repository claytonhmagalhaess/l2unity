# Protocolo Interlude: opcodes (referência aCis)

Gerado por `scripts/acis_packets.py` a partir de `ext/src/acis` (aCis 382, implementação do **servidor**). Os nomes do lado do cliente e o que o cliente realmente envia/trata estão em `94_pacotes_servidor_cliente.md` e `95_pacotes_cliente_servidor.md` (extraídos do `engine.dll`).

## Jogo: servidor → cliente (272 pacotes)

| opcode | sub | classe aCis | nº de campos write* |
|---|---|---|---|
| 0x0 |  | KeyPacket | 5 |
| 0x1 |  | MoveToLocation | 8 |
| 0x2 |  | NpcSay | 5 |
| 0x3 |  | CharInfo | 101 |
| 0x4 |  | UserInfo | 159 |
| 0x5 |  | Attack | 12 |
| 0x6 |  | Die | 11 |
| 0x7 |  | Revive | 2 |
| 0xb |  | SpawnItem | 9 |
| 0xc |  | DropItem | 11 |
| 0xd |  | GetItem | 6 |
| 0xe |  | StatusUpdate | 5 |
| 0xf |  | NpcHtmlMessage | 4 |
| 0x10 |  | SellList | 15 |
| 0x11 |  | BuyList | 16 |
| 0x12 |  | DeleteObject | 3 |
| 0x13 |  | CharSelectInfo | 74 |
| 0x14 |  | AuthLoginFail | 2 |
| 0x15 |  | CharSelected | 37 |
| 0x16 |  | AbstractNpcInfo | 141 |
| 0x17 |  | CharTemplates | 22 |
| 0x19 |  | CharCreateOk | 2 |
| 0x1a |  | CharCreateFail | 2 |
| 0x1b |  | ItemList | 15 |
| 0x1c |  | SunRise | 1 |
| 0x1d |  | SunSet | 1 |
| 0x1e |  | TradeStart | 13 |
| 0x20 |  | TradeOwnAdd | 12 |
| 0x21 |  | TradeOtherAdd | 12 |
| 0x22 |  | SendTradeDone | 2 |
| 0x23 |  | CharDeleteOk | 1 |
| 0x24 |  | CharDeleteFail | 2 |
| 0x25 |  | ActionFailed | 1 |
| 0x26 |  | ServerClose | 1 |
| 0x27 |  | InventoryUpdate | 15 |
| 0x28 |  | TeleportToLocation | 6 |
| 0x29 |  | TargetSelected | 6 |
| 0x2a |  | TargetUnselected | 5 |
| 0x2b |  | AutoAttackStart | 2 |
| 0x2c |  | AutoAttackStop | 2 |
| 0x2d |  | SocialAction | 3 |
| 0x2e |  | ChangeMoveType | 4 |
| 0x2f |  | ChangeWaitType | 6 |
| 0x30 |  | ManagePledgePower | 4 |
| 0x32 |  | AskJoinPledge | 3 |
| 0x33 |  | JoinPledge | 2 |
| 0x39 |  | AskJoinParty | 3 |
| 0x3a |  | JoinParty | 2 |
| 0x41 |  | WarehouseDepositList | 18 |
| 0x42 |  | WarehouseWithdrawList | 18 |
| 0x44 |  | ShortCutRegister | 12 |
| 0x45 |  | ShortCutInit | 24 |
| 0x46 |  | ShortCutDelete | 3 |
| 0x47 |  | StopMove | 6 |
| 0x48 |  | MagicSkillUse | 16 |
| 0x49 |  | MagicSkillCanceled | 2 |
| 0x4a |  | CreatureSay | 8 |
| 0x4b |  | EquipUpdate | 4 |
| 0x4c |  | DoorInfo | 10 |
| 0x4d |  | DoorStatusUpdate | 8 |
| 0x4e |  | PartySmallWindowAll | 17 |
| 0x4f |  | PartySmallWindowAdd | 16 |
| 0x50 |  | PartySmallWindowDeleteAll | 1 |
| 0x51 |  | PartySmallWindowDelete | 3 |
| 0x52 |  | PartySmallWindowUpdate | 11 |
| 0x53 |  | PledgeShowMemberListAll | 30 |
| 0x54 |  | PledgeShowMemberListUpdate | 9 |
| 0x55 |  | PledgeShowMemberListAdd | 8 |
| 0x56 |  | PledgeShowMemberListDelete | 2 |
| 0x58 |  | SkillList | 6 |
| 0x59 |  | VehicleInfo | 6 |
| 0x5a |  | VehicleDeparture | 7 |
| 0x5b |  | OnVehicleCheckLocation | 6 |
| 0x5c |  | GetOnVehicle | 6 |
| 0x5d |  | GetOffVehicle | 6 |
| 0x5e |  | SendTradeRequest | 2 |
| 0x5f |  | RestartResponse | 2 |
| 0x60 |  | MoveToPawn | 7 |
| 0x61 |  | ValidateLocation | 6 |
| 0x62 |  | StartRotation | 5 |
| 0x63 |  | FinishRotation | 3 |
| 0x63 |  | StopRotation | 5 |
| 0x64 |  | SystemMessage | 8 |
| 0x65 |  | StartPledgeWar | 3 |
| 0x67 |  | StopPledgeWar | 3 |
| 0x69 |  | SurrenderPledgeWar | 3 |
| 0x6c |  | PledgeCrest | 5 |
| 0x6d |  | SetupGauge | 4 |
| 0x6e |  | ShowBoard | 11 |
| 0x6f |  | ChooseInventoryItem | 2 |
| 0x71 |  | MoveToLocationInVehicle | 9 |
| 0x72 |  | StopMoveInVehicle | 7 |
| 0x73 |  | ValidateLocationInVehicle | 7 |
| 0x74 |  | TradeItemUpdate | 13 |
| 0x75 |  | TradePressOwnOk | 1 |
| 0x76 |  | MagicSkillLaunched | 8 |
| 0x7b |  | FriendStatus | 4 |
| 0x7c |  | TradePressOtherOk | 1 |
| 0x7d |  | FriendAddRequest | 3 |
| 0x7e |  | LeaveWorld | 1 |
| 0x7f |  | AbnormalStatusUpdate | 6 |
| 0x80 |  | QuestList | 6 |
| 0x81 |  | EnchantResult | 2 |
| 0x82 |  | PledgeShowMemberListDeleteAll | 1 |
| 0x83 |  | PledgeInfo | 4 |
| 0x86 |  | Ride | 5 |
| 0x88 |  | PledgeShowInfoUpdate | 14 |
| 0x8a |  | AcquireSkillList | 18 |
| 0x8b |  | AcquireSkillInfo | 10 |
| 0x8c |  | ServerObjectInfo | 17 |
| 0x8f |  | GMViewCharacterInfo | 144 |
| 0x90 |  | GMViewPledgeInfo | 26 |
| 0x91 |  | GMViewSkillInfo | 7 |
| 0x93 |  | GMViewQuestList | 7 |
| 0x94 |  | GMViewItemList | 17 |
| 0x95 |  | GMViewWarehouseWithdrawList | 17 |
| 0x96 |  | PartyMatchList | 11 |
| 0x97 |  | PartyMatchDetail | 8 |
| 0x98 |  | PlaySound | 6 |
| 0x99 |  | StaticObjectInfo | 3 |
| 0x9a |  | PrivateStoreManageListSell | 25 |
| 0x9b |  | PrivateStoreListSell | 15 |
| 0x9c |  | PrivateStoreMsgSell | 3 |
| 0x9d |  | ShowMiniMap | 3 |
| 0xa0 |  | TutorialShowHtml | 2 |
| 0xa1 |  | TutorialShowQuestionMark | 2 |
| 0xa2 |  | TutorialEnableClientEvent | 2 |
| 0xa3 |  | TutorialCloseHtml | 1 |
| 0xa6 |  | MyTargetSelected | 3 |
| 0xa7 |  | PartyMemberPosition | 3 |
| 0xa8 |  | AskJoinAlly | 3 |
| 0xae |  | AllyCrest | 4 |
| 0xb0 |  | PetStatusShow | 2 |
| 0xb1 |  | PetInfo | 67 |
| 0xb2 |  | PetItemList | 12 |
| 0xb3 |  | PetInventoryUpdate | 13 |
| 0xb4 |  | AllianceInfo | 13 |
| 0xb5 |  | PetStatusUpdate | 17 |
| 0xb6 |  | PetDelete | 3 |
| 0xb7 |  | PrivateStoreManageListBuy | 21 |
| 0xb8 |  | PrivateStoreListBuy | 14 |
| 0xb9 |  | PrivateStoreMsgBuy | 3 |
| 0xba |  | VehicleStarted | 3 |
| 0xc1 |  | SkillCoolTime | 6 |
| 0xc2 |  | PackageToList | 4 |
| 0xc3 |  | PackageSendableList | 15 |
| 0xc4 |  | Earthquake | 7 |
| 0xc5 |  | FlyToLocation | 9 |
| 0xc7 |  | SpecialCamera | 11 |
| 0xc8 |  | NormalCamera | 1 |
| 0xc9 |  | SiegeInfo | 15 |
| 0xca |  | SiegeAttackerList | 18 |
| 0xcb |  | SiegeDefenderList | 32 |
| 0xcc |  | TitleUpdate | 3 |
| 0xcd |  | PledgeStatusChanged | 8 |
| 0xce |  | RelationChanged | 6 |
| 0xcf |  | EventTrigger | 3 |
| 0xd0 |  | MultiSellList | 27 |
| 0xd1 |  | SetSummonRemainTime | 3 |
| 0xd4 |  | Dice | 7 |
| 0xd5 |  | Snoop | 7 |
| 0xd6 |  | RecipeBookItemList | 7 |
| 0xd7 |  | RecipeItemMakeInfo | 6 |
| 0xd8 |  | RecipeShopManageList | 13 |
| 0xd9 |  | RecipeShopSellList | 9 |
| 0xda |  | RecipeShopItemInfo | 6 |
| 0xdb |  | RecipeShopMsg | 3 |
| 0xdc |  | ShowCalculator | 2 |
| 0xdd |  | MonRaceInfo | 18 |
| 0xde |  | ShowTownMap | 4 |
| 0xdf |  | ObservationMode | 7 |
| 0xe0 |  | ObservationReturn | 4 |
| 0xe1 |  | ChairSit | 3 |
| 0xe2 |  | HennaEquipList | 9 |
| 0xe3 |  | HennaItemInfo | 19 |
| 0xe4 |  | HennaInfo | 11 |
| 0xe5 |  | HennaRemoveList | 9 |
| 0xe6 |  | HennaItemRemoveInfo | 19 |
| 0xe7 |  | SendMacroList | 16 |
| 0xe8 |  | BuyListSeed | 11 |
| 0xe9 |  | SellListProcure | 11 |
| 0xea |  | GMViewHennaInfo | 11 |
| 0xeb |  | RadarControl | 6 |
| 0xec |  | ClientSetTime | 3 |
| 0xed |  | ConfirmDlg | 13 |
| 0xee |  | PartySpelled | 7 |
| 0xef |  | ShopPreviewList | 13 |
| 0xf0 |  | ShopPreviewInfo | 19 |
| 0xf1 |  | CameraMode | 2 |
| 0xf2 |  | ShowXMasSeal | 2 |
| 0xf3 |  | EtcStatusUpdate | 8 |
| 0xf4 |  | ShortBuffStatusUpdate | 4 |
| 0xf5 |  | SSQStatus | 90 |
| 0xf7 |  | ClanHallDecoration | 38 |
| 0xf8 |  | SSQInfo | 2 |
| 0xf9 |  | GameGuardQuery | 1 |
| 0xfa |  | FriendList | 6 |
| 0xfd |  | L2FriendSay | 5 |
| 0xfe | 0x1 | ExRegenMax | 6 |
| 0xfe | 0x9 | ExColosseumFenceInfo | 9 |
| 0xfe | 0xe | ExPartyRoomMember | 12 |
| 0xfe | 0xf | ExClosePartyRoom | 2 |
| 0xfe | 0x10 | ExManagePartyRoomMember | 11 |
| 0xfe | 0x12 | ExAutoSoulShot | 4 |
| 0xfe | 0x13 | ExFishingStart | 9 |
| 0xfe | 0x14 | ExFishingEnd | 4 |
| 0xfe | 0x15 | ExFishingStartCombat | 8 |
| 0xfe | 0x16 | ExFishingHpRegen | 10 |
| 0xfe | 0x17 | ExEnchantSkillList | 7 |
| 0xfe | 0x18 | ExEnchantSkillInfo | 12 |
| 0xfe | 0x19 | ExQuestInfo | 2 |
| 0xfe | 0x1a | ExShowQuestMark | 3 |
| 0xfe | 0x1b | ExSendManorList | 5 |
| 0xfe | 0x1c | ExShowSeedInfo | 21 |
| 0xfe | 0x1d | ExShowCropInfo | 22 |
| 0xfe | 0x1e | ExShowManorDefaultInfo | 12 |
| 0xfe | 0x1f | ExShowSeedSetting | 22 |
| 0xfe | 0x20 | ExShowCropSetting | 26 |
| 0xfe | 0x21 | ExShowSellCropList | 20 |
| 0xfe | 0x22 | ExShowProcureCropDetail | 8 |
| 0xfe | 0x23 | ExHeroList | 10 |
| 0xfe | 0x24 | ExServerPrimitive | 30 |
| 0xfe | 0x25 | ExOpenMPCC | 2 |
| 0xfe | 0x26 | ExCloseMPCC | 2 |
| 0xfe | 0x27 | ExAskJoinMPCC | 3 |
| 0xfe | 0x28 | ExPledgeCrestLarge | 7 |
| 0xfe | 0x29 | ExOlympiadUserInfo | 10 |
| 0xfe | 0x2a | ExOlympiadSpelledInfo | 7 |
| 0xfe | 0x2b | ExOlympiadMode | 3 |
| 0xfe | 0x2c | ExOlympiadMatchEnd | 2 |
| 0xfe | 0x2d | ExMailArrived | 2 |
| 0xfe | 0x2e | ExStorageMaxCount | 9 |
| 0xfe | 0x30 | ExMultiPartyCommandChannelInfo | 9 |
| 0xfe | 0x31 | ExPCCafePointInfo | 7 |
| 0xfe | 0x32 | ExSetCompassZoneCode | 3 |
| 0xfe | 0x33 | ExGetBossRecord | 12 |
| 0xfe | 0x34 | ExAskJoinPartyRoom | 3 |
| 0xfe | 0x35 | ExListPartyMatchingWaitingRoom | 9 |
| 0xfe | 0x37 | ExShowAdventurerGuideBook | 2 |
| 0xfe | 0x38 | ExShowScreenMessage | 13 |
| 0xfe | 0x39 | PledgeSkillList | 5 |
| 0xfe | 0x3a | PledgeSkillListAdd | 4 |
| 0xfe | 0x3b | PledgePowerGradeList | 5 |
| 0xfe | 0x3c | PledgeReceivePowerInfo | 5 |
| 0xfe | 0x3d | PledgeReceiveMemberInfo | 9 |
| 0xfe | 0x3e | PledgeReceiveWarList | 8 |
| 0xfe | 0x3f | PledgeReceiveSubPledgeCreated | 6 |
| 0xfe | 0x40 | ExRedSky | 3 |
| 0xfe | 0x43 | ShowPCCafeCouponShowUI | 2 |
| 0xfe | 0x44 | ExOrcMove | 2 |
| 0xfe | 0x45 | ExCursedWeaponList | 4 |
| 0xfe | 0x46 | ExCursedWeaponLocation | 10 |
| 0xfe | 0x47 | ExRestartClient | 2 |
| 0xfe | 0x48 | ExRequestHackShield | 2 |
| 0xfe | 0x49 | ExUseSharedGroupItem | 6 |
| 0xfe | 0x4a | ExMPCCShowPartyMemberInfo | 6 |
| 0xfe | 0x4b | ExDuelAskStart | 4 |
| 0xfe | 0x4c | ExDuelReady | 3 |
| 0xfe | 0x4d | ExDuelStart | 3 |
| 0xfe | 0x4e | ExDuelEnd | 3 |
| 0xfe | 0x4f | ExDuelUpdateUserInfo | 12 |
| 0xfe | 0x50 | ExShowVariationMakeWindow | 2 |
| 0xfe | 0x51 | ExShowVariationCancelWindow | 2 |
| 0xfe | 0x52 | ExConfirmVariationItem | 5 |
| 0xfe | 0x53 | ExConfirmVariationRefiner | 7 |
| 0xfe | 0x54 | ExConfirmVariationGemstone | 7 |
| 0xfe | 0x55 | ExVariationResult | 5 |
| 0xfe | 0x56 | ExConfirmCancelItem | 8 |
| 0xfe | 0x57 | ExVariationCancelResult | 4 |
| 0xfe | 0x58 | ExDuelEnemyRelation | 3 |
| 0xfe | 0x5a | ExMPCCPartyInfoUpdate | 6 |
| 0xfe | 0x5b | ExPlayScene | 2 |

## Jogo: cliente → servidor (212 entradas)

| estado | opcode | classe aCis |
|---|---|---|
| CONNECTED | 0x0 | ProtocolVersion |
| CONNECTED | 0x8 | AuthLogin |
| AUTHED | 0x9 | Logout |
| AUTHED | 0xb | CharacterCreate |
| AUTHED | 0xc | CharacterDelete |
| AUTHED | 0xd | CharacterSelected |
| AUTHED | 0xe | NewCharacter |
| AUTHED | 0x62 | CharacterRestore |
| AUTHED | 0x68 | RequestPledgeCrest |
| ENTERING | 0x3 | EnterWorld |
| ENTERING | 0xd0:0x8 | RequestManorList |
| IN_GAME | 0x1 | MoveBackwardToLocation |
| IN_GAME | 0x4 | Action |
| IN_GAME | 0x9 | Logout |
| IN_GAME | 0xa | AttackRequest |
| IN_GAME | 0xf | RequestItemList |
| IN_GAME | 0x11 | RequestUnEquipItem |
| IN_GAME | 0x12 | RequestDropItem |
| IN_GAME | 0x14 | UseItem |
| IN_GAME | 0x15 | TradeRequest |
| IN_GAME | 0x16 | AddTradeItem |
| IN_GAME | 0x17 | TradeDone |
| IN_GAME | 0x1a | DummyPacket |
| IN_GAME | 0x1b | RequestSocialAction |
| IN_GAME | 0x1c | RequestChangeMoveType |
| IN_GAME | 0x1d | RequestChangeWaitType |
| IN_GAME | 0x1e | RequestSellItem |
| IN_GAME | 0x1f | RequestBuyItem |
| IN_GAME | 0x20 | RequestLinkHtml |
| IN_GAME | 0x21 | RequestBypassToServer |
| IN_GAME | 0x22 | RequestBBSwrite |
| IN_GAME | 0x23 | DummyPacket |
| IN_GAME | 0x24 | RequestJoinPledge |
| IN_GAME | 0x25 | RequestAnswerJoinPledge |
| IN_GAME | 0x26 | RequestWithdrawPledge |
| IN_GAME | 0x27 | RequestOustPledgeMember |
| IN_GAME | 0x29 | RequestJoinParty |
| IN_GAME | 0x2a | RequestAnswerJoinParty |
| IN_GAME | 0x2b | RequestWithdrawParty |
| IN_GAME | 0x2c | RequestOustPartyMember |
| IN_GAME | 0x2e | DummyPacket |
| IN_GAME | 0x2f | RequestMagicSkillUse |
| IN_GAME | 0x30 | Appearing |
| IN_GAME | 0x31 | SendWarehouseDepositList |
| IN_GAME | 0x32 | SendWarehouseWithdrawList |
| IN_GAME | 0x33 | RequestShortCutReg |
| IN_GAME | 0x34 | DummyPacket |
| IN_GAME | 0x35 | RequestShortCutDel |
| IN_GAME | 0x36 | CannotMoveAnymore |
| IN_GAME | 0x37 | RequestTargetCanceld |
| IN_GAME | 0x38 | Say2 |
| IN_GAME | 0x3c | RequestPledgeMemberList |
| IN_GAME | 0x3e | DummyPacket |
| IN_GAME | 0x3f | RequestSkillList |
| IN_GAME | 0x42 | RequestGetOnVehicle |
| IN_GAME | 0x43 | RequestGetOffVehicle |
| IN_GAME | 0x44 | AnswerTradeRequest |
| IN_GAME | 0x45 | RequestActionUse |
| IN_GAME | 0x46 | RequestRestart |
| IN_GAME | 0x48 | ValidatePosition |
| IN_GAME | 0x4a | StartRotating |
| IN_GAME | 0x4b | FinishRotating |
| IN_GAME | 0x4d | RequestStartPledgeWar |
| IN_GAME | 0x4e | RequestReplyStartPledgeWar |
| IN_GAME | 0x4f | RequestStopPledgeWar |
| IN_GAME | 0x50 | RequestReplyStopPledgeWar |
| IN_GAME | 0x51 | RequestSurrenderPledgeWar |
| IN_GAME | 0x52 | RequestReplySurrenderPledgeWar |
| IN_GAME | 0x53 | RequestSetPledgeCrest |
| IN_GAME | 0x55 | RequestGiveNickName |
| IN_GAME | 0x57 | RequestShowBoard |
| IN_GAME | 0x58 | RequestEnchantItem |
| IN_GAME | 0x59 | RequestDestroyItem |
| IN_GAME | 0x5b | SendBypassBuildCmd |
| IN_GAME | 0x5c | RequestMoveToLocationInVehicle |
| IN_GAME | 0x5d | CannotMoveAnymoreInVehicle |
| IN_GAME | 0x5e | RequestFriendInvite |
| IN_GAME | 0x5f | RequestAnswerFriendInvite |
| IN_GAME | 0x60 | RequestFriendList |
| IN_GAME | 0x61 | RequestFriendDel |
| IN_GAME | 0x63 | RequestQuestList |
| IN_GAME | 0x64 | RequestQuestAbort |
| IN_GAME | 0x66 | RequestPledgeInfo |
| IN_GAME | 0x68 | RequestPledgeCrest |
| IN_GAME | 0x69 | RequestSurrenderPersonally |
| IN_GAME | 0x6b | RequestAcquireSkillInfo |
| IN_GAME | 0x6c | RequestAcquireSkill |
| IN_GAME | 0x6d | RequestRestartPoint |
| IN_GAME | 0x6e | RequestGMCommand |
| IN_GAME | 0x6f | RequestPartyMatchConfig |
| IN_GAME | 0x70 | RequestPartyMatchList |
| IN_GAME | 0x71 | RequestPartyMatchDetail |
| IN_GAME | 0x72 | RequestCrystallizeItem |
| IN_GAME | 0x73 | RequestPrivateStoreManageSell |
| IN_GAME | 0x74 | SetPrivateStoreListSell |
| IN_GAME | 0x75 | RequestPrivateStoreManageCancel |
| IN_GAME | 0x76 | RequestPrivateStoreQuitSell |
| IN_GAME | 0x77 | SetPrivateStoreMsgSell |
| IN_GAME | 0x79 | RequestPrivateStoreBuy |
| IN_GAME | 0x7b | RequestTutorialLinkHtml |
| IN_GAME | 0x7c | RequestTutorialPassCmdToServer |
| IN_GAME | 0x7d | RequestTutorialQuestionMark |
| IN_GAME | 0x7e | RequestTutorialClientEvent |
| IN_GAME | 0x7f | RequestPetition |
| IN_GAME | 0x80 | RequestPetitionCancel |
| IN_GAME | 0x81 | RequestGmList |
| IN_GAME | 0x82 | RequestJoinAlly |
| IN_GAME | 0x83 | RequestAnswerJoinAlly |
| IN_GAME | 0x84 | AllyLeave |
| IN_GAME | 0x85 | AllyDismiss |
| IN_GAME | 0x86 | RequestDismissAlly |
| IN_GAME | 0x87 | RequestSetAllyCrest |
| IN_GAME | 0x88 | RequestAllyCrest |
| IN_GAME | 0x89 | RequestChangePetName |
| IN_GAME | 0x8a | RequestPetUseItem |
| IN_GAME | 0x8b | RequestGiveItemToPet |
| IN_GAME | 0x8c | RequestGetItemFromPet |
| IN_GAME | 0x8e | RequestAllyInfo |
| IN_GAME | 0x8f | RequestPetGetItem |
| IN_GAME | 0x90 | RequestPrivateStoreManageBuy |
| IN_GAME | 0x91 | SetPrivateStoreListBuy |
| IN_GAME | 0x93 | RequestPrivateStoreQuitBuy |
| IN_GAME | 0x94 | SetPrivateStoreMsgBuy |
| IN_GAME | 0x96 | RequestPrivateStoreSell |
| IN_GAME | 0x9e | RequestPackageSendableItemList |
| IN_GAME | 0x9f | RequestPackageSend |
| IN_GAME | 0xa0 | RequestBlock |
| IN_GAME | 0xa2 | RequestSiegeAttackerList |
| IN_GAME | 0xa3 | RequestSiegeDefenderList |
| IN_GAME | 0xa4 | RequestJoinSiege |
| IN_GAME | 0xa5 | RequestConfirmSiegeWaitingList |
| IN_GAME | 0xa7 | MultiSellChoose |
| IN_GAME | 0xaa | RequestUserCommand |
| IN_GAME | 0xab | SnoopQuit |
| IN_GAME | 0xac | RequestRecipeBookOpen |
| IN_GAME | 0xad | RequestRecipeBookDestroy |
| IN_GAME | 0xae | RequestRecipeItemMakeInfo |
| IN_GAME | 0xaf | RequestRecipeItemMakeSelf |
| IN_GAME | 0xb0 | RequestRecipeShopManageList |
| IN_GAME | 0xb1 | RequestRecipeShopMessageSet |
| IN_GAME | 0xb2 | RequestRecipeShopListSet |
| IN_GAME | 0xb3 | RequestRecipeShopManageQuit |
| IN_GAME | 0xb5 | RequestRecipeShopMakeInfo |
| IN_GAME | 0xb6 | RequestRecipeShopMakeItem |
| IN_GAME | 0xb7 | RequestRecipeShopManagePrev |
| IN_GAME | 0xb8 | ObserverReturn |
| IN_GAME | 0xb9 | RequestEvaluate |
| IN_GAME | 0xba | RequestHennaList |
| IN_GAME | 0xbb | RequestHennaItemInfo |
| IN_GAME | 0xbc | RequestHennaEquip |
| IN_GAME | 0xbd | RequestHennaRemoveList |
| IN_GAME | 0xbe | RequestHennaItemRemoveInfo |
| IN_GAME | 0xbf | RequestHennaRemove |
| IN_GAME | 0xc0 | RequestPledgePower |
| IN_GAME | 0xc1 | RequestMakeMacro |
| IN_GAME | 0xc2 | RequestDeleteMacro |
| IN_GAME | 0xc3 | RequestBuyProcure |
| IN_GAME | 0xc4 | RequestBuySeed |
| IN_GAME | 0xc5 | DlgAnswer |
| IN_GAME | 0xc6 | RequestPreviewItem |
| IN_GAME | 0xc7 | RequestSSQStatus |
| IN_GAME | 0xca | GameGuardReply |
| IN_GAME | 0xcc | RequestSendFriendMsg |
| IN_GAME | 0xcd | RequestShowMiniMap |
| IN_GAME | 0xcf | RequestRecordInfo |
| IN_GAME | 0xd0:0x1 | RequestOustFromPartyRoom |
| IN_GAME | 0xd0:0x2 | RequestDismissPartyRoom |
| IN_GAME | 0xd0:0x3 | RequestWithdrawPartyRoom |
| IN_GAME | 0xd0:0x4 | RequestChangePartyLeader |
| IN_GAME | 0xd0:0x5 | RequestAutoSoulShot |
| IN_GAME | 0xd0:0x6 | RequestExEnchantSkillInfo |
| IN_GAME | 0xd0:0x7 | RequestExEnchantSkill |
| IN_GAME | 0xd0:0x8 | RequestManorList |
| IN_GAME | 0xd0:0x9 | RequestProcureCropList |
| IN_GAME | 0xd0:0xa | RequestSetSeed |
| IN_GAME | 0xd0:0xb | RequestSetCrop |
| IN_GAME | 0xd0:0xc | RequestWriteHeroWords |
| IN_GAME | 0xd0:0xd | RequestExAskJoinMPCC |
| IN_GAME | 0xd0:0xe | RequestExAcceptJoinMPCC |
| IN_GAME | 0xd0:0xf | RequestExOustFromMPCC |
| IN_GAME | 0xd0:0x10 | RequestExPledgeCrestLarge |
| IN_GAME | 0xd0:0x11 | RequestExSetPledgeCrestLarge |
| IN_GAME | 0xd0:0x12 | RequestOlympiadObserverEnd |
| IN_GAME | 0xd0:0x13 | RequestOlympiadMatchList |
| IN_GAME | 0xd0:0x14 | RequestAskJoinPartyRoom |
| IN_GAME | 0xd0:0x15 | AnswerJoinPartyRoom |
| IN_GAME | 0xd0:0x16 | RequestListPartyMatchingWaitingRoom |
| IN_GAME | 0xd0:0x17 | RequestExitPartyMatchingWaitingRoom |
| IN_GAME | 0xd0:0x18 | RequestGetBossRecord |
| IN_GAME | 0xd0:0x19 | RequestPledgeSetAcademyMaster |
| IN_GAME | 0xd0:0x1a | RequestPledgePowerGradeList |
| IN_GAME | 0xd0:0x1b | RequestPledgeMemberPowerInfo |
| IN_GAME | 0xd0:0x1c | RequestPledgeSetMemberPowerGrade |
| IN_GAME | 0xd0:0x1d | RequestPledgeMemberInfo |
| IN_GAME | 0xd0:0x1e | RequestPledgeWarList |
| IN_GAME | 0xd0:0x1f | RequestExFishRanking |
| IN_GAME | 0xd0:0x20 | RequestPCCafeCouponUse |
| IN_GAME | 0xd0:0x22 | RequestCursedWeaponList |
| IN_GAME | 0xd0:0x23 | RequestCursedWeaponLocation |
| IN_GAME | 0xd0:0x24 | RequestPledgeReorganizeMember |
| IN_GAME | 0xd0:0x26 | RequestExMPCCShowPartyMembersInfo |
| IN_GAME | 0xd0:0x27 | RequestDuelStart |
| IN_GAME | 0xd0:0x28 | RequestDuelAnswerStart |
| IN_GAME | 0xd0:0x29 | RequestConfirmTargetItem |
| IN_GAME | 0xd0:0x2a | RequestConfirmRefinerItem |
| IN_GAME | 0xd0:0x2b | RequestConfirmGemStone |
| IN_GAME | 0xd0:0x2c | RequestRefine |
| IN_GAME | 0xd0:0x2d | RequestConfirmCancelItem |
| IN_GAME | 0xd0:0x2e | RequestRefineCancel |
| IN_GAME | 0xd0:0x2f | RequestExMagicSkillUseGround |
| IN_GAME | 0xd0:0x30 | RequestDuelSurrender |
| IN_GAME | 0xd0:0xee | RequestChangePartyLeader |

## Login: servidor de login → cliente (8 pacotes)

| opcode | sub | classe aCis | nº de campos write* |
|---|---|---|---|
| 0x0 |  | Init | 10 |
| 0x1 |  | LoginFail | 2 |
| 0x2 |  | AccountKicked | 2 |
| 0x3 |  | LoginOk | 10 |
| 0x4 |  | ServerList | 20 |
| 0x6 |  | PlayFail | 2 |
| 0x7 |  | PlayOk | 3 |
| 0xb |  | GGAuth | 6 |

## Login: cliente → servidor de login (4 entradas)

| estado | opcode | classe aCis |
|---|---|---|
| LOGIN_CONNECTED | 0x7 | AuthGameGuard |
| LOGIN_AUTHED_GG | 0x0 | RequestAuthLogin |
| LOGIN_AUTHED_LOGIN | 0x5 | RequestServerList |
| LOGIN_AUTHED_LOGIN | 0x2 | RequestServerLogin |
