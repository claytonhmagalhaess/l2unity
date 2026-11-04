# Pedido 0028 — `App.cs`: eventos de loja e troca com os itens (#0029, pedido 0025)

| Campo | Valor |
|---|---|
| De | ui (tarefa #0029) |
| Para | coordenadora |
| Estado | aberto |
| Criado | 2026-11-03 |

## O que precisa

No `Assets\L2Web\Scripts\App.cs`, usar os overloads novos do `PacketEvents` (branch `feat/ui-loja-troca`, `9e5d7fb`), que levam o `ItemInfo` de cada item:

```csharp
// On(0x11, ...)
L2Events.Dispatch(PacketEvents.Shop("buy", b.ListId, b.Money, 0, b.Items));
// On(0x10, ...)
L2Events.Dispatch(PacketEvents.Shop("sell", 0, sl.Money, 0, sl.Items));
// On(0x20, ...)
var own = SocialPackets.ParseTradeAdd(r);
L2Events.Dispatch(PacketEvents.TradeAdd(true, own));
social.OwnAdd(own);
// On(0x21, ...)
var other = SocialPackets.ParseTradeAdd(r);
L2Events.Dispatch(PacketEvents.TradeAdd(false, other));
social.OtherAdd(other);
```

Hoje a linha de cada um passa só a contagem (`b.Items.Count`) ou nada, e o `ParseTradeAdd` é lido duas vezes.

## Por quê

Itens 3 e 4 do pedido 0025: o `SellList` (0x10) fecha o inventário antes do `EV_ShopOpenWindow` e os `EV_ShopAddItem`/`EV_TradeAddItem` levam o `ItemInfo` (classID, serverID, itemNum, price…). As janelas novas (ShopWnd e TradeWnd) leem os dados direto do `ui.BuyList`/`ui.SellList` e do `social.*`, então nada quebra sem o pedido; ele deixa o barramento igual ao do original para quem registra os eventos.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
