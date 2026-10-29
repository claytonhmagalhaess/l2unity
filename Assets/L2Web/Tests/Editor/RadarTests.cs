// Radar do HUD (UCanvas::DrawRadarBack 0x1030ff0b / DrawRadarEtc 0x103087d8 do Engine.dll, ver RadarView): pitch da camera do
// radar, vetor do FRotator e a posicao dos pontos (min(35, d x 35 / 1500) UU).
using L2Web.UI;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class RadarTests
    {
        [Test]
        public void Pitch_DaCameraMenos0x800_Limitado()
        {
            // pitch -0x1000 (olhando para baixo) -> -0x1800; acima de -0x1201 cai no limite; abaixo de -0x2000 idem
            Assert.AreEqual(-(float)0x1800, RadarView.RadarPitch(-0x1000));
            Assert.AreEqual(-(float)0x1201, RadarView.RadarPitch(0));
            Assert.AreEqual(-(float)0x1201, RadarView.RadarPitch(0x2000));
            Assert.AreEqual(-(float)0x2000, RadarView.RadarPitch(-0x3000));
            Assert.AreEqual(27f, RadarView.FovDeg);
            Assert.AreEqual(256f, RadarView.CameraDistanceUu);
            // distancia efetiva = a do original (256): o disco de raio 50 ocupa 50 / (256 tan 13,5) = 81% da meia largura
            Assert.AreEqual(256f, RadarView.EffectiveDistanceUu);
            Assert.AreEqual(0.815f, 50f / (256f * Mathf.Tan(13.5f * Mathf.Deg2Rad)), 0.002f);
            Assert.AreEqual(60f, RadarView.NorthDistanceUu);
        }

        [Test]
        public void Vetor_DoRotator()
        {
            var v = RadarView.RotatorVector(0, 0);
            Assert.AreEqual(1f, v.x, 1e-6f);
            v = RadarView.RotatorVector(0, 0x4000); // yaw 90 graus -> +Y
            Assert.AreEqual(0f, v.x, 1e-6f);
            Assert.AreEqual(1f, v.y, 1e-6f);
            v = RadarView.RotatorVector(-0x2000, 0); // pitch -45 graus
            Assert.AreEqual(Mathf.Cos(Mathf.PI / 4), v.x, 1e-6f);
            Assert.AreEqual(-Mathf.Sin(Mathf.PI / 4), v.z, 1e-6f);
        }

        [Test]
        public void Pontos_Min35_Por1500UU()
        {
            var p = RadarView.DotOffset(750, 0);
            Assert.AreEqual(17.5f, p.x, 1e-4f);
            p = RadarView.DotOffset(0, -3000); // alem do alcance: fica no raio 35
            Assert.AreEqual(-35f, p.y, 1e-4f);
            Assert.AreEqual(Vector2.zero, RadarView.DotOffset(0, 0));
            Assert.AreEqual(102, RadarView.SizePx);
        }
    }
}
