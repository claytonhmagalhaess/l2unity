// Fabricacao (#0046, T19): o aCis do usuario nao implementa receitas, entao os recebidos sao montados no formato que o
// engine.dll le (Golden/packet_layouts.json, conferido tambem em ReceivedLayoutTests) e os envios no formato que ele envia.
using System.Collections.Generic;
using System.Linq;
using L2Web.Net;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class RecipePacketTests
    {
        static List<PacketEvents.Event> Send(PacketWriter w, out InterfaceRouter router)
        {
            var got = new List<PacketEvents.Event>();
            var gc = new GameClient(new GameClientOptions());
            router = new InterfaceRouter(gc, got.AddRange);
            gc.Dispatch(w.Bytes());
            return got;
        }

        static string S(PacketEvents.Event e, string key)
        {
            string v = null;
            L2Param.ParseString(e.Param, key, ref v);
            return v;
        }

        static void Bytes(PacketWriter expected, byte[] actual) => CollectionAssert.AreEqual(expected.Bytes(), actual);

        [Test]
        public void RecipeBookItemList_LivroEReceitas()
        {
            var got = Send(new PacketWriter().C(0xd6).D(1).D(500).D(2).D(1).D(1).D(7).D(2), out var router);
            Assert.AreEqual(new[] { Ev.EV_RecipeShowBookWnd, Ev.EV_RecipeAddBookItem, Ev.EV_RecipeAddBookItem }, got.Select(e => e.Id).ToArray());
            Assert.AreEqual(("1", "7"), (S(got[0], "Type"), S(got[2], "RecipeID")));
            Assert.AreEqual(500, router.RecipeBook.MaxMp);
        }

        [Test]
        public void RecipeItemMakeInfo_Resultado()
        {
            var e = Send(new PacketWriter().C(0xd7).D(7).D(1).D(300).D(500).D(1), out _).Single();
            Assert.AreEqual((Ev.EV_RecipeItemMakeInfo, "7", "300", "500", "1", "1"),
                (e.Id, S(e, "RecipeID"), S(e, "CurrentMP"), S(e, "MaxMP"), S(e, "MakingResult"), S(e, "Type")));
        }

        [Test]
        public void RecipeShopManageList_LivroELoja()
        {
            var w = new PacketWriter().C(0xd8).D(0x10000001).D(900).D(0).D(1).D(7).D(1).D(1).D(7).D(0).D(1500);
            var r = new PacketReader(w.Bytes(), 1);
            RecipePackets.ParseRecipeShopManageList(r);
            Assert.AreEqual(0, r.Remaining);
            var got = Send(w, out _);
            Assert.AreEqual(new[] { Ev.EV_RecipeShopShowWnd, Ev.EV_RecipeShopAddBookItem, Ev.EV_RecipeShopAddShopItem }, got.Select(e => e.Id).ToArray());
            Assert.AreEqual(("7", "1500"), (S(got[2], "RecipeID"), S(got[2], "MakingFee")));
        }

        [Test]
        public void RecipeShopSellList_ComprarFabricacao()
        {
            var got = Send(new PacketWriter().C(0xd9).D(0x10000001).D(300).D(500).D(10000).D(1).D(7).D(0).D(1500), out var router);
            Assert.AreEqual(new[] { Ev.EV_RecipeShowBuyListWnd, Ev.EV_RecipeShopSellItem }, got.Select(e => e.Id).ToArray());
            Assert.AreEqual(("268435457", "10000", "1500"), (S(got[0], "ServerID"), S(got[0], "Adena"), S(got[1], "MakingFee")));
            Assert.AreEqual(1, router.RecipeShopSell.Items.Count);
        }

        [Test]
        public void RecipeShopItemInfo_EMsg()
        {
            var e = Send(new PacketWriter().C(0xda).D(0x10000001).D(7).D(300).D(500).D(-1).D(10000), out _).Single();
            Assert.AreEqual((Ev.EV_RecipeShopItemInfo, "268435457", "-1", "10000"), (e.Id, S(e, "MerchantID"), S(e, "MakingResult"), S(e, "Adena")));
            PrivateStoreMsgInfo m = null;
            var gc = new GameClient(new GameClientOptions());
            var r2 = new InterfaceRouter(gc, _ => Assert.Fail("RecipeShopMsg nao tem EV_"));
            r2.OnRecipeShopMsg = x => m = x;
            gc.Dispatch(new PacketWriter().C(0xdb).D(0x10000001).S("faco SoE").Bytes());
            Assert.AreEqual("faco SoE", m.Message);
        }

        [Test]
        public void EnviosDaFabricacao_FormatoDoEngine()
        {
            Bytes(new PacketWriter().C(0xac).D(1), RecipePackets.RequestRecipeBookOpen(1));
            Bytes(new PacketWriter().C(0xad).D(7), RecipePackets.RequestRecipeItemDelete(7));
            Bytes(new PacketWriter().C(0xae).D(7), RecipePackets.RequestRecipeItemMakeInfo(7));
            Bytes(new PacketWriter().C(0xaf).D(7), RecipePackets.RequestRecipeItemMakeSelf(7));
            Bytes(new PacketWriter().C(0xb0), RecipePackets.RequestRecipeShopManageList());
            Bytes(new PacketWriter().C(0xb1).S("faco"), RecipePackets.RequestRecipeShopMessageSet("faco"));
            Bytes(new PacketWriter().C(0xb2).D(1).D(7).D(1500), RecipePackets.RequestRecipeShopListSet(new List<(int, int)> { (7, 1500) }));
            Bytes(new PacketWriter().C(0xb3), RecipePackets.RequestRecipeShopManageQuit());
            Bytes(new PacketWriter().C(0xb4), RecipePackets.RequestRecipeShopManageCancel());
            Bytes(new PacketWriter().C(0xb5).D(0x10000001).D(7), RecipePackets.RequestRecipeShopMakeInfo(0x10000001, 7));
            Bytes(new PacketWriter().C(0xb6).D(0x10000001).D(7).D(1500), RecipePackets.RequestRecipeShopMakeDo(0x10000001, 7, 1500));
            Bytes(new PacketWriter().C(0xb7).D(0x10000001), RecipePackets.RequestRecipeShopSellList(0x10000001));
        }
    }
}
