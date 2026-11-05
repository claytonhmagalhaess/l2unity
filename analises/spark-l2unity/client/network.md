# Rede e protocolo

## Topologia

```
L2.exe ──TCP──▶ 192.99.42.182:2108  (login server, "protecao 1.3")
                 └─ ServerList → escolha → game server (ip/porta vindos do ServerListPacket/PlayOk)
```

- Endereço em `StreamingAssets/servidor.txt` (`SparkServidor.DoArquivo`), sobrescrito por `-servidor host:porta` (`SparkServidor.DaLinhaDeComando`).
- `DefaultClient` (MonoBehaviour base; campos `_serverIp`, `_serverPort`, `_connectionTimeoutMs`, `_logReceivedPackets`, `_logSentPackets`, `_logCryptography`, `_sessionKey1/2`, `_ping`) → `AsynchronousClient` (Socket, fila de pacotes, `_cryptEnabled`, `_initPacket`, semáforo, task de processamento).
- `LoginClient : DefaultClient` — `STATIC_BLOWFISH_KEY`, `_rsa` (`RSACrypt`), `_blowfishKey`, `_decryptBlowfish/_encryptBlowfish` (`L2_login.BlowfishEngine`), handlers `LoginClientPacketHandler`/`LoginServerPacketHandler`, callbacks `OnAuthAllowed`, `OnPlayOk`, `OnServerListReceived`, `OnServerSelected`; `AvisaQueda`/`RespostaRecebida`/`_servidorPedidoEm` (timeout de resposta do servidor adicionado pelo SPARK).
- `GameClient : DefaultClient` — `_serverId`, `_playKey1/2`, `_gameCrypt` (`L2_login.GameCrypt`), `EnableCrypt`, `ReturnToLogin`, thresholds de sincronização de posição.

## Criptografia (base retail Interlude, classes em `L2_login`)

| Classe | Função |
|---|---|
| `RSACrypt` | `InitRSACrypt`, `UnscrambledRSAKey` (desembaralha o módulo RSA de 1024 bits do `Init`), `EncryptRSANoPadding`, `EncryptRSAPskc1`, `DecryptRSABlock` — cifra usuário/senha no `AuthRequest` |
| `BlowfishEngine` | Blowfish ECB (BouncyCastle port: `S0..S3`, `P`, `processBigBlock`, `encryptBlock/decryptBlock`) — canal do login server; chave inicial estática `STATIC_BLOWFISH_KEY`, trocada pela do `InitPacket.blowfishKey` |
| `NewCrypt` | `encXORPass/decXORPass`, `appendChecksum/verifyChecksum` — XOR-pass + checksum do login retail |
| `GameCrypt` | `_inkey/_outkey` 16 bytes, `SetKey/Encrypt/Decrypt` — cifra XOR rolante do game server (retail) habilitada após `VersionCheck` (`UseBlowfishCipher`, `BlowFishKey`) |
| `SHACrypt` | SHA-1/SHA-256 utilitário |

`InitPacket`: `sessionId`, `rsaKeyLength`, `publicKey`, `blowfishKeyLength`, `blowfishKey`. `LoginOkPacket`: `_sessionKey1/2`. `VersionCheckPacket`: `BlowFishKey`, `UseBlowfishCipher`, `AuthAllowed`. Literais relacionadas: "Connected to LoginServer", "Authed to LoginServer", "Blowfish key set.", "Gameserver login failed reason: ", "Login bloqueado: motivo {0}, {1} s", "Could not connect to the login server. Please try again in a moment.".

## Pacotes customizados do SPARK
- `SparkLeitor` (leitor com `Opcode`, `Resta`, `Ex`, `D/H/C/Q/S/B`), `SparkPacoteLivre` (escritor livre `D/C/H/Q/S/B/Fim`), `SparkPacoteSimples`, `SparkPacoteTexto`, `SparkPacoteEx` — canal de extensão usado por `SparkGmWindow` (painel GM: `SparkGmVer.Pede/Pacote`, `SparkGmQuest`), `SparkTextoDano` (`LigaPedidor`), `SparkMedidorRede` (ping/fila), `SparkRastreio`, `SparkMovimentoRemoto`, `SparkBotsArma` etc.
- Opcodes fora do retail (ver `enums.md`): cliente `RequestMoveDirection=0x02`, `RequestSetTarget=0x05`, `Ping=0xF0`, `RequestRotate=0xF3`, `RequestAnim=0xF4`; servidor `ObjectMoveDirection`, `ObjectPosition`, `ObjectRotation`, `ObjectAnimation`, `GameTime`, `Ping` e os `0x0FFx` estendidos.

## Opcodes (extraídos do metadata — `enums.md` tem todos os 94 enums)

### Login (byte)
Cliente→servidor `LoginClientPacketType`: Ping 0x00, AuthRequest 0x01, RequestServerList 0x05, RequestServerLogin 0x02.
Servidor→cliente `LoginServerPacketType`: Ping 0x63, Init 0x00, LoginFail 0x01, AccountKicked 0x02, LoginOk 0x03, ServerList 0x04, PlayFail 0x06, PlayOk 0x07.

### Game, cliente→servidor `GameClientPacketType` (byte) — retail Interlude + extras
ProtocolVersion 00, MoveBackwardToLocation 01, RequestMoveDirection 02*, EnterWorld 03, RequestAction 04, RequestSetTarget 05*, AuthRequest 08, Disconnect 09, RequestAttack 0A, RequestCharCreate 0B, RequestCharDelete 0C, RequestCharSelect 0D, RequestInventoryOpen 0F, RequestInventoryUpdateOrder 10, RequestDropItem 12, UseItem 14, RequestSellItem 1E, RequestBuyItem 1F, RequestBypassToServer 21, RequestMagicSkillUse 2F, Appearing 30, RequestShortcutReg 33, RequestShortcutDel 35, RequestCancel 37, SendMessage 38, RequestSkillList 3F, RequestActionUse 45, RequestRestart 46, ValidatePosition 48, RequestDestroyItem 59, GMCommand 5B, RequestCharRestore 62, RequestAcquireSkillInfo 6B, RequestAcquireSkill 6C, RequestRestartPoint 6D, RequestCrystallizeItem 72, DoubleOPCode D0, Ping F0*, RequestRotate F3*, RequestAnim F4*.

### Game, servidor→cliente `GameServerPacketType` (int) — ver `enums.md` (≈190 entradas: VersionCheck 00, ObjectMoveTo 01, UserInfo 03, PlayerInfo 04, Attack 05, DoDie 06, Revive 07, … StatusUpdate 0E, NpcHtml 0F, … ShortcutRegister 44, … TitleUpdate/ObjectPosition/ObjectRotation/ObjectAnimation/GameTime/Ping nos 0xFD0–0xFFA).

## Classes de pacote presentes no Assembly-CSharp
(ver lista gerada abaixo)

### Cliente→servidor (48)
DisconnectPacket, EnterWorldPacket, GameAuthRequestPacket, PingPacket, ProtocolVersionPacket, RequestCharCreatePacket, RequestCharDeletePacket, RequestCharRestorePacket, RequestCharSelectPacket, RequestRestartPacket, RequestActionPacket, RequestActionUsePacket, RequestAttackPacket, RequestCancelPacket, RequestRestartPointPacket, RequestSetTargetPacket, GMCommandPacket, RequestAutoSoulshotPacket, RequestBuyItemPacket, RequestCrystallizeItemPacket, RequestDestroyItemPacket, RequestDropItemPacket, RequestInventoryOpenPacket, RequestInventoryUpdateOrderPacket, RequestSellItemPacket, UseItemPacket, AppearingPacket, MoveBackwardToLocationPacket, RequestMoveDirectionPacket, ValidatePositionPacket, RequestAnimPacket, RequestBypassToServerPacket, RequestRotatePacket, SendMessagePacket, RequestShortcutDelPacket, RequestShortcutRegPacket, RequestAcquireSkillInfoPacket, RequestAcquireSkillPacket, RequestMagicSkillUsePacket, RequestSkillListPacket, SocialActionPacket, ValidateLocationPacket, SendTradeRequestPacket, TradeAddPacket, SendTradeDonePacket, AuthRequestPacket, RequestServerListPacket, RequestServerLoginPacket

### Servidor→cliente / outros (96)
CharSelectionInfoPackage, ClientPacket, ChangeMoveTypePacket, ChangeWaitTypePacket, MoveToPawnPacket, NpcInfoPacket, PetInfoPacket, PlayerInfoPacket, RelationChangedPacket, RemoveObjectPacket, UserInfoPacket, CharCreateFailPacket, CharCreateOkPacket, CharDeleteFailPacket, CharDeleteOkPacket, CharSelectedPacket, CharSelectionInfoPacket, GameTimePacket, LeaveWorldPacket, LoginFailPacket, RestartResponsePacket, VersionCheckPacket, AbnormalStatusUpdatePacket, EtcStatusUpdatePacket, PartyEffectPacket, ShortBuffStatusUpdatePacket, ActionAllowedPacket, ActionFailedPacket, DoDiePacket, InflictDamagePacket, EntityTargetSetPacket, EntityTargetUnsetPacket, FightStanceStartPacket, FightStanceStopPacket, MyTargetSetPacket, RevivePacket, StatusUpdatePacket, CreatureSayPacket, AbstractItemPacket, BuyListPacket, GetItemPacket, InventoryItemListPacket, InventoryUpdatePacket, ItemNoChaoPacket, MultiSellListPacket, SellListPacket, ObjectMoveToPacket, ObjectStopMovePacket, TeleportToLocationPacket, UpdateMoveDirectionPacket, UpdatePositionPacket, NpcHtmlPacket, ExAskJoinMPCCPacket, ExMultiPartyCommandChannelInfoPacket, ExMPCCShowPartyMemberInfoPacket, AskJoinPartyPacket, JoinPartyPacket, PartySmallWindowAllPacket, PartySmallWindowAddPacket, PartySmallWindowDeletePacket, PartyMemberPositionPacket, PartySmallWindowUpdatePacket, ShortcutDeletePacket, ShortcutInitPacket, ShortcutRegisterPacket, AcquireSkillLearnDonePacket, AcquireSkillLearnInfoPacket, AcquireSkillLearnListPacket, ExAutoSoulshotPacket, MagicSkillCanceledPacket, MagicSkillLaunchedPacked, MagicSkillUsePacket, SetupGaugePacket, SkillCoolTimePacket, SkillListPacket, SystemMessagePacket, PrivateStoreListSellPacket, PrivateStoreMsgPacket, StoreItemPacket, PrivateStoreManageListSellPacket, PrivateStoreManageListBuyPacket, PrivateStoreListBuyPacket, TradeStartPacket, TradeUpdatePacket, TradeItemPacket, UpdateRotationPacket, LoginServerPacket, LoginClientPacket, AccountKickedPacket, InitPacket, LoginOkPacket, LoginServerFailPacket, PlayFailPacket, ServerListPacket, Packet, ServerPacket
