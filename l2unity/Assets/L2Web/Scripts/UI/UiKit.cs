// Blocos para o conteudo das janelas genericas (UiWindow.Body): o equivalente aos <p>, <button>, <input>, .row, .slot,
// .shoplist... do DOM, em uGUI com layout automatico (VerticalLayoutGroup/HorizontalLayoutGroup). O corpo de uma
// UiWindow ja e um container vertical: os filhos ocupam a largura e a altura sai do conteudo.
using System;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace L2Web.UI
{
    public static class UiKit
    {
        /// <summary>Cor do texto das janelas (#dcdcdc).</summary>
        public static readonly Color TextColor = new Color32(0xdc, 0xdc, 0xdc, 0xff);
        /// <summary>Texto secundario (--muted, #a3a097).</summary>
        public static readonly Color Muted = new Color32(0xa3, 0xa0, 0x97, 0xff);
        /// <summary>Titulos de secao (h3 das janelas, #b09b79).</summary>
        public static readonly Color Section = new Color32(0xb0, 0x9b, 0x79, 0xff);
        /// <summary>Links do HTML (#e8c56e).</summary>
        public static readonly Color Link = new Color32(0xe8, 0xc5, 0x6e, 0xff);
        /// <summary>Destaque (--accent, #d9b56a).</summary>
        public static readonly Color Accent = new Color32(0xd9, 0xb5, 0x6a, 0xff);
        /// <summary>Texto de botao (#e6e1cf).</summary>
        public static readonly Color ButtonText = new Color32(0xe6, 0xe1, 0xcf, 0xff);

        /// <summary>Texto com sombra 1px preta (text-shadow do cliente).</summary>
        public static Shadow AddShadow(Graphic g)
        {
            var s = (g.gameObject.TryGetComponent<Shadow>(out var __c) ? __c : g.gameObject.AddComponent<Shadow>());
            s.effectColor = Color.black;
            s.effectDistance = new Vector2(1, -1);
            return s;
        }

        /// <summary>LayoutElement do elemento (cria se faltar); valores &lt; 0 ficam como estao.</summary>
        public static LayoutElement Layout(Component c, float prefW = -1, float prefH = -1, float flexW = -1, float minW = -1, float minH = -1)
        {
            var le = (c.TryGetComponent<LayoutElement>(out var __c) ? __c : c.gameObject.AddComponent<LayoutElement>());
            if (prefW >= 0) le.preferredWidth = prefW;
            if (prefH >= 0) le.preferredHeight = prefH;
            if (flexW >= 0) le.flexibleWidth = flexW;
            if (minW >= 0) le.minWidth = minW;
            if (minH >= 0) le.minHeight = minH;
            return le;
        }

        /// <summary>Container vertical (filhos na largura toda, altura pelo conteudo).</summary>
        public static RectTransform Column(Transform parent, float spacing = 4, string name = "Column")
        {
            var rt = UiRoot.Box(name, parent, 0, 0, 0, 0);
            var g = rt.gameObject.AddComponent<VerticalLayoutGroup>();
            g.spacing = spacing;
            g.childControlWidth = g.childControlHeight = true;
            g.childForceExpandWidth = true;
            g.childForceExpandHeight = false;
            return rt;
        }

        /// <summary>Linha (.row): filhos lado a lado, centralizados na vertical.</summary>
        public static RectTransform Row(Transform parent, float spacing = 6, TextAnchor align = TextAnchor.MiddleLeft, string name = "Row")
        {
            var rt = UiRoot.Box(name, parent, 0, 0, 0, 0);
            var g = rt.gameObject.AddComponent<HorizontalLayoutGroup>();
            g.spacing = spacing;
            g.childAlignment = align;
            g.childControlWidth = g.childControlHeight = true;
            g.childForceExpandWidth = g.childForceExpandHeight = false;
            return rt;
        }

        /// <summary>Paragrafo/rotulo com quebra de linha. Rich text do uGUI (&lt;b&gt;, &lt;color&gt;).</summary>
        public static Text Text(Transform parent, string s, int size = 11, Color? color = null, FontStyle style = FontStyle.Normal, TextAnchor align = TextAnchor.UpperLeft)
        {
            var t = UiRoot.Label(parent, s, 0, 0, 0, 0, size, color ?? TextColor, align);
            t.name = "Text";
            t.fontStyle = style;
            t.verticalOverflow = VerticalWrapMode.Overflow;
            t.lineSpacing = 1.05f;
            AddShadow(t);
            return t;
        }

        /// <summary>Titulo de secao (h3: maiusculo, cor de secao).</summary>
        public static Text Heading(Transform parent, string s) => Text(parent, s.ToUpperInvariant(), 11, Section, FontStyle.Bold);

        /// <summary>Espaco vertical/horizontal fixo.</summary>
        public static RectTransform Space(Transform parent, float h, float w = 0)
        {
            var rt = UiRoot.Box("Space", parent, 0, 0, w, h);
            Layout(rt, w, h);
            return rt;
        }

        /// <summary>Linha divisoria (border-bottom 1px).</summary>
        public static Image Separator(Transform parent)
        {
            var img = UiRoot.Panel(parent, 0, 0, 0, 1, new Color(1, 1, 1, 0.12f));
            img.raycastTarget = false;
            Layout(img, -1, 1);
            return img;
        }

        /// <summary>
        /// Botao do cliente (btn1_normal/normalon/normal_over esticados, texto #e6e1cf com sombra). width 0 = pelo texto
        /// (padding 10px). Altura minima 21.
        /// </summary>
        public static UiTexButton Button(Transform parent, string label, Action onClick, float width = 0, float height = 21, int size = 11)
        {
            var rt = UiRoot.Box("Button", parent, 0, 0, Mathf.Max(width, 20), height);
            var t = UiRoot.Label(rt, label, 0, 0, 0, 0, size, ButtonText, TextAnchor.MiddleCenter);
            UiRoot.Fill(t.rectTransform);
            t.horizontalOverflow = HorizontalWrapMode.Overflow;
            AddShadow(t);
            var w = width > 0 ? width : Mathf.Ceil(t.preferredWidth) + 20;
            rt.sizeDelta = new Vector2(w, height);
            Layout(rt, w, height, -1, w, height);
            var b = L2WndUtil.Button(rt, "L2UI_ch3.button.btn1_normal", "L2UI_ch3.button.btn1_normalon", "L2UI_ch3.button.btn1_normal_over", w, height, true);
            if (L2WndUtil.Tex("L2UI_ch3.button.btn1_normal") == null)
            {
                // sem a interface original: cor solida (#3a3426 com borda #6b5d3c)
                var bg = rt.GetComponent<Image>();
                if (bg) bg.color = new Color32(0x3a, 0x34, 0x26, 0xff);
            }
            b.Label = t;
            b.OnClick = onClick;
            return b;
        }

        /// <summary>Redimensiona um botao criado por Button (mudou o texto).</summary>
        public static void FitButton(UiTexButton b, float height = 21)
        {
            if (!b || !b.Label) return;
            var rt = (RectTransform)b.transform;
            var w = Mathf.Ceil(b.Label.preferredWidth) + 20;
            rt.sizeDelta = new Vector2(w, height);
            Layout(rt, w, height, -1, w, height);
            L2WndUtil.SkinButton(b, "L2UI_ch3.button.btn1_normal", "L2UI_ch3.button.btn1_normalon", "L2UI_ch3.button.btn1_normal_over", w, height, true);
        }

        /// <summary>Link (button.link): texto sublinhado clicavel.</summary>
        public static UiTexButton LinkButton(Transform parent, string label, Action onClick, int size = 11)
        {
            var t = Text(parent, "<color=#e8c56e>" + label + "</color>", size);
            t.raycastTarget = true;
            var b = t.gameObject.AddComponent<UiTexButton>();
            b.Label = t;
            b.OnClick = onClick;
            return b;
        }

        /// <summary>Campo de texto (input) com fundo #070707 e borda #4a4436.</summary>
        public static InputField Input(Transform parent, string value = "", float width = 120, float height = 18, InputField.ContentType type = InputField.ContentType.Standard, int maxLength = 0)
        {
            var rt = UiRoot.Box("Input", parent, 0, 0, width, height);
            var border = rt.gameObject.AddComponent<Image>();
            border.color = new Color32(0x4a, 0x44, 0x36, 0xff);
            var inner = UiRoot.Panel(rt, 0, 0, 0, 0, new Color32(0x07, 0x07, 0x07, 0xff));
            UiRoot.Fill(inner.rectTransform, 1);
            inner.raycastTarget = false;
            var t = UiRoot.Label(rt, "", 0, 0, 0, 0, 11, Color.white);
            UiRoot.Fill(t.rectTransform);
            t.rectTransform.offsetMin = new Vector2(4, 1);
            t.rectTransform.offsetMax = new Vector2(-4, -1);
            t.supportRichText = false;
            t.horizontalOverflow = HorizontalWrapMode.Overflow;
            var f = rt.gameObject.AddComponent<InputField>();
            f.textComponent = t;
            f.targetGraphic = border;
            f.contentType = type;
            f.characterLimit = maxLength;
            f.caretColor = Color.white;
            f.customCaretColor = true;
            f.selectionColor = new Color(0.6f, 0.5f, 0.3f, 0.5f);
            var cb = f.colors;
            cb.highlightedColor = new Color(1.1f, 1.1f, 1.1f);
            f.colors = cb;
            f.text = value ?? "";
            Layout(rt, width, height, -1, width, height);
            return f;
        }

        /// <summary>Caixa de selecao do cliente (CheckBox/checkbox_checked) com rotulo.</summary>
        public static Toggle Check(Transform parent, string label, bool value, Action<bool> onChange, int size = 11)
        {
            var row = Row(parent, 4, TextAnchor.MiddleLeft, "Check");
            var box = UiRoot.Box("Box", row, 0, 0, 12, 12);
            Layout(box, 12, 12, -1, 12, 12);
            var off = box.gameObject.AddComponent<RawImage>();
            var on = UiRoot.Box("On", box, 0, 0, 12, 12).gameObject.AddComponent<RawImage>();
            on.raycastTarget = false;
            var tOff = L2WndUtil.Tex("L2UI.Control.checkbox");
            var tOn = L2WndUtil.Tex("L2UI.ActionWnd.checkbox_checked");
            // texturas 16x16 desenhadas em 16x16 (arte 12x12 no canto)
            if (tOff != null)
            {
                off.uvRect = new Rect(0, 1 - 12f / 16, 12f / 16, 12f / 16);
                L2WndUtil.SetTexture(off, tOff.Url);
            }
            else off.color = new Color32(0x30, 0x2c, 0x22, 0xff);
            if (tOn != null)
            {
                on.uvRect = new Rect(0, 1 - 12f / 16, 12f / 16, 12f / 16);
                L2WndUtil.SetTexture(on, tOn.Url);
            }
            else on.color = UiKit.Accent;
            var tg = row.gameObject.AddComponent<Toggle>();
            tg.targetGraphic = off;
            tg.graphic = on;
            tg.transition = Selectable.Transition.None;
            tg.isOn = value;
            if (onChange != null) tg.onValueChanged.AddListener(new UnityAction<bool>(onChange));
            if (!string.IsNullOrEmpty(label))
            {
                var t = Text(row, label, size);
                t.horizontalOverflow = HorizontalWrapMode.Overflow;
            }
            // L2WndUtil.SetTexture esconde o RawImage ate carregar; o Toggle controla a opacidade do "On"
            return tg;
        }

        /// <summary>Controle deslizante (input range).</summary>
        public static Slider Slider(Transform parent, float min, float max, float value, Action<float> onChange, float width = 110, bool whole = false)
        {
            var rt = UiRoot.Box("Slider", parent, 0, 0, width, 14);
            Layout(rt, width, 14, -1, width, 14);
            var track = UiRoot.Panel(rt, 0, 5, width, 4, new Color32(0x07, 0x07, 0x07, 0xff));
            track.rectTransform.anchorMin = new Vector2(0, 0.5f);
            track.rectTransform.anchorMax = new Vector2(1, 0.5f);
            track.rectTransform.pivot = new Vector2(0.5f, 0.5f);
            track.rectTransform.offsetMin = new Vector2(0, -2);
            track.rectTransform.offsetMax = new Vector2(0, 2);
            var fillArea = UiRoot.Box("Fill Area", rt, 0, 0, 0, 0);
            UiRoot.Fill(fillArea);
            fillArea.offsetMin = new Vector2(0, 5);
            fillArea.offsetMax = new Vector2(-6, -5);
            var fill = UiRoot.Panel(fillArea, 0, 0, 0, 0, new Color32(0x8a, 0x76, 0x4a, 0xff));
            fill.raycastTarget = false;
            var area = UiRoot.Box("Handle Area", rt, 0, 0, 0, 0);
            UiRoot.Fill(area);
            area.offsetMin = new Vector2(3, 0);
            area.offsetMax = new Vector2(-3, 0);
            var handle = UiRoot.Panel(area, 0, 0, 6, 0, new Color32(0xd9, 0xc4, 0x8e, 0xff));
            var s = rt.gameObject.AddComponent<Slider>();
            s.fillRect = fill.rectTransform;
            s.handleRect = handle.rectTransform;
            s.targetGraphic = handle;
            s.direction = UnityEngine.UI.Slider.Direction.LeftToRight;
            s.minValue = min;
            s.maxValue = max;
            s.wholeNumbers = whole;
            s.value = value;
            handle.rectTransform.sizeDelta = new Vector2(6, 0);
            if (onChange != null) s.onValueChanged.AddListener(new UnityAction<float>(onChange));
            return s;
        }

        /// <summary>Imagem de um URL do servidor (icones /icons/...). Escondida ate carregar.</summary>
        public static RawImage Image(Transform parent, string url, float w, float h)
        {
            var rt = UiRoot.Box("Image", parent, 0, 0, w, h);
            Layout(rt, w, h, -1, w, h);
            var img = rt.gameObject.AddComponent<RawImage>();
            img.raycastTarget = false;
            L2WndUtil.SetTexture(img, url);
            return img;
        }

        /// <summary>
        /// Slot (.slot): moldura do inventario, icone, quantidade no canto inferior direito e selo (+enchant) no superior
        /// esquerdo. `iconUrl` null = letras do titulo. O titulo vira dica (UiTooltip).
        /// </summary>
        public static UiTexButton Slot(Transform parent, string iconUrl, string title, long count = 0, string badge = null, float size = 36)
        {
            var rt = UiRoot.Box("Slot", parent, 0, 0, size, size);
            Layout(rt, size, size, -1, size, size);
            var back = rt.gameObject.AddComponent<Image>();
            back.color = new Color32(0x0c, 0x0d, 0x0f, 0xff);
            var frame = UiRoot.Box("frame", rt, 0, 0, size, size).gameObject.AddComponent<RawImage>();
            frame.raycastTarget = false;
            var tf = L2WndUtil.Tex("L2UI_CH3.InventoryWnd.inventory_outline");
            if (tf != null)
            {
                frame.uvRect = new Rect(0, 1 - (float)tf.Ah / tf.H, (float)tf.Aw / tf.W, (float)tf.Ah / tf.H);
                L2WndUtil.SetTexture(frame, tf.Url);
            }
            else frame.enabled = false;
            var b = rt.gameObject.AddComponent<UiTexButton>();
            FillSlot(rt, iconUrl, title, count, badge, size - 4);
            UiTooltip.Set(rt.gameObject, title);
            return b;
        }

        /// <summary>Conteudo de um slot: icone (ou letras), quantidade e selo.</summary>
        public static void FillSlot(RectTransform rt, string iconUrl, string title, long count, string badge, float iconSize)
        {
            var w = rt.sizeDelta.x;
            var h = rt.sizeDelta.y;
            // sem icone (ou falhou ao carregar): as duas primeiras letras do titulo (.noicon)
            var l = UiRoot.Label(rt, (title ?? "").Length > 2 ? title.Substring(0, 2) : title ?? "", 0, 0, w, h, 11, Muted, TextAnchor.MiddleCenter);
            l.name = "letter";
            l.enabled = string.IsNullOrEmpty(iconUrl);
            if (!string.IsNullOrEmpty(iconUrl))
            {
                var ic = UiRoot.Box("icon", rt, (w - iconSize) / 2, (h - iconSize) / 2, iconSize, iconSize).gameObject.AddComponent<RawImage>();
                ic.raycastTarget = false;
                L2WndUtil.SetTexture(ic, iconUrl, false, () =>
                {
                    if (l) l.enabled = true;
                });
            }
            if (count > 1) Badge(rt, Compact(count), false);
            if (!string.IsNullOrEmpty(badge)) Badge(rt, badge, true);
        }

        static string Compact(long n) => L2WndUtil.Compact(n);

        /// <summary>Selo (.badge): fundo preto translucido, 9.5px; topLeft = enchant (#9fd0ff), senao quantidade.</summary>
        public static Text Badge(RectTransform slot, string s, bool topLeft, Color? color = null)
        {
            var bg = UiRoot.Panel(slot, 0, 0, 10, 10, new Color(0, 0, 0, 0.7f));
            bg.name = topLeft ? "badgeTL" : "badgeBR";
            bg.raycastTarget = false;
            var t = UiRoot.Label(bg.rectTransform, s, 0, 0, 0, 0, 9, color ?? (topLeft ? new Color32(0x9f, 0xd0, 0xff, 0xff) : TextColor), TextAnchor.MiddleCenter);
            UiRoot.Fill(t.rectTransform);
            t.horizontalOverflow = HorizontalWrapMode.Overflow;
            var w = Mathf.Ceil(t.preferredWidth) + 4;
            var rt = bg.rectTransform;
            if (topLeft) UiRoot.Place(rt, 1, 1, w, 11);
            else
            {
                rt.anchorMin = rt.anchorMax = new Vector2(1, 0);
                rt.pivot = new Vector2(1, 0);
                rt.anchoredPosition = new Vector2(-1, 1);
                rt.sizeDelta = new Vector2(w, 11);
            }
            return t;
        }

        /// <summary>
        /// Lista com rolagem (.shoplist / overflow:auto): devolve o conteudo (container vertical). `height` = altura
        /// visivel (com LayoutElement, para entrar num container).
        /// </summary>
        public static RectTransform Scroll(Transform parent, float height, out ScrollRect scroll, float spacing = 3)
        {
            var rt = UiRoot.Box("Scroll", parent, 0, 0, 100, height);
            Layout(rt, -1, height, 1, -1, height);
            var bg = rt.gameObject.AddComponent<Image>();
            bg.color = new Color(0, 0, 0, 0.001f);
            scroll = rt.gameObject.AddComponent<ScrollRect>();
            scroll.horizontal = false;
            scroll.movementType = ScrollRect.MovementType.Clamped;
            scroll.scrollSensitivity = 20;
            var vp = UiRoot.Box("Viewport", rt, 0, 0, 0, 0);
            UiRoot.Fill(vp);
            vp.gameObject.AddComponent<RectMask2D>();
            var content = Column(vp, spacing, "Content");
            content.anchorMin = new Vector2(0, 1);
            content.anchorMax = new Vector2(1, 1);
            content.pivot = new Vector2(0.5f, 1);
            content.offsetMin = content.offsetMax = Vector2.zero;
            content.gameObject.AddComponent<ContentSizeFitter>().verticalFit = ContentSizeFitter.FitMode.PreferredSize;
            scroll.viewport = vp;
            scroll.content = content;
            return content;
        }

        /// <summary>
        /// Lista com rolagem que cresce com o conteudo ate `maxHeight` (max-height + overflow:auto, ex.: .shoplist com
        /// 52vh). Devolve o conteudo (container vertical).
        /// </summary>
        public static RectTransform ScrollMax(Transform parent, float maxHeight, float spacing = 3)
        {
            var content = Scroll(parent, maxHeight, out var sr, spacing);
            var rt = (RectTransform)sr.transform;
            var le = rt.GetComponent<LayoutElement>();
            le.minHeight = 0;
            var last = -1f;
            UiEvents.Of(rt).OnLateUpdate = () =>
            {
                var h = Mathf.Min(maxHeight, LayoutUtility.GetPreferredHeight(content));
                if (Mathf.Abs(h - last) < 0.5f) return;
                last = h;
                le.preferredHeight = h;
                LayoutRebuilder.MarkLayoutForRebuild(rt);
            };
            return content;
        }

        /// <summary>Lista com rolagem (sem devolver o ScrollRect).</summary>
        public static RectTransform Scroll(Transform parent, float height, float spacing = 3) => Scroll(parent, height, out _, spacing);

        /// <summary>Destroi um objeto (Destroy no jogo, DestroyImmediate no editor).</summary>
        public static void Destroy(GameObject go)
        {
            if (!go) return;
            go.SetActive(false);
            go.transform.SetParent(null, false);
            if (Application.isPlaying) UnityEngine.Object.Destroy(go);
            else UnityEngine.Object.DestroyImmediate(go);
        }

        /// <summary>Remove todos os filhos (replaceChildren()).</summary>
        public static void Clear(Transform t)
        {
            for (var i = t.childCount - 1; i >= 0; i--)
            {
                var c = t.GetChild(i).gameObject;
                c.SetActive(false);
                c.transform.SetParent(null, false);
                if (Application.isPlaying) UnityEngine.Object.Destroy(c);
                else UnityEngine.Object.DestroyImmediate(c);
            }
        }

        /// <summary>Mostra/esconde (classList.toggle('hidden')).</summary>
        public static void Show(Component c, bool on)
        {
            if (c && c.gameObject.activeSelf != on) c.gameObject.SetActive(on);
        }
    }
}
