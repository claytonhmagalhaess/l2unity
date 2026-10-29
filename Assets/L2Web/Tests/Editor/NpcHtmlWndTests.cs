// Janela de HTML do NPC (nwindow/00011.c 0x1013fd6e: SetRect(0, H/2 - 252, 310, 401), Npc1_back, titulo sysstring 444;
// NCNPCHtmlViewer::OnCreate: viewer em (7, 30) (W - 14) x (H - 37); AnalyzeHtml: <title> troca o titulo) e os botoes do HTML
// (NCHtmlTagInfo::LoadHtml 0x31: fore normal / back pressionado).
using L2Web.UI;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class NpcHtmlWndTests
    {
        [OneTimeSetUp]
        public void CarregaOLayout()
        {
            var ui = System.IO.Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "ui");
            if (!System.IO.File.Exists(System.IO.Path.Combine(ui, "layout.json"))) Assert.Ignore("sem a copia local de /ui");
            L2WndUtil.Use(Newtonsoft.Json.Linq.JObject.Parse(System.IO.File.ReadAllText(System.IO.Path.Combine(ui, "layout.json"))),
                Newtonsoft.Json.Linq.JObject.Parse(System.IO.File.ReadAllText(System.IO.Path.Combine(ui, "textures.json"))));
        }

        [Test]
        public void Definicao_GeometriaDoConsole()
        {
            var d = NpcHtmlWnd.BuildDef("NpcHtmlWnd", NpcHtmlWnd.Width, NpcHtmlWnd.Height, NpcHtmlWnd.Back);
            Assert.AreEqual(310, d.Size[0]);
            Assert.AreEqual(401, d.Size[1]);
            Assert.AreEqual("L2UI_ch3.NpcWnd.Npc1_back", d.S("unk101"));
            // moldura com titulo (frame = 1, Frame.direction = Top), como o HelpHtmlWnd
            Assert.AreEqual(1, d.WndN("frame"));
            Assert.AreEqual(3, d.WndN("Frame.direction"));
            // ancora CENTER_LEFT: centro em H/2 + y -> topo em H/2 + y - h/2 = H/2 - 252
            var a = d.Anchor;
            Assert.AreEqual("CENTER_LEFT", a.Parent);
            Assert.AreEqual(0, a.X);
            Assert.AreEqual(-252f, a.Y - 401 / 2f, 0.001f);
            var v = d.Children.Find(c => c.Name == "HtmlViewer");
            Assert.IsNotNull(v);
            Assert.AreEqual("HtmlCtrl", v.Type);
            Assert.AreEqual(310 - 14, v.Size[0]);
            Assert.AreEqual(401 - 37, v.Size[1]);
            Assert.AreEqual(7, v.Anchor.X);
            Assert.AreEqual(30, v.Anchor.Y);
        }

        [Test]
        public void Titulo_TitleNomeOuSysstring()
        {
            Assert.AreEqual("Gatekeeper", NpcHtmlWnd.TitleFor("Gatekeeper", "Ruby", "Mensagem"));
            Assert.AreEqual("Ruby", NpcHtmlWnd.TitleFor("", "Ruby", "Mensagem"));
            Assert.AreEqual("Mensagem", NpcHtmlWnd.TitleFor(null, null, "Mensagem"));
            Assert.AreEqual("", NpcHtmlWnd.TitleFor(null, null, null));
        }

        [Test]
        public void Botao_ForeNormalBackPressionado()
        {
            var (n, p, o) = L2Html.ButtonSkin("L2UI_ch3.btn1_normal", "L2UI_ch3.btn1_normalOn");
            Assert.AreEqual("L2UI_ch3.btn1_normal", n);
            Assert.AreEqual("L2UI_ch3.btn1_normalOn", p);
            Assert.AreEqual("L2UI_ch3.btn1_normal", o);
            // textura que o cliente nao tem (servidor privado): botao generico
            var (n2, _, _) = L2Html.ButtonSkin("sek.cbui94", "sek.cbui92");
            Assert.AreEqual("L2UI_ch3.button.btn1_normal", n2);
            Assert.AreEqual(9, L2Html.BrHeight);
        }
    }
}
