// Tela de login (#scrLogin do index.html): caixa ID/PWD sobre logon_back, Log In / Exit, mensagem de status, menu do
// canto (New Account, Lost Account, Options, Production Team, Replay) e a janela de opcoes de conexao. No navegador as
// opcoes eram o gateway WebSocket e o protocolo; aqui sao o login server (host:porta), o servidor de assets e o protocolo.
using System;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class LobbyLoginScreen
    {
        public readonly RectTransform Root;
        /// <summary>#lgUser, #lgPass.</summary>
        public readonly InputField User, Pass;
        /// <summary>#lgBtn, #lgExit.</summary>
        public readonly Button LoginBtn, ExitBtn;
        public readonly Text MsgText;
        /// <summary>#lgOptions: login server, servidor de assets e protocolo.</summary>
        public readonly RectTransform Options;
        public readonly InputField LoginServer, AssetServer;
        public readonly LobbySelect Proto;

        /// <summary>Enviar o formulario (botao Log In ou Enter num dos campos).</summary>
        public Action OnSubmit;
        public Action OnExit;
        /// <summary>As opcoes mudaram (campo editado ou protocolo escolhido).</summary>
        public Action OnOptionsChanged;

        static readonly Color EditBorder = new Color32(0x3f, 0x3b, 0x31, 0xff);
        static readonly Color EditBack = new Color32(0x0d, 0x0d, 0x0c, 0xe6);
        public static readonly string[] Protocols = { "hwid515", "acis" };
        static readonly string[] ProtocolNames = { "Servidor com HWID (versão 515, ClientGuard = NONE)", "aCis original (versão 746)" };

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
            User.characterLimit = 14;
            User.contentType = InputField.ContentType.Alphanumeric;
            LobbySkin.Label(box, GameData.SysString(151, "PWD"), 0, NativeLayout.AuthPwdLabelY, NativeLayout.AuthLabelRight, 14, 11, NativeLayout.AuthLabelColor, TextAnchor.UpperRight);
            Pass = NativeInput(box, NativeLayout.AuthPwd);
            Pass.characterLimit = 16;
            Pass.contentType = InputField.ContentType.Password;
            Pass.ForceLabelUpdate();
            LoginBtn = LobbySkin.NativeButton(box, GameData.SysString(152, "Log In"), NativeLayout.AuthLogIn, "L2UI_CH3.BUTTON.bigbutton", "L2UI_CH3.BUTTON.bigbutton_down", () => OnSubmit?.Invoke());
            ExitBtn = LobbySkin.NativeButton(box, GameData.SysString(153, "Exit"), NativeLayout.AuthExit, "L2UI_CH3.BUTTON.bigbutton", "L2UI_CH3.BUTTON.bigbutton_down", () => OnExit?.Invoke());
            User.onSubmit.AddListener(_ => Pass.ActivateInputField());
            Pass.onSubmit.AddListener(_ => OnSubmit?.Invoke());

            // .lb-msg: centralizada, 114 abaixo do topo da caixa
            MsgText = LobbySkin.Label(Root, "", 0, 0, 800, 16, 12, LobbyUi.MsgColor, TextAnchor.MiddleCenter);
            MsgText.horizontalOverflow = HorizontalWrapMode.Overflow;
            var mr = MsgText.rectTransform;
            mr.anchorMin = mr.anchorMax = new Vector2(0.5f, 0.5f);
            mr.pivot = new Vector2(0.5f, 1f);
            mr.anchoredPosition = new Vector2(0, -54 - 6);

            LobbyUi.Menu(Root, NativeLayout.LoginFunctionY, new (string, Action)[]
            {
                (GameData.SysString(154, "New Account"), null),
                (GameData.SysString(155, "Lost Account"), null),
                (GameData.SysString(156, "Options"), () => Options.gameObject.SetActive(!Options.gameObject.activeSelf)),
                (GameData.SysString(805, "Production Team"), null),
                (GameData.SysString(1251, "Replay"), null),
            }, out var menu);
            foreach (var i in new[] { 0, 1, 3, 4 }) LobbySkin.SetEnabled(menu[i], false);

            // .lb-opts: janela de opcoes (right 170, bottom 36, 330 de largura)
            Options = UiRoot.Box("lgOptions", Root);
            LobbySkin.Anchor(Options, 330, 150, right: 170, bottom: 36);
            var bg = Options.gameObject.AddComponent<Image>();
            bg.color = new Color32(0x14, 0x13, 0x10, 0xf0);
            var outline = Options.gameObject.AddComponent<Outline>();
            outline.effectColor = new Color32(0x5a, 0x50, 0x3a, 0xff);
            LobbySkin.Label(Options, "Options", 10, 6, 200, 16, 12, LobbySkin.BtnText);
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
        }

        /// <summary>Protocolo escolhido ("hwid515" ou "acis").</summary>
        public string Protocol
        {
            get => Protocols[Mathf.Clamp(Proto.Value, 0, Protocols.Length - 1)];
            set => Proto.Value = Math.Max(0, Array.IndexOf(Protocols, value));
        }

        /// <summary>NCEditBox: so o retangulo da NativeLayout (o estilo e o das caixas do lobby).</summary>
        static InputField NativeInput(RectTransform parent, NRect r)
        {
            var f = LobbySkin.Input(parent, r.X, r.Y, r.W, r.H, EditBorder, EditBack);
            r.Apply((RectTransform)f.transform);
            return f;
        }

        public bool Visible
        {
            get => Root.gameObject.activeSelf;
            set => Root.gameObject.SetActive(value);
        }

        public void Msg(string text, string kind = "") => LobbyUi.Msg(MsgText, text, kind);
    }
}
