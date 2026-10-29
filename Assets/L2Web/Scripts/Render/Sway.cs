// Balanco dos MovableStaticMeshActor (vinhas do login): AMovableStaticMeshActor::physL2Movement (corpo 0x1063e7c0; Physics
// = 19 PHYS_L2Movement e bUseL2RotatorRandomStart = True nos defaults do Engine.u; scratchpad/lobby_sway_re.md 1.2). Por eixo
// (pitch, yaw, roll com L2RotatorRate/Max e L2AccelRatio PitchTime/YawTime/RollTime):
//   inicio: eixo desligado se Max < 1 ou Rate < 1; C = Max; D = 4 C / Rate; t = (rand() % 1000) / 1000
//   tick:   t += dt; L = 4 D / (A Max / C); t < L ? angulo = ftol(Org + C sin(t A pi (Max / C) / D)) : (t -= L; angulo = Org)
using Newtonsoft.Json.Linq;
using UnityEngine;

namespace L2Web.Render
{
    public sealed class Sway
    {
        public Vector3Int Rate, Max;
        public Vector3 Accel = Vector3.one;
        /// <summary>L2CurrentCycleTime por eixo (pitch, yaw, roll).</summary>
        public Vector3 T;

        static readonly System.Random rng = new(4321);

        /// <summary>Parametros do json (null sem L2RotatorRate).</summary>
        public static Sway From(JObject o)
        {
            if (o["l2RotatorRate"] is not JArray r || r.Count < 3) return null;
            var m = o["l2RotatorMax"] as JArray;
            var acc = o["l2AccelRatio"] as JObject;
            return new Sway
            {
                Rate = new Vector3Int((int)r[0], (int)r[1], (int)r[2]),
                Max = m != null && m.Count >= 3 ? new Vector3Int((int)m[0], (int)m[1], (int)m[2]) : Vector3Int.zero,
                Accel = acc != null ? new Vector3((float?)acc["PitchTime"] ?? 1, (float?)acc["YawTime"] ?? 1, (float?)acc["RollTime"] ?? 1) : Vector3.one,
                // bUseL2RotatorRandomStart: cada eixo comeca em (rand() % 1000) / 1000 s
                T = new Vector3(rng.Next(1000) / 1000f, rng.Next(1000) / 1000f, rng.Next(1000) / 1000f),
            };
        }

        /// <summary>Um eixo: devolve o angulo absoluto (unidades de rotator) e avanca t.</summary>
        public static int Axis(int org, int rate, int max, float accel, ref float t, float dt)
        {
            if (max < 1 || rate < 1) return org;
            float c = max, d = 4 * c / rate;
            t += dt;
            var len = 4 * d / (accel * (max / c));
            if (t < len) return (int)(org + c * Mathf.Sin(t * accel * Mathf.PI * (max / c) / d));
            t -= len;
            return org;
        }

        /// <summary>Rotacao absoluta (pitch, yaw, roll) depois de dt, a partir da rotacao original do ator.</summary>
        public (int, int, int) Step(int p0, int y0, int r0, float dt)
        {
            float tp = T.x, ty = T.y, tr = T.z;
            var p = Axis(p0, Rate.x, Max.x, Accel.x, ref tp, dt);
            var y = Axis(y0, Rate.y, Max.y, Accel.y, ref ty, dt);
            var r = Axis(r0, Rate.z, Max.z, Accel.z, ref tr, dt);
            T = new Vector3(tp, ty, tr);
            return (p, y, r);
        }
    }
}
