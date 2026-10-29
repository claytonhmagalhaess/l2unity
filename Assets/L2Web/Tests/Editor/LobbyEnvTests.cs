// G8 (lobby, lobby_env_plan P1/P3/P4): FGetHSV (spec 08 secao 3.1), os materiais de efeito exportados do .utx
// (Docs/tools/export_fxmat.py -> cache/statics/fxmat.json) e as zonas/luzes do Lobby.unr (export_lobby_env.py).
using System.IO;
using L2Web.Render;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.Rendering;

namespace L2Web.Tests
{
    public class LobbyEnvTests
    {
        static JObject Cache(string rel)
        {
            var p = Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", rel);
            if (!File.Exists(p)) Assert.Ignore("sem " + rel);
            return JObject.Parse(File.ReadAllText(p));
        }

        [Test]
        public void Hsv_BrilhoDoAmbienteDaZona()
        {
            // AmbientBrightness 30 do ZoneInfo2 -> AmbientVector 0,2773; LevelInfo (1) -> 0,0457 (Lobby.json)
            Assert.AreEqual(0.2773f, UeLight.Hsv(0, 255, 30).r, 1e-4f);
            Assert.AreEqual(0.0457f, UeLight.Hsv(0, 255, 1).g, 1e-4f);
            // saturacao 0 = matiz pura; terco do meio: verde puro em H = 85
            var c = UeLight.Hsv(85, 0, 255);
            Assert.AreEqual(0, c.r, 1e-6f);
            Assert.Greater(c.g, 0.8f);
            Assert.AreEqual(0, c.b, 1e-6f);
            Assert.AreEqual(25f * 11, UeLight.WorldRadius(10));
            Assert.IsFalse(UeLight.Lights(6));
            Assert.IsTrue(UeLight.Lights(1));
        }

        [Test]
        public void Chama_16QuadrosA30fps_Brighten()
        {
            var t = Cache("statics/fxmat.json");
            var f = (JObject)t["Default_Flame_Final"];
            Assert.AreEqual("brighten", (string)f["blend"]);
            Assert.AreEqual(16, ((JArray)f["frames"]).Count);
            Assert.AreEqual(30f, (float)f["fps"]);
            StringAssert.EndsWith("de_fire_0015.png", (string)f["frames"][15]);
            var glow = (JObject)t["de_fire_glow_shader"];
            Assert.AreEqual("translucent", (string)glow["blend"]);
            Assert.IsTrue((bool)glow["mod2x"]);
            Assert.AreEqual(0.4f, (float)glow["fade"]["period"], 1e-6f);
            var water = (JObject)t["waterfall001_shader"];
            Assert.AreEqual(8, ((JArray)water["frames"]).Count);
            Assert.AreEqual(20f, (float)water["fps"]);
        }

        [Test]
        public void MatAnim_QuadroFadeEBlend()
        {
            Assert.AreEqual(0, MatAnim.Frame(0, 30, 16));
            Assert.AreEqual(15, MatAnim.Frame(15.5f / 30f, 30, 16));
            Assert.AreEqual(0, MatAnim.Frame(16f / 30f + 1e-4f, 30, 16));
            Color c1 = new Color(0, 0, 0), c2 = new Color(1, 1, 1);
            // fase 0: meio do caminho; um quarto do periodo depois: Color2
            Assert.AreEqual(0.5f, MatAnim.FadeColor(c1, c2, 0.4f, 0, 0).r, 1e-5f);
            Assert.AreEqual(1f, MatAnim.FadeColor(c1, c2, 0.4f, 0, 0.1f).r, 1e-5f);
            Assert.AreEqual((BlendMode.One, BlendMode.One), MatAnim.Blend("translucent"));
            Assert.AreEqual((BlendMode.One, BlendMode.OneMinusSrcColor), MatAnim.Blend("brighten"));
            Assert.AreEqual((BlendMode.SrcAlpha, BlendMode.OneMinusSrcAlpha), MatAnim.Blend("alpha"));
        }

        [Test]
        public void CataVento_PhysRotating1500PorSegundo()
        {
            var m = Cache("map/Lobby_movers.json");
            JToken mill = null;
            foreach (var o in (JArray)m["movers"])
                if ((string)o["mesh"] == "Dion_SV_S.DS_Windmill_propeller") mill = o;
            Assert.IsNotNull(mill);
            Assert.AreEqual(5, (int)mill["physics"]);
            Assert.AreEqual(new[] { 1500, 0, 0 }, mill["rotationRate"].ToObject<int[]>());
            // AActor::physicsRotation: delta inteiro por quadro e fixedTurn com bFixedRotationDir (& 0xFFFF)
            Assert.AreEqual(25, LobbyMovers.Delta(1500, 1f / 60));
            Assert.AreEqual((-10672 + 25) & 0xFFFF, LobbyMovers.FixedTurn(-10672, 25));
            Assert.AreEqual(5, LobbyMovers.FixedTurn(65530, 11));
            Assert.AreEqual(100, LobbyMovers.FixedTurn(100, 0));
        }

        [Test]
        public void Zonas_SalaoSemSolComNeblinaRoxa()
        {
            var e = Cache("map/Lobby_env.json");
            JToken hall = null, forest = null;
            foreach (var z in (JArray)e["zones"])
            {
                if ((string)z["name"] == "ZoneInfo2") hall = z;
                if ((string)z["name"] == "ZoneInfo0") forest = z;
            }
            Assert.IsNotNull(hall);
            Assert.IsFalse((bool)hall["sunAffect"]);
            Assert.AreEqual(new[] { 65, 51, 70 }, hall["fogColor"].ToObject<int[]>());
            Assert.AreEqual(4000f, (float)hall["fogEnd"]);
            Assert.AreEqual(new[] { 210, 208, 196 }, forest["fogColor"].ToObject<int[]>());
            var lights = (JArray)e["lights"];
            Assert.AreEqual(37, lights.Count);
            var coronas = 0;
            foreach (var l in lights)
                if ((bool)l["corona"]) coronas++;
            Assert.AreEqual(13, coronas);
        }
    }
}
