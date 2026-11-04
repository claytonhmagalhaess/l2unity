// BoardWnd (Community Board) do Interface.xdat com o BoardWnd.uc: janela 646x530 (texBackTop/texBackBottom), TabCtrl com 7
// abas em (12,25), btnBookmark (574,25) e HtmlViewer 633x474 em (8,51) (viewType BBS).
//   EV_ShowBBS (BoardWnd.uc:64-101): Init > 0 (SystemMenu btnBBS, tecla B/Alt+B) alterna: aberta fecha; fechada trava a
//     pagina, volta a aba 0 sem executar, limpa e chama RequestBBSBoard (RequestShowBoard 0x57); a janela so aparece com a
//     resposta. Index sem Init (ClanWnd Index=3) seleciona a aba, limpa e executa o bypass dela.
//   EV_ShowBoardPacket (:103-138): OK < 1 fecha; senao guarda Command1..8, destrava os botoes, poe o HTML do Address
//     (SetHtmlBuffData: as partes 101/102/103 do ShowBoard) e mostra.
//   Abas (:140-185): ControllerExecution do HtmlViewer com "bypass _bbshome", "_bbsgetfav", "_bbsloc", "_bbsclan",
//     "_bbsmemo", "_maillist_0_1_0_", "_friendlist_0_"; ignoradas com a janela minimizada. btnBookmark (:187-198) executa o
//     Command8 ("Add Fav.") se houver e os botoes nao estiverem travados (m_bBtnLock: uma execucao por resposta).
using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using L2Web.Net;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class BoardView
    {
        public readonly L2Wnd Wnd;
        readonly Action<byte[]> send;
        readonly Func<HtmlActions> htmlActions;

        /// <summary>Bypass de cada aba (ShowBBSTab).</summary>
        public static readonly string[] TabBypass =
            { "bypass _bbshome", "bypass _bbsgetfav", "bypass _bbsloc", "bypass _bbsclan", "bypass _bbsmemo", "bypass _maillist_0_1_0_", "bypass _friendlist_0_" };

        readonly string[] command = new string[8];
        bool btnLock, pageLock, selecting;
        List<string> parts = new();
        int partTimer, lockTimer;

        public BoardView(L2Layer layer, Action<byte[]> send, Func<HtmlActions> htmlActions)
        {
            this.send = send;
            this.htmlActions = htmlActions;
            Wnd = new L2Wnd("BoardWnd", layer, new WndOpts { AriaLabel = "Community Board" });
            Wnd.OnTab = (tab, i, _) =>
            {
                if (selecting || tab != "TabCtrl" || Wnd.Minimized) return;
                ShowTab(i);
            };
            Wnd.OnClick("btnBookmark", () =>
            {
                if (!string.IsNullOrEmpty(command[7]) && !btnLock) Execute(command[7]);
            });
            L2Events.Register(Ev.EV_ShowBBS, OnShowBBS);
            L2Events.Register(Ev.EV_ShowBoardPacket, OnBoardPacket);
        }

        public bool Visible => Wnd.Visible;
        public void Hide() => Wnd.Hide();
        /// <summary>Conteudo do HtmlViewer (o App le os botoes do HTML no modo de teste).</summary>
        public UnityEngine.RectTransform Body => Wnd.Content("HtmlViewer");

        void OnShowBBS(string p)
        {
            int index = 0, init = 0;
            L2Param.ParseInt(p, "Index", ref index);
            L2Param.ParseInt(p, "Init", ref init);
            if (init > 0)
            {
                if (Wnd.Visible)
                {
                    Wnd.Hide();
                    return;
                }
                if (pageLock) return;
                pageLock = true;
                Select(0);
                Clear();
                send(UiPackets.RequestShowBoard());
                // [I] a trava da pagina sai com a resposta; sem resposta (board desligado no servidor) sai em 3 s, para a
                // tecla nao ficar morta
                var token = ++lockTimer;
                Later(3000, () =>
                {
                    if (token == lockTimer) pageLock = false;
                });
                return;
            }
            Select(index);
            Clear();
            ShowTab(index);
        }

        void OnBoardPacket(string p)
        {
            var ok = 0;
            L2Param.ParseInt(p, "OK", ref ok);
            if (ok < 1)
            {
                pageLock = false;
                Wnd.Hide();
                return;
            }
            for (var i = 0; i < 8; i++)
            {
                string c = "";
                L2Param.ParseString(p, "Command" + (i + 1), ref c);
                command[i] = c ?? "";
            }
            btnLock = false;
            pageLock = false;
            if (!Wnd.Visible) Wnd.Show();
        }

        /// <summary>
        /// ShowBoard 0x6e (o buffer do SetHtmlBuffData): a parte 101 comeca o HTML, 102/103 completam; desenha na 103 (ou 150 ms
        /// depois da ultima parte, quando o servidor manda so a 101/102) e em qualquer outro id na hora.
        /// </summary>
        public void Html(ShowBoardInfo b)
        {
            if (!b.Show) return;
            if (b.Id == "101") parts = new List<string> { b.Html };
            else if (b.Id == "102" || b.Id == "103") parts.Add(b.Html);
            else parts = new List<string> { b.Html };
            var token = ++partTimer;
            if (b.Id != "101" && b.Id != "102") Render();
            else Later(150, () =>
            {
                if (token == partTimer) Render();
            });
        }

        static async void Later(int ms, Action fn)
        {
            await System.Threading.Tasks.Task.Delay(ms);
            fn();
        }

        void Render()
        {
            var body = Clear();
            if (!body) return;
            // HtmlViewer do xdat (633 x 474, NCBBSHtmlViewer)
            L2Html.Render(string.Join("", parts), htmlActions(), body, HtmlViewerWidth);
        }

        /// <summary>Largura do HtmlViewer do xdat (0 = a do viewport).</summary>
        float HtmlViewerWidth => HelpHtmlView.ViewerWidth(Wnd.Ctrl("HtmlViewer"));

        UnityEngine.RectTransform Clear()
        {
            var body = Wnd.Content("HtmlViewer");
            if (!body) return null;
            UiKit.Clear(body);
            var sr = body.GetComponentInParent<ScrollRect>();
            if (sr) sr.verticalNormalizedPosition = 1;
            return body;
        }

        /// <summary>SetTopOrder(TabCtrl, i, false): troca a aba sem o OnClickButton.</summary>
        void Select(int i)
        {
            selecting = true;
            try
            {
                Wnd.SelectTab("TabCtrl", i);
            }
            finally
            {
                selecting = false;
            }
        }

        void ShowTab(int i)
        {
            if (i >= 0 && i < TabBypass.Length) Execute(TabBypass[i]);
        }

        static readonly Regex BypassRe = new(@"^bypass\s+(?:-h\s+)?(.*)$", RegexOptions.IgnoreCase | RegexOptions.Singleline);

        /// <summary>ControllerExecution: a acao como um link do HtmlViewer ("bypass x" -> RequestBypassToServer); trava os botoes.</summary>
        void Execute(string action)
        {
            var m = BypassRe.Match(action.Trim());
            if (!m.Success) return;
            send(UiPackets.BypassToServer(m.Groups[1].Value.Trim()));
            btnLock = true;
        }
    }
}
