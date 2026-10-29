// ComboBox e SliderCtrl do Interface.xdat (J5 da matriz) com as texturas e as regras dos controles nativos:
//   NCComboBox (desenho FUN_1000a640, texturas carregadas em FUN_1000a270): L2UI_CH3.Etc.textbox1/2/3 (8x17: borda, meio
//     esticado, borda) ou as _disable; texto 0xffdcdcdc (desabilitado 0xff7e7e7e) a partir de x = 5; botao de abrir
//     L2UI_CH3.Button.downbutton*; lista com a linha selecionada em L2UI_CH3.ListCtrl.TextSelect.
//   SliderCtrl (xdat): backTexture, tickTexture em cada tick, thumb thumbBtnWidth x thumbBtnHeight; numOfTick/currTick.
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class L2Combo
    {
        public readonly RectTransform El;
        readonly RectTransform[] parts = new RectTransform[3];
        readonly Text label;
        readonly UiTexButton drop;
        RectTransform list;
        readonly float w, h;
        public readonly List<string> Items = new();
        public int Selected = -1;
        public bool Enabled { get; private set; } = true;
        public Action<int> OnSelect;

        public L2Combo(RectTransform el, float w, float h)
        {
            El = el;
            this.w = w;
            this.h = h;
            parts[0] = UiRoot.Box("l", el, 0, 0, 8, h);
            parts[1] = UiRoot.Box("m", el, 8, 0, Mathf.Max(0, w - 16), h);
            parts[2] = UiRoot.Box("r", el, w - 8, 0, 8, h);
            Paint();
            label = UiRoot.Label(el, "", 5, 0, w - 5 - 16, h, 11, new Color32(0xdc, 0xdc, 0xdc, 0xff), TextAnchor.MiddleLeft);
            label.horizontalOverflow = HorizontalWrapMode.Overflow;
            var b = UiRoot.Box("drop", el, w - 16, (h - 16) / 2, 16, 16);
            drop = L2WndUtil.Button(b, "L2UI_CH3.Button.downbutton", "L2UI_CH3.Button.downbutton_down", "L2UI_CH3.Button.downbutton_over", 16, 16);
            drop.OnClick = Toggle;
            var hit = el.gameObject.GetComponent<Image>() ?? el.gameObject.AddComponent<Image>();
            hit.color = new Color(0, 0, 0, 0);
            var click = el.gameObject.AddComponent<UiTexButton>();
            click.OnClick = Toggle;
        }

        void Paint()
        {
            var s = Enabled ? "" : "_disable";
            L2WndUtil.Paint(parts[0], "L2UI_CH3.Etc.textbox1" + s, 8, h, PaintMode.Stretch, 0, 0, 8, 17);
            L2WndUtil.Paint(parts[1], "L2UI_CH3.Etc.textbox2" + s, Mathf.Max(0, w - 16), h, PaintMode.Stretch, 0, 0, 8, 17);
            L2WndUtil.Paint(parts[2], "L2UI_CH3.Etc.textbox3" + s, 8, h, PaintMode.Stretch, 0, 0, 8, 17);
        }

        public void SetItems(IEnumerable<string> items)
        {
            Items.Clear();
            Items.AddRange(items);
            if (Selected >= Items.Count) Selected = Items.Count - 1;
            Refresh();
        }

        public void Select(int i)
        {
            Selected = i >= 0 && i < Items.Count ? i : -1;
            Refresh();
        }

        public void SetEnabled(bool on)
        {
            Enabled = on;
            Paint();
            Refresh();
        }

        void Refresh()
        {
            label.text = Selected >= 0 && Selected < Items.Count ? Items[Selected] : "";
            label.color = Enabled ? new Color32(0xdc, 0xdc, 0xdc, 0xff) : new Color32(0x7e, 0x7e, 0x7e, 0xff);
        }

        void Toggle()
        {
            if (list)
            {
                UnityEngine.Object.Destroy(list.gameObject);
                list = null;
                return;
            }
            if (!Enabled || Items.Count == 0) return;
            // lista abaixo do controle, uma linha de 15 px por item
            list = UiRoot.Box("list", El, 0, h, w, Items.Count * 15 + 2);
            var bg = list.gameObject.AddComponent<Image>();
            bg.color = new Color32(0x0c, 0x0d, 0x0f, 0xf0);
            list.SetAsLastSibling();
            var canvas = list.gameObject.AddComponent<Canvas>();
            canvas.overrideSorting = true;
            canvas.sortingOrder = 30000;
            list.gameObject.AddComponent<GraphicRaycaster>();
            for (var i = 0; i < Items.Count; i++)
            {
                var k = i;
                var row = UiRoot.Box("item", list, 1, 1 + i * 15, w - 2, 15);
                if (i == Selected) L2WndUtil.Paint(row, "L2UI_CH3.ListCtrl.TextSelect", w - 2, 15, PaintMode.Stretch, 0, 0, 16, 13);
                var img = row.gameObject.GetComponent<Image>() ?? row.gameObject.AddComponent<Image>();
                img.color = new Color(0, 0, 0, 0);
                var t = UiRoot.Label(row, Items[i], 4, 0, w - 8, 15, 11, new Color32(0xdc, 0xdc, 0xdc, 0xff), TextAnchor.MiddleLeft);
                t.raycastTarget = false;
                var b = row.gameObject.AddComponent<UiTexButton>();
                b.OnClick = () =>
                {
                    Select(k);
                    Toggle();
                    OnSelect?.Invoke(k);
                };
            }
        }
    }

    public sealed class L2Slider : IPointerDownHandler, IDragHandler
    {
        public readonly RectTransform El;
        readonly RectTransform thumb;
        readonly RawImage thumbImg;
        readonly float w, tw;
        public readonly int Ticks;
        public int Tick { get; private set; }
        public bool Enabled = true;
        /// <summary>Chamado ao mudar o tick pelo mouse (OnModifyCurrentTickSliderCtrl).</summary>
        public Action<int> OnChange;
        readonly string thumbNormal, thumbDown;

        public L2Slider(RectTransform el, L2Ctrl c, float w, float h)
        {
            El = el;
            this.w = w;
            Ticks = Math.Max(2, (int)c.N0("numOfTick"));
            tw = c.N("thumbBtnWidth") > 0 ? c.N("thumbBtnWidth") : 8;
            var th = c.N("thumbBtnHeight") > 0 ? c.N("thumbBtnHeight") : h;
            L2WndUtil.Paint(UiRoot.Box("back", el, 0, 0, w, h), c.S("backTexture"), w, h, PaintMode.Normal);
            var tick = c.S("tickTexture");
            for (var i = 0; i < Ticks; i++)
                L2WndUtil.Paint(UiRoot.Box("tick", el, X(i), 0, tw, h), tick, tw, h, PaintMode.Normal);
            thumbNormal = c.S("thumbBtnNormalTexture");
            thumbDown = c.S("thumbBtnDownTexture");
            thumb = UiRoot.Box("thumb", el, 0, 0, tw, th);
            thumbImg = L2WndUtil.Paint(thumb, thumbNormal, tw, th, PaintMode.Normal);
            var hit = el.gameObject.GetComponent<Image>() ?? el.gameObject.AddComponent<Image>();
            hit.color = new Color(0, 0, 0, 0);
            el.gameObject.AddComponent<L2SliderInput>().Owner = this;
            SetTick((int)c.N0("currTick"));
        }

        float X(int i) => Ticks > 1 ? i * (w - tw) / (Ticks - 1) : 0;

        public void SetTick(int i)
        {
            Tick = Mathf.Clamp(i, 0, Ticks - 1);
            thumb.anchoredPosition = new Vector2(X(Tick), 0);
        }

        public void OnPointerDown(PointerEventData e) => Pick(e);
        public void OnDrag(PointerEventData e) => Pick(e);

        void Pick(PointerEventData e)
        {
            if (!Enabled) return;
            if (!RectTransformUtility.ScreenPointToLocalPointInRectangle(El, e.position, e.pressEventCamera, out var p)) return;
            var x = p.x - El.rect.xMin;
            var i = Mathf.RoundToInt(Mathf.Clamp01((x - tw / 2) / Mathf.Max(1, w - tw)) * (Ticks - 1));
            if (i == Tick) return;
            SetTick(i);
            OnChange?.Invoke(i);
        }
    }

    /// <summary>Repassa o mouse do RectTransform para o L2Slider (que nao e MonoBehaviour).</summary>
    public sealed class L2SliderInput : MonoBehaviour, IPointerDownHandler, IDragHandler
    {
        public L2Slider Owner;
        public void OnPointerDown(PointerEventData e) => Owner?.OnPointerDown(e);
        public void OnDrag(PointerEventData e) => Owner?.OnDrag(e);
    }
}
