// Parte do visualizador de HTML do servidor que nao depende do Unity: o parser do NCHtmlViewer (ListParser), as entidades,
// as cores e a tabela do que o cliente aceita (tags e atributos). O layout fica em L2HtmlLayout.cs e a montagem em uGUI em
// L2Html.cs. Nada aqui usa UnityEngine, para o teste do corpus do aCis rodar tambem fora do Editor.
// Levantamento do original (REA): Docs/html_suporte.md. Enderecos e linhas do nwindow.c (nw:) citados la.
//   ListParser::CreateElementList (0x10090a50, nw:132438): lista de elementos {tipo, aberta/fechada, texto, atributos}.
//   FUN_1008e480 (nw:130614): nome da tag sem caixa, busca na tabela de 51 tags; desconhecida = tipo 2 (UNKNOWN), pula
//     ate o primeiro '>' ou '<'. '<' seguido de algo que nao e letra nem digito vira texto. "<!" (comentario, doctype)
//     tambem pula so ate o primeiro '>' ou '<'.
//   FUN_10090650 (nw:132251): atributos sem caixa; valor entre aspas duplas ou ate espaco, '>' ou '<' (aspas simples
//     ficam no valor); vale o primeiro repetido; sem entidades.
//   FUN_1008d690 (nw:130802): no texto, CR e LF somem; espacos do comeco caem (a nao ser depois de FONT) e os do fim
//     caem quando o elemento seguinte nao e FONT; espacos de dentro ficam. FUN_1008e880 (nw:130812): entidades.
using System;
using System.Collections.Generic;
using System.Globalization;
using System.Text;

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
        /// <summary>A tag nao esta na tabela do cliente (tipo 2, UNKNOWN).</summary>
        public bool Unknown;
        /// <summary>O fechamento (&lt;/tag&gt;) apareceu: o &lt;/font&gt; e o &lt;/center&gt; desempilham.</summary>
        public bool Closed;

        public string Attr(string k) => Attrs.TryGetValue(k, out var v) ? v : null;
    }

    /// <summary>
    /// Nomes das entidades &amp;$N; (sysstring), &amp;@N; (NPC), &amp;#N; (item), &amp;%N; &amp;^N; &amp;*N; (castelo, campos
    /// 1 a 3). Null = nao achou (o cliente poe "-").
    /// </summary>
    public interface IHtmlNames
    {
        string Name(char prefix, int n);
    }

    public static class HtmlDoc
    {
        // ------------------------------------------------------------ tabela do cliente (0x1034e9a8, 51 tags)
        /// <summary>Tags que o cliente reconhece (as que tem efeito e as que ele le e ignora).</summary>
        public static readonly HashSet<string> ClientTags = new()
        {
            "textcode", "unknown", "comment", "title", "extend", "img", "input", "select", "option", "textarea", "spin", "bar", "volumn",
            "var", "a", "br", "left", "right", "center", "font", "b", "i", "u", "tt", "strike", "sub", "sup", "p", "h1", "h2", "h3", "h4",
            "h5", "h6", "h7", "pre", "address", "ul", "ol", "li", "table", "tr", "td", "html", "body", "head", "button", "multiedit", "edit",
            "combobox", "br1",
        };

        /// <summary>Tags com efeito e os atributos que o cliente le de cada uma (listas de FUN_10080a90/FUN_100809b0).</summary>
        public static readonly Dictionary<string, string[]> Supported = new()
        {
            ["html"] = new[] { "imgsrc", "textani" },
            ["title"] = new string[0],
            ["br"] = new string[0],
            ["br1"] = new string[0],
            ["center"] = new string[0],
            ["font"] = new[] { "color" },
            ["a"] = new[] { "link", "action", "cmd", "msg" },
            ["button"] = new[] { "value", "action", "width", "height", "fore", "back" },
            ["img"] = new[] { "src", "width", "height" },
            ["table"] = new[] { "width", "height", "bgcolor", "border", "cellpadding", "cellspacing" },
            ["tr"] = new string[0],
            ["td"] = new[] { "align", "valign", "width", "height", "fixwidth" },
            ["edit"] = new[] { "var", "width", "height", "type", "length", "action" },
            ["multiedit"] = new[] { "var", "width", "height" },
            ["combobox"] = new[] { "var", "list", "sel", "width" },
        };

        /// <summary>
        /// O que o cliente le e descarta, com o motivo (a tag nao faz nada e o conteudo aparece; o atributo nao tem efeito).
        /// O teste do corpus aceita estes e falha em qualquer outro.
        /// </summary>
        public static readonly Dictionary<string, string> Ignored = new()
        {
            ["body"] = "tipo 45: ignorada",
            ["head"] = "tipo 46: ignorada",
            ["p"] = "tipo 28: ignorada (sem quebra nem espaco; ALIGN nao e lido)",
            ["b"] = "tipo 21: ignorada (sem negrito)",
            ["i"] = "tipo 22: ignorada",
            ["u"] = "tipo 23: ignorada",
            ["html@width"] = "nao lido", ["html@height"] = "nao lido", ["html@x"] = "nao lido", ["html@y"] = "nao lido",
            ["html@noscrollbar"] = "nao lido", ["html@querydelay"] = "nao lido",
            ["body@deffixedfont"] = "nao lido", ["body@deffon"] = "nao lido",
            ["font@face"] = "nao lido", ["font@size"] = "nao lido",
            ["a@href"] = "nao lido",
            ["button@msg"] = "a lista do BUTTON nao tem MSG: o botao manda a acao direto",
            ["img@align"] = "nao lido",
            ["img@tooltip"] = "nao lido",
            ["table@align"] = "na tabela do cliente esta escrito \"ALIGN,\": nunca casa",
            ["table@background"] = "nao lido (so bgcolor)",
            ["table@with"] = "erro de digitacao no HTML do servidor (width): nao lido",
            ["td@bgcolor"] = "nao lido: so a <table> tem bgcolor",
            ["td@background"] = "nao lido",
            ["td@fixheight"] = "nao existe na lista do TD",
            ["td@90"] = "erro de digitacao no HTML do servidor (admin/help: <td width 90>): width sem valor e '90' solto",
            ["edit@align"] = "nao lido",
            ["combobox@height"] = "nao existe: altura fixa 21",
            ["conter"] = "erro de digitacao no HTML do servidor (admin/skills): tag desconhecida, o conteudo aparece",
        };

        /// <summary>A tag/atributo tem efeito ou esta na lista do que o cliente ignora.</summary>
        public static bool Known(string tag, string attr = null)
        {
            // as tags da tabela do cliente sem efeito (input, select, h1, ul...) sao lidas e ignoradas
            if (attr == null) return Supported.ContainsKey(tag) || Ignored.ContainsKey(tag) || ClientTags.Contains(tag);
            if (Ignored.ContainsKey(tag + "@" + attr)) return true;
            if (Supported.TryGetValue(tag, out var a)) return Array.IndexOf(a, attr) >= 0;
            // tag ignorada: o atributo tambem
            return Ignored.ContainsKey(tag) || ClientTags.Contains(tag);
        }

        /// <summary>Tags e atributos de um documento que o porte nao conhece ("tag" ou "tag@atributo").</summary>
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

        // ------------------------------------------------------------ lista de elementos
        sealed class Tok
        {
            /// <summary>0 texto, 1 abre, 2 fecha, 3 pulado (comentario, doctype).</summary>
            public int Kind;
            public string Tag;
            public string Text;
            public bool Unknown;
            public Dictionary<string, string> Attrs;
        }

        static readonly HashSet<string> Void = new() { "br", "br1", "img", "edit", "multiedit", "combobox", "button", "input", "spin", "bar", "volumn" };

        static bool NameChar(char c) => char.IsLetterOrDigit(c);

        // pula ate o primeiro '>' (consome) ou '<' (para antes); devolve o indice seguinte
        static int SkipTag(string s, int k)
        {
            while (k < s.Length && s[k] != '>' && s[k] != '<') k++;
            return k < s.Length && s[k] == '>' ? k + 1 : k;
        }

        static List<Tok> Tokens(string html)
        {
            var l = new List<Tok>();
            var n = html.Length;
            var i = 0;
            var text = new StringBuilder();
            void Flush()
            {
                if (text.Length == 0) return;
                l.Add(new Tok { Kind = 0, Text = text.ToString() });
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
                var j = i + 1;
                if (j < n && html[j] == '!')
                {
                    // <!-- ... ou <!DOCTYPE: tipo 3 / desconhecida, ate o primeiro '>' ou '<'
                    Flush();
                    l.Add(new Tok { Kind = 3 });
                    i = SkipTag(html, j + 1);
                    continue;
                }
                var close = j < n && html[j] == '/';
                if (close) j++;
                if (j >= n || !NameChar(html[j]))
                {
                    // "<" seguido de algo que nao e letra nem digito: texto
                    text.Append(ch);
                    i++;
                    continue;
                }
                Flush();
                var k = j;
                while (k < n && NameChar(html[k])) k++;
                var tag = html.Substring(j, k - j).ToLowerInvariant();
                if (!ClientTags.Contains(tag))
                {
                    // tipo 2: pula ate '>' ou '<' (os atributos nao sao lidos)
                    l.Add(new Tok { Kind = close ? 2 : 1, Tag = tag, Unknown = true, Attrs = new Dictionary<string, string>() });
                    i = SkipTag(html, k);
                    continue;
                }
                var attrs = new Dictionary<string, string>();
                while (k < n && html[k] != '>' && html[k] != '<')
                {
                    if (char.IsWhiteSpace(html[k]) || html[k] == '/' || html[k] == '=')
                    {
                        k++;
                        continue;
                    }
                    var a0 = k;
                    while (k < n && !char.IsWhiteSpace(html[k]) && html[k] != '=' && html[k] != '>' && html[k] != '<') k++;
                    var name = html.Substring(a0, k - a0).ToLowerInvariant();
                    var e = k;
                    while (e < n && char.IsWhiteSpace(html[e])) e++;
                    string val = "";
                    if (e < n && html[e] == '=')
                    {
                        e++;
                        while (e < n && char.IsWhiteSpace(html[e])) e++;
                        if (e < n && html[e] == '"')
                        {
                            var q = html.IndexOf('"', e + 1);
                            if (q < 0) q = n;
                            val = html.Substring(e + 1, q - e - 1);
                            e = Math.Min(n, q + 1);
                        }
                        else
                        {
                            var v0 = e;
                            while (e < n && !char.IsWhiteSpace(html[e]) && html[e] != '>' && html[e] != '<') e++;
                            val = html.Substring(v0, e - v0);
                            // <img height=7 /> : a barra do fim nao faz parte do valor
                            if (val.EndsWith("/") && e < n && html[e] == '>') val = val.Substring(0, val.Length - 1);
                        }
                        k = e;
                    }
                    if (name.Length > 0 && !attrs.ContainsKey(name)) attrs[name] = val;
                }
                i = k < n && html[k] == '>' ? k + 1 : k;
                l.Add(new Tok { Kind = close ? 2 : 1, Tag = tag, Attrs = attrs });
                if (!close && (tag == "title" || tag == "extend"))
                {
                    // TITLE: o texto ate o proximo '<'; EXTEND: engolido cru ate </extend>
                    var end = tag == "title" ? html.IndexOf('<', i) : html.IndexOf("</extend", i, StringComparison.OrdinalIgnoreCase);
                    if (end < 0) end = n;
                    if (tag == "title") l.Add(new Tok { Kind = 0, Text = html.Substring(i, end - i), Tag = "#title" });
                    i = end;
                }
            }
            Flush();
            return l;
        }

        static bool IsFont(Tok t) => t != null && t.Kind is 1 or 2 && t.Tag == "font";

        /// <summary>FUN_1008d690: CR/LF somem; corta o comeco (salvo depois de FONT) e o fim (salvo antes de FONT).</summary>
        static string Trim(string s, Tok prev, Tok next)
        {
            s = s.Replace("\r", "").Replace("\n", "");
            if (!IsFont(prev)) s = s.TrimStart(' ', '\t');
            if (!IsFont(next)) s = s.TrimEnd(' ', '\t');
            return s;
        }

        // ------------------------------------------------------------ arvore
        /// <summary>Analisa o HTML. `names` resolve &amp;$N; &amp;@N; &amp;#N; (nulo = "-").</summary>
        public static HtmlNode Parse(string html, IHtmlNames names = null)
        {
            var root = new HtmlNode { Tag = "#root" };
            var toks = Tokens(html ?? "");
            var cur = root;
            for (var t = 0; t < toks.Count; t++)
            {
                var tk = toks[t];
                switch (tk.Kind)
                {
                    case 0:
                    {
                        var s = tk.Tag == "#title" ? tk.Text : Trim(tk.Text, t > 0 ? toks[t - 1] : null, t + 1 < toks.Count ? toks[t + 1] : null);
                        if (s.Length == 0) continue;
                        s = Decode(s, names);
                        if (s.Length == 0) continue;
                        cur.Children.Add(new HtmlNode { Text = s, Parent = cur });
                        continue;
                    }
                    case 2:
                        // fecha o elemento aberto mais proximo com essa tag (se houver)
                        for (var p = cur; p != null && p != root; p = p.Parent)
                        {
                            if (p.Tag != tk.Tag) continue;
                            p.Closed = true;
                            cur = p.Parent;
                            break;
                        }
                        continue;
                    case 1:
                    {
                        // <tr>/<td> implicitos: abrir outro fecha o anterior
                        if (tk.Tag == "tr") CloseOpen(ref cur, root, "tr", "table", null);
                        else if (tk.Tag == "td") CloseOpen(ref cur, root, "td", "tr", "table");
                        var node = new HtmlNode { Tag = tk.Tag, Attrs = tk.Attrs, Parent = cur, Unknown = tk.Unknown };
                        cur.Children.Add(node);
                        if (!tk.Unknown && !Void.Contains(tk.Tag)) cur = node;
                        continue;
                    }
                }
            }
            return root;
        }

        // fecha um `tag` aberto, parando nos limites
        static void CloseOpen(ref HtmlNode cur, HtmlNode root, string tag, string stop1, string stop2)
        {
            for (var p = cur; p != null && p != root; p = p.Parent)
            {
                if (p.Tag == stop1 || p.Tag == stop2) return;
                if (p.Tag == tag)
                {
                    cur = p.Parent;
                    return;
                }
            }
        }

        // ------------------------------------------------------------ entidades (FUN_1008e880, tabelas 0x1034efcc / 0x1034efec)
        static readonly (string from, string to)[] Fixed =
        {
            ("&nbsp;", " "), ("&apos;", "'"), ("&quot;", "\""), ("&amp;", "&"), ("&lt;", "<"), ("&gt;", "> "), ("&#160;", " "),
            // o 8o valor da tabela cai na tabela de prefixos (dado observado; o efeito na tela e [V])
            ("&#10;", "&$"),
        };

        static readonly char[] Prefixes = { '$', '%', '^', '*', '@', '#' };

        /// <summary>
        /// Entidades do cliente, com caixa: &amp;nbsp; &amp;apos; &amp;quot; &amp;amp; &amp;lt; &amp;gt; (vira "&gt; ") &amp;#160;,
        /// depois os nomes &amp;$N; (sysstring), &amp;@N; (NPC), &amp;#N; (item), &amp;% &amp;^ &amp;* (castelo). Sem nome: "-";
        /// N = 0 ou nao numerico: o trecho ate o ';' some (o ';' fica).
        /// </summary>
        public static string Decode(string s, IHtmlNames names = null)
        {
            if (s.IndexOf('&') < 0) return s;
            foreach (var (from, to) in Fixed) s = s.Replace(from, to);
            foreach (var p in Prefixes)
            {
                var key = "&" + p;
                var i = s.IndexOf(key, StringComparison.Ordinal);
                while (i >= 0)
                {
                    var semi = s.IndexOf(';', i + 2);
                    if (semi < 0) break;
                    var num = s.Substring(i + 2, semi - i - 2);
                    string rep;
                    if (int.TryParse(num, NumberStyles.None, CultureInfo.InvariantCulture, out var id) && id > 0)
                    {
                        rep = names?.Name(p, id) ?? "-";
                        s = s.Substring(0, i) + rep + s.Substring(semi + 1);
                    }
                    else
                    {
                        rep = "";
                        s = s.Substring(0, i) + s.Substring(semi);
                    }
                    i = s.IndexOf(key, i + rep.Length, StringComparison.Ordinal);
                }
            }
            return s;
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

        // ------------------------------------------------------------ atributos
        /// <summary>GetMatchedColor (0x100825d0): "LEVEL" exato.</summary>
        public const uint Level = 0xFFFFCC00;

        /// <summary>
        /// GetMatchedColor (0x100825d0, nw:119811): "LEVEL" (exato) = 0xFFFFCC00; qualquer outro = wcstoul("0xff" + valor, 16):
        /// RRGGBB = 0xFFRRGGBB; "#RRGGBB" e nomes param no primeiro caractere que nao e hexa (0x000000FF); mais de 8
        /// digitos = 0xFFFFFFFF. Null so sem valor.
        /// </summary>
        public static uint? Color(string v)
        {
            if (v == null) return null;
            if (v == "LEVEL") return Level;
            var digits = new StringBuilder("ff");
            foreach (var c in v)
            {
                if (!Uri.IsHexDigit(c)) break;
                digits.Append(c);
            }
            if (digits.Length > 8) return 0xFFFFFFFF;
            return uint.Parse(digits.ToString(), NumberStyles.HexNumber, CultureInfo.InvariantCulture);
        }

        /// <summary>"#rrggbb" de uma cor ARGB (rich text do uGUI).</summary>
        public static string Hex(uint argb) => "#" + (argb & 0xFFFFFF).ToString("x6", CultureInfo.InvariantCulture);

        /// <summary>atoi: o inteiro do comeco do atributo (width=32, height="21"), ou null sem digitos.</summary>
        public static int? Int(string v)
        {
            if (string.IsNullOrEmpty(v)) return null;
            var s = v.Trim();
            var k = 0;
            if (k < s.Length && (s[k] == '-' || s[k] == '+')) k++;
            var d0 = k;
            while (k < s.Length && char.IsDigit(s[k])) k++;
            if (k == d0) return null;
            return int.TryParse(s.Substring(0, k), NumberStyles.AllowLeadingSign, CultureInfo.InvariantCulture, out var n) ? n : (int?)null;
        }

        /// <summary>O valor termina em '%' (largura percentual da tabela).</summary>
        public static bool Percent(string v) => !string.IsNullOrEmpty(v) && v.Trim().EndsWith("%");
    }
}
