// Dados do ambiente do cliente (spec 08 secao 1): Env.int e TimeEnv0..3.INT (Lineage2Ver111: cabecalho de 28 bytes, XOR
// 0xAC, ANSI cp949), ja convertidos em Resources/env_config.json por l2anim/scripts/env_parse.py (o Parse(texto, "CHAVE=")
// do engine procura cada chave no texto inteiro: a linha "(T=10  Hue=1,Sat=255,Bri=180)" sem virgula ainda da T=10 e Hue=1).
// Padroes do UL2NTimeLight::Load (LoadColor/LoadScale/LoadHSV): T ausente = indice da chave; cor, S e Bri ausentes = 255.
// So as chaves 1..NUM entram (TimeEnv3 SkyBoxColor: NUM=1 e 25 chaves escritas; so a primeira vale).
using System;
using System.Collections.Generic;
using Newtonsoft.Json.Linq;
using UnityEngine;

namespace L2Web.Render.Env
{
    public sealed class ColorKey { public float T; public int R, G, B; }
    public sealed class ScaleKey { public float T; public float S; }
    public sealed class HsvKey { public float T; public int Hue, Sat, Bri; }

    /// <summary>Um TimeEnvN.INT: as curvas por hora de um ambiente.</summary>
    public sealed class TimeEnv
    {
        public int EnvType;
        public readonly Dictionary<string, ColorKey[]> Colors = new(StringComparer.Ordinal);
        public readonly Dictionary<string, ScaleKey[]> Scales = new(StringComparer.Ordinal);
        public readonly Dictionary<string, HsvKey[]> Hsvs = new(StringComparer.Ordinal);
    }

    public sealed class L2EnvData
    {
        public static readonly string[] ColorSections =
        {
            "SkyBoxColor", "SunColor", "MoonColor", "HazeringColor", "CloudColor1", "CloudColor2", "CloudColor3",
            "TerrainAmbient", "ActorAmbient", "StaticMeshAmbient", "BSPAmbient",
        };
        public static readonly string[] ScaleSections = { "SunScale", "MoonScale" };
        public static readonly string[] HsvSections = { "HSVActorLight", "HSVStaticMeshLight", "HSVTerrainLight", "HSVBSPLight" };

        // EnvSetup
        public bool IsClock = true;
        public float StartTime = 6, TimeRatio = 1;
        public string SkyBox = "SkybackgroundColor", HazeRing = "HazeRing_Final";
        public string[] Clouds = { "Cloud_Final" };
        public float ShadowTick = -1;
        public float SlopeSunAngle;
        public int StaticLightingAdjust, SubLightNum;
        // FOG: StartRange1..5 / EndRange1..5 (x 2048 no render), padroes quando a chave falta
        public readonly float[] FogStart = { 0.5f, 1, 1.5f, 2, 2.5f };
        public readonly float[] FogEnd = { 3.5f, 4.5f, 5.5f, 6.5f, 7.5f };
        public float FogSpeed = 1;
        public int TerrainShadowMaps = 8;
        public Color32 WaterFogColor = new(39, 87, 126, 255);
        public float WaterFogStart = 200, WaterFogEnd = 3000;
        public Color32 WaterCellophane = new(45, 121, 117, 128);
        public float WindDirX, WindDirY = 1, WindSpeed = 48, WindAccel = 4;

        /// <summary>Ambientes por EnvType (0..3).</summary>
        public readonly Dictionary<int, TimeEnv> Envs = new();

        static L2EnvData cached;

        /// <summary>Resources/env_config.json (uma vez).</summary>
        public static L2EnvData Load()
        {
            if (cached != null) return cached;
            var ta = Resources.Load<TextAsset>("env_config");
            if (ta == null) throw new InvalidOperationException("Resources/env_config.json ausente (python -I l2anim/scripts/env_parse.py)");
            return cached = Parse(ta.text);
        }

        public static L2EnvData Parse(string json)
        {
            var root = JObject.Parse(json);
            var d = new L2EnvData();
            if (root["Env.int"] is JObject env)
            {
                if (env["EnvSetup"] is JObject s)
                {
                    d.IsClock = Bool(s["IsClock"], true);
                    d.StartTime = (float?)s["StartTime"] ?? 6;
                    d.TimeRatio = (float?)s["TimeRatio"] ?? 1;
                    d.SkyBox = (string)s["SKYBOX"] ?? d.SkyBox;
                    d.HazeRing = (string)s["HAZERING"] ?? d.HazeRing;
                    var n = (int?)s["NumCloudColor"] ?? 1;
                    var clouds = new List<string>();
                    for (var i = 1; i <= n; i++)
                    {
                        // Env.int escreve "CLOUD1" e "Cloud2"/"Cloud3": o Parse do engine nao distingue maiusculas
                        var c = (string)s["CLOUD" + i] ?? (string)s["Cloud" + i];
                        clouds.Add(c ?? (i == 1 ? "Cloud_Final" : null));
                    }
                    d.Clouds = clouds.ToArray();
                    d.ShadowTick = (float?)s["ShadowTick"] ?? -1;
                    d.SlopeSunAngle = (float?)s["SlopeSunAngle"] ?? 0;
                    d.StaticLightingAdjust = (int?)s["StaticLightingAdjust"] ?? 0;
                    d.SubLightNum = (int?)s["SubLightNum"] ?? 0;
                }
                if (env["FOG"] is JObject f)
                {
                    for (var i = 0; i < 5; i++)
                    {
                        if (f["StartRange" + (i + 1)] != null) d.FogStart[i] = (float)f["StartRange" + (i + 1)];
                        if (f["EndRange" + (i + 1)] != null) d.FogEnd[i] = (float)f["EndRange" + (i + 1)];
                    }
                    d.FogSpeed = (float?)f["FogSpeed"] ?? 1;
                }
                if (env["TerrainShadowMap"] is JObject tsm) d.TerrainShadowMaps = (int?)tsm["Num"] ?? 8;
                if (env["WaterVolume"] is JObject w)
                {
                    d.WaterFogColor = Rgb(w["WaterVolumeFogColor"], d.WaterFogColor);
                    d.WaterFogStart = (float?)w["WaterVolumeFogStart"] ?? d.WaterFogStart;
                    d.WaterFogEnd = (float?)w["WaterVolumeFogEnd"] ?? d.WaterFogEnd;
                    var c = w["WaterVolumeCellophaneColor"];
                    if (c != null) d.WaterCellophane = new Color32((byte)((int?)c["R"] ?? 0), (byte)((int?)c["G"] ?? 0), (byte)((int?)c["B"] ?? 0), (byte)((int?)c["a"] ?? 255));
                }
                if (env["WIND"] is JObject wd)
                {
                    if (wd["Direction"] is JObject dir)
                    {
                        d.WindDirX = (float?)dir["X"] ?? 0;
                        d.WindDirY = (float?)dir["Y"] ?? 0;
                    }
                    d.WindSpeed = (float?)wd["Speed"] ?? 48;
                    d.WindAccel = (float?)wd["Accel"] ?? 4;
                }
            }
            foreach (var kv in root)
            {
                if (kv.Key == "Env.int" || kv.Value is not JObject te) continue;
                var e = new TimeEnv { EnvType = (int?)te["EnvType"]?["EnvType"] ?? 0 };
                foreach (var sec in ColorSections) e.Colors[sec] = Keys(te[sec], (k, i) => new ColorKey { T = (float?)k["T"] ?? i, R = (int?)k["R"] ?? 255, G = (int?)k["G"] ?? 255, B = (int?)k["B"] ?? 255 });
                foreach (var sec in ScaleSections) e.Scales[sec] = Keys(te[sec], (k, i) => new ScaleKey { T = (float?)k["T"] ?? i, S = (float?)k["S"] ?? 255 });
                foreach (var sec in HsvSections) e.Hsvs[sec] = Keys(te[sec], (k, i) => new HsvKey { T = (float?)k["T"] ?? i, Hue = (int?)k["Hue"] ?? 0, Sat = (int?)k["Sat"] ?? 255, Bri = (int?)k["Bri"] ?? 255 });
                d.Envs[e.EnvType] = e;
            }
            return d;
        }

        /// <summary>As chaves 1..NUM de uma secao (o engine ignora as sobras).</summary>
        static T[] Keys<T>(JToken sec, Func<JToken, int, T> make)
        {
            if (sec is not JObject o || o["chaves"] is not JArray arr) return Array.Empty<T>();
            var num = (int?)o["NUM"] ?? arr.Count;
            var n = Math.Min(num, arr.Count);
            var res = new T[Math.Max(0, n)];
            for (var i = 0; i < res.Length; i++) res[i] = make(arr[i], i + 1);
            return res;
        }

        static bool Bool(JToken t, bool def) => t == null ? def : string.Equals(t.ToString(), "true", StringComparison.OrdinalIgnoreCase);

        static Color32 Rgb(JToken c, Color32 def) => c == null ? def : new Color32((byte)((int?)c["R"] ?? 0), (byte)((int?)c["G"] ?? 0), (byte)((int?)c["B"] ?? 0), 255);
    }
}
