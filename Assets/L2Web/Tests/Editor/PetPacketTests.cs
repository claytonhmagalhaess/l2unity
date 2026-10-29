// Pacotes do pet/servo (0xb0-0xb6, 0xd1, 0xee) montados como o aCis os escreve (serverpackets/*.java do servidor do
// usuario, C:\Workspace-java\aCis_gameserver): cada Parse* tem de consumir o pacote inteiro e devolver os valores na ordem
// certa. Os tipos lidos sao conferidos contra o Engine.dll em ReceivedLayoutTests.
using L2Web.Net;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class PetPacketTests
    {
        static PacketReader Reader(PacketWriter w) => new PacketReader(w.Bytes());

        [Test]
        public void PetStatusShow_TipoDoInvocado()
        {
            var r = Reader(new PacketWriter().D(2));
            Assert.AreEqual(2, PetPackets.ParsePetStatusShow(r).SummonType);
            Assert.AreEqual(0, r.Remaining);
        }

        /// <summary>PetInfo.writeImpl do aCis (sem o opcode).</summary>
        static PacketWriter AcisPetInfo(string name)
        {
            var w = new PacketWriter().D(1).D(0x10001234).D(12077 + 1000000).D(0);
            w.D(-71000).D(258000).D(-3100).D(16384).D(0).D(333).D(278);
            for (var i = 0; i < 4; i++) w.D(140).D(80); // corrida/caminhada, repetidas
            w.F(1.1).F(1).F(8.5).F(12.25);
            w.D(0).D(0).D(0);
            w.C(1).C(1).C(1).C(0).C(2);
            w.S(name).S("Dono");
            w.D(1).D(0).D(0);
            w.D(900).D(1000); // comida atual/maxima
            w.D(321).D(400).D(150).D(200).D(55).D(23);
            w.Q(123456789L).Q(100000000L).Q(150000000L);
            w.D(370).D(54510);
            w.D(101).D(102).D(103).D(104).D(105).D(106).D(107).D(108).D(278).D(333);
            w.D(0x0040);
            w.H(1).C(2).H(0).C(1); // "hchc" do aCis: montavel, voo, 0, equipe azul
            w.D(2).D(1);
            return w;
        }

        [Test]
        public void PetInfo_ConsomeOPacoteDoAcis()
        {
            var r = Reader(AcisPetInfo("Bixo"));
            var p = PetPackets.ParsePetInfo(r);
            Assert.AreEqual(0, r.Remaining);
            Assert.AreEqual(1, p.SummonType);
            Assert.AreEqual(0x10001234, p.ObjectId);
            Assert.AreEqual(12077, p.NpcId);
            Assert.IsFalse(p.Attackable);
            Assert.AreEqual((-71000, 258000, -3100, 16384), (p.X, p.Y, p.Z, p.Heading));
            Assert.AreEqual((333, 278, 140, 80), (p.MAtkSpd, p.PAtkSpd, p.RunSpd, p.WalkSpd));
            Assert.AreEqual(1.1, p.MoveMul, 1e-9);
            Assert.AreEqual(8.5, p.CollisionRadius, 1e-9);
            Assert.AreEqual(12.25, p.CollisionHeight, 1e-9);
            Assert.IsTrue(p.HasOwner && p.InCombat && !p.AlikeDead);
            Assert.AreEqual(2, p.SummonAnimation);
            Assert.AreEqual("Bixo", p.Name);
            Assert.AreEqual("Dono", p.Title);
            Assert.AreEqual((900, 1000), (p.Fatigue, p.MaxFatigue));
            Assert.AreEqual((321, 400, 150, 200), (p.Hp, p.MaxHp, p.Mp, p.MaxMp));
            Assert.AreEqual((55, 23), (p.Sp, p.Level));
            Assert.AreEqual((123456789L, 100000000L, 150000000L), (p.CurExp, p.MinExp, p.MaxExp));
            Assert.AreEqual((370, 54510), (p.CarringWeight, p.CarryWeight));
            Assert.AreEqual((101, 102, 103, 104), (p.PAtk, p.PDef, p.MAtk, p.MDef));
            Assert.AreEqual((105, 106, 107, 108), (p.Accuracy, p.Evasion, p.Critical, p.MoveSpeed));
            Assert.AreEqual((278, 333), (p.PAtkSpeed, p.MAtkSpeed));
            Assert.AreEqual(0x40, p.AbnormalEffect);
            Assert.IsTrue(p.Mountable);
            Assert.AreEqual(2, p.MoveEnv);
            Assert.AreEqual(1, p.Team);
            Assert.AreEqual((2, 1), (p.SoulShotsPerHit, p.SpiritShotsPerHit));
        }

        [Test]
        public void PetInfo_SemNome()
        {
            var r = Reader(AcisPetInfo(""));
            Assert.AreEqual("", PetPackets.ParsePetInfo(r).Name);
            Assert.AreEqual(0, r.Remaining);
        }

        /// <summary>Item do PetItemList/PetInventoryUpdate do aCis (sem a mudanca).</summary>
        static void AcisPetItem(PacketWriter w, int obj, int id, int count, bool equipped, int bodyPart, int enchant) =>
            w.H(0).D(obj).D(id).D(count).H(0).H(0).H(equipped ? 1 : 0).D(bodyPart).H(enchant).H(0);

        [Test]
        public void PetItemList_Itens()
        {
            var w = new PacketWriter().H(2);
            AcisPetItem(w, 501, 2375, 1, true, 0x0400, 3); // arma do lobo
            AcisPetItem(w, 502, 2515, 120, false, 0, 0); // comida
            var r = Reader(w);
            var l = PetPackets.ParsePetItemList(r);
            Assert.AreEqual(0, r.Remaining);
            Assert.AreEqual(2, l.Items.Count);
            var a = l.Items[0];
            Assert.AreEqual((501, 2375, 1, 0x0400, 3), (a.ObjectId, a.ItemId, a.Count, a.BodyPart, a.Enchant));
            Assert.IsTrue(a.Equipped);
            Assert.IsNull(a.Change);
            Assert.AreEqual((502, 2515, 120), (l.Items[1].ObjectId, l.Items[1].ItemId, l.Items[1].Count));
            Assert.IsFalse(l.Items[1].Equipped);
        }

        [Test]
        public void PetInventoryUpdate_MudancaDeCadaItem()
        {
            var w = new PacketWriter().H(2);
            w.H(2);
            AcisPetItem(w, 502, 2515, 119, false, 0, 0);
            w.H(3);
            AcisPetItem(w, 501, 2375, 1, false, 0x0400, 0);
            var r = Reader(w);
            var u = PetPackets.ParsePetInventoryUpdate(r);
            Assert.AreEqual(0, r.Remaining);
            Assert.AreEqual(2, u.Items.Count);
            Assert.AreEqual((2, 502, 119), (u.Items[0].Change.Value, u.Items[0].ObjectId, u.Items[0].Count));
            Assert.AreEqual((3, 501), (u.Items[1].Change.Value, u.Items[1].ObjectId));
        }

        [Test]
        public void PetStatusUpdate_Campos()
        {
            var w = new PacketWriter().D(2).D(0x10005678).D(10).D(-20).D(30).S("Servo");
            w.D(1200000).D(1800000).D(500).D(600).D(70).D(80).D(40);
            w.Q(5000000000L).Q(4000000000L).Q(6000000000L);
            var r = Reader(w);
            var s = PetPackets.ParsePetStatusUpdate(r);
            Assert.AreEqual(0, r.Remaining);
            Assert.AreEqual((2, 0x10005678, 10, -20, 30), (s.SummonType, s.ObjectId, s.X, s.Y, s.Z));
            Assert.AreEqual("Servo", s.Title);
            Assert.AreEqual((1200000, 1800000), (s.Fatigue, s.MaxFatigue));
            Assert.AreEqual((500, 600, 70, 80, 40), (s.Hp, s.MaxHp, s.Mp, s.MaxMp, s.Level));
            Assert.AreEqual((5000000000L, 4000000000L, 6000000000L), (s.CurExp, s.MinExp, s.MaxExp));
        }

        [Test]
        public void PetDelete_TipoEObjeto()
        {
            var r = Reader(new PacketWriter().D(1).D(777));
            var d = PetPackets.ParsePetDelete(r);
            Assert.AreEqual((1, 777), (d.SummonType, d.ObjectId));
            Assert.AreEqual(0, r.Remaining);
        }

        [Test]
        public void SetSummonRemainTime_MaximoAntesDoRestante()
        {
            // SetSummonRemainTime(maxTime, remainingTime): writeD(_maxTime), writeD(_remainingTime)
            var r = Reader(new PacketWriter().D(1200).D(845));
            var t = PetPackets.ParseSetSummonRemainTime(r);
            Assert.AreEqual((1200, 845), (t.MaxTime, t.RemainTime));
            Assert.AreEqual(0, r.Remaining);
        }

        [Test]
        public void PartySpelled_Efeitos()
        {
            var w = new PacketWriter().D(2).D(0x10005678).D(2);
            w.D(1040).H(3).D(1180); // o aCis manda duracao / 1000
            w.D(1204).H(2).D(-1);
            var r = Reader(w);
            var p = PetPackets.ParsePartySpelled(r);
            Assert.AreEqual(0, r.Remaining);
            Assert.AreEqual((2, 0x10005678), (p.Type, p.ObjectId));
            Assert.AreEqual(2, p.Effects.Count);
            Assert.AreEqual((1040, 3, 1180), (p.Effects[0].SkillId, p.Effects[0].Level, p.Effects[0].Seconds));
            Assert.AreEqual((1204, 2, -1), (p.Effects[1].SkillId, p.Effects[1].Level, p.Effects[1].Seconds));
        }

        [Test]
        public void PartySpelled_SemEfeitos()
        {
            var r = Reader(new PacketWriter().D(1).D(9).D(0));
            Assert.IsEmpty(PetPackets.ParsePartySpelled(r).Effects);
            Assert.AreEqual(0, r.Remaining);
        }
    }
}
