// Regras de movimento extraidas do engine.dll (docs/re/ do l2web) aplicadas em PawnMotion. Porte de test/movement.test.ts.
// O TS usa double; aqui as posicoes/tempos sao float (convencao do porte), entao as tolerancias sao de float.
using System;
using L2Web.World;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class MovementTests
    {
        static float? Flat(float x, float y, float z) => null;

        static PawnMotion Pawn() => new PawnMotion { RunSpd = 115, WalkSpd = 80, MoveMul = 1.41f, Running = true };

        [Test]
        public void FaseInicialDeCaminhada_12Frames_DepoisRun()
        {
            var p = Pawn();
            p.AddMoveTo(new Vec3(0, 0, 0), new Vec3(5000, 0, 0));
            p.Step(0.1f, Flat);
            Assert.AreEqual(80f, p.BaseSpeed());
            Assert.IsFalse(p.RunPhase);
            for (var i = 0; i < 4; i++) p.Step(0.1f, Flat);
            Assert.AreEqual(115f, p.BaseSpeed());
            Assert.IsTrue(p.RunPhase);
        }

        [Test]
        public void AddMoveTo_CorrecaoDeSincronia()
        {
            var p = Pawn();
            p.MoveTime = 1; // ja correndo
            p.Place(-100, 0, 0); // 100 atras da origem do servidor
            p.AddMoveTo(new Vec3(0, 0, 0), new Vec3(1150, 0, 0));
            var T = 1150.0 / 115 * 1.41;
            Assert.AreEqual(T, p.CorrTimer, 1e-4);
            Assert.AreEqual(100 / T, p.Corr, 1e-4);
            Assert.AreEqual(115 * 1.41 + 100 / T, p.Speed(), 1e-3);
        }

        [Test]
        public void ProprioJogadorNuncaTeleportaPelaOrigem_OutrosAcimaDe200()
        {
            var me = Pawn();
            me.Place(0, 0, 0);
            me.ServerMove(new Vec3(1000, 0, 0), new Vec3(500, 0, 0), true);
            Assert.AreEqual(0f, me.X);
            var other = Pawn();
            other.Place(0, 0, 0);
            other.ServerMove(new Vec3(1000, 0, 0), new Vec3(150, 0, 0), false);
            Assert.AreEqual(0f, other.X); // 150 < 200: nao reposiciona
            other.ServerMove(new Vec3(1000, 0, 0), new Vec3(500, 0, 0), false);
            Assert.AreEqual(500f, other.X);
        }

        [Test]
        public void ValidateLocation_ProprioTeleporta_OutroParadoAnda()
        {
            var me = Pawn();
            me.ServerValidate(new Vec3(10, 20, 30), 16384, true);
            Assert.AreEqual(new[] { 10f, 20f, 30f, 16384f }, new[] { me.X, me.Y, me.Z, me.Yaw });
            var other = Pawn();
            other.ServerValidate(new Vec3(50, 0, 0), 0, false);
            Assert.IsNotNull(other.Dest);
            Assert.AreEqual(new[] { 50f, 0f, 0f }, new[] { other.Dest.X, other.Dest.Y, other.Dest.Z });
            var other2 = Pawn();
            other2.ServerValidate(new Vec3(1, 0, 0), 0, false);
            Assert.IsNull(other2.Dest); // abaixo de 2 unidades: ignora
        }

        [Test]
        public void ValidateLocation_EmMovimento_Correcao3s()
        {
            var p = Pawn();
            p.Dest = new Vec3(1000, 0, 0);
            p.Place(0, 0, 0);
            p.ServerValidate(new Vec3(60, 0, 0), 0, false); // servidor esta 60 a frente
            Assert.AreEqual(3f, p.CorrTimer);
            Assert.AreEqual(60.0 / 3, p.Corr, 1e-5);
        }

        [Test]
        public void Rotacao_Limitada_65000PorSegundo()
        {
            var p = Pawn();
            p.Yaw = 0;
            p.DesiredYaw = 32768;
            p.Step(0.25f, Flat, null);
            Assert.AreEqual(16250, p.Yaw, 1e-6);
            Assert.Greater(p.TurnRate, Movement.TurnAnimRate);
            p.Step(0.3f, Flat, null);
            Assert.AreEqual(32768f, p.Yaw);
        }

        [Test]
        public void CorrecaoExpira_E_TempoAndandoZeraAoParar()
        {
            var p = Pawn();
            p.AddMoveTo(new Vec3(0, 0, 0), new Vec3(30, 0, 0));
            p.Corr = 5;
            p.CorrTimer = 0.05f;
            p.Step(0.1f, Flat);
            Assert.AreEqual(0f, p.Corr);
            for (var i = 0; i < 20; i++) p.Step(0.1f, Flat);
            Assert.IsNull(p.Dest);
            Assert.AreEqual(0f, p.MoveTime);
        }

        static float JsRound(double v) => (float)Math.Floor(v + 0.5);

        [Test]
        public void AlturaVemDoChao_NaoDaInterpolacao()
        {
            var p = Pawn();
            p.MoveTime = 1;
            p.AddMoveTo(new Vec3(0, 0, 0), new Vec3(1000, 0, 0));
            p.Step(0.5f, (x, y, z) => JsRound(x / 10.0)); // rampa
            Assert.AreEqual(JsRound(p.X / 10.0), p.Z);
        }

        [Test]
        public void HeadingOf_E_WrapYaw()
        {
            Assert.AreEqual(0f, Movement.HeadingOf(1, 0));
            Assert.AreEqual(16384f, Movement.HeadingOf(0, 1), 1e-3);
            Assert.AreEqual(49152f, Movement.HeadingOf(0, -1), 1e-3);
            Assert.AreEqual(-16384f, Movement.WrapYaw(49152));
            Assert.AreEqual(32768f, Movement.WrapYaw(32768));
            Assert.AreEqual(32768f, Movement.WrapYaw(-32768));
        }
    }
}
