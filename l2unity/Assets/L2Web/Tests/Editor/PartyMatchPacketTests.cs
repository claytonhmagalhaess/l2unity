// Busca de grupo, uniao e duelo (#0046, T21): cada recebido montado como o aCis o escreve (serverpackets/*.java), os eventos
// que o InterfaceRouter entrega e cada envio campo a campo como o aCis o le (clientpackets/*.java).
using System.Collections.Generic;
using System.Linq;
using L2Web.Net;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class PartyMatchPacketTests
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

        static PacketWriter Ex(int sub) => new PacketWriter().C(0xfe).H(sub);

        static string S(PacketEvents.Event e, string key)
        {
            string v = null;
            L2Param.ParseString(e.Param, key, ref v);
            return v;
        }

        static void Bytes(PacketWriter expected, byte[] actual) => CollectionAssert.AreEqual(expected.Bytes(), actual);

        [Test]
        public void PartyMatchList_Salas()
        {
            var got = Send(new PacketWriter().C(0x96).D(1).D(1).D(5).S("Farm").D(9).D(40).D(52).D(3).D(9).S("Lider"), out _);
            Assert.AreEqual(new[] { Ev.EV_PartyMatchStart, Ev.EV_PartyMatchList }, got.Select(e => e.Id).ToArray());
            var p = got[1];
            Assert.AreEqual(("1", "5", "Lider", "9", "Farm", "3"), (S(p, "RoomCount"), S(p, "RoomNum_0"), S(p, "Leader_0"), S(p, "ZoneID_0"), S(p, "RoomName_0"), S(p, "CurMember_0")));
        }

        [Test]
        public void PartyMatchDetail_EFecharSala()
        {
            var e = Send(new PacketWriter().C(0x97).D(5).D(9).D(40).D(52).D(1).D(9).S("Farm"), out var router).Single();
            Assert.AreEqual((Ev.EV_PartyMatchRoomStart, "5", "9", "1", "Farm"), (e.Id, S(e, "RoomNum"), S(e, "MaxMember"), S(e, "LootingMethodID"), S(e, "RoomName")));
            Assert.AreEqual(5, router.PartyRoom.RoomId);
            Assert.AreEqual(Ev.EV_PartyMatchRoomClose, One(Ex(0x0f)).Id);
        }

        [Test]
        public void ExPartyRoomMember_EManage()
        {
            var w = Ex(0x0e).D(1).D(2).D(0x10000001).S("Dono").D(12).D(52).D(9).D(1).D(0x10000002).S("Outro").D(30).D(48).D(9).D(0);
            var e = One(w);
            Assert.AreEqual((Ev.EV_PartyMatchRoomMember, "1", "2", "Outro", "30", "0"),
                (e.Id, S(e, "MyMembershipType"), S(e, "MemberCount"), S(e, "MemberName_1"), S(e, "ClassID_1"), S(e, "MembershipType_1")));
            var u = One(Ex(0x10).D(0).D(0x10000003).S("Novo").D(5).D(20).D(9).D(0));
            Assert.AreEqual((Ev.EV_PartyMatchRoomMemberUpdate, "0", "Novo", "20"), (u.Id, S(u, "UpdateType"), S(u, "MemberName"), S(u, "Level")));
        }

        [Test]
        public void ListaDeEspera()
        {
            var got = Send(Ex(0x35).D(1).D(2).S("A").D(12).D(40).S("B").D(30).D(45), out _);
            Assert.AreEqual(new[] { Ev.EV_PartyMatchWaitListStart, Ev.EV_PartyMatchWaitList, Ev.EV_PartyMatchWaitList }, got.Select(e => e.Id).ToArray());
            Assert.AreEqual(("2", "B", "45"), (S(got[0], "Count"), S(got[2], "Name"), S(got[2], "Level")));
        }

        [Test]
        public void ConvitesSemEvento()
        {
            var got = new List<PacketEvents.Event>();
            var gc = new GameClient(new GameClientOptions());
            var router = new InterfaceRouter(gc, got.AddRange);
            string room = null, mpcc = null;
            router.OnAskJoinPartyRoom = x => room = x;
            router.OnAskJoinMPCC = x => mpcc = x;
            gc.Dispatch(Ex(0x34).S("Dono").Bytes());
            gc.Dispatch(Ex(0x27).S("Comandante").Bytes());
            Assert.IsEmpty(got);
            Assert.AreEqual(("Dono", "Comandante"), (room, mpcc));
        }

        [Test]
        public void CanalDeComando()
        {
            Assert.AreEqual(Ev.EV_CommandChannelStart, One(Ex(0x25)).Id);
            Assert.AreEqual(Ev.EV_CommandChannelEnd, One(Ex(0x26)).Id);
            var got = Send(Ex(0x30).S("Comandante").D(0).D(14).D(2).S("L1").D(0x10000001).D(9).S("L2").D(0x10000002).D(5), out _);
            Assert.AreEqual(new[] { Ev.EV_CommandChannelInfo, Ev.EV_CommandChannelPartyList, Ev.EV_CommandChannelPartyList }, got.Select(e => e.Id).ToArray());
            Assert.AreEqual(("Comandante", "2", "14", "L2", "5"), (S(got[0], "OwnerName"), S(got[0], "PartyNum"), S(got[0], "PartyMemberNum"), S(got[2], "MasterName"), S(got[2], "PartyNum")));
            Assert.AreEqual("1", S(One(Ex(0x36).D(1)), "RoutingType"));
            var m = One(Ex(0x4a).D(1).S("Membro").D(0x10000005).D(12));
            Assert.AreEqual((Ev.EV_CommandChannelPartyMember, "Membro", "12", "268435461"), (m.Id, S(m, "Name_0"), S(m, "ClassID_0"), S(m, "ServerID_0")));
            var u = One(Ex(0x5a).S("L3").D(0x10000003).D(4).D(1));
            Assert.AreEqual((Ev.EV_CommandChannelPartyUpdate, "L3", "4", "1"), (u.Id, S(u, "MasterName"), S(u, "MemberCount"), S(u, "Type")));
        }

        [Test]
        public void Duelo()
        {
            Assert.AreEqual((Ev.EV_DuelReady, "0"), (One(Ex(0x4c).D(0)).Id, S(One(Ex(0x4c).D(0)), "type")));
            Assert.AreEqual(Ev.EV_DuelStart, One(Ex(0x4d).D(1)).Id);
            Assert.AreEqual(Ev.EV_DuelEnd, One(Ex(0x4e).D(1)).Id);
            var d = One(Ex(0x4f).S("Rival").D(0x10000009).D(12).D(52).D(1000).D(2000).D(300).D(600).D(800).D(900));
            Assert.AreEqual((Ev.EV_DuelUpdateUserInfo, "Rival", "1000", "2000", "900"), (d.Id, S(d, "userName"), S(d, "currentHP"), S(d, "maxHP"), S(d, "maxCP")));
        }

        [Test]
        public void EnviosDeGrupoUniaoEDuelo_ComoOAcisLe()
        {
            Bytes(new PacketWriter().C(0x6f).D(1).D(0).D(1), PartyMatchPackets.RequestPartyMatchConfig(1, 0, 1));
            Bytes(new PacketWriter().C(0x70).D(0).D(9).D(40).D(52).D(1).S("Farm"), PartyMatchPackets.RequestPartyMatchList(0, 9, 40, 52, 1, "Farm"));
            Bytes(new PacketWriter().C(0x71).D(5).D(0).D(0).D(0), PartyMatchPackets.RequestPartyMatchDetail(5));
            Bytes(new PacketWriter().C(0xd0).H(0x01).D(0x10000002), PartyMatchPackets.RequestOustFromPartyRoom(0x10000002));
            Bytes(new PacketWriter().C(0xd0).H(0x02).D(5).D(0), PartyMatchPackets.RequestDismissPartyRoom(5));
            Bytes(new PacketWriter().C(0xd0).H(0x03).D(5).D(0), PartyMatchPackets.RequestWithdrawPartyRoom(5));
            Bytes(new PacketWriter().C(0xd0).H(0x04).S("Outro"), PartyMatchPackets.RequestChangePartyLeader("Outro"));
            Bytes(new PacketWriter().C(0xd0).H(0x14).S("Outro"), PartyMatchPackets.RequestAskJoinPartyRoom("Outro"));
            Bytes(new PacketWriter().C(0xd0).H(0x15).D(1), PartyMatchPackets.AnswerJoinPartyRoom(true));
            Bytes(new PacketWriter().C(0xd0).H(0x16).D(1).D(40).D(52).D(0), PartyMatchPackets.RequestListPartyMatchingWaitingRoom(1, 40, 52, 0));
            Bytes(new PacketWriter().C(0xd0).H(0x17), PartyMatchPackets.RequestExitPartyMatchingWaitingRoom());
            Bytes(new PacketWriter().C(0xd0).H(0x0d).S("Lider"), PartyMatchPackets.RequestExAskJoinMPCC("Lider"));
            Bytes(new PacketWriter().C(0xd0).H(0x0e).D(1).D(0), PartyMatchPackets.RequestExAcceptJoinMPCC(true));
            Bytes(new PacketWriter().C(0xd0).H(0x0f).S("Lider"), PartyMatchPackets.RequestExOustFromMPCC("Lider"));
            Bytes(new PacketWriter().C(0xd0).H(0x26).D(0x10000001), PartyMatchPackets.RequestExMPCCShowPartyMembersInfo(0x10000001));
            Bytes(new PacketWriter().C(0xd0).H(0x27).S("Rival").D(1), PartyMatchPackets.RequestDuelStart("Rival", true));
            Bytes(new PacketWriter().C(0xd0).H(0x28).D(1).D(0).D(1), SocialPackets.DuelAnswerStart(1, true));
            Bytes(new PacketWriter().C(0xd0).H(0x30), PartyMatchPackets.RequestDuelSurrender());
        }
    }
}
