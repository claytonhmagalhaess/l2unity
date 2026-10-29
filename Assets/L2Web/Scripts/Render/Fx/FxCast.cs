// Ligacao do sistema de efeitos com o mundo do porte: o pawn (Entity) visto como IFxActor (posicao do cilindro em UE,
// heading como Yaw, ossos do rig como quadros), e a linha do tempo do cast (spec 09 §2.1.2, APawn::MagicProcess
// 0x103024d7): Casting no 1o tick, Channeling/PreShot/Shot nos notifies das fases do plano do cliente (L2Calc.ClientCast,
// mesmas sequencias/notifies do skillanim), PendingNotify = 2 no ultimo AttackShot (ou no fim da sequencia sem notify),
// Explosion na chegada do projetil e o caminho transiente (cast_style 0). Sem skill_visual_effect: tabela legada (LegacyFx).
using System;
using System.Collections.Generic;
using L2Web.World;
using UnityEngine;

namespace L2Web.Render.Fx
{
    /// <summary>Osso do rig como quadro UE (posicao e eixos convertidos do Unity).</summary>
    public sealed class BoneFrame : IFxFrame
    {
        public readonly Transform T;
        public BoneFrame(Transform t) { T = t; }
        public Vector3 Location => T ? Coords.FromUnityF(T.position) : Vector3.zero;
        public FRotator Rotation => T ? FxMath.AxesToRotator(FxRenderer.UeDir(-T.right), FxRenderer.UeDir(T.forward), FxRenderer.UeDir(T.up)) : FRotator.Zero;
        public Vector3 Velocity => Vector3.zero;
        public bool Alive => T;
    }

    /// <summary>Entity do porte como pawn do sistema de efeitos.</summary>
    public sealed class FxPawn : IFxActor
    {
        public readonly Entity E;
        public readonly FxMagicInfo Magic = new();
        readonly Dictionary<string, BoneFrame> bones = new();
        public readonly List<FxEmitterActor> Spelled = new();
        /// <summary>CastingEffectScale (pawn+0x181c) [N: origem nao lida; 1.0].</summary>
        public float CastingEffectScaleValue = 1;
        /// <summary>Efeitos de encantamento da arma (FNWeaponEffect) e halo de raid.</summary>
        public readonly List<FxEmitterActor> WeaponEffects = new();
        public int WeaponEffectKey = -1;
        public FxEmitterActor RaidHalo;

        public FxPawn(Entity e) { E = e; }

        public Vector3 Location => E.Actor.Root ? Coords.FromUnityF(E.Actor.Root.position) + new Vector3(0, 0, E.CollisionHeight) : new Vector3(E.X, E.Y, E.Z);
        public FRotator Rotation => new FRotator(0, Mathf.RoundToInt(E.Motion.Yaw) & 0xffff, 0);
        public Vector3 Velocity => E.Motion.Moving ? Rotation.Forward * E.Speed : Vector3.zero;
        public bool Alive => !E.Actor.Disposed;
        public bool IsPawn => true;
        public bool IsProjectile => false;
        public float CollisionRadius => E.CollisionRadius;
        public float CollisionHeight => E.CollisionHeight;
        public float MeshHeight => E.CollisionHeight;
        public float CastingEffectScale => CastingEffectScaleValue;
        public bool HasSkeletalMesh => E.Actor.Loaded;
        public bool IsNpc => E.Kind == "npc";
        public FxMagicInfo MagicInfo => Magic;
        public FRotator HitRot => Rotation;
        public Vector3 LastTargetLocation => Location;
        public List<FxEmitterActor> SpelledEffects => Spelled;
        public string Tag => E.Kind + E.ObjectId;

        public IFxFrame Bone(string name)
        {
            if (string.IsNullOrEmpty(name) || name == "None") return null;
            if (bones.TryGetValue(name, out var b) && b.T) return b;
            var t = E.Actor.Bone(name);
            if (!t) return null;
            b = new BoneFrame(t);
            bones[name] = b;
            return b;
        }

        string First(params string[] names)
        {
            foreach (var n in names) if (E.Actor.Bone(n)) return n;
            return null;
        }

        /// <summary>Osso da mao direita/esquerda (vtable +0x21c/+0x220: Weapon_R_Bone, senao Bip01_R_Hand) [I nome da funcao].</summary>
        public string RHandBoneName => First("Weapon_R_Bone", "Bip01_R_Hand");
        public string LHandBoneName => First("Weapon_L_Bone", "Bip01_L_Hand");
        /// <summary>RightFootBone/LeftFootBone (+0x454/+0x458) [I: Bip01_R_Foot / Bip01_L_Foot].</summary>
        public string RightFootBone => First("Bip01_R_Foot", "Bip01_R_Calf");
        public string LeftFootBone => First("Bip01_L_Foot", "Bip01_L_Calf");

        /// <summary>GetAliasesTagBoneName(alias) [I]: osso com o nome do alias no rig; "e_bone" cai na coluna (Bip01_Spine1).</summary>
        public bool AliasBone(string alias, out string bone, out Vector3 origin)
        {
            origin = Vector3.zero;
            bone = null;
            if (string.IsNullOrEmpty(alias)) return false;
            if (E.Actor.Bone(alias)) { bone = alias; return true; }
            bone = First("Bip01_Spine1", "Bip01_Spine", "Bip01_head");
            return bone != null;
        }
    }

    /// <summary>Linha do tempo do cast e registro dos pawns.</summary>
    public sealed class FxCastRunner
    {
        public readonly SkillFx Fx;
        public LegacyFx Legacy;
        readonly Dictionary<int, FxPawn> pawns = new();
        readonly List<(float at, Action run)> pending = new();
        float now;

        public FxCastRunner(SkillFx fx) { Fx = fx; }

        public FxPawn Pawn(Entity e)
        {
            if (e == null) return null;
            if (pawns.TryGetValue(e.ObjectId, out var p) && p.E == e) return p;
            p = new FxPawn(e);
            pawns[e.ObjectId] = p;
            return p;
        }

        public void Forget(int objectId) => pawns.Remove(objectId);

        public void Later(float delay, Action run) => pending.Add((now + Mathf.Max(0, delay), run));

        public void Tick(float dt)
        {
            now += dt;
            for (var i = 0; i < pending.Count; i++)
            {
                if (pending[i].at > now) continue;
                var run = pending[i].run;
                pending.RemoveAt(i--);
                try { run(); }
                catch (Exception e) { Debug.LogException(e); }
            }
            foreach (var p in pawns.Values)
                p.Spelled.RemoveAll(e => e.Destroyed);
        }

        public void Clear()
        {
            pending.Clear();
            pawns.Clear();
        }

        /// <summary>
        /// MagicSkillUse: SetMagicInfo + InitSkillProcess (ShotTime = plano do cliente) e os gatilhos nos instantes das fases.
        /// castStyle = MSData+0x30 (MagicType); 0 = skill instantanea (transiente).
        /// </summary>
        public void OnMagicSkillUse(Entity caster, Entity target, int skillId, int level, int castStyle, int hitTimeMs, CastPlan plan)
        {
            var pawn = Pawn(caster);
            var tp = target != null ? Pawn(target) : null;
            if (castStyle == 0)
            {
                // OnReceiveMagicSkillUse: MagicType 0 -> TriggerTransientEffect(sve, pawn, NULL, id) ou SpawnNTransientEffect
                var sve = Fx.Map.Get(skillId, level);
                if (sve != null) Fx.TriggerTransient(pawn, sve, skillId, level);
                else Legacy?.SpawnNTransientEffect(pawn, skillId, level, tp);
                return;
            }
            // sem plano (pawn sem as fases da skill): ShotTime = hitTime e disparo unico no fim [I]
            var shotTime = plan?.Shot ?? hitTimeMs / 1000f;
            var events = plan?.Events ?? new List<(string Cls, float T)>();
            var mi = Fx.SetMagicInfo(pawn, skillId, level, castStyle, hitTimeMs, tp, shotTime, plan?.AniDues0 ?? 0);
            var legacy = mi.Agent == null;
            // 1o tick de magia: TriggerCasting / SkillEffectInit
            if (!legacy) Fx.TriggerCasting(pawn);
            else Legacy?.SkillEffectInit(pawn, skillId, level, tp);
            // notifies das fases
            var shots = new List<float>();
            foreach (var (cls, t) in events) if (cls == "AttackShot") shots.Add(t);
            var lastShot = shots.Count > 0 ? shots[shots.Count - 1] : shotTime;
            foreach (var (cls, t) in events)
            {
                var at = t;
                switch (cls)
                {
                    case "Channeling":
                        Later(at, () => { if (mi.MagicID != skillId) return; if (!legacy) Fx.TriggerChanneling(pawn); else Legacy?.SkillEffectChanneling(pawn, skillId, level, tp); });
                        break;
                    case "AttackPreShot":
                        Later(at, () =>
                        {
                            if (mi.MagicID != skillId) return;
                            mi.StagePreshot++;
                            if (legacy) Legacy?.SkillEffectPreShot(pawn, skillId, level, tp);
                        });
                        break;
                    case "AttackShot":
                    {
                        var final = Mathf.Abs(at - lastShot) < 1e-4f;
                        Later(at, () => Finalize(pawn, skillId, level, tp, final ? 2 : 1, legacy));
                        break;
                    }
                }
            }
            // fim da sequencia sem notify de disparo: PendingNotify = 2 forcado
            if (shots.Count == 0) Later(shotTime, () => Finalize(pawn, skillId, level, tp, 2, legacy));
        }

        /// <summary>APawn::SkillEffectFinalize: StageShot++, TriggerShot/SkillEffectShot; no disparo final limpa o MagicInfo.</summary>
        void Finalize(FxPawn pawn, int skillId, int level, FxPawn target, int pendingNotify, bool legacy)
        {
            var mi = pawn.Magic;
            if (mi.MagicID != skillId) return;
            mi.PendingNotify = pendingNotify;
            if (!legacy) Fx.TriggerShot(pawn);
            else
            {
                mi.StageShot++;
                Legacy?.SkillEffectShot(pawn, skillId, level, target);
            }
            if (pendingNotify == 2) mi.Clear();
        }

        /// <summary>MagicSkillLaunched: alvos associados (bOnMultiTarget).</summary>
        public void OnMagicSkillLaunched(Entity caster, int skillId, IEnumerable<Entity> targets)
        {
            var pawn = Pawn(caster);
            foreach (var t in targets) Fx.AddAssociatedActor(pawn, skillId, Pawn(t));
        }

        public void OnMagicSkillCanceled(Entity caster)
        {
            var pawn = Pawn(caster);
            Fx.Cancel(pawn);
        }
    }
}
