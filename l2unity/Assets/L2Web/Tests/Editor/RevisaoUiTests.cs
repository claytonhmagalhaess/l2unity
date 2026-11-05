// #0047: regras corrigidas na revisao da interface. DetailStatusWnd.uc:296-309 (cor do nome pelo karma) e ActionWnd.uc:93-139
// (HandleActionList: categorias 1/2/3 do actionname-e).
using System.Linq;
using L2Web.UI;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class RevisaoUiTests
    {
        [TestCase(0, 255)]
        [TestCase(-5, 255)]
        // CrimRate 1 -> Clamp(1, 100, 255) = 100
        [TestCase(1, 155)]
        // 160 -> Clamp(160, 110, 255) = 160
        [TestCase(160, 95)]
        [TestCase(999999, 0)]
        public void DetailStatus_CorDoNomePeloKarma(int karma, int gb)
        {
            var c = GameUi.KarmaNameColor(karma);
            Assert.AreEqual(((byte)255, (byte)gb, (byte)gb), (c.r, c.g, c.b));
        }

        [Test]
        public void DetailStatus_CoresDoTituloEDoCla()
        {
            Assert.AreEqual(new Color32(162, 249, 236, 255), GameUi.DetailTitleColor);
            Assert.AreEqual(new Color32(176, 155, 121, 255), GameUi.DetailPledgeColor);
        }

        [Test]
        public void ActionWnd_CategoriasDoArquivo()
        {
            var f = GameData.ClientFile("actionname-e.dat");
            if (!System.IO.File.Exists(f)) Assert.Ignore("sem o actionname-e.dat do cliente");
            var all = L2TooltipData.ParseActionNames(L2Files.Decrypt(System.IO.File.ReadAllBytes(f))).Values.OrderBy(a => a.Id).ToList();
            int[] Cat(int c) => all.Where(a => a.Category == c).Select(a => a.Id).ToArray();
            CollectionAssert.AreEqual(new[] { 0, 1, 2, 3, 4, 5, 6, 10, 28, 37, 38, 40, 51, 55, 57, 58, 59 }, Cat(1), "basicas (Duel e Withdraw inclusive)");
            CollectionAssert.AreEqual(new[] { 7, 8, 9, 11, 50, 56, 60 }, Cat(2), "grupo");
            CollectionAssert.AreEqual(new[] { 12, 13, 14, 24, 25, 26, 29, 30, 31, 33, 34, 35 }, Cat(3), "sociais");
        }
    }
}
