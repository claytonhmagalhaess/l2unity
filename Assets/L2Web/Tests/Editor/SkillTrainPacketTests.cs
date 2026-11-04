// Aprender skill e tatuagem (#0046, T15): cada recebido montado como o aCis o escreve (serverpackets/*.java), os eventos
// que o InterfaceRouter entrega e cada envio campo a campo como o aCis o le (clientpackets/*.java).
using System.Collections.Generic;
using System.Linq;
using L2Web.Net;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class SkillTrainPacketTests
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
        public void AcquireSkillList_MostraEAdicionaSkills()
        {
            var got = Send(new PacketWriter().C(0x8a).D(0).D(2).D(1216).D(2).D(2).D(1500).D(0).D(1012).D(1).D(1).D(300).D(0), out var router);
            Assert.AreEqual(new[] { Ev.EV_SkillTrainListWndShow, Ev.EV_SkillTrainListWndAddSkill, Ev.EV_SkillTrainListWndAddSkill }, got.Select(e => e.Id).ToArray());
            Assert.AreEqual(("0", "1216", "2", "1500"), (S(got[0], "Type"), S(got[1], "iID"), S(got[1], "iLevel"), S(got[1], "iSPConsume")));
            Assert.AreEqual(2, router.SkillTrainList.Skills.Count);
        }

        [Test]
        public void AcquireSkillInfo_SkillEItensExigidos()
        {
            var got = Send(new PacketWriter().C(0x8b).D(1216).D(2).D(1500).D(0).D(1).D(99).D(1458).D(3).D(0), out var router);
            Assert.AreEqual(new[] { Ev.EV_SkillTrainInfoWndShow, Ev.EV_SkillTrainInfoWndAddExtendInfo }, got.Select(e => e.Id).ToArray());
            Assert.AreEqual(("1216", "2", "1500", "3", "1458"), (S(got[0], "iID"), S(got[0], "iLevel"), S(got[0], "iSPConsume"), S(got[1], "iNumOfItem"), S(got[1], "ClassID")));
            Assert.AreEqual(99, router.SkillTrainInfo.Requirements[0].Type);
        }

        [Test]
        public void AcquireSkillDone_FechaAsDuasJanelas()
        {
            var got = Send(new PacketWriter().C(0x8e), out _);
            Assert.AreEqual(new[] { Ev.EV_SkillTrainInfoWndHide, Ev.EV_SkillTrainListWndHide }, got.Select(e => e.Id).ToArray());
        }

        [Test]
        public void HennaEquipListERemoveList()
        {
            var eq = Send(new PacketWriter().C(0xe2).D(50000).D(3).D(1).D(1).D(4445).D(10).D(37000).D(1), out var router);
            Assert.AreEqual(new[] { Ev.EV_HennaListWndShowHideEquip, Ev.EV_HennaListWndAddHennaEquip }, eq.Select(e => e.Id).ToArray());
            Assert.AreEqual(("50000", "1", "4445", "10", "37000"), (S(eq[0], "Adena"), S(eq[1], "HennaID"), S(eq[1], "ClassID"), S(eq[1], "NumOfItem"), S(eq[1], "Fee")));
            Assert.AreEqual(3, router.HennaList.Slots);
            var rm = Send(new PacketWriter().C(0xe5).D(50000).D(0).D(1).D(1).D(4445).D(5).D(7400).D(1), out _);
            Assert.AreEqual(new[] { Ev.EV_HennaListWndShowHideUnEquip, Ev.EV_HennaListWndAddHennaUnEquip }, rm.Select(e => e.Id).ToArray());
        }

        [Test]
        public void HennaItemInfo_AtributosAgoraEDepois()
        {
            var w = new PacketWriter().C(0xe3).D(1).D(4445).D(10).D(37000).D(1).D(50000);
            w.D(21).C(21).D(40).C(41).D(43).C(40).D(25).C(25).D(30).C(30).D(20).C(20);
            var r = new PacketReader(w.Bytes(), 1);
            var h = SkillTrainPackets.ParseHennaItemEquipInfo(r);
            Assert.AreEqual(0, r.Remaining);
            var e = Send(w, out _).Single();
            Assert.AreEqual((Ev.EV_HennaInfoWndShowHideEquip, "40", "41", "43", "40"), (e.Id, S(e, "STRnow"), S(e, "STRchange"), S(e, "CONnow"), S(e, "CONchange")));
            var rm = Send(new PacketWriter().C(0xe6).D(1).D(4445).D(5).D(7400).D(1).D(50000).D(21).C(21).D(41).C(40).D(40).C(43).D(25).C(25).D(30).C(30).D(20).C(20), out _).Single();
            Assert.AreEqual(Ev.EV_HennaInfoWndShowHideUnEquip, rm.Id);
        }

        [Test]
        public void HennaInfo_BonusETatuagens()
        {
            var w = new PacketWriter().C(0xe4).C(0).C(1).C(-1).C(0).C(0).C(0).D(3).D(2).D(1).D(1).D(7).D(0);
            var got = Send(w, out var router);
            Assert.AreEqual(new[] { Ev.EV_UpdateHennaInfo, Ev.EV_InventoryAddHennaInfo, Ev.EV_InventoryAddHennaInfo }, got.Select(e => e.Id).ToArray());
            Assert.AreEqual(("1", "-1"), (S(got[0], "STRchange"), S(got[0], "CONchange")));
            Assert.AreEqual(("7", "0"), (S(got[2], "ID"), S(got[2], "bActive")));
            Assert.AreEqual(3, router.Hennas.MaxSize);
        }

        [Test]
        public void EnviosDeSkillETatuagem_ComoOAcisLe()
        {
            Bytes(new PacketWriter().C(0x6b).D(1216).D(2).D(0), SkillTrainPackets.RequestAcquireSkillInfo(1216, 2, 0));
            Bytes(new PacketWriter().C(0x6c).D(1216).D(2).D(0), SkillTrainPackets.RequestAcquireSkill(1216, 2, 0));
            Bytes(new PacketWriter().C(0xba).D(1), SkillTrainPackets.RequestHennaList());
            Bytes(new PacketWriter().C(0xbb).D(1), SkillTrainPackets.RequestHennaItemInfo(1));
            Bytes(new PacketWriter().C(0xbc).D(1), SkillTrainPackets.RequestHennaEquip(1));
            Bytes(new PacketWriter().C(0xbd).D(1), SkillTrainPackets.RequestHennaRemoveList());
            Bytes(new PacketWriter().C(0xbe).D(1), SkillTrainPackets.RequestHennaItemRemoveInfo(1));
            Bytes(new PacketWriter().C(0xbf).D(1), SkillTrainPackets.RequestHennaRemove(1));
        }
    }
}
