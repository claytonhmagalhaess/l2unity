// Aba Game do OptionWnd (04 secao 2.5) como o NWindow a consome [O nwindow/00002.c:3930-4010, o despachante do SetOption*]:
//   MyName / NPCName / OtherPCName / PledgeMemberName / PartyMemberName / GroupName -> GL2ShowMyName, GL2ShowNPCName,
//     GL2ShowOtherPCName, GL2ShowPledgeMemberName, GL2ShowPartyMemberName, GL2ShowGroupName (nomes sobre os pawns; GroupName e
//     o mestre de Clan/Party/General, OptionWnd.uc:602-613);
//   TransparencyMode -> GIsTransparencyMode; EnterChatting -> GIsEnterChatting; OldChatting -> GIsOldChat;
//   UseJoystick -> GL2UsingJoystick; AutoTrackingPawn -> GL2UseAutoTrackingPawn; Video.UseColorCursor -> GL2UseColorCursor
//   (com 0 chama SetL2Cursor(0) e volta a seta do sistema); ArrowMode -> GIsArrowMode (seta 3D no destino do clique);
//   IsNative -> GIsNative; HideDropItem -> GL2HideDropMesh (malhas dos itens no chao).
//   Script: IsRejectingDuel (DuelManager.uc:104-132, resposta automatica), ShowGameTipMsg (GametipWnd.uc:152), ShowZoneTitle
//   (ZoneTitleWnd), PartyLooting (RequestJoinParty), WindowInitBtn -> SetDefaultPosition() (todas as janelas na posicao padrao).
// No porte: nomes (World.NameVisible), itens no chao, seta do clique (GameScene.ArrowMode), auto-tracking da camera, cursor
// colorido (L2Cursor), transparencia das janelas (CanvasGroup [I: o valor do nativo nao foi reconstruido]).
using L2Web.UI;
using UnityEngine;

namespace L2Web.Render
{
    public static class GameOptions
    {
        /// <summary>[I] alfa das janelas com TransparencyMode (o nativo nao foi reconstruido).</summary>
        public const float TransparentAlpha = 0.7f;

        public static void Apply(GameScene scene, World.World world, GameUi ui)
        {
            if (world != null)
            {
                world.ShowMyName = L2Options.GetBool("Game", "MyName", true);
                world.ShowNpcName = L2Options.GetBool("Game", "NPCName", true);
                world.ShowGroupName = L2Options.GetBool("Game", "GroupName", true);
                world.ShowClanName = L2Options.GetBool("Game", "PledgeMemberName", true);
                world.ShowPartyName = L2Options.GetBool("Game", "PartyMemberName", true);
                world.ShowOtherName = L2Options.GetBool("Game", "OtherPCName", true);
                world.HideDropItems = L2Options.GetBool("Game", "HideDropItem");
                world.RefreshNames();
            }
            if (scene != null)
            {
                scene.ArrowMode = L2Options.GetBool("Game", "ArrowMode", true);
                scene.Cam.AutoTracking = L2Options.GetBool("Game", "AutoTrackingPawn");
            }
            ui?.Layer.SetTransparency(L2Options.GetBool("Game", "TransparencyMode") ? TransparentAlpha : 1f);
            L2Cursor.UseColorCursor = L2Options.GetBool("Video", "UseColorCursor", true);
        }
    }
}
