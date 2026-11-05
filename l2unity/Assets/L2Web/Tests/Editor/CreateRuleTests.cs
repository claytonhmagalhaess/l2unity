// G9 da matriz (Docs/validacao.md): estado inicial e regras dos seletores do NCPawnSetupWnd (NWindow FUN_10197a50 reset,
// FUN_10199060 raca, FUN_101993c0 classe, FUN_10199630 sexo, FUN_10197b50 penteado; sysmsg 81/82/83).
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class CreateRuleTests
    {
        static CreateState S(int r, int c, int x, int h, int co, int f) => new CreateState { Race = r, Cls = c, Sex = x, Hair = h, Color = co, Face = f };

        [Test]
        public void Regras()
        {
            var ini = S(0, -1, -1, -1, -1, -1);
            // penteado sem classe: sysmsg 82 e nada muda
            var a = CreatePanel.Next(ini, "hair", 1, out var msg, out var model);
            Assert.AreEqual(82, msg);
            Assert.IsFalse(model);
            Assert.AreEqual("0/-1/-1/-1/-1/-1", a.ToString());
            // sexo sem classe: 82
            CreatePanel.Next(ini, "sex", 0, out msg, out _);
            Assert.AreEqual(82, msg);
            // classe: limpa o resto; sexo: zera penteado/cor/rosto e escolhe o modelo
            var b = CreatePanel.Next(ini, "cls", 1, out msg, out model);
            Assert.AreEqual((0, false, "0/1/-1/-1/-1/-1"), (msg, model, b.ToString()));
            CreatePanel.Next(b, "face", 2, out msg, out _);
            Assert.AreEqual(83, msg);
            var c = CreatePanel.Next(b, "sex", 1, out msg, out model);
            Assert.AreEqual((0, true, "0/1/1/0/0/0"), (msg, model, c.ToString()));
            // raca nova limpa tudo; anao so tem guerreiro
            Assert.AreEqual("2/-1/-1/-1/-1/-1", CreatePanel.Next(c, "race", 2, out _, out _).ToString());
            Assert.AreEqual(0, CreatePanel.Next(S(4, -1, -1, -1, -1, -1), "cls", 1, out _, out _).Cls);
            // sem raca: 81
            CreatePanel.Next(S(-1, -1, -1, -1, -1, -1), "cls", 0, out msg, out _);
            Assert.AreEqual(81, msg);
        }
    }
}
