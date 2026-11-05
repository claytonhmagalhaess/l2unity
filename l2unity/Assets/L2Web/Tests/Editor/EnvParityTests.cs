// Paridade do ambiente (spec 08) com l2anim/out/re/env/env_golden.json: 96 horas (a cada 15 min) nos 4 ambientes, cores
// exatas e floats a 1e-4; fases; direcao do sol/lua; EnvSetup; FGetHSV; relogio; mistura dos ambientes; neblina.
using System;
using System.IO;
using L2Web.Render;
using L2Web.Render.Env;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class EnvParityTests
    {
        static L2EnvData Data() => L2EnvData.Parse(File.ReadAllText(Path.Combine(Application.dataPath, "L2Web/Resources/env_config.json")));
        static JObject G => (JObject)Golden.Load("env_golden.json");

        [Test]
        public void Config_EnvSetup_FOG_WaterVolume()
        {
            var d = Data();
            Assert.IsTrue(d.IsClock);
            Assert.AreEqual(12f, d.StartTime);
            Assert.AreEqual(6f, d.TimeRatio);
            Assert.AreEqual("SkybackgroundColor", d.SkyBox);
            Assert.AreEqual("HazeRing_Final", d.HazeRing);
            Assert.AreEqual(new[] { "Cloud_Final", "StarField_Final01", "StarField_Final02" }, d.Clouds);
            Assert.AreEqual(0.1f, d.ShadowTick, 1e-6f);
            Assert.AreEqual(30f, d.SlopeSunAngle);
            Assert.AreEqual(0, d.SubLightNum);
            Assert.AreEqual(new[] { 1f, 1.5f, 2f, 2.5f, 4f }, d.FogStart);
            Assert.AreEqual(new[] { 4f, 5f, 6f, 7f, 10f }, d.FogEnd);
            Assert.AreEqual(8, d.TerrainShadowMaps);
            Assert.AreEqual(new Color32(39, 87, 126, 255), d.WaterFogColor);
            Assert.AreEqual(200f, d.WaterFogStart);
            Assert.AreEqual(3000f, d.WaterFogEnd);
            Assert.AreEqual(4, d.Envs.Count);
            // TimeEnv3: SkyBoxColor NUM=1 -> uma chave; HSVActorLight 25 chaves
            Assert.AreEqual(1, d.Envs[3].Colors["SkyBoxColor"].Length);
            Assert.AreEqual(25, d.Envs[0].Hsvs["HSVActorLight"].Length);
            Assert.AreEqual(5, d.Envs[0].Colors["SunColor"].Length);
        }

        [Test]
        public void FGetHSV_ValoresDaSpec()
        {
            // AmbientBrightness 30 -> 0,2773; 1 -> 0,0457 (Lobby.json); H=85 -> verde puro
            Assert.AreEqual(0.2773f, UeLight.Hsv(0, 255, 30).r, 1e-4f);
            Assert.AreEqual(0.0457f, UeLight.Hsv(0, 255, 1).r, 1e-4f);
            var g = UeLight.Hsv(85, 0, 255);
            Assert.AreEqual(0f, g.r, 1e-6f);
            Assert.AreEqual(0f, g.b, 1e-6f);
        }

        [Test]
        public void Curvas_96h_4ambientes_IguaisAoGolden()
        {
            var d = Data();
            var g = G;
            var horas = (JArray)g["horas"];
            var amb = (JObject)g["ambientes"];
            var n = 0;
            foreach (var kv in amb)
            {
                var env = int.Parse(kv.Key);
                var e = d.Envs[env];
                var ge = (JObject)kv.Value;
                for (var h = 0; h < horas.Count; h++)
                {
                    var t = (double)horas[h];
                    foreach (var sec in L2EnvData.ColorSections)
                    {
                        var exp = ge[sec][h];
                        var got = L2Env.CurveColor(e.Colors[sec], t);
                        if (exp.Type == JTokenType.Null) Assert.IsNull(got, $"env {env} {sec} t={t}");
                        else
                        {
                            Assert.IsNotNull(got, $"env {env} {sec} t={t}");
                            Assert.AreEqual(((int)exp[0], (int)exp[1], (int)exp[2]), ((int)got.Value.r, (int)got.Value.g, (int)got.Value.b), $"env {env} {sec} t={t}");
                        }
                        n++;
                    }
                    foreach (var sec in L2EnvData.ScaleSections)
                    {
                        var exp = ge[sec][h];
                        var got = L2Env.CurveScale(e.Scales[sec], t);
                        if (exp.Type == JTokenType.Null) Assert.IsNull(got, $"env {env} {sec} t={t}");
                        else Assert.AreEqual((double)exp, got.Value, 1e-4, $"env {env} {sec} t={t}");
                        n++;
                    }
                    foreach (var sec in L2EnvData.HsvSections)
                    {
                        var plano = ge[sec]["plano"][h];
                        var brilho = (double)ge[sec]["brilho"][h];
                        var (p, b) = L2Env.CurveHsv(e.Hsvs[sec], t);
                        Assert.AreEqual(brilho, b, 1e-4, $"env {env} {sec} brilho t={t}");
                        if (plano.Type == JTokenType.Null) Assert.AreEqual(Vector4.zero, p, $"env {env} {sec} t={t}");
                        else
                            for (var c = 0; c < 4; c++) Assert.AreEqual((double)plano[c], p[c], 1e-4, $"env {env} {sec} t={t} canal {c}");
                        n++;
                    }
                }
            }
            Assert.AreEqual(4 * 96 * 17, n);
        }

        [Test]
        public void Fase_EDirecao_96h()
        {
            var d = Data();
            var g = G;
            var horas = (JArray)g["horas"];
            for (var h = 0; h < horas.Count; h++)
            {
                var t = (double)horas[h];
                Assert.AreEqual((int)g["fase"][h], L2Env.PhaseOf(t), "fase t=" + t);
                var dir = L2Env.SunLightDirection(t, d.SlopeSunAngle);
                var exp = g["direcao_sol_lua"][h];
                for (var c = 0; c < 3; c++) Assert.AreEqual((double)exp[c], dir[c], 1e-4, $"direcao t={t} c={c}");
            }
        }

        [Test]
        public void Relogio_ClientSetTime_EAvancoPorRazao()
        {
            var d = Data();
            double clock = 1000;
            var env = new L2Env(d, () => clock);
            // construtor/Load: StartTime 12, razao 6, relogio ativo
            Assert.AreEqual(12.0, env.T, 1e-6);
            Assert.AreEqual(1, env.Phase);
            // ClientSetTime: 7h30 (450 min), razao 6 -> 1 h de jogo a cada 10 min reais
            env.OnClientSetTime(450, 6);
            Assert.AreEqual(7.5, env.T, 1e-5);
            Assert.AreEqual(0, env.Phase);
            Assert.IsTrue(env.ShadowDirty);
            clock += 600; // 10 min reais = 1 h de jogo
            env.UpdateNTime(0.016f);
            Assert.AreEqual(8.5, env.T, 1e-4);
            Assert.AreEqual(1, env.Phase);
            // meia-noite: 23:50 + 20 min de jogo = 00:10, fase 3
            env.OnClientSetTime(23 * 60 + 50, 6);
            clock += 200;
            env.UpdateNTime(0.016f);
            Assert.AreEqual(0.1667, env.T, 1e-3);
            Assert.AreEqual(3, env.Phase);
            // razao 0: relogio parado
            env.OnClientSetTime(600, 0);
            clock += 5000;
            env.UpdateNTime(0.016f);
            Assert.AreEqual(10.0, env.T, 1e-6);
            // IsSoundDay/Night
            env.OnClientSetTime(3 * 60, 0);
            Assert.IsFalse(env.IsSoundDay);
            Assert.IsTrue(env.IsSoundNight);
            env.OnClientSetTime(12 * 60, 0);
            Assert.IsTrue(env.IsSoundDay);
            Assert.IsFalse(env.IsSoundNight);
        }

        [Test]
        public void Ambientes_SSQInfo_TrocaImediata_EMisturaComABase()
        {
            var d = Data();
            double clock = 0;
            var env = new L2Env(d, () => clock);
            env.OnClientSetTime(12 * 60, 0);
            var g = G;
            var h12 = 48; // 12,0 h
            // ambiente 0: a propria curva
            var sky0 = env.GetEnvColor("SkyBoxColor");
            Assert.AreEqual((66, 124, 176), ((int)sky0.r, (int)sky0.g, (int)sky0.b));
            // SSQInfo 259 (RED_SKY) = bytes (3, 1): imediato -> curva do TimeEnv3; SkyBoxColor NUM=1 nao escreve -> (0,0,0)
            env.OnSSQInfo(3, 1);
            env.UpdateNTime(0.016f);
            Assert.AreEqual(3, env.CurrentEnv);
            Assert.AreEqual(1f, env.Delta);
            var sky3 = env.GetEnvColor("SkyBoxColor");
            Assert.AreEqual((0, 0, 0), ((int)sky3.r, (int)sky3.g, (int)sky3.b));
            foreach (var sec in new[] { "SunColor", "ActorAmbient", "HazeringColor", "CloudColor1" })
            {
                var exp = g["ambientes"]["3"][sec][h12];
                var got = env.GetEnvColor(sec);
                if (exp.Type == JTokenType.Null) Assert.AreEqual((0, 0, 0), ((int)got.r, (int)got.g, (int)got.b), sec);
                else Assert.AreEqual(((int)exp[0], (int)exp[1], (int)exp[2]), ((int)got.r, (int)got.g, (int)got.b), sec);
            }
            var (plane, bri) = env.GetEnvHsv("HSVActorLight", 12);
            Assert.AreEqual((double)g["ambientes"]["3"]["HSVActorLight"]["brilho"][h12], bri, 1e-4);
            Assert.AreEqual((double)g["ambientes"]["3"]["HSVActorLight"]["plano"][h12][0], plane.x, 1e-4);
            // 256 (REGULAR) de volta ao 0
            env.OnSSQInfo(0, 1);
            env.UpdateNTime(0.016f);
            var back = env.GetEnvColor("SkyBoxColor");
            Assert.AreEqual((66, 124, 176), ((int)back.r, (int)back.g, (int)back.b));
            // transicao gradual para o 1 (DUSK): no meio da subida, delta 0,5 -> base + 0,5 (atual - base), arredondado
            env.ChangeEnv(1, 0, 0.02f, 0.02f, 1, 0, 1);
            Assert.AreEqual(1, env.CurrentEnv);
            Assert.AreEqual(0, env.PreviousEnv);
            Assert.AreEqual(0.5f, env.CalcEnvDelta(12.01f), 1e-4f);
            Assert.AreEqual(1f, env.CalcEnvDelta(12.02f), 1e-4f);
            Assert.AreEqual(1f, env.CalcEnvDelta(13f), 1e-4f); // fora de [inicio, fim] = peso alvo (1)
            var b = env.EnvCurveColor(0, "SkyBoxColor", 12.01);
            var c = env.EnvCurveColor(1, "SkyBoxColor", 12.01);
            env.UpdateNTime(0); // delta recalculado em T = 12 (inicio) -> 0: no inicio a cor e a base
            Assert.AreEqual(0f, env.Delta, 1e-6f);
            var mid = env.GetEnvColor("SkyBoxColor", 12.0);
            Assert.AreEqual(((int)b.r, (int)b.g, (int)b.b), ((int)mid.r, (int)mid.g, (int)mid.b));
            Assert.AreEqual(L2Env.RoundEven((c.r - b.r) * 0.5f + b.r), L2Env.RoundEven((c.r - b.r) * 0.5f + b.r));
        }

        [Test]
        public void Neblina_NivelPorAlcance_EFaixasX2048()
        {
            var d = Data();
            var env = new L2Env(d, () => 0);
            Assert.AreEqual(1, L2Env.FogLevel(4.9f, false));
            Assert.AreEqual(1, L2Env.FogLevel(9f, true));
            Assert.AreEqual(2, L2Env.FogLevel(5f, false));
            Assert.AreEqual(3, L2Env.FogLevel(6.5f, false));
            Assert.AreEqual(4, L2Env.FogLevel(7.99f, false));
            Assert.AreEqual(5, L2Env.FogLevel(8f, false));
            Assert.AreEqual((2048f, 8192f), env.FogRangeUu(1));
            Assert.AreEqual((8192f, 20480f), env.FogRangeUu(5));
        }

        [Test]
        public void RoundEven_ComoOFistp()
        {
            Assert.AreEqual(170, L2Env.RoundEven(170.5));
            Assert.AreEqual(172, L2Env.RoundEven(171.5));
            Assert.AreEqual(171, L2Env.RoundEven(170.6));
        }
    }
}
