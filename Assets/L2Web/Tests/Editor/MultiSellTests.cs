// K8 da matriz (Docs/validacao.md): MultiSellWnd. Golden/multisell.json (Docs/tools/gen_golden.py multisell): formatos do
// MultiSellList 0xd0 (Engine.dll FUN_104183a0), quando sai o ShopID e o fim, e as chaves dos eventos na ordem dos
// emissores (FUN_10163500 / FUN_10163800). O resto segue o MultiSellWnd.uc.
using System.Linq;
using System.Text.RegularExpressions;
using L2Web.Net;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class MultiSellTests
    {
        static JObject G => (JObject)Golden.Load("multisell.json");

        static byte[] Packet(int page, bool finished)
        {
            var g = G;
            CollectionAssert.AreEqual(new[] { "ddddd", "dddchh", "hdhdhdd", "hhdhdd" }, ((JArray)g["formats"]).Select(x => (string)x).ToArray());
            var w = new PacketWriter();
            w.D(77).D(page).D(finished ? 1 : 0).D(40).D(2);
            // entrada 5: tipo 1, 2 produtos, 2 ingredientes (um deles -100 = pontos do PC cafe)
            w.D(5).D(0).D(0).C(1).H(2).H(2);
            w.H(57).D(0).H(4).D(1000).H(0).D(0).D(0);
            w.H(1864).D(0).H(5).D(3).H(0).D(0).D(0);
            w.H(-100).H(0).D(30).H(0).D(0).D(0);
            w.H(1878).H(5).D(2).H(3).D(0).D(0);
            // entrada 6: tipo 0, 1 produto, 1 ingrediente
            w.D(6).D(0).D(0).C(0).H(1).H(1);
            w.H(2369).D(128).H(0).D(1).H(4).D(0).D(0);
            w.H(57).H(4).D(500).H(0).D(0).D(0);
            return w.Bytes();
        }

        static string[] Keys(string p) => Regex.Matches(p, @"(\w+)=").Select(m => m.Groups[1].Value).ToArray();

        [Test]
        public void Pacote_EventosComoONativo()
        {
            var g = G;
            var m = UiPackets.ParseMultiSellList(new PacketReader(Packet(1, true)));
            var ev = PacketEvents.MultiSell(m);
            Assert.AreEqual(Ev.EV_MultiSellShopID, ev[0].Id, "pagina 1: OnSetVIPShopID");
            Assert.AreEqual(Ev.EV_MultiSellItemListEnd, ev.Last().Id);
            var items = ev.Where(e => e.Id == Ev.EV_MultiSellItemList).ToList();
            var needs = ev.Where(e => e.Id == Ev.EV_MultiSellNeededItemList).ToList();
            Assert.AreEqual(3, items.Count);
            Assert.AreEqual(3, needs.Count);
            foreach (var e in items) CollectionAssert.AreEqual(((JArray)g["itemKeys"]).Select(x => (string)x).ToArray(), Keys(e.Param));
            foreach (var e in needs) CollectionAssert.AreEqual(((JArray)g["needKeys"]).Select(x => (string)x).ToArray(), Keys(e.Param));
            int I(string p, string k)
            {
                var v = int.MinValue;
                L2Param.ParseInt(p, k, ref v);
                return v;
            }
            // index = posicao do produto na entrada; type = o c da entrada; o item com sinal
            CollectionAssert.AreEqual(new[] { 0, 1, 0 }, items.Select(e => I(e.Param, "index")).ToArray());
            CollectionAssert.AreEqual(new[] { 1, 1, 0 }, items.Select(e => I(e.Param, "type")).ToArray());
            Assert.AreEqual(128, I(items[2].Param, "slotBitType"));
            Assert.AreEqual(4, I(items[2].Param, "enchant"));
            Assert.AreEqual(-100, I(needs[0].Param, "ClassID"));
            // outras paginas: sem ShopID; sem o fim enquanto nao terminar
            var ev2 = PacketEvents.MultiSell(UiPackets.ParseMultiSellList(new PacketReader(Packet(2, false))));
            Assert.IsFalse(ev2.Any(e => e.Id == Ev.EV_MultiSellShopID || e.Id == Ev.EV_MultiSellItemListEnd));
            Assert.AreEqual(1, (int)g["shopIdWhen"], "a condicao do ShopID e o 2o campo (pagina)");
            Assert.AreEqual(2, (int)g["endWhen"], "a do fim e o 3o");
        }

        [Test]
        public void Script_EntradasCliqueEOk()
        {
            var s = new MultiSellScript { SysString = i => "S" + i, ItemName = i => "I" + i, ItemIcon = i => "icon" + i };
            foreach (var e in PacketEvents.MultiSell(UiPackets.ParseMultiSellList(new PacketReader(Packet(1, true))))) s.OnEvent(e.Id, e.Param);
            Assert.AreEqual(77, s.ShopId);
            Assert.AreEqual(2, s.ItemList.Count);
            var a = s.ItemList[0];
            Assert.AreEqual(2, a.NeededItemNum);
            Assert.AreEqual(new[] { 57, 1864 }, a.ItemInfoList.Select(x => x.ClassId).ToArray());
            Assert.AreEqual(2, a.NeededItemList.Count);
            Assert.AreEqual("S1277", a.NeededItemList[0].Name);
            Assert.AreEqual(0, a.NeededItemList[0].Id);
            Assert.AreEqual("icon.etc_i.etc_pccafe_point_i00", a.NeededItemList[0].IconName);
            Assert.AreEqual("I1878", a.NeededItemList[1].Name);
            Assert.AreEqual(("1", true, false), s.Click(0, false));
            Assert.AreEqual(("1", true, true), s.Click(0, true), "pre_itemList comeca em -1");
            Assert.AreEqual(("1", false, true), s.Click(1, true), "linha nova fecha o dialogo dela");
            Assert.IsNull(s.Ok(-1, "1"));
            Assert.AreEqual((1, 3), s.Ok(1, "3"));
            Assert.AreEqual(1, s.PreItemList);
            Assert.AreEqual((77, 6, 0, 0, 3), s.Choose(1, 3));
            s.HandleShopId(L2Param.Add("", "shopID", 9));
            Assert.AreEqual(0, s.ItemList.Count);
        }
    }
}
