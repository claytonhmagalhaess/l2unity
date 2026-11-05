// Posicoes das telas criadas em C++ pelo NWindow.dll (89_telas_nativas.md, out/re/native_screen_layout.json): login,
// funcoes do login, servidor, lobby, criacao e aviso do KeyCrypt. Cada retangulo e "fracao do pai + deslocamento"
// (x = Fx*W + X, y = Fy*H + Y, em pixels de interface, y para baixo), para valer em qualquer resolucao como as formulas do
// original (ex.: 0.5*W-128, H-200). Janelas sao relativas a tela; controles, a janela.
using UnityEngine;

namespace L2Web.UI
{
    public readonly struct NRect
    {
        public readonly float Fx, X, Fy, Y, W, H;

        public NRect(float x, float y, float w, float h, float fx = 0, float fy = 0)
        {
            X = x;
            Y = y;
            W = w;
            H = h;
            Fx = fx;
            Fy = fy;
        }

        /// <summary>Retangulo absoluto (x, y, w, h) dentro de um pai de tamanho (pw, ph).</summary>
        public (int x, int y, int w, int h) Resolve(float pw, float ph) =>
            (Mathf.RoundToInt(Fx * pw + X), Mathf.RoundToInt(Fy * ph + Y), Mathf.RoundToInt(W), Mathf.RoundToInt(H));

        /// <summary>Aplica num RectTransform (ancorado no ponto Fx, Fy do pai, pivo no canto superior esquerdo).</summary>
        public RectTransform Apply(RectTransform rt)
        {
            rt.anchorMin = rt.anchorMax = new Vector2(Fx, 1 - Fy);
            rt.pivot = new Vector2(0, 1);
            rt.anchoredPosition = new Vector2(X, -Y);
            rt.sizeDelta = new Vector2(W, H);
            return rt;
        }
    }

    public static class NativeLayout
    {
        // ---- NCAuthWnd (criada pelo NCConsole): sem OTP, 256x108 em (0.5W-128, 0.5H-54); com OTP 256x128 em 0.5H-64
        public static readonly NRect Auth = new(-128, -54, 256, 108, 0.5f, 0.5f);
        public static readonly NRect AuthOtp = new(-128, -64, 256, 128, 0.5f, 0.5f);
        public static readonly NRect AuthId = new(84, 20, 128, 17);
        public static readonly NRect AuthPwd = new(84, 42, 128, 17);
        public static readonly NRect AuthOtpEdit = new(84, 64, 128, 17);
        public static readonly NRect AuthLogIn = new(31, 72, 96, 23);
        public static readonly NRect AuthExit = new(131, 72, 96, 23);
        /// <summary>Rotulos "ID"/"PWD" (sysstring 150/151): o NCAuthWnd::Draw os alinha a direita em x = 78, y = 23 e 45.</summary>
        public const float AuthLabelRight = 0x4e, AuthIdLabelY = 0x17, AuthPwdLabelY = 0x2d;
        public static readonly Color32 AuthLabelColor = new(0xdc, 0xdc, 0xdc, 0xff);

        // ---- NCLoginFunctionWnd / NCLobbyFunctionWnd / NCPawnCreateFunctionWnd: 120x138 em (W-154, H-200)
        public static readonly NRect FunctionWnd = new(-154, -200, 120, 138, 1, 1);
        /// <summary>Botoes 96x23 em x = 13 (BigButton).</summary>
        public static readonly float[] LoginFunctionY = { 8, 33, 58, 83, 107 };
        public static readonly float[] LobbyFunctionY = { 20, 45, 95 };
        public static readonly float[] CreateFunctionY = { 20, 45 };
        public static NRect FunctionButton(float y) => new(13, y, 96, 23);
        /// <summary>
        /// #0048: o login so tem Options (New Account, Lost Account, Production Team e Replay sairam, a pedido do usuario).
        /// A janela encolhe para um botao com as margens do original (8 em cima, 8 embaixo) e mantem a borda de baixo em
        /// H - 62 (a do 120x138 em H - 200), largura e x iguais. Nao e medida do NWindow: e o ajuste da decisao.
        /// </summary>
        public static readonly NRect LoginFunctionWnd = new(-154, -62 - 39, 120, 39, 1, 1);
        public static readonly float[] LoginOnlyOptionsY = { 8 };

        // ---- NCEulaWnd (criada pelo NCConsole em 0x1013f765): SetRect(0.5W - 273, 0.5H - 212, 546, 425), lobby3_back;
        // texto (NCNoticeInfoWnd) em (6, 6, 536, 375); Agree (sysstring 599, id 0xa000fa) em (196, 396) e Disagree
        // (sysstring 600, 0xa000fb) em (276, 396), 76x23 com btn1_normal/btn1_normalon (OnCreate 0x10190910)
        public static readonly NRect Eula = new(-273, -212, 546, 425, 0.5f, 0.5f);
        public static readonly NRect EulaText = new(6, 6, 536, 375);
        public static readonly NRect EulaAgree = new(196, 396, 76, 23);
        public static readonly NRect EulaDisagree = new(276, 396, 76, 23);

        // ---- NCGaraDialogBox (NCConsole+0x228, criada em 0x1013ff90): 306x128 (construtor 0x10012260: +0x348/+0x34c),
        // CenterCenter; fundo Calculate12_back esticado, warningicon 24x24 em (11, 8), texto #DCDCDC em (41, 9) com largura
        // W - 48 (OnPaint 0x1000f700); OK (sysstring 140, id 0x1004) sozinho no centro em (W/2 - 38, 99) para os ids
        // 0x1d/0x1f/0x10/0x50 (FUN_1000f9d0), 76x23 btn1_normal
        public static readonly NRect GaraDialog = new(-153, -64, 306, 128, 0.5f, 0.5f);
        public static readonly NRect GaraIcon = new(11, 8, 24, 24);
        public static readonly NRect GaraText = new(41, 9, 306 - 48, 80);
        public static readonly NRect GaraCenterOk = new(306 * 0.5f - 38, 99, 76, 23);

        // ---- NCLoginServerWnd 316x542 (centralizada), com NCServerSelectWnd (0,0,316,330) e NCServerInfoWnd (0,337,316,205)
        public static readonly NRect LoginServer = new(-158, -271, 316, 542, 0.5f, 0.5f);
        public static readonly NRect ServerSelect = new(0, 0, 316, 330);
        public static readonly NRect ServerList = new(8, 10, 300, 274);
        public static readonly NRect ServerQuality = new(41, 297, 76, 23);
        public static readonly NRect ServerOk = new(121, 297, 76, 23);
        public static readonly NRect ServerCancel = new(201, 297, 76, 23);
        public static readonly NRect ServerInfo = new(0, 337, 316, 205);
        /// <summary>NCHtmlViewer (7, 7, W-14, H-14) da NCServerInfoWnd 316x205.</summary>
        public static readonly NRect ServerInfoHtml = new(7, 7, 316 - 14, 205 - 14);

        // ---- NCLobbyStartWnd 140x49 em (W/2-71, H-111) com o Start 116x31 (BigButton2) em (13, 10)
        public static readonly NRect LobbyStart = new(-71, -111, 140, 49, 0.5f, 1);
        public static readonly NRect LobbyStartButton = new(13, 10, 116, 31);
        // ---- NCPawnSelectWnd 256x108 em (24, 27) com o NCComboBox 138x17 em (46, 13)
        public static readonly NRect PawnSelect = new(24, 27, 256, 108);
        public static readonly NRect PawnSelectCombo = new(46, 13, 138, 17);

        // ---- criacao: NCPawnSetupWnd (24,27,256,205), NCPawnInfoWnd (24,249,256,205), setas e zoom 44x44 em H-100
        public static readonly NRect PawnSetup = new(24, 27, 256, 205);
        public static readonly NRect PawnSetupName = new(66, 17, 128, 17);
        /// <summary>NCSelectCtrl 136x17 em x = 86: raca, classe, sexo, penteado, cor do cabelo, rosto (ordem dos ids).</summary>
        public static readonly float[] PawnSetupSelectY = { 52, 76, 100, 124, 148, 172 };
        public static NRect PawnSetupSelect(int i) => new(86, PawnSetupSelectY[i], 136, 17);
        public static readonly NRect PawnInfo = new(24, 249, 256, 205);
        public static readonly NRect CreateLeft = new(-88, -100, 44, 44, 0.5f, 1);
        public static readonly NRect CreateRight = new(44, -100, 44, 44, 0.5f, 1);
        public static readonly NRect CreateZoom = new(-22, -100, 44, 44, 0.5f, 1);

        // ---- logos do NCConsole::OnCreate (desmontagem 0x1013f1f2..0x1013f3af): start_logo 256x256 ancorado no TopCenter
        // da tela em (0, 50); start_minilogo 232x120 no TopLeft (0, 0). Texturas do Localization.ini (English_LogoTexture,
        // English_MiniLogoTexture), so nas telas de login e de servidor
        public static readonly NRect StartLogo = new(-128, 50, 256, 256, 0.5f, 0);
        public static readonly NRect MiniLogo = new(0, 0, 232, 120);
        public const string StartLogoTexture = "L2Font-e.start_logo-e", MiniLogoTexture = "L2Font-e.mini_logo-e";

        // ---- NCKeyCryptWarningDialogBox 205x87 em (W/2-101, H/2-43); OK 74x21 em (65, 60) (x resolvido a mao no assembly)
        public static readonly NRect KeyCrypt = new(-101, -43, 205, 87, 0.5f, 0.5f);
        public static readonly NRect KeyCryptOk = new(65, 60, 74, 21);

        // ---- MessengerWnd 256x401 em (384, 180) (NCConsole 0x101401d3). MessengerWnd::OnCreate (FUN_100bd480): NCFrameCtrl
        // 0xa03 (0,0,256,20), NCTabControl 0xa02 (12,25,224,41) e as paginas MsnWnd / L2FriendWnd em (0,48,256,353)
        // (0x100bd581/0x100bd601). AddTab (FUN_10050440): abas 114x23 lado a lado com 1 px entre elas (0x10050765), rotulos
        // sysstring 996 "MSN Messenger" e 997 "Chat with Friends", msn_tab2 normal e msn_tab1 escolhida. Draw (FUN_100b5fc0):
        // msn_back em (0,20) 276x28
        public static readonly NRect Messenger = new(384, 180, 256, 401);
        public static readonly NRect MessengerFrame = new(0, 0, 256, 20);
        public static readonly NRect MessengerTabCtrl = new(12, 25, 224, 41);
        public static readonly NRect MessengerPage = new(0, 48, 256, 353);
        public static readonly NRect MessengerBack = new(0, 20, 276, 28);
        public const int MessengerFrameId = 0xa03, MessengerTabCtrlId = 0xa02;
        public const float MessengerTabW = 0x72, MessengerTabH = 0x17, MessengerTabGap = 1;
        /// <summary>Aba i relativa ao NCTabControl: o cursor (+0x2d8) anda largura + espaco a cada AddTab.</summary>
        public static NRect MessengerTab(int i) => new(i * (MessengerTabW + MessengerTabGap), 0, MessengerTabW, MessengerTabH);
        public static readonly int[] MessengerTabLabel = { 996, 997 };
        public const string MessengerTabTex = "L2UI_CH3.Msn.msn_tab2", MessengerTabSelTex = "L2UI_CH3.Msn.msn_tab1";
        public const string MessengerBackTex = "L2UI_CH3.Msn.msn_back";
    }
}
