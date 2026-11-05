// NCMessageWnd (vtable 0x1028dbdc; estudo em scratchpad/login_strip_re.md): a faixa de mensagens do lobby, a mesma em
// login, servidor, selecao e criacao. NCConsole::OnCreate: SetRect(0, H-52, W, 52), ancora BottomCenter, largura do pai.
// OnPaint 0x10186c20: sek.cbui141 1:1 (as 52 linhas usadas sao RGBA(0,0,0,85)); texto sempre 0xFFDCDCDC, sem sombra:
// numa linha centralizado em (floor(W/2 - floor(tw/2)), 26 - floor(th/2)); mais largo que a tela, em (50, 8) quebrado em
// W - 100 e cortado na faixa. Estado: SetMessage(id) guarda o id e limpa o texto; SetMessage(texto) guarda o texto e poe
// id = -1; ShowMessage (0x101456c0) limpa e poe o texto; UILoginState::OnEnter poe o id 94 (o copyright do systemmsg);
// clicar num personagem (FUN_10173db0) limpa o texto. Sem tempo limite.
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class LobbyMessageBand
    {
        public const float Height = 52;
        /// <summary>systemmsg 94: "2013 Copyright Lineage2 NcSoft."</summary>
        public const int CopyrightId = 94;
        static readonly Color TextColor = new Color32(0xdc, 0xdc, 0xdc, 0xff);

        public readonly RectTransform Root;
        readonly Text text;
        int id = -1;
        string str = "";

        public LobbyMessageBand(Transform parent)
        {
            Root = UiRoot.Box("NCMessageWnd", parent, 0, 0, 0, Height);
            Root.anchorMin = new Vector2(0, 0);
            Root.anchorMax = new Vector2(1, 0);
            Root.pivot = new Vector2(0.5f, 0);
            Root.anchoredPosition = Vector2.zero;
            Root.sizeDelta = new Vector2(0, Height);
            var bg = Root.gameObject.AddComponent<Image>();
            bg.color = new Color32(0, 0, 0, 85);
            bg.raycastTarget = false;
            Root.gameObject.AddComponent<RectMask2D>();
            text = UiRoot.Label(Root, "", 0, 0, 100, 14, 11, TextColor, TextAnchor.UpperLeft);
            text.horizontalOverflow = HorizontalWrapMode.Overflow;
            text.verticalOverflow = VerticalWrapMode.Overflow;
            text.raycastTarget = false;
        }

        /// <summary>Texto que a faixa desenha: o texto, senao a systemmsg do id (a do cliente instalado, como a referencia), senao nada.</summary>
        public string Current => !string.IsNullOrEmpty(str) ? str : id != -1 ? (GameData.ServerSystemMsgRecord(id) ?? GameData.SystemMsgRecord(id))?.Msg ?? "" : "";

        public void SetMessage(int msgId)
        {
            id = msgId;
            str = "";
            Layout();
        }

        public void SetMessage(string s)
        {
            if (s == null) return;
            str = s;
            id = -1;
            Layout();
        }

        public void ClearText()
        {
            str = "";
            Layout();
        }

        /// <summary>NConsoleWnd::ShowMessage: limpa, poe o texto (se houver) e mostra a faixa.</summary>
        public void ShowMessage(string s)
        {
            ClearText();
            if (!string.IsNullOrEmpty(s)) SetMessage(s);
            Root.gameObject.SetActive(true);
        }

        void Layout()
        {
            var s = Current;
            text.text = s;
            var w = Root.rect.width > 0 ? Root.rect.width : Screen.width / Mathf.Max(0.01f, UiRoot.PixelScale);
            var rt = text.rectTransform;
            var tw = Mathf.Ceil(text.preferredWidth);
            if (tw < w)
            {
                // x = floor(W/2 - floor(tw/2)): ancorado no centro da faixa, sem depender da largura medida agora
                text.horizontalOverflow = HorizontalWrapMode.Overflow;
                var th = Mathf.Ceil(text.preferredHeight);
                rt.anchorMin = rt.anchorMax = new Vector2(0.5f, 1);
                rt.pivot = new Vector2(0, 1);
                rt.sizeDelta = new Vector2(tw, th);
                rt.anchoredPosition = new Vector2(-Mathf.Floor(tw / 2), -(26 - Mathf.Floor(th / 2)));
            }
            else
            {
                text.horizontalOverflow = HorizontalWrapMode.Wrap;
                rt.anchorMin = new Vector2(0, 1);
                rt.anchorMax = new Vector2(1, 1);
                rt.pivot = new Vector2(0, 1);
                rt.sizeDelta = new Vector2(-100, Height);
                rt.anchoredPosition = new Vector2(50, -8);
            }
        }

        /// <summary>A largura da tela mudou: recentra.</summary>
        public void Relayout() => Layout();
    }
}
