/*
 * Motor de calculo das animacoes de ataque/cast do Lineage II Interlude. Porte de l2anim/out/tool/calc.js
 * (window.L2Calc).
 *
 * Servidor: aCis 382 (Creature.doAttack / doCast, Formulas.calcPAtkSpd / calcAtkSpd).
 * Cliente : engine.dll (APawn::SwordAttackProcess, BowAttackProcess, SetSkillAnim,
 *           InitSkillProcess, MagicProcess; UGameEngine::OnUserInfo/OnCharInfo/OnNpcInfo).
 *
 * Todos os tempos do cliente estao em segundos; os do servidor em ms (como no Java).
 * As contas sao feitas em double (como no JS) e arredondadas para float (Math.fround) nos mesmos pontos.
 */
using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using Newtonsoft.Json.Linq;

namespace L2Web.World
{
    public sealed class SeqNotify
    {
        /// <summary>Tempo 0..1 dentro do clipe.</summary>
        public double Frac;
        /// <summary>Indice em notifyClasses.</summary>
        public int Cls;
        public string Extra;
    }

    /// <summary>Sequencia do conjunto de animacoes (findSeq).</summary>
    public sealed class AnimSeq
    {
        public string Name;
        public double Frames;
        public double Fps;
        public List<SeqNotify> Notifies;
        public double Dur;
    }

    public sealed class ServerAttackOpts
    {
        public double PAtkSpd;
        /// <summary>SWORD, BOW, DUAL, POLE, FIST, DUALFIST...</summary>
        public string ServerType;
        public double BowReuse;
        public bool Shield;
        public double BasePAtkSpd;
    }

    public sealed class ServerAttackResult
    {
        public double TimeAtk;
        public List<double> Hits = new();
        public double AttackEnd;
        public double ReadyToAct;
        public double Reuse;
        public double Cycle;
        public double Mult;
    }

    public sealed class ServerCastOpts
    {
        public double HitTime;
        public double CoolTime;
        public double ReuseDelay;
        public bool IsMagic;
        public double CastSpd;
        public double PAtkSpd;
        public string SkillType;
        public bool Spiritshot;
        public bool StaticHitTime;
        public bool StaticReuse;
    }

    public sealed class ServerCastResult
    {
        public double HitTime;
        public double CoolTime;
        public double Reuse;
        public double Gauge;
        public double Launch;
        public double Hit;
        public double Finalize;
    }

    public sealed class ClientAttackOpts
    {
        public int Widx;
        public double Mult;
        public bool ForceRanged;
        /// <summary>1..3 (appRand()%3 + 1); 0 = 1.</summary>
        public int AtkIndex;
        /// <summary>Tabela do .int (objeto com XxxAnimName/XxxAnimRate por indice de arma).</summary>
        public JToken IntTable;
        public Func<int, string> DefaultName;
        public string SetKey;
    }

    public sealed class CalcEvent
    {
        public double T;
        public string Cls;
        public string Extra;
        public double Frac;
        public int Phase;
    }

    public sealed class ClientAttackResult
    {
        public string Key;
        public string Name;
        public AnimSeq Seq;
        public double BaseRate;
        public double Mult;
        public double Rate;
        public double Tween;
        public double Play;
        public double Start;
        public double End;
        public List<CalcEvent> Events = new();
        public bool Ranged;
    }

    public sealed class SkillPhaseKey
    {
        public string Key;
        public string Name;
    }

    public sealed class SkillPhasesResult
    {
        public List<SkillPhaseKey> Phases = new();
        public int Stretch;
        public bool Known;
    }

    public sealed class ClientCastOpts
    {
        public double HitTimeMs;
        public double CastSpd;
        public int CastStyle;
        public string AniChar;
        public int Widx;
        public string SetKey;
        public JToken IntTable;
        public bool HasEffect;
        public double FlyingTime;
        public string NpcSeq;
        /// <summary>Nome padrao por chave (NPC: "CastShortAnimName" -> "castshort"); null = sem padrao.</summary>
        public Func<string, string> DefaultName;
    }

    public sealed class CalcPhase
    {
        public string Key;
        public string Name;
        public AnimSeq Seq;
        public double Natural;
        public double D;
        public double Start;
        public double End;
        public double PlayRate;
        public bool Loop;
    }

    public sealed class ClientCastResult
    {
        public bool Ok;
        public string Reason;
        public double Hit;
        public double M;
        public int Cs;
        public double Lead;
        public string LeadWhy;
        public double Avail;
        public double Natural;
        public double ShotOffset;
        public int ShotIdx;
        public int Stretch;
        public double Rate;
        public double Tween;
        public double Shot;
        public double End;
        public List<CalcPhase> Phases = new();
        public List<CalcEvent> Events = new();
        public List<string> Trace = new();
        public SkillPhasesResult Ph;
    }

    public static class L2Calc
    {
        /// <summary>Math.fround.</summary>
        public static double F32(double x) => (float)x;

        public static readonly string[] WeaponIdx = { "HAND", "1HS", "2HS", "DUAL", "POLE", "BOW", "THROW", "DUALFIST" };

        // ---------- utilidades de animacao ----------
        static readonly Dictionary<string, Dictionary<string, AnimSeq>> seqCache = new();
        static int shot = int.MinValue;

        /// <summary>Esquece os indices (chamado quando as tabelas do l2anim mudam).</summary>
        public static void ClearCache()
        {
            seqCache.Clear();
            shot = int.MinValue;
        }

        static Dictionary<string, AnimSeq> SeqIndex(JObject D, string setKey)
        {
            if (!seqCache.TryGetValue(setKey, out var m))
            {
                m = new Dictionary<string, AnimSeq>();
                if (D["animsets"]?[setKey]?["seqs"] is JArray seqs)
                    foreach (var t in seqs)
                    {
                        if (!(t is JArray s) || s.Count < 3) continue;
                        var seq = new AnimSeq
                        {
                            Name = (string)s[0],
                            Frames = Num(s[1]),
                            Fps = Num(s[2]),
                            Notifies = new List<SeqNotify>(),
                        };
                        seq.Dur = seq.Fps > 0 ? seq.Frames / seq.Fps : 0;
                        if (s.Count > 3 && s[3] is JArray ns)
                            foreach (var nt in ns)
                            {
                                if (!(nt is JArray n) || n.Count < 2) continue;
                                seq.Notifies.Add(new SeqNotify
                                {
                                    Frac = Num(n[0]),
                                    Cls = (int)Num(n[1]),
                                    Extra = n.Count > 2 && n[2].Type == JTokenType.String ? (string)n[2] : "",
                                });
                            }
                        // m[s[0].toLowerCase()] = s (a ultima com o mesmo nome vence, como no JS)
                        m[seq.Name.ToLowerInvariant()] = seq;
                    }
                seqCache[setKey] = m;
            }
            return m;
        }

        static double Num(JToken t)
        {
            if (t == null || t.Type == JTokenType.Null) return 0;
            if (t.Type == JTokenType.Integer || t.Type == JTokenType.Float) return (double)t;
            return double.TryParse(t.ToString(), System.Globalization.NumberStyles.Float, System.Globalization.CultureInfo.InvariantCulture, out var v) ? v : double.NaN;
        }

        public static AnimSeq FindSeq(JObject D, string setKey, string name)
        {
            if (string.IsNullOrEmpty(name) || setKey == null) return null;
            return SeqIndex(D, setKey).TryGetValue(name.ToLowerInvariant(), out var s) ? s : null;
        }

        static int ShotClass(JObject D)
        {
            if (shot == int.MinValue)
            {
                shot = -1;
                if (D["notifyClasses"] is JArray a)
                    for (var i = 0; i < a.Count; i++)
                        if ((string)a[i] == "AttackShot")
                        {
                            shot = i;
                            break;
                        }
            }
            return shot;
        }

        static string NotifyClass(JObject D, int idx) =>
            D["notifyClasses"] is JArray a && idx >= 0 && idx < a.Count ? (string)a[idx] : null;

        /// <summary>USkeletalMeshInstance::AnimGetAttackShotNotifyTimeRev: ultimo AttackShot (busca reversa), tempo 0..1.</summary>
        public static double LastShotTime(JObject D, AnimSeq seq)
        {
            if (seq == null) return 0;
            var sc = ShotClass(D);
            for (var i = seq.Notifies.Count - 1; i >= 0; i--)
                if (seq.Notifies[i].Cls == sc) return seq.Notifies[i].Frac;
            return 0;
        }

        static JToken Row(JToken intTable, string key, int widx)
        {
            if (intTable == null || intTable.Type != JTokenType.Object) return null;
            if (!(intTable[key] is JArray arr)) return null;
            return widx >= 0 && widx < arr.Count ? arr[widx] : null;
        }

        /// <summary>Resolve um nome de animacao do pawn (ex.: 'Atk01') para o indice de arma, via tabelas .int.</summary>
        public static string PawnAnimName(JToken intTable, string key, int widx, string fallback)
        {
            var v = Row(intTable, key + "AnimName", widx);
            if (v != null && v.Type == JTokenType.String && !string.IsNullOrEmpty((string)v)) return (string)v;
            // o engine le exatamente [tipoArma]; se a entrada nao existe o nome fica vazio (None)
            return string.IsNullOrEmpty(fallback) ? null : fallback;
        }

        public static double PawnAnimRate(JToken intTable, string key, int widx)
        {
            var v = Num(Row(intTable, key + "AnimRate", widx));
            // APawn::GetAtk01AnimRate: if (rate == 0) return 1.0
            return v != 0 && !double.IsNaN(v) ? F32(v) : 1.0;
        }

        // ---------- servidor (aCis) ----------

        /// <summary>CreatureStat.getAttackSpeedMultiplier(): 1.1 * PAtkSpd / basePAtkSpd (template, 300 p/ players).</summary>
        public static double AtkSpeedMultiplier(double pAtkSpd, double basePAtkSpd) => 1.1 * pAtkSpd / basePAtkSpd;

        /// <summary>Creature.calculateTimeBetweenAttacks + Formulas.calcPAtkSpd.</summary>
        public static ServerAttackResult ServerAttack(ServerAttackOpts opts)
        {
            var P = opts.PAtkSpd;
            var type = opts.ServerType;
            double timeAtk;
            if (type == "BOW") timeAtk = Math.Truncate(1500 * 345 / P);
            else timeAtk = P < 2 ? 2700 : Math.Truncate(470000 / P);
            var r = new ServerAttackResult();
            double reuse = 0;
            if (type == "BOW")
            {
                r.Hits.Add(timeAtk); // doAttackHitByBow: HitTask em sAtk = timeAtk
                if (opts.BowReuse != 0) reuse = Math.Truncate(opts.BowReuse * 345 / P);
            }
            else if (type == "DUAL" || type == "DUALFIST" || (type == "FIST" && !opts.Shield))
            {
                var s = Math.Truncate(timeAtk / 2); // doAttackHitByDual(sAtk = timeAtk/2)
                r.Hits.Add(Math.Truncate(s / 2));
                r.Hits.Add(s);
            }
            else r.Hits.Add(Math.Truncate(timeAtk / 2)); // doAttackHitSimple / Pole: timeAtk/2
            r.TimeAtk = timeAtk;
            r.AttackEnd = timeAtk - 100; // _attackEndTime = time + timeAtk - 100
            r.ReadyToAct = timeAtk; // AI READY_TO_ACT agendado em timeAtk
            r.Reuse = reuse; // arco: reuseDelay * 345 / PAtkSpd
            r.Cycle = timeAtk + reuse; // proxima flecha so apos sAtk + reuse
            r.Mult = AtkSpeedMultiplier(P, opts.BasePAtkSpd != 0 ? opts.BasePAtkSpd : 300);
            return r;
        }

        /// <summary>Creature.doCast (hitTime/coolTime/reuse) + fases do MagicUseTask.</summary>
        public static ServerCastResult ServerCast(ServerCastOpts opts)
        {
            double bas = opts.HitTime, cool = opts.CoolTime, rd = opts.ReuseDelay;
            var spd = opts.IsMagic ? opts.CastSpd : opts.PAtkSpd;
            double hit = bas, ct = cool;
            var effectWhileCasting = opts.SkillType == "FUSION" || opts.SkillType == "SIGNET_CASTTIME";
            if (!effectWhileCasting)
            {
                hit = Math.Truncate(bas * 333 / spd);
                if (cool > 0) ct = Math.Truncate(cool * 333 / spd);
            }
            if (opts.IsMagic && !effectWhileCasting && opts.Spiritshot)
            {
                hit = Math.Truncate(0.70 * hit);
                ct = Math.Truncate(0.70 * ct);
            }
            if (opts.StaticHitTime)
            {
                hit = bas;
                ct = cool;
            }
            else if (bas >= 500 && hit < 500) hit = 500;
            var reuse = rd;
            if (!opts.StaticReuse) reuse = rd * (333.0 / spd);
            var r = new ServerCastResult { HitTime = hit, CoolTime = ct, Reuse = Math.Truncate(reuse), Gauge = hit > 410 ? hit : 0 };
            if (hit > 410)
            {
                r.Launch = hit - 400; // MagicUseTask agendado em hitTime-400 ("for client animation reasons")
                r.Hit = hit; // onMagicLaunchedTimer -> +400ms -> onMagicHitTimer
            }
            else
            {
                r.Launch = 0; // hitTime <= 410: executa imediatamente
                r.Hit = 0;
            }
            r.Finalize = r.Hit + ct; // onMagicFinalizer apos coolTime
            return r;
        }

        // ---------- cliente: ataque normal ----------

        /// <summary>APawn::SwordAttackProcess (corpo a corpo) e BowAttackProcess/ShotAttackProcess/ThrowAttackProcess.</summary>
        public static ClientAttackResult ClientAttack(JObject D, ClientAttackOpts opts)
        {
            var widx = opts.Widx;
            var mult = F32(opts.Mult); // pawn+0x6B0 (float), vindo de UserInfo/CharInfo/NpcInfo
            var ranged = widx == 5 || widx == 6 || opts.ForceRanged;
            var pick = ranged ? 1 : (opts.AtkIndex != 0 ? opts.AtkIndex : 1); // arco/throw sempre Atk01; espada: appRand()%3
            var key = "Atk0" + pick;
            var name = PawnAnimName(opts.IntTable, key, widx, opts.DefaultName?.Invoke(pick));
            var baseRate = PawnAnimRate(opts.IntTable, key, widx);
            double rate, tween;
            if (ranged)
            {
                rate = F32(baseRate * mult);
                tween = F32(0.2 / (baseRate * mult));
            }
            else
            {
                rate = F32(F32(baseRate * mult) * 1.1);
                tween = F32(0.1 / (baseRate * mult));
            }
            var seq = FindSeq(D, opts.SetKey, name);
            var play = seq != null && rate > 0 ? seq.Dur / rate : 0;
            var r = new ClientAttackResult
            {
                Key = key, Name = name, Seq = seq, BaseRate = baseRate, Mult = mult, Rate = rate, Tween = tween,
                Play = play, Start = tween, End = tween + play, Ranged = ranged,
            };
            if (seq != null)
                foreach (var n in seq.Notifies)
                    r.Events.Add(new CalcEvent { T = tween + n.Frac * play, Cls = NotifyClass(D, n.Cls), Extra = n.Extra ?? "", Frac = n.Frac });
            return r;
        }

        // ---------- cliente: skill ----------
        static readonly Regex AtoI = new("^[a-i]$");
        static readonly Regex JtoL = new("^[j-l]$");

        /// <summary>APawn::SetSkillAnim -> fases; mapa ani_char extraido do engine.dll.</summary>
        /// <summary>
        /// Antecedencia do disparo em relacao ao hitTime (APawn::InitSkillProcess, 104ef65d..104ef736): com efeito visual,
        /// o FlyingTime (+0x74) se >= 0,15, senao 0 no cast_style 3 e 0,15 nos outros; sem efeito, 0,4 nos estilos de
        /// projetil (2, 10, 5, 8), 0 nos fisicos (3, 12), 2 no 14 e 0,15 no resto.
        /// </summary>
        public static (double lead, string why) SkillLead(bool hasEffect, double fly, int cs)
        {
            if (hasEffect)
            {
                if (fly >= 0.15) return (fly, "FlyingTime do efeito visual");
                if (cs == 3) return (0, "efeito sem FlyingTime e cast_style=3");
                return (0.15, "efeito sem FlyingTime");
            }
            if (cs == 2 || cs == 10 || cs == 5 || cs == 8) return (0.4, "cast_style " + cs + " (projetil)");
            if (cs == 3 || cs == 12) return (0, "cast_style " + cs + " (fisico)");
            if (cs == 14) return (2.0, "cast_style 14");
            return (0.15, "cast_style " + cs + " (padrao)");
        }

        public static SkillPhasesResult SkillPhases(JObject D, ClientCastOpts opts)
        {
            var code = (opts.AniChar ?? "").ToLowerInvariant();
            var keys = D["aniChar"]?[code] as JArray;
            if (keys != null && keys.Count == 0) keys = null; // [] e truthy no JS, mas nao ha fases
            var res = new SkillPhasesResult { Stretch = -1, Known = D["aniChar"]?[code] != null };
            if (keys != null)
            {
                if (AtoI.IsMatch(code) || code == "ms01") res.Stretch = 1; // [0x504] = 1
                else if (JtoL.IsMatch(code)) res.Stretch = 0; // [0x504] = 0
                foreach (var kt in keys)
                {
                    var k = (string)kt;
                    var nm = PawnAnimName(opts.IntTable, k, opts.Widx, opts.DefaultName?.Invoke(k));
                    res.Phases.Add(new SkillPhaseKey { Key = k, Name = nm });
                }
            }
            // NPC: GetNpcSkillAnimData (MobSkillAnimgrp) substitui a ultima fase / define fase unica
            if (!string.IsNullOrEmpty(opts.NpcSeq))
            {
                if (res.Phases.Count > 0) res.Phases[res.Phases.Count - 1] = new SkillPhaseKey { Key = "MobSkillAnim", Name = opts.NpcSeq };
                else
                {
                    res.Phases.Add(new SkillPhaseKey { Key = "MobSkillAnim", Name = opts.NpcSeq });
                    res.Stretch = -1;
                }
            }
            return res;
        }

        /// <summary>APawn::InitSkillProcess (decompilado em 0x104EF470).</summary>
        public static ClientCastResult ClientCast(JObject D, ClientCastOpts opts)
        {
            var hit = F32(opts.HitTimeMs / 1000); // MagicSkillUse.hitTime -> FNMagicInfo+0x20 (pawn+0x510)
            var m = F32(opts.CastSpd / 333); // pawn+0x6B8 = MAtkSpd / 333 (UserInfo)
            var cs = opts.CastStyle; // FL2MagicSkillData+0x30 = skillgrp.cast_style
            var ph = SkillPhases(D, opts);
            var n = ph.Phases.Count;
            var trace = new List<string>();
            var phases = new List<CalcPhase>();
            foreach (var p in ph.Phases)
            {
                var seq = FindSeq(D, opts.SetKey, p.Name);
                phases.Add(new CalcPhase { Key = p.Key, Name = p.Name, Seq = seq, Natural = seq?.Dur ?? 0, D = 0 });
            }
            if (n == 0)
                return new ClientCastResult { Ok = false, Reason = "ani_char sem fases (" + (string.IsNullOrEmpty(opts.AniChar) ? "vazio" : opts.AniChar) + ")", Ph = ph };

            // 1) duracoes naturais (frames/fps) e tempo ate o ultimo AttackShot
            double fs24 = 0, fs1c = 0;
            var shotIdx = -1;
            for (var i = n - 1; i >= 0; i--)
            {
                var p = phases[i];
                if (p.Seq == null || p.Seq.Fps <= 0 || ph.Stretch == i)
                {
                    p.D = 0;
                    continue;
                }
                p.D = F32(p.Seq.Frames / p.Seq.Fps);
                if (fs24 == 0)
                {
                    fs24 = F32(LastShotTime(D, p.Seq) * p.D);
                    shotIdx = i;
                    fs1c = fs24;
                }
                else fs1c = F32(fs1c + p.D);
            }
            if (fs1c == 0)
            {
                fs24 = phases[n - 1].D;
                shotIdx = n - 1;
                for (var j = 0; j < n; j++) fs1c = F32(fs1c + phases[j].D);
                trace.Add("Nenhum AttackShot nas fases: usa duracao total como natural.");
            }

            // 2) lead (antecedencia do disparo em relacao ao hitTime)
            var (lead, leadWhy) = SkillLead(opts.HasEffect, opts.FlyingTime, cs);
            lead = F32(lead);
            var avail = F32(hit - lead);

            // 3) rate e duracao da fase esticada
            double rate, tween;
            var s = ph.Stretch;
            if (s < 0)
            {
                rate = F32(fs1c / (avail - 0.2));
                tween = F32(0.2);
                trace.Add("Sem fase esticavel: rate = natural / (hitTime - lead - 0.2).");
            }
            else
            {
                if (cs == 13)
                {
                    phases[s].D = F32(avail - (fs1c + 0.2));
                    tween = F32(0.2);
                }
                else
                {
                    phases[s].D = F32(avail - (fs1c + 0.2) / m);
                    tween = F32(0.2 / m);
                }
                var alt = F32(avail - 0.2 / m);
                if (phases[s].D >= 0 || alt <= 0.0001)
                {
                    rate = m;
                    trace.Add("Fase esticada \"" + phases[s].Key + "\" absorve a sobra; rate = CastSpd/333.");
                }
                else
                {
                    rate = F32(fs1c / alt);
                    phases[s].D = 0;
                    trace.Add("hitTime curto demais: fase esticada zerada, rate = natural / (hitTime - lead - 0.2/m).");
                }
            }

            // 4) cronograma (fim de cada fase e momento do disparo)
            double t = tween, shotT = 0;
            for (var k = 0; k < n; k++)
            {
                var q = phases[k];
                q.Start = t;
                if (k == shotIdx)
                {
                    if (rate <= 0) shotT = t;
                    else if (cs == 13) shotT = F32(t + fs24);
                    else shotT = F32(t + fs24 / rate);
                }
                if (k == s || rate <= 0) q.End = F32(t + q.D);
                else
                {
                    q.End = F32(t + (cs == 13 ? q.D : q.D / rate));
                    if (lead >= 0.15 && k == 0 && n > 1)
                    {
                        q.End = F32(q.End - q.End / (hit - lead) * 0.15);
                        trace.Add("lead >= 0.15: fim da 1a fase antecipado em 0.15*fim/(hitTime-lead).");
                    }
                }
                q.PlayRate = cs == 13 ? 1.0 : rate; // MagicProcess: rate 1.0 se cast_style 13
                q.Loop = k == s;
                t = q.End;
            }
            // eventos de notify dentro de cada fase (para a fase em loop, repete enquanto durar)
            var events = new List<CalcEvent>();
            for (var idx = 0; idx < phases.Count; idx++)
            {
                var q = phases[idx];
                if (q.Seq == null || q.End <= q.Start) continue;
                var segDur = q.Seq.Dur / q.PlayRate;
                var tt = q.Start;
                var guard = 0;
                do
                {
                    foreach (var nn in q.Seq.Notifies)
                    {
                        var at = tt + nn.Frac * segDur;
                        if (at <= q.End + 1e-6) events.Add(new CalcEvent { T = at, Cls = NotifyClass(D, nn.Cls), Extra = nn.Extra ?? "", Phase = idx, Frac = nn.Frac });
                    }
                    tt += segDur;
                    guard++;
                } while (q.Loop && tt < q.End && guard < 200);
            }
            return new ClientCastResult
            {
                Ok = true, Hit = hit, M = m, Cs = cs, Lead = lead, LeadWhy = leadWhy, Avail = avail, Natural = fs1c,
                ShotOffset = fs24, ShotIdx = shotIdx, Stretch = s, Rate = rate, Tween = tween, Shot = shotT,
                End = t, Phases = phases, Events = events, Trace = trace, Ph = ph,
            };
        }
    }
}
