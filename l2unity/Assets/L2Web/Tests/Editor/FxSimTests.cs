// Regras da simulacao de particulas (spec 09 §4) e do AEmitter (§2.5, §4.6, §4.7) conferidas com valores de referencia
// tirados do pseudocodigo: GetRand, ordem Z/Y/X, slots e buffer circular, frac((Repeats+1)*RelTime) com o efeito de borda,
// cor/fade/opacidade por DrawStyle, UV por subdivisao, blending por DrawStyle, giro, AdjustparticleLife, SetSizeScale,
// SetDelayed, Kill, Trigger e o projetil.
using System.Collections.Generic;
using L2Web.Render.Fx;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.Rendering;

namespace L2Web.Tests
{
    public class FxSimTests
    {
        /// <summary>frand com uma sequencia fixa (ciclica).</summary>
        sealed class SeqRand : FxRand
        {
            readonly float[] seq;
            int i;
            public SeqRand(params float[] seq) : base(1) { this.seq = seq; }
            public override float Frand() => seq[i++ % seq.Length];
        }

        sealed class Owner : IEmitterOwner
        {
            public Vector3 Location { get; set; }
            public FRotator Rotation { get; set; }
            public Vector3 Velocity { get; set; }
            public Vector3 PrePivot { get; set; }
            public List<ParticleEmitterSim> List = new();
            public IReadOnlyList<ParticleEmitterSim> Emitters => List;
            public bool LineCheck(Vector3 a, Vector3 b, out Vector3 hitLocation, out Vector3 hitNormal) { hitLocation = b; hitNormal = Vector3.zero; return false; }
            public void PlaySound(string sound, Vector3 at, float volume, float radius, float pitch) { }
        }

        static ParticleEmitterSim Sim(EmitterDef d, FxRand r, Owner o = null)
        {
            var s = new ParticleEmitterSim(d, r);
            o ??= new Owner();
            o.List.Add(s);
            s.Initialize(d.MaxParticles);
            s.Owner = o;
            return s;
        }

        [Test]
        public void GetRand_MaxMaisMinMenosMaxVezesFrand()
        {
            var r = new FRange(2, 5);
            Assert.AreEqual(5f, r.GetRand(new SeqRand(0)), 1e-6, "frand 0 -> Max");
            Assert.AreEqual(2f, r.GetRand(new SeqRand(1)), 1e-6, "frand 1 -> Min");
            Assert.AreEqual(5 + (2 - 5) * 0.25f, r.GetRand(new SeqRand(0.25f)), 1e-6);
            Assert.AreEqual(3.5f, r.Center, 1e-6);
        }

        [Test]
        public void RangeVector_SorteiaZDepoisYDepoisX()
        {
            var v = new FRangeVector(new FRange(0, 1), new FRange(0, 1), new FRange(0, 1));
            // frand = 1 -> Min=0, frand = 0 -> Max=1; sequencia (z, y, x) = (1, 0, 0.5)
            var got = v.GetRand(new SeqRand(1, 0, 0.5f));
            Assert.AreEqual(0f, got.z, 1e-6, "Z primeiro");
            Assert.AreEqual(1f, got.y, 1e-6, "Y segundo");
            Assert.AreEqual(0.5f, got.x, 1e-6, "X por ultimo");
        }

        [Test]
        public void AppFrand_RandSobre32767_IntervaloFechado()
        {
            var r = new FxRand(123);
            for (var i = 0; i < 1000; i++)
            {
                var f = r.Frand();
                Assert.That(f, Is.InRange(0f, 1f));
            }
            Assert.AreEqual(1f, (float)(32767 / 32767.0));
        }

        [Test]
        public void Tabelas_FracRepeatsMaisUm_ComBordaEmUm()
        {
            var times = new List<double> { 0, 0.5, 1 };
            Assert.IsTrue(ParticleEmitterSim.FindKey(times, 0, 0.25f, out var i, out var a, out var t));
            Assert.AreEqual(1, i);
            Assert.AreEqual(0.5f, a, 1e-6);
            // RelTime 1.0 com Repeats 0: frac(1.0) = 0 -> 1o ponto (efeito de borda do original)
            Assert.IsTrue(ParticleEmitterSim.FindKey(times, 0, 1f, out i, out a, out t));
            Assert.AreEqual(0, i);
            Assert.AreEqual(0f, t, 1e-6);
            Assert.AreEqual(1f, a, 1e-6, "RelativeTime 0 -> a = 1");
            // Repeats 1: t = frac(2*0.75) = 0.5
            Assert.IsTrue(ParticleEmitterSim.FindKey(times, 1, 0.75f, out i, out a, out t));
            Assert.AreEqual(0.5f, t, 1e-6);
            Assert.AreEqual(1, i);
            // nenhum ponto alcanca t: tabela nao altera
            Assert.IsFalse(ParticleEmitterSim.FindKey(new List<double> { 0.2 }, 0, 0.5f, out _, out _, out _));
        }

        static EmitterDef Def()
        {
            var d = new EmitterDef { MaxParticles = 3, InitialParticlesPerSecond = 10000, AutomaticInitialSpawning = false, RespawnDeadParticles = false, LifetimeRange = FRange.Of(1), StartSizeRange = FRangeVector.Of(10) };
            return d;
        }

        [Test]
        public void Spawn_PorSlots_BufferCircular_EMorte()
        {
            var s = Sim(Def(), new FxRand(7));
            Assert.AreEqual(3, s.MaxActiveParticles);
            s.UpdateParticles(0.1f);
            Assert.AreEqual(3, s.ActiveParticles, "marca d'agua dos slots");
            Assert.AreEqual(0, s.ParticleIndex, "voltou ao inicio (3 % 3)");
            Assert.AreEqual(3, s.LiveCount());
            Assert.IsFalse(s.AllParticlesDead);
            // fase inicial terminou (ActiveParticles == MaxActiveParticles): passa a ParticlesPerSecond = 0
            s.UpdateParticles(0.5f);
            Assert.AreEqual(0f, s.LastPPS);
            Assert.AreEqual(3, s.LiveCount());
            s.UpdateParticles(0.6f);
            Assert.AreEqual(0, s.LiveCount(), "vida de 1 s passou");
            Assert.IsTrue(s.AllParticlesDead);
        }

        [Test]
        public void Spawn_InitialSpawn_NaoIntegraNoPrimeiroTick()
        {
            var d = Def();
            d.StartVelocityRange = FRangeVector.Of(new Vector3(100, 0, 0));
            d.CoordinateSystem = CoordSystem.Independent;
            var s = Sim(d, new FxRand(1));
            s.UpdateParticles(0.1f);
            var p = s.Particles[0];
            Assert.AreEqual(Particle.Active, p.Flags, "InitialSpawn consumido");
            // SpawnTime = inv*0 + dt - inv - i*inv; Location += SpawnTime*Velocity (Time = SpawnTime)
            Assert.AreEqual(p.Time * 100f, p.Location.x, 1e-3);
            s.UpdateParticles(0.1f);
            Assert.AreEqual((p.Time + 0.1f) * 100f, s.Particles[0].Location.x, 1e-3, "agora integra");
        }

        [Test]
        public void Respawn_NoMesmoSlot_ComFmod()
        {
            var d = Def();
            d.RespawnDeadParticles = true;
            var s = Sim(d, new FxRand(3));
            s.UpdateParticles(0.1f);
            s.UpdateParticles(1.2f);
            Assert.AreEqual(3, s.LiveCount(), "renasceram");
            foreach (var p in s.Particles) Assert.That(p.Time, Is.LessThan(1f));
            Assert.IsFalse(s.AllParticlesDead);
        }

        [Test]
        public void Cor_AlphaSoEmAlphaBlend_EFadePorEstilo()
        {
            var d = Def();
            d.UseColorScale = true;
            d.ColorScale.Add(new ColorKey { RelativeTime = 0, Color = new Color32(255, 0, 0, 0) });
            d.ColorScale.Add(new ColorKey { RelativeTime = 1, Color = new Color32(255, 0, 0, 200) });
            var s = Sim(d, new FxRand(1));
            Assert.IsTrue(s.ColorAt(0.5f, out var c));
            Assert.AreEqual(255, c.a, "Translucent: alfa 255");
            d.DrawStyle = DrawStyle.AlphaBlend;
            Assert.IsTrue(s.ColorAt(0.5f, out c));
            Assert.AreEqual(100, c.a);
            // fade-out Translucent escurece RGB: f = (t - 0.5)/(1 - 0.5)
            d.DrawStyle = DrawStyle.Translucent;
            d.FadeOut = true;
            d.FadeOutStartTime = 0.5f;
            var p = new Particle { Time = 0.75f, MaxLifetime = 1, ColorMultiplier = Vector3.one };
            var col = s.ComputeColor(in p, 0.75f);
            Assert.AreEqual(255 - 128, col.r, 1, "R - F.X*f*255 (round-half-even)");
            // Modulated: cinza 127 e alfa 255 - round(F.W*k)
            d.DrawStyle = DrawStyle.Modulated;
            col = s.ComputeColor(in p, 0.75f);
            Assert.AreEqual(127, col.r);
            Assert.AreEqual(255 - 128, col.a, 1);
            // opacidade: aditivo multiplica RGB, AlphaBlend multiplica A
            d.FadeOut = false;
            d.Opacity = 0.5f;
            d.DrawStyle = DrawStyle.Brighten;
            col = s.ComputeColor(in p, 0.75f);
            Assert.AreEqual(128, col.r, 1);
            Assert.AreEqual(255, col.a);
            d.DrawStyle = DrawStyle.AlphaBlend;
            col = s.ComputeColor(in p, 0.75f);
            Assert.AreEqual(255, col.r);
            Assert.AreEqual(75, col.a, 1, "ColorScale em 0.75 = 150; x opacidade 0.5 = 75");
        }

        [Test]
        public void Cor_ColorMultiplierNaoMultiplicaAlfa()
        {
            var s = Sim(Def(), new FxRand(1));
            var p = new Particle { Time = 0.1f, MaxLifetime = 1, ColorMultiplier = new Vector3(0.5f, 1f, 0.25f) };
            var c = s.ComputeColor(in p, 0.1f);
            Assert.AreEqual(128, c.r);
            Assert.AreEqual(255, c.g);
            Assert.AreEqual(64, c.b);
            Assert.AreEqual(255, c.a);
        }

        [Test]
        public void Tamanho_RegularSizeScale_EhUmSobreTempoMaisUm()
        {
            var d = Def();
            d.UseSizeScale = true;
            d.UseRegularSizeScale = true;
            var s = Sim(d, new FxRand(1));
            s.UpdateParticles(0.1f);
            s.UpdateParticles(0.4f);
            var p = s.Particles[0];
            Assert.AreEqual(p.StartSize.x / (p.Time + 1f), p.Size.x, 1e-4);
        }

        [Test]
        public void Subdivisao_IndicePorIdade_EUvColunaAColuna()
        {
            var d = Def();
            d.TextureUSubdivisions = 4;
            d.TextureVSubdivisions = 4;
            var s = Sim(d, new FxRand(1));
            var p = new Particle { Subdivision = -1, MaxLifetime = 1 };
            Assert.AreEqual(0, s.SubdivisionIndex(in p, 0f));
            Assert.AreEqual(8, s.SubdivisionIndex(in p, 0.5f), "floor(16*0.5)");
            Assert.AreEqual(15, s.SubdivisionIndex(in p, 1f), "clamp N-1");
            d.SubdivisionStart = 14;
            d.SubdivisionEnd = 16;
            Assert.AreEqual(15, s.SubdivisionIndex(in p, 0.5f), "floor(max(1,2)*0.5)+14");
            p.Subdivision = 3;
            Assert.AreEqual(3, s.SubdivisionIndex(in p, 0.9f), "aleatoria fixa");
            var (u0, v0, u1, v1) = FxRenderer.SubdivisionUv(1, 4, 4);
            Assert.AreEqual(0f, u0, 1e-6, "idx 1 = celula abaixo da 0 (u = idx / V)");
            Assert.AreEqual(0.25f, v0, 1e-6);
            Assert.AreEqual(0.25f, u1, 1e-6);
            Assert.AreEqual(0.5f, v1, 1e-6);
            var (a0, b0, _, _) = FxRenderer.SubdivisionUv(5, 4, 4);
            Assert.AreEqual(0.25f, a0, 1e-6);
            Assert.AreEqual(0.25f, b0, 1e-6);
        }

        [Test]
        public void Blending_PorDrawStyle()
        {
            Assert.AreEqual((BlendMode.One, BlendMode.Zero), FxRenderer.Blend(DrawStyle.Regular));
            Assert.AreEqual((BlendMode.SrcAlpha, BlendMode.OneMinusSrcAlpha), FxRenderer.Blend(DrawStyle.AlphaBlend));
            Assert.AreEqual((BlendMode.DstColor, BlendMode.SrcColor), FxRenderer.Blend(DrawStyle.Modulated));
            Assert.AreEqual((BlendMode.One, BlendMode.One), FxRenderer.Blend(DrawStyle.Translucent));
            Assert.AreEqual((BlendMode.One, BlendMode.OneMinusSrcAlpha), FxRenderer.Blend(DrawStyle.AlphaModulate));
            Assert.AreEqual((BlendMode.Zero, BlendMode.OneMinusSrcColor), FxRenderer.Blend(DrawStyle.Darken));
            Assert.AreEqual((BlendMode.One, BlendMode.OneMinusSrcColor), FxRenderer.Blend(DrawStyle.Brighten));
            Assert.AreEqual(3, FxRenderer.FogMode(DrawStyle.Modulated, false));
            Assert.AreEqual(2, FxRenderer.FogMode(DrawStyle.Translucent, false));
            Assert.AreEqual(1, FxRenderer.FogMode(DrawStyle.AlphaBlend, false));
            Assert.AreEqual(0, FxRenderer.FogMode(DrawStyle.Translucent, true));
        }

        [Test]
        public void Giro_SpinPreMultiplicadoPor65535_ENegativoEspelha()
        {
            var d = Def();
            d.SpinParticles = true;
            d.SpinsPerSecondRange = FRangeVector.Of(new Vector3(0.5f, 0, 0));
            d.StartSpinRange = FRangeVector.Of(new Vector3(0.25f, 0, 0));
            d.SpinCCWorCW = new Vector3(0, 0, 0); // nunca inverte
            var s = Sim(d, new FxRand(1));
            s.UpdateParticles(0.1f);
            var p = s.Particles[0];
            Assert.AreEqual(0.5f * 65535f, p.SpinsPerSecond.x, 1e-2);
            Assert.AreEqual(0.25f * 65535f, p.StartSpin.x, 1e-2);
            Assert.AreEqual(FxMath.RoundHalfEven(0.5f * 65535f * 1f + 0.25f * 65535f) & 0xffff, FxMath.SpinAngle(p.SpinsPerSecond.x, p.StartSpin.x, 1f));
            Assert.AreEqual(0xffff - (FxMath.RoundHalfEven(100f + 50f * 2f) & 0xffff), FxMath.SpinAngle(-50f, 100f, 2f));
        }

        [Test]
        public void Rotator_DeVetor_EMatrizDeRotacao()
        {
            var r = FxMath.VectorToRotator(new Vector3(0, 1, 0));
            Assert.AreEqual(16384, r.Yaw);
            Assert.AreEqual(0, r.Pitch);
            var f = new FRotator(0, 16384, 0).Forward;
            Assert.AreEqual(0f, f.x, 1e-5);
            Assert.AreEqual(1f, f.y, 1e-5);
            var up = FxMath.VectorToRotator(new Vector3(0, 0, 1));
            Assert.AreEqual(16384, up.Pitch);
            var v = FxMath.RotateAngleAxis(new Vector3(1, 0, 0), 16384, new Vector3(0, 0, 1));
            Assert.AreEqual(0f, v.x, 1e-5);
            Assert.AreEqual(1f, v.y, 1e-5);
        }

        static FxClassDef Cls(params EmitterDef[] ems)
        {
            var c = new FxClassDef { Name = "teste", AutoDestroy = true };
            c.Emitters.AddRange(ems);
            return c;
        }

        [Test]
        public void AdjustparticleLife_ForcedLifeTimeFadeEMaxParticles()
        {
            var a = new EmitterDef { ForcedLifeTime = true, ForcedFade = true, LifetimeRange = new FRange(1, 2), FadeOutStartTime = 1.5f };
            var b = new EmitterDef { ForcedMaxParticles = true, LifetimeRange = new FRange(0.5f, 1.5f), InitialParticlesPerSecond = 10.7f, MaxParticles = 5 };
            var actor = new FxEmitterActor(Cls(a, b), new FxRand(1));
            actor.AdjustparticleLife(3.2f); // delta = 3.2 - 2 = 1.2
            var ea = actor.Emitters[0].D;
            var eb = actor.Emitters[1].D;
            Assert.AreEqual(2.2f, ea.LifetimeRange.Min, 1e-5);
            Assert.AreEqual(3.2f, ea.LifetimeRange.Max, 1e-5);
            Assert.AreEqual(2.7f, ea.FadeOutStartTime, 1e-5);
            Assert.AreEqual(FxMath.Ftol((3.2f - 1.0f) * 10), eb.MaxParticles, "ftol((L - centro) * ftol(IPPS))");
            Assert.AreEqual(1.2f, actor.EL_LifeSpan, 1e-5);
        }

        [Test]
        public void SetSizeScale_SoComBSetSizeScale_EscalaFaixas()
        {
            var e = new EmitterDef { StartSizeRange = FRangeVector.Of(10), Acceleration = new Vector3(0, 0, -100), SphereRadiusRange = new FRange(1, 2) };
            var c = Cls(e);
            var actor = new FxEmitterActor(c, new FxRand(1));
            actor.SetSizeScale(2);
            Assert.AreEqual(20f, actor.Emitters[0].D.StartSizeRange.X.Max, 1e-5);
            Assert.AreEqual(-200f, actor.Emitters[0].D.Acceleration.z, 1e-5);
            Assert.AreEqual(4f, actor.Emitters[0].D.SphereRadiusRange.Max, 1e-5);
            c.bSetSizeScale = false;
            var actor2 = new FxEmitterActor(c, new FxRand(1));
            actor2.SetSizeScale(2);
            Assert.AreEqual(10f, actor2.Emitters[0].D.StartSizeRange.X.Max, 1e-5, "sem bSetSizeScale nada muda");
        }

        [Test]
        public void SetDelayed_SomaAoInitialDelayRange_EAtrasaOSpawn()
        {
            var e = Def();
            var actor = new FxEmitterActor(Cls(e), new FxRand(1));
            actor.SetDelayed(0.5f);
            Assert.AreEqual(0.5f, actor.Emitters[0].D.InitialDelayRange.Max, 1e-6);
            actor.Tick(0.1f);
            Assert.AreEqual(0, actor.Emitters[0].LiveCount(), "ainda em InitialDelay");
            Assert.IsFalse(actor.Destroyed, "emissor atrasado impede o AutoDestroy");
            actor.Tick(0.5f);
            actor.Tick(0.1f);
            Assert.AreEqual(3, actor.Emitters[0].LiveCount());
        }

        [Test]
        public void AutoDestroy_QuandoTodosMorrem_EKillBloqueiaSpawn()
        {
            var e = Def();
            var actor = new FxEmitterActor(Cls(e), new FxRand(1));
            actor.Tick(0.1f);
            Assert.AreEqual(3, actor.Emitters[0].LiveCount());
            actor.Tick(1.0f);
            Assert.IsTrue(actor.Emitters[0].AllParticlesDead);
            Assert.IsTrue(actor.Tick(0.1f) == false || actor.Destroyed, "AutoDestroy");
            var e2 = Def();
            e2.RespawnDeadParticles = true;
            var a2 = new FxEmitterActor(Cls(e2), new FxRand(1));
            a2.Tick(0.1f);
            a2.Kill();
            Assert.IsTrue(a2.Emitters[0].KillPending);
            Assert.IsFalse(a2.Emitters[0].D.RespawnDeadParticles);
            a2.Tick(1.1f);
            Assert.IsTrue(a2.Destroyed, "as vivas terminam e o ator se destroi");
        }

        [Test]
        public void SpeedRate_EscalaODtDoEmissor()
        {
            var e = Def();
            var c = Cls(e);
            c.SpeedRate = 2f;
            var actor = new FxEmitterActor(c, new FxRand(1));
            actor.Tick(0.1f);
            actor.Tick(0.3f);
            // 0.4 s reais = 0.8 s simulados; as particulas nasceram no 1o tick (SpawnTime <= 0.2 simulados)
            Assert.That(actor.Emitters[0].Particles[0].Time, Is.GreaterThan(0.6f));
        }

        [Test]
        public void Trigger_SoSeDisabled_AcumulaSpawnOnTrigger()
        {
            var e = Def();
            e.Disabled = true;
            e.SpawnOnTriggerRange = FRange.Of(2);
            var s = Sim(e, new FxRand(1));
            s.Trigger();
            Assert.IsFalse(e.Disabled, "TriggerDisabled alterna");
            Assert.AreEqual(2, s.CurrentSpawnOnTrigger);
            s.Trigger();
            Assert.AreEqual(2, s.CurrentSpawnOnTrigger, "nao reage se nao estiver Disabled");
        }

        [Test]
        public void Projetil_ChegaAoAlvo_EDisparaExplosao()
        {
            var c = Cls(Def());
            c.Super = "Engine.NSkillProjectile";
            c.Speed = 1000;
            c.AccSpeed = 3000;
            var actor = new FxEmitterActor(c, new FxRand(1)) { Location = new Vector3(0, 0, 0), IsProjectile = true, Speed = 1000, AccSpeed = 3000 };
            var target = new FixedFrame(new Vector3(600, 0, 0), FRotator.Zero);
            var hit = 0;
            actor.OnHitWall += (a, n) => hit++;
            actor.StartProjectile(target);
            Assert.AreEqual(1000f, actor.Velocity.x, 1e-3, "[I] velocidade inicial = Speed");
            var t = 0f;
            while (hit == 0 && t < 5)
            {
                actor.Tick(1f / 60);
                t += 1f / 60;
            }
            Assert.AreEqual(1, hit);
            Assert.That(t, Is.InRange(0.3f, 0.6f), "600 unidades com 1000 + 3000 t");
            Assert.AreEqual(600f, actor.Location.x, 1e-3, "FarMoveActor ate o alvo");
            Assert.AreEqual(FxPhysics.None, actor.Physics);
        }

        [Test]
        public void Trailer_SegueODono_ComPrePivotOuOffsetGirado()
        {
            var c = Cls(Def());
            var owner = new FixedFrame(new Vector3(100, 0, 0), new FRotator(0, 16384, 0));
            var a = new FxEmitterActor(c, new FxRand(1)) { Physics = FxPhysics.Trailer, Owner = owner, bTrailerPrePivot = true, TrailerPrePivot = new Vector3(0, 0, 5) };
            a.Tick(0.01f);
            Assert.AreEqual(new Vector3(100, 0, 5), a.Location);
            var b = new FxEmitterActor(c, new FxRand(1)) { Physics = FxPhysics.Trailer, Owner = owner, bRelativeTrail = true, RelativeTrailOffset = new Vector3(10, 0, 0), bTrailerSameRotation = true };
            b.Tick(0.01f);
            Assert.AreEqual(100f, b.Location.x, 1e-3);
            Assert.AreEqual(10f, b.Location.y, 1e-3, "offset girado pelo yaw 90 graus do dono");
            Assert.AreEqual(16384, b.Rotation.Yaw);
        }
    }
}
