// Melhoria de item (#0046, T20): enchant e refino montados como o aCis os escreve (serverpackets/*.java), os eventos que o
// InterfaceRouter entrega e os envios campo a campo como o aCis os le (clientpackets/*.java).
using System.Collections.Generic;
using System.Linq;
using L2Web.Net;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class EnchantPacketTests
    {
        static List<PacketEvents.Event> Send(PacketWriter w, out InterfaceRouter router)
        {
            var got = new List<PacketEvents.Event>();
            var gc = new GameClient(new GameClientOptions());
            router = new InterfaceRouter(gc, got.AddRange);
            gc.Dispatch(w.Bytes());
            return got;
        }

        static PacketEvents.Event One(PacketWriter w) => Send(w, out _).Single();

        static string S(PacketEvents.Event e, string key)
        {
            string v = null;
            L2Param.ParseString(e.Param, key, ref v);
            return v;
        }

        static void Bytes(PacketWriter expected, byte[] actual) => CollectionAssert.AreEqual(expected.Bytes(), actual);

        [Test]
        public void ChooseInventoryItemEEnchantResult()
        {
            var got = Send(new PacketWriter().C(0x6f).D(955), out var router);
            Assert.AreEqual((Ev.EV_EnchantShow, "955"), (got.Single().Id, S(got[0], "ClassID")));
            Assert.AreEqual(955, router.EnchantScroll);
            var e = One(new PacketWriter().C(0x81).D(1));
            Assert.AreEqual((Ev.EV_EnchantResult, "1"), (e.Id, S(e, "Result")));
        }

        [Test]
        public void JanelasDoRefino()
        {
            Assert.AreEqual(Ev.EV_ShowRefineryInteface, One(new PacketWriter().C(0xfe).H(0x50)).Id);
            Assert.AreEqual(Ev.EV_ShowRefineryCancelInteface, One(new PacketWriter().C(0xfe).H(0x51)).Id);
        }

        [Test]
        public void ConfirmacoesDoRefino()
        {
            var t = One(new PacketWriter().C(0xfe).H(0x52).D(0x10000001).D(1).D(1));
            Assert.AreEqual((Ev.EV_RefineryConfirmTargetItemResult, "268435457", "1"), (t.Id, S(t, "TargetItemServerID"), S(t, "Result")));
            var r = One(new PacketWriter().C(0xfe).H(0x53).D(0x10000002).D(8723).D(2131).D(20).D(1));
            Assert.AreEqual((Ev.EV_RefineryConfirmRefinerItemResult, "8723", "2131", "20", "1"),
                (r.Id, S(r, "RefinerItemClassID"), S(r, "GemStoneClassID"), S(r, "GemStoneCount"), S(r, "Result")));
            var g = One(new PacketWriter().C(0xfe).H(0x54).D(0x10000003).D(1).D(20).D(1).D(1));
            Assert.AreEqual((Ev.EV_RefineryConfirmGemStoneResult, "268435459", "20"), (g.Id, S(g, "GemStoneServerID"), S(g, "NecessaryGemStoneCount")));
        }

        [Test]
        public void ResultadosDoRefino()
        {
            var v = One(new PacketWriter().C(0xfe).H(0x55).D(0x1234).D(0x5678).D(1));
            Assert.AreEqual((Ev.EV_RefineryRefineResult, "4660", "22136", "1"), (v.Id, S(v, "Option1"), S(v, "Option2"), S(v, "Result")));
            // ExConfirmCancelItem.writeImpl: obj, id, aug1, aug2, Q preco, 1
            var w = new PacketWriter().C(0xfe).H(0x56).D(0x10000001).D(6579).D(0x1234).D(0x5678).Q(480000L).D(1);
            var rd = new PacketReader(w.Bytes(), 3);
            Assert.AreEqual(480000L, EnchantPackets.ParseExConfirmCancelItem(rd).Adena);
            Assert.AreEqual(0, rd.Remaining);
            var c = One(w);
            Assert.AreEqual((Ev.EV_RefineryConfirmCancelItemResult, "6579", "480000", "1"), (c.Id, S(c, "CancelItemClassID"), S(c, "Adena"), S(c, "Result")));
            // ExVariationCancelResult: o aCis manda closeWindow e o resultado; o engine le so o 1o d
            var k = One(new PacketWriter().C(0xfe).H(0x57).D(1).D(1));
            Assert.AreEqual((Ev.EV_RefineryRefineCancelResult, "1"), (k.Id, S(k, "Result")));
        }

        [Test]
        public void EnviosDeEnchantERefino_ComoOAcisLe()
        {
            Bytes(new PacketWriter().C(0x58).D(0x10000001), EnchantPackets.RequestEnchantItem(0x10000001));
            Bytes(new PacketWriter().C(0xd0).H(0x29).D(1), EnchantPackets.RequestConfirmTargetItem(1));
            Bytes(new PacketWriter().C(0xd0).H(0x2a).D(1).D(2), EnchantPackets.RequestConfirmRefinerItem(1, 2));
            Bytes(new PacketWriter().C(0xd0).H(0x2b).D(1).D(2).D(3).D(20), EnchantPackets.RequestConfirmGemStone(1, 2, 3, 20));
            Bytes(new PacketWriter().C(0xd0).H(0x2c).D(1).D(2).D(3).D(20), EnchantPackets.RequestRefine(1, 2, 3, 20));
            Bytes(new PacketWriter().C(0xd0).H(0x2d).D(1), EnchantPackets.RequestConfirmCancelItem(1));
            Bytes(new PacketWriter().C(0xd0).H(0x2e).D(1), EnchantPackets.RequestRefineCancel(1));
        }
    }
}
