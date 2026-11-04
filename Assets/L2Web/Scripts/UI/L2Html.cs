// Visualizador do HTML do servidor (NpcHtmlMessage, ShowBoard, TutorialShowHtml, help) em uGUI, como o NCHtmlViewer do
// cliente (REA em Docs/html_suporte.md): o HtmlDoc le o HTML, o HtmlLayout poe cada unidade em pixels na largura do
// viewer e aqui cada caixa vira um elemento uGUI em posicao absoluta, dentro de um container com a altura do documento (o
// ScrollRect do HtmlCtrl rola esse container, 3 unidades por entalhe da roda).
//   Texturas (img, botao): 1:1 a partir do canto de cima, sem esticar, repetidas ou cortadas no tamanho (nw:122560).
//     icon.* do Icon.utx (/icons/), o resto (L2UI.*, L2UI_CH3.*, sek.*) do textures.json.
//   Botao (NCButton::DrawButton 0x100034b0): fore normal, back pressionado, "<fore>_over" no realce (ou fore); textura que
//     nao existe = Default.BlackTexture; value centrado em 0xFFE6DCBE.
//   Acoes (NConsoleWnd 0x1014cae0 / NCConsole 0x1013d1e0): "bypass" em tokens (-h sai, $var vira o texto do controle) ->
//     RequestBypassToServer; "link x" -> RequestLinkHtml; "write ..." -> RequestBBSWrite. &lt;a link&gt; carrega o HTML local,
//     &lt;a cmd&gt; executa o comando do chat, &lt;a msg&gt; pergunta antes (systemmsg com o $s1).
// O texto do servidor nunca vira tag do rich text: '<' do texto e trocado por '‹'.
using System;
using System.Collections.Generic;
using System.Text;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    /// <summary>Acoes dos links/botoes do HTML.</summary>
    public sealed class HtmlActions
    {
        /// <summary>"bypass [-h] cmd ..." -> RequestBypassToServer(cmd ...).</summary>
        public Action<string> Bypass = _ => { };
        /// <summary>"link pasta/arquivo.htm" -> RequestLinkHtml.</summary>
        public Action<string> Link = _ => { };
        /// <summary>"Write ..." -> RequestBBSWrite (o resto da acao, com os $var trocados). Nulo = nada.</summary>
        public Action<string> Write;
        /// <summary>&lt;a link="arquivo"&gt;: HTML local. Nulo = le de ..\l2text e redesenha no mesmo viewer.</summary>
        public Action<string> File;
        /// <summary>&lt;a cmd="..."&gt;: comando do chat (NCChatWnd::ExecuteCommand). Nulo = nada.</summary>
        public Action<string> Command;
        /// <summary>URL de um icone do cliente (o nome depois de "icon."), ou null.</summary>
        public Func<string, string> Icon = GameUi.IconUrl;
        /// <summary>&lt;a msg="id;texto"&gt;: pergunta antes de executar (texto da pergunta, executar). Nulo = executa direto.</summary>
        public Action<string, Action> Confirm;
        /// <summary>Systemmsg de um $var recusado (204, 329...). Nulo = nada.</summary>
        public Action<int> SystemMessage;
        /// <summary>NCBBSHtmlViewer: limites do GetData do board e roda de 45 px.</summary>
        public bool Board;
        /// <summary>Nomes das entidades &amp;$N; &amp;@N; &amp;#N;.</summary>
        public IHtmlNames Names = new GameNames();
    }

    /// <summary>Nomes das entidades pelo GameData: sysstring, NPC e item; castelo nao tem tabela no porte ("-").</summary>
    public sealed class GameNames : IHtmlNames
    {
        public string Name(char prefix, int n)
        {
            try
            {
                switch (prefix)
                {
                    case '$': return GameData.SysString(n, null);
                    case '@': return GameData.NpcName(n);
                    case '#': return GameData.ItemName(n);
                    default: return null;
                }
            }
            catch
            {
                return null;
            }
        }
    }

    /// <summary>Resultado: titulo (&lt;title&gt;), o container com o conteudo e o layout.</summary>
    public sealed class RenderedHtml
    {
        public string Title;
        public RectTransform Body;
        public HtmlLayoutResult Layout;
    }

    public static class L2Html
    {
        /// <summary>Tamanho da fonte do viewer.</summary>
        public const int FontSize = 11;
        /// <summary>Altura do 'A' da SmallFont-r ([V]: leitura fraca do .gly, spec 02); a linha tem + 6.</summary>
        public const float GlyphH = 13;
        /// <summary>Altura de uma linha de texto (GetTextSize + 6).</summary>
        public const float LineH = GlyphH + HtmlLayout.Gap;
        /// <summary>Largura usada quando o viewer ainda nao tem tamanho.</summary>
        public const float DefaultWidth = 280;
        /// <summary>&lt;br&gt;: unidade 1 x 9.</summary>
        public const float BrHeight = HtmlLayout.BrHeight;
        /// <summary>Unidade de rolagem: altura do 'A' no viewer, 15 no BBS; a roda anda 3 unidades (NCScrollWnd, nw:63319).</summary>
        public const float ScrollUnit = GlyphH, BoardScrollUnit = 15;
        /// <summary>Texto do botao: 0xFFE6DCBE.</summary>
        public static readonly Color32 ButtonText = new(0xe6, 0xdc, 0xbe, 0xff);

        /// <summary>Analisa o HTML em arvore (HtmlDoc.Parse).</summary>
        public static HtmlNode Parse(string html) => HtmlDoc.Parse(html);

        // ------------------------------------------------------------ medida do texto
        /// <summary>Medida pela fonte do uGUI (TextGenerator com a fonte e o tamanho do viewer).</summary>
        public sealed class UiMeasure : IHtmlMeasure
        {
            readonly TextGenerator gen = new();
            TextGenerationSettings settings;
            readonly Dictionary<string, float> cache = new();

            public UiMeasure()
            {
                settings = new TextGenerationSettings
                {
                    font = UiRoot.Font, fontSize = FontSize, fontStyle = FontStyle.Normal, richText = false, scaleFactor = 1, lineSpacing = 1,
                    horizontalOverflow = HorizontalWrapMode.Overflow, verticalOverflow = VerticalWrapMode.Overflow, textAnchor = TextAnchor.UpperLeft,
                    generationExtents = new Vector2(10000, 100), pivot = Vector2.zero, color = Color.white, updateBounds = false,
                };
            }

            public float GlyphHeight => GlyphH;

            /// <summary>
            /// scaleFactor do Canvas onde o texto e desenhado: o Text rasteriza a fonte em tamanho x escala e divide de volta,
            /// e a largura muda um pouco com o arredondamento (o sublinhado sobrava no gatekeeper com o dpi do Windows).
            /// </summary>
            public float Scale
            {
                get => settings.scaleFactor;
                set
                {
                    var v = value > 0 ? value : 1;
                    if (Mathf.Approximately(v, settings.scaleFactor)) return;
                    settings.scaleFactor = v;
                    cache.Clear();
                }
            }

            public float Width(string text)
            {
                if (string.IsNullOrEmpty(text)) return 0;
                if (cache.TryGetValue(text, out var w)) return w;
                w = gen.GetPreferredWidth(text, settings) / settings.scaleFactor;
                cache[text] = w;
                return w;
            }
        }

        static UiMeasure measure;

        /// <summary>Medida compartilhada (a fonte e uma so).</summary>
        public static IHtmlMeasure Measure => measure ??= new UiMeasure();

        // ------------------------------------------------------------ texturas
        static readonly Regex IconRe = new(@"^icon\.(.+)$", RegexOptions.IgnoreCase);

        /// <summary>A referencia e um icone do Icon.utx ("icon.xxx").</summary>
        public static bool IsIcon(string reference) => !string.IsNullOrEmpty(reference) && IconRe.IsMatch(reference.Trim());

        /// <summary>
        /// URL de uma textura citada pelo HTML: "icon.skill1040" -> o icone do Icon.utx; "L2UI.SquareGray",
        /// "L2UI_CH3.BigButton3", "sek.cbui94" -> o textures.json da interface. Null se o porte nao tem.
        /// </summary>
        public static string TexUrl(string reference, HtmlActions act = null)
        {
            if (string.IsNullOrEmpty(reference)) return null;
            var m = IconRe.Match(reference.Trim());
            if (m.Success) return (act?.Icon ?? GameUi.IconUrl)(m.Groups[1].Value);
            return L2WndUtil.Tex(reference.Trim())?.Url;
        }

        /// <summary>Tamanho da textura em texels (os icones do Icon.utx sao 32 x 32); 0 x 0 se nao existe.</summary>
        public static Vector2 TexSize(string reference)
        {
            if (IsIcon(reference)) return new Vector2(32, 32);
            var t = string.IsNullOrEmpty(reference) ? null : L2WndUtil.Tex(reference.Trim());
            return t != null ? new Vector2(t.W, t.H) : Vector2.zero;
        }

        /// <summary>
        /// uvRect do desenho 1:1 de uma textura de `tex` texels numa caixa w x h, a partir do canto de cima (UV em texels,
        /// sem esticar; maior que a textura = repete).
        /// </summary>
        public static Rect Uv1To1(Vector2 tex, float w, float h)
        {
            if (tex.x <= 0 || tex.y <= 0) return new Rect(0, 0, 1, 1);
            return new Rect(0, 1 - h / tex.y, w / tex.x, h / tex.y);
        }

        /// <summary>
        /// Texturas do botao (NCButton::Initialize(fore, back, "", "")): normal = fore, pressionado = back, realce =
        /// "&lt;fore&gt;_over" se existir (senao fore); o que nao existe vira Default.BlackTexture.
        /// </summary>
        public static (string normal, string pushed, string over) ButtonSkin(string fore, string back)
        {
            string Or(string r) => !string.IsNullOrEmpty(r) && (IsIcon(r) || L2WndUtil.Tex(r) != null) ? r : "Default.BlackTexture";
            var n = Or(fore);
            var p = Or(back);
            var o = !IsIcon(n) && L2WndUtil.Tex(n + "_over") != null ? n + "_over" : n;
            return (n, p, o);
        }

        // ------------------------------------------------------------ acoes
        /// <summary>Controle com var= na pagina: o texto e o tipo (as regras do GetData mudam).</summary>
        public sealed class Var
        {
            public Func<string> Get;
            public HtmlBoxKind Kind;
        }

        /// <summary>Bytes MBCS do texto (ASCII 1, o resto 2).</summary>
        public static int Mbcs(string s)
        {
            var n = 0;
            foreach (var c in s ?? "") n += c < 0x80 ? 1 : 2;
            return n;
        }

        /// <summary>
        /// NCHtmlViewer::GetData (nw:123760): o texto do controle, ou null com a systemmsg do motivo. Edit e combobox: sem
        /// '&amp;', ate 16 bytes (204) e nao so espacos (329); multiedit: 2 a 3000 bytes (329). No BBS (nw:123908): Title e
        /// ToList ate 160 (327), Comment ate 256 (330), o resto ate 3000 (2009); vazio: Title 328, Content 2008, ToList 2007,
        /// o resto 329.
        /// </summary>
        public static string GetData(string name, Var v, bool board, out int sysmsg)
        {
            sysmsg = 0;
            var s = v?.Get?.Invoke() ?? "";
            var bytes = Mbcs(s);
            if (board)
            {
                var max = name == "Title" || name == "ToList" ? 160 : name == "Comment" ? 256 : 3000;
                var tooLong = name == "Title" || name == "ToList" ? 327 : name == "Comment" ? 330 : 2009;
                if (s.Trim().Length == 0)
                {
                    sysmsg = name == "Title" ? 328 : name == "Content" ? 2008 : name == "ToList" ? 2007 : 329;
                    return null;
                }
                if (bytes > max)
                {
                    sysmsg = tooLong;
                    return null;
                }
                return s;
            }
            if (v != null && v.Kind == HtmlBoxKind.MultiEdit)
            {
                if (bytes < 2 || bytes > 3000)
                {
                    sysmsg = 329;
                    return null;
                }
                return s;
            }
            if (s.IndexOf('&') >= 0 || bytes > 16)
            {
                sysmsg = 204;
                return null;
            }
            if (s.Trim().Length == 0)
            {
                sysmsg = 329;
                return null;
            }
            return s;
        }

        /// <summary>ParseToken: separa por espacos; aspas agrupam (e saem).</summary>
        public static List<string> Tokens(string s)
        {
            var l = new List<string>();
            var sb = new StringBuilder();
            var q = false;
            var has = false;
            foreach (var c in s ?? "")
            {
                if (c == '"')
                {
                    q = !q;
                    has = true;
                    continue;
                }
                if (!q && char.IsWhiteSpace(c))
                {
                    if (sb.Length > 0 || has) l.Add(sb.ToString());
                    sb.Clear();
                    has = false;
                    continue;
                }
                sb.Append(c);
            }
            if (sb.Length > 0 || has) l.Add(sb.ToString());
            return l;
        }

        /// <summary>
        /// Comando de um bypass (sem o "bypass"): tokens; o primeiro "-h" sai; "$nome" vira o texto do controle (some se o
        /// controle nao existe ou o texto e recusado); junta com um espaco. So o token inteiro e trocado ("x$a" nao).
        /// </summary>
        public static string BypassCommand(string rest, IReadOnlyDictionary<string, Var> vars, bool board, Action<int> sysmsg)
        {
            var toks = Tokens(rest);
            var h = toks.IndexOf("-h");
            if (h >= 0) toks.RemoveAt(h);
            var outT = new List<string>();
            foreach (var t in toks)
            {
                if (t.Length > 1 && t[0] == '$')
                {
                    var name = t.Substring(1);
                    if (vars == null || !vars.TryGetValue(name, out var v)) continue;
                    var d = GetData(name, v, board, out var msg);
                    if (d == null)
                    {
                        if (msg != 0) sysmsg?.Invoke(msg);
                        continue;
                    }
                    outT.Add(d);
                    continue;
                }
                outT.Add(t);
            }
            return string.Join(" ", outT);
        }

        /// <summary>Executa a acao de um link/botao/edit: "bypass ...", "link arquivo" ou "write ...".</summary>
        public static void RunAction(string action, IReadOnlyDictionary<string, Var> vars, HtmlActions act)
        {
            var a = (action ?? "").Trim();
            var m = Regex.Match(a, @"^(\S+)\s*(.*)$", RegexOptions.Singleline);
            if (!m.Success) return;
            var cmd = m.Groups[1].Value.ToLowerInvariant();
            var rest = m.Groups[2].Value;
            switch (cmd)
            {
                case "bypass":
                    act.Bypass?.Invoke(BypassCommand(rest, vars, act.Board, act.SystemMessage));
                    return;
                case "link":
                    act.Link?.Invoke(rest.Trim());
                    return;
                case "write":
                    act.Write?.Invoke(BypassCommand(rest, vars, act.Board, act.SystemMessage));
                    return;
            }
        }

        /// <summary>
        /// msg="811;Tournament Arena": a systemmsg do numero com o texto depois do ultimo ';' no primeiro $s1; numero 0 ou
        /// invalido = o proprio texto do msg.
        /// </summary>
        public static string ConfirmText(string msg)
        {
            if (string.IsNullOrEmpty(msg)) return null;
            var cut = msg.LastIndexOf(';');
            var arg = cut >= 0 ? msg.Substring(cut + 1) : "";
            var head = msg.IndexOf(';') >= 0 ? msg.Substring(0, msg.IndexOf(';')) : msg;
            var id = HtmlDoc.Int(head) ?? 0;
            if (id <= 0) return msg;
            string text;
            try
            {
                text = GameData.SystemMessage(id, new List<string>()).Text;
            }
            catch
            {
                return msg;
            }
            if (string.IsNullOrEmpty(text)) return msg;
            var i = text.IndexOf("$s1", StringComparison.Ordinal);
            return i >= 0 ? text.Substring(0, i) + arg + text.Substring(i + 3) : text;
        }

        // ------------------------------------------------------------ renderizacao
        /// <summary>
        /// Renderiza o HTML dentro de `parent` (o conteudo rolavel do HtmlCtrl). `width` = largura do viewer; 0 = a do
        /// viewport do ScrollRect acima de `parent` (ou DefaultWidth). Devolve o titulo e o container (l2html), que tem
        /// LayoutElement com a largura e a altura do documento.
        /// </summary>
        public static RenderedHtml Render(string html, HtmlActions act, Transform parent, float width = 0)
        {
            act ??= new HtmlActions();
            if (width <= 0) width = ViewerWidth(parent);
            var cv = parent ? parent.GetComponentInParent<Canvas>() : null;
            ((UiMeasure)Measure).Scale = cv ? cv.scaleFactor : 1;
            var lay = HtmlLayout.Run(HtmlDoc.Parse(html ?? "", act.Names), width, Measure);
            var root = UiRoot.Box("l2html", parent, 0, 0, width, lay.Height);
            UiKit.Layout(root, width, lay.Height, -1, width, lay.Height);
            var page = new Page { Root = root, Act = act, Parent = parent, Width = width };
            Build(lay, page);
            Wheel(parent, act.Board ? BoardScrollUnit : ScrollUnit);
            return new RenderedHtml { Title = lay.Title, Body = root, Layout = lay };
        }

        /// <summary>Largura do viewer: o viewport do ScrollRect acima de `parent`, senao o proprio `parent`.</summary>
        public static float ViewerWidth(Transform parent)
        {
            var sr = parent ? parent.GetComponentInParent<ScrollRect>() : null;
            var vp = sr ? sr.viewport ? sr.viewport : (RectTransform)sr.transform : null;
            var w = vp ? vp.rect.width : 0;
            if (w <= 1 && sr) w = ((RectTransform)sr.transform).rect.width;
            if (w <= 1 && parent is RectTransform prt) w = prt.rect.width;
            return w > 1 ? w : DefaultWidth;
        }

        /// <summary>NCScrollWnd::OnMouseWheel: (delta / 120) x unidade x 3 por entalhe, limitado ao topo e ao fim.</summary>
        public static float WheelStep(float delta, float unit)
        {
            var n = Mathf.Abs(delta) >= 60 ? (int)(delta / 120) : (int)Mathf.Sign(delta);
            return n * unit * 3;
        }

        static void Wheel(Transform parent, float unit)
        {
            var sr = parent ? parent.GetComponentInParent<ScrollRect>() : null;
            if (!sr || !sr.content) return;
            sr.scrollSensitivity = 0;
            var content = sr.content;
            var view = sr.viewport ? sr.viewport : (RectTransform)sr.transform;
            UiEvents.Of(sr.gameObject).OnWheel = e =>
            {
                var d = e.scrollDelta.y;
                if (d == 0) return;
                var max = Mathf.Max(0, content.rect.height - view.rect.height);
                var p = content.anchoredPosition;
                p.y = Mathf.Clamp(p.y - WheelStep(d, unit), 0, max);
                content.anchoredPosition = p;
                sr.velocity = Vector2.zero;
            };
        }

        static Color32 C(uint argb)
        {
            // [V] cor sem alfa (#RRGGBB vira 0x000000FF no GetMatchedColor): o canvas desenha o texto sem o alfa
            var a = (byte)(argb >> 24);
            return new Color32((byte)(argb >> 16), (byte)(argb >> 8), (byte)argb, a == 0 ? (byte)255 : a);
        }

        static string Escape(string s) => s.Replace('<', '‹');

        sealed class Page
        {
            public RectTransform Root;
            public Transform Parent;
            public float Width;
            public HtmlActions Act;
            public readonly Dictionary<string, Var> Vars = new();
            public readonly List<InputField> Edits = new();
        }

        static void Build(HtmlLayoutResult lay, Page pg)
        {
            var root = pg.Root;
            if (lay.Background != null) Image(root, lay.Background, 0, 0, pg.Width, lay.Height, pg.Act).name = "imgsrc";
            foreach (var b in lay.Boxes)
            {
                switch (b.Kind)
                {
                    case HtmlBoxKind.Fill:
                    {
                        var p = UiRoot.Panel(root, b.X, b.Y, b.W, b.H, C(b.Color));
                        p.name = "bgcolor";
                        p.raycastTarget = false;
                        break;
                    }
                    case HtmlBoxKind.Image:
                        if (b.W > 0 && b.H > 0 && b.Tex != null) Image(root, b.Tex, b.X, b.Y, b.W, b.H, pg.Act);
                        break;
                    case HtmlBoxKind.Text:
                        NewText(root, b, Escape(b.Text), b.Color).raycastTarget = false;
                        break;
                    case HtmlBoxKind.Link:
                        LinkItem(root, b, pg);
                        break;
                    case HtmlBoxKind.Button:
                        ButtonItem(root, b, pg);
                        break;
                    case HtmlBoxKind.Edit:
                    case HtmlBoxKind.MultiEdit:
                        EditItem(root, b, pg);
                        break;
                    case HtmlBoxKind.Combo:
                    {
                        var el = UiRoot.Box("combobox", root, b.X, b.Y, b.W, b.H);
                        var cb = new L2Combo(el, b.W, b.H);
                        cb.SetItems(b.Options ?? Array.Empty<string>());
                        // SEL: o item com o texto igual; sem SEL (ou sem achar), o primeiro
                        var sel = b.Sel != null ? Array.IndexOf(b.Options ?? Array.Empty<string>(), b.Sel) : -1;
                        if (cb.Items.Count > 0) cb.Select(sel >= 0 ? sel : 0);
                        if (!string.IsNullOrEmpty(b.Var))
                            pg.Vars[b.Var] = new Var { Kind = HtmlBoxKind.Combo, Get = () => cb.Selected >= 0 && cb.Selected < cb.Items.Count ? cb.Items[cb.Selected] : "" };
                        break;
                    }
                }
            }
            if (pg.Edits.Count > 1) root.gameObject.AddComponent<HtmlTabOrder>().Edits = pg.Edits;
        }

        static RawImage Image(RectTransform root, string tex, float x, float y, float w, float h, HtmlActions act)
        {
            var rt = UiRoot.Box("img", root, x, y, w, h);
            var img = rt.gameObject.AddComponent<RawImage>();
            img.raycastTarget = false;
            var url = TexUrl(tex, act);
            img.uvRect = Uv1To1(TexSize(tex), w, h);
            L2WndUtil.SetTexture(img, url, true);
            return img;
        }

        static Text NewText(RectTransform root, HtmlBox b, string rich, uint color)
        {
            // dois pixels a mais de largura: o TextGenerator do Text quebra quando a medida bate exata na borda
            var t = UiRoot.Label(root, rich, b.X, b.Y, Mathf.Ceil(b.W) + 2, b.H, FontSize, C(color), TextAnchor.UpperLeft);
            t.horizontalOverflow = HorizontalWrapMode.Overflow;
            t.verticalOverflow = VerticalWrapMode.Overflow;
            UiKit.AddShadow(t);
            return t;
        }

        static void Click(HtmlBox b, Page pg)
        {
            var act = pg.Act;
            switch (b.LinkType)
            {
                case HtmlLinkType.File:
                    if (act.File != null) act.File(b.Action);
                    else LoadLocal(b.Action, pg);
                    return;
                case HtmlLinkType.Command:
                    act.Command?.Invoke(b.Action);
                    return;
            }
            var action = b.Action;
            void Go() => RunAction(action, pg.Vars, act);
            // msg so no <a action> (o BUTTON nao le MSG)
            var q = b.Kind == HtmlBoxKind.Link && b.Msg != null && act.Confirm != null ? ConfirmText(b.Msg) : null;
            if (q != null) act.Confirm(q, Go);
            else Go();
        }

        // NCHtmlViewer::OnLink -> LoadHtml(arquivo): o HTML local (..\l2text) no mesmo viewer
        static void LoadLocal(string file, Page pg)
        {
            var html = LobbyServerScreen.ReadL2Text(HelpHtmlView.FileName(file));
            if (html == null || !pg.Parent) return;
            UiKit.Clear(pg.Parent);
            Render(html, pg.Act, pg.Parent, pg.Width);
            var sr = pg.Parent.GetComponentInParent<ScrollRect>();
            if (sr) sr.verticalNormalizedPosition = 1;
        }

        static void LinkItem(RectTransform root, HtmlBox b, Page pg)
        {
            // NCHtmlTagInfo::Draw (0x100857b0): link sublinhado; sem realce ao passar o mouse
            var t = NewText(root, b, Escape(b.Text), b.Color);
            t.name = "link";
            t.raycastTarget = true;
            var btn = t.gameObject.AddComponent<UiTexButton>();
            btn.Label = t;
            btn.OnClick = () => Click(b, pg);
            var line = UiRoot.Panel(t.rectTransform, 0, 0, b.W, 1, C(b.Color));
            line.raycastTarget = false;
            line.name = "sublinhado";
            var lr = line.rectTransform;
            lr.anchorMin = lr.anchorMax = lr.pivot = new Vector2(0, 0);
            lr.anchoredPosition = new Vector2(0, 0);
            // a largura que o Text desenha de fato (a do layout so como reserva)
            var tw = t.preferredWidth;
            lr.sizeDelta = new Vector2(Mathf.Ceil(tw > 0 ? Mathf.Min(tw, b.W + 2) : b.W), 1);
        }

        static readonly Regex SysName = new(@"^&\$(\d+);$");

        /// <summary>value do botao: "&amp;$N;" = sysstring N (SetButtonName), senao o texto como esta.</summary>
        public static string ButtonLabel(string value)
        {
            var m = SysName.Match(value ?? "");
            if (!m.Success) return value ?? "";
            try
            {
                return GameData.SysString(int.Parse(m.Groups[1].Value), "");
            }
            catch
            {
                return "";
            }
        }

        static void ButtonItem(RectTransform root, HtmlBox b, Page pg)
        {
            var rt = UiRoot.Box("button", root, b.X, b.Y, b.W, b.H);
            var hit = rt.gameObject.AddComponent<Image>();
            hit.color = new Color(0, 0, 0, 0);
            var btn = rt.gameObject.AddComponent<UiTexButton>();
            btn.Image = L2WndUtil.Bg(rt);
            UiRoot.Fill(btn.Image.rectTransform);
            var (n, p, o) = ButtonSkin(b.Fore, b.Back);
            var nu = TexUrl(n, pg.Act);
            if (nu == null)
            {
                // Default.BlackTexture ainda fora do shared (pedido 0043): o mesmo preto em cor solida
                hit.color = Color.black;
                btn.Image.enabled = false;
            }
            else
            {
                btn.Image.uvRect = Uv1To1(TexSize(n), b.W, b.H);
                L2WndUtil.SetButtonTextures(btn, nu, TexUrl(p, pg.Act) ?? nu, TexUrl(o, pg.Act) ?? nu);
            }
            var label = ButtonLabel(b.Text);
            if (label.Length > 0)
            {
                var t = UiRoot.Label(rt, Escape(label), 0, 0, b.W, b.H, FontSize, ButtonText, TextAnchor.MiddleCenter);
                UiRoot.Fill(t.rectTransform);
                t.horizontalOverflow = HorizontalWrapMode.Overflow;
                t.raycastTarget = false;
                UiKit.AddShadow(t);
                btn.Label = t;
            }
            btn.OnClick = () => Click(b, pg);
        }

        static void EditItem(RectTransform root, HtmlBox b, Page pg)
        {
            var multi = b.Kind == HtmlBoxKind.MultiEdit;
            var ct = (b.Type ?? "") switch
            {
                "number" => InputField.ContentType.IntegerNumber,
                "password" => InputField.ContentType.Password,
                _ => InputField.ContentType.Standard,
            };
            var f = UiKit.Input(root, "", b.W, b.H, ct, b.Length);
            UiRoot.Place((RectTransform)f.transform, b.X, b.Y, b.W, b.H);
            if (multi)
            {
                f.lineType = InputField.LineType.MultiLineNewline;
                f.textComponent.alignment = TextAnchor.UpperLeft;
                f.textComponent.horizontalOverflow = HorizontalWrapMode.Wrap;
            }
            else if (!string.IsNullOrEmpty(b.Action))
            {
                // Enter no edit: OnEditAction executa a action do edit
                var action = b.Action;
                f.onSubmit.AddListener(_ => RunAction(action, pg.Vars, pg.Act));
            }
            if (!string.IsNullOrEmpty(b.Var)) pg.Vars[b.Var] = new Var { Kind = b.Kind, Get = () => f ? f.text : "" };
            pg.Edits.Add(f);
        }
    }

    /// <summary>InitTabOrder (nw:123363): Tab passa pelos edit/multiedit na ordem do documento, em roda.</summary>
    public sealed class HtmlTabOrder : MonoBehaviour
    {
        public List<InputField> Edits;

        void Update()
        {
            var kb = UnityEngine.InputSystem.Keyboard.current;
            if (kb == null || !kb.tabKey.wasPressedThisFrame || Edits == null) return;
            for (var i = 0; i < Edits.Count; i++)
            {
                if (!Edits[i] || !Edits[i].isFocused) continue;
                var next = Edits[(i + 1) % Edits.Count];
                if (!next) return;
                next.Select();
                next.ActivateInputField();
                return;
            }
        }
    }
}
