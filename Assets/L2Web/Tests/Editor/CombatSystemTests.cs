// #0060 (Docs/combate_lacunas.md): regras do combate conferidas no engine.dll e no aCis.
//  - golpes de corpo a corpo nos notifies AttackShot (UAnimNotify_AttackShot::Notify, Tryskell engine.c:445644);
//  - alvo automatico de quem ataca (UGameEngine::OnAttack 0x10313d81, decomp_all/engine/00011.c:17080);
//  - OnDie (00006.c:14535) e OnRevive (00003.c:18075);
//  - tempo do arco no aCis (Creature.calculateTimeBetweenAttacks: 1500 * 333 / PAtkSpd; _attackEndTime = timeAtk - 50).
using System.Linq;
using L2Web.World;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class CombatSystemTests
    {
        static float Fb(int i) => 100 + i;

        [Test]
        public void Golpes_UmNotify_TodosOsAlvosJuntos()
        {
            // pole: 1 AttackShot, golpe principal + 2 alvos extras no mesmo notify
            var s = Combat.MeleeHitSchedule(new[] { 0.55f }, 3, Fb);
            CollectionAssert.AreEqual(new[] { (0, 0.55f), (1, 0.55f), (2, 0.55f) }, s);
            // 1HS com um golpe
            CollectionAssert.AreEqual(new[] { (0, 0.42f) }, Combat.MeleeHitSchedule(new[] { 0.42f }, 1, Fb));
        }

        [Test]
        public void Golpes_Dual_UmPorNotify()
        {
            // Atk01_Dual: AttackShot em 0,2674 e 0,613; o servidor manda 2 golpes no mesmo alvo
            var s = Combat.MeleeHitSchedule(new[] { 0.2674f, 0.613f }, 2, Fb);
            CollectionAssert.AreEqual(new[] { (0, 0.2674f), (1, 0.613f) }, s);
        }

        [Test]
        public void Golpes_DoisNotifies_SemExtras_RepeteOPrincipal()
        {
            // Atk01_Hand tem 2 AttackShot; com um golpe so o engine aplica o principal nos dois
            var s = Combat.MeleeHitSchedule(new[] { 0.293f, 0.5907f }, 1, Fb);
            CollectionAssert.AreEqual(new[] { (0, 0.293f), (0, 0.5907f) }, s);
        }

        [Test]
        public void Golpes_ExtrasAlemDosNotifies_NaoSaem()
        {
            // 2 notifies e 3 golpes: principal no 1o, extra 1 no 2o; o extra 2 nao e aplicado (CurAtkShotNum para)
            var s = Combat.MeleeHitSchedule(new[] { 0.2f, 0.5f }, 3, Fb);
            CollectionAssert.AreEqual(new[] { (0, 0.2f), (1, 0.5f) }, s);
            // 3 notifies e 2 golpes: o 3o notify nao aplica nada
            s = Combat.MeleeHitSchedule(new[] { 0.2f, 0.4f, 0.6f }, 2, Fb);
            CollectionAssert.AreEqual(new[] { (0, 0.2f), (1, 0.4f) }, s);
        }

        [Test]
        public void Golpes_SemNotify_TempoDoServidor()
        {
            var s = Combat.MeleeHitSchedule(new float[0], 2, Fb);
            CollectionAssert.AreEqual(new[] { (0, 100f), (1, 101f) }, s);
            Assert.AreEqual(0, Combat.MeleeHitSchedule(new[] { 0.3f }, 0, Fb).Count);
        }

        [Test]
        public void Escudo_SoSemMiss()
        {
            Assert.IsTrue(Combat.Shielded(Combat.Hit.Shield));
            Assert.IsTrue(Combat.Shielded(Combat.Hit.Shield | Combat.Hit.Crit | Combat.Hit.Soulshot | 3));
            Assert.IsFalse(Combat.Shielded(Combat.Hit.Miss | Combat.Hit.Shield));
            Assert.IsFalse(Combat.Shielded(Combat.Hit.Crit));
        }

        [Test]
        public void Arco_TempoDoACis()
        {
            // 1500 * 333 / 333 = 1500; com 400: 1248 (o 345 do porte antigo dava 1293)
            var b = Combat.ServerHits(333, "bow");
            Assert.AreEqual(1500, b.TimeAtk);
            CollectionAssert.AreEqual(new[] { 1500 }, b.Hits);
            Assert.AreEqual(1248, Combat.ServerHits(400, "bow").TimeAtk);
        }

        // ------------------------------------------------------------ alvo automatico

        [Test]
        public void AutoAlvo_SoComOProprioSemAlvo()
        {
            var a = new AutoTarget();
            // alvo nao sou eu
            Assert.IsFalse(a.OnAttack(10, 20, 1, true, true, false, 0));
            // ja tenho alvo
            Assert.IsFalse(a.OnAttack(10, 1, 1, true, true, false, 30));
            // atacante desconhecido, morto ou eu mesmo
            Assert.IsFalse(a.OnAttack(10, 1, 1, false, true, false, 0));
            Assert.IsFalse(a.OnAttack(10, 1, 1, true, true, true, 0));
            Assert.IsFalse(a.OnAttack(1, 1, 1, true, true, false, 0));
            // sem alvo: pede o Action uma vez e guarda o atacante
            Assert.IsTrue(a.OnAttack(10, 1, 1, true, true, false, 0));
            Assert.AreEqual(10, a.Pawn);
            Assert.IsFalse(a.OnAttack(10, 1, 1, true, true, false, 0));
            Assert.IsFalse(a.OnAttack(11, 1, 1, true, true, false, 0));
            // o MyTargetSelected libera de novo
            a.Selected();
            Assert.AreEqual(0, a.Pawn);
            Assert.IsTrue(a.OnAttack(11, 1, 1, true, true, false, 0));
        }

        [Test]
        public void AutoAlvo_DezSegundosDepoisDePerderOAlvo()
        {
            var a = new AutoTarget();
            a.Unselected();
            Assert.AreEqual(AutoTarget.PendingAfterUnselect, a.Pending);
            Assert.IsFalse(a.OnAttack(10, 1, 1, true, true, false, 0));
            a.Tick(9.9f);
            Assert.IsFalse(a.OnAttack(10, 1, 1, true, true, false, 0));
            a.Tick(0.2f);
            Assert.AreEqual(0, a.Pending);
            Assert.IsTrue(a.OnAttack(10, 1, 1, true, true, false, 0));
            a.Reset();
            Assert.AreEqual(0, a.Pawn);
        }

        [Test]
        public void AutoAlvo_PeloWorld()
        {
            var w = new World.World();
            var self = new Entity(1, "self") { World = w };
            var mob = new Entity(10, "npc") { World = w };
            w.Entities[1] = self;
            w.Entities[10] = mob;
            w.SelfId = 1;
            try
            {
                Assert.IsTrue(w.AutoTargetOnAttack(10, 1, 0));
                Assert.IsFalse(w.AutoTargetOnAttack(10, 1, 0));
                // TargetSelected de outro nao libera; o do proprio sim
                w.OnTargetSelected(10);
                Assert.AreEqual(10, w.AutoTarget.Pawn);
                w.OnTargetSelected(1);
                Assert.AreEqual(0, w.AutoTarget.Pawn);
                // TargetUnselected do proprio: 10 s sem alvo automatico; o Update desconta
                w.OnTargetUnselected(10);
                Assert.AreEqual(0, w.AutoTarget.Pending);
                w.OnTargetUnselected(1);
                Assert.IsFalse(w.AutoTargetOnAttack(10, 1, 0));
                w.Update(11);
                Assert.IsTrue(w.AutoTargetOnAttack(10, 1, 0));
                w.OnMyTargetSelected();
                Assert.AreEqual(0, w.AutoTarget.Pawn);
                // atacante morto nao vira alvo
                mob.Dead = true;
                Assert.IsFalse(w.AutoTargetOnAttack(10, 1, 0));
            }
            finally
            {
                w.Clear();
            }
        }

        // ------------------------------------------------------------ morte e revivida

        [Test]
        public void Morte_ParaOPawnESaiDaPostura()
        {
            var e = new Entity(10, "npc");
            try
            {
                e.Place(0, 0, 0);
                e.InCombat = true;
                e.Turning = 1;
                e.ServerMove(500, 0, 0, 0, 0, 0);
                Assert.IsNotNull(e.Dest);
                e.Follow = new FollowInfo { TargetId = 1, Distance = 40 };
                e.SetDead(true);
                Assert.IsTrue(e.Dead);
                Assert.IsNull(e.Dest);
                Assert.IsNull(e.Follow);
                Assert.IsFalse(e.InCombat);
                Assert.AreEqual(0, e.Turning);
                Assert.IsFalse(e.IsCasting);
            }
            finally
            {
                e.Actor.Dispose();
            }
        }

        [Test]
        public void Revive_DesligaOMortoEDestravaOProprio()
        {
            var w = new World.World();
            var self = new Entity(1, "self") { World = w };
            var mob = new Entity(10, "npc") { World = w };
            w.Entities[1] = self;
            w.Entities[10] = mob;
            w.SelfId = 1;
            try
            {
                w.OnDie(10);
                Assert.IsTrue(mob.Dead);
                w.Request.Lock();
                // o Revive de outro nao mexe na trava do clique
                w.OnRevive(10);
                Assert.IsFalse(mob.Dead);
                Assert.IsTrue(w.Request.Pending);
                w.OnDie(1);
                w.OnRevive(1);
                Assert.IsFalse(self.Dead);
                Assert.IsFalse(w.Request.Pending);
                // Revive sem estar morto nao faz nada
                w.Request.Lock();
                w.OnRevive(10);
                Assert.IsFalse(mob.Dead);
            }
            finally
            {
                w.Clear();
            }
        }

        [Test]
        public void Ataque_LigaAPosturaSoComOAtorCarregado()
        {
            // sem modelo carregado o Attack nao anima nem muda a postura (o AutoAttackStart do servidor liga depois)
            var e = new Entity(10, "npc");
            try
            {
                var r = e.Attack(null);
                Assert.AreEqual(0, r.Items.Count + r.Shots.Count);
                Assert.IsFalse(e.InCombat);
            }
            finally
            {
                e.Actor.Dispose();
            }
        }
    }
}
