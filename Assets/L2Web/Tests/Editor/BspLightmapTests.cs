// Lightmap do BSP (scratchpad/bsp_lightmap_re.md; Docs/tools/export_bsplm.py -> cache/bsp/Lobby_lm.png + Lobby_lm_uv2.json):
// o atlas 512 da hora 12 (k = 4) e o TEXCOORD_1 por material na ordem dos vertices do glb do porte.
using System.IO;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class BspLightmapTests
    {
        static string Bsp(string f) => Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "bsp", f);

        [Test]
        public void Uv2_PorMaterial_CasaComOGlb()
        {
            if (!File.Exists(Bsp("Lobby_lm_uv2.json")) || !File.Exists(Bsp("Lobby.glb"))) Assert.Ignore("sem o lightmap do Lobby");
            var j = JObject.Parse(File.ReadAllText(Bsp("Lobby_lm_uv2.json")));
            Assert.AreEqual(512, (int)j["atlas"]);
            Assert.AreEqual(12f, (float)j["hour"]);
            // cabecalho do glb: materiais e contagem de vertices por primitivo (um accessor POSITION por primitivo)
            using var fs = File.OpenRead(Bsp("Lobby.glb"));
            var hdr = new byte[20];
            fs.Read(hdr, 0, 20);
            var n = System.BitConverter.ToInt32(hdr, 12);
            var buf = new byte[n];
            fs.Read(buf, 0, n);
            var g = JObject.Parse(System.Text.Encoding.UTF8.GetString(buf));
            var prims = (JArray)g["meshes"][0]["primitives"];
            var mats = (JArray)j["materials"];
            Assert.AreEqual(prims.Count, mats.Count);
            var floor = 0;
            for (var i = 0; i < prims.Count; i++)
            {
                var acc = (int)prims[i]["attributes"]["POSITION"];
                var count = (int)g["accessors"][acc]["count"];
                var name = (string)g["materials"][(int)prims[i]["material"]]["name"];
                Assert.AreEqual(name, (string)mats[i]["name"], "primitivo " + i);
                Assert.AreEqual(count, ((JArray)mats[i]["uv2"]).Count, name);
                if (name.EndsWith("GL_CA_floortile"))
                    foreach (var uv in (JArray)mats[i]["uv2"])
                    {
                        // o piso do salao tem lightmap em todos os vertices (dentro do atlas 0..1)
                        Assert.IsTrue((float)uv[0] > 0 && (float)uv[0] < 1 && (float)uv[1] > 0 && (float)uv[1] < 1);
                        floor++;
                    }
            }
            Assert.AreEqual(327, floor);
        }

        [Test]
        public void Atlas_512ComLuzNoPiso()
        {
            if (!File.Exists(Bsp("Lobby_lm.png"))) Assert.Ignore("sem o atlas");
            var t = new Texture2D(2, 2);
            Assert.IsTrue(t.LoadImage(File.ReadAllBytes(Bsp("Lobby_lm.png"))));
            Assert.AreEqual(512, t.width);
            Assert.AreEqual(512, t.height);
            // o atlas nao e todo o ambiente 35: ha texels mais claros (tochas e Light24) e nenhum acima de 255 (clamp)
            var px = t.GetPixels32();
            int bright = 0;
            foreach (var p in px) if (p.r > 60 || p.g > 60 || p.b > 60) bright++;
            Assert.Greater(bright, 1000);
            Object.DestroyImmediate(t);
        }
    }
}
