// Neblina local do L2 (AL2FogInfo; spec 08 Apendice A, estudo l2foginfo_re.md). Cada ator se registra na lista do gerenciador
// de neblina (UGameEngine+0x18C) e o FLevelSceneNode::Render, a cada quadro:
//  - peso (FUN_10444560): distancia 3D do ViewTarget; 0 com Colors.Num <= 1 ou d >= AffectRange.Max; 1 com d <= Min; senao
//    (Max - d) / (Max - Min); atores com d > Max saem da lista;
//  - nivel (FUN_10443580/650): GL2TerrainCR efetivo -> FogRange1..5 (ja em unidades de mundo);
//  - chaves por hora (FUN_10444FD0): Time[i] <= t <= Time[i+1], a ultima liga a Time[0] + 24; por byte trunc(a + f (b - a));
//  - dobra na ordem da lista sobre a base: start/end = GL2FogStart/End x 2048, cor (127,127,127), ceu/nuvens/haze das curvas
//    da hora: start += w (Min - start), end += w (Max - end), cores trunc(acc + w (F - acc));
//  - transicao (FUN_10443AD0) de GL2FogSpeed segundos so ao entrar ou sair da lista: alfa = 1 - restante/duracao.
using System;
using System.Collections.Generic;
using UnityEngine;

namespace L2Web.Render.Env
{
    public sealed class FogKey
    {
        public float Time;
        public Color32 Fog, Sky;
        public Color32[] Clouds = Array.Empty<Color32>(), Hazes = Array.Empty<Color32>();
    }

    public sealed class FogActor
    {
        public string Name;
        /// <summary>Posicao em UE.</summary>
        public Vector3 Loc;
        public float AffectMin, AffectMax;
        /// <summary>FogRange1..5 (min, max) em UU.</summary>
        public (float min, float max)[] Ranges = new (float, float)[5];
        public FogKey[] Colors = Array.Empty<FogKey>();
    }

    public struct FogState
    {
        public float Start, End;
        public Color32 Fog, Sky;
        public Color32[] Clouds, Hazes;
    }

    public static class L2Fog
    {
        /// <summary>Atores registrados pelos tiles carregados (MapEnv); o Render os pesa a cada quadro.</summary>
        public static readonly List<FogActor> Registry = new();

        public static float Weight(float d, float affectMin, float affectMax, int colorKeys)
        {
            if (colorKeys <= 1 || d >= affectMax) return 0;
            if (d <= affectMin) return 1;
            return (affectMax - d) / (affectMax - affectMin);
        }

        public static byte TruncByte(float v) => (byte)Mathf.Clamp((int)v, 0, 255);

        public static Color32 TruncLerp(Color32 a, Color32 b, float f) =>
            new(TruncByte(a.r + f * (b.r - a.r)), TruncByte(a.g + f * (b.g - a.g)), TruncByte(a.b + f * (b.b - a.b)), 255);

        /// <summary>Chaves por hora: segmento Time[i] &lt;= t &lt;= Time[i+1] (a ultima liga a Time[0] + 24), bytes truncados.</summary>
        public static FogKey Interp(FogKey[] keys, double t)
        {
            if (keys == null || keys.Length == 0) return new FogKey();
            if (keys.Length == 1) return keys[0];
            t = ((t % 24) + 24) % 24;
            for (var i = 0; i < keys.Length; i++)
            {
                var a = keys[i];
                var b = i + 1 < keys.Length ? keys[i + 1] : keys[0];
                double t0 = a.Time, t1 = i + 1 < keys.Length ? b.Time : keys[0].Time + 24;
                var tt = t;
                if (i + 1 == keys.Length && tt < t0) tt += 24;
                if (!(t0 <= tt && tt <= t1)) continue;
                var f = t1 > t0 ? (float)((tt - t0) / (t1 - t0)) : 0;
                var n = Math.Min(a.Clouds.Length, b.Clouds.Length);
                var m = Math.Min(a.Hazes.Length, b.Hazes.Length);
                var k = new FogKey { Time = (float)t, Fog = TruncLerp(a.Fog, b.Fog, f), Sky = TruncLerp(a.Sky, b.Sky, f), Clouds = new Color32[n], Hazes = new Color32[m] };
                for (var c = 0; c < n; c++) k.Clouds[c] = TruncLerp(a.Clouds[c], b.Clouds[c], f);
                for (var c = 0; c < m; c++) k.Hazes[c] = TruncLerp(a.Hazes[c], b.Hazes[c], f);
                return k;
            }
            return new FogKey();
        }

        /// <summary>Dobra dos atores (na ordem da lista) sobre a base. level = 1..5. viewUe = ViewTarget em UE.</summary>
        public static FogState Fold(IList<FogActor> actors, Vector3 viewUe, int level, double t, FogState baseState, out bool any)
        {
            var s = baseState;
            s.Fog = new Color32(127, 127, 127, 255);
            s.Clouds = (Color32[])(baseState.Clouds ?? Array.Empty<Color32>()).Clone();
            s.Hazes = (Color32[])(baseState.Hazes ?? Array.Empty<Color32>()).Clone();
            any = false;
            var li = Mathf.Clamp(level, 1, 5) - 1;
            foreach (var a in actors)
            {
                var d = Vector3.Distance(a.Loc, viewUe);
                if (d > a.AffectMax) continue;
                any = true;
                var w = Weight(d, a.AffectMin, a.AffectMax, a.Colors.Length);
                if (w <= 0) continue;
                var k = Interp(a.Colors, t);
                var (rmin, rmax) = a.Ranges[li];
                s.Start += w * (rmin - s.Start);
                s.End += w * (rmax - s.End);
                s.Fog = TruncLerp(s.Fog, k.Fog, w);
                s.Sky = TruncLerp(s.Sky, k.Sky, w);
                for (var c = 0; c < Math.Min(s.Clouds.Length, k.Clouds.Length); c++) s.Clouds[c] = TruncLerp(s.Clouds[c], k.Clouds[c], w);
                for (var c = 0; c < Math.Min(s.Hazes.Length, k.Hazes.Length); c++) s.Hazes[c] = TruncLerp(s.Hazes[c], k.Hazes[c], w);
            }
            return s;
        }

        /// <summary>Transicao do gerenciador de neblina (origem -> alvo em `duration` s; so ao entrar ou sair da lista).</summary>
        public sealed class Transition
        {
            public float Duration = 1, Remaining;
            public FogState Origin, Target, Current;
            public bool WasActive;

            public void SetTarget(FogState target, bool active)
            {
                if (active != WasActive)
                {
                    Origin = Current;
                    Remaining = Duration;
                    WasActive = active;
                }
                Target = target;
            }

            public FogState Step(float dt)
            {
                if (Remaining <= 0)
                {
                    Current = Target;
                    return Current;
                }
                Remaining -= dt;
                var alpha = Remaining <= 0 ? 1 : 1 - Remaining / Duration;
                Current = new FogState
                {
                    Start = Origin.Start + (Target.Start - Origin.Start) * alpha, End = Origin.End + (Target.End - Origin.End) * alpha,
                    Fog = Color32.Lerp(Origin.Fog, Target.Fog, alpha), Sky = Color32.Lerp(Origin.Sky, Target.Sky, alpha),
                    Clouds = Target.Clouds, Hazes = Target.Hazes,
                };
                return Current;
            }
        }
    }
}
