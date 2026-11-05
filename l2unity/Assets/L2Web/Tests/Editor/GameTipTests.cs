// G7 da matriz (Docs/validacao.md): gametip-e.dat e a escolha do GametipWnd.uc (OnShow).
using System.Linq;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class GameTipTests
    {
        [Test]
        public void Arquivo_ERegras()
        {
            var tips = GameData.GameTips;
            Assert.AreEqual(182, tips.Count, "sem gametip-e.dat na copia?");
            Assert.AreEqual((1, 3, 101, true), (tips[0].Id, tips[0].Priority, tips[0].TargetLevel, tips[0].Validity));
            StringAssert.StartsWith("You can drag Soulshots and Spiritshots", tips[0].Msg);
            // faixas do nivel e prioridade sorteada (GametipWnd.uc)
            Assert.AreEqual(1, GameTip.LevelBand(20));
            Assert.AreEqual(20, GameTip.LevelBand(31));
            Assert.AreEqual(80, GameTip.LevelBand(80));
            Assert.AreEqual(0, GameTip.LevelBand(81));
            Assert.AreEqual((1, 2, 3, 4), (GameTip.PriorityOf(50), GameTip.PriorityOf(75), GameTip.PriorityOf(90), GameTip.PriorityOf(99)));
            // candidatas: so validas, da prioridade, para a faixa, 0 ou o arranjo 101/102
            var c = GameTip.Candidates(tips, 31, 3);
            Assert.IsTrue(c.Contains(tips[0].Msg));
            Assert.IsTrue(tips.Where(t => c.Contains(t.Msg)).All(t => t.Priority == 3 && t.Validity && (t.TargetLevel == 20 || t.TargetLevel == 0 || t.TargetLevel == 101)));
        }
    }
}
