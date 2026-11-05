// Tooltip do cliente (02 §1.2 da #0024). NCVirtualWndMain::PostDrawChildWindow (nw:0x10072da0) manda a cada quadro o
// OnPostPaint a janela sob o cursor: a dica aparece no primeiro quadro com o mouse em cima, sem atraso, e nao aparece
// durante um arrasto. O conteudo e montado uma vez por elemento (NCTooltipManager::MakeTooltipInfo guarda o TooltipInfo no
// item) e desenhado pelo L2Tooltip: caixa de 9 partes (L2UI_ch3.Tooltip.Tooltip1..9, cantos 8 x 8) acima do canto
// superior esquerdo do controle, ou 32 px abaixo dele se nao couber.
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace L2Web.UI
{
    public class UiTooltip : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
    {
        /// <summary>Texto da dica (tipo "Text"; vazio = sem dica quando nao ha Build).</summary>
        public string Text;
        /// <summary>Monta a dica de dados (Inventory, Skill, Shortcut...). Chamado ao entrar e quando o cache e invalidado.</summary>
        public Func<CustomTooltip> Build;
        /// <summary>Remonta a cada segundo enquanto aparece (tempo restante do buff: Condition "Type=RemainTime").</summary>
        public bool Live;
        /// <summary>Usa a versao simples (DrawSimpleTooltip: so as SimpleLineCount primeiras linhas) quando houver.</summary>
        public bool Simple;

        /// <summary>Arrasto em curso (GetDragDropState != 0): nenhuma dica aparece.</summary>
        public static bool Dragging;

        static RectTransform box, content;
        static readonly RawImage[] frame = new RawImage[9];
        static readonly List<Text> pool = new();
        static Text probe;
        /// <summary>Primeira linha desenhada (o App le "box" e "label" por reflexao no modo de teste).</summary>
        static Text label;
        static UiTooltip owner;
        bool over;
        CustomTooltip cache;
        float builtAt;

        /// <summary>Dica de texto de um elemento (o `title` do DOM; tipo "Text" do xdat).</summary>
        public static void Set(GameObject go, string text)
        {
            if (!go) return;
            var t = go.GetComponent<UiTooltip>();
            if (string.IsNullOrEmpty(text))
            {
                if (t)
                {
                    t.Text = "";
                    t.Build = null;
                    t.Invalidate();
                }
                return;
            }
            if (!t) t = go.AddComponent<UiTooltip>();
            if (t.Text == text && t.Build == null) return;
            t.Text = text;
            t.Build = null;
            t.Invalidate();
        }

        /// <summary>
        /// Dica de dados (ReturnTooltipInfo do ToolTip.uc), montada quando o mouse entra e guardada. `text` fica como resumo
        /// (procura dos testes de ponta a ponta), sem aparecer.
        /// </summary>
        public static UiTooltip SetCustom(GameObject go, Func<CustomTooltip> build, bool live = false, string text = "")
        {
            if (!go) return null;
            var t = go.GetComponent<UiTooltip>() ?? go.AddComponent<UiTooltip>();
            t.Build = build;
            t.Text = text ?? "";
            t.Live = live;
            t.Invalidate();
            return t;
        }

        /// <summary>Troca a dica com o mouse ja em cima (controles dentro de uma janela).</summary>
        public void Change(string text)
        {
            if (Text == text && Build == null) return;
            Text = text;
            Build = null;
            Invalidate();
        }

        /// <summary>Descarta o conteudo guardado (o item mudou); se a dica esta na tela, redesenha.</summary>
        public void Invalidate()
        {
            cache = null;
            if (owner == this) ShowBox();
        }

        public void OnPointerEnter(PointerEventData e)
        {
            over = true;
            if (!Dragging) ShowBox();
        }

        public void OnPointerExit(PointerEventData e)
        {
            over = false;
            if (owner == this) HideBox();
        }

        void Update()
        {
            if (!over) return;
            if (Dragging)
            {
                if (owner == this) HideBox();
                return;
            }
            if (owner != this) ShowBox();
            else if (Live && Time.unscaledTime - builtAt >= 1f)
            {
                cache = null;
                ShowBox();
            }
        }

        void OnDisable()
        {
            over = false;
            if (owner == this) HideBox();
        }

        CustomTooltip Content()
        {
            if (cache != null) return cache;
            builtAt = Time.unscaledTime;
            cache = Build != null ? Build() : L2Tooltip.Text(Text);
            return cache;
        }

        void ShowBox()
        {
            var tip = Content();
            if (tip == null || tip.DrawList.Count == 0)
            {
                if (owner == this) HideBox();
                return;
            }
            Ensure();
            owner = this;
            var lay = L2Tooltip.Measure(tip, MeasureText);
            var simple = Simple && tip.SimpleLineCount > 0;
            var w = (simple ? lay.SimpleW : lay.W) + 2 * L2Tooltip.Pad;
            var h = (simple ? lay.SimpleH : lay.H) + 2 * L2Tooltip.Pad;
            foreach (var t in pool) t.gameObject.SetActive(false);
            var used = 0;
            foreach (var r in lay.Runs)
            {
                if (simple && r.Line >= tip.SimpleLineCount) break;
                if (r.Item.Type != DrawItemType.Text) continue;
                if (used == pool.Count) pool.Add(NewText());
                var t = pool[used++];
                if (used == 1) label = t;
                t.gameObject.SetActive(true);
                t.color = r.Color;
                t.text = r.Grade ? r.Text.Substring(5).ToUpperInvariant() : r.Text;
                t.alignment = r.Grade ? TextAnchor.MiddleCenter : TextAnchor.UpperLeft;
                t.horizontalOverflow = r.WrapW > 0 ? HorizontalWrapMode.Wrap : HorizontalWrapMode.Overflow;
                UiRoot.Place(t.rectTransform, L2Tooltip.Pad + r.X, L2Tooltip.Pad + r.Y, r.Grade ? r.W : r.WrapW > 0 ? r.WrapW : r.W + 2, r.H);
            }
            // referencia: canto superior esquerdo do controle (o slot e o proprio elemento aqui)
            var corners = new Vector3[4];
            ((RectTransform)transform).GetWorldCorners(corners);
            var k = UiRoot.PixelScale;
            var vp = UiRoot.Size;
            var p = L2Tooltip.Place(corners[1].x / k, vp.y - corners[1].y / k, w, h, vp.x);
            UiRoot.Place(box, Mathf.Round(p.x), Mathf.Round(p.y), Mathf.Ceil(w), Mathf.Ceil(h));
            LayoutFrame(Mathf.Ceil(w), Mathf.Ceil(h));
            box.SetAsLastSibling();
            box.gameObject.SetActive(true);
        }

        static void HideBox()
        {
            owner = null;
            if (box) box.gameObject.SetActive(false);
        }

        // ------------------------------------------------------------ desenho
        static void Ensure()
        {
            if (box) return;
            box = UiRoot.Box("Tooltip", UiRoot.Rect, 0, 0, 10, 10);
            for (var i = 0; i < 9; i++)
            {
                var img = UiRoot.Box("tt" + (i + 1), box, 0, 0, 8, 8).gameObject.AddComponent<RawImage>();
                img.raycastTarget = false;
                var t = L2WndUtil.Tex("L2UI_ch3.Tooltip.Tooltip" + (i + 1));
                if (t != null) L2WndUtil.SetTexture(img, t.Url);
                else img.color = new Color32(0x0a, 0x0a, 0x0c, 0xf0);
                frame[i] = img;
            }
            content = UiRoot.Box("content", box, 0, 0, 10, 10);
            probe = UiRoot.Label(box, "", 0, 0, 10, 10, 11, Color.white);
            probe.gameObject.SetActive(false);
        }

        /// <summary>DrawTooltip: cantos 8 x 8 em tamanho natural, bordas e miolo esticados (texturas 1..9 em linhas).</summary>
        static void LayoutFrame(float w, float h)
        {
            float[] xs = { 0, 8, w - 8 }, ws = { 8, w - 16, 8 }, ys = { 0, 8, h - 8 }, hs = { 8, h - 16, 8 };
            for (var i = 0; i < 9; i++) UiRoot.Place(frame[i].rectTransform, xs[i % 3], ys[i / 3], Mathf.Max(0, ws[i % 3]), Mathf.Max(0, hs[i / 3]));
            UiRoot.Place(content, 0, 0, w, h);
        }

        static Text NewText()
        {
            var t = UiRoot.Label(content, "", 0, 0, 10, 10, 11, Color.white, TextAnchor.UpperLeft);
            t.verticalOverflow = VerticalWrapMode.Overflow;
            t.supportRichText = false;
            t.raycastTarget = false;
            UiKit.AddShadow(t);
            return t;
        }

        /// <summary>GetTextSize / largura de quebra (FUN_10020bb0): tamanho do texto na fonte da interface.</summary>
        static Vector2 MeasureText(string s, float wrap)
        {
            var settings = probe.GetGenerationSettings(new Vector2(wrap > 0 ? wrap : 10000, 10000));
            settings.horizontalOverflow = wrap > 0 ? HorizontalWrapMode.Wrap : HorizontalWrapMode.Overflow;
            settings.verticalOverflow = VerticalWrapMode.Overflow;
            settings.scaleFactor = 1;
            var gen = probe.cachedTextGeneratorForLayout;
            var w = Mathf.Ceil(gen.GetPreferredWidth(s, settings));
            var h = Mathf.Ceil(gen.GetPreferredHeight(s, settings));
            return new Vector2(wrap > 0 ? Mathf.Min(w, wrap) : w, Mathf.Max(h, 12));
        }
    }
}
