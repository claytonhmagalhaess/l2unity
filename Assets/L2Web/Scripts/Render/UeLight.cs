// Luzes do UE2 (P4 do lobby_env_plan): cor FGetHSV (spec 08 secao 3.1, 0x1030c482), fator por LightType (secao 5.1) e as
// coronas (sprite aditivo virado para a camera, apagado quando algo fica na frente).
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

namespace L2Web.Render
{
    public static class UeLight
    {
        /// <summary>
        /// FGetHSV(H, S, V): b = clamp(0,7 (1,4V/255) / (sqrt(1,4V/255) + 0,01), 0, 1); matiz por tercos; RGB = (matiz +
        /// S/255 (1 - matiz)) b.
        /// </summary>
        public static Color Hsv(int h, int s, int v)
        {
            var x = 1.4f * v / 255f;
            var b = Mathf.Clamp01(0.7f * x / (Mathf.Sqrt(x) + 0.01f));
            Vector3 hue = h < 86 ? new Vector3((85 - h) / 85f, h / 85f, 0)
                : h < 171 ? new Vector3(0, (170 - h) / 85f, (h - 85) / 85f)
                : new Vector3((h - 170) / 85f, 0, (255 - h) / 84f);
            var k = s / 255f;
            var c = (hue + k * (Vector3.one - hue)) * b;
            return new Color(c.x, c.y, c.z, 1);
        }

        /// <summary>Cor da luz: FGetHSV(Hue, Saturation, 255) * Brightness / 255.</summary>
        public static Color LightColor(int hue, int sat, float brightness) => Hsv(hue, sat, 255) * (brightness / 255f);

        /// <summary>[I-UE2] raio no mundo: 25 (LightRadius + 1) UU.</summary>
        public static float WorldRadius(float lightRadius) => 25f * (lightRadius + 1);

        /// <summary>So Steady (1), SubtlePulse/Pulse (media) etc. contribuem; None (0) e Backdrop (6) nao iluminam.</summary>
        public static bool Lights(int type) => type != 0 && type != 6;

        /// <summary>
        /// Luz de hardware para os atores (baked_light_re.md 3.5 [O]): um ator sem StaticMeshInstance (os pawns) recebe todas as
        /// luzes da sua lista por SetLight (D3DDrv ignora o indice >= 3), Range = Radius, queda f(r) = 1 - 3r^2 + 2r^3 e cor
        /// x 0,5 sob MODULATE2X (= a cor em "unidades de luz"). No Unity: Light pontual com color = cor x fator e intensity 1;
        /// o L2Web/Actor (o unico shader que le as luzes adicionais) desfaz a conversao para linear e aplica f(r) com
        /// Range = range da luz. As malhas/terreno/BSP (shaders proprios) nao as leem.
        /// </summary>
        public static void SetPoint(Light li, Color color, float factor = 1)
        {
            li.color = color * factor;
            li.intensity = 1;
        }

        /// <summary>[O] D3DDrv SetLight (0x10024040) ignora o indice >= 3: no maximo 3 luzes por ator (o shader para em 3).</summary>
        public const int MaxLightsPerActor = 3;

        /// <summary>
        /// Fase do Pulse/SubtlePulse (spec 08 secao 5.1): LightPhase &lt;&lt; 8 + termo de tempo. [I] o termo e o da Unreal Engine 2,
        /// TimeSeconds x 35 x 65536 / LightPeriod (o argumento do ftol nao aparece no pseudocodigo); a tabela de seno do GMath
        /// tem 16384 entradas por volta (angulo &gt;&gt; 2).
        /// </summary>
        public static int PulsePhase(float timeSeconds, int lightPhase, int lightPeriod) =>
            ((lightPhase & 0xff) << 8) + (int)(timeSeconds * 35f * 65536f / Mathf.Max(1, lightPeriod)) & 0xffff;

        /// <summary>Seno pelo angulo de 16 bits (GMath.SinTab).</summary>
        public static float SinTab(int angle) => Mathf.Sin((angle & 0xffff) * (2 * Mathf.PI / 65536f));

        /// <summary>
        /// Fator do LightType (FDynamicLight::Update, spec 08 secao 5.1): 1 Steady = 1; 2 Pulse = 0,6 + 0,39 sen; 3 Blink = bit
        /// da fase; 4 Flicker = appFrand (&lt; 0,5 vira 0); 5 Strobe = alterna a cada mudanca de TimeSeconds; 7 SubtlePulse =
        /// 0,9 + 0,09 sen; 10 FadeOut = min((1 - LifeFraction) 1,5, 1); 11 Fade = sen(fase); 0 None e 6 Backdrop = 0.
        /// </summary>
        public static float TypeFactor(int type, float timeSeconds, int lightPhase, int lightPeriod, Func<float> rand = null, float lifeFraction = 0)
        {
            switch (type)
            {
                case 1: return 1;
                case 2: return 0.6f + 0.39f * SinTab(PulsePhase(timeSeconds, lightPhase, lightPeriod));
                case 3: return (PulsePhase(timeSeconds, lightPhase, lightPeriod) & 0x8000) != 0 ? 1 : 0;
                case 4:
                {
                    var r = rand?.Invoke() ?? UnityEngine.Random.value;
                    return r < 0.5f ? 0 : r;
                }
                case 5: return ((int)timeSeconds & 1) == 0 ? 1 : 0;
                case 7: return 0.9f + 0.09f * SinTab(PulsePhase(timeSeconds, lightPhase, lightPeriod));
                case 10: return Mathf.Min((1 - lifeFraction) * 1.5f, 1);
                case 11: return SinTab(PulsePhase(timeSeconds, lightPhase, lightPeriod));
                default: return 0;
            }
        }
    }

    /// <summary>Corona: quad aditivo (L2WebFx billboard) do tamanho DrawScale * USize da textura [I-UE2], com fade de 0,25 s.</summary>
    public sealed class Corona
    {
        public Transform Tr;
        public Renderer R;
        public float Alpha;
        public Color Color = Color.white;

        static readonly MaterialPropertyBlock mpb = new();
        static readonly int ColorId = Shader.PropertyToID("_Color");
        /// <summary>[I-UE2] tempo de aparecer/sumir.</summary>
        public const float FadeTime = 0.25f;

        public static Material MakeMaterial(Texture tex)
        {
            var m = RenderMats.Fx(Color.white, true, true, tex, true, false);
            m.SetFloat("_SrcBlend", (float)BlendMode.One);
            m.SetFloat("_DstBlend", (float)BlendMode.One);
            m.SetFloat("_VColor", 0);
            m.SetFloat("_Fog", 2);
            // a corona fica por cima da propria tocha: o teste de profundidade e o Linecast
            m.SetFloat("_ZTest", (float)CompareFunction.Always);
            return m;
        }

        public static void Step(List<Corona> list, Camera cam, float dt)
        {
            if (!cam) return;
            var eye = cam.transform.position;
            foreach (var c in list)
            {
                if (!c.Tr || !c.Tr.gameObject.activeInHierarchy) continue;
                var p = c.Tr.position;
                var dir = p - eye;
                var visible = Vector3.Dot(dir, cam.transform.forward) > 0 &&
                              !Physics.Linecast(eye, p - dir.normalized * 0.3f, ~0, QueryTriggerInteraction.Ignore);
                c.Alpha = Mathf.MoveTowards(c.Alpha, visible ? 1 : 0, dt / FadeTime);
                c.R.enabled = c.Alpha > 0;
                mpb.SetColor(ColorId, c.Color * c.Alpha);
                c.R.SetPropertyBlock(mpb);
            }
        }
    }
}
