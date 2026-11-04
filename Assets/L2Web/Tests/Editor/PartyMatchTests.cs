// #0045 (busca de grupo, uniao e duelo, spec 07 §10): PartyMatch*.uc, UnionWnd/UnionDetailWnd.uc e DuelManager.uc — nivel
// "aproximado", salas e paginas, criar sala (niveis e convite), membros da sala e autoridade, listas de espera, canal de
// comando e as barras do duelo.
using System.Collections.Generic;
using System.Linq;
using L2Web.Net;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class PartyMatchTests
    {
        [TestCase(5, true, "1 ~ 9")]
        [TestCase(37, false, "30~39")]
        [TestCase(75, true, "70 ~ 80")]
        public void NivelAproximado(int lv, bool space, string s) => Assert.AreEqual(s, PartyMatchCommon.AmbiguousLevel(lv, space));

        [Test]
        public void Salas_PaginasEZona()
        {
            var m = new PartyMatchScript();
            var e = InterfaceEvents.PartyMatchList(new PartyMatchListInfo
            {
                Page = 2, Rooms = { new PartyRoom { RoomId = 7, Leader = "Ana", Location = 1, MinLevel = 20, MaxLevel = 30, Members = 3, MaxMembers = 9, Title = "Caca" } },
            });
            Assert.AreEqual((Ev.EV_PartyMatchStart, Ev.EV_PartyMatchList), (e[0].Id, e[1].Id));
            m.List(e[1].Param);
            Assert.AreEqual((2, 7, "Ana", "Caca", 9), (m.Page, m.Rooms[0].Number, m.Rooms[0].Leader, m.Rooms[0].Title, m.Rooms[0].MaxMembers));
            Assert.AreEqual((1, 3), (m.PrevPage, m.NextPage));
            Assert.AreEqual("#1048", PartyMatchCommon.ZoneName(1, i => "#" + i));
            Assert.AreEqual("#800", PartyMatchCommon.LootName(4, i => "#" + i));
            Assert.IsTrue(m.Start(out var exit) && !exit);
            m.QuitCompletely = true;
            Assert.IsFalse(m.Start(out exit));
            Assert.IsTrue(exit, "depois do X da sala: sai da espera");
        }

        [Test]
        public void CriarSala_NiveisEConvite()
        {
            Assert.AreEqual((1, 9), PartyMatchScript.RoomLevels(4));
            Assert.AreEqual((75, 80), PartyMatchScript.RoomLevels(80));
            Assert.AreEqual((15, 45), PartyMatchScript.RoomLevels(40, 20), "entre o alvo e o jogador");
            var mk = new MakeRoomScript { InviteState = 1, InvitedName = "Bia" };
            Assert.AreEqual(1458, mk.TitleId);
            var r = mk.Ok(10, "0", "99", "Sala");
            Assert.AreEqual((0, 12, 1, 80, "Sala", "Bia"), r, "combo + 2; niveis presos em 1..80; convite depois");
            Assert.AreEqual((0, 1457), (mk.InviteState, mk.TitleId));
        }

        [Test]
        public void Sala_MembrosEAutoridade()
        {
            var r = new PartyRoomScript();
            r.Start(InterfaceEvents.PartyMatchDetail(new PartyRoomDetail { RoomId = 7, MaxMembers = 9, MinLevel = 20, MaxLevel = 30, LootType = 2, Location = 1, Title = "Caca" })[0].Param);
            Assert.AreEqual((7, "Caca", 2), (r.Number, r.Title, r.Loot));
            var mem = new PartyRoomMembersInfo { Mode = 1 };
            mem.Members.Add(new PartyRoomMember { ObjectId = 1, Name = "Ana", Level = 25, MembershipType = 1 });
            mem.Members.Add(new PartyRoomMember { ObjectId = 2, Name = "Bia", Level = 22, MembershipType = 2 });
            r.SetMembers(InterfaceEvents.PartyRoomMembers(mem)[0].Param);
            Assert.AreEqual((true, 2), (r.IsMaster, r.Members));
            var up = new PartyRoomMemberUpdate { Mode = 2, Member = new PartyRoomMember { ObjectId = 2 } };
            r.Update(InterfaceEvents.PartyRoomMemberUpdate(up)[0].Param, 1);
            Assert.AreEqual((1, 1), (r.Members, r.List.Count));
            var chg = new PartyRoomMemberUpdate { Mode = 1, Member = new PartyRoomMember { ObjectId = 1, Name = "Ana", MembershipType = 2 } };
            r.Update(InterfaceEvents.PartyRoomMemberUpdate(chg)[0].Param, 1);
            Assert.AreEqual((false, 1), (r.IsMaster, r.Members), "o jogador pega o tipo novo");
            Assert.IsFalse(r.Exit(), "membro sai (withdraw)");
            Assert.AreEqual(1063, PartyRoomScript.TypeName(2));
        }

        [Test]
        public void ListaDeEspera_PaginasESussurro()
        {
            var w = new WaitListScript();
            Assert.AreEqual("1/2", w.Start(70));
            Assert.AreEqual((false, true), (w.PrevEnabled, w.NextEnabled));
            Assert.AreEqual("\"Ana ", WaitListScript.Whisper("Ana"));
            Assert.IsNull(WaitListScript.Whisper(""));
        }

        [Test]
        public void Canal_GruposContagemEDono()
        {
            var u = new UnionScript { MyName = "Ana" };
            u.Start();
            var info = new CommandChannelInfo { Owner = "Ana", Routing = 1, Members = 14 };
            info.Parties.Add(new CommandChannelParty { Leader = "Ana", LeaderId = 1, Members = 9 });
            info.Parties.Add(new CommandChannelParty { Leader = "Cid", LeaderId = 3, Members = 5 });
            var ev = InterfaceEvents.CommandChannelInfo(info);
            u.Info(ev[0].Param);
            foreach (var e in ev.Skip(1)) u.PartyList(e.Param);
            Assert.AreEqual((true, true, 1384, 2), (u.BanEnabled, u.OutEnabled, u.RoutingName, u.List.Count));
            u.PartyUpdate(InterfaceEvents.CommandChannelPartyUpdate(new CommandChannelPartyUpdate { Leader = "Cid", LeaderId = 3, Members = 5, Mode = 0 })[0].Param);
            Assert.AreEqual("1#440 / 9#1013", u.CountText(i => "#" + i), "saiu um grupo de 5");
            u.PartyUpdate(InterfaceEvents.CommandChannelPartyUpdate(new CommandChannelPartyUpdate { Leader = "Eva", LeaderId = 5, Members = 4, Mode = 1 })[0].Param);
            Assert.AreEqual((2, 13), (u.Parties, u.Members));
        }

        [Test]
        public void Duelo_BarrasECliques()
        {
            var d = new DuelScript();
            var info = InterfaceEvents.DuelUserInfo(new DuelUserInfo { Name = "Bia", ObjectId = 9, ClassId = 1, Hp = 50, MaxHp = 100 })[0].Param;
            Assert.AreEqual(-1, d.Update(info), "fora do duelo nao mostra");
            d.Dueling = true;
            Assert.AreEqual(0, d.Update(info));
            Assert.AreEqual(1, d.Update(InterfaceEvents.DuelUserInfo(new DuelUserInfo { Name = "Cid", ObjectId = 10 })[0].Param));
            Assert.AreEqual(0, d.Update(info), "o mesmo ID volta na mesma linha");
            Assert.AreEqual((2, 50), (d.Count, d.Slots[0].Hp));
            Assert.AreEqual((10, 0, 0), (d.Click(20, 50), d.Click(10, 5), d.Click(20, 200)));
            Assert.AreEqual((1938, 1939), (DuelScript.AskMessage(0), DuelScript.AskMessage(1)));
        }
    }
}
