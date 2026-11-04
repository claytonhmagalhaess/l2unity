// HTML do servidor (#0055): parser, tabela de suporte, layout (HtmlLayout) e montagem em uGUI (L2Html.Render). O layout
// usa uma medida fixa (6 px por caractere, linhas de 15) para os numeros nao dependerem da fonte; a montagem usa a fonte
// do jogo. O corpus do aCis (C:\Workspace-java\aCis_gameserver\data\html, ou a variavel L2_ACIS_HTML) e opcional; as
// amostras de Tests/Data/html (buffer, gatekeeper, board, quest, admin) estao no repo.
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using L2Web.UI;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.Tests
{
    public class L2HtmlTests
    {
        sealed class Fixed : IHtmlMeasure
        {
            public float Width(string s) => s.Length * 6;
            public float LineHeight => 15;
        }

        static readonly IHtmlMeasure M = new Fixed();

        static string Sample(string name) => File.ReadAllText(Path.Combine(Application.dataPath, "L2Web/Tests/Data/html", name));

        static HtmlLayoutResult Lay(string html, float w = 280) => HtmlLayout.Run(html, w, M);

        static HtmlBox Box(HtmlLayoutResult r, HtmlBoxKind k, string text) => r.Boxes.First(b => b.Kind == k && (b.Text == text || b.Tex == text || b.Fore == text));

        // ------------------------------------------------------------ corpus
        static string AcisDir()
        {
            var env = Environment.GetEnvironmentVariable("L2_ACIS_HTML");
            if (!string.IsNullOrEmpty(env)) return env;
            return @"C:\Workspace-java\aCis_gameserver\data\html";
        }

        [Test]
        public void Corpus_aCis_TodasAsTagsEAtributosConhecidos()
        {
            var dir = AcisDir();
            if (!Directory.Exists(dir)) Assert.Ignore("sem o data/html do aCis em " + dir);
            var unknown = new Dictionary<string, string>();
            var files = 0;
            foreach (var f in Directory.EnumerateFiles(dir, "*.htm*", SearchOption.AllDirectories))
            {
                files++;
                var doc = HtmlDoc.Parse(File.ReadAllText(f));
                foreach (var u in HtmlDoc.Unknown(doc))
                    if (!unknown.ContainsKey(u))
                        unknown[u] = f.Substring(dir.Length);
                // o layout tambem nao pode falhar
                var r = HtmlLayout.Run(doc, 280, M);
                Assert.GreaterOrEqual(r.Height, 0, f);
            }
            Assert.Greater(files, 1000);
            Assert.IsEmpty(unknown, string.Join("\n", unknown.Select(kv => kv.Key + " em " + kv.Value)));
        }

        [TestCase("buffer_buff.htm")]
        [TestCase("buffer_10002.htm")]
        [TestCase("gatekeeper_30006.htm")]
        [TestCase("board_index.htm")]
        [TestCase("quest_q241_30692-01.htm")]
        [TestCase("admin_announce.htm")]
        [TestCase("default_30995-2.htm")]
        public void Amostras_SemTagDesconhecida(string name)
        {
            var doc = HtmlDoc.Parse(Sample(name));
            CollectionAssert.IsEmpty(HtmlDoc.Unknown(doc));
            Assert.Greater(HtmlLayout.Run(doc, 280, M).Boxes.Count, 0);
        }

        [Test]
        public void Suporte_TagDesconhecidaEAtributoDesconhecido()
        {
            CollectionAssert.AreEqual(new[] { "marquee", "font@size" }, HtmlDoc.Unknown(HtmlDoc.Parse("<marquee>x</marquee><font size=3 color=FF0000>y</font>")));
            // %marcador% do servidor nao conta
            CollectionAssert.IsEmpty(HtmlDoc.Unknown(HtmlDoc.Parse("<button %button% width=75>")));
        }

        // ------------------------------------------------------------ parser
        [Test]
        public void Parser_AtributosSemAspasEntidadesEBarraFinal()
        {
            var doc = HtmlDoc.Parse("<img height=7 /><td width=140 valign=top>&lt;a&gt; &amp; &nbsp;x</td>");
            var img = HtmlDoc.Find(doc, "img");
            Assert.AreEqual("7", img.Attr("height"));
            var td = HtmlDoc.Find(doc, "td");
            Assert.AreEqual("140", td.Attr("width"));
            Assert.AreEqual("top", td.Attr("valign"));
            Assert.AreEqual("<a> & \u00a0x", HtmlDoc.InnerText(td));
        }

        [Test]
        public void Cores_HexComESemCerquilhaENome()
        {
            Assert.AreEqual(0xFF808080u, HtmlDoc.Color("808080"));
            Assert.AreEqual(0xFFFF0000u, HtmlDoc.Color("#FF0000"));
            Assert.AreEqual(HtmlDoc.NamedColors["level"], HtmlDoc.Color("LEVEL"));
            Assert.IsNull(HtmlDoc.Color("nada"));
        }

        // ------------------------------------------------------------ layout
        [Test]
        public void Texto_QuebraNaLarguraEBr()
        {
            // 6 px por caractere: "aaaa bbbb" = 54 px; numa largura de 30 cada palavra vai para uma linha
            var r = Lay("aaaa bbbb", 30);
            var b = r.Boxes.Where(x => x.Kind == HtmlBoxKind.Text).ToList();
            Assert.AreEqual(2, b.Count);
            Assert.AreEqual(0, b[0].Y);
            Assert.AreEqual(15, b[1].Y);
            // palavras na mesma linha viram um trecho so
            var one = Lay("aaaa   bbbb\n cc");
            Assert.AreEqual("aaaa bbbb cc", one.Boxes.Single().Text);
            // <br> em linha vazia ocupa BrHeight; <br1> nao ocupa nada
            var br = Lay("a<br><br>b");
            Assert.AreEqual(15 + HtmlLayout.BrHeight, Box(br, HtmlBoxKind.Text, "b").Y);
            var br1 = Lay("a<br1><br1>b");
            Assert.AreEqual(15, Box(br1, HtmlBoxKind.Text, "b").Y);
        }

        [Test]
        public void Fonte_CorECentro()
        {
            var r = Lay("<center>Welcome to <font color=\"FF0000\">Buffer</font></center>", 280);
            var w = Box(r, HtmlBoxKind.Text, "Welcome to");
            var b = Box(r, HtmlBoxKind.Text, "Buffer");
            Assert.AreEqual(0xFFFF0000u, b.Color);
            Assert.AreEqual(HtmlLayout.TextColor, w.Color);
            // linha inteira = "Welcome to Buffer" (17 caracteres = 102 px) centrada em 280
            Assert.AreEqual(Math.Floor((280 - 102) / 2f), w.X);
            Assert.AreEqual(w.X + 66, b.X);
        }

        [Test]
        public void Link_AcaoCorEPedacosComOMesmoId()
        {
            var r = Lay("<a action=\"bypass -h npc_1_Chat 1\" msg=\"811;Giran\">aaaa bbbb</a>", 30);
            var l = r.Boxes.Where(x => x.Kind == HtmlBoxKind.Link).ToList();
            Assert.AreEqual(2, l.Count);
            Assert.AreEqual(l[0].Id, l[1].Id);
            Assert.AreEqual("bypass -h npc_1_Chat 1", l[1].Action);
            Assert.AreEqual("811;Giran", l[0].Msg);
            Assert.AreEqual(HtmlLayout.LinkColor, l[0].Color);
        }

        [Test]
        public void Buffer_IconeNoBotaoNomeEDescricaoAoLado()
        {
            var r = Lay(Sample("buffer_buff.htm"), 280);
            Assert.AreEqual("Chat", r.Title);
            var btn = Box(r, HtmlBoxKind.Button, "icon.skill1040");
            Assert.AreEqual("icon.skill0000", btn.Back);
            Assert.AreEqual(32, btn.W);
            Assert.AreEqual(32, btn.H);
            Assert.AreEqual(0, btn.X);
            var name = Box(r, HtmlBoxKind.Text, "Shield");
            var desc = Box(r, HtmlBoxKind.Text, "Increases P. Def");
            // td width=40: o nome comeca na segunda coluna, a descricao embaixo do nome em cinza
            Assert.AreEqual(40, name.X);
            Assert.AreEqual(40, desc.X);
            Assert.AreEqual(name.Y + 15, desc.Y);
            Assert.AreEqual(0xFF808080u, desc.Color);
            // table bgcolor=000000: fundo preto atras da linha do Shield, e nao atras da do Greater shield
            var fills = r.Boxes.Where(x => x.Kind == HtmlBoxKind.Fill && x.Color == 0xFF000000).ToList();
            Assert.IsTrue(fills.Any(f => f.Y <= btn.Y && f.Y + f.H >= btn.Y + btn.H));
            var g = Box(r, HtmlBoxKind.Button, "icon.skill1389");
            Assert.IsFalse(fills.Any(f => f.Y <= g.Y && f.Y + f.H >= g.Y + g.H));
            // a linha L2UI.SquareGray do topo e uma imagem 300 x 1
            var line = Box(r, HtmlBoxKind.Image, "L2UI.SquareGray");
            Assert.AreEqual(300, line.W);
            Assert.AreEqual(1, line.H);
        }

        [Test]
        public void Board_TabelasAninhadasComLargurasFixas()
        {
            var r = Lay(Sample("board_index.htm"), 633);
            // coluna do menu: td width=140, botoes de 135 centrados na celula
            var home = Box(r, HtmlBoxKind.Button, "L2UI_ch3.BigButton3_down");
            Assert.AreEqual("Home", home.Text);
            Assert.AreEqual(135, home.W);
            var settings = r.Boxes.First(b => b.Kind == HtmlBoxKind.Button && b.Text == "Settings");
            Assert.AreEqual(home.X, settings.X);
            Assert.Greater(settings.Y, home.Y);
            // segunda coluna (td width=465) comeca depois da primeira
            var info = Box(r, HtmlBoxKind.Text, "Information");
            Assert.Greater(info.X, home.X + 135);
            Assert.AreEqual(HtmlDoc.NamedColors["level"], info.Color);
            // os fundos pretos das tabelas internas existem
            Assert.Greater(r.Boxes.Count(b => b.Kind == HtmlBoxKind.Fill && b.Color == 0xFF000000), 5);
        }

        [Test]
        public void Tabela_ColunasSemWidthDividemOResto()
        {
            var r = Lay("<table width=200><tr><td width=50>a</td><td>b</td><td>c</td></tr></table>", 280);
            Assert.AreEqual(0, Box(r, HtmlBoxKind.Text, "a").X);
            Assert.AreEqual(50, Box(r, HtmlBoxKind.Text, "b").X);
            Assert.AreEqual(125, Box(r, HtmlBoxKind.Text, "c").X);
        }

        [Test]
        public void Campos_EditComboEVariaveis()
        {
            var r = Lay("<edit var=\"msg\" width=120 height=15><combobox var=crit list=\"a;b;c\" width=60><button value=Go action=\"bypass -h admin_x $crit $msg\">", 400);
            var e = r.Boxes.First(b => b.Kind == HtmlBoxKind.Edit);
            Assert.AreEqual("msg", e.Var);
            Assert.AreEqual(120, e.W);
            var c = r.Boxes.First(b => b.Kind == HtmlBoxKind.Combo);
            CollectionAssert.AreEqual(new[] { "a", "b", "c" }, c.Options);
            var vars = new Dictionary<string, Func<string>> { ["crit"] = () => "b", ["msg"] = () => "oi" };
            Assert.AreEqual("bypass -h admin_x b oi", L2Html.Substitute(r.Boxes.First(b => b.Kind == HtmlBoxKind.Button).Action, vars));
        }

        [Test]
        public void Acao_BypassLinkEConfirmacao()
        {
            string bp = null, ln = null;
            var act = new HtmlActions { Bypass = s => bp = s, Link = s => ln = s };
            L2Html.RunAction("bypass -h npc_5_Chat 1", null, act);
            Assert.AreEqual("npc_5_Chat 1", bp);
            L2Html.RunAction("bypass _bbshome", null, act);
            Assert.AreEqual("_bbshome", bp);
            L2Html.RunAction("link help/1.htm", null, act);
            Assert.AreEqual("help/1.htm", ln);
            Assert.AreEqual("so texto", L2Html.ConfirmText("so texto"));
            Assert.IsNull(L2Html.ConfirmText(null));
        }

        [Test]
        public void Textura_IconeEInterface()
        {
            Assert.AreEqual("/icons/skill1040.png", L2Html.TexUrl("icon.skill1040"));
            Assert.AreEqual("/icons/skill1040.png", L2Html.TexUrl("Icon.Skill1040"));
            Assert.IsNull(L2Html.TexUrl(null));
        }

        [Test]
        public void Tutorial_AlturaDaJanelaPeloHtml()
        {
            // TutorialViewerWnd.uc: clamp(FrameMaxHeight, 256, 672) + 32 + 8
            Assert.AreEqual(256 + 40, TutorialViewerView.WindowHeight(10));
            Assert.AreEqual(300 + 40, TutorialViewerView.WindowHeight(300));
            Assert.AreEqual(672 + 40, TutorialViewerView.WindowHeight(2000));
            var ev = PacketEvents.TutorialShowHtml("<html><body>oi <a action=\"bypass -h x\">y</a></body></html>");
            string html = null;
            Assert.AreEqual(Ev.EV_TutorialViewerWndShow, ev[0].Id);
            Assert.IsTrue(L2Param.ParseString(ev[0].Param, "HtmlString", ref html));
            StringAssert.Contains("bypass -h x", html);
            Assert.AreEqual(Ev.EV_TutorialViewerWndHide, PacketEvents.TutorialCloseHtml()[0].Id);
        }

        // ------------------------------------------------------------ montagem em uGUI
        [Test]
        public void Render_BufferMontaBotoesComIconeETextos()
        {
            var go = new GameObject("teste-html", typeof(RectTransform));
            try
            {
                var r = L2Html.Render(Sample("buffer_buff.htm"), new HtmlActions(), go.transform, 280);
                Assert.AreEqual("Chat", r.Title);
                var le = r.Body.GetComponent<LayoutElement>();
                Assert.AreEqual(r.Layout.Height, le.preferredHeight);
                Assert.AreEqual(280, le.preferredWidth);
                var buttons = r.Body.GetComponentsInChildren<UiTexButton>(true).Where(b => b.name == "button").ToList();
                Assert.AreEqual(r.Layout.Boxes.Count(b => b.Kind == HtmlBoxKind.Button), buttons.Count);
                var texts = r.Body.GetComponentsInChildren<Text>(true).Select(t => t.text).ToList();
                CollectionAssert.Contains(texts, "Shield");
                CollectionAssert.Contains(texts, "Back");
                // a caixa uGUI fica onde o layout mandou (y para baixo = anchoredPosition.y negativo)
                var first = (RectTransform)buttons[0].transform;
                var fb = r.Layout.Boxes.First(b => b.Kind == HtmlBoxKind.Button);
                Assert.AreEqual(new Vector2(fb.X, -fb.Y), first.anchoredPosition);
            }
            finally
            {
                UnityEngine.Object.DestroyImmediate(go);
            }
        }
    }
}
