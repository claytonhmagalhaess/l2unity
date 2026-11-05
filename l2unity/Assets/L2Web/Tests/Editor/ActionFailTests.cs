// M5 da matriz (Docs/validacao.md): trava de pedido do clique (UGameEngine+0x64, spec 05 secao 5.7) e os quatro pacotes
// sem campos que so a zeram: 0x25 ActionFailed (OnActionFail 0x10314376) e as recusas de ataque 0x08/0x09/0x0a
// (OnAttackOutofRange 0x1030bfa5, OnAttackinCoolTime 0x10305a1f, OnAttackDeadTarget 0x1030c1bc).
using System;
using L2Web.World;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class ActionFailTests
    {
        [Test]
        public void Trava_ComecaLivre_EOPedidoLiga()
        {
            var t = new ActionLatch();
            Assert.IsFalse(t.Pending);
            Assert.IsTrue(t.CanClick);
            t.Lock();
            Assert.IsTrue(t.Pending);
            // PLAYERPAWNMOVETO com a trava ligada: o clique e ignorado
            Assert.IsFalse(t.CanClick);
            // um segundo pedido (ATTACK nao consulta a trava) nao muda nada
            t.Lock();
            Assert.IsTrue(t.Pending);
        }

        [Test]
        public void ActionFailed_ZeraSemCondicao()
        {
            var t = new ActionLatch();
            t.Lock();
            t.ActionFailed();
            Assert.IsFalse(t.Pending);
            Assert.IsTrue(t.CanClick);
            // sem pedido pendente, continua livre
            t.ActionFailed();
            Assert.IsFalse(t.Pending);
        }

        [Test]
        public void RecusaDeAtaque_SoComOProprioPawn()
        {
            var t = new ActionLatch();
            t.Lock();
            t.AttackRefused(false);
            Assert.IsTrue(t.Pending, "sem o proprio User/pawn o metodo retorna sem zerar");
            t.AttackRefused(true);
            Assert.IsFalse(t.Pending);
        }

        [Test]
        public void Respostas_SoDoProprioJogador()
        {
            var t = new ActionLatch();
            t.Lock();
            t.Answered(200, 100);
            Assert.IsTrue(t.Pending, "movimento/ataque/alvo de outro objeto nao destrava");
            t.Answered(0, 0);
            Assert.IsTrue(t.Pending, "sem o proprio jogador (SelfId 0) nada destrava");
            t.Answered(100, 100);
            Assert.IsFalse(t.Pending);
        }

        [Test]
        public void MyTargetSelected_EDeleteObjectDoAlvo()
        {
            var t = new ActionLatch();
            t.Lock();
            t.MyTargetSelected();
            Assert.IsFalse(t.Pending);
            t.Lock();
            t.Deleted(300, 400);
            Assert.IsTrue(t.Pending, "apagar um objeto que nao e o alvo nao destrava");
            t.Deleted(0, 0);
            Assert.IsTrue(t.Pending);
            t.Deleted(400, 400);
            Assert.IsFalse(t.Pending);
        }

        [Test]
        public void World_QuatroPacotes()
        {
            var w = new World.World();
            var refusals = new Action[] { w.OnAttackOutofRange, w.OnAttackinCoolTime, w.OnAttackDeadTarget };
            // sem o proprio jogador as recusas de ataque nao destravam; o ActionFailed sim
            foreach (var refuse in refusals)
            {
                w.Request.Lock();
                refuse();
                Assert.IsTrue(w.Request.Pending);
            }
            w.OnActionFailed();
            Assert.IsFalse(w.Request.Pending);

            var self = new Entity(100, "self") { World = w };
            w.Entities[100] = self;
            w.SelfId = 100;
            try
            {
                foreach (var refuse in refusals)
                {
                    w.Request.Lock();
                    refuse();
                    Assert.IsFalse(w.Request.Pending);
                }
                // so a trava: o estado de combate e o movimento do pawn ficam como estavam
                self.InCombat = true;
                var x = self.X;
                w.Request.Lock();
                w.OnAttackDeadTarget();
                w.OnActionFailed();
                Assert.IsTrue(self.InCombat);
                Assert.AreEqual(x, self.X);
                // sair do mundo zera a trava
                w.Request.Lock();
                w.Clear();
                Assert.IsFalse(w.Request.Pending);
            }
            finally
            {
                w.Clear();
            }
        }
    }
}
