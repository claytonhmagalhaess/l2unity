// G11 da matriz (Docs/validacao.md): MessengerWnd nativo. A janela, o NCFrameCtrl e o NCTabControl vem do golden
// (89 MessengerWnd, Golden/native_layout.json, via NativeLayoutTests); o resto do MessengerWnd::OnCreate (nwindow
// FUN_100bd480) e do NCTabControl::AddTab (FUN_10050440) foi conferido no assembly do NWindow.dll:
// - 0x100bd581 / 0x100bd601: MsnWnd (+0x1cc) e L2FriendWnd (+0x1d0) com SetRect(0, 0x30, 0x100, 0x161, 0, 0, 3);
// - 0x100bd6d6 / 0x100bd711: AddTab(sysstring 996 / 997, pagina, 0x72, 0x17, msn_tab2, msn_tab1, 1, -1);
// - 0x10050765: o cursor do NCTabControl (+0x2d8) anda largura + 7o argumento (1), entao a 2a aba fica em x = 115;
// - 0x10050749: a 1a aba e a pagina ativa (+0x2ec), a MsnWnd;
// - FUN_100b5fc0 (Draw): msn_back em (0, 0x14) 0x114 x 0x1c.
using System.Collections.Generic;
using L2Web.UI;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class MessengerWndTests
    {
        readonly List<GameObject> made = new();

        [TearDown]
        public void Limpa()
        {
            foreach (var g in made) Object.DestroyImmediate(g);
            made.Clear();
        }

        static (int, int, int, int) R(NRect r, float pw = 256, float ph = 401) => r.Resolve(pw, ph);

        static (float, float, float, float) R(RectTransform rt) =>
            (rt.anchoredPosition.x, -rt.anchoredPosition.y, rt.sizeDelta.x, rt.sizeDelta.y);

        [Test]
        public void Layout_IgualAoOnCreate()
        {
            var g = Golden.Load("native_layout.json")["1024x768"]["MessengerWnd"];
            Assert.AreEqual((string)g[3]["id"], "0x" + NativeLayout.MessengerTabCtrlId.ToString("x"));
            Assert.AreEqual(0xa03, NativeLayout.MessengerFrameId);
            // paginas: as duas no mesmo lugar, abaixo das abas; 48 + 353 = 401
            Assert.AreEqual((0, 48, 256, 353), R(NativeLayout.MessengerPage));
            // abas 114x23 relativas ao NCTabControl, 1 px entre elas
            Assert.AreEqual((0, 0, 114, 23), R(NativeLayout.MessengerTab(0), 224, 41));
            Assert.AreEqual((115, 0, 114, 23), R(NativeLayout.MessengerTab(1), 224, 41));
            CollectionAssert.AreEqual(new[] { 996, 997 }, NativeLayout.MessengerTabLabel);
            Assert.AreEqual("L2UI_CH3.Msn.msn_tab2", NativeLayout.MessengerTabTex);
            Assert.AreEqual("L2UI_CH3.Msn.msn_tab1", NativeLayout.MessengerTabSelTex);
            Assert.AreEqual((0, 20, 276, 28), R(NativeLayout.MessengerBack));
            Assert.AreEqual("L2UI_CH3.Msn.msn_back", NativeLayout.MessengerBackTex);
        }

        [Test]
        public void Janela_MontadaComoNoNWindow()
        {
            var ui = System.IO.Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "ui");
            if (!System.IO.File.Exists(System.IO.Path.Combine(ui, "layout.json"))) Assert.Ignore("sem a copia local de /ui");
            L2WndUtil.Use(Newtonsoft.Json.Linq.JObject.Parse(System.IO.File.ReadAllText(System.IO.Path.Combine(ui, "layout.json"))),
                Newtonsoft.Json.Linq.JObject.Parse(System.IO.File.ReadAllText(System.IO.Path.Combine(ui, "textures.json"))));
            var root = new GameObject("teste messenger", typeof(RectTransform));
            made.Add(root);
            var v = new MessengerView(new L2Layer(root.transform));
            var w = v.Wnd;
            Assert.AreEqual(new[] { 256f, 401f }, w.Size);
            Assert.AreEqual(384f, w.Def.Anchor.X);
            Assert.AreEqual(180f, w.Def.Anchor.Y);
            Assert.IsTrue(w.Frame, "NCFrameCtrl 0xa03 com titulo e fechar");
            Assert.AreEqual((0f, 0f, 256f, 20f), R((RectTransform)w.El.Find("l2frame")));
            Assert.AreEqual((0f, 20f, 256f, 28f), R((RectTransform)w.El.Find("msn_back")));
            Assert.AreEqual((12f, 25f, 224f, 41f), R(v.TabCtrl));
            Assert.AreEqual((0f, 0f, 114f, 23f), R((RectTransform)v.Tabs[0].transform));
            Assert.AreEqual((115f, 0f, 114f, 23f), R((RectTransform)v.Tabs[1].transform));
            Assert.AreEqual((0f, 48f, 256f, 353f), R(v.MsnPage));
            Assert.AreEqual((0f, 48f, 256f, 353f), R(v.FriendPage));
            // a 1a aba (MSN Messenger) comeca escolhida
            Assert.AreEqual(0, v.Tab);
            Assert.IsTrue(v.MsnPage.gameObject.activeSelf);
            Assert.IsFalse(v.FriendPage.gameObject.activeSelf);
            v.SelectTab(1);
            Assert.IsFalse(v.MsnPage.gameObject.activeSelf);
            Assert.IsTrue(v.FriendPage.gameObject.activeSelf);
            // a lista de amigos: L2FriendTreeCtrl (8, 45) 240x270 dentro da L2FriendWnd
            Assert.AreEqual((8f, 45f, 240f, 270f), R((RectTransform)v.FriendPage.Find("L2FriendTreeCtrl")));
        }
    }
}
