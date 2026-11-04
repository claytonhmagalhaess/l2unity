# #0050 — Tooltip e informações de item na multisell

| Campo | Valor |
|---|---|
| Vaga | ui, na pasta `worktrees\world` (emprestada: a `worktrees\ui` está com a #0048) |
| Branch | `feat/ui-tooltip-multisell` (nasce de `feat/ui-revisao`, #0047) |
| Estado | fazendo |
| Spec | `analises\interface-p166\02_interacoes.md` (tooltips, `InventoryWithIcon` e variantes), `analises\l2-interlude\client_spec\` (MultiSellWnd, ItemInfo/tooltip, 96); `ItemInfoText.cs` e `L2Tooltip.cs` |
| Sessão | ui: tooltip da multisell (#0050) |
| Criada | 2026-11-04 |

## Objetivo

O usuário abriu uma multisell (Armor Shop → Store) no aCis local e viu dois problemas:
- passar o mouse sobre um item da lista mostra só o nome;
- o painel "Item information" mostra P. Def. 0 e Weight 0.

No original, o tooltip e o painel mostram as informações completas do item, inclusive os bônus de conjunto (set) das armaduras. Esta tarefa deixa o tooltip e o painel da multisell iguais aos do original, com as informações de set.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Levantamento, com evidência (`MultiSellWnd.uc` do `Interface.u` exportado, NWindow no Tryskell ou na REA, `itemname-e.dat`, `armorgrp`/`weapongrp`/`etcitemgrp`, `setitemgrp` ou o equivalente do Interlude), de:
  - o que o original mostra no tooltip ao passar o mouse sobre um item da lista, sobre um ingrediente e sobre o item escolhido;
  - o que mostra no painel "Item information" (P. Def./P. Atk., peso, grade, tipo, descrição, set e encantamento);
  - os textos das linhas e as cores.
- [ ] O tooltip dos itens da multisell segue o tipo de tooltip do original, com todas as linhas de item, como o do inventário.
- [ ] As armaduras de set mostram as informações de set como no original: as peças do conjunto, as peças que o jogador já tem equipadas e os efeitos do set completo e do escudo. Se o Interlude não mostrar set em algum desses lugares, isso fica registrado em Decisões com a evidência.
- [ ] O painel "Item information" mostra os valores reais (defesa, ataque, peso etc.) lidos dos dados do cliente, e não 0.
- [ ] O que depender de dado que o `shared` não tem vira pedido de exportação para a coordenadora. O que for do `App.cs` ou de `Scripts\Net\` também vira pedido. Os pedidos vão em `tarefas\pedidos\`.
- [ ] Testes EditMode para a montagem das linhas do tooltip e do set. `sh Docs/tools/run_tests.sh` sem falhas novas em relação a `feat/ui-revisao`.
- [ ] Capturas antes e depois em `Docs/evidencias/tooltip-multisell/`, tiradas no aCis local, e uma linha em `Docs/validacao.md`.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-04 — branch `feat/ui-tooltip-multisell` criado de `feat/ui-revisao` (`b88e07c`) na pasta `worktrees\world`.
- 2026-11-04 — levantamento do original: `MultiSellWnd.uc`, `ToolTip.uc`, NWindow (`decomp_all/nwindow`), Engine (`FL2GameData::GetItemSet*`), `ItemName-e.dat` e `etcitemgrp.dat` decifrados (ver Decisões).
- 2026-11-04 — código (`55350f5`): bloco de set no `L2Tooltip.Item`, parsers do `ItemName-e` e do `etcitemgrp` no `L2TooltipData`, tooltips da `ItemList` e dos nomes da multisell, `GetItemDataType` dos ingredientes e lista de equipados no `GameUi`. Compilou sem erros no Editor da pasta world.
- 2026-11-04 — testes (`36d8e0a`): `MultiSellTooltipTests` (9 testes).
- 2026-11-04 — o Editor da pasta world foi fechado no meio do teste ao vivo. Pelo novo fluxo, a suíte e o roteiro ao vivo (antes `b88e07c` e depois `36d8e0a`) foram pedidos à sessão de testes. Roteiro em `side-session-notes\local_4e5f59ae-…\0050-roteiro-testes.md`.
- 2026-11-04 — sessão de testes: `36d8e0a` compila sem erros e passa 759/759 na EditMode (a base `b88e07c` dá 750/750), sem falhas novas. Arquivos em `testes0050-1suite-36d8e0a`.
- 2026-11-04 — pedido 0041 (coordenadora): regerar o `itemdata.json` com o `mp_consume` das armas.

## Decisões e REA

**Onde o original mostra o quê**

- [O] **Lista da esquerda (`ItemList`).** É uma ItemWindow com `popupType=Inventory` (`out/re/layout/MultiSellWnd.txt:7`). O `HandleItemList` monta o `ItemInfo` com `UIDATA_ITEM.GetItemInfo(classID)` e põe por cima o ID da entrada (Reserved), `slotBitType`, `itemType`, `itemCount` e a refinaria do pacote. Quando a durabilidade é maior que 0, a atual fica cheia (`MultiSellWnd.uc:164-190`). O `ShowItemList` adiciona `ItemInfoList[0]` (`:304-314`). O tooltip é o `ReturnTooltip_NTT_ITEM` "Inventory" completo (`ToolTip.uc:213-822`).
- [O] **`execGetItemInfo`** (`nw:0x10123940`, `00010.c:2469-2610`) preenche Name, AdditionalName, IconName, Description e ClassID, e zera ItemType, ItemNum e SlotBitType. O resto vem pelo tipo do dado:
  - arma: peso, material, WeaponType, P/M Atk, escudo, durabilidade, CurrentDurability −1, grau, AtkSpd, MpConsume, Avoid, SS e SPS;
  - armadura ou joia: peso, material, durabilidade, grau, ArmorType, Avoid, PDef e MDef;
  - etc: peso, material, durabilidade, grau, ConsumeType e ItemSubType.
  - **Não preenche ServerID, Enchanted nem MpBonus.** Resultado: o robe na lista sai com "MP Increase : 0" (`Lista_RobeSemMpBonusNoGetItemInfo`).
- [O] **Nome do produto e dos ingredientes (NCNameCtrl).** `SetNameData` modo 1 (`nw:0x1004b310`, `00002.c:13173-13243`) cria um NCItem novo e preenche só Name, ClassID, ItemType, Enchanted, CrystalType e ItemNum. Depois chama `MakeTooltipInfo(item, "Inventory")` (`nw:0x101b8f10`), que serializa o NCItem (`FUN_100634e0`) e dispara o EV 2920 (`0xb68`) para o `ToolTip.uc`.
  - O construtor (`FUN_1002cd30`, `00001.c`) zera os outros campos e deixa −1 em ItemType/SubType, Level, MaterialType, WeaponType, Reserved, ArmorType, RefineryOp1/2 e CurrentDurability.
  - Por isso o tooltip do nome **mostra "P. Def. : 0" e "Weight : 0" na armadura**, "M. Def. : 0" e "Weight : 0" num ingrediente etc. Numa arma mostra 0, "Very Slow" e o cabeçalho do aumento (ss1490/ss1491), porque os RefineryOp são −1.
  - O porte faz igual. O "0" que o usuário citou é do **painel**, e lá o original mostra os valores reais (abaixo).
- [O] **Desenho do tooltip do nome.** O OnPostPaint usa `DrawSimpleTooltip` (`nw:0x100549b0`). O `DrawItemList` (`nw:0x10068be0`) só corta quando `0 < SimpleLineCount`, então com 0 desenha a lista inteira.
- [O] **Painel "Item information".** O `SetItemInfo` recarrega peso, PDef etc. das tabelas do cliente (07 Apêndice A §2.2). O porte já fazia isso com o `ItemStats` (P. Def. 249 e peso 4950 para a 6379, conferido no Editor). Para item etc, o porte agora usa o peso e o grau do `etcitemgrp` (`MultiSellView.PanelStats`).
  - A causa do "0" que o usuário viu ainda não está confirmada. O diagnóstico está pedido no roteiro ao vivo, rodada "antes".
- [O] **`GetItemDataType`** (`nw:0x10123620`) devolve `*(dado+4)`: 0 arma, 1 armadura ou joia, 2 etc, e 0 sem dado. O porte usava 0/1/2 (acessório)/5, e foi corrigido (`MultiSellScript.DataType`). Isso muda o ramo do tooltip dos ingredientes e o "+N" do nome.

**Set**

- [O] **Bloco de set** (`ToolTip.uc:727-805`). Para idx 0..2 (`TOOLTIP_SETITEM_MAX = 3`):
  - as peças de `GetSetItemIDList` sem o próprio item, em 112/115/123, uma linha cada, com Condition `Type=Equip`;
  - o efeito do par em 128/127/103, com `Type=SetEffect`.
  - No fim, `GetSetItemEnchantEffectDescription` em 74/92/104, com `Type=EnchantEffect`.
  - Cores ativas: 176/185/205, 183/178/122 e 111/146/169.
- [O] **Dados.** O `FL2GameData` guarda os pares (lista de ids, efeito) a cada 0x18, a partir de `+0x68`/`+0x74` (`GetItemSetListID` em 0x1030df8a, `GetItemSetEffect` em 0x1030ba37), a contagem do encantamento em `+0xb0` (0x10301ff0) e o efeito em `+0xb4` (0x103120cb).
  - No `ItemName-e.dat` do Interlude: par 0 = `set_ids`/`set_bonus_desc`, par 1 = `set_extra_id`/`set_extra_desc` (o escudo), par 2 = `unk[0]`/`unk[1]`, que vêm vazios nos 11059 registros. Depois vêm `special_enchant_amount`/`special_enchant_desc`.
  - 180 itens têm set, 41 têm escudo e 175 têm efeito de encantamento. **Só a peça principal (peito) carrega o set.** O Interlude não tem `setitemgrp`.
  - O `shared` já tem o `.dat`, e o porte lê o arquivo direto (`L2TooltipData.ParseItemNames`). Não precisou de exportação.
- [O] **Cores ativas** (`NWndUtil::DrawItemList`, `00003.c:14897-15290`):
  - Equip: o item do tooltip (`FindItem` por ServerID na lista 2 = equipados, `GetEquipItemCount` lê `+0x1c`) e a peça (`FindItemByClassID`) estão equipados;
  - SetEffect: além disso, todas as peças das listas 0..EffectID estão equipadas;
  - EnchantEffect: contagem ≥ 1 e todas as peças das 3 listas equipadas com encantamento ≥ contagem.
- [O] **Na multisell o set sai sempre na cor normal.** O ServerID é 0 tanto no `GetItemInfo` quanto no NCItem reduzido, então o `FindItem` falha. Por isso o critério "as peças que o jogador já tem equipadas" não aparece em cor na multisell do Interlude.
  - O porte implementa as cores ativas (`L2Tooltip.ConditionColor`, com a lista de equipados do `GameUi`). Elas valem no tooltip do inventário, que passa o ServerID.
  - [I] O encantamento lido em `FUN_101b2720` (`local_fc`) é o Enchanted da peça.

**Outros dados**

- [O] **etcitemgrp.dat** (Ver413, DDF Interlude do l2disasm): 7294 registros. `stackable` é o ConsumeType (adena 3, poções e soulshots 2), `family` é o EEtcItemType e `grade` é o CrystalType. O porte lê direto (`L2TooltipData.ParseEtcItems`).
- [I] `GetRefineryItemName(nome, −1, −1)` devolve o nome sem mudança, porque não existe opção −1.
- [I] `GetQuality(−1)` cai na cor padrão 187/181/138.
- [?] Opções do aumento (`UIDATA_REFINERYOPTION`): o porte não tem a tabela, então só saem o cabeçalho e o ss1491.

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

- 0041 (coordenadora): regerar o `itemdata.json` com o `mp_consume` (`pedidos/0041-ui-itemdata-mpconsume.md`).
