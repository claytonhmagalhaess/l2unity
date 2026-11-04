// Tela de login (LoginState, #0048; Docs/login_lacunas.md): NCAuthWnd (ID/PWD sobre logon_back, Log In / Exit) e a
// NCLoginFunctionWnd so com Options, que abre o OptionWnd do xdat como no original (NConsoleWnd::ShowOptionWnd). As
// regras de teclado, foco e campos estao no LoginAuth. A janela de conexao do porte (login server, assets, protocolo) nao
// existe no original: fica so no atalho de desenvolvimento Ctrl+Alt+O.
using System;
using L2Web.Net;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class LobbyLoginScreen
    {
        public readonly RectTransform Root;
        /// <summary>NCEditBox 0x1502 (ID) e 0x1503 (PWD).</summary>
        public readonly InputField User, Pass;
        /// <summary>NCButton 0x1006 (Log In) e 0x1007 (Exit).</summary>
        public readonly Button LoginBtn, ExitBtn, OptionsBtn;
        public readonly Text MsgText;
        /// <summary>Janela de conexao do porte (so desenvolvimento, Ctrl+Alt+O): login server, servidor de assets e protocolo.</summary>
        public readonly RectTransform Options;
        public readonly InputField LoginServer, AssetServer;
        public readonly LobbySelect Proto;
        /// <summary>Onde o OptionWnd e desenhado enquanto a tela de login esta aberta.</summary>
        public readonly RectTransform OptionHost;

        /// <summary>Login liberado pelo OnLoginBtnClick (campos preenchidos): o App faz o RequestAuthLogin.</summary>
        public Action OnSubmit;
        public Action OnExit;
        /// <summary>As opcoes de conexao mudaram (campo editado ou protocolo escolhido).</summary>
        public Action OnOptionsChanged;
        /// <summary>O OptionWnd do jogo (o App passa o mesmo do GamingState).</summary>
        public Func<OptionWnd> OptionWindow;

        static readonly Color EditBorder = new Color32(0x3f, 0x3b, 0x31, 0xff);
        static readonly Color EditBack = new Color32(0x0d, 0x0d, 0x0c, 0xe6);
        public static readonly string[] Protocols = { "hwid515", "acis" };
        static readonly string[] ProtocolNames = { "Servidor com HWID (versão 515, ClientGuard = NONE)", "aCis original (versão 746)" };

        LoginAuth.Field focusedLast;
        InputField refocus;
        int submittedFrame = -1;

        public LobbyLoginScreen(RectTransform parent)
        {
            Root = LobbyUi.Screen(parent, "scrLogin");
            LobbyUi.Logos(Root);
            // NCAuthWnd (sem OTP): 256x108 em (0.5W-128, 0.5H-54) com logon_back; rotulos ID/PWD alinhados a direita em
            // x = 78 (NCAuthWnd::Draw); campos 128x17 em (84, 20/42); Log In/Exit BigButton 96x23 em (31/131, 72)
            var box = NativeLayout.Auth.Apply(UiRoot.Box("lb-login", Root));
            LobbySkin.NativeBack(box, "L2UI_CH3.LoginWnd.logon_back", new Color(0.05f, 0.05f, 0.05f, 0.85f));
            LobbySkin.Label(box, GameData.SysString(150, "ID"), 0, NativeLayout.AuthIdLabelY, NativeLayout.AuthLabelRight, 14, 11, NativeLayout.AuthLabelColor, TextAnchor.UpperRight);
            User = NativeInput(box, NativeLayout.AuthId);
            LobbySkin.Label(box, GameData.SysString(151, "PWD"), 0, NativeLayout.AuthPwdLabelY, NativeLayout.AuthLabelRight, 14, 11, NativeLayout.AuthLabelColor, TextAnchor.UpperRight);
            Pass = NativeInput(box, NativeLayout.AuthPwd);
            Pass.contentType = InputField.ContentType.Password;
            Pass.asteriskChar = '*';
            Pass.ForceLabelUpdate();
            LoginBtn = LobbySkin.NativeButton(box, GameData.SysString(152, "Log In"), NativeLayout.AuthLogIn, "L2UI_CH3.BUTTON.bigbutton", "L2UI_CH3.BUTTON.bigbutton_down", Submit);
            ExitBtn = LobbySkin.NativeButton(box, GameData.SysString(153, "Exit"), NativeLayout.AuthExit, "L2UI_CH3.BUTTON.bigbutton", "L2UI_CH3.BUTTON.bigbutton_down", () => OnExit?.Invoke());

            // a mensagem vai para a faixa NCMessageWnd (LobbyUi.Msg); este rotulo so serve antes de a faixa existir
            MsgText = LobbySkin.Label(Root, "", 0, 0, 800, 16, 12, LobbyUi.MsgColor, TextAnchor.MiddleCenter);
            MsgText.horizontalOverflow = HorizontalWrapMode.Overflow;
            var mr = MsgText.rectTransform;
            mr.anchorMin = mr.anchorMax = new Vector2(0.5f, 0.5f);
            mr.pivot = new Vector2(0.5f, 1f);
            mr.anchoredPosition = new Vector2(0, -54 - 6);

            // NCLoginFunctionWnd so com Options (sysstring 156); os outros 4 botoes sairam (decisao do usuario, #0048)
            LobbyUi.ShortMenu(Root, NativeLayout.LoginFunctionWnd, NativeLayout.LoginOnlyOptionsY, new (string, Action)[]
            {
                (GameData.SysString(156, "Options"), ToggleOptionWnd),
            }, out var menu);
            OptionsBtn = menu[0];

            OptionHost = UiRoot.Fill(UiRoot.Box("OptionHost", Root), 0);

            // janela de conexao do porte (right 170, bottom 36, 330 de largura)
            Options = UiRoot.Box("lgOptions", Root);
            LobbySkin.Anchor(Options, 330, 150, right: 170, bottom: 36);
            var bg = Options.gameObject.AddComponent<Image>();
            bg.color = new Color32(0x14, 0x13, 0x10, 0xf0);
            var outline = Options.gameObject.AddComponent<Outline>();
            outline.effectColor = new Color32(0x5a, 0x50, 0x3a, 0xff);
            LobbySkin.Label(Options, "Conexão (desenvolvimento, Ctrl+Alt+O)", 10, 6, 280, 16, 12, LobbySkin.BtnText);
            LobbySkin.Button(Options, "×", 304, 4, 20, 18, () => Options.gameObject.SetActive(false), 13);
            LobbySkin.Label(Options, "Login server", 10, 32, 100, 17);
            LoginServer = LobbySkin.Input(Options, 112, 32, 206, 17, EditBorder, EditBack);
            LoginServer.text = $"{Config.LoginHost}:{Config.LoginPort}";
            LobbySkin.Label(Options, "Assets", 10, 56, 100, 17);
            AssetServer = LobbySkin.Input(Options, 112, 56, 206, 17, EditBorder, EditBack);
            AssetServer.text = Config.UseLocalAssets ? "local" : Config.AssetBase;
            LobbySkin.Label(Options, "Protocolo", 10, 80, 100, 17);
            Proto = new LobbySelect(Options, 112, 80, 206, 17);
            Proto.SetOptions(ProtocolNames);
            Proto.Value = Math.Max(0, Array.IndexOf(Protocols, Config.Protocol));
            Proto.OnChange = _ => OnOptionsChanged?.Invoke();
            LoginServer.onEndEdit.AddListener(_ => OnOptionsChanged?.Invoke());
            AssetServer.onEndEdit.AddListener(_ => OnOptionsChanged?.Invoke());
            LobbySkin.Label(Options, "Assets: \"local\" (cópia em StreamingAssets) ou a URL do tools/dev.ts do l2web.", 10, 106, 310, 32, 10, new Color32(0x9a, 0x94, 0x84, 0xff));
            Options.gameObject.SetActive(false);

            Root.gameObject.AddComponent<UiTicker>().OnTick = _ => Keys();
            UiEvents.Of(Root).OnLateUpdate = LateKeys;
        }

        /// <summary>Protocolo escolhido ("hwid515" ou "acis").</summary>
        public string Protocol
        {
            get => Protocols[Mathf.Clamp(Proto.Value, 0, Protocols.Length - 1)];
            set => Proto.Value = Math.Max(0, Array.IndexOf(Protocols, value));
        }

        /// <summary>NCEditBox: o retangulo da NativeLayout, sem limite de caracteres (o RequestAuthLogin corta 14/16) e so 0x20..0x81.</summary>
        static InputField NativeInput(RectTransform parent, NRect r)
        {
            var f = LobbySkin.Input(parent, r.X, r.Y, r.W, r.H, EditBorder, EditBack);
            r.Apply((RectTransform)f.transform);
            f.characterLimit = 0;
            f.contentType = InputField.ContentType.Standard;
            f.lineType = InputField.LineType.SingleLine;
            f.onValidateInput = (_, _, c) => LoginAuth.AcceptChar(c) ? c : '\0';
            // o NCEditBox nao seleciona o texto ao ganhar o foco
            f.onFocusSelectAll = false;
            return f;
        }

        public bool Visible
        {
            get => Root.gameObject.activeSelf;
            set
            {
                if (!value) HideOptionWnd();
                Root.gameObject.SetActive(value);
                // NCAuthWnd::ShowWindow: foco no ID a cada entrada no LoginState
                if (value) refocus = User;
            }
        }

        public void Msg(string text, string kind = "") => LobbyUi.Msg(MsgText, text, kind);

        /// <summary>Campo com o foco agora.</summary>
        public LoginAuth.Field Focused => User.isFocused ? LoginAuth.Field.Id : Pass.isFocused ? LoginAuth.Field.Pwd : LoginAuth.Field.None;

        /// <summary>OnLoginBtnClick: campos vazios dao a systemmsg 86/87 na faixa; o som de clique sai sempre.</summary>
        public void Submit()
        {
            if (submittedFrame == Time.frameCount) return;
            submittedFrame = Time.frameCount;
            var msg = LoginAuth.CheckFields(User.text, Pass.text);
            if (msg != 0) Msg(LoginMessages.Text(new[] { msg }));
            else OnSubmit?.Invoke();
            L2WndUtil.UiSound(LoginAuth.ClickSound);
        }

        /// <summary>NConsoleWnd::ShowOptionWnd: abre o OptionWnd (som 5) ou fecha (som 6).</summary>
        public void ToggleOptionWnd()
        {
            var w = OptionWindow?.Invoke();
            if (w == null) return;
            if (w.ShownIn(OptionHost))
            {
                L2WndUtil.UiSound(LoginAuth.WindowCloseSound);
                w.Win.Hide();
                w.ReturnHome();
                return;
            }
            L2WndUtil.UiSound(LoginAuth.WindowOpenSound);
            w.MoveTo(OptionHost);
            w.Win.Show();
        }

        /// <summary>Saindo do LoginState: o OptionWnd fecha e volta a camada do jogo.</summary>
        void HideOptionWnd()
        {
            var w = OptionWindow?.Invoke();
            if (w == null || w.Win.El.parent != OptionHost) return;
            w.Win.Hide();
            w.ReturnHome();
        }

        /// <summary>Tab/Shift+Tab e Enter (o InputField legado nao faz nenhum dos dois como o NCEditBox).</summary>
        void Keys()
        {
            var kb = Keyboard.current;
            if (kb == null) return;
            if ((kb.leftCtrlKey.isPressed || kb.rightCtrlKey.isPressed) && (kb.leftAltKey.isPressed || kb.rightAltKey.isPressed) && kb.oKey.wasPressedThisFrame)
                Options.gameObject.SetActive(!Options.gameObject.activeSelf);
            // o foco antes do EventSystem processar a tecla (o Enter desativa o campo no mesmo quadro)
            var f = Focused != LoginAuth.Field.None ? Focused : focusedLast;
            if (kb.tabKey.wasPressedThisFrame && (f != LoginAuth.Field.None || !OtherFieldFocused()))
                refocus = LoginAuth.TabNext(f) == LoginAuth.Field.Id ? User : Pass;
            if ((kb.enterKey.wasPressedThisFrame || kb.numpadEnterKey.wasPressedThisFrame) && f != LoginAuth.Field.None)
            {
                // o NCEditBox nao perde o foco com o Enter
                refocus = f == LoginAuth.Field.Id ? User : Pass;
                if (LoginAuth.EnterSubmits(f, Pass.text)) Submit();
            }
        }

        void LateKeys()
        {
            if (refocus != null)
            {
                var f = refocus;
                refocus = null;
                if (EventSystem.current) EventSystem.current.SetSelectedGameObject(f.gameObject);
                f.ActivateInputField();
            }
            focusedLast = Focused;
        }

        /// <summary>Outro campo (fora do ID/PWD, ex.: a janela de conexao) tem o foco: o Tab e dele.</summary>
        bool OtherFieldFocused()
        {
            var sel = EventSystem.current ? EventSystem.current.currentSelectedGameObject : null;
            return sel && sel.TryGetComponent<InputField>(out var i) && i.isFocused && i != User && i != Pass;
        }
    }
}
