// <select> do lobby (.lb-select, ex.: o nome do personagem em CharacterSelectWnd): caixa escura com o valor atual e
// uma lista que abre embaixo ao clicar. Clique fora fecha.
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class LobbySelect
    {
        public readonly RectTransform Root;
        /// <summary>Indice escolhido pelo usuario (evento "change").</summary>
        public Action<int> OnChange;

        readonly Text label;
        readonly List<string> options = new();
        int value = -1;
        GameObject popup;

        static readonly Color Border = new Color32(0x3f, 0x3b, 0x31, 0xff);
        static readonly Color Back = new Color32(0x05, 0x05, 0x05, 0xff);

        public LobbySelect(Transform parent, float x, float y, float w, float h)
        {
            Root = UiRoot.Box("Select", parent, x, y, w, h);
            var frame = Root.gameObject.AddComponent<Image>();
            frame.color = Border;
            var inner = UiRoot.Fill(UiRoot.Box("Back", Root, 0, 0, w, h), 1);
            var bg = inner.gameObject.AddComponent<Image>();
            bg.color = Back;
            bg.raycastTarget = false;
            label = UiRoot.Label(inner, "", 0, 0, w, h, 11, Color.white);
            UiRoot.Fill(label.rectTransform);
            label.rectTransform.offsetMin = new Vector2(2, 0);
            label.rectTransform.offsetMax = new Vector2(-14, 0);
            label.horizontalOverflow = HorizontalWrapMode.Overflow;
            var arrow = UiRoot.Label(inner, "▼", w - 14, 0, 12, h - 2, 8, new Color32(0xc9, 0xc4, 0xb6, 0xff), TextAnchor.MiddleCenter);
            arrow.rectTransform.anchorMin = arrow.rectTransform.anchorMax = new Vector2(1, 1);
            arrow.rectTransform.pivot = new Vector2(1, 1);
            arrow.rectTransform.anchoredPosition = new Vector2(-1, 0);
            var b = Root.gameObject.AddComponent<Button>();
            b.targetGraphic = frame;
            var nav = b.navigation;
            nav.mode = Navigation.Mode.None;
            b.navigation = nav;
            b.onClick.AddListener(Toggle);
        }

        public int Count => options.Count;

        /// <summary>Indice selecionado (-1 sem opcoes). Definir nao dispara OnChange.</summary>
        public int Value
        {
            get => value;
            set
            {
                // -1 = nada escolhido (combo vazio, como o NCPawnSelectWnd sem personagem)
                this.value = options.Count == 0 || value < 0 ? -1 : Mathf.Clamp(value, 0, options.Count - 1);
                label.text = this.value >= 0 ? options[this.value] : "";
            }
        }

        /// <summary>Troca as opcoes (innerHTML = '' + option...).</summary>
        public void SetOptions(IEnumerable<string> list)
        {
            Close();
            options.Clear();
            options.AddRange(list);
            Value = value < 0 ? 0 : value;
        }

        void Toggle()
        {
            if (popup) Close();
            else Open();
        }

        public void Close()
        {
            if (!popup) return;
            if (Application.isPlaying) UnityEngine.Object.Destroy(popup);
            else UnityEngine.Object.DestroyImmediate(popup);
            popup = null;
        }

        void Open()
        {
            if (options.Count == 0) return;
            // bloqueador em tela cheia (clique fora fecha) com a lista na posicao da caixa
            var canvas = Root.GetComponentInParent<Canvas>().rootCanvas;
            var block = UiRoot.Fill(UiRoot.Box("SelectPopup", canvas.transform), 0);
            popup = block.gameObject;
            var bimg = popup.AddComponent<Image>();
            bimg.color = Color.clear;
            var bb = popup.AddComponent<Button>();
            bb.transition = Selectable.Transition.None;
            bb.onClick.AddListener(Close);
            var w = Root.rect.width;
            const float rowH = 16;
            var list = UiRoot.Box("List", block, 0, 0, w, rowH * options.Count + 2);
            list.anchorMin = list.anchorMax = list.pivot = new Vector2(0.5f, 0.5f);
            // canto inferior esquerdo da caixa em coordenadas do bloqueador
            var corners = new Vector3[4];
            Root.GetWorldCorners(corners);
            var bl = block.InverseTransformPoint(corners[0]);
            list.anchoredPosition = new Vector2(bl.x + w / 2, bl.y - list.sizeDelta.y / 2);
            var frame = list.gameObject.AddComponent<Image>();
            frame.color = Border;
            for (var i = 0; i < options.Count; i++)
            {
                var idx = i;
                var row = UiRoot.Box("Option", list, 1, 1 + i * rowH, w - 2, rowH);
                var img = row.gameObject.AddComponent<Image>();
                img.color = Color.white;
                var t = UiRoot.Label(row, options[i], 2, 0, w - 6, rowH, 11, Color.white);
                t.horizontalOverflow = HorizontalWrapMode.Overflow;
                var b = row.gameObject.AddComponent<Button>();
                b.targetGraphic = img;
                var cb = b.colors;
                cb.normalColor = i == value ? new Color32(0x28, 0x3c, 0x6e, 0xff) : Back;
                cb.highlightedColor = cb.selectedColor = new Color32(0x37, 0x55, 0x96, 0xff);
                cb.pressedColor = new Color32(0x2d, 0x46, 0x80, 0xff);
                cb.colorMultiplier = 1;
                cb.fadeDuration = 0;
                b.colors = cb;
                b.onClick.AddListener(() =>
                {
                    Close();
                    if (idx == value) return;
                    Value = idx;
                    OnChange?.Invoke(idx);
                });
            }
        }
    }
}
