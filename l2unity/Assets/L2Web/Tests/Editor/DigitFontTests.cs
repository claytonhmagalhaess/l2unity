// H1 da matriz (Docs/validacao.md): fonte de digitos do engine e o texto do NCStatusBarCtrl. Golden/special_digit.json
// (Docs/tools/gen_golden.py special_digit): mapa do UCanvas::DrawSpecialDigit e os tipos do FUN_100212f0.
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class DigitFontTests
    {
        [Test]
        public void Celulas_ETipos()
        {
            var g = Golden.Load("special_digit.json");
            var cells = (JObject)g["cells"];
            for (var c = (char)32; c < 127; c++)
            {
                var want = cells[c.ToString()] is JToken t ? (int)t : -1;
                Assert.AreEqual(want, L2Digits.Cell(c), $"'{c}'");
            }
            var types = (JArray)g["types"];
            for (var i = 0; i < 3; i++)
            {
                Assert.AreEqual((string)types[i]["tex"], L2Digits.Types[i].tex);
                Assert.AreEqual((int)types[i]["w"], L2Digits.Types[i].w);
                Assert.AreEqual((int)types[i]["h"], L2Digits.Types[i].h);
            }
            // avanco = largura da celula; espaco e minusculas nao contam
            Assert.AreEqual(8 * 9, L2Digits.Width("4022/4022"));
            Assert.AreEqual(8 * 2, L2Digits.Width("H P"));
        }

        [Test]
        public void StatusBar_AvisoERegeneracao()
        {
            // aviso: atual < (max / 10) * 3 com divisao inteira (FUN_1004cd70)
            Assert.IsTrue(L2Wnd.WarnOn(299, 1000));
            Assert.IsFalse(L2Wnd.WarnOn(300, 1000));
            Assert.IsFalse(L2Wnd.WarnOn(2, 9)); // 9 / 10 * 3 = 0
            // SetRegenInfo(duracao 10, ticks 3, 50/tick): resto = 10 - 1 * 0,666; previsto = resto / (3 * 0,666) * 50
            var (remain, value) = L2Wnd.RegenStart(10, 3, 50);
            Assert.AreEqual(10 - 0.666, remain, 1e-9);
            Assert.AreEqual((10 - 0.666) / (3 * 0.666) * 50, value, 1e-9);
        }

        [Test]
        public void StatusBar_PosicoesDoNCStatusBarCtrl()
        {
            // W = 150 (CPBar 100%-26 de 176): titulo em 9; "/" em 75 - ext/2; atual em 75 - ext - 8; maximo em 79
            var p = L2Digits.StatusBarText("CP", 150, 4022, 4022, null);
            Assert.AreEqual(("CP", 9f), p[0]);
            Assert.AreEqual(("/", 73f), p[1]);
            Assert.AreEqual(("4022", 41f), p[2]); // na captura do original: celulas em 41, 49, 57, 65 e a barra em 73
            Assert.AreEqual(("4022", 79f), p[3]);
            var e = L2Digits.StatusBarText(null, 150, 0, 0, "96.37%");
            Assert.AreEqual(1, e.Count);
            Assert.AreEqual("96.37%", e[0].text);
        }
    }
}
