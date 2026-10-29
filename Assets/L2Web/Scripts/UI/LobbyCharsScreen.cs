// Tela de selecao de personagem (#scrChars do index.html): painel do personagem (select1_back), botao Start
// (lobby_startbtnback), menu Create/Delete/Re-Login e a mensagem de status. Os cliques ficam com a App (main.ts).
using System;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class LobbyCharsScreen
    {
        public readonly RectTransform Root;
        public readonly LobbyCharInfo Info;
        /// <summary>#chEnter, #chNew, #chDelete, #chLogout.</summary>
        public readonly Button Start, Create, Delete, ReLogin;
        /// <summary>#chMsg (use LobbyUi.Msg ou <see cref="Msg"/>).</summary>
        public readonly Text MsgText;

        public Action OnStart, OnCreate, OnDelete, OnReLogin;

        public LobbyCharsScreen(RectTransform parent)
        {
            Root = LobbyUi.Screen(parent, "scrChars");
            Info = new LobbyCharInfo(Root);
            // NCLobbyStartWnd 140x49 em (W/2-71, H-111) com lobby_startbtnback; Start BigButton2 116x31 em (13, 10)
            var st = NativeLayout.LobbyStart.Apply(UiRoot.Box("lb-start", Root));
            LobbySkin.NativeBack(st, "L2UI_CH3.LobbyWnd.lobby_startbtnback");
            Start = LobbySkin.NativeButton(st, GameData.SysString(160, "Start"), NativeLayout.LobbyStartButton, "L2UI_CH3.Button.BigButton2", "L2UI_CH3.Button.BigButton2_down", () => OnStart?.Invoke());
            // NCLobbyFunctionWnd: Create (13, 20), Delete (13, 45), Re-Login (13, 95)
            LobbyUi.Menu(Root, NativeLayout.LobbyFunctionY, new (string, Action)[]
            {
                (GameData.SysString(158, "Create"), () => OnCreate?.Invoke()),
                (GameData.SysString(159, "Delete"), () => OnDelete?.Invoke()),
                (GameData.SysString(884, "Re-Login"), () => OnReLogin?.Invoke()),
            }, out var b);
            Create = b[0];
            Delete = b[1];
            ReLogin = b[2];
            MsgText = LobbyUi.MsgLabel(Root);
        }

        public bool Visible
        {
            get => Root.gameObject.activeSelf;
            set
            {
                if (!value) Info.Name.Close();
                Root.gameObject.SetActive(value);
            }
        }

        public void Msg(string text, string kind = "") => LobbyUi.Msg(MsgText, text, kind);
    }
}
