// NCGaraDialogBox do lobby (NCConsole+0x228; #0048, G10 da matriz): a caixa que o NConsoleWnd::ServerClose (0x1016ee60)
// abre fora do jogo quando a conexao cai, com a systemmsg 127 ("You have been disconnected from the server. Please login
// again."); o OK (ContinueServerClose 0x101510b0) volta ao login (GotoLogin) quando o nivel e o Lobby. Medidas e texturas
// na NativeLayout (GaraDialog*): 306x128 centralizada, Calculate12_back, warningicon, texto #DCDCDC e so o OK no centro
// para o id 0x1d. [I] Enter = OK (a DoDefaultAction do DialogBox do xdat; o OnKeyDown do NCGaraDialogBox nao foi lido).
using System;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class LobbyDialogBox
    {
        /// <summary>Id do dialogo do ServerClose (local_188[0] = 0x1d).</summary>
        public const int ServerCloseId = 0x1d;
        /// <summary>systemmsg do ServerClose para os motivos 0, 1 e 2 (FUN_1000dd30(0x7f)).</summary>
        public const int ServerCloseMsg = 127;

        public readonly RectTransform Root;
        public readonly Text Message;
        public readonly Button Ok;
        Action onOk;

        public LobbyDialogBox(RectTransform parent)
        {
            Root = NativeLayout.GaraDialog.Apply(UiRoot.Box("NCGaraDialogBox", parent));
            // modal: bloqueia o clique nas telas de tras
            var block = UiRoot.Fill(UiRoot.Box("modal", Root), 0);
            block.anchorMin = Vector2.zero;
            block.anchorMax = Vector2.one;
            block.offsetMin = new Vector2(-4000, -4000);
            block.offsetMax = new Vector2(4000, 4000);
            block.gameObject.AddComponent<Image>().color = new Color(0, 0, 0, 0.001f);
            var body = UiRoot.Box("body", Root, 0, 0, NativeLayout.GaraDialog.W, NativeLayout.GaraDialog.H);
            L2WndUtil.Paint(body, "L2UI_ch3.Calculate.Calculate12_back", body.sizeDelta.x, body.sizeDelta.y, PaintMode.Stretch);
            var icon = NativeLayout.GaraIcon.Apply(UiRoot.Box("warningicon", body));
            L2WndUtil.Paint(icon, "L2UI_ch3.dialog.warningicon", 24, 24, PaintMode.Stretch);
            var tr = NativeLayout.GaraText;
            Message = UiRoot.Label(body, "", tr.X, tr.Y, tr.W, tr.H, 11, new Color32(0xdc, 0xdc, 0xdc, 0xff), TextAnchor.UpperLeft);
            Message.horizontalOverflow = HorizontalWrapMode.Wrap;
            Message.verticalOverflow = VerticalWrapMode.Overflow;
            Message.raycastTarget = false;
            Ok = LobbySkin.NativeButton(body, GameData.SysString(140, "OK"), NativeLayout.GaraCenterOk, "L2UI_ch3.button.btn1_normal", "L2UI_ch3.button.btn1_normalon", Click);
            Root.gameObject.AddComponent<UiTicker>().OnTick = _ =>
            {
                var kb = Keyboard.current;
                if (kb != null && (kb.enterKey.wasPressedThisFrame || kb.numpadEnterKey.wasPressedThisFrame)) Click();
            };
            Root.gameObject.SetActive(false);
        }

        public bool Visible => Root.gameObject.activeSelf;

        /// <summary>Mostra a caixa com o texto; o OK fecha e chama `ok`.</summary>
        public void Show(string text, Action ok = null)
        {
            Message.text = text ?? "";
            onOk = ok;
            Root.SetAsLastSibling();
            Root.gameObject.SetActive(true);
        }

        /// <summary>A caixa do NConsoleWnd::ServerClose (systemmsg 127).</summary>
        public void ShowServerClose(Action ok) => Show(GameData.SystemMessage(ServerCloseMsg, new System.Collections.Generic.List<string>()).Text, ok);

        public void Hide() => Root.gameObject.SetActive(false);

        void Click()
        {
            if (!Visible) return;
            Hide();
            L2WndUtil.UiSound(LoginAuth.ClickSound);
            var a = onOk;
            onOk = null;
            a?.Invoke();
        }
    }
}
