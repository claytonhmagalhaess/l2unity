// #0051: Character Status (DetailStatusWnd.uc), acoes (DoAction FUN_10170860) e textos do xdat (NCTextBox::SetProperText).
using System.Collections.Generic;
using System.Linq;
using L2Web.Net;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class StatusAcoesClaTests
    {
        // ------------------------------------------------------------ TextBox do xdat
        [TestCase(10, -9999, 0)] // DetailStatusWnd.txtHP: fonte normal, o offsetY nao desce o texto
        [TestCase(10, 6, 0)] // StatusWnd_LevelTextBox (fontType 6 < 8)
        [TestCase(7, 9, 7)] // fonte de digitos
        [TestCase(-9999, 10, 0)]
        public void TextBox_OffsetYSoNaFonteDeDigitos(float offsetY, float fontType, float expected) =>
            Assert.AreEqual(expected, L2Wnd.TextOffsetY(offsetY, fontType));

        [TestCase(1, 0f)] // esquerda: a borda esquerda fica
        [TestCase(2, 0.5f)] // centro (DetailStatusWnd.txtSTR, 70 px)
        [TestCase(3, 1f)] // direita (txtCriminalRate, precos das lojas)
        [TestCase(-9999, 0f)]
        public void TextBox_AutosizePeloAlinhamento(float textAlign, float expected) =>
            Assert.AreEqual(expected, L2Wnd.AutoSizeAnchor(textAlign));

        [Test]
        public void TextBox_SysstringAntesDoTextDoXdat()
        {
            string Sys(int id) => "ss" + id;
            string Msg(int id) => "sm" + id;
            // ClanWnd.title0: text "혈맹명" + sysstring 1321 ("Clan")
            Assert.AreEqual("ss1321", L2Wnd.TextBoxText(1321, -9999, "혈맹명", Sys, Msg));
            Assert.AreEqual("sm5", L2Wnd.TextBoxText(-9999, 5, "x", Sys, Msg));
            Assert.AreEqual("x", L2Wnd.TextBoxText(-9999, -9999, "x", Sys, Msg));
            // DetailStatusWnd.txtHeadPledge: text "undefined" + ss430
            Assert.AreEqual("ss430", L2Wnd.TextBoxText(430, -9999, "undefined", Sys, Msg));
            Assert.AreEqual("", L2Wnd.TextBoxText(-9999, -9999, "undefined", Sys, Msg));
            Assert.AreEqual("", L2Wnd.TextBoxText(-9999, -9999, null, Sys, Msg));
        }

        // ------------------------------------------------------------ DetailStatusWnd
        [Test]
        public void Status_HennaKarmaVelocidadeBarras()
        {
            Assert.AreEqual("40(+2)", DetailStatusScript.WithHenna(40, 2));
            Assert.AreEqual("40(-1)", DetailStatusScript.WithHenna(40, -1));
            Assert.AreEqual("40", DetailStatusScript.WithHenna(40, 0));
            Assert.AreEqual("999999+", DetailStatusScript.CriminalRate(999999));
            Assert.AreEqual("12", DetailStatusScript.CriminalRate(12));
            Assert.AreEqual(138, DetailStatusScript.MovingSpeed(126, 88, 1.1, true)); // 138.6 truncado
            Assert.AreEqual(96, DetailStatusScript.MovingSpeed(126, 88, 1.1, false));
            Assert.AreEqual(42, DetailStatusScript.Bar(50, 100)); // 85 * 50 / 100 = 42 (inteiro)
            Assert.AreEqual(85, DetailStatusScript.Bar(120, 100));
            Assert.AreEqual(0, DetailStatusScript.Bar(5, 0));
            Assert.AreEqual(1385, DetailStatusScript.RankSysString(0));
            Assert.AreEqual(1386, DetailStatusScript.RankSysString(1));
            Assert.AreEqual(1388, DetailStatusScript.RankSysString(2));
            Assert.AreEqual(1394, DetailStatusScript.RankSysString(8));
            Assert.AreEqual(-1, DetailStatusScript.RankSysString(9));
            Assert.AreEqual("L2UI_CH3.PlayerStatusWnd.myinfo_heroicon", DetailStatusScript.HeroTexture(true, true));
            Assert.AreEqual("L2UI_CH3.PlayerStatusWnd.myinfo_nobleicon", DetailStatusScript.HeroTexture(false, true));
            Assert.AreEqual("", DetailStatusScript.HeroTexture(false, false));
        }

        [Test]
        public void Status_HennaDoEvento()
        {
            var p = "";
            foreach (var (k, v) in new[] { ("INT", 2), ("STR", -1), ("CON", 0), ("MEN", 3), ("DEX", 0), ("WIT", 1) }) p = L2Param.Add(p, k + "change", v);
            var h = DetailStatusScript.Henna.Parse(p);
            Assert.AreEqual((-1, 0, 0, 2, 1, 3), (h.STR, h.DEX, h.CON, h.INT, h.WIT, h.MEN));
        }

        static UserInfo User() => new UserInfo
        {
            Name = "Eu", Level = 20, ClassId = 0, Hp = 300, MaxHp = 412, Mp = 50, MaxMp = 100, Cp = 0, MaxCp = 200,
            RunSpd = 115, WalkSpd = 80, MoveMul = 1.0, Running = true,
            Stats = new Dictionary<string, long>
            {
                ["sp"] = 1234, ["STR"] = 40, ["DEX"] = 30, ["CON"] = 43, ["INT"] = 21, ["WIT"] = 11, ["MEN"] = 25,
                ["pAtk"] = 101, ["pDef"] = 102, ["mAtk"] = 103, ["mDef"] = 104, ["accuracy"] = 33, ["evasion"] = 34, ["crit"] = 44,
                ["pAtkSpd"] = 330, ["mAtkSpd"] = 213, ["load"] = 1234, ["maxLoad"] = 10000, ["karma"] = 0, ["pk"] = 2, ["pvp"] = 7,
                ["recomHave"] = 5, ["recomLeft"] = 3, ["pledgeClass"] = 3,
            },
        };

        [Test]
        public void Status_TextosDoHandleUpdateUserInfo()
        {
            var t = DetailStatusScript.Texts(User(), 12.3456, new DetailStatusScript.Henna { STR = 1 }, id => "ss" + id)
                .ToDictionary(x => x.ctrl, x => x.text);
            Assert.AreEqual("300/412", t["txtHP"]);
            Assert.AreEqual("50/100", t["txtMP"]);
            Assert.AreEqual("0/200", t["txtCP"]);
            Assert.AreEqual("12.35%", t["txtExp"]);
            Assert.AreEqual("12.34%", t["txtWeight"]);
            Assert.AreEqual("1234", t["txtSP"]);
            Assert.AreEqual("40(+1)", t["txtSTR"]);
            Assert.AreEqual("115", t["txtMovingSpeed"]);
            Assert.AreEqual("7 / 2", t["txtPVP"]); // PvP / PK
            Assert.AreEqual("5", t["txtSociality"]);
            Assert.AreEqual("3", t["txtRemainSulffrage"]);
            Assert.AreEqual("ss1389", t["txtRank"]); // Knight
            var u = User();
            u.Stats.Remove("pledgeClass");
            Assert.AreEqual("", DetailStatusScript.Texts(u, 0, null, id => "ss" + id).First(x => x.ctrl == "txtRank").text);
        }

        [Test]
        public void Status_BarrasDe85px()
        {
            var b = DetailStatusScript.Bars(User(), 12.9).ToDictionary(x => x.tex, x => x.width);
            Assert.AreEqual(85 * 300 / 412, b["texHP"]);
            Assert.AreEqual(42, b["texMP"]);
            Assert.AreEqual(0, b["texCP"]);
            Assert.AreEqual(85 * 12 / 100, b["texExp"]); // int(fExpRate)
            Assert.AreEqual(85 * 1234 / 10000, b["texWeight"]);
        }

        // ------------------------------------------------------------ DoAction (FUN_10170860)
        static CommandCtx Ctx(bool target, bool player) => new CommandCtx
        {
            TargetId = target ? 1234 : 0,
            TargetName = target ? "Alvo" : null,
            TargetIsPlayer = player,
            SelfX = 10, SelfY = 20, SelfZ = 30,
            PartyLooting = 2,
            // actionname-e.dat: o 2o int das sociais
            ActionType = id => id switch { 12 => 2, 13 => 3, 14 => 4, 24 => 6, 25 => 5, 26 => 7, 29 => 8, 30 => 9, 31 => 10, 33 => 11, 34 => 12, 35 => 13, _ => -1 },
        };

        static List<CommandStep> Plan(int id, bool target = true, bool player = true, bool ctrl = false, bool shift = false) =>
            L2Commands.PlanAction(id, Ctx(target, player), ctrl, shift);

        [TestCase(12, 2)]
        [TestCase(13, 3)]
        [TestCase(14, 4)]
        [TestCase(24, 6)]
        [TestCase(25, 5)]
        [TestCase(26, 7)]
        [TestCase(29, 8)]
        [TestCase(30, 9)]
        [TestCase(31, 10)]
        [TestCase(33, 11)]
        [TestCase(34, 12)]
        [TestCase(35, 13)]
        public void Acao_SocialViraRequestSocialAction(int action, int social)
        {
            var s = Plan(action, target: false).Single();
            CollectionAssert.AreEqual(new PacketWriter().C(0x1b).D(social).Bytes(), s.Packet);
        }

        [Test]
        public void Acao_Grupo()
        {
            CollectionAssert.AreEqual(SocialPackets.RequestJoinParty("Alvo", 2), Plan(7).Single().Packet);
            Assert.AreEqual("msg:185", Plan(7, player: false).Single().Token);
            Assert.AreEqual("msg:185", Plan(7, target: false).Single().Token);
            CollectionAssert.AreEqual(SocialPackets.WithdrawParty(), Plan(8).Single().Packet);
            CollectionAssert.AreEqual(SocialPackets.OustPartyMember("Alvo"), Plan(9).Single().Packet);
            Assert.AreEqual("msg:187", Plan(9, target: false).Single().Token);
            Assert.AreEqual(new[] { "pkt:0x6f(1,-1,1)", "ev:1630" }, Plan(11).Select(s => s.Token).ToArray());
            CollectionAssert.AreEqual(new PacketWriter().C(0xd0).H(0x04).S("Alvo").Bytes(), Plan(50).Single().Packet);
            Assert.AreEqual("msg:1400", Plan(50, target: false).Single().Token);
            CollectionAssert.AreEqual(new PacketWriter().C(0xd0).H(0x0d).S("Alvo").Bytes(), Plan(56).Single().Packet);
            Assert.AreEqual("msg:50", Plan(56, player: false).Single().Token);
        }

        [Test]
        public void Acao_BasicasDoCliente()
        {
            CollectionAssert.AreEqual(GamePackets.Action(1234, 10, 20, 30, false), Plan(2).Single().Packet);
            CollectionAssert.AreEqual(GamePackets.Action(1234, 10, 20, 30, true), Plan(2, shift: true).Single().Packet);
            CollectionAssert.AreEqual(GamePackets.AttackRequest(1234, 10, 20, 30, false), Plan(2, ctrl: true).Single().Packet);
            Assert.IsEmpty(Plan(2, target: false));
            CollectionAssert.AreEqual(SocialPackets.TradeRequest(1234), Plan(3).Single().Packet);
            Assert.AreEqual("local:targetnext", Plan(4).Single().Token);
            Assert.AreEqual("local:pickup", Plan(5).Single().Token);
            Assert.AreEqual("local:assist", Plan(6).Single().Token);
            CollectionAssert.AreEqual(new byte[] { 0x73 }, Plan(10).Single().Packet);
            CollectionAssert.AreEqual(new byte[] { 0x90 }, Plan(28).Single().Packet);
            Assert.AreEqual("msg:242", Plan(40, target: false).Single().Token);
            Assert.AreEqual("msg:144", Plan(40, player: false).Single().Token);
            CollectionAssert.AreEqual(new PacketWriter().C(0xb9).D(1234).Bytes(), Plan(40).Single().Packet);
            Assert.AreEqual("local:replay", Plan(55).Single().Token);
            Assert.AreEqual("dlg:1722", Plan(57).Single().Token);
            CollectionAssert.AreEqual(new PacketWriter().C(0xd0).H(0x27).S("Alvo").D(0).Bytes(), Plan(58).Single().Packet);
            CollectionAssert.AreEqual(new PacketWriter().C(0xd0).H(0x27).S("Alvo").D(1).Bytes(), Plan(60).Single().Packet);
            Assert.IsEmpty(Plan(58, player: false));
            CollectionAssert.AreEqual(new PacketWriter().C(0xd0).H(0x30).Bytes(), Plan(59).Single().Packet);
        }

        [TestCase(0)] // Sit/Stand
        [TestCase(1)] // Walk/Run
        [TestCase(37)] // Dwarven Manufacture
        [TestCase(38)] // Mount/Dismount
        [TestCase(51)] // General Manufacture
        [TestCase(15)] // pet: seguir
        [TestCase(1000)] // golem de cerco
        public void Acao_DefaultERequestActionUse(int id)
        {
            CollectionAssert.AreEqual(GamePackets.ActionUse(id), Plan(id).Single().Packet);
            CollectionAssert.AreEqual(GamePackets.ActionUse(id, true, true), Plan(id, ctrl: true, shift: true).Single().Packet);
        }

        [Test]
        public void Acao_TodasAsDaActionWndTemPasso()
        {
            // as acoes das categorias 1-3 do actionname-e.dat (o arquivo do cliente; sem ele o teste so cobre a lista fixa)
            var ids = L2TooltipData.AllActions().Where(a => a.Category is >= 1 and <= 3).Select(a => a.Id).ToList();
            if (ids.Count == 0) ids = new List<int> { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 24, 25, 26, 28, 29, 30, 31, 33, 34, 35, 37, 38, 40, 50, 51, 55, 56, 57, 58, 59, 60 };
            Assert.AreEqual(36, ids.Count);
            foreach (var id in ids) Assert.IsNotEmpty(Plan(id), $"acao {id}");
        }

        [Test]
        public void Acao_TipoSocialDoArquivo()
        {
            var a = L2TooltipData.Action(34);
            if (a == null) Assert.Ignore("sem o actionname-e.dat");
            Assert.AreEqual(12, a.Type); // Dance
            Assert.AreEqual(2, L2TooltipData.Action(12).Type); // Greeting
            Assert.AreEqual(13, L2TooltipData.Action(35).Type); // Sorrow
        }
    }
}
