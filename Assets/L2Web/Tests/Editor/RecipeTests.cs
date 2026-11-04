// #0043 (fabricacao, spec 07 §6): recipe-c.dat e RecipeBookWnd/RecipeManufactureWnd/RecipeShopWnd/RecipeBuyListWnd/RecipeTreeWnd.uc
// — contador e apagar, fabricar (MP, chance, materiais, sm959/960), loja (taxa, limite, repetidos, 20), lista da loja de outro
// e a arvore de materiais.
using System.Collections.Generic;
using System.Linq;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class RecipeTests
    {
        static readonly RecipeData.Row Arrow = new() { Id = 1, ItemId = 1666, Level = 1, ProductId = 17, ProductNum = 500, Mp = 30, SuccessRate = 100, Materials = new[] { (1864, 4), (1869, 2) } };
        static readonly RecipeData.Row Stem = new() { Id = 50, ItemId = 2000, Level = 1, ProductId = 1864, ProductNum = 1, Mp = 10, SuccessRate = 100, Materials = new[] { (1, 3) } };

        [Test]
        public void ArquivoDoCliente()
        {
            var f = GameData.ClientFile("recipe-c.dat");
            if (!System.IO.File.Exists(f)) Assert.Ignore("sem o recipe-c.dat do cliente");
            var all = RecipeData.Parse(L2Files.Decrypt(System.IO.File.ReadAllBytes(f)));
            Assert.AreEqual(871, all.Count);
            var r = all[1];
            Assert.AreEqual(("mk_wooden_arrow", 1666, 17, 500, 30, 100), (r.Name, r.ItemId, r.ProductId, r.ProductNum, r.Mp, r.SuccessRate));
            CollectionAssert.AreEqual(new[] { (1864, 4), (1869, 2) }, r.Materials);
        }

        [Test]
        public void Livro_ContadorEApagar()
        {
            var b = new RecipeBookScript { ItemName = id => "item" + id, MaxNormal = 100, MaxDwarf = 50 };
            Assert.AreEqual(1214, b.Show(1));
            b.Items.Add(new RecipeSlot { RecipeId = 1, Name = "Recipe: Wooden Arrow" });
            Assert.AreEqual("(1/100)", b.CountText);
            Assert.AreEqual(1215, b.Show(0));
            Assert.AreEqual("(0/50)", b.CountText, "anao");
            b.Items.Add(new RecipeSlot { RecipeId = 7 });
            Assert.AreEqual(7, b.Open(0));
            Assert.IsNull(b.Open(3));
            Assert.AreEqual("74:Recipe", b.AskDelete(new RecipeSlot { RecipeId = 9, Name = "Recipe" }, (id, n) => id + ":" + n));
            Assert.AreEqual(9, b.DeleteId);
        }

        [Test]
        public void Fabricar_MpChanceMateriais()
        {
            var inv = new Dictionary<int, long> { [1864] = 10, [1869] = 1, [17] = 3 };
            var s = new RecipeMakeScript { InventoryCount = c => inv.TryGetValue(c, out var n) ? n : 0, ItemName = id => "item" + id, Crystal = _ => 2, SysMsg = (id, a, b) => id + ":" + a + ":" + b };
            RecipeData.Use(Arrow, Stem);
            s.Info(1, 50, 200, 1, 1, 7);
            Assert.AreEqual(("item17 `gradec`", "30", "100%", "500", "3", "959:item17:500"), (s.Texts["txtName"], s.Texts["txtMPConsume"], s.Texts["txtSuccessRate"], s.Texts["txtResultValue"], s.Texts["txtCountValue"], s.Texts["txtMsg"]));
            Assert.AreEqual((false, true), (s.Materials[0].Disabled, s.Materials[1].Disabled), "menos do que pede = desligado");
            Assert.AreEqual(41, s.MpBar, "165 * 50 / 200");
            inv[1869] = 5;
            Assert.IsTrue(s.InventoryChanged(1869));
            Assert.IsFalse(s.Materials[1].Disabled);
            Assert.IsFalse(s.InventoryChanged(999));
            s.Info(1, 999, 200, 0, 1, 7);
            Assert.AreEqual(("960:item17:", 165), (s.Texts["txtMsg"], s.MpBar));
        }

        [Test]
        public void Loja_TaxaLimiteERepetidos()
        {
            var s = new RecipeShopScript { ItemName = id => "item" + id };
            Assert.AreEqual(1212, s.Show(1));
            s.Book.Add(new RecipeSlot { RecipeId = 1, ClassId = 1666 });
            s.Book.Add(new RecipeSlot { RecipeId = 2, ClassId = 1786 });
            Assert.IsTrue(s.DoubleClickBook(0), "pede a taxa");
            Assert.IsTrue(s.PriceOk("2000000000"), "limite = sm1369");
            Assert.AreEqual(0, s.Shop.Count);
            s.DoubleClickBook(0);
            Assert.IsFalse(s.PriceOk("5000"));
            Assert.AreEqual(("(1/20)", 5000L), (s.CountText, s.Shop[0].Price));
            Assert.IsFalse(s.DoubleClickBook(0), "ja na loja: duplo clique tira");
            Assert.AreEqual(0, s.Shop.Count);
            s.DoubleClickBook(1);
            s.PriceOk("10");
            s.Handle = s.Book[1];
            s.PriceOk("20");
            Assert.AreEqual(1, s.Shop.Count, "sem repetir o classID");
            CollectionAssert.AreEqual(new[] { (2, 10) }, s.Start());
            s.DoubleClickShop(0);
            Assert.AreEqual(0, s.Shop.Count);
        }

        [Test]
        public void ListaDaLojaDeOutro_NosEClique()
        {
            RecipeData.Use(Arrow, Stem);
            var l = new RecipeBuyListScript { ItemName = id => "item" + id, ItemIcon = _ => "", SysString = id => "#" + id };
            l.Show(77, 30, 120, 999);
            l.Add(1, 1500);
            var n = l.Find("root.1");
            CollectionAssert.AreEqual(new[] { "item17", "#641", " : ", "1,500" }, n.Items.Where(i => i.Type == TreeItem.Kind.Text).Select(i => i.Text));
            Assert.AreEqual("Default.BlackTexture", n.Items[0].Tex, "sem icone");
            Assert.AreEqual((1, 41), (l.Click(n.Name), l.MpBar));
        }

        [Test]
        public void Arvore_MateriaisComReceitaEContagem()
        {
            RecipeData.Use(Arrow, Stem);
            var t = new RecipeTreeScript { InventoryCount = c => c == 1864 ? 1 : 0, ItemName = id => "item" + id, ItemIcon = _ => "icone", All = new[] { Arrow, Stem } };
            t.Show(1, 100, _ => 0);
            Assert.AreEqual(("Lv.1", "100%"), (t.Texts["txtLevel"], t.Texts["txtSuccessRate"]));
            var root = t.Find("root.17_100");
            Assert.IsTrue(root.ShowButton);
            Assert.AreEqual("item1666", root.Items.First(i => i.Type == TreeItem.Kind.Text).Text, "nome do item da receita");
            var stem = t.Find("root.17_100.1864_100");
            Assert.IsNotNull(stem, "material com receita vira no com botao");
            Assert.IsTrue(stem.Items.Any(i => i.Tex == "Default.ChatBack"), "1 de 4: fundo vermelho");
            Assert.AreEqual("(1/4)", stem.Items.First(i => i.Text.StartsWith("(")).Text);
            Assert.IsNotNull(t.Find("root.17_100.1869_0"), "sem receita: item simples");
            Assert.IsNotNull(t.Find("root.17_100.1864_100.1_0"), "a receita do material tambem abre, com os materiais dela");
        }
    }
}
