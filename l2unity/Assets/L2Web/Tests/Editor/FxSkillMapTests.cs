// Disparo por fase (spec 09 §2 e §3): cada skill de skill_fx_map.json produz as mesmas classes por fase (Casting, Shot,
// Explosion, Channeling) e cada caso de legacy_skill_fx.json, executado com o estado padrao de um cast (alvo presente,
// ultimo disparo), spawna classes contidas na tabela, com as incondicionais sempre presentes. Tambem o interprete das
// expressoes (offset atras do pawn, condicoes) e o LocateEffect (posicao, Pitch 0, bSizeScale, SpawnDelay).
using System.Collections.Generic;
using System.IO;
using L2Web.Render.Fx;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    /// <summary>Pawn de teste: cilindro 9 x 23 em (1000, 2000, -3000) olhando para +Y, com todos os ossos.</summary>
    sealed class TestPawn : IFxActor
    {
        public Vector3 Loc = new Vector3(1000, 2000, -3000);
        public int Yaw = 16384;
        public bool Npc;
        public FxMagicInfo Magic = new();
        public List<FxEmitterActor> Spelled = new();
        public Vector3 Location => Loc;
        public FRotator Rotation => new FRotator(0, Yaw, 0);
        public Vector3 Velocity => Vector3.zero;
        public bool Alive => true;
        public bool IsPawn => true;
        public bool IsProjectile => false;
        public float CollisionRadius => 9;
        public float CollisionHeight => 23;
        public float MeshHeight => 23;
        public float CastingEffectScale => 1;
        public bool HasSkeletalMesh => true;
        public bool IsNpc => Npc;
        public FxMagicInfo MagicInfo => Magic;
        public IFxFrame Bone(string name) => name == null || name == "None" ? null : new FixedFrame(Loc + new Vector3(0, 0, 10), Rotation);
        public string RHandBoneName => "Weapon_R_Bone";
        public string LHandBoneName => "Weapon_L_Bone";
        public string RightFootBone => "Bip01_R_Foot";
        public string LeftFootBone => "Bip01_L_Foot";
        public bool AliasBone(string alias, out string bone, out Vector3 origin) { bone = alias; origin = Vector3.zero; return true; }
        public FRotator HitRot => Rotation;
        public Vector3 LastTargetLocation => Loc;
        public List<FxEmitterActor> SpelledEffects => Spelled;
        public string Tag => "pawn";
    }

    public class FxSkillMapTests
    {
        static FxWorld world;
        static SkillFx skill;
        static LegacyFx legacy;

        static void Setup()
        {
            var lib = FxFixtures.Library();
            if (world == null)
            {
                world = new FxWorld(null) { Library = lib };
                skill = new SkillFx(world) { Map = SkillFxMap.Parse(FxFixtures.Load("skill_fx_map.json")) };
                skill.WeaponLength = (_, _) => 60;
                legacy = new LegacyFx(skill) { Table = FxFixtures.Load("legacy_skill_fx.json"), WeaponLength = (_, _) => 60, DamageEffect = _ => "LineageEffect.p_u002_a" };
                legacy.Soulshot = legacy.Table["_soulshot_int"]?["tabela"] as JObject ?? new JObject();
            }
        }

        [Test]
        public void SkillVisualEffect_ClassesPorFase_IguaisAoMapa()
        {
            Setup();
            var j = FxFixtures.Load("skill_fx_map.json");
            var lib = world.Library;
            int skills = 0, actions = 0, missing = 0;
            foreach (var kv in (JObject)j["skills"])
            {
                var id = int.Parse(kv.Key);
                foreach (JObject e in (JArray)kv.Value)
                {
                    var lv = (JArray)e["niveis"];
                    var sve = skill.Map.Get(id, (int)lv[0]);
                    if (e["fases"] is not JObject fases)
                    {
                        Assert.IsNull(sve, $"skill {id}: sem fases -> Agent nulo");
                        continue;
                    }
                    Assert.IsNotNull(sve, $"skill {id} nivel {lv[0]}");
                    skills++;
                    foreach (var ph in new[] { "Casting", "Channeling", "Shot", "Explosion" })
                    {
                        var expected = new List<string>();
                        if (fases[ph] is JArray arr) foreach (JObject a in arr) expected.Add((string)a["EffectClass"] ?? (string)a["action"]);
                        var got = new List<string>();
                        foreach (var a in sve.Phase(ph)) got.Add(a.EffectClass ?? a.Kind);
                        CollectionAssert.AreEqual(expected, got, $"skill {id} {ph}");
                        actions += got.Count;
                        foreach (var a in sve.Phase(ph))
                            if (a.EffectClass != null && !lib.Has(a.EffectClass)) missing++;
                    }
                    if (fases["FlyingTime"] != null) Assert.AreEqual((float)fases["FlyingTime"], sve.FlyingTime, 1e-6);
                }
            }
            Assert.Greater(skills, 900);
            Assert.Greater(actions, 1800);
            Assert.AreEqual(0, missing, "classes de efeito ausentes da biblioteca");
        }

        static readonly string[] Fns = { LegacyFx.FnInit, LegacyFx.FnChanneling, LegacyFx.FnPreShot, LegacyFx.FnShot, LegacyFx.FnExplosion, LegacyFx.FnTransient };

        [Test]
        public void Legado_CadaCaso_SpawnaClassesDaTabela()
        {
            Setup();
            int cases = 0, spawned = 0;
            var failures = new List<string>();
            foreach (var fn in Fns)
            {
                var casesJ = legacy.Table[fn]?["cases"] as JObject;
                Assert.IsNotNull(casesJ, fn);
                foreach (var kv in casesJ)
                {
                    var id = int.Parse(kv.Key);
                    var c = (JObject)kv.Value;
                    var listed = new HashSet<string>();
                    var unconditional = new HashSet<string>();
                    foreach (JObject e in (JArray)c["effects"])
                    {
                        var cls = (string)e["resolved_class"] ?? (string)e["class"] ?? "";
                        if (cls.StartsWith("LineageEffect.", System.StringComparison.OrdinalIgnoreCase)) listed.Add(cls.ToLowerInvariant());
                        var api = (string)e["api"];
                        if (api == "APawn::AttachTrailer") listed.Add("lineageeffect.ribbonset");
                        if (cls.Contains("DamageEffect")) listed.Add("lineageeffect.p_u002_a");
                        var when = e["when"] as JArray;
                        var inVariants = e["in_variants"] as JArray;
                        if ((when == null || when.Count == 0) && inVariants == null && cls.StartsWith("LineageEffect.", System.StringComparison.OrdinalIgnoreCase) && world.Library.Has(cls))
                            unconditional.Add(cls.ToLowerInvariant());
                    }
                    var pawn = new TestPawn();
                    var target = new TestPawn { Loc = new Vector3(1300, 2000, -3000) };
                    pawn.Magic.MagicID = id;
                    pawn.Magic.LevelID = 1;
                    pawn.Magic.ShotTime = 1.2f;
                    pawn.Magic.TargetPawn = target;
                    pawn.Magic.PendingNotify = 2;
                    pawn.Magic.AssociatedActor.Add(target);
                    var got = new List<FxEmitterActor>();
                    try
                    {
                        switch (fn)
                        {
                            case LegacyFx.FnInit: got = legacy.Run(fn, id, Ctx(pawn, target), 1); break;
                            case LegacyFx.FnChanneling: got = legacy.Run(fn, id, Ctx(pawn, target), 0); break;
                            case LegacyFx.FnPreShot: got = legacy.Run(fn, id, Ctx(pawn, target), 0); break;
                            case LegacyFx.FnShot: got = legacy.Run(fn, id, Ctx(pawn, target), 2); break;
                            case LegacyFx.FnExplosion:
                            {
                                var ctx = Ctx(pawn, target);
                                ctx.HitActor = target;
                                ctx.Owner = pawn;
                                ctx.LastTargetLocation = target.Loc;
                                got = legacy.Run(fn, id, ctx, 3);
                                break;
                            }
                            case LegacyFx.FnTransient: got = legacy.Run(fn, id, Ctx(pawn, target), 1); break;
                        }
                    }
                    catch (System.Exception ex)
                    {
                        failures.Add($"{fn} {id}: excecao {ex.Message}");
                        continue;
                    }
                    cases++;
                    var names = new HashSet<string>();
                    foreach (var a in got) names.Add((a.Class.Package + "." + a.Class.Name).ToLowerInvariant());
                    spawned += got.Count;
                    foreach (var n in names)
                        if (!listed.Contains(n)) failures.Add($"{fn} {id}: spawnou {n} fora da tabela");
                    foreach (var u in unconditional)
                        if (!names.Contains(u)) failures.Add($"{fn} {id}: faltou {u} (incondicional)");
                }
            }
            world.Clear();
            Assert.Greater(cases, 1300, "casos executados");
            Assert.Greater(spawned, 1000, "efeitos spawnados");
            if (failures.Count > 0) Assert.Fail($"{failures.Count} divergencias:\n" + string.Join("\n", failures.GetRange(0, System.Math.Min(40, failures.Count))));
        }

        static LegacyCtx Ctx(TestPawn pawn, TestPawn target) => new LegacyCtx { This = pawn, TargetPawn = target, SkillLevel = 1, WeaponLength = (_, _) => 60, DamageEffect = _ => "LineageEffect.p_u002_a", AssocIndex = -1 };

        [Test]
        public void Interprete_OffsetAtrasDoPawn_ECondicoes()
        {
            var pawn = new TestPawn();
            var target = new TestPawn { Loc = new Vector3(1300, 2000, -3000) };
            var ctx = Ctx(pawn, target);
            pawn.Magic.ShotTime = 1.5f;
            pawn.Magic.TargetPawn = target;
            // Init 1224: offset = (CR/1.5)*rot(DesiredRotation)*(-1,0,0) -> atras do pawn (olha para +Y): (0, -6, 0)
            var x = LegacyExpr.Scalar("((this.CollisionRadius/1.5)*rot(this.DesiredRotation,this.DesiredRotation.Yaw,this.DesiredRotation.Roll)*(-1.0,0.0,0.0).X)", ctx);
            var y = LegacyExpr.Scalar("((this.CollisionRadius/1.5)*rot(this.DesiredRotation,this.DesiredRotation.Yaw,this.DesiredRotation.Roll)*(-1.0,0.0,0.0).Y)", ctx);
            Assert.AreEqual(0f, x, 1e-3);
            Assert.AreEqual(-6f, y, 1e-3);
            Assert.AreEqual(-3000f + 23f / 3f, LegacyExpr.Scalar("((this.Location.Z+(this.CollisionRadius*rot(this.DesiredRotation,this.DesiredRotation.Yaw,this.DesiredRotation.Roll)*(1.0,0.0,0.0).Z))+(this.CollisionHeight/3.0))", ctx), 1e-3);
            Assert.AreEqual(1.5f, LegacyExpr.Scalar("this.MagicInfo.ShotTime", ctx), 1e-6);
            Assert.AreEqual(0f, LegacyExpr.Scalar("Rotation((this.TargetPawn.Location-this.Location),(this.TargetPawn.Location.Y-this.Location.Y),(this.TargetPawn.Location.Z-this.Location.Z)).Yaw", ctx), 1e-6, "alvo em +X: yaw 0");
            var yaw = LegacyExpr.Eval("Rotation(300.0,0.0,0.0)", ctx);
            Assert.AreEqual(FxVal.K.Rot, yaw.Kind);
            Assert.AreEqual(0, yaw.R.Yaw);
            Assert.IsTrue(LegacyExpr.Cond("this.TargetPawn != 0", ctx));
            Assert.IsFalse(LegacyExpr.Cond("this.TargetPawn == 0", ctx));
            Assert.IsTrue(LegacyExpr.Cond("this.MagicInfo.bTargetExcepted == 0", ctx));
            Assert.IsTrue(LegacyExpr.Cond("this.SkillLevel in [1..5]", ctx));
            Assert.IsFalse(LegacyExpr.Cond("this.SkillLevel in [2]", ctx));
            Assert.IsTrue(LegacyExpr.Cond("GL2KeepMinFrameRate == 0", ctx));
            Assert.IsTrue(LegacyExpr.Cond("this.bNpc == 0", ctx));
            Assert.IsTrue(LegacyExpr.Cond("this.GetRHandBoneName() != 'None'", ctx));
            Assert.IsTrue(LegacyExpr.Cond("Cast<APawn>(HitActor) == 0", ctx), "sem HitActor");
            ctx.HitActor = target;
            Assert.IsTrue(LegacyExpr.Cond("Cast<APawn>(HitActor) != 0", ctx));
            Assert.IsTrue(LegacyExpr.Cond("MatchRefBone(bone01) > -1", ctx));
            Assert.IsTrue(LegacyExpr.Cond("this.TargetPawn != this", ctx));
            Assert.IsTrue(LegacyExpr.Cond("IsA(this.TargetPawn.Mesh,USkeletalMesh) != 0", ctx));
            Assert.AreEqual(60f, LegacyExpr.Scalar("Cast<USkeletalMesh>(this.ExtraMeshDatas[0].StaticMesh).+0x150.+0x0", ctx), 1e-6, "comprimento da arma");
            Assert.AreEqual(-23f, LegacyExpr.Scalar("-Cast<USkeletalMesh>(this.Mesh).+0x98", ctx), 1e-6);
        }

        [Test]
        public void LocateEffect_PosicaoEscalaEDelay()
        {
            Setup();
            var pawn = new TestPawn();
            var target = new TestPawn { Loc = new Vector3(1300, 2000, -3000) };
            pawn.Magic.ShotTime = 2f;
            pawn.Magic.TargetPawn = target;
            // Dash Casting: AttachOn 5 (Trail), offset (0,0,-1) relativo ao cilindro, bSizeScale -> nos pes do caster
            var a = new SkillAction { EffectClass = "LineageEffect.mo_dash_ca", AttachOn = AttachMethod.Trail, Offset = new Vector3(0, 0, -1), bSizeScale = true };
            var em = skill.LocateEffectNotify(a, pawn, target);
            Assert.IsNotNull(em);
            Assert.AreEqual(FxPhysics.Trailer, em.Physics);
            Assert.IsTrue(em.bTrailerPrePivot);
            Assert.AreEqual(new Vector3(0, 0, -23), em.TrailerPrePivot, "offset.Z x CollisionHeight");
            Assert.AreEqual(0, em.Rotation.Pitch);
            Assert.AreEqual(pawn.Loc + new Vector3(0, 0, -23), em.Location);
            Assert.AreEqual(0f, em.FixedLifeTime, 1e-6, "SpawnDelay 0 -> FixedLifeTime 0");
            // rotacao pelo alvo (Dest != Base): yaw 0 (alvo em +X); offset (2,0,0) -> 2*CR na direcao do alvo
            var b = new SkillAction { EffectClass = "LineageEffect.el_ice_dagger_pr", AttachOn = AttachMethod.None, Offset = new Vector3(2, 0, 0) };
            var em2 = skill.LocateEffectNotify(b, pawn, target);
            Assert.IsNotNull(em2);
            Assert.AreEqual(0, em2.Rotation.Yaw);
            Assert.AreEqual(pawn.Loc + new Vector3(18, 0, 0), em2.Location);
            // SpawnDelay 0.2 -> SetDelayed(0.2) e FixedLifeTime = ShotTime - 0.2
            var cDef = new SkillAction { EffectClass = "LineageEffect.el_aura_flare_ta", AttachOn = AttachMethod.Trail, SpawnDelay = 0.2f, bSpawnOnTarget = true };
            var em3 = skill.LocateEffectNotify(cDef, pawn, target);
            Assert.IsNotNull(em3);
            Assert.AreEqual(1.8f, em3.FixedLifeTime, 1e-6);
            Assert.AreEqual(world.Library.Get("el_aura_flare_ta").Emitters[0].InitialDelayRange.Min + 0.2f, em3.Emitters[0].D.InitialDelayRange.Min, 1e-6, "SetDelayed soma ao InitialDelayRange");
            Assert.AreEqual(target.Loc, em3.Location, "bSpawnOnTarget sem offset");
            // SpawnDelay negativo: d = ShotTime + SpawnDelay = 1.5 > 0 -> delay 1.5, FixedLifeTime 0.5
            var dDef = new SkillAction { EffectClass = "LineageEffect.el_aura_flare_ta", AttachOn = AttachMethod.Trail, SpawnDelay = -0.5f };
            var em4 = skill.LocateEffectNotify(dDef, pawn, target);
            Assert.AreEqual(0.5f, em4.FixedLifeTime, 1e-6);
            // bSizeScale: S = CR/9 = 1 -> sem SetSizeScale; CR 18 -> x2
            var big = new TestPawn();
            big.Magic.ShotTime = 1;
            var eDef = new SkillAction { EffectClass = "LineageEffect.wh_heal_ca", AttachOn = AttachMethod.Trail, Offset = new Vector3(0, 0, -1), bSizeScale = true };
            var em5 = skill.LocateEffectNotify(eDef, big, null);
            var orig = world.Library.Get("wh_heal_ca").Emitters[0].StartSizeRange.X.Max;
            Assert.AreEqual(orig, em5.Emitters[0].D.StartSizeRange.X.Max, 1e-5, "CR 9: escala 1");
            world.Clear();
        }

        [Test]
        public void TriggerShot_SpecificStage_EMultiAlvo()
        {
            Setup();
            var pawn = new TestPawn();
            var t1 = new TestPawn { Loc = new Vector3(1300, 2000, -3000) };
            var t2 = new TestPawn { Loc = new Vector3(1000, 2300, -3000) };
            var mi = skill.SetMagicInfo(pawn, 1015, 15, 1, 2000, t1, 1.6f, 0.5f); // Battle Heal: wh_heal_ca + wh_heal_ta (bOnMultiTarget, bSpawnOnTarget)
            Assert.IsNotNull(mi.Agent);
            Assert.AreEqual("skill.wh.1011", mi.Agent.Ref);
            skill.TriggerCasting(pawn);
            Assert.AreEqual(1, mi.EffectActor.Count);
            Assert.AreEqual("wh_heal_ca", mi.EffectActor[0].Class.Name);
            // ForcedMaxParticles/ForcedLifeTime: AdjustparticleLife(ShotTime + 0.2)
            skill.AddAssociatedActor(pawn, 1015, t1);
            skill.AddAssociatedActor(pawn, 1015, t2);
            mi.PendingNotify = 1;
            skill.TriggerShot(pawn);
            Assert.AreEqual(1, mi.StageShot);
            var n = 0;
            foreach (var a in world.Pending) if (a.Class.Name == "wh_heal_ta") n++;
            Assert.AreEqual(0, n, "SpecificStage 0 so dispara no ultimo notify (PendingNotify 2)");
            mi.PendingNotify = 2;
            skill.TriggerShot(pawn);
            n = 0;
            foreach (var a in world.Pending) if (a.Class.Name == "wh_heal_ta") n++;
            Assert.AreEqual(2, n, "um por AssociatedActor");
            world.Clear();
        }
    }
}
