// Janela de HTML do NPC (NpcHtmlMessage) como o NConsoleWnd a cria [O nwindow/00011.c 0x1013fd6e-0x1013ff50]:
//   dois NCNPCHtmlViewer (sem objectId: console+0x20c; com NPC: +0x210), ambos SetRect(x = 0, y = ScreenH * 0,5 - 252,
//   w = 0x136 = 310, h = 0x191 = 401), titulo = sysstring 0x1bc = 444 (vtbl 0x164) e textura de fundo
//   L2UI_ch3.NpcWnd.Npc1_back no +0x1d0 (NCNPCHtmlViewer::OnPaint 0x100837d0 desenha-a 1:1 a partir de y = 20, abaixo da
//   barra de titulo). NCNPCHtmlViewer::OnCreate (0x1008a030): o NCHtmlViewer filho em SetRect(7, 30, W - 14, H - 37).
//   ReceiveHtmlMessage (0x1016d6f0): com NPC o titulo e o nome do NPC; NCHtmlViewer::AnalyzeHtml (0x10087c90) troca o
//   titulo pelo <title> do HTML quando ha um (vtbl 0x168 do dono).
// No porte: a mesma geometria por uma L2Wnd sintetica clonada do HelpHtmlWnd do xdat (Window 310 x 311 com Npc2_back e
// HtmlCtrl em (7, 30) 296 x 274), que ja tem a moldura (titulo + fechar) do cliente.
using Newtonsoft.Json.Linq;
using UnityEngine;

namespace L2Web.UI
{
    public sealed class NpcHtmlWnd
    {
        public const int Width = 0x136, Height = 0x191, TopOffset = 252;
        public const int TitleSysString = 0x1bc;
        public const string Back = "L2UI_ch3.NpcWnd.Npc1_back";
        /// <summary>Largura do NCHtmlViewer filho: SetRect(7, 30, W - 14, H - 37).</summary>
        public const int ViewerWidth = Width - 14;

        public readonly L2Wnd Wnd;
        /// <summary>Conteudo do HtmlCtrl (container vertical rolavel).</summary>
        public RectTransform Body => Wnd.Content("HtmlViewer");

        public NpcHtmlWnd(L2Layer layer, string name = "NpcHtmlWnd")
        {
            Wnd = new L2Wnd(name, layer, new WndOpts { Def = BuildDef(name, Width, Height, Back), Title = GameData.SysString(TitleSysString, ""), AriaLabel = "NPC" });
        }

        /// <summary>
        /// Definicao da janela a partir do HelpHtmlWnd do xdat: tamanho w x h, ancora CENTER_LEFT com y tal que o topo fique
        /// em ScreenH / 2 - 252 (como o SetRect do console), fundo `back` e o HtmlViewer em (7, 30) (w - 14) x (h - 37).
        /// </summary>
        public static L2Ctrl BuildDef(string name, int w, int h, string back)
        {
            var help = L2WndUtil.WindowDef("HelpHtmlWnd");
            if (help == null) throw new System.Exception("HelpHtmlWnd inexistente no Interface.xdat");
            var j = (JObject)help.J.DeepClone();
            j["name"] = name;
            j["size"] = new JArray(w, h);
            j["anchor"] = new JObject { ["parent"] = "CENTER_LEFT", ["this"] = "CENTER_LEFT", ["ctrl"] = "", ["x"] = 0, ["y"] = h / 2f - TopOffset };
            j["unk101"] = back;
            var def = new L2Ctrl { J = j };
            foreach (var c in help.Children)
            {
                var cj = (JObject)c.J.DeepClone();
                if (c.Name == "HtmlViewer")
                {
                    cj["size"] = new JArray(w - 14, h - 37);
                    cj["anchor"] = new JObject { ["parent"] = "TOP_LEFT", ["this"] = "TOP_LEFT", ["ctrl"] = "", ["x"] = 7, ["y"] = 30 };
                }
                def.Children.Add(new L2Ctrl { J = cj, Children = c.Children });
            }
            return def;
        }

        /// <summary>
        /// Titulo: o &lt;title&gt; do HTML quando ha um (AnalyzeHtml), senao o nome do NPC (ReceiveHtmlMessage com objectId) e,
        /// sem NPC, a sysstring 444.
        /// </summary>
        public static string TitleFor(string htmlTitle, string npcName, string sysTitle) =>
            !string.IsNullOrEmpty(htmlTitle) ? htmlTitle : !string.IsNullOrEmpty(npcName) ? npcName : sysTitle ?? "";

        public bool Visible => Wnd.Visible;
        public void Show() => Wnd.Show();
        public void Hide() => Wnd.Hide();
        public void SetTitle(string t)
        {
            Title = t ?? "";
            Wnd.SetTitle(Title);
        }

        /// <summary>Titulo atual da moldura.</summary>
        public string Title { get; private set; } = "";

        public void Clear()
        {
            var b = Body;
            if (!b) return;
            UiKit.Clear(b);
            var sr = b.GetComponentInParent<UnityEngine.UI.ScrollRect>();
            if (sr) sr.verticalNormalizedPosition = 1;
        }
    }
}
