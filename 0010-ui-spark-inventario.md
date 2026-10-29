# #0010 — Inventário

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-05-inventario` |
| Estado | pronta p/ merge |
| Spec | `07_demais_janelas.md` (InventoryWnd) |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Seleção, uso e arrasto de itens do inventário com os pacotes do Interlude.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Clique seleciona (desmarca o anterior); duplo clique usa (UseItem 0x14); receita pede "Register X in your recipe book?"
- [ ] Arrastar para o paperdoll equipa (pacote do equipar por arrasto **a validar**)
- [ ] Arrastar para a lixeira: confirmação ou quantidade, depois RequestDestroyItem 0x59
- [ ] Arrastar para cristalizar: RequestCrystallizeItem 0x72
- [ ] Arrastar para fora/chão: RequestDropItem 0x12 com o ponto do raycast (raycast e ponto = pedido à world)
- [ ] Reordenar entre slots: RequestInventoryUpdateOrder 0x10
- [ ] Botão do meio = destruir sem confirmação no Spark: **bloqueado: decisão do usuário**; não ligar
- [ ] Cada comportamento implementado tem teste EditMode em `Assets/L2Web/Tests/Editor` que simula o evento (clique, tecla, arrasto, pacote recebido) e confere o efeito na UI ou os bytes do pacote montado
- [ ] Entrega com a tabela **comportamento Spark → onde ficou no l2unity (`arquivo:linha`) → teste**, uma linha por comportamento desta tarefa
- [ ] Itens sem evidência no decompilado do Spark nem na spec do Interlude aparecem como **a validar**, com o que falta, sem valor inventado
- [ ] Divergências Interlude × Spark registradas em "Decisões e REA"; o comportamento do Interlude fica valendo até o usuário confirmar o do Spark
- [ ] Nenhum pacote exclusivo do servidor Spark é enviado (decisão 3): o gesto existe, sem envio, marcado "pendente de decisão"
- [ ] Nada copiado do Spark (UXML, USS, texturas, código decompilado): uGUI montado em código no estilo de `Scripts/UI`; layout e texturas do `Interface.xdat`/spec do Interlude
- [ ] `sh Docs/tools/run_tests.sh` sem falhas novas; total de testes na Entrega

## Fontes

- `analises\spark-l2unity\hud\README.md` (inteiro; §1 arquitetura, §3 comportamento)
- `analises\spark-l2unity\hud\events.md`, `hud\code_summaries.md`, `hud\code\*.c` (confirmar cada detalhe)

## Andamento

- 2026-10-29 — branch `feat/ui-spark-05-inventario` saído da ponta do `04` (`7e4057a`).
- 2026-10-29 — achado o `InventoryWnd.uc` do Interlude exportado em `tools\l2anim\export\uc\Interface\` (fonte principal desta tarefa).
- 2026-10-29 — `Scripts/UI/UiInventory.cs` (InvPackets temporário, ItemOrder); `GameUi`: seleção, uso (receita sm798), lixeira (sm74/sm73), cristalizar (sm336), soltar no chão (sm400/sm71), equipar/desequipar arrastando, ordem local gravada por classe, botão de cristalizar só com a skill; 8 testes em `SparkInventoryTests.cs` (`aadb039`). Pedidos 0005 (net) e 0006 (App).

## Decisões e REA

- **Fonte**: `InventoryWnd.uc` (Interlude) `OnSelectItem`, `OnDBClickItemWithHandle`/`OnRClickItemWithHandle` → `UseItem` (`:953-976`), `OnDropItem` (`:184-344`), `OnDropItemSource` (`:347-383`), `HandleDialogOK` (`:1090-1140`); Spark `InventorySlot` e `L2SlotManager`. Os dois concordam em selecionar/usar/lixeira/cristalizar/chão; onde divergem, abaixo.
- **Seleção**: clique seleciona e desmarca o anterior (os dois); destaque com `inventory_outline_down` (textura do xdat) [o desenho exato do realce do ItemWindow nativo: a validar].
- **Uso**: duplo clique e **clique direito** usam (`OnRClickItem` do Interlude). Receita pede **sm798** (Interlude, `DIALOG_USE_RECIPE`); o texto do Spark ("Register … in your recipe book?") é outro: vale o do Interlude. `bRecipe` = nome "Recipe:" do itemname-e (**a validar**: o porte não tem o etcitem_type; o ícone `etc_recipe_*` não serve, o aCis o usa no 1653 Bear Picture). `PopMsgNum` (DIALOG_POPUP) não existe nos dados do porte: **a validar**.
- **Lixeira** (`TrashButton`): único → sm74 → `RequestDestroyItem(oid, 1)`; empilhável com mais de 1 → NumberPad sm73 (máx. = quantidade) → `RequestDestroyItem(oid, n)` (o Interlude manda o número digitado, inclusive 0); som `trash_basket`. O ramo "MoveAll" (`AllItemCount > 0`, sm74 direto com tudo) não foi ligado: **a validar** o gesto que liga o MoveAll no nativo.
- **Cristalizar** (`CrystallizeButton`): só com `HasCrystallizeAbility` (skill 248) e `IsCrystallizable` (arma/armadura com `crystal_type > 0` no itemdata) → sm336 → `RequestCrystallizeItem(oid, 1)`; o botão só aparece com a skill (`:134-148`).
- **Chão** (`"Console"`): único sm400 → `RequestDropItem(oid, 1, ponto)`; empilhável NumberPad sm71, 0 vira 1. O ponto é o `GetClickLocation` → `deps.GroundAt` (pedido 0006). "Tudo" (sm1833): **a validar** (MoveAll).
- **Equipar**: soltar num `EquipItem_*` manda `RequestUseItem`, menos etcitem (type2 3/4/5); de um EquipItem para outro, nada. O Spark `L2SlotManager.Equip` só escreve no log ("Equip {0}") — o pacote do Spark fica **a validar**, vale o do Interlude. **Desequipar**: de um `EquipItem` para a lista → `RequestUnEquipItem(bodyPart)` 0x11.
- **Divergência reordenar**: o Spark manda `RequestInventoryUpdateOrder` (`ChangeItemOrder`); **o aCis não tem esse pacote** (`L2GamePacketHandler`, `case 0x10` comentado como o antigo RequestEquipItem). Vale o Interlude: ordem **local** (SwapItems em cascata; soltar fora de um item = fim), gravada por ClassID ao fechar (`SaveItemOrder`, `Config "inv.order"`) e reaplicada ao fim da lista (`OrderItem`); itens novos e os `add` do InventoryUpdate vão para a frente. Nenhum pacote.
- **Mudança no porte**: a lista do inventário era ordenada por type2/itemId; agora segue a ordem do servidor + a gravada, como o Interlude. Item de quest passou a arrastar (reordenar, lixeira, chão), mas continua fora da barra (#0009).
- **Botão do meio** = destruir sem confirmação (`InventorySlot.HandleMiddleClick` → `RequestDestroyItemPacket`, som `trash_basket`): **bloqueado: decisão do usuário**. O slot reconhece o gesto (`UiSlot`, `Middle = null`) e não manda nada.
- **Pacotes**: 0x59, 0x72, 0x12 e 0x11 não têm builder no `UiPackets` (área net); a UI monta os mesmos bytes no `InvPackets` (temporário) e pediu os builders (pedido 0005).

## Entrega

- **Commits:** `aadb039` UI: inventario com selecao, uso, lixeira, cristalizar, soltar no chao, equipar e ordem local.
- **Testes:** `sh Docs/tools/run_tests.sh` → total 477, passou 477, falhou 0 (+8 em `SparkInventoryTests`; `SparkBarTests.ItemDeQuest_NaoVaiParaABarra` ajustado).
- **Tabela comportamento Spark → l2unity → teste:**

| Comportamento Spark | Onde no l2unity | Teste (`SparkInventoryTests`) |
|---|---|---|
| Clique seleciona, desmarca o anterior | `Scripts/UI/GameUi.Windows.cs:275`, `GameUi.Windows.cs:403` | `Clique_SelecionaEDesmarcaOAnterior` |
| Duplo clique usa (UseItem 0x14); direito usa (Interlude) | `GameUi.Windows.cs:290`, `GameUi.Windows.cs:403` | `SlotDoInventario_DuploEDireitoUsam_MeioNaoFazNada` |
| Receita pede confirmação | `GameUi.Windows.cs:290`, `GameUi.Windows.cs:304` | `Receita_PedeConfirmacaoAntesDeUsar` |
| Lixeira: confirmação ou quantidade → RequestDestroyItem 0x59 | `GameUi.Windows.cs:322`, `UiInventory.cs:17` | `Lixeira_UnicoConfirma_EmpilhavelPedeQuantidade` |
| Cristalizar → RequestCrystallizeItem 0x72 | `GameUi.Windows.cs:307`, `GameUi.Windows.cs:310`, `GameUi.Windows.cs:322`, `GameUi.Windows.cs:484` | `Cristalizar_SoComAHabilidadeEItemComGrau` |
| Fora/chão → RequestDropItem 0x12 no ponto | `GameUi.Windows.cs:379` | `SoltarNoMundo_PontoDoCliqueEQuantidade` |
| Reordenar (Interlude: local; Spark 0x10 não existe no aCis) | `UiInventory.cs:43`, `UiInventory.cs:53`, `UiInventory.cs:62`, `GameUi.Windows.cs:233`, `GameUi.Windows.cs:259` | `Reordenar_CascataEFimEGravaPorClasse` |
| Arrastar para o paperdoll equipa / de volta desequipa | `GameUi.Windows.cs:322`, `GameUi.Windows.cs:574` | `Paperdoll_EquipaComUseItem_EDesequipaParaALista` |
| Meio = destruir: sem ação (decisão do usuário) | `GameUi.Windows.cs:403` | `SlotDoInventario_DuploEDireitoUsam_MeioNaoFazNada` |

- **Falta / fora do escopo:**
  - **Bloqueado: decisão do usuário** — botão do meio do inventário.
  - Pedido 0005 (net): builders dos pacotes; pedido 0006 (App): `GroundAt` para soltar no chão.
  - A validar: gesto do MoveAll (sm74/sm1833 com tudo), `PopMsgNum`, `bRecipe` pelo tipo do item, desenho do realce da seleção.
  - Pet (`PetInvenWnd`) e `RequestGetItemFromPet`: sem janela de pet no porte.

## Pedidos

- [pedido 0005: net — builders de 0x59, 0x72, 0x12 e 0x11](pedidos/0005-ui-pacotes-inventario.md)
- [pedido 0006: App.cs — ponto do mundo para soltar item](pedidos/0006-ui-ponto-no-mundo.md)
