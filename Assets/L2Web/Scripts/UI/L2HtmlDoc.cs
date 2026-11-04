// Parte do visualizador de HTML do servidor que nao depende do Unity: a arvore do HTML (parser tolerante), as entidades,
// as cores e a tabela do que o NCHtmlViewer do cliente aceita (tags e atributos). O layout fica em L2HtmlLayout.cs e a
// montagem em uGUI em L2Html.cs. Nada aqui usa UnityEngine, para o teste do corpus do aCis rodar tambem fora do Editor.
using System;
using System.Collections.Generic;
using System.Globalization;
using System.Text;
using System.Text.RegularExpressions;

namespace L2Web.UI
{
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

    public static class HtmlDoc
    {
        static readonly HashSet<string> Void = new() { "br", "br1", "img", "edit", "multiedit", "combobox", "button", "input", "hr", "meta", "link" };
        static readonly HashSet<string> Raw = new() { "script", "style", "title" };

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
                            // <img height=7 /> : a barra do fim nao faz parte do valor
                            if (val.EndsWith("/") && k < n && html[k] == '>') val = val.Substring(0, val.Length - 1);
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

        /// <summary>Entidades: &amp;lt; &amp;gt; &amp;amp; &amp;quot; &amp;apos; &amp;nbsp; &amp;copy; e as numericas.</summary>
        public static string Decode(string s)
        {
            if (s.IndexOf('&') < 0) return s;
            return Entity.Replace(s, m =>
            {
                var e = m.Groups[1].Value;
                try
                {
                    if (e.StartsWith("#x", StringComparison.OrdinalIgnoreCase)) return char.ConvertFromUtf32(Convert.ToInt32(e.Substring(2), 16));
                    if (e.StartsWith("#")) return char.ConvertFromUtf32(int.Parse(e.Substring(1), CultureInfo.InvariantCulture));
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

        /// <summary>Primeiro no com a tag (busca em profundidade), ou null.</summary>
        public static HtmlNode Find(HtmlNode n, string tag)
        {
            if (n.Tag == tag) return n;
            foreach (var c in n.Children)
            {
                var f = Find(c, tag);
                if (f != null) return f;
            }
            return null;
        }

        /// <summary>Texto de um no e dos filhos.</summary>
        public static string InnerText(HtmlNode n)
        {
            if (n.Tag == null) return n.Text;
            var sb = new StringBuilder();
            foreach (var c in n.Children) sb.Append(InnerText(c));
            return sb.ToString();
        }

        // ------------------------------------------------------------ suporte (Docs/html_suporte.md)
        /// <summary>Tags que o viewer trata e os atributos que le de cada uma.</summary>
        public static readonly Dictionary<string, string[]> Supported = new()
        {
            ["html"] = new string[0],
            ["head"] = new string[0],
            ["body"] = new string[0],
            ["title"] = new string[0],
            ["br"] = new string[0],
            ["br1"] = new string[0],
            ["p"] = new[] { "align" },
            ["center"] = new string[0],
            ["font"] = new[] { "color" },
            ["a"] = new[] { "action", "msg" },
            ["button"] = new[] { "value", "action", "width", "height", "back", "fore", "msg" },
            ["img"] = new[] { "src", "width", "height" },
            ["table"] = new[] { "width", "height", "align", "bgcolor", "background", "border", "cellpadding", "cellspacing" },
            ["tr"] = new string[0],
            ["td"] = new[] { "width", "height", "align", "valign", "bgcolor", "background", "fixwidth", "fixheight" },
            ["edit"] = new[] { "var", "width", "height", "type", "length" },
            ["multiedit"] = new[] { "var", "width", "height" },
            ["combobox"] = new[] { "var", "list", "width", "height" },
        };

        /// <summary>
        /// O que o cliente ignora (a tag some e o conteudo fica; o atributo nao tem efeito), com o motivo. O teste do corpus
        /// aceita estes e falha em qualquer outro desconhecido.
        /// </summary>
        public static readonly Dictionary<string, string> Ignored = new()
        {
            ["b"] = "tag desconhecida do NCHtmlTagInfo: o texto aparece normal",
            ["conter"] = "erro de digitacao no HTML do servidor (admin/skills): tag desconhecida, o conteudo aparece",
            ["img@align"] = "o objeto img nao le align",
            ["edit@align"] = "o objeto edit nao le align",
            ["table@with"] = "erro de digitacao no HTML do servidor (width)",
            ["td@90"] = "erro de digitacao no HTML do servidor (admin/help: <td width 90>): width sem valor e '90' solto",
        };

        /// <summary>A tag/atributo e tratado ou esta na lista do que o cliente ignora.</summary>
        public static bool Known(string tag, string attr = null)
        {
            if (attr == null) return Supported.ContainsKey(tag) || Ignored.ContainsKey(tag);
            if (Ignored.ContainsKey(tag + "@" + attr)) return true;
            if (Ignored.ContainsKey(tag)) return true;
            return Supported.TryGetValue(tag, out var a) && Array.IndexOf(a, attr) >= 0;
        }

        /// <summary>Tags e atributos de um documento que o viewer nao conhece ("tag" ou "tag@atributo").</summary>
        public static List<string> Unknown(HtmlNode doc)
        {
            var l = new List<string>();
            void W(HtmlNode n)
            {
                if (n.Tag != null && n.Tag != "#root")
                {
                    if (!Known(n.Tag)) l.Add(n.Tag);
                    else
                        foreach (var k in n.Attrs.Keys)
                            // %button%: marcador que o servidor troca antes de mandar (o cliente nunca ve)
                            if (!k.StartsWith("%") && !Known(n.Tag, k))
                                l.Add(n.Tag + "@" + k);
                }
                foreach (var c in n.Children) W(c);
            }
            W(doc);
            return l;
        }

        // ------------------------------------------------------------ atributos
        /// <summary>Cores por nome do cliente (FONT color=LEVEL).</summary>
        public static readonly Dictionary<string, uint> NamedColors = new()
        {
            ["level"] = 0xFFE8C56E,
        };

        static readonly Regex Hex6 = new("^#?([0-9a-f]{6})$", RegexOptions.IgnoreCase);

        /// <summary>Cor ARGB de um atributo color/bgcolor ("RRGGBB", "#RRGGBB" ou nome), ou null.</summary>
        public static uint? Color(string v)
        {
            if (string.IsNullOrEmpty(v)) return null;
            var k = v.Trim().ToLowerInvariant();
            if (NamedColors.TryGetValue(k, out var f)) return f;
            var m = Hex6.Match(k);
            if (m.Success) return 0xFF000000u | uint.Parse(m.Groups[1].Value, NumberStyles.HexNumber, CultureInfo.InvariantCulture);
            return null;
        }

        /// <summary>"#rrggbb" de uma cor ARGB (rich text do uGUI).</summary>
        public static string Hex(uint argb) => "#" + (argb & 0xFFFFFF).ToString("x6", CultureInfo.InvariantCulture);

        /// <summary>Numero inteiro do comeco do atributo (width=32, height="21"), ou null.</summary>
        public static int? Int(string v)
        {
            if (string.IsNullOrEmpty(v)) return null;
            var m = Regex.Match(v.Trim(), @"^-?\d+");
            if (!m.Success) return null;
            return int.TryParse(m.Value, NumberStyles.Integer, CultureInfo.InvariantCulture, out var n) ? n : (int?)null;
        }

        /// <summary>Tamanho positivo (largura/altura) limitado a 1000, ou null.</summary>
        public static float? Size(string v)
        {
            var n = Int(v);
            return n is > 0 ? Math.Min(n.Value, 1000) : (float?)null;
        }
    }
}
