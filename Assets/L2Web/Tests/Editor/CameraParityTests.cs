// M2 da matriz (Docs/validacao.md): os valores da camera do Unity (CamUtil) contra Golden/camera.json, tirado do user.ini
// oficial (pasta _back) e do pseudocodigo do CalcBehindView/UInput::Exec do engine.dll.
using L2Web.Render;
using Newtonsoft.Json.Linq;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class CameraParityTests
    {
        [Test]
        public void Constantes_IguaisAoCliente()
        {
            var g = Golden.Load("camera.json");
            var c = CamUtil.Cfg;
            Assert.AreEqual((float)g["traceBase"], c.DistBase);
            Assert.AreEqual((float)g["beforeHit"], c.HitMargin);
            Assert.AreEqual((float)g["pitchMin"], c.PitchMin);
            Assert.AreEqual((float)g["pitchMax"], c.PitchMax);
            Assert.AreEqual((float)g["zoomMin"], c.ZoomMin);
            Assert.AreEqual((float)g["zoomMax"], c.ZoomMax);
            Assert.AreEqual((float)g["wheelStep"], c.WheelStep);
            Assert.AreEqual((float)g["mouseSpeed"] * 0.01f, c.MouseRate, 1e-4);
            Assert.AreEqual((float)g["fov"], c.FovDeg);
            Assert.AreEqual((float)g["autoTracking"], c.AutoTrackingSpeed, 1e-6);
            Assert.AreEqual((float)g["zoomInitial"], new L2Camera().Zoom);
            var ps = (JArray)g["presets"];
            Assert.AreEqual(ps.Count, CamUtil.Presets.Length);
            for (var i = 0; i < ps.Count; i++)
            {
                Assert.AreEqual((float)ps[i]["Pitch"], CamUtil.Presets[i].Pitch, "preset " + i);
                Assert.AreEqual((float)ps[i]["Dist"], CamUtil.Presets[i].Dist, "preset " + i);
                Assert.AreEqual((float)ps[i]["ViewHeight"], CamUtil.Presets[i].ViewHeight, "preset " + i);
                Assert.AreEqual((float)ps[i]["HidePlayer"] != 0, CamUtil.Presets[i].HidePlayer, "preset " + i);
                Assert.AreEqual((float)ps[i]["DisableZoom"] != 0, CamUtil.Presets[i].DisableZoom, "preset " + i);
            }
            Assert.AreEqual("FixedDefaultCamera", (string)g["keys"]["Home"]);
            Assert.AreEqual("TurnBack", (string)g["keys"]["End"]);
        }
    }
}
