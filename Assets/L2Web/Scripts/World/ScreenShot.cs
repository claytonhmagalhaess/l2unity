// PrintScrn=OnRelease shot (user.ini oficial:138): UViewport::Exec "SHOT" (engine.dll do Interlude, 0x10309a70).
//  - nome: o primeiro Shot%05i livre de 0 a 65535, .bmp com Game.ScreenShotQuality = 0 e .jpg com 1..3;
//  - JPEG: appCreateJpeg com 20 (1 = High), 35 (2 = Average) ou 50 (3 = Low); BMP: appCreateBitmap;
//  - com IsL2Console (l2.ini do cliente oficial: True) e conectado, a mensagem de sistema 1204 com o nome, a largura e
//    a altura.
// O original grava na pasta System; o porte grava em Application.persistentDataPath, ao lado do Option.ini.
using System;
using System.Collections;
using System.IO;
using UnityEngine;

namespace L2Web.World
{
    public static class ScreenShot
    {
        /// <summary>Mensagem de sistema da captura ($s1 nome, $s2 largura, $s3 altura).</summary>
        public const int SavedMessage = 1204;

        /// <summary>Primeiro Shot%05i livre (o laco do original para em 65535 e usa esse nome se todos existirem).</summary>
        public static string NextName(Func<string, bool> exists, int quality)
        {
            var ext = quality == 0 ? ".bmp" : ".jpg";
            var name = "";
            for (var i = 0; i < 0x10000; i++)
            {
                name = $"Shot{i:00000}{ext}";
                if (!exists(name)) break;
            }
            return name;
        }

        /// <summary>
        /// Qualidade do Texture2D.EncodeToJPG para o ScreenShotQuality 1..3. O parametro do appCreateJpeg cresce do
        /// High (20) para o Low (50), entao e compressao: o porte usa 100 - parametro.
        /// </summary>
        public static int JpegQuality(int quality) => quality switch { 1 => 80, 2 => 65, _ => 50 };

        /// <summary>BMP de 24 bits sem compressao; `pixels` na ordem do Texture2D (linha 0 = de baixo), como o BMP guarda.</summary>
        public static byte[] Bmp(Color32[] pixels, int w, int h)
        {
            var stride = (w * 3 + 3) & ~3;
            var size = 54 + stride * h;
            var b = new byte[size];
            void U16(int o, int v) { b[o] = (byte)v; b[o + 1] = (byte)(v >> 8); }
            void U32(int o, int v) { U16(o, v); U16(o + 2, v >> 16); }
            b[0] = (byte)'B';
            b[1] = (byte)'M';
            U32(2, size);
            U32(10, 54);
            U32(14, 40);
            U32(18, w);
            U32(22, h);
            U16(26, 1);
            U16(28, 24);
            U32(34, stride * h);
            U32(38, 2835);
            U32(42, 2835);
            for (var y = 0; y < h; y++)
            {
                var o = 54 + y * stride;
                for (var x = 0; x < w; x++, o += 3)
                {
                    var p = pixels[y * w + x];
                    b[o] = p.b;
                    b[o + 1] = p.g;
                    b[o + 2] = p.r;
                }
            }
            return b;
        }

        /// <summary>
        /// Captura no fim do quadro (corrotina do MonoBehaviour principal) e chama `done(nome, largura, altura)`.
        /// </summary>
        public static IEnumerator Capture(string folder, int quality, Action<string, int, int> done)
        {
            yield return new WaitForEndOfFrame();
            var tex = ScreenCapture.CaptureScreenshotAsTexture();
            try
            {
                Directory.CreateDirectory(folder);
                var name = NextName(n => File.Exists(Path.Combine(folder, n)), quality);
                var data = quality == 0 ? Bmp(tex.GetPixels32(), tex.width, tex.height) : tex.EncodeToJPG(JpegQuality(quality));
                File.WriteAllBytes(Path.Combine(folder, name), data);
                done?.Invoke(name, tex.width, tex.height);
            }
            finally
            {
                UnityEngine.Object.Destroy(tex);
            }
        }
    }
}
