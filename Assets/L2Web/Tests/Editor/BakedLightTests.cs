// Luz embutida das malhas estaticas (UStaticMeshInstance; scratchpad/baked_light_re.md; Docs/tools/export_smlight.py ->
// cache/map/Lobby_smlight.json). A conta do D3D: pixel = sat(2 tex sat(vc + amb)) em gama (L2WebBaked.shader).
using System;
using System.IO;
using L2Web.Render;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class BakedLightTests
    {
        static JArray Table()
        {
            var p = Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "map", "Lobby_smlight.json");
            if (!File.Exists(p)) Assert.Ignore("sem Lobby_smlight.json");
            return JArray.Parse(File.ReadAllText(p));
        }

        [Test]
        public void Tabela_AtoresDoSalaoComInstanciaEAmbiente35()
        {
            var t = Table();
            int hall = 0, usable = 0, unlit = 0;
            foreach (JObject o in t)
            {
                if ((string)o["zone"] != "ZoneInfo2") continue;
                hall++;
                if ((bool)o["instance_usable"]) usable++;
                // AmbientVector 0,2773 -> FColor 70 -> D3DRS_AMBIENT 35; bUnlit (8 chamas) -> ambiente (255,255,255)
                if ((bool)o["unlit"]) unlit++;
                Assert.AreEqual((bool)o["unlit"] ? 255 : 35, (int)o["d3d_ambient"][0], (string)o["actor"]);
                var bytes = Convert.FromBase64String((string)o["colors"]);
                Assert.AreEqual((int)o["nverts"] * 4, bytes.Length, (string)o["actor"]);
            }
            Assert.AreEqual(32, hall);
            Assert.AreEqual(32, usable);
            Assert.AreEqual(8, unlit);
        }

        [Test]
        public void Tabela_FlorestaComSol60EChamasUnlit()
        {
            var t = Table();
            JObject tree = null;
            int flames = 0, flamesUnlit = 0, noInstance = 0;
            foreach (JObject o in t)
            {
                if ((string)o["actor"] == "StaticMeshActor0") tree = o;
                if ((string)o["mesh"] == "FX_E_S.Flameset.Default_Flame01")
                {
                    flames++;
                    if ((bool)o["unlit"]) flamesUnlit++;
                }
                if (!(bool)o["instance_usable"]) noInstance++;
            }
            Assert.IsNotNull(tree);
            Assert.AreEqual("ZoneInfo0", (string)tree["zone"]);
            // zona com sol: GetStaticMeshAmbientColor(12h) = 120 >> 1
            Assert.AreEqual(60, (int)tree["d3d_ambient"][0]);
            Assert.AreEqual(301, (int)tree["nverts"]);
            // 21 chamas, 19 bUnlit (ambiente branco) e 2 iluminadas; 189 + 5 atores sem instancia usavel
            Assert.AreEqual(21, flames);
            Assert.AreEqual(19, flamesUnlit);
            Assert.AreEqual(194, noInstance);
        }

        [Test]
        public void MalhaDeCores_SoComAMesmaContagem()
        {
            var m = new Mesh();
            m.vertices = new[] { Vector3.zero, Vector3.one, Vector3.up };
            var ok = BakedLight.ColorMesh(m, "a", new[] { new Color32(1, 2, 3, 255), new Color32(4, 5, 6, 255), new Color32(7, 8, 9, 255) });
            Assert.IsNotNull(ok);
            Assert.AreEqual(3, ok.vertexCount);
            Assert.AreEqual(new Color32(4, 5, 6, 255), ok.colors32[1]);
            Assert.IsNull(BakedLight.ColorMesh(m, "b", new Color32[2]));
            UnityEngine.Object.DestroyImmediate(m);
        }

        [Test]
        public void Shader_Existe()
        {
            Assert.IsNotNull(Shader.Find("L2Web/Baked"));
        }
    }
}
