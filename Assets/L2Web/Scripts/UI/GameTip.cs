// gametip-e.dat (FL2GameData::GameTipDataLoad, Ver413): int n; n x {d ID, d Priority, d TargetLevel, d Validity, FString TipMsg}.
// Pick = GametipWnd.OnShow (GametipWnd.uc:41-150): faixa do nivel (1/20/40/60/80), arranjo 101 (&lt; 40) ou 102, prioridade
// sorteada (Rand(99)+1: 1-50 -> 1, 51-75 -> 2, 76-90 -> 3, 91+ -> 4) e uma dica valida dessa prioridade para o nivel.
using System;
using System.Collections.Generic;

namespace L2Web.UI
{
    public sealed class GameTip
    {
        public int Id, Priority, TargetLevel;
        public bool Validity;
        public string Msg;

        public static List<GameTip> Parse(byte[] b)
        {
            var n = BitConverter.ToInt32(b, 0);
            var p = 4;
            var o = new List<GameTip>(n);
            for (var i = 0; i < n; i++)
            {
                var t = new GameTip { Id = BitConverter.ToInt32(b, p), Priority = BitConverter.ToInt32(b, p + 4), TargetLevel = BitConverter.ToInt32(b, p + 8), Validity = BitConverter.ToInt32(b, p + 12) != 0 };
                p += 16;
                t.Msg = L2Texts.FString(b, ref p);
                o.Add(t);
            }
            return o;
        }

        public static int LevelBand(int lv) => lv >= 1 && lv <= 20 ? 1 : lv >= 21 && lv <= 40 ? 20 : lv >= 41 && lv <= 60 ? 40 : lv >= 61 && lv <= 74 ? 60 : lv >= 75 && lv <= 80 ? 80 : 0;

        public static int PriorityOf(int roll) => roll <= 50 ? 1 : roll <= 75 ? 2 : roll <= 90 ? 3 : 4;

        /// <summary>Candidatas da prioridade para o nivel (na ordem do arquivo).</summary>
        public static List<string> Candidates(IList<GameTip> tips, int level, int priority)
        {
            var band = LevelBand(level);
            var arrange = level < 40 ? 101 : 102;
            var o = new List<string>();
            foreach (var t in tips)
                if (!string.IsNullOrEmpty(t.Msg) && t.Priority == priority && t.Validity && (t.TargetLevel == band || t.TargetLevel == 0 || t.TargetLevel == arrange))
                    o.Add(t.Msg);
            return o;
        }

        public static string Pick(IList<GameTip> tips, int level, Random rnd)
        {
            if (tips == null) return "";
            var c = Candidates(tips, level, PriorityOf(rnd.Next(99) + 1));
            return c.Count == 0 ? "" : c[rnd.Next(c.Count)];
        }
    }
}
