# Pacotes cliente → servidor enviados pelo engine.dll (Interlude)

Gerado por `scripts/request_table.py` a partir da decompilação Ghidra de todos os métodos `UNetworkHandler::*` exportados pelo `engine.dll` (`out/re/engine_networkhandler.c`). Cada envio é `conexão->Send(formato, opcode[, subopcode], ...)`; formato: `c` byte, `h` short, `d` int, `Q` int64, `f` double, `S` string UTF-16, `b` bloco. Coluna aCis = classe do aCis 382 com o mesmo opcode (referência).

- Métodos decompilados: **323**; que enviam pacote diretamente: **237**; envios distintos: **245**.

## Handshake

1. **Servidor de login:** `ResponseAuthGameGuard` (0x07) → GGAuth → `RequestAuthLogin` (método `RL`, 0x00, bloco RSA) → LoginOk → `RequestServerList` (0x05) → ServerList → `RequestServerLogin` (0x02) → PlayOk.
2. **Troca de servidor:** o tratador do PlayOk (`FUN_10424500`) fecha o socket de login e conecta no servidor de jogo (`FUN_10420c60`).
3. **Servidor de jogo:** ao conectar, o cliente envia `ProtocolVersion` (0x00 `cdbd`, revisão **746**) → VersionCheck (0x00; o tratador `FUN_1040d000` monta a chave Blowfish combinando a chave recebida com a constante estática `C8 27 93 01 A1 6C 31 97`) → o cliente envia `AuthLogin` (0x08 `cSddddd`) → CharSelectInfo.

| método | servidor | opcode | sub | formato | aCis | nota |
|---|---|---|---|---|---|---|
| RequestDropItemFromPet | jogo | 0x12 |  | `cddddd` | RequestDropItem (IN_GAME) |  |
| RequestSetPledgeCrest | jogo | 0x53 |  | `cd` | RequestSetPledgeCrest (IN_GAME) |  |
| RequestSetPledgeCrest | jogo | 0x53 |  | `cdb` | RequestSetPledgeCrest (IN_GAME) |  |
| RequestDuelStart | jogo | 0xd0 | 0x27 | `chSd` | RequestDuelStart (IN_GAME) |  |
| RequestJoinCastleSiege | jogo | 0xa4 |  | `cddd` | RequestJoinSiege (IN_GAME) |  |
| RequestRecipeItemDelete | jogo | 0xad |  | `cd` | RequestRecipeBookDestroy (IN_GAME) |  |
| RequestRefineCancel | jogo | 0xd0 | 0x2e | `chd` | RequestRefineCancel (IN_GAME) |  |
| RequestAllyCrest | jogo | 0x88 |  | `cd` | RequestAllyCrest (IN_GAME) |  |
| RequestOustPledgeMember | jogo | 0x27 |  | `cS` | RequestOustPledgeMember (IN_GAME) |  |
| RequestGetBossRecord | jogo | 0xd0 | 0x18 | `chd` | RequestGetBossRecord (IN_GAME) |  |
| RequestConfirmTargetItem | jogo | 0xd0 | 0x29 | `chd` | RequestConfirmTargetItem (IN_GAME) |  |
| RequestShortCutDel | jogo | 0x35 |  | `cd` | RequestShortCutDel (IN_GAME) |  |
| RequestCastleSiegeInfo | jogo | 0xa1 |  | `cd` | — |  |
| RequestWithDrawalPledge | jogo | 0x26 |  | `c` | RequestWithdrawPledge (IN_GAME) |  |
| RequestJoinPledge | jogo | 0x24 |  | `cdd` | RequestJoinPledge (IN_GAME) |  |
| RequestRecipeShopMakeDo | jogo | 0xb6 |  | `cddd` | RequestRecipeShopMakeItem (IN_GAME) |  |
| ChangeMoveType | jogo | 0x1c |  | `cd` | RequestChangeMoveType (IN_GAME) |  |
| RequestSetCrop | jogo | 0xd0 | 0xb | `chddb` | RequestSetCrop (IN_GAME) |  |
| RequestRecipeShopSellList | jogo | 0xb7 |  | `cd` | RequestRecipeShopManagePrev (IN_GAME) |  |
| Say2 | jogo | 0x38 |  | `cSdS` | Say2 (IN_GAME) |  |
| Say2 | jogo | 0x38 |  | `cSd` | Say2 (IN_GAME) |  |
| RequestManagePartyRoom | jogo | 0x70 |  | `cdddddS` | RequestPartyMatchList (IN_GAME) |  |
| RequestWithdrawPartyRoom | jogo | 0xd0 | 0x3 | `chdd` | RequestWithdrawPartyRoom (IN_GAME) |  |
| RequestHennaUnequipList | jogo | 0xbd |  | `cd` | RequestHennaRemoveList (IN_GAME) |  |
| RequestJoinParty | jogo | 0x29 |  | `cSd` | RequestJoinParty (IN_GAME) |  |
| RequestDismissPartyRoom | jogo | 0xd0 | 0x2 | `chdd` | RequestDismissPartyRoom (IN_GAME) |  |
| SendBypassBuildCmd | jogo | 0x5b |  | `cS` | SendBypassBuildCmd (IN_GAME) |  |
| RequestPetGetItem | jogo | 0x8f |  | `cd` | RequestPetGetItem (IN_GAME) |  |
| RequestBuySeed | jogo | 0xc4 |  | `cddb` | RequestBuySeed (IN_GAME) |  |
| RequestAnswerJoinParty | jogo | 0x2a |  | `cd` | RequestAnswerJoinParty (IN_GAME) |  |
| SendWareHouseWithdrawList | jogo | 0x32 |  | `cdb` | SendWarehouseWithdrawList (IN_GAME) |  |
| RequestFriendDel | jogo | 0x61 |  | `cS` | RequestFriendDel (IN_GAME) |  |
| RequestServerList | login | 0x5 |  | `cddc` | RequestServerList (LOGIN_AUTHED_LOGIN) |  |
| MoveBackwardToLocation | jogo | 0x1 |  | `cdddddd` | MoveBackwardToLocation (IN_GAME) |  |
| RequestPrivateStoreManageCancel | jogo | 0x75 |  | `c` | RequestPrivateStoreManageCancel (IN_GAME) |  |
| RequestExMPCCShowPartyMembersInfo | jogo | 0xd0 | 0x26 | `chd` | RequestExMPCCShowPartyMembersInfo (IN_GAME) |  |
| RequestDeleteMacro | jogo | 0xc2 |  | `cd` | RequestDeleteMacro (IN_GAME) |  |
| RequestDuelAnswerStart | jogo | 0xd0 | 0x28 | `chddd` | RequestDuelAnswerStart (IN_GAME) |  |
| RequestPledgePower | jogo | 0xc0 |  | `cdd` | RequestPledgePower (IN_GAME) |  |
| RequestPledgePower | jogo | 0xc0 |  | `cddd` | RequestPledgePower (IN_GAME) |  |
| RequestExOustFromMPCC | jogo | 0xd0 | 0xf | `chS` | RequestExOustFromMPCC (IN_GAME) |  |
| RequestSetAllyCrest | jogo | 0x87 |  | `cdb` | RequestSetAllyCrest (IN_GAME) |  |
| SendServerStatus | jogo | 0x39 |  | `cc` | — |  |
| RequestCursedWeaponLocation | jogo | 0xd0 | 0x23 | `ch` | RequestCursedWeaponLocation (IN_GAME) |  |
| SetPrivateStoreBuyMsg | jogo | 0x94 |  | `cS` | SetPrivateStoreMsgBuy (IN_GAME) |  |
| RequestAllyInfo | jogo | 0x8e |  | `c` | RequestAllyInfo (IN_GAME) |  |
| RequestAddTradeItem | jogo | 0x16 |  | `cddd` | AddTradeItem (IN_GAME) |  |
| RequestUseItem | jogo | 0x14 |  | `cdd` | UseItem (IN_GAME) |  |
| RequestQuestList | jogo | 0x63 |  | `c` | RequestQuestList (IN_GAME) |  |
| ReplyGameGuardQuery | jogo | 0xca |  | `cdddd` | GameGuardReply (IN_GAME) |  |
| RequestDestroyItem | jogo | 0x59 |  | `cdd` | RequestDestroyItem (IN_GAME) |  |
| RequestOpenMinimap | jogo | 0xcd |  | `c` | RequestShowMiniMap (IN_GAME) |  |
| SetPrivateStoreBuyList | jogo | 0x91 |  | `cdb` | SetPrivateStoreListBuy (IN_GAME) |  |
| RequestConfirmRefinerItem | jogo | 0xd0 | 0x2a | `chdd` | RequestConfirmRefinerItem (IN_GAME) |  |
| RequestRemainTime | jogo | 0xa9 |  | `c` | — |  |
| RequestSellItem | jogo | 0x1e |  | `cddb` | RequestSellItem (IN_GAME) |  |
| RequestPledgeInfo | jogo | 0x66 |  | `cd` | RequestPledgeInfo (IN_GAME) |  |
| RequestRecipeItemMakeInfo | jogo | 0xae |  | `cd` | RequestRecipeItemMakeInfo (IN_GAME) |  |
| RequestRecipeShopManageCancel | jogo | 0xb4 |  | `c` | — |  |
| RequestExEnchantSkillInfo | jogo | 0xd0 | 0x6 | `chdd` | RequestExEnchantSkillInfo (IN_GAME) |  |
| RequestBypassToServer | jogo | 0x21 |  | `cS` | RequestBypassToServer (IN_GAME) |  |
| BypassUserCmd | jogo | 0xaa |  | `cd` | RequestUserCommand (IN_GAME) |  |
| RequestMagicSkillUse | jogo | 0x2f |  | `cddc` | RequestMagicSkillUse (IN_GAME) |  |
| RequestBBSWrite | jogo | 0x22 |  | `cSSSSSS` | RequestBBSwrite (IN_GAME) |  |
| GetOnVehicle | jogo | 0x42 |  | `cdddd` | RequestGetOnVehicle (IN_GAME) |  |
| RequestManorList | jogo | 0xd0 | 0x8 | `ch` | RequestManorList (ENTERING), RequestManorList (IN_GAME) |  |
| RequestExSetPledgeCrestLarge | jogo | 0xd0 | 0x11 | `chd` | RequestExSetPledgeCrestLarge (IN_GAME) |  |
| RequestExSetPledgeCrestLarge | jogo | 0xd0 | 0x11 | `chdb` | RequestExSetPledgeCrestLarge (IN_GAME) |  |
| RequestBlock | jogo | 0xa0 |  | `cd` | RequestBlock (IN_GAME) |  |
| RequestBlock | jogo | 0xa0 |  | `cdS` | RequestBlock (IN_GAME) |  |
| RequestMagicItem | jogo | 0x3e |  | `c` | DummyPacket (IN_GAME) |  |
| RequestPetitionCancel | jogo | 0x80 |  | `cS` | RequestPetitionCancel (IN_GAME) |  |
| RequestWriteHeroWords | jogo | 0xd0 | 0xc | `chS` | RequestWriteHeroWords (IN_GAME) |  |
| SendSummonCmd | jogo | 0x39 |  | `ccS` | — |  |
| RequestGetItemFromPet | jogo | 0x8c |  | `cddd` | RequestGetItemFromPet (IN_GAME) |  |
| RequestTargetCancel | jogo | 0x37 |  | `ch` | RequestTargetCanceld (IN_GAME) |  |
| RequestTutorialPassCmdToServer | jogo | 0x7c |  | `cS` | RequestTutorialPassCmdToServer (IN_GAME) |  |
| RequestSendL2FriendSay | jogo | 0xcc |  | `cSS` | RequestSendFriendMsg (IN_GAME) |  |
| SendCharacterInfo | jogo | 0x39 |  | `ccS` | — |  |
| RequestTradeDone | jogo | 0x17 |  | `cd` | TradeDone (IN_GAME) |  |
| RequestPackageSendableItemList | jogo | 0x9e |  | `cd` | RequestPackageSendableItemList (IN_GAME) |  |
| RequestRecipeBookOpen | jogo | 0xac |  | `cd` | RequestRecipeBookOpen (IN_GAME) |  |
| RequestHennaUnequipInfo | jogo | 0xbe |  | `cd` | RequestHennaItemRemoveInfo (IN_GAME) |  |
| RequestSendMsnChatLog | jogo | 0xce |  | `cSSd` | — |  |
| RequestExEnchantSkill | jogo | 0xd0 | 0x7 | `chdd` | RequestExEnchantSkill (IN_GAME) |  |
| Action | jogo | 0x4 |  | `cddddc` | Action (IN_GAME) |  |
| RequestJoinPartyRoom | jogo | 0x71 |  | `cdddd` | RequestPartyMatchDetail (IN_GAME) |  |
| RequestRecipeShopMessageSet | jogo | 0xb1 |  | `cS` | RequestRecipeShopMessageSet (IN_GAME) |  |
| RequestGMList | jogo | 0x81 |  | `c` | RequestGmList (IN_GAME) |  |
| RequestConfirmCastleSiegeWaitingList | jogo | 0xa5 |  | `cddd` | RequestConfirmSiegeWaitingList (IN_GAME) |  |
| RequestRefine | jogo | 0xd0 | 0x2c | `chdddd` | RequestRefine (IN_GAME) |  |
| RequestStartPledgeWar | jogo | 0x4d |  | `cS` | RequestStartPledgeWar (IN_GAME) |  |
| RequestListPartyMatchingWaitingRoom | jogo | 0xd0 | 0x16 | `chdddd` | RequestListPartyMatchingWaitingRoom (IN_GAME) |  |
| RequestBuyItem | jogo | 0x1f |  | `cddb` | RequestBuyItem (IN_GAME) |  |
| Atk | jogo | 0xa |  | `cddddc` | AttackRequest (IN_GAME) |  |
| RequestOustFromPartyRoom | jogo | 0xd0 | 0x1 | `chd` | RequestOustFromPartyRoom (IN_GAME) |  |
| RequestCursedWeaponList | jogo | 0xd0 | 0x22 | `ch` | RequestCursedWeaponList (IN_GAME) |  |
| FinishRotating | jogo | 0x4b |  | `cdd` | FinishRotating (IN_GAME) |  |
| GetOffVehicle | jogo | 0x43 |  | `cdddd` | RequestGetOffVehicle (IN_GAME) |  |
| RequestDuelSurrender | jogo | 0xd0 | 0x30 | `ch` | RequestDuelSurrender (IN_GAME) |  |
| MoveWithDelta | jogo | 0x41 |  | `cddd` | — |  |
| RequestTutorialLinkHtml | jogo | 0x7b |  | `cS` | RequestTutorialLinkHtml (IN_GAME) |  |
| RequestFriendAddReply | jogo | 0x5f |  | `cd` | RequestAnswerFriendInvite (IN_GAME) |  |
| RequestGameStart | jogo | 0xd |  | `cdhddd` | CharacterSelected (AUTHED) |  |
| RequestShortCutUse | jogo | 0x34 |  | `cddc` | DummyPacket (IN_GAME) |  |
| RequestSSQStatus | jogo | 0xc7 |  | `cc` | RequestSSQStatus (IN_GAME) |  |
| RequestRestart | jogo | 0x46 |  | `c` | RequestRestart (IN_GAME) |  |
| RequestHennaItemList | jogo | 0xba |  | `cd` | RequestHennaList (IN_GAME) |  |
| RequestHennaItemInfo | jogo | 0xbb |  | `cd` | RequestHennaItemInfo (IN_GAME) |  |
| RequestShortCutReg | jogo | 0x33 |  | `cdddd` | RequestShortCutReg (IN_GAME) |  |
| RequestOustAlly | jogo | 0x85 |  | `cS` | AllyDismiss (IN_GAME) |  |
| RequestChangePetName | jogo | 0x89 |  | `cS` | RequestChangePetName (IN_GAME) |  |
| RequestHennaEquip | jogo | 0xbc |  | `cd` | RequestHennaEquip (IN_GAME) |  |
| RequestCreatePledge | jogo | 0x23 |  | `cS` | DummyPacket (IN_GAME) |  |
| SAP | jogo | 0x30 |  | `c` | Appearing (IN_GAME) |  |
| RequestLinkHtml | jogo | 0x20 |  | `cS` | RequestLinkHtml (IN_GAME) |  |
| RequestExFishRanking | jogo | 0xd0 | 0x1f | `ch` | RequestExFishRanking (IN_GAME) |  |
| SendLogOutPacket | jogo | 0x9 |  | `c` | Logout (AUTHED), Logout (IN_GAME) |  |
| RequestPrivateStoreManage | jogo | 0x73 |  | `c` | RequestPrivateStoreManageSell (IN_GAME) |  |
| RequestRecipeShopManageQuit | jogo | 0xb3 |  | `c` | RequestRecipeShopManageQuit (IN_GAME) |  |
| RequestSkillItem | jogo | 0x3f |  | `c` | RequestSkillList (IN_GAME) |  |
| RequestGiveItemToPet | jogo | 0x8b |  | `cdd` | RequestGiveItemToPet (IN_GAME) |  |
| RequestMagicSkillList | jogo | 0x2e |  | `ddd` | DummyPacket (IN_GAME) |  |
| RequestHandOverPartyMaster | jogo | 0xd0 | 0x4 | `chS` | RequestChangePartyLeader (IN_GAME) |  |
| RequestJoinAlly | jogo | 0x82 |  | `cd` | RequestJoinAlly (IN_GAME) |  |
| SendPrivateStoreBuyList | jogo | 0x79 |  | `cddb` | RequestPrivateStoreBuy (IN_GAME) |  |
| RequestTutorialClientEvent | jogo | 0x7e |  | `cd` | RequestTutorialClientEvent (IN_GAME) |  |
| RequestSCCheck | login | 0x6 |  | `cdx` | — |  |
| RequestProcureCrop | jogo | 0xc3 |  | `cddb` | RequestBuyProcure (IN_GAME) |  |
| RequestServerLogin | login | 0x2 |  | `cddc` | RequestServerLogin (LOGIN_AUTHED_LOGIN) |  |
| RequestMultiSellChoose | jogo | 0xa7 |  | `cddddd` | MultiSellChoose (IN_GAME) |  |
| RequestPrivateStoreBuyQuit | jogo | 0x93 |  | `c` | RequestPrivateStoreQuitBuy (IN_GAME) |  |
| RequestRecipeItemMakeSelf | jogo | 0xaf |  | `cd` | RequestRecipeItemMakeSelf (IN_GAME) |  |
| GMSnoopEnd | jogo | 0xab |  | `cd` | SnoopQuit (IN_GAME) |  |
| RequestExChangeName | jogo | 0xd0 | 0x31 | `chdSd` | — |  |
| RequestDismissParty | jogo | 0x2d |  | `c` | — |  |
| RequestExPledgeCrestLarge | jogo | 0xd0 | 0x10 | `chd` | RequestExPledgeCrestLarge (IN_GAME) |  |
| RequestPledgePowerGradeList | jogo | 0xd0 | 0x1a | `ch` | RequestPledgePowerGradeList (IN_GAME) |  |
| RequestWithdrawAlly | jogo | 0x84 |  | `c` | AllyLeave (IN_GAME) |  |
| RequestShowboard | jogo | 0x57 |  | `cd` | RequestShowBoard (IN_GAME) |  |
| RequestDestroyQuest | jogo | 0x64 |  | `cd` | RequestQuestAbort (IN_GAME) |  |
| AnswerJoinPartyRoom | jogo | 0xd0 | 0x15 | `chd` | AnswerJoinPartyRoom (IN_GAME) |  |
| RequestGMCommand | jogo | 0x6e |  | `cSdd` | RequestGMCommand (IN_GAME) |  |
| ChangeWaitType | jogo | 0x1d |  | `cd` | RequestChangeWaitType (IN_GAME) |  |
| RequestExAcceptJoinMPCC | jogo | 0xd0 | 0xe | `chdd` | RequestExAcceptJoinMPCC (IN_GAME) |  |
| RequestSiegeInfo | jogo | 0x47 |  | `c` | — |  |
| StartRotating | jogo | 0x4a |  | `cdd` | StartRotating (IN_GAME) |  |
| RequestFriendInvite | jogo | 0x5e |  | `cS` | RequestFriendInvite (IN_GAME) |  |
| RequestAcquireSkillInfo | jogo | 0x6b |  | `cddd` | RequestAcquireSkillInfo (IN_GAME) |  |
| RequestAttack | jogo | 0x4 |  | `cdddd` | Action (IN_GAME) |  |
| RequestStopPledgeWar | jogo | 0x4f |  | `cS` | RequestStopPledgeWar (IN_GAME) |  |
| RequestSetSeed | jogo | 0xd0 | 0xa | `chddb` | RequestSetSeed (IN_GAME) |  |
| VoteSociality | jogo | 0xb9 |  | `cd` | RequestEvaluate (IN_GAME) |  |
| RequestAcquireSkill | jogo | 0x6c |  | `cddd` | RequestAcquireSkill (IN_GAME) |  |
| RequestListPartyWating | jogo | 0x6f |  | `cddd` | RequestPartyMatchConfig (IN_GAME) |  |
| RequestEnterWorldPacket | jogo | 0x3 |  | `cbddddbdcccccccccccccccccccc` | EnterWorld (ENTERING) |  |
| RequestExMagicSkillUseGround | jogo | 0xd0 | 0x2f | `chdddddc` | RequestExMagicSkillUseGround (IN_GAME) |  |
| RequestUnEquipItem | jogo | 0x11 |  | `cd` | RequestUnEquipItem (IN_GAME) |  |
| RequestDismissAlly | jogo | 0x86 |  | `c` | RequestDismissAlly (IN_GAME) |  |
| RequestCastleSiegeAttackerList | jogo | 0xa2 |  | `cd` | RequestSiegeAttackerList (IN_GAME) |  |
| RequestRecipeShopMakeInfo | jogo | 0xb5 |  | `cdd` | RequestRecipeShopMakeInfo (IN_GAME) |  |
| RL | login | 0x0 |  | `cxddddddhc` | RequestAuthLogin (LOGIN_AUTHED_GG) |  |
| RequestAnswerJoinAlly | jogo | 0x83 |  | `cd` | RequestAnswerJoinAlly (IN_GAME) |  |
| RequestEquipItem | jogo | 0x10 |  | `cdd` | — |  |
| RequestOustPartyMember | jogo | 0x2c |  | `cS` | RequestOustPartyMember (IN_GAME) |  |
| RequestActionUse | jogo | 0x45 |  | `cddc` | RequestActionUse (IN_GAME) |  |
| RequestPledgeSetAcademyMasterPupil | jogo | 0xd0 | 0x19 | `chdSS` | RequestPledgeSetAcademyMaster (IN_GAME) |  |
| RequestPrivateStoreList | jogo | 0x78 |  | `cd` | — |  |
| RequestDropItem | jogo | 0x12 |  | `cddddd` | RequestDropItem (IN_GAME) |  |
| RequestConfirmGemStone | jogo | 0xd0 | 0x2b | `chdddd` | RequestConfirmGemStone (IN_GAME) |  |
| RequestRestartPoint | jogo | 0x6d |  | `cd` | RequestRestartPoint (IN_GAME) |  |
| RequestPrivateStoreQuit | jogo | 0x76 |  | `c` | RequestPrivateStoreQuitSell (IN_GAME) |  |
| RequestRecipeShopManageList | jogo | 0xb0 |  | `c` | RequestRecipeShopManageList (IN_GAME) |  |
| SendL2ParamSetting | jogo | 0x39 |  | `ccdd` | — |  |
| RequestEnchantItem | jogo | 0x58 |  | `cd` | RequestEnchantItem (IN_GAME) |  |
| RequestPCCafeCouponUse | jogo | 0xd0 | 0x20 | `chS` | RequestPCCafeCouponUse (IN_GAME) |  |
| RequestPreviewItem | jogo | 0xc6 |  | `cdddb` | RequestPreviewItem (IN_GAME) |  |
| RequestSetCastleSiegeTime | jogo | 0xa6 |  | `cdd` | — |  |
| RequestNewCharacter | jogo | 0xe |  | `c` | NewCharacter (AUTHED) |  |
| RequestReload | jogo | 0xcf |  | `c` | RequestRecordInfo (IN_GAME) |  |
| SocialAction | jogo | 0x1b |  | `cd` | RequestSocialAction (IN_GAME) |  |
| RequestCastleSiegeDefenderList | jogo | 0xa3 |  | `cd` | RequestSiegeDefenderList (IN_GAME) |  |
| RequestSkillCoolTime | jogo | 0x9d |  | `c` | — |  |
| RequestPrivateStoreBuyManageCancel | jogo | 0x92 |  | `c` | — |  |
| RequestTeleport | jogo | 0x1a |  | `cdddd` | DummyPacket (IN_GAME) |  |
| RequestTeleport | jogo | 0x1a |  | `cddddd` | DummyPacket (IN_GAME) |  |
| RequestAutoSoulShot | jogo | 0xd0 | 0x5 | `chdd` | RequestAutoSoulShot (IN_GAME) |  |
| RequestCrystallizeItem | jogo | 0x72 |  | `cdd` | RequestCrystallizeItem (IN_GAME) |  |
| RequestObserverEndPacket | jogo | 0xb8 |  | `c` | ObserverReturn (IN_GAME) |  |
| RequestPetUseItem | jogo | 0x8a |  | `cd` | RequestPetUseItem (IN_GAME) |  |
| RequestPledgeMemberInfo | jogo | 0xd0 | 0x1d | `chdS` | RequestPledgeMemberInfo (IN_GAME) |  |
| RequestConfirmCancelItem | jogo | 0xd0 | 0x2d | `chd` | RequestConfirmCancelItem (IN_GAME) |  |
| RequestCharacterCreate | jogo | 0xb |  | `cSdddddddddddd` | CharacterCreate (AUTHED) |  |
| SendWareHouseDepositList | jogo | 0x31 |  | `cdb` | SendWarehouseDepositList (IN_GAME) |  |
| ConfirmDlg | jogo | 0xc5 |  | `cddd` | DlgAnswer (IN_GAME) |  |
| Say | jogo | 0x2 |  | `cS` | — |  |
| SendTimeCheckPacket | jogo | 0x97 |  | `cdd` | — |  |
| NetPing | jogo | 0xa8 |  | `cddd` | — |  |
| RequestAskJoinPartyRoom | jogo | 0xd0 | 0x14 | `chS` | RequestAskJoinPartyRoom (IN_GAME) |  |
| RequestFriendList | jogo | 0x60 |  | `c` | RequestFriendList (IN_GAME) |  |
| RequestWithDrawalParty | jogo | 0x2b |  | `c` | RequestWithdrawParty (IN_GAME) |  |
| RequestPledgeMemberList | jogo | 0x3c |  | `c` | RequestPledgeMemberList (IN_GAME) |  |
| SetPrivateStoreMsg | jogo | 0x77 |  | `cS` | SetPrivateStoreMsgSell (IN_GAME) |  |
| AnswerTradeRequest | jogo | 0x44 |  | `cd` | AnswerTradeRequest (IN_GAME) |  |
| CanNotMoveAnymore | jogo | 0x5d |  | `cddddd` | CannotMoveAnymoreInVehicle (IN_GAME) |  |
| CanNotMoveAnymore | jogo | 0x36 |  | `cdddd` | CannotMoveAnymore (IN_GAME) |  |
| RequestMakeMacro | jogo | 0xc1 |  | `cdSSSccb` | RequestMakeMacro (IN_GAME) |  |
| ValidatePosition | jogo | 0x48 |  | `cddddd` | ValidatePosition (IN_GAME) |  |
| EW | jogo | 0x3 |  | `cS` | EnterWorld (ENTERING) |  |
| RequestPetition | jogo | 0x7f |  | `cSd` | RequestPetition (IN_GAME) |  |
| RequestItemList | jogo | 0xf |  | `c` | RequestItemList (IN_GAME) |  |
| RequestHennaUnequip | jogo | 0xbf |  | `cd` | RequestHennaRemove (IN_GAME) |  |
| SetPrivateStoreList | jogo | 0x74 |  | `cddb` | SetPrivateStoreListSell (IN_GAME) |  |
| SendDestroyItem | jogo | 0x59 |  | `cdd` | RequestDestroyItem (IN_GAME) |  |
| RequestPledgeReorganizeMember | jogo | 0xd0 | 0x24 | `chdSdS` | RequestPledgeReorganizeMember (IN_GAME) |  |
| RequestOlympiadMatchList | jogo | 0xd0 | 0x13 | `ch` | RequestOlympiadMatchList (IN_GAME) |  |
| RequestGiveNickName | jogo | 0x55 |  | `cSS` | RequestGiveNickName (IN_GAME) |  |
| ResponseAuthGameGuard | login | 0x7 |  | `cddddd` | AuthGameGuard (LOGIN_CONNECTED) |  |
| RequestAnswerJoinPledge | jogo | 0x25 |  | `cd` | RequestAnswerJoinPledge (IN_GAME) |  |
| RequestProcureCropList | jogo | 0xd0 | 0x9 | `chdb` | RequestProcureCropList (IN_GAME) |  |
| RequestExitPartyMatchingWaitingRoom | jogo | 0xd0 | 0x17 | `ch` | RequestExitPartyMatchingWaitingRoom (IN_GAME) |  |
| RequestTutorialQuestionMarkPressed | jogo | 0x7d |  | `cd` | RequestTutorialQuestionMark (IN_GAME) |  |
| RequestCharacterRestore | jogo | 0x62 |  | `cd` | CharacterRestore (AUTHED) |  |
| RequestPledgeWarList | jogo | 0xd0 | 0x1e | `chdd` | RequestPledgeWarList (IN_GAME) |  |
| RequestPledgeMemberPowerInfo | jogo | 0xd0 | 0x1b | `chdS` | RequestPledgeMemberPowerInfo (IN_GAME) |  |
| PetitionVote | jogo | 0xc8 |  | `cddS` | — |  |
| RequestPrivateStoreBuyList | jogo | 0x95 |  | `cd` | — |  |
| RequestPledgeCrest | jogo | 0x68 |  | `cd` | RequestPledgeCrest (AUTHED), RequestPledgeCrest (IN_GAME) |  |
| RequestCharacterDelete | jogo | 0xc |  | `cd` | CharacterDelete (AUTHED) |  |
| SendPrivateStoreBuyBuyList | jogo | 0x96 |  | `cddb` | RequestPrivateStoreSell (IN_GAME) |  |
| MTL | jogo | 0x5c |  | `cddddddd` | RequestMoveToLocationInVehicle (IN_GAME) |  |
| MTL | jogo | 0x1 |  | `cddddddd` | MoveBackwardToLocation (IN_GAME) |  |
| RequestTrade | jogo | 0x15 |  | `cd` | TradeRequest (IN_GAME) |  |
| RequestExAskJoinMPCC | jogo | 0xd0 | 0xd | `chS` | RequestExAskJoinMPCC (IN_GAME) |  |
| RequestDismissPledge | jogo | 0x28 |  | `c` | — |  |
| RequestPledgeExtendedInfo | jogo | 0x67 |  | `cS` | — |  |
| RequestPrivateStoreBuyManage | jogo | 0x90 |  | `c` | RequestPrivateStoreManageBuy (IN_GAME) |  |
| RequestPledgeSetMemberPowerGrade | jogo | 0xd0 | 0x1c | `chSd` | RequestPledgeSetMemberPowerGrade (IN_GAME) |  |
| RequestRecipeShopListSet | jogo | 0xb2 |  | `cdb` | RequestRecipeShopListSet (IN_GAME) |  |
| RequestOlympiadObserverEnd | jogo | 0xd0 | 0x12 | `ch` | RequestOlympiadObserverEnd (IN_GAME) |  |
| RequestPackageSend | jogo | 0x9f |  | `cddb` | RequestPackageSend (IN_GAME) |  |
| ReviveReply | jogo | 0x7a |  | `cd` | — |  |
| RequestSEKCustom | jogo | 0x49 |  | `cdd` | — |  |
| (ao conectar no servidor de jogo) FUN_10401dc0 | jogo | 0x0 |  | `cdbd` | ProtocolVersion (CONNECTED) | ProtocolVersion: versao 746, lida de "#Revision: 746 $" com sscanf("%cRevision: %d %c"); bloco de 0x100 bytes |
| (tratador de VersionCheck 0x00) FUN_1040d000 | jogo | 0x8 |  | `cSddddd` | AuthLogin (CONNECTED) | AuthLogin: conta (UTF-16), playKey2, playKey1, loginKey1, loginKey2, idioma (GLanguageType) |

## Métodos sem envio direto

GetPledgeInfo, Exec, GetDistance, EndServerPingList, GetUserPassword, MoveToPawn, GetPetInfo, GetServerID, GetPledgeCrestTex, RequestSurrenderAllianceWar, operator=, GetPetNearestItem, GetNearestObject, RequestSurrenderPersonally, GetUser, IsSurrender, GetUserAccount, Init, IsEnemyPledge, ServerExPacketCountStop, ServerPacketCountStart, GetAllianceCrestTexFromAllianceCrestID, RequestAuthLogin, GetStaticObject, GetPetNearestObject, Destroy, UNetworkHandler, ContinueServerClose, ReplyStartAllianceWar, GetNearestParty, ReplyStopAllianceWar, GetVehicle, AuthReconnect, NotifyQuestMark, StaticClass, GetItem, ShowQuestList, GetNearestNPC, GetNextFriend, GetNextEnemy, GetNextParty, GetQuestList, RequestReplySurrenderPledgeWar, ServerExPacketCountStart, GetNextObject, GetNextNPC, GetNearestFriend, GetPartyInfoMap, SetMatchedStore, GetUserIDList, RefreshWSAAsyncSelect, GetUserOneTimePassword, GetNextPartyUsingJoyPad, RequestSurrenderPledgeWar, RequestStopAllianceWar, SetImportedPledgeCrestID, AddNetworkQueue, operator_new, GetNearestEnemy, ServerPacketCountStop, GetNearestCreature, Tick, DispatchNetworkQueue, GetNextItem, UpdateLargePledgeCrest, IsGNOMatch, RequestReplyStartPledgeWar, Ride, GetNextCreature, ClearObjectMap, IsNotYetLogin, GetUser, operator_new, IsPawnCreatePacket, GetRequestedPledgeID, SetImportedAllyCrestID, GetAllyCrestTex, AddServerPingList, GNOManager, RequestReplyStopPledgeWar, GetNearestItem, RequestStartAllianceWar, UNetworkHandler, ~UNetworkHandler, InternalConstructor, GetPledgeCrestTexFromPledgeCrestID
