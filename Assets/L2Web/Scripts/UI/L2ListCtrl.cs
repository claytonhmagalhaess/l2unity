// ListCtrl do xdat desenhado no porte [I: o NCListCtrl nao foi lido]: cabecalho com as colunas (textStringId, width) do
// controle, linhas de 18 px com texto (cor por celula) ou textura centrada, selecao (TextSelect), clique, duplo clique, dica
// por linha e rolagem pela roda.
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class L2ListCtrl
    {
        public sealed class Cell
        {
            public string Text = "";
            /// <summary>Alfa 0 = cor padrao.</summary>
            public Color32 Color;
            public string Tex;
            public int TexW, TexH;
        }

        public const float HeaderH = 22, RowH = 18;
        static readonly Color TextColor = new Color32(0xdc, 0xdc, 0xdc, 0xff);
        readonly RectTransform el, content;
        public readonly List<float> Widths = new();
        public readonly List<int> Headers = new();
        public int Selected = -1;
        float offset;
        public Action<int> OnClick, OnDoubleClick;
        public Func<int, CustomTooltip> Tooltip;

        public L2ListCtrl(L2Wnd w, string ctrl)
        {
            el = w.Get(ctrl);
            if (!el) return;
            if (w.Ctrl(ctrl)?.J["columns"] is Newtonsoft.Json.Linq.JArray cols)
                foreach (var c in cols)
                {
                    Widths.Add((float)c["width"]);
                    Headers.Add((int)c["textStringId"]);
                }
            var hit = el.gameObject.GetComponent<Image>() ?? el.gameObject.AddComponent<Image>();
            hit.color = new Color(0, 0, 0, 0.001f);
            el.gameObject.AddComponent<RectMask2D>();
            content = UiRoot.Box("content", el, 0, 0, el.sizeDelta.x, el.sizeDelta.y);
            UiEvents.Of(el).OnWheel = e =>
            {
                var max = Mathf.Max(0, content.sizeDelta.y - el.sizeDelta.y);
                offset = Mathf.Clamp(offset - Mathf.Sign(e.scrollDelta.y) * RowH, 0, max);
                content.anchoredPosition = new Vector2(0, offset);
            };
        }

        public void Render(IList<Cell[]> rows)
        {
            if (!content) return;
            UiKit.Clear(content);
            float x = 0;
            for (var k = 0; k < Widths.Count; k++)
            {
                var h = UiRoot.Box("head", content, x, 0, Widths[k], HeaderH);
                L2WndUtil.Paint(h, "L2UI_CH3.ListCtrl.ListCtrlHead", Widths[k], HeaderH, PaintMode.Stretch);
                var t = UiRoot.Label(h, GameData.SysString(Headers[k], ""), 0, 0, Widths[k], HeaderH, 11, new Color32(0xa3, 0xa3, 0xa3, 0xff), TextAnchor.MiddleCenter);
                t.raycastTarget = false;
                x += Widths[k];
            }
            for (var i = 0; i < rows.Count; i++)
            {
                var idx = i;
                var row = UiRoot.Box("row", content, 0, HeaderH + i * RowH, content.sizeDelta.x, RowH);
                if (i == Selected) L2WndUtil.Paint(row, "L2UI_CH3.ListCtrl.TextSelect", row.sizeDelta.x, RowH, PaintMode.Stretch, 0, 0, 16, 13);
                float cx = 0;
                for (var k = 0; k < rows[i].Length && k < Widths.Count; k++)
                {
                    var c = rows[i][k];
                    if (!string.IsNullOrEmpty(c.Tex))
                    {
                        var ic = UiRoot.Box("icon", row, cx + (Widths[k] - c.TexW) / 2, (RowH - c.TexH) / 2, c.TexW, c.TexH);
                        L2WndUtil.Paint(ic, c.Tex, c.TexW, c.TexH, PaintMode.Stretch);
                    }
                    else
                    {
                        var t = UiRoot.Label(row, c.Text, cx + 4, 0, Widths[k] - 8, RowH, 11, c.Color.a > 0 ? (Color)c.Color : TextColor, TextAnchor.MiddleLeft);
                        t.raycastTarget = false;
                    }
                    cx += Widths[k];
                }
                var hit = row.gameObject.AddComponent<Image>();
                hit.color = new Color(0, 0, 0, 0.001f);
                var b = row.gameObject.AddComponent<UiTexButton>();
                b.OnClick = () =>
                {
                    Selected = idx;
                    Render(rows);
                    OnClick?.Invoke(idx);
                };
                b.OnDoubleClick = () => OnDoubleClick?.Invoke(idx);
                if (Tooltip != null) UiTooltip.SetCustom(row.gameObject, () => Tooltip(idx), false, rows[i].Length > 0 ? rows[i][0].Text : "");
            }
            content.sizeDelta = new Vector2(content.sizeDelta.x, HeaderH + rows.Count * RowH);
        }
    }
}
