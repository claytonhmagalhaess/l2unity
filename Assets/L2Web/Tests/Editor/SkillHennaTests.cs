// #0039 (aprender skill e tatuagem): SkillTrainListWnd/InfoWnd.uc e HennaListWnd/InfoWnd.uc — titulos e SP por tipo, nos do
// TreeCtrl e o clique "id,nivel", detalhe com alcance e item, aprender; lista de tatuagens (pintar e apagar), taxa, detalhe com
// os atributos e os botoes; hennagrp-e.dat.
using System.Linq;
using L2Web.Net;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class SkillHennaTests
    {
        [Test]
        public void ListaDeSkills_NosEClique()
        {
            var s = new SkillTrainScript { SysString = id => "#" + id };
            s.ListShow(SkillTrainScript.Normal);
            Assert.AreEqual((477, 92, false), s.Head);
            s.AddSkill("icon.skill0003", "Power Strike", 3, 2, 500, "");
            var n = s.Find("SkillTrainListRoot.3,2");
            Assert.IsNotNull(n);
            CollectionAssert.AreEqual(new[] { "Power Strike", "#88", "2", "#365 : ", "500" }, n.Items.Where(i => i.Type == TreeItem.Kind.Text).Select(i => i.Text));
            Assert.AreEqual((3, 2, false), s.Click(n.Name));
            Assert.IsNull(s.Click("SkillTrainListRoot"));
            s.ListShow(SkillTrainScript.Clan);
            Assert.AreEqual((1436, 1372, true), s.Head);
            s.AddSkill("", "Clan Vitality", 370, 1, 3000, "");
            Assert.AreEqual("#1437 : ", s.Find("SkillTrainListRoot.370,1").Items[6].Text);
            Assert.AreEqual(1, s.Root.Children[0].Children.Count, "o ListShow limpa");
        }

        [Test]
        public void Detalhe_AlcanceItemEAprender()
        {
            var s = new SkillTrainScript { SysString = id => "#" + id };
            s.Info(SkillTrainScript.Normal, 3, 2, "Power Strike", "Ativa", 10, -1, "desc", 500, "", "", 0);
            Assert.AreEqual(("2", "10", "#365", false, false), (s.Texts["txtLevel"], s.Texts["txtMP"], s.Texts["txtNeedSPString"], s.CastRangeShown, s.NeedItemShown));
            s.InfoItem("Spellbook", 1);
            Assert.AreEqual(("Spellbook X 1", true), (s.Texts["txtNeedItemName"], s.NeedItemShown));
            Assert.AreEqual((3, 2, 0, false), s.Learn());
            s.Info(SkillTrainScript.Clan, 370, 1, "", "", 0, 40, "", 3000, "", "", 0);
            Assert.AreEqual(("#1437", true, "40"), (s.Texts["txtNeedSPString"], s.CastRangeShown, s.Texts["txtCastRange"]));
        }

        [Test]
        public void Tatuagens_ListaETaxa()
        {
            var h = new HennaScript { SysString = id => "#" + id };
            h.ListShow(true, 123456);
            Assert.AreEqual((651, 659), h.Head);
            h.Add(1, "Symbol of Strength", "icon.etc_str_symbol_i00", "Str+1 Con-3", 37000);
            var n = h.Find("HennaListRoot.1");
            Assert.AreEqual(("#637 : ", "37,000"), (n.Items[2].Text, n.Items[3].Text));
            Assert.AreEqual(1, h.Click(n.Name));
            h.ListShow(false, 0);
            Assert.AreEqual((652, 660), h.Head);
            h.Add(2, "Symbol", "", "Str+1 Dex-3", 5000);
            Assert.AreEqual(("Str+1 Dex-3", -24), (h.Find("HennaListRoot.2").Items[2].Text, h.Find("HennaListRoot.2").Items[2].OffY), "apagar mostra a descricao");
        }

        [Test]
        public void DetalheDaTatuagem_AtributosEBotoes()
        {
            var h = new HennaScript { SysString = id => "#" + id };
            var ev = InterfaceEvents.HennaItemInfo(new HennaItemInfo
            {
                Equip = true, Adena = 100000, Henna = new HennaEntry { HennaId = 1, DyeId = 4445, Count = 10, Fee = 37000 },
                Now = new[] { 1, 2, 3, 4, 5, 6 }, Change = new[] { 1, 3, 0, 4, 5, 6 },
            })[0];
            h.Info(true, ev.Param, cls => ("Dye " + cls, "icon.dye"));
            Assert.AreEqual(("Dye 4445", "37,000", "2", "3"), (h.Texts["txtDyeName"], h.Texts["txtAdena"], h.Texts["txtSTRBefore"], h.Texts["txtSTRAfter"]));
            Assert.AreEqual(("equip", 1), h.Button("btnOK"));
            Assert.AreEqual(("list", 0), h.Button("btnPrev"));
            h.Info(false, ev.Param, cls => ("", ""));
            Assert.IsTrue(h.Texts.ContainsKey("txtDyeNameUnEquip"));
            Assert.AreEqual(("unequip", 1), h.Button("btnOK"));
        }

        [Test]
        public void HennaGrp_ArquivoDoCliente()
        {
            var f = GameData.ClientFile("hennagrp-e.dat");
            if (!System.IO.File.Exists(f)) Assert.Ignore("sem o hennagrp-e.dat do cliente");
            var all = HennaGrp.Parse(L2Files.Decrypt(System.IO.File.ReadAllBytes(f)));
            Assert.AreEqual(180, all.Count);
            Assert.AreEqual(("Symbol of Strength", 4445, "icon.etc_str_symbol_i00", "Str+1 Con-3"), (all[1].Name, all[1].DyeId, all[1].Icon, all[1].Desc));
        }
    }
}
