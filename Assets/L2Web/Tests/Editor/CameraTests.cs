// Porte de test/camera.test.ts (camera do cliente L2: presets do user.ini, zoom, mouse, trace, auto-tracking, FOV).
using System;
using L2Web.Render;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class CameraTests
    {
        static void Near(double a, double b, double eps = 1e-6) => Assert.That(Math.Abs(a - b) < eps, $"{a} != {b}");

        static double Len(V3 v) => Math.Sqrt((double)v.X * v.X + (double)v.Y * v.Y + (double)v.Z * v.Z);

        [Test]
        public void Preset0_Pitch2700_Dist230_Camera30BeforeEnd()
        {
            var c = new L2Camera();
            c.ApplyPreset(0, 0);
            Assert.AreEqual(-2700f, c.Pitch);
            Assert.AreEqual(-20f, c.Zoom);
            Assert.AreEqual(230f, c.Distance);
            var v = c.Update(new V3(0, 0, 0));
            Near(Len(v.Pos), 200, 1e-3);
            // pitch negativo = olhando para baixo: camera acima e atras (yaw 0 = +X)
            Assert.That(v.Pos.Z > 0 && v.Pos.X < 0);
        }

        [Test]
        public void Zoom_WheelBackApproaches20PerClick_Clamped_Preset1LocksZoom()
        {
            var c = new L2Camera();
            c.Wheel(1);
            Assert.AreEqual(-40f, c.Zoom);
            c.Wheel(-2000); // afasta ate o MaxZoomingDist (25000)
            Assert.AreEqual(CamUtil.Cfg.ZoomMax, c.Zoom);
            c.Wheel(3000);
            Assert.AreEqual(CamUtil.Cfg.ZoomMin, c.Zoom);
            c.ApplyPreset(1, 0);
            Assert.AreEqual(CamUtil.Presets[1].Dist, c.Distance);
            Assert.AreEqual(true, c.HidePlayer);
            c.Wheel(5);
            Assert.AreEqual(CamUtil.Presets[1].Dist, c.Distance);
            c.ApplyPreset(3, 0);
            Assert.AreEqual(0, c.Preset);
        }

        [Test]
        public void Mouse_36UnitsPerPixel_PitchClamped()
        {
            var c = new L2Camera();
            c.Rotate(10, 0);
            Assert.AreEqual(360f, c.Yaw);
            c.Rotate(0, 10000);
            Assert.AreEqual(CamUtil.Cfg.PitchMin, c.Pitch);
            c.Rotate(0, -10000);
            Assert.AreEqual(CamUtil.Cfg.PitchMax, c.Pitch);
        }

        [Test]
        public void Trace_ObstaclePullsCamera30BeforeHit()
        {
            var c = new L2Camera();
            var v = c.Update(new V3(0, 0, 0), (_, _, _) => 100);
            Near(Len(v.Pos), 70, 1e-3);
        }

        [Test]
        public void AutoTracking_YawMoves40PercentTowardCameraToTarget()
        {
            var c = new L2Camera();
            c.ApplyPreset(0, 0);
            c.Update(new V3(0, 0, 0));
            c.Update(new V3(0, 100, 0));
            // camera em (-~195, 0); alvo foi para (0, 100): heading ~ 27 graus
            Assert.That(c.Yaw > 0 && c.Yaw < 0.4 * 65536 * (30.0 / 360), $"yaw {c.Yaw}");
            var yaw = c.Yaw;
            c.Tracking = false;
            c.Update(new V3(0, 200, 0));
            Assert.AreEqual(yaw, c.Yaw);
        }

        [Test]
        public void Fov_Horizontal60BecomesVerticalByAspect()
        {
            Near(CamUtil.VerticalFov(60, 4f / 3f), 46.826, 1e-3);
            Near(CamUtil.VerticalFov(60, 1), 60, 1e-4);
            var d = CamUtil.RotatorDir(16384, 0);
            Near(d.Z, 1, 1e-6);
        }
    }
}
