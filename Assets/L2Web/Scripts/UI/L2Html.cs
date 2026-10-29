// Renderizador do HTML de NPC do Lineage II (NpcHtmlMessage) para uGUI (ui/html.ts). O HTML do servidor e analisado
// por um parser tolerante proprio (sem scripts) e reconstruido so com as tags conhecidas do cliente: texto (rich text
// do uGUI: cor, negrito, italico), quebras, paragrafos, centro, tabelas (linhas horizontais de celulas), links e botoes
// (bypass/link), campos edit/multiedit/combobox (variaveis $nome nas acoes) e imagens (icon.* ou espaco/linha).
// O texto do servidor nunca vira tag: '<' do texto e trocado por '‹'.
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
        /// <summary>"bypass -h cmd" ou "bypass cmd" -> RequestBypassToServer(cmd).</summary>
        public Action<string> Bypass = _ => { };
        /// <summary>"link pasta/arquivo.htm" -> RequestLinkHtml.</summary>
        public Action<string> Link = _ => { };
        /// <summary>URL de um icone do cliente (icon.xxx), ou null.</summary>
        public Func<string, string> Icon = _ => null;
    }

    /// <summary>Resultado: titulo (&lt;title&gt;) e o container com o conteudo.</summary>
    public sealed class RenderedHtml
    {
        public string Title;
        public RectTransform Body;
    }

    /// <summary>No da arvore do HTML (elemento ou texto).</summary>
    public sealed class HtmlNode
    {
        /// <summary>Tag em minusculas; null = texto.</summary>
        public string Tag;
        public string Text;
        public Dictionary<string, string> Attrs = new();
        public List<HtmlNode> Children = new();
        public HtmlNode Parent;

        public string Attr(string k) => Attrs.TryGetValue(k, out var v) ? v : null;
    }

    public static class L2Html
    {
        static readonly Dictionary<string, string> FontColors = new() { ["level"] = "#e8c56e" };
        static readonly HashSet<string> Void = new() { "br", "br1", "img", "edit", "multiedit", "combobox", "button", "input", "hr", "meta", "link" };
        static readonly HashSet<string> Raw = new() { "script", "style", "title" };
        const int FontSize = 11;
        const float LineH = 16;
        /// <summary>NCHtmlTagInfo::LoadHtml 0x10: o objeto &lt;br&gt; mede 1 x 9 (altura de uma linha vazia).</summary>
        public const float BrHeight = 9;

        // ------------------------------------------------------------ parser
        /// <summary>Analisa o HTML em arvore (tolerante: tags sem fechar, atributos sem aspas, entidades).</summary>
        public static HtmlNode Parse(string html)
        {
            var root = new HtmlNode { Tag = "#root" };
            var cur = root;
            var i = 0;
            var n = html?.Length ?? 0;
            var text = new StringBuilder();
            void FlushText()
            {
                if (text.Length == 0) return;
                cur.Children.Add(new HtmlNode { Text = Decode(text.ToString()), Parent = cur });
                text.Clear();
            }
            while (i < n)
            {
                var ch = html[i];
                if (ch != '<')
                {
                    text.Append(ch);
                    i++;
                    continue;
                }
                if (string.CompareOrdinal(html, i, "<!--", 0, 4) == 0)
                {
                    FlushText();
                    var end = html.IndexOf("-->", i + 4, StringComparison.Ordinal);
                    i = end < 0 ? n : end + 3;
                    continue;
                }
                var close = i + 1 < n && html[i + 1] == '/';
                var j = i + (close ? 2 : 1);
                if (j >= n || !char.IsLetter(html[j]))
                {
                    if (j < n && html[j] == '!')
                    {
                        // <!doctype ...>
                        FlushText();
                        var e = html.IndexOf('>', j);
                        i = e < 0 ? n : e + 1;
                        continue;
                    }
                    text.Append(ch);
                    i++;
                    continue;
                }
                FlushText();
                var k = j;
                while (k < n && (char.IsLetterOrDigit(html[k]) || html[k] == '_' || html[k] == '-' || html[k] == ':')) k++;
                var tag = html.Substring(j, k - j).ToLowerInvariant();
                var attrs = new Dictionary<string, string>();
                // atributos
                while (k < n && html[k] != '>')
                {
                    if (char.IsWhiteSpace(html[k]) || html[k] == '/')
                    {
                        k++;
                        continue;
                    }
                    var a0 = k;
                    while (k < n && !char.IsWhiteSpace(html[k]) && html[k] != '=' && html[k] != '>') k++;
                    var name = html.Substring(a0, k - a0).ToLowerInvariant();
                    while (k < n && char.IsWhiteSpace(html[k])) k++;
                    string val = "";
                    if (k < n && html[k] == '=')
                    {
                        k++;
                        while (k < n && char.IsWhiteSpace(html[k])) k++;
                        if (k < n && (html[k] == '"' || html[k] == '\''))
                        {
                            var q = html[k];
                            var e = html.IndexOf(q, k + 1);
                            if (e < 0) e = n;
                            val = html.Substring(k + 1, e - k - 1);
                            k = Math.Min(n, e + 1);
                        }
                        else
                        {
                            var v0 = k;
                            while (k < n && !char.IsWhiteSpace(html[k]) && html[k] != '>') k++;
                            val = html.Substring(v0, k - v0);
                        }
                    }
                    if (name.Length > 0 && !attrs.ContainsKey(name)) attrs[name] = Decode(val);
                }
                i = Math.Min(n, k + 1);
                if (close)
                {
                    // fecha o elemento aberto mais proximo com essa tag (se houver)
                    for (var p = cur; p != null && p != root; p = p.Parent)
                    {
                        if (p.Tag != tag) continue;
                        cur = p.Parent;
                        break;
                    }
                    continue;
                }
                var node = new HtmlNode { Tag = tag, Attrs = attrs, Parent = cur };
                // <p>/<tr>/<td> implicitos: abrir outro fecha o anterior
                if (tag == "p") CloseOpen(ref cur, root, "p", "td", "table");
                else if (tag == "tr") CloseOpen(ref cur, root, "tr", "table", null);
                else if (tag == "td" || tag == "th") CloseOpen(ref cur, root, "td", "tr", "table", "th");
                node.Parent = cur;
                cur.Children.Add(node);
                if (Raw.Contains(tag))
                {
                    var e = html.IndexOf("</" + tag, i, StringComparison.OrdinalIgnoreCase);
                    if (e < 0) e = n;
                    node.Children.Add(new HtmlNode { Text = Decode(html.Substring(i, e - i)), Parent = node });
                    var gt = html.IndexOf('>', e);
                    i = gt < 0 ? n : gt + 1;
                    continue;
                }
                if (!Void.Contains(tag)) cur = node;
            }
            FlushText();
            return root;
        }

        // fecha um `tag` aberto, parando nos limites (stop1/stop2/stop3)
        static void CloseOpen(ref HtmlNode cur, HtmlNode root, string tag, string stop1, string stop2, string alt = null)
        {
            for (var p = cur; p != null && p != root; p = p.Parent)
            {
                if (p.Tag == stop1 || p.Tag == stop2) return;
                if (p.Tag == tag || (alt != null && p.Tag == alt))
                {
                    cur = p.Parent;
                    return;
                }
            }
        }

        static readonly Regex Entity = new(@"&(#x[0-9a-f]+|#[0-9]+|[a-z]+);?", RegexOptions.IgnoreCase);

        static string Decode(string s)
        {
            if (s.IndexOf('&') < 0) return s;
            return Entity.Replace(s, m =>
            {
                var e = m.Groups[1].Value;
                try
                {
                    if (e.StartsWith("#x", StringComparison.OrdinalIgnoreCase)) return char.ConvertFromUtf32(Convert.ToInt32(e.Substring(2), 16));
                    if (e.StartsWith("#")) return char.ConvertFromUtf32(int.Parse(e.Substring(1)));
                }
                catch
                {
                    return m.Value;
                }
                switch (e.ToLowerInvariant())
                {
                    case "nbsp": return " ";
                    case "amp": return "&";
                    case "lt": return "<";
                    case "gt": return ">";
                    case "quot": return "\"";
                    case "apos": return "'";
                    case "copy": return "©";
                    default: return m.Value;
                }
            });
        }

        // ------------------------------------------------------------ atributos
        static string Color(string v)
        {
            if (string.IsNullOrEmpty(v)) return null;
            var k = v.Trim().ToLowerInvariant();
            if (FontColors.TryGetValue(k, out var f)) return f;
            if (Regex.IsMatch(k, "^[0-9a-f]{6}$")) return "#" + k;
            if (Regex.IsMatch(k, "^#[0-9a-f]{3,8}$")) return k;
            if (Regex.IsMatch(k, "^[a-z]+$") && ColorUtility.TryParseHtmlString(k, out var c)) return "#" + ColorUtility.ToHtmlStringRGB(c).ToLowerInvariant();
            return null;
        }

        static float? Size(string v)
        {
            if (string.IsNullOrEmpty(v)) return null;
            var m = Regex.Match(v.Trim(), @"^-?\d+");
            if (!m.Success) return null;
            var n = int.Parse(m.Value);
            return n > 0 ? Math.Min(n, 1000) : (float?)null;
        }

        /// <summary>Troca $var pelos valores dos campos edit/combobox da janela.</summary>
        static string Substitute(string action, Dictionary<string, Func<string>> vars) =>
            Regex.Replace(action, @"\$([A-Za-z0-9_]+)", m => vars.TryGetValue(m.Groups[1].Value, out var f) ? f() : m.Value);

        static readonly Regex BypassRe = new(@"^bypass\s+(?:-h\s+)?(.*)$", RegexOptions.IgnoreCase | RegexOptions.Singleline);
        static readonly Regex LinkRe = new(@"^link\s+(.*)$", RegexOptions.IgnoreCase | RegexOptions.Singleline);

        static void RunAction(string action, Dictionary<string, Func<string>> vars, HtmlActions act)
        {
            var a = Substitute(action.Trim(), vars);
            var m = BypassRe.Match(a);
            if (m.Success)
            {
                act.Bypass?.Invoke(m.Groups[1].Value.Trim());
                return;
            }
            var l = LinkRe.Match(a);
            if (l.Success) act.Link?.Invoke(l.Groups[1].Value.Trim());
        }

        // ------------------------------------------------------------ renderizacao
        enum Kind
        {
            Text,
            Link,
            Button,
            Edit,
            Combo,
            Img,
        }

        sealed class Item
        {
            public Kind Kind;
            public string Rich;
            public string Action;
            public string Var;
            public bool Multi;
            public string[] Options;
            public string Url;
            public float? W, H;
            /// <summary>Texturas do botao (fore = normal, back = pressionado).</summary>
            public string Fore, Back;
        }

        sealed class Ctx
        {
            public Transform Container;
            public TextAnchor Align = TextAnchor.UpperLeft;
            public List<Item> Line = new();
            public Dictionary<string, Func<string>> Vars;
            public HtmlActions Act;
            public string Color;
            public bool Bold, Italic;
            public bool LastWasBreak = true;
        }

        /// <summary>
        /// Renderiza o HTML dentro de `parent` (um container vertical, ex.: UiWindow.Body). Devolve o titulo e o
        /// container criado (div.l2html).
        /// </summary>
        public static RenderedHtml Render(string html, HtmlActions act, Transform parent)
        {
            var doc = Parse(html ?? "");
            var title = Find(doc, "title");
            var root = UiKit.Column(parent, 3, "l2html");
            var ctx = new Ctx { Container = root, Vars = new Dictionary<string, Func<string>>(), Act = act ?? new HtmlActions() };
            Walk(doc, ctx);
            Flush(ctx, false);
            return new RenderedHtml { Title = title != null ? InnerText(title).Trim() : "", Body = root };
        }

        static HtmlNode Find(HtmlNode n, string tag)
        {
            if (n.Tag == tag) return n;
            foreach (var c in n.Children)
            {
                var f = Find(c, tag);
                if (f != null) return f;
            }
            return null;
        }

        static string InnerText(HtmlNode n)
        {
            if (n.Tag == null) return n.Text;
            var sb = new StringBuilder();
            foreach (var c in n.Children) sb.Append(InnerText(c));
            return sb.ToString();
        }

        static readonly Regex Ws = new(@"\s+");

        static string Escape(string s) => s.Replace('<', '‹');

        static string Styled(Ctx c, string s)
        {
            if (c.Bold) s = "<b>" + s + "</b>";
            if (c.Italic) s = "<i>" + s + "</i>";
            if (c.Color != null) s = "<color=" + c.Color + ">" + s + "</color>";
            return s;
        }

        static void AddText(Ctx c, string raw)
        {
            var t = Ws.Replace(raw, " ").Replace(' ', ' ');
            if (t.Trim().Length == 0 && t != " ") return;
            if (c.Line.Count == 0) t = t.TrimStart();
            if (t.Length == 0) return;
            var s = Styled(c, Escape(t));
            if (c.Line.Count > 0 && c.Line[^1].Kind == Kind.Text) c.Line[^1].Rich += s;
            else c.Line.Add(new Item { Kind = Kind.Text, Rich = s });
        }

        static void Walk(HtmlNode src, Ctx c)
        {
            foreach (var n in src.Children)
            {
                if (n.Tag == null)
                {
                    AddText(c, n.Text);
                    continue;
                }
                switch (n.Tag)
                {
                    case "head":
                        // <HEAD> sem </HEAD> (server_help.htm): o <BODY> fica dentro dele; como no navegador, o body vale
                        foreach (var hc in n.Children)
                            if (hc.Tag == "body")
                                Walk(hc, c);
                        continue;
                    case "title":
                    case "script":
                    case "style":
                        continue;
                    case "html":
                    case "body":
                        Walk(n, c);
                        continue;
                    case "br":
                        Flush(c, BrHeight);
                        continue;
                    case "br1":
                        // NCHtmlTagInfo::LoadHtml 0x35: objeto 1 x 0 com quebra de linha (linha vazia nao ocupa altura)
                        Flush(c, 0);
                        continue;
                    case "p":
                    case "div":
                    {
                        Flush(c, false);
                        UiKit.Space(c.Container, 4);
                        var al = c.Align;
                        var a = (n.Attr("align") ?? "").ToLowerInvariant();
                        if (a == "center") c.Align = TextAnchor.UpperCenter;
                        else if (a == "right") c.Align = TextAnchor.UpperRight;
                        Walk(n, c);
                        Flush(c, false);
                        c.Align = al;
                        UiKit.Space(c.Container, 4);
                        continue;
                    }
                    case "center":
                    {
                        Flush(c, false);
                        var al = c.Align;
                        c.Align = TextAnchor.UpperCenter;
                        Walk(n, c);
                        Flush(c, false);
                        c.Align = al;
                        continue;
                    }
                    case "font":
                    {
                        var old = c.Color;
                        c.Color = Color(n.Attr("color")) ?? c.Color;
                        Walk(n, c);
                        c.Color = old;
                        continue;
                    }
                    case "b":
                    case "i":
                    case "u":
                    {
                        bool ob = c.Bold, oi = c.Italic;
                        if (n.Tag == "b") c.Bold = true;
                        if (n.Tag == "i") c.Italic = true;
                        Walk(n, c);
                        c.Bold = ob;
                        c.Italic = oi;
                        continue;
                    }
                    case "table":
                        Flush(c, false);
                        Table(n, c);
                        continue;
                    case "a":
                    {
                        var sub = new Ctx { Container = c.Container, Vars = c.Vars, Act = c.Act, Color = null, Bold = c.Bold, Italic = c.Italic };
                        Walk(n, sub);
                        var sb = new StringBuilder();
                        foreach (var it in sub.Line)
                            if (it.Kind == Kind.Text) sb.Append(it.Rich);
                        var label = sb.ToString();
                        if (c.Line.Count == 0) label = label.TrimStart();
                        c.Line.Add(new Item { Kind = Kind.Link, Rich = label, Action = n.Attr("action") ?? "" });
                        continue;
                    }
                    case "button":
                        // NCHtmlTagInfo::LoadHtml 0x31: value, width, height, back (padrao Default.BlackTexture), fore (padrao
                        // Default.WhiteTexture), action; o objeto ocupa height + 6 na linha
                        c.Line.Add(new Item { Kind = Kind.Button, Rich = n.Attr("value") ?? "", Action = n.Attr("action") ?? "", W = Size(n.Attr("width")), H = Size(n.Attr("height")), Fore = n.Attr("fore"), Back = n.Attr("back") });
                        continue;
                    case "edit":
                    case "multiedit":
                        c.Line.Add(new Item { Kind = Kind.Edit, Var = n.Attr("var"), Multi = n.Tag == "multiedit", W = Size(n.Attr("width")), H = Size(n.Attr("height")) });
                        continue;
                    case "combobox":
                    {
                        var opts = new List<string>();
                        foreach (var o in (n.Attr("list") ?? "").Split(';'))
                            if (o.Length > 0) opts.Add(o);
                        c.Line.Add(new Item { Kind = Kind.Combo, Var = n.Attr("var"), Options = opts.ToArray(), W = Size(n.Attr("width")) });
                        continue;
                    }
                    case "img":
                    {
                        var isrc = n.Attr("src") ?? "";
                        var m = Regex.Match(isrc, @"^icon\.(.+)$", RegexOptions.IgnoreCase);
                        var url = m.Success ? c.Act.Icon?.Invoke(m.Groups[1].Value) : null;
                        c.Line.Add(new Item { Kind = Kind.Img, Url = url, W = Size(n.Attr("width")), H = Size(n.Attr("height")) });
                        continue;
                    }
                    default:
                        Walk(n, c);
                        continue;
                }
            }
        }

        static void Table(HtmlNode t, Ctx c)
        {
            var table = UiKit.Column(c.Container, 0, "table");
            var w = Size(t.Attr("width"));
            if (w != null) UiKit.Layout(table, w.Value, -1, 0);
            var g = table.GetComponent<VerticalLayoutGroup>();
            g.childForceExpandWidth = true;
            var center = (t.Attr("align") ?? "").ToLowerInvariant() == "center" || c.Align == TextAnchor.UpperCenter;
            RectTransform holder = table;
            if (w != null)
            {
                // largura fixa: o pai alinha (margin: 0 auto quando centralizada)
                var row = UiKit.Row(c.Container, 0, center ? TextAnchor.UpperCenter : TextAnchor.UpperLeft, "tablewrap");
                table.SetParent(row, false);
                holder = row;
            }
            foreach (var tr in Rows(t))
            {
                var row = UiKit.Row(table, 0, TextAnchor.UpperLeft, "tr");
                row.GetComponent<HorizontalLayoutGroup>().childForceExpandWidth = false;
                foreach (var td in tr.Children)
                {
                    if (td.Tag != "td" && td.Tag != "th") continue;
                    var cell = UiKit.Column(row, 0, "td");
                    cell.GetComponent<VerticalLayoutGroup>().padding = new RectOffset(3, 3, 1, 1);
                    var cw = Size(td.Attr("width"));
                    if (cw != null) UiKit.Layout(cell, cw.Value, -1, 0, cw.Value);
                    else UiKit.Layout(cell, -1, -1, 1);
                    var al = (td.Attr("align") ?? "").ToLowerInvariant();
                    var sub = new Ctx
                    {
                        Container = cell, Vars = c.Vars, Act = c.Act, Color = c.Color, Bold = c.Bold || td.Tag == "th", Italic = c.Italic,
                        Align = al == "center" ? TextAnchor.UpperCenter : al == "right" ? TextAnchor.UpperRight : al == "left" ? TextAnchor.UpperLeft : c.Align,
                    };
                    Walk(td, sub);
                    Flush(sub, false);
                    var va = (td.Attr("valign") ?? "").ToLowerInvariant();
                    if (va == "middle") cell.GetComponent<VerticalLayoutGroup>().childAlignment = TextAnchor.MiddleLeft;
                }
            }
            _ = holder;
        }

        static IEnumerable<HtmlNode> Rows(HtmlNode t)
        {
            foreach (var n in t.Children)
            {
                if (n.Tag == "tr") yield return n;
                else if (n.Tag == "tbody" || n.Tag == "thead" || n.Tag == "tfoot")
                    foreach (var r in Rows(n))
                        yield return r;
            }
        }

        static TextAnchor RowAlign(TextAnchor a) => a == TextAnchor.UpperCenter ? TextAnchor.MiddleCenter : a == TextAnchor.UpperRight ? TextAnchor.MiddleRight : TextAnchor.MiddleLeft;

        static Text NewText(Transform parent, string rich, TextAnchor align)
        {
            var t = UiKit.Text(parent, rich, FontSize, UiKit.TextColor, FontStyle.Normal, align);
            t.lineSpacing = 1.3f;
            UiKit.Layout(t, -1, -1, -1, -1, LineH);
            return t;
        }

        // fecha a linha atual. br = veio de um <br> (linha vazia vira um espaco de uma linha)
        static void Flush(Ctx c, bool br) => Flush(c, br ? BrHeight : -1);

        // fecha a linha atual; emptyH >= 0 = altura que uma linha vazia ocupa (br = 9, br1 = 0), < 0 = nada
        static void Flush(Ctx c, float emptyH)
        {
            var line = c.Line;
            // espacos no fim da linha
            if (line.Count > 0 && line[^1].Kind == Kind.Text)
            {
                line[^1].Rich = line[^1].Rich.TrimEnd();
                if (line[^1].Rich.Length == 0) line.RemoveAt(line.Count - 1);
            }
            if (line.Count == 0)
            {
                if (emptyH > 0) UiKit.Space(c.Container, emptyH);
                return;
            }
            c.Line = new List<Item>();
            var onlyText = line.TrueForAll(i => i.Kind == Kind.Text);
            if (onlyText)
            {
                var sb = new StringBuilder();
                foreach (var i in line) sb.Append(i.Rich);
                NewText(c.Container, sb.ToString(), c.Align);
                return;
            }
            if (line.Count == 1 && line[0].Kind == Kind.Link)
            {
                // link sozinho na linha: ocupa a largura e quebra como texto
                LinkItem(c.Container, line[0], c, c.Align, true);
                return;
            }
            var row = UiKit.Row(c.Container, 0, RowAlign(c.Align), "line");
            UiKit.Layout(row, -1, -1, -1, -1, LineH);
            foreach (var it in line)
            {
                switch (it.Kind)
                {
                    case Kind.Text:
                    {
                        var t = NewText(row, it.Rich, TextAnchor.MiddleLeft);
                        t.horizontalOverflow = HorizontalWrapMode.Overflow;
                        break;
                    }
                    case Kind.Link:
                        LinkItem(row, it, c, TextAnchor.MiddleLeft, false);
                        break;
                    case Kind.Button:
                    {
                        var action = it.Action;
                        var b = UiKit.Button(row, it.Rich, () => RunAction(action, c.Vars, c.Act), 0, Mathf.Max(21, it.H ?? 21));
                        if (it.W != null)
                        {
                            var rt = (RectTransform)b.transform;
                            var w = Mathf.Max(it.W.Value, rt.sizeDelta.x);
                            rt.sizeDelta = new Vector2(w, rt.sizeDelta.y);
                            UiKit.Layout(rt, w, -1, -1, w);
                            var (normal, pushed, over) = ButtonSkin(it.Fore, it.Back);
                            L2WndUtil.SkinButton(b, normal, pushed, over, w, rt.sizeDelta.y, true);
                        }
                        // margin: 2px
                        var le = ((RectTransform)b.transform).GetComponent<LayoutElement>();
                        UiKit.Space(row, 4, 4);
                        _ = le;
                        break;
                    }
                    case Kind.Edit:
                    {
                        var f = UiKit.Input(row, "", it.W ?? 120, it.Multi ? Mathf.Max(18, it.H ?? 40) : 18);
                        if (it.Multi)
                        {
                            f.lineType = InputField.LineType.MultiLineNewline;
                            f.textComponent.alignment = TextAnchor.UpperLeft;
                            f.textComponent.horizontalOverflow = HorizontalWrapMode.Wrap;
                        }
                        if (!string.IsNullOrEmpty(it.Var)) c.Vars[it.Var] = () => f ? f.text : "";
                        UiKit.Space(row, 4, 4);
                        break;
                    }
                    case Kind.Combo:
                    {
                        // select: botao que alterna entre as opcoes
                        var opts = it.Options;
                        var idx = 0;
                        UiTexButton b = null;
                        b = UiKit.Button(row, opts.Length > 0 ? opts[0] + " ▼" : "", () =>
                        {
                            if (opts.Length == 0) return;
                            idx = (idx + 1) % opts.Length;
                            b.Label.text = opts[idx] + " ▼";
                        }, it.W ?? 0);
                        if (!string.IsNullOrEmpty(it.Var)) c.Vars[it.Var] = () => opts.Length > 0 ? opts[idx] : "";
                        UiKit.Space(row, 4, 4);
                        break;
                    }
                    case Kind.Img:
                        ImgItem(row, it);
                        break;
                }
            }
        }

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

        static void LinkItem(Transform parent, Item it, Ctx c, TextAnchor align, bool wrap)
        {
            var action = it.Action;
            // NCHtmlTagInfo::Draw (0x100857b0, npchtml_re 3.1): link em 0xFF6699FF sublinhado; sem realce ao passar o mouse
            var t = NewText(parent, "<color=#6699ff>" + it.Rich + "</color>", align);
            if (!wrap) t.horizontalOverflow = HorizontalWrapMode.Overflow;
            t.raycastTarget = true;
            var b = t.gameObject.AddComponent<UiTexButton>();
            b.Label = t;
            b.OnClick = () => RunAction(action, c.Vars, c.Act);
            var img = UiRoot.Panel(t.rectTransform, 0, 0, 0, 1, new Color32(0x66, 0x99, 0xff, 0xff));
            img.raycastTarget = false;
            var line = img.rectTransform;
            line.name = "sublinhado";
            line.anchorMin = new Vector2(0, 0);
            line.anchorMax = new Vector2(0, 0);
            line.pivot = new Vector2(0, 0);
            line.anchoredPosition = new Vector2(0, 1);
            line.sizeDelta = new Vector2(Mathf.Ceil(t.preferredWidth), 1);
        }

        static void ImgItem(Transform parent, Item it)
        {
            if (it.Url != null)
            {
                var w = it.W ?? 32;
                var h = it.H ?? 32;
                UiKit.Image(parent, it.Url, w, h);
                return;
            }
            // texturas de UI (L2UI.SquareWhite etc.) viram uma linha/espaco
            var sw = it.W ?? 0;
            var sh = it.H ?? 1;
            var img = UiRoot.Panel(parent, 0, 0, sw, sh, new Color(1, 1, 1, 0.08f));
            img.name = "l2img";
            img.raycastTarget = false;
            UiKit.Layout(img, sw, sh, sw > 0 ? 0 : 1, sw, sh);
        }
    }
}
