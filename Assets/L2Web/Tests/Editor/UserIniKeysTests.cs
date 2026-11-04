// T10 da #0024 (tarefa #0034): ligacoes de movimento e camera do user.ini oficial que faltavam. Espaco/Ctrl (Dir=16/32,
// so no modo camera), NumLock (KeyboardPermanentMove), teclado numerico (ZoomIn/OutPress e CameraViewHeightAdjust) e
// PrintScrn (shot). Evidencias: ResetKeyboardMoving 0x103086f7, FUN_10563f60, FUN_10563fd0, Tick 0x1030acd1,
// UInput::Exec (KEYBOARDMOVESTART/FINISH, KEYBOARDPERMANENTMOVE, ZOOMINPRESS/ZOOMOUTPRESS, CAMERAVIEWHEIGHTADJUST),
// UViewport::Exec SHOT 0x10309a70.
using System.Collections.Generic;
using L2Web.World;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.InputSystem;

namespace L2Web.Tests
{
    public class UserIniKeysTests
    {
        const float Speed = 120;

        static KeyMoveOrder? Tick(KeyboardMove k, float dt = 0.016f, int turning = 0, float camYaw = 0, float camPitch = 0, float heading = 0) =>
            k.Tick(dt, turning, camYaw, camPitch, 1000, 2000, -300, heading, Speed);

        [Test]
        public void Ligacoes_DoUserIni()
        {
            Assert.AreEqual(UserIniKeys.DirForward, UserIniKeys.MoveDirs[Key.W]);
            Assert.AreEqual(UserIniKeys.DirBack, UserIniKeys.MoveDirs[Key.DownArrow]);
            Assert.AreEqual(16, UserIniKeys.MoveDirs[Key.Space]);
            Assert.AreEqual(32, UserIniKeys.MoveDirs[Key.LeftCtrl]);
            Assert.AreEqual(32, UserIniKeys.MoveDirs[Key.RightCtrl]);
            Assert.AreEqual(Key.NumLock, UserIniKeys.PermanentMove);
            Assert.AreEqual(Key.PrintScreen, UserIniKeys.Shot);
            // ZoomOutPress positivo, ZoomInPress negativo: 7/9 = 2,0, 4/6 = 0,1, 1/3 = 0,01
            Assert.AreEqual(2f, UserIniKeys.ZoomKeys[Key.Numpad7]);
            Assert.AreEqual(-2f, UserIniKeys.ZoomKeys[Key.Numpad9]);
            Assert.AreEqual(0.1f, UserIniKeys.ZoomKeys[Key.Numpad4]);
            Assert.AreEqual(-0.1f, UserIniKeys.ZoomKeys[Key.Numpad6]);
            Assert.AreEqual(0.01f, UserIniKeys.ZoomKeys[Key.Numpad1]);
            Assert.AreEqual(-0.01f, UserIniKeys.ZoomKeys[Key.Numpad3]);
            Assert.AreEqual(20f, UserIniKeys.ViewHeightKeys[Key.Numpad8]);
            Assert.AreEqual(-20f, UserIniKeys.ViewHeightKeys[Key.Numpad2]);
        }

        [Test]
        public void YawOffset_TabelaDoFUN_10563f60()
        {
            foreach (var b in new[] { 1, 3, 9, 11 }) Assert.AreEqual(0, UserIniKeys.YawOffset(b), $"bits {b}");
            foreach (var b in new[] { 4, 6, 12, 14 }) Assert.AreEqual(0x8000, UserIniKeys.YawOffset(b), $"bits {b}");
            // frente + tras, so lados, nenhum bit e os bits de subir/descer: sem rumo
            foreach (var b in new[] { 0, 2, 5, 7, 8, 10, 13, 15, 16, 17, 32 }) Assert.AreEqual(UserIniKeys.NoMove, UserIniKeys.YawOffset(b), $"bits {b}");
        }

        [Test]
        public void FreeDir_SobeDesceEFrenteComPitch()
        {
            AssertVec((0, 0, 1), UserIniKeys.FreeDir(16, -2000, 5000));
            AssertVec((0, 0, -1), UserIniKeys.FreeDir(32, 0, 0));
            AssertVec((1, 0, 0), UserIniKeys.FreeDir(1, 0, 0));
            var h = Mathf.Sqrt(0.5f);
            AssertVec((h, 0, h), UserIniKeys.FreeDir(1 | 16, 0, 0));
            // yaw 16384 = +Y; tras com pitch e o oposto exato da frente
            var f = UserIniKeys.FreeDir(1, 4000, 16384);
            var t = UserIniKeys.FreeDir(4, 4000, 16384);
            AssertVec((-f.X, -f.Y, -f.Z), t);
            Assert.Greater(f.Y, 0.9f);
            AssertVec((0, 0, 0), UserIniKeys.FreeDir(0, 0, 0));
        }

        [Test]
        public void ModoNormal_EspacoECtrlNaoMexem()
        {
            var k = new KeyboardMove();
            k.Hold(16);
            Assert.IsNull(Tick(k));
            k.Hold(32);
            Assert.IsNull(Tick(k));
            Assert.IsFalse(k.Moving);
        }

        [Test]
        public void ModoNormal_WAndaNoYawDaCameraEParaAoSoltar()
        {
            var k = new KeyboardMove();
            k.Hold(1);
            var o = Tick(k, camYaw: 16384).Value;
            Assert.AreEqual(1000, o.X, 0.01f);
            Assert.AreEqual(2000 + Speed * 5, o.Y, 0.01f);
            Assert.AreEqual(-300, o.Z);
            Assert.IsNull(Tick(k, camYaw: 16384));
            // Espaco junto nao muda o rumo nem a altura
            k.Hold(1 | 16);
            var o2 = Tick(k, camYaw: 16384).Value;
            Assert.AreEqual(o.Y, o2.Y, 0.01f);
            Assert.AreEqual(-300, o2.Z);
            k.Hold(0);
            var s = Tick(k, heading: 0).Value;
            Assert.IsTrue(s.Stop);
            Assert.AreEqual(1000 + Speed * 0.2f, s.X, 0.01f);
            Assert.IsNull(Tick(k));
        }

        [Test]
        public void ModoCamera_EspacoSobeECtrlDesce()
        {
            var k = new KeyboardMove { FreeCamera = true };
            k.Hold(16);
            var up = Tick(k).Value;
            Assert.AreEqual(-300 + KeyboardMove.FreeCameraDist, up.Z, 0.01f);
            Assert.AreEqual(1000, up.X, 0.01f);
            k.Hold(32);
            var down = Tick(k).Value;
            Assert.AreEqual(-300 - KeyboardMove.FreeCameraDist, down.Z, 0.01f);
            k.Hold(0);
            Assert.IsTrue(Tick(k).Value.Stop);
        }

        [Test]
        public void NumLock_CorreNoRumoDoPawnEReenvia()
        {
            var k = new KeyboardMove();
            k.TogglePermanent(16384);
            Assert.IsTrue(k.Permanent);
            // o rumo e o do pawn, nao o da camera
            var o = Tick(k, camYaw: 0, heading: 16384).Value;
            Assert.AreEqual(2000 + Speed * 5, o.Y, 0.01f);
            Assert.IsNull(Tick(k, camYaw: 0, heading: 16384));
            Assert.IsNotNull(Tick(k, dt: 1.1f, heading: 16384));
            // giro A/D: o rumo segue o yaw do pawn
            var g = Tick(k, turning: 1, heading: 32768).Value;
            Assert.AreEqual(1000 - Speed * 5, g.X, 0.01f);
            Assert.AreEqual(32768, k.PermanentYaw);
            // NumLock de novo: para
            k.TogglePermanent(32768);
            var s = Tick(k, heading: 32768).Value;
            Assert.IsTrue(s.Stop);
        }

        [Test]
        public void NumLock_WDesligaEFinishPreserva()
        {
            var k = new KeyboardMove();
            k.TogglePermanent(0);
            Tick(k);
            // KeyboardMoveStart desliga a corrida; W anda na camera e para ao soltar
            k.Hold(1);
            Assert.IsFalse(k.Permanent);
            k.Hold(0);
            Assert.IsTrue(Tick(k).Value.Stop);
            // NumLock com W segurado: soltar W (KeyboardMoveFinish) mantem a corrida
            k.Hold(1);
            Tick(k, camYaw: 0);
            k.TogglePermanent(16384);
            k.Hold(0);
            var o = Tick(k, heading: 16384).Value;
            Assert.IsFalse(o.Stop);
            Assert.AreEqual(2000 + Speed * 5, o.Y, 0.01f);
            Assert.IsTrue(k.Permanent);
        }

        [Test]
        public void NumLock_EspacoOuCtrlDesligamSemParada()
        {
            var k = new KeyboardMove();
            k.TogglePermanent(0);
            Assert.IsNotNull(Tick(k));
            // Ctrl (Dir=32, ex.: Ctrl+F1) e um KeyboardMoveStart: a corrida acaba, mas sem pedido de parada
            k.Hold(32);
            Assert.IsFalse(k.Permanent);
            Assert.IsFalse(k.Moving);
            Assert.IsNull(Tick(k));
            k.Hold(0);
            Assert.IsNull(Tick(k));
        }

        [Test]
        public void Clique_CancelaACorridaSemParada()
        {
            var k = new KeyboardMove();
            k.TogglePermanent(0);
            Tick(k);
            k.Cancel();
            Assert.IsFalse(k.Permanent);
            Assert.IsNull(Tick(k));
        }

        [Test]
        public void Zoom_PassosLimitesEAlturaNoMinimo()
        {
            var c = new CameraKeys();
            float zoom = 0, h = 0;
            const float min = -200, max = 25000, r = 8;
            c.ZoomPress(UserIniKeys.ZoomKeys[Key.Numpad7], ref zoom, ref h, min, max, r, false);
            Assert.AreEqual(2f, zoom, 1e-4f);
            c.ZoomPress(UserIniKeys.ZoomKeys[Key.Numpad6], ref zoom, ref h, min, max, r, false);
            Assert.AreEqual(1.9f, zoom, 1e-4f);
            c.ZoomPress(UserIniKeys.ZoomKeys[Key.Numpad1], ref zoom, ref h, min, max, r, false);
            Assert.AreEqual(1.91f, zoom, 1e-4f);
            // abaixo de 2 * raio + minimo o passo cai para 1/8
            zoom = -190;
            c.ZoomPress(-2, ref zoom, ref h, min, max, r, false);
            Assert.AreEqual(-190.25f, zoom, 1e-4f);
            // bate no minimo: a altura sobe 4/5 do raio uma vez
            c.ZoomPress(-50 * 8 * 10, ref zoom, ref h, min, max, r, false);
            Assert.AreEqual(min, zoom);
            Assert.AreEqual(6.4f, h, 1e-4f);
            c.ZoomPress(-2, ref zoom, ref h, min, max, r, false);
            Assert.AreEqual(6.4f, h, 1e-4f);
            // o primeiro ZoomOutPress desfaz
            c.ZoomPress(2, ref zoom, ref h, min, max, r, false);
            Assert.AreEqual(0f, h, 1e-4f);
            Assert.AreEqual(min + 0.25f, zoom, 1e-4f);
            zoom = max - 1;
            c.ZoomPress(50, ref zoom, ref h, min, max, r, false);
            Assert.AreEqual(max, zoom);
            // preset com DisableZoom: nada muda
            zoom = 0;
            c.ZoomPress(2, ref zoom, ref h, min, max, r, true);
            Assert.AreEqual(0f, zoom);
        }

        [Test]
        public void AlturaDaCamera_PorSegundoSemLimite()
        {
            var h = 0f;
            for (var i = 0; i < 10; i++) h = CameraKeys.ViewHeightHold(h, UserIniKeys.ViewHeightKeys[Key.Numpad8], 0.1f);
            Assert.AreEqual(20f, h, 1e-3f);
            h = CameraKeys.ViewHeightHold(h, UserIniKeys.ViewHeightKeys[Key.Numpad2], 5f);
            Assert.AreEqual(-80f, h, 1e-3f);
        }

        [Test]
        public void Shot_NomeLivreEExtensaoPelaQualidade()
        {
            var have = new HashSet<string> { "Shot00000.jpg", "Shot00001.jpg", "Shot00000.bmp" };
            Assert.AreEqual("Shot00002.jpg", ScreenShot.NextName(have.Contains, 1));
            Assert.AreEqual("Shot00001.bmp", ScreenShot.NextName(have.Contains, 0));
            Assert.AreEqual("Shot65535.jpg", ScreenShot.NextName(_ => true, 3));
            Assert.AreEqual(80, ScreenShot.JpegQuality(1));
            Assert.AreEqual(65, ScreenShot.JpegQuality(2));
            Assert.AreEqual(50, ScreenShot.JpegQuality(3));
        }

        [Test]
        public void Shot_Bmp24Bits()
        {
            var px = new[] { new Color32(1, 2, 3, 255), new Color32(4, 5, 6, 255), new Color32(7, 8, 9, 255), new Color32(10, 11, 12, 255) };
            var b = ScreenShot.Bmp(px, 1, 4);
            // linha de 3 bytes completada para 4
            Assert.AreEqual(54 + 4 * 4, b.Length);
            Assert.AreEqual((byte)'B', b[0]);
            Assert.AreEqual((byte)'M', b[1]);
            Assert.AreEqual(b.Length, System.BitConverter.ToInt32(b, 2));
            Assert.AreEqual(1, System.BitConverter.ToInt32(b, 18));
            Assert.AreEqual(4, System.BitConverter.ToInt32(b, 22));
            Assert.AreEqual(24, System.BitConverter.ToInt16(b, 28));
            // BGR, linha de baixo primeiro (mesma ordem do Texture2D)
            Assert.AreEqual(new byte[] { 3, 2, 1, 0 }, new[] { b[54], b[55], b[56], b[57] });
            Assert.AreEqual(new byte[] { 12, 11, 10 }, new[] { b[66], b[67], b[68] });
        }

        static void AssertVec((float X, float Y, float Z) want, (float X, float Y, float Z) got)
        {
            Assert.AreEqual(want.X, got.X, 1e-4f, "x");
            Assert.AreEqual(want.Y, got.Y, 1e-4f, "y");
            Assert.AreEqual(want.Z, got.Z, 1e-4f, "z");
        }
    }
}
