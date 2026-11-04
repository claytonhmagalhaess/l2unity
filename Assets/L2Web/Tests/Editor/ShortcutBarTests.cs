// #0028 (barra de atalhos, 02 §1.6 da #0024): ids de shot do FUN_10149ee0 (clique direito), troca entre slots
// (NCShortcutItemWnd::OnDropItem nw:0x100480c0), apagar ao soltar fora da barra com margem de 30 px (OnDragButton
// nw:0x100478f0) e rotulos de tecla (so a barra principal tem teclas no xdat).
using System.Linq;
using L2Web.Net;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class ShortcutBarTests
    {
        [TestCase(1463, true)]
        [TestCase(1467, true)]
        [TestCase(1468, false)]
        [TestCase(1835, true)]
        [TestCase(2509, true)]
        [TestCase(2514, true)]
        [TestCase(3947, true)]
        [TestCase(3952, true)]
        [TestCase(5789, true)]
        [TestCase(5790, true)]
        [TestCase(6535, true)]
        [TestCase(6540, true)]
        [TestCase(6645, true)]
        [TestCase(6647, true)]
        [TestCase(6648, false)]
        [TestCase(1060, false)]
        [TestCase(57, false)]
        public void IdsDeShot(int id, bool shot) => Assert.AreEqual(shot, ShortcutBar.IsShot(id));

        [Test]
        public void Troca_ComDestinoOcupado()
        {
            var a = new Shortcut { Slot = 2, Type = "item", Id = 13 };
            var b = new Shortcut { Slot = 7, Type = "skill", Id = 3, Level = 9 };
            var st = ShortcutBar.Swap(2, a, 7, b);
            Assert.AreEqual(2, st.Count);
            Assert.AreEqual((7, a), (st[0].Slot, st[0].Sc));
            Assert.AreEqual((2, b), (st[1].Slot, st[1].Sc));
        }

        [Test]
        public void Troca_ComDestinoVazioApagaAOrigem()
        {
            var a = new Shortcut { Slot = 2, Type = "action", Id = 0 };
            var st = ShortcutBar.Swap(2, a, 30, null);
            Assert.AreEqual(new[] { 30, 2 }, st.Select(x => x.Slot).ToArray());
            Assert.AreSame(a, st[0].Sc);
            Assert.IsNull(st[1].Sc, "origem apagada (RequestShortCutDel)");
            Assert.IsEmpty(ShortcutBar.Swap(2, a, 2, a), "mesmo slot");
            Assert.IsEmpty(ShortcutBar.Swap(2, null, 3, a), "origem vazia");
        }

        [Test]
        public void SoltarForaDaBarra()
        {
            // barra 100,500 com 450x46
            Assert.IsFalse(ShortcutBar.DeleteOnDrop(100, 500, 450, 46, 300, 520), "dentro");
            Assert.IsFalse(ShortcutBar.DeleteOnDrop(100, 500, 450, 46, 75, 475), "na margem de 30");
            Assert.IsFalse(ShortcutBar.DeleteOnDrop(100, 500, 450, 46, 580, 576));
            Assert.IsTrue(ShortcutBar.DeleteOnDrop(100, 500, 450, 46, 69, 520), "31 px a esquerda");
            Assert.IsTrue(ShortcutBar.DeleteOnDrop(100, 500, 450, 46, 300, 400), "acima");
            Assert.IsTrue(ShortcutBar.DeleteOnDrop(100, 500, 450, 46, 300, 577), "abaixo");
        }

        [Test]
        public void RotulosDeTecla()
        {
            Assert.AreEqual("F1", ShortcutBar.KeyLabel(0, 0));
            Assert.AreEqual("F12", ShortcutBar.KeyLabel(0, 11));
            Assert.AreEqual("", ShortcutBar.KeyLabel(1, 0), "barra 2 sem tecla no xdat do Interlude");
            Assert.AreEqual("", ShortcutBar.KeyLabel(2, 5));
        }
        [Test]
        public void UserShortCut_PetComDois()
        {
            Assert.AreEqual(1, ShortcutBar.UserShortCut("action", 14));
            Assert.AreEqual(2, ShortcutBar.UserShortCut("action", 15));
            Assert.AreEqual(2, ShortcutBar.UserShortCut("action", 27));
            Assert.AreEqual(1, ShortcutBar.UserShortCut("action", 28));
            Assert.AreEqual(1, ShortcutBar.UserShortCut("item", 20));
            Assert.AreEqual(2, ShortcutBar.UserShortCut("item", 20, true), "item do inventario do pet");
            Assert.AreEqual(1, ShortcutBar.UserShortCut("macro", 1001));
            Assert.AreEqual(1, ShortcutBar.UserShortCut("recipe", 3));
        }
    }
}
