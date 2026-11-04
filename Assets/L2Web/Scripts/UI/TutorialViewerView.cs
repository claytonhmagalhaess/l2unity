// TutorialViewerWnd do Interface.xdat (310x401 @TOP_RIGHT, titulo ss448; tutorial_back1 (0,20) 310x12, tutorial_back2
// (0,32) 310x60 em Tile, tutorial_back3 (0,280) 310x9; HtmlTutorialViewer (8,32) 295x201 viewType=Tutorial) com o
// TutorialViewerWnd.uc:
//   EV_TutorialViewerWndShow (HtmlString): LoadHtmlFromString; a altura acompanha o HTML: h = clamp(FrameMaxHeight, 256,
//   680 - 8); a janela fica com h + 32 + 8, o back2 com (janela - 32 - 9), o back3 vai para o fim (janela - 9) e o viewer
//   fica com (largura - 15) x (janela - 32 - 9); ShowWindowWithFocus.
//   EV_TutorialViewerWndHide: HideWindow.
// Os eventos vem do TutorialShowHtml 0xa0 (S html) e do TutorialCloseHtml 0xa3 (PacketEvents; despacho no App.cs).
// viewType=Tutorial (+0x214 = 1, nw:191921): o bypass sai pela variante do tutorial (RequestTutorialPassCmdToServer 0x7c) e
// o "link x" pelo RequestTutorialLinkHtml 0x7b (o aCis entrega os dois a quest "Tutorial").
using L2Web.Net;
using UnityEngine;

namespace L2Web.UI
{
    public sealed class TutorialViewerView
    {
        public const string Name = "TutorialViewerWnd", Viewer = "HtmlTutorialViewer";
        public const int MinHtml = 256, MaxHtml = 680 - 8;

        public readonly L2Wnd Wnd;
        readonly HtmlActions act;
        /// <summary>Ultimo HTML mostrado (testes e diagnostico).</summary>
        public RenderedHtml Last { get; private set; }

        /// <summary>RequestTutorialLinkHtml 0x7b "S" (pedido 0047: mover para o UiPackets).</summary>
        public static byte[] RequestTutorialLinkHtml(string link) => new PacketWriter().C(0x7b).S(link ?? "").Bytes();

        /// <summary>RequestTutorialPassCmdToServer 0x7c "S" (pedido 0047: mover para o UiPackets).</summary>
        public static byte[] RequestTutorialPassCmdToServer(string cmd) => new PacketWriter().C(0x7c).S(cmd ?? "").Bytes();

        /// <summary>`act` = as acoes do HTML de NPC; o bypass e o link passam para os pacotes do tutorial.</summary>
        public TutorialViewerView(L2Layer layer, HtmlActions act, System.Action<byte[]> send)
        {
            this.act = act ?? new HtmlActions();
            if (send != null)
            {
                this.act.Bypass = c => send(RequestTutorialPassCmdToServer(c));
                this.act.Link = l => send(RequestTutorialLinkHtml(l));
            }
            Wnd = new L2Wnd(Name, layer, new WndOpts { AriaLabel = "Tutorial" });
            L2Events.Register(Ev.EV_TutorialViewerWndShow, p =>
            {
                string html = null;
                L2Param.ParseString(p, "HtmlString", ref html);
                Show(html ?? "");
            });
            L2Events.Register(Ev.EV_TutorialViewerWndHide, _ => Wnd.Hide());
        }

        /// <summary>Altura da janela para um HTML de altura `frameMaxHeight` (TutorialViewerWnd.uc:24-30).</summary>
        public static int WindowHeight(float frameMaxHeight)
        {
            var h = Mathf.Clamp(Mathf.CeilToInt(frameMaxHeight), MinHtml, MaxHtml);
            return h + 32 + 8;
        }

        public void Show(string html)
        {
            var body = Wnd.Content(Viewer);
            if (!body) return;
            UiKit.Clear(body);
            var w = Wnd.Size[0];
            Last = L2Html.Render(html, act, body, w - 15);
            var h = WindowHeight(Last.Layout.Height);
            Wnd.SetWindowSize(w, h);
            Resize("texTutorialViewerBack2", w, h - 32 - 9, true);
            Move("texTutorialViewerBack3", h - 9);
            var viewer = Wnd.Get(Viewer);
            if (viewer) viewer.sizeDelta = new Vector2(w - 15, h - 32 - 9);
            var sr = body.GetComponentInParent<UnityEngine.UI.ScrollRect>();
            if (sr) sr.verticalNormalizedPosition = 1;
            Wnd.Show();
        }

        void Resize(string name, float w, float h, bool tile)
        {
            var el = Wnd.Get(name);
            var c = Wnd.Ctrl(name);
            if (!el || c == null) return;
            el.sizeDelta = new Vector2(w, h);
            L2WndUtil.Paint(el, c.S("file"), w, h, tile ? PaintMode.Tile : PaintMode.Stretch, 0, 0, c.N0("uSize"), c.N0("vSize"));
        }

        void Move(string name, float y)
        {
            var el = Wnd.Get(name);
            if (el) el.anchoredPosition = new Vector2(el.anchoredPosition.x, -y);
        }
    }
}
