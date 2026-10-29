// K8 da matriz (Docs/validacao.md): textos da MultiSellItemInfo (NCVIPShopItemInfoWnd / NCNameCtrl). Golden/item_info.json
// (Docs/tools/gen_golden.py item_info): tabelas de encantamento e limites de velocidade lidos do NWindow.dll.
using System.Linq;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class ItemInfoTests
    {
        static JObject G => (JObject)Golden.Load("item_info.json");

        [Test]
        public void Tabelas_IguaisAoNWindow()
        {
            var g = G;
            for (var t = 0; t < 3; t++) CollectionAssert.AreEqual(((JArray)g["patk"][t]).Select(x => (double)x).ToArray(), ItemInfoText.PAtkTables[t]);
            foreach (JArray m in (JArray)g["matk"]) CollectionAssert.AreEqual(m.Select(x => (double)x).ToArray(), ItemInfoText.MAtkTable);
            CollectionAssert.AreEqual(((JArray)g["def"]).Select(x => (double)x).ToArray(), ItemInfoText.DefTable);
            CollectionAssert.AreEqual(((JArray)g["speedLimits"]).Select(x => (int)x).ToArray(), ItemInfoText.SpeedLimits);
            CollectionAssert.AreEqual(((JArray)g["speedStrings"]).Select(x => (int)x).ToArray(), ItemInfoText.SpeedStrings);
        }

        [Test]
        public void Formulas_ENome()
        {
            // espada de uma mao grau C (2) +5: 100 + 3 * (2*5-3) = 121; arco grau A (4) +2: 200 + 8 * 2 = 216
            Assert.AreEqual(121, ItemInfoText.PAtk(1, 0x80, 2, 5, 100));
            Assert.AreEqual(216, ItemInfoText.PAtk(6, 0x4000, 4, 2, 200));
            Assert.AreEqual(128, ItemInfoText.PAtk(1, 0x4000, 2, 5, 100), "duas maos usa a 2a tabela (4 no grau C)");
            Assert.AreEqual(100 + 1 * (3 * 6 - 6), ItemInfoText.Def(3, 6, 100));
            Assert.AreEqual(310, ItemInfoText.SpeedString(259));
            Assert.AreEqual(306, ItemInfoText.SpeedString(406));
            Assert.AreEqual("+3 Sword", ItemInfoText.MainName("Sword", 3, 0));
            Assert.AreEqual("Potion", ItemInfoText.MainName("Potion", 3, 5), "so tipos 0..3 mostram o +N");
            Assert.AreEqual("gradeb", ItemInfoText.Grade(3));
            Assert.IsNull(ItemInfoText.Grade(5), "o S nao tem icone");
        }

        [Test]
        public void Detalhe_Arma()
        {
            string Ss(int i) => "S" + i;
            var s = new ItemStats { Weapon = true, WeaponType = 1, CrystalType = 2, PAtk = 100, MAtk = 50, Speed = 379, SoulShot = 2, SpiritShot = 2, Weight = 1500, Description = "desc" };
            var (lines, h) = ItemInfoText.Detail(new ItemInfoText.Product { ClassId = 1, ItemType = 0, SlotBitType = 0x80 }, s, Ss, _ => 26);
            Assert.AreEqual("header", lines[0].Kind);
            Assert.AreEqual("S43 / S242", lines[0].Value);
            Assert.AreEqual(25, lines[0].Y);
            CollectionAssert.AreEqual(new[] { "S94", "S98", "S111", "S404", "S496", "S52" }, lines.Where(l => l.Kind == "stat").Select(l => l.Label).ToArray());
            Assert.AreEqual("S307", lines[3].Value, "379 < 406: Fast");
            Assert.AreEqual("X 2", lines[4].Value);
            Assert.AreEqual(45, lines[1].Y, "cabecalho + 20");
            Assert.AreEqual(45 + 17, lines[2].Y, "linha + 4 + H");
            var d = lines.Last();
            Assert.AreEqual("desc", d.Kind);
            Assert.AreEqual(45 + 17 * 5 + 17, d.Y);
            Assert.AreEqual(d.Y + 26, h);
        }
    }
}
