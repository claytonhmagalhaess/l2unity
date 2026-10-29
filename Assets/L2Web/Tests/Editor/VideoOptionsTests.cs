// Setters de video do OptionWnd (04 secao 2.3; nwindow UUIScript::execSet*): tabela do PawnClippingRange, MSAA do AABox e o
// IsKeepMinFrameRate forcando os valores (OptionWnd.uc:956-969) lidos de um Option.ini de teste.
using System.IO;
using L2Web.Render;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class VideoOptionsTests
    {
        [TearDown]
        public void Limpa() => L2Options.Load();

        static string Ini(string video)
        {
            var p = Path.Combine(Path.GetTempPath(), "l2web_video_" + System.Guid.NewGuid().ToString("N") + ".ini");
            File.WriteAllText(p, "[Video]\r\n" + video + "\r\n[L2WaterEffect]\r\nEffectType=2\r\nIsUseEffect=True\r\n");
            return p;
        }

        [Test]
        public void PawnClippingRange_EMsaa()
        {
            // execSetPawnClippingRange 0x100fa890: 0x40400000, 0x40200000, 0x40000000, 0x3fc00000, 0x3f800000
            Assert.AreEqual(3f, VideoOptions.PawnClippingRange(0));
            Assert.AreEqual(2.5f, VideoOptions.PawnClippingRange(1));
            Assert.AreEqual(2f, VideoOptions.PawnClippingRange(2));
            Assert.AreEqual(1.5f, VideoOptions.PawnClippingRange(3));
            Assert.AreEqual(1f, VideoOptions.PawnClippingRange(4));
            Assert.AreEqual(1, VideoOptions.MsaaSamples(0));
            Assert.AreEqual(2, VideoOptions.MsaaSamples(1));
            Assert.AreEqual(4, VideoOptions.MsaaSamples(2));
        }

        [Test]
        public void Resolve_SemEComMinFrameRate()
        {
            var p = Ini("TextureDetail=1\r\nModelDetail=0\r\nSkipAnim=0\r\nTerrainClippingRange=1\r\nPawnClippingRange=2\r\nPawnShadow=True\r\nRenderDeco=True\r\nPostProc=2\r\nWeatherEffect=1\r\nAntiAliasing=2\r\nIsKeepMinFrameRate=False");
            try
            {
                L2Options.Load(p);
                var e = VideoOptions.Resolve();
                Assert.AreEqual((1, 0, 0, 1, 2, 2, 2, 1, 2), (e.TextureDetail, e.ModelDetail, e.SkipAnim, e.TerrainClippingRange, e.PawnClippingRange, e.PostProc, e.ReflectionType, e.WeatherEffect, e.AntiAliasing));
                Assert.IsTrue(e.Shadow);
                Assert.IsTrue(e.RenderDeco);
                Assert.IsFalse(e.KeepMinFrameRate);
            }
            finally
            {
                File.Delete(p);
            }
            // ligado: Texture 2, Model 1, Motion 1, Shadow off, Deco off, Terrain 4, Pawn 4, Reflection 0, HDR 0, Weather 0
            p = Ini("TextureDetail=0\r\nModelDetail=0\r\nSkipAnim=0\r\nTerrainClippingRange=0\r\nPawnClippingRange=0\r\nPawnShadow=True\r\nRenderDeco=True\r\nPostProc=3\r\nWeatherEffect=1\r\nAntiAliasing=1\r\nIsKeepMinFrameRate=True");
            try
            {
                L2Options.Load(p);
                var e = VideoOptions.Resolve();
                Assert.AreEqual((2, 1, 1, 4, 4, 0, 0, 0), (e.TextureDetail, e.ModelDetail, e.SkipAnim, e.TerrainClippingRange, e.PawnClippingRange, e.PostProc, e.ReflectionType, e.WeatherEffect));
                Assert.IsFalse(e.Shadow);
                Assert.IsFalse(e.RenderDeco);
                Assert.IsTrue(e.KeepMinFrameRate);
            }
            finally
            {
                File.Delete(p);
            }
        }
    }
}
