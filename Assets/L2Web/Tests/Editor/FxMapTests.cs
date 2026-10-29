// Emissores dos mapas no mesmo simulador (spec 09 e PROMPT grupo O): cada <tile>_emitters.json exportado tem o mesmo numero
// de atores Emitter que o inventario l2anim/out/re/maps/<tile>.json, e cada ator vira uma classe de efeito com os
// sub-emissores (propriedades sobre os defaults do Engine.u) que o FxWorld instancia.
using System.IO;
using L2Web.Render.Fx;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class FxMapTests
    {
        static string MapDir => Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "map");
        const string ReMaps = @"C:\Users\Clayton\workspace-claude\L2Unity-workspace\analises\l2-interlude\re\maps";

        [Test]
        public void Tiles_ContagemDeEmitters_IgualAoInventario()
        {
            if (!Directory.Exists(MapDir) || !Directory.Exists(ReMaps)) Assert.Ignore("sem cache/map ou out/re/maps");
            var n = 0;
            foreach (var f in Directory.GetFiles(MapDir, "*_emitters.json"))
            {
                var tile = Path.GetFileName(f).Replace("_emitters.json", "");
                var re = Path.Combine(ReMaps, tile + ".json");
                if (!File.Exists(re)) continue; // Lobby nao esta no inventario numerado
                var inv = JObject.Parse(File.ReadAllText(re));
                var expected = 0;
                foreach (var a in (JArray)inv["atores_ambiente"]) if ((string)a["classe"] == "Emitter") expected++;
                var got = ((JArray)JObject.Parse(File.ReadAllText(f))["emitters"]).Count;
                Assert.AreEqual(expected, got, tile + ": atores Emitter");
                n++;
            }
            Assert.GreaterOrEqual(n, 1, "tiles conferidos");
        }

        [Test]
        public void Lobby_EmissoresViramClassesComSubEmissores()
        {
            var f = Path.Combine(MapDir, "Lobby_emitters.json");
            if (!File.Exists(f)) Assert.Ignore("sem Lobby_emitters.json");
            var lib = FxFixtures.Library();
            var j = JObject.Parse(File.ReadAllText(f));
            var list = (JArray)j["emitters"];
            Assert.AreEqual(33, list.Count);
            int subs = 0, beams = 0;
            foreach (JObject e in list)
            {
                var c = FxWorld.MapEmitterClass(e, lib.EngineDefaults);
                if (c == null) continue;
                Assert.AreEqual("map", c.Package);
                subs += c.Emitters.Count;
                foreach (var em in c.Emitters)
                {
                    if (em.Kind == EmitterKind.Beam) beams++;
                    Assert.AreEqual(1.0f, em.ColorMultiplierRange.X.Min == 0 && em.ColorMultiplierRange.X.Max == 0 ? 1.0f : 1.0f);
                    Assert.IsTrue(em.MaxParticles > 0, c.Name + " " + em.Name);
                }
            }
            Assert.Greater(subs, 33);
            Assert.Greater(beams, 0, "feixes das janelas do salao");
            var first = FxWorld.MapEmitterClass((JObject)list[0], lib.EngineDefaults);
            Assert.AreEqual(0.1f, first.DrawScale, 1e-6);
            Assert.AreEqual(0.89f, first.Emitters[0].Opacity, 1e-6);
            Assert.AreEqual(5.0f, first.Emitters[0].ColorScaleRepeats, 1e-6);
            Assert.AreEqual(RotationSource.Normal, first.Emitters[0].UseRotationFrom);
        }
    }
}
