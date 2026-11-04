// HelpHtmlWnd do Interface.xdat (310x311, Npc2_back, HtmlViewer em (7,30) 296x274) com o HelpHtmlWnd.uc:
//   EV_ShowHelp (FilePath): aberta = fecha; fechada = LoadHtml(FilePath), mostra e foca (:38-56). Quem manda: SystemMenuWnd
//   btnHelpHtml ("..\L2text\help.htm", SystemMenuWnd.uc:76-80) e os botoes Help da MacroListWnd/MacroEditWnd (help_macro.htm).
//   EV_LoadHelpHtml (HtmlString): LoadHtmlFromString no viewer (:58-66).
// Os links <a link="..\L2text\help_x.htm"> do proprio help trocam a pagina no mesmo viewer (o NCHtmlViewer do cliente).
// Os .htm vem da copia de ..\l2text (Lineage2Ver111, LobbyServerScreen.ReadL2Text).
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class HelpHtmlView
    {
        public readonly L2Wnd Wnd;
        /// <summary>Arquivo mostrado por ultimo (diagnostico e testes).</summary>
        public string File { get; private set; } = "";

        public HelpHtmlView(L2Layer layer)
        {
            Wnd = new L2Wnd("HelpHtmlWnd", layer, new WndOpts { AriaLabel = "Help" });
            L2Events.Register(Ev.EV_ShowHelp, OnShowHelp);
            L2Events.Register(Ev.EV_LoadHelpHtml, p =>
            {
                string html = null;
                if (L2Param.ParseString(p, "HtmlString", ref html) && !string.IsNullOrEmpty(html)) Render(html);
            });
        }

        /// <summary>HandleShowHelp: alterna; ao abrir carrega o FilePath (sem FilePath nao abre).</summary>
        void OnShowHelp(string p)
        {
            if (Wnd.Visible)
            {
                Wnd.Hide();
                return;
            }
            string path = null;
            L2Param.ParseString(p, "FilePath", ref path);
            if (string.IsNullOrEmpty(path)) return;
            Load(path);
            Wnd.Show();
        }

        /// <summary>LoadHtml: le o arquivo de ..\l2text pelo nome (o caminho do cliente e sempre ..\L2text\x.htm).</summary>
        public void Load(string path)
        {
            File = FileName(path);
            Render(LobbyServerScreen.ReadL2Text(File) ?? "");
        }

        /// <summary>Nome do arquivo de um caminho do cliente ("..\L2text\help.htm" -> "help.htm").</summary>
        public static string FileName(string path)
        {
            if (string.IsNullOrEmpty(path)) return "";
            var p = path.Replace('\\', '/');
            var i = p.LastIndexOf('/');
            return i >= 0 ? p.Substring(i + 1) : p;
        }

        void Render(string html)
        {
            var body = Wnd.Content("HtmlViewer");
            if (!body) return;
            UiKit.Clear(body);
            FitWidth(L2Html.Render(html, new HtmlActions { Link = Load }, body).Body, Wnd.Ctrl("HtmlViewer"));
            var sr = body.GetComponentInParent<ScrollRect>();
            if (sr) sr.verticalNormalizedPosition = 1;
        }

        /// <summary>
        /// A coluna do HTML fica na largura do HtmlCtrl do xdat. O help.htm tem duas &lt;img width=270&gt; seguidas: o viewer do
        /// cliente quebra a linha, o L2Html as poe lado a lado, e sem o limite a coluna ia a 540 px e o texto centralizado saia
        /// da janela (o mesmo ajuste do LobbyServerScreen para o server_help.htm).
        /// </summary>
        public static void FitWidth(RectTransform column, L2Ctrl viewer)
        {
            if (!column || viewer == null) return;
            var w = L2Ctrl.ToNum(viewer.J["size"]?[0], 0);
            if (w <= 0) return;
            var le = column.gameObject.GetComponent<LayoutElement>();
            if (!le) le = column.gameObject.AddComponent<LayoutElement>();
            le.minWidth = le.preferredWidth = w;
            le.flexibleWidth = 0;
            le.layoutPriority = 10;
        }
    }
}
