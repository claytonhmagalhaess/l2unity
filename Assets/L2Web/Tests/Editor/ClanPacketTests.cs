// Quests e cla (#0046, T13/T14): cada recebido montado como o aCis o escreve (serverpackets/*.java), os eventos que o
// InterfaceRouter entrega e cada envio campo a campo como o aCis o le (clientpackets/*.java).
using System.Collections.Generic;
using System.Linq;
using L2Web.Net;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class ClanPacketTests
    {
        static (InterfaceRouter, GameClient, List<PacketEvents.Event>) Router()
        {
            var got = new List<PacketEvents.Event>();
            var gc = new GameClient(new GameClientOptions());
            return (new InterfaceRouter(gc, got.AddRange), gc, got);
        }

        static List<PacketEvents.Event> Send(PacketWriter w)
        {
            var (_, gc, got) = Router();
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
        public void QuestList_InicioQuestsEFim()
        {
            var got = Send(new PacketWriter().C(0x80).H(2).D(101).D(3).D(257).D(1));
            Assert.AreEqual(new[] { Ev.EV_QuestListStart, Ev.EV_QuestList, Ev.EV_QuestList, Ev.EV_QuestListEnd }, got.Select(e => e.Id).ToArray());
            Assert.AreEqual(("257", "1"), (S(got[2], "QuestID"), S(got[2], "Level")));
        }

        /// <summary>PledgeShowMemberListAll.writeImpl com um membro online.</summary>
        static PacketWriter MemberListAll()
        {
            var w = new PacketWriter().C(0x53).D(0).D(0x10000100).D(0).S("Cla").S("Lider");
            w.D(5).D(4).D(1).D(0).D(3).D(1200).D(0).D(0).D(0x10000200).S("Alianca").D(7).D(1);
            w.D(1).S("Membro").D(40).D(12).D(1).D(2).D(0x10000300).D(1);
            return w;
        }

        [Test]
        public void PledgeShowMemberListAll_ClanInfoEMembros()
        {
            var r = new PacketReader(MemberListAll().Bytes(), 1);
            var a = ClanPackets.ParsePledgeShowMemberListAll(r);
            Assert.AreEqual(0, r.Remaining);
            Assert.AreEqual((0x10000100, "Cla", "Lider", 4, 1200, "Alianca", true), (a.Info.ClanId, a.ClanName, a.LeaderName, a.Info.Level, a.Info.Reputation, a.Info.AllyName, a.Info.AtWar));
            var got = Send(MemberListAll());
            Assert.AreEqual(new[] { Ev.EV_ClanInfo, Ev.EV_ClanAddMemberMultiple }, got.Select(e => e.Id).ToArray());
            Assert.AreEqual(("Cla", "Lider", "4", "1200", "1"), (S(got[0], "ClanName"), S(got[0], "ClanMasterName"), S(got[0], "SkillLevel"), S(got[0], "ClanNameValue"), S(got[0], "InWar")));
            Assert.AreEqual(("Membro", "40", "12", "268436224", "1"), (S(got[1], "Name"), S(got[1], "Level"), S(got[1], "Class"), S(got[1], "ID"), S(got[1], "HaveMaster")));
            // o parser antigo do App continua lendo o mesmo pacote
            var old = SocialPackets.ParsePledgeMembers(new PacketReader(MemberListAll().Bytes(), 1));
            Assert.AreEqual(("Cla", 1), (old.ClanName, old.Members.Count));
        }

        [Test]
        public void PledgeShowMemberListUpdate_AddDeleteEDeleteAll()
        {
            var u = Send(new PacketWriter().C(0x54).S("Membro").D(41).D(12).D(1).D(2).D(0).D(0).D(1)).Single();
            Assert.AreEqual((Ev.EV_ClanMemberInfoUpdate, "41", "0", "0", "1"), (u.Id, S(u, "Level"), S(u, "ID"), S(u, "PledgeType"), S(u, "HaveMaster")));
            var a = Send(new PacketWriter().C(0x55).S("Novo").D(20).D(0).D(0).D(0).D(0x10000301).D(-1)).Single();
            Assert.AreEqual((Ev.EV_ClanAddMember, "Novo", "-1"), (a.Id, S(a, "Name"), S(a, "ClanType")));
            var d = Send(new PacketWriter().C(0x56).S("Novo")).Single();
            Assert.AreEqual((Ev.EV_ClanDeleteMember, "Novo"), (d.Id, S(d, "Name")));
            Assert.AreEqual(Ev.EV_ClanDeleteAllMember, Send(new PacketWriter().C(0x82)).Single().Id);
        }

        [Test]
        public void PledgeShowInfoUpdate_ClanInfoUpdate()
        {
            var e = Send(new PacketWriter().C(0x88).D(0x10000100).D(5).D(5).D(0).D(0).D(2).D(3000).D(0).D(0).D(0).S("").D(0).D(0)).Single();
            Assert.AreEqual((Ev.EV_ClanInfoUpdate, "5", "3000", "0"), (e.Id, S(e, "SkillLevel"), S(e, "ClanNameValue"), S(e, "InWar")));
        }

        [Test]
        public void ManagePledgePower_PrivilegiosEmBits()
        {
            var e = Send(new PacketWriter().C(0x30).D(6).D(1).D(0b1010)).Single();
            Assert.AreEqual((Ev.EV_ClanAuth, "6", "1", "0", "1", "0", "1"),
                (e.Id, S(e, "GradeID"), S(e, "Command"), S(e, "PowerValue0"), S(e, "PowerValue1"), S(e, "PowerValue2"), S(e, "PowerValue3")));
        }

        [Test]
        public void AskJoinPledge_SoCallback()
        {
            var (router, gc, got) = Router();
            AskJoinPledgeInfo a = null;
            router.OnAskJoinPledge = x => a = x;
            gc.Dispatch(new PacketWriter().C(0x32).D(0x10000001).S("Cla").Bytes());
            Assert.IsEmpty(got);
            Assert.AreEqual((0x10000001, "Cla"), (a.RequestorId, a.ClanName));
        }

        [Test]
        public void PledgeEx_GrausMembroGuerraSubunidadeESkills()
        {
            var g = Send(new PacketWriter().C(0xfe).H(0x3b).D(2).D(1).D(1).D(6).D(10)).Single();
            Assert.AreEqual((Ev.EV_ClanAuthGradeList, "2", "6", "10"), (g.Id, S(g, "Count"), S(g, "GradeID1"), S(g, "GradeMemberCount1")));
            var p = Send(new PacketWriter().C(0xfe).H(0x3c).D(6).S("Membro").D(1 << 4)).Single();
            Assert.AreEqual((Ev.EV_ClanAuthMember, "6", "Membro", "1"), (p.Id, S(p, "Grade"), S(p, "Name"), S(p, "PowerValue4")));
            var m = Send(new PacketWriter().C(0xfe).H(0x3d).D(0).S("Membro").S("Titulo").D(6).S("Cla").S("Mentor")).Single();
            Assert.AreEqual((Ev.EV_ClanMemberInfo, "Titulo", "6", "Cla", "Mentor"), (m.Id, S(m, "NickName"), S(m, "GradeID"), S(m, "OrderName"), S(m, "MasterName")));
            var w = Send(new PacketWriter().C(0xfe).H(0x3e).D(0).D(0).D(2).S("Inimigo1").D(0).D(0).S("Inimigo2").D(0).D(0));
            Assert.AreEqual(2, w.Count);
            Assert.AreEqual((Ev.EV_ClanWarList, "Inimigo2"), (w[1].Id, S(w[1], "ClanName")));
            var s = Send(new PacketWriter().C(0xfe).H(0x3f).D(1).D(100).S("Royal").S("Capitao")).Single();
            Assert.AreEqual((Ev.EV_ClanSubClanUpdated, "100", "Royal", "Capitao"), (s.Id, S(s, "ClanType"), S(s, "ClanName"), S(s, "MasterName")));
            var k = Send(new PacketWriter().C(0xfe).H(0x39).D(1).D(370).D(3)).Single();
            Assert.AreEqual((Ev.EV_ClanSkillList, "1", "370", "3"), (k.Id, S(k, "Count"), S(k, "SkillID0"), S(k, "SkillLevel0")));
            var ka = Send(new PacketWriter().C(0xfe).H(0x3a).D(371).D(1)).Single();
            Assert.AreEqual((Ev.EV_ClanSkillListAdd, "371"), (ka.Id, S(ka, "SkillID")));
        }

        [Test]
        public void EnviosDeQuestECla_ComoOAcisLe()
        {
            Bytes(new PacketWriter().C(0x63), ClanPackets.RequestQuestList());
            Bytes(new PacketWriter().C(0x64).D(257), ClanPackets.RequestQuestAbort(257));
            Bytes(new PacketWriter().C(0x3c), ClanPackets.RequestPledgeMemberList());
            Bytes(new PacketWriter().C(0x66).D(0x10000100), ClanPackets.RequestPledgeInfo(0x10000100));
            Bytes(new PacketWriter().C(0x24).D(0x10000001).D(0), ClanPackets.RequestJoinPledge(0x10000001, 0));
            Bytes(new PacketWriter().C(0x25).D(1), ClanPackets.RequestAnswerJoinPledge(true));
            Bytes(new PacketWriter().C(0x26), ClanPackets.RequestWithdrawPledge());
            Bytes(new PacketWriter().C(0x27).S("Membro"), ClanPackets.RequestOustPledgeMember("Membro"));
            Bytes(new PacketWriter().C(0x55).S("Membro").S("Titulo"), ClanPackets.RequestGiveNickName("Membro", "Titulo"));
            Bytes(new PacketWriter().C(0x4d).S("Inimigo"), ClanPackets.RequestStartPledgeWar("Inimigo"));
            Bytes(new PacketWriter().C(0x4f).S("Inimigo"), ClanPackets.RequestStopPledgeWar("Inimigo"));
            Bytes(new PacketWriter().C(0xc0).D(6).D(1), ClanPackets.RequestPledgePower(6, 1));
            Bytes(new PacketWriter().C(0xc0).D(6).D(2).D(0b1010), ClanPackets.RequestPledgePower(6, 2, 0b1010));
            Bytes(new PacketWriter().C(0xd0).H(0x19).D(1).S("Mentor").S("Aluno"), ClanPackets.RequestPledgeSetAcademyMaster(true, "Mentor", "Aluno"));
            Bytes(new PacketWriter().C(0xd0).H(0x1a), ClanPackets.RequestPledgePowerGradeList());
            Bytes(new PacketWriter().C(0xd0).H(0x1b).D(0).S("Membro"), ClanPackets.RequestPledgeMemberPowerInfo(0, "Membro"));
            Bytes(new PacketWriter().C(0xd0).H(0x1c).S("Membro").D(6), ClanPackets.RequestPledgeSetMemberPowerGrade("Membro", 6));
            Bytes(new PacketWriter().C(0xd0).H(0x1d).D(0).S("Membro"), ClanPackets.RequestPledgeMemberInfo(0, "Membro"));
            Bytes(new PacketWriter().C(0xd0).H(0x1e).D(0).D(1), ClanPackets.RequestPledgeWarList(0, 1));
            Bytes(new PacketWriter().C(0xd0).H(0x24).D(1).S("A").D(100).S("B"), ClanPackets.RequestPledgeReorganizeMember(true, "A", 100, "B"));
        }
    }
}
