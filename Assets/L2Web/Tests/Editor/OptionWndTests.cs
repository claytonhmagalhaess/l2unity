// J5 da matriz (Docs/validacao.md): mapeamentos do OptionWnd.uc (linhas citadas na spec 04 §2.3-2.5).
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class OptionWndTests
    {
        [Test]
        public void Gamma_FaixasDoInitVideoOption()
        {
            // :275-286 e a gravacao :846-866
            Assert.AreEqual(0, OptionWnd.GammaIndex(1.2f));
            Assert.AreEqual(1, OptionWnd.GammaIndex(1.0f));
            Assert.AreEqual(1, OptionWnd.GammaIndex(1.19f));
            Assert.AreEqual(2, OptionWnd.GammaIndex(0.8f));
            Assert.AreEqual(3, OptionWnd.GammaIndex(0.6f));
            Assert.AreEqual(4, OptionWnd.GammaIndex(0.59f));
            CollectionAssert.AreEqual(new[] { 1.2f, 1.0f, 0.8f, 0.6f, 0.4f }, OptionWnd.GammaValue);
        }

        [Test]
        public void LimiteDePersonagens_EVolume()
        {
            // RenderActorLimited (:349-362): >=6 -> 0 (None), 5 -> 1 ... <=1 -> 5
            Assert.AreEqual(0, OptionWnd.PawnLimitIndex(6));
            Assert.AreEqual(0, OptionWnd.PawnLimitIndex(9));
            Assert.AreEqual(1, OptionWnd.PawnLimitIndex(5));
            Assert.AreEqual(5, OptionWnd.PawnLimitIndex(1));
            Assert.AreEqual(5, OptionWnd.PawnLimitIndex(0));
            // volume -> tick por faixas de 0,2 (:433-450)
            Assert.AreEqual(1, OptionWnd.VolumeTick(0.2f));
            Assert.AreEqual(0, OptionWnd.VolumeTick(0.005f));
            Assert.AreEqual(5, OptionWnd.VolumeTick(1f));
        }
    }
}
