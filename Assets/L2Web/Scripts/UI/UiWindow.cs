// Janelas simples (ui/windows.ts): arrastaveis pela barra de titulo, com botao de fechar e posicao lembrada por janela.
// Com a moldura original do cliente (FrameBackLeft/Mid/Right, FrameCloseBtn, fundo npc2_back), como o CSS
// `.uiwin:not(.l2wnd)`. O conteudo vai em `Body`: um container vertical (VerticalLayoutGroup, padding 8/10) dentro de
// uma area com rolagem; a altura da janela acompanha o conteudo ate o limite da tela (max-height: 100vh - 120px).
// Use os blocos de UiKit (Text, Button, Row, Input, Check, Slider, Slot, Scroll...) para preencher o Body.
using System;
using System.Globalization;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    public class UiWindow
    {
        const float Header = 20;
        static int zTop = 20;

        /// <summary>Elemento raiz da janela (section.uiwin). Ativo = visivel.</summary>
        public readonly RectTransform El;
        /// <summary>Conteudo (div.uibody): container vertical; os filhos ocupam a largura e a altura sai do conteudo.</summary>
        public readonly RectTransform Body;
        /// <summary>Area com rolagem do corpo.</summary>
        public readonly ScrollRect Scroll;
        /// <summary>Chave da posicao lembrada (Config "win.&lt;id&gt;").</summary>
        public readonly string Id;
        /// <summary>Chamado quando a janela e fechada (Hide).</summary>
        public Action OnClose = () => { };
        /// <summary>Ordem de empilhamento (o z-index do DOM; maior = na frente).</summary>
        public int Z { get; private set; }

        readonly Text titleEl;
        readonly RectTransform header, mid, closeRt;
        readonly RawImage backTex;
        float width;
        float lastH = -1;

        /// <summary>
        /// Cria a janela (escondida) em `parent`. `width` 0 = 260 (o min-width do CSS e 220); x/y = posicao padrao
        /// (80, 120) quando nao ha posicao salva.
        /// </summary>
        public UiWindow(string id, string title, Transform parent, float width = 0, float? x = null, float? y = null)
        {
            Id = id;
            this.width = width > 0 ? width : 260;
            El = UiRoot.Box("UiWindow " + id, parent, 0, 0, this.width, 100);
            // borda 1px #2f2a20 + contorno 1px #000 (box-shadow), fundo rgba(12,12,14,.94) com npc2_back por cima
            var outer = El.gameObject.AddComponent<Image>();
            outer.color = Color.black;
            var border = UiRoot.Panel(El, 0, 0, 0, 0, new Color32(0x2f, 0x2a, 0x20, 0xff));
            border.name = "border";
            UiRoot.Fill(border.rectTransform, 1);
            border.raycastTarget = false;
            var back = UiRoot.Panel(border.rectTransform, 0, 0, 0, 0, new Color(12 / 255f, 12 / 255f, 14 / 255f, 0.94f));
            back.name = "back";
            UiRoot.Fill(back.rectTransform, 1);
            back.raycastTarget = false;
            var bt = UiRoot.Box("tex", back.rectTransform, 0, 0, 0, 0);
            UiRoot.Fill(bt);
            backTex = bt.gameObject.AddComponent<RawImage>();
            backTex.raycastTarget = false;
            backTex.enabled = false;

            // barra de titulo (arrastavel)
            header = UiRoot.Box("header", El, 1, 1, this.width - 2, Header);
            var hit = header.gameObject.AddComponent<Image>();
            hit.color = new Color32(0x22, 0x22, 0x22, 0xff);
            var left = UiRoot.Box("left", header, 0, 0, 16, Header);
            mid = UiRoot.Box("mid", header, 16, 0, this.width - 34, Header);
            var right = UiRoot.Box("right", header, this.width - 18, 0, 16, Header);
            right.anchorMin = right.anchorMax = new Vector2(1, 1);
            right.pivot = new Vector2(1, 1);
            right.anchoredPosition = Vector2.zero;
            if (L2WndUtil.Paint(left, "L2UI_CH3.FrameCtrl.FrameBackLeft", 16, Header, PaintMode.Normal) != null) hit.color = new Color(0, 0, 0, 0.001f);
            L2WndUtil.Paint(mid, "L2UI_CH3.FrameCtrl.FrameBackMid", this.width - 34, Header, PaintMode.Stretch, 0, 0, 16, Header);
            L2WndUtil.Paint(right, "L2UI_CH3.FrameCtrl.FrameBackRight", 16, Header, PaintMode.Normal);
            titleEl = UiRoot.Label(header, title, 10, 0, this.width - 40, Header, 11, new Color32(0xdc, 0xd8, 0xc4, 0xff));
            titleEl.name = "title";
            titleEl.fontStyle = FontStyle.Bold;
            titleEl.horizontalOverflow = HorizontalWrapMode.Overflow;
            UiKit.AddShadow(titleEl);
            closeRt = UiRoot.Box("close", header, 0, 2, 16, 16);
            closeRt.anchorMin = closeRt.anchorMax = new Vector2(1, 1);
            closeRt.pivot = new Vector2(1, 1);
            closeRt.anchoredPosition = new Vector2(-4, -2);
            var close = L2WndUtil.Button(closeRt, "L2UI_CH3.FrameCtrl.FrameCloseBtn", "L2UI_CH3.FrameCtrl.FrameCloseOnBtn", "L2UI_CH3.FrameCtrl.FrameCloseBtn", 16, 16);
            if (L2WndUtil.Tex("L2UI_CH3.FrameCtrl.FrameCloseBtn") == null)
            {
                var x0 = UiRoot.Label(closeRt, "×", 0, 0, 16, 16, 16, UiKit.Muted, TextAnchor.MiddleCenter);
                x0.name = "x";
            }
            close.OnClick = Hide;

            // corpo com rolagem
            var sv = UiRoot.Box("scroll", El, 1, 1 + Header, this.width - 2, 10);
            Scroll = sv.gameObject.AddComponent<ScrollRect>();
            Scroll.horizontal = false;
            Scroll.movementType = ScrollRect.MovementType.Clamped;
            Scroll.scrollSensitivity = 24;
            var vp = UiRoot.Box("viewport", sv, 0, 0, 0, 0);
            UiRoot.Fill(vp);
            vp.gameObject.AddComponent<RectMask2D>();
            var vpHit = vp.gameObject.AddComponent<Image>();
            vpHit.color = new Color(0, 0, 0, 0.001f);
            Body = UiRoot.Box("body", vp, 0, 0, this.width - 2, 10);
            Body.anchorMin = new Vector2(0, 1);
            Body.anchorMax = new Vector2(1, 1);
            Body.pivot = new Vector2(0.5f, 1);
            Body.offsetMin = Body.offsetMax = Vector2.zero;
            var g = Body.gameObject.AddComponent<VerticalLayoutGroup>();
            g.padding = new RectOffset(10, 10, 8, 8);
            g.spacing = 4;
            g.childControlWidth = g.childControlHeight = true;
            g.childForceExpandWidth = true;
            g.childForceExpandHeight = false;
            Body.gameObject.AddComponent<ContentSizeFitter>().verticalFit = ContentSizeFitter.FitMode.PreferredSize;
            Scroll.viewport = vp;
            Scroll.content = Body;

            // fundo da janela (npc2_back 512x512 repetido)
            var tb = L2WndUtil.Tex("L2UI_CH3.NpcWnd.npc2_back");
            if (tb != null)
            {
                backTex.uvRect = new Rect(0, 0, 1, 1);
                L2WndUtil.SetTexture(backTex, tb.Url, true);
            }

            // eventos: frente ao clicar, arrasto pela barra, altura pelo conteudo
            var ev = UiEvents.Of(El);
            ev.OnDown = _ => Focus();
            ev.OnLateUpdate = Fit;
            var hev = UiEvents.Of(header);
            Vector2 drag = default;
            hev.OnDown = _ => Focus();
            hev.OnBeginDrag = e =>
            {
                var p = Pointer(e.pressPosition);
                drag = new Vector2(p.x - El.anchoredPosition.x, p.y + El.anchoredPosition.y);
            };
            hev.OnDrag = e =>
            {
                var p = Pointer(e.position);
                Move(p.x - drag.x, p.y - drag.y);
            };
            hev.OnEndDrag = _ => Config.Set("win." + id, "{\"x\":" + Mathf.Round(El.anchoredPosition.x).ToString(CultureInfo.InvariantCulture) + ",\"y\":" + Mathf.Round(-El.anchoredPosition.y).ToString(CultureInfo.InvariantCulture) + "}");

            var saved = Config.Get("win." + id);
            float px = x ?? 80, py = y ?? 120;
            if (saved != null) ParsePos(saved, ref px, ref py);
            Move(px, py);
            El.gameObject.SetActive(false);
        }

        // ponteiro em pixels da interface, y para baixo (clientX/clientY)
        static Vector2 Pointer(Vector2 screen)
        {
            var k = UiRoot.PixelScale;
            return new Vector2(screen.x / k, UiRoot.Size.y - screen.y / k);
        }

        static void ParsePos(string json, ref float x, ref float y)
        {
            try
            {
                var o = Newtonsoft.Json.Linq.JObject.Parse(json);
                x = (float)(double)o["x"];
                y = (float)(double)o["y"];
            }
            catch
            {
                /* posicao invalida: usa a padrao */
            }
        }

        void Move(float x, float y)
        {
            var vp = UiRoot.Size;
            var maxX = Mathf.Max(0, vp.x - 120);
            var maxY = Mathf.Max(0, vp.y - 40);
            El.anchoredPosition = new Vector2(Mathf.Round(Mathf.Min(maxX, Mathf.Max(0, x))), -Mathf.Round(Mathf.Min(maxY, Mathf.Max(0, y))));
        }

        /// <summary>Posicao atual (left, top) em pixels da interface.</summary>
        public Vector2 Position => new(El.anchoredPosition.x, -El.anchoredPosition.y);

        /// <summary>Move a janela para (left, top), presa a tela (nao salva).</summary>
        public void MoveTo(float x, float y) => Move(x, y);

        /// <summary>Largura da janela (style.width).</summary>
        public float Width
        {
            get => width;
            set
            {
                width = Mathf.Max(60, value);
                El.sizeDelta = new Vector2(width, El.sizeDelta.y);
                header.sizeDelta = new Vector2(width - 2, Header);
                mid.sizeDelta = new Vector2(width - 34, Header);
                L2WndUtil.Paint(mid, "L2UI_CH3.FrameCtrl.FrameBackMid", width - 34, Header, PaintMode.Stretch, 0, 0, 16, Header);
                titleEl.rectTransform.sizeDelta = new Vector2(width - 40, Header);
                var sv = (RectTransform)Scroll.transform;
                sv.sizeDelta = new Vector2(width - 2, sv.sizeDelta.y);
                lastH = -1;
            }
        }

        /// <summary>Altura maxima do corpo; 0 = a tela - 120 (padrao).</summary>
        public float MaxHeight;

        int settle;

        // altura = barra + conteudo (ate o limite), recalculada quando o conteudo muda
        void Fit()
        {
            // nos primeiros quadros depois de abrir, refaz o layout: o texto so quebra na largura final depois que a fonte
            // dinamica rasteriza os glifos e a janela assume o tamanho, e a altura calculada antes fica curta
            if (settle > 0)
            {
                settle--;
                LayoutRebuilder.ForceRebuildLayoutImmediate(Body);
                lastH = -1;
            }
            var content = LayoutUtility.GetPreferredHeight(Body);
            var max = (MaxHeight > 0 ? MaxHeight : UiRoot.Size.y - 120) - Header - 2;
            var bodyH = Mathf.Max(16, Mathf.Min(content, max));
            if (Mathf.Abs(bodyH - lastH) < 0.5f) return;
            lastH = bodyH;
            var sv = (RectTransform)Scroll.transform;
            sv.sizeDelta = new Vector2(width - 2, bodyH);
            El.sizeDelta = new Vector2(width, bodyH + Header + 2);
        }

        /// <summary>Recalcula a altura agora (normalmente automatico, a cada quadro).</summary>
        public void Relayout()
        {
            LayoutRebuilder.ForceRebuildLayoutImmediate(Body);
            lastH = -1;
            Fit();
        }

        /// <summary>Troca o titulo.</summary>
        public void SetTitle(string t) => titleEl.text = t;

        /// <summary>Titulo atual.</summary>
        public string Title => titleEl.text;

        /// <summary>Traz a janela para a frente.</summary>
        public void Focus()
        {
            Z = ++zTop;
            El.SetAsLastSibling();
        }

        /// <summary>true se esta aberta.</summary>
        public bool Visible => El && El.gameObject.activeSelf;

        /// <summary>Abre e traz para a frente.</summary>
        public void Show()
        {
            El.gameObject.SetActive(true);
            Focus();
            Relayout();
            settle = 3;
        }

        /// <summary>Fecha (chama OnClose se estava aberta).</summary>
        public void Hide()
        {
            if (!Visible) return;
            El.gameObject.SetActive(false);
            OnClose?.Invoke();
        }

        /// <summary>Abre/fecha.</summary>
        public void Toggle()
        {
            if (Visible) Hide();
            else Show();
        }

        /// <summary>Esvazia o corpo (body.replaceChildren()).</summary>
        public void Clear()
        {
            UiKit.Clear(Body);
            Scroll.verticalNormalizedPosition = 1;
            lastH = -1;
        }
    }
}
