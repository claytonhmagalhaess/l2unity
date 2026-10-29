// Login e criacao: balanco das arvores (FWind::Sway 0x10588960), vinhas (physL2Movement 0x1063e7c0), projetor da trilha
// (AProjector::CalcMatrix 0x106477f0) e flares do ceu (FUN_10657c00). Estudos em scratchpad/lobby_sway_re.md e lobby_sky_re.md.
using L2Web.Render;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class LobbySwayTests
    {
        /// <summary>Quadros ate o S1 passar de F (meio balanco) com o passo de 0,05 em float.</summary>
        static int HalfSwing(float f)
        {
            float s0 = 0, s1 = 0, s2 = 0;
            var n = 0;
            do
            {
                WindSway.Step(0, 0, 0, ref s0, ref s1, ref s2, f, 1, () => 0.25f);
                n++;
            } while (s1 != 0 && n < 10000);
            return n;
        }

        [Test]
        public void Vento_QuadrosPorMeioBalanco()
        {
            // tabela do estudo (simulacao em float32)
            Assert.AreEqual(20, HalfSwing(1));
            Assert.AreEqual(100, HalfSwing(5));
            Assert.AreEqual(300, HalfSwing(15));
            Assert.AreEqual(461, HalfSwing(23));
        }

        [Test]
        public void Vento_InclinacaoMaxima1Grau()
        {
            float s0 = 0, s1 = 0, s2 = 0;
            var maxRoll = 0;
            for (var i = 0; i < 300; i++)
            {
                var (_, _, r) = WindSway.Step(0, 0, 0, ref s0, ref s1, ref s2, 15, 1, () => 0.25f);
                maxRoll = Mathf.Max(maxRoll, Mathf.Abs(r));
            }
            // yaw 0: V = (-sin 0, cos 0) -> roll vai a 182 (1 grau) no pico; primeiro sinal +1 (rand 0,25 < 0,5)
            Assert.AreEqual(181, maxRoll, 1);
        }

        [Test]
        public void Vinha_SenoComPeriodo8MaxPorRate()
        {
            float t = 0;
            // Max 200, Rate 100, A 1: periodo 16 s; um quarto (4 s) da o pico
            var a = Sway.Axis(0, 100, 200, 1, ref t, 4f);
            Assert.AreEqual(200, a, 1);
            t = 0;
            Assert.AreEqual(0, Sway.Axis(0, 100, 200, 1, ref t, 8f), 1);
            // eixo desligado com Max < 1 ou Rate < 1
            t = 0;
            Assert.AreEqual(77, Sway.Axis(77, 0, 200, 1, ref t, 1f));
        }

        [Test]
        public void Flares_ExemploDoEstudo1024()
        {
            // sol em (700,150) numa tela 1024x768: R = 640, d = 300
            Assert.AreEqual(81, L2Sky.FlareSize(0.5f, 1024, 640, 300));
            Assert.AreEqual(61, L2Sky.FlareSize(0.38f, 1024, 640, 300));
            Assert.AreEqual(163, L2Sky.FlareSize(1f, 1024, 640, 300));
            Assert.AreEqual(326, L2Sky.FlareSize(2f, 1024, 640, 300));
            Assert.AreEqual(409, L2Sky.FlareSize(3f, 1024, 640, 300));
        }

        [Test]
        public void Projetor_CentroNoMeioDaTextura()
        {
            var fwd = new Vector3(0, 0, -1);
            var apex = new Vector3(0, 0, 1000);
            var k = 0.5f / Mathf.Tan(2.5f * Mathf.Deg2Rad);
            var uv = UeProjector.Project(new Vector3(0, 0, 0), apex, new Vector3(0, 1, 0), new Vector3(1, 0, 0), fwd, k);
            Assert.AreEqual(0.5f, uv.x, 1e-5f);
            Assert.AreEqual(0.5f, uv.y, 1e-5f);
            // a borda do frustum (meio angulo 2,5 graus) cai em u = 1
            var edge = UeProjector.Project(new Vector3(0, 1000 * Mathf.Tan(2.5f * Mathf.Deg2Rad), 0), apex, new Vector3(0, 1, 0), new Vector3(1, 0, 0), fwd, k);
            Assert.AreEqual(1f, edge.x, 1e-4f);
        }
    }
}
