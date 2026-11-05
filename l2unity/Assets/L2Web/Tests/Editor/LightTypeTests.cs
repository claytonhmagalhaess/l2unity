// Spec 08 secao 5.1 (FDynamicLight::Update): fator por LightType; secao 6: indice e mistura dos mapas de intensidade do terreno.
using L2Web.Render;
using L2Web.Render.Env;
using L2Web.World;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class LightTypeTests
    {
        [Test]
        public void Fator_PorTipo()
        {
            Assert.AreEqual(1f, UeLight.TypeFactor(1, 3.7f, 0, 32));
            Assert.AreEqual(0f, UeLight.TypeFactor(0, 3.7f, 0, 32));
            Assert.AreEqual(0f, UeLight.TypeFactor(6, 3.7f, 0, 32));
            // Pulse: 0,6 + 0,39 sen; fase 0 em t = 0 -> 0,6; um quarto de volta -> 0,99
            Assert.AreEqual(0.6f, UeLight.TypeFactor(2, 0, 0, 32), 1e-5f);
            Assert.AreEqual(0.99f, UeLight.TypeFactor(2, 0, 64, 32), 1e-5f); // LightPhase 64 << 8 = 16384 = 90 graus
            // SubtlePulse: 0,9 + 0,09 sen
            Assert.AreEqual(0.9f, UeLight.TypeFactor(7, 0, 0, 32), 1e-5f);
            Assert.AreEqual(0.99f, UeLight.TypeFactor(7, 0, 64, 32), 1e-5f);
            // Flicker: abaixo de 0,5 vira 0
            Assert.AreEqual(0f, UeLight.TypeFactor(4, 0, 0, 32, () => 0.3f));
            Assert.AreEqual(0.8f, UeLight.TypeFactor(4, 0, 0, 32, () => 0.8f), 1e-6f);
            // FadeOut: min((1 - LifeFraction) 1,5, 1)
            Assert.AreEqual(1f, UeLight.TypeFactor(10, 0, 0, 32, null, 0.2f));
            Assert.AreEqual(0.3f, UeLight.TypeFactor(10, 0, 0, 32, null, 0.8f), 1e-5f);
            // o termo de tempo do Pulse avanca 35 x 65536 / periodo por segundo [I]
            Assert.AreEqual(35 * 65536 / 32 & 0xffff, UeLight.PulsePhase(1f, 0, 32));
        }

        [Test]
        public void LuzPontual_DosAtores()
        {
            // raio 64 -> 25 x 65 = 1625 UU = 16,25 m; a luz leva a cor x fator com intensidade 1 (o shader aplica a queda)
            Assert.AreEqual(16.25f, UeLight.WorldRadius(64) * Coords.Scale, 1e-4f);
            var go = new UnityEngine.GameObject("luz");
            try
            {
                var li = go.AddComponent<UnityEngine.Light>();
                UeLight.SetPoint(li, new UnityEngine.Color(0.5f, 0.25f, 0.125f), 0.5f);
                Assert.AreEqual(1f, li.intensity);
                Assert.AreEqual(0.25f, li.color.r, 1e-6f);
                Assert.AreEqual(0.0625f, li.color.b, 1e-6f);
            }
            finally
            {
                UnityEngine.Object.DestroyImmediate(go);
            }
            Assert.AreEqual(3, UeLight.MaxLightsPerActor);
            // zona com sol: D3DRS_AMBIENT = GetActorAmbientColor(t) >> 1, x2 do MODULATE2X: 70 e 71 -> 70/255
            var a = L2EnvScene.ActorAmbientUnits(new UnityEngine.Color32(70, 71, 255, 255));
            Assert.AreEqual(70 / 255f, a.x, 1e-6f);
            Assert.AreEqual(70 / 255f, a.y, 1e-6f);
            Assert.AreEqual(254 / 255f, a.z, 1e-6f);
            // zona sem sol (salao): AmbientColor = floor(255 x 0,2773) = 70 inteiro, x2 -> 140/255
            var z = L2EnvScene.ZoneAmbientUnits(new UnityEngine.Color(0.2773f, 0.2773f, 0.2773f, 1));
            Assert.AreEqual(140 / 255f, z.x, 1e-6f);
            Assert.AreEqual(0f, L2EnvScene.ZoneAmbientUnits(UnityEngine.Color.black).x);
            Assert.AreEqual(2f, L2EnvScene.ZoneAmbientUnits(new UnityEngine.Color(2, 2, 2, 1)).x, 1e-6f);
        }

        [Test]
        public void MaterialDoAtor_SoDifuso()
        {
            Assert.IsNotNull(ActorMaterial.Shader, "L2Web/Actor");
            var gltf = UnityEngine.Shader.Find("Shader Graphs/glTF-pbrMetallicRoughness");
            if (gltf == null) Assert.Ignore("sem o shader do glTFast");
            var src = new UnityEngine.Material(gltf) { name = "pele" };
            var tex = new UnityEngine.Texture2D(2, 2);
            try
            {
                src.SetTexture("baseColorTexture", tex);
                src.SetFloat("alphaCutoff", 0.3f);
                src.EnableKeyword(ActorMaterial.AlphaTestKeyword);
                var m = ActorMaterial.For(src);
                if (!ActorMaterial.Enabled) Assert.Ignore("-l2pbr");
                Assert.AreEqual(ActorMaterial.Shader, m.shader);
                Assert.AreSame(tex, m.GetTexture("_BaseMap"));
                Assert.AreEqual(0.3f, m.GetFloat("_Cutoff"), 1e-6f);
                Assert.IsTrue(m.IsKeywordEnabled(ActorMaterial.AlphaTestKeyword));
                Assert.AreEqual((int)UnityEngine.Rendering.RenderQueue.AlphaTest, m.renderQueue);
                // um por material de origem
                Assert.AreSame(m, ActorMaterial.For(src));
                Assert.AreSame(m, ActorMaterial.For(m));
            }
            finally
            {
                UnityEngine.Object.DestroyImmediate(src);
                UnityEngine.Object.DestroyImmediate(tex);
            }
        }

        [Test]
        public void Terreno_IndiceEMisturaDosMapas()
        {
            Assert.AreEqual(1.5f, L2Env.ShadowMapHour(0, 8));
            Assert.AreEqual(22.5f, L2Env.ShadowMapHour(7, 8));
            var (i0, i1, f) = L2Env.ShadowMapIndex(12, 8);
            Assert.AreEqual((3, 4), (i0, i1));
            Assert.AreEqual(0.5f, f, 1e-6f);
            (i0, i1, f) = L2Env.ShadowMapIndex(23, 8);
            Assert.AreEqual((7, 0), (i0, i1));
            Assert.AreEqual(0.5f / 3, f, 1e-6f);
            // antes do primeiro mapa (1,5 h): N-1 misturado com o 0 atravessando a meia-noite
            (i0, i1, f) = L2Env.ShadowMapIndex(1, 8);
            Assert.AreEqual((7, 0), (i0, i1));
            Assert.AreEqual(2.5f / 3, f, 1e-6f);
            Assert.AreEqual(128, L2Env.BlendIntensity(100, 156, 0.5f));
            Assert.AreEqual(100, L2Env.BlendIntensity(100, 156, 0));
        }
    }
}
