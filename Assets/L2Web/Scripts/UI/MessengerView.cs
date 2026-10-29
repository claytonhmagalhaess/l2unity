// MessengerWnd nativo (G11; NWindow.dll vtable 0x10257bc4; 89 MessengerWnd e NativeLayout.Messenger*): 256x401 em
// (384,180) com o NCFrameCtrl 0xa03 (barra de titulo do L2Wnd), faixa msn_back (0,20) 276x28, NCTabControl 0xa02 em
// (12,25) 224x41 com as abas 114x23 a cada 115 px (msn_tab2 normal / msn_tab1 escolhida) "MSN Messenger" (ss996) e "Chat
// with Friends" (ss997); paginas em (0,48) 256x353, a 1a (MsnWnd) escolhida ao abrir. A aba do MSN (servico extinto) fica
// vazia. A de amigos: msn_back0, arvore em (8,45) 240x270 (MessengerModel) com rolagem de 15 px (45 por "notch"). Duplo
// clique num amigo online abre a L2ChatWnd (256x401, msn_back3, nome em (11,54), caixa (9,96) 238x252, campo (8,360) 239x16).
using System;
using System.Collections.Generic;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class MessengerView
    {
        public readonly MessengerModel M = new();
        public readonly L2Wnd Wnd;
        /// <summary>Paginas das abas: MsnWnd (+0x1cc) e L2FriendWnd (+0x1d0).</summary>
        public readonly RectTransform MsnPage, FriendPage;
        /// <summary>NCTabControl 0xa02 e os seus NCTabButton.</summary>
        public readonly RectTransform TabCtrl;
        public readonly UiTexButton[] Tabs = new UiTexButton[2];
        readonly RectTransform tree;
        /// <summary>Aba escolhida (+0x2ec do NCTabControl): 0 = MSN, 1 = amigos.</summary>
        public int Tab { get; private set; }
        int scroll;
        float lastClick;
        string lastClickName;
        readonly Dictionary<string, (L2Wnd w, L2Log log, InputField edit)> chats = new();
        readonly L2Layer layer;
        static readonly Color Txt = new Color32(0xdc, 0xdc, 0xdc, 0xff), Warn = new Color32(0xe3, 0x71, 0x71, 0xff);
        /// <summary>RequestSendL2FriendSay 0xcc "cSS" (destinatario, texto).</summary>
        public Action<string, string> Send = (_, _) => { };
        public Func<string> MyName = () => "";

        static L2Ctrl Native(string name, float w, float h, float x, float y, string title)
        {
            var j = new JObject
            {
                ["type"] = "Window", ["name"] = name, ["size"] = new JArray(w, h),
                ["anchor"] = new JObject { ["parent"] = "TOP_LEFT", ["this"] = "TOP_LEFT", ["ctrl"] = "", ["x"] = x, ["y"] = y },
                [L2XdatFields.Unk("Window", "frame") ?? "frame"] = 1, [L2XdatFields.Unk("Window", "Frame.direction") ?? "Frame.direction"] = 3,
            };
            return new L2Ctrl { J = j };
        }

        public MessengerView(L2Layer layer)
        {
            this.layer = layer;
            // [?] o texto do titulo do NCFrameCtrl 0xa03 nao foi rastreado: o do icone minimizado (ss999) sem o atalho
            var title = System.Text.RegularExpressions.Regex.Replace(GameData.SysString(999, "Lineage 2 Messenger"), @"\s*\(.*\)$", "");
            var m = NativeLayout.Messenger;
            Wnd = new L2Wnd("MessengerWnd", layer, new WndOpts { Def = Native("MessengerWnd", m.W, m.H, m.X, m.Y, title), Title = title, AriaLabel = title });
            var back = NativeLayout.MessengerBack;
            var strip = UiRoot.Box("msn_back", Wnd.El, back.X, back.Y, Wnd.Size[0], back.H);
            L2WndUtil.Paint(strip, NativeLayout.MessengerBackTex, back.W, back.H, PaintMode.Normal, 0, 0, back.W, back.H);
            MsnPage = Page("MsnWnd");
            FriendPage = Page("L2FriendWnd");
            L2WndUtil.Paint(FriendPage, "L2UI_CH3.Msn.msn_back0", 256, 353, PaintMode.Normal, 0, 0, 256, 353);
            var tc = NativeLayout.MessengerTabCtrl;
            TabCtrl = UiRoot.Box("NCTabControl", Wnd.El, tc.X, tc.Y, tc.W, tc.H);
            for (var i = 0; i < 2; i++)
            {
                var r = NativeLayout.MessengerTab(i);
                var b = UiRoot.Box("tab" + i, TabCtrl, r.X, r.Y, r.W, r.H);
                Tabs[i] = L2WndUtil.Button(b, NativeLayout.MessengerTabTex, NativeLayout.MessengerTabSelTex, null, r.W, r.H);
                var t = UiRoot.Label(b, GameData.SysString(NativeLayout.MessengerTabLabel[i], ""), 0, 0, r.W, r.H, 11, Txt, TextAnchor.MiddleCenter);
                t.raycastTarget = false;
                var k = i;
                Tabs[i].OnClick = () => SelectTab(k);
            }
            var area = UiRoot.Box("L2FriendTreeCtrl", FriendPage, 8, 45, 240, 270);
            area.gameObject.AddComponent<Image>().color = new Color(0, 0, 0, 0.001f);
            area.gameObject.AddComponent<RectMask2D>();
            tree = UiRoot.Box("L2FriendTree", area, 0, 0, 224, 270);
            var ev = UiEvents.Of(area);
            ev.OnWheel = e =>
            {
                var d = e.scrollDelta.y;
                var n = Mathf.Abs(d) >= 60 ? (int)(d / 120) : (int)Mathf.Sign(d);
                var min = (int)Mathf.Min(0, 270 - M.Height(Ss));
                scroll = Mathf.Clamp(scroll + n * 45, min, 0);
                Render();
            };
            SelectTab(0);
            Render();
        }

        RectTransform Page(string name)
        {
            var p = NativeLayout.MessengerPage;
            return UiRoot.Box(name, Wnd.El, p.X, p.Y, p.W, p.H);
        }

        static string Ss(int i) => GameData.SysString(i, "");

        /// <summary>Clique numa aba: mostra a pagina dela; a escolhida fica com msn_tab1.</summary>
        public void SelectTab(int i)
        {
            Tab = i;
            MsnPage.gameObject.SetActive(i == 0);
            FriendPage.gameObject.SetActive(i == 1);
            for (var k = 0; k < 2; k++)
                if (Tabs[k])
                    L2WndUtil.SkinButton(Tabs[k], k == i ? NativeLayout.MessengerTabSelTex : NativeLayout.MessengerTabTex, NativeLayout.MessengerTabSelTex, null,
                        NativeLayout.MessengerTabW, NativeLayout.MessengerTabH);
        }

        public void Toggle()
        {
            if (Wnd.Visible) Wnd.Hide();
            else Wnd.Show();
        }

        /// <summary>v128 de cada linha: botao +/- 15x15 nos grupos, barra TextSelect na escolhida, texto (220,220,220) cortado.</summary>
        public void Render()
        {
            UiKit.Clear(tree);
            tree.anchoredPosition = new Vector2(0, -scroll);
            foreach (var r in M.Rows(Ss))
            {
                if (r.Kind == "group")
                {
                    var b = UiRoot.Box("btn", tree, r.X, r.Y, 15, 15);
                    L2WndUtil.Paint(b, r.Expanded ? "L2UI_CH3.QUESTWND.QuestWndMinusBtn" : "L2UI_CH3.QUESTWND.QuestWndPlusBtn", 15, 15, PaintMode.Normal);
                }
                if (r.Selected)
                {
                    var x = r.TextX - 3;
                    L2WndUtil.Paint(UiRoot.Box("sel1", tree, x, r.Y, 171, 14), "L2UI_CH3.ListCtrl.TextSelect", 171, 14, PaintMode.Stretch, 0, 0, 16, 13);
                    L2WndUtil.Paint(UiRoot.Box("sel2", tree, x + 171, r.Y, 32, 14), "L2UI_CH3.ListCtrl.TextSelect2", 32, 14, PaintMode.Stretch, 0, 0, 32, 13);
                }
                var max = 218 - (r.Kind == "group" ? 15 : 0) - r.X;
                var txt = MessengerModel.Truncate(r.Text, max, Measure);
                var t = UiRoot.Label(tree, txt, r.TextX, r.Y + 1, 220, 14, 11, Txt);
                t.horizontalOverflow = HorizontalWrapMode.Overflow;
                var hit = UiRoot.Box("hit", tree, r.X, r.Y, 220, 15);
                hit.gameObject.AddComponent<Image>().color = new Color(0, 0, 0, 0.001f);
                var row = r;
                UiEvents.Of(hit).OnDown = e =>
                {
                    if (e.button != PointerEventData.InputButton.Left) return;
                    // duplo clique (WM_LBUTTONDBLCLK) no mesmo amigo em ate 0,5 s
                    var now = Time.unscaledTime;
                    if (row.Kind == "friend" && lastClickName == row.Name && now - lastClick < 0.5f)
                    {
                        var name = M.DoubleClick(row);
                        if (name != null) OpenChat(name);
                    }
                    lastClick = now;
                    lastClickName = row.Name;
                    M.Click(row);
                    Render();
                };
            }
        }

        static float Measure(string s)
        {
            var gs = new TextGenerationSettings
            {
                font = UiRoot.Font, fontSize = 11, scaleFactor = 1, richText = false, horizontalOverflow = HorizontalWrapMode.Overflow,
                verticalOverflow = VerticalWrapMode.Overflow, generationExtents = new Vector2(4000, 100), pivot = Vector2.zero,
            };
            return new TextGenerator().GetPreferredWidth(s, gs);
        }

        /// <summary>FUN_100b9bb0: reaproveita a conversa do amigo ou abre uma nova em (200 + rand%200, 150 + rand%150).</summary>
        public (L2Wnd w, L2Log log, InputField edit) OpenChat(string name)
        {
            if (chats.TryGetValue(name, out var c))
            {
                c.w.Show();
                return c;
            }
            var rnd = new System.Random();
            var w = new L2Wnd("L2ChatWnd_" + name, layer, new WndOpts { Def = Native("L2ChatWnd_" + name, 256, 401, 200 + rnd.Next(200), 150 + rnd.Next(150), name), Title = name });
            L2WndUtil.Paint(UiRoot.Box("msn_back3", w.El, 0, 20, 256, 381), "L2UI_CH3.msn_back3", 256, 381, PaintMode.Normal, 0, 0, 256, 381);
            var nm = UiRoot.Label(w.El, name, 11, 54, 220, 14, 11, Txt);
            nm.horizontalOverflow = HorizontalWrapMode.Overflow;
            var box = UiRoot.Box("L2ChatBox", w.El, 9, 96, 238, 252);
            var log = new L2Log(box);
            var eb = UiRoot.Box("edit", w.El, 8, 360, 239, 16);
            var edit = UiKit.Input(eb, "", 239, 16, InputField.ContentType.Standard);
            edit.characterLimit = 0x12c0;
            edit.onEndEdit.AddListener(text =>
            {
                if (string.IsNullOrEmpty(text)) return;
                // FUN_100a3940: so com o amigo na lista e online manda o 0xcc; senao a sysmsg 1327 e o texto, em vermelho
                if (M.IsOnline(name))
                {
                    Send(name, text);
                    log.Add($"{MyName()} : {text}", "say", Txt);
                }
                else
                {
                    log.Add(GameData.SystemMessage(1327, new List<string>()).Text, "sys", Warn);
                    log.Add("   " + text, "sys", Warn);
                }
                edit.text = "";
                edit.ActivateInputField();
            });
            w.Show();
            chats[name] = (w, log, edit);
            return chats[name];
        }

        /// <summary>L2FriendSay 0xfd: linha do remetente (ou a sysmsg do codigo) na conversa dele.</summary>
        public void Receive(int code, string sender, string msg)
        {
            var c = OpenChat(sender);
            var sm = MessengerModel.SayMessage(code);
            if (sm != 0) c.log.Add(GameData.SystemMessage(sm, new List<string>()).Text, "sys", Warn);
            else c.log.Add($"{sender} : {msg}", "say", Txt);
        }
    }
}
