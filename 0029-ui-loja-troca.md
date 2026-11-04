# #0029 — `ShopWnd` e `TradeWnd` pelo xdat, com o padrão de duas listas (T5)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-loja-troca` |
| Estado | no main |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T5; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

`ShopWnd` e `TradeWnd` pelo xdat, com o padrão de duas listas, com o comportamento do Interlude levantado na #0024 (T5 do 05 §2). Tamanho estimado: M.

Ordem: 10ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-macros` (#0032). Depende de: T1, T3.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: duplo clique, arrastar e Alt entre `TopList`/`BottomList`; NumberPad; tooltips `InventoryPrice1/2`.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes (S→C `BuyList` 0x11, `SellList` 0x10, `TradeStart` 0x1e; C→S `RequestBuyItem`, `RequestSellItem`, `AddTradeItem`) lidos e montados pelo código da #0046 (vaga `net`), depois que ela estiver no `main`; o que faltar lá vira pedido em `tarefas\pedidos\`, sem editar `Scripts\Net\`.
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/loja-troca/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — bloqueada: aguardando #0046 no main. os pacotes base existem, mas os eventos com o `ItemInfo` (pedido 0025: `InterfaceEvents.Item`, `TradeStart` com `EV_TradeAddItem`, `SellList` com `EV_InventoryHideWindow`) só estão no branch da #0046. Branch não criado (a vaga seguiu para a próxima tarefa da cadeia sem pacote novo).
- 2026-11-03 — desbloqueada (#0046 no `main`); branch `feat/ui-loja-troca` criado de `feat/ui-macros` (11e6563).
- 2026-11-03 — `ShopScript`, `TradeScript`, `CommerceView` (ShopWnd e TradeWnd do xdat) e os itens 2–4 do pedido 0025 no `PacketEvents` (`9e5d7fb`).
- 2026-11-03 — `sh Docs/tools/run_tests.sh`: 632/632 (exit 0).
- 2026-11-03 — pedido 0028 (`App.cs` passa os itens); capturas offline e linha K21 (`13ead7a`). aCis fora do ar.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

- [O] `IL:ShopWnd.uc` portado: tipos buy/sell/preview com os textos e os tooltips de cada lista; `MoveItemTopToBottom`/`BottomToTop` (empilhável sem Alt pede o número; venda junta pelo classID e tira da TopList; compra soma peso); `HandleDialogOK` (venda limita ao que tem; o preço não fica negativo); `HandleOKButton` (compra confere o estoque limitado → sm1338 e não envia; pré-visualização → sm1157).
- [O] `IL:TradeWnd.uc` portado: duplo clique e MoveButton (ItemNum 1 vai direto, senão NumberPad sm72), soltar na MyList (Alt = tudo), `HandleTradeAddItem` junta empilháveis pelo serverID, OK apaga a MyList e manda `RequestTradeDone(true)`, `EV_TradeOtherOK` apaga a OtherList, `OnSendPacketWhenHiding` cancela.
- Pedido 0025: item 1 feito na #0036 adiantada (`86c006d`); itens 2 e 4 no `PacketEvents.TradeStart` (targetId e um `EV_TradeAddItem` inventoryList com o ItemInfo por item) e no `ItemList`/`InventoryUpdate`/`PrivateStore`; item 3 (`EV_InventoryHideWindow` antes do `EV_ShopOpenWindow` na venda) e o ItemInfo do Shop/TradeAdd em overloads que o `App.cs` precisa chamar (pedido 0028).
- Decisão: o `EV_InventoryHideWindow` do 0x1e ficou de fora. O `HandleStartTrade` do script já fecha o inventário, e o `EventPairTests` (da vaga net) cobra as chaves nativas desse evento, que no golden são a soma de vários ramos (adena, category, deposit, merchant, sell, targetID, type).
- [I] Na troca, o que foi oferecido sai da InventoryList no cliente (o `EV_TradeUpdateInventoryItem` não chega no porte).
- [I] Empilhável = Type2 ≥ 3 nos itens da loja e da troca (o pacote não traz o ConsumeType).
- Divergências: a barra de peso (`InvenWeight`) não é desenhada (o peso é somado no script); a seleção da lista não tem realce; a pré-visualização não manda pacote (não existe no aCis).

## Entrega

- **Commits:** `9e5d7fb` (código e `CommerceTests`), `13ead7a` (evidências e K21).
- **Testes:** `CommerceTests` (compra com quantidade e estoque limitado, venda com Alt, troca, pares e chaves dos eventos novos); `sh Docs/tools/run_tests.sh` 632/632.
- **Falta / fora do escopo:** pedido 0028; barra de peso; realce da seleção; teste ao vivo (comprar, vender e trocar no aCis). Pedidos: `pedidos/0028-ui-loja-eventos-app.md`.

## Pedidos

- [0028 — App.cs: eventos de loja e troca com os itens](pedidos/0028-ui-loja-eventos-app.md)
- [0025 — divergências do PacketEvents (da net)](pedidos/0025-net-packetevents-divergencias.md)
