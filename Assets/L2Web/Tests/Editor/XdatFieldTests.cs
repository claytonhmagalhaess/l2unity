// F3 da matriz (Docs/validacao.md): os 64 campos unk* do Interface.xdat com o nome XML original (Golden/xdat_fields.json,
// de out/re/xdat_field_names.json), e o uso deles nas janelas: titulo = title (nao a dica Iconable.TooltipIdx) e moldura =
// frame com Frame.direction = Top.
using System.IO;
using System.Linq;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class XdatFieldTests
    {
        static readonly (string golden, string kind)[] Kinds =
        {
            ("Window (XMLWindowData)", "Window"), ("DefaultProperty (XMLUIData)", "Control"), ("ListCtrl (XMLListData)", "ListCtrl"),
            ("MultiEdit (XMLMultiEditData)", "MultiEdit"), ("SliderCtrl (XMLSliderCtrlData)", "SliderCtrl"), ("Shortcut (XMLShortcutData)", "Shortcut"),
        };

        [Test]
        public void SessentaEQuatroCampos_ComONomeXml()
        {
            var g = (JArray)Golden.Load("xdat_fields.json");
            Assert.AreEqual(64, g.Count);
            Assert.AreEqual(g.Count, L2XdatFields.All.Length);
            foreach (var f in g)
            {
                var kind = Kinds.First(k => k.golden == (string)f["class"]).kind;
                Assert.IsTrue(L2XdatFields.All.Contains((kind, (string)f["unk"], (string)f["xml"])), $"{kind} {f["unk"]} -> {f["xml"]}");
            }
            Assert.AreEqual("unk109", L2XdatFields.Unk("Window", "savePosition"));
            Assert.AreEqual("unk110", L2XdatFields.Unk("Window", "saveSize"));
            Assert.AreEqual("unk111", L2XdatFields.Unk("Window", "title"));
        }

        [Test]
        public void TituloEMoldura_PelosCamposCertos()
        {
            var ui = Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "ui");
            if (!File.Exists(Path.Combine(ui, "layout.json"))) Assert.Ignore("sem a copia local de /ui");
            L2WndUtil.Use(JObject.Parse(File.ReadAllText(Path.Combine(ui, "layout.json"))), JObject.Parse(File.ReadAllText(Path.Combine(ui, "textures.json"))));
            var inv = L2WndUtil.WindowDef("InventoryWnd");
            Assert.AreEqual(138, (int)inv.WndN("title")); // "Inventory"
            Assert.AreEqual(195, (int)inv.WndN("Iconable.TooltipIdx")); // "Inventory (Alt+V)": dica, nao titulo
            Assert.AreEqual(1, inv.WndN("frame"));
            Assert.AreEqual(3, inv.WndN("Frame.direction"));
            var menu = L2WndUtil.WindowDef("MenuWnd");
            Assert.AreEqual(1, menu.WndN("frame"));
            Assert.AreEqual(1, menu.WndN("Frame.direction")); // moldura do lado esquerdo, sem barra de titulo
            var root = new GameObject("teste", typeof(RectTransform));
            try
            {
                var layer = new L2Layer(root.transform);
                Assert.IsTrue(new L2Wnd("InventoryWnd", layer).Frame);
                Assert.IsFalse(new L2Wnd("MenuWnd", layer).Frame);
            }
            finally
            {
                Object.DestroyImmediate(root);
            }
        }
    }
}
