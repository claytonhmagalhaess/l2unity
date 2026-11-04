// Mistura das particulas em gama (spec 09 §4.5.1, #0053): o L2Web/Particle sai do UniversalForward e e desenhado pelo
// FxGammaPass num alvo com a cor da camera em gama; o TFactor das malhas chega cru ao shader (antes ia elevado a ~4,4:
// pow 2,2 no C# e mais a conversao do SetColor no projeto linear).
using L2Web.Render.Fx;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.Rendering;

namespace L2Web.Tests
{
    public class FxGammaTests
    {
        [Test]
        public void Particula_PasseDesenhadoPeloFxGammaPass_ENaoPeloForwardDoUrp()
        {
            var sh = Shader.Find("L2Web/Particle");
            Assert.IsNotNull(sh);
            Assert.AreEqual(1, sh.passCount);
            Assert.AreEqual(FxGammaPass.Tag.name, sh.FindPassTagValue(0, new ShaderTagId("LightMode")).name);
            Assert.AreNotEqual("UniversalForward", FxGammaPass.Tag.name);
            Assert.AreNotEqual("SRPDefaultUnlit", FxGammaPass.Tag.name);
        }

        [Test]
        public void Composicao_ShaderDeCopiaComOsDoisSentidos()
        {
            var sh = Shader.Find("Hidden/L2Web/FxGamma");
            Assert.IsNotNull(sh, "o shader fica em Resources para entrar no build");
            Assert.AreEqual(2, sh.passCount);
        }

        [Test]
        public void Malha_TFactorEmBytesSobre255_SemConversaoDeCor()
        {
            // wh_heal_ca.MeshEmitter1: ColorScale (125,125,125) -> TFactor 125/255 = 0,49 (antes 0,49^4,4 = 0,04: circulo invisivel)
            var t = FxRenderer.MeshTint(new Color32(125, 125, 125, 200));
            Assert.AreEqual(125 / 255f, t.x, 1e-6);
            Assert.AreEqual(125 / 255f, t.y, 1e-6);
            Assert.AreEqual(125 / 255f, t.z, 1e-6);
            Assert.AreEqual(200 / 255f, t.w, 1e-6);
        }

        [Test]
        public void MaterialDaParticula_UsaOShaderDoPasseEmGama()
        {
            var r = new FxRenderer(null);
            try
            {
                var m = r.Material(null, DrawStyle.Translucent, true, 0, true, false, false, false);
                Assert.AreEqual("L2Web/Particle", m.shader.name);
                Assert.AreEqual((float)BlendMode.One, m.GetFloat("_SrcBlend"));
                Assert.AreEqual((float)BlendMode.One, m.GetFloat("_DstBlend"));
            }
            finally
            {
                Object.DestroyImmediate(r.Root.gameObject);
            }
        }
    }
}
