// Efeitos legados fixos no codigo (spec 09 §3): tabela legacy_skill_fx.json (scripts/legacy_fx_table.py, execucao simbolica
// de APawn::SkillEffectInit 0x10311cca, SkillEffectChanneling 0x103113bf, SkillEffectPreShot 0x10313610, SkillEffectShot
// 0x10307cf7, ANSkillProjectile::SkillEffectExplosion 0x1030293c e APawn::SpawnNTransientEffect 0x1030f646) com as chamadas
// a AActor::SpawnSkillEffect (semantica §3.3, corpo 0x104eeec0), ULevel::SpawnActor, AttachToBone, setPhysics, SetSizeScale,
// AdjustparticleLife, SetDelayed e AttachTrailer. As expressoes dos argumentos (offsets, condicoes "when", valores) sao
// avaliadas por um interprete pequeno com o estado do pawn/projetil. [O] tabela; [I] onde marcado.
using System;
using System.Collections.Generic;
using System.Globalization;
using System.Text.RegularExpressions;
using Newtonsoft.Json.Linq;
using UnityEngine;

namespace L2Web.Render.Fx
{
    /// <summary>Valor do interprete: numero, vetor, rotator, ator, nome ou nulo.</summary>
    public readonly struct FxVal
    {
        public enum K { Null, Num, Vec, Rot, Actor, Name, Mesh, Magic, Fx }
        public readonly K Kind;
        public readonly float N;
        public readonly Vector3 V;
        public readonly FRotator R;
        public readonly object O;

        FxVal(K k, float n, Vector3 v, FRotator r, object o) { Kind = k; N = n; V = v; R = r; O = o; }
        public static readonly FxVal Null = new(K.Null, 0, default, default, null);
        public static FxVal Num(float n) => new(K.Num, n, default, default, null);
        public static FxVal Vec(Vector3 v) => new(K.Vec, 0, v, default, null);
        public static FxVal Rot(FRotator r, float scale = 1) => new(K.Rot, scale, default, r, null);
        public static FxVal Actor(IFxActor a) => a == null ? Null : new(K.Actor, 0, default, default, a);
        public static FxVal Name(string s) => new(K.Name, 0, default, default, s);
        public static FxVal Obj(K k, object o) => o == null ? Null : new(k, 0, default, default, o);

        /// <summary>Escalar: numero, 1o componente do vetor (X) ou do rotator (Pitch), ponteiro != 0.</summary>
        public float Scalar => Kind switch
        {
            K.Num => N, K.Vec => V.x, K.Rot => R.Pitch, K.Null => 0, K.Name => (string)O == "None" ? 0 : 1, _ => 1,
        };
        public bool IsNull => Kind == K.Null;
        public IFxActor AsActor => O as IFxActor;
        public override string ToString() => Kind switch { K.Num => N.ToString(CultureInfo.InvariantCulture), K.Vec => V.ToString(), K.Rot => R.ToString(), K.Null => "null", _ => Kind + ":" + O };
    }

    /// <summary>Estado disponivel as expressoes da tabela.</summary>
    public sealed class LegacyCtx
    {
        public IFxActor This;
        public IFxActor TargetPawn;
        public IFxActor HitActor;
        public Vector3 HitNormal = new Vector3(0, 0, 1);
        public Vector3 LastTargetLocation;
        public IFxActor Owner;
        public int SkillLevel;
        public int AssocIndex;
        public bool KeepMinFrameRate;
        public float MagicSpeed = 333;
        public int CurWeaponType;
        public int AttackItemClassID;
        public bool BowLH, BowRH;
        public readonly List<FxEmitterActor> Spawned = new();
        public Func<IFxActor, bool, float> WeaponLength = (_, _) => 0;
        public Func<IFxActor, string> DamageEffect = _ => null;
        public FxMagicInfo Magic => This?.MagicInfo;
    }

    /// <summary>Interprete das expressoes (offset, location, rotation, value, when) da tabela legada.</summary>
    public sealed class LegacyExpr
    {
        readonly string s;
        int p;
        readonly LegacyCtx c;

        LegacyExpr(string src, LegacyCtx ctx) { s = src; c = ctx; }

        public static FxVal Eval(string src, LegacyCtx ctx)
        {
            if (string.IsNullOrEmpty(src)) return FxVal.Null;
            src = src.Trim();
            if (src.StartsWith("<") && src.EndsWith(">")) src = src.Substring(1, src.Length - 2);
            try
            {
                var e = new LegacyExpr(src, ctx);
                var v = e.ParseExpr();
                return v;
            }
            catch (Exception)
            {
                return FxVal.Null;
            }
        }

        public static float Scalar(string src, LegacyCtx ctx) => Eval(src, ctx).Scalar;

        /// <summary>Condicao "when": "a == b", "a != b", "a in [1..5]", "x not in [..]", "'None'" como nome.</summary>
        public static bool Cond(string w, LegacyCtx ctx)
        {
            if (string.IsNullOrWhiteSpace(w)) return true;
            w = w.Trim();
            var m = Regex.Match(w, @"^(.+?)\s+(not in|in)\s+\[(.+)\]$");
            if (m.Success)
            {
                var v = Scalar(m.Groups[1].Value, ctx);
                var inside = false;
                foreach (var part in m.Groups[3].Value.Split(','))
                {
                    var r = part.Trim().Split(new[] { ".." }, StringSplitOptions.None);
                    if (r.Length == 2) inside |= v >= float.Parse(r[0], CultureInfo.InvariantCulture) && v <= float.Parse(r[1], CultureInfo.InvariantCulture);
                    else if (float.TryParse(r[0], NumberStyles.Float, CultureInfo.InvariantCulture, out var x)) inside |= Mathf.Abs(v - x) < 1e-6f;
                }
                return m.Groups[2].Value == "in" ? inside : !inside;
            }
            m = Regex.Match(w, @"^(.+?)\s+(==|!=|>=|<=|>|<)\s+(.+)$");
            if (!m.Success) return Scalar(w, ctx) != 0;
            var ls = m.Groups[1].Value.Trim();
            var rs = m.Groups[3].Value.Trim();
            var op = m.Groups[2].Value;
            // soulshot.int[CurWeaponType=this.CurWeaponType].RH / LH
            if (ls.StartsWith("soulshot.int["))
            {
                var hand = ls.EndsWith(".RH") ? (ctx.BowRH ? 1 : 0) : ls.EndsWith(".LH") ? (ctx.BowLH ? 1 : 0) : 0;
                return Cmp(hand, float.Parse(rs, CultureInfo.InvariantCulture), op);
            }
            if (ls == "GL2KeepMinFrameRate" || ls == "GLNKeepMinFrameRate") return Cmp(ctx.KeepMinFrameRate ? 1 : 0, float.Parse(rs, CultureInfo.InvariantCulture), op);
            if (ls.StartsWith("IsA("))
            {
                var inner = ls.Substring(4).TrimEnd(')').Split(',');
                var v = Eval(inner[0], ctx);
                var ok = v.Kind == FxVal.K.Mesh;
                return Cmp(ok ? 1 : 0, float.Parse(rs, CultureInfo.InvariantCulture), op);
            }
            var l = Eval(ls, ctx);
            if (rs.StartsWith("'"))
            {
                var name = rs.Trim('\'');
                var ln = l.Kind == FxVal.K.Name ? (string)l.O : l.IsNull ? "None" : "?";
                return op == "==" ? ln == name : ln != name;
            }
            if (rs == "this") return op == "==" ? ReferenceEquals(l.O, ctx.This) : !ReferenceEquals(l.O, ctx.This);
            var r2 = Eval(rs, ctx);
            float lv = l.Kind == FxVal.K.Actor || l.Kind == FxVal.K.Mesh || l.Kind == FxVal.K.Fx ? 1 : l.Scalar;
            return Cmp(lv, r2.Scalar, op);
        }

        static bool Cmp(float a, float b, string op) => op switch
        {
            "==" => Mathf.Abs(a - b) < 1e-6f, "!=" => Mathf.Abs(a - b) >= 1e-6f, ">" => a > b, "<" => a < b, ">=" => a >= b, "<=" => a <= b, _ => false,
        };

        // ------------------------------------------------------------------ parser

        char Cur => p < s.Length ? s[p] : '\0';
        void Skip() { while (p < s.Length && char.IsWhiteSpace(s[p])) p++; }

        FxVal ParseExpr()
        {
            var v = ParseTerm();
            while (true)
            {
                Skip();
                if (Cur == '+' && !(p + 1 < s.Length && s[p + 1] == '0' && p + 2 < s.Length && s[p + 2] == 'x')) { p++; v = Add(v, ParseTerm(), 1); }
                else if (Cur == '-') { p++; v = Add(v, ParseTerm(), -1); }
                else break;
            }
            return v;
        }

        FxVal ParseTerm()
        {
            var v = ParseUnary();
            while (true)
            {
                Skip();
                if (Cur == '*')
                {
                    p++;
                    // "rot(...)*(x,y,z).X": o membro depois da tupla vale para o produto
                    var r = ParseOperand(out var tuple);
                    v = Mul(v, r);
                    if (tuple) v = ParsePostfix(v);
                }
                else if (Cur == '/') { p++; var d = ParseUnary().Scalar; v = d == 0 ? FxVal.Num(0) : v.Kind == FxVal.K.Vec ? FxVal.Vec(v.V / d) : FxVal.Num(v.Scalar / d); }
                else break;
            }
            return v;
        }

        FxVal ParseUnary()
        {
            Skip();
            if (Cur == '-') { p++; var v = ParseUnary(); return v.Kind == FxVal.K.Vec ? FxVal.Vec(-v.V) : FxVal.Num(-v.Scalar); }
            return ParsePostfix(ParsePrimary());
        }

        /// <summary>Operando de produto: tupla "(x,y,z)" sem o posfixo (fica para o produto); o resto com posfixo.</summary>
        FxVal ParseOperand(out bool tuple)
        {
            Skip();
            tuple = false;
            if (Cur == '-') { p++; var v = ParseOperand(out tuple); return v.Kind == FxVal.K.Vec ? FxVal.Vec(-v.V) : FxVal.Num(-v.Scalar); }
            if (Cur == '(')
            {
                var save = p;
                var prim = ParsePrimary();
                if (prim.Kind == FxVal.K.Vec && IsTupleAt(save)) { tuple = true; return prim; }
                return ParsePostfix(prim);
            }
            return ParsePostfix(ParsePrimary());
        }

        /// <summary>true se o parentese em `at` tem uma virgula no nivel de cima (tupla literal).</summary>
        bool IsTupleAt(int at)
        {
            var depth = 0;
            for (var i = at; i < s.Length; i++)
            {
                if (s[i] == '(') depth++;
                else if (s[i] == ')') { depth--; if (depth == 0) return false; }
                else if (s[i] == ',' && depth == 1) return true;
            }
            return false;
        }

        FxVal ParsePrimary()
        {
            Skip();
            if (Cur == '(')
            {
                p++;
                var a = ParseExpr();
                Skip();
                if (Cur == ',')
                {
                    p++;
                    var b = ParseExpr();
                    Skip();
                    FxVal cc = FxVal.Num(0);
                    if (Cur == ',') { p++; cc = ParseExpr(); }
                    Skip();
                    if (Cur == ')') p++;
                    return FxVal.Vec(new Vector3(a.Scalar, b.Scalar, cc.Scalar));
                }
                if (Cur == ')') p++;
                return a;
            }
            if (Cur == '<')
            {
                p++;
                var v = ParseExpr();
                Skip();
                if (Cur == '>') p++;
                return v;
            }
            if (Cur == '[')
            {
                // "[0+this.MagicInfo.AssociatedActor.Data*1]" = AssociatedActor[i]
                var close = s.IndexOf(']', p);
                var inner = close > p ? s.Substring(p + 1, close - p - 1) : "";
                p = close >= 0 ? close + 1 : s.Length;
                if (inner.Contains("AssociatedActor")) return FxVal.Actor(Assoc(c.AssocIndex));
                return FxVal.Null;
            }
            if (char.IsDigit(Cur) || Cur == '.' && p + 1 < s.Length && char.IsDigit(s[p + 1]))
            {
                var st = p;
                if (Cur == '0' && p + 1 < s.Length && s[p + 1] == 'x')
                {
                    p += 2;
                    while (p < s.Length && Uri.IsHexDigit(s[p])) p++;
                    return FxVal.Num(Convert.ToInt32(s.Substring(st + 2, p - st - 2), 16));
                }
                while (p < s.Length && (char.IsDigit(s[p]) || s[p] == '.' || s[p] == 'e' || s[p] == 'E' && p + 1 < s.Length && (char.IsDigit(s[p + 1]) || s[p + 1] == '-'))) p++;
                return FxVal.Num(float.Parse(s.Substring(st, p - st), CultureInfo.InvariantCulture));
            }
            if (Cur == '\'')
            {
                // literal entre aspas: 'None' ou '<expressao>'
                var close = s.IndexOf('\'', p + 1);
                var inner = close > p ? s.Substring(p + 1, close - p - 1) : "";
                p = close >= 0 ? close + 1 : s.Length;
                if (inner.StartsWith("<") && inner.EndsWith(">")) return Eval(inner.Substring(1, inner.Length - 2), c);
                return FxVal.Name(inner);
            }
            var id = ReadIdent();
            if (id.Length == 0) { p++; return FxVal.Null; }
            if (id == "MatchRefBone")
            {
                // argumento cru: nome de osso (bone01, "bip01 ponytail2nub") ou str('<...>')
                Skip();
                var close = MatchParen(p);
                var raw = close > p ? s.Substring(p + 1, close - p - 1) : "";
                p = close >= 0 ? close + 1 : s.Length;
                string bone;
                if (raw.StartsWith("str(")) { var v = Eval(raw.Substring(4).TrimEnd(')'), c); bone = v.Kind == FxVal.K.Name ? (string)v.O : null; }
                else bone = raw.Trim();
                return FxVal.Num(!string.IsNullOrEmpty(bone) && bone != "None" && c.This?.Bone(bone) != null ? 0 : -1);
            }
            Skip();
            if (Cur == '<')
            {
                // Cast<T>(x)
                var close = s.IndexOf('>', p);
                var type = s.Substring(p + 1, close - p - 1);
                p = close + 1;
                Skip();
                var arg = ParseArgs();
                return Cast(type, arg.Count > 0 ? arg[0] : FxVal.Null);
            }
            if (Cur == '(')
            {
                var args = ParseArgs();
                return Call(id, args);
            }
            return Ident(id);
        }

        int MatchParen(int at)
        {
            var depth = 0;
            for (var i = at; i < s.Length; i++)
            {
                if (s[i] == '(') depth++;
                else if (s[i] == ')') { depth--; if (depth == 0) return i; }
            }
            return -1;
        }

        string ReadIdent()
        {
            var st = p;
            while (p < s.Length && (char.IsLetterOrDigit(s[p]) || s[p] == '_' || s[p] == '?' || s[p] == ':' || s[p] == '@' || s[p] == '$')) p++;
            return s.Substring(st, p - st);
        }

        List<FxVal> ParseArgs()
        {
            var l = new List<FxVal>();
            Skip();
            if (Cur != '(') return l;
            p++;
            Skip();
            if (Cur == ')') { p++; return l; }
            while (true)
            {
                l.Add(ParseExpr());
                Skip();
                if (Cur == ',') { p++; continue; }
                if (Cur == ')') p++;
                break;
            }
            return l;
        }

        FxVal ParsePostfix(FxVal v)
        {
            while (true)
            {
                Skip();
                if (Cur == '.')
                {
                    p++;
                    if (Cur == '+')
                    {
                        // ".+0x1bc" = campo por offset
                        p++;
                        var st = p;
                        p += 2;
                        while (p < s.Length && Uri.IsHexDigit(s[p])) p++;
                        var off = Convert.ToInt32(s.Substring(st + 2, p - st - 2), 16);
                        v = Offset(v, off);
                        continue;
                    }
                    var m = ReadIdent();
                    Skip();
                    if (Cur == '(') { var args = ParseArgs(); v = Method(v, m, args); continue; }
                    v = Member(v, m);
                    continue;
                }
                if (Cur == '[')
                {
                    p++;
                    var idx = ParseExpr();
                    Skip();
                    if (Cur == ']') p++;
                    v = Index(v, (int)idx.Scalar);
                    continue;
                }
                return v;
            }
        }

        // ------------------------------------------------------------------ semantica

        static FxVal Add(FxVal a, FxVal b, float sign)
        {
            if (a.Kind == FxVal.K.Vec && b.Kind == FxVal.K.Vec) return FxVal.Vec(a.V + sign * b.V);
            if (a.Kind == FxVal.K.Vec) return FxVal.Vec(a.V + sign * new Vector3(b.Scalar, b.Scalar, b.Scalar));
            return FxVal.Num(a.Scalar + sign * b.Scalar);
        }

        static FxVal Mul(FxVal a, FxVal b)
        {
            if (a.Kind == FxVal.K.Rot && b.Kind == FxVal.K.Vec) return FxVal.Vec(FxMath.RotateVector(b.V, a.R) * a.N);
            if (a.Kind == FxVal.K.Vec && b.Kind == FxVal.K.Rot) return FxVal.Vec(FxMath.RotateVector(a.V, b.R) * b.N);
            if (a.Kind == FxVal.K.Rot && b.Kind == FxVal.K.Num) return FxVal.Rot(a.R, a.N * b.N);
            if (a.Kind == FxVal.K.Num && b.Kind == FxVal.K.Rot) return FxVal.Rot(b.R, b.N * a.N);
            if (a.Kind == FxVal.K.Vec && b.Kind == FxVal.K.Vec) return FxVal.Vec(FxMath.Mul(a.V, b.V));
            if (a.Kind == FxVal.K.Vec) return FxVal.Vec(a.V * b.Scalar);
            if (b.Kind == FxVal.K.Vec) return FxVal.Vec(b.V * a.Scalar);
            return FxVal.Num(a.Scalar * b.Scalar);
        }

        IFxActor Assoc(int i)
        {
            var l = c.Magic?.AssociatedActor;
            if (l == null || l.Count == 0) return null;
            return l[Mathf.Clamp(i, 0, l.Count - 1)];
        }

        FxVal Ident(string id)
        {
            switch (id)
            {
                case "this": return FxVal.Actor(c.This);
                case "Target": return FxVal.Actor(c.TargetPawn);
                case "HitActor": return FxVal.Actor(c.HitActor);
                case "HitNormal": return FxVal.Vec(c.HitNormal);
                case "GL2KeepMinFrameRate": case "GLNKeepMinFrameRate": return FxVal.Num(c.KeepMinFrameRate ? 1 : 0);
                case "None": return FxVal.Name("None");
                case "soulshot": return FxVal.Null;
                default:
                    if (id.StartsWith("fx") && int.TryParse(id.Substring(2), out var n) && n >= 1 && n <= c.Spawned.Count) return FxVal.Obj(FxVal.K.Fx, c.Spawned[n - 1]);
                    if (id.StartsWith("st") || id.StartsWith("stk_") || id.StartsWith("ret_")) return FxVal.Num(0); // [N] retorno nao modelado
                    return FxVal.Null;
            }
        }

        FxVal Call(string fn, List<FxVal> args)
        {
            switch (fn)
            {
                case "rot":
                    return FxVal.Rot(new FRotator(FxMath.Ftol(args.Count > 0 ? args[0].Scalar : 0), FxMath.Ftol(args.Count > 1 ? args[1].Scalar : 0), FxMath.Ftol(args.Count > 2 ? args[2].Scalar : 0)));
                case "Rotation":
                    return FxVal.Rot(FxMath.VectorToRotator(args.Count >= 3 ? new Vector3(args[0].Scalar, args[1].Scalar, args[2].Scalar) : args.Count > 0 && args[0].Kind == FxVal.K.Vec ? args[0].V : Vector3.zero));
                case "MatchRefBone":
                    return FxVal.Num(args.Count > 0 && c.This?.Bone(args[0].O as string ?? "") != null ? 0 : -1);
                case "str": case "class":
                    return args.Count > 0 ? args[0] : FxVal.Null;
                default:
                    return FxVal.Null;
            }
        }

        FxVal Cast(string type, FxVal v)
        {
            switch (type)
            {
                case "APawn": return v.AsActor != null && v.AsActor.IsPawn ? v : FxVal.Null;
                case "AActor": return v;
                case "AMover": return FxVal.Null;
                case "AEmitter": return v;
                case "USkeletalMesh": return v.Kind == FxVal.K.Mesh ? v : FxVal.Null;
                default: return v;
            }
        }

        /// <summary>Campos por offset de AActor/APawn (layout_actor.txt): 0x1bc Location, 0x1c8 Rotation, 0x2f0 CollisionRadius, 0x2f4 CollisionHeight; mesh +0x98 altura, +0x150 comprimento da arma [N].</summary>
        FxVal Offset(FxVal v, int off)
        {
            if (v.Kind == FxVal.K.Actor)
            {
                var a = v.AsActor;
                switch (off)
                {
                    case 0x1bc: return FxVal.Num(a.Location.x);
                    case 0x1c0: return FxVal.Num(a.Location.y);
                    case 0x1c4: return FxVal.Num(a.Location.z);
                    case 0x1c8: return FxVal.Num(a.Rotation.Pitch);
                    case 0x1cc: return FxVal.Num(a.Rotation.Yaw);
                    case 0x1d0: return FxVal.Num(a.Rotation.Roll);
                    case 0x2f0: return FxVal.Num(a.CollisionRadius);
                    case 0x2f4: return FxVal.Num(a.CollisionHeight);
                    case 0x0: return v;
                    default: return FxVal.Num(0);
                }
            }
            if (v.Kind == FxVal.K.Mesh)
            {
                var m = (MeshRef)v.O;
                switch (off)
                {
                    case 0x98: return FxVal.Num(m.Height);
                    case 0x150: case 0x154: return FxVal.Num(m.Length);
                    case 0x0: return FxVal.Num(m.Length);
                    default: return FxVal.Num(0);
                }
            }
            if (off == 0x0) return v;
            return FxVal.Num(0);
        }

        sealed class MeshRef { public float Height, Length; }

        FxVal Member(FxVal v, string m)
        {
            if (v.Kind == FxVal.K.Vec)
                return m switch { "X" => FxVal.Num(v.V.x), "Y" => FxVal.Num(v.V.y), "Z" => FxVal.Num(v.V.z), _ => FxVal.Null };
            if (v.Kind == FxVal.K.Rot)
                return m switch { "Pitch" => FxVal.Num(v.R.Pitch), "Yaw" => FxVal.Num(v.R.Yaw), "Roll" => FxVal.Num(v.R.Roll), _ => FxVal.Null };
            if (v.Kind == FxVal.K.Actor)
            {
                var a = v.AsActor;
                switch (m)
                {
                    case "Location": return FxVal.Vec(a.Location);
                    case "Rotation": case "DesiredRotation": return FxVal.Rot(a.Rotation);
                    case "CollisionRadius": return FxVal.Num(a.CollisionRadius);
                    case "CollisionHeight": return FxVal.Num(a.CollisionHeight);
                    case "TargetPawn": return FxVal.Actor(a.MagicInfo?.TargetPawn ?? c.TargetPawn);
                    case "TargetActor": return FxVal.Actor(c.TargetPawn);
                    case "MagicInfo": return FxVal.Obj(FxVal.K.Magic, a.MagicInfo);
                    case "Owner": return FxVal.Actor(c.Owner);
                    case "SkillLevel": return FxVal.Num(c.SkillLevel);
                    case "bNpc": return FxVal.Num(a.IsNpc ? 1 : 0);
                    case "Mesh": return a.HasSkeletalMesh ? FxVal.Obj(FxVal.K.Mesh, new MeshRef { Height = a.MeshHeight, Length = a.MeshHeight }) : FxVal.Null;
                    case "LeftHandMesh": { var l = c.WeaponLength(a, false); return l > 0 ? FxVal.Obj(FxVal.K.Mesh, new MeshRef { Height = l, Length = l }) : FxVal.Null; }
                    case "RightHandMesh": { var l = c.WeaponLength(a, true); return l > 0 ? FxVal.Obj(FxVal.K.Mesh, new MeshRef { Height = l, Length = l }) : FxVal.Null; }
                    case "ExtraMeshDatas": { var l = c.WeaponLength(a, true); return FxVal.Obj(FxVal.K.Mesh, new MeshRef { Height = l, Length = l }); }
                    case "StaticMesh": return v;
                    case "RightHandBone": return FxVal.Name(a.RHandBoneName ?? "None");
                    case "LeftHandBone": return FxVal.Name(a.LHandBoneName ?? "None");
                    case "RidePawn": return FxVal.Null;
                    case "AttackItemClassID": return FxVal.Num(c.AttackItemClassID);
                    case "CurWeaponType": return FxVal.Num(c.CurWeaponType);
                    case "LastTargetLocation": return FxVal.Vec(a.IsProjectile ? a.LastTargetLocation : c.LastTargetLocation);
                    case "NSkillProjectileActor": return FxVal.Null;
                    case "DamageEffect": return FxVal.Name(c.DamageEffect(a) ?? "None");
                    case "SkillSpeedRate": return FxVal.Num(a.MagicInfo?.SkillSpeedRate ?? 1);
                    case "XLevel": return FxVal.Num(1);
                    case "bRide": return FxVal.Num(0);
                    default: return FxVal.Null;
                }
            }
            if (v.Kind == FxVal.K.Magic)
            {
                var mi = (FxMagicInfo)v.O;
                switch (m)
                {
                    case "ShotTime": return FxVal.Num(mi.ShotTime);
                    case "PendingNotify": return FxVal.Num(mi.PendingNotify);
                    case "bTargetExcepted": return FxVal.Num(mi.bTargetExcepted ? 1 : 0);
                    case "AssociatedActor": return FxVal.Obj(FxVal.K.Fx, mi.AssociatedActor);
                    case "LocList": return FxVal.Obj(FxVal.K.Fx, mi.LocList);
                    case "MagicSpeed": return FxVal.Num(c.MagicSpeed);
                    case "AniDues": return FxVal.Obj(FxVal.K.Fx, new List<float> { mi.AniDues0 });
                    case "StageShot": return FxVal.Num(mi.StageShot);
                    case "SkillLevel": return FxVal.Num(mi.LevelID);
                    case "MagicID": return FxVal.Num(mi.MagicID);
                    case "TargetPawn": return FxVal.Actor(mi.TargetPawn);
                    default: return FxVal.Null;
                }
            }
            if (v.Kind == FxVal.K.Mesh) return v;
            if (v.Kind == FxVal.K.Fx && v.O is List<IFxActor> && m == "Data") return v;
            return FxVal.Null;
        }

        FxVal Method(FxVal v, string m, List<FxVal> args)
        {
            var a = v.AsActor;
            switch (m)
            {
                case "GetRHandBoneName": return FxVal.Name(a?.RHandBoneName ?? "None");
                case "GetLHandBoneName": return FxVal.Name(a?.LHandBoneName ?? "None");
                case "GetLArmBoneName": return FxVal.Name(a != null && a.Bone("Bip01_L_UpperArm") != null ? "Bip01_L_UpperArm" : a?.LHandBoneName ?? "None"); // [I]
                default: return FxVal.Null;
            }
        }

        FxVal Index(FxVal v, int i)
        {
            if (v.O is List<IFxActor> la) return FxVal.Actor(la.Count == 0 ? null : la[Mathf.Clamp(c.AssocIndex >= 0 && la.Count > 1 ? c.AssocIndex : i, 0, la.Count - 1)]);
            if (v.O is List<Vector3> lv) return lv.Count == 0 ? FxVal.Vec(c.This?.Location ?? Vector3.zero) : FxVal.Vec(lv[Mathf.Clamp(i, 0, lv.Count - 1)]);
            if (v.O is List<float> lf) return lf.Count == 0 ? FxVal.Num(0) : FxVal.Num(lf[Mathf.Clamp(i, 0, lf.Count - 1)]);
            return v; // ExtraMeshDatas[0] etc.
        }
    }

    /// <summary>Executor das funcoes legadas.</summary>
    public sealed class LegacyFx
    {
        public readonly SkillFx Fx;
        public JObject Table = new();
        public JObject Soulshot = new();
        public bool KeepMinFrameRate;
        public Func<IFxActor, bool, float> WeaponLength = (_, _) => 0;
        public Func<IFxActor, string> DamageEffect = _ => null;
        readonly bool log = Array.IndexOf(Environment.GetCommandLineArgs(), "-l2fxlog") >= 0;

        public const string FnInit = "APawn::SkillEffectInit", FnChanneling = "APawn::SkillEffectChanneling", FnPreShot = "APawn::SkillEffectPreShot",
            FnShot = "APawn::SkillEffectShot", FnExplosion = "ANSkillProjectile::SkillEffectExplosion", FnTransient = "APawn::SpawnNTransientEffect";

        public LegacyFx(SkillFx fx) { Fx = fx; }

        public JObject Case(string fn, int id) => Table?[fn]?["cases"]?[id.ToString()] as JObject;

        /// <summary>Pede os assets de todas as classes literais dos casos legados da skill.</summary>
        public void Prefetch(int skillId)
        {
            foreach (var fn in new[] { FnInit, FnChanneling, FnPreShot, FnShot, FnExplosion, FnTransient })
            {
                var c = Case(fn, skillId);
                if (c?["effects"] is not JArray effects) continue;
                foreach (JObject e in effects)
                {
                    var cls = (string)e["resolved_class"] ?? (string)e["class"] ?? "";
                    if (cls.StartsWith("LineageEffect.", StringComparison.OrdinalIgnoreCase)) Fx.W.Prefetch(cls);
                }
            }
            Fx.W.Prefetch("LineageEffect.RibbonSet");
        }
        public bool Has(string fn, int id) => Case(fn, id) != null;

        LegacyCtx Ctx(IFxActor self, IFxActor target, int level)
        {
            return new LegacyCtx
            {
                This = self, TargetPawn = target ?? self.MagicInfo?.TargetPawn, SkillLevel = level, KeepMinFrameRate = KeepMinFrameRate,
                WeaponLength = WeaponLength, DamageEffect = DamageEffect, AssocIndex = -1,
            };
        }

        public void SkillEffectInit(IFxActor pawn, int skillId, int level, IFxActor target) => Run(FnInit, skillId, Ctx(pawn, target, level), 1);
        public void SkillEffectChanneling(IFxActor pawn, int skillId, int level, IFxActor target) => Run(FnChanneling, skillId, Ctx(pawn, target, level), 0);
        public void SkillEffectPreShot(IFxActor pawn, int skillId, int level, IFxActor target)
        {
            if (target == null && pawn.MagicInfo?.TargetPawn == null) return;
            Run(FnPreShot, skillId, Ctx(pawn, target, level), 0);
        }
        public void SkillEffectShot(IFxActor pawn, int skillId, int level, IFxActor target) => Run(FnShot, skillId, Ctx(pawn, target, level), 2);

        /// <summary>ANSkillProjectile::SkillEffectExplosion(HitActor, HitNormal): this = projetil, Owner = caster.</summary>
        public void SkillEffectExplosion(FxProjectileActor proj, IFxActor caster, int skillId, int level)
        {
            var ctx = Ctx(proj, proj.TargetActor, level);
            ctx.Owner = caster;
            ctx.HitActor = proj.TargetActor;
            ctx.HitNormal = (-proj.Rotation.Forward);
            ctx.LastTargetLocation = proj.LastTargetLocation;
            Run(FnExplosion, skillId, ctx, 3, caster);
        }

        public void SpawnNTransientEffect(IFxActor pawn, int skillId, int level, IFxActor target)
        {
            if (ShotGrade(skillId, out var spirit, out var grade))
            {
                // os casos dos shots dependem de soulshot.int por tipo de arma e do comprimento da malha da mao; a tabela
                // gerada por execucao simbolica so tem a 1a variante (vazia) para o caso comum (#0053)
                var made = ShotEffect(pawn, grade, spirit, WeaponType(pawn));
                if (made.Count > 0) Fx.PlaySkillSoundData(skillId, level, 1, pawn.Location, pawn);
                return;
            }
            Run(FnTransient, skillId, Ctx(pawn, target, level), 1);
        }

        /// <summary>CurWeaponType do pawn (pawn+0x71d = GetAnimType): indice do soulshot.int HAND, 1HS, 2HS, DUAL, POLE, BOW, THROW, DUALFIST.</summary>
        public Func<IFxActor, int> WeaponType = _ => 0;

        /// <summary>Secoes de tipo de arma do soulshot.int na ordem de FL2GameData::SoulShotDataLoad (0x10448xxx, +0x7f5ec + i*8) [O].</summary>
        public static readonly string[] ShotWeaponTypes = { "HAND", "1HS", "2HS", "DUAL", "POLE", "BOW", "THROW", "DUALFIST" };
        /// <summary>Secoes de grau do soulshot.int (indice 0..5; o caso usa (id - base) % 5 + 1) [O].</summary>
        public static readonly string[] ShotGrades = { "None", "D", "C", "B", "A", "S" };

        /// <summary>
        /// Casos de shot do SpawnNTransientEffect (0x104efb30) [O]: 0x7f7 soulshot sem grau; 0x866..0x86a soulshot D..S;
        /// 0x7ff/0x80d spiritshot e blessed sem grau; 0x86b..0x874 spiritshot e blessed D..S, grau = (id - base) % 5 + 1.
        /// </summary>
        public static bool ShotGrade(int id, out bool spirit, out int grade)
        {
            spirit = false;
            grade = 0;
            if (id == 0x7f7) return true;
            if (id >= 0x866 && id <= 0x86a) { grade = (id - 0x866) % 5 + 1; return true; }
            spirit = true;
            if (id == 0x7ff || id == 0x80d) return true;
            if (id >= 0x86b && id <= 0x874) { grade = (id - 0x86b) % 5 + 1; return true; }
            spirit = false;
            return false;
        }

        /// <summary>Escolha da classe por mao (0x104eff80 / 0x104f0404) [O]: valor do soulshot.int 1 = arma longa (malha com
        /// comprimento > 12, ou sem dado) usa "OnSticks" com StartVelocityRange.X = comprimento (30 sem dado), arma curta "OnBooks";
        /// 0 = "OnBooks"; -1 = nada. Sem malha na mao, nada. Devolve (campo, velocidade) ou null.</summary>
        public static (string field, float velocity, bool sticks)? ShotChoice(int value, float length, bool spirit)
        {
            if (length <= 0 || value == -1) return null;
            var pre = spirit ? "Spirit" : "";
            if (value == 1 && length > 12) return (pre + "OnSticks", length, true);
            return (pre + "OnBooks", 30f, false);
        }

        /// <summary>Spawna o efeito de ativacao dos shots nas maos (LH primeiro, depois RH), preso ao osso da mao [O].</summary>
        public List<FxEmitterActor> ShotEffect(IFxActor pawn, int grade, bool spirit, int weaponType)
        {
            var made = new List<FxEmitterActor>();
            if (pawn == null) return made;
            var type = ShotWeaponTypes[Mathf.Clamp(weaponType, 0, ShotWeaponTypes.Length - 1)];
            foreach (var rh in new[] { false, true })
            {
                var raw = (string)Soulshot?[type]?[rh ? "RH" : "LH"];
                var value = int.TryParse((raw ?? "0").Trim(), NumberStyles.Integer, CultureInfo.InvariantCulture, out var v) ? v : 0;
                var choice = ShotChoice(value, WeaponLength(pawn, rh), spirit);
                if (choice == null) continue;
                var (field, vel, sticks) = choice.Value;
                var cls = (string)Soulshot?[ShotGrades[Mathf.Clamp(grade, 0, 5)]]?[field];
                if (string.IsNullOrEmpty(cls)) continue;
                var fx = Fx.W.Spawn(cls, Vector3.zero, FRotator.Zero, pawn);
                if (fx == null) continue;
                var bone = rh ? pawn.RHandBoneName : pawn.LHandBoneName;
                var frame = string.IsNullOrEmpty(bone) || bone == "None" ? null : pawn.Bone(bone);
                if (frame == null) { fx.Destroy(); continue; }
                if (!sticks && !rh) fx.RelativeRotation = new FRotator(0, 0x4000, 0);
                if (sticks)
                    for (var k = 0; k < Math.Min(2, fx.Emitters.Count); k++)
                    {
                        var r = fx.Emitters[k].D.StartVelocityRange;
                        r.X = new FRange(vel, vel);
                        fx.Emitters[k].D.StartVelocityRange = r;
                    }
                Attach(fx, frame);
                made.Add(fx);
            }
            return made;
        }

        /// <summary>Executa o caso: escolhe a variante pelas condicoes, spawna os efeitos e toca o som se algo nasceu.</summary>
        public List<FxEmitterActor> Run(string fn, int skillId, LegacyCtx ctx, int soundType, IFxActor soundSrc = null)
        {
            var c = Case(fn, skillId);
            if (c == null) return ctx.Spawned;
            var vi = -1;
            if (c["variants"] is JArray variants)
                for (var i = 0; i < variants.Count; i++)
                {
                    var v = (JObject)variants[i];
                    if (All(v["when"], ctx) && AnyOf(v["when_any_of"], ctx)) { vi = i; break; }
                }
            if (c["effects"] is JArray effects)
                foreach (JObject e in effects)
                {
                    if (vi >= 0 && e["in_variants"] is JArray iv && !Contains(iv, vi)) continue;
                    if (!All(e["when"], ctx)) continue;
                    var multi = Mentions(e, "AssociatedActor") && ctx.Magic != null && ctx.Magic.AssociatedActor.Count > 0;
                    var n = multi ? ctx.Magic.AssociatedActor.Count : 1;
                    for (var i = 0; i < n; i++)
                    {
                        ctx.AssocIndex = multi ? i : -1;
                        try { Effect(e, ctx); }
                        catch (Exception ex) { Debug.LogWarning($"[fx] legado {fn} {skillId}: {ex.Message}"); }
                    }
                    ctx.AssocIndex = -1;
                }
            if (c["extras"] is JArray extras)
                foreach (JObject x in extras)
                {
                    var kind = (string)x["extra"] ?? "";
                    if (!All(x["when"], ctx)) continue;
                    if (kind == "APawn::PlaySkillSound" && ctx.Spawned.Count > 0 && ctx.This != null)
                    {
                        var args = x["args"] as JArray;
                        var t = args != null && args.Count > 2 ? (int)Scalar((string)args[2], ctx) : soundType;
                        Fx.PlaySkillSound(soundSrc ?? ctx.This, soundSrc ?? ctx.This, t);
                    }
                    else if (kind == "AEmitter::SetSizeScale" && ctx.Spawned.Count > 0)
                    {
                        var args = x["args"] as JArray;
                        if (args != null && args.Count > 0) ctx.Spawned[ctx.Spawned.Count - 1].SetSizeScale(Scalar((string)args[0], ctx));
                    }
                    else if (kind.Contains("SkillSound tail") && ctx.This != null) Fx.PlaySkillSound(ctx.This, ctx.This, 1);
                    // FNPawnLight / ANCubics: luz do pawn e cubics [N]
                }
            return ctx.Spawned;
        }

        static bool Contains(JArray a, int v)
        {
            foreach (var x in a) if ((int)x == v) return true;
            return false;
        }

        static bool Mentions(JObject e, string s) => e.ToString(Newtonsoft.Json.Formatting.None).Contains(s);

        static float Scalar(string s, LegacyCtx ctx) => LegacyExpr.Scalar(s, ctx);

        static bool All(JToken when, LegacyCtx ctx)
        {
            if (when is not JArray a) return true;
            foreach (var w in a) if (!LegacyExpr.Cond((string)w, ctx)) return false;
            return true;
        }

        static bool AnyOf(JToken anyOf, LegacyCtx ctx)
        {
            if (anyOf is not JArray a || a.Count == 0) return true;
            foreach (var alt in a) if (All(alt, ctx)) return true;
            return false;
        }

        static Vector3 Vec3(JToken t, LegacyCtx ctx)
        {
            if (t is not JArray a || a.Count < 3) return Vector3.zero;
            return new Vector3(Scalar((string)a[0], ctx), Scalar((string)a[1], ctx), Scalar((string)a[2], ctx));
        }

        static FRotator Rot3(JToken t, LegacyCtx ctx)
        {
            if (t is not JArray a || a.Count < 3) return FRotator.Zero;
            return new FRotator(FxMath.Ftol(Scalar((string)a[0], ctx)), FxMath.Ftol(Scalar((string)a[1], ctx)), FxMath.Ftol(Scalar((string)a[2], ctx)));
        }

        /// <summary>Classe do efeito: literal, DamageEffect do alvo, ou soulshot.int[grade].Campo.</summary>
        string ClassOf(JObject e, LegacyCtx ctx)
        {
            var cls = (string)e["resolved_class"] ?? (string)e["class"] ?? "";
            if (cls.StartsWith("LineageEffect.", StringComparison.OrdinalIgnoreCase)) return cls;
            if (cls.StartsWith("Cast<APawn>(HitActor).DamageEffect")) return ctx.HitActor != null && ctx.HitActor.IsPawn ? ctx.DamageEffect(ctx.HitActor) : null;
            var m = Regex.Match(cls, @"^soulshot\.int\[(\w+)\]\.(\w+)$");
            if (m.Success) return (string)Soulshot?[m.Groups[1].Value]?[m.Groups[2].Value];
            if (cls == "None" || cls == "?" || cls == "") return null;
            return cls;
        }

        void Effect(JObject e, LegacyCtx ctx)
        {
            var api = (string)e["api"] ?? "";
            // alt_args: argumentos de outra variante quando a condicao deles vale
            var args = e;
            if (e["alt_args"] is JArray alts)
                foreach (JObject alt in alts)
                    if (All(alt["when"], ctx))
                    {
                        args = new JObject(e);
                        foreach (var kv in alt) if (kv.Key != "when") args[kv.Key] = kv.Value;
                        break;
                    }
            if (api == "APawn::AttachTrailer")
            {
                var a = e["args"] as JArray;
                var dur = a != null && a.Count > 2 ? Scalar((string)a[2], ctx) : 0.8f;
                var rh = a == null || a.Count < 4 || Scalar((string)a[3], ctx) != 0;
                var em = Fx.AttachTrailer(ctx.This, a != null && a.Count > 1 ? (int)Scalar((string)a[1], ctx) : 0, dur, rh);
                if (em != null) ctx.Spawned.Add(em);
                return;
            }
            var cls = ClassOf(e, ctx);
            if (cls == null) return;
            FxEmitterActor fx;
            if (api == "AActor::SpawnSkillEffect") fx = SpawnSkillEffect(args, cls, ctx);
            else fx = SpawnActor(args, cls, ctx);
            if (fx == null) return;
            ctx.Spawned.Add(fx);
            Post(e["post"] as JArray, fx, ctx);
        }

        /// <summary>AActor::SpawnSkillEffect(A, B, Class, AttachType, Offset, Rot, SpeedRate, bRelative, bSetSpeedRate, bProjectile, bRegister) [O §3.3].</summary>
        FxEmitterActor SpawnSkillEffect(JObject e, string cls, LegacyCtx ctx)
        {
            var A = LegacyExpr.Eval((string)e["base_actor"], ctx).AsActor;
            var B = LegacyExpr.Eval((string)e["owner_actor"], ctx).AsActor;
            var attachType = (int)Scalar((string)e["attach_type"], ctx);
            var offset = Vec3(e["offset"], ctx);
            var rot = Rot3(e["rotation"], ctx);
            var speedRate = e["speed_rate"] != null ? Scalar((string)e["speed_rate"], ctx) : 1f;
            var bRelative = Scalar((string)e["bRelative"], ctx) != 0;
            var bSetSpeedRate = Scalar((string)e["bSetSpeedRate"], ctx) != 0;
            var bProjectile = Scalar((string)e["bProjectile"], ctx) != 0;
            var bRegister = Scalar((string)e["bRegister"], ctx) != 0;
            Vector3 loc;
            FRotator r;
            if (A != null && !bProjectile && !bRelative) { loc = A.Location; r = A.Rotation; }
            else if (bRelative) { loc = Vector3.zero; r = rot; }
            else
            {
                // offset absoluto nao modelado pela tabela ("stk_..." / "st0?", lacuna §3.6): no alvo, senao no pawn [I]
                loc = offset;
                if (Unresolved(e["offset"])) loc = (ctx.TargetPawn ?? ctx.This)?.Location ?? Vector3.zero;
                r = rot;
            }
            var fx = Fx.W.Spawn(cls, loc, r, B);
            if (fx == null) return null;
            if (bRelative)
            {
                // nasce na origem; TrailerPrePivot leva o deslocamento (Z = -altura no tipo 1, +altura no 3; offset.Z em Y [sic])
                var ar = A ?? B;
                var h = ar != null ? (ar.HasSkeletalMesh ? ar.MeshHeight : ar.CollisionHeight) : 0;
                var pp = Vector3.zero;
                if (attachType == 1) pp.z = -h;
                else if (attachType == 3) pp.z = h;
                if (offset.x != 0 && offset.y != 0) { pp.x += offset.x; pp.y += offset.y; }
                pp.y += offset.z;
                fx.TrailerPrePivot = pp;
                fx.bTrailerPrePivot = true;
                fx.Physics = FxPhysics.Trailer;
                fx.Owner = ar;
                if (ar != null) fx.Location = ar.Location + pp;
            }
            if (bSetSpeedRate) fx.SpeedRate = speedRate;
            var mi = ctx.Magic;
            if (B != null && mi != null && mi.MagicAniStatus == 0)
            {
                fx.AdjustparticleLife(mi.ShotTime + 1.0f);
                if (B.CollisionRadius > 11 && attachType != 0) fx.SetSizeScale(B.CollisionRadius * B.CastingEffectScale / 9f);
            }
            if (bProjectile && mi != null)
            {
                fx.SkillId = mi.MagicID;
                var proj = new FxProjectileActor(fx, mi.Copy()) { TargetActor = mi.TargetPawn };
                fx.Tag = proj;
                fx.MagicInfo = proj.Magic;
                var self = ctx.This;
                fx.OnHitWall = (a, n) => OnProjectileHit(proj, self);
                fx.StartProjectile(mi.TargetPawn);
                mi.ProjectileActors.Add(fx);
            }
            if (bRegister && mi != null) mi.EffectActor.Add(fx);
            return fx;
        }

        static bool Unresolved(JToken t)
        {
            if (t is not JArray a) return false;
            foreach (var x in a)
            {
                var s = ((string)x ?? "").Trim();
                if (!(s.StartsWith("stk_") || s.StartsWith("st") && s.EndsWith("?") || s.StartsWith("ret_"))) return false;
            }
            return a.Count > 0;
        }

        /// <summary>StaticLoadClass + ULevel::SpawnActor(cls, loc, rot, owner) [O].</summary>
        FxEmitterActor SpawnActor(JObject e, string cls, LegacyCtx ctx)
        {
            var owner = LegacyExpr.Eval((string)e["owner"], ctx).AsActor;
            var loc = Vec3(e["location"], ctx);
            if (Unresolved(e["location"])) loc = (owner ?? ctx.TargetPawn ?? ctx.This)?.Location ?? Vector3.zero;
            var rot = Rot3(e["rotation"], ctx);
            var fx = Fx.W.Spawn(cls, loc, rot, owner);
            return fx;
        }

        void OnProjectileHit(FxProjectileActor proj, IFxActor caster)
        {
            var mi = proj.Magic;
            if (mi == null) return;
            if (mi.Agent != null) Fx.TriggerExplosion(proj);
            else SkillEffectExplosion(proj, caster, mi.MagicID, mi.LevelID);
        }

        /// <summary>Eventos depois do spawn: set de campos, attach, setPhysics, chamadas.</summary>
        void Post(JArray post, FxEmitterActor fx, LegacyCtx ctx)
        {
            if (post == null) return;
            foreach (JObject p in post)
            {
                var ev = (string)p["ev"];
                switch (ev)
                {
                    case "set":
                        SetField(fx, (string)p["field"], (string)p["value"], ctx);
                        break;
                    case "attach":
                    {
                        var to = LegacyExpr.Eval((string)p["to"], ctx).AsActor ?? ctx.This;
                        var boneName = p["bone"] != null ? NameOf((string)p["bone"], ctx) : null;
                        var idx = p["bone_index"] != null ? (string)p["bone_index"] : null;
                        if (!string.IsNullOrEmpty(boneName) && boneName != "None")
                        {
                            var frame = to.Bone(boneName);
                            if (frame != null) Attach(fx, frame);
                            else if (idx == null) AttachRoot(fx, to);
                        }
                        else AttachRoot(fx, to); // idx 0 (raiz) ou 2 (osso 2 [I: raiz])
                        break;
                    }
                    case "setPhysics":
                    {
                        var ph = (string)p["physics"] ?? "";
                        if (ph.Contains("NProjectile"))
                        {
                            var mi = ctx.Magic;
                            if (fx.Tag is not FxProjectileActor && mi != null)
                            {
                                var proj = new FxProjectileActor(fx, mi.Copy()) { TargetActor = fx.TargetActor as IFxActor ?? mi.TargetPawn };
                                fx.Tag = proj;
                                fx.MagicInfo = proj.Magic;
                                var self = ctx.This;
                                fx.OnHitWall = (a, n) => OnProjectileHit(proj, self);
                                mi.ProjectileActors.Add(fx);
                                fx.StartProjectile(proj.TargetActor);
                            }
                        }
                        else if (ph.Contains("Trailer")) fx.Physics = FxPhysics.Trailer;
                        else fx.Physics = FxPhysics.None;
                        break;
                    }
                    case "call":
                    {
                        var api = (string)p["api"] ?? "";
                        var a = p["args"] as JArray;
                        var x = a != null && a.Count > 0 ? Scalar((string)a[0], ctx) : 0;
                        if (api.EndsWith("AdjustparticleLife")) fx.AdjustparticleLife(x);
                        else if (api.EndsWith("SetSizeScale")) fx.SetSizeScale(x);
                        else if (api.EndsWith("SetDelayed")) fx.SetDelayed(x);
                        else if (api.EndsWith("SetOpacity")) fx.SetOpacity(x);
                        break;
                    }
                }
            }
        }

        static string NameOf(string expr, LegacyCtx ctx)
        {
            var v = LegacyExpr.Eval(expr, ctx);
            if (v.Kind == FxVal.K.Name) return (string)v.O;
            if (v.IsNull) return expr.Trim('<', '>').Contains('.') ? null : expr;
            return expr;
        }

        static void Attach(FxEmitterActor fx, IFxFrame bone)
        {
            fx.AttachedBone = bone;
            fx.Physics = FxPhysics.None;
            fx.Location = bone.Location + FxMath.RotateVector(fx.RelativeLocation, bone.Rotation);
        }

        static void AttachRoot(FxEmitterActor fx, IFxActor to)
        {
            if (to == null) return;
            fx.AttachedBone = to;
            fx.Physics = FxPhysics.None;
            fx.AttachAbsolute = false;
            fx.Location = to.Location + FxMath.RotateVector(fx.RelativeLocation, to.Rotation);
        }

        void SetField(FxEmitterActor fx, string field, string value, LegacyCtx ctx)
        {
            if (field == null) return;
            var v = LegacyExpr.Eval(value, ctx);
            switch (field)
            {
                case "LifeSpan": fx.LifeSpan = v.Scalar; break;
                case "RelativeTrailOffset": fx.RelativeTrailOffset = v.Kind == FxVal.K.Vec ? v.V : new Vector3(v.Scalar, 0, 0); fx.bRelativeTrail = true; break;
                case "RelativeTrailOffset.Y": fx.RelativeTrailOffset.y = v.Scalar; break;
                case "RelativeTrailOffset.Z": fx.RelativeTrailOffset.z = v.Scalar; break;
                case "TrailerPrePivot": fx.TrailerPrePivot = v.Kind == FxVal.K.Vec ? v.V : new Vector3(v.Scalar, fx.TrailerPrePivot.y, fx.TrailerPrePivot.z); fx.bTrailerPrePivot = true; break;
                case "TrailerPrePivot.X": fx.TrailerPrePivot.x = v.Scalar; fx.bTrailerPrePivot = true; break;
                case "TrailerPrePivot.Y": fx.TrailerPrePivot.y = v.Scalar; fx.bTrailerPrePivot = true; break;
                case "TrailerPrePivot.Z": fx.TrailerPrePivot.z = v.Scalar; fx.bTrailerPrePivot = true; break;
                case "RelativeRotation": fx.RelativeRotation = v.Kind == FxVal.K.Rot ? v.R : new FRotator(FxMath.Ftol(v.Scalar), fx.RelativeRotation.Yaw, fx.RelativeRotation.Roll); break;
                case "RelativeRotation.Yaw": fx.RelativeRotation.Yaw = FxMath.Ftol(v.Scalar); break;
                case "RelativeRotation.Roll": fx.RelativeRotation.Roll = FxMath.Ftol(v.Scalar); break;
                case "RelativeLocation": fx.RelativeLocation = v.Kind == FxVal.K.Vec ? v.V : new Vector3(v.Scalar, fx.RelativeLocation.y, fx.RelativeLocation.z); break;
                case "RelativeLocation.Y": fx.RelativeLocation.y = v.Scalar; break;
                case "RelativeLocation.Z": fx.RelativeLocation.z = v.Scalar; break;
                case "Location": if (v.Kind == FxVal.K.Vec) fx.Location = v.V; else fx.Location.x = v.Scalar; break;
                case "Location.Y": fx.Location.y = v.Scalar; break;
                case "Location.Z": fx.Location.z = v.Scalar; break;
                case "Speed": fx.Speed = v.Scalar; break;
                case "AccSpeed": fx.AccSpeed = v.Scalar; break;
                case "SkillID": fx.SkillId = (int)v.Scalar; break;
                case "TargetActor": fx.TargetActor = v.AsActor; break;
                case "LastTargetLocation": if (v.Kind == FxVal.K.Vec) fx.LastTargetLocation = v.V; else fx.LastTargetLocation.x = v.Scalar; break;
                case "LastTargetLocation.Y": fx.LastTargetLocation.y = v.Scalar; break;
                case "LastTargetLocation.Z": fx.LastTargetLocation.z = v.Scalar; break;
                case "bSelfRotation": fx.bSelfRotation = true; break;
                default:
                {
                    var m = Regex.Match(field, @"^Emitters\[(\d+)\]\.(\w+)(?:\.(\w+))?(?:\.(\w+))?$");
                    if (!m.Success) break;
                    var i = int.Parse(m.Groups[1].Value);
                    if (i >= fx.Emitters.Count) break;
                    var d = fx.Emitters[i].D;
                    var prop = m.Groups[2].Value;
                    var sub = m.Groups[3].Value;
                    var sub2 = m.Groups[4].Value;
                    var x = v.Scalar;
                    if (prop == "StartVelocityRange")
                    {
                        var r = d.StartVelocityRange;
                        if (sub == "" || sub == "X") { if (sub2 == "Max") r.X.Max = x; else if (sub2 == "Min") r.X.Min = x; else r.X = FRange.Of(x); }
                        else if (sub == "Y") { if (sub2 == "Max") r.Y.Max = x; else if (sub2 == "Min") r.Y.Min = x; else r.Y = FRange.Of(x); }
                        else if (sub == "Z") { if (sub2 == "Max") r.Z.Max = x; else if (sub2 == "Min") r.Z.Min = x; else r.Z = FRange.Of(x); }
                        d.StartVelocityRange = r;
                    }
                    else if (prop == "LifetimeRange")
                    {
                        var r = d.LifetimeRange;
                        if (sub == "Max") r.Max = x; else if (sub == "Min") r.Min = x; else r = FRange.Of(x);
                        d.LifetimeRange = r;
                    }
                    break;
                }
            }
        }
    }
}
