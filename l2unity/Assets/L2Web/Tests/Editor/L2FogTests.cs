// L2FogInfo (spec 08 Apendice A, l2foginfo_re.md): peso 3D, chaves por hora truncadas, dobra sobre a base e transicao.
// Dados do L2FogInfo74 do mapa 18_19 (inventario).
using L2Web.Render.Env;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class L2FogTests
    {
        static FogActor Fog74() => new()
        {
            Name = "L2FogInfo74", Loc = Vector3.zero, AffectMin = 2000, AffectMax = 2500,
            Ranges = new (float, float)[] { (0, 3000), (0, 4000), (0, 5000), (0, 6000), (0, 7000) },
            Colors = new[]
            {
                new FogKey { Time = 0, Fog = new Color32(71, 85, 97, 255), Sky = new Color32(40, 49, 70, 255), Clouds = new[] { new Color32(68, 79, 115, 255) }, Hazes = new[] { new Color32(48, 62, 84, 255) } },
                new FogKey { Time = 5, Fog = new Color32(58, 70, 80, 255), Sky = new Color32(40, 49, 70, 255), Clouds = new[] { new Color32(75, 87, 126, 255) }, Hazes = new[] { new Color32(48, 62, 84, 255) } },
                new FogKey { Time = 6, Fog = new Color32(111, 117, 142, 255), Sky = new Color32(81, 75, 146, 255), Clouds = new[] { new Color32(63, 72, 105, 255) }, Hazes = new[] { new Color32(139, 108, 145, 255) } },
                new FogKey { Time = 7, Fog = new Color32(119, 133, 136, 255), Sky = new Color32(155, 155, 155, 255), Clouds = new[] { new Color32(73, 97, 88, 255) }, Hazes = new[] { new Color32(119, 145, 141, 255) } },
                new FogKey { Time = 19, Fog = new Color32(119, 133, 136, 255), Sky = new Color32(155, 155, 155, 255), Clouds = new[] { new Color32(73, 97, 88, 255) }, Hazes = new[] { new Color32(119, 145, 141, 255) } },
                new FogKey { Time = 23, Fog = new Color32(71, 85, 97, 255), Sky = new Color32(40, 49, 70, 255), Clouds = new[] { new Color32(68, 79, 115, 255) }, Hazes = new[] { new Color32(48, 62, 84, 255) } },
            },
        };

        [Test]
        public void Peso_PorDistancia3D()
        {
            Assert.AreEqual(1f, L2Fog.Weight(1999, 2000, 2500, 6));
            Assert.AreEqual(0f, L2Fog.Weight(2500, 2000, 2500, 6));
            Assert.AreEqual(0.5f, L2Fog.Weight(2250, 2000, 2500, 6), 1e-6f);
            Assert.AreEqual(0f, L2Fog.Weight(100, 2000, 2500, 1)); // Colors.Num <= 1
        }

        [Test]
        public void Chaves_PorHora_Truncadas()
        {
            var k = L2Fog.Interp(Fog74().Colors, 5.5);
            // entre 5 h (58,70,80) e 6 h (111,117,142): f = 0,5 -> 84,5 -> 84 (trunc), 93,5 -> 93, 111
            Assert.AreEqual((84, 93, 111), ((int)k.Fog.r, (int)k.Fog.g, (int)k.Fog.b));
            // depois da ultima chave (23 h) liga a Time[0] + 24: 23,5 h e o meio de (71,85,97) -> (71,85,97)
            var w = L2Fog.Interp(Fog74().Colors, 23.5);
            Assert.AreEqual((71, 85, 97), ((int)w.Fog.r, (int)w.Fog.g, (int)w.Fog.b));
            Assert.AreEqual(1, k.Clouds.Length);
            Assert.AreEqual((69, 79, 115), ((int)k.Clouds[0].r, (int)k.Clouds[0].g, (int)k.Clouds[0].b));
        }

        [Test]
        public void Dobra_SobreABase_ENivel()
        {
            var a = Fog74();
            var baseState = new FogState { Start = 8192, End = 20480, Sky = new Color32(66, 124, 176, 255), Clouds = new[] { new Color32(255, 255, 255, 255) }, Hazes = new[] { new Color32(188, 203, 224, 255) } };
            // dentro do AffectRange.Min: peso 1 -> FogRange do nivel 5 (0..7000) e as cores das 12 h (chave 7..19: iguais)
            var s = L2Fog.Fold(new[] { a }, new Vector3(0, 0, 1000), 5, 12, baseState, out var any);
            Assert.IsTrue(any);
            Assert.AreEqual(0f, s.Start, 1e-3f);
            Assert.AreEqual(7000f, s.End, 1e-3f);
            Assert.AreEqual((119, 133, 136), ((int)s.Fog.r, (int)s.Fog.g, (int)s.Fog.b));
            Assert.AreEqual((155, 155, 155), ((int)s.Sky.r, (int)s.Sky.g, (int)s.Sky.b));
            // nivel 1 -> FogRange1 (0..3000); meio peso (2250 UU): start 4096, end (20480 + 0,5 (3000 - 20480)) = 11740
            s = L2Fog.Fold(new[] { a }, new Vector3(2250, 0, 0), 1, 12, baseState, out any);
            Assert.AreEqual(4096f, s.Start, 1e-2f);
            Assert.AreEqual(11740f, s.End, 1e-2f);
            // cor da neblina: base cinza 127 -> trunc(127 + 0,5 (119 - 127)) = 123
            Assert.AreEqual(123, (int)s.Fog.r);
            // fora do AffectRange.Max: nao entra
            s = L2Fog.Fold(new[] { a }, new Vector3(3000, 0, 0), 1, 12, baseState, out any);
            Assert.IsFalse(any);
        }

        [Test]
        public void Transicao_SoAoEntrarOuSair()
        {
            var tr = new L2Fog.Transition { Duration = 1 };
            tr.Current = new FogState { Start = 100, End = 200, Fog = new Color32(0, 0, 0, 255) };
            var target = new FogState { Start = 0, End = 50, Fog = new Color32(100, 100, 100, 255) };
            tr.SetTarget(target, true);
            var mid = tr.Step(0.5f);
            Assert.AreEqual(50f, mid.Start, 1e-3f);
            Assert.AreEqual(125f, mid.End, 1e-3f);
            var end = tr.Step(0.6f);
            Assert.AreEqual(0f, end.Start, 1e-3f);
            // alvo novo sem mudar de estado: sem transicao nova
            tr.SetTarget(new FogState { Start = 10, End = 60, Fog = target.Fog }, true);
            Assert.AreEqual(10f, tr.Step(0.016f).Start, 1e-3f);
        }
    }
}
