// Efeito de ativacao dos soulshots e spiritshots (SpawnNTransientEffect 0x104efb30, casos 0x7f7, 0x7ff/0x80d, 0x866..0x874;
// #0053): classe do soulshot.int por grau, escolhida por mao pelo valor do tipo de arma (1 longa/curta, 0 livro, -1 nada)
// e pelo comprimento da malha da mao; presa ao osso da mao. A tabela legada so trazia a variante vazia para esses casos.
using System.Collections.Generic;
using L2Web.Render.Fx;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class FxShotTests
    {
        static FxWorld world;
        static LegacyFx legacy;

        /// <summary>weaponLength na mao direita; lhLength na esquerda (padrao: sem malha, como o mago do aCis de cajado e escudo).</summary>
        static LegacyFx Legacy(float weaponLength, int weaponType, float lhLength = 0)
        {
            if (world == null)
            {
                world = new FxWorld(null) { Library = FxFixtures.Library() };
                var skill = new SkillFx(world) { Map = SkillFxMap.Parse(FxFixtures.Load("skill_fx_map.json")) };
                legacy = new LegacyFx(skill) { Table = FxFixtures.Load("legacy_skill_fx.json") };
                legacy.Soulshot = legacy.Table["_soulshot_int"]?["tabela"] as JObject ?? new JObject();
            }
            legacy.WeaponLength = (_, rh) => rh ? weaponLength : lhLength;
            legacy.WeaponType = _ => weaponType;
            return legacy;
        }

        [Test]
        public void Grau_PorIdDaSkillDeShot()
        {
            Assert.IsTrue(LegacyFx.ShotGrade(2039, out var sp, out var g)); Assert.IsFalse(sp); Assert.AreEqual(0, g);
            Assert.IsTrue(LegacyFx.ShotGrade(2150, out sp, out g)); Assert.IsFalse(sp); Assert.AreEqual(1, g); // Soulshot D
            Assert.IsTrue(LegacyFx.ShotGrade(2154, out sp, out g)); Assert.IsFalse(sp); Assert.AreEqual(5, g); // S
            Assert.IsTrue(LegacyFx.ShotGrade(2047, out sp, out g)); Assert.IsTrue(sp); Assert.AreEqual(0, g);
            Assert.IsTrue(LegacyFx.ShotGrade(2061, out sp, out g)); Assert.IsTrue(sp); Assert.AreEqual(0, g);
            Assert.IsTrue(LegacyFx.ShotGrade(2155, out sp, out g)); Assert.IsTrue(sp); Assert.AreEqual(1, g); // Spiritshot D
            Assert.IsTrue(LegacyFx.ShotGrade(2160, out sp, out g)); Assert.IsTrue(sp); Assert.AreEqual(1, g); // Blessed D
            Assert.IsTrue(LegacyFx.ShotGrade(2164, out sp, out g)); Assert.IsTrue(sp); Assert.AreEqual(5, g);
            Assert.IsFalse(LegacyFx.ShotGrade(1177, out _, out _));
            Assert.AreEqual(new[] { "HAND", "1HS", "2HS", "DUAL", "POLE", "BOW", "THROW", "DUALFIST" }, LegacyFx.ShotWeaponTypes);
        }

        [Test]
        public void Escolha_PorValorDaMaoEComprimento()
        {
            Assert.AreEqual(("SpiritOnSticks", 60f, true), LegacyFx.ShotChoice(1, 60, true));
            Assert.AreEqual(("OnBooks", 30f, false), LegacyFx.ShotChoice(1, 10, false)); // arma curta (<= 12)
            Assert.AreEqual(("OnBooks", 30f, false), LegacyFx.ShotChoice(0, 60, false));
            Assert.IsNull(LegacyFx.ShotChoice(-1, 60, false));
            Assert.IsNull(LegacyFx.ShotChoice(1, 0, false), "sem malha na mao, nada");
        }

        [Test]
        public void BlessedSpiritshotD_EmArmaDeUmaMao_SoNaMaoDireita_ComAVelocidadeDoComprimento()
        {
            var l = Legacy(60, 1); // 1HS: LH -1, RH 1
            var pawn = new TestPawn();
            Assert.IsTrue(LegacyFx.ShotGrade(2160, out var spirit, out var grade));
            var made = l.ShotEffect(pawn, grade, spirit, 1);
            Assert.AreEqual(1, made.Count);
            Assert.AreEqual("e_u513_a", made[0].Class.Name);
            Assert.IsNotNull(made[0].AttachedBone);
            Assert.AreEqual(60f, made[0].Emitters[0].D.StartVelocityRange.X.Min);
            Assert.AreEqual(60f, made[0].Emitters[0].D.StartVelocityRange.X.Max);
            // a tabela gerada (variante 0, sem efeitos) nao spawnava nada para o mesmo caso
            var old = l.Run(LegacyFx.FnTransient, 2160, new LegacyCtx { This = pawn, TargetPawn = pawn, SkillLevel = 1, WeaponLength = l.WeaponLength, AssocIndex = -1 }, 1);
            Assert.AreEqual(0, old.Count);
            // com malha nas duas maos a tabela gerada spawnava dois OnBooks (classe errada: o valor do soulshot.int nao era lido)
            var both = Legacy(60, 1, 60);
            var oldBoth = both.Run(LegacyFx.FnTransient, 2160, new LegacyCtx { This = pawn, TargetPawn = pawn, SkillLevel = 1, WeaponLength = both.WeaponLength, AssocIndex = -1 }, 1);
            Assert.AreEqual(2, oldBoth.Count);
            foreach (var o in oldBoth) Assert.AreEqual("e_u513_b", o.Class.Name);
            var nowBoth = both.ShotEffect(pawn, grade, spirit, 1); // 1HS: LH -1 -> so a mao direita
            Assert.AreEqual(1, nowBoth.Count);
            Assert.AreEqual("e_u513_a", nowBoth[0].Class.Name);
        }

        [Test]
        public void SoulshotD_Arco_LivroNaMaoEsquerda_EMaoDireitaSemEfeito()
        {
            var l = Legacy(60, 5, 60); // BOW: LH 0, RH -1
            var made = l.ShotEffect(new TestPawn(), 1, false, 5);
            Assert.AreEqual(1, made.Count);
            Assert.AreEqual("e_u506_b", made[0].Class.Name); // soulshot.int[D].OnBooks
            Assert.AreEqual(new FRotator(0, 0x4000, 0), made[0].RelativeRotation);
            // com uma arma de uma mao a tabela gerada tambem nao spawnava nada para o soulshot D
            var l1 = Legacy(60, 1);
            var pawn = new TestPawn();
            Assert.AreEqual(0, l1.Run(LegacyFx.FnTransient, 2150, new LegacyCtx { This = pawn, TargetPawn = pawn, SkillLevel = 1, WeaponLength = l1.WeaponLength, AssocIndex = -1 }, 1).Count);
            Assert.AreEqual("e_u506_a", l1.ShotEffect(pawn, 1, false, 1)[0].Class.Name); // soulshot.int[D].OnSticks na mao direita
        }
    }
}
