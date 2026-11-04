// #0029 (loja e troca): ShopWnd.uc (duas listas, NumberPad, Alt, preco, peso, estoque limitado sm1338), TradeWnd.uc
// (duplo clique, soltar com Alt, mover, juntar empilhaveis) e os eventos do pedido 0025 (itens 2-4) contra os pares do
// original (Golden/events.json, como o EventPairTests).
using System.Collections.Generic;
using System.Linq;
using L2Web.Net;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class CommerceTests
    {
        static ListItem Shot(long n = 0, long price = 10) => new() { ClassId = 1835, ServerId = 13, ConsumeType = 2, ItemNum = n, Price = price, Weight = 1, Name = "Soulshot" };
        static ListItem Sword(int sid = 11) => new() { ClassId = 2369, ServerId = sid, ItemNum = 1, Price = 100, Weight = 1600, Name = "Sword" };

        [Test]
        public void Compra_QuantidadePrecoEPeso()
        {
            var s = new ShopScript();
            s.Open("buy", 7, 5000);
            s.Add(Shot());
            s.Add(Sword());
            Assert.IsFalse(s.Top[0].ShowCount, "estoque ilimitado (ItemNum 0) sem quantidade");
            var ask = s.TopToBottom(0, false);
            Assert.AreEqual((ShopScript.DialogTopToBottom, 1835, -1L), (ask.DlgId, ask.ClassId, ask.ParamInt), "compra: All desligado (-1)");
            s.DialogOk(ShopScript.DialogTopToBottom, 30, 1835);
            Assert.AreEqual((30L, 300L, 30L), (s.Bottom[0].ItemNum, s.Price, s.Weight));
            Assert.IsNull(s.TopToBottom(1, false), "nao empilhavel vai direto");
            Assert.AreEqual((2, 400L), (s.Bottom.Count, s.Price));
            Assert.IsNull(s.BottomToTop(1, false));
            Assert.AreEqual((1, 300L), (s.Bottom.Count, s.Price));
            s.DialogOk(ShopScript.DialogBottomToTop, 50, 1835);
            Assert.AreEqual((0, 0L), (s.Bottom.Count, s.Price), "tirar mais do que havia nao deixa o preco negativo");
            Assert.AreEqual(2, s.Top.Count, "na compra a lista de cima nao muda");
        }

        [Test]
        public void Compra_EstoqueLimitado()
        {
            var s = new ShopScript();
            s.Open("buy", 7, 0);
            s.Add(Shot(5));
            Assert.IsTrue(s.Top[0].ShowCount);
            s.DialogOk(ShopScript.DialogTopToBottom, 6, 1835);
            Assert.IsNull(s.Ok().items);
            Assert.AreEqual(1338, s.Ok().warnMsg);
            s.DialogOk(ShopScript.DialogBottomToTop, 1, 1835);
            var (items, warn) = s.Ok();
            Assert.AreEqual(0, warn);
            Assert.AreEqual((1835, 5L), (items[0].ClassId, items[0].Count));
        }

        [Test]
        public void Venda_AltMoveTudoEVolta()
        {
            var s = new ShopScript();
            s.Open("sell", 0, 100);
            s.Add(Shot(500, 5));
            var ask = s.TopToBottom(0, false);
            Assert.AreEqual(500L, ask.ParamInt, "venda: All = o que tem");
            Assert.IsNull(s.TopToBottom(0, true), "Alt = tudo, sem perguntar");
            Assert.AreEqual((0, 500L, 2500L), (s.Top.Count, s.Bottom[0].ItemNum, s.Price));
            s.DialogOk(ShopScript.DialogBottomToTop, 200, 1835);
            Assert.AreEqual((300L, 200L, 1500L), (s.Bottom[0].ItemNum, s.Top[0].ItemNum, s.Price));
            s.DialogOk(ShopScript.DialogTopToBottom, 9999, 1835);
            Assert.AreEqual((500L, 0), (s.Bottom[0].ItemNum, s.Top.Count), "venda limita ao que tem");
            Assert.AreEqual((13, 1835, 500L), s.Ok().items.Select(x => (x.ServerId, x.ClassId, x.Count)).Single());
            Assert.AreEqual(("InventoryPrice2", "InventoryPrice2"), s.TooltipTypes());
            Assert.AreEqual((136, 138, 137, 143), s.Texts());
        }

        [Test]
        public void Troca()
        {
            var t = new TradeScript();
            t.AddItem("inventoryList", Shot(50));
            t.AddItem("inventoryList", Sword());
            Assert.IsTrue(t.DoubleClick(0).Ask, "empilhavel pede o numero");
            Assert.AreEqual((false, 11, 1L), (t.DoubleClick(1).Ask, t.DoubleClick(1).ServerId, t.DoubleClick(1).Count));
            Assert.AreEqual(50L, t.DropOnMy(t.Inventory[0], 50).Count, "Alt = tudo");
            Assert.IsTrue(t.DropOnMy(t.Inventory[0], 0).Ask);
            Assert.AreEqual(1L, t.DropOnMy(Shot(1), 0).Count);
            Assert.IsTrue(t.Move(0).Ask);
            t.AddItem("myList", Shot(10));
            t.AddItem("myList", Shot(5));
            Assert.AreEqual((1, 15L), (t.My.Count, t.My[0].ItemNum), "mesmo serverID empilhavel soma");
            t.UpdateInventory("delete", Sword());
            Assert.AreEqual(1, t.Inventory.Count);
        }

        [Test]
        public void EventosDoPedido0025_SaoParesComAsChaves()
        {
            var g = (JObject)Golden.Load("events.json");
            var pairs = ((JArray)g["pairs"]).Select(p => ((string)p["table"], (int)p["opcode"], (string)p["event"])).ToHashSet();
            var casos = new List<(int op, List<PacketEvents.Event> evs)>
            {
                (0x1e, PacketEvents.TradeStart(new TradeStartInfo { PartnerId = 4, Items = new List<TradeItem> { new() { ObjectId = 13, ItemId = 1835, Count = 50 } } })),
                (0x20, PacketEvents.TradeAdd(true, new TradeItem { ObjectId = 13, ItemId = 1835, Count = 5 })),
                (0x10, PacketEvents.Shop("sell", 0, 100, 0, new List<ShopItem> { new() { ObjectId = 13, ItemId = 1835, Count = 50, Price = 5 } })),
                (0x11, PacketEvents.Shop("buy", 7, 100, 0, new List<ShopItem> { new() { ItemId = 1835, Price = 10 } })),
            };
            foreach (var (op, evs) in casos)
                foreach (var e in evs)
                    Assert.IsTrue(pairs.Contains(("game", op, Ev.Names[e.Id])), $"0x{op:x2} {Ev.Names[e.Id]}");
            var ts = casos[0].evs;
            Assert.AreEqual(new[] { "EV_TradeStart", "EV_TradeAddItem" }, ts.Select(e => Ev.Names[e.Id]).ToArray());
            int target = 0, cls = 0, num = 0, price = 0;
            string dest = null;
            Assert.IsTrue(L2Param.ParseInt(ts[0].Param, "targetId", ref target) && target == 4);
            Assert.IsTrue(L2Param.ParseString(ts[1].Param, "destination", ref dest) && dest == "inventoryList");
            Assert.IsTrue(L2Param.ParseInt(ts[1].Param, "classID", ref cls) && cls == 1835);
            Assert.IsTrue(L2Param.ParseInt(ts[1].Param, "itemNum", ref num) && num == 50);
            Assert.AreEqual("EV_InventoryHideWindow", Ev.Names[casos[2].evs[0].Id], "a venda fecha o inventario antes");
            Assert.AreEqual("EV_ShopOpenWindow", Ev.Names[casos[3].evs[0].Id], "a compra nao");
            Assert.IsTrue(L2Param.ParseInt(casos[3].evs.Last().Param, "price", ref price) && price == 10);
        }
    }
}
