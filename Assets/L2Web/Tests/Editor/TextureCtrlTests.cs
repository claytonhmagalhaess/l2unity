// H2 da matriz (Docs/validacao.md): modos do NCTextureCtrl (FUN_10053790: switch do TextureCtrlType).
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class TextureCtrlTests
    {
        static L2Ctrl Tex(int ct, float u = 0, float v = 0, float us = 0, float vs = 0) =>
            L2Ctrl.Parse(new JObject { ["type"] = "Texture", ["name"] = "t", ["ctrlType"] = ct, ["u"] = u, ["v"] = v, ["uSize"] = us, ["vSize"] = vs, ["file"] = "x" });

        [Test]
        public void Modos()
        {
            var r = new L2Rect(0, 0, 100, 50);
            Assert.AreEqual(PaintMode.Stretch, L2Wnd.TextureMode(Tex(0), r).mode);
            Assert.AreEqual(PaintMode.Normal, L2Wnd.TextureMode(Tex(1), r).mode);
            Assert.AreEqual(PaintMode.Tile, L2Wnd.TextureMode(Tex(2), r).mode);
            Assert.AreEqual(PaintMode.Normal, L2Wnd.TextureMode(Tex(4), r).mode, "4 cai no mesmo case do 1");
            // 3: recorte do tamanho do controle a partir de (u, v) limitado (sem textura conhecida: limite = 0)
            var m3 = L2Wnd.TextureMode(Tex(3, 30, 40, 512, 512), r);
            Assert.AreEqual(PaintMode.Normal, m3.mode);
            Assert.AreEqual((100f, 50f), (m3.us, m3.vs));
            Assert.AreEqual((0f, 0f), (m3.u, m3.v));
        }
    }
}
