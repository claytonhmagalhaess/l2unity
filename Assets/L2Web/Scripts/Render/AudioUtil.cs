// Funcoes soltas de render/audio.ts (stepSound) e o armazenamento das opcoes de som (localStorage "l2web.audio.*").
using System.Globalization;

namespace L2Web.Render
{
    public static class AudioUtil
    {
        static readonly System.Random rng = new();

        /// <summary>
        /// Nome do som de passo como nos AnimNotify_Sound sem Sound: &lt;piso&gt;_&lt;walk|run&gt;_0N
        /// (surface: "default", "stone_hard", "grass"). rnd em [0, 1); negativo = sorteia.
        /// </summary>
        public static string StepSound(string surface, bool run, double rnd = -1)
        {
            if (rnd < 0) rnd = rng.NextDouble();
            return $"{surface}_{(run ? "run" : "walk")}_0{1 + System.Math.Min(2, (int)System.Math.Floor(rnd * 3))}";
        }

        public static string Store(string k, string d) => Config.Get("audio." + k, d) ?? d;

        public static void StoreSet(string k, string v) => Config.Set("audio." + k, v);

        public static float StoreFloat(string k, float d) =>
            float.TryParse(Store(k, d.ToString(CultureInfo.InvariantCulture)), NumberStyles.Float, CultureInfo.InvariantCulture, out var v) ? v : d;
    }
}
