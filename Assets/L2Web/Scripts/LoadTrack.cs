// Contagem dos carregamentos em andamento (modelos, cenario, piso BSP, terreno, geodata, texturas da interface) para a
// tela de carregamento: ela so sai quando nada esta pendente ha um tempo (o servidor continua mandando NPCs em volta).
using System;
using System.Threading.Tasks;
using UnityEngine;

namespace L2Web
{
    public struct LoadProgress
    {
        public int Total;
        public int Done;
        public int Pending;
        /// <summary>ms desde o ultimo inicio/fim de carregamento.</summary>
        public double IdleMs;
    }

    public static class LoadTrack
    {
        static int total;
        static int done;
        static double last = Now();

        public static double Now() => Time.realtimeSinceStartupAsDouble * 1000.0;

        /// <summary>Conta `p` como um carregamento ate ele terminar (com sucesso ou nao).</summary>
        public static async Task<T> Track<T>(Task<T> p)
        {
            total++;
            last = Now();
            try
            {
                return await p;
            }
            finally
            {
                done++;
                last = Now();
            }
        }

        public static async Task Track(Task p)
        {
            total++;
            last = Now();
            try
            {
                await p;
            }
            finally
            {
                done++;
                last = Now();
            }
        }

        public static LoadProgress Progress() => new LoadProgress { Total = total, Done = done, Pending = total - done, IdleMs = Now() - last };

        /// <summary>Recomeca a contagem (os pendentes continuam contando).</summary>
        public static void Reset()
        {
            total -= done;
            done = 0;
        }

        /// <summary>
        /// Espera nao haver nada pendente por `quietMs` (e pelo menos `minMs` no total), ate `maxMs`. `onTick` recebe o
        /// progresso para a barra.
        /// </summary>
        public static async Task WaitIdle(double quietMs = 700, double minMs = 0, double maxMs = 180000, Action<LoadProgress> onTick = null)
        {
            var t0 = Now();
            for (;;)
            {
                var p = Progress();
                onTick?.Invoke(p);
                var el = Now() - t0;
                if (el >= maxMs) return;
                if (el >= minMs && p.Pending == 0 && p.IdleMs >= quietMs) return;
                await Task.Delay(100);
            }
        }
    }
}
