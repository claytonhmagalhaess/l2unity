// Camera do lobby (scratchpad/lobby_camera_re.md): FovAngle 50 do PlayerController (UGameEngine::Draw 0x1058fe7c), near 10 /
// far 65536 UU, e o Matinee (FMatineeTools::GetSamples 0x10307f13, GetLocation 0x10698480, GetRotation 0x1030ad99).
using L2Web.Render;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class LobbyCameraTests
    {
        [Test]
        public void Fov50Horizontal_EPlanosDeCorte()
        {
            Assert.AreEqual(50f, LobbyScene.LobbyFovDeg);
            // 16:9 -> 29,395 graus verticais; 4:3 -> 38,553
            Assert.AreEqual(29.395f, CamUtil.VerticalFov(LobbyScene.LobbyFovDeg, 16f / 9), 0.01f);
            Assert.AreEqual(38.553f, CamUtil.VerticalFov(LobbyScene.LobbyFovDeg, 4f / 3), 0.01f);
            Assert.AreEqual(10f, LobbyScene.NearUu);
            Assert.AreEqual(65536f, LobbyScene.FarUu);
        }

        [Test]
        public void Matinee_RetaUniformeSemPathStyle()
        {
            var p0 = new Vector3(0, 0, 0);
            var p3 = new Vector3(99, 0, 0);
            var s = LobbyScene.PathSamples(p0, p3, null, null, null);
            Assert.AreEqual(100, s.Length);
            // P1/P2 a 1/3 e 2/3: a curva e a propria reta, amostra k em x = k
            for (var k = 0; k < 100; k++) Assert.AreEqual(k, s[k].x, 1e-3f, "amostra " + k);
            Assert.AreEqual(49.5f, LobbyScene.SampleAt(s, 0.5f).x, 1e-3f);
            Assert.AreEqual(99f, LobbyScene.SampleAt(s, 1f).x, 1e-3f);
        }

        [Test]
        public void Matinee_BezierComPontosDeControle()
        {
            var p0 = new Vector3(0, 0, 0);
            var p3 = new Vector3(100, 0, 0);
            // controle para cima nos dois lados: o meio da curva sobe 3/4 do controle
            var s = LobbyScene.PathSamples(p0, p3, 1, new[] { 0f, 0f, 40f }, new[] { 0f, 0f, 40f });
            Assert.AreEqual(0f, s[0].z, 1e-4f);
            Assert.AreEqual(0f, s[99].z, 1e-4f);
            Assert.AreEqual(30f, LobbyScene.SampleAt(s, 0.5f).z, 0.2f);
        }

        [Test]
        public void Matinee_RotacaoEnroladaEm65535()
        {
            Assert.AreEqual(500f, LobbyScene.RotLerp(0, 1000, 0.5f));
            // de 65000 para 500: a diferenca -64500 enrola para +1035, metade = 517,5
            Assert.AreEqual(65000 + 517.5f, LobbyScene.RotLerp(65000, 500, 0.5f), 1e-3f);
            Assert.AreEqual(269876 + (279504 - 269876) * 0.25f, LobbyScene.RotLerp(269876, 279504, 0.25f), 1e-3f);
        }
    }
}
