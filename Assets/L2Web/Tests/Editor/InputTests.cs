// J3 da matriz (Docs/validacao.md): IsPKMode = qualquer Ctrl (VK 0x11) ou a flag do console (FUN_1014ce50, 93 §8.3).
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class InputTests
    {
        [Test]
        public void IsPKMode_CtrlEsquerdoOuDireitoOuFlag()
        {
            Assert.IsFalse(L2Input.IsPKMode(false, false, false));
            Assert.IsTrue(L2Input.IsPKMode(true, false, false));
            Assert.IsTrue(L2Input.IsPKMode(false, true, false));
            Assert.IsTrue(L2Input.IsPKMode(false, false, true));
        }
    }
}
