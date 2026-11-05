// L2WndUtil (continuacao): grade de slots do ItemWindow (fillItemWindow) e barra de rolagem do cliente (attachScroll).
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    public static partial class L2WndUtil
    {
        /// <summary>
        /// Grade de slots (ItemWindow) com icones: cria os slots e devolve-os para ligar eventos. `iconUrl` converte o
        /// nome do icone em URL (null = sem icone: as duas primeiras letras do titulo).
        /// </summary>
        public static List<UiTexButton> FillItemWindow(L2Wnd w, string name, IList<SlotData> list, Func<string, string> iconUrl)
        {
            var outList = new List<UiTexButton>();
            var el = w.Content(name);
            var c = w.Ctrl(name);
            if (!el || c == null) return outList;
            UiKit.Clear(el);
            var cols = Mathf.Max(1, (int)c.N0("col"));
            var iw = c.N0("iconWidth") > 0 ? c.N0("iconWidth") : 32;
            var ih = c.N0("iconHeight") > 0 ? c.N0("iconHeight") : 32;
            var gx = c.N0("gapX") > 0 ? c.N0("gapX") : 0;
            var gy = c.N0("gapY") > 0 ? c.N0("gapY") : 0;
            var bg = Tex(c.S("backgroundItemTex")) ?? Tex("L2UI_CH3.InventoryWnd.inventory_outline");
            for (var i = 0; i < list.Count; i++)
            {
                var d = list[i];
                var rt = UiRoot.Box("slot", el, (i % cols) * (iw + gx), (i / cols) * (ih + gy), iw, ih);
                // fundo: rgba(0,0,0,.35) + textura do slot esticada (100% 100%)
                var back = rt.gameObject.AddComponent<Image>();
                back.color = new Color(0, 0, 0, 0.35f);
                if (bg != null)
                {
                    var img = Bg(rt, "slotbg");
                    UiRoot.Place(img.rectTransform, 0, 0, iw, ih);
                    img.uvRect = new Rect(0, 0, 1, 1);
                    SetTexture(img, bg.Url);
                }
                var b = rt.gameObject.AddComponent<UiTexButton>();
                UiKit.FillSlot(rt, iconUrl?.Invoke(d.Icon), d.Title, d.Count, d.Badge, Mathf.Min(iw, ih));
                if (d.Cls != null && d.Cls.Contains("disabled")) rt.gameObject.AddComponent<CanvasGroup>().alpha = 0.45f;
                if (d.Cls != null && d.Cls.Contains("equipped")) rt.name = "slot equipped";
                if (d.Tip != null) UiTooltip.SetCustom(rt.gameObject, d.Tip, d.LiveTip, d.Title);
                else UiTooltip.Set(rt.gameObject, d.Title);
                outList.Add(b);
            }
            var rows = (list.Count + cols - 1) / cols;
            el.sizeDelta = new Vector2(el.sizeDelta.x, rows * (ih + gy));
            return outList;
        }

        /// <summary>
        /// Barra de rolagem do cliente (L2UI_CH3.ScrollBar) ao lado de uma lista: seta para cima, trilho, cursor
        /// arrastavel e seta para baixo, a esquerda como no chat do Interlude. Fica dentro do elemento da lista (some
        /// junto). `bottomInset` encurta a barra (botao de filtro do chat embaixo dela).
        /// </summary>
        public static RectTransform AttachScroll(L2Log log, string side = "left", float bottomInset = 0)
        {
            var el = log.El;
            var w = el.sizeDelta.x;
            var h = el.sizeDelta.y - bottomInset;
            var sb = UiRoot.Box("l2sb", el, side == "left" ? 0 : w - 16, 0, 16, h);
            sb.SetAsLastSibling();
            if (side == "left") log.SetPadding(22, 4);
            else log.SetPadding(6, 20);

            UiTexButton Btn(string n, string on, string over, float y)
            {
                var rt = UiRoot.Box("btn", sb, 0, y, 16, 16);
                var b = Button(rt, n, on, over, 16, 16);
                var t = Tex(n);
                if (t != null) PlaceImage(b.Image, 16, 16, 0, 0, 16, 16, false);
                return b;
            }
            var up = Btn("L2UI_CH3.ScrollBar.scrollbarupbtn", "L2UI_CH3.ScrollBar.scrollbaruponbtn", "L2UI_CH3.ScrollBar.scrollbarupbtn_over", 0);
            var down = Btn("L2UI_CH3.ScrollBar.scrollbardownbtn", "L2UI_CH3.ScrollBar.scrollbardownonbtn", "L2UI_CH3.ScrollBar.scrollbardownbtn_over", h - 16);
            var trackH = Mathf.Max(0, h - 34);
            var track = UiRoot.Box("track", sb, 0, 17, 16, trackH);
            var trackHit = track.gameObject.AddComponent<Image>();
            trackHit.color = new Color(0, 0, 0, 0.001f);
            var tb = Tex("L2UI_CH3.ScrollBar.scrollbarback");
            if (tb != null)
            {
                var img = Bg(track);
                // 16 x 8 repetido na vertical
                PlaceImage(img, 16, trackH, 0, 0, 16, 8, true);
                SetTexture(img, tb.Url, true);
            }
            else trackHit.color = new Color(0, 0, 0, 0.3f);
            var thumb = UiRoot.Box("thumb", track, 0, 0, 16, 16);
            var thumbHit = thumb.gameObject.AddComponent<Image>();
            thumbHit.color = new Color(0, 0, 0, 0.001f);
            var tTop = UiRoot.Box("top", thumb, 0, 0, 16, 8).gameObject.AddComponent<RawImage>();
            var tMid = UiRoot.Box("center", thumb, 0, 8, 16, 0).gameObject.AddComponent<RawImage>();
            var tBot = UiRoot.Box("bottom", thumb, 0, 8, 16, 8).gameObject.AddComponent<RawImage>();
            foreach (var r in new[] { tTop, tMid, tBot }) r.raycastTarget = false;
            var top = Tex("L2UI_CH3.ScrollBar.sliderbartop");
            var mid = Tex("L2UI_CH3.ScrollBar.sliderbarcenter");
            var bot = Tex("L2UI_CH3.ScrollBar.sliderbarbottom");
            if (top != null) SetTexture(tTop, top.Url);
            if (bot != null) SetTexture(tBot, bot.Url);
            if (mid != null) SetTexture(tMid, mid.Url, true);
            if (top == null) thumbHit.color = new Color32(0x6b, 0x5d, 0x3c, 0xff);

            void Update()
            {
                var max = log.ScrollHeight - log.ClientHeight;
                if (max <= 1 || trackH <= 0)
                {
                    thumb.gameObject.SetActive(false);
                    return;
                }
                thumb.gameObject.SetActive(true);
                var th = Mathf.Max(16, Mathf.Round(trackH * log.ClientHeight / log.ScrollHeight));
                var y = Mathf.Round(log.ScrollTop / max * (trackH - th));
                UiRoot.Place(thumb, 0, y, 16, th);
                UiRoot.Place(tMid.rectTransform, 0, 8, 16, Mathf.Max(0, th - 16));
                tMid.uvRect = new Rect(0, 0, 1, Mathf.Max(0, th - 16) / 8f);
                UiRoot.Place(tBot.rectTransform, 0, th - 8, 16, 8);
            }

            void Step(float d)
            {
                log.ScrollTop += d * 15;
                Update();
            }
            float holdDir = 0, holdNext = 0;
            void Hold(float d)
            {
                Step(d);
                holdDir = d;
                holdNext = Time.unscaledTime + 0.09f;
            }
            var upEv = UiEvents.Of(up);
            upEv.OnDown = _ => Hold(-1);
            upEv.OnUp = _ => holdDir = 0;
            upEv.OnExit = _ => holdDir = 0;
            var downEv = UiEvents.Of(down);
            downEv.OnDown = _ => Hold(1);
            downEv.OnUp = _ => holdDir = 0;
            downEv.OnExit = _ => holdDir = 0;
            // UiEvents e UiTexButton recebem o pointerdown juntos; o clique do botao nao faz nada aqui
            var sev = UiEvents.Of(sb);
            sev.OnLateUpdate = () =>
            {
                if (holdDir == 0 || Time.unscaledTime < holdNext) return;
                holdNext = Time.unscaledTime + 0.09f;
                Step(holdDir);
            };
            var tev = UiEvents.Of(track);
            tev.OnDown = e =>
            {
                if (e.pointerPressRaycast.gameObject != track.gameObject) return;
                var k = UiRoot.PixelScale;
                var py = UiRoot.Size.y - e.position.y / k;
                var thumbTop = -thumb.anchoredPosition.y + Screen0(track);
                log.ScrollTop += (py < thumbTop ? -1 : 1) * log.ClientHeight * 0.9f;
                Update();
            };
            var hev = UiEvents.Of(thumb);
            float dragY = 0, dragTop = 0;
            hev.OnDown = e => { };
            hev.OnBeginDrag = e =>
            {
                dragY = e.position.y / UiRoot.PixelScale;
                dragTop = log.ScrollTop;
            };
            hev.OnDrag = e =>
            {
                var th = trackH - thumb.sizeDelta.y;
                var max = log.ScrollHeight - log.ClientHeight;
                if (th > 0) log.ScrollTop = dragTop + (dragY - e.position.y / UiRoot.PixelScale) / th * max;
            };
            log.OnChanged += Update;
            Update();
            return sb;
        }

        // topo de um elemento na tela (pixels da interface, y para baixo)
        static float Screen0(RectTransform rt)
        {
            var corners = new Vector3[4];
            rt.GetWorldCorners(corners);
            var k = UiRoot.PixelScale;
            // Screen Space Overlay: coordenadas de mundo = pixels da tela
            return UiRoot.Size.y - corners[1].y / k;
        }
    }
}
