// Regras do NCShortcutItemWnd (barra de atalhos nativa, 02 §1.6 da #0024) sem Unity: clique direito so nos shots
// (OnRButtonDown nw:0x100477f0, lista de FUN_10149ee0), troca entre slots (OnDropItem nw:0x100480c0) e remocao ao soltar
// fora da barra (OnDragButton nw:0x100478f0).
using System.Collections.Generic;
using L2Web.Net;

namespace L2Web.UI
{
    public static class ShortcutBar
    {
        /// <summary>FUN_10149ee0: soulshots e spiritshots (os unicos com o automatico no clique direito).</summary>
        public static bool IsShot(int itemId) =>
            itemId >= 1463 && itemId <= 1467 || itemId == 1835 || itemId >= 2509 && itemId <= 2514 || itemId >= 3947 && itemId <= 3952 ||
            itemId == 5789 || itemId == 5790 || itemId >= 6535 && itemId <= 6540 || itemId >= 6645 && itemId <= 6647;

        /// <summary>Margem em volta da propria barra dentro da qual soltar um slot nao o apaga (OnDragButton).</summary>
        public const float DropMargin = 30;

        /// <summary>Soltar fora da propria barra (com a margem de 30 px) e fora de outro slot apaga o atalho.</summary>
        public static bool DeleteOnDrop(float barX, float barY, float barW, float barH, float px, float py) =>
            px < barX - DropMargin || py < barY - DropMargin || px > barX + barW + DropMargin || py > barY + barH + DropMargin;

        /// <summary>Um pedido da troca: registrar `Sc` no `Slot` (RequestShortCutReg) ou apagar o `Slot` (Sc null).</summary>
        public sealed class Step
        {
            public int Slot;
            public Shortcut Sc;
        }

        /// <summary>
        /// OnDropItem com origem NCShortcutItemWnd: registra a origem no destino e, se o destino tinha atalho, o antigo do destino
        /// na origem; se estava vazio, apaga a origem. Mesmo slot: nada.
        /// </summary>
        public static List<Step> Swap(int src, Shortcut srcSc, int dst, Shortcut dstSc)
        {
            var o = new List<Step>();
            if (srcSc == null || src == dst) return o;
            o.Add(new Step { Slot = dst, Sc = srcSc });
            o.Add(dstSc != null ? new Step { Slot = src, Sc = dstSc } : new Step { Slot = src });
            return o;
        }

        /// <summary>
        /// UserShortCut do RequestShortCutReg (OnDropItem nw:0x100480c0): 2 (pet) para as acoes 15-27 e os itens do inventario
        /// do pet; 1 (jogador) para o resto.
        /// </summary>
        public static int UserShortCut(string type, int id, bool fromPetInventory = false) =>
            fromPetInventory || type == "action" && id >= 15 && id <= 27 ? 2 : 1;

        /// <summary>
        /// Rotulo de tecla do slot: so a barra principal tem teclas no xdat do Interlude (F1-F12 e 1-0, -, =); as barras 2 e 3
        /// nao tem.
        /// </summary>
        public static string KeyLabel(int bar, int index) => bar == 0 && index >= 0 && index < 12 ? "F" + (index + 1) : "";

        // ---------------------------------------------------------------- sobreposicoes do NCShortcutItemWnd::OnPaint (nw:0x10047b40)
        /// <summary>
        /// Contorno do slot com atalho: NCShortcutItemWnd::OnCreate (nw:0x10047520) poe L2UI_CH3.Etc.menu_outline (normal) e
        /// menu_outline_down (pressionado); nao ha textura de realce.
        /// </summary>
        public const string Outline = "L2UI_CH3.Etc.menu_outline", OutlineDown = "L2UI_CH3.Etc.menu_outline_down";

        /// <summary>
        /// m_pIconToggle = L2_SkillTime.ToggleEffect.ToggleEffect001 com a taxa de quadros (+0x5e4) = 0x41100000 = 9,0
        /// (OnCreate nw:0x10047520); a cadeia AnimNext tem 13 quadros (ToggleEffect001..013), em laco.
        /// </summary>
        public const float ToggleFps = 9f;
        public const int ToggleFrames = 13;

        /// <summary>Quadro (1..13) do ToggleEffect no instante `seconds`.</summary>
        public static int ToggleFrame(double seconds) => (int)(System.Math.Floor(System.Math.Max(0, seconds) * ToggleFps) % ToggleFrames) + 1;

        /// <summary>Nome da textura do ToggleEffect no quadro `frame` (1..13).</summary>
        public static string ToggleTex(int frame) => $"L2_SkillTime.ToggleEffect.ToggleEffect{frame:000}";

        /// <summary>
        /// OnPaint desenha o ToggleEffect (1, 1, 33, 33) quando o atalho e uma skill de liga/desliga ligada (NCItem::IsToggleSkill
        /// +0x1f58 e NConsoleWnd::IsToggleOn nw:0x10146830, o id na lista de buffs) ou um item com o automatico (+0x1f68).
        /// </summary>
        public static bool ShowToggle(string type, bool toggleSkill, bool toggleOn, bool autoShot) =>
            type == "skill" ? toggleSkill && toggleOn : type == "item" && autoShot;

        /// <summary>NMagicSkillDataManager::IsToggleSkill (nw:0x101b57d0): operate_type do Skillgrp (+0x20) == 3.</summary>
        public static bool IsToggleOperateType(int operateType) => operateType == 3;

        /// <summary>CooltimeEnd: 9 quadros em 0,5 s (NCCoolTimeIcon +0x28 = 0x3fe0000000000000; FUN_10030af0 ate fim + 0,5).</summary>
        public const double EndSeconds = 0.5;
        public const int EndFrames = 9;

        /// <summary>Quadro da varredura de recarga: Rotation_Type.cooltime0..359, um por grau do tempo decorrido (0x168 quadros).</summary>
        public static int CoolFrame(double elapsed, double total) =>
            total <= 0 ? 359 : System.Math.Min(359, System.Math.Max(0, (int)System.Math.Floor(elapsed * 360 / total)));

        /// <summary>
        /// Estado da recarga no instante `now` (s) para uma recarga iniciada em `start` com `total` s: (fase, quadro).
        /// Fase 1 = varredura (quadro 0..359), 2 = brilho final (quadro 1..9, nos 0,5 s seguintes), 0 = nada.
        /// </summary>
        public static (int phase, int frame) Cool(double start, double total, double now)
        {
            if (total <= 0) return (0, 0);
            var t = now - start;
            if (t < 0) t = 0;
            if (t <= total) return (1, CoolFrame(t, total));
            var e = t - total;
            if (e <= EndSeconds) return (2, System.Math.Min(EndFrames, (int)System.Math.Floor(e * EndFrames / EndSeconds) + 1));
            return (0, 0);
        }

        public static string CoolTex(int frame) => "L2_SkillTime.Rotation_Type.cooltime" + frame;
        public static string EndTex(int frame) => $"L2_SkillTime.CooltimeEnd.CooltimeEnd00{frame}";

        /// <summary>Som do fim da recarga (IFST_COOLTIME_END, FUN_1014ed50(9) no OnPaint; itemSound.cooltime_end nw:0x249f98).</summary>
        public const string CoolEndSound = "ItemSound.Signal.cooltime_end";
    }
}
