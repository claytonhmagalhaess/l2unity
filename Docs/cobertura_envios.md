# Cobertura dos envios (B4)

Gerado por `RequestFormatTests.CoberturaDosEnvios` a partir de `Golden/requests.json` (`out/re/request_table.json`).
Cada linha com builder do Unity é conferida byte a byte contra o formato em `EnviosDoUnity_IguaisAoFormatoDoOriginal`.

Envios do original: **245**; com builder no Unity: **108**; não enviados pelo Unity: **137**.

| método do engine.dll | servidor | opcode | sub | formato | Unity |
|---|---|---|---|---|---|
| FUN_10401dc0 | jogo | 0x00 |  | `cdbd` | GamePackets.ProtocolVersion(acis) |
| MTL | jogo | 0x01 |  | `cddddddd` | GamePackets.MoveTo |
| RequestEnterWorldPacket | jogo | 0x03 |  | `cbddddbdcccccccccccccccccccc` | GamePackets.EnterWorld |
| Action | jogo | 0x04 |  | `cddddc` | GamePackets.Action |
| FUN_1040d000 | jogo | 0x08 |  | `cSddddd` | GamePackets.AuthLogin |
| SendLogOutPacket | jogo | 0x09 |  | `c` | GamePackets.Logout |
| Atk | jogo | 0x0a |  | `cddddc` | GamePackets.AttackRequest |
| RequestCharacterCreate | jogo | 0x0b |  | `cSdddddddddddd` | GamePackets.CharacterCreate |
| RequestCharacterDelete | jogo | 0x0c |  | `cd` | GamePackets.CharacterDelete |
| RequestGameStart | jogo | 0x0d |  | `cdhddd` | GamePackets.CharacterSelected |
| RequestNewCharacter | jogo | 0x0e |  | `c` | GamePackets.NewCharacter |
| RequestItemList | jogo | 0x0f |  | `c` | UiPackets.RequestItemList |
| RequestUnEquipItem | jogo | 0x11 |  | `cd` | UiPackets.RequestUnEquipItem |
| RequestDropItem | jogo | 0x12 |  | `cddddd` | UiPackets.RequestDropItem |
| RequestUseItem | jogo | 0x14 |  | `cdd` | UiPackets.UseItem |
| RequestTrade | jogo | 0x15 |  | `cd` | SocialPackets.TradeRequest |
| RequestAddTradeItem | jogo | 0x16 |  | `cddd` | SocialPackets.AddTradeItem |
| RequestTradeDone | jogo | 0x17 |  | `cd` | SocialPackets.TradeDone |
| RequestSellItem | jogo | 0x1e |  | `cddb` | UiPackets.RequestSellItem |
| RequestBuyItem | jogo | 0x1f |  | `cddb` | UiPackets.RequestBuyItem |
| RequestLinkHtml | jogo | 0x20 |  | `cS` | UiPackets.RequestLinkHtml |
| RequestBypassToServer | jogo | 0x21 |  | `cS` | UiPackets.BypassToServer |
| RequestJoinPledge | jogo | 0x24 |  | `cdd` | ClanPackets.RequestJoinPledge |
| RequestAnswerJoinPledge | jogo | 0x25 |  | `cd` | ClanPackets.RequestAnswerJoinPledge |
| RequestWithDrawalPledge | jogo | 0x26 |  | `c` | ClanPackets.RequestWithdrawPledge |
| RequestOustPledgeMember | jogo | 0x27 |  | `cS` | ClanPackets.RequestOustPledgeMember |
| RequestJoinParty | jogo | 0x29 |  | `cSd` | SocialPackets.RequestJoinParty |
| RequestAnswerJoinParty | jogo | 0x2a |  | `cd` | SocialPackets.AnswerJoinParty |
| RequestWithDrawalParty | jogo | 0x2b |  | `c` | SocialPackets.WithdrawParty |
| RequestOustPartyMember | jogo | 0x2c |  | `cS` | SocialPackets.OustPartyMember |
| RequestMagicSkillUse | jogo | 0x2f |  | `cddc` | UiPackets.MagicSkillUse |
| SendWareHouseDepositList | jogo | 0x31 |  | `cdb` | StorePackets.SendWarehouseDepositList |
| SendWareHouseWithdrawList | jogo | 0x32 |  | `cdb` | StorePackets.SendWarehouseWithdrawList |
| RequestShortCutReg | jogo | 0x33 |  | `cdddd` | UiPackets.ShortCutReg |
| RequestShortCutDel | jogo | 0x35 |  | `cd` | UiPackets.ShortCutDel |
| CanNotMoveAnymore | jogo | 0x36 |  | `cdddd` | GamePackets.CannotMoveAnymore |
| RequestTargetCancel | jogo | 0x37 |  | `ch` | GamePackets.CancelTarget |
| Say2 | jogo | 0x38 |  | `cSdS` | GamePackets.Say2, GamePackets.Say2Tell |
| Say2 | jogo | 0x38 |  | `cSd` | GamePackets.Say2, GamePackets.Say2Tell |
| RequestPledgeMemberList | jogo | 0x3c |  | `c` | ClanPackets.RequestPledgeMemberList |
| RequestSkillItem | jogo | 0x3f |  | `c` | UiPackets.RequestSkillList |
| AnswerTradeRequest | jogo | 0x44 |  | `cd` | SocialPackets.AnswerTradeRequest |
| RequestActionUse | jogo | 0x45 |  | `cddc` | GamePackets.ActionUse, PetPackets.RequestActionUse |
| RequestRestart | jogo | 0x46 |  | `c` | GamePackets.RequestRestart |
| ValidatePosition | jogo | 0x48 |  | `cddddd` | GamePackets.ValidatePosition |
| StartRotating | jogo | 0x4a |  | `cdd` | GamePackets.StartRotating |
| FinishRotating | jogo | 0x4b |  | `cdd` | GamePackets.FinishRotating |
| RequestStartPledgeWar | jogo | 0x4d |  | `cS` | ClanPackets.RequestStartPledgeWar |
| RequestStopPledgeWar | jogo | 0x4f |  | `cS` | ClanPackets.RequestStopPledgeWar |
| RequestGiveNickName | jogo | 0x55 |  | `cSS` | ClanPackets.RequestGiveNickName |
| RequestShowboard | jogo | 0x57 |  | `cd` | UiPackets.RequestShowBoard |
| RequestDestroyItem | jogo | 0x59 |  | `cdd` | UiPackets.RequestDestroyItem |
| MTL | jogo | 0x5c |  | `cddddddd` | GamePackets.MoveTo |
| CanNotMoveAnymore | jogo | 0x5d |  | `cddddd` | GamePackets.CannotMoveAnymore |
| RequestFriendInvite | jogo | 0x5e |  | `cS` | SocialPackets.FriendInvite |
| RequestFriendAddReply | jogo | 0x5f |  | `cd` | SocialPackets.AnswerFriendInvite |
| RequestFriendDel | jogo | 0x61 |  | `cS` | SocialPackets.FriendDel |
| RequestCharacterRestore | jogo | 0x62 |  | `cd` | GamePackets.CharacterRestore |
| RequestQuestList | jogo | 0x63 |  | `c` | ClanPackets.RequestQuestList |
| RequestDestroyQuest | jogo | 0x64 |  | `cd` | ClanPackets.RequestQuestAbort |
| RequestPledgeInfo | jogo | 0x66 |  | `cd` | ClanPackets.RequestPledgeInfo |
| RequestAcquireSkillInfo | jogo | 0x6b |  | `cddd` | SkillTrainPackets.RequestAcquireSkillInfo |
| RequestAcquireSkill | jogo | 0x6c |  | `cddd` | SkillTrainPackets.RequestAcquireSkill |
| RequestRestartPoint | jogo | 0x6d |  | `cd` | GamePackets.RequestRestartPoint |
| RequestCrystallizeItem | jogo | 0x72 |  | `cdd` | UiPackets.RequestCrystallizeItem |
| RequestPrivateStoreManage | jogo | 0x73 |  | `c` | StorePackets.RequestPrivateStoreManageSell |
| SetPrivateStoreList | jogo | 0x74 |  | `cddb` | StorePackets.SetPrivateStoreListSell |
| RequestPrivateStoreQuit | jogo | 0x76 |  | `c` | StorePackets.RequestPrivateStoreQuitSell |
| SetPrivateStoreMsg | jogo | 0x77 |  | `cS` | StorePackets.SetPrivateStoreMsgSell |
| SendPrivateStoreBuyList | jogo | 0x79 |  | `cddb` | SocialPackets.PrivateStoreBuy |
| RequestChangePetName | jogo | 0x89 |  | `cS` | PetPackets.RequestChangePetName |
| RequestPetUseItem | jogo | 0x8a |  | `cd` | PetPackets.RequestPetUseItem |
| RequestGiveItemToPet | jogo | 0x8b |  | `cdd` | PetPackets.RequestGiveItemToPet |
| RequestGetItemFromPet | jogo | 0x8c |  | `cddd` | PetPackets.RequestGetItemFromPet |
| RequestPetGetItem | jogo | 0x8f |  | `cd` | PetPackets.RequestPetGetItem |
| RequestPrivateStoreBuyManage | jogo | 0x90 |  | `c` | StorePackets.RequestPrivateStoreManageBuy |
| SetPrivateStoreBuyList | jogo | 0x91 |  | `cdb` | StorePackets.SetPrivateStoreListBuy |
| RequestPrivateStoreBuyQuit | jogo | 0x93 |  | `c` | StorePackets.RequestPrivateStoreQuitBuy |
| SetPrivateStoreBuyMsg | jogo | 0x94 |  | `cS` | StorePackets.SetPrivateStoreMsgBuy |
| SendPrivateStoreBuyBuyList | jogo | 0x96 |  | `cddb` | StorePackets.RequestPrivateStoreSell |
| RequestPackageSendableItemList | jogo | 0x9e |  | `cd` | StorePackets.RequestPackageSendableItemList |
| RequestPackageSend | jogo | 0x9f |  | `cddb` | StorePackets.RequestPackageSend |
| RequestMultiSellChoose | jogo | 0xa7 |  | `cddddd` | UiPackets.MultiSellChoose |
| NetPing | jogo | 0xa8 |  | `cddd` | GamePackets.NetPing |
| RequestHennaItemList | jogo | 0xba |  | `cd` | SkillTrainPackets.RequestHennaList |
| RequestHennaItemInfo | jogo | 0xbb |  | `cd` | SkillTrainPackets.RequestHennaItemInfo |
| RequestHennaEquip | jogo | 0xbc |  | `cd` | SkillTrainPackets.RequestHennaEquip |
| RequestHennaUnequipList | jogo | 0xbd |  | `cd` | SkillTrainPackets.RequestHennaRemoveList |
| RequestHennaUnequipInfo | jogo | 0xbe |  | `cd` | SkillTrainPackets.RequestHennaItemRemoveInfo |
| RequestHennaUnequip | jogo | 0xbf |  | `cd` | SkillTrainPackets.RequestHennaRemove |
| RequestPledgePower | jogo | 0xc0 |  | `cdd` | ClanPackets.RequestPledgePower |
| RequestPledgePower | jogo | 0xc0 |  | `cddd` | ClanPackets.RequestPledgePower |
| RequestMakeMacro | jogo | 0xc1 |  | `cdSSSccb` | MacroPackets.RequestMakeMacro |
| RequestDeleteMacro | jogo | 0xc2 |  | `cd` | MacroPackets.RequestDeleteMacro |
| ConfirmDlg | jogo | 0xc5 |  | `cddd` | UiPackets.DlgAnswer |
| RequestManorList | jogo | 0xd0 | 0x08 | `ch` | GamePackets.RequestManorList |
| RequestPledgePowerGradeList | jogo | 0xd0 | 0x1a | `ch` | ClanPackets.RequestPledgePowerGradeList |
| RequestPledgeSetAcademyMasterPupil | jogo | 0xd0 | 0x19 | `chdSS` | ClanPackets.RequestPledgeSetAcademyMaster |
| RequestAutoSoulShot | jogo | 0xd0 | 0x05 | `chdd` | UiPackets.RequestAutoSoulShot |
| RequestPledgeMemberInfo | jogo | 0xd0 | 0x1d | `chdS` | ClanPackets.RequestPledgeMemberInfo |
| RequestPledgeReorganizeMember | jogo | 0xd0 | 0x24 | `chdSdS` | ClanPackets.RequestPledgeReorganizeMember |
| RequestPledgeWarList | jogo | 0xd0 | 0x1e | `chdd` | ClanPackets.RequestPledgeWarList |
| RequestPledgeMemberPowerInfo | jogo | 0xd0 | 0x1b | `chdS` | ClanPackets.RequestPledgeMemberPowerInfo |
| RequestPledgeSetMemberPowerGrade | jogo | 0xd0 | 0x1c | `chSd` | ClanPackets.RequestPledgeSetMemberPowerGrade |
| RL | login | 0x00 |  | `cxddddddhc` | LoginPackets.RequestAuthLogin |
| RequestServerLogin | login | 0x02 |  | `cddc` | LoginPackets.RequestServerLogin |
| RequestServerList | login | 0x05 |  | `cddc` | LoginPackets.RequestServerList |
| ResponseAuthGameGuard | login | 0x07 |  | `cddddd` | LoginPackets.AuthGameGuard |
| MoveBackwardToLocation | jogo | 0x01 |  | `cdddddd` | não enviado |
| Say | jogo | 0x02 |  | `cS` | não enviado |
| EW | jogo | 0x03 |  | `cS` | não enviado |
| RequestAttack | jogo | 0x04 |  | `cdddd` | não enviado |
| RequestEquipItem | jogo | 0x10 |  | `cdd` | não enviado |
| RequestDropItemFromPet | jogo | 0x12 |  | `cddddd` | não enviado |
| RequestTeleport | jogo | 0x1a |  | `cdddd` | não enviado |
| RequestTeleport | jogo | 0x1a |  | `cddddd` | não enviado |
| SocialAction | jogo | 0x1b |  | `cd` | não enviado |
| ChangeMoveType | jogo | 0x1c |  | `cd` | não enviado |
| ChangeWaitType | jogo | 0x1d |  | `cd` | não enviado |
| RequestBBSWrite | jogo | 0x22 |  | `cSSSSSS` | não enviado |
| RequestCreatePledge | jogo | 0x23 |  | `cS` | não enviado |
| RequestDismissPledge | jogo | 0x28 |  | `c` | não enviado |
| RequestDismissParty | jogo | 0x2d |  | `c` | não enviado |
| RequestMagicSkillList | jogo | 0x2e |  | `ddd` | não enviado |
| SAP | jogo | 0x30 |  | `c` | não enviado |
| RequestShortCutUse | jogo | 0x34 |  | `cddc` | não enviado |
| SendServerStatus | jogo | 0x39 |  | `cc` | não enviado |
| SendSummonCmd | jogo | 0x39 |  | `ccS` | não enviado |
| SendCharacterInfo | jogo | 0x39 |  | `ccS` | não enviado |
| SendL2ParamSetting | jogo | 0x39 |  | `ccdd` | não enviado |
| RequestMagicItem | jogo | 0x3e |  | `c` | não enviado |
| MoveWithDelta | jogo | 0x41 |  | `cddd` | não enviado |
| GetOnVehicle | jogo | 0x42 |  | `cdddd` | não enviado |
| GetOffVehicle | jogo | 0x43 |  | `cdddd` | não enviado |
| RequestSiegeInfo | jogo | 0x47 |  | `c` | não enviado |
| RequestSEKCustom | jogo | 0x49 |  | `cdd` | não enviado |
| RequestSetPledgeCrest | jogo | 0x53 |  | `cd` | não enviado |
| RequestSetPledgeCrest | jogo | 0x53 |  | `cdb` | não enviado |
| RequestEnchantItem | jogo | 0x58 |  | `cd` | não enviado |
| SendDestroyItem | jogo | 0x59 |  | `cdd` | não enviado |
| SendBypassBuildCmd | jogo | 0x5b |  | `cS` | não enviado |
| RequestFriendList | jogo | 0x60 |  | `c` | não enviado |
| RequestPledgeExtendedInfo | jogo | 0x67 |  | `cS` | não enviado |
| RequestPledgeCrest | jogo | 0x68 |  | `cd` | não enviado |
| RequestGMCommand | jogo | 0x6e |  | `cSdd` | não enviado |
| RequestListPartyWating | jogo | 0x6f |  | `cddd` | não enviado |
| RequestManagePartyRoom | jogo | 0x70 |  | `cdddddS` | não enviado |
| RequestJoinPartyRoom | jogo | 0x71 |  | `cdddd` | não enviado |
| RequestPrivateStoreManageCancel | jogo | 0x75 |  | `c` | não enviado |
| RequestPrivateStoreList | jogo | 0x78 |  | `cd` | não enviado |
| ReviveReply | jogo | 0x7a |  | `cd` | não enviado |
| RequestTutorialLinkHtml | jogo | 0x7b |  | `cS` | não enviado |
| RequestTutorialPassCmdToServer | jogo | 0x7c |  | `cS` | não enviado |
| RequestTutorialQuestionMarkPressed | jogo | 0x7d |  | `cd` | não enviado |
| RequestTutorialClientEvent | jogo | 0x7e |  | `cd` | não enviado |
| RequestPetition | jogo | 0x7f |  | `cSd` | não enviado |
| RequestPetitionCancel | jogo | 0x80 |  | `cS` | não enviado |
| RequestGMList | jogo | 0x81 |  | `c` | não enviado |
| RequestJoinAlly | jogo | 0x82 |  | `cd` | não enviado |
| RequestAnswerJoinAlly | jogo | 0x83 |  | `cd` | não enviado |
| RequestWithdrawAlly | jogo | 0x84 |  | `c` | não enviado |
| RequestOustAlly | jogo | 0x85 |  | `cS` | não enviado |
| RequestDismissAlly | jogo | 0x86 |  | `c` | não enviado |
| RequestSetAllyCrest | jogo | 0x87 |  | `cdb` | não enviado |
| RequestAllyCrest | jogo | 0x88 |  | `cd` | não enviado |
| RequestAllyInfo | jogo | 0x8e |  | `c` | não enviado |
| RequestPrivateStoreBuyManageCancel | jogo | 0x92 |  | `c` | não enviado |
| RequestPrivateStoreBuyList | jogo | 0x95 |  | `cd` | não enviado |
| SendTimeCheckPacket | jogo | 0x97 |  | `cdd` | não enviado |
| RequestSkillCoolTime | jogo | 0x9d |  | `c` | não enviado |
| RequestBlock | jogo | 0xa0 |  | `cd` | não enviado |
| RequestBlock | jogo | 0xa0 |  | `cdS` | não enviado |
| RequestCastleSiegeInfo | jogo | 0xa1 |  | `cd` | não enviado |
| RequestCastleSiegeAttackerList | jogo | 0xa2 |  | `cd` | não enviado |
| RequestCastleSiegeDefenderList | jogo | 0xa3 |  | `cd` | não enviado |
| RequestJoinCastleSiege | jogo | 0xa4 |  | `cddd` | não enviado |
| RequestConfirmCastleSiegeWaitingList | jogo | 0xa5 |  | `cddd` | não enviado |
| RequestSetCastleSiegeTime | jogo | 0xa6 |  | `cdd` | não enviado |
| RequestRemainTime | jogo | 0xa9 |  | `c` | não enviado |
| BypassUserCmd | jogo | 0xaa |  | `cd` | não enviado |
| GMSnoopEnd | jogo | 0xab |  | `cd` | não enviado |
| RequestRecipeBookOpen | jogo | 0xac |  | `cd` | não enviado |
| RequestRecipeItemDelete | jogo | 0xad |  | `cd` | não enviado |
| RequestRecipeItemMakeInfo | jogo | 0xae |  | `cd` | não enviado |
| RequestRecipeItemMakeSelf | jogo | 0xaf |  | `cd` | não enviado |
| RequestRecipeShopManageList | jogo | 0xb0 |  | `c` | não enviado |
| RequestRecipeShopMessageSet | jogo | 0xb1 |  | `cS` | não enviado |
| RequestRecipeShopListSet | jogo | 0xb2 |  | `cdb` | não enviado |
| RequestRecipeShopManageQuit | jogo | 0xb3 |  | `c` | não enviado |
| RequestRecipeShopManageCancel | jogo | 0xb4 |  | `c` | não enviado |
| RequestRecipeShopMakeInfo | jogo | 0xb5 |  | `cdd` | não enviado |
| RequestRecipeShopMakeDo | jogo | 0xb6 |  | `cddd` | não enviado |
| RequestRecipeShopSellList | jogo | 0xb7 |  | `cd` | não enviado |
| RequestObserverEndPacket | jogo | 0xb8 |  | `c` | não enviado |
| VoteSociality | jogo | 0xb9 |  | `cd` | não enviado |
| RequestProcureCrop | jogo | 0xc3 |  | `cddb` | não enviado |
| RequestBuySeed | jogo | 0xc4 |  | `cddb` | não enviado |
| RequestPreviewItem | jogo | 0xc6 |  | `cdddb` | não enviado |
| RequestSSQStatus | jogo | 0xc7 |  | `cc` | não enviado |
| PetitionVote | jogo | 0xc8 |  | `cddS` | não enviado |
| ReplyGameGuardQuery | jogo | 0xca |  | `cdddd` | não enviado |
| RequestSendL2FriendSay | jogo | 0xcc |  | `cSS` | não enviado |
| RequestOpenMinimap | jogo | 0xcd |  | `c` | não enviado |
| RequestSendMsnChatLog | jogo | 0xce |  | `cSSd` | não enviado |
| RequestReload | jogo | 0xcf |  | `c` | não enviado |
| RequestDuelStart | jogo | 0xd0 | 0x27 | `chSd` | não enviado |
| RequestRefineCancel | jogo | 0xd0 | 0x2e | `chd` | não enviado |
| RequestGetBossRecord | jogo | 0xd0 | 0x18 | `chd` | não enviado |
| RequestConfirmTargetItem | jogo | 0xd0 | 0x29 | `chd` | não enviado |
| RequestSetCrop | jogo | 0xd0 | 0x0b | `chddb` | não enviado |
| RequestWithdrawPartyRoom | jogo | 0xd0 | 0x03 | `chdd` | não enviado |
| RequestDismissPartyRoom | jogo | 0xd0 | 0x02 | `chdd` | não enviado |
| RequestExMPCCShowPartyMembersInfo | jogo | 0xd0 | 0x26 | `chd` | não enviado |
| RequestDuelAnswerStart | jogo | 0xd0 | 0x28 | `chddd` | não enviado |
| RequestExOustFromMPCC | jogo | 0xd0 | 0x0f | `chS` | não enviado |
| RequestCursedWeaponLocation | jogo | 0xd0 | 0x23 | `ch` | não enviado |
| RequestConfirmRefinerItem | jogo | 0xd0 | 0x2a | `chdd` | não enviado |
| RequestExEnchantSkillInfo | jogo | 0xd0 | 0x06 | `chdd` | não enviado |
| RequestExSetPledgeCrestLarge | jogo | 0xd0 | 0x11 | `chd` | não enviado |
| RequestExSetPledgeCrestLarge | jogo | 0xd0 | 0x11 | `chdb` | não enviado |
| RequestWriteHeroWords | jogo | 0xd0 | 0x0c | `chS` | não enviado |
| RequestExEnchantSkill | jogo | 0xd0 | 0x07 | `chdd` | não enviado |
| RequestRefine | jogo | 0xd0 | 0x2c | `chdddd` | não enviado |
| RequestListPartyMatchingWaitingRoom | jogo | 0xd0 | 0x16 | `chdddd` | não enviado |
| RequestOustFromPartyRoom | jogo | 0xd0 | 0x01 | `chd` | não enviado |
| RequestCursedWeaponList | jogo | 0xd0 | 0x22 | `ch` | não enviado |
| RequestDuelSurrender | jogo | 0xd0 | 0x30 | `ch` | não enviado |
| RequestExFishRanking | jogo | 0xd0 | 0x1f | `ch` | não enviado |
| RequestHandOverPartyMaster | jogo | 0xd0 | 0x04 | `chS` | não enviado |
| RequestExChangeName | jogo | 0xd0 | 0x31 | `chdSd` | não enviado |
| RequestExPledgeCrestLarge | jogo | 0xd0 | 0x10 | `chd` | não enviado |
| AnswerJoinPartyRoom | jogo | 0xd0 | 0x15 | `chd` | não enviado |
| RequestExAcceptJoinMPCC | jogo | 0xd0 | 0x0e | `chdd` | não enviado |
| RequestSetSeed | jogo | 0xd0 | 0x0a | `chddb` | não enviado |
| RequestExMagicSkillUseGround | jogo | 0xd0 | 0x2f | `chdddddc` | não enviado |
| RequestConfirmGemStone | jogo | 0xd0 | 0x2b | `chdddd` | não enviado |
| RequestPCCafeCouponUse | jogo | 0xd0 | 0x20 | `chS` | não enviado |
| RequestConfirmCancelItem | jogo | 0xd0 | 0x2d | `chd` | não enviado |
| RequestAskJoinPartyRoom | jogo | 0xd0 | 0x14 | `chS` | não enviado |
| RequestOlympiadMatchList | jogo | 0xd0 | 0x13 | `ch` | não enviado |
| RequestProcureCropList | jogo | 0xd0 | 0x09 | `chdb` | não enviado |
| RequestExitPartyMatchingWaitingRoom | jogo | 0xd0 | 0x17 | `ch` | não enviado |
| RequestExAskJoinMPCC | jogo | 0xd0 | 0x0d | `chS` | não enviado |
| RequestOlympiadObserverEnd | jogo | 0xd0 | 0x12 | `ch` | não enviado |
| RequestSCCheck | login | 0x06 |  | `cdx` | não enviado |
