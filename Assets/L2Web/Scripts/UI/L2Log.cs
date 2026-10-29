// Lista de linhas do xdat (ChatWindow = NCChatListBox, TextListBox = NCTextListBox), como o nativo (Docs/tools/gen_golden.py
// chat_list): cada mensagem e quebrada por palavras (FL2TextAlignParser do Engine.dll, so em espaco e LF) em linhas guardadas
// separadas (ate 200), a 1a com largura W - 22 em x = 23, as seguintes com recuo de 12 (largura W - 34, x = 35); linha i em
// y = 14 + (lineGap + 11) * i; (H - 10) / 15 linhas visiveis; barra de rolagem a esquerda (setas sempre, cursor so com mais
// linhas que as visiveis), 1 linha por clique e por "notch" da roda. Classes (canal do chat) filtram as linhas (do porte).
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace L2Web.UI
{
    /// <summary>NCChatListBox sem Unity: quebra, capacidade, rolagem e o cursor da barra.</summary>
    public sealed class ChatListModel
    {
        public const int FirstMinus = 22, NextMinus = 22, Indent = 12, OriginX = 23, OriginY = 14, PitchAdd = 11, DefaultMax = 200;

        public sealed class Entry
        {
            public string Text;
            public Color Color;
            public int Indent;
            public string[] Classes;
            public bool Hidden;
        }

        public float W, H;
        public int LineGap = 4;
        public int MaxLines = DefaultMax;
        /// <summary>Todas as linhas quebradas (as escondidas pelo filtro do porte nao contam para a vista).</summary>
        public readonly List<Entry> All = new();
        /// <summary>+0x308: indice da primeira linha visivel (entre as nao escondidas).</summary>
        public int Top;

        /// <summary>OnPaint: (int)((H - 10) / 15), com o 15 fixo.</summary>
        public int Visible => (int)((H - 10) / 15);

        public int Count
        {
            get
            {
                var n = 0;
                foreach (var e in All)
                    if (!e.Hidden) n++;
                return n;
            }
        }

        public List<Entry> Shown()
        {
            var o = new List<Entry>();
            foreach (var e in All)
                if (!e.Hidden) o.Add(e);
            return o;
        }

        /// <summary>
        /// GetLineBuffer (Engine.dll) com o tokenizador GetNextTokenBuffer: palavra = sequencia sem espaco nem LF, espaco = 1
        /// caractere, LF = fim de linha. Espaco que chega a largura termina a linha (e some); palavra com x &gt;= largura vai para
        /// a linha seguinte, ou e cortada por caractere se sozinha nao cabe. A largura da 1a linha e `first`, das outras `next`.
        /// </summary>
        public static List<string> Wrap(string text, float first, float next, Func<string, float> measure)
        {
            var o = new List<string>();
            if (string.IsNullOrEmpty(text)) return o;
            // NWndUtil::GetNewLineString: a sequencia barra-n vira quebra
            text = text.Replace("\\n", "\n").Replace("\r", "");
            var width = first;
            var line = new System.Text.StringBuilder();
            float x = 0;
            var any = false;
            var spaces = 0;
            var spaceW = measure(" ");

            void Emit()
            {
                o.Add(line.ToString());
                line.Clear();
                x = 0;
                any = false;
                spaces = 0;
                width = next;
            }
            var i = 0;
            while (i < text.Length)
            {
                var ch = text[i];
                if (ch == '\n')
                {
                    Emit();
                    i++;
                    continue;
                }
                if (ch == ' ')
                {
                    x += spaceW;
                    if (x >= width) Emit();
                    else
                    {
                        line.Append(' ');
                        any = true;
                        spaces++;
                    }
                    i++;
                    continue;
                }
                var j = i;
                while (j < text.Length && text[j] != ' ' && text[j] != '\n') j++;
                var word = text.Substring(i, j - i);
                var ww = measure(word);
                if (x + ww >= width)
                {
                    if (!any && width <= ww)
                    {
                        // DivideTokenWithWidth: o maior prefixo que cabe; o resto vai para a linha seguinte
                        var k = 1;
                        while (k < word.Length && measure(word.Substring(0, k + 1)) < width) k++;
                        line.Append(word, 0, k);
                        Emit();
                        i += k;
                        continue;
                    }
                    if (spaces == 0 && any)
                    {
                        line.Append(word);
                        x += ww;
                        i = j;
                        continue;
                    }
                    Emit();
                    continue;
                }
                line.Append(word);
                x += ww;
                any = true;
                i = j;
            }
            if (line.Length > 0 || any) o.Add(line.ToString());
            return o;
        }

        /// <summary>
        /// AddString: cada linha quebrada entra; cheio (MaxLines) tira a mais antiga e mantem o topo, senao conta e, com mais
        /// linhas que as visiveis, o topo anda uma (a distancia do fim fica igual).
        /// </summary>
        public void Add(string text, Color color, string[] classes, bool hidden, Func<string, float> measure)
        {
            var parts = Wrap(text, (int)(W - FirstMinus), (int)(W - 16 - 6 - Indent), measure);
            for (var i = 0; i < parts.Count; i++)
            {
                var e = new Entry { Text = parts[i], Color = color, Indent = i == 0 ? 0 : Indent, Classes = classes, Hidden = hidden };
                if (All.Count >= MaxLines)
                {
                    All.RemoveAt(0);
                    All.Add(e);
                    continue;
                }
                All.Add(e);
                if (!hidden && Count > Visible) Top++;
            }
            Clamp();
        }

        void Clamp()
        {
            var n = Count;
            Top = n <= Visible ? 0 : Math.Max(0, Math.Min(Top, n - Visible));
        }

        /// <summary>Setas: +-1 linha, so com mais linhas que as visiveis.</summary>
        public void Step(int d)
        {
            if (Count <= Visible) return;
            Top += d;
            Clamp();
        }

        /// <summary>Roda (slot 113): n = delta / 120 (truncado); para frente sobe n linhas.</summary>
        public void Wheel(int delta)
        {
            var n = delta / 120;
            if (n > 0) Top = Math.Max(0, Top - n);
            else Top += -n;
            Clamp();
        }

        public void ToEnd()
        {
            Top = Math.Max(0, Count - Visible);
        }

        /// <summary>FUN_10049a00 / FUN_10049b50: cursor (altura minima 15) e a posicao dele no trilho; null sem cursor.</summary>
        public (int y, int h)? Thumb(int sliderH)
        {
            var n = Count;
            var v = Visible;
            if (n <= v || sliderH <= 0) return null;
            var th = Math.Max(15, (int)((float)v * sliderH / n));
            var travel = sliderH - th;
            return (n - v > 0 ? travel * Top / (n - v) : 0, th);
        }
    }

    public class L2Log
    {
        /// <summary>Cores das classes do chat (.chatlog .sys etc.).</summary>
        public static readonly Dictionary<string, Color> ClassColors = new()
        {
            ["sys"] = Hex(0xb9d3a6), ["say"] = Hex(0xf1efe6), ["shout"] = Hex(0xffa44c), ["trade"] = Hex(0xf08ccd), ["party"] = Hex(0x6bd3ff),
            ["clan"] = Hex(0xa99bff), ["tell"] = Hex(0xff7ef3), ["ann"] = Hex(0x7fe8ff), ["dbg"] = Hex(0x8d8a83), ["ally"] = Hex(0x77ff77),
            ["hero"] = Hex(0x2ff3ff), ["cc"] = Hex(0xffd966),
        };

        static Color Hex(int v) => new Color32((byte)(v >> 16), (byte)(v >> 8), (byte)v, 255);

        /// <summary>Elemento da lista (o controle do xdat).</summary>
        public readonly RectTransform El;
        public readonly ChatListModel M = new();
        /// <summary>Maximo de linhas guardadas (quebradas).</summary>
        public int MaxLines
        {
            get => M.MaxLines;
            set => M.MaxLines = value;
        }
        /// <summary>Chamado quando o conteudo ou a rolagem mudam.</summary>
        public Action OnChanged;

        readonly HashSet<string> hidden = new();
        readonly List<Text> rows = new();
        readonly RectTransform up, down, thumb;
        readonly RawImage tTop, tMid, tBot;
        int sbX = 5, sbY = 10, sbBottom;
        bool dirty = true;
        static TextGenerator gen;

        public L2Log(RectTransform el, int lineGap = 4)
        {
            El = el;
            M.LineGap = lineGap;
            var hit = el.gameObject.AddComponent<Image>();
            hit.color = new Color(0, 0, 0, 0.001f);
            el.gameObject.AddComponent<RectMask2D>();
            up = Btn("up", "L2UI_CH3.ScrollBar.ScrollBarUpBtn", "L2UI_CH3.ScrollBar.ScrollBarUpOnBtn", -1);
            down = Btn("down", "L2UI_CH3.ScrollBar.ScrollBarDownBtn", "L2UI_CH3.ScrollBar.ScrollBarDownOnBtn", 1);
            thumb = UiRoot.Box("thumb", el, 0, 0, 15, 15);
            var th = thumb.gameObject.AddComponent<Image>();
            th.color = new Color(0, 0, 0, 0.001f);
            tTop = Part("L2UI_CH3.ScrollBar.SliderBarTop");
            tMid = Part("L2UI_CH3.ScrollBar.SliderBarCenter");
            tBot = Part("L2UI_CH3.ScrollBar.SliderBarBottom");
            var ev = UiEvents.Of(el);
            ev.OnWheel = e =>
            {
                var d = e.scrollDelta.y;
                // o InputSystemUIInputModule entrega 120 por "notch" no Windows (ou 1, conforme o dispositivo)
                var notch = Mathf.Abs(d) >= 60 ? (int)d : (int)Mathf.Sign(d) * 120;
                M.Wheel(notch);
                dirty = true;
            };
            float dragY = 0;
            var dragTop = 0;
            var tev = UiEvents.Of(thumb);
            tev.OnBeginDrag = e =>
            {
                dragY = e.position.y / UiRoot.PixelScale;
                dragTop = M.Top;
            };
            tev.OnDrag = e =>
            {
                var sh = SliderH();
                var t = M.Thumb(sh);
                if (t == null) return;
                var travel = sh - t.Value.h;
                if (travel <= 0) return;
                var dy = dragY - e.position.y / UiRoot.PixelScale;
                M.Top = Mathf.Clamp(dragTop + Mathf.RoundToInt(dy / travel * (M.Count - M.Visible)), 0, Math.Max(0, M.Count - M.Visible));
                dirty = true;
            };
            UiEvents.Of(el).OnLateUpdate = Flush;
        }

        RectTransform Btn(string n, string normal, string pushed, int d)
        {
            var rt = UiRoot.Box(n, El, 0, 0, 15, 15);
            var b = L2WndUtil.Button(rt, normal, pushed, normal + "_over", 15, 15);
            b.OnClick = () =>
            {
                M.Step(d);
                dirty = true;
            };
            return rt;
        }

        RawImage Part(string tex)
        {
            var img = UiRoot.Box("p", thumb, 0, 0, 15, 8).gameObject.AddComponent<RawImage>();
            img.raycastTarget = false;
            var t = L2WndUtil.Tex(tex);
            if (t != null) L2WndUtil.SetTexture(img, t.Url);
            return img;
        }

        float W => El.sizeDelta.x > 0 ? El.sizeDelta.x : El.rect.width;
        float H => El.sizeDelta.y > 0 ? El.sizeDelta.y : El.rect.height;
        int SliderH() => (int)(H + sbBottom - sbY - 30);

        /// <summary>SetScrollBarPosition(x, y, bottom): seta de cima em (x, y), trilho em (x, y + 15) ate a de baixo em (x, H + bottom - 15).</summary>
        /// <summary>A janela mudou de tamanho: refaz o layout no proximo quadro.</summary>
        public void Invalidate() => dirty = true;

        public void SetScrollBarPosition(int x, int y, int bottom)
        {
            sbX = x;
            sbY = y;
            sbBottom = bottom;
            dirty = true;
        }

        static float Measure(string s)
        {
            gen ??= new TextGenerator();
            var gs = new TextGenerationSettings
            {
                font = UiRoot.Font, fontSize = 11, scaleFactor = 1, richText = false, horizontalOverflow = HorizontalWrapMode.Overflow,
                verticalOverflow = VerticalWrapMode.Overflow, generationExtents = new Vector2(4000, 100), pivot = Vector2.zero,
            };
            return gen.GetPreferredWidth(s, gs);
        }

        /// <summary>Espaco a esquerda/direita (porte): a geometria agora e a do nativo.</summary>
        public void SetPadding(int left, int right)
        {
        }

        /// <summary>Quantidade de linhas (quebradas, visiveis pelo filtro).</summary>
        public int Count => M.Count;

        /// <summary>Acrescenta uma mensagem. `cls` = classes separadas por espaco; `color` = cor (ARGB do script).</summary>
        public void Add(string text, string cls, Color? color = null)
        {
            var classes = string.IsNullOrEmpty(cls) ? Array.Empty<string>() : cls.Split(' ', StringSplitOptions.RemoveEmptyEntries);
            var c = color ?? (classes.Length > 0 && ClassColors.TryGetValue(classes[0], out var cc) ? cc : UiKit.TextColor);
            M.W = W;
            M.H = H;
            M.Add(text ?? "", c, classes, IsHidden(classes), Measure);
            dirty = true;
        }

        bool IsHidden(string[] classes)
        {
            foreach (var c in classes)
                if (hidden.Contains(c)) return true;
            return false;
        }

        /// <summary>Esconde/mostra as linhas de uma classe (filtro do porte), inclusive as antigas; a vista volta ao fim.</summary>
        public void HideClass(string cls, bool hide)
        {
            if (hide ? !hidden.Add(cls) : !hidden.Remove(cls)) return;
            foreach (var e in M.All) e.Hidden = IsHidden(e.Classes);
            M.ToEnd();
            dirty = true;
        }

        /// <summary>Clear (slot 93): esvazia, topo 0.</summary>
        public void Clear()
        {
            M.All.Clear();
            M.Top = 0;
            dirty = true;
            Flush();
        }

        /// <summary>Altura total em pixels (linhas x 15).</summary>
        public float ScrollHeight => M.Count * 15f;

        /// <summary>Altura visivel em pixels.</summary>
        public float ClientHeight => M.Visible * 15f;

        /// <summary>Rolagem em pixels a partir do topo (linha x 15).</summary>
        public float ScrollTop
        {
            get => M.Top * 15f;
            set
            {
                M.Top = Mathf.Clamp(Mathf.RoundToInt(value / 15f), 0, Math.Max(0, M.Count - M.Visible));
                dirty = true;
            }
        }

        /// <summary>Vai ao fim.</summary>
        public void ScrollToEnd()
        {
            M.ToEnd();
            dirty = true;
        }

        /// <summary>Redesenha se mudou (LateUpdate).</summary>
        public void Flush()
        {
            if (!dirty || !El) return;
            dirty = false;
            M.W = W;
            M.H = H;
            var shown = M.Shown();
            var vis = M.Visible;
            while (rows.Count < vis)
            {
                var t = UiRoot.Label(El, "", 0, 0, 10, 15, 11, Color.white, TextAnchor.UpperLeft);
                t.name = "row" + rows.Count;
                t.supportRichText = false;
                t.horizontalOverflow = HorizontalWrapMode.Overflow;
                t.verticalOverflow = VerticalWrapMode.Overflow;
                t.raycastTarget = false;
                rows.Add(t);
            }
            for (var i = 0; i < rows.Count; i++)
            {
                var k = M.Top + i;
                var on = i < vis && k < shown.Count;
                rows[i].gameObject.SetActive(on);
                if (!on) continue;
                var e = shown[k];
                rows[i].text = e.Text;
                rows[i].color = e.Color;
                // DrawText em (0x314 + recuo, 0x318 + (lineGap + 11) * i), largura W - 16 - 6 - recuo, recortado no controle
                UiRoot.Place(rows[i].rectTransform, ChatListModel.OriginX + e.Indent, ChatListModel.OriginY + (M.LineGap + ChatListModel.PitchAdd) * i,
                    Mathf.Max(1, W - 16 - 6 - e.Indent), 15);
            }
            UiRoot.Place(up, sbX, sbY, 15, 15);
            UiRoot.Place(down, sbX, H + sbBottom - 15, 15, 15);
            up.SetAsLastSibling();
            down.SetAsLastSibling();
            var sh = SliderH();
            var tb = M.Thumb(sh);
            thumb.gameObject.SetActive(tb != null);
            if (tb is { } t2)
            {
                UiRoot.Place(thumb, sbX, sbY + 15 + t2.y, 15, t2.h);
                UiRoot.Place(tTop.rectTransform, 0, 0, 15, 8);
                UiRoot.Place(tMid.rectTransform, 0, 8, 15, Mathf.Max(0, t2.h - 16));
                UiRoot.Place(tBot.rectTransform, 0, t2.h - 8, 15, 8);
                thumb.SetAsLastSibling();
            }
            OnChanged?.Invoke();
        }
    }
}
