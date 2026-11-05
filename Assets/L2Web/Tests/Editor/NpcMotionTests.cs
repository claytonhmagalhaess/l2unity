// NPCs, monstros e bosses (#0061): regras do engine.dll para o pawn de outro objeto durante o combate.
//  - UGameEngine::OnValidateLocation (0x1030b668): parado, so anda ate a posicao do servidor (AddMoveTo) com pawn+0x62c == 0,
//    ou seja, sem golpe nem cast em curso; acima de 200 reposiciona (AdjustPawnLocation) sempre.
//  - APawn::SwordAttackProcess (0x103031e8) vira para o alvo em todo tick do golpe; APawn::BowAttackProcess (0x103078d3) so
//    ate soltar a flecha (estados 1, 4 e 5; o 6 nao grava DesiredRotation).
//  - APawn::GetCurSpeed (0x103138bd): fase de caminhada ate pawn+0x6cc / 30 s; o 0x6cc so vem do chargrp no OnUserInfo e
//    no OnCharInfo, entao o NPC corre desde o primeiro tick.
using System.Collections.Generic;
using L2Web.World;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class NpcMotionTests
    {
        static float? Flat(float x, float y, float z) => null;

        static PawnMotion Pawn()
        {
            var p = new PawnMotion();
            p.Place(0, 0, 0);
            return p;
        }

        [Test]
        public void ValidateLocation_ParadoNoGolpe_NaoAnda()
        {
            var p = Pawn();
            p.Yaw = p.DesiredYaw = 16384;
            p.ServerValidate(new Vec3(-50, 0, 0), 0, false, inAction: true);
            Assert.IsNull(p.Dest, "com golpe ou cast em curso o OnValidateLocation nao chama AddMoveTo");
            Assert.IsFalse(p.Step(1f / 60, Flat));
            Assert.AreEqual(16384f, p.DesiredYaw, "nao vira para o ponto da correcao");
            Assert.AreEqual(0f, p.X);
        }

        [Test]
        public void ValidateLocation_ParadoSemAcao_AndaAtePosicao()
        {
            var p = Pawn();
            p.ServerValidate(new Vec3(-50, 0, 0), 0, false, inAction: false);
            Assert.IsNotNull(p.Dest);
            Assert.AreEqual(-50f, p.Dest.X);
        }

        [Test]
        public void ValidateLocation_NoGolpeLongeDemais_Reposiciona()
        {
            var p = Pawn();
            p.ServerValidate(new Vec3(500, 0, 0), 0, false, inAction: true);
            Assert.AreEqual(500f, p.X, "AdjustPawnLocation vem antes do teste do 0x62c");
            Assert.IsNull(p.Dest);
        }

        [Test]
        public void ValidateLocation_ProprioJogador_IgnoraAcao()
        {
            var p = Pawn();
            p.ServerValidate(new Vec3(30, 0, 0), 8192, true, inAction: true);
            Assert.AreEqual(30f, p.X);
            Assert.AreEqual(8192f, p.Yaw);
        }

        [Test]
        public void TrackTime_CorpoACorpo_AteOFimDoClipe()
        {
            Assert.AreEqual(1.2f, Combat.TrackTime(false, 1.2f, new List<float> { 0.5f }));
            Assert.AreEqual(1.2f, Combat.TrackTime(false, 1.2f, null));
        }

        [Test]
        public void TrackTime_Arco_AteSoltarAFlecha()
        {
            Assert.AreEqual(0.7f, Combat.TrackTime(true, 1.5f, new List<float> { 0.7f }));
            Assert.AreEqual(0.9f, Combat.TrackTime(true, 1.5f, new List<float> { 0.4f, 0.9f }), "ultimo disparo");
            Assert.AreEqual(1.5f, Combat.TrackTime(true, 1.5f, new List<float>()), "sem notify: o clipe inteiro");
            Assert.AreEqual(1.5f, Combat.TrackTime(true, 1.5f, new List<float> { 2f }), "nunca alem do clipe");
        }

        [Test]
        public void Npc_CorreDesdeOPrimeiroTick()
        {
            var npc = new Entity(300, "npc");
            Assert.AreEqual(0f, npc.Motion.WalkPhase);
            var m = npc.Motion;
            m.RunSpd = 174;
            m.WalkSpd = 40;
            m.Place(0, 0, 0);
            m.Dest = new Vec3(1000, 0, 0);
            m.Step(0.1f, Flat);
            Assert.AreEqual(17.4f, m.X, 1e-3, "run speed no primeiro tick");
            Assert.IsTrue(m.RunPhase);
        }

        [Test]
        public void Jogador_AndaAntesDeCorrer()
        {
            foreach (var kind in new[] { "self", "player" })
            {
                var e = new Entity(301, kind);
                Assert.AreEqual(Movement.WalkBeforeRun, e.Motion.WalkPhase, kind);
                var m = e.Motion;
                m.RunSpd = 120;
                m.WalkSpd = 80;
                m.Place(0, 0, 0);
                m.Dest = new Vec3(1000, 0, 0);
                m.Step(0.1f, Flat);
                Assert.AreEqual(8f, m.X, 1e-3, kind + ": walk speed na fase de caminhada");
                Assert.IsFalse(m.RunPhase);
            }
        }
    }
}
