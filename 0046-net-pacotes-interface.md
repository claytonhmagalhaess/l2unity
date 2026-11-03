# #0046 — Pacotes das janelas da interface (T2–T21)

| Campo | Valor |
|---|---|
| Vaga | net |
| Branch | `feat/net-pacotes-interface` |
| Estado | aberta |
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

- [ ] Cada pacote S→C da lista é decodificado com os campos da spec 94 e publica o evento e os parâmetros da spec 96; os que já existiam ficam conferidos campo a campo.
- [ ] Cada pacote C→S da lista tem um builder com o opcode e os campos da spec 95, conferidos no aCis (somente leitura, `C:\Workspace-java\aCis_gameserver`), exposto para a UI.
- [ ] Teste EditMode por pacote: bytes de exemplo → campos (S→C) e campos → bytes (C→S).
- [ ] `Docs/cobertura_recebidos.md` e `Docs/cobertura_envios.md` atualizados.
- [ ] `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Um commit por grupo (inventário e atalhos; comércio, armazém, frete e loja privada; pet; macro; quest e clã; skill e henna; fabricação; melhoria de item; grupo, união e duelo; `ExShowScreenMessage`), com a ordem de prioridade da lista acima.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

Nenhum por enquanto.
