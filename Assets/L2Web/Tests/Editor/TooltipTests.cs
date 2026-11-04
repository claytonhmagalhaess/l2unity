// K14 da matriz (Docs/validacao.md): tooltips do Interlude (#0027). Construtores do ToolTip.uc (Inventory e as 5 variantes
// de preco, Skill, AbnormalStatus, Shortcut, Action, Text/Description), os nativos de texto (MakeCostString,
// GetNumericColor nw:0x10063020, MakeTimeStr nw:0x100628f0, IsGradeString nw:0x10146430), o layout
// (CalculateDrawItemListRect nw:0x10065570 / DrawItemList nw:0x10068be0) e a posicao (NCTooltip::DrawTooltip nw:0x10054680).
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using L2Web.UI;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class TooltipTests
    {
        Func<int, string> oldSs, oldNum;

        [SetUp]
        public void Fake()
        {
            oldSs = L2Tooltip.SysString;
            oldNum = L2NumText.SysString;
            L2Tooltip.SysString = id => "#" + id;
            L2NumText.SysString = i => i == 1281 ? "Thousand, Million, Billion" : i == 469 ? "Adena" : "";
        }

        [TearDown]
        public void Restore()
        {
            L2Tooltip.SysString = oldSs;
            L2NumText.SysString = oldNum;
        }

        /// <summary>Texto de cada item: o t_strText, ou "#id" quando e sysstring; espacos em branco como "[B12]".</summary>
        static string[] Seq(CustomTooltip t) =>
            t.DrawList.Select(d => d.Type == DrawItemType.Blank ? "[B" + d.BlankHeight + "]" : d.Id > 0 ? "#" + d.Id : d.Text).ToArray();

        static string Rgb(Color32 c) => $"{c.r},{c.g},{c.b}";

        // ---------------------------------------------------------------- nativos de texto
        [TestCase("0", "0")]
        [TestCase("999", "999")]
        [TestCase("1000", "1,000")]
        [TestCase("1234567", "1,234,567")]
        [TestCase("-12345", "-12,345")]
        public void MakeCostString(string s, string e) => Assert.AreEqual(e, L2Tooltip.MakeCostString(s));

        [TestCase("9,999", "220,220,220")]
        [TestCase("10,000", "0,255,255")]
        [TestCase("100,000", "255,128,255")]
        [TestCase("1,000,000", "255,255,0")]
        [TestCase("10,000,000", "0,255,0")]
        [TestCase("100,000,000", "0,255,255")]
        public void GetNumericColor(string s, string rgb) => Assert.AreEqual(rgb, Rgb(L2Tooltip.GetNumericColor(s)));

        [TestCase(45, "45초")]
        [TestCase(60, "1#1111")]
        [TestCase(1199, "19#1111")]
        [TestCase(3600, "1#1110")]
        [TestCase(7259, "2#1110")]
        [TestCase(86400 + 30, "30초")]
        public void MakeBuffTimeStr(int sec, string e) => Assert.AreEqual(e, L2Tooltip.MakeBuffTimeStr(sec));

        [Test]
        public void Grau()
        {
            Assert.AreEqual(new[] { "", "graded", "gradec", "gradeb", "gradea", "grades", "" }, Enumerable.Range(0, 7).Select(L2Tooltip.GradeString).ToArray());
            Assert.IsTrue(L2Tooltip.IsGradeToken("`gradec`"));
            Assert.IsFalse(L2Tooltip.IsGradeToken("`grade`"));
            Assert.IsFalse(L2Tooltip.IsGradeToken("gradecxx"));
        }

        // ---------------------------------------------------------------- construtores
        static TooltipItem Sword() => new()
        {
            ClassId = 2369, Name = "Squire's Sword", ItemType = 0, SlotBitType = 0x80, WeaponType = 1, CrystalType = 1, Enchanted = 3, PhysicalDamage = 100,
            MagicalDamage = 50, AttackSpeed = 379, SoulshotCount = 1, SpiritshotCount = 1, Weight = 1600, Description = "Uma espada.",
        };

        [Test]
        public void Item_ArmaNaOrdemDoToolTipUc()
        {
            var t = L2Tooltip.Item(Sword());
            CollectionAssert.AreEqual(new[]
            {
                "+3 ", "Squire's Sword", " ", "`graded`",
                "#43 / #242", "[B12]", "#1489",
                "#94", " : ", "106", "#98", " : ", "56", "#111", " : ", "#307", "#404", " : ", "X 1", "#496", " : ", "X 1", "#52", " : ", "1600",
                "Uma espada.",
            }, Seq(t));
            Assert.AreEqual(L2Tooltip.MinimumWidth, t.MinimumWidth);
            Assert.AreEqual("176,155,121", Rgb(t.DrawList[0].Color), "encantamento dourado");
            Assert.AreEqual(0, t.DrawList[1].Color.a, "nome sem cor: a padrao");
            Assert.AreEqual("255,255,255", Rgb(t.DrawList[6].Color), "titulo do bloco branco");
            Assert.AreEqual("163,163,163", Rgb(t.DrawList[7].Color));
            Assert.IsTrue(t.DrawList[7].LineBreak && t.DrawList[7].OffY == 6);
            Assert.IsFalse(t.DrawList[8].LineBreak);
            var desc = t.DrawList.Last();
            Assert.AreEqual(("178,190,207", false, true), (Rgb(desc.Color), desc.OneLine, desc.LineBreak));
        }

        [Test]
        public void Item_ArmaduraEscudoAcessorio()
        {
            var robe = L2Tooltip.Item(new TooltipItem { Name = "Robe", ItemType = 1, SlotBitType = 0x400, ArmorType = 3, PhysicalDefense = 40, MpBonus = 30, Weight = 900 });
            CollectionAssert.AreEqual(new[] { "Robe", "#235 / #244", "#388", " : ", "30", "#95", " : ", "40", "#52", " : ", "900" }, Seq(robe));
            var shield = L2Tooltip.Item(new TooltipItem { Name = "Shield", ItemType = 1, SlotBitType = 256, ShieldDefense = 80, ShieldDefenseRate = 20, AvoidModify = -8, Weight = 1200 });
            CollectionAssert.AreEqual(new[] { "Shield", "#95", " : ", "80", "#317", " : ", "20", "#97", " : ", "-8", "#52", " : ", "1200" }, Seq(shield));
            var ring = L2Tooltip.Item(new TooltipItem { Name = "Ring", ItemType = 2, SlotBitType = 0x10, MagicalDefense = 20, Weight = 150, Enchanted = 2, CrystalType = 2 });
            CollectionAssert.AreEqual(new[] { "+2 ", "Ring", " ", "`gradec`", "#239", "#99", " : ", "22", "#52", " : ", "150" }, Seq(ring));
        }

        [Test]
        public void Item_AdenaComTextoPorExtenso()
        {
            var t = L2Tooltip.Item(new TooltipItem { ClassId = 57, Name = "Adena", ItemType = 4, ConsumeType = 2, ItemNum = 1234567 });
            CollectionAssert.AreEqual(new[] { "Adena", " (1,234,567)", "(1  Million,234 Thousand,567  Adena)" }, Seq(t));
            Assert.AreEqual(2, t.SimpleLineCount);
            Assert.AreEqual(0, t.MinimumWidth);
        }

        [Test]
        public void Item_Price1_EsconderEncantamentoEQuantidade()
        {
            var it = new TooltipItem { Name = "Soulshot", ItemType = 5, ConsumeType = 2, ItemNum = 500, Price = 12000, Enchanted = 1 };
            var p1 = L2Tooltip.Item(it, "InventoryPrice1");
            CollectionAssert.AreEqual(new[] { "Soulshot", " (500)", "#322", " : ", "12,000 ", "#469", "(12 Thousand Adena)", "#52", " : ", "0" }, Seq(p1));
            Assert.AreEqual(3, p1.SimpleLineCount);
            var c = L2Tooltip.GetNumericColor("12,000");
            Assert.AreEqual(Rgb(c), Rgb(p1.DrawList[4].Color), "valor na cor do numero");
            Assert.AreEqual(Rgb(c), Rgb(p1.DrawList[5].Color));
            Assert.AreEqual(Rgb(c), Rgb(p1.DrawList[6].Color));
            var hide = L2Tooltip.Item(it, "InventoryPrice1HideEnchantStackable");
            Assert.AreEqual("Soulshot", Seq(hide)[0]);
            CollectionAssert.DoesNotContain(Seq(hide), " (500)");
            var free = L2Tooltip.Item(new TooltipItem { Name = "X", ItemType = 3, Price = 0 }, "InventoryPrice1");
            Assert.AreEqual(2, free.SimpleLineCount, "sem preco, sem o texto por extenso");
        }

        [Test]
        public void Item_Price2_PorUnidadeEQuantidadeDaLojaPrivada()
        {
            var it = new TooltipItem { Name = "Soulshot", ItemType = 5, ConsumeType = 2, ItemNum = 10, Price = 25, Reserved = 3 };
            var t = L2Tooltip.Item(it, "InventoryPrice2PrivateShop");
            CollectionAssert.AreEqual(new[] { "Soulshot", " (10)", "#322", " : ", "#468", " 25 ", "#469", "(", "#468", " 25  Adena)", "#808", " : ", "3", "#52", " : ", "0" }, Seq(t));
            Assert.AreEqual(3, t.SimpleLineCount);
        }

        // ---------------------------------------------------------------- layout e posicao
        /// <summary>6 px por caractere, 12 de altura; com quebra, linhas de `wrap`.</summary>
        static Vector2 Fake(string s, float wrap)
        {
            var w = s.Length * 6f;
            if (wrap <= 0 || w <= wrap) return new Vector2(w, 12);
            var lines = Mathf.CeilToInt(w / wrap);
            return new Vector2(wrap, 12 * lines);
        }

        [Test]
        public void Layout_LinhasDeslocamentoEQuebra()
        {
            var t = new CustomTooltip { MinimumWidth = 60 };
            t.DrawList.Add(new DrawItem { Type = DrawItemType.Text, Text = "abc", OneLine = true });
            t.DrawList.Add(new DrawItem { Type = DrawItemType.Text, Text = "de", OffX = 5, OneLine = true });
            t.DrawList.Add(new DrawItem { Type = DrawItemType.Text, Text = "x", OffY = 6, LineBreak = true, OneLine = true });
            t.DrawList.Add(new DrawItem { Type = DrawItemType.Blank, BlankHeight = 12 });
            t.DrawList.Add(new DrawItem { Type = DrawItemType.Text, Text = new string('z', 25), OffY = 6, LineBreak = true });
            var l = L2Tooltip.Measure(t, Fake);
            var r = l.Runs;
            Assert.AreEqual((0f, 0f), (r[0].X, r[0].Y));
            Assert.AreEqual((23f, 0f), (r[1].X, r[1].Y), "continua na linha: 18 + OffX 5");
            Assert.AreEqual((0f, 18f), (r[2].X, r[2].Y), "nova linha em 12 + OffY 6");
            Assert.AreEqual(60f, r[3].WrapW, "quebra na maior largura ja alcancada (a minima, 60) menos o x");
            Assert.AreEqual((0f, 48f), (r[3].X, r[3].Y), "12 da 1a linha + 18 da do x + 12 do branco + OffY 6");
            Assert.AreEqual((60f, 36f), (r[3].W, r[3].H), "3 linhas de 60");
            Assert.AreEqual(60f, l.W);
            Assert.AreEqual(42f + 42, l.H);
            Assert.AreEqual(Rgb(L2Tooltip.DefaultColor), Rgb(r[0].Color));
        }

        [Test]
        public void Layout_GrauDe12EVersaoSimples()
        {
            var t = new CustomTooltip { SimpleLineCount = 2 };
            t.DrawList.Add(new DrawItem { Type = DrawItemType.Text, Text = "Adena", OneLine = true });
            t.DrawList.Add(new DrawItem { Type = DrawItemType.Text, Text = "`graded`", OneLine = true });
            t.DrawList.Add(new DrawItem { Type = DrawItemType.Text, Text = "(um)", OffY = 6, LineBreak = true, OneLine = true });
            t.DrawList.Add(new DrawItem { Type = DrawItemType.Text, Text = "terceira linha", OffY = 6, LineBreak = true, OneLine = true });
            var l = L2Tooltip.Measure(t, Fake);
            Assert.IsTrue(l.Runs[1].Grade);
            Assert.AreEqual(("graded", 12f, 12f), (l.Runs[1].Text, l.Runs[1].W, l.Runs[1].H));
            Assert.AreEqual((42f, 30f), (l.SimpleW, l.SimpleH), "2 linhas: 30 + 12 de largura e 12 + 18 de altura");
            Assert.AreEqual((84f, 48f), (l.W, l.H));
            Assert.AreEqual(new[] { 0, 0, 1, 2 }, l.Runs.Select(x => x.Line).ToArray());
        }

        [Test]
        public void Texto_UmaLinhaOuDescricao()
        {
            Assert.IsTrue(L2Tooltip.Text("x").DrawList[0].OneLine);
            Assert.AreEqual(925, L2Tooltip.Text("", 925).DrawList[0].Id);
            Assert.AreEqual(0, L2Tooltip.Text("", 0).DrawList.Count);
            var d = L2Tooltip.Text("descricao", desc: true);
            Assert.AreEqual(("178,190,207", 144), (Rgb(d.DrawList[0].Color), d.MinimumWidth));
        }

        [Test]
        public void Posicao_AcimaAbaixoEBordas()
        {
            Assert.AreEqual(new Vector2(100, 150), L2Tooltip.Place(100, 200, 80, 50, 1280), "acima do canto");
            Assert.AreEqual(new Vector2(100, 52), L2Tooltip.Place(100, 20, 80, 50, 1280), "nao cabe em cima: y + 32");
            Assert.AreEqual(new Vector2(1200, 150), L2Tooltip.Place(1250, 200, 80, 50, 1280), "recua o que passa da direita");
            Assert.AreEqual(new Vector2(0, 150), L2Tooltip.Place(-10, 200, 80, 50, 1280));
        }

    }
}
