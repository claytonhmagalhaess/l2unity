// Aproximacao do alvo (#0059): MoveToPawn 0x60 -> UGameEngine::OnMoveToPawn -> AController::MoveToward ->
// APawn::moveToward / ReachedDestination (alvo pawn: distancia horizontal entre os centros <= pawn+0x6c4 = offset).
// O aCis manda offset = alcance + os dois CollisionRadius (CreatureAI.maybeMoveToPawn; -30 com o alvo andando) e
// MoveToPawn(150) com o jogador ja perto do NPC so para vira-lo. O OnAttack e o OnGetItem chamam o StopMove do controller.
using System;
using L2Web.World;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class PawnApproachTests
    {
        const float Dt = 1f / 60;

        static float? Flat(float x, float y, float z) => null;

        static float D2(Entity a, Entity b)
        {
            var dx = b.X - a.X;
            var dy = b.Y - a.Y;
            return (float)Math.Sqrt(dx * dx + dy * dy);
        }

        static World.World NewWorld(out Entity self, out Entity mob, float mx, float my)
        {
            var w = new World.World();
            self = new Entity(100, "self") { World = w, CollisionRadius = 8 };
            mob = new Entity(200, "npc") { World = w, CollisionRadius = 20 };
            w.Entities[100] = self;
            w.Entities[200] = mob;
            w.SelfId = 100;
            self.Motion.Place(0, 0, 0);
            self.Motion.MoveTime = 1; // ja na fase de corrida
            mob.Motion.Place(mx, my, 0);
            return w;
        }

        /// <summary>Roda `n` quadros de todas as entidades; devolve quantos deles o proprio jogador andou.</summary>
        static int Run(World.World w, int n, Action perFrame = null)
        {
            var moved = 0;
            for (var i = 0; i < n; i++)
            {
                perFrame?.Invoke();
                foreach (var e in w.Entities.Values)
                {
                    var m = e.Step(Dt, w, Flat);
                    if (e.ObjectId == w.SelfId && m) moved++;
                }
            }
            return moved;
        }

        [Test]
        public void PawnReached_DistanciaHorizontalAteOOffset()
        {
            Assert.IsTrue(Movement.PawnReached(68, 0, 68));
            Assert.IsTrue(Movement.PawnReached(0, 68.0004f, 68), "arredondamento na borda conta como chegada");
            Assert.IsTrue(Movement.PawnReached(40, 50, 68));
            Assert.IsFalse(Movement.PawnReached(70, 0, 68));
            Assert.IsNull(Movement.PawnGoal(0, 0, 60, 0, 0, 68));
            var g = Movement.PawnGoal(0, 0, 500, 0, 7, 68);
            Assert.AreEqual(432f, g.X, 1e-3);
            Assert.AreEqual(0f, g.Y, 1e-3);
            Assert.AreEqual(7f, g.Z);
        }

        [Test]
        public void CorpoACorpo_AlvoParado_ParaNoOffsetEViraParaOAlvo()
        {
            // espada (alcance 40) + raios 8 + 20 = 68, como o aCis manda
            var w = NewWorld(out var self, out var mob, 0, 500);
            try
            {
                self.ServerMoveToPawn(mob, 68, 0, 0, 0);
                Run(w, 600);
                Assert.AreEqual(68f, D2(self, mob), 1.01f);
                Assert.AreEqual(Movement.HeadingOf(0, 1), self.Motion.Yaw, 1);
                // parado ao lado: nenhum quadro andando ("andar no lugar")
                Assert.AreEqual(0, Run(w, 300));
            }
            finally
            {
                w.Clear();
            }
        }

        [Test]
        public void ParadoNaBorda_ComArredondamento_NaoAndaNoLugar()
        {
            // o porte antigo parava exatamente em `distance` e o d recalculado ficava um fio acima: um passo de fracao de
            // unidade por quadro, com a animacao de andar tocando ao lado do alvo
            var w = NewWorld(out var self, out var mob, 1234.567f, -987.321f);
            try
            {
                var g = Movement.PawnGoal(0, 0, mob.X, mob.Y, 0, 68.0f);
                self.Motion.Place(g.X + 0.0003f, g.Y - 0.0003f, 0);
                self.ServerMoveToPawn(mob, 68, self.X, self.Y, 0);
                Assert.AreEqual(0, Run(w, 120));
            }
            finally
            {
                w.Clear();
            }
        }

        [Test]
        public void AlvoAndando_Segue_EParaQuandoOAlvoPara()
        {
            // alvo andando: o aCis tira 30 do offset (68 - 30 = 38)
            var w = NewWorld(out var self, out var mob, 0, 300);
            try
            {
                self.ServerMoveToPawn(mob, 38, 0, 0, 0);
                var t = 0;
                Run(w, 180, () =>
                {
                    // alvo foge a 60/s pelo eixo x durante 2 s
                    if (t++ < 120) mob.Motion.Place(mob.X + 60 * Dt, mob.Y, 0);
                });
                Assert.AreEqual(38f, D2(self, mob), 1.01f);
                Assert.AreEqual(0, Run(w, 120));
                // alvo se afasta de novo: o MoveToward continua e o pawn volta a andar
                mob.Motion.Place(mob.X + 200, mob.Y, 0);
                Assert.Greater(Run(w, 240), 0);
                Assert.AreEqual(38f, D2(self, mob), 1.01f);
            }
            finally
            {
                w.Clear();
            }
        }

        [Test]
        public void Arco_ParaNoAlcanceDoArco()
        {
            // arco: alcance 500 + raios 8 + 20
            var w = NewWorld(out var self, out var mob, 1000, 0);
            try
            {
                self.ServerMoveToPawn(mob, 528, 0, 0, 0);
                Run(w, 600);
                Assert.AreEqual(528f, D2(self, mob), 1.01f);
                Assert.AreEqual(0, Run(w, 60));
            }
            finally
            {
                w.Clear();
            }
        }

        [Test]
        public void JaAoLado_NoClique_NaoAndaMasViraParaONpc()
        {
            // Npc.onAction com o jogador ja no alcance: MoveToPawn(player, npc, INTERACTION_DISTANCE = 150) so para vira-lo
            var w = NewWorld(out var self, out var npc, -40, -40);
            try
            {
                self.Motion.Yaw = self.Motion.DesiredYaw = 0;
                self.ServerMoveToPawn(npc, 150, 0, 0, 0);
                Assert.AreEqual(0, Run(w, 60));
                Assert.AreEqual(0f, self.X);
                Assert.AreEqual(0f, self.Y);
                Assert.AreEqual(Movement.HeadingOf(-40, -40), self.Motion.Yaw, 1);
            }
            finally
            {
                w.Clear();
            }
        }

        [Test]
        public void Attack_EncerraOSeguimento()
        {
            // o aCis ataca sem StopMove quando o alvo andando esta dentro de offset + 100; o OnAttack para o atacante
            var w = NewWorld(out var self, out var mob, 0, 400);
            try
            {
                self.ServerMoveToPawn(mob, 38, 0, 0, 0);
                Run(w, 30);
                Assert.IsNotNull(self.Follow);
                var x = self.X;
                var y = self.Y;
                self.Attack(mob, 0, 50, 0); // proprio jogador: a posicao do pacote nao o reposiciona
                Assert.IsNull(self.Follow);
                Assert.IsNull(self.Dest);
                Assert.AreEqual(0, Run(w, 60));
                Assert.AreEqual(x, self.X);
                Assert.AreEqual(y, self.Y);
            }
            finally
            {
                w.Clear();
            }
        }

        [Test]
        public void MonstroAteOJogador_ParaNoOffset_EAttackOAjusta()
        {
            var w = NewWorld(out var self, out var mob, 600, 0);
            try
            {
                mob.Motion.MoveTime = 1;
                mob.ServerMoveToPawn(self, 68, 600, 0, 0);
                for (var i = 0; i < 600; i++) mob.Step(Dt, w, Flat);
                Assert.AreEqual(68f, D2(self, mob), 1.01f);
                var moved = 0;
                for (var i = 0; i < 120; i++)
                    if (mob.Step(Dt, w, Flat)) moved++;
                Assert.AreEqual(0, moved);
                // Attack de outro pawn: AdjustPawnLocation so passa de SnapDistance
                mob.Attack(self, 70, 0, 0);
                Assert.AreEqual(68f, mob.X, 1.01f);
                mob.Attack(self, 400, 0, 0);
                Assert.AreEqual(400f, mob.X);
            }
            finally
            {
                w.Clear();
            }
        }

        [Test]
        public void OutroPawn_MoveToPawn_AjustaPelaOrigemECorrige()
        {
            var w = NewWorld(out var self, out var mob, -100, 0);
            try
            {
                mob.Motion.MoveTime = 1;
                mob.Motion.RunSpd = 115;
                mob.Motion.MoveMul = 1.41f;
                // alvo em (1150, 0); o servidor diz que o monstro saiu de (0, 0): 100 atras, sem reposicionar
                self.Motion.Place(1150, 0, 0);
                mob.ServerMoveToPawn(self, 68, 0, 0, 0);
                Assert.AreEqual(-100f, mob.X);
                var T = 1150f / 115; // AddMoveToward: sem o moveMul
                Assert.AreEqual(T, mob.Motion.CorrTimer, 1e-3);
                Assert.AreEqual(100 / T, mob.Motion.Corr, 1e-3);
                // longe demais da origem: AdjustPawnLocation
                mob.Motion.Place(-500, 0, 0);
                mob.ServerMoveToPawn(self, 68, 0, 0, 0);
                Assert.AreEqual(0f, mob.X);
            }
            finally
            {
                w.Clear();
            }
        }

        [Test]
        public void ProprioJogador_MoveToPawn_NaoReposicionaNemCorrige()
        {
            var w = NewWorld(out var self, out var mob, 0, 1000);
            try
            {
                self.Motion.Place(-500, 0, 0);
                self.ServerMoveToPawn(mob, 68, 0, 0, 0);
                Assert.AreEqual(-500f, self.X);
                Assert.AreEqual(0f, self.Motion.Corr);
            }
            finally
            {
                w.Clear();
            }
        }

        [Test]
        public void MoveToPawn_TrocaODestino_ESemOAlvoParaAli()
        {
            var w = NewWorld(out var self, out var mob, 0, 1000);
            try
            {
                self.ServerMove(-3000, 0, 0, 0, 0, 0);
                self.ServerMoveToPawn(mob, 68, 0, 0, 0);
                Assert.IsNull(self.Dest, "o MoveToward troca o Destination do MoveToLocation");
                Run(w, 30);
                w.Entities.Remove(200); // o alvo some (DeleteObject)
                Run(w, 1);
                var x = self.X;
                var y = self.Y;
                Assert.IsNull(self.Follow);
                Assert.AreEqual(0, Run(w, 60), "nao volta ao destino antigo");
                Assert.AreEqual(x, self.X);
                Assert.AreEqual(y, self.Y);
            }
            finally
            {
                w.Entities[200] = mob;
                w.Clear();
            }
        }

        [Test]
        public void MoveToPawn_AlvoDesconhecido_NaoFazNada()
        {
            var w = NewWorld(out var self, out _, 0, 1000);
            try
            {
                self.ServerMove(300, 0, 0, 0, 0, 0);
                self.ServerMoveToPawn(null, 68, 0, 0, 0);
                Assert.IsNull(self.Follow);
                Assert.IsNotNull(self.Dest);
            }
            finally
            {
                w.Clear();
            }
        }

        [Test]
        public void PegarItem_ParaEViraParaOItem()
        {
            var w = NewWorld(out var self, out var mob, 0, 1000);
            try
            {
                self.ServerMove(300, 300, 0, 0, 0, 0);
                Run(w, 10);
                self.PickUp(self.X - 30, self.Y, 0);
                Assert.IsNull(self.Dest);
                Assert.AreEqual(0, Run(w, 60));
                Assert.AreEqual(Movement.HeadingOf(-1, 0), self.Motion.Yaw, 1);
            }
            finally
            {
                w.Clear();
            }
        }
    }
}
