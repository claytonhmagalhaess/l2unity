// Materiais de efeito das malhas estaticas (P3 do lobby_env_plan): troca os materiais do glTF que no UE2 sao Shader/FinalBlend
// com blend Translucent/Brighten/AlphaBlend pelo L2Web/Fx (sem luz, sem ZWrite, neblina que apaga) e anima os quadros
// AnimNext (chamas das tochas 16 quadros a 30 fps, cachoeira 8 a 20 fps) e o FadeColor (brilho da tocha). A tabela vem do
// Docs/tools/export_fxmat.py (cache/statics/fxmat.json, por nome de material). Os materiais sao do molde, compartilhados
// por todos os atores, entao o Tick troca uma textura por material.
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.Rendering;

namespace L2Web.Render
{
    public static class MatAnim
    {
        sealed class Anim
        {
            public Material Mat;
            public Texture2D[] Frames;
            public float Fps;
            public bool Fade;
            public Color C1, C2;
            public float Period, Phase;
            public float Mul = 1;
            public Vector2 Pan;
        }

        static Task<JObject> table;
        static readonly List<Anim> anims = new();
        static readonly Dictionary<string, Material> made = new(StringComparer.OrdinalIgnoreCase);
        static float time;
        static int lastFrame = -1;

        static async Task<JObject> Load()
        {
            try
            {
                return await Http.GetJson<JObject>("/statics/fxmat.json") ?? new JObject();
            }
            catch (Exception e)
            {
                Debug.LogWarning("fxmat: " + e.Message);
                return new JObject();
            }
        }

        /// <summary>(Src, Dst) do blend do UE2. [I-UE2] Translucent = One/One, Brighten = One/OneMinusSrcColor.</summary>
        public static (BlendMode src, BlendMode dst) Blend(string blend) => blend switch
        {
            "translucent" => (BlendMode.One, BlendMode.One),
            "brighten" => (BlendMode.One, BlendMode.OneMinusSrcColor),
            "darken" => (BlendMode.Zero, BlendMode.OneMinusSrcColor),
            "modulate" => (BlendMode.DstColor, BlendMode.Zero),
            _ => (BlendMode.SrcAlpha, BlendMode.OneMinusSrcAlpha),
        };

        /// <summary>FC_Sinusoidal [I-UE2]: lerp(C1, C2, 0,5 + 0,5 sin(2 pi (t + fase) / periodo)).</summary>
        public static Color FadeColor(Color c1, Color c2, float period, float phase, float t) =>
            period <= 0 ? c1 : Color.LerpUnclamped(c1, c2, 0.5f + 0.5f * Mathf.Sin(2 * Mathf.PI * (t + phase) / period));

        /// <summary>Quadro do AnimNext no tempo t (UTexture::Tick avanca um quadro a cada 1/MaxFrameRate).</summary>
        public static int Frame(float t, float fps, int n) => n <= 0 || fps <= 0 ? 0 : (int)Mathf.Repeat(Mathf.Floor(t * fps), n);

        /// <summary>Troca, no array do molde, os materiais que a tabela conhece.</summary>
        public static async Task Apply(Material[] mats)
        {
            // -l2nofxmat: diagnostico (materiais do glTF como antes)
            if (mats == null || Array.IndexOf(Environment.GetCommandLineArgs(), "-l2nofxmat") >= 0) return;
            table ??= Load();
            var t = await table;
            for (var i = 0; i < mats.Length; i++)
            {
                var m = mats[i];
                if (!m) continue;
                var key = m.name.Replace(" (Instance)", "");
                if (made.TryGetValue(key, out var done)) { mats[i] = done; continue; }
                if (t[key] is not JObject e) continue;
                mats[i] = await Make(key, e, m);
            }
        }

        static async Task<Material> Make(string key, JObject e, Material src)
        {
            var blend = (string)e["blend"] ?? "alpha";
            Texture tex = null;
            var frames = e["frames"] is JArray fa && fa.Count > 1 ? new Texture2D[fa.Count] : null;
            if (frames != null)
            {
                for (var i = 0; i < frames.Length; i++) frames[i] = await Http.GetTexture((string)e["frames"][i]);
                tex = frames[0];
            }
            else if ((string)e["tex"] is { } url) tex = await Http.GetTexture(url);
            if (!tex) tex = src.mainTexture;
            var m = RenderMats.Fx(Color.white, false, true, tex, false, true);
            m.name = key;
            var (s, d) = Blend(blend);
            m.SetFloat("_SrcBlend", (float)s);
            m.SetFloat("_DstBlend", (float)d);
            m.SetFloat("_ZWrite", (bool?)e["zwrite"] == true ? 1 : 0);
            // [I] Cull Off: o espelho do umodel inverte a ordem dos vertices e um quad de um lado so sumiria
            m.SetFloat("_Cull", (float)CullMode.Off);
            m.SetFloat("_Fog", blend == "alpha" ? 1 : 2);
            m.SetFloat("_VColor", 0);
            m.renderQueue = (int)RenderQueue.Transparent;
            m.hideFlags |= HideFlags.DontUnloadUnusedAsset;
            if (tex) tex.hideFlags |= HideFlags.DontUnloadUnusedAsset;
            var a = new Anim { Mat = m, Frames = frames, Fps = (float?)e["fps"] ?? 0 };
            // Combiner Modulate2X: a cor do FadeColor dobra
            if ((bool?)e["mod2x"] == true) a.Mul = 2;
            if (e["fade"] is JObject f)
            {
                a.Fade = true;
                a.C1 = Rgb(f["c1"]);
                a.C2 = Rgb(f["c2"]);
                a.Period = (float?)f["period"] ?? 0;
                a.Phase = (float?)f["phase"] ?? 0;
            }
            else if (a.Mul != 1) m.SetColor("_Color", Color.white * a.Mul);
            if (e["pan"] is JObject p)
            {
                // TexPanner: dir = Rotator(PanDirection).Vector() (pitch, yaw), em UV/s * PanRate. [?] o sinal do V depois do flip
                var pd = (JArray)p["dir"];
                float pitch = (float)pd[0] * Mathf.PI / 32768f, yaw = (float)pd[1] * Mathf.PI / 32768f;
                var rate = (float?)p["rate"] ?? 0;
                a.Pan = new Vector2(Mathf.Cos(pitch) * Mathf.Cos(yaw), Mathf.Cos(pitch) * Mathf.Sin(yaw)) * rate;
            }
            made[key] = m;
            if (a.Frames != null || a.Fade || a.Pan != Vector2.zero)
            {
                anims.Add(a);
                Step(a);
            }
            return m;
        }

        static Color Rgb(JToken c) => c is JArray a ? new Color((float)a[0] / 255f, (float)a[1] / 255f, (float)a[2] / 255f, 1) : Color.white;

        static void Step(Anim a)
        {
            if (!a.Mat) return;
            if (a.Frames != null)
            {
                var fr = a.Frames[Frame(time, a.Fps, a.Frames.Length)];
                if (fr) a.Mat.SetTexture("_MainTex", fr);
            }
            if (a.Fade)
            {
                var c = FadeColor(a.C1, a.C2, a.Period, a.Phase, time) * a.Mul;
                c.a = 1;
                a.Mat.SetColor("_Color", c);
            }
            if (a.Pan != Vector2.zero)
                a.Mat.SetVector("_MainTex_ST", new Vector4(1, 1, Mathf.Repeat(a.Pan.x * time, 1), Mathf.Repeat(a.Pan.y * time, 1)));
        }

        /// <summary>Avanca as animacoes (lobby e mundo chamam a cada quadro).</summary>
        public static void Tick(float dt)
        {
            if (Time.frameCount == lastFrame) return;
            lastFrame = Time.frameCount;
            time += dt;
            foreach (var a in anims) Step(a);
        }
    }
}
