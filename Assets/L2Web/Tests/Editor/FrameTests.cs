// #0041 (moldura): botao de minimizar do NCFrameCtrl so nas janelas com iconable = 1 (no Interlude, so a MainWnd), 25 px da
// borda direita; NCWnd::MinimizeWindow (nw:0x10059860) / UIAPI_WINDOW.Iconize: a janela some e o icone aparece com a dica.
using System.Collections.Generic;
using System.IO;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class FrameTests
    {
        readonly List<GameObject> made = new();

        [OneTimeSetUp]
        public void CarregaOLayout()
        {
            var ui = Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "ui");
            if (!File.Exists(Path.Combine(ui, "layout.json"))) Assert.Ignore("sem a copia local de /ui");
            L2WndUtil.Use(JObject.Parse(File.ReadAllText(Path.Combine(ui, "layout.json"))), JObject.Parse(File.ReadAllText(Path.Combine(ui, "textures.json"))));
        }

        [SetUp]
        public void SemWindowsInfo() => L2WindowsInfo.Load(Path.Combine(Path.GetTempPath(), "l2web-sem-windowsinfo.ini"));

        [TearDown]
        public void Limpa()
        {
            foreach (var g in made) Object.DestroyImmediate(g);
            made.Clear();
            L2WindowsInfo.Load();
        }

        L2Layer Layer()
        {
            var root = new GameObject("teste moldura", typeof(RectTransform));
            made.Add(root);
            return new L2Layer(root.transform);
        }

        static RectTransform Find(Transform t, string name)
        {
            foreach (var r in t.GetComponentsInChildren<RectTransform>(true))
                if (r.name == name)
                    return r;
            return null;
        }

        [Test]
        public void SoAMainWndTemMinimizar()
        {
            var layer = Layer();
            var main = new L2Wnd("MainWnd", layer);
            Assert.AreEqual(1f, main.Def.WndN("iconable"));
            var mini = Find(main.El, "nodrag l2mini");
            Assert.IsNotNull(mini);
            Assert.AreEqual((main.Size[0] - 41, -3f, 16f, 16f), (mini.anchoredPosition.x, mini.anchoredPosition.y, mini.sizeDelta.x, mini.sizeDelta.y));
            var inv = new L2Wnd("InventoryWnd", layer);
            Assert.IsNull(Find(inv.El, "nodrag l2mini"), "iconable nao definido no xdat (-1): sem o botao");
        }

        [Test]
        public void Minimizar_ChamaOScriptEIconize()
        {
            var layer = Layer();
            var main = new L2Wnd("MainWnd", layer);
            var called = 0;
            main.OnMinimize = () =>
            {
                called++;
                main.Iconize("L2UI_CH3.TABBUTTON.MainWndTabIcon2", 196);
            };
            Find(main.El, "nodrag l2mini").GetComponent<UiTexButton>().OnClick();
            Assert.AreEqual(1, called);
            Assert.IsTrue(main.Minimized);
            Assert.IsFalse(main.Visible);
            var icon = Find(layer.El, "L2Icon MainWnd");
            Assert.IsNotNull(icon);
            Assert.AreEqual((32f, 32f), (icon.sizeDelta.x, icon.sizeDelta.y));
            Assert.IsNotNull(icon.GetComponent<UiTexButton>(), "clique no icone devolve a janela");
        }
    }
}
