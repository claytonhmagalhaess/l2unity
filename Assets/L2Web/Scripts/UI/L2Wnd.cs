// Janela do Interface.xdat (L2Wnd do ui/l2wnd.ts): cada controle vira um RectTransform posicionado pela ancora do xdat
// (ponto do pai/controle de referencia + deslocamento = ponto deste controle), com as texturas do cliente.
using System;
using System.Collections.Generic;
using System.Globalization;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace L2Web.UI
{
    /// <summary>Retangulo em pixels (x, y a partir do canto superior esquerdo).</summary>
    public struct L2Rect
    {
        public float X, Y, W, H;

        public L2Rect(float x, float y, float w, float h)
        {
            X = x;
            Y = y;
            W = w;
            H = h;
        }
    }

    /// <summary>Opcoes da janela (WndOpts).</summary>
    public sealed class WndOpts
    {
        /// <summary>Titulo da moldura (padrao: sysstring do xdat).</summary>
        public string Title;
        /// <summary>Moldura com barra de titulo e fechar (padrao: o que o xdat diz).</summary>
        public bool? Frame;
        /// <summary>Tamanho no lugar do do xdat.</summary>
        public float[] Size;
        public bool Movable = true;
        /// <summary>Janelas do xdat com parentWnd = esta que entram dentro dela (abas da MainWnd etc.).</summary>
        public string[] Embed;
        public string AriaLabel;
        /// <summary>Definicao pronta (sub-janela do xdat usada como janela propria, ex.: uma barra de atalhos).</summary>
        public L2Ctrl Def;
    }

    /// <summary>Barra (StatusBar/BarCtrl/Progress): preenchimento e textos.</summary>
    public sealed class L2Bar
    {
        public RectTransform El;
        public RawImage Fill;
        public Text Title, Value;
        /// <summary>StatusBar: texto pela fonte de digitos do engine (NCStatusBarCtrl), titulo do xdat.</summary>
        public bool Digits;
        public string TitleText;
        public string LastText;
        /// <summary>warnTexture (HP &lt; 30%) e regenTexture (SetRegenInfo) do NCStatusBarCtrl.</summary>
        public RawImage Warn, Regen;
        public float Cur, Max;
        /// <summary>+0x310 tempo restante, +0x318 ticks, +0x31c quantidade, +0x324 HP previsto (FUN_1004c6c0/FUN_1004c720).</summary>
        public double RegenRemain, RegenAmount, RegenValue, RegenAt;
        public int RegenTicks;
        public float W, H;
        public float UvW = 1, UvY, UvH = 1;
        public float K = -1;
    }

    public class L2Wnd
    {
        static readonly Dictionary<string, Vector2> Align = new()
        {
            ["NONE"] = new(0, 0), ["TOP_LEFT"] = new(0, 0), ["TOP_CENTER"] = new(0.5f, 0), ["TOP_RIGHT"] = new(1, 0), ["CENTER_LEFT"] = new(0, 0.5f),
            ["CENTER"] = new(0.5f, 0.5f), ["CENTER_RIGHT"] = new(1, 0.5f), ["BOTTOM_LEFT"] = new(0, 1), ["BOTTOM_CENTER"] = new(0.5f, 1),
            ["BOTTOM_RIGHT"] = new(1, 1),
        };

        static Vector2 Al(string k) => k != null && Align.TryGetValue(k, out var v) ? v : Vector2.zero;

        /// <summary>Nome da janela no xdat (ou o nome dado a uma sub-janela).</summary>
        public readonly string Name;
        /// <summary>Elemento da janela (section.l2wnd). Ativo = visivel.</summary>
        public readonly RectTransform El;
        /// <summary>Definicao do xdat.</summary>
        public readonly L2Ctrl Def;
        public readonly L2Layer Layer;
        /// <summary>Sub-janelas embutidas (opts.Embed) por nome.</summary>
        public readonly Dictionary<string, L2Wnd> Embedded = new();
        /// <summary>Tamanho [w, h] (do xdat ou opts.Size).</summary>
        public readonly float[] Size;
        /// <summary>Tem moldura (barra de titulo + fechar).</summary>
        public readonly bool Frame;
        /// <summary>Posicao arrastada (null = ancora do xdat).</summary>
        public Vector2? Moved;
        /// <summary>Travada (cadeado das barras de atalho): nao arrasta.</summary>
        public bool Locked;
        /// <summary>Fechada.</summary>
        public Action OnClose = () => { };
        /// <summary>Aberta (ou aba mostrada, para sub-janelas).</summary>
        public Action OnShow = () => { };
        /// <summary>Aba trocada (nome do controle Tab, indice, janela/controle mostrado).</summary>
        public Action<string, int, string> OnTab = (_, _, _) => { };
        /// <summary>Chamado a cada movimento enquanto a janela e arrastada.</summary>
        public Action OnDragMove;

        readonly bool embedded;
        List<L2Ctrl> allCtrls = new();
        readonly Dictionary<string, L2Ctrl> ctrls = new();
        readonly Dictionary<L2Ctrl, L2Ctrl> inst = new();
        readonly Dictionary<L2Ctrl, L2Rect> instRects = new();
        readonly Dictionary<string, RectTransform> nodes = new();
        readonly Dictionary<string, L2Rect> rects = new();
        readonly Dictionary<string, Text> texts = new();
        readonly Dictionary<string, L2Bar> bars = new();
        readonly Dictionary<string, L2Combo> combos = new();
        readonly Dictionary<string, L2Slider> sliders = new();

        public L2Combo Combo(string name) => name != null && combos.TryGetValue(name, out var c) ? c : null;
        public L2Slider Slider(string name) => name != null && sliders.TryGetValue(name, out var s) ? s : null;
        readonly Dictionary<string, L2Log> logs = new();
        readonly Dictionary<string, RectTransform> contents = new();
        readonly Dictionary<string, (List<UiTexButton> buttons, List<string> targets, Action<int> select)> tabs = new();
        readonly Dictionary<RectTransform, List<(RectTransform el, int level)>> order = new();
        Text titleEl;
        RectTransform frameEl;

        /// <summary>Janela que embute esta (opts.Embed), para as ancoras em controles dela.</summary>
        readonly L2Wnd hostWnd;

        public L2Wnd(string name, L2Layer layer, WndOpts opts = null, L2Wnd host = null)
        {
            opts ??= new WndOpts();
            var def = opts.Def ?? L2WndUtil.WindowDef(name);
            if (def == null) throw new Exception("janela inexistente no Interface.xdat: " + name);
            Name = name;
            Def = def;
            Layer = layer;
            Size = opts.Size ?? def.Size ?? new float[] { 0, 0 };
            // moldura com barra de titulo: frame = 1 com Frame.direction = Top (3); as de lado (Left = 1, ex.: MenuWnd,
            // AbnormalStatusWnd) tem so a alca de arrastar
            Frame = opts.Frame ?? (def.WndN("frame") == 1 && def.WndN("Frame.direction") == 3);
            embedded = host != null;
            hostWnd = host;
            // nomes podem repetir (os 3 txtBasic da ActionWnd): cada instancia tem sua definicao herdada; o nome resolve
            // so ancoras e pais (primeira ocorrencia)
            var byName = new Dictionary<string, L2Ctrl>();
            var all = new List<L2Ctrl>();
            void Collect(List<L2Ctrl> list)
            {
                foreach (var c in list)
                {
                    if (c.Name != null && !byName.ContainsKey(c.Name)) byName[c.Name] = c;
                    all.Add(c);
                    Collect(c.Children);
                }
            }
            Collect(def.Children);
            allCtrls = all;
            foreach (var c in all) inst[c] = Inherit(c, byName);
            foreach (var kv in byName) ctrls[kv.Key] = inst[kv.Value];

            El = UiRoot.Box("L2Wnd " + name, host != null ? host.El : layer.El, 0, 0, Size[0], Size[1]);
            var hit = El.gameObject.AddComponent<Image>();
            hit.color = new Color(0, 0, 0, 0);
            if (def.Has(L2XdatFields.Unk("Window", "backTex"))) L2WndUtil.PaintBack(El, def.WndS("backTex"), Size[0], Size[1]);
            // titulo = sysstring do campo title (o Iconable.TooltipIdx e a dica do icone minimizado, ex. "Inventory (Alt+V)")
            var title = def.WndN("title");
            if (Frame) BuildFrame(opts.Title ?? GameData.SysString(float.IsNaN(title) ? 0 : (int)title, ""), def.WndS("Iconable.IconName"));
            // NCFrameCtrl lateral (frame = 1, Frame.size = 1, Frame.direction = 1): smallbar1/2/3 numa faixa de 12 px
            else if (def.WndN("frame") == 1 && def.WndN("Frame.size") == 1 && def.WndN("Frame.direction") == 1) SideFrame(Size[1]);
            foreach (var c in def.Children) Build(c, El, Vector2.zero);
            foreach (var (sa, areaH) in scrollAreas) WrapScrollArea(sa, areaH);
            if (frameEl) Track(El, frameEl, 3);
            // NCResizeFrame (xdat resizeframe = 1): a faixa fica por cima de tudo
            if (host == null && def.WndN("resizeframe") == 1) BuildResizeFrame(def);
            ApplyOrder();
            baseSize = new[] { Size[0], Size[1] };
            // TextBox autosize com texto do xdat (rotulos de sysstring): ja na largura do texto
            foreach (var kv in texts)
                if (ctrls.TryGetValue(kv.Key, out var tc) && tc.Type == "TextBox" && tc.N("autosize") == 1 && !string.IsNullOrEmpty(kv.Value.text))
                    AutoSize(kv.Key, kv.Value);
            if (host == null)
            {
                layer.Windows[name] = this;
                var saved = Store(name);
                if (saved != null)
                {
                    try
                    {
                        var o = JObject.Parse(saved);
                        Moved = new Vector2((float)o["x"], (float)o["y"]);
                    }
                    catch
                    {
                        /* posicao invalida */
                    }
                }
                if (opts.Movable) EnableDrag();
                var ev = UiEvents.Of(El);
                ev.OnDown = _ => layer.Front(this);
                // tamanho salvo (WindowsInfo.ini: [6] width/height para o chat), so nas janelas com faixa de redimensionamento
                if (ResizeFrame != null && L2WindowsInfo.TrySize(name, out var savedSize))
                {
                    var d = ResizeFrame.Vertical ? savedSize.y - Size[1] : savedSize.x - Size[0];
                    if (d != 0) ResizeBy(d);
                }
            }
            foreach (var sub in opts.Embed ?? Array.Empty<string>())
            {
                if (L2WndUtil.WindowDef(sub) == null) continue;
                var w = new L2Wnd(sub, layer, new WndOpts { Frame = false }, this);
                Embedded[sub] = w;
            }
            // primeira aba de cada Tab (depois das sub-janelas existirem)
            foreach (var t in tabs.Values) t.select(0);
            El.gameObject.SetActive(false);
            Place();
        }

        // ------------------------------------------------------------ posicao salva (WindowsInfo.ini)
        /// <summary>Le a posicao salva de uma janela (so as com savePosition no xdat), como {"x":..,"y":..}.</summary>
        public static string Store(string name) =>
            L2WindowsInfo.TryPosition(name, out var p) ? $"{{\"x\":{p.x.ToString(CultureInfo.InvariantCulture)},\"y\":{p.y.ToString(CultureInfo.InvariantCulture)}}}" : null;

        /// <summary>Grava (ou apaga com null) a posicao de uma janela; o arquivo e escrito na saida (L2WindowsInfo.Save).</summary>
        public static void Store(string name, string value)
        {
            if (value == null)
            {
                L2WindowsInfo.SetPosition(name, null);
                return;
            }
            var o = JObject.Parse(value);
            L2WindowsInfo.SetPosition(name, new Vector2((float)o["x"], (float)o["y"]));
        }

        /// <summary>Controle com as propriedades herdadas de `superName` (ex.: F2Tex herda o tamanho de F1Tex).</summary>
        static L2Ctrl Inherit(L2Ctrl c, Dictionary<string, L2Ctrl> byName, int depth = 0)
        {
            if (!c.Has("superName") || depth > 20) return c;
            var sn = c.SuperName;
            var sup = sn.Substring(sn.LastIndexOf('.') + 1); // as vezes vem com caminho: ShortcutWnd.F1Tex
            if (!byName.TryGetValue(sup, out var b0)) b0 = L2WndUtil.WindowDef(sup);
            if (b0 == null || b0 == c) return c;
            var b = Inherit(b0, byName, depth + 1);
            var o = (JObject)b.J.DeepClone();
            foreach (var p in c.J.Properties())
                if (L2Ctrl.IsSet(p.Value) || p.Name == "name" || p.Name == "parent") o[p.Name] = p.Value;
            return new L2Ctrl { J = o, Children = c.Children };
        }

        // ------------------------------------------------------------ layout
        L2Rect WndRect => new(0, 0, Size[0], Size[1]);

        /// <summary>Retangulo calculado de um controle (relativo a janela), pela ancora e tamanho do xdat.</summary>
        public L2Rect RectOf(string name) => CtrlRect(name);

        L2Rect CtrlRect(string name, int depth = 0)
        {
            if (rects.TryGetValue(name, out var r)) return r;
            if (!ctrls.TryGetValue(name, out var c) || depth > 40) return WndRect;
            var o = InstRect(c, depth);
            rects[name] = o;
            return o;
        }

        L2Rect InstRect(L2Ctrl c, int depth = 0)
        {
            if (instRects.TryGetValue(c, out var memo)) return memo;
            var name = c.Name;
            var parent = !string.IsNullOrEmpty(c.Parent) && ctrls.ContainsKey(c.Parent) ? CtrlRect(c.Parent, depth + 1) : WndRect;
            float w = 0, h = 0;
            var sp = c.SizePercent;
            var sz = c.Size;
            if (sp != null)
            {
                w = parent.W * sp[0] + (sz?[0] ?? 0);
                h = parent.H * sp[1] + (sz?[1] ?? 0);
            }
            else if (sz != null)
            {
                w = sz[0];
                h = sz[1];
            }
            var x = parent.X;
            var y = parent.Y;
            var a = c.Anchor;
            if (a != null)
            {
                var refName = string.IsNullOrEmpty(a.Ctrl) ? "" : a.Ctrl.Substring(a.Ctrl.LastIndexOf('.') + 1);
                var rf = refName != "" && ctrls.ContainsKey(refName) && refName != name ? CtrlRect(refName, depth + 1) : parent;
                // sub-janela embutida (SkillTrainInfoWnd.SubWndNormal) ancorada num controle da janela que a embute
                if (refName != "" && !ctrls.ContainsKey(refName) && hostWnd != null && hostWnd.ctrls.ContainsKey(refName))
                {
                    var hr = hostWnd.CtrlRect(refName);
                    var da = Def.Anchor;
                    var simple = da == null || (da.Parent == "TOP_LEFT" && da.This == "TOP_LEFT");
                    rf = new L2Rect(hr.X - (simple && da != null ? da.X : 0), hr.Y - (simple && da != null ? da.Y : 0), hr.W, hr.H);
                }
                // no xdat, anchor.this e o ponto da referencia e anchor.parent o ponto deste controle
                var p = Al(a.This);
                var t = Al(a.Parent);
                x = rf.X + rf.W * p.x + a.X - w * t.x;
                y = rf.Y + rf.H * p.y + a.Y - h * t.y;
            }
            var o = new L2Rect(x, y, w, h);
            instRects[c] = o;
            return o;
        }

        void Track(RectTransform container, RectTransform el, int level)
        {
            if (!order.TryGetValue(container, out var l)) order[container] = l = new List<(RectTransform, int)>();
            l.Add((el, level));
        }

        // z-index do CSS: texturas de fundo (layer 2) e sub-janelas embaixo, texturas, controles, moldura por cima
        void ApplyOrder()
        {
            foreach (var kv in order)
            {
                var list = kv.Value;
                var sorted = new List<(RectTransform el, int level)>(list);
                // ordenacao estavel por nivel
                for (var i = 1; i < sorted.Count; i++)
                {
                    var cur = sorted[i];
                    var j = i - 1;
                    while (j >= 0 && sorted[j].level > cur.level)
                    {
                        sorted[j + 1] = sorted[j];
                        j--;
                    }
                    sorted[j + 1] = cur;
                }
                foreach (var (el, _) in sorted) el.SetAsLastSibling();
            }
            order.Clear();
        }

        void Build(L2Ctrl c0, RectTransform container, Vector2 origin)
        {
            var c = inst.TryGetValue(c0, out var ci) ? ci : c0;
            var r = InstRect(c);
            // largura/altura negativas sao invalidas no CSS (viram auto): tamanho 0 aqui, o texto se ajusta
            var el = UiRoot.Box(c.Name ?? c.Type, container, r.X - origin.x, r.Y - origin.y, Mathf.Max(0, r.W), Mathf.Max(0, r.H));
            var level = Element(c, r, el);
            Track(container, el, level);
            if (c.Name != null && !nodes.ContainsKey(c.Name)) nodes[c.Name] = el;
            foreach (var k in c.Children) Build(k, el, new Vector2(r.X, r.Y));
        }

        static readonly Color TxtColor = new Color32(0xdc, 0xdc, 0xdc, 0xff);

        Text AddText(RectTransform el, string s, int size, Color color, TextAnchor align)
        {
            var t = UiRoot.Label(el, s, 0, 0, 0, 0, size, color, align);
            t.name = "txt";
            UiRoot.Fill(t.rectTransform);
            t.horizontalOverflow = HorizontalWrapMode.Overflow;
            t.verticalOverflow = VerticalWrapMode.Overflow;
            t.supportRichText = false;
            UiKit.AddShadow(t);
            return t;
        }

        // .l2txt.auto (altura 0) ou tamanho invalido (negativo = auto no CSS): uma linha de texto a partir do topo
        static void AutoText(Text t, L2Rect r, float align)
        {
            if (r.H > 0) return;
            t.alignment = align == 2 ? TextAnchor.UpperCenter : align == 3 ? TextAnchor.UpperRight : TextAnchor.UpperLeft;
            t.rectTransform.offsetMin = new Vector2(0, -14);
        }

        // cria o conteudo do controle `el`; devolve o nivel (z-index)
        int Element(L2Ctrl c, L2Rect r, RectTransform el)
        {
            switch (c.Type)
            {
                case "Texture":
                {
                    var (mode, u, v, us, vs) = TextureMode(c, r);
                    L2WndUtil.Paint(el, c.S("file"), r.W, r.H, mode, u, v, us, vs);
                    return c.N("layer") == 2 ? 0 : 1;
                }
                case "Button":
                {
                    var b = L2WndUtil.Button(el, c.S("normalTex"), c.S("pushedTex"), c.S("highlightTex"), r.W, r.H);
                    var label = c.N("buttonName");
                    if (!float.IsNaN(label) && label >= 0)
                    {
                        var t = GameData.SysString((int)label, "");
                        if (!string.IsNullOrEmpty(t) && label != -9999) b.Label = AddText(el, t, 11, UiKit.ButtonText, TextAnchor.MiddleCenter);
                    }
                    b.Sound = c.N("defaultSoundOn") != 0;
                    TextTooltip(c, el);
                    return 2;
                }
                case "TextBox":
                {
                    var align = c.N("textAlign");
                    var col = c.S("textColor") ?? "";
                    var color = TxtColor;
                    if (col.StartsWith("#") && col.Length >= 7 && !col.EndsWith("00")) color = UiRoot.Css(col.Substring(0, 7), TxtColor);
                    var sys = c.N("sysstring");
                    var s = c.Has("text") && !string.IsNullOrEmpty(c.S("text")) ? c.S("text") : sys > 0 ? GameData.SysString((int)sys, "") : "";
                    if (c.Has("backTex")) L2WndUtil.Paint(el, c.S("backTex"), r.W, r.H);
                    // NCTextBox::PaintSingleLine (nw:0x10051770) desenha a linha em y = 0 da caixa: o texto fica no topo, descido
                    // pelo offsetY do xdat (as caixas de 30 px usam offsetY 7 ou 10; os rotulos de 19 px em y + 3 ficam na
                    // altura dos combos de 17 px, ex. VideoTab text0 (0,14) e ResBox (107,11))
                    var anchor = align == 2 ? TextAnchor.UpperCenter : align == 3 ? TextAnchor.UpperRight : TextAnchor.UpperLeft;
                    var t = AddText(el, s, 11, color, anchor);
                    var offY = c.N("offsetY");
                    if (offY > 0 && !float.IsNaN(offY)) t.rectTransform.offsetMax = new Vector2(0, -offY);
                    AutoText(t, r, align);
                    if (c.Name != null && !texts.ContainsKey(c.Name)) texts[c.Name] = t;
                    return 2;
                }
                case "NameCtrl":
                {
                    var t = AddText(el, "", 11, TxtColor, TextAnchor.MiddleLeft);
                    AutoText(t, r, 0);
                    if (c.Name != null && !texts.ContainsKey(c.Name)) texts[c.Name] = t;
                    return 2;
                }
                case "StatusBar":
                case "BarCtrl":
                case "Progress":
                    BuildBar(c, r, el);
                    return 2;
                case "EditBox":
                {
                    var g = el.gameObject.AddComponent<Image>();
                    g.color = new Color(0, 0, 0, 0);
                    var t = UiRoot.Label(el, "", 0, 0, 0, 0, 11, Color.white);
                    UiRoot.Fill(t.rectTransform);
                    t.rectTransform.offsetMin = new Vector2(3, 0);
                    t.rectTransform.offsetMax = new Vector2(-3, 0);
                    t.supportRichText = false;
                    t.horizontalOverflow = HorizontalWrapMode.Overflow;
                    var f = el.gameObject.AddComponent<InputField>();
                    f.textComponent = t;
                    f.targetGraphic = g;
                    f.transition = Selectable.Transition.None;
                    f.contentType = c.N("editType") == 2 ? InputField.ContentType.Password : InputField.ContentType.Standard;
                    if (c.N("maxLength") > 0) f.characterLimit = (int)c.N("maxLength");
                    f.caretColor = Color.white;
                    f.customCaretColor = true;
                    f.selectionColor = new Color(0.6f, 0.5f, 0.3f, 0.5f);
                    return 2;
                }
                case "ItemWindow":
                {
                    var g = el.gameObject.AddComponent<Image>();
                    g.color = new Color(0, 0, 0, 0.001f);
                    var sr = el.gameObject.AddComponent<ScrollRect>();
                    sr.horizontal = false;
                    sr.movementType = ScrollRect.MovementType.Clamped;
                    sr.scrollSensitivity = 20;
                    sr.inertia = false;
                    el.gameObject.AddComponent<RectMask2D>();
                    var content = UiRoot.Box("items", el, 0, 0, r.W, 0);
                    sr.viewport = el;
                    sr.content = content;
                    if (c.Name != null && !contents.ContainsKey(c.Name)) contents[c.Name] = content;
                    return 2;
                }
                case "ShortcutItemWindow":
                    return 2;
                case "ScrollArea":
                    scrollAreas.Add((el, c.N("areaHeight")));
                    return 2;
                case "Tab":
                    BuildTab(c, el);
                    return 2;
                case "ChatWindow":
                case "TextListBox":
                {
                    // XMLChatWindowData::Process: lineGap do xdat (-9999 = o 17 do construtor)
                    var lg = c.N("lineGap");
                    var log = new L2Log(el, float.IsNaN(lg) || lg == -9999 ? 17 : (int)lg);
                    if (c.Name != null && !logs.ContainsKey(c.Name)) logs[c.Name] = log;
                    return 2;
                }
                case "HtmlCtrl":
                {
                    var content = UiKit.Scroll(el, r.H, 2);
                    var sv = (RectTransform)content.parent.parent;
                    UiRoot.Fill(sv);
                    if (c.Name != null && !contents.ContainsKey(c.Name)) contents[c.Name] = content;
                    return 2;
                }
                case "Window":
                    if (c.Has("unk101")) L2WndUtil.PaintBack(el, c.S("unk101"), r.W, r.H);
                    return 0;
                case "ComboBox":
                {
                    var cb = new L2Combo(el, r.W, r.H);
                    // values do xdat: sysString, systemMsg ou text
                    var items = new List<string>();
                    if (c.J["values"] is JArray vals)
                        foreach (var v in vals)
                        {
                            var ss = v["sysString"]?.Type == JTokenType.Integer ? (int)v["sysString"] : -9999;
                            var sm = v["systemMsg"]?.Type == JTokenType.Integer ? (int)v["systemMsg"] : -9999;
                            var tx = (string)v["text"];
                            items.Add(ss >= 0 ? GameData.SysString(ss, "") : sm >= 0 ? GameData.SystemMessage(sm, new List<string>()).Text : tx != "undefined" ? tx : "");
                        }
                    cb.SetItems(items);
                    if (c.Name != null) combos[c.Name] = cb;
                    return 2;
                }
                case "SliderCtrl":
                {
                    var sl = new L2Slider(el, c, r.W, r.H);
                    if (c.Name != null) sliders[c.Name] = sl;
                    return 2;
                }
                case "CheckBox":
                {
                    var tg = UiKit.Check(el, GameData.SysString((int)c.N0("titleIndex"), ""), c.J["checked"]?.Type == JTokenType.Boolean && (bool)c.J["checked"], null);
                    var trt = (RectTransform)tg.transform;
                    UiRoot.Fill(trt);
                    return 2;
                }
                default:
                    return 2;
            }
        }

        void BuildBar(L2Ctrl c, L2Rect r, RectTransform el)
        {
            var back = c.Has("backTexture") ? c.S("backTexture") : c.S("backTex");
            var fore = c.Has("foreTexture") ? c.S("foreTexture") : c.S("barTexture");
            var th = c.N("textureHeight");
            if (float.IsNaN(th) || th == 0) th = c.N("vSize");
            if (float.IsNaN(th)) th = 0;
            var tb = L2WndUtil.Tex(back);
            if (tb != null) L2WndUtil.Paint(el, back, r.W, r.H, PaintMode.Stretch, 0, 0, tb.W, th > 0 ? th : tb.H);
            var bar = new L2Bar { El = el, W = r.W, H = r.H };
            var fill = UiRoot.Box("fill", el, 0, 0, 0, r.H).gameObject.AddComponent<RawImage>();
            fill.raycastTarget = false;
            bar.Fill = fill;
            var tf = L2WndUtil.Tex(fore);
            if (tf != null)
            {
                // background-size: largura do controle x (altura da textura * h / th), no-repeat em 0 0
                var ih = tf.H * r.H / (th > 0 ? th : tf.H);
                bar.UvH = Mathf.Min(1, r.H / ih);
                bar.UvY = 1 - bar.UvH;
                L2WndUtil.SetTexture(fill, tf.Url);
            }
            else fill.enabled = false;
            fill.uvRect = new Rect(0, bar.UvY, 0, bar.UvH);
            if (c.Type == "StatusBar")
            {
                // regeneracao (alfa 0x80, depois do preenchimento) e aviso (por cima do preenchimento)
                RawImage Overlay(string texName, string objName, float alpha)
                {
                    var t = L2WndUtil.Tex(texName);
                    if (t == null) return null;
                    var img = UiRoot.Box(objName, el, 0, 0, 0, r.H).gameObject.AddComponent<RawImage>();
                    img.raycastTarget = false;
                    img.color = new Color(1, 1, 1, alpha);
                    var ih = t.H * r.H / (th > 0 ? th : t.H);
                    var uh = Mathf.Min(1, r.H / ih);
                    img.uvRect = new Rect(0, 1 - uh, 0, uh);
                    L2WndUtil.SetTexture(img, t.Url);
                    img.enabled = false;
                    return img;
                }
                bar.Regen = c.Has("regenTexture") ? Overlay(c.S("regenTexture"), "regen", 0x80 / 255f) : null;
                bar.Warn = c.Has("warnTexture") ? Overlay(c.S("warnTexture"), "warn", 1) : null;
                // NCStatusBarCtrl: titulo e numeros pela fonte de digitos (L2Digits.StatusBarText)
                bar.Digits = true;
                bar.TitleText = c.Has("title") ? c.S("title") : null;
                if (!string.IsNullOrEmpty(bar.TitleText)) L2Digits.Draw(el, "digTitle", bar.TitleText, 9, 2);
            }
            if (c.Name != null && !bars.ContainsKey(c.Name)) bars[c.Name] = bar;
        }

        /// <summary>
        /// Tooltip "Text" do xdat (NCWnd::OnPostPaint, nw:0x1005da50): popupValue &gt;= 0 e a sysstring; senao o texto de
        /// SetTooltipText (aqui, UiTooltip.Set de quem monta a janela).
        /// </summary>
        static void TextTooltip(L2Ctrl c, RectTransform el)
        {
            if (c.S("popupType") != "Text") return;
            var id = c.N("popupValue");
            if (float.IsNaN(id) || id < 0) return;
            var t = GameData.SysString((int)id, "");
            if (!string.IsNullOrEmpty(t)) UiTooltip.Set(el.gameObject, t);
        }

        readonly List<(RectTransform el, float areaHeight)> scrollAreas = new();

        /// <summary>
        /// ScrollArea do xdat (areaHeight = altura do conteudo): os filhos vao para um conteudo dessa altura, recortado pela
        /// area e rolado pela roda (MacroEditWnd.areaEdit: 242x239 com 318 de conteudo).
        /// </summary>
        static void WrapScrollArea(RectTransform el, float areaH)
        {
            var w = el.sizeDelta.x;
            var h = float.IsNaN(areaH) || areaH < el.sizeDelta.y ? el.sizeDelta.y : areaH;
            var kids = new List<Transform>();
            foreach (Transform t in el) kids.Add(t);
            var content = UiRoot.Box("scrollcontent", el, 0, 0, w, h);
            foreach (var t in kids) t.SetParent(content, false);
            var g = el.gameObject.GetComponent<Image>() ?? el.gameObject.AddComponent<Image>();
            g.color = new Color(0, 0, 0, 0);
            el.gameObject.AddComponent<RectMask2D>();
            var sr = el.gameObject.AddComponent<ScrollRect>();
            sr.horizontal = false;
            sr.movementType = ScrollRect.MovementType.Clamped;
            sr.inertia = false;
            sr.scrollSensitivity = 20;
            sr.viewport = el;
            sr.content = content;
        }

        /// <summary>Botao com as 3 texturas (normal, pressionado, realce) em tamanho natural.</summary>
        public UiTexButton SkinButton(RectTransform b, string normal, string pushed, string over, float w, float h) =>
            L2WndUtil.Button(b, normal, pushed, over, w, h);

        void BuildTab(L2Ctrl c, RectTransform el)
        {
            var list = c.J["tabs"] as JArray ?? new JArray();
            var buttons = new List<UiTexButton>();
            var targets = new List<string>();
            var on = new List<string>();
            var off = new List<string>();
            float x = 0;
            foreach (var tk in list)
            {
                var t = (JObject)tk;
                var tw = L2Ctrl.ToNum(t["width"], 0);
                var thh = L2Ctrl.ToNum(t["height"], 0);
                var brt = UiRoot.Box("tab", el, x, 0, tw, thh);
                var hit = brt.gameObject.AddComponent<Image>();
                hit.color = new Color(0, 0, 0, 0);
                var b = brt.gameObject.AddComponent<UiTexButton>();
                b.Image = L2WndUtil.Bg(brt);
                var bn = L2Ctrl.ToNum(t["buttonName"], 0);
                var label = AddText(brt, bn > 0 ? GameData.SysString((int)bn, "") : "", 11, new Color32(0xb9, 0xb1, 0x9a, 0xff), TextAnchor.MiddleCenter);
                b.Label = label;
                var tOn = L2WndUtil.Tex((string)t["pushedTex"]);
                var tOff = L2WndUtil.Tex((string)t["normalTex"]);
                var tt = tOn ?? tOff;
                if (tt != null) L2WndUtil.PlaceImage(b.Image, tw, thh, 0, 0, tt.W, tt.H, false);
                on.Add(tOn?.Url);
                off.Add(tOff?.Url);
                var gap = L2Ctrl.ToNum(t["gap"], 0);
                x += tw + (gap > 0 ? gap : 0);
                buttons.Add(b);
                targets.Add((string)t["target"]);
            }
            void Select(int i)
            {
                for (var k = 0; k < buttons.Count; k++)
                {
                    var sel = k == i;
                    buttons[k].Label.color = sel ? Color.white : new Color32(0xb9, 0xb1, 0x9a, 0xff);
                    var url = sel ? on[k] : off[k];
                    buttons[k].Normal = buttons[k].Pushed = buttons[k].Over = null;
                    buttons[k].Refresh();
                    L2WndUtil.SetButtonTextures(buttons[k], url, url, url);
                }
                for (var k = 0; k < targets.Count; k++) ShowCtrl(targets[k], k == i);
                OnTab?.Invoke(c.Name, i, i >= 0 && i < targets.Count ? targets[i] : null);
            }
            for (var i = 0; i < buttons.Count; i++)
            {
                var k = i;
                buttons[i].OnClick = () => Select(k);
            }
            tabs[c.Name] = (buttons, targets, Select);
        }

        /// <summary>Botao da aba `i` do controle Tab `tab` (null se nao ha).</summary>
        public UiTexButton TabButton(string tab, int i) =>
            tab != null && tabs.TryGetValue(tab, out var t) && i >= 0 && i < t.buttons.Count ? t.buttons[i] : null;

        /// <summary>Seleciona a aba `i` do controle Tab `tab`.</summary>
        public void SelectTab(string tab, int i)
        {
            if (tabs.TryGetValue(tab, out var t)) t.select(i);
        }

        RectTransform sideFrame;
        UiTexButton expandBtn;

        /// <summary>Estado do botao de expandir da moldura (Frame.expandbutton).</summary>
        public bool Expanded { get; private set; }

        /// <summary>OnFrameExpandClick(bIsExpand): o botao de expandir da moldura foi clicado.</summary>
        public Action<bool> OnFrameExpand;

        /// <summary>
        /// NCFrameCtrl vertical (FUN_1001ba20, ramo 0x328 = 0x32c = 1): smallbar1 12x8 em (0,0), smallbar2 esticada (UV 12x8) em
        /// (0,8) ate h-8, smallbar3 12x8 em (0, h-8). `SetFrameSize(12, h)` refaz com a nova altura.
        /// </summary>
        public void SideFrame(float h)
        {
            if (sideFrame)
            {
                sideFrame.gameObject.SetActive(false);
                if (Application.isPlaying) UnityEngine.Object.Destroy(sideFrame.gameObject);
                else UnityEngine.Object.DestroyImmediate(sideFrame.gameObject);
            }
            sideFrame = UiRoot.Box("l2sideframe", El, 0, 0, 12, h);
            sideFrame.SetAsFirstSibling();
            L2WndUtil.Paint(UiRoot.Box("top", sideFrame, 0, 0, 12, 8), "L2UI_CH3.FrameCtrl.smallbar1", 12, 8, PaintMode.Stretch, 0, 0, 12, 8);
            if (h > 16)
                L2WndUtil.Paint(UiRoot.Box("mid", sideFrame, 0, 8, 12, h - 16), "L2UI_CH3.FrameCtrl.smallbar2", 12, h - 16, PaintMode.Stretch, 0, 0, 12, 8);
            L2WndUtil.Paint(UiRoot.Box("bottom", sideFrame, 0, h - 8, 12, 8), "L2UI_CH3.FrameCtrl.smallbar3", 12, 8, PaintMode.Stretch, 0, 0, 12, 8);
            if (Def.WndN("Frame.expandbutton") == 1) ExpandButton();
        }

        /// <summary>
        /// NCFrameCtrl::CreateExpandBtn (nw:0x1001b5c0 ...): botao L2UI_CH3.TargetWnd.Target_InfoButton em (1, 6) 11 x 13 na
        /// moldura. OnExpandBtnClick (nw:0x1001b7c0): troca para a textura _Down quando expande, muda a altura para
        /// Frame.expandExpHeight / expandOrgHeight e chama OnFrameExpandClick do script.
        /// </summary>
        void ExpandButton()
        {
            var rt = UiRoot.Box("nodrag expand", sideFrame, 1, 6, 11, 13);
            expandBtn = L2WndUtil.Button(rt, ExpandTex(Expanded), ExpandTex(Expanded), ExpandTex(Expanded), 11, 13);
            expandBtn.OnClick = () => SetExpanded(!Expanded, true);
        }

        static string ExpandTex(bool expanded) => expanded ? "L2UI_CH3.TargetWnd.Target_InfoButton_Down" : "L2UI_CH3.TargetWnd.Target_InfoButton";

        /// <summary>Expande ou recolhe (altura do xdat) e, se `notify`, avisa o script (OnFrameExpandClick).</summary>
        public void SetExpanded(bool on, bool notify)
        {
            Expanded = on;
            var hk = on ? "Frame.expandExpHeight" : "Frame.expandOrgHeight";
            var h = Def.WndN(hk);
            if (!float.IsNaN(h) && h > 0 && h != Size[1])
            {
                SetWindowSize(Size[0], h);
                RelayoutChildren();
            }
            if (expandBtn)
            {
                var t = ExpandTex(on);
                expandBtn.Normal = expandBtn.Pushed = expandBtn.Over = null;
                expandBtn.Refresh();
                L2WndUtil.SetButtonTextures(expandBtn, L2WndUtil.Tex(t)?.Url, L2WndUtil.Tex(t)?.Url, L2WndUtil.Tex(t)?.Url);
            }
            if (notify) OnFrameExpand?.Invoke(on);
        }

        void BuildFrame(string title, string icon)
        {
            var w = Size[0];
            frameEl = UiRoot.Box("l2frame", El, 0, 0, w, 20);
            var left = UiRoot.Box("left", frameEl, 0, 0, 16, 20);
            var mid = UiRoot.Box("mid", frameEl, 16, 0, w - 32, 20);
            var right = UiRoot.Box("right", frameEl, w - 16, 0, 16, 20);
            L2WndUtil.Paint(left, "L2UI_CH3.FrameCtrl.FrameBackLeft", 16, 20, PaintMode.Normal);
            L2WndUtil.Paint(mid, "L2UI_CH3.FrameCtrl.FrameBackMid", w - 32, 20, PaintMode.Stretch, 0, 0, 16, 20);
            L2WndUtil.Paint(right, "L2UI_CH3.FrameCtrl.FrameBackRight", 16, 20, PaintMode.Normal);
            if (L2WndUtil.Tex(icon) != null)
            {
                var ic = UiRoot.Box("icon", frameEl, 6, 2, 16, 16);
                L2WndUtil.Paint(ic, icon, 16, 16);
            }
            var tr = UiRoot.Box("l2title", frameEl, 26, 0, Mathf.Max(10, w - 60), 20);
            titleEl = AddText(tr, title, 11, new Color32(0xdc, 0xd8, 0xc4, 0xff), TextAnchor.MiddleLeft);
            var close = UiRoot.Box("l2close", frameEl, w - 7 - 16, 2, 16, 16);
            var b = L2WndUtil.Button(close, "L2UI_CH3.FrameCtrl.FrameCloseBtn", "L2UI_CH3.FrameCtrl.FrameCloseOnBtn", "L2UI_CH3.FrameCtrl.FrameCloseBtn_Over", 16, 16);
            b.OnClick = Hide;
            // NCFrameCtrl (nw:0x1001b580): com iconable, o FrameMiniBtn fica 25 px a esquerda da borda direita (o fechar fica a 8)
            if (Def.WndN("iconable") == 1)
            {
                var mini = UiRoot.Box("nodrag l2mini", frameEl, w - 25 - 16, 3, 16, 16);
                var mb = L2WndUtil.Button(mini, "L2UI_CH3.FrameCtrl.FrameMiniBtn", "L2UI_CH3.FrameCtrl.FrameMiniOnBtn", "L2UI_CH3.FrameCtrl.FrameMiniBtn", 16, 16);
                mb.OnClick = Minimize;
            }
        }

        // ------------------------------------------------------------ minimizar para icone (Iconize)
        /// <summary>OnMinimize do script: quem trata chama Iconize (MainWnd.uc:18-34); sem ele, o icone do xdat.</summary>
        public Action OnMinimize;
        RectTransform iconEl;

        /// <summary>true enquanto a janela esta minimizada no icone.</summary>
        public bool Minimized => iconEl && iconEl.gameObject.activeSelf;

        /// <summary>Botao de minimizar da moldura (NCWnd::MinimizeWindow, nw:0x10059860).</summary>
        public void Minimize()
        {
            if (OnMinimize != null) OnMinimize();
            else Iconize(Def.WndS("Iconable.IconName"), (int)Def.N0(L2XdatFields.Unk("Window", "Iconable.TooltipIdx") ?? "Iconable.TooltipIdx"));
        }

        /// <summary>
        /// UIAPI_WINDOW.Iconize(janela, textura, dica): esconde a janela (som 6 do MinimizeWindow) e mostra o icone com a
        /// dica (sysstring). [I] o icone fica no canto superior esquerdo da janela, 32 x 32; o clique nele devolve a janela.
        /// </summary>
        public void Iconize(string texture, int tooltip)
        {
            var t = L2WndUtil.Tex(texture);
            if (!iconEl)
            {
                iconEl = UiRoot.Box("L2Icon " + Name, Layer.El, 0, 0, 32, 32);
                var ib = L2WndUtil.Button(iconEl, texture, texture, texture, 32, 32);
                ib.OnClick = Restore;
            }
            var b = iconEl.GetComponent<UiTexButton>();
            if (b && t != null)
            {
                b.Normal = b.Pushed = b.Over = null;
                b.Refresh();
                L2WndUtil.SetButtonTextures(b, t.Url, t.Url, t.Url);
            }
            UiTooltip.Set(iconEl.gameObject, tooltip > 0 ? GameData.SysString(tooltip, "") : "");
            var r = ScreenRect();
            iconEl.anchoredPosition = new Vector2(r.X, -r.Y);
            Hide();
            iconEl.SetAsLastSibling();
            iconEl.gameObject.SetActive(true);
        }

        /// <summary>Clique no icone: a janela volta e o icone some.</summary>
        public void Restore()
        {
            if (iconEl) iconEl.gameObject.SetActive(false);
            Show();
        }

        /// <summary>SetWindowSize: novo tamanho (a moldura lateral acompanha a altura).</summary>
        public void SetWindowSize(float w, float h)
        {
            if (Size[0] == w && Size[1] == h) return;
            Size[0] = w;
            Size[1] = h;
            El.sizeDelta = new Vector2(w, h);
            if (sideFrame) SideFrame(h);
            if (Visible) Place();
        }

        // ------------------------------------------------------------ faixa de redimensionamento (NCResizeFrame)
        /// <summary>
        /// ResizeFrame do xdat (01 secao 1.2.4: direction Left=1, Right=2, Top=3, Bottom=4; x, y, width, height; maxIncrease =
        /// quanto a janela pode crescer). ChatWnd: Top, (0,0) 24x10, 300.
        /// </summary>
        public sealed class ResizeFrameInfo
        {
            public int Direction;
            public float X, Y, W, H, MaxIncrease;
            public bool Vertical => Direction == 3 || Direction == 4;
        }

        public ResizeFrameInfo ResizeFrame;
        float[] baseSize;
        RawImage resizeImg;
        string resizeTexNormal, resizeTexOver;

        /// <summary>
        /// NCResizeFrame [O nwindow 00000.c]: construtor (FUN_1001c6a0) carrega L2UI_CH3.PlayerStatusWnd.ps_sizecontrol2 e
        /// L2UI_CH3.ChatWnd.Chatting_sizeControl; OnPaint (FUN_1001c190) desenha, nas direcoes 3/4, a Chatting_sizeControl 24x10
        /// em (0,-3) da faixa e, nas 1/2, a ps_sizecontrol2 9x13 em (4,1); OnLButtonDown (FUN_1001b010) prende se o ponto cai na
        /// faixa; OnMouseMove (FUN_1001bxxx) manda ao pai SendEventMessage(0x501, id, delta) com delta = -dy (Top), dy (Bottom),
        /// -dx (Left), dx (Right) e troca o cursor (5 vertical, 6 horizontal). [I] a variante _over no hover; o pai limita o
        /// crescimento a maxIncrease e o minimo ao tamanho do xdat.
        /// </summary>
        void BuildResizeFrame(L2Ctrl def)
        {
            float N(string k, float d)
            {
                var v = def.WndN(k);
                return float.IsNaN(v) || v == -9999 ? d : v;
            }
            var rf = new ResizeFrameInfo
            {
                Direction = (int)N("ResizeFrame.direction", 3), X = N("ResizeFrame.x", 0), Y = N("ResizeFrame.y", 0),
                W = N("ResizeFrame.width", 24), H = N("ResizeFrame.height", 10), MaxIncrease = N("ResizeFrame.maxIncrease", 0),
            };
            ResizeFrame = rf;
            // "nodrag": a faixa nao arrasta a janela (EnableDrag ignora os nomes com esse prefixo)
            var el = UiRoot.Box("nodrag resizeframe", El, rf.X, rf.Y, rf.W, rf.H);
            var hit = el.gameObject.AddComponent<Image>();
            hit.color = new Color(0, 0, 0, 0);
            float ox, oy, sw, sh;
            if (rf.Vertical)
            {
                resizeTexNormal = "L2UI_CH3.ChatWnd.Chatting_sizeControl";
                ox = 0; oy = -3; sw = 24; sh = 10;
            }
            else
            {
                resizeTexNormal = "L2UI_CH3.PlayerStatusWnd.ps_sizecontrol2";
                ox = 4; oy = 1; sw = 9; sh = 13;
            }
            resizeTexOver = resizeTexNormal + "_over";
            var sprite = UiRoot.Box("sizecontrol", el, ox, oy, sw, sh);
            resizeImg = sprite.gameObject.AddComponent<RawImage>();
            resizeImg.raycastTarget = false;
            SetResizeTexture(resizeTexNormal);
            Track(El, el, 3);
            var ev = UiEvents.Of(el);
            ev.OnEnter = _ => SetResizeTexture(resizeTexOver);
            ev.OnExit = _ => SetResizeTexture(resizeTexNormal);
            ev.OnBeginDrag = _ => { };
            ev.OnDrag = e =>
            {
                var k = UiRoot.PixelScale;
                var dx = e.delta.x / k;
                var dy = -e.delta.y / k;
                var delta = rf.Direction switch { 3 => -dy, 4 => dy, 1 => -dx, _ => dx };
                if (delta != 0) ResizeBy(delta);
            };
            ev.OnEndDrag = _ => { };
        }

        void SetResizeTexture(string reference)
        {
            if (!resizeImg) return;
            var t = L2WndUtil.Tex(reference) ?? L2WndUtil.Tex(resizeTexNormal);
            if (t != null) L2WndUtil.SetTexture(resizeImg, t.Url);
        }

        /// <summary>
        /// Cresce (delta &gt; 0) ou encolhe a janela na direcao da faixa, entre o tamanho do xdat e ele + maxIncrease; nas direcoes
        /// Top/Left a janela anda para manter a outra borda. Devolve o delta aplicado.
        /// </summary>
        public float ResizeBy(float delta)
        {
            var rf = ResizeFrame;
            if (rf == null || baseSize == null) return 0;
            var i = rf.Vertical ? 1 : 0;
            var target = Mathf.Clamp(Size[i] + delta, baseSize[i], baseSize[i] + rf.MaxIncrease);
            var applied = Mathf.Round(target) - Size[i];
            if (applied == 0) return 0;
            if (Moved is Vector2 m && (rf.Direction == 3 || rf.Direction == 1))
                Moved = rf.Direction == 3 ? new Vector2(m.x, m.y - applied) : new Vector2(m.x - applied, m.y);
            SetWindowSize(i == 0 ? Size[0] + applied : Size[0], i == 1 ? Size[1] + applied : Size[1]);
            RelayoutChildren();
            foreach (var w in Layer.Windows.Values)
            {
                var a = w.Def.Anchor;
                if (w != this && w.Moved == null && a != null && !string.IsNullOrEmpty(a.Ctrl) && a.Ctrl.Split('.')[0] == Name) w.Place();
            }
            OnDragMove?.Invoke();
            return applied;
        }

        /// <summary>Recalcula os retangulos de todos os controles para o tamanho atual da janela (tamanhos em %).</summary>
        public void RelayoutChildren()
        {
            rects.Clear();
            instRects.Clear();
            foreach (var c0 in allCtrls)
            {
                var c = inst.TryGetValue(c0, out var ci) ? ci : c0;
                if (c.Name == null) continue;
                var el = Get(c.Name);
                if (!el) continue;
                var r = CtrlRect(c.Name);
                var origin = !string.IsNullOrEmpty(c.Parent) && ctrls.ContainsKey(c.Parent) ? CtrlRect(c.Parent) : new L2Rect(0, 0, 0, 0);
                el.anchoredPosition = new Vector2(r.X - origin.X, -(r.Y - origin.Y));
                el.sizeDelta = new Vector2(Mathf.Max(0, r.W), Mathf.Max(0, r.H));
                if (c.Type == "Texture")
                {
                    var (mode, u, v, us, vs) = TextureMode(c, r);
                    L2WndUtil.Paint(el, c.S("file"), r.W, r.H, mode, u, v, us, vs);
                }
                if (logs.TryGetValue(c.Name, out var log)) log.Invalidate();
            }
        }

        /// <summary>Troca o titulo da moldura.</summary>
        public void SetTitle(string t)
        {
            if (titleEl) titleEl.text = t;
        }

        // ------------------------------------------------------------ posicao na tela
        /// <summary>Posiciona pela ancora do xdat (ou pela posicao arrastada), presa a tela.</summary>
        public void Place()
        {
            if (embedded)
            {
                var a0 = Def.Anchor;
                El.anchoredPosition = new Vector2(a0?.X ?? 0, -(a0?.Y ?? 0));
                return;
            }
            var vp = Layer.Viewport;
            float w = Size[0], h = Size[1];
            float x, y;
            // FUN_1014d6a0 + FUN_1005c100/FUN_1004fad0: a posicao salva vale como esta; so se nenhum dos 4 cantos ficar na tela a
            // janela volta a posicao padrao (slot 0xC8). Sem o limite que o porte aplicava.
            if (Moved is Vector2 m && (dragging || AnyCornerOnScreen(m.x, m.y, w, h, vp)))
            {
                x = m.x;
                y = m.y;
            }
            else if (L2WindowsInfo.DefPosition(Name, vp, new Vector2(w, h)) is { } dp)
            {
                // posicao padrao = WndDefPos quando a janela tem entrada (NCWnd::SetDefaultPosition usa o +0xa8 gravado pelo
                // SetDefaultPositionInfo); so sem ela vale a ancora do xdat
                x = dp.pos.x;
                y = dp.pos.y;
            }
            else
            {
                var a = AnchorOverride ?? Def.Anchor;
                var rf = new L2Rect(0, 0, vp.x, vp.y);
                var oc = a != null && !string.IsNullOrEmpty(a.Ctrl) ? a.Ctrl.Split('.')[0] : null;
                if (oc != null && Layer.Windows.TryGetValue(oc, out var other) && other != this) rf = other.ScreenRect();
                var p = Al(a?.This ?? "TOP_LEFT");
                var t = Al(a?.Parent ?? "TOP_LEFT");
                x = rf.X + rf.W * p.x + (a?.X ?? 0) - w * t.x;
                y = rf.Y + rf.H * p.y + (a?.Y ?? 0) - h * t.y;
            }
            if (dragging)
            {
                x = Mathf.Min(Mathf.Max(0, x), Mathf.Max(0, vp.x - Mathf.Min(w, 60)));
                y = Mathf.Min(Mathf.Max(0, y), Mathf.Max(0, vp.y - Mathf.Min(h, 20)));
            }
            El.anchoredPosition = new Vector2(Mathf.Round(x), -Mathf.Round(y));
        }

        bool dragging;

        /// <summary>Ancora trocada pelo script (SetAnchor); null = a do xdat.</summary>
        public L2Anchor AnchorOverride;

        /// <summary>
        /// UIAPI_WINDOW.SetAnchor(janela, "", pontoDaTela, pontoDaJanela, x, y): passa a valer essa ancora na tela e a posicao
        /// arrastada se perde.
        /// </summary>
        public void SetAnchor(string screenPoint, string wndPoint, float x, float y)
        {
            AnchorOverride = new L2Anchor { This = screenPoint, Parent = wndPoint, X = x, Y = y };
            Moved = null;
            if (Visible) Place();
        }

        /// <summary>FUN_1004fad0: algum dos cantos (x,y), (x+w,y), (x,y+h), (x+w,y+h) dentro da tela.</summary>
        public static bool AnyCornerOnScreen(float x, float y, float w, float h, Vector2 vp)
        {
            bool In(float px, float py) => px >= 0 && py >= 0 && px < vp.x && py < vp.y;
            return In(x, y) || In(x + w, y) || In(x, y + h) || In(x + w, y + h);
        }

        /// <summary>Retangulo na tela (pixels da interface).</summary>
        public L2Rect ScreenRect() => new(El.anchoredPosition.x, -El.anchoredPosition.y, Size[0], Size[1]);

        void EnableDrag()
        {
            var ev = UiEvents.Of(El);
            Vector2? drag = null;
            ev.OnBeginDrag = e =>
            {
                drag = null;
                if (e.button != PointerEventData.InputButton.Left || Locked) return;
                if (Interactive(e.pointerPressRaycast.gameObject)) return;
                var k = UiRoot.PixelScale;
                drag = new Vector2(e.pressPosition.x / k - El.anchoredPosition.x, (UiRoot.Size.y - e.pressPosition.y / k) + El.anchoredPosition.y);
            };
            ev.OnDrag = e =>
            {
                if (drag is not Vector2 d) return;
                var k = UiRoot.PixelScale;
                Moved = new Vector2(e.position.x / k - d.x, (UiRoot.Size.y - e.position.y / k) - d.y);
                dragging = true;
                Place();
                dragging = false;
                Moved = new Vector2(El.anchoredPosition.x, -El.anchoredPosition.y);
                // janelas presas a esta (SystemMsgWnd na ChatWnd) acompanham
                foreach (var w in Layer.Windows.Values)
                {
                    var a = w.Def.Anchor;
                    if (w != this && w.Moved == null && a != null && !string.IsNullOrEmpty(a.Ctrl) && a.Ctrl.Split('.')[0] == Name) w.Place();
                }
                OnDragMove?.Invoke();
            };
            ev.OnEndDrag = _ =>
            {
                if (drag == null) return;
                drag = null;
                if (Moved is Vector2 m)
                    Store(Name, $"{{\"x\":{Mathf.Round(m.x).ToString(CultureInfo.InvariantCulture)},\"y\":{Mathf.Round(m.y).ToString(CultureInfo.InvariantCulture)}}}");
            };
        }

        // controle interativo (botao, campo, lista...) fora da moldura: nao arrasta a janela
        bool Interactive(GameObject go)
        {
            for (var t = go ? go.transform : null; t && t != El; t = t.parent)
            {
                if (t == frameEl) return false;
                if (t.GetComponent<UiTexButton>() || t.GetComponent<Selectable>() || t.GetComponent<ScrollRect>() || t.name.StartsWith("nodrag")) return true;
            }
            return false;
        }

        // ------------------------------------------------------------ acesso aos controles
        /// <summary>Elemento do controle (null se nao existe).</summary>
        public RectTransform Get(string name) => name != null && nodes.TryGetValue(name, out var n) ? n : null;

        /// <summary>Definicao (herdada) do controle.</summary>
        public L2Ctrl Ctrl(string name) => name != null && ctrls.TryGetValue(name, out var c) ? c : null;

        /// <summary>Retangulo do controle na janela.</summary>
        public L2Rect Rect(string name) => CtrlRect(name);

        /// <summary>Texto de um TextBox/NameCtrl (ou do rotulo de um botao).</summary>
        public void Text(string name, string s)
        {
            var t = TextEl(name);
            if (!t || t.text == s) return;
            t.text = s;
            if (ctrls.TryGetValue(name, out var c) && c.Type == "TextBox" && c.N("autosize") == 1) AutoSize(name, t);
        }

        /// <summary>
        /// TextBox com autosize: a largura acompanha o texto e os controles ancorados nele (o ":" e o valor do minimapa,
        /// ancorados no TOP_RIGHT do rotulo) sao reposicionados em cadeia.
        /// </summary>
        void AutoSize(string name, Text t)
        {
            var el = Get(name);
            if (!el) return;
            // RefreshTextCoords (0x10051af0): SetWindowSize(largura do texto + 1, altura do texto)
            var w = Mathf.Ceil(t.preferredWidth) + 1;
            var r = CtrlRect(name);
            // [?] caixas de largura 0 no xdat ficam como texto livre (AutoText): as cadeias delas nao foram conferidas
            if (r.W <= 0 || r.H <= 0 || Mathf.Abs(r.W - w) < 0.5f) return;
            var c = ctrls[name];
            // o ponto da propria ancora fica no lugar (TOP_CENTER encolhe pelos dois lados: OnScreenMessageWnd2.TextBox2)
            var own = Al(c.Anchor?.Parent ?? "TOP_LEFT");
            var nx = r.X + (r.W - w) * own.x;
            var nr = new L2Rect(nx, r.Y, w, r.H);
            rects[name] = nr;
            instRects[c] = nr;
            el.sizeDelta = new Vector2(w, el.sizeDelta.y);
            if (Mathf.Abs(nx - r.X) > 0.01f) el.anchoredPosition = new Vector2(el.anchoredPosition.x + (nx - r.X), el.anchoredPosition.y);
            Reflow(name, 0);
        }

        void Reflow(string name, int depth)
        {
            if (depth > 20) return;
            foreach (var c0 in allCtrls)
            {
                var c = inst.TryGetValue(c0, out var ci) ? ci : c0;
                var a = c.Anchor;
                if (c.Name == null || a == null || string.IsNullOrEmpty(a.Ctrl) || a.Ctrl.Substring(a.Ctrl.LastIndexOf('.') + 1) != name) continue;
                instRects.Remove(c);
                rects.Remove(c.Name);
                var r = CtrlRect(c.Name);
                var el = Get(c.Name);
                if (el)
                {
                    var origin = !string.IsNullOrEmpty(c.Parent) && ctrls.ContainsKey(c.Parent) ? CtrlRect(c.Parent) : new L2Rect(0, 0, 0, 0);
                    el.anchoredPosition = new Vector2(r.X - origin.X, -(r.Y - origin.Y));
                }
                Reflow(c.Name, depth + 1);
            }
        }

        /// <summary>Componente de texto do controle (TextBox/NameCtrl/rotulo de botao); null se nao tem.</summary>
        public Text TextEl(string name)
        {
            if (name == null) return null;
            if (texts.TryGetValue(name, out var t)) return t;
            var b = Button(name);
            return b ? b.Label : null;
        }

        /// <summary>Botao do controle (null se nao e botao).</summary>
        public UiTexButton Button(string name) => Get(name)?.GetComponent<UiTexButton>();

        /// <summary>Campo de texto (EditBox).</summary>
        public InputField Edit(string name) => Get(name)?.GetComponent<InputField>();

        /// <summary>Caixa de selecao (CheckBox).</summary>
        public Toggle Check(string name) => Get(name)?.GetComponentInChildren<Toggle>(true);

        /// <summary>Lista de linhas (ChatWindow/TextListBox).</summary>
        public L2Log Log(string name) => name != null && logs.TryGetValue(name, out var l) ? l : null;

        /// <summary>Conteudo de um ItemWindow (slots) ou HtmlCtrl (container vertical).</summary>
        public RectTransform Content(string name) => name != null && contents.TryGetValue(name, out var c) ? c : null;

        /// <summary>Dados da barra (StatusBar/BarCtrl/Progress).</summary>
        public L2Bar BarInfo(string name) => name != null && bars.TryGetValue(name, out var b) ? b : null;

        /// <summary>Barra (StatusBar/BarCtrl/Progress): preenchimento e texto "atual/maximo" (ou `label`).</summary>
        public void Bar(string name, float cur, float max, string label = null)
        {
            if (!bars.TryGetValue(name, out var b)) return;
            // FUN_1004ccb0/FUN_1004cd70: aviso com atual < (max / 10) * 3 (inteiros); valor novo atualiza a regeneracao
            var warn = label == null && WarnOn((long)cur, (long)max);
            if (b.Warn) b.Warn.enabled = warn;
            if (cur != b.Cur) UpdateRegen(b);
            b.Cur = cur;
            b.Max = max;
            if (max <= 0 || cur <= 0) b.RegenValue = b.RegenRemain = 0;
            var k = max > 0 ? Mathf.Clamp01(cur / max) : 0;
            if (Mathf.Abs(k - b.K) > 0.0001f)
            {
                b.K = k;
                var rt = b.Fill.rectTransform;
                rt.sizeDelta = new Vector2(b.W * k, b.H);
                b.Fill.uvRect = new Rect(0, b.UvY, k, b.UvH);
            }
            if (b.Warn)
            {
                b.Warn.rectTransform.sizeDelta = new Vector2(Mathf.Floor(b.W * k), b.H);
                b.Warn.uvRect = new Rect(0, b.Warn.uvRect.y, k, b.Warn.uvRect.height);
            }
            DrawRegen(b);
            if (b.Digits)
            {
                var key = label ?? $"{Mathf.Round(cur)}/{Mathf.Round(max)}";
                if (b.LastText != key)
                {
                    b.LastText = key;
                    var parts = L2Digits.StatusBarText(null, b.W, (long)Mathf.Round(cur), (long)Mathf.Round(max), label);
                    for (var i = 0; i < 3; i++)
                    {
                        if (i < parts.Count) L2Digits.Draw(b.El, "dig" + i, parts[i].text, parts[i].x, 2);
                        else
                        {
                            var old = b.El.Find("dig" + i);
                            if (old) UnityEngine.Object.Destroy(old.gameObject);
                        }
                    }
                }
            }
            else if (b.Value)
            {
                var s = label ?? $"{Mathf.Round(cur)}/{Mathf.Round(max)}";
                if (b.Value.text != s) b.Value.text = s;
            }
        }

        /// <summary>SetRegenInfo (FUN_1004c6c0): resto = duracao - (ticks/2)*0,666; previsto = resto / (ticks*0,666) * quantidade.</summary>
        public void SetRegen(string name, int duration, int ticks, double amount)
        {
            if (!bars.TryGetValue(name, out var b) || !b.Regen) return;
            b.RegenTicks = ticks;
            (b.RegenRemain, b.RegenValue) = RegenStart(duration, ticks, amount);
            b.RegenAmount = amount;
            b.RegenAt = Time.realtimeSinceStartupAsDouble;
            DrawRegen(b);
        }

        /// <summary>FUN_1004ccb0/FUN_1004cd70: liga o warnTexture com atual &lt; (max / 10) * 3, em inteiros.</summary>
        public static bool WarnOn(long cur, long max) => cur < max / 10 * 3;

        /// <summary>FUN_1004c6c0: (tempo restante, HP previsto) = (duracao - (ticks / 2) * 0,666, resto / (ticks * 0,666) * quantidade).</summary>
        public static (double remain, double value) RegenStart(int duration, int ticks, double amount)
        {
            var remain = duration - ticks / 2 * 0.666;
            return (remain, ticks != 0 ? remain / (ticks * 0.666) * amount : 0);
        }

        /// <summary>FUN_1004c720: desconta o tempo passado; acaba quando o resto ou o previsto chegam a 0.</summary>
        static void UpdateRegen(L2Bar b)
        {
            if (b.RegenRemain <= 0 || b.RegenValue < 0) return;
            var now = Time.realtimeSinceStartupAsDouble;
            var dt = now - b.RegenAt;
            b.RegenRemain -= dt;
            b.RegenValue -= b.RegenTicks != 0 ? b.RegenAmount / b.RegenTicks / 0.666 * dt : b.RegenValue;
            b.RegenAt = now;
            if (!(b.RegenRemain > 0 && b.RegenValue >= 0)) b.RegenRemain = b.RegenValue = 0;
        }

        /// <summary>Chamado pelo tick da interface: atualiza e redesenha a regeneracao das barras.</summary>
        public void TickRegen()
        {
            foreach (var b in bars.Values)
                if (b.Regen && b.RegenRemain > 0)
                {
                    UpdateRegen(b);
                    DrawRegen(b);
                }
        }

        /// <summary>FUN_1004c7c0: regenTexture em x = largura preenchida, largura W * previsto / max, alfa 0x80.</summary>
        static void DrawRegen(L2Bar b)
        {
            if (!b.Regen) return;
            var fillW = b.Max > 0 ? Mathf.Floor(b.W * Mathf.Clamp01(b.Cur / b.Max)) : 0;
            var w = b.Max > 0 && b.RegenValue != 0 ? Mathf.Floor((float)(b.W * b.RegenValue / b.Max)) : 0;
            w = Mathf.Max(0, Mathf.Min(w, b.W - fillW));
            b.Regen.enabled = w > 0;
            if (w <= 0) return;
            b.Regen.rectTransform.anchoredPosition = new Vector2(fillW, 0);
            b.Regen.rectTransform.sizeDelta = new Vector2(w, b.H);
            b.Regen.uvRect = new Rect(0, b.Regen.uvRect.y, w / b.W, b.Regen.uvRect.height);
        }

        /// <summary>
        /// Muda a largura de um controle Texture (style.width): a textura continua do tamanho original e e recortada
        /// (barras do DetailStatusWnd).
        /// </summary>
        public void TexWidth(string name, float clipW)
        {
            var el = Get(name);
            var c = Ctrl(name);
            if (!el || c == null || Mathf.Abs(el.sizeDelta.x - clipW) < 0.01f) return;
            el.sizeDelta = new Vector2(clipW, el.sizeDelta.y);
            var t = L2WndUtil.Tex(c.S("file"));
            if (t == null) return;
            var r = Rect(name);
            var (mode, u, v, us, vs) = TextureMode(c, r);
            L2WndUtil.PaintClip(L2WndUtil.Bg(el), t, r.W, r.H, clipW, mode, u, v, us, vs);
        }

        /// <summary>
        /// NCTextureCtrl (FUN_10053790), switch do TextureCtrlType: 0 estica (UV u,v,uSize,vSize no controle inteiro); 1 e 4
        /// tamanho natural; 2 ladrilho (o ultimo pedaco cortado pelo clip); 3 recorte W x H sem escala a partir de (u, v), com u
        /// e v limitados a [0, textura - controle] (FUN_100536d0).
        /// </summary>
        public static (PaintMode mode, float u, float v, float us, float vs) TextureMode(L2Ctrl c, L2Rect r)
        {
            var ct = c.N("ctrlType");
            float u = c.N0("u"), v = c.N0("v"), us = c.N0("uSize"), vs = c.N0("vSize");
            switch (ct)
            {
                case 1:
                case 4:
                    return (PaintMode.Normal, u, v, us, vs);
                case 2:
                    return (PaintMode.Tile, u, v, us, vs);
                case 3:
                {
                    var t = L2WndUtil.Tex(c.S("file"));
                    var tw = t?.W ?? r.W;
                    var th = t?.H ?? r.H;
                    return (PaintMode.Normal, Mathf.Clamp(u, 0, Mathf.Max(0, tw - r.W)), Mathf.Clamp(v, 0, Mathf.Max(0, th - r.H)), r.W, r.H);
                }
                default:
                    return (PaintMode.Stretch, u, v, us, vs);
            }
        }

        /// <summary>Clique no controle (botao, ou qualquer elemento).</summary>
        public void OnClick(string name, Action fn)
        {
            var el = Get(name);
            if (!el) return;
            var b = el.GetComponent<UiTexButton>();
            if (b) b.OnClick += fn;
            else
            {
                var ev = UiEvents.Of(el);
                ev.OnClick += _ => fn();
            }
        }

        /// <summary>Texto do botao (cria o rotulo se faltar).</summary>
        public void LabelButton(string name, string text)
        {
            var b = Button(name);
            if (!b) return;
            if (!b.Label) b.Label = AddText((RectTransform)b.transform, "", 11, UiKit.ButtonText, TextAnchor.MiddleCenter);
            b.Label.text = text;
        }

        /// <summary>Mostra/esconde um controle (ou sub-janela embutida).</summary>
        public void ShowCtrl(string name, bool on)
        {
            if (name == null) return;
            var el = Get(name);
            Embedded.TryGetValue(name, out var sub);
            if (!el && sub != null) el = sub.El;
            if (el && el.gameObject.activeSelf != on) el.gameObject.SetActive(on);
            if (sub != null && on) sub.OnShow?.Invoke();
        }

        /// <summary>true se o controle esta visivel.</summary>
        public bool CtrlVisible(string name)
        {
            var el = Get(name) ?? (Embedded.TryGetValue(name ?? "", out var s) ? s.El : null);
            return el && el.gameObject.activeSelf;
        }

        // ------------------------------------------------------------ visibilidade
        /// <summary>true se a janela esta aberta.</summary>
        public bool Visible => El && El.gameObject.activeSelf;

        /// <summary>Abre (posiciona, traz para a frente, som de abrir se tem moldura).</summary>
        public void Show()
        {
            var was = Visible;
            El.gameObject.SetActive(true);
            Place();
            if (!embedded) Layer.Front(this);
            if (!was)
            {
                if (Frame) Sound("open");
                OnShow?.Invoke();
            }
        }

        /// <summary>Fecha (som de fechar se tem moldura; chama OnClose).</summary>
        public void Hide()
        {
            if (!Visible) return;
            El.gameObject.SetActive(false);
            if (Frame) Sound("close");
            OnClose?.Invoke();
        }

        void Sound(string kind)
        {
            L2WndUtil.UiSound(L2WndUtil.WndSound.TryGetValue(Name, out var s) ? $"InterfaceSound.Interface.{s}_{kind}_01" : $"ItemSound.Interface.window_{kind}");
        }

        /// <summary>Abre/fecha.</summary>
        public void Toggle()
        {
            if (Visible) Hide();
            else Show();
        }
    }
}
