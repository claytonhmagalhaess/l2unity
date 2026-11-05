// Regras de ataque normal do cliente e do servidor, ja validadas no projeto l2anim (out/tool/calc.js):
//  - cliente (engine.dll APawn::SwordAttackProcess / BowAttackProcess): taxa e tween da animacao de ataque;
//  - servidor (aCis Creature.doAttack / Formulas.calcPAtkSpd): quando o golpe e aplicado.
// Porte de client/world/combat.ts.
using System;
using System.Collections.Generic;

namespace L2Web.World
{
    public sealed class AttackAnim
    {
        /// <summary>Atk01 / Atk02 / Atk03.</summary>
        public string Key;
        /// <summary>Multiplicador da taxa natural do clipe.</summary>
        public float Rate;
        /// <summary>Tempo de mistura (s) antes do clipe.</summary>
        public float Tween;
        public bool Ranged;
    }

    public sealed class ServerHitsResult
    {
        public int TimeAtk;
        public int[] Hits;
    }

    public static class Combat
    {
        /// <summary>Indice de arma do .int que e de longo alcance (arco, arremesso).</summary>
        public static readonly HashSet<int> RangedWidx = new() { 5, 6 };

        static readonly string[] AtkKeys = { "Atk01", "Atk02", "Atk03" };
        static readonly Random rng = new();

        static double F32(double x) => (float)x;

        /// <summary>APawn::SwordAttackProcess: rate = atkMul * AtkRate * 1.1, tween = 0.1 / (atkMul * AtkRate).</summary>
        public const double MeleeRateFactor = 1.1, MeleeTween = 0.1;
        /// <summary>APawn::BowAttackProcess: rate = AtkRate * atkMul, tween = 0.2 / (AtkRate * atkMul).</summary>
        public const double BowTween = 0.2;

        /// <summary>
        /// Corpo a corpo: Atk01..03 sorteado (appRand()%3), rate = AtkRate * atkMul * 1.1, tween = 0.1 / (AtkRate * atkMul).
        /// Arco/arremesso: sempre Atk01, rate = AtkRate * atkMul, tween = 0.2 / (AtkRate * atkMul).
        /// atkRate = XxxAnimRate[arma] do .int (0.8333 em quase tudo; 1.1111 so no arco [5] do MFighter, lineagewarrior.int; 1.0 se ausente).
        /// rand: [0, 1) (Math.random por padrao).
        /// </summary>
        public static AttackAnim AttackAnim(int widx, double atkMul, Func<string, double> atkRate, Func<double> rand = null)
        {
            var ranged = RangedWidx.Contains(widx);
            var r = rand != null ? rand() : rng.NextDouble();
            var key = ranged ? "Atk01" : AtkKeys[(int)Math.Floor(r * 3) % 3];
            var b = atkRate?.Invoke(key) ?? 0;
            var bas = b != 0 && !double.IsNaN(b) ? b : 1;
            var m = F32(atkMul != 0 && !double.IsNaN(atkMul) ? atkMul : 1);
            if (ranged) return new AttackAnim { Key = key, Rate = (float)(bas * m), Tween = (float)(BowTween / (bas * m)), Ranged = true };
            return new AttackAnim { Key = key, Rate = (float)(F32(bas * m) * MeleeRateFactor), Tween = (float)(MeleeTween / (bas * m)), Ranged = false };
        }

        /// <summary>
        /// Servidor: tempo entre ataques e momentos dos golpes (ms desde o pacote Attack).
        /// timeAtk = 470000 / PAtkSpd (arco: 1500 * 333 / PAtkSpd, aCis Creature.calculateTimeBetweenAttacks; o 345 e so
        /// do reuso do arco); golpe em timeAtk/2, dual em timeAtk/4 e timeAtk/2, arco em timeAtk. kind: "melee" | "dual" | "bow".
        /// </summary>
        public static ServerHitsResult ServerHits(double pAtkSpd, string kind)
        {
            var P = Math.Max(1, pAtkSpd);
            if (kind == "bow")
            {
                var tb = (int)Math.Truncate(1500 * 333 / P);
                return new ServerHitsResult { TimeAtk = tb, Hits = new[] { tb } };
            }
            var t = P < 2 ? 2700 : (int)Math.Truncate(470000 / P);
            if (kind == "dual")
            {
                var s = t / 2;
                return new ServerHitsResult { TimeAtk = t, Hits = new[] { s / 2, s } };
            }
            return new ServerHitsResult { TimeAtk = t, Hits = new[] { t / 2 } };
        }

        /// <summary>
        /// Golpes de corpo a corpo nos notifies AttackShot do clipe, como o UAnimNotify_AttackShot::Notify do engine.dll
        /// (so ActionID 1; MaxAtkShotNum = GetAtkShotNum = quantos AttackShot o clipe tem): o 1o notify aplica o golpe
        /// principal (hit 0) e, se o clipe so tem um notify, todos os extras do OnAssociatedAttack (pole); senao cada notify
        /// seguinte aplica o proximo extra e, sem extras, repete o golpe principal (punho/dual com um golpe so). Extras alem
        /// dos notifies nao sao aplicados. Devolve (indice do golpe, instante em s). Sem notify (clipe sem AttackShot ou
        /// fora das tabelas) cai para os instantes do servidor (fallback(i)), como o porte fazia.
        /// </summary>
        public static List<(int Hit, float T)> MeleeHitSchedule(IReadOnlyList<float> shots, int hitCount, Func<int, float> fallback)
        {
            var o = new List<(int, float)>();
            if (hitCount <= 0) return o;
            if (shots == null || shots.Count == 0)
            {
                for (var i = 0; i < hitCount; i++) o.Add((i, fallback(i)));
                return o;
            }
            var max = shots.Count;
            var extras = hitCount - 1;
            o.Add((0, shots[0]));
            if (max == 1)
            {
                for (var i = 1; i <= extras; i++) o.Add((i, shots[0]));
                return o;
            }
            for (var cur = 1; cur < max; cur++)
            {
                if (extras == 0) o.Add((0, shots[cur]));
                else if (cur - 1 < extras) o.Add((cur, shots[cur]));
                else break; // CurAtkShotNum nao avanca: os notifies seguintes nao aplicam nada
            }
            return o;
        }

        /// <summary>Flags do golpe no pacote Attack.</summary>
        public static class Hit
        {
            public const int Soulshot = 0x10;
            public const int Crit = 0x20;
            public const int Shield = 0x40;
            public const int Miss = 0x80;
        }

        /// <summary>"miss" | "crit" | "hit".</summary>
        public static string HitKind(int flags)
        {
            if ((flags & Hit.Miss) != 0) return "miss";
            if ((flags & Hit.Crit) != 0) return "crit";
            return "hit";
        }

        /// <summary>Golpe defendido pelo escudo (bit 0x40; o OnAttack guarda em pawn+0x634 bit 2).</summary>
        public static bool Shielded(int flags) => (flags & Hit.Miss) == 0 && (flags & Hit.Shield) != 0;
    }
}
