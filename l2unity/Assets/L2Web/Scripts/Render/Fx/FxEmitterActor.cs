// AEmitter do L2 (spec 09 §2.5, §4.6, §4.7): o ator que agrupa os ParticleEmitters, com o Tick (0x10310f96, corpo
// 0x1060bd00), AutoDestroy/AutoReset, warmup, InitialDelay, os setters do L2 (AdjustparticleLife 0x1031205d,
// SetSizeScale 0x10304c23, SetDelayed 0x103070ae, SetOpacity 0x10304890, SetMaxParticles 0x10313f39, SetSpeedRate
// 0x10303639, Kill 0x1030d445) e a fisica usada pelos efeitos: PHYS_None, PHYS_Trailer (physTrailer 0x10311d83) e
// PHYS_NProjectile (ANProjectile::Tick 0x1030b4ab + physNProjectile 0x1030cc9d), alem do anexo a osso (AttachToBone).
// Posicoes e rotacoes em espaco do Unreal. [O] salvo onde marcado.
using System;
using System.Collections.Generic;
using UnityEngine;

namespace L2Web.Render.Fx
{
    /// <summary>Quadro de referencia de outro ator (dono, osso, alvo): posicao/rotacao/velocidade em UE.</summary>
    public interface IFxFrame
    {
        Vector3 Location { get; }
        FRotator Rotation { get; }
        Vector3 Velocity { get; }
        bool Alive { get; }
    }

    public sealed class FixedFrame : IFxFrame
    {
        public Vector3 Location { get; set; }
        public FRotator Rotation { get; set; }
        public Vector3 Velocity { get; set; }
        public bool Alive { get; set; } = true;
        public FixedFrame(Vector3 loc, FRotator rot) { Location = loc; Rotation = rot; }
    }

    public enum FxPhysics { None = 0, Trailer = 10, NProjectile = 0x11 }

    public sealed class FxEmitterActor : IEmitterOwner, IFxFrame
    {
        public readonly FxClassDef Class;
        public readonly List<ParticleEmitterSim> Emitters = new();
        public readonly FxRand Rng;
        public string Name;

        // ---- AActor
        public Vector3 Location;
        public FRotator Rotation;
        public Vector3 Velocity;
        public Vector3 Acceleration;
        public Vector3 PrePivot;
        public float DrawScale = 1;
        public float LifeSpan;
        public FxPhysics Physics = FxPhysics.None;
        public bool bSelfRotation, bTrailerPrePivot, bTrailerSameRotation, bRelativeTrail, bTrailerNoOwnerDestroy;
        public Vector3 RelativeTrailOffset, TrailerPrePivot, RelativeLocation;
        public FRotator RelativeRotation;
        /// <summary>Dono (Owner do SpawnActor / base do trailer / ator ao qual esta preso).</summary>
        public IFxFrame Owner;
        /// <summary>Osso ao qual esta preso (AttachToBone); null = solto.</summary>
        public IFxFrame AttachedBone;
        public bool AttachAbsolute;

        // ---- AEmitter
        public bool AutoDestroy, AutoReset, DisableFogging;
        public FRangeVector GlobalOffsetRange;
        public FRange TimeTillResetRange;
        public float SpeedRate = 1;
        public bool bRotEmitter;
        public FRotator RotPerSecond;
        public bool Initialized;
        public Vector3 GlobalOffset;
        public float TimeTillReset;
        public float FixedLifeTime;
        public bool FirstSpawnParticle;
        public bool bSetSizeScale = true;
        public bool bUseLight;
        public float EL_LifeSpan, EL_InitialDelay;
        public FRange VisibleLimit;
        public float VisibilityInterpRange = 500;
        public FBox BoundingBox;
        public List<string> SpawnSound = new();
        public float SoundRadius, SoundVolume, SoundPitchMin = 1, SoundPitchMax = 1;
        public bool SoundLooping;

        // ---- ANProjectile / ANSkillProjectile
        public bool IsProjectile;
        public float Speed = 10, AccSpeed = 10;
        public IFxFrame TargetActor;
        public Vector3 LastTargetLocation;
        public FRotator LastTargetRotation, HitRot;
        public int SkillId = -1;
        public object MagicInfo;
        /// <summary>Chamado na chegada do projetil (processHitWall -> TriggerExplosion), com a normal de impacto.</summary>
        public Action<FxEmitterActor, Vector3> OnHitWall;
        float lastTargetDist = float.MaxValue;
        bool arrived;

        // ---- estado
        public float Age;
        public bool Destroyed;
        public bool Killed;
        /// <summary>Qualquer objeto do chamador (o pawn, a acao...).</summary>
        public object Tag;
        /// <summary>Transform cuja destruicao destroi o ator (emissores de um tile do mapa).</summary>
        public Transform LifeAnchor;
        bool anchored;
        public Func<Vector3, Vector3, (bool, Vector3, Vector3)> LineCheckFn;
        public Action<string, Vector3, float, float, float> SoundFn;

        public FxEmitterActor(FxClassDef cls, FxRand rng)
        {
            Class = cls;
            Rng = rng;
            Name = cls.Name;
            AutoDestroy = cls.AutoDestroy;
            AutoReset = cls.AutoReset;
            DisableFogging = cls.DisableFogging;
            GlobalOffsetRange = cls.GlobalOffsetRange;
            TimeTillResetRange = cls.TimeTillResetRange;
            SpeedRate = cls.SpeedRate;
            bRotEmitter = cls.bRotEmitter;
            RotPerSecond = cls.RotPerSecond;
            DrawScale = cls.DrawScale;
            Physics = cls.Physics == 10 ? FxPhysics.Trailer : cls.Physics == 0x11 ? FxPhysics.NProjectile : FxPhysics.None;
            Rotation = cls.Rotation;
            RelativeRotation = cls.RelativeRotation;
            RelativeLocation = cls.RelativeLocation;
            LifeSpan = cls.LifeSpan;
            bSelfRotation = cls.bSelfRotation;
            bTrailerPrePivot = cls.bTrailerPrePivot;
            bTrailerSameRotation = cls.bTrailerSameRotation;
            bRelativeTrail = cls.bRelativeTrail;
            bTrailerNoOwnerDestroy = cls.bTrailerNoOwnerDestroy;
            bSetSizeScale = cls.bSetSizeScale;
            bUseLight = cls.bUseLight;
            EL_LifeSpan = cls.EL_LifeSpan;
            EL_InitialDelay = cls.EL_InitialDelay;
            VisibleLimit = cls.VisibleLimit;
            VisibilityInterpRange = cls.VisibilityInterpRange;
            SpawnSound = cls.SpawnSound;
            SoundRadius = cls.SoundRadius;
            SoundVolume = cls.SoundVolume;
            SoundLooping = cls.SoundLooping;
            SoundPitchMin = cls.SoundPitchMin;
            SoundPitchMax = cls.SoundPitchMax;
            IsProjectile = cls.IsProjectile;
            Speed = cls.Speed;
            AccSpeed = cls.AccSpeed;
            foreach (var e in cls.Emitters) Emitters.Add(ParticleEmitterFactory.Create(e.Clone(), rng));
        }

        // ------------------------------------------------------------------ IEmitterOwner / IFxFrame
        Vector3 IFxFrame.Location => Location;
        FRotator IFxFrame.Rotation => Rotation;
        Vector3 IFxFrame.Velocity => Velocity;
        bool IFxFrame.Alive => !Destroyed;
        Vector3 IEmitterOwner.Location => Location;
        FRotator IEmitterOwner.Rotation => Rotation;
        Vector3 IEmitterOwner.Velocity => Velocity;
        Vector3 IEmitterOwner.PrePivot => PrePivot;
        IReadOnlyList<ParticleEmitterSim> IEmitterOwner.Emitters => Emitters;

        public bool LineCheck(Vector3 a, Vector3 b, out Vector3 hitLocation, out Vector3 hitNormal)
        {
            hitLocation = b;
            hitNormal = Vector3.zero;
            if (LineCheckFn == null) return false;
            var (hit, loc, n) = LineCheckFn(a, b);
            hitLocation = loc;
            hitNormal = n;
            return hit;
        }

        public void PlaySound(string sound, Vector3 at, float volume, float radius, float pitch) => SoundFn?.Invoke(sound, at, volume, radius, pitch);

        // ------------------------------------------------------------------ §4.7.1

        /// <summary>AEmitter::Initialize 0x10301e15 [O].</summary>
        public void Initialize()
        {
            if (!Initialized)
            {
                GlobalOffset = GlobalOffsetRange.GetRand(Rng);
                TimeTillReset = TimeTillResetRange.GetRand(Rng);
                Initialized = true;
            }
            BoundingBox.Init();
        }

        // ------------------------------------------------------------------ §4.7.2

        /// <summary>AEmitter::Tick(dt) [O]; devolve false quando o ator se destruiu.</summary>
        public bool Tick(float dt)
        {
            if (Destroyed) return false;
            if (LifeAnchor) anchored = true;
            else if (anchored) { Destroy(); return false; }
            Age += dt;
            if (LifeSpan > 0 && Age >= LifeSpan) { Destroy(); return false; } // [I] expiracao padrao do UE2 (AActor::Tick)
            var dts = SpeedRate * dt;
            TickPhysics(dt);
            if (Destroyed) return false;
            if (bRotEmitter)
            {
                var nr = Rotation + RotPerSecond * dts;
                if (nr != Rotation) Rotation = nr;
            }
            if (!Initialized) Initialize();
            BoundingBox.Init();
            var allDead = true;
            var someEnabled = false;
            var anyDelayed = false;
            foreach (var e in Emitters)
            {
                if (e == null || e.D.Disabled) continue;
                someEnabled = true;
                if (!e.Initialized) e.Initialize(e.D.MaxParticles);
                e.Owner = this;
                e.RealDisableFogging = e.D.DisableFogging || DisableFogging;
                // §4.1.6 InitialDelay
                if (e.InitialDelay != 0)
                {
                    e.InitialDelay -= dts;
                    if (e.InitialDelay > 0) { anyDelayed = true; continue; }
                    e.InitialDelay = 0;
                }
                e.GlobalOffset = GlobalOffset;
                // §4.1.7 warmup
                if (!e.WarmedUp && e.D.WarmupTicksPerSecond != 0 && e.D.RelativeWarmupTime != 0)
                {
                    var w = e.D.LifetimeRange.Center * e.D.RelativeWarmupTime;
                    var dtw = 1f / e.D.WarmupTicksPerSecond;
                    var n = FxMath.Ftol(e.D.WarmupTicksPerSecond * w);
                    for (var i = 0; i < n; i++) e.UpdateParticles(dtw);
                    e.WarmedUp = true;
                }
                if (!e.AllParticlesDead)
                {
                    // §4.2.6 inatividade
                    if (e.Inactive) e.InactiveTime += dts; else e.InactiveTime = 0;
                    if (e.D.SecondsBeforeInactive == 0 || e.InactiveTime <= e.D.SecondsBeforeInactive) e.UpdateParticles(dts);
                    CheckFirstSpawnParticle(e);
                    e.Inactive = true; // zerado pelo render
                    if (!e.AllParticlesDead) allDead = false;
                }
                else
                {
                    // §4.2.7 por emissor
                    if (!e.D.AutoReset || AutoReset)
                    {
                        if (e.D.AutoDestroy && !AutoDestroy) e.D.Disabled = true;
                    }
                    else
                    {
                        if (e.TimeTillReset - dts <= 0)
                        {
                            e.TimeTillReset = e.D.AutoResetTimeRange.GetRand(Rng);
                            e.Reset();
                        }
                        else e.TimeTillReset -= dts;
                    }
                }
                if (!e.AllParticlesDead && e.BoundingBox.IsValid) BoundingBox.Add(e.BoundingBox);
            }
            // §4.2.7 globais
            if (allDead && someEnabled && Emitters.Count != 0 && AutoDestroy && !anyDelayed)
            {
                Destroy();
                return false;
            }
            if (allDead && AutoReset && !AutoDestroy)
            {
                if (TimeTillReset - dts <= 0)
                {
                    GlobalOffset = GlobalOffsetRange.GetRand(Rng);
                    TimeTillReset = TimeTillResetRange.GetRand(Rng);
                    foreach (var e in Emitters) e.Reset();
                    FirstSpawnParticle = false;
                }
                else TimeTillReset -= dts;
            }
            return true;
        }

        /// <summary>CheckFirstSpawnParticle 0x1031067c [O]: no 1o emissor com particulas toca os SpawnSound do ator.</summary>
        void CheckFirstSpawnParticle(ParticleEmitterSim e)
        {
            if (FirstSpawnParticle || e.ActiveParticles <= 0) return;
            FirstSpawnParticle = true;
            if (SoundRadius == 0 || SoundVolume == 0) return;
            foreach (var s in SpawnSound)
                if (!string.IsNullOrEmpty(s) && s != "None")
                    PlaySound(s, Location, SoundVolume / 255f, SoundRadius, SoundPitchMin + (SoundPitchMax - SoundPitchMin) * Rng.Frand());
        }

        public void Destroy()
        {
            Destroyed = true;
        }

        /// <summary>Kill() 0x1030d445 [O]: bloqueia spawns; as vivas terminam e o ator se destroi por AutoDestroy.</summary>
        public void Kill()
        {
            Killed = true;
            foreach (var e in Emitters)
            {
                e.D.RespawnDeadParticles = false;
                e.D.InitialParticlesPerSecond = 0;
                e.D.ParticlesPerSecond = 0;
                e.D.AutoReset = false;
                e.D.AutoDestroy = false;
                e.KillPending = true;
            }
            AutoDestroy = true;
            AutoReset = false;
        }

        public void Trigger()
        {
            foreach (var e in Emitters) e.Trigger();
        }

        // ------------------------------------------------------------------ §4.6 setters do L2

        /// <summary>AdjustparticleLife(T) = SetParticleLifeTimeRange + SetParticleMaxParticles [O].</summary>
        public void AdjustparticleLife(float t)
        {
            var m = 0f;
            var any = false;
            foreach (var e in Emitters)
                if (e.D.ForcedLifeTime)
                {
                    m = any ? Mathf.Max(m, e.D.LifetimeRange.Max) : e.D.LifetimeRange.Max;
                    any = true;
                }
            var delta = t - m;
            EL_LifeSpan += delta;
            foreach (var e in Emitters)
            {
                if (e.D.ForcedLifeTime)
                {
                    e.D.LifetimeRange = new FRange(e.D.LifetimeRange.Min + delta, e.D.LifetimeRange.Max + delta);
                    if (e.D.ForcedFade) e.D.FadeOutStartTime += delta;
                }
            }
            foreach (var e in Emitters)
                if (e.D.ForcedMaxParticles)
                    e.D.MaxParticles = FxMath.Ftol((t - e.D.LifetimeRange.Center) * FxMath.Ftol(e.D.InitialParticlesPerSecond));
        }

        /// <summary>SetSizeScale(f) [O]: so com bSetSizeScale; escala faixas de posicao/tamanho/velocidade e Acceleration.</summary>
        public void SetSizeScale(float f)
        {
            if (!bSetSizeScale) return;
            foreach (var e in Emitters)
            {
                e.D.Acceleration *= f;
                e.D.StartLocationRange = e.D.StartLocationRange * f;
                e.D.SphereRadiusRange = e.D.SphereRadiusRange * f;
                e.D.StartLocationPolarRange = e.D.StartLocationPolarRange * f;
                e.D.StartSizeRange = e.D.StartSizeRange * f;
                e.D.StartVelocityRange = e.D.StartVelocityRange * f;
                if (e.D.Kind == EmitterKind.Beam)
                {
                    e.D.LowFrequencyNoiseRange = e.D.LowFrequencyNoiseRange * f;
                    e.D.HighFrequencyNoiseRange = e.D.HighFrequencyNoiseRange * f;
                }
            }
        }

        /// <summary>SetDelayed(d, all) [O]: soma d ao InitialDelayRange de cada emissor.</summary>
        public void SetDelayed(float d)
        {
            foreach (var e in Emitters)
            {
                e.D.InitialDelayRange = e.D.InitialDelayRange + d;
                if (!e.Initialized) e.InitialDelay = e.D.InitialDelayRange.GetRand(Rng);
            }
        }

        /// <summary>SetOpacity(o) [O]: Opacity *= o (o <= 0 vira 0.001), cumulativo.</summary>
        public void SetOpacity(float o)
        {
            if (o <= 0) o = 0.001f;
            foreach (var e in Emitters) e.D.Opacity *= o;
        }

        public void SetOpacityRatio(float r)
        {
            foreach (var e in Emitters) e.OpacityRatio = r;
        }

        /// <summary>SetMaxParticles(f) [O]: emissores com IPPS e MaxParticles != 0: MaxParticles = ftol(MaxParticles*f), IPPS *= f.</summary>
        public void SetMaxParticles(float f)
        {
            if (f <= 0) return;
            foreach (var e in Emitters)
                if (e.D.InitialParticlesPerSecond != 0 && e.D.MaxParticles != 0)
                {
                    e.D.MaxParticles = FxMath.Ftol(e.D.MaxParticles * f);
                    e.D.InitialParticlesPerSecond *= f;
                }
        }

        public void SetSpeedRate(float r) => SpeedRate = r;

        /// <summary>SetSpeedScale(s) [O], com o bug original em MaxAbsVelocity (X duas vezes, Y nunca).</summary>
        public void SetSpeedScale(float s)
        {
            if (s <= 0) s = 0.001f;
            foreach (var e in Emitters)
            {
                e.D.LifetimeRange = e.D.LifetimeRange / s;
                e.D.InitialParticlesPerSecond *= s;
                e.D.Acceleration *= s * s;
                e.D.FadeInEndTime /= s;
                e.D.FadeOutStartTime /= s;
                e.D.SpinsPerSecondRange = e.D.SpinsPerSecondRange * s;
                e.D.StartVelocityRange = e.D.StartVelocityRange * s;
                e.D.MinSquaredVelocity *= s;
                e.D.MaxAbsVelocity = new Vector3(e.D.MaxAbsVelocity.x * s * s, e.D.MaxAbsVelocity.y, e.D.MaxAbsVelocity.z * s);
                e.D.VelocityLossRange = e.D.VelocityLossRange * s;
            }
        }

        public void SetDisabled(bool disabled, int index = -1)
        {
            for (var i = 0; i < Emitters.Count; i++)
                if (index < 0 || i == index) Emitters[i].D.Disabled = disabled;
        }

        // ------------------------------------------------------------------ fisica

        void TickPhysics(float dt)
        {
            if (AttachedBone != null)
            {
                // AttachToBone: segue o osso com RelativeLocation/RelativeRotation (bAbsolute: so a posicao) [I: convencao do UE2]
                if (!AttachedBone.Alive) { Destroy(); return; }
                var br = AttachedBone.Rotation;
                Location = AttachedBone.Location + FxMath.RotateVector(RelativeLocation, br);
                Rotation = AttachAbsolute ? RelativeRotation : br + RelativeRotation;
                return;
            }
            switch (Physics)
            {
                case FxPhysics.Trailer:
                    PhysTrailer();
                    break;
                case FxPhysics.NProjectile:
                    PhysNProjectile(dt);
                    break;
            }
        }

        /// <summary>physTrailer [O]: posicao pelo dono (+TrailerPrePivot no mundo | +RelativeTrailOffset girado), rotacao do dono se bTrailerSameRotation e !bSelfRotation.</summary>
        void PhysTrailer()
        {
            if (Owner == null || !Owner.Alive)
            {
                if (bTrailerNoOwnerDestroy) Destroy();
                return;
            }
            if (bTrailerPrePivot) Location = Owner.Location + TrailerPrePivot;
            else if (bRelativeTrail) Location = Owner.Location + FxMath.RotateVector(RelativeTrailOffset, Owner.Rotation);
            else Location = Owner.Location;
            if (bTrailerSameRotation && !bSelfRotation) Rotation = Owner.Rotation;
        }

        /// <summary>Entrada em PHYS_NProjectile (setPhysics 0x1030eb15): orienta para o alvo e solta do osso [O/I].</summary>
        public void StartProjectile(IFxFrame target)
        {
            TargetActor = target;
            Physics = FxPhysics.NProjectile;
            AttachedBone = null;
            if (target != null)
            {
                LastTargetLocation = target.Location;
                var dir = FxMath.SafeNormal(LastTargetLocation - Location);
                if (dir != Vector3.zero)
                {
                    Rotation = FxMath.VectorToRotator(dir);
                    LastTargetRotation = Rotation;
                    // [I] lacuna §2.x 1: a velocidade inicial recebe Speed na direcao do alvo (Speed e AccSpeed das classes *_fl)
                    Velocity = dir * Speed;
                }
            }
            lastTargetDist = float.MaxValue;
            arrived = false;
        }

        /// <summary>ANSkillProjectile::Tick + ANProjectile::Tick + physNProjectile [O]; chegada [I: distancia deixa de diminuir].</summary>
        void PhysNProjectile(float dt)
        {
            if (arrived) return;
            if (TargetActor != null && TargetActor.Alive) LastTargetLocation = TargetActor.Location;
            var dir = FxMath.SafeNormal(LastTargetLocation - Location);
            if (dir == Vector3.zero) dir = Rotation.Forward;
            if (bSelfRotation)
            {
                var r = FxMath.VectorToRotator(dir);
                Rotation = Rotation + (r - LastTargetRotation);
                LastTargetRotation = r;
            }
            else Rotation = FxMath.VectorToRotator(dir);
            Speed = Velocity.magnitude;
            Velocity = Speed * dir;
            Acceleration = AccSpeed * dir;
            // physNProjectile: friccao da zona (0 fora da agua), aceleracao, movimento
            Velocity += Acceleration * dt;
            var step = Velocity * dt;
            var before = (LastTargetLocation - Location).magnitude;
            Location += step;
            var after = (LastTargetLocation - Location).magnitude;
            if (after >= before || after <= 1f || after > lastTargetDist + 1f)
            {
                // FarMoveActor ate o alvo, HitWall(-dir) -> processHitWall -> TriggerExplosion; depois PHYS_None
                Location = LastTargetLocation;
                arrived = true;
                HitRot = FxMath.VectorToRotator(-dir);
                Physics = FxPhysics.None;
                OnHitWall?.Invoke(this, -dir);
            }
            lastTargetDist = after;
        }
    }

    /// <summary>Cria o simulador certo para a classe do emissor.</summary>
    public static class ParticleEmitterFactory
    {
        public static ParticleEmitterSim Create(EmitterDef d, FxRand rng) => d.Kind switch
        {
            EmitterKind.Beam => new BeamEmitterSim(d, rng),
            EmitterKind.Ribbon => new RibbonEmitterSim(d, rng),
            EmitterKind.VertMesh => new VertMeshEmitterSim(d, rng),
            _ => new ParticleEmitterSim(d, rng),
        };
    }
}
