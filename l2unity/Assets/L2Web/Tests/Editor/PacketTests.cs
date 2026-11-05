// Parse de pacotes reais do servidor (Tests/Data/fixtures/XX.bin, gravados com DUMP=test/fixtures node tools/game-test.ts).
// O que mais importa aqui e a ordem dos campos: cada parser tem de consumir exatamente o que o servidor escreveu.
// Porte de test/packets.test.ts (mais framing, writer/reader e o despacho do GameClient).
using System;
using System.Collections.Generic;
using System.IO;
using System.Text.RegularExpressions;
using L2Web.Net;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class PacketTests
    {
        static string FixturePath(int op) => Path.Combine(Application.dataPath, "L2Web/Tests/Data", "fixtures", op.ToString("x2") + ".bin");

        static PacketReader Fixture(int op)
        {
            var f = FixturePath(op);
            if (!File.Exists(f)) Assert.Ignore($"sem fixture {op:x2}.bin (rode tools/game-test.ts com DUMP=test/fixtures)");
            var r = new PacketReader(File.ReadAllBytes(f));
            Assert.AreEqual(op, r.C());
            return r;
        }

        static readonly Regex Alnum = new Regex("^[A-Za-z0-9]+$");

        [Test]
        public void CharSelectInfoConsumesWholePacket()
        {
            var r = Fixture(0x13);
            var chars = GamePackets.ParseCharSelectInfo(r);
            Assert.GreaterOrEqual(chars.Count, 1);
            StringAssert.IsMatch(Alnum.ToString(), chars[0].Name);
            Assert.That(chars[0].Level, Is.InRange(1, 90));
            Assert.That(chars[0].Race, Is.InRange(0, 4));
            Assert.AreEqual(0, r.Remaining);
        }

        [Test]
        public void CharSelectedHasNameAndPosition()
        {
            var c = GamePackets.ParseCharSelected(Fixture(0x15));
            StringAssert.IsMatch(Alnum.ToString(), c.Name);
            Assert.Less(Math.Abs(c.X), 400000);
            Assert.Less(Math.Abs(c.Y), 400000);
            Assert.Less(Math.Abs(c.Z), 20000);
        }

        [Test]
        public void UserInfoFieldsUpToRunningAndTrailingDwords()
        {
            var r = Fixture(0x04);
            var u = GamePackets.ParseUserInfo(r);
            StringAssert.IsMatch(Alnum.ToString(), u.Name);
            Assert.That(u.RunSpd, Is.GreaterThan(50).And.LessThan(400), $"runSpd {u.RunSpd}");
            Assert.That(u.MoveMul, Is.GreaterThan(0.3).And.LessThan(5), $"moveMul {u.MoveMul}");
            Assert.That(u.CollisionHeight, Is.GreaterThan(10).And.LessThan(60), $"collisionHeight {u.CollisionHeight}");
            Assert.IsTrue(u.MaxHp >= u.Hp && u.MaxCp >= u.Cp);
            Assert.That(u.TitleColor, Is.InRange(0, 0xffffff), $"titleColor {u.TitleColor}");
            Assert.AreEqual(4, r.Remaining); // pledgeClass, pledgeType e titleColor lidos; sobra cursedWeapon
            Assert.IsTrue(u.Stats.ContainsKey("exp") && u.Stats.ContainsKey("STR"));
        }

        [Test]
        public void CharInfoAppearanceSpeedsAndHeading()
        {
            var r = Fixture(0x03);
            var c = GamePackets.ParseCharInfo(r);
            Assert.Greater(c.Name.Length, 0);
            Assert.That(c.RunSpd, Is.GreaterThan(50).And.LessThan(400), $"runSpd {c.RunSpd}");
            Assert.That(c.CollisionHeight, Is.GreaterThan(10).And.LessThan(60));
            Assert.That(c.Heading, Is.InRange(0, 65535));
            Assert.That(c.TitleColor, Is.InRange(0, 0xffffff), $"titleColor {c.TitleColor}");
            Assert.AreEqual(4, r.Remaining); // sobra cursedWeapon
        }

        [Test]
        public void NpcInfoTemplateIdSpeedsAndName()
        {
            var r = Fixture(0x16);
            var n = GamePackets.ParseNpcInfo(r);
            Assert.That(n.NpcId, Is.GreaterThan(0).And.LessThan(100000), $"npcId {n.NpcId}");
            Assert.That(n.CollisionRadius, Is.GreaterThan(0).And.LessThan(500));
            Assert.That(n.MoveMul, Is.GreaterThan(0.1).And.LessThan(10));
            Assert.AreEqual(58, r.Remaining); // karma/pvp/abnormal, clan/ally, flags, colisao de novo, enchant, voando
        }

        [Test]
        public void MoveToLocationConsumesWholePacket()
        {
            var r = Fixture(0x01);
            var m = GamePackets.ParseMoveToLocation(r);
            Assert.AreNotEqual(0, m.ObjectId);
            Assert.AreEqual(0, r.Remaining);
        }

        [Test]
        public void StatusUpdateConsumesWholePacket()
        {
            var r = Fixture(0x0e);
            var s = GamePackets.ParseStatusUpdate(r);
            Assert.Greater(s.Attrs.Count, 0);
            Assert.AreEqual(0, r.Remaining);
        }

        [Test]
        public void CreatureSayWithNpcStringDword()
        {
            var r = Fixture(0x4a);
            var s = GamePackets.ParseCreatureSay(r);
            Assert.Greater(s.Text.Length, 0);
            Assert.AreEqual(0, r.Remaining);
        }

        [Test]
        public void ClientPacketBuilders()
        {
            var pv = GamePackets.ProtocolVersion("hwid515", new HwidInfo { Hdd = "A", Mac = "B", Guid = "C", User = "D" });
            Assert.AreEqual(1 + 4 + 260 + 4 * 4, pv.Length);
            Assert.AreEqual(515, BitConverter.ToInt32(pv, 1));
            Assert.AreEqual(1 + 4 + 0x100 + 4, GamePackets.ProtocolVersion("acis").Length); // cdbd do engine.dll
            Assert.AreEqual(746, BitConverter.ToInt32(GamePackets.ProtocolVersion("acis"), 1));
            var mv = GamePackets.MoveTo(1, 2, 3, 4, 5, 6);
            Assert.AreEqual(0x01, mv[0]);
            Assert.AreEqual(1 + 7 * 4, mv.Length);
            var al = GamePackets.AuthLogin("ab", 1, 2, 3, 4);
            var r = new PacketReader(al, 1);
            Assert.AreEqual("ab", r.S());
            CollectionAssert.AreEqual(new[] { 2, 1, 3, 4 }, new[] { r.D(), r.D(), r.D(), r.D() }); // playKey2 vem antes do playKey1
            Assert.AreEqual(GamePackets.LanguageType, r.D()); // GLanguageType
            Assert.AreEqual(0, r.Remaining);
        }

        [Test]
        public void WriterReaderRoundTrip()
        {
            var b = new PacketWriter(1).C(0xab).H(-2).D(-123456789).Q(-9876543210123L).F(1.5).S("Olá").Zero(3).B(new byte[] { 9, 8 }).Bytes();
            var r = new PacketReader(b);
            Assert.AreEqual(0xab, r.C());
            Assert.AreEqual(-2, r.H());
            Assert.AreEqual(-123456789, r.D());
            Assert.AreEqual(-9876543210123L, r.Q());
            Assert.AreEqual(1.5, r.F());
            Assert.AreEqual("Olá", r.S());
            r.Skip(3);
            CollectionAssert.AreEqual(new byte[] { 9, 8 }, r.B(2));
            Assert.AreEqual(0, r.Remaining);
        }

        [Test]
        public void FrameSplitterHandlesPartialAndMultipleFrames()
        {
            var f1 = Packet.Frame(new byte[] { 1, 2, 3 });
            var f2 = Packet.Frame(new byte[] { 4 });
            Assert.AreEqual(5, f1[0]);
            Assert.AreEqual(0, f1[1]);
            var stream = new List<byte>();
            stream.AddRange(f1);
            stream.AddRange(f2);
            var all = stream.ToArray();
            var sp = new FrameSplitter();
            Assert.AreEqual(0, sp.Push(new[] { all[0] }).Count); // so metade do cabecalho
            var a = sp.Push(all, 1, 5); // resto do f1 + 1 byte do f2
            Assert.AreEqual(1, a.Count);
            CollectionAssert.AreEqual(f1, a[0]);
            var b = sp.Push(all, 6, all.Length - 6);
            Assert.AreEqual(1, b.Count);
            CollectionAssert.AreEqual(f2, b[0]);
            Assert.Throws<FormatException>(() => new FrameSplitter().Push(new byte[] { 1, 0 }));
        }

        [Test]
        public void GameClientDispatchWaitersAndHandlers()
        {
            var gc = new GameClient(new GameClientOptions());
            var got = new List<int>();
            var off = gc.On(0x13, r => got.Add(r.D()));
            gc.On(0x13, (r, op) => got.Add(op));
            var w = gc.WaitForAny(new[] { 0x12, 0x13 });
            gc.Dispatch(new PacketWriter().C(0x13).D(7).Bytes());
            Assert.IsTrue(w.IsCompleted);
            Assert.AreEqual(0x13, w.Result.op);
            Assert.AreEqual(7, w.Result.r.D());
            CollectionAssert.AreEqual(new[] { 7, 0x13 }, got);
            off();
            gc.Dispatch(new PacketWriter().C(0x13).D(8).Bytes());
            CollectionAssert.AreEqual(new[] { 7, 0x13, 0x13 }, got);
            gc.Dispatch(new byte[] { 0x99 });
            Assert.AreEqual(1, gc.Unknown[0x99]);
        }

        [Test]
        public void ResolveGameEndpointFallbacks()
        {
            LoginResult S(string ip, string loginHost) => new LoginResult { Server = new ServerInfo { Ip = ip, Port = 7777 }, LoginHost = loginHost };
            Assert.AreEqual(("10.0.0.5", 7777), GameClient.ResolveEndpoint(S("10.0.0.5", "127.0.0.1")));
            Assert.AreEqual(("127.0.0.1", 7777), GameClient.ResolveEndpoint(S("127.0.0.1", "127.0.0.1")));
            Assert.AreEqual(("l2.example", 7777), GameClient.ResolveEndpoint(S("127.0.0.1", "l2.example")));
            Assert.AreEqual(("192.168.0.9", 7777), GameClient.ResolveEndpoint(S("0.0.0.0", "192.168.0.9")));
            Assert.AreEqual(("x", 9000), GameClient.ResolveEndpoint(S("10.0.0.5", "127.0.0.1"), "x", 9000));
        }

        [Test]
        public void ServerListParse()
        {
            var w = new PacketWriter().C(1).C(1)
                .C(1).C(127).C(0).C(0).C(1).D(7777).C(0).C(1).H(12).H(1000).C(1).D(0).C(0);
            var r = new PacketReader(w.Bytes());
            var l = LoginClient.ParseServerList(r);
            Assert.AreEqual(1, l.Count);
            Assert.AreEqual("127.0.0.1", l[0].Ip);
            Assert.AreEqual(7777, l[0].Port);
            Assert.IsTrue(l[0].Pvp && l[0].Up && !l[0].Brackets);
            Assert.AreEqual(12, l[0].Online);
            Assert.AreEqual(0, r.Remaining);
        }
    }
}
