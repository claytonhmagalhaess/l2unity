// Porte de test/combat.test.ts + comparacao do L2Calc/Skills com valores de referencia gerados pelo calc.js original
// (node, l2anim/out/tool) com as tabelas do l2anim (data.js lido do disco; testes ignorados se nao existir).
using L2Web.World;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class CombatTests
    {
        [Test]
        public void CorpoACorpo_RateTween_SorteiaAtk()
        {
            var a = Combat.AttackAnim(1, 1.5, _ => 0.8333, () => 0.7);
            Assert.AreEqual("Atk03", a.Key);
            Assert.AreEqual(0.8333 * 1.5 * 1.1, a.Rate, 1e-5);
            Assert.AreEqual(0.1 / (0.8333 * 1.5), a.Tween, 1e-5);
            Assert.IsFalse(a.Ranged);
        }

        [Test]
        public void Arco_SempreAtk01()
        {
            var a = Combat.AttackAnim(5, 2, _ => 1.1111, () => 0.99);
            Assert.AreEqual("Atk01", a.Key);
            Assert.AreEqual(2.2222, a.Rate, 1e-4);
            Assert.AreEqual(0.2 / 2.2222, a.Tween, 1e-4);
        }

        [Test]
        public void Servidor_MomentosDosGolpes()
        {
            var m = Combat.ServerHits(470, "melee");
            Assert.AreEqual(1000, m.TimeAtk);
            CollectionAssert.AreEqual(new[] { 500 }, m.Hits);
            var d = Combat.ServerHits(470, "dual");
            Assert.AreEqual(1000, d.TimeAtk);
            CollectionAssert.AreEqual(new[] { 250, 500 }, d.Hits);
            var b = Combat.ServerHits(333, "bow");
            Assert.AreEqual(1500, b.TimeAtk);
            CollectionAssert.AreEqual(new[] { 1500 }, b.Hits);
        }

        [Test]
        public void FlagsDoGolpe()
        {
            Assert.AreEqual("miss", Combat.HitKind(Combat.Hit.Miss));
            Assert.AreEqual("crit", Combat.HitKind(Combat.Hit.Crit | Combat.Hit.Soulshot));
            Assert.AreEqual("hit", Combat.HitKind(0));
        }

        [Test]
        public void L2Calc_Servidor()
        {
            var c = L2Calc.ServerCast(new ServerCastOpts { HitTime = 4000, CoolTime = 1000, ReuseDelay = 5000, IsMagic = true, CastSpd = 500, Spiritshot = true });
            Assert.AreEqual(1864, c.HitTime);
            Assert.AreEqual(466, c.CoolTime);
            Assert.AreEqual(3330, c.Reuse);
            Assert.AreEqual(1864, c.Gauge);
            Assert.AreEqual(1464, c.Launch);
            Assert.AreEqual(1864, c.Hit);
            Assert.AreEqual(2330, c.Finalize);
            var a = L2Calc.ServerAttack(new ServerAttackOpts { PAtkSpd = 400, ServerType = "BOW", BowReuse = 1500 });
            // aCis: timeAtk do arco = 1500 * 333 / PAtkSpd, _attackEndTime = timeAtk - 50, reuso = reuseDelay * 345 / PAtkSpd
            Assert.AreEqual(1248, a.TimeAtk);
            CollectionAssert.AreEqual(new[] { 1248.0 }, a.Hits);
            Assert.AreEqual(1198, a.AttackEnd);
            Assert.AreEqual(1293, a.Reuse);
            Assert.AreEqual(2541, a.Cycle);
            Assert.AreEqual(1.4666666666666668, a.Mult, 1e-12);
        }

        // ------------------------------------------------------------ com as tabelas do l2anim

        public const string DataJs = @"C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim\out\tool\data.js";

        [OneTimeSetUp]
        public void LoadData()
        {
            if (!GameData.L2DataLoaded) GameData.LoadL2DataFromFile(DataJs);
        }

        static void RequireData()
        {
            if (!GameData.L2DataLoaded) Assert.Ignore("data.js do l2anim indisponivel: " + DataJs);
        }

        [Test]
        public void L2Calc_ClientAttack_IgualAoCalcJs()
        {
            RequireData();
            var D = GameData.Data();
            var m = GameData.Model("MFighter");
            var a = L2Calc.ClientAttack(D, new ClientAttackOpts { Widx = 1, Mult = 1.3, AtkIndex = 2, IntTable = m["int"], SetKey = (string)m["set"] });
            Assert.AreEqual("Atk02_1HS_MFighter", a.Name);
            Assert.AreEqual(1.1916189193725586, a.Rate, 1e-9);
            Assert.AreEqual(0.09231138974428177, a.Tween, 1e-9);
            Assert.AreEqual(1.2867648443687878, a.Play, 1e-9);
            Assert.AreEqual(3, a.Events.Count);
            Assert.AreEqual(0.6210430642954167, a.Events[0].T, 1e-9);
            Assert.AreEqual("AttackVoice", a.Events[0].Cls);
        }

        // kind, id, widx, mAtkSpd, skillId, hitTimeMs -> rate, tween, shot, lead, end, nFases
        static readonly object[][] Casts =
        {
            new object[] { "player", "MFighter", 1, 333.0, 3, 1080.0, 1.049310564994812, 0.20000000298023224, 1.0800000429153442, 0.0, 1.6930439472198486, 1 },
            new object[] { "player", "MMagic", 0, 333.0, 1177, 4000.0, 1.0, 0.20000000298023224, 3.515277624130249, 0.4000000059604645, 4.548590660095215, 3 },
            new object[] { "player", "MMagic", 0, 600.0, 1177, 2000.0, 1.8018018007278442, 0.11100000143051147, 1.4942030906677246, 0.4000000059604645, 2.0676920413970947, 3 },
            new object[] { "player", "FElf", 5, 333.0, 101, 1500.0, 3.3480000495910645, 0.20000000298023224, 1.100000023841858, 0.4000000059604645, 1.3947430849075317, 1 },
            new object[] { "npc", "12311", 0, 333.0, 4710, 1500.0, 0.2974666655063629, 0.20000000298023224, 1.5, 0.0, 5.354639053344727, 1 },
        };

        [Test]
        public void Skills_CastPlan_IgualAoCalcJs([ValueSource(nameof(Casts))] object[] c)
        {
            RequireData();
            var plan = Skills.CastPlan((string)c[0], (string)c[1], (int)c[2], (double)c[3], (int)c[4], (double)c[5]);
            Assert.IsNotNull(plan);
            Assert.AreEqual((double)c[7], plan.Tween, 1e-6, "tween");
            Assert.AreEqual((double)c[8], plan.Shot, 1e-6, "shot");
            Assert.AreEqual((double)c[9], plan.Lead, 1e-6, "lead");
            Assert.AreEqual((double)c[10], plan.End, 1e-6, "end");
            Assert.AreEqual((int)c[11], plan.Phases.Count, "fases");
            Assert.AreEqual((double)c[6], plan.Phases[0].Rate, 1e-6, "rate");
        }

        [Test]
        public void Skills_CastPlan_Detalhes()
        {
            RequireData();
            var p = Skills.CastPlan("player", "MMagic", 0, 333, 1177, 4000);
            Assert.AreEqual("CastMid_MMagic", p.Phases[0].Name);
            Assert.AreEqual(1.9486110210418701, p.Phases[0].End, 1e-6);
            Assert.IsTrue(p.Phases[1].Loop);
            Assert.AreEqual(3.0152575969696045, p.Phases[1].End, 1e-6);
            Assert.IsTrue(p.Magic);
            Assert.IsTrue(p.Projectile);
            // Mix05 sem fases com nome e NPC sem fases: sem plano
            Assert.IsNull(Skills.CastPlan("player", "MFighter", 1, 333, 1, 1733));
            Assert.IsNull(Skills.CastPlan("npc", "20001", 0, 333, 4001, 1000));
        }

        [Test]
        public void GameData_ModelosEquipamentoEAnimacoes()
        {
            RequireData();
            Assert.AreEqual("MFighter", GameData.PlayerModel(0, 0, 0));
            Assert.AreEqual("FMagic", GameData.PlayerModel(0, 1, 10));
            Assert.AreEqual("MShaman", GameData.PlayerModel(3, 0, 49));
            Assert.AreEqual(1, GameData.WeaponIndex(2));
            Assert.AreEqual(0, GameData.WeaponIndex(0));
            Assert.AreEqual("wait_1HS_MFighter", GameData.PlayerAnim("MFighter", "wait", 1));
            var a = new L2Web.Net.Appearance { HairStyle = 1, HairColor = 2 };
            a.Paperdoll.Rhand = 2;
            a.Paperdoll.Lhand = 18;
            CollectionAssert.AreEqual(new[] { "weapon:2", "weapon:18", "hair:MFighter_1_2" }, GameData.EquipKeys("MFighter", a));
            var notes = GameData.ClipNotifies("Fighter.MFighter_anim", "Atk02_1HS_MFighter");
            Assert.AreEqual(3, notes.Count);
            Assert.AreEqual("AttackVoice", notes[0].Cls);
        }
    }
}
