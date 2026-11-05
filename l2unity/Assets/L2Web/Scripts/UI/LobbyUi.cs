// Telas do lobby com as texturas originais (Fase 14.1-14.4): selecao e criacao de personagem (ui/lobbyui.ts + as secoes
// #scrChars/#scrCreate do index.html). A cena 3D (Render/LobbyScene) fica atras; este modulo monta os paineis em uGUI
// (BuildChars/BuildCreate/BuildCharInfo), cuida do estado da criacao (CreatePanel) e das contas de classe/cena.
using System.Collections.Generic;
using System.Threading.Tasks;
using L2Web.Net;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    public static class LobbyUi
    {
        public static readonly string[] Races = { "Human", "Elf", "Dark Elf", "Orc", "Dwarf" };
        /// <summary>Classe base [guerreiro, mistico] por raca (o anao so tem guerreiro: -1).</summary>
        static readonly (int Fighter, int Mystic)[] BaseClass = { (0, 10), (18, 25), (31, 38), (44, 49), (53, -1) };
        /// <summary>Penteados: masculino A-E, feminino A-G.</summary>
        public static readonly int[] HairCount = { 5, 7 };
        public const string Letters = "ABCDEFG";

        /// <summary>Texturas do lobby (as variaveis CSS --lb-* do applyLobbyTheme).</summary>
        public static readonly string[] ThemeTextures =
        {
            "L2UI_CH3.LoginWnd.logon_back", "L2UI_CH3.LobbyWnd.lobby_menuback", "L2UI_CH3.LobbyWnd.lobby_startbtnback",
            "L2UI_CH3.ServerSelectWnd.serverselect_back", "L2UI_CH3.ServerSelectWnd.serverinfo_back", "L2UI_CH3.LobbyWnd.select1_back",
            "L2UI.LobbyWnd.makingback1", "L2UI.LobbyWnd.makingback2", "L2UI.LobbyWnd.leftbtn", "L2UI.LobbyWnd.leftbtn_click",
            "L2UI.LobbyWnd.rightbtn", "L2UI.LobbyWnd.rightbtn_click", "L2UI.LobbyWnd.left", "L2UI.LobbyWnd.left_click",
            "L2UI.LobbyWnd.right", "L2UI.LobbyWnd.right_click", "L2UI_CH3.Button.btn1_normal", "L2UI_CH3.Button.btn1_normalon",
            "L2UI_CH3.Button.btn1_normal_over", "L2UI_CH3.Button.btn1_normaldisable", "L2UI_CH3.Etc.inputbox2",
        };

        /// <summary>
        /// applyLobbyTheme: no navegador punha as texturas em variaveis CSS e trocava os textos fixos pelo sysstring. Aqui
        /// os construtores ja usam as texturas e o sysstring; isto so pre-carrega as texturas (precisa do indice da
        /// interface carregado e de GameData.LoadTexts para os textos).
        /// </summary>
        public static Task ApplyLobbyTheme()
        {
            var all = new List<Task>();
            foreach (var t in ThemeTextures) all.Add(LobbySkin.Sprite(t));
            return Task.WhenAll(all);
        }

        /// <summary>Classe base do estado (guerreiro/mistico da raca).</summary>
        public static int ClassIdOf(CreateState s)
        {
            var (f, m) = BaseClass[s.Race];
            return s.Cls == 1 && m >= 0 ? m : f;
        }

        /// <summary>Lugar do modelo escolhido no logongrp: por raca guerreiro H/M, mistico H/M (anao so os 2 guerreiros).</summary>
        public static int CreateSpot(CreateState s)
        {
            var b = new[] { 8, 12, 16, 20, 24 }[s.Race];
            return b + (s.Race == 4 ? s.Sex : s.Cls * 2 + s.Sex);
        }

        /// <summary>Cena do Matinee que termina no modelo escolhido (tente na ordem).</summary>
        public static string[] CreateScene(CreateState s)
        {
            var r = new[] { "Human", "Elf", "DarkElf", "Orc", "Dwarf" }[s.Race];
            if (s.Cls == 0 && s.Sex == 0) return new[] { $"{r}_Knight", $"{r}_Knight_Kman", $"{r}_Kwoman_Kman" };
            if (s.Cls == 0) return new[] { $"{r}_Knight_Kwoman", $"{r}_Kman_Kwoman" };
            if (s.Sex == 0) return new[] { $"{r}_Wizard", $"{r}_Wizard_Wman", $"{r}_Wwoman_Wman" };
            return new[] { $"{r}_Wizard_Wwoman", $"{r}_Wman_Wwoman" };
        }

        /// <summary>fillCharInfo: preenche o painel do personagem selecionado (null limpa).</summary>
        public static void FillCharInfo(LobbyCharInfo info, CharSlot c) => info.Fill(c);

        // ------------------------------------------------------------ construtores (index.html #scrChars / #scrCreate)

        /// <summary>Painel .lb-charinfo (select1_back) em (24, 30) de `parent`.</summary>
        public static LobbyCharInfo BuildCharInfo(RectTransform parent) => new LobbyCharInfo(parent);

        /// <summary>Tela de selecao de personagem inteira (#scrChars), esticada sobre `parent`.</summary>
        public static LobbyCharsScreen BuildChars(RectTransform parent) => new LobbyCharsScreen(parent);

        /// <summary>Tela de criacao de personagem inteira (#scrCreate), esticada sobre `parent`.</summary>
        public static LobbyCreateScreen BuildCreate(RectTransform parent) => new LobbyCreateScreen(parent);

        /// <summary>Raiz de tela do lobby (.screen.lobby): estica sobre o pai.</summary>
        public static RectTransform Screen(RectTransform parent, string name) => UiRoot.Fill(UiRoot.Box(name, parent), 0);

        /// <summary>
        /// Janela de funcoes do canto inferior direito (NCLoginFunctionWnd / NCLobbyFunctionWnd / NCPawnCreateFunctionWnd):
        /// 120x138 em (W-154, H-200) com lobby_menuback, botoes BigButton 96x23 em (13, y).
        /// </summary>
        public static RectTransform Menu(RectTransform screen, float[] ys, (string Text, System.Action Click)[] buttons, out Button[] made)
        {
            var m = NativeLayout.FunctionWnd.Apply(UiRoot.Box("lb-menu", screen));
            LobbySkin.NativeBack(m, "L2UI_CH3.LobbyWnd.lobby_menuback");
            made = new Button[buttons.Length];
            for (var i = 0; i < buttons.Length; i++)
                made[i] = LobbySkin.BigButton(m, buttons[i].Text, NativeLayout.FunctionButton(ys[i]), buttons[i].Click);
            return m;
        }

        /// <summary>
        /// Janela de funcoes menor que o 120x138 (o login so com Options, #0048): lobby_menuback em duas partes, o topo
        /// (altura - 4) e as 4 ultimas linhas da arte (134..138), para a borda de baixo continuar desenhada.
        /// </summary>
        public static RectTransform ShortMenu(RectTransform screen, NRect rect, float[] ys, (string Text, System.Action Click)[] buttons, out Button[] made)
        {
            var m = rect.Apply(UiRoot.Box("lb-menu", screen));
            const string tex = "L2UI_CH3.LobbyWnd.lobby_menuback";
            var h = rect.H;
            var top = UiRoot.Box("menuback_top", m, 0, 0, rect.W, h - 4);
            L2WndUtil.Paint(top, tex, rect.W, h - 4, PaintMode.Normal, 0, 0, rect.W, h - 4);
            var bottom = UiRoot.Box("menuback_bottom", m, 0, h - 4, rect.W, 4);
            L2WndUtil.Paint(bottom, tex, rect.W, 4, PaintMode.Normal, 0, 134, rect.W, 4);
            made = new Button[buttons.Length];
            for (var i = 0; i < buttons.Length; i++)
                made[i] = LobbySkin.BigButton(m, buttons[i].Text, NativeLayout.FunctionButton(ys[i]), buttons[i].Click);
            return m;
        }

        /// <summary>Logos do login e da selecao de servidor (NativeLayout.StartLogo/MiniLogo), em tamanho natural.</summary>
        public static void Logos(RectTransform screen)
        {
            var big = NativeLayout.StartLogo.Apply(UiRoot.Box("start_logo", screen));
            L2WndUtil.Paint(big, NativeLayout.StartLogoTexture, big.sizeDelta.x, big.sizeDelta.y, PaintMode.Normal);
            var mini = NativeLayout.MiniLogo.Apply(UiRoot.Box("start_minilogo", screen));
            L2WndUtil.Paint(mini, NativeLayout.MiniLogoTexture, mini.sizeDelta.x, mini.sizeDelta.y, PaintMode.Normal);
            foreach (var g in new[] { big, mini })
                foreach (var gr in g.GetComponentsInChildren<Graphic>()) gr.raycastTarget = false;
        }

        /// <summary>Mensagem de status (.lb-msg.lb-msgc): centralizada, 96 acima da borda de baixo.</summary>
        public static Text MsgLabel(RectTransform screen)
        {
            var t = LobbySkin.Label(screen, "", 0, 0, 800, 16, 12, MsgColor, TextAnchor.MiddleCenter);
            t.horizontalOverflow = HorizontalWrapMode.Overflow;
            LobbySkin.Anchor(t.rectTransform, 800, 16, bottom: 96, centerX: 0);
            return t;
        }

        public static readonly Color MsgColor = new Color32(0xe8, 0xe3, 0xd2, 0xff);

        /// <summary>msg(el, text, kind): kind "" | "err" | "ok".</summary>
        /// <summary>A faixa de mensagens (NCMessageWnd) comum as telas do lobby; null antes de BuildScreens.</summary>
        public static LobbyMessageBand Band;

        static LobbyDialogBox dialog;

        /// <summary>O NCGaraDialogBox do lobby, criado junto da faixa (null antes de BuildScreens).</summary>
        public static LobbyDialogBox Dialog
        {
            get
            {
                if (dialog == null && Band != null && Band.Root) dialog = new LobbyDialogBox((RectTransform)Band.Root.parent);
                return dialog;
            }
        }

        /// <summary>NConsoleWnd::ServerClose fora do jogo: caixa com a systemmsg 127; o OK chama `gotoLogin`.</summary>
        public static void ShowServerClose(System.Action gotoLogin)
        {
            var d = Dialog;
            if (d == null)
            {
                gotoLogin?.Invoke();
                return;
            }
            d.ShowServerClose(gotoLogin);
        }

        public static void Msg(Text t, string text, string kind = "")
        {
            // NConsoleWnd::ShowMessage: toda mensagem do lobby vai para a faixa de baixo, sempre em #DCDCDC
            if (Band != null)
            {
                Band.ShowMessage(text);
                t.text = "";
                return;
            }
            t.text = text ?? "";
            t.color = kind == "err" ? new Color32(0xff, 0x8f, 0x80, 0xff) : kind == "ok" ? new Color32(0x9f, 0xe0, 0xa8, 0xff) : MsgColor;
        }
    }
}
