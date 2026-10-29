// Faixa de redimensionamento do ChatWnd (xdat ResizeFrame: direction Top, (0,0) 24x10, maxIncrease 300; NCResizeFrame no
// NWindow, ver L2Wnd.BuildResizeFrame) e a SystemMsgWnd presa ao ChatWnd (anchor TOP_LEFT -> ChatWnd.BOTTOM_LEFT (0,-5)).
using System.Collections.Generic;
using L2Web.UI;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class ChatResizeTests
    {
        readonly List<GameObject> made = new();

        [OneTimeSetUp]
        public void CarregaOLayout()
        {
            var ui = System.IO.Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "ui");
            if (!System.IO.File.Exists(System.IO.Path.Combine(ui, "layout.json"))) Assert.Ignore("sem a copia local de /ui");
            L2WndUtil.Use(Newtonsoft.Json.Linq.JObject.Parse(System.IO.File.ReadAllText(System.IO.Path.Combine(ui, "layout.json"))),
                Newtonsoft.Json.Linq.JObject.Parse(System.IO.File.ReadAllText(System.IO.Path.Combine(ui, "textures.json"))));
        }

        [TearDown]
        public void Limpa()
        {
            foreach (var g in made) Object.DestroyImmediate(g);
            made.Clear();
        }

        [Test]
        public void ChatWnd_CresceParaCimaAteMaxIncrease()
        {
            var root = new GameObject("teste chat", typeof(RectTransform));
            made.Add(root);
            var layer = new L2Layer(root.transform);
            var w = new L2Wnd("ChatWnd", layer);
            var rf = w.ResizeFrame;
            Assert.IsNotNull(rf, "ChatWnd tem resizeframe=1 no xdat");
            Assert.AreEqual(3, rf.Direction);
            Assert.AreEqual((0f, 0f, 24f, 10f), (rf.X, rf.Y, rf.W, rf.H));
            Assert.AreEqual(300f, rf.MaxIncrease);
            Assert.AreEqual(187f, w.Size[1]);
            Assert.AreEqual(141f, w.RectOf("NormalChat").H); // 100% - 46
            // +100 px: as listas crescem, as abas continuam no fundo (BL -23)
            Assert.AreEqual(100f, w.ResizeBy(100));
            Assert.AreEqual(287f, w.Size[1]);
            Assert.AreEqual(241f, w.RectOf("NormalChat").H);
            // ChatTabCtrl BL->BL(23,-23) 23 alto: Y = H - 46; ChatFilterBtn BL->BL(5,-51) 15 alto: Y = H - 66 (no xdat 141 e 121)
            Assert.AreEqual(287f - 46f, w.RectOf("ChatTabCtrl").Y);
            Assert.AreEqual(287f - 66f, w.RectOf("ChatFilterBtn").Y);
            // limite: 187 + 300 = 487; minimo: o tamanho do xdat
            w.ResizeBy(1000);
            Assert.AreEqual(487f, w.Size[1]);
            w.ResizeBy(-1000);
            Assert.AreEqual(187f, w.Size[1]);
            Assert.AreEqual(141f, w.RectOf("NormalChat").H);
            // SystemMsgWnd ancorada no chat (xdat): sem Moved, acompanha o Place do chat
            var s = new L2Wnd("SystemMsgWnd", layer, new WndOpts { Movable = false });
            Assert.AreEqual("ChatWnd", s.Def.Anchor.Ctrl);
            Assert.AreEqual(-5f, s.Def.Anchor.Y);
        }
    }
}
