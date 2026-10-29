// Cast de skills como no cliente: usa o motor validado do l2anim (L2Calc.ClientCast,
// = APawn::InitSkillProcess/SetSkillAnim/MagicProcess do engine.dll) para obter as fases da animacao, a taxa,
// o tween e o instante do disparo, a partir do hitTime que o servidor manda no MagicSkillUse.
// Porte de client/world/skills.ts.
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
using Newtonsoft.Json.Linq;

namespace L2Web.World
{
    /// <summary>Entrada de L2DATA.skills (n, mg, ty, cs, ac, vref, fly, vis...).</summary>
    public sealed class SkillData
    {
        public string N;
        public bool Mg;
        public string Ty;
        public string Cs;
        public string Ac;
        public string Vref;
        public float? Fly;
        public JObject Vis;
        /// <summary>Objeto original (outros campos: lv, ht, ct, rd, op, wa...).</summary>
        public JObject Raw;
    }

    public sealed class CastPhase
    {
        public string Name;
        public float Start;
        public float End;
        public float Rate;
        public bool Loop;
    }

    public sealed class CastPlan
    {
        public List<CastPhase> Phases = new();
        public float Tween;
        /// <summary>Disparo (AttackShot/MagicShot) e chegada no alvo, em segundos desde o pacote.</summary>
        public float Shot;
        public float Hit;
        public float Lead;
        public float End;
        public bool Magic;
        public bool Projectile;
        /// <summary>Notifies das fases (AttackShot, AttackPreShot, Channeling...) em segundos desde o pacote, na ordem.</summary>
        public List<(string Cls, float T)> Events = new();
        /// <summary>Duracao da 1a fase (AniDues[0]) em segundos.</summary>
        public float AniDues0;
    }

    public static class Skills
    {
        static readonly Dictionary<int, SkillData> cache = new();
        static JObject cacheFor;

        public static SkillData SkillData(int id)
        {
            var D = GameData.Data();
            if (!ReferenceEquals(cacheFor, D))
            {
                cache.Clear();
                cacheFor = D;
            }
            if (cache.TryGetValue(id, out var sd)) return sd;
            sd = null;
            if (D["skills"]?[id.ToString()] is JObject s)
            {
                var fly = s["fly"];
                sd = new SkillData
                {
                    N = (string)s["n"],
                    Mg = Truthy(s["mg"]),
                    Ty = (string)s["ty"],
                    Cs = s["cs"]?.ToString(),
                    Ac = (string)s["ac"],
                    Vref = Truthy(s["vref"]) ? s["vref"].ToString() : null,
                    Fly = fly != null && (fly.Type == JTokenType.Float || fly.Type == JTokenType.Integer) ? (float)fly : null,
                    Vis = s["vis"] as JObject,
                    Raw = s,
                };
            }
            cache[id] = sd;
            return sd;
        }

        /// <summary>Verdadeiro no sentido do JS (!!v).</summary>
        static bool Truthy(JToken v)
        {
            if (v == null) return false;
            switch (v.Type)
            {
                case JTokenType.Null:
                case JTokenType.Undefined:
                    return false;
                case JTokenType.Boolean:
                    return (bool)v;
                case JTokenType.Integer:
                case JTokenType.Float:
                    var d = (double)v;
                    return d != 0 && !double.IsNaN(d);
                case JTokenType.String:
                    return ((string)v).Length > 0;
                default:
                    return true;
            }
        }

        static int ParseCs(string cs) => int.TryParse(cs, out var v) ? v : 0;

        static float FlyOf(SkillData s)
        {
            if (s.Fly.HasValue) return s.Fly.Value;
            var ft = s.Vis?["FlyingTime"];
            if (ft != null && (ft.Type == JTokenType.Float || ft.Type == JTokenType.Integer)) return (float)ft;
            return 0;
        }

        /// <summary>
        /// Plano de animacao de um cast. kind ("player" | "npc") e modelOrNpc identificam o pawn; widx a arma; mAtkSpd do
        /// pacote de info. Devolve null se nao houver fases conhecidas (o pawn so toca a postura de espera).
        /// </summary>
        public static CastPlan CastPlan(string kind, string modelOrNpc, int widx, double mAtkSpd, int skillId, double hitTimeMs)
        {
            if (!GameData.L2DataLoaded) return null;
            var s = SkillData(skillId);
            if (s == null) return null;
            var D = GameData.Data();
            string setKey;
            JToken intTable = null;
            string npcSeq = null;
            if (kind == "player")
            {
                var m = GameData.Model(modelOrNpc);
                setKey = (string)m?["set"];
                intTable = m?["int"];
            }
            else
            {
                var n = D["npcs"]?[modelOrNpc] as JObject;
                setKey = (string)n?["set"];
                var intName = (string)n?["int"];
                intTable = !string.IsNullOrEmpty(intName) ? D["npcint"]?[intName] : null;
                var seq = n?["msa"]?[skillId.ToString()];
                npcSeq = seq != null && seq.Type != JTokenType.Null ? seq.ToString() : null;
            }
            if (string.IsNullOrEmpty(setKey)) return null;
            var fly = FlyOf(s);
            var r = L2Calc.ClientCast(D, new ClientCastOpts
            {
                HitTimeMs = hitTimeMs,
                CastSpd = mAtkSpd != 0 ? mAtkSpd : 333,
                CastStyle = ParseCs(s.Cs ?? "0"),
                AniChar = s.Ac ?? "",
                Widx = widx,
                SetKey = setKey,
                IntTable = intTable,
                HasEffect = !string.IsNullOrEmpty(s.Vref),
                FlyingTime = fly,
                NpcSeq = npcSeq,
                DefaultName = kind == "npc" ? k => Regex.Replace(k, "AnimName$", "").ToLowerInvariant() : null,
            });
            if (!r.Ok) return null;
            var phases = r.Phases.Where(p => !string.IsNullOrEmpty(p.Name))
                .Select(p => new CastPhase { Name = p.Name, Start = (float)p.Start, End = (float)p.End, Rate = (float)p.PlayRate, Loop = p.Loop })
                .ToList();
            if (phases.Count == 0) return null;
            var cs = ParseCs(s.Cs ?? "0");
            var events = new List<(string, float)>();
            if (r.Events != null) foreach (var ev in r.Events) events.Add((ev.Cls, (float)ev.T));
            return new CastPlan
            {
                Events = events,
                AniDues0 = phases[0].End - phases[0].Start,
                Phases = phases,
                Tween = (float)r.Tween,
                Shot = (float)r.Shot,
                Hit = (float)r.Hit,
                Lead = (float)r.Lead,
                End = (float)r.End,
                Magic = s.Mg,
                Projectile = r.Lead >= 0.15 && (cs == 2 || cs == 5 || cs == 8 || cs == 10 || fly >= 0.15),
            };
        }

        public static CastPlan CastPlan(string kind, int npcId, int widx, double mAtkSpd, int skillId, double hitTimeMs) =>
            CastPlan(kind, npcId.ToString(), widx, mAtkSpd, skillId, hitTimeMs);

    }
}
