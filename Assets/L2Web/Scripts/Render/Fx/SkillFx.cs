// Disparo e posicionamento dos efeitos de skill (spec 09 §2): USkillVisualEffect (skill_fx_map.json: skill_visual_effect do
// skillgrp -> fases Casting/Channeling/Shot/Explosion com SkillAction_LocateEffect/SwordTrail), FNMagicInfo do pawn
// (SetMagicInfo 0x10310b7c, InitSkillProcess), os gatilhos (TriggerCasting 0x10306c35, TriggerChanneling 0x1030ad3f,
// TriggerShot 0x10305051, TriggerExplosion 0x103043f9, TriggerTransientEffect 0x103089d6), o Notify de LocateEffect
// (0x10308b02 -> 0x104ec6f0), o SwordTrail (AttachTrailer 0x103110fe), os projeteis (ANSkillProjectile) e PlaySkillSound
// (0x10307360, skillsoundgrp). Posicoes em UE. [O] salvo onde marcado [I].
using System;
using System.Collections.Generic;
using L2Web.World;
using Newtonsoft.Json.Linq;
using UnityEngine;

namespace L2Web.Render.Fx
{
    /// <summary>EAttachMethod do USkillAction_LocateEffect.</summary>
    public enum AttachMethod { None = 0, RH = 1, LH = 2, BoneSpecified = 3, AliasSpecified = 4, Trail = 5, RF = 6, LF = 7 }

    /// <summary>FSkillActionInfo + USkillAction_LocateEffect / SwordTrail (campos do Engine.u, §2.3.1).</summary>
    public sealed class SkillAction
    {
        public string Kind = "SkillAction_LocateEffect";
        public string EffectClass;
        public bool bOnMultiTarget;
        public AttachMethod AttachOn;
        public string AttachBoneName;
        public bool bAbsolute;
        public float SpawnDelay;
        public bool bUseCharacterRotation;
        public Vector3 Offset;
        public bool bRelativeToCylinder = true;
        public bool bSpawnOnTarget;
        public bool bSizeScale;
        public float DurationRatio = 0.8f;
        public bool bRightHand = true;
        public int SpecificStage;
        public bool IsSwordTrail => Kind.EndsWith("SwordTrail");

        public static SkillAction Parse(JObject a)
        {
            var s = new SkillAction
            {
                Kind = (string)a["action"] ?? (string)a["_class"] ?? "SkillAction_LocateEffect",
                EffectClass = (string)a["EffectClass"],
                bOnMultiTarget = (bool?)a["bOnMultiTarget"] ?? false,
                AttachOn = (AttachMethod)((int?)a["AttachOn"] ?? 0),
                AttachBoneName = (string)a["AttachBoneName"],
                bAbsolute = (bool?)a["bAbsolute"] ?? false,
                SpawnDelay = (float?)a["SpawnDelay"] ?? 0,
                bUseCharacterRotation = (bool?)a["bUseCharacterRotation"] ?? false,
                Offset = EmitterDef.Vec(a["offset"] ?? a["Offset"]),
                bRelativeToCylinder = (bool?)a["bRelativeToCylinder"] ?? true,
                bSpawnOnTarget = (bool?)a["bSpawnOnTarget"] ?? false,
                bSizeScale = (bool?)a["bSizeScale"] ?? false,
                DurationRatio = (float?)a["DurationRatio"] ?? 0.8f,
                bRightHand = (bool?)a["bRightHand"] ?? true,
                SpecificStage = (int?)a["SpecificStage"] ?? 0,
            };
            return s;
        }
    }

    /// <summary>USkillVisualEffect (skill.usk): acoes por fase e FlyingTime.</summary>
    public sealed class SkillVisualEffect
    {
        public string Ref = "";
        public readonly List<SkillAction> Casting = new(), Channeling = new(), Preshot = new(), Shot = new(), Explosion = new();
        public float FlyingTime;

        public static SkillVisualEffect Parse(string reference, JObject fases)
        {
            var v = new SkillVisualEffect { Ref = reference };
            if (fases == null) return v;
            void Fill(List<SkillAction> l, string key)
            {
                if (fases[key] is JArray arr) foreach (JObject a in arr) l.Add(SkillAction.Parse(a));
            }
            Fill(v.Casting, "Casting");
            Fill(v.Channeling, "Channeling");
            Fill(v.Preshot, "Preshot");
            Fill(v.Shot, "Shot");
            Fill(v.Explosion, "Explosion");
            v.FlyingTime = (float?)fases["FlyingTime"] ?? 0;
            return v;
        }

        public List<SkillAction> Phase(string name) => name switch
        {
            "Casting" => Casting, "Channeling" => Channeling, "Preshot" => Preshot, "Shot" => Shot, "Explosion" => Explosion, _ => new List<SkillAction>(),
        };
    }

    /// <summary>skill_fx_map.json: skill -> [{ref, niveis [min,max], fases}].</summary>
    public sealed class SkillFxMap
    {
        sealed class Entry { public int LvMin, LvMax; public SkillVisualEffect Sve; public bool Missing; }
        readonly Dictionary<int, List<Entry>> skills = new();
        public int Count => skills.Count;

        public static SkillFxMap Parse(JObject j)
        {
            var m = new SkillFxMap();
            if (j?["skills"] is not JObject sk) return m;
            foreach (var kv in sk)
            {
                if (!int.TryParse(kv.Key, out var id) || kv.Value is not JArray list) continue;
                var l = new List<Entry>();
                foreach (JObject e in list)
                {
                    var lv = e["niveis"] as JArray;
                    var en = new Entry { LvMin = lv != null && lv.Count > 0 ? (int)lv[0] : 1, LvMax = lv != null && lv.Count > 1 ? (int)lv[1] : 99 };
                    var fases = e["fases"] as JObject;
                    en.Missing = fases == null;
                    en.Sve = SkillVisualEffect.Parse((string)e["ref"] ?? "", fases);
                    l.Add(en);
                }
                m.skills[id] = l;
            }
            return m;
        }

        /// <summary>SVE da skill no nivel (desc do skillgrp); null = sem skill_visual_effect (ou skill.usk sem o objeto: Agent NULL).</summary>
        public SkillVisualEffect Get(int skillId, int level)
        {
            if (!skills.TryGetValue(skillId, out var l)) return null;
            Entry best = null;
            foreach (var e in l)
                if (level >= e.LvMin && level <= e.LvMax) { best = e; break; }
            best ??= l[0];
            return best.Missing ? null : best.Sve;
        }

        public bool Has(int skillId) => skills.ContainsKey(skillId);
        public IEnumerable<int> Ids => skills.Keys;
    }

    /// <summary>Ator visto pelo sistema de efeitos: pawn ou projetil (Base/Dest dos Notify).</summary>
    public interface IFxActor : IFxFrame
    {
        bool IsPawn { get; }
        bool IsProjectile { get; }
        float CollisionRadius { get; }
        float CollisionHeight { get; }
        /// <summary>Altura usada pelo LocateEffect com mesh esqueletica (meshInfo+0x98 x DrawScale) [I: = CollisionHeight].</summary>
        float MeshHeight { get; }
        float CastingEffectScale { get; }
        bool HasSkeletalMesh { get; }
        bool IsNpc { get; }
        FxMagicInfo MagicInfo { get; }
        IFxFrame Bone(string name);
        string RHandBoneName { get; }
        string LHandBoneName { get; }
        string RightFootBone { get; }
        string LeftFootBone { get; }
        /// <summary>GetAliasesTagBoneName: osso do alias (ex. "e_bone") e origem do alias.</summary>
        bool AliasBone(string alias, out string bone, out Vector3 origin);
        FRotator HitRot { get; }
        Vector3 LastTargetLocation { get; }
        /// <summary>Lista de efeitos presos ao ator (SpelledNEffectActor).</summary>
        List<FxEmitterActor> SpelledEffects { get; }
        string Tag { get; }
    }

    /// <summary>FNMagicInfo (pawn+0x4f0): estado da skill em execucao.</summary>
    public sealed class FxMagicInfo
    {
        public int MagicID, LevelID;
        public SkillVisualEffect Agent;
        public float SkillHitTime, ShotTime, AniDues0;
        public int MagicType;
        public IFxActor TargetPawn;
        public readonly List<IFxActor> AssociatedActor = new();
        public readonly List<FxEmitterActor> EffectActor = new();
        public readonly List<FxEmitterActor> ProjectileActors = new();
        public readonly List<Vector3> LocList = new();
        public int StageShot, StagePreshot, PendingNotify, MagicAniStatus;
        public bool bTargetExcepted;
        public float SkillSpeedRate = 1;

        /// <summary>Copia (proj.MagicInfo = pawn.MagicInfo copia a struct no TriggerShot) [O].</summary>
        public FxMagicInfo Copy()
        {
            var c = new FxMagicInfo
            {
                MagicID = MagicID, LevelID = LevelID, Agent = Agent, SkillHitTime = SkillHitTime, ShotTime = ShotTime, AniDues0 = AniDues0, MagicType = MagicType,
                TargetPawn = TargetPawn, StageShot = StageShot, StagePreshot = StagePreshot, PendingNotify = PendingNotify, MagicAniStatus = MagicAniStatus,
                bTargetExcepted = bTargetExcepted, SkillSpeedRate = SkillSpeedRate,
            };
            c.AssociatedActor.AddRange(AssociatedActor);
            c.LocList.AddRange(LocList);
            return c;
        }

        /// <summary>FNMagicInfo::Clear: so esvazia as listas; os emissores vivem o proprio tempo [O].</summary>
        public void Clear()
        {
            EffectActor.Clear();
            AssociatedActor.Clear();
            ProjectileActors.Clear();
            LocList.Clear();
            Agent = null;
            MagicID = 0;
        }
    }

    /// <summary>Projetil de skill (ANSkillProjectile) como IFxActor para os Notify da explosao.</summary>
    public sealed class FxProjectileActor : IFxActor
    {
        public readonly FxEmitterActor Actor;
        public FxMagicInfo Magic;
        public readonly List<FxEmitterActor> Spelled = new();

        public FxProjectileActor(FxEmitterActor a, FxMagicInfo magic) { Actor = a; Magic = magic; }
        public Vector3 Location => Actor.Location;
        public FRotator Rotation => Actor.Rotation;
        public Vector3 Velocity => Actor.Velocity;
        public bool Alive => !Actor.Destroyed;
        public bool IsPawn => false;
        public bool IsProjectile => true;
        public float CollisionRadius => Actor.Class.CollisionRadius;
        public float CollisionHeight => Actor.Class.CollisionHeight;
        public float MeshHeight => Actor.Class.CollisionHeight;
        public float CastingEffectScale => 1;
        public bool HasSkeletalMesh => false;
        public bool IsNpc => false;
        public FxMagicInfo MagicInfo => Magic;
        public IFxFrame Bone(string name) => null;
        public string RHandBoneName => null;
        public string LHandBoneName => null;
        public string RightFootBone => null;
        public string LeftFootBone => null;
        public bool AliasBone(string alias, out string bone, out Vector3 origin) { bone = null; origin = Vector3.zero; return false; }
        public FRotator HitRot => Actor.HitRot;
        public Vector3 LastTargetLocation => Actor.LastTargetLocation;
        public List<FxEmitterActor> SpelledEffects => Spelled;
        public string Tag => Actor.Name;
        public IFxActor TargetActor;
    }

    /// <summary>Gatilhos e posicionamento (USkillVisualEffect::Trigger*, USkillAction_*::Notify, APawn::AttachTrailer, PlaySkillSound).</summary>
    public sealed class SkillFx
    {
        public readonly FxWorld W;
        public SkillFxMap Map = new();
        public JObject Tables = new();
        /// <summary>GL2KeepMinFrameRate (opcoes): sem rastro de espada.</summary>
        public bool KeepMinFrameRate;
        /// <summary>Toca um som (nome do pacote, posicao UE, volume 0..1, raio).</summary>
        public Action<string, Vector3, float, float> PlaySound;
        public Func<int, string> HitWallSoundHook;
        /// <summary>Pre-carga das classes legadas de uma skill (LegacyFx).</summary>
        public Action<int> Prefetch;
        readonly bool log = Array.IndexOf(Environment.GetCommandLineArgs(), "-l2fxlog") >= 0;

        public SkillFx(FxWorld w) { W = w; }

        // ------------------------------------------------------------------ §2.1.1 SetMagicInfo / InitSkillProcess

        /// <summary>APawn::SetMagicInfo + os campos que InitSkillProcess calcula (ShotTime = plano do cast).</summary>
        public FxMagicInfo SetMagicInfo(IFxActor pawn, int skillId, int level, int castStyle, float hitTimeMs, IFxActor target, float shotTime, float aniDues0)
        {
            var mi = pawn.MagicInfo;
            mi.Clear();
            mi.MagicID = skillId;
            mi.LevelID = level;
            mi.Agent = Map.Get(skillId, level);
            if (mi.Agent != null)
                foreach (var ph in new[] { mi.Agent.Casting, mi.Agent.Channeling, mi.Agent.Shot, mi.Agent.Explosion })
                    foreach (var a in ph) W.Prefetch(a.EffectClass);
            else Prefetch?.Invoke(skillId);
            mi.SkillHitTime = hitTimeMs / 1000f;
            mi.MagicType = castStyle;
            mi.TargetPawn = target;
            mi.ShotTime = shotTime;
            mi.AniDues0 = aniDues0;
            mi.StageShot = 0;
            mi.StagePreshot = 0;
            mi.PendingNotify = 0;
            mi.MagicAniStatus = 0;
            mi.bTargetExcepted = false;
            return mi;
        }

        // ------------------------------------------------------------------ §2.3.3 gatilhos

        /// <summary>TriggerCasting(pawn, TargetPawn) [O].</summary>
        public void TriggerCasting(IFxActor pawn)
        {
            var mi = pawn.MagicInfo;
            if (mi.Agent == null) return;
            foreach (var act in mi.Agent.Casting)
            {
                var em = Notify(act, pawn, mi.TargetPawn);
                if (em == null || mi.ShotTime <= 0) continue;
                em.AdjustparticleLife(em.FixedLifeTime != 0 ? em.FixedLifeTime : mi.MagicType == 13 ? mi.ShotTime - 0.46666667f : mi.ShotTime + 0.2f);
                mi.EffectActor.Add(em);
            }
            mi.MagicAniStatus = 3;
            PlaySkillSound(pawn, pawn, 1);
        }

        /// <summary>TriggerChanneling(pawn, TargetPawn) [O].</summary>
        public void TriggerChanneling(IFxActor pawn)
        {
            var mi = pawn.MagicInfo;
            if (mi.Agent == null) return;
            foreach (var act in mi.Agent.Channeling)
            {
                var em = Notify(act, pawn, mi.TargetPawn);
                if (em == null) continue;
                var dur = mi.ShotTime - mi.AniDues0 + 0.46666667f;
                if (em.Emitters.Count > 0 && em.Emitters[0] is BeamEmitterSim beam)
                {
                    beam.D.DetermineEndPointBy = BeamEndPointType.Actor;
                    var tag = pawn.Tag + "0";
                    if (beam.D.BeamEndPoints.Count == 0) beam.D.BeamEndPoints.Add(new BeamEndPoint { Weight = 1 });
                    var ep = beam.D.BeamEndPoints[0];
                    ep.ActorTag = tag;
                    beam.D.BeamEndPoints[0] = ep;
                    // ActorTag = pawn.Tag + CreatureID: o feixe (no alvo, bSpawnOnTarget) termina no caster [O]
                    beam.ResolveActor = _ => pawn;
                    beam.D.MaxParticles = (int)(dur * beam.D.InitialParticlesPerSecond);
                }
                else em.AdjustparticleLife(em.FixedLifeTime != 0 ? em.FixedLifeTime : dur);
                mi.EffectActor.Add(em);
            }
        }

        /// <summary>UAnimNotify_AttackShot -> APawn::SkillEffectFinalize: StageShot++ e TriggerShot(pawn) [O].</summary>
        public void TriggerShot(IFxActor pawn)
        {
            var mi = pawn.MagicInfo;
            mi.StageShot++;
            if (mi.Agent == null) return;
            FxEmitterActor last = null;
            foreach (var act in mi.Agent.Shot)
            {
                if (!(act.SpecificStage == 0 && mi.PendingNotify == 2 || act.SpecificStage == mi.StageShot)) continue;
                if (act.bOnMultiTarget && mi.AssociatedActor.Count > 0 || mi.TargetPawn == null)
                {
                    foreach (var t in mi.AssociatedActor) Notify(act, pawn, t);
                    continue;
                }
                var em = Notify(act, pawn, mi.TargetPawn);
                if (em == null) continue;
                last = em;
                if (em.IsProjectile)
                {
                    em.SkillId = mi.MagicID;
                    var proj = new FxProjectileActor(em, mi.Copy()) { TargetActor = mi.TargetPawn };
                    em.Tag = proj;
                    em.MagicInfo = proj.Magic;
                    em.OnHitWall = (a, n) => TriggerExplosion(proj);
                    em.StartProjectile(mi.TargetPawn);
                    mi.TargetPawn.SpelledEffects.Add(em);
                    mi.ProjectileActors.Add(em);
                }
                else mi.EffectActor.Add(em);
            }
            PlaySkillSound(pawn, pawn, 2);
        }

        /// <summary>ANSkillProjectile::processHitWall -> TriggerExplosion(agent, proj) [O].</summary>
        public void TriggerExplosion(FxProjectileActor proj)
        {
            var mi = proj.Magic;
            if (mi?.Agent == null) return;
            FxEmitterActor last = null;
            foreach (var act in mi.Agent.Explosion)
            {
                if (act.bOnMultiTarget && mi.AssociatedActor.Count > 0)
                {
                    foreach (var t in mi.AssociatedActor) last = Notify(act, proj, t) ?? last;
                }
                else last = Notify(act, proj, proj.TargetActor) ?? last;
            }
            PlaySkillSound(proj.TargetActor, proj, 3);
        }

        /// <summary>TriggerTransientEffect(sve, pawn, NULL, skillID): CastingActions sem ajuste de vida; 3 sons de cast [O].</summary>
        public void TriggerTransient(IFxActor pawn, SkillVisualEffect sve, int skillId, int level)
        {
            if (sve == null) return;
            foreach (var act in sve.Casting) Notify(act, pawn, null);
            PlaySkillSoundData(skillId, level, 1, pawn.Location, pawn);
        }

        /// <summary>UGameEngine::OnReceiveMagicSkillLaunched -> APawn::AddAssociatedActorNotify [O].</summary>
        public void AddAssociatedActor(IFxActor caster, int skillId, IFxActor target)
        {
            var mi = caster.MagicInfo;
            if (mi.MagicID != skillId || mi.TargetPawn == null || target == null) return;
            mi.AssociatedActor.Add(target);
            mi.bTargetExcepted = true;
        }

        /// <summary>MagicSkillCanceled / NActionStop: os efeitos do cast morrem pelo proprio tempo; os projeteis em voo seguem [I].</summary>
        public void Cancel(IFxActor pawn)
        {
            var mi = pawn.MagicInfo;
            foreach (var e in mi.EffectActor) e.Kill();
            mi.Clear();
        }

        /// <summary>SkillEffectFinalize no disparo final (PendingNotify == 2): destroi os projeteis presos ao pawn e limpa o MagicInfo [O].</summary>
        public void Finalize(IFxActor pawn)
        {
            var mi = pawn.MagicInfo;
            mi.Clear();
        }

        // ------------------------------------------------------------------ §2.3.2 LocateEffect / §2.3.4 SwordTrail

        /// <summary>Action->Notify(Base, Dest): devolve o AEmitter criado ou null.</summary>
        public FxEmitterActor Notify(SkillAction act, IFxActor baseActor, IFxActor dest)
        {
            if (act.IsSwordTrail) return SwordTrailNotify(act, baseActor);
            return LocateEffectNotify(act, baseActor, dest);
        }

        public FxEmitterActor LocateEffectNotify(SkillAction act, IFxActor baseActor, IFxActor dest)
        {
            if (W.Library == null) return null;
            // 1. ator de referencia
            var R = act.bSpawnOnTarget ? dest : baseActor;
            if (R == null) return null;
            // 2. escala base
            var S = !act.bSpawnOnTarget && R.IsPawn ? R.CastingEffectScale : 1f;
            // 3. rotacao
            FRotator rot;
            var baseIsProj = false;
            if (act.bUseCharacterRotation) rot = R.Rotation;
            else if (baseActor != null && baseActor.IsProjectile)
            {
                rot = baseActor.HitRot;
                baseIsProj = true;
            }
            else if (dest != null && baseActor != null && dest != baseActor) rot = FxMath.VectorToRotator(dest.Location - baseActor.Location);
            else rot = baseActor?.Rotation ?? FRotator.Zero;
            // 4. offset
            var offset = act.Offset;
            if (act.bRelativeToCylinder && offset != Vector3.zero)
            {
                var H = R.HasSkeletalMesh ? R.MeshHeight : R.CollisionHeight;
                offset = FxMath.RotateVector(new Vector3(offset.x * R.CollisionRadius, offset.y, offset.z * H), rot);
            }
            // 5. nivelado
            rot.Pitch = 0;
            // 6. spawn
            var cls = W.Library.Get(act.EffectClass);
            if (cls == null)
            {
                if (log) Debug.LogWarning("[fx] LocateEffect sem classe " + act.EffectClass);
                return null;
            }
            FxEmitterActor em;
            if (act.AttachOn == AttachMethod.None)
            {
                var loc = (baseIsProj ? baseActor.LastTargetLocation : R.Location) + offset;
                em = W.Spawn(cls, loc, rot, null);
                em.Physics = FxPhysics.None;
            }
            else
            {
                em = W.Spawn(cls, offset, rot, R);
            }
            if (em == null) return null;
            // 7. AttachOn
            string bone = null;
            var aliasOrigin = Vector3.zero;
            switch (act.AttachOn)
            {
                case AttachMethod.None: break;
                case AttachMethod.RH: bone = R.RHandBoneName; break;
                case AttachMethod.LH: bone = R.LHandBoneName; break;
                case AttachMethod.BoneSpecified: bone = act.AttachBoneName; break;
                case AttachMethod.AliasSpecified:
                    if (!R.AliasBone(act.AttachBoneName, out bone, out aliasOrigin)) bone = null;
                    break;
                case AttachMethod.Trail:
                    em.Physics = FxPhysics.Trailer;
                    if (act.bUseCharacterRotation)
                    {
                        em.bRelativeTrail = true;
                        em.RelativeTrailOffset = offset;
                        em.bTrailerSameRotation = !cls.bSelfRotation;
                    }
                    else
                    {
                        em.bTrailerPrePivot = true;
                        em.TrailerPrePivot = offset;
                    }
                    em.Location = R.Location + (em.bRelativeTrail ? FxMath.RotateVector(offset, R.Rotation) : offset);
                    break;
                case AttachMethod.RF: bone = R.RightFootBone; break;
                case AttachMethod.LF: bone = R.LeftFootBone; break;
            }
            // 8. escala
            if (act.bSizeScale) S *= R.CollisionRadius / 9f;
            if (Mathf.Abs(S - 1) > 0.0001f) em.SetSizeScale(S);
            // 9. anexo
            if (act.AttachOn != AttachMethod.None && act.AttachOn != AttachMethod.Trail)
            {
                var frame = string.IsNullOrEmpty(bone) || bone == "None" ? null : R.Bone(bone);
                if (frame == null)
                {
                    em.Destroy();
                    if (log) Debug.LogWarning($"[fx] {act.EffectClass}: osso {bone ?? "None"} nao encontrado ({act.AttachOn})");
                    return null;
                }
                em.AttachedBone = frame;
                em.AttachAbsolute = act.bAbsolute;
                em.RelativeLocation = offset + aliasOrigin;
                em.RelativeRotation = cls.RelativeRotation;
                em.Location = frame.Location + FxMath.RotateVector(em.RelativeLocation, frame.Rotation);
            }
            // 10. SpawnDelay
            var mi = baseActor?.MagicInfo;
            if (mi == null)
            {
                em.Destroy();
                return null;
            }
            // [O] 0x104ecd0e: `0.0 <= SpawnDelay` usa o proprio SpawnDelay (0 = sem atraso); negativo = ShotTime + SpawnDelay
            var d = act.SpawnDelay >= 0 ? act.SpawnDelay : mi.ShotTime + act.SpawnDelay;
            if (d > 0)
            {
                em.SetDelayed(d);
                em.FixedLifeTime = mi.ShotTime - d;
            }
            else if (act.SpawnDelay == 0) em.FixedLifeTime = 0;
            else em.FixedLifeTime = mi.ShotTime;
            return em;
        }

        /// <summary>USkillAction_SwordTrail::Notify: so pawn, sem GL2KeepMinFrameRate e nao NPC [O].</summary>
        FxEmitterActor SwordTrailNotify(SkillAction act, IFxActor baseActor)
        {
            if (baseActor == null || !baseActor.IsPawn || KeepMinFrameRate || baseActor.IsNpc) return null;
            return AttachTrailer(baseActor, 0, act.DurationRatio, act.bRightHand);
        }

        /// <summary>Comprimento da arma da mao (em UE) e osso: fornecido pelo pawn (0 = sem arma).</summary>
        public Func<IFxActor, bool, float> WeaponLength = (_, _) => 0;

        /// <summary>APawn::AttachTrailer(Actor, NumPoints, Dur, bRightHand) [O]: RibbonSet preso ao osso da mao.</summary>
        public FxEmitterActor AttachTrailer(IFxActor pawn, int numPoints, float dur, bool rightHand)
        {
            if (!pawn.HasSkeletalMesh) return null;
            var L = WeaponLength(pawn, rightHand);
            if (L <= 0) return null;
            var boneName = rightHand ? pawn.RHandBoneName : pawn.LHandBoneName;
            var bone = string.IsNullOrEmpty(boneName) ? null : pawn.Bone(boneName);
            if (bone == null) return null;
            var mi = pawn.MagicInfo;
            var shot = mi?.ShotTime ?? 0;
            var em = W.Spawn("LineageEffect.RibbonSet", bone.Location, bone.Rotation, pawn);
            if (em == null) return null;
            em.Physics = FxPhysics.None;
            em.LifeSpan = shot + dur;
            if (em.Emitters.Count > 0 && em.Emitters[0] is RibbonEmitterSim rb)
            {
                rb.D.EndBoneOffset = new Vector3(L * 1.06f, 0, 0);
                rb.D.StartBoneOffset = new Vector3(L * 0.53f, 0, 0);
                rb.D.RibbonWidth = L * 1.06f;
                rb.D.FadeOutStartTime = shot;
                rb.D.FadeInEndTime = shot / 3f;
                if (numPoints > 0) rb.D.NumPoints = numPoints;
                rb.D.ThresholdTime = shot / 2f;
                rb.D.ThresholdTime2 = shot;
                rb.D.BoneNameStart = rb.D.BoneNameEnd = boneName;
                rb.BoneStart = rb.BoneEnd = bone;
                rb.ActorFrame = em;
            }
            em.AttachedBone = bone;
            em.RelativeLocation = Vector3.zero;
            return em;
        }

        // ------------------------------------------------------------------ §2.4.3 PlaySkillSound

        static readonly string[] VoiceClasses = { "mfighter", "ffighter", "mdarkelf", "fdarkelf", "mdwarf", "fdwarf", "melf", "felf", "mmagic", "fmagic", "morc", "forc", "mshaman", "fshaman" };

        /// <summary>Indice de voz (CharClassID) pelo modelo do jogador (MFighter -> 0 ...); -1 sem voz.</summary>
        public static int VoiceIndex(string model)
        {
            if (string.IsNullOrEmpty(model)) return -1;
            var m = model.ToLowerInvariant();
            for (var i = 0; i < VoiceClasses.Length; i++) if (m == VoiceClasses[i]) return i;
            return -1;
        }

        public Func<IFxActor, int> VoiceOf = _ => -1;

        /// <summary>PlaySkillSound(Src, SoundActor, Type): tipo 1 cast, 2 shot, 3 explosao, na posicao do this [O].</summary>
        public void PlaySkillSound(IFxActor self, IFxActor src, int type)
        {
            var mi = src?.MagicInfo;
            if (mi == null || self == null) return;
            PlaySkillSoundData(mi.MagicID, mi.LevelID, type, self.Location, self);
        }

        void PlaySkillSoundData(int skillId, int level, int type, Vector3 at, IFxActor voiceOf)
        {
            if (PlaySound == null || Tables?["skillsounds"] is not JObject ss) return;
            var row = ss[$"{skillId}_{level}"] as JObject ?? ss[$"{skillId}_1"] as JObject;
            if (row == null) return;
            var key = type == 1 ? "cast" : type == 2 ? "shot" : "exp";
            if (row[key] is JArray arr)
                foreach (JObject s in arr)
                {
                    var n = (string)s["n"];
                    if (!string.IsNullOrEmpty(n)) PlaySound(n, at, ((float?)s["v"] ?? 255) / 255f, (float?)s["r"] ?? 0);
                }
            if (type == 3) return;
            var vi = voiceOf != null ? VoiceOf(voiceOf) : -1;
            var voices = row[type == 1 ? "voice_cast" : "voice_shot"] as JArray;
            if (vi >= 0 && voices != null && vi < voices.Count)
            {
                var v = (string)voices[vi];
                if (!string.IsNullOrEmpty(v)) PlaySound(v, at, ((float?)row["voice_vol"] ?? 255) / 255f, (float?)row["voice_rad"] ?? 0);
            }
        }
    }
}
