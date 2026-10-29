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
        public void Ceu_AnelDeNevoa_TransparenteEmCimaOpacoNoHorizonte()
        {
            // lobby_sky_re.md 2.2: anel Brush279, TV -8 texels/uu no WhiteRing 512x128 -> v (UE) 0,016 no topo (z 24482,67) e
            // 0,757 embaixo (z 24470,8); linhas 2 e 97 do PNG, alfa 0 e 255. Com a UV invertida o anel cobria o ceu de amarelo.
            var sky = Cache("map/Lobby_sky.json");
            var png = Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "raw", "L2_Skies", "Texture", "WhiteRing.png");
            if (!File.Exists(png)) Assert.Ignore("sem WhiteRing.png");
            var tex = new Texture2D(2, 2, TextureFormat.RGBA32, false);
            Assert.IsTrue(tex.LoadImage(File.ReadAllBytes(png)));
            tex.wrapMode = TextureWrapMode.Repeat;
            tex.filterMode = FilterMode.Point;
            float topA = -1, bottomA = -1;
            foreach (JObject p in (JArray)sky["Brush279/Model283"]["polys"])
            {
                var vs = (JArray)p["verts"];
                var uvs = (JArray)p["uv"];
                if (vs.Count != 3 || (float)vs[0][2] == (float)vs[1][2] && (float)vs[1][2] == (float)vs[2][2]) continue; // tampa
                for (var i = 0; i < 3; i++)
                {
                    var uv = L2Sky.Uv((float)uvs[i][0], (float)uvs[i][1]);
                    var a = tex.GetPixelBilinear(uv.x, uv.y).a * 255;
                    if ((float)vs[i][2] > 24482) topA = a;
                    else bottomA = a;
                }
                break;
            }
            Object.DestroyImmediate(tex);
            Assert.AreEqual(0, topA, 1, "topo do anel");
            Assert.AreEqual(255, bottomA, 1, "base do anel");
            Assert.AreEqual(new Vector2(0.5f, 0.75f), L2Sky.Uv(0.5f, 0.25f));
        }

        [Test]
        public void Corona_CorSemBrilhoETamanhoAngular()
        {
            // FCoronaRender::RenderCoronas 0x10658690 [O]: cor = matiz + (1 - matiz) Sat/255 (sem LightBrightness); as 13 coronas
            // do Lobby (Hue 0, Sat 255, Brightness 64) saem brancas 1,0 (antes FGetHSV x 64/255 = 0,21)
            Assert.AreEqual(Color.white, Corona.ColorOf(0, 255));
            Assert.AreEqual(new Color(1, 0, 0, 1), Corona.ColorOf(0, 0));
            Assert.AreEqual(new Color(0, 1, 0, 1), Corona.ColorOf(85, 0));
            Assert.AreEqual(new Color(0, 0, 1, 1), Corona.ColorOf(170, 0));
            // metade da saturacao: matiz + (1 - matiz) / 2
            Assert.AreEqual(0.5f, Corona.ColorOf(0, 255 / 2).g, 0.01f);
            // meia aresta = clamp(clamp(d/1000; 0,01; 10) DrawScale 512; Min; Max): Light38 (DrawScale 0,22) a 1000 UU = 112,64 UU
            Assert.AreEqual(112.64f, Corona.HalfSize(1000, 0.22f), 1e-3f);
            Assert.AreEqual(225.28f, Corona.HalfSize(2000, 0.22f), 1e-3f);
            Assert.AreEqual(0.01f * 0.22f * 512, Corona.HalfSize(5, 0.22f), 1e-4f);
            Assert.AreEqual(1000f, Corona.HalfSize(20000, 0.22f)); // MaxCoronaSize
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
