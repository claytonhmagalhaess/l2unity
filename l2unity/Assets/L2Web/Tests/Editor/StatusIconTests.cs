// #0052: janela de buffs. NCStatusIconCtrl do NWindow (OnCreate nw:0x1004d1b0, OnTimer nw:0x1004e040, OnPaint
// nw:0x1004db50): contagem regressiva do RemainTime, numero sobre o icone (fonte de digitos), piscar nos ultimos 30 s;
// AbnormalStatusWnd.uc (ordem Normal -> [Short, Etc]) e PartyWnd.uc HandlePartySpelledList (grades de buff e debuff).
using System.Collections.Generic;
using System.Linq;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class StatusIconTests
    {
        // ---------------------------------------------------------------- contagem (timer 0x1f9, 1000 ms)
        [TestCase(45, 0, 45)]
        [TestCase(45, 999, 45)]
        [TestCase(45, 1000, 44)]
        [TestCase(45, 44999, 1)]
        [TestCase(5, 10000, 0)]
        [TestCase(0, 5000, 0)]
        [TestCase(-1, 99999, -1)]
        [TestCase(120, 61000, 59)]
        public void Remain_ContaUmPorSegundo_EParaEmZero(int remain, double ms, int want) =>
            Assert.AreEqual(want, StatusIcon.Remain(remain, ms));

        [Test]
        public void Reserved_DebuffEMenosUm()
        {
            Assert.AreEqual(30, StatusIcon.Reserved(30, false));
            Assert.AreEqual(-1, StatusIcon.Reserved(30, true));
            Assert.AreEqual(-1, StatusIcon.Reserved(-1, false));
        }

        // ---------------------------------------------------------------- numero (OnPaint)
        [TestCase(59, "59", 2, 10)]
        [TestCase(10, "10", 2, 10)]
        [TestCase(9, "9", 7, 10)]
        [TestCase(0, "0", 7, 10)]
        public void Digito_Normal_XLargeNumber(int remain, string text, int x, int y)
        {
            var d = StatusIcon.DigitFor(remain, false, false).Value;
            Assert.AreEqual((text, 2, x, y, (byte)0xcc), (d.Text, d.Type, d.X, d.Y, d.Alpha));
        }

        [Test]
        public void Digito_Short_NumberCentrado()
        {
            // x = 12 - GetTextExtent/2 (L2Digits.NormalExtent: digito 6,5 px), y + 8, alfa 0xff, tipo 1 (8x8)
            var a = StatusIcon.DigitFor(9, false, true).Value;
            Assert.AreEqual(("9", 1, 12 - L2Digits.NormalExtent("9") / 2, 8, (byte)0xff), (a.Text, a.Type, a.X, a.Y, a.Alpha));
            var b = StatusIcon.DigitFor(45, false, true).Value;
            Assert.AreEqual(12 - L2Digits.NormalExtent("45") / 2, b.X);
        }

        [Test]
        public void Digito_SoAbaixoDe60_SemDebuff_SemNoClip()
        {
            Assert.IsNull(StatusIcon.DigitFor(60, false, false), "60 s ainda nao mostra");
            Assert.IsNull(StatusIcon.DigitFor(1200, false, false));
            Assert.IsNull(StatusIcon.DigitFor(-1, false, false), "toggle/Etc: sem tempo");
            Assert.IsNull(StatusIcon.DigitFor(30, true, false), "debuff: moldura no lugar do numero");
            Assert.IsNull(StatusIcon.DigitFor(30, false, false, noClip: true), "grupo/pet (noClip)");
        }

        // ---------------------------------------------------------------- piscar (timer 0x1e9, 100 ms)
        [TestCase(30, true)]
        [TestCase(0, true)]
        [TestCase(31, false)]
        [TestCase(-1, false)]
        public void Pisca_NosUltimos30s(int remain, bool want) => Assert.AreEqual(want, StatusIcon.Blinks(remain));

        [Test]
        public void Pisca_NaoComNoClip() => Assert.IsFalse(StatusIcon.Blinks(10, noClip: true));

        [TestCase(false)]
        [TestCase(true)]
        public void Pisca_VaiEVoltaDe25Em25(bool shortItem)
        {
            var b = new StatusIcon.Blink();
            Assert.AreEqual(255, b.Alpha, "item novo: 0xff, descendo");
            var seq = new List<int>();
            for (var i = 0; i < 24; i++)
            {
                b.Step(shortItem);
                seq.Add(b.Alpha);
            }
            CollectionAssert.AreEqual(new[]
            {
                230, 205, 180, 155, 130, 105, 80, 55, 30, 5, 0,
                25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 255,
                230, 205,
            }, seq);
        }

        // ---------------------------------------------------------------- ordem e linhas (AbnormalStatusWnd.uc)
        [Test]
        public void Layout_NormalEm12_DepoisShortEEtcNaMesmaLinha()
        {
            var l = StatusIcon.AbnormalLayout(13, 2, 1);
            Assert.AreEqual(16, l.Count);
            Assert.AreEqual((0, 0, 0, 0), l[0]);
            Assert.AreEqual((0, 11, 11, 0), l[11]);
            Assert.AreEqual((0, 12, 0, 1), l[12], "13o buff quebra a linha");
            Assert.AreEqual((1, 0, 0, 2), l[13], "Short no inicio da linha seguinte");
            Assert.AreEqual((1, 1, 1, 2), l[14]);
            Assert.AreEqual((2, 0, 2, 2), l[15], "Etc depois das Short");
        }

        [Test]
        public void Layout_SemNormal_ShortNaLinha0_EtcSemQuebra()
        {
            Assert.AreEqual((1, 0, 0, 0), StatusIcon.AbnormalLayout(0, 1, 0)[0]);
            var etc = StatusIcon.AbnormalLayout(12, 0, 14);
            Assert.AreEqual((2, 13, 13, 1), etc.Last(), "Etc: uma linha so, sem limite de 12");
            Assert.AreEqual(0, StatusIcon.AbnormalLayout(0, 0, 0).Count);
        }

        // ---------------------------------------------------------------- grupo (PartyWnd.uc HandlePartySpelledList)
        [Test]
        public void Grupo_BuffEDebuffEmGradesSeparadas()
        {
            var list = new List<(int, int)> { (1040, 3), (102, 1), (0, 0), (1204, 2), (1160, 1) };
            var g = StatusIcon.PartyGrids(list, (id, lv) => id == 102 || id == 1160);
            CollectionAssert.AreEqual(new[]
            {
                (0, 1040, 3, 0, 0), (1, 102, 1, 0, 0), (0, 1204, 2, 1, 0), (1, 1160, 1, 1, 0),
            }, g);
            var many = StatusIcon.PartyGrids(Enumerable.Range(1, 13).Select(i => (i, 1)).ToList(), (_, _) => false);
            Assert.AreEqual((0, 13, 1, 0, 1), many.Last(), "12 por linha");
        }

        static string Member(int id) => L2Param.Add(L2Param.Add("", "ID", id), "Name", "m" + id);

        static string Spelled(int id, params (int skill, int level)[] l)
        {
            var p = L2Param.Add(L2Param.Add("", "ID", id), "Max", l.Length);
            for (var i = 0; i < l.Length; i++)
            {
                p = L2Param.Add(p, "SkillID_" + i, l[i].skill);
                p = L2Param.Add(p, "Level_" + i, l[i].level);
            }
            return p;
        }

        [Test]
        public void Grupo_SpelledList_PorId_ECopiaAoRemover()
        {
            var s = new PartyScript(false);
            s.OnEvent(Ev.EV_PartyAddParty, Member(11));
            s.OnEvent(Ev.EV_PartyAddParty, Member(12));
            s.OnEvent(Ev.EV_PartySpelledList, Spelled(12, (1040, 3), (0, 1), (1204, 2)));
            CollectionAssert.AreEqual(new[] { (1040, 3), (1204, 2) }, s.Slots[1].Spelled, "id 0 nao entra");
            s.OnEvent(Ev.EV_PartySpelledList, Spelled(99, (1086, 2)));
            s.OnEvent(Ev.EV_PartySpelledList, Spelled(0, (1086, 2)));
            Assert.AreEqual(0, s.Slots[0].Spelled.Count, "id fora do grupo ou < 1: ignorado");
            s.OnEvent(Ev.EV_PartySpelledList, Spelled(12, (1086, 2)));
            CollectionAssert.AreEqual(new[] { (1086, 2) }, s.Slots[1].Spelled, "cada pacote limpa as grades do membro");
            s.OnEvent(Ev.EV_PartyDeleteParty, L2Param.Add("", "ID", 11));
            CollectionAssert.AreEqual(new[] { (1086, 2) }, s.Slots[0].Spelled, "CopyStatus leva as grades");
            Assert.AreEqual(16, s.BuffSize);
            Assert.AreEqual(10, new PartyScript(true).BuffSize);
        }
    }
}
