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
        /// atkRate = XxxAnimRate[arma] do .int (0.8333 corpo a corpo, 1.1111 arco; 1.0 se ausente).
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
        /// timeAtk = 470000 / PAtkSpd (arco: 1500 * 345 / PAtkSpd); golpe em timeAtk/2, dual em timeAtk/4 e timeAtk/2,
        /// arco em timeAtk. kind: "melee" | "dual" | "bow".
        /// </summary>
        public static ServerHitsResult ServerHits(double pAtkSpd, string kind)
        {
            var P = Math.Max(1, pAtkSpd);
            if (kind == "bow")
            {
                var tb = (int)Math.Truncate(1500 * 345 / P);
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
    }
}
