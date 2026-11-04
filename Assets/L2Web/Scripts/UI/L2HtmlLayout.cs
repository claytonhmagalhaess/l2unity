// Layout do HTML do servidor como o NCHtmlViewer (REA em Docs/html_suporte.md; nw: = linha do nwindow.c):
//   NCHtmlFrame::LoadHtml (0x100876c0, nw:124333) cria as "unidades" do corpo e de cada td; NCHtmlFrame::Align
//   (0x10082a10, nw:120091) as empilha em y. So o texto corre na linha: trechos de texto seguidos (com <font> entre eles)
//   continuam na mesma linha e quebram na largura. Imagem, botao, edit, multiedit, combobox, tabela, <br> (1 x 9) e <br1>
//   (1 x 0) ficam cada um na sua linha, em x = 0 ou alinhados pelo topo da pilha de alinhamento (<center>, td align).
//   Unidade de texto: altura = linhas x (altura do 'A' + 6). Botao e edit ocupam h + 6.
//   NCHtmlTable (LoadHtml 0x100860a0, Align 0x10083d10): coluna = maior td (width e minimo, fixwidth fixa), largura
//   natural = soma(col + 2(border + padding) + spacing) + spacing + 2 border; com width ou estouro as colunas escalam na
//   proporcao; celula = max(height, conteudo) - 6; valign padrao meio; bgcolor so na tabela inteira.
// O resultado e uma lista de caixas em pixels (x para a direita, y para baixo) que o L2Html monta em uGUI. Sem UnityEngine:
// a medida do texto vem de IHtmlMeasure (TextGenerator no jogo, uma tabela fixa nos testes).
using System;
using System.Collections.Generic;
using System.Text;

namespace L2Web.UI
{
    /// <summary>Medida do texto na fonte do viewer.</summary>
    public interface IHtmlMeasure
    {
        /// <summary>Largura em pixels de `text` (sem quebra).</summary>
        float Width(string text);
        /// <summary>Altura do glifo 'A' (GetTextSize de uma linha).</summary>
        float GlyphHeight { get; }
    }

    public enum HtmlBoxKind
    {
        /// <summary>Trecho de texto (uma linha, sem quebra).</summary>
        Text,
        /// <summary>Trecho de link (uma linha; um link quebrado vira varios trechos com o mesmo Id).</summary>
        Link,
        Button,
        Edit,
        MultiEdit,
        Combo,
        /// <summary>Textura 1:1 (img src), repetida ou cortada no tamanho da caixa.</summary>
        Image,
        /// <summary>Retangulo de cor solida (bgcolor, border).</summary>
        Fill,
    }

    public enum HtmlLinkType
    {
        None,
        /// <summary>&lt;a action&gt;: NCActionLinker (bypass / link / write).</summary>
        Action,
        /// <summary>&lt;a link&gt;: NCFileLinker, carrega o HTML local.</summary>
        File,
        /// <summary>&lt;a cmd&gt;: NCChatWnd::ExecuteCommand.</summary>
        Command,
    }

    /// <summary>Uma caixa do layout em pixels do viewer.</summary>
    public sealed class HtmlBox
    {
        public HtmlBoxKind Kind;
        public float X, Y, W, H;
        public string Text;
        /// <summary>Cor ARGB (texto, link, fill).</summary>
        public uint Color;
        public HtmlLinkType LinkType;
        /// <summary>action (link/botao/edit), arquivo (link=) ou comando (cmd=).</summary>
        public string Action;
        /// <summary>msg="id;texto" do &lt;a action&gt; (confirmacao antes da acao).</summary>
        public string Msg;
        public string Var;
        public string[] Options;
        /// <summary>combobox sel=.</summary>
        public string Sel;
        /// <summary>Textura (img src).</summary>
        public string Tex;
        /// <summary>Texturas do botao: fore = normal, back = pressionado.</summary>
        public string Fore, Back;
        /// <summary>edit type (normal, password, number, date, time).</summary>
        public string Type;
        /// <summary>edit length (0 = pela largura).</summary>
        public int Length;
        /// <summary>Indice do link/botao no documento (os trechos de um mesmo link tem o mesmo).</summary>
        public int Id;

        public HtmlBox Copy() => (HtmlBox)MemberwiseClone();

        public override string ToString() => $"{Kind} {X},{Y} {W}x{H} {Text ?? Tex ?? Fore}";
    }

    public sealed class HtmlLayoutResult
    {
        public string Title = "";
        public float Width, Height;
        /// <summary>html imgsrc (fundo do viewer); null = "Transparent"/sem.</summary>
        public string Background;
        /// <summary>html textani="1" (animacao do texto; o porte nao anima).</summary>
        public bool TextAnim;
        public readonly List<HtmlBox> Boxes = new();
    }

    public static class HtmlLayout
    {
        // ------------------------------------------------------------ medidas e cores (REA)
        /// <summary>Texto: 0xFFDCDCDC.</summary>
        public static uint TextColor = 0xFFDCDCDC;
        /// <summary>Link: 0xFF6699FF sublinhado (a cor do &lt;font&gt; em volta, se houver).</summary>
        public static uint LinkColor = 0xFF6699FF;
        /// <summary>Borda da tabela: 0xFFDCDCDC.</summary>
        public static uint BorderColor = 0xFFDCDCDC;
        /// <summary>&lt;br&gt; = unidade 1 x 9; &lt;br1&gt; = 1 x 0.</summary>
        public const float BrHeight = 9, Br1Height = 0;
        /// <summary>Espaco abaixo de cada unidade de texto, botao e edit (GetTextSize + 6).</summary>
        public const float Gap = 6;
        /// <summary>Padroes: button 10 x 10, edit 50 x 15, multiedit 50 x 40, combobox 30 x 21 (altura fixa).</summary>
        public const float ButtonW = 10, ButtonH = 10, EditW = 50, EditH = 15, MultiEditW = 50, MultiEditH = 40, ComboW = 30, ComboH = 21;
        /// <summary>Padroes da tabela: cellpadding 1, cellspacing 2, border 0.</summary>
        public const int CellPadding = 1, CellSpacing = 2;

        public enum Align
        {
            Left,
            Center,
            Right,
        }

        enum VAlign
        {
            Top,
            Middle,
            Bottom,
        }

        // ------------------------------------------------------------ unidades
        sealed class Span
        {
            public string Text;
            public uint Color;
            public HtmlLinkType Link;
            public string Action, Msg;
            public int Id;
        }

        sealed class Unit
        {
            public bool IsText;
            public Span Span;
            public float W, H;
            /// <summary>Controle/imagem (posicao relativa a unidade).</summary>
            public HtmlBox Box;
            /// <summary>Tabela: Align na largura disponivel -> (largura, altura, caixas relativas a tabela).</summary>
            public Func<float, (float w, float h, List<HtmlBox> boxes)> Layout;
            public Align Align;
        }

        sealed class Ctx
        {
            public IHtmlMeasure M;
            public int NextId;
            public readonly List<uint> Colors = new();
            public readonly List<Align> Aligns = new();
            /// <summary>&lt;a&gt; aberto: vale para a proxima unidade.</summary>
            public Span PendingLink;
            public float LineH => M.GlyphHeight + Gap;
            public Align CurAlign => Aligns.Count > 0 ? Aligns[Aligns.Count - 1] : Align.Left;
        }

        /// <summary>Layout de um documento (raiz do HtmlDoc.Parse) numa largura.</summary>
        public static HtmlLayoutResult Run(HtmlNode doc, float width, IHtmlMeasure m)
        {
            var r = new HtmlLayoutResult { Width = width };
            var title = HtmlDoc.Find(doc, "title");
            if (title != null) r.Title = HtmlDoc.InnerText(title).Trim();
            // AnalyzeHtml: sem <html> nao aparece nada; o conteudo vai ate o </html> ou o fim
            var html = HtmlDoc.Find(doc, "html");
            if (html == null) return r;
            var bg = html.Attr("imgsrc");
            if (!string.IsNullOrEmpty(bg) && !bg.Equals("Transparent", StringComparison.OrdinalIgnoreCase)) r.Background = bg;
            r.TextAnim = html.Attr("textani") == "1";
            var c = new Ctx { M = m };
            var units = new List<Unit>();
            Load(html, c, units);
            r.Height = Place(units, width, c, r.Boxes);
            return r;
        }

        /// <summary>Layout de um HTML (texto) numa largura.</summary>
        public static HtmlLayoutResult Run(string html, float width, IHtmlMeasure m, IHtmlNames names = null) => Run(HtmlDoc.Parse(html ?? "", names), width, m);

        // ------------------------------------------------------------ LoadHtml: arvore -> unidades
        static void Add(List<Unit> units, Unit u, Ctx c)
        {
            u.Align = c.CurAlign;
            units.Add(u);
        }

        static void Load(HtmlNode src, Ctx c, List<Unit> units)
        {
            foreach (var n in src.Children)
            {
                if (n.Tag == null)
                {
                    var link = c.PendingLink;
                    c.PendingLink = null;
                    var top = c.Colors.Count > 0 ? c.Colors[c.Colors.Count - 1] : (uint?)null;
                    var sp = link ?? new Span();
                    sp.Text = n.Text;
                    sp.Color = top ?? (link != null ? LinkColor : TextColor);
                    Add(units, new Unit { IsText = true, Span = sp }, c);
                    continue;
                }
                if (n.Unknown)
                {
                    Load(n, c, units);
                    continue;
                }
                switch (n.Tag)
                {
                    case "title":
                    case "extend":
                        continue;
                    case "font":
                    {
                        // a abertura so empilha com color; o fechamento sempre desempilha (nw:124474-124487)
                        var col = n.Attrs.ContainsKey("color") ? HtmlDoc.Color(n.Attr("color")) : null;
                        if (col != null) c.Colors.Add(col.Value);
                        Load(n, c, units);
                        if (n.Closed && c.Colors.Count > 0) c.Colors.RemoveAt(c.Colors.Count - 1);
                        continue;
                    }
                    case "center":
                    {
                        c.Aligns.Add(Align.Center);
                        Load(n, c, units);
                        if (n.Closed && c.Aligns.Count > 0) c.Aligns.RemoveAt(c.Aligns.Count - 1);
                        continue;
                    }
                    case "a":
                    {
                        var sp = new Span { Id = ++c.NextId };
                        if (n.Attrs.ContainsKey("action"))
                        {
                            sp.Link = HtmlLinkType.Action;
                            sp.Action = n.Attr("action");
                            sp.Msg = n.Attr("msg");
                        }
                        else if (n.Attrs.ContainsKey("cmd"))
                        {
                            sp.Link = HtmlLinkType.Command;
                            sp.Action = n.Attr("cmd");
                        }
                        else if (n.Attrs.ContainsKey("link"))
                        {
                            sp.Link = HtmlLinkType.File;
                            sp.Action = n.Attr("link");
                        }
                        c.PendingLink = sp.Link != HtmlLinkType.None ? sp : null;
                        Load(n, c, units);
                        continue;
                    }
                    case "br":
                        c.PendingLink = null;
                        Add(units, new Unit { W = 1, H = BrHeight }, c);
                        continue;
                    case "br1":
                        c.PendingLink = null;
                        Add(units, new Unit { W = 1, H = Br1Height }, c);
                        continue;
                    case "img":
                    {
                        c.PendingLink = null;
                        var w = Num(n.Attr("width"), 0);
                        var h = Num(n.Attr("height"), 0);
                        var isrc = n.Attr("src");
                        var box = new HtmlBox { Kind = HtmlBoxKind.Image, W = w, H = h, Tex = string.IsNullOrEmpty(isrc) ? null : isrc };
                        Add(units, new Unit { W = w, H = h, Box = box }, c);
                        continue;
                    }
                    case "button":
                    {
                        c.PendingLink = null;
                        var w = Num(n.Attr("width"), ButtonW);
                        var h = Num(n.Attr("height"), ButtonH);
                        var box = new HtmlBox
                        {
                            Kind = HtmlBoxKind.Button, W = w, H = h, Text = n.Attr("value") ?? "", Action = n.Attr("action") ?? "", LinkType = HtmlLinkType.Action,
                            Fore = n.Attr("fore") ?? "Default.BlackTexture", Back = n.Attr("back") ?? "Default.WhiteTexture", Id = ++c.NextId,
                        };
                        Add(units, new Unit { W = w, H = h + Gap, Box = box }, c);
                        continue;
                    }
                    case "edit":
                    case "multiedit":
                    {
                        c.PendingLink = null;
                        var multi = n.Tag == "multiedit";
                        var w = Num(n.Attr("width"), multi ? MultiEditW : EditW);
                        var h = Num(n.Attr("height"), multi ? MultiEditH : EditH) + Gap;
                        var box = new HtmlBox
                        {
                            Kind = multi ? HtmlBoxKind.MultiEdit : HtmlBoxKind.Edit, W = w, H = h, Var = n.Attr("var"), Type = n.Attr("type"),
                            Length = multi ? 0 : Math.Max(0, HtmlDoc.Int(n.Attr("length")) ?? 0), Action = multi ? null : n.Attr("action"),
                            LinkType = HtmlLinkType.Action,
                        };
                        Add(units, new Unit { W = w, H = h, Box = box }, c);
                        continue;
                    }
                    case "combobox":
                    {
                        c.PendingLink = null;
                        var w = Num(n.Attr("width"), ComboW);
                        var opts = new List<string>();
                        foreach (var o in (n.Attr("list") ?? "").Split(';'))
                            if (o.Length > 0) opts.Add(o);
                        var box = new HtmlBox { Kind = HtmlBoxKind.Combo, W = w, H = ComboH, Var = n.Attr("var"), Options = opts.ToArray(), Sel = n.Attr("sel") };
                        // [I] a unidade com h + 6 como o botao
                        Add(units, new Unit { W = w, H = ComboH + Gap, Box = box }, c);
                        continue;
                    }
                    case "table":
                        c.PendingLink = null;
                        Add(units, Table(n, c), c);
                        continue;
                    default:
                        // html, body, head, tr/td fora de tabela e as tags que o cliente ignora: so o conteudo
                        Load(n, c, units);
                        continue;
                }
            }
        }

        static float Num(string v, float dflt)
        {
            var n = HtmlDoc.Int(v);
            return n is > 0 ? n.Value : dflt;
        }

        // ------------------------------------------------------------ Align: unidades -> caixas
        static float AlignX(Align a, float W, float w) => a == Align.Center ? (float)Math.Floor((W - w) / 2) : a == Align.Right ? W - w : 0;

        /// <summary>Empilha as unidades numa largura; devolve a altura. As caixas vao para `out` (relativas ao frame).</summary>
        static float Place(List<Unit> units, float W, Ctx c, List<HtmlBox> outBoxes)
        {
            float y = 0;
            for (var i = 0; i < units.Count;)
            {
                var u = units[i];
                if (u.IsText)
                {
                    // trechos de texto seguidos com o mesmo alinhamento: uma corrida que quebra na largura
                    var j = i;
                    var run = new List<Span>();
                    while (j < units.Count && units[j].IsText && units[j].Align == u.Align) run.Add(units[j++].Span);
                    y += Text(run, u.Align, W, y, c, outBoxes);
                    i = j;
                    continue;
                }
                if (u.Layout != null)
                {
                    var (tw, th, inner) = u.Layout(W);
                    var tx = AlignX(u.Align, W, tw);
                    foreach (var b in inner)
                    {
                        b.X += tx;
                        b.Y += y;
                        outBoxes.Add(b);
                    }
                    y += th;
                    i++;
                    continue;
                }
                var x = AlignX(u.Align, W, u.W);
                if (u.Box != null)
                {
                    var b = u.Box.Copy();
                    b.X = x;
                    b.Y = y;
                    outBoxes.Add(b);
                }
                y += u.H;
                i++;
            }
            return y;
        }

        sealed class Tok
        {
            public string Text;
            public float W;
            public bool Space;
            public Span Span;
        }

        // pedacos da corrida: palavras e espacos (os de dentro nao sao colapsados)
        static List<Tok> Tokens(List<Span> run, IHtmlMeasure m)
        {
            var l = new List<Tok>();
            foreach (var s in run)
            {
                var t = s.Text.Replace('\t', ' ');
                var k = 0;
                while (k < t.Length)
                {
                    var sp = t[k] == ' ';
                    var e = k;
                    while (e < t.Length && (t[e] == ' ') == sp) e++;
                    var piece = t.Substring(k, e - k);
                    l.Add(new Tok { Text = piece, W = m.Width(piece), Space = sp, Span = s });
                    k = e;
                }
            }
            return l;
        }

        /// <summary>Uma corrida de texto: quebra por palavra na largura; devolve a altura (linhas x LineH).</summary>
        static float Text(List<Span> run, Align al, float W, float y0, Ctx c, List<HtmlBox> outBoxes)
        {
            var lines = new List<List<Tok>>();
            var line = new List<Tok>();
            float x = 0;
            void NewLine()
            {
                while (line.Count > 0 && line[line.Count - 1].Space)
                {
                    x -= line[line.Count - 1].W;
                    line.RemoveAt(line.Count - 1);
                }
                lines.Add(line);
                line = new List<Tok>();
                x = 0;
            }
            foreach (var t in Tokens(run, c.M))
            {
                if (t.Space)
                {
                    // espaco no comeco de uma linha quebrada some
                    if (line.Count == 0 && lines.Count > 0) continue;
                    line.Add(t);
                    x += t.W;
                    continue;
                }
                if (x > 0 && x + t.W > W) NewLine();
                if (t.W > W && W > 0)
                {
                    // palavra maior que a linha: quebra por caractere (a Engine testa x + glifo > largura)
                    var sb = new StringBuilder();
                    foreach (var ch in t.Text)
                    {
                        var cw = c.M.Width(sb.ToString() + ch);
                        if (sb.Length > 0 && x + cw > W)
                        {
                            var piece = sb.ToString();
                            line.Add(new Tok { Text = piece, W = c.M.Width(piece), Span = t.Span });
                            NewLine();
                            sb.Clear();
                        }
                        sb.Append(ch);
                    }
                    if (sb.Length > 0)
                    {
                        var piece = sb.ToString();
                        var pw = c.M.Width(piece);
                        line.Add(new Tok { Text = piece, W = pw, Span = t.Span });
                        x += pw;
                    }
                    continue;
                }
                line.Add(t);
                x += t.W;
            }
            if (line.Count > 0 || lines.Count == 0) NewLine();
            var lh = c.LineH;
            for (var li = 0; li < lines.Count; li++)
            {
                var ln = lines[li];
                float lw = 0;
                foreach (var t in ln) lw += t.W;
                var lx = AlignX(al, W, lw);
                HtmlBox cur = null;
                foreach (var t in ln)
                {
                    if (cur != null && cur.Id == t.Span.Id && cur.Color == t.Span.Color && ReferenceEquals(cur.Action, t.Span.Action) && cur.LinkType == t.Span.Link)
                    {
                        cur.Text += t.Text;
                        cur.W += t.W;
                    }
                    else
                    {
                        cur = new HtmlBox
                        {
                            Kind = t.Span.Link != HtmlLinkType.None ? HtmlBoxKind.Link : HtmlBoxKind.Text, X = lx, Y = y0 + li * lh, W = t.W, H = c.M.GlyphHeight,
                            Text = t.Text, Color = t.Span.Color, LinkType = t.Span.Link, Action = t.Span.Action, Msg = t.Span.Msg, Id = t.Span.Id,
                        };
                        outBoxes.Add(cur);
                    }
                    lx += t.W;
                }
            }
            // caixas so de espaco nao desenham nada
            outBoxes.RemoveAll(b => (b.Kind == HtmlBoxKind.Text || b.Kind == HtmlBoxKind.Link) && b.Text.Trim().Length == 0 && b.Y >= y0);
            return lines.Count * lh;
        }

        // ------------------------------------------------------------ medidas sem layout (para as colunas)
        /// <summary>Largura natural (maior unidade, texto sem quebrar) e minima (maior unidade que nao quebra, ou 'A').</summary>
        static (float natural, float min) Measure(List<Unit> units, Ctx c)
        {
            float nat = 0, min = c.M.Width("A");
            for (var i = 0; i < units.Count;)
            {
                var u = units[i];
                if (u.IsText)
                {
                    float w = 0;
                    var j = i;
                    while (j < units.Count && units[j].IsText && units[j].Align == u.Align) w += c.M.Width(units[j++].Span.Text.Replace('\t', ' '));
                    nat = Math.Max(nat, w);
                    i = j;
                    continue;
                }
                nat = Math.Max(nat, u.W);
                min = Math.Max(min, u.W);
                i++;
            }
            return (nat, min);
        }

        // ------------------------------------------------------------ tabela
        // TR dentro da tabela (atravessando tags desconhecidas; outra TABLE nao); o resto e ignorado
        static void Rows(HtmlNode t, List<HtmlNode> rows)
        {
            foreach (var n in t.Children)
            {
                if (n.Tag == "tr") rows.Add(n);
                else if (n.Tag != null && n.Tag != "table" && n.Tag != "td") Rows(n, rows);
            }
        }

        static void Cells(HtmlNode tr, List<HtmlNode> cells)
        {
            foreach (var n in tr.Children)
            {
                if (n.Tag == "td") cells.Add(n);
                else if (n.Tag != null && n.Tag != "table" && n.Tag != "tr") Cells(n, cells);
            }
        }

        sealed class Cell
        {
            public HtmlNode Td;
            public List<Unit> Units;
            public float Pref, Min;
            public Align Align;
            public VAlign VAlign;
        }

        static Align TdAlign(string v)
        {
            switch ((v ?? "").Trim().ToUpperInvariant())
            {
                case "CENTER": return Align.Center;
                case "RIGHT": return Align.Right;
                default: return Align.Left;
            }
        }

        // VALIGN: sem atributo ou CENTER = meio; BOTTOM = base; TOP e o resto = topo (nw:122873-122891)
        static VAlign TdVAlign(string v)
        {
            if (v == null) return VAlign.Middle;
            switch (v.Trim().ToUpperInvariant())
            {
                case "CENTER": return VAlign.Middle;
                case "BOTTOM": return VAlign.Bottom;
                default: return VAlign.Top;
            }
        }

        static Unit Table(HtmlNode t, Ctx c)
        {
            var pad = HtmlDoc.Int(t.Attr("cellpadding")) is int cp && cp >= 0 ? cp : CellPadding;
            var sp = HtmlDoc.Int(t.Attr("cellspacing")) is int cs && cs >= 0 ? cs : CellSpacing;
            var bd = HtmlDoc.Int(t.Attr("border")) is int b && b > 0 ? b : 0;
            var trs = new List<HtmlNode>();
            Rows(t, trs);
            var rows = new List<List<Cell>>();
            var cols = 0;
            foreach (var tr in trs)
            {
                var tds = new List<HtmlNode>();
                Cells(tr, tds);
                var row = new List<Cell>();
                foreach (var td in tds)
                {
                    // td align empilha o alinhamento do conteudo (sem o atributo, 0 = esquerda: cancela o <center> de fora)
                    var cell = new Cell { Td = td, Units = new List<Unit>(), Align = TdAlign(td.Attr("align")), VAlign = TdVAlign(td.Attr("valign")) };
                    c.Aligns.Add(cell.Align);
                    var link = c.PendingLink;
                    Load(td, c, cell.Units);
                    c.PendingLink = link;
                    c.Aligns.RemoveAt(c.Aligns.Count - 1);
                    var (nat, min) = Measure(cell.Units, c);
                    var wv = td.Attr("width");
                    var w = HtmlDoc.Percent(wv) ? 0 : HtmlDoc.Int(wv) ?? 0;
                    cell.Pref = Math.Max(w, nat);
                    var fw = HtmlDoc.Int(td.Attr("fixwidth"));
                    if (fw is > 0) cell.Pref = fw.Value;
                    cell.Min = min;
                    row.Add(cell);
                }
                cols = Math.Max(cols, row.Count);
                rows.Add(row);
            }
            var colW = new float[cols];
            foreach (var r in rows)
                for (var i = 0; i < r.Count; i++)
                    colW[i] = Math.Max(colW[i], r[i].Pref);
            float natural = sp + 2 * bd;
            for (var i = 0; i < cols; i++) natural += colW[i] + 2 * (bd + pad) + sp;
            var tw = t.Attr("width");
            // para as colunas do frame de fora a tabela mede o width numerico, ou a largura natural
            var measureW = HtmlDoc.Int(tw) is int mw && mw > 0 && !HtmlDoc.Percent(tw) ? mw : natural;
            return new Unit { W = measureW, H = 0, Layout = disp => AlignTable(t, c, rows, cols, colW, natural, disp, pad, sp, bd) };
        }

        // Table::Align (0x10083d10, nw:121120) na largura disponivel `disp`
        static (float, float, List<HtmlBox>) AlignTable(HtmlNode t, Ctx c, List<List<Cell>> rows, int cols, float[] colW, float natural, float disp, int pad, int sp, int bd)
        {
            var tw = t.Attr("width");
            float T;
            var scale = false;
            if (HtmlDoc.Int(tw) is int twn && twn > 0)
            {
                T = HtmlDoc.Percent(tw) ? (float)Math.Floor(twn * disp / 100f) : twn;
                scale = true;
            }
            else if (natural >= disp)
            {
                T = disp;
                scale = true;
            }
            else T = natural;
            var cw = new float[cols];
            for (var i = 0; i < cols; i++) cw[i] = scale && natural > 0 ? (float)Math.Floor(colW[i] * T / natural) : colW[i];
            // layout das celulas e altura das linhas
            var laid = new List<List<(List<HtmlBox> boxes, float h, float w)>>();
            var rowH = new float[rows.Count];
            for (var ri = 0; ri < rows.Count; ri++)
            {
                var lr = new List<(List<HtmlBox>, float, float)>();
                for (var i = 0; i < rows[ri].Count; i++)
                {
                    var cell = rows[ri][i];
                    var w = Math.Max(cw[i], cell.Min);
                    var boxes = new List<HtmlBox>();
                    var ch = Place(cell.Units, w, c, boxes);
                    var th = HtmlDoc.Int(cell.Td.Attr("height")) ?? 0;
                    var h = Math.Max(0, Math.Max(th, ch) - Gap);
                    rowH[ri] = Math.Max(rowH[ri], h);
                    lr.Add((boxes, h, w));
                }
                laid.Add(lr);
            }
            float naturalH = sp + 2 * bd;
            float sumRows = 0;
            foreach (var h in rowH)
            {
                naturalH += h + 2 * (bd + pad) + sp;
                sumRows += h;
            }
            var H = naturalH;
            var hAttr = HtmlDoc.Int(t.Attr("height")) ?? 0;
            if (hAttr > naturalH && rowH.Length > 0)
            {
                // as linhas esticam na proporcao
                var extra = hAttr - naturalH;
                for (var ri = 0; ri < rowH.Length; ri++) rowH[ri] += sumRows > 0 ? (float)Math.Floor(extra * rowH[ri] / sumRows) : (float)Math.Floor(extra / rowH.Length);
                H = hAttr;
            }
            var inner = new List<HtmlBox>();
            var bg = t.Attrs.ContainsKey("bgcolor") ? HtmlDoc.Color(t.Attr("bgcolor")) : null;
            if (bg != null) inner.Add(new HtmlBox { Kind = HtmlBoxKind.Fill, X = 0, Y = 0, W = T, H = H, Color = bg.Value });
            if (bd > 0) Frame(inner, 0, 0, T, H, bd);
            float y = sp + 2 * bd + pad;
            for (var ri = 0; ri < rows.Count; ri++)
            {
                float x = sp + 2 * bd + pad;
                for (var i = 0; i < rows[ri].Count; i++)
                {
                    var (boxes, h, w) = laid[ri][i];
                    var cell = rows[ri][i];
                    var dy = cell.VAlign == VAlign.Top ? 0 : cell.VAlign == VAlign.Bottom ? rowH[ri] - h : (float)Math.Floor(rowH[ri] / 2 - h / 2);
                    foreach (var bx in boxes)
                    {
                        bx.X += x;
                        bx.Y += y + dy;
                        inner.Add(bx);
                    }
                    if (bd > 0) Frame(inner, x - pad - bd, y - pad - bd, cw[i] + 2 * (pad + bd), rowH[ri] + 2 * (pad + bd), bd);
                    x += cw[i] + 2 * (bd + pad) + sp;
                }
                y += rowH[ri] + 2 * (bd + pad) + sp;
            }
            return (T, H, inner);
        }

        // border N: N retangulos de 1 px
        static void Frame(List<HtmlBox> boxes, float x, float y, float w, float h, int b)
        {
            for (var k = 0; k < b; k++)
            {
                float x0 = x + k, y0 = y + k, w0 = w - 2 * k, h0 = h - 2 * k;
                if (w0 <= 0 || h0 <= 0) break;
                boxes.Add(new HtmlBox { Kind = HtmlBoxKind.Fill, X = x0, Y = y0, W = w0, H = 1, Color = BorderColor });
                boxes.Add(new HtmlBox { Kind = HtmlBoxKind.Fill, X = x0, Y = y0 + h0 - 1, W = w0, H = 1, Color = BorderColor });
                boxes.Add(new HtmlBox { Kind = HtmlBoxKind.Fill, X = x0, Y = y0, W = 1, H = h0, Color = BorderColor });
                boxes.Add(new HtmlBox { Kind = HtmlBoxKind.Fill, X = x0 + w0 - 1, Y = y0, W = 1, H = h0, Color = BorderColor });
            }
        }
    }
}
