// Tela de criacao de personagem (#scrCreate do index.html): painel makingback1 com o nome e as linhas do CreatePanel,
// descricao da classe (makingback2), botoes de girar o modelo e menu Create Character/Previous.
using System;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class LobbyCreateScreen
    {
        public readonly RectTransform Root;
        /// <summary>Painel .lb-making (#chCreate) que hospeda as linhas.</summary>
        public readonly RectTransform Making;
        /// <summary>#ccName.</summary>
        public readonly InputField Name;
        public readonly CreatePanel Panel;
        /// <summary>#ccDesc.</summary>
        public readonly Text Desc;
        /// <summary>#ccRotL, #ccRotR, #ccCreate, #ccCancel.</summary>
        public readonly Button RotL, RotR, Create, Cancel;
        /// <summary>Zoom da camera (NCPawnCreateWnd 0x1010, zoomin/zoomout).</summary>
        public readonly Button Zoom;
        /// <summary>#ccMsg.</summary>
        public readonly Text MsgText;

        /// <summary>Create Character ou Enter no nome (submit do formulario).</summary>
        public Action OnSubmit;
        public Action OnCancel, OnRotL, OnRotR, OnZoom;

        public LobbyCreateScreen(RectTransform parent)
        {
            Root = LobbyUi.Screen(parent, "scrCreate");
            // NCPawnSetupWnd 256x205 em (24, 27): nome 128x17 em (66, 17), seletores 136x17 em (86, 52..172)
            Making = NativeLayout.PawnSetup.Apply(UiRoot.Box("lb-making", Root));
            // NCPawnSetupWnd::OnPaint: select2_back 1:1; "Name" (ss872) em (33, 20); NCEditBox com inputbox1/2/3
            L2WndUtil.Paint(UiRoot.Box("select2_back", Making, 0, 0, 256, 205), "L2UI_CH3.LobbyWnd.select2_back", 256, 205, PaintMode.Normal, 0, 0, 256, 205);
            CreatePanel.Text(Making, GameData.SysString(872, "Name"), CreatePanel.LabelX, 20);
            var nr = NativeLayout.PawnSetupName;
            L2WndUtil.Paint(UiRoot.Box("inputbox1", Making, nr.X, nr.Y, 8, nr.H), "L2UI_CH3.Etc.inputbox1", 8, nr.H, PaintMode.Stretch);
            L2WndUtil.Paint(UiRoot.Box("inputbox2", Making, nr.X + 8, nr.Y, nr.W - 16, nr.H), "L2UI_CH3.Etc.inputbox2", nr.W - 16, nr.H, PaintMode.Stretch);
            L2WndUtil.Paint(UiRoot.Box("inputbox3", Making, nr.X + nr.W - 8, nr.Y, 8, nr.H), "L2UI_CH3.Etc.inputbox3", 8, nr.H, PaintMode.Stretch);
            Name = LobbySkin.Input(Making, nr.X, nr.Y, nr.W, nr.H, new Color(0, 0, 0, 0), new Color(0, 0, 0, 0));
            Name.characterLimit = 16;
            Name.characterValidation = InputField.CharacterValidation.Alphanumeric;
            Name.onSubmit.AddListener(_ => OnSubmit?.Invoke());

            // NCPawnInfoWnd 256x205 em (24, 249): descricao da classe
            var d = NativeLayout.PawnInfo.Apply(UiRoot.Box("lb-desc", Root));
            // NCPawnInfoWnd::OnPaint (0x101975f0): select2_back 1:1, listras textbackline (5, 15i+5, 246, 15) nas linhas impares
            // (i = 1..11) e o texto em (7, 7) quebrado em 242, #dcdcdc, sem rolagem
            L2WndUtil.Paint(UiRoot.Box("select2_back", d, 0, 0, 256, 205), "L2UI_CH3.LobbyWnd.select2_back", 256, 205, PaintMode.Normal, 0, 0, 256, 205);
            for (var i = 1; i <= 12; i += 2)
                L2WndUtil.Paint(UiRoot.Box("textbackline", d, 5, 15 * i + 5, 246, 15), "L2UI_CH3.Etc.textbackline", 246, 15, PaintMode.Stretch, 0, 0, 8, 15);
            Desc = UiRoot.Label(d, "", 7, 7, 242, 190, 11, new Color32(0xdc, 0xdc, 0xdc, 0xff), TextAnchor.UpperLeft);
            Desc.horizontalOverflow = HorizontalWrapMode.Wrap;
            Desc.verticalOverflow = VerticalWrapMode.Truncate;
            // [I] passo de linha = altura do 'A' + 6 (o periodo das listras e 15)
            Desc.lineSpacing = 15f / 13f;
            Desc.raycastTarget = false;

            Panel = new CreatePanel(Making, Desc);

            // NCPawnCreateWnd: setas 44x44 em (W/2-88, H-100) e (W/2+44, H-100), zoom em (W/2-22, H-100)
            RotL = LobbySkin.NativeButton(Root, null, NativeLayout.CreateLeft, "L2UI.LobbyWnd.left", "L2UI.LobbyWnd.left_click", () => OnRotL?.Invoke());
            RotL.name = "ccRotL";
            RotR = LobbySkin.NativeButton(Root, null, NativeLayout.CreateRight, "L2UI.LobbyWnd.right", "L2UI.LobbyWnd.right_click", () => OnRotR?.Invoke());
            RotR.name = "ccRotR";
            Zoom = LobbySkin.NativeButton(Root, null, NativeLayout.CreateZoom, "L2UI.LobbyWnd.zoomin", "L2UI.LobbyWnd.zoomin_click", () => OnZoom?.Invoke());
            Zoom.name = "ccZoom";

            // NCPawnCreateFunctionWnd: Create Character (13, 20), Previous (13, 45)
            LobbyUi.Menu(Root, NativeLayout.CreateFunctionY, new (string, Action)[]
            {
                (GameData.SysString(162, "Create Character"), () => OnSubmit?.Invoke()),
                (GameData.SysString(161, "Previous"), () => OnCancel?.Invoke()),
            }, out var b);
            Create = b[0];
            Cancel = b[1];
            MsgText = LobbyUi.MsgLabel(Root);
        }

        public bool Visible
        {
            get => Root.gameObject.activeSelf;
            set => Root.gameObject.SetActive(value);
        }

        public void Msg(string text, string kind = "") => LobbyUi.Msg(MsgText, text, kind);

        /// <summary>FUN_10196f10: os botoes de girar e o zoom so funcionam com o modelo escolhido.</summary>
        public void SetModelButtons(bool on)
        {
            foreach (var b in new[] { RotL, RotR, Zoom })
            {
                if (!b) continue;
                LobbySkin.SetEnabled(b, on);
                // sem modelo escolhido os botoes nao aparecem (captura do original em 1920x1080)
                b.gameObject.SetActive(on);
            }
        }
    }
}
