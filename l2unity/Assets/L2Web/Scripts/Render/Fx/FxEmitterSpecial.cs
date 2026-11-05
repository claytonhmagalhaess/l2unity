// Emissores especiais (spec 09 §4.5.5-4.5.7): BeamEmitter (feixes com pontos de baixa/alta frequencia, ruido dinamico,
// ramificacao), RibbonEmitter (rastro de espada amostrado de dois ossos) e VertMeshEmitter (malha animada por vertices,
// uma fase por particula). Enderecos: Beam Initialize 0x10305272, SpawnParticle 0x103142ea, Render 0x10313057;
// Ribbon corpo 0x10692d10-0x10694f00, GetNewRibbonPoint 0x10306f23; VertMesh 0x10309958/0x1030db0c. [O] salvo onde marcado.
using System;
using System.Collections.Generic;
using UnityEngine;

namespace L2Web.Render.Fx
{
    public sealed class BeamEmitterSim : ParticleEmitterSim
    {
        public struct HFPoint { public Vector3 Location; public float T; }

        public HFPoint[] HFPoints = Array.Empty<HFPoint>();
        public Vector3[] LFPoints = Array.Empty<Vector3>();
        public float BeamValueSum;
        public float TimeSinceLastDynamicNoise;
        /// <summary>HitActors por ActorTag (DetermineEndPointBy = Actor): resolvido pelo dono do efeito.</summary>
        public Func<string, IFxFrame> ResolveActor;
        public int Sheets => D.RotatingSheets == 0 ? 1 : D.RotatingSheets;
        public int HF => Math.Max(1, D.HighFrequencyPoints);
        public int LF => Math.Max(1, D.LowFrequencyPoints);

        public BeamEmitterSim(EmitterDef d, FxRand rng) : base(d, rng) { }

        public override void Initialize(int n)
        {
            base.Initialize(n);
            HFPoints = new HFPoint[HF * Math.Max(0, n)];
            LFPoints = new Vector3[LF * Math.Max(0, n)];
        }

        public override int UpdateParticles(float dt)
        {
            BeamValueSum = 0;
            foreach (var e in D.BeamEndPoints) BeamValueSum += e.Weight;
            if (D.BranchEmitter >= 0 && Owner != null) D.BranchEmitter = Math.Min(D.BranchEmitter, Owner.Emitters.Count - 1);
            var r = base.UpdateParticles(dt);
            TimeSinceLastDynamicNoise += dt;
            return r;
        }

        protected override void ExpandBoundingBox()
        {
            if (Particles.Length == 0 || HFPoints.Length == 0) return;
            var count = Math.Min(ActiveParticles, MaxActiveParticles);
            var box = new FBox();
            box.Init();
            var hf = HF;
            for (var i = 0; i < count; i++)
            {
                if (!Particles[i].IsActive) continue;
                box.Add(HFPoints[i * hf].Location);
                box.Add(HFPoints[i * hf + hf - 1].Location);
            }
            if (!box.IsValid) return;
            if (D.CoordinateSystem == CoordSystem.Relative && Owner != null)
            {
                box.Min += Owner.Location;
                box.Max += Owner.Location;
            }
            float Max(FRangeVector v) => Mathf.Max(Mathf.Abs(v.X.Min), Mathf.Abs(v.X.Max), Mathf.Abs(v.Y.Min), Mathf.Abs(v.Y.Max), Mathf.Abs(v.Z.Min), Mathf.Abs(v.Z.Max));
            box.Expand(D.StartSizeRange.X.Max * MaxSizeScale * (Max(D.HighFrequencyNoiseRange) + Max(D.LowFrequencyNoiseRange)));
            BoundingBox = box;
        }

        /// <summary>UBeamEmitter::SpawnParticle (apos o spawn base) [O].</summary>
        protected override void OnSpawned(int index, float spawnTime, int flags, int spawnFlags, Vector3 localOffset)
        {
            if (HFPoints.Length < (index + 1) * HF) return;
            ref var p = ref Particles[index];
            // 1. endpoint ponderado
            var idx = -1;
            if (D.BeamEndPoints.Count > 0)
            {
                var r = Rng.Frand() * BeamValueSum;
                var acc = 0f;
                idx = 0;
                for (var i = 0; i < D.BeamEndPoints.Count; i++)
                {
                    if (acc < r && r <= acc + D.BeamEndPoints[i].Weight) { idx = i; break; }
                    acc += D.BeamEndPoints[i].Weight;
                }
            }
            // 2. delta, fim absoluto e snap
            Vector3 delta, endAbs = p.Location;
            var snap = false;
            switch (D.DetermineEndPointBy)
            {
                case BeamEndPointType.Velocity:
                    delta = p.Velocity * p.MaxLifetime;
                    break;
                case BeamEndPointType.Distance:
                    p.Velocity = FxMath.SafeNormal(p.Velocity);
                    delta = p.Velocity * D.BeamDistanceRange.GetRand(Rng);
                    break;
                case BeamEndPointType.Offset:
                case BeamEndPointType.TraceOffset:
                    delta = idx >= 0 ? D.BeamEndPoints[idx].Offset.GetRand(Rng) : Vector3.zero;
                    endAbs = p.Location + delta;
                    if (D.DetermineEndPointBy == BeamEndPointType.TraceOffset && Owner != null && Owner.LineCheck(p.Location, endAbs, out var hl, out _))
                        endAbs = hl;
                    snap = true;
                    break;
                case BeamEndPointType.Actor:
                {
                    var a = idx >= 0 && ResolveActor != null ? ResolveActor(D.BeamEndPoints[idx].ActorTag) : null;
                    if (a != null && Owner != null)
                    {
                        delta = a.Location - Owner.Location;
                        endAbs = a.Location;
                    }
                    else delta = Vector3.zero;
                    break;
                }
                case BeamEndPointType.OffsetAsAbsolute:
                    endAbs = idx >= 0 ? D.BeamEndPoints[idx].Offset.GetRand(Rng) : p.Location;
                    delta = endAbs - p.Location;
                    snap = true;
                    break;
                default:
                    delta = Vector3.zero;
                    break;
            }
            if (D.NoiseDeterminesEndPoint) snap = false;
            // 3. pontos de baixa frequencia (bug original: o ramo com escala usa o range HF)
            int lf = LF, hf = HF;
            var lb = index * lf;
            LFPoints[lb] = p.Location;
            for (var i = 1; i < lf; i++)
            {
                Vector3 nL;
                if (D.UseLowFrequencyScale) nL = FxMath.Mul(D.HighFrequencyNoiseRange.GetRand(Rng), ScaleAt(D.LFScaleFactors, FxMath.Frac(i / (float)lf * (D.LFScaleRepeats + 1))));
                else nL = D.LowFrequencyNoiseRange.GetRand(Rng);
                LFPoints[lb + i] = p.Location + delta * (i / (float)(lf - 1)) + nL;
            }
            if (snap && lf > 1) LFPoints[lb + lf - 1] = endAbs;
            // 4. pontos de alta frequencia
            var hb = index * hf;
            HFPoints[hb] = new HFPoint { Location = LFPoints[lb], T = 0 };
            var accu = 0f;
            var seg = 0;
            for (var j = 1; j < hf; j++)
            {
                Vector3 nH;
                if (D.UseHighFrequencyScale) nH = FxMath.Mul(D.HighFrequencyNoiseRange.GetRand(Rng), ScaleAt(D.HFScaleFactors, FxMath.Frac(j / (float)hf * (D.HFScaleRepeats + 1))));
                else nH = D.HighFrequencyNoiseRange.GetRand(Rng);
                accu += 1f / (hf - 1);
                var u = (lf - 1) * accu;
                while (u > 1 && seg < lf - 2) { u -= 1; accu -= 1f / (lf - 1); seg++; }
                var a = LFPoints[lb + Math.Min(seg, lf - 1)];
                var b = LFPoints[lb + Math.Min(seg + 1, lf - 1)];
                var loc = Vector3.Lerp(a, b, FxMath.Clamp(u, 0, 1)) + nH;
                HFPoints[hb + j] = new HFPoint { Location = loc, T = j / (float)(hf - 1) };
                // 5. ramificacao
                if (D.UseBranching && D.BranchEmitter >= 0 && Owner != null && D.BranchEmitter < Owner.Emitters.Count
                    && D.BranchHFPointsRange.Min < j && j < D.BranchHFPointsRange.Max && Rng.Frand() <= D.BranchProbability.GetRand(Rng))
                {
                    var other = Owner.Emitters[D.BranchEmitter];
                    var n = FxMath.Ftol(D.BranchSpawnAmountRange.GetRand(Rng));
                    for (var k = 0; k < n; k++)
                    {
                        if (!other.SpawnParticle(other.ParticleIndex, 0, 0, 3, loc)) break;
                        if (D.LinkupLifetime)
                        {
                            other.Particles[other.ParticleIndex].Time = p.Time;
                            other.Particles[other.ParticleIndex].MaxLifetime = p.MaxLifetime;
                        }
                        other.ParticleIndex++;
                        other.ActiveParticles = Math.Max(other.ActiveParticles, other.ParticleIndex);
                        if (other.MaxActiveParticles > 0) other.ParticleIndex %= other.MaxActiveParticles;
                    }
                }
            }
            if (snap && hf > 1) HFPoints[hb + hf - 1].Location = endAbs;
        }

        static Vector3 ScaleAt(List<BeamScale> table, float t)
        {
            if (table.Count == 0) return Vector3.one;
            for (var i = 0; i < table.Count; i++)
                if (t <= table[i].RelativeLength)
                {
                    var prevT = i == 0 ? 0 : table[i - 1].RelativeLength;
                    var prevV = i == 0 ? Vector3.one : table[i - 1].FrequencyScale;
                    var a = table[i].RelativeLength == prevT ? 1 : (t - prevT) / (table[i].RelativeLength - prevT);
                    return prevV + a * (table[i].FrequencyScale - prevV);
                }
            return table[table.Count - 1].FrequencyScale;
        }

        /// <summary>Ruido dinamico (no render): random walk cumulativo nos pontos HF do intervalo [O].</summary>
        public void ApplyDynamicNoise()
        {
            if (D.DynamicHFNoiseRange.IsZero) return;
            var count = Math.Min(ActiveParticles, MaxActiveParticles);
            var hf = HF;
            var first = true;
            for (var i = 0; i < count; i++)
            {
                if (!Particles[i].IsActive) continue;
                var T = D.DynamicTimeBetweenNoiseRange.GetRand(Rng);
                var k = T != 0 ? FxMath.Ftol(TimeSinceLastDynamicNoise / T) : 1;
                if (first) { TimeSinceLastDynamicNoise = T != 0 ? FxMath.Fmod(TimeSinceLastDynamicNoise, T) : 0; first = false; }
                if (k == 0) continue;
                for (var s = 0; s < Sheets; s++)
                    for (var j = 0; j < hf; j++)
                        if (D.DynamicHFNoisePointsRange.Min < j && j < D.DynamicHFNoisePointsRange.Max)
                            HFPoints[i * hf + j].Location += D.DynamicHFNoiseRange.GetRand(Rng) * k;
            }
        }
    }

    public sealed class RibbonEmitterSim : ParticleEmitterSim
    {
        public struct RibbonPoint { public Vector3 Location, LocationUnder, MovingDirection; public float Width; }

        public readonly List<RibbonPoint> RibbonPoints = new();
        public float SampleTimer, RealSampleRate;
        public int SheetsUsed = 1;
        public bool bKilled;
        /// <summary>Ossos de inicio e fim (AttachTrailer: osso da mao); null = sem pontos.</summary>
        public IFxFrame BoneStart, BoneEnd;
        /// <summary>Quadro do ator dono (para passar os pontos ao espaco local em Relative).</summary>
        public IFxFrame ActorFrame;
        RibbonPoint? last;
        /// <summary>NumPoints original (AccDrop altera a propriedade).</summary>
        public int NumPointsOrig;

        public RibbonEmitterSim(EmitterDef d, FxRand rng) : base(d, rng)
        {
            d.MaxParticles = 1; // PostLoad/PostEditChange forcam MaxParticles = 1 [O]
            NumPointsOrig = d.NumPoints;
        }

        public override void Initialize(int n)
        {
            base.Initialize(1);
            RealSampleRate = D.SampleRate;
            SampleTimer = D.SampleRate;
            SheetsUsed = Math.Max(D.NumSheets, 1);
        }

        protected override void OnSpawned(int index, float spawnTime, int flags, int spawnFlags, Vector3 localOffset)
        {
            if (D.bSamplePoints) RibbonPoints.Clear();
            last = null;
        }

        /// <summary>GetNewRibbonPoint [O]: so com bUseBones, mesh esqueletica e eixo BoneNormal(3); Relative.</summary>
        bool NewPoint(out RibbonPoint pt)
        {
            pt = default;
            if (!D.bUseBones || BoneStart == null || BoneEnd == null || D.GetPointAxisFrom != 3) return false;
            var s = BoneStart.Location + FxMath.RotateVector(D.StartBoneOffset, BoneStart.Rotation);
            var e = BoneEnd.Location + FxMath.RotateVector(D.EndBoneOffset, BoneEnd.Rotation);
            var dir = FxMath.SafeNormal(e - s);
            var a = ActorFrame ?? Owner as IFxFrame;
            Vector3 L = s;
            if (D.CoordinateSystem == CoordSystem.Relative && a != null)
            {
                L = FxMath.UnrotateVector(s - a.Location, a.Rotation);
                dir = FxMath.UnrotateVector(dir, a.Rotation + D.RotationOffset);
            }
            pt.MovingDirection = dir;
            pt.LocationUnder = L - D.PointOriginOffset * D.RibbonWidth * dir;
            pt.Location = L + (1 - D.PointOriginOffset) * D.RibbonWidth * dir;
            pt.Width = D.RibbonWidth;
            return true;
        }

        public override int UpdateParticles(float dt)
        {
            var live = base.UpdateParticles(dt);
            if (Particles.Length == 0 || !Particles[0].IsActive) return live;
            ref var p = ref Particles[0];
            RibbonPoint head = default;
            var moving = !bKilled && NewPoint(out head);
            if (moving)
            {
                if (RibbonPoints.Count == 0) RibbonPoints.Add(head); else RibbonPoints[0] = head;
                SampleTimer += dt;
                if (SampleTimer >= RealSampleRate)
                {
                    SampleTimer = 0;
                    var far = last == null || Vector3.Distance(last.Value.LocationUnder, head.LocationUnder) + Vector3.Distance(last.Value.Location, head.Location) >= D.MinSampleDist;
                    if (far)
                    {
                        RibbonPoints.Insert(1, head);
                        last = head;
                    }
                    else if (D.bDecayPoints && RibbonPoints.Count > 1) RibbonPoints.RemoveAt(RibbonPoints.Count - 1);
                }
            }
            else if (D.bDecayPointsWhenStopped || bKilled)
            {
                if (D.bSyncDecayWhenKilled && bKilled && RibbonPoints.Count > 1) RealSampleRate = (p.MaxLifetime - p.Time) / (RibbonPoints.Count - 1);
                SampleTimer += dt;
                if (SampleTimer >= RealSampleRate && RibbonPoints.Count > 0)
                {
                    SampleTimer = 0;
                    RibbonPoints.RemoveAt(RibbonPoints.Count - 1);
                }
            }
            // AccDrop
            var n = RibbonPoints.Count;
            if (n >= D.MinPoints + D.PointsDropRate && (D.AccDrop == 1 && n >= D.NumPoints || (D.AccDrop == 2 || D.AccDrop == 3) && p.Time >= D.ThresholdTime))
                D.NumPoints -= D.PointsDropRate;
            else if (D.AccDrop == 3 && p.Time >= D.ThresholdTime2) D.NumPoints -= 1;
            D.NumPoints = Math.Max(D.NumPoints, 2);
            while (RibbonPoints.Count > D.NumPoints) RibbonPoints.RemoveAt(RibbonPoints.Count - 1);
            return live;
        }

        /// <summary>Pontos com a interpolacao Hermite (bUseInterpolation) para o render [O].</summary>
        public List<RibbonPoint> RenderPoints()
        {
            if (!D.bUseInterpolation || RibbonPoints.Count < 4) return RibbonPoints;
            var outp = new List<RibbonPoint>();
            var cnt = Math.Max(2, D.CntrPoints);
            for (var i = 0; i < RibbonPoints.Count - 1; i++)
            {
                var p0 = RibbonPoints[i];
                var p1 = RibbonPoints[i + 1];
                var pm = RibbonPoints[Math.Max(0, i - 1)];
                var pn = RibbonPoints[Math.Min(RibbonPoints.Count - 1, i + 2)];
                var t0 = (p1.Location - pm.Location) / D.ScaleRatio;
                var t1 = (pn.Location - p0.Location) / D.ScaleRatio;
                var t0u = (p1.LocationUnder - pm.LocationUnder) / D.ScaleRatio;
                var t1u = (pn.LocationUnder - p0.LocationUnder) / D.ScaleRatio;
                outp.Add(p0);
                for (var k = 1; k < cnt; k++)
                {
                    var a = k / (float)cnt;
                    float h1 = 2 * a * a * a - 3 * a * a + 1, h2 = a * a * a - 2 * a * a + a, h3 = -2 * a * a * a + 3 * a * a, h4 = a * a * a - a * a;
                    outp.Add(new RibbonPoint
                    {
                        Location = h1 * p0.Location + h2 * t0 + h3 * p1.Location + h4 * t1,
                        LocationUnder = h1 * p0.LocationUnder + h2 * t0u + h3 * p1.LocationUnder + h4 * t1u,
                        Width = p0.Width,
                    });
                }
            }
            outp.Add(RibbonPoints[RibbonPoints.Count - 1]);
            return outp;
        }
    }

    public sealed class VertMeshEmitterSim : ParticleEmitterSim
    {
        /// <summary>Fase da animacao de cada slot (segundos desde o nascimento x SpeedRate) [O: AnimFrame por slot; taxa [I]].</summary>
        public float[] AnimTime = Array.Empty<float>();

        public VertMeshEmitterSim(EmitterDef d, FxRand rng) : base(d, rng) { }

        public override void Initialize(int n)
        {
            base.Initialize(n);
            AnimTime = new float[Math.Max(0, n)];
        }

        public override bool SpawnParticle(int index, float spawnTime, int flags, int spawnFlags, Vector3 localOffset)
        {
            var ok = base.SpawnParticle(index, spawnTime, flags, spawnFlags, localOffset);
            if (ok && index < AnimTime.Length) AnimTime[index] = 0;
            return ok;
        }

        protected override void UpdateParticle(float dt, int index)
        {
            if (index < AnimTime.Length) AnimTime[index] += dt;
        }
    }
}
