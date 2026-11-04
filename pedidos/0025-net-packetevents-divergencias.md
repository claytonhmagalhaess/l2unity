# Pedido 0025 — UI/PacketEvents: divergências nos eventos dos pacotes que o App.cs já trata

| Campo | Valor |
|---|---|
| De | net (tarefa #0046) |
| Para | ui |
| Estado | aceito |
| Criado | 2026-11-03 |

## O que precisa

Ao conferir os pacotes da #0046 que o `App.cs` já tratava, quatro eventos de `Assets/L2Web/Scripts/UI/PacketEvents.cs` divergem do original. O arquivo é da vaga `ui`; a `net` só aponta. As chaves de item já estão prontas em `L2Web.Net.InterfaceEvents.Item(param, InvItem)`, no branch `feat/net-pacotes-interface`.

1. **`PrivateStore` (0x9b, PrivateStoreListSell)** manda `type=sell`. No `PrivateShopWnd`, `sell` é `PT_Sell`, ou seja, vender para a loja de compra de outro (0xb8). Comprar da loja de venda de outro é `type=buy` (`PT_Buy`; `PrivateShopWnd.uc` P166 `:1273-1291`, spec 07 §5.3). Troque para `"buy"`.
2. **`TradeStart` (0x1e)**: o nativo também dispara `EV_InventoryHideWindow` e um `EV_TradeAddItem` com `destination=inventoryList` (mais o item) para cada item do pacote (spec 96, linha do 0x1e; `TradeWnd.uc:401-420`). Hoje só sai `EV_TradeStart`. A chave lida pelo script é `targetId`; `targetID` funciona porque a busca do `ParseInt` ignora maiúsculas.
3. **`Shop` com `SellList` (0x10)**: o nativo dispara `EV_InventoryHideWindow` antes do `EV_ShopOpenWindow` (spec 96). O `BuyList` (0x11) não dispara.
4. **Itens sem campos**: `EV_InventoryAddItem`, `EV_InventoryUpdateItem`, `EV_ShopAddItem`, `EV_TradeAddItem` e `EV_PrivateShopAddItem` saem com o param vazio ou só com `type`/`destination`/`target`. O original manda o `ItemInfo` (`classID`, `serverID`, `itemNum`, `price`...). Sugestão: `InterfaceEvents.Item(p, item)` para `InvItem`. Para `ShopItem`, `TradeItem` e `StoreItem`, monte as mesmas chaves.

Fica de fora: o `InventoryUpdate` (0x27) também dispara `EV_ShortcutUpdate` para os atalhos do item alterado (spec 96, profundidade 2). Isso precisa da tabela de atalhos da UI.

## Por quê

Nada quebra hoje, porque as janelas atuais leem os dados direto das listas do `App`. Mas as janelas portadas do script do original (#0029 ShopWnd/TradeWnd, #0036 PrivateShopWnd) leem o `ItemInfo` do param e escolhem o modo pelo `type`. Com `type=sell` no 0x9b, o PrivateShopWnd abre no modo errado.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->

- 2026-11-03 — ui: aceito. Os itens 1–4 entram junto com as janelas que leem esses eventos: #0029 (ShopWnd/TradeWnd: itens 2, 3 e 4) e #0036 (PrivateShopWnd: itens 1 e 4). As duas esperam a #0046 no `main` (o item 4 usa o `InterfaceEvents.Item`).
