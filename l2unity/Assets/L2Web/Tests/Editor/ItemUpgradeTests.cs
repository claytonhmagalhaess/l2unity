// #0044 (melhoria de item, spec 07 §4.2-4.4): ItemEnchantWnd/RefineryWnd/UnrefineryWnd.uc — titulo e itens aceitos pelo
// pergaminho, OK; augment com as 3 caixas na ordem, as confirmacoes do servidor e o resultado; remover augment com a taxa.
using L2Web.Net;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class ItemUpgradeTests
    {
        [TestCase("Scroll: Enchant Weapon (Grade C)", 0, 2, true)]
        [TestCase("Scroll: Enchant Weapon (Grade C)", 0, 3, false)]
        [TestCase("Scroll: Enchant Weapon (Grade C)", 1, 2, false)]
        [TestCase("Blessed Scroll: Enchant Armor (Grade S)", 2, 5, true)]
        [TestCase("Blessed Scroll: Enchant Armor (Grade S)", 1, 5, true)]
        [TestCase("Elixir", 0, 2, false)]
        public void Pergaminho_Aceita(string scroll, int type2, int crystal, bool ok) => Assert.AreEqual(ok, EnchantScript.Accepts(scroll, type2, crystal));

        [Test]
        public void Encantar_TituloEOk()
        {
            var e = new EnchantScript();
            Assert.AreEqual("#1220(Scroll)", e.Show(951, i => "#" + i, _ => "Scroll"));
            Assert.IsNull(e.Ok());
            e.Items.Add(new ListItem { ServerId = 77 });
            e.Selected = 0;
            Assert.AreEqual(77, e.Ok());
        }

        [Test]
        public void Augment_TresCaixasNaOrdem()
        {
            var r = new RefineryScript { SysMsg = id => "m" + id, SysMsg2 = (id, a, b) => "m" + id + ":" + a + ":" + b, ItemName = id => "gem" + id };
            r.Reset();
            Assert.AreEqual("m1957", r.Instruction);
            Assert.IsNull(r.Drop(2, new ListItem { ServerId = 5 }, 0), "a 2a caixa antes do alvo nao aceita");
            Assert.AreEqual("target", r.Drop(1, new ListItem { ServerId = 10 }, 0));
            Assert.IsTrue(r.TargetResult(InterfaceEvents.RefineryTarget(new VariationTargetInfo { ServerId = 10, ClassId = 1, Result = 1 })[0].Param));
            Assert.AreEqual(("m1958", 2), (r.Instruction, r.Highlight));
            Assert.AreEqual("refiner", r.Drop(2, new ListItem { ServerId = 20 }, 0));
            Assert.IsTrue(r.RefinerResult(InterfaceEvents.RefineryRefiner(new VariationRefinerInfo { ServerId = 20, ClassId = 8723, Result = 1, GemStoneCount = 20, GemStoneClassId = 2131 })[0].Param));
            Assert.AreEqual(("m1959:gem2131:20", "20"), (r.Instruction, r.GemCountText));
            Assert.AreEqual("ask", r.Drop(3, new ListItem { ServerId = 30, ItemNum = 50 }, 0), "sem Alt pede o numero");
            Assert.AreEqual("gem", r.Drop(3, new ListItem { ServerId = 30, ItemNum = 50 }, 50));
            Assert.IsTrue(r.GemResult(InterfaceEvents.RefineryGemStone(new VariationGemStoneInfo { ServerId = 30, ClassId = 2131, Result = 1, GemStoneCount = 20 })[0].Param));
            Assert.AreEqual((true, "m1984", 20L), (r.RefineEnabled, r.Instruction, r.Gem.ItemNum));
            r.Refine();
            Assert.AreEqual((false, false, true), (r.RefineEnabled, r.CloseEnabled, r.Refining));
            Assert.IsTrue(r.RefineResult(InterfaceEvents.RefineryResult(new VariationResultInfo { Option1 = 1, Option2 = 2, Result = 1 })[0].Param));
            Assert.AreEqual((10, true), (r.Result.ServerId, r.CloseEnabled));
        }

        [Test]
        public void Augment_ResultadoErradoNaoAvanca()
        {
            var r = new RefineryScript { SysMsg = id => "", SysMsg2 = (id, a, b) => "", ItemName = _ => "" };
            r.Reset();
            r.Drop(1, new ListItem { ServerId = 10 }, 0);
            Assert.IsFalse(r.TargetResult(InterfaceEvents.RefineryTarget(new VariationTargetInfo { ServerId = 10, Result = 0 })[0].Param));
            Assert.IsFalse(r.TargetResult(InterfaceEvents.RefineryTarget(new VariationTargetInfo { ServerId = 11, Result = 1 })[0].Param), "outro item");
            Assert.IsFalse(r.P1);
        }

        [Test]
        public void RemoverAugment_TaxaEAdena()
        {
            var u = new UnrefineryScript { SysMsg = (id, a) => "m" + id + a };
            u.Reset("Adena");
            Assert.AreEqual(("m1963", "0 Adena", false), (u.Instruction, u.AdenaText, u.ButtonEnabled));
            Assert.IsTrue(u.Drop(new ListItem { ServerId = 10, Name = "Espada" }));
            var p = InterfaceEvents.RefineryCancelItem(new VariationCancelItemInfo { ServerId = 10, Adena = 95000, Result = 1 })[0].Param;
            u.CancelItemResult(p, 1000, "Adena");
            Assert.AreEqual((false, "m279"), (u.ButtonEnabled, u.Instruction), "sem adena");
            u.CancelItemResult(p, 100000, "Adena");
            Assert.AreEqual((true, "95,000 Adena"), (u.ButtonEnabled, u.AdenaText));
            Assert.IsFalse(u.Start(1));
            Assert.IsTrue(u.Start(100000));
            Assert.IsTrue(u.Result(InterfaceEvents.RefineryCancelResult(1)[0].Param));
            Assert.AreEqual(("m1965Espada", true), (u.Instruction, u.P1));
            Assert.IsFalse(u.Drop(new ListItem { ServerId = 11 }), "depois de remover, so fecha");
        }
    }
}
