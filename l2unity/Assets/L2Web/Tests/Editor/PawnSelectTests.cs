// G8 (lobby): painel do personagem escolhido, as contas do NCPawnSelectWnd::OnPaint (0x1017e280). Golden/pawn_select.json
// (Docs/tools/gen_golden.py pawn_select): a tabela de EXP do NWindow.dll e a largura maxima da barra de EXP.
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class PawnSelectTests
    {
        static JObject G => (JObject)Golden.Load("pawn_select.json");

        [Test]
        public void TabelaDeExp_IgualAoNWindow()
        {
            var t = (JArray)G["exp"];
            Assert.AreEqual(t.Count, PawnSelectModel.Exp.Length);
            for (var i = 0; i < t.Count; i++) Assert.AreEqual((long)t[i], PawnSelectModel.Exp[i], "nivel " + i);
            Assert.AreEqual((double)G["expBarMax"], PawnSelectModel.ExpBarMax);
        }

        [Test]
        public void BarrasDeHpMp_DivisaoInteiraEm85()
        {
            Assert.AreEqual(85, PawnSelectModel.Gauge(100, 100));
            Assert.AreEqual(42, PawnSelectModel.Gauge(50, 101));
            Assert.AreEqual(0, PawnSelectModel.Gauge(10, 0));
            // acima do maximo a barra fica com 10 de altura e a largura maxima
            Assert.AreEqual((85f, 10f), PawnSelectModel.Bar(90, 85));
            Assert.AreEqual((40f, 12f), PawnSelectModel.Bar(40, 85));
            Assert.IsNull(PawnSelectModel.Bar(0, 85));
        }

        [Test]
        public void Exp_BarraETextoPeloNivel()
        {
            // nivel 2: T[2] = 68, T[3] = 363; 215 = 68 + 147 -> _ftol(147 * 206 / 295) = 102
            Assert.AreEqual(0, PawnSelectModel.ExpGauge(2, 68));
            Assert.AreEqual(102, PawnSelectModel.ExpGauge(2, 215));
            Assert.AreEqual("0.00%", PawnSelectModel.ExpText(2, 68));
            Assert.AreEqual("49.83%", PawnSelectModel.ExpText(2, 215));
            Assert.AreEqual("100.00%", PawnSelectModel.ExpText(1, 68));
        }

        [Test]
        public void Karma_ComMaisAPartirDe999999()
        {
            Assert.AreEqual("0", PawnSelectModel.Karma(0));
            Assert.AreEqual("999998", PawnSelectModel.Karma(999998));
            Assert.AreEqual("999999+", PawnSelectModel.Karma(999999));
        }
    }
}
