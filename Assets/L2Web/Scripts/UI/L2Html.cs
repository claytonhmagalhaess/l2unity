// Visualizador do HTML do servidor (NpcHtmlMessage, ShowBoard, help) em uGUI, como o NCHtmlViewer do cliente: o HTML vira
// a arvore do HtmlDoc, o HtmlLayout poe cada objeto (texto, link, botao, imagem, campo, tabela com bgcolor/background)
// em pixels na largura do viewer, e aqui cada caixa vira um elemento uGUI em posicao absoluta dentro de um container com
// a altura do documento (o ScrollRect do HtmlCtrl rola esse container). Texturas: icon.* do Icon.utx (/icons/) e as
// demais (L2UI.*, L2UI_CH3.*) do textures.json; o botao usa fore (normal) e back (pressionado) esticados.
// O texto do servidor nunca vira tag do rich text: '<' do texto e trocado por '‹'.
using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    /// <summary>Acoes dos links/botoes do HTML.</summary>
    public sealed class HtmlActions
    {
        /// <summary>"bypass -h cmd" ou "bypass cmd" -> RequestBypassToServer(cmd).</summary>
        public Action<string> Bypass = _ => { };
        /// <summary>"link pasta/arquivo.htm" -> RequestLinkHtml.</summary>
        public Action<string> Link = _ => { };
        /// <summary>URL de um icone do cliente (o nome depois de "icon."), ou null.</summary>
        public Func<string, string> Icon = GameUi.IconUrl;
        /// <summary>msg="id;texto": pergunta antes de executar (texto da pergunta, executar). Nulo = executa direto.</summary>
        public Action<string, Action> Confirm;
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
        /// <summary>Altura de uma linha de texto.</summary>
        public const float LineH = 15;
        /// <summary>Largura usada quando o viewer ainda nao tem tamanho.</summary>
        public const float DefaultWidth = 280;
        /// <summary>NCHtmlTagInfo::LoadHtml 0x10: o objeto &lt;br&gt; mede 1 x 9 (altura de uma linha vazia).</summary>
        public static float BrHeight => HtmlLayout.BrHeight;

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

            public float LineHeight => LineH;

            public float Width(string text)
            {
                if (string.IsNullOrEmpty(text)) return 0;
                if (cache.TryGetValue(text, out var w)) return w;
                w = Mathf.Ceil(gen.GetPreferredWidth(text, settings));
                cache[text] = w;
                return w;
            }
        }

        static UiMeasure measure;

        /// <summary>Medida compartilhada (a fonte e uma so).</summary>
        public static IHtmlMeasure Measure => measure ??= new UiMeasure();

        // ------------------------------------------------------------ texturas
        static readonly Regex IconRe = new(@"^icon\.(.+)$", RegexOptions.IgnoreCase);

        /// <summary>
        /// URL de uma textura citada pelo HTML: "icon.skill1040" -> o icone do Icon.utx; "L2UI.SquareGray",
        /// "L2UI_CH3.BigButton3" -> o textures.json da interface. Null se o cliente nao tem (ex.: sek.cbui94 de servidor
        /// privado).
        /// </summary>
        public static string TexUrl(string reference, HtmlActions act = null)
        {
            if (string.IsNullOrEmpty(reference)) return null;
            var m = IconRe.Match(reference.Trim());
            if (m.Success) return (act?.Icon ?? GameUi.IconUrl)(m.Groups[1].Value);
            return L2WndUtil.Tex(reference.Trim())?.Url;
        }

        /// <summary>A referencia e um icone do Icon.utx ("icon.xxx").</summary>
        public static bool IsIcon(string reference) => !string.IsNullOrEmpty(reference) && IconRe.IsMatch(reference.Trim());

        /// <summary>
        /// Texturas do botao do HTML (NCHtmlButton): `fore` normal e `back` pressionado, esticadas ao width x height. Sem
        /// `fore` conhecido pelo cliente (ex.: sek.cbui94 dos servidores privados) fica o btn1 generico [I].
        /// </summary>
        public static (string normal, string pushed, string over) ButtonSkin(string fore, string back)
        {
            if (!string.IsNullOrEmpty(fore) && L2WndUtil.Tex(fore) != null)
                return (fore, !string.IsNullOrEmpty(back) && L2WndUtil.Tex(back) != null ? back : fore, fore);
            return ("L2UI_ch3.button.btn1_normal", "L2UI_ch3.button.btn1_normalon", "L2UI_ch3.button.btn1_normal_over");
        }

        // ------------------------------------------------------------ acoes
        /// <summary>Troca $var pelos valores dos campos edit/combobox da janela.</summary>
        public static string Substitute(string action, IReadOnlyDictionary<string, Func<string>> vars) =>
            Regex.Replace(action ?? "", @"\$([A-Za-z0-9_]+)", m => vars != null && vars.TryGetValue(m.Groups[1].Value, out var f) ? f() : m.Value);

        static readonly Regex BypassRe = new(@"^bypass\s+(?:-h\s+)?(.*)$", RegexOptions.IgnoreCase | RegexOptions.Singleline);
        static readonly Regex LinkRe = new(@"^link\s+(.*)$", RegexOptions.IgnoreCase | RegexOptions.Singleline);

        /// <summary>Executa a acao de um link/botao: "bypass [-h] cmd" ou "link arquivo".</summary>
        public static void RunAction(string action, IReadOnlyDictionary<string, Func<string>> vars, HtmlActions act)
        {
            var a = Substitute((action ?? "").Trim(), vars);
            var m = BypassRe.Match(a);
            if (m.Success)
            {
                act.Bypass?.Invoke(m.Groups[1].Value.Trim());
                return;
            }
            var l = LinkRe.Match(a);
            if (l.Success) act.Link?.Invoke(l.Groups[1].Value.Trim());
        }

        /// <summary>
        /// msg="811;Tournament Arena": a pergunta e a systemmsg do numero com o texto depois do ';' no $s1 (sem numero, o
        /// proprio texto).
        /// </summary>
        public static string ConfirmText(string msg)
        {
            if (string.IsNullOrEmpty(msg)) return null;
            var cut = msg.IndexOf(';');
            var head = cut >= 0 ? msg.Substring(0, cut) : msg;
            var arg = cut >= 0 ? msg.Substring(cut + 1) : "";
            if (int.TryParse(head.Trim(), out var id))
                return GameData.SystemMessage(id, new List<string> { arg }).Text;
            return msg;
        }

        static void Click(HtmlBox b, IReadOnlyDictionary<string, Func<string>> vars, HtmlActions act)
        {
            var action = b.Action;
            void Go() => RunAction(action, vars, act);
            var q = b.Msg != null && act.Confirm != null ? ConfirmText(b.Msg) : null;
            if (q != null) act.Confirm(q, Go);
            else Go();
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
            var lay = HtmlLayout.Run(html ?? "", width, Measure);
            var root = UiRoot.Box("l2html", parent, 0, 0, width, lay.Height);
            UiKit.Layout(root, width, lay.Height, -1, width, lay.Height);
            Build(lay, root, act);
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

        static Color32 C(uint argb) => new((byte)(argb >> 16), (byte)(argb >> 8), (byte)argb, (byte)(argb >> 24));

        static string Escape(string s) => s.Replace('<', '‹');

        static void Build(HtmlLayoutResult lay, RectTransform root, HtmlActions act)
        {
            var vars = new Dictionary<string, Func<string>>();
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
                    {
                        if (b.W <= 0 || b.H <= 0) break;
                        var url = TexUrl(b.Tex, act);
                        if (url == null) break;
                        var rt = UiRoot.Box("img", root, b.X, b.Y, b.W, b.H);
                        var img = rt.gameObject.AddComponent<RawImage>();
                        img.raycastTarget = false;
                        L2WndUtil.SetTexture(img, url);
                        break;
                    }
                    case HtmlBoxKind.Text:
                    {
                        var t = NewText(root, b, Escape(b.Text), b.Color);
                        t.raycastTarget = false;
                        break;
                    }
                    case HtmlBoxKind.Link:
                        LinkItem(root, b, vars, act);
                        break;
                    case HtmlBoxKind.Button:
                        ButtonItem(root, b, vars, act);
                        break;
                    case HtmlBoxKind.Edit:
                    case HtmlBoxKind.MultiEdit:
                    {
                        var multi = b.Kind == HtmlBoxKind.MultiEdit;
                        var ct = (b.Type ?? "").ToLowerInvariant() switch
                        {
                            "number" => InputField.ContentType.IntegerNumber,
                            "password" => InputField.ContentType.Password,
                            _ => InputField.ContentType.Standard,
                        };
                        var f = UiKit.Input(root, "", b.W, b.H, ct);
                        UiRoot.Place((RectTransform)f.transform, b.X, b.Y, b.W, b.H);
                        if (multi)
                        {
                            f.lineType = InputField.LineType.MultiLineNewline;
                            f.textComponent.alignment = TextAnchor.UpperLeft;
                            f.textComponent.horizontalOverflow = HorizontalWrapMode.Wrap;
                        }
                        if (!string.IsNullOrEmpty(b.Var)) vars[b.Var] = () => f ? f.text : "";
                        break;
                    }
                    case HtmlBoxKind.Combo:
                    {
                        var el = UiRoot.Box("combobox", root, b.X, b.Y, b.W, b.H);
                        var cb = new L2Combo(el, b.W, b.H);
                        cb.SetItems(b.Options ?? Array.Empty<string>());
                        if (cb.Items.Count > 0) cb.Select(0);
                        if (!string.IsNullOrEmpty(b.Var)) vars[b.Var] = () => cb.Selected >= 0 && cb.Selected < cb.Items.Count ? cb.Items[cb.Selected] : "";
                        break;
                    }
                }
            }
        }

        static Text NewText(RectTransform root, HtmlBox b, string rich, uint color)
        {
            // um pixel a mais de largura: o TextGenerator do Text quebra quando a medida bate exata na borda
            var t = UiRoot.Label(root, rich, b.X, b.Y, b.W + 2, b.H, FontSize, C(color), TextAnchor.MiddleLeft);
            t.horizontalOverflow = HorizontalWrapMode.Overflow;
            t.verticalOverflow = VerticalWrapMode.Overflow;
            UiKit.AddShadow(t);
            return t;
        }

        static void LinkItem(RectTransform root, HtmlBox b, IReadOnlyDictionary<string, Func<string>> vars, HtmlActions act)
        {
            // NCHtmlTagInfo::Draw (0x100857b0): link em 0xFF6699FF sublinhado; sem realce ao passar o mouse
            var t = NewText(root, b, Escape(b.Text), b.Color);
            t.name = "link";
            t.raycastTarget = true;
            var btn = t.gameObject.AddComponent<UiTexButton>();
            btn.Label = t;
            btn.OnClick = () => Click(b, vars, act);
            var line = UiRoot.Panel(t.rectTransform, 0, 0, b.W, 1, C(b.Color));
            line.raycastTarget = false;
            line.name = "sublinhado";
            var lr = line.rectTransform;
            lr.anchorMin = lr.anchorMax = lr.pivot = new Vector2(0, 0);
            lr.anchoredPosition = new Vector2(0, 1);
            lr.sizeDelta = new Vector2(b.W, 1);
        }

        static void ButtonItem(RectTransform root, HtmlBox b, IReadOnlyDictionary<string, Func<string>> vars, HtmlActions act)
        {
            var rt = UiRoot.Box("button", root, b.X, b.Y, b.W, b.H);
            var hit = rt.gameObject.AddComponent<Image>();
            hit.color = new Color(0, 0, 0, 0);
            var btn = rt.gameObject.AddComponent<UiTexButton>();
            btn.Image = L2WndUtil.Bg(rt);
            UiRoot.Fill(btn.Image.rectTransform);
            if (IsIcon(b.Fore) && TexUrl(b.Fore, act) is string icon)
            {
                // icone do Icon.utx (buffer: fore=icon.skill1040, back=icon.skill0000): a imagem inteira esticada
                var pushed = TexUrl(b.Back, act);
                L2WndUtil.SetButtonTextures(btn, icon, pushed ?? icon, icon);
            }
            else
            {
                // textura da interface (L2UI_CH3.BigButton3...): a area da arte esticada; sem ela, o botao generico [I]
                var (n, p, o) = ButtonSkin(b.Fore, b.Back);
                L2WndUtil.SkinButton(btn, n, p, o, b.W, b.H, true);
            }
            if (!string.IsNullOrEmpty(b.Text))
            {
                var t = UiRoot.Label(rt, Escape(b.Text), 0, 0, b.W, b.H, FontSize, UiKit.ButtonText, TextAnchor.MiddleCenter);
                UiRoot.Fill(t.rectTransform);
                t.horizontalOverflow = HorizontalWrapMode.Overflow;
                t.raycastTarget = false;
                UiKit.AddShadow(t);
                btn.Label = t;
            }
            btn.OnClick = () => Click(b, vars, act);
        }

        /// <summary>Ancora horizontal do sublinhado do link: 0 a esquerda, 0,5 centralizado, 1 a direita.</summary>
        public static float UnderlineAnchor(TextAnchor align) => align switch
        {
            TextAnchor.UpperCenter or TextAnchor.MiddleCenter or TextAnchor.LowerCenter => 0.5f,
            TextAnchor.UpperRight or TextAnchor.MiddleRight or TextAnchor.LowerRight => 1f,
            _ => 0f,
        };
    }
}
