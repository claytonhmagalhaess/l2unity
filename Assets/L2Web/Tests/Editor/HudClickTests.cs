// #0035 (cliques do HUD, 02 §3.1 da #0024): faixa de clique da StatusWnd (StatusWnd.uc:47-56), dica "Text" do xdat pelo
// popupValue (NCWnd::OnPostPaint nw:0x1005da50; MenuWnd 434/195/925/193) e o botao de expandir da moldura do alvo
// (NCFrameCtrl::CreateExpandBtn / OnExpandBtnClick, Frame.expandbutton/expandOrgHeight/expandExpHeight = 1/46/76).
using System.Collections.Generic;
using System.IO;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class HudClickTests
    {
        readonly List<GameObject> made = new();

        [OneTimeSetUp]
        public void CarregaOLayout()
        {
            var ui = Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "ui");
            if (!File.Exists(Path.Combine(ui, "layout.json"))) Assert.Ignore("sem a copia local de /ui");
            L2WndUtil.Use(JObject.Parse(File.ReadAllText(Path.Combine(ui, "layout.json"))), JObject.Parse(File.ReadAllText(Path.Combine(ui, "textures.json"))));
            var texts = Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "texts.json");
            if (File.Exists(texts)) GameData.LoadTextsFromFile(texts);
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
            var root = new GameObject("teste hud", typeof(RectTransform));
            made.Add(root);
            return new L2Layer(root.transform);
        }

        [TestCase(13f, false)]
        [TestCase(14f, true)]
        [TestCase(165f, true)]
        [TestCase(166f, false)]
        public void StatusWnd_FaixaDoClique(float x, bool hit) => Assert.AreEqual(hit, GameUi.StatusHit(x, 176));

        [Test]
        public void MenuWnd_DicasDoPopupValue()
        {
            var w = new L2Wnd("MenuWnd", Layer());
            foreach (var (btn, id) in new[] { ("BtnCharInfo", 434), ("BtnInventory", 195), ("BtnMap", 925), ("BtnSystemMenu", 193) })
            {
                Assert.AreEqual("Text", w.Ctrl(btn).S("popupType"));
                Assert.AreEqual(id, (int)w.Ctrl(btn).N("popupValue"));
                var tip = w.Get(btn).GetComponent<UiTooltip>();
                var s = GameData.SysString(id, "");
                if (string.IsNullOrEmpty(s)) continue;
                Assert.IsNotNull(tip, btn);
                Assert.AreEqual(s, tip.Text);
            }
        }

        [Test]
        public void TargetStatusWnd_BotaoDeExpandir()
        {
            var w = new L2Wnd("TargetStatusWnd", Layer());
            Assert.AreEqual(1f, w.Def.WndN("Frame.expandbutton"));
            Assert.AreEqual((46f, 76f), (w.Def.WndN("Frame.expandOrgHeight"), w.Def.WndN("Frame.expandExpHeight")));
            var btn = w.El.GetComponentsInChildren<UiTexButton>(true);
            UiTexButton expand = null;
            foreach (var b in btn)
                if (b.transform.name.EndsWith("expand")) expand = b;
            Assert.IsNotNull(expand, "botao na moldura lateral");
            var rt = (RectTransform)expand.transform;
            Assert.AreEqual((1f, -6f, 11f, 13f), (rt.anchoredPosition.x, rt.anchoredPosition.y, rt.sizeDelta.x, rt.sizeDelta.y));
            var seen = new List<bool>();
            w.OnFrameExpand = seen.Add;
            expand.OnClick();
            Assert.IsTrue(w.Expanded);
            Assert.AreEqual(76f, w.Size[1]);
            expand = null;
            foreach (var b in w.El.GetComponentsInChildren<UiTexButton>(true))
                if (b.transform.name.EndsWith("expand")) expand = b;
            expand.OnClick();
            Assert.IsFalse(w.Expanded);
            Assert.AreEqual(46f, w.Size[1]);
            CollectionAssert.AreEqual(new[] { true, false }, seen);
        }
    }
}
