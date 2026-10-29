// Selecao de personagem: andar e girar dos personagens do salao (scratchpad/lobby_turn_re.md). AActor::fixedTurn
// (0x10306f05) sem bFixedRotationDir, RotationRate.Yaw 65000 do LineagePawn e GroundMinSpeed 80.
using L2Web.Render;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class LobbyTurnTests
    {
        [Test]
        public void FixedTurn_LadoMaisCurto_ParaNoAlvo()
        {
            Assert.AreEqual(1000, LobbyScene.TurnToward(0, 5000, 1000));
            Assert.AreEqual(5000, LobbyScene.TurnToward(4500, 5000, 1000));
            // passando pelo zero: 65000 -> 500 anda para frente (1036 de distancia)
            Assert.AreEqual((65000 + 1000) & 0xFFFF, LobbyScene.TurnToward(65000, 500, 1000));
            Assert.AreEqual(500, LobbyScene.TurnToward(65400, 500, 1000));
            Assert.AreEqual(64000, LobbyScene.TurnToward(500, 64000, 30000));
            Assert.AreEqual(4000, LobbyScene.TurnToward(5000, 1000, 1000));
            Assert.AreEqual(1234, LobbyScene.TurnToward(1234, 9999, 0));
        }

        [Test]
        public void Constantes_DoLineagePawn()
        {
            Assert.AreEqual(80f, LobbyScene.WalkSpeed);
            Assert.AreEqual(65000, LobbyScene.TurnRate);
            // 60 fps: passo inteiro de 1083 UU
            Assert.AreEqual(1083, (int)(LobbyScene.TurnRate * (1f / 60)));
        }
    }
}
