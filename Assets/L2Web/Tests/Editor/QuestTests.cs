// #0037 (quests, spec 07 §3.3 e §8): questname-e.dat, QuestTreeWnd.uc (arvore por quest e nivel do diario, contador, itens
// "(%s/N)", abrir exclusivo, alvo do marcador, Abort sm1201/sm182, SetCurrentID) e QuestListWnd.uc (linhas e Location), com as
// dicas QuestList/QuestInfo.
using System.Collections.Generic;
using System.Linq;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class QuestTests
    {
        static QuestData Data() => new(new[]
        {
            new QuestData.Row { Id = 1, Level = 1, Title = "Letters of Love", Journal = "Delivery", Desc = "Darin...", MinLevel = 2, MaxLevel = 5, Type = 3, Target = "Gatekeeper Roxxy", X = -84108, Y = 244604, Z = -3729, StartNpc = 30048, NpcX = 1, NpcY = 2, NpcZ = 3, ShowJournal = true, ShowItemNum = true },
            new QuestData.Row { Id = 1, Level = 2, Title = "Letters of Love", Journal = "Kerchief", Target = "Darin", X = 10, Y = 20, Z = 30, Items = new[] { 1081 }, Nums = new[] { 3 }, ShowJournal = true, ShowItemNum = true },
            new QuestData.Row { Id = 3, Level = 1, Title = "Seal", Journal = "Ritual", Target = "School of Dark Arts", MinimapOnly = true, MinLevel = 16, Items = new[] { 1082, 1083 }, Nums = new[] { 0, -5 } },
        });

        static QuestTreeScript Tree(Dictionary<int, long> inv = null)
        {
            inv ??= new Dictionary<int, long>();
            return new QuestTreeScript(Data())
            {
                InventoryCount = c => inv.TryGetValue(c, out var n) ? n : 0, SysString = id => "#" + id, ItemName = id => "item" + id, ItemIcon = id => "icon." + id,
            };
        }

        static void Fill(QuestTreeScript s)
        {
            s.ListStart();
            s.List(1, 1, 1);
            s.List(1, 2, 0);
            s.List(3, 1, 0);
            s.ListEnd();
        }

        [Test]
        public void Arvore_NosEContador()
        {
            var s = Tree(new Dictionary<int, long> { [1081] = 2, [1082] = 7 });
            Fill(s);
            Assert.AreEqual("(2/25)", s.CountText);
            Assert.AreEqual("root.1.1.1|root.1.2.0", s.ChildNodes("root.1"));
            Assert.IsNotNull(s.Find("root.1.2.0.desc"));
            Assert.AreEqual("root.1|root.3", s.ChildNodes("root"));
            var q = s.Find("root.1");
            Assert.AreEqual(("Letters of Love", "(#922:2~5)"), (q.Items[0].Text, q.Items[3].Text));
            Assert.AreEqual(("L2UI_CH3.QUESTWND.QuestWndInfoIcon_3", "L2UI_CH3.QUESTWND.QuestWndInfoIcon_2"), (q.Items[1].Tex, q.Items[2].Tex), "tipo 3");
            var j1 = s.Find("root.1.1.1");
            Assert.IsTrue(j1.Items.Any(i => i.Text == "#898"), "diario completo com ShowJournal");
            Assert.AreEqual("L2UI_CH3.QUESTWND.QuestWndInfoIcon_5", j1.Items[1].Tex, "tem alvo");
            var d = s.Find("root.1.2.0.desc");
            Assert.AreEqual("(2/3)", d.Items.First(i => i.Text.StartsWith("(")).Text, "%s = quantidade no inventario");
            var d3 = s.Find("root.3.1.0.desc").Items.Where(i => i.Text.StartsWith("(")).Select(i => i.Text).ToList();
            CollectionAssert.AreEqual(new[] { "(7/#858)", "(0/5#859)" }, d3, "0 = sem numero, negativo = 'ou mais'");
            Assert.AreEqual("(#922:16 #859)", s.LevelText(16, 0));
            Assert.AreEqual("(#922:#866)", s.LevelText(0, 0));
        }

        [Test]
        public void Itens_AtualizaPeloClassId()
        {
            var inv = new Dictionary<int, long> { [1081] = 1 };
            var s = Tree(inv);
            Fill(s);
            inv[1081] = 3;
            s.UpdateItemCount(1082);
            Assert.AreEqual("(1/3)", s.Find("root.1.2.0.desc").Items.First(i => i.Text.StartsWith("(")).Text, "outro classID nao muda");
            s.UpdateItemCount(1081);
            Assert.AreEqual("(3/3)", s.Find("root.1.2.0.desc").Items.First(i => i.Text.StartsWith("(")).Text);
        }

        [Test]
        public void Abrir_ExclusivoEAlvo()
        {
            var s = Tree();
            Fill(s);
            Assert.AreEqual(false, s.TargetInfo(true).On, "sem quest aberta");
            s.SetExpanded("root.1", true);
            s.SetExpanded("root.3", true);
            Assert.AreEqual(("root.3", false), (s.ExpandedNode(), s.Find("root.1").Expanded), "multiExpand = 0");
            var t = s.TargetInfo(true);
            Assert.AreEqual((true, false, false, "School of Dark Arts", 3), (t.On, t.Radar, t.Arrow, t.Name, t.QuestId), "so minimapa");
            s.SetExpanded("root.1", true);
            t = s.TargetInfo(true);
            Assert.AreEqual((true, true, "Darin", 10f), (t.On, t.Radar, t.Name, t.Pos.x), "o ultimo diario da quest");
            Assert.IsFalse(s.TargetInfo(false).On, "checkbox desmarcado");
            var vis = s.Visible().Select(v => v.node.Name).ToList();
            CollectionAssert.AreEqual(new[] { "root", "root.1", "root.1.1.1", "root.1.2.0", "root.3" }, vis);
        }

        [Test]
        public void Abort_AvisoEDestroi()
        {
            var s = Tree();
            Fill(s);
            Assert.AreEqual((EDialogType.Notice, 1201, QuestTreeScript.DialogNoQuest), s.Cancel());
            Assert.AreEqual(0, s.CancelOk(QuestTreeScript.DialogNoQuest));
            s.SetExpanded("root.3", true);
            Assert.AreEqual((EDialogType.Warning, 182, QuestTreeScript.DialogAbort), s.Cancel());
            Assert.AreEqual(3, s.CancelOk(QuestTreeScript.DialogAbort));
            Assert.AreEqual("root.1", s.ChildNodes("root"));
        }

        [Test]
        public void SetCurrent_AbreOUltimoDiario()
        {
            var s = Tree();
            Fill(s);
            Assert.IsTrue(s.SetCurrent(1));
            Assert.IsTrue(s.Find("root.1").Expanded && s.Find("root.1.2.0").Expanded && !s.Find("root.1.1.1").Expanded);
            Assert.IsFalse(s.SetCurrent(0));
        }

        [Test]
        public void Lista_LinhasELocation()
        {
            var l = new QuestListScript();
            l.Start();
            var p = L2Param.Add("", "QuestID", 1);
            p = L2Param.Add(p, "QuestName", "Letters of Love");
            p = L2Param.Add(p, "QuestRequirement", "Nenhum");
            p = L2Param.Add(p, "QuestLevel", "2~5");
            p = L2Param.Add(p, "QuestType", 1);
            p = L2Param.Add(p, "QuestNpcName", "Darin");
            l.Add(p);
            Assert.AreEqual(("Letters of Love", "2~5", "L2UI_CH3.QUESTWND.QuestWndInfoIcon_2"), (l.Records[0].Name, l.Records[0].Level, l.Records[0].Icon));
            Assert.IsNull(l.Location(Data(), _ => "Darin"), "sem selecao");
            l.Selected = 0;
            var t = l.Location(Data(), id => id == 30048 ? "Darin" : "");
            Assert.AreEqual((true, true, "Darin", 1f, 1), (t.On, t.Arrow, t.Name, t.Pos.x, t.QuestId));
        }

        [Test]
        public void Dicas_QuestListEQuestInfo()
        {
            var ql = L2Tooltip.QuestList("Seal", 3);
            Assert.AreEqual((1200, 862), (ql.DrawList[0].Id, ql.DrawList.Last().Id));
            var qi = L2Tooltip.QuestInfo("Seal", "Dark Elf", "16~26", 0, "desc", s => s.Length * 6);
            Assert.AreEqual(861, qi.DrawList[qi.DrawList.Count - 2].Id, "o QuestListWnd nao preenche o nReserved1");
            Assert.AreEqual(144 + 30, qi.MinimumWidth);
            Assert.AreEqual(5 * 2, L2Tooltip.QuestLegend(5).DrawList.Count);
        }

        [Test]
        public void ArquivoDoCliente()
        {
            var f = GameData.ClientFile("questname-e.dat");
            if (!System.IO.File.Exists(f)) Assert.Ignore("sem o questname-e.dat do cliente");
            var rows = QuestData.Parse(L2Files.Decrypt(System.IO.File.ReadAllBytes(f)));
            Assert.AreEqual(2050, rows.Count);
            var d = new QuestData(rows);
            var r = d.Get(1, 1);
            Assert.AreEqual(("Letters of Love", "Gatekeeper Roxxy", 30048, 2, 5, 3, false), (r.Title, r.Target, r.StartNpc, r.MinLevel, r.MaxLevel, r.Type, r.MinimapOnly));
            Assert.IsTrue(d.Get(3, 1).MinimapOnly, "alvo e uma area");
            CollectionAssert.AreEqual(new[] { 1081, 1082, 1083 }, d.Get(3, 1).Items);
        }
    }
}
