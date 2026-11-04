// Layout do HTML do servidor como o NCHtmlViewer: cada tag vira um "objeto" (texto, link, botao, imagem, campo, tabela)
// posto em linhas da esquerda para a direita, quebrando quando passa da largura; a linha tem a altura do maior objeto e
// os objetos sao alinhados pelo align do bloco (center/right). A tabela calcula as larguras das colunas (width fixo,
// o resto dividido igualmente), faz o layout de cada celula com a largura dela e a linha da tabela fica com a altura da
// maior celula. O resultado e uma lista de caixas em pixels (x para a direita, y para baixo) que o L2Html monta em uGUI.
// Sem UnityEngine: a medida do texto vem de IHtmlMeasure (TextGenerator no jogo, uma tabela fixa nos testes).
using System;
using System.Collections.Generic;
using System.Text;
using System.Text.RegularExpressions;

namespace L2Web.UI
{
    /// <summary>Medida do texto na fonte do viewer.</summary>
    public interface IHtmlMeasure
    {
        /// <summary>Largura em pixels de `text` (sem quebra).</summary>
        float Width(string text);
        /// <summary>Altura de uma linha de texto.</summary>
        float LineHeight { get; }
    }

    public enum HtmlBoxKind
    {
        /// <summary>Trecho de texto (uma linha, sem quebra).</summary>
        Text,
        /// <summary>Trecho de link (uma linha; um link quebrado vira varios trechos com a mesma acao).</summary>
        Link,
        Button,
        Edit,
        MultiEdit,
        Combo,
        /// <summary>Textura (img src, ou fundo de celula/tabela).</summary>
        Image,
        /// <summary>Retangulo de cor solida (bgcolor).</summary>
        Fill,
    }

    /// <summary>Uma caixa do layout em pixels do viewer.</summary>
    public sealed class HtmlBox
    {
        public HtmlBoxKind Kind;
        public float X, Y, W, H;
        public string Text;
        /// <summary>Cor ARGB (texto, link, fill).</summary>
        public uint Color;
        public string Action;
        /// <summary>msg="id;texto" (confirmacao antes da acao).</summary>
        public string Msg;
        public string Var;
        public string[] Options;
        /// <summary>Textura (img src, background).</summary>
        public string Tex;
        /// <summary>Texturas do botao: fore = normal, back = pressionado.</summary>
        public string Fore, Back;
        /// <summary>edit type (number, password...).</summary>
        public string Type;
        /// <summary>Indice do link/botao no documento (os trechos de um mesmo link tem o mesmo).</summary>
        public int Id;

        public override string ToString() => $"{Kind} {X},{Y} {W}x{H} {Text ?? Tex ?? Fore}";
    }

    public sealed class HtmlLayoutResult
    {
        public string Title = "";
        public float Width, Height;
        public readonly List<HtmlBox> Boxes = new();
    }

    public static class HtmlLayout
    {
        // ------------------------------------------------------------ medidas (NCHtmlTagInfo / NCHtmlViewer)
        /// <summary>Cor padrao do texto.</summary>
        public static uint TextColor = 0xFFDCD9CF;
        /// <summary>NCHtmlTagInfo::Draw: link em 0xFF6699FF.</summary>
        public static uint LinkColor = 0xFF6699FF;
        /// <summary>NCHtmlTagInfo::LoadHtml: o &lt;br&gt; e um objeto 1 x 9 (altura de uma linha vazia).</summary>
        public static float BrHeight = 9;
        /// <summary>O botao ocupa height + 6 na linha (3 em cima, 3 embaixo).</summary>
        public static float ButtonPad = 3;
        /// <summary>Largura e altura padrao do botao sem width/height.</summary>
        public static float ButtonW = 80, ButtonH = 21;
        /// <summary>Edit sem width/height.</summary>
        public static float EditW = 120, EditH = 18, MultiEditH = 40;
        /// <summary>Combobox sem width/height.</summary>
        public static float ComboW = 80, ComboH = 18;
        /// <summary>cellpadding / cellspacing padrao da tabela.</summary>
        public static float CellPadding = 0, CellSpacing = 0;
        /// <summary>Espaco antes e depois do &lt;p&gt;.</summary>
        public static float ParagraphGap = 0;

        // ------------------------------------------------------------ estado
        sealed class Obj
        {
            public HtmlBoxKind Kind;
            public float W, H;
            /// <summary>Margem vertical (botao: 3 em cima e embaixo).</summary>
            public float PadY;
            public HtmlBox Box;
            /// <summary>Caixas de uma tabela/celula (relativas ao objeto).</summary>
            public List<HtmlBox> Inner;
            public bool Break;
            /// <summary>Texto: espaco entre este e o objeto anterior da mesma corrida (para juntar).</summary>
            public bool IsWord, SpaceBefore;
        }

        sealed class Flow
        {
            public float Width;
            public float Y;
            public Align Align = Align.Left;
            public readonly List<Obj> Line = new();
            public float LineW;
            public readonly List<HtmlBox> Out = new();
            public uint Color = TextColor;
            public bool Bold;
            public IHtmlMeasure M;
            public Ctx Doc;
            /// <summary>Largura minima pedida pelo conteudo (para a tabela sem width).</summary>
            public float MaxRight;
            public bool PendingSpace;
        }

        sealed class Ctx
        {
            public int NextId;
        }

        public enum Align
        {
            Left,
            Center,
            Right,
        }

        public enum VAlign
        {
            Top,
            Middle,
            Bottom,
        }

        /// <summary>Layout de um documento (raiz do HtmlDoc.Parse) numa largura.</summary>
        public static HtmlLayoutResult Run(HtmlNode doc, float width, IHtmlMeasure m)
        {
            var r = new HtmlLayoutResult { Width = width };
            var title = HtmlDoc.Find(doc, "title");
            if (title != null) r.Title = Regex.Replace(HtmlDoc.InnerText(title), @"\s+", " ").Trim();
            var f = new Flow { Width = width, M = m, Doc = new Ctx() };
            Walk(doc, f);
            EndLine(f, false);
            r.Height = f.Y;
            r.Boxes.AddRange(f.Out);
            return r;
        }

        /// <summary>Layout de um HTML (texto) numa largura.</summary>
        public static HtmlLayoutResult Run(string html, float width, IHtmlMeasure m) => Run(HtmlDoc.Parse(html ?? ""), width, m);

        // ------------------------------------------------------------ fluxo
        static void Walk(HtmlNode src, Flow f)
        {
            foreach (var n in src.Children)
            {
                if (n.Tag == null)
                {
                    AddText(f, n.Text, null, 0);
                    continue;
                }
                switch (n.Tag)
                {
                    case "head":
                        // <HEAD> sem </HEAD> (server_help.htm): o <BODY> fica dentro dele
                        foreach (var hc in n.Children)
                            if (hc.Tag == "body")
                                Walk(hc, f);
                        continue;
                    case "title":
                    case "script":
                    case "style":
                        continue;
                    case "br":
                        Add(f, new Obj { Kind = HtmlBoxKind.Text, W = 0, H = BrHeight, Break = true });
                        continue;
                    case "br1":
                        Add(f, new Obj { Kind = HtmlBoxKind.Text, W = 0, H = 0, Break = true });
                        continue;
                    case "p":
                    {
                        EndLine(f, false);
                        f.Y += ParagraphGap;
                        var al = f.Align;
                        f.Align = AlignOf(n.Attr("align"), f.Align);
                        Walk(n, f);
                        EndLine(f, false);
                        f.Align = al;
                        f.Y += ParagraphGap;
                        continue;
                    }
                    case "center":
                    {
                        EndLine(f, false);
                        var al = f.Align;
                        f.Align = Align.Center;
                        Walk(n, f);
                        EndLine(f, false);
                        f.Align = al;
                        continue;
                    }
                    case "font":
                    {
                        var old = f.Color;
                        f.Color = HtmlDoc.Color(n.Attr("color")) ?? f.Color;
                        Walk(n, f);
                        f.Color = old;
                        continue;
                    }
                    case "a":
                    {
                        var id = ++f.Doc.NextId;
                        var label = new StringBuilder();
                        Collect(n, label);
                        AddText(f, label.ToString(), n, id);
                        continue;
                    }
                    case "button":
                    {
                        var w = HtmlDoc.Size(n.Attr("width")) ?? ButtonW;
                        var h = HtmlDoc.Size(n.Attr("height")) ?? ButtonH;
                        var box = new HtmlBox
                        {
                            Kind = HtmlBoxKind.Button, W = w, H = h, Text = n.Attr("value") ?? "", Action = n.Attr("action") ?? "", Msg = n.Attr("msg"),
                            Fore = n.Attr("fore"), Back = n.Attr("back"), Id = ++f.Doc.NextId, Color = TextColor,
                        };
                        Add(f, new Obj { Kind = HtmlBoxKind.Button, W = w, H = h, PadY = ButtonPad, Box = box });
                        continue;
                    }
                    case "edit":
                    case "multiedit":
                    {
                        var multi = n.Tag == "multiedit";
                        var w = HtmlDoc.Size(n.Attr("width")) ?? EditW;
                        var h = HtmlDoc.Size(n.Attr("height")) ?? (multi ? MultiEditH : EditH);
                        var box = new HtmlBox { Kind = multi ? HtmlBoxKind.MultiEdit : HtmlBoxKind.Edit, W = w, H = h, Var = n.Attr("var"), Type = n.Attr("type") };
                        Add(f, new Obj { Kind = box.Kind, W = w, H = h, Box = box });
                        continue;
                    }
                    case "combobox":
                    {
                        var w = HtmlDoc.Size(n.Attr("width")) ?? ComboW;
                        var h = HtmlDoc.Size(n.Attr("height")) ?? ComboH;
                        var opts = new List<string>();
                        foreach (var o in (n.Attr("list") ?? "").Split(';'))
                            if (o.Length > 0) opts.Add(o);
                        var box = new HtmlBox { Kind = HtmlBoxKind.Combo, W = w, H = h, Var = n.Attr("var"), Options = opts.ToArray() };
                        Add(f, new Obj { Kind = HtmlBoxKind.Combo, W = w, H = h, Box = box });
                        continue;
                    }
                    case "img":
                    {
                        var isrc = n.Attr("src");
                        var w = HtmlDoc.Size(n.Attr("width")) ?? 0;
                        var h = HtmlDoc.Size(n.Attr("height")) ?? 0;
                        var box = new HtmlBox { Kind = HtmlBoxKind.Image, W = w, H = h, Tex = string.IsNullOrEmpty(isrc) ? null : isrc };
                        Add(f, new Obj { Kind = HtmlBoxKind.Image, W = w, H = h, Box = box });
                        continue;
                    }
                    case "table":
                        Table(n, f);
                        continue;
                    default:
                        // html, body e as tags que o cliente nao conhece: so o conteudo
                        Walk(n, f);
                        continue;
                }
            }
        }

        static Align AlignOf(string v, Align dflt)
        {
            switch ((v ?? "").Trim().ToLowerInvariant())
            {
                case "center": return Align.Center;
                case "right": return Align.Right;
                case "left": return Align.Left;
                default: return dflt;
            }
        }

        static VAlign VAlignOf(string v, VAlign dflt)
        {
            switch ((v ?? "").Trim().ToLowerInvariant())
            {
                case "top": return VAlign.Top;
                case "middle":
                case "center": return VAlign.Middle;
                case "bottom": return VAlign.Bottom;
                default: return dflt;
            }
        }

        // texto do link (o cliente le o texto entre <a> e </a>; tags dentro dele so contribuem o texto)
        static void Collect(HtmlNode n, StringBuilder sb)
        {
            foreach (var c in n.Children)
            {
                if (c.Tag == null) sb.Append(c.Text);
                else if (c.Tag == "br" || c.Tag == "br1") sb.Append(' ');
                else Collect(c, sb);
            }
        }

        static readonly Regex Ws = new(@"[ \t\r\n\f\v]+");

        // quebra o texto em palavras e poe na linha (link = mesma cor do link e a acao)
        static void AddText(Flow f, string raw, HtmlNode link, int id)
        {
            if (string.IsNullOrEmpty(raw)) return;
            var t = Ws.Replace(raw, " ");
            if (t.Length == 0) return;
            if (t[0] == ' ') f.PendingSpace = true;
            var words = t.Split(' ');
            var first = true;
            foreach (var w0 in words)
            {
                if (!first) f.PendingSpace = true;
                first = false;
                if (w0.Length == 0) continue;
                var w = w0.Replace(' ', ' ');
                var kind = link != null ? HtmlBoxKind.Link : HtmlBoxKind.Text;
                var box = new HtmlBox
                {
                    Kind = kind, Text = w, Color = link != null ? LinkColor : f.Color, Id = id,
                    Action = link?.Attr("action") ?? (link != null ? "" : null), Msg = link?.Attr("msg"),
                };
                var space = f.PendingSpace && f.Line.Count > 0;
                f.PendingSpace = false;
                Add(f, new Obj { Kind = kind, W = f.M.Width(w), H = f.M.LineHeight, Box = box, IsWord = true, SpaceBefore = space });
            }
            if (t[t.Length - 1] == ' ') f.PendingSpace = true;
        }

        static float SpaceW(Flow f) => f.M.Width(" ");

        // poe um objeto na linha; quebra antes se nao cabe (a nao ser que a linha esteja vazia)
        static void Add(Flow f, Obj o)
        {
            if (o.Break)
            {
                // br/br1: entra na linha (a altura dele conta so se a linha estiver vazia) e fecha
                if (f.Line.Count == 0) f.Line.Add(o);
                EndLine(f, true);
                return;
            }
            var gap = o.SpaceBefore ? SpaceW(f) : 0;
            if (f.Line.Count > 0 && f.LineW + gap + o.W > f.Width + 0.01f)
            {
                EndLine(f, false);
                gap = 0;
                o.SpaceBefore = false;
            }
            if (!o.IsWord && f.PendingSpace && f.Line.Count > 0) gap = SpaceW(f);
            f.PendingSpace = false;
            o.SpaceBefore = gap > 0;
            f.Line.Add(o);
            f.LineW += gap + o.W;
        }

        /// <summary>Fecha a linha: altura = maior objeto; alinha e gera as caixas.</summary>
        static void EndLine(Flow f, bool fromBreak)
        {
            if (f.Line.Count == 0)
            {
                f.PendingSpace = false;
                return;
            }
            float h = 0;
            foreach (var o in f.Line) h = Math.Max(h, o.H + 2 * o.PadY);
            var lw = f.LineW;
            var x = f.Align == Align.Center ? Math.Max(0, (f.Width - lw) / 2) : f.Align == Align.Right ? Math.Max(0, f.Width - lw) : 0;
            x = (float)Math.Floor(x);
            HtmlBox run = null;
            var sw = SpaceW(f);
            foreach (var o in f.Line)
            {
                if (o.SpaceBefore) x += sw;
                // objetos alinhados pela base da linha (texto e botoes na mesma linha)
                var y = f.Y + h - o.H - o.PadY;
                if (o.IsWord)
                {
                    // palavras seguidas com a mesma cor/acao viram um trecho so
                    if (run != null && run.Kind == o.Box.Kind && run.Color == o.Box.Color && run.Id == o.Box.Id && Math.Abs(run.X + run.W - (x - (o.SpaceBefore ? sw : 0))) < 0.01f)
                    {
                        run.Text += (o.SpaceBefore ? " " : "") + o.Box.Text;
                        run.W = x + o.W - run.X;
                    }
                    else
                    {
                        run = o.Box;
                        run.X = x;
                        run.Y = y;
                        run.W = o.W;
                        run.H = o.H;
                        f.Out.Add(run);
                    }
                }
                else
                {
                    run = null;
                    if (o.Inner != null)
                        foreach (var b in o.Inner)
                        {
                            b.X += x;
                            b.Y += y;
                            f.Out.Add(b);
                        }
                    else if (o.Box != null)
                    {
                        o.Box.X = x;
                        o.Box.Y = y;
                        o.Box.W = o.W;
                        o.Box.H = o.H;
                        f.Out.Add(o.Box);
                    }
                }
                x += o.W;
            }
            f.MaxRight = Math.Max(f.MaxRight, lw);
            f.Y += h;
            f.Line.Clear();
            f.LineW = 0;
            f.PendingSpace = false;
        }

        // ------------------------------------------------------------ tabela
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

        static List<HtmlNode> Cells(HtmlNode tr)
        {
            var l = new List<HtmlNode>();
            foreach (var c in tr.Children)
                if (c.Tag == "td" || c.Tag == "th")
                    l.Add(c);
            return l;
        }

        /// <summary>Largura pedida pela celula: fixwidth, senao width.</summary>
        static float? CellWidth(HtmlNode td) => HtmlDoc.Size(td.Attr("fixwidth")) ?? HtmlDoc.Size(td.Attr("width"));

        static void Table(HtmlNode t, Flow f)
        {
            // a tabela comeca numa linha nova e a proxima coisa vem embaixo dela
            EndLine(f, false);
            var pad = HtmlDoc.Int(t.Attr("cellpadding")) is int cp && cp >= 0 ? cp : CellPadding;
            var spacing = HtmlDoc.Int(t.Attr("cellspacing")) is int cs && cs >= 0 ? cs : CellSpacing;
            var border = HtmlDoc.Int(t.Attr("border")) ?? 0;
            var rows = new List<List<HtmlNode>>();
            foreach (var tr in Rows(t)) rows.Add(Cells(tr));
            var cols = 0;
            foreach (var r in rows) cols = Math.Max(cols, r.Count);
            var tw = HtmlDoc.Size(t.Attr("width"));
            // larguras das colunas: o maior width de cada coluna; as sem width dividem o que sobra
            var colW = new float?[cols];
            foreach (var r in rows)
                for (var i = 0; i < r.Count; i++)
                {
                    var cw = CellWidth(r[i]);
                    if (cw != null) colW[i] = Math.Max(colW[i] ?? 0, cw.Value);
                }
            var avail = tw ?? f.Width;
            float fixedSum = 0;
            var free = 0;
            for (var i = 0; i < cols; i++)
            {
                if (colW[i] != null) fixedSum += colW[i].Value;
                else free++;
            }
            var inner = avail - spacing * (cols + 1);
            var widths = new float[cols];
            if (tw == null && free > 0)
            {
                // tabela sem width: as colunas sem width ficam com a largura do conteudo, limitada ao que sobra
                var rest = Math.Max(0, inner - fixedSum);
                var natural = new float[cols];
                foreach (var r in rows)
                    for (var i = 0; i < r.Count; i++)
                        if (colW[i] == null)
                            natural[i] = Math.Max(natural[i], Natural(r[i], f, rest) + 2 * pad);
                float nsum = 0;
                for (var i = 0; i < cols; i++)
                    if (colW[i] == null)
                        nsum += natural[i];
                for (var i = 0; i < cols; i++)
                    widths[i] = colW[i] ?? (nsum <= rest || nsum <= 0 ? natural[i] : natural[i] * rest / nsum);
            }
            else
            {
                var each = free > 0 ? Math.Max(0, (inner - fixedSum) / free) : 0;
                for (var i = 0; i < cols; i++) widths[i] = colW[i] ?? each;
            }
            float total = spacing;
            for (var i = 0; i < cols; i++) total += widths[i] + spacing;
            var tableW = tw ?? total;
            var boxes = new List<HtmlBox>();
            var bg = HtmlDoc.Color(t.Attr("bgcolor"));
            var tbg = t.Attr("background");
            var tableBgIndex = boxes.Count;
            float y = spacing;
            foreach (var r in rows)
            {
                // altura da linha = maior celula (ou height)
                var cellsOut = new List<(List<HtmlBox> boxes, float x, float w, float h, VAlign va, HtmlNode td)>();
                float rowH = 0;
                float x = spacing;
                for (var i = 0; i < r.Count; i++)
                {
                    var td = r[i];
                    var w = widths[i];
                    var sub = new Flow
                    {
                        Width = Math.Max(0, w - 2 * pad), M = f.M, Doc = f.Doc, Color = f.Color, Bold = f.Bold || td.Tag == "th",
                        Align = AlignOf(td.Attr("align"), Align.Left),
                    };
                    Walk(td, sub);
                    EndLine(sub, false);
                    var ch = sub.Y + 2 * pad;
                    var fh = HtmlDoc.Size(td.Attr("fixheight")) ?? HtmlDoc.Size(td.Attr("height"));
                    if (fh != null) ch = Math.Max(ch, fh.Value);
                    rowH = Math.Max(rowH, ch);
                    cellsOut.Add((sub.Out, x, w, sub.Y, VAlignOf(td.Attr("valign"), VAlign.Middle), td));
                    x += w + spacing;
                }
                var trH = HtmlDoc.Size(r.Count > 0 ? r[0].Parent?.Attr("height") : null);
                if (trH != null) rowH = Math.Max(rowH, trH.Value);
                foreach (var c in cellsOut)
                {
                    var cbg = HtmlDoc.Color(c.td.Attr("bgcolor"));
                    if (cbg != null) boxes.Add(new HtmlBox { Kind = HtmlBoxKind.Fill, X = c.x, Y = y, W = c.w, H = rowH, Color = cbg.Value });
                    var cb = c.td.Attr("background");
                    if (!string.IsNullOrEmpty(cb)) boxes.Add(new HtmlBox { Kind = HtmlBoxKind.Image, X = c.x, Y = y, W = c.w, H = rowH, Tex = cb });
                    var dy = c.va == VAlign.Top ? pad : c.va == VAlign.Bottom ? rowH - pad - c.h : (rowH - c.h) / 2;
                    dy = (float)Math.Floor(dy);
                    foreach (var b in c.boxes)
                    {
                        b.X += c.x + pad;
                        b.Y += y + dy;
                        boxes.Add(b);
                    }
                    if (border > 0) Frame(boxes, c.x, y, c.w, rowH, border);
                }
                y += rowH + spacing;
            }
            var tableH = Math.Max(y, HtmlDoc.Size(t.Attr("height")) ?? 0);
            if (!string.IsNullOrEmpty(tbg)) boxes.Insert(tableBgIndex, new HtmlBox { Kind = HtmlBoxKind.Image, X = 0, Y = 0, W = tableW, H = tableH, Tex = tbg });
            if (bg != null) boxes.Insert(tableBgIndex, new HtmlBox { Kind = HtmlBoxKind.Fill, X = 0, Y = 0, W = tableW, H = tableH, Color = bg.Value });
            if (border > 0) Frame(boxes, 0, 0, tableW, tableH, border);
            // a tabela e um objeto na sua propria linha, alinhado pelo align dela (ou o do bloco)
            var al = f.Align;
            f.Align = AlignOf(t.Attr("align"), f.Align);
            f.Line.Add(new Obj { Kind = HtmlBoxKind.Fill, W = tableW, H = tableH, Inner = boxes });
            f.LineW = tableW;
            EndLine(f, false);
            f.Align = al;
        }

        static void Frame(List<HtmlBox> boxes, float x, float y, float w, float h, int b)
        {
            const uint c = 0xFF808080;
            boxes.Add(new HtmlBox { Kind = HtmlBoxKind.Fill, X = x, Y = y, W = w, H = b, Color = c });
            boxes.Add(new HtmlBox { Kind = HtmlBoxKind.Fill, X = x, Y = y + h - b, W = w, H = b, Color = c });
            boxes.Add(new HtmlBox { Kind = HtmlBoxKind.Fill, X = x, Y = y, W = b, H = h, Color = c });
            boxes.Add(new HtmlBox { Kind = HtmlBoxKind.Fill, X = x + w - b, Y = y, W = b, H = h, Color = c });
        }

        // largura natural do conteudo de uma celula (a maior linha sem quebrar, limitada a `max`)
        static float Natural(HtmlNode td, Flow f, float max)
        {
            var sub = new Flow { Width = Math.Max(1, max), M = f.M, Doc = new Ctx(), Color = f.Color };
            Walk(td, sub);
            EndLine(sub, false);
            return Math.Min(max, sub.MaxRight);
        }
    }
}
