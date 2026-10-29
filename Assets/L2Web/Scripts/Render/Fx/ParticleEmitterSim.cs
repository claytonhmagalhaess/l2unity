// UParticleEmitter do UE2/L2 (spec 09 §4.1-4.4, 4.7.4): slots de particulas, taxa de spawn, SpawnParticle, laco de update
// (integracao, revolucao, colisao, idade relativa, tabelas de tamanho/velocidade/revolucao, cor + fade + opacidade por
// DrawStyle, limite e perda de velocidade), Trigger e particulas diferidas. Enderecos do engine.dll citados na spec:
// Initialize 0x10311ddd, Reset 0x10302a3b, UpdateParticles 0x1030b81b (corpo 0x10605dd0), SpawnParticles 0x10302775,
// SpawnParticle 0x103122ec (corpo 0x10604180), execTrigger 0x1031252b. Tudo em unidades e eixos do Unreal.
// [O] salvo onde marcado: colisao com o mundo (SingleLineCheck) delegada ao dono [I]; forcas de atores nao simuladas [N].
using System;
using System.Collections.Generic;
using UnityEngine;

namespace L2Web.Render.Fx
{
    /// <summary>struct Particle (0xE0 bytes) [O]; Mass guarda 1/Mass depois do spawn.</summary>
    public struct Particle
    {
        public Vector3 Location, OldLocation, Velocity, StartSize, SpinsPerSecond, StartSpin, RevolutionCenter, RevolutionsPerSecond,
            RevolutionsMultiplier, Size, StartLocation, ColorMultiplier, VelocityMultiplier, OldMeshLocation, Acceleration;
        public Color32 Color;
        public float Time, MaxLifetime, Mass;
        public int HitCount, Flags, Subdivision, BoneIndex;
        public FRotator Rotation;

        public const int Active = 1, NoTick = 2, InitialSpawn = 4;
        public bool IsActive => (Flags & Active) != 0;
    }

    /// <summary>O que o emissor precisa do seu AEmitter (dono).</summary>
    public interface IEmitterOwner
    {
        Vector3 Location { get; }
        FRotator Rotation { get; }
        Vector3 Velocity { get; }
        Vector3 PrePivot { get; }
        IReadOnlyList<ParticleEmitterSim> Emitters { get; }
        /// <summary>SingleLineCheck do nivel: de a ate b; null = sem colisao com o mundo [I].</summary>
        bool LineCheck(Vector3 a, Vector3 b, out Vector3 hitLocation, out Vector3 hitNormal);
        /// <summary>Som de spawn/colisao da particula (nome do pacote), na posicao dada.</summary>
        void PlaySound(string sound, Vector3 at, float volume, float radius, float pitch);
    }

    /// <summary>Caixa envolvente em UE (FBox).</summary>
    public struct FBox
    {
        public Vector3 Min, Max;
        public bool IsValid;

        public void Init() { IsValid = false; Min = Max = Vector3.zero; }

        public void Add(Vector3 p)
        {
            if (!IsValid) { Min = Max = p; IsValid = true; return; }
            Min = Vector3.Min(Min, p);
            Max = Vector3.Max(Max, p);
        }

        public void Add(FBox b)
        {
            if (!b.IsValid) return;
            Add(b.Min);
            Add(b.Max);
        }

        public void Expand(float e)
        {
            if (!IsValid) return;
            Min -= Vector3.one * e;
            Max += Vector3.one * e;
        }
    }

    public class ParticleEmitterSim
    {
        public readonly EmitterDef D;
        public Particle[] Particles = Array.Empty<Particle>();
        public IEmitterOwner Owner;
        public FxRand Rng;

        public int ParticleIndex, ActiveParticles, MaxActiveParticles, OtherIndex, DeferredParticles, CurrentSpawnOnTrigger;
        public float PPSFraction, InitialDelay, TimeTillReset, InactiveTime, CurLifeTime, OpacityRatio = 1, MaxSizeScale = 1;
        public bool Initialized, Inactive, AllParticlesDead, WarmedUp, KillPending, RealDisableFogging;
        public Vector3 GlobalOffset, RealExtentMultiplier, RealProjectionNormal, RealMeshNormal;
        public FBox BoundingBox;
        /// <summary>Maior |extensao| da malha (MeshEmitter::Initialize) para RealExtentMultiplier; 0 nos demais.</summary>
        public float MeshExtent;

        /// <summary>Ultimo PPS calculado no UpdateParticles (para AllParticlesDead).</summary>
        public float LastPPS;

        public ParticleEmitterSim(EmitterDef def, FxRand rng)
        {
            D = def;
            Rng = rng;
        }

        public bool Disabled
        {
            get => D.Disabled;
            set => D.Disabled = value;
        }

        // ------------------------------------------------------------------ §4.1

        /// <summary>UParticleEmitter::Initialize(N) [O].</summary>
        public virtual void Initialize(int n)
        {
            n = Math.Max(0, n);
            Particles = new Particle[n];
            Reset();
            RealExtentMultiplier = D.Kind == EmitterKind.Mesh || D.Kind == EmitterKind.VertMesh ? D.ExtentMultiplier * MeshExtent : D.ExtentMultiplier;
            RealMeshNormal = FxMath.SafeNormal(D.MeshNormal);
            MaxActiveParticles = n;
            OpacityRatio = 1;
            Initialized = true;
            if (D.Kind == EmitterKind.Sprite)
            {
                RealProjectionNormal = FxMath.SafeNormal(D.ProjectionNormal);
                // USpriteEmitter::Initialize: UniformSize = UniformSize || UseDirectionAs == PTDU_None [O]
                D.UniformSize = D.UniformSize || D.UseDirectionAs == DirectionUsage.None;
            }
        }

        /// <summary>Reset() 0x10302a3b [O]: nao zera PPSFraction nem os Flags dos slots.</summary>
        public virtual void Reset()
        {
            ActiveParticles = 0;
            ParticleIndex = 0;
            OtherIndex = 0;
            AllParticlesDead = false;
            WarmedUp = false;
            Owner = null;
            InitialDelay = D.InitialDelayRange.GetRand(Rng);
            TimeTillReset = D.AutoResetTimeRange.GetRand(Rng);
        }

        public virtual void CleanUp()
        {
            Particles = Array.Empty<Particle>();
            ActiveParticles = 0;
            ParticleIndex = 0;
            OpacityRatio = 1;
            Initialized = false;
        }

        /// <summary>execTrigger [O]: so reage se Disabled; acumula SpawnOnTrigger.</summary>
        public void Trigger()
        {
            if (!D.Disabled) return;
            if (D.TriggerDisabled) D.Disabled = !D.Disabled;
            if (D.ResetOnTrigger) Reset();
            CurrentSpawnOnTrigger = FxMath.Ftol(D.SpawnOnTriggerRange.GetRand(Rng) + CurrentSpawnOnTrigger);
            if (CurrentSpawnOnTrigger != 0)
            {
                AllParticlesDead = false;
                Inactive = false;
            }
        }

        /// <summary>Script SpawnParticle(Amount): particulas diferidas para o proximo update [O].</summary>
        public void SpawnDeferred(int amount) => DeferredParticles += amount;

        // ------------------------------------------------------------------ §4.2

        /// <summary>UpdateParticles(dt) [O]. Devolve o numero de particulas vivas.</summary>
        public virtual int UpdateParticles(float dt)
        {
            BoundingBox.Init();
            CurLifeTime += dt;
            if (Owner == null) return 0;
            var n = Owner.Emitters.Count - 1;
            if (D.AddLocationFromOtherEmitter >= 0) D.AddLocationFromOtherEmitter = Math.Min(D.AddLocationFromOtherEmitter, n);
            if (D.AddVelocityFromOtherEmitter >= 0) D.AddVelocityFromOtherEmitter = Math.Min(D.AddVelocityFromOtherEmitter, n);
            if (D.SpawnFromOtherEmitter >= 0) D.SpawnFromOtherEmitter = Math.Min(D.SpawnFromOtherEmitter, n);

            // §4.2.1 taxa de spawn: ActiveParticles e a marca d'agua dos slots ja usados
            float pps;
            if (ActiveParticles < MaxActiveParticles)
            {
                if (!D.AutomaticInitialSpawning) pps = D.InitialParticlesPerSecond;
                else
                {
                    var c = D.LifetimeRange.Center;
                    pps = c > 0 ? MaxActiveParticles / c : float.MaxValue;
                }
            }
            else pps = D.ParticlesPerSecond;
            if (CurrentSpawnOnTrigger != 0) pps += D.SpawnOnTriggerPPS;
            LastPPS = pps;
            if (pps > 0 && !KillPending) PPSFraction = SpawnParticles(PPSFraction, pps, dt);

            // §4.2.3 diferidas
            if (!KillPending && DeferredParticles > 0)
            {
                var k = FxMath.Clamp(DeferredParticles, 0, MaxActiveParticles);
                for (var i = 0; i < k; i++)
                    if (SpawnParticle(ParticleIndex, 0, 0, 0, Vector3.zero))
                        Advance();
                DeferredParticles = 0;
            }

            // §4.2.4 laco de update
            var dead = 0;
            var count = Math.Min(ActiveParticles, MaxActiveParticles);
            for (var i = 0; i < count; i++)
            {
                ref var p = ref Particles[i];
                if (!p.IsActive) { dead++; continue; }
                var integrate = (p.Flags & Particle.NoTick) == 0 || D.CoordinateSystem == CoordSystem.Relative;
                if ((p.Flags & Particle.InitialSpawn) != 0)
                {
                    integrate = false;
                    p.Flags &= ~Particle.InitialSpawn;
                }
                else p.Time += dt;
                if (p.Time > p.MaxLifetime)
                {
                    if (D.RespawnDeadParticles)
                    {
                        var t = p.MaxLifetime == 0 ? 0 : FxMath.Fmod(p.Time - p.MaxLifetime + D.InitialTimeRange.GetRand(Rng), p.MaxLifetime);
                        SpawnParticle(i, t, 0, 0, Vector3.zero);
                    }
                    else
                    {
                        p.Flags &= ~Particle.Active;
                        dead++;
                        continue;
                    }
                }
                var hit = false;
                if (integrate)
                {
                    // §4.4.1 integracao
                    p.Velocity += p.Acceleration * dt;
                    p.OldLocation = p.Location;
                    p.Location += FxMath.Mul(p.VelocityMultiplier, p.Velocity) * dt;
                    if (D.UseRevolution)
                    {
                        var o = p.Location - p.RevolutionCenter;
                        o = FxMath.RotateAngleAxis(o, FxMath.Ftol(p.RevolutionsMultiplier.x * p.RevolutionsPerSecond.x * dt * 65535f), new Vector3(1, 0, 0));
                        o = FxMath.RotateAngleAxis(o, FxMath.Ftol(p.RevolutionsMultiplier.y * p.RevolutionsPerSecond.y * dt * 65535f), new Vector3(0, 1, 0));
                        o = FxMath.RotateAngleAxis(o, FxMath.Ftol(p.RevolutionsMultiplier.z * p.RevolutionsPerSecond.z * dt * 65535f), new Vector3(0, 0, 1));
                        p.Location = o + p.RevolutionCenter;
                    }
                    // §4.4.2 colisao (nao em Relative)
                    if (D.CoordinateSystem != CoordSystem.Relative)
                    {
                        Vector3 hitLoc = default, hitNormal = default;
                        if (D.UseCollision)
                        {
                            var ext = FxMath.Mul(FxMath.SafeNormal(p.Location - p.OldLocation), FxMath.Mul(RealExtentMultiplier, p.Size));
                            if (Owner.LineCheck(p.OldLocation, p.Location + ext, out var hl, out var hn))
                            {
                                hit = true;
                                hitNormal = hn;
                                hitLoc = hl - ext;
                            }
                        }
                        if (!hit && D.UseCollisionPlanes)
                            foreach (var pl in D.CollisionPlanes)
                            {
                                var nrm = new Vector3(pl.X, pl.Y, pl.Z);
                                var d0 = Vector3.Dot(nrm, p.OldLocation) - pl.W;
                                var d1 = Vector3.Dot(nrm, p.Location) - pl.W;
                                if ((d0 >= 0) == (d1 >= 0)) continue;
                                var f = d0 / (d0 - d1);
                                hitLoc = p.OldLocation + (p.Location - p.OldLocation) * f;
                                hitNormal = nrm;
                                hit = true;
                                break;
                            }
                        if (hit)
                        {
                            if (D.UseMaxCollisions && p.HitCount + 1 >= Mathf.Floor(D.MaxCollisions.GetRand(Rng)))
                            {
                                if (D.RespawnDeadParticles) SpawnParticle(i, dt * 0.5f, 0, 0, Vector3.zero); // [I] constante 0.5
                                else
                                {
                                    p.Flags &= ~Particle.Active;
                                    dead++;
                                    continue;
                                }
                            }
                            else
                            {
                                p.Velocity -= D.Acceleration * dt * 0.5f;
                                p.Velocity = FxMath.MirrorByVector(p.Velocity, hitNormal);
                                p.Velocity = FxMath.Mul(p.Velocity, D.DampingFactorRange.GetRand(Rng));
                                if (D.DampRotation) p.SpinsPerSecond = FxMath.Mul(p.SpinsPerSecond, D.RotationDampingFactorRange.GetRand(Rng));
                                p.Location = p.OldLocation = hitLoc + hitNormal * 0.01f;
                                p.HitCount++;
                            }
                            if (D.SpawnFromOtherEmitter >= 0 && D.SpawnFromOtherEmitter < Owner.Emitters.Count)
                            {
                                var other = Owner.Emitters[D.SpawnFromOtherEmitter];
                                for (var k = 0; k < D.SpawnAmount; k++)
                                {
                                    if (!other.SpawnParticle(other.ParticleIndex, 0, 0, 3, hitLoc + 0.01f * hitNormal)) break;
                                    ref var q = ref other.Particles[other.ParticleIndex];
                                    if (D.UseSpawnedVelocityScale) q.Velocity += FxMath.Mul(hitNormal, D.SpawnedVelocityScaleRange.GetRand(Rng));
                                    else q.Velocity += hitNormal;
                                    other.Advance();
                                }
                            }
                        }
                    }
                }
                // §4.4.3 idade relativa
                var rel = p.MaxLifetime == 0 ? 0 : FxMath.Clamp(p.Time / p.MaxLifetime, 0, 1);
                // §4.4.5 tamanho
                var s = 1f;
                if (D.UseSizeScale)
                {
                    if (!D.UseRegularSizeScale) { if (p.MaxLifetime != 0 && SizeAt(rel, out var sv)) s = sv; }
                    else s = 1f / (p.Time + 1f);
                }
                p.Size = p.StartSize * s;
                // §4.4.6 escalas de velocidade e revolucao (valem a partir do proximo tick)
                if (D.UseVelocityScale && p.MaxLifetime != 0 && InterpVector(D.VelocityScale, D.VelocityScaleRepeats, rel, Vector3.one, out var vm)) p.VelocityMultiplier = vm;
                if (D.UseRevolutionScale && p.MaxLifetime != 0 && InterpVector(D.RevolutionScale, D.RevolutionScaleRepeats, rel, Vector3.one, out var rm)) p.RevolutionsMultiplier = rm;
                // §4.4.7 cor, fade e opacidade
                p.Color = ComputeColor(in p, rel);
                // §4.4.8 bbox
                if (D.CoordinateSystem == CoordSystem.Relative || D.CoordinateSystem == CoordSystem.RelativeRotation)
                    BoundingBox.Add(Owner.Location + FxMath.RotateVector(p.Location, Owner.Rotation));
                else BoundingBox.Add(p.Location);
                // §4.4.9 limite e perda de velocidade (sempre)
                if (D.MaxAbsVelocity.x != 0) p.Velocity.x = FxMath.Clamp(p.Velocity.x, -D.MaxAbsVelocity.x, D.MaxAbsVelocity.x);
                if (D.MaxAbsVelocity.y != 0) p.Velocity.y = FxMath.Clamp(p.Velocity.y, -D.MaxAbsVelocity.y, D.MaxAbsVelocity.y);
                if (D.MaxAbsVelocity.z != 0) p.Velocity.z = FxMath.Clamp(p.Velocity.z, -D.MaxAbsVelocity.z, D.MaxAbsVelocity.z);
                var loss = D.VelocityLossRange.GetRand(Rng);
                if (D.CoordinateSystem == CoordSystem.Spray && !D.IndependentSprayAccel)
                {
                    var local = FxMath.UnrotateVector(p.Velocity, p.Rotation);
                    p.Velocity -= FxMath.RotateVector(FxMath.Mul(loss, local) * dt, p.Rotation);
                }
                else p.Velocity -= FxMath.Mul(loss, p.Velocity) * dt;
                if (hit && D.MinSquaredVelocity != 0 && p.Velocity.sqrMagnitude < D.MinSquaredVelocity) p.Flags |= Particle.NoTick;
                UpdateParticle(dt, i);
            }
            ExpandBoundingBox();
            // §4.2.5
            MaxSizeScale = 1;
            if (D.UseSizeScale && !D.UseRegularSizeScale)
                foreach (var k in D.SizeScale) MaxSizeScale = Mathf.Max(MaxSizeScale, k.RelativeSize);
            AllParticlesDead = !((dead < MaxActiveParticles && ActiveParticles != dead) || pps != 0 || D.RespawnDeadParticles);
            return ActiveParticles - dead;
        }

        /// <summary>Gancho virtual por particula (vazio na base; Trail/Spark usam) [O].</summary>
        protected virtual void UpdateParticle(float dt, int index) { }

        /// <summary>USpriteEmitter::UpdateParticles expande a bbox pela maior dimensao de StartSizeRange x MaxSizeScale [O].</summary>
        protected virtual void ExpandBoundingBox()
        {
            if (!BoundingBox.IsValid || D.Kind != EmitterKind.Sprite) return;
            var m = Mathf.Max(Mathf.Max(D.StartSizeRange.X.Max, D.StartSizeRange.Y.Max), D.StartSizeRange.Z.Max);
            BoundingBox.Expand(m * MaxSizeScale);
        }

        void Advance()
        {
            ParticleIndex++;
            ActiveParticles = Math.Max(ActiveParticles, ParticleIndex);
            if (MaxActiveParticles > 0) ParticleIndex %= MaxActiveParticles;
        }

        /// <summary>SpawnParticles(OldLeftover, Rate, dt) 0x10302775 [O]: buffer circular, sobrescreve slots vivos.</summary>
        public float SpawnParticles(float oldLeftover, float rate, float dt)
        {
            if (rate <= 0 || Owner == null) return 0;
            var x = oldLeftover + rate * dt;
            var number = Mathf.Floor(x);
            var newLeftover = x - number;
            var inv = 1f / rate;
            var n = (int)FxMath.Clamp(number, 0, MaxActiveParticles);
            if (CurrentSpawnOnTrigger != 0)
            {
                n = FxMath.Clamp(n, 0, CurrentSpawnOnTrigger);
                CurrentSpawnOnTrigger -= n;
            }
            for (var i = 0; i < n; i++)
            {
                var spawnTime = inv * oldLeftover + dt - inv - i * inv;
                if (SpawnParticle(ParticleIndex, spawnTime, Particle.InitialSpawn, 0, Vector3.zero)) Advance();
            }
            return newLeftover;
        }

        // ------------------------------------------------------------------ §4.3

        /// <summary>SpawnParticle(Index, SpawnTime, Flags, SpawnFlags, LocalOffset) [O]. SpawnFlags: 1 sem GlobalOffset, 2 sem dono.</summary>
        public virtual bool SpawnParticle(int index, float spawnTime, int flags, int spawnFlags, Vector3 localOffset)
        {
            if (D.MaxParticles == 0 || Owner == null || KillPending || D.LifetimeRange.Max <= 0) return false;
            if (index < 0 || index >= Particles.Length) return false;
            ref var p = ref Particles[index];
            p.Location = D.StartLocationOffset;
            p.Velocity = D.StartVelocityRange.GetRand(Rng);
            // 3.1 forma inicial
            var shape = D.StartLocationShape;
            if (shape == LocationShape.Box || shape == LocationShape.All) p.Location += D.StartLocationRange.GetRand(Rng);
            if (shape == LocationShape.Sphere || shape == LocationShape.All) p.Location += FxMath.VRand(Rng) * D.SphereRadiusRange.GetRand(Rng);
            if (shape == LocationShape.Polar || shape == LocationShape.All)
            {
                var r = D.StartLocationPolarRange.GetRand(Rng);
                float ax = r.x * Mathf.Deg2Rad, ay = r.y * Mathf.Deg2Rad;
                p.Location += new Vector3(r.z * Mathf.Cos(ax) * Mathf.Sin(ay), r.z * Mathf.Sin(ax) * Mathf.Sin(ay), r.z * Mathf.Cos(ay));
            }
            p.ColorMultiplier = Vector3.one;
            // 3.4 AddLocationFromOtherEmitter
            OtherIndex++;
            var a = D.AddLocationFromOtherEmitter;
            if (a >= 0 && a < Owner.Emitters.Count && Owner.Emitters[a].ActiveParticles > 0)
            {
                var other = Owner.Emitters[a];
                var q = other.Particles[OtherIndex % other.ActiveParticles];
                p.Location += q.Location;
                if (other.D.CoordinateSystem == CoordSystem.Independent || other.D.CoordinateSystem == CoordSystem.Spray) p.Location -= Owner.Location;
            }
            // 3.5 UseRotationFrom
            p.Location = ApplyRotationFrom(p.Location);
            // 3.6 revolucao
            p.RevolutionCenter = D.RevolutionCenterOffsetRange.GetRand(Rng);
            p.RevolutionsPerSecond = D.RevolutionsPerSecondRange.GetRand(Rng);
            // 3.7 sistema de coordenadas
            switch (D.CoordinateSystem)
            {
                case CoordSystem.Independent:
                    if ((spawnFlags & 2) == 0) p.Location += Owner.Location + spawnTime * Owner.Velocity;
                    p.RevolutionCenter += Owner.Location;
                    p.Acceleration = D.Acceleration;
                    break;
                case CoordSystem.RelativeRotation:
                    if ((spawnFlags & 2) == 0) p.Location += Owner.Location + spawnTime * Owner.Velocity;
                    p.RevolutionCenter += Owner.Location;
                    p.Rotation = Owner.Rotation;
                    p.Acceleration = D.Acceleration;
                    break;
                case CoordSystem.Spray:
                    p.RevolutionCenter += Owner.Location;
                    p.Rotation = Owner.Rotation;
                    p.Acceleration = D.Acceleration;
                    break;
                default:
                    p.Acceleration = D.Acceleration;
                    break;
            }
            if ((spawnFlags & 1) == 0) p.Location += GlobalOffset;
            p.Location += localOffset;
            p.OldLocation = p.StartLocation = p.Location;
            // 3.8 escalares
            p.ColorMultiplier = FxMath.Mul(p.ColorMultiplier, D.ColorMultiplierRange.GetRand(Rng));
            p.MaxLifetime = D.LifetimeRange.GetRand(Rng);
            p.Time = D.InitialTimeRange.GetRand(Rng) + spawnTime;
            p.HitCount = 0;
            p.Flags = flags | Particle.Active;
            p.Mass = D.StartMassRange.GetRand(Rng);
            p.StartSize = D.StartSizeRange.GetRand(Rng);
            if (D.UniformSize) p.StartSize.y = p.StartSize.z = p.StartSize.x;
            p.Size = p.StartSize;
            p.Velocity += p.Acceleration * spawnTime;
            p.VelocityMultiplier = Vector3.one;
            p.RevolutionsMultiplier = Vector3.one;
            // 3.9 rotacao da velocidade e direcao
            p.Velocity = ApplyRotationFrom(p.Velocity);
            if (D.GetVelocityDirectionFrom != VelocityDirection.None)
            {
                var dir = D.CoordinateSystem == CoordSystem.Relative || D.CoordinateSystem == CoordSystem.Spray
                    ? FxMath.SafeNormal(p.Location)
                    : FxMath.SafeNormal(Owner.Location - p.Location);
                switch (D.GetVelocityDirectionFrom)
                {
                    case VelocityDirection.StartPositionAndOwner: p.Velocity = FxMath.Mul(-p.Velocity, dir); break;
                    case VelocityDirection.OwnerAndStartPosition: p.Velocity = FxMath.Mul(p.Velocity, dir); break;
                    case VelocityDirection.AddRadial: p.Velocity += dir * D.StartVelocityRadialRange.GetRand(Rng); break;
                }
            }
            var av = D.AddVelocityFromOtherEmitter;
            if (av >= 0 && av < Owner.Emitters.Count && Owner.Emitters[av].ActiveParticles > 0)
            {
                var other = Owner.Emitters[av];
                p.Velocity += FxMath.Mul(other.Particles[OtherIndex % other.ActiveParticles].Velocity, D.AddVelocityMultiplierRange.GetRand(Rng));
            }
            // 3.10 Spray
            if (D.CoordinateSystem == CoordSystem.Spray)
            {
                p.Location = FxMath.RotateVector(p.Location, Owner.Rotation);
                if ((spawnFlags & 2) == 0) p.Location += Owner.Location + spawnTime * Owner.Velocity;
                p.Velocity = FxMath.RotateVector(p.Velocity, Owner.Rotation);
                p.Acceleration = D.IndependentSprayAccel ? D.Acceleration : FxMath.RotateVector(D.Acceleration, Owner.Rotation);
            }
            p.Location += spawnTime * p.Velocity;
            if (p.Mass != 0) p.Mass = 1f / p.Mass;
            // 3.11 spin
            p.StartSpin = D.StartSpinRange.GetRand(Rng);
            p.SpinsPerSecond = D.SpinsPerSecondRange.GetRand(Rng);
            if (Rng.Frand() < D.SpinCCWorCW.x) p.SpinsPerSecond.x *= -1;
            if (Rng.Frand() < D.SpinCCWorCW.y) p.SpinsPerSecond.y *= -1;
            if (Rng.Frand() < D.SpinCCWorCW.z) p.SpinsPerSecond.z *= -1;
            p.StartSpin *= 65535f;
            p.SpinsPerSecond *= 65535f;
            // 3.12 subdivisao
            if (!D.UseRandomSubdivision) p.Subdivision = -1;
            else if (D.SubdivisionEnd != 0) p.Subdivision = FxMath.Ftol(Rng.Frand() * (D.SubdivisionEnd - D.SubdivisionStart) + D.SubdivisionStart);
            else p.Subdivision = FxMath.Ftol(Rng.Frand() * D.TextureUSubdivisions * D.TextureVSubdivisions);
            OnSpawned(index, spawnTime, flags, spawnFlags, localOffset);
            // 3.13 tempo inicial maior que a vida
            if (p.MaxLifetime < p.Time && p.MaxLifetime != 0) return SpawnParticle(index, FxMath.Fmod(p.Time, p.MaxLifetime), 0, 0, Vector3.zero);
            // 3.14 som de spawn
            if (D.SpawnSounds.Count > 0) Owner.PlaySound(D.SpawnSounds[Rng.Rand() % D.SpawnSounds.Count], p.Location, 1, 0, 1);
            AllParticlesDead = false;
            return true;
        }

        /// <summary>Gancho das subclasses depois do spawn base (feixe, fita, malha de vertices).</summary>
        protected virtual void OnSpawned(int index, float spawnTime, int flags, int spawnFlags, Vector3 localOffset) { }

        Vector3 ApplyRotationFrom(Vector3 v)
        {
            switch (D.UseRotationFrom)
            {
                case RotationSource.Actor:
                    // [I] ordem da composicao Owner.Rotation o RotationOffset (lacuna §4.8.3)
                    return FxMath.RotateVector(FxMath.RotateVector(v, D.RotationOffset), Owner.Rotation);
                case RotationSource.Offset:
                    return FxMath.RotateVector(v, D.RotationOffset);
                case RotationSource.Normal:
                {
                    var r = FxMath.VectorToRotator(D.RotationNormal);
                    if (D.EffectAxis == 1) r.Pitch -= 16384;
                    return FxMath.RotateVector(v, r);
                }
                default:
                    return v;
            }
        }

        // ------------------------------------------------------------------ §4.4.4 tabelas

        /// <summary>t = frac((Repeats+1)*RelTime); i = 1o indice com t <= RelativeTime; devolve false se nenhum.</summary>
        public static bool FindKey(IReadOnlyList<double> times, float repeats, double relTime, out int i, out double a, out double t)
        {
            // em double: a FPU x87 do cliente interpola em precisao estendida e arredonda so no fistp (golden em double)
            var x = ((double)repeats + 1) * relTime;
            t = x - Math.Floor(x);
            for (i = 0; i < times.Count; i++)
            {
                double rt = times[i];
                if (t <= rt)
                {
                    double prevT = i == 0 ? 0 : times[i - 1];
                    a = rt == 0 ? 1 : (t - prevT) / (rt - prevT);
                    return true;
                }
            }
            a = 0;
            return false;
        }

        readonly List<double> keyTimes = new();

        /// <summary>Fator da tabela SizeScale (§4.4.5); false = a tabela nao altera o valor.</summary>
        public bool SizeAt(double rel, out float v)
        {
            keyTimes.Clear();
            foreach (var k in D.SizeScale) keyTimes.Add(k.RelativeTime);
            if (!FindKey(keyTimes, D.SizeScaleRepeats, rel, out var i, out var a, out _)) { v = 1; return false; }
            double prev = i == 0 ? 1f : D.SizeScale[i - 1].RelativeSize;
            v = (float)(prev + a * (D.SizeScale[i].RelativeSize - prev));
            return true;
        }

        bool InterpVector(List<VectorKey> table, float repeats, double rel, Vector3 neutral, out Vector3 v)
        {
            keyTimes.Clear();
            foreach (var k in table) keyTimes.Add(k.RelativeTime);
            if (!FindKey(keyTimes, repeats, rel, out var i, out var a, out _)) { v = neutral; return false; }
            var prev = i == 0 ? neutral : table[i - 1].Value;
            v = prev + (float)a * (table[i].Value - prev);
            return true;
        }

        /// <summary>Cor da tabela ColorScale (R,G,B,A arredondados para o par; A so em AlphaBlend) [O]. false = tabela nao altera.</summary>
        public bool ColorAt(double rel, out Color32 c)
        {
            keyTimes.Clear();
            foreach (var k in D.ColorScale) keyTimes.Add(k.RelativeTime);
            if (!FindKey(keyTimes, D.ColorScaleRepeats, rel, out var i, out var a, out _)) { c = new Color32(255, 255, 255, 255); return false; }
            var prev = i == 0 ? new Color32(255, 255, 255, 255) : D.ColorScale[i - 1].Color;
            var next = D.ColorScale[i].Color;
            byte L(byte p, byte n) => (byte)FxMath.RoundHalfEven(p + a * (double)(n - p));
            c = new Color32(L(prev.r, next.r), L(prev.g, next.g), L(prev.b, next.b), D.DrawStyle == DrawStyle.AlphaBlend ? L(prev.a, next.a) : (byte)255);
            return true;
        }

        /// <summary>Fator de fade (§4.4.7): ("out"|"in", f) ou nenhum.</summary>
        public bool FadeAt(double time, double maxLifetime, out bool fadeOut, out float f)
        {
            var fo = D.FadeOut && D.FadeOutStartTime < time && D.FadeOutStartTime != maxLifetime;
            var fi = D.FadeIn && time < D.FadeInEndTime && D.FadeInEndTime != 0;
            fadeOut = fo;
            if (fo) { f = (float)((time - D.FadeOutStartTime) / (maxLifetime - D.FadeOutStartTime)); return true; }
            if (fi) { f = (float)((D.FadeInEndTime - time) / D.FadeInEndTime); return true; }
            f = 0;
            return false;
        }

        /// <summary>§4.4.7: cor da tabela x ColorMultiplier, fade por DrawStyle, opacidade.</summary>
        public Color32 ComputeColor(in Particle p, float rel)
        {
            var c = new Color32(255, 255, 255, 255);
            if (D.UseColorScale && p.MaxLifetime != 0) ColorAt(rel, out c);
            c.r = FxMath.ClampByte(c.r * p.ColorMultiplier.x);
            c.g = FxMath.ClampByte(c.g * p.ColorMultiplier.y);
            c.b = FxMath.ClampByte(c.b * p.ColorMultiplier.z);
            if (FadeAt(p.Time, p.MaxLifetime, out var fadeOut, out var f))
            {
                var F = fadeOut ? D.FadeOutFactor : D.FadeInFactor;
                var k = f * 255f;
                switch (D.DrawStyle)
                {
                    case DrawStyle.Modulated:
                        c = new Color32(127, 127, 127, (byte)(255 - FxMath.RoundHalfEven(F.W * k)));
                        break;
                    case DrawStyle.AlphaBlend:
                        c.a = FxMath.ClampByte(c.a - F.W * k);
                        break;
                    default:
                        c.r = FxMath.ClampByte(c.r - F.X * k);
                        c.g = FxMath.ClampByte(c.g - F.Y * k);
                        c.b = FxMath.ClampByte(c.b - F.Z * k);
                        c.a = FxMath.ClampByte(c.a - F.W * k);
                        break;
                }
            }
            var o = OpacityRatio * D.Opacity;
            if (o < 1 && D.DrawStyle != DrawStyle.Regular)
            {
                if (D.DrawStyle == DrawStyle.AlphaBlend || D.DrawStyle == DrawStyle.Modulated || D.DrawStyle == DrawStyle.AlphaModulate)
                    c.a = FxMath.ClampByte(c.a * o);
                else
                {
                    c.r = FxMath.ClampByte(c.r * o);
                    c.g = FxMath.ClampByte(c.g * o);
                    c.b = FxMath.ClampByte(c.b * o);
                }
            }
            return c;
        }

        /// <summary>Indice da celula de textura por idade (§4.5.2) quando Subdivision == -1.</summary>
        public int SubdivisionIndex(in Particle p, float rel)
        {
            int u = D.TextureUSubdivisions, v = D.TextureVSubdivisions;
            if (u == 0 || v == 0) return -1;
            if (p.Subdivision != -1) return FxMath.Clamp(p.Subdivision, 0, u * v - 1);
            if (p.MaxLifetime == 0) return 0;
            var n = u * v;
            int idx;
            if (D.UseSubdivisionScale)
            {
                idx = D.SubdivisionScale.Count;
                for (var j = 0; j < D.SubdivisionScale.Count; j++)
                    if (rel <= D.SubdivisionScale[j]) { idx = j; break; }
            }
            else if (D.SubdivisionEnd == 0) idx = Mathf.FloorToInt(n * rel);
            else idx = Mathf.FloorToInt(Mathf.Max(1, D.SubdivisionEnd - D.SubdivisionStart) * rel) + D.SubdivisionStart;
            return FxMath.Clamp(idx, 0, n - 1);
        }

        public int LiveCount()
        {
            var n = 0;
            var count = Math.Min(ActiveParticles, Particles.Length);
            for (var i = 0; i < count; i++) if (Particles[i].IsActive) n++;
            return n;
        }
    }
}
