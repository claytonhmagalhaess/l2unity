# #0046 — Pacotes das janelas da interface (T2–T21)

| Campo | Valor |
|---|---|
| Vaga | net |
| Branch | `feat/net-pacotes-interface` |
| Estado | pronta p/ merge |
| Spec | `analises\l2-interlude\client_spec\92_protocolo_opcodes.md`, `94_pacotes_servidor_cliente.md`, `95_pacotes_cliente_servidor.md`, `96_mapa_pacote_evento_janela.md`; `analises\interface-p166\05_lacunas_e_tarefas.md` §2 |
| Sessão | net: pacotes da interface |
| Criada | 2026-11-03 |

## Objetivo

Todo pacote de que as tarefas de UI precisam passa a ser lido (servidor → cliente, publicando o evento da spec 96) e montado (cliente → servidor), no formato do Interlude e do aCis. A UI só consome e não mexe em `Scripts\Net\`.

Pacotes por tarefa (05 §2 da #0024):

- T2 (#0026): C→S `RequestUnEquipItem` 0x11, `RequestDropItem` 0x12, `RequestDestroyItem` 0x59, `RequestCrystallizeItem` 0x72; S→C `InventoryUpdate`, `DropItem`, `SystemMessage`
- T4 (#0028): C→S `RequestShortCutReg` 0x33 (com `UserShortCut` 1/2), `RequestShortCutDel`, `RequestAutoSoulShot` 0xd0:0x05; S→C `ShortCutRegister` 0x44, `ExAutoSoulShot` 0xfe:0x12
- T5 (#0029): S→C `BuyList` 0x11, `SellList` 0x10, `TradeStart` 0x1e; C→S `RequestBuyItem`, `RequestSellItem`, `AddTradeItem`
- T6 (#0030): S→C `WarehouseDepositList` 0x41, `WarehouseWithdrawList` 0x42; C→S `SendWarehouseDepositList` 0x31, `SendWarehouseWithdrawList` 0x32
- T7 (#0031): S→C `PetStatusShow` 0xb0, `PetInfo` 0xb1, `PetItemList` 0xb2, `PetInventoryUpdate` 0xb3, `PetStatusUpdate`; C→S `RequestPetUseItem` 0x8a, `RequestGiveItemToPet` 0x8b, `RequestGetItemFromPet` 0x8c, `RequestActionUse`
- T8 (#0032): S→C `SendMacroList` 0xe7; C→S `RequestMakeMacro` 0xc1, `RequestDeleteMacro` 0xc2
- T12 (#0036): S→C `PrivateStoreManageListSell` 0x9a, `PrivateStoreManageListBuy` 0xb7; C→S `RequestPrivateStoreManageSell` 0x73, `SetPrivateStoreListSell` 0x74, `RequestPrivateStoreManageBuy` 0x90, `SetPrivateStoreListBuy` 0x91, `SetPrivateStoreMsg*`
- T13 (#0037): S→C `QuestList` 0x80; C→S `RequestQuestList` 0x63, `RequestQuestAbort`
- T14 (#0038): S→C `PledgeShowMemberListAll` 0x53 e os `Pledge*`; C→S `RequestPledgeMemberList` 0x3c, `RequestClanMemberInfo`…
- T15 (#0039): S→C `AcquireSkillList` 0x8a, `AcquireSkillInfo` 0x8b, `HennaEquipList` 0xe2, `HennaInfo` 0xe4; C→S `RequestAcquireSkillInfo` 0x6b, `RequestAcquireSkill` 0x6c, `RequestHennaEquip` 0xbc
- T16 (#0040): S→C `ExShowScreenMessage` 0xfe:0x38
- T18 (#0042): S→C `PackageToList` 0xc2, `PackageSendableList` 0xc3; C→S `RequestPackageSendableItemList` 0x9e, `RequestPackageSend` 0x9f
- T19 (#0043): S→C `RecipeBookItemList` 0xd6, `RecipeShopManageList` 0xd8 e os `Recipe*`; C→S `RequestRecipeBookOpen` 0xac, `RequestRecipeItemMakeSelf` 0xaf…
- T20 (#0044): S→C `ChooseInventoryItem` 0x6f, `EnchantResult` 0x81, `ExPutItemResultForVariationMake`…; C→S `RequestEnchantItem` 0x58, `RequestConfirmTargetItem`, `RequestRefine`, `RequestRefineCancel`
- T21 (#0045): `RequestPartyMatchConfig`, `RequestJoinPartyRoom`… (spec 07 §10)

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [x] Cada pacote S→C da lista é decodificado com os campos da spec 94 e publica o evento e os parâmetros da spec 96; os que já existiam ficam conferidos campo a campo.
- [x] Cada pacote C→S da lista tem um builder com o opcode e os campos da spec 95, conferidos no aCis (somente leitura, `C:\Workspace-java\aCis_gameserver`), exposto para a UI.
- [x] Teste EditMode por pacote: bytes de exemplo → campos (S→C) e campos → bytes (C→S).
- [x] `Docs/cobertura_recebidos.md` e `Docs/cobertura_envios.md` atualizados.
- [x] `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [x] Um commit por grupo (inventário e atalhos; comércio, armazém, frete e loja privada; pet; macro; quest e clã; skill e henna; fabricação; melhoria de item; grupo, união e duelo; `ExShowScreenMessage`), com a ordem de prioridade da lista acima.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — branch `feat/net-pacotes-interface` criado a partir do `main` (0d71a77); estado `fazendo`.
- 2026-11-03 — inventário e atalhos (37c99dc).
- 2026-11-03 — macro e `InterfaceRouter` (adf32ce); pedido 0023 (App.cs cria o router), aceito pela coordenadora para entrar junto com o merge.
- 2026-11-03 — comércio, armazém, frete e loja privada (f1751e9).
- 2026-11-03 — pet e servo (c0803ec).
- 2026-11-03 — quest e clã (ea57018).
- 2026-11-03 — skill e henna (73ce2c2).
- 2026-11-03 — fabricação (99a4b76).
- 2026-11-03 — melhoria de item (071f3c2).
- 2026-11-03 — grupo, união e duelo (62d7a47).
- 2026-11-03 — `ExShowScreenMessage` (42f83f2); pedido 0025 para a `ui` (divergências no `PacketEvents`).
- 2026-11-03 — `sh Docs/tools/run_tests.sh`: 483/483 (o `main` tinha 391/391), resultado em 53f2449. Estado `pronta p/ merge`.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

**Arquitetura**
- Os pacotes novos ficam em arquivos por grupo em `Scripts/Net/`: `MacroPackets`, `StorePackets`, `ClanPackets`, `SkillTrainPackets`, `RecipePackets`, `EnchantPackets` e `PartyMatchPackets`, além de acréscimos em `UiPackets` e `PetPackets`. A conversão pacote → `EV_*` fica em `Net/InterfaceEvents.cs`, no mesmo padrão do `UI/PacketEvents.cs`.
- O `Net/InterfaceRouter.cs` registra no `GameClient` só os opcodes que o `App.cs` não trata. A exceção é o 0x53, que o App usa para a janela de clã antiga, sem `EV_`. O router guarda o último pacote de cada janela, no lugar dos natives `GetXxx` do original (`Macros`, `Pet`, `PetItems`, `Warehouse`, `Hennas`...), e expõe callbacks para o que não tem `EV_` (convites, títulos de loja, pet no mundo). O App só precisa criá-lo (pedido 0023).
- `ReceivedPacketTests` e `ReceivedLayoutTests` também leem o `InterfaceRouter.cs`, com `On(0x..)` e `Ex(0x..)`. Assim a cobertura e a conferência de tipos contra o `engine.dll` valem para os pacotes novos. Resultado: 135 recebidos conferidos contra o `Golden/packet_layouts.json` (eram 74), todos os do router incluídos.
- [O] Itens no param: só os campos que vêm no pacote, com as chaves do `ItemInfo` (`classID`, `serverID`, `itemNum`, `itemType`, `slotBitType`, `enchanted`, `damaged`, `equipped`, `refineryOp1/2`, `currentDurability`, mais `price`, `defaultPrice` e `reserved` quando o pacote os traz). Nome, ícone e peso vêm dos `.dat`, e a janela completa pelo `classID`. `reserved` é o dbID do armazém e do frete, que vai nos envios (`WarehouseWnd.uc:421-455`).

**Por pacote**
- [O] `RequestShortCutReg`: o 4º campo é `UserShortCut` (1 jogador, 2 pet; spec 05 §3.5); antes ia 0. O tipo 5 "recipe" é aceito, mas o `ShortcutType` do aCis só vai até MACRO, então receita não é registrada (`RequestShortCutReg.java:36`).
- [O] `PrivateShopWnd`: 0x9a = `sellList`, 0xb7 = `buyList`, 0xb8 = `sell`, 0x9b = `buy` (`PrivateShopWnd.uc` P166 `:1273-1291`). O `UI/PacketEvents.PrivateStore` manda `sell` no 0x9b: ver pedido 0025.
- [I] `ExStorageMaxCount`: o 3º d é o limite do frete no aCis, mas o NWindow só tem a chave `warehouseClan` (spec 91, `FUN_10153490`). Mapeado para `warehouseClan`. A validar.
- [I] Macro: o cache é limpo a cada revisão nova e `EV_MacroUpdate` sai quando a revisão fica completa. `EV_MacroDeleted` sai para as macros que somem entre duas revisões. `TextureName` = `L2UI.MacroWnd.Macro_Icon` + (ícone + 1), porque o `MacroEditWnd` lê o último dígito (spec 05 §6.2). A conversão de linha de texto em type/d1/d2 é do nativo e não foi reproduzida: o builder recebe os campos prontos.
- [I] Pet: `PetStatusShow` 1 → `EV_PetWndShow`, 2 → `EV_SummonedWndShow`. `EV_PetStatusShow`/`EV_SummonedStatusShow` só saem no 1º `PetInfo` de cada invocado, para não limpar a janela a cada atualização. `PartySpelled` tipo 0 → `EV_PartySpelledList`, 1 → `EV_PetStatusSpelledList`, 2 → `EV_SummonedStatusSpelledList`.
- [O] Clã: `PowerValue0..31` = um bit cada dos privilégios, `GradeID{i}`/`GradeMemberCount{i}` sem `_` (`ClanDrawerWnd.uc` P166 `:962,1812`), `SkillID{i}`/`SkillLevel{i}` (spec 90). [I] Os dois d 0 depois da reputação no 0x53/0x88 = `Status`, `Guilty`. `AskJoinPledge` (0x32), `ExAskJoinPartyRoom` (FE:34) e `ExAskJoinMPCC` (FE:27) não têm `EV_` no original: saem só como callback.
- [O] `QuestList`: o engine lê mais 128 bytes depois das quests (`h:2ddddb128`), mas o aCis não manda esse trecho. O parser para nas quests. [V] `Completed` sai sempre 0, e o valor com o bit 31 (`__compltdStateFlags`) vai cru em `Level`.
- [O] `AcquireSkillList`: o aCis manda o tipo pelo `ordinal()` do enum (clã = 1); no Interlude, clã é 2 (`AcquireSkillList.java`).
- [V] `EV_UpdateHennaInfo` (0xe4): sai um evento agregado com o bônus em `XXchange` e um `EV_InventoryAddHennaInfo` (`ID`, `bActive`) por tatuagem (spec 06 §14 item 12).
- [V] Receitas: o aCis do usuário não implementa nem os serverpackets nem os clientpackets 0xac-0xb7. Os formatos são os que o `engine.dll` lê e envia (layouts e `request_table`), e a ordem dos campos segue as chaves dos eventos (spec 07 §6). Não há como testar ao vivo.
- [I] Refino FE:52-54: a ordem das chaves segue o significado dos campos no aCis, porque os nomes do NWindow saem em ordem alfabética na spec 91. O FE:57 lê um d só, como o engine; o aCis manda dois.
- [O] `ExShowScreenMessage`: os 10 d casam um a um com as chaves que o `OnScreenMessageWnd.uc` lê (spec 02 §3.9): position → `WindowType`, size → `FontType`, effect → `BackgroundType`, time → `LifeTime`, fade → `AnimationType`.
- [I] `ChooseInventoryItem` só dispara `EV_EnchantShow`. O `EV_EnchantItemList` o nativo monta a partir do inventário, então a janela filtra o ItemList com `Interface.EnchantScroll`.
- Fora: `ExDuelEnemyRelation` (FE:58). O engine não lê campo nenhum e a spec 06 diz que a UI ignora o evento. Também ficou de fora `PledgeReceiveUpdatePower` (FE:41), que o aCis não tem e cujo mapa de bits para `EV_ClanMyAuth` não está na spec.

## Entrega

- **Commits** (branch `feat/net-pacotes-interface`, um por grupo, na ordem da tarefa):
  - 37c99dc inventário e atalhos (T2/T4);
  - adf32ce macro e `InterfaceRouter` (T8);
  - f1751e9 comércio, armazém, frete e loja privada (T5/T6/T12/T18);
  - c0803ec pet e servo (T7);
  - ea57018 quest e clã (T13/T14);
  - 73ce2c2 skill e henna (T15);
  - 99a4b76 fabricação (T19);
  - 071f3c2 melhoria de item (T20);
  - 62d7a47 grupo, união e duelo (T21);
  - 42f83f2 `ExShowScreenMessage` (T16);
  - 53f2449 resultado do `run_tests.sh`.
- **Testes:**
  - `sh Docs/tools/run_tests.sh` (batchmode): **483 passaram, 0 falharam** (o `main` tinha 391/391).
  - Novos: `InventoryPacketTests`, `MacroPacketTests`, `StorePacketTests`, `ClanPacketTests`, `SkillTrainPacketTests`, `RecipePacketTests`, `EnchantPacketTests`, `PartyMatchPacketTests` e `ScreenMessagePacketTests`; `PetPacketTests` ampliado. Cada S→C é montado como o aCis escreve, com campos e eventos conferidos; cada C→S é conferido byte a byte como o aCis lê.
  - `RequestFormatTests` confere os 89 builders novos contra o formato do `engine.dll`, e `ReceivedLayoutTests` confere os tipos lidos de 135 recebidos (eram 74).
  - Coberturas: `cobertura_recebidos` com UI 43 → 114 tratados e UI nativa 33 → 36; `cobertura_envios` com 56 → 145 builders.
- **Falta / fora do escopo:**
  - Pedido 0023 (aceito): o `App.cs` precisa criar o `InterfaceRouter`. Sem isso nenhum `EV_` novo chega à UI. A coordenadora põe as duas linhas junto com o merge.
  - Pedido 0025 (vaga `ui`): divergências no `UI/PacketEvents.cs` dos pacotes que já existiam (0x9b com `type` errado; `TradeStart`/`SellList` sem `EV_InventoryHideWindow`; itens sem os campos).
  - Não testado ao vivo no aCis: o router só funciona depois do pedido 0023, e receitas não existem no aCis local.
  - Itens a validar listados em Decisões: a ordem dos campos das receitas, o refino FE:52-54, `warehouseClan`, `EV_UpdateHennaInfo` e `Completed` do QuestList.
  - Fora: `ExDuelEnemyRelation` FE:58, `PledgeReceiveUpdatePower` FE:41, `EV_ShortcutUpdate` do `InventoryUpdate`/`PetInventoryUpdate` (precisa da tabela de atalhos da UI), `ExQuestInfo` FE:19 e o enchant de skill (`ExEnchantSkill*`).

## Pedidos

- `pedidos/0023-net-interface-router.md`: coordenadora, `App.cs` cria o `InterfaceRouter` (aceito; entra com o merge).
- `pedidos/0025-net-packetevents-divergencias.md`: ui, divergências no `UI/PacketEvents.cs`.
