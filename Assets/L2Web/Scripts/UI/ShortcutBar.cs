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
        /// Rotulo de tecla do slot: so a barra principal tem teclas no xdat do Interlude (F1-F12 e 1-0, -, =); as barras 2 e 3
        /// nao tem.
        /// </summary>
        public static string KeyLabel(int bar, int index) => bar == 0 && index >= 0 && index < 12 ? "F" + (index + 1) : "";
    }
}
