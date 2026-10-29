// Balanco das malhas com bSwayObject (arvores e grama; scratchpad/lobby_sway_re.md, tabela do Docs/tools/export_meshsway.py
// em cache/statics/sway.json). RenderStaticMesh (FUN_1067a720) chama FWind::Sway (0x10588960) a cada vez que desenha o ator,
// para cada vento do GEngine (um so: env.int [WIND] Direction=(0,1)), e refaz a matriz com a nova rotacao:
//   primeira vez: S0 = appSRand() < 0,5 ? +1 : -1; S1 = S2 = 0
//   V = Normalize((Dir.Rotation() + Orig).Vector()) * S0
//   R = (ftol(V.X M 182), ftol(Orig.Yaw + S2 M 182), ftol(V.Y M 182))
//   Rotation = Orig + (R - Orig) * sin(pi S1 / F)      (FRotator - e * float: inteiros, trunca)
//   S1 = float(S1 + 0,05); se S1 > F: S1 = 0, S0 = -S0, S2 = 0,5 M (appSRand() - 0,5)
// O passo e por quadro desenhado (nao por segundo): [I] a 60 Hz, como o original com vsync; parado enquanto nao e visto.
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Newtonsoft.Json.Linq;
using UnityEngine;

namespace L2Web.Render
{
    public static class WindSway
    {
        sealed class Inst
        {
            public Statics.Moving M;
            public Renderer R;
            public int P0, Y0, R0;
            public float S0, S1, S2, F, Max;
        }

        /// <summary>Direcao do vento do env.int [WIND] (X=0, Y=1); Rotation() = (0, 16384, 0).</summary>
        public const int WindYaw = 16384;
        /// <summary>
        /// Passo por quadro desenhado [O]; o original nao limita o FPS (PresentationInterval IMMEDIATE em janela, GetMaxTickRate 0,
        /// estudo lobby_remaining_re.md), entao a velocidade em segundos depende da maquina. [I] 60 quadros/s nominais.
        /// </summary>
        public const float StepRate = 60;

        public static int Count => list.Count;

        static Task<JObject> table;
        static readonly List<Inst> list = new();
        static readonly System.Random rng = new(1234);
        static float acc;
        static int lastFrame = -1;

        static async Task<JObject> Load()
        {
            try
            {
                return await Http.GetJson<JObject>("/statics/sway.json") ?? new JObject();
            }
            catch (Exception e)
            {
                Debug.LogWarning("sway: " + e.Message);
                return new JObject();
            }
        }

        /// <summary>(Frequency, MaxSwayAngle) da malha, ou null se ela nao balanca.</summary>
        public static async Task<(float f, float m)?> Of(string mesh)
        {
            if (string.IsNullOrEmpty(mesh)) return null;
            table ??= Load();
            var t = await table;
            return t[mesh] is JArray a && a.Count >= 2 ? ((float)a[0], (float)a[1]) : null;
        }

        public static void Register(Statics.Moving m, float frequency, float maxAngle)
        {
            if (m == null || m.Parts.Count == 0) return;
            var r = m.Actor.Rot ?? new float[3];
            list.Add(new Inst
            {
                M = m, R = m.Parts[0].tr ? m.Parts[0].tr.GetComponent<Renderer>() : null,
                P0 = (int)r[0], Y0 = (int)r[1], R0 = r.Length > 2 ? (int)r[2] : 0, F = frequency, Max = maxAngle,
            });
        }

        /// <summary>Um passo do FWind::Sway (orig e o resultado em unidades de rotator).</summary>
        public static (int p, int y, int r) Step(int p0, int y0, int r0, ref float s0, ref float s1, ref float s2, float f, float m, Func<float> rand)
        {
            if (s0 == 0)
            {
                s0 = rand() < 0.5f ? 1 : -1;
                s1 = 0;
                s2 = 0;
            }
            const double k = Math.PI * 2 / 65536;
            double pitch = p0 * k, yaw = (WindYaw + y0) * k;
            double vx = Math.Cos(pitch) * Math.Cos(yaw), vy = Math.Cos(pitch) * Math.Sin(yaw), vz = Math.Sin(pitch);
            var n = Math.Sqrt(vx * vx + vy * vy + vz * vz);
            vx = vx / n * s0;
            vy = vy / n * s0;
            int rp = (int)(vx * m * 182.0), ry = (int)(y0 + s2 * m * 182.0), rr = (int)(vy * m * 182.0);
            var s = (float)Math.Sin(Math.PI * s1 / f);
            var res = (p0 + (int)((rp - p0) * s), y0 + (int)((ry - y0) * s), r0 + (int)((rr - r0) * s));
            s1 = (float)(s1 + 0.05);
            if (s1 > f)
            {
                s1 = 0;
                s0 = -s0;
                s2 = 0.5f * m * (rand() - 0.5f);
            }
            return res;
        }

        static float Rand() => (float)rng.NextDouble();

        /// <summary>Avanca (uma vez por quadro do Unity; lobby e mundo chamam).</summary>
        public static void Tick(float dt)
        {
            if (Time.frameCount == lastFrame) return;
            lastFrame = Time.frameCount;
            acc += dt;
            var steps = Mathf.Min(8, Mathf.FloorToInt(acc * StepRate));
            if (steps <= 0) return;
            acc -= steps / StepRate;
            list.RemoveAll(i => i.M == null || i.M.Parts.Count == 0 || !i.M.Parts[0].tr);
            foreach (var i in list)
            {
                if (i.R && !i.R.isVisible) continue;
                (int p, int y, int r) rot = (i.P0, i.Y0, i.R0);
                for (var s = 0; s < steps; s++) rot = Step(i.P0, i.Y0, i.R0, ref i.S0, ref i.S1, ref i.S2, i.F, i.Max, Rand);
                i.M.Pose(rot.p, rot.y, rot.r);
            }
        }
    }
}
