// Cursor do mouse do cliente [O nwindow/00004.c, 00012.c]:
//  - FUN_10070d60 carrega 9 cursores coloridos dos recursos do NWindow.dll (RT_GROUP_CURSOR, tabela DAT_1034cc68: tipo 0..8 ->
//    ids 102, 101, 106, 107, 127, 130, 131, 136, 137) e o IDC_ARROW (0x7f00) como cursor "sem cor";
//  - NConsoleWnd::SetL2Cursor (FUN_101455d0 -> FUN_10072070): com GL2UseColorCursor = 0 poe o IDC_ARROW; senao SetCursor
//    do tipo (tipo 4 = icone de arraste, montado da textura do item por FUN_10071b70);
//  - FUN_10164e80 escolhe o tipo pelo objeto sob o mouse, a cada quadro: 0 normal; 3 item no chao (e desenha o nome do item
//    no ponto); 1 ataque (pvp/karma de um dos lados, cla inimigo ou "modo de ataque" vtbl 0x590); 2 loja (PrivateStoreState
//    1/3/5/8) ou mesma party/cla; 7 num modo especial (console+0xb4); so com GL2UseColorCursor. Os PNGs vieram dos recursos
//    (Docs/tools: extraidos com as paletas e mascaras; cursors.json com os hotspots).
using System.Collections.Generic;
using System.Threading.Tasks;
using L2Web.World;
using Newtonsoft.Json.Linq;
using UnityEngine;

namespace L2Web.UI
{
    public static class L2Cursor
    {
        public const int Normal = 0, Attack = 1, Talk = 2, PickUp = 3, Drag = 4, Special = 7;
        static readonly Texture2D[] tex = new Texture2D[9];
        static readonly Vector2[] hot = new Vector2[9];
        static bool loaded, loading;
        static int current = -1;
        static bool colorOn = true;

        /// <summary>Video.UseColorCursor (GL2UseColorCursor).</summary>
        public static bool UseColorCursor
        {
            get => colorOn;
            set
            {
                if (colorOn == value) return;
                colorOn = value;
                var t = current;
                current = -1;
                Apply(t < 0 ? Normal : t);
            }
        }

        public static async Task Load()
        {
            if (loaded || loading) return;
            loading = true;
            try
            {
                var j = await Http.GetJson<JObject>("/ui/cursor/cursors.json");
                for (var i = 0; i < 9; i++)
                {
                    if (j?[i.ToString()] is not JObject c) continue;
                    var r = await Http.Fetch("/ui/cursor/" + (string)c["file"]);
                    if (!r.Ok || r.Data == null) continue;
                    // legivel (ImageConversion), como o Cursor.SetCursor pede
                    var t = new Texture2D(2, 2, TextureFormat.RGBA32, false) { name = "cursor" + i, hideFlags = HideFlags.DontSave };
                    if (!ImageConversion.LoadImage(t, r.Data, false)) continue;
                    t.filterMode = FilterMode.Point;
                    tex[i] = t;
                    hot[i] = new Vector2((float)c["hot"][0], (float)c["hot"][1]);
                }
                loaded = true;
                var cur = current;
                current = -1;
                Apply(cur < 0 ? Normal : cur);
            }
            catch (System.Exception e)
            {
                Debug.LogWarning("cursor: " + e.Message);
            }
            finally
            {
                loading = false;
            }
        }

        /// <summary>SetL2Cursor(tipo): troca o cursor de hardware; sem cor (ou sem o recurso) volta a seta do sistema.</summary>
        public static void Apply(int type)
        {
            if (type < 0 || type > 8) type = Normal;
            if (type == current) return;
            current = type;
            if (!colorOn || !loaded || !tex[type])
            {
                Cursor.SetCursor(null, Vector2.zero, CursorMode.Auto);
                return;
            }
            Cursor.SetCursor(tex[type], hot[type], CursorMode.Auto);
        }

        public static int Current => current;

        /// <summary>
        /// Tipo pelo objeto sob o mouse (FUN_10164e80): nada/UI -> 0; item -> 3; NPC atacavel -> 1 (vtbl 0x590 "ataque");
        /// NPC -> 2 [I: o original decide pelo "modo de ataque" do console, nao pelo flag]; jogador: pvp/karma de um dos
        /// lados -> 1, loja -> 2, mesma party/cla -> 2, senao 0.
        /// </summary>
        public static int TypeFor(Entity e, bool overUi, bool selfPvp, bool sameParty, bool sameClan)
        {
            if (overUi || e == null) return Normal;
            if (e.Kind == "item") return PickUp;
            if (e.Kind == "npc") return e.Attackable ? Attack : Talk;
            if (e.Kind == "player")
            {
                if (selfPvp || e.PvpFlag != 0 || e.Karma > 0) return Attack;
                if (e.StoreType != 0) return Talk;
                if (sameParty || sameClan) return Talk;
            }
            return Normal;
        }
    }
}
