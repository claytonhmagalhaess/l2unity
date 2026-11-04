// HTML do servidor (#0055): parser (ListParser do NCHtmlViewer), tabela de suporte, layout (Frame/Table::Align) e montagem
// em uGUI (L2Html.Render), pelo levantamento de Docs/html_suporte.md. O layout usa uma medida fixa (6 px por caractere,
// 'A' com 13 de altura: linhas de 19) para os numeros nao dependerem da fonte; a montagem usa a fonte do jogo. O corpus do
// aCis (C:\Workspace-java\aCis_gameserver\data\html, ou a variavel L2_ACIS_HTML) e opcional; as amostras de
// Tests/Data/html (buffer, gatekeeper, board, quest, admin) estao no repo.
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
            public float GlyphHeight => 13;
        }

        sealed class Names : IHtmlNames
        {
            public string Name(char p, int n) => p == '$' ? "sys" + n : p == '#' ? "item" + n : p == '@' ? "npc" + n : null;
        }

        static readonly IHtmlMeasure M = new Fixed();
        const float Line = 19;

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
                var r = HtmlLayout.Run(doc, 296, M);
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
            Assert.Greater(HtmlLayout.Run(doc, 296, M).Boxes.Count, 0);
        }

        [Test]
        public void Suporte_TagEAtributoDesconhecidos()
        {
            CollectionAssert.AreEqual(new[] { "marquee", "font@colour" }, HtmlDoc.Unknown(HtmlDoc.Parse("<marquee>x</marquee><font colour=3>y</font>")));
            // o que o cliente le e ignora nao conta: font size, td bgcolor, button msg, <p>, <b>
            CollectionAssert.IsEmpty(HtmlDoc.Unknown(HtmlDoc.Parse("<p><b><font size=3>y</font></b><table><tr><td bgcolor=000000><button msg=1></td></tr></table>")));
            // %marcador% do servidor nao conta
            CollectionAssert.IsEmpty(HtmlDoc.Unknown(HtmlDoc.Parse("<button %button% width=75>")));
        }

        // ------------------------------------------------------------ parser
        [Test]
        public void Parser_AtributosAspasEBarraFinal()
        {
            var doc = HtmlDoc.Parse("<img height=7 /><td width=140 valign=top value='a b'>x</td><button value=\"&lt;\">");
            Assert.AreEqual("7", HtmlDoc.Find(doc, "img").Attr("height"));
            var td = HtmlDoc.Find(doc, "td");
            Assert.AreEqual("140", td.Attr("width"));
            Assert.AreEqual("top", td.Attr("valign"));
            // aspas simples nao agrupam: o valor vai ate o espaco e leva a aspa
            Assert.AreEqual("'a", td.Attr("value"));
            // valores de atributo nao tem entidades
            Assert.AreEqual("&lt;", HtmlDoc.Find(doc, "button").Attr("value"));
        }

        [Test]
        public void Parser_TextoQuebrasEspacosEComentario()
        {
            // CR/LF somem (nao viram espaco); comeco e fim do trecho cortados; espacos de dentro ficam
            Assert.AreEqual("abcdef", HtmlDoc.InnerText(HtmlDoc.Parse("<html>\n  abc\ndef  </html>")));
            Assert.AreEqual("a   b", HtmlDoc.InnerText(HtmlDoc.Parse("<html>a   b</html>")));
            // junto de <font> o espaco fica
            var f = HtmlDoc.Parse("<html>Welcome to <font color=FF0000>Buffer</font></html>");
            Assert.AreEqual("Welcome to ", HtmlDoc.Find(f, "html").Children[0].Text);
            // tag desconhecida: o texto de dentro aparece; '<' sem letra e texto; comentario termina no primeiro '>'
            Assert.AreEqual("txt", HtmlDoc.InnerText(HtmlDoc.Find(HtmlDoc.Parse("<html><foo>txt</foo></html>"), "html")));
            Assert.AreEqual("a < b", HtmlDoc.InnerText(HtmlDoc.Find(HtmlDoc.Parse("<html>a < b</html>"), "html")));
            Assert.AreEqual("x", HtmlDoc.InnerText(HtmlDoc.Find(HtmlDoc.Parse("<html><!-- c -->x</html>"), "html")));
        }

        [Test]
        public void Entidades_FixasENomes()
        {
            Assert.AreEqual("<a> & ' \" x", HtmlDoc.Decode("&lt;a&gt;&amp; &apos; &quot; x"));
            Assert.AreEqual(" ", HtmlDoc.Decode("&nbsp;"));
            Assert.AreEqual(" ", HtmlDoc.Decode("&#160;"));
            // &$N; sysstring, &#N; item (nao caractere), &@N; NPC; sem nome = "-"; N invalido some ate o ';'
            var n = new Names();
            Assert.AreEqual("sys5 item57 npc30006", HtmlDoc.Decode("&$5; &#57; &@30006;", n));
            Assert.AreEqual("-", HtmlDoc.Decode("&%3;", n));
            Assert.AreEqual("a;b", HtmlDoc.Decode("a&$x;b", n));
            // com caixa: &LT; nao e entidade
            Assert.AreEqual("&LT;", HtmlDoc.Decode("&LT;"));
        }

        [Test]
        public void Cores_GetMatchedColor()
        {
            Assert.AreEqual(0xFF808080u, HtmlDoc.Color("808080"));
            Assert.AreEqual(HtmlDoc.Level, HtmlDoc.Color("LEVEL"));
            Assert.AreEqual(0xFFFFCC00u, HtmlDoc.Level);
            // wcstoul("0xff" + valor): para no '#' ou no nome
            Assert.AreEqual(0x000000FFu, HtmlDoc.Color("#FF0000"));
            Assert.AreEqual(0x000000FFu, HtmlDoc.Color("level"));
            Assert.AreEqual(0xFFFFFFFFu, HtmlDoc.Color("123456789"));
        }

        // ------------------------------------------------------------ layout
        [Test]
        public void SemHtml_NadaAparece()
        {
            Assert.AreEqual(0, Lay("texto <br> mais").Boxes.Count);
            Assert.AreEqual("Chat", Lay("<title>Chat</title>x").Title);
        }

        [Test]
        public void Texto_QuebraNaLarguraEBr()
        {
            // 6 px por caractere: "aaaa bbbb" = 54 px; numa largura de 30 cada palavra vai para uma linha de 19
            var b = Lay("<html>aaaa bbbb</html>", 30).Boxes;
            Assert.AreEqual(2, b.Count);
            Assert.AreEqual(0, b[0].Y);
            Assert.AreEqual(Line, b[1].Y);
            Assert.AreEqual(13, b[0].H);
            // trechos seguidos (com <font> entre eles) continuam na mesma linha
            var f = Lay("<html>ab<font color=FF0000>cd</font>ef</html>").Boxes;
            Assert.AreEqual(3, f.Count);
            Assert.IsTrue(f.All(x => x.Y == 0));
            Assert.AreEqual(12, f[1].X);
            Assert.AreEqual(24, f[2].X);
            // <br> = 9; <br1> = 0
            Assert.AreEqual(Line + 9 + 9, Box(Lay("<html>a<br><br>b</html>"), HtmlBoxKind.Text, "b").Y);
            Assert.AreEqual(Line, Box(Lay("<html>a<br1><br1>b</html>"), HtmlBoxKind.Text, "b").Y);
            // <p> e <b> nao fazem nada
            var p = Lay("<html>a<p>b</p><b>c</b></html>").Boxes;
            Assert.AreEqual(1, p.Count);
            Assert.AreEqual("abc", p[0].Text);
        }

        [Test]
        public void Unidades_CadaControleNaSuaLinha()
        {
            // gatekeeper: botoes seguidos ficam um embaixo do outro (h + 6)
            var r = Lay("<html><button value=A width=134 height=21><button value=B width=134 height=21>texto</html>", 296);
            var a = r.Boxes.First(x => x.Text == "A");
            var b = r.Boxes.First(x => x.Text == "B");
            Assert.AreEqual(0, a.X);
            Assert.AreEqual(0, b.X);
            Assert.AreEqual(a.Y + 27, b.Y);
            Assert.AreEqual(21, b.H);
            Assert.AreEqual(b.Y + 27, Box(r, HtmlBoxKind.Text, "texto").Y);
            // img sem width/height nao desenha, mas ocupa a altura (espacador do board)
            var i = Lay("<html><img height=7 /><img src=L2UI.SquareGray width=140 height=1>x</html>");
            var line = Box(i, HtmlBoxKind.Image, "L2UI.SquareGray");
            Assert.AreEqual(7, line.Y);
            Assert.AreEqual(8, Box(i, HtmlBoxKind.Text, "x").Y);
            // padroes: button 10 x 10, edit 50 x 15 (+ 6), combobox 30 x 21
            var d = Lay("<html><button><edit var=e><combobox var=c list=\"a;b;c\" sel=b></html>");
            var bt = d.Boxes.First(x => x.Kind == HtmlBoxKind.Button);
            Assert.AreEqual(new[] { 10f, 10f }, new[] { bt.W, bt.H });
            Assert.AreEqual("Default.BlackTexture", bt.Fore);
            Assert.AreEqual("Default.WhiteTexture", bt.Back);
            var e = d.Boxes.First(x => x.Kind == HtmlBoxKind.Edit);
            Assert.AreEqual(new[] { 50f, 21f, 16f }, new[] { e.W, e.H, e.Y });
            var c = d.Boxes.First(x => x.Kind == HtmlBoxKind.Combo);
            Assert.AreEqual(new[] { 30f, 21f }, new[] { c.W, c.H });
            Assert.AreEqual("b", c.Sel);
        }

        [Test]
        public void Centro_TextoEUnidades()
        {
            var r = Lay("<html><center>Welcome to <font color=FF0000>Buffer</font><br><button width=100 height=20></center></html>", 280);
            var w = Box(r, HtmlBoxKind.Text, "Welcome to ");
            var b = Box(r, HtmlBoxKind.Text, "Buffer");
            Assert.AreEqual(0xFFFF0000u, b.Color);
            Assert.AreEqual(HtmlLayout.TextColor, w.Color);
            // corrida "Welcome to Buffer" (17 caracteres = 102 px) centrada em 280
            Assert.AreEqual(Math.Floor((280 - 102) / 2f), w.X);
            Assert.AreEqual(w.X + 66, b.X);
            Assert.AreEqual(90, r.Boxes.First(x => x.Kind == HtmlBoxKind.Button).X);
        }

        [Test]
        public void Link_AcaoCorEPedacos()
        {
            var r = Lay("<html><a action=\"bypass -h npc_1_Chat 1\" msg=\"811;Giran\">aaaa bbbb</a></html>", 30);
            var l = r.Boxes.Where(x => x.Kind == HtmlBoxKind.Link).ToList();
            Assert.AreEqual(2, l.Count);
            Assert.AreEqual(l[0].Id, l[1].Id);
            Assert.AreEqual("bypass -h npc_1_Chat 1", l[1].Action);
            Assert.AreEqual("811;Giran", l[0].Msg);
            Assert.AreEqual(HtmlLinkType.Action, l[0].LinkType);
            Assert.AreEqual(HtmlLayout.LinkColor, l[0].Color);
            // com <font> em volta, a cor do font; link= e cmd=
            Assert.AreEqual(HtmlDoc.Level, Lay("<html><font color=LEVEL><a action=x>y</a></font></html>").Boxes[0].Color);
            Assert.AreEqual(HtmlLinkType.File, Lay("<html><a link=help1.htm>y</a></html>").Boxes[0].LinkType);
            Assert.AreEqual(HtmlLinkType.Command, Lay("<html><a cmd=/loc>y</a></html>").Boxes[0].LinkType);
            // o espaco antes do link cai ("texto <a>": o fim do trecho e cortado)
            var t = Lay("<html>texto <a action=x>link</a></html>").Boxes;
            Assert.AreEqual(30, t[1].X);
        }

        [Test]
        public void Tabela_ColunasEscalamNaProporcao()
        {
            // colunas 50, 6, 6 (largura natural de "b"/"c"); natural = 2 + (50 + 4) + (6 + 4) + (6 + 4) = 76; width=200 escala
            var r = Lay("<html><table width=200><tr><td width=50>a</td><td>b</td><td>c</td></tr></table></html>", 280);
            Assert.AreEqual(3, Box(r, HtmlBoxKind.Text, "a").X);
            Assert.AreEqual(3 + 131 + 4, Box(r, HtmlBoxKind.Text, "b").X);
            Assert.AreEqual(3 + 131 + 4 + 15 + 4, Box(r, HtmlBoxKind.Text, "c").X);
            // td sem align cancela o <center> de fora; valign padrao = meio, "middle" nao e reconhecido (topo)
            var v = Lay("<html><center><table><tr><td height=46><button width=10 height=40></td><td>m</td><td valign=middle>t</td></tr></table></center></html>", 280);
            var m = Box(v, HtmlBoxKind.Text, "m");
            var top = Box(v, HtmlBoxKind.Text, "t");
            var btn = v.Boxes.First(x => x.Kind == HtmlBoxKind.Button);
            Assert.AreEqual(btn.Y, top.Y);
            Assert.AreEqual(btn.Y + Math.Floor(40 / 2f - 13 / 2f), m.Y);
        }

        // medida que arredonda cada pedaco para cima (como a fonte na escala 1,25): a frase inteira mede menos que a soma
        sealed class Rounding : IHtmlMeasure
        {
            public float Width(string s) => (float)Math.Ceiling(s.Length * 5.3);
            public float GlyphHeight => 13;
        }

        [Test]
        public void Tabela_ColunaPeloConteudoNaoQuebraOTexto()
        {
            // feb17cf ao vivo: "Increases P. / Def" quebrava na celula do buffer
            var r = HtmlLayout.Run("<html><table><tr><td>Shield</td></tr><tr><td>Increases P. Def</td></tr></table></html>", 296, new Rounding());
            var lines = r.Boxes.Where(b => b.Kind == HtmlBoxKind.Text).Select(b => b.Text).ToList();
            CollectionAssert.AreEqual(new[] { "Shield", "Increases P. Def" }, lines);
        }

        [Test]
        public void Buffer_IconeNoBotaoNomeEDescricaoAoLado()
        {
            var r = Lay(Sample("buffer_buff.htm"), 296);
            Assert.AreEqual("Chat", r.Title);
            var btn = Box(r, HtmlBoxKind.Button, "icon.skill1040");
            Assert.AreEqual("icon.skill0000", btn.Back);
            Assert.AreEqual(32, btn.W);
            Assert.AreEqual(32, btn.H);
            var name = Box(r, HtmlBoxKind.Text, "Shield");
            var desc = Box(r, HtmlBoxKind.Text, "Increases P. Def");
            // td width=40 (+ 2 de padding e 2 de spacing): o nome comeca 47 px depois do botao; a descricao 17 abaixo
            Assert.AreEqual(btn.X + 47, name.X);
            Assert.AreEqual(name.X, desc.X);
            Assert.AreEqual(name.Y + 17, desc.Y);
            Assert.AreEqual(0xFF808080u, desc.Color);
            // table bgcolor=000000: fundo preto atras da linha do Shield, e nao atras da do Greater shield
            var fills = r.Boxes.Where(x => x.Kind == HtmlBoxKind.Fill && x.Color == 0xFF000000).ToList();
            Assert.IsTrue(fills.Any(f => f.Y <= btn.Y && f.Y + f.H >= btn.Y + btn.H));
            var g = Box(r, HtmlBoxKind.Button, "icon.skill1389");
            Assert.IsFalse(fills.Any(f => f.Y <= g.Y && f.Y + f.H >= g.Y + g.H));
            // a linha L2UI.SquareGray do topo e uma imagem 300 x 1 centrada
            var line = Box(r, HtmlBoxKind.Image, "L2UI.SquareGray");
            Assert.AreEqual(300, line.W);
            Assert.AreEqual(-2, line.X);
        }

        [Test]
        public void Board_TabelasAninhadas()
        {
            var r = Lay(Sample("board_index.htm"), 633);
            var home = Box(r, HtmlBoxKind.Button, "L2UI_ch3.BigButton3_down");
            Assert.AreEqual("Home", home.Text);
            Assert.AreEqual(135, home.W);
            var settings = r.Boxes.First(b => b.Kind == HtmlBoxKind.Button && b.Text == "Settings");
            Assert.AreEqual(home.X, settings.X);
            Assert.Greater(settings.Y, home.Y);
            var info = Box(r, HtmlBoxKind.Text, "Information");
            Assert.Greater(info.X, home.X + 135);
            Assert.AreEqual(HtmlDoc.Level, info.Color);
            Assert.Greater(r.Boxes.Count(b => b.Kind == HtmlBoxKind.Fill && b.Color == 0xFF000000), 5);
        }

        // ------------------------------------------------------------ acoes
        static Dictionary<string, L2Html.Var> Vars(params (string name, string text, HtmlBoxKind kind)[] v) =>
            v.ToDictionary(x => x.name, x => new L2Html.Var { Get = () => x.text, Kind = x.kind });

        [Test]
        public void Acao_BypassEmTokens()
        {
            string bp = null, ln = null, wr = null;
            var msgs = new List<int>();
            var act = new HtmlActions { Bypass = s => bp = s, Link = s => ln = s, Write = s => wr = s, SystemMessage = msgs.Add, Names = null };
            L2Html.RunAction("bypass -h npc_5_Chat 1", null, act);
            Assert.AreEqual("npc_5_Chat 1", bp);
            L2Html.RunAction("bypass _bbshome", null, act);
            Assert.AreEqual("_bbshome", bp);
            // $var vira o texto do controle; so o token inteiro; aspas agrupam
            var vars = Vars(("crit", "1", HtmlBoxKind.Combo), ("msg", "oi", HtmlBoxKind.Edit));
            L2Html.RunAction("bypass -h admin_announce add $crit $msg x$msg \"a b\"", vars, act);
            Assert.AreEqual("admin_announce add 1 oi x$msg a b", bp);
            // mais de 16 bytes no edit: o token some (sysmsg 204); so espacos: 329; controle que nao existe: some
            L2Html.RunAction("bypass x $msg $nada", Vars(("msg", "12345678901234567", HtmlBoxKind.Edit)), act);
            Assert.AreEqual("x", bp);
            L2Html.RunAction("bypass x $msg", Vars(("msg", "   ", HtmlBoxKind.Edit)), act);
            CollectionAssert.AreEqual(new[] { 204, 329 }, msgs);
            // no board o limite e outro (Content ate 3000)
            act.Board = true;
            L2Html.RunAction("bypass x $Content", Vars(("Content", new string('a', 100), HtmlBoxKind.MultiEdit)), act);
            Assert.AreEqual("x " + new string('a', 100), bp);
            L2Html.RunAction("link help/1.htm", null, act);
            Assert.AreEqual("help/1.htm", ln);
            L2Html.RunAction("Write Notice $Content", Vars(("Content", "abc", HtmlBoxKind.MultiEdit)), act);
            Assert.AreEqual("Notice abc", wr);
            Assert.AreEqual("so texto", L2Html.ConfirmText("so texto"));
            Assert.IsNull(L2Html.ConfirmText(null));
        }

        [Test]
        public void Textura_1Para1ERoda()
        {
            Assert.AreEqual("/icons/skill1040.png", L2Html.TexUrl("icon.skill1040"));
            Assert.AreEqual("/icons/skill1040.png", L2Html.TexUrl("Icon.Skill1040"));
            Assert.IsNull(L2Html.TexUrl(null));
            Assert.AreEqual(new Vector2(32, 32), L2Html.TexSize("icon.skill1040"));
            // SquareGray 8 x 8 numa caixa 300 x 1: 1:1 a partir do topo, repetida na horizontal
            var uv = L2Html.Uv1To1(new Vector2(8, 8), 300, 1);
            Assert.AreEqual(new Rect(0, 1 - 1 / 8f, 37.5f, 1 / 8f), uv);
            // roda: 3 unidades por entalhe (viewer 13, BBS 15)
            Assert.AreEqual(39, L2Html.WheelStep(120, L2Html.ScrollUnit));
            Assert.AreEqual(-45, L2Html.WheelStep(-120, L2Html.BoardScrollUnit));
            Assert.AreEqual("", L2Html.ButtonLabel(""));
            Assert.AreEqual("Buy", L2Html.ButtonLabel("Buy"));
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
                var r = L2Html.Render(Sample("buffer_buff.htm"), new HtmlActions { Names = null }, go.transform, 296);
                Assert.AreEqual("Chat", r.Title);
                var le = r.Body.GetComponent<LayoutElement>();
                Assert.AreEqual(r.Layout.Height, le.preferredHeight);
                Assert.AreEqual(296, le.preferredWidth);
                var buttons = r.Body.GetComponentsInChildren<UiTexButton>(true).Where(b => b.name == "button").ToList();
                Assert.AreEqual(r.Layout.Boxes.Count(b => b.Kind == HtmlBoxKind.Button), buttons.Count);
                var texts = r.Body.GetComponentsInChildren<Text>(true).Select(t => t.text).ToList();
                CollectionAssert.Contains(texts, "Shield");
                CollectionAssert.Contains(texts, "Back");
                // a caixa uGUI fica onde o layout mandou (y para baixo = anchoredPosition.y negativo)
                var first = (RectTransform)buttons[0].transform;
                var fb = r.Layout.Boxes.First(b => b.Kind == HtmlBoxKind.Button);
                Assert.AreEqual(new Vector2(fb.X, -fb.Y), first.anchoredPosition);
                Assert.AreEqual(new Vector2(32, 32), first.sizeDelta);
            }
            finally
            {
                UnityEngine.Object.DestroyImmediate(go);
            }
        }
    }
}
