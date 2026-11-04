// Tooltip do Interlude sem Unity. O script ToolTip.uc monta, por tipo (TooltipType do xdat), uma lista de DrawItemInfo
// (texto, espaco em branco ou textura, com deslocamento, quebra de linha e cor); o nativo mede (NWndUtil::
// CalculateDrawItemListRect, nw:0x10065570), desenha (NWndUtil::DrawItemList, nw:0x10068be0) e posiciona a caixa
// (NCTooltip::DrawTooltip, nw:0x10054680). Aqui: o modelo, os construtores de cada tipo, os nativos de texto que eles usam
// (MakeCostString, GetNumericColor, MakeBuffTimeStr, GetItemGradeString, IsStackableItem) e o layout.
using System;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

namespace L2Web.UI
{
    /// <summary>EDrawItemType (UIEventManager.uc:965).</summary>
    public enum DrawItemType
    {
        Blank,
        Text,
        Texture,
    }

    /// <summary>DrawItemInfo (UIEventManager.uc:972).</summary>
    public sealed class DrawItem
    {
        public DrawItemType Type;
        public int OffX, OffY;
        public bool LineBreak;
        public int BlankHeight;
        /// <summary>t_ID: sysstring (&gt; 0 vence o texto).</summary>
        public int Id;
        public string Text = "";
        /// <summary>t_color. Alfa 0 = nao definida (StartItem zera a estrutura): a cor padrao do texto.</summary>
        public Color32 Color;
        public bool OneLine;
        public string Tex;
        public int TexW, TexH;
        /// <summary>Condition do item (ParamAdd): "Type=RemainTime" no tempo do buff.</summary>
        public string Condition = "";
    }

    /// <summary>CustomTooltip: a lista, a largura minima e quantas linhas a versao simples mostra.</summary>
    public sealed class CustomTooltip
    {
        public readonly List<DrawItem> DrawList = new();
        public int MinimumWidth;
        public int SimpleLineCount;
    }

    /// <summary>ItemInfo (UIEventManager.uc) com os campos que o ToolTip.uc le.</summary>
    public sealed class TooltipItem
    {
        public int ClassId, ServerId, ItemType, ItemSubType, SlotBitType, WeaponType, ArmorType, CrystalType, Enchanted, ConsumeType;
        public long ItemNum, Price;
        public int Reserved, Level, PhysicalDamage, MagicalDamage, AttackSpeed, SoulshotCount, SpiritshotCount, Weight, MpConsume;
        public int ShieldDefense, ShieldDefenseRate, AvoidModify, PhysicalDefense, MagicalDefense, MpBonus, RefineryOp1, RefineryOp2;
        public int CurrentDurability = -1, Durability, Damaged, Blessed;
        public string Name = "", AdditionalName = "", Description = "";
    }

    public static class L2Tooltip
    {
        /// <summary>ToolTip.uc:3.</summary>
        public const int MinimumWidth = 144;

        /// <summary>Cor do texto sem t_color (o TextBox do xdat usa #dcdcdc) [I].</summary>
        public static readonly Color32 DefaultColor = new(220, 220, 220, 255);

        public static Func<int, string> SysString = id => GameData.SysString(id, "");

        // ------------------------------------------------------------ nativos de texto
        /// <summary>NWndUtil::MakeCostString (FUN_10062590): milhares separados por ",".</summary>
        public static string MakeCostString(string s)
        {
            if (string.IsNullOrEmpty(s)) return "";
            var neg = s[0] == '-';
            var d = neg ? s.Substring(1) : s;
            var o = new StringBuilder();
            for (var i = 0; i < d.Length; i++)
            {
                if (i > 0 && (d.Length - i) % 3 == 0) o.Append(',');
                o.Append(d[i]);
            }
            return (neg ? "-" : "") + o;
        }

        /// <summary>
        /// NWndUtil::GetNumericColor (FUN_10063020): pelo numero de digitos (sem as virgulas) &gt; 4, (digitos - 2) % 4 escolhe
        /// 0 ff80ff, 1 ffff00, 2 00ff00, 3 00ffff; ate 4 digitos, #dcdcdc.
        /// </summary>
        public static Color32 GetNumericColor(string commaAdena)
        {
            var n = 0;
            foreach (var c in commaAdena ?? "")
                if (c != ',') n++;
            if (n <= 4) return new Color32(0xdc, 0xdc, 0xdc, 255);
            switch ((n - 2) % 4)
            {
                case 0: return new Color32(0xff, 0x80, 0xff, 255);
                case 1: return new Color32(0xff, 0xff, 0x00, 255);
                case 2: return new Color32(0x00, 0xff, 0x00, 255);
                default: return new Color32(0x00, 0xff, 0xff, 255);
            }
        }

        /// <summary>
        /// NWndUtil::MakeTimeStr (FUN_100628f0): so a maior unidade, "%d%s": horas (sysstring 1110), minutos (1111) ou
        /// segundos com o "초" fixo no binario (DAT_10245b34).
        /// </summary>
        public static string MakeBuffTimeStr(int seconds)
        {
            var r = seconds % 86400;
            var h = r / 3600;
            var m = r % 3600 / 60;
            var s = r % 3600 % 60;
            if (h >= 1) return h + SysString(1110);
            if (m >= 1) return m + SysString(1111);
            return s + "초";
        }

        /// <summary>GetItemGradeString: tabela do nwindow (0x10350f70): none, graded, gradec, gradeb, gradea, grades.</summary>
        public static string GradeString(int crystal) =>
            crystal >= 1 && crystal <= 5 ? new[] { "", "graded", "gradec", "gradeb", "gradea", "grades" }[crystal] : "";

        /// <summary>NConsoleWnd::IsGradeString (FUN_10146430): "`gradeX`" com 8 caracteres vira o simbolo 12 x 12.</summary>
        public static bool IsGradeToken(string s)
        {
            if (s == null || s.Length != 8 || s[0] != '`' || s[7] != '`') return false;
            var g = s.Substring(1, 6);
            return g == "graded" || g == "gradec" || g == "gradeb" || g == "gradea" || g == "grades";
        }

        /// <summary>execIsStackableItem: ConsumeType 1, 2 ou 3.</summary>
        public static bool IsStackable(int consumeType) => consumeType == 1 || consumeType == 2 || consumeType == 3;

        // ------------------------------------------------------------ construcao (ToolTip.uc)
        sealed class Builder
        {
            public readonly CustomTooltip T = new();
            DrawItem cur;

            public DrawItem Start()
            {
                cur = new DrawItem();
                return cur;
            }

            public void End() => T.DrawList.Add(cur);

            public void Text(string s, Color32 c = default, int offX = 0, int offY = 0, bool br = false, bool one = true, int id = 0, string cond = "")
            {
                var d = Start();
                d.Type = DrawItemType.Text;
                d.Text = s ?? "";
                d.Id = id;
                d.Color = c;
                d.OffX = offX;
                d.OffY = offY;
                d.LineBreak = br;
                d.OneLine = one;
                d.Condition = cond;
                End();
            }

            /// <summary>AddTooltipItemOption: "titulo : conteudo" (cinza 163, dourado 176/155/121), deslocado 6 se nao for o primeiro.</summary>
            public void Option(int titleId, string content, bool bTitle, bool bContent, bool first)
            {
                var oy = first ? 0 : 6;
                if (bTitle) Text("", Grey, 0, oy, true, true, titleId);
                if (!bContent) return;
                if (bTitle) Text(" : ", Grey, 0, oy);
                Text(content, Gold, 0, oy, !bTitle);
            }

            /// <summary>AddTooltipItemOption2: o conteudo tambem e sysstring.</summary>
            public void Option2(int titleId, int contentId, bool bTitle, bool bContent, bool first)
            {
                var oy = first ? 0 : 6;
                if (bTitle) Text("", Grey, 0, oy, true, true, titleId);
                if (!bContent) return;
                if (bTitle) Text(" : ", Grey, 0, oy);
                Text("", Gold, 0, oy, !bTitle, true, contentId);
            }

            public void Color(byte r, byte g, byte b, int offset = 0)
            {
                var i = T.DrawList.Count - 1 - offset;
                if (i >= 0) T.DrawList[i].Color = new Color32(r, g, b, 255);
            }

            public void Color(Color32 c) => Color(c.r, c.g, c.b);

            public void Blank(int h)
            {
                var d = Start();
                d.Type = DrawItemType.Blank;
                d.BlankHeight = h;
                End();
            }
        }

        static readonly Color32 Grey = new(163, 163, 163, 255);
        static readonly Color32 Gold = new(176, 155, 121, 255);
        static readonly Color32 Desc = new(178, 190, 207, 255);
        static readonly Color32 AddNameColor = new(255, 217, 105, 255);

        static bool IsEnchantable(int itemType) => itemType >= 0 && itemType <= 3;

        /// <summary>ReturnTooltip_NTT_TEXT: "Text" (uma linha) ou "Description" (largura minima, cor 178/190/207).</summary>
        public static CustomTooltip Text(string text, int id = 0, bool desc = false)
        {
            var b = new Builder();
            if (!string.IsNullOrEmpty(text))
            {
                if (desc)
                {
                    b.T.MinimumWidth = MinimumWidth;
                    b.Text(text, Desc, one: false);
                }
                else b.Text(text);
            }
            else if (id > 0) b.Text("", id: id);
            return b.T;
        }

        static void ItemEnchant(Builder b, TooltipItem it)
        {
            if (it.Enchanted > 0 && IsEnchantable(it.ItemType)) b.Text("+" + it.Enchanted + " ", Gold);
        }

        static void ItemName(Builder b, string name, TooltipItem it)
        {
            b.Text(name);
            if (!string.IsNullOrEmpty(it.AdditionalName)) b.Text(" " + it.AdditionalName, AddNameColor);
        }

        static void ItemGrade(Builder b, TooltipItem it)
        {
            var g = GradeString(it.CrystalType);
            if (g.Length == 0) return;
            b.Text(" ");
            b.Text("`" + g + "`");
        }

        static void ItemCount(Builder b, TooltipItem it)
        {
            if (IsStackable(it.ConsumeType)) b.Text(" (" + MakeCostString(it.ItemNum.ToString()) + ")");
        }

        /// <summary>
        /// ReturnTooltip_NTT_ITEM (ToolTip.uc:213-822): "Inventory", "InventoryPrice1", "InventoryPrice2",
        /// "InventoryPrice1HideEnchant", "InventoryPrice1HideEnchantStackable", "InventoryPrice2PrivateShop", com o bloco de
        /// conjunto do ItemName-e (#0050). Sem as opcoes do augment (UIDATA_REFINERYOPTION): so o cabecalho e o ss1491.
        /// </summary>
        public static CustomTooltip Item(TooltipItem it, string type = "Inventory")
        {
            var b = new Builder();
            var name = it.Name ?? "";
            var large = false;
            if (type != "InventoryPrice1HideEnchant" && type != "InventoryPrice1HideEnchantStackable") ItemEnchant(b, it);
            ItemName(b, name, it);
            ItemGrade(b, it);
            if (type != "InventoryPrice1HideEnchantStackable") ItemCount(b, it);
            if (it.ClassId == 57)
            {
                b.T.SimpleLineCount = 2;
                b.Text("(" + L2NumText.Convert(it.ItemNum.ToString(), true) + ")", offY: 6, br: true);
            }
            if (type == "InventoryPrice1" || type == "InventoryPrice1HideEnchant" || type == "InventoryPrice1HideEnchantStackable")
            {
                var adena = it.Price.ToString();
                var comma = MakeCostString(adena);
                var c = GetNumericColor(comma);
                b.Option(322, comma + " ", true, true, false);
                b.Color(c);
                b.Text("", c, offY: 6, id: 469);
                b.T.SimpleLineCount = 2;
                if (it.Price > 0)
                {
                    b.T.SimpleLineCount = 3;
                    b.Option(0, "(" + L2NumText.Convert(adena, true) + ")", false, true, false);
                    b.Color(c);
                }
            }
            if (type == "InventoryPrice2" || type == "InventoryPrice2PrivateShop")
            {
                var adena = it.Price.ToString();
                var comma = MakeCostString(adena);
                var c = GetNumericColor(comma);
                b.Option2(322, 468, true, true, false);
                b.Color(c);
                b.Text(" " + comma + " ", c, offY: 6);
                b.Text("", c, offY: 6, id: 469);
                b.T.SimpleLineCount = 2;
                if (it.Price > 0)
                {
                    b.T.SimpleLineCount = 3;
                    b.Text("(", c, offY: 6, br: true);
                    b.Text("", c, offY: 6, id: 468);
                    b.Text(" " + L2NumText.Convert(adena, true) + ")", c, offY: 6);
                }
            }
            if (type == "InventoryPrice2PrivateShop" && IsStackable(it.ConsumeType) && it.Reserved > 0) b.Option(808, it.Reserved.ToString(), true, true, false);

            var slot = ItemInfoText.SlotType(it.ItemType, it.SlotBitType, it.ArmorType, SysString);
            switch (it.ItemType)
            {
                case 0:
                {
                    large = true;
                    var wt = ItemInfoText.WeaponTypeString(it.WeaponType);
                    var ws = wt > 0 ? SysString(wt) : "";
                    if (ws.Length > 0) b.Option(0, ws + " / " + slot, false, true, false);
                    b.Blank(12);
                    b.Option(1489, "", true, false, false);
                    b.Color(255, 255, 255);
                    b.Option(94, ItemInfoText.PAtk(it.WeaponType, it.SlotBitType, it.CrystalType, it.Enchanted, it.PhysicalDamage).ToString(), true, true, false);
                    b.Option(98, ItemInfoText.MAtk(it.WeaponType, it.SlotBitType, it.CrystalType, it.Enchanted, it.MagicalDamage).ToString(), true, true, false);
                    b.Option(111, SysString(ItemInfoText.SpeedString(it.AttackSpeed)), true, true, false);
                    if (it.SoulshotCount > 0) b.Option(404, "X " + it.SoulshotCount, true, true, false);
                    if (it.SpiritshotCount > 0) b.Option(496, "X " + it.SpiritshotCount, true, true, false);
                    b.Option(52, it.Weight.ToString(), true, true, false);
                    if (it.MpConsume != 0) b.Option(320, it.MpConsume.ToString(), true, true, false);
                    if (it.RefineryOp1 != 0 || it.RefineryOp2 != 0) Refinery(b, it);
                    break;
                }
                case 1:
                    large = true;
                    if (it.SlotBitType == 256 || it.SlotBitType == 128)
                    {
                        b.Option(95, ItemInfoText.Def(it.CrystalType, it.Enchanted, it.ShieldDefense).ToString(), true, true, false);
                        b.Option(317, it.ShieldDefenseRate.ToString(), true, true, false);
                        b.Option(97, it.AvoidModify.ToString(), true, true, false);
                        b.Option(52, it.Weight.ToString(), true, true, false);
                    }
                    else
                    {
                        if (slot.Length > 0) b.Option(0, slot, false, true, false);
                        if (IsMagicalArmor(it)) b.Option(388, it.MpBonus.ToString(), true, true, false);
                        b.Option(95, ItemInfoText.Def(it.CrystalType, it.Enchanted, it.PhysicalDefense).ToString(), true, true, false);
                        b.Option(52, it.Weight.ToString(), true, true, false);
                    }
                    break;
                case 2:
                    large = true;
                    if (slot.Length > 0) b.Option(0, slot, false, true, false);
                    b.Option(99, ItemInfoText.Def(it.CrystalType, it.Enchanted, it.MagicalDefense).ToString(), true, true, false);
                    b.Option(52, it.Weight.ToString(), true, true, false);
                    break;
                case 3:
                    large = true;
                    if (slot.Length > 0) b.Option(0, slot, false, true, false);
                    break;
                case 5:
                    large = true;
                    // ITEME_PET_COLLAR 7, TICKET_OF_LORD, LOTTO, RACE_TICKET
                    if (it.ItemSubType == 7)
                    {
                        b.Option2(969, it.Damaged == 0 ? 971 : 970, true, true, false);
                        b.Option(88, it.Enchanted.ToString(), true, true, false);
                    }
                    b.Option(52, it.Weight.ToString(), true, true, false);
                    break;
            }
            if (it.CurrentDurability >= 0 && it.Durability > 0)
            {
                large = true;
                b.Blank(12);
                b.Option(1492, "", true, false, false);
                b.Color(255, 255, 255);
                b.Text("", new Color32(163, 163, 163, 255), offY: 6, br: true, id: 1493);
                var low = it.CurrentDurability + 1 <= 5;
                b.Text(" " + it.CurrentDurability + "/" + it.Durability, low ? new Color32(255, 0, 0, 255) : Gold, offY: 6);
                b.Option(1491, "", true, false, false);
                if (!string.IsNullOrEmpty(it.Description)) b.Blank(12);
            }
            if (!string.IsNullOrEmpty(it.Description))
            {
                large = true;
                b.Text(it.Description, Desc, offY: 6, br: true, one: false);
            }
            if (it.ClassId > 0 && SetBlock(b, it)) large = true;
            if (large) b.T.MinimumWidth = MinimumWidth;
            return b.T;
        }

        /// <summary>UIDATA_REFINERYOPTION.GetQuality (sem a tabela no porte: 0, a cor padrao) [?].</summary>
        public static Func<int, int> RefineryQuality = _ => 0;

        /// <summary>UIDATA_REFINERYOPTION.GetOptionDescription: ate 3 linhas da opcao (sem a tabela no porte: nenhuma) [?].</summary>
        public static Func<int, string[]> RefineryOptionDescription = _ => null;

        /// <summary>GetRefineryColor (ToolTip.uc:1906-1936): 2 azul, 3 roxo, 4 vermelho; 1 e o resto 187/181/138.</summary>
        public static Color32 RefineryColor(int quality) => quality switch
        {
            2 => new Color32(132, 174, 216, 255),
            3 => new Color32(193, 112, 202, 255),
            4 => new Color32(225, 109, 109, 255),
            _ => new Color32(187, 181, 138, 255),
        };

        /// <summary>
        /// Efeito do aumento na arma (ToolTip.uc:452-526): espaco, ss1490 em branco, as linhas das duas opcoes na cor da
        /// qualidade do RefineryOp2 e ss1491 na mesma cor. Sem o RefineryOp2 a cor fica 0,0,0 (as variaveis locais do script).
        /// </summary>
        static void Refinery(Builder b, TooltipItem it)
        {
            b.Blank(12);
            b.Option(1490, "", true, false, false);
            b.Color(255, 255, 255);
            var c = it.RefineryOp2 != 0 ? RefineryColor(RefineryQuality(it.RefineryOp2)) : new Color32(0, 0, 0, 255);
            foreach (var op in new[] { it.RefineryOp1, it.RefineryOp2 })
            {
                if (op == 0 || RefineryOptionDescription(op) is not { } lines) continue;
                foreach (var l in lines)
                {
                    if (string.IsNullOrEmpty(l)) continue;
                    b.Option(0, l, false, true, false);
                    b.Color(c);
                }
            }
            b.Option(1491, "", true, false, false);
            b.Color(c);
            if (!string.IsNullOrEmpty(it.Description)) b.Blank(12);
        }

        /// <summary>Quantos pares (lista de ids, efeito) de conjunto o ToolTip.uc percorre (TOOLTIP_SETITEM_MAX).</summary>
        public const int SetItemMax = 3;

        public static readonly Color32 SetPieceNormal = new(112, 115, 123, 255), SetPieceEnable = new(176, 185, 205, 255);
        public static readonly Color32 SetEffectNormal = new(128, 127, 103, 255), SetEffectEnable = new(183, 178, 122, 255);
        public static readonly Color32 SetEnchantNormal = new(74, 92, 104, 255), SetEnchantEnable = new(111, 146, 169, 255);

        /// <summary>Dados de conjunto (UIDATA_ITEM): lista de ids do par idx, efeito do par, efeito e contagem do encantamento.</summary>
        public static Func<int, int, int[]> SetItemIdList = L2TooltipData.SetItemIdList;
        public static Func<int, int, string> SetItemEffect = L2TooltipData.SetItemEffect;
        public static Func<int, string> SetItemEnchantEffect = L2TooltipData.SetItemEnchantEffect;
        public static Func<int, int> SetItemEnchantCount = L2TooltipData.SetItemEnchantCount;
        /// <summary>UIDATA_ITEM.GetItemName (vazio = a linha da peca nao entra).</summary>
        public static Func<int, string> ItemNameOf = id => L2TooltipData.ItemName(id)?.Name ?? "";

        /// <summary>
        /// NCInventoryManager da lista de equipados (lista 2, GetEquipItemCount le +0x1c): FindItem pelo ServerID
        /// (FUN_101b2b30) e FindItemByClassID (FUN_101b2b50) com o encantamento da peca (FUN_101b2720). -1 = nao equipado.
        /// </summary>
        public static Func<int, bool> EquippedServer = _ => false;
        public static Func<int, int> EquippedClassEnchant = _ => -1;

        /// <summary>
        /// IsMagicalArmor (UIScript, FUN_10164d80): pelo ClassID nos dados do cliente [I] ArmorType 3 (robe); sem dados, o
        /// ArmorType do item.
        /// </summary>
        public static Func<TooltipItem, bool> IsMagicalArmor = it => (ItemStats.Of(it.ClassId)?.ArmorType ?? it.ArmorType) == 3;

        /// <summary>
        /// Bloco de conjunto do ReturnTooltip_NTT_ITEM (ToolTip.uc:727-805): para idx 0..2 as pecas da lista (menos o proprio
        /// item) em 112/115/123 com Condition Type=Equip, e o efeito do par em 128/127/103 (Type=SetEffect); no fim o efeito do
        /// encantamento em 74/92/104 (Type=EnchantEffect). As cores de "ativo" saem na hora de desenhar (ConditionColor).
        /// </summary>
        static bool SetBlock(Builder b, TooltipItem it)
        {
            var any = false;
            for (var idx = 0; idx < SetItemMax; idx++)
            {
                foreach (var id in SetItemIdList(it.ClassId, idx))
                {
                    any = true;
                    if (id == it.ClassId) continue;
                    var name = ItemNameOf(id);
                    if (string.IsNullOrEmpty(name)) continue;
                    b.Text(name, SetPieceNormal, offY: 6, br: true,
                        cond: Cond("Type", "Equip", "ServerID", it.ServerId, "EquipID", id, "NormalColor", "112,115,123", "EnableColor", "176,185,205"));
                }
                var eff = SetItemEffect(it.ClassId, idx);
                if (string.IsNullOrEmpty(eff)) continue;
                any = true;
                b.Text(eff, SetEffectNormal, offY: 6, br: true, one: false,
                    cond: Cond("Type", "SetEffect", "ServerID", it.ServerId, "ClassID", it.ClassId, "EffectID", idx, "NormalColor", "128,127,103", "EnableColor",
                        "183,178,122"));
            }
            var ench = SetItemEnchantEffect(it.ClassId);
            if (!string.IsNullOrEmpty(ench))
            {
                any = true;
                b.Text(ench, SetEnchantNormal, offY: 6, br: true, one: false,
                    cond: Cond("Type", "EnchantEffect", "ServerID", it.ServerId, "ClassID", it.ClassId, "NormalColor", "74,92,104", "EnableColor", "111,146,169"));
            }
            return any;
        }

        /// <summary>ParamAdd em sequencia (chave, valor, ...).</summary>
        static string Cond(params object[] kv)
        {
            var o = "";
            for (var i = 0; i + 1 < kv.Length; i += 2) o = L2Param.Add(o, (string)kv[i], kv[i + 1].ToString());
            return o;
        }

        static int CondInt(string cond, string key)
        {
            var v = 0;
            L2Param.ParseInt(cond, key, ref v);
            return v;
        }

        static bool AllEquipped(int classId, int lastIdx, int minEnchant)
        {
            for (var idx = 0; idx <= lastIdx; idx++)
                foreach (var id in SetItemIdList(classId, idx))
                    if (EquippedClassEnchant(id) < Math.Max(0, minEnchant)) return false;
            return true;
        }

        /// <summary>
        /// Cor de um item com Condition (NWndUtil::DrawItemList, nw:0x10067f50.., 00003.c:14897-15290): Equip = ativa se o
        /// item do tooltip (ServerID) e a peca (EquipID) estao equipados; SetEffect = ativa se o item esta equipado e todas as
        /// pecas das listas 0..EffectID tambem; EnchantEffect = ativa se o item esta equipado, a contagem &gt;= 1 e todas as
        /// pecas das 3 listas estao equipadas com encantamento &gt;= a contagem. Sem Condition, a cor do item.
        /// </summary>
        public static Color32 ConditionColor(DrawItem d)
        {
            var c = d.Condition ?? "";
            if (c.Length == 0) return d.Color;
            var type = "";
            L2Param.ParseString(c, "Type", ref type);
            var server = CondInt(c, "ServerID");
            bool on;
            switch (type)
            {
                case "Equip":
                    on = EquippedServer(server) && EquippedClassEnchant(CondInt(c, "EquipID")) >= 0;
                    return on ? SetPieceEnable : SetPieceNormal;
                case "SetEffect":
                    on = EquippedServer(server) && AllEquipped(CondInt(c, "ClassID"), CondInt(c, "EffectID"), 0);
                    return on ? SetEffectEnable : SetEffectNormal;
                case "EnchantEffect":
                {
                    var cls = CondInt(c, "ClassID");
                    var n = SetItemEnchantCount(cls);
                    on = n >= 1 && EquippedServer(server) && AllEquipped(cls, SetItemMax - 1, n);
                    return on ? SetEnchantEnable : SetEnchantNormal;
                }
                default:
                    return d.Color;
            }
        }

        /// <summary>
        /// ReturnTooltip_NTT_QUESTLIST (ToolTip.uc:1493-1526): nome (ss1200) e repetibilidade (ss1202) pelo nReserved1 da coluna 3
        /// (0/2 = ss861, 1/3 = ss862).
        /// </summary>
        public static CustomTooltip QuestList(string name, int repeatReserved)
        {
            var b = new Builder();
            b.Option(1200, name, true, true, true);
            b.Option2(1202, repeatReserved == 1 || repeatReserved == 3 ? 862 : 861, true, true, false);
            return b.T;
        }

        /// <summary>
        /// ReturnTooltip_NTT_QUESTINFO (ToolTip.uc:1564-1631): nome (ss1200), requisito (ss1201), largura minima = a maior das
        /// duas linhas (no minimo 144) + 30, nivel (ss922), repetibilidade (ss1202) e a descricao (szReserved) em 178/190/207.
        /// O QuestListWnd nao preenche o nReserved1 da coluna 3, entao a repetibilidade sai sempre ss861.
        /// </summary>
        public static CustomTooltip QuestInfo(string name, string requirement, string level, int repeatReserved, string desc, Func<string, int> textWidth)
        {
            var b = new Builder();
            b.Option(1200, name, true, true, true);
            b.Option(1201, requirement, true, true, false);
            var w1 = textWidth(SysString(1200) + " : " + name);
            var w2 = textWidth(SysString(1201) + " : " + requirement);
            b.T.MinimumWidth = Math.Max(MinimumWidth, Math.Max(w1, w2)) + 30;
            b.Option(922, level, true, true, false);
            b.Option2(1202, repeatReserved == 1 || repeatReserved == 3 ? 862 : 861, true, true, false);
            b.Text(desc, Desc, 0, 6, true, false);
            return b.T;
        }

        /// <summary>
        /// QuestToolTip do QuestTreeWnd (InitQuestTooltip, QuestTreeWnd.uc:802-878): os 5 icones QuestWndInfoIcon_1..5 (16 x 16)
        /// com ss861..865; o QuestListWnd usa so os 2 primeiros.
        /// </summary>
        public static CustomTooltip QuestLegend(int count)
        {
            var b = new Builder();
            for (var i = 0; i < count; i++)
            {
                var d = b.Start();
                d.Type = DrawItemType.Texture;
                d.TexW = d.TexH = 16;
                d.Tex = "L2UI_CH3.QuestWnd.QuestWndInfoIcon_" + (i + 1);
                d.OffY = i > 0 ? 2 : 0;
                d.LineBreak = i > 0;
                b.End();
                b.Text("", default, 5, i > 0 ? 2 : 0, false, true, 861 + i);
            }
            return b.T;
        }

        /// <summary>ReturnTooltip_NTT_ACTION (ToolTip.uc:824-866): nome e descricao (com largura minima).</summary>
        public static CustomTooltip Action(string name, string desc)
        {
            var b = new Builder();
            b.Text(name);
            if (!string.IsNullOrEmpty(desc))
            {
                b.T.MinimumWidth = MinimumWidth;
                b.Text(desc, Desc, offY: 6, br: true, one: false);
            }
            return b.T;
        }

        static void SkillHead(Builder b, string name, string addName, int level)
        {
            b.Text(name);
            if (!string.IsNullOrEmpty(addName)) b.Text(addName, AddNameColor, offX: 5);
            b.Text(" ");
            b.Text("", Grey, id: 88);
            b.Text(" " + level, Gold);
        }

        /// <summary>
        /// ReturnTooltip_NTT_SKILL (ToolTip.uc:868-999): nome, nome do encantamento, " Lv N", tipo de operacao, HP (1195), MP
        /// (320), alcance (321, se &gt;= 0) e descricao. `level` ja e o GetEnchantSkillLevel quando ha nome de encantamento.
        /// </summary>
        public static CustomTooltip Skill(string name, string addName, int level, string operateType, int hp, int mp, int range, string desc)
        {
            var b = new Builder();
            b.T.MinimumWidth = MinimumWidth;
            SkillHead(b, name, addName, level);
            b.Text(operateType ?? "", Gold, offY: 6, br: true);
            if (hp > 0) b.Option(1195, hp.ToString(), true, true, false);
            if (mp > 0) b.Option(320, mp.ToString(), true, true, false);
            if (range >= 0) b.Option(321, range.ToString(), true, true, false);
            if (!string.IsNullOrEmpty(desc)) b.Text(desc, Desc, offY: 6, br: true, one: false);
            return b.T;
        }

        /// <summary>
        /// ReturnTooltip_NTT_ABNORMALSTATUS (ToolTip.uc:1001-1134): como a skill, sem custos; se nao for debuff e houver tempo
        /// (Reserved &gt;= 0), "Remaining Time : " + MakeBuffTimeStr.
        /// </summary>
        public static CustomTooltip AbnormalStatus(string name, string addName, int level, bool debuff, int remainSec, string desc)
        {
            var b = new Builder();
            b.T.MinimumWidth = MinimumWidth;
            SkillHead(b, name, addName, level);
            if (!debuff && remainSec >= 0)
            {
                b.Text("", Grey, offY: 6, br: true, id: 1199);
                b.Text(" : ", Grey, offY: 6);
                b.Text(MakeBuffTimeStr(remainSec), Gold, offY: 6, cond: "Type=RemainTime");
            }
            if (!string.IsNullOrEmpty(desc)) b.Text(desc, Desc, offY: 6, br: true, one: false);
            return b.T;
        }

        /// <summary>
        /// ReturnTooltip_NTT_SHORTCUT (ToolTip.uc:1259-1397), pelo EShortCutItemType: 1 item (encantamento, nome, grau,
        /// quantidade), 2 skill (nome, encantamento, " Lv N", " (MP:custo)"), 3/4/5 acao, macro e receita (so o nome).
        /// </summary>
        public static CustomTooltip Shortcut(int scType, TooltipItem it, string addName = "")
        {
            var b = new Builder();
            switch (scType)
            {
                case 1:
                    ItemEnchant(b, it);
                    ItemName(b, it.Name, it);
                    ItemGrade(b, it);
                    ItemCount(b, it);
                    break;
                case 2:
                    SkillHead(b, it.Name, addName, it.Level);
                    b.Text(" (");
                    b.Text("", id: 91);
                    b.Text(":" + it.MpConsume + ")");
                    break;
                case 3:
                case 4:
                case 5:
                    b.Text(it.Name);
                    break;
            }
            return b.T;
        }

        // ------------------------------------------------------------ layout (CalculateDrawItemListRect / DrawItemList)
        /// <summary>Um pedaco desenhado: texto (ou o simbolo de grau) ou textura, em coordenadas do conteudo.</summary>
        public sealed class Run
        {
            public DrawItem Item;
            public string Text;
            public bool Grade;
            public float X, Y, W, H;
            /// <summary>Largura de quebra (0 = uma linha).</summary>
            public float WrapW;
            public Color32 Color;
            /// <summary>Linha (0 = a primeira) para a versao simples.</summary>
            public int Line;
        }

        public sealed class Layout
        {
            public readonly List<Run> Runs = new();
            public float W, H;
            /// <summary>Tamanho da versao simples (SimpleLineCount linhas); 0 se SimpleLineCount = 0.</summary>
            public float SimpleW, SimpleH;
        }

        /// <summary>
        /// Mede e posiciona a lista. `measure(texto, larguraDeQuebra)` devolve (largura, altura); quebra 0 = uma linha. Um
        /// item sem quebra de linha continua na mesma linha a partir do x atual + OffX; com quebra (ou em branco) desce a
        /// altura da linha (o maior OffY + altura dela) e comeca em OffX. Texto que nao e de uma linha quebra na largura
        /// maxima ja alcancada (comeca na MinimumWidth) menos o x atual.
        /// </summary>
        public static Layout Measure(CustomTooltip t, Func<string, float, Vector2> measure)
        {
            var o = new Layout();
            float x = 0, lineY = 0, lineH = 0, totalH = 0, maxW = t.MinimumWidth, lineW = 0, maxSimple = 0;
            var lines = 0;
            void Simple()
            {
                o.SimpleW = maxSimple;
                o.SimpleH = totalH;
            }
            foreach (var d in t.DrawList)
            {
                if (d == null) continue;
                if (!d.LineBreak && d.Type != DrawItemType.Blank) x += d.OffX;
                else
                {
                    lines++;
                    maxW = Mathf.Max(maxW, lineW);
                    maxSimple = Mathf.Max(maxSimple, lineW);
                    totalH += lineH;
                    if (lines == t.SimpleLineCount) Simple();
                    x = d.OffX;
                    lineH = 0;
                    lineW = 0;
                    lineY = totalH;
                }
                switch (d.Type)
                {
                    case DrawItemType.Blank:
                        totalH += d.BlankHeight;
                        lineY = totalH;
                        x = 0;
                        lineW = 0;
                        lineH = 0;
                        continue;
                    case DrawItemType.Text:
                    {
                        var s = d.Id > 0 ? SysString(d.Id) : d.Text ?? "";
                        var grade = IsGradeToken(s);
                        var wrap = !grade && !d.OneLine && maxW > 0 ? Mathf.Max(1, maxW - x) : 0;
                        var size = grade ? new Vector2(12, 12) : measure(s, wrap);
                        o.Runs.Add(new Run
                        {
                            Item = d, Text = grade ? s.Substring(1, 6) : s, Grade = grade, X = x, Y = lineY + d.OffY, W = size.x, H = size.y, WrapW = wrap,
                            Color = ConditionColor(d) is var col && col.a == 0 ? DefaultColor : col, Line = lines,
                        });
                        x += size.x;
                        lineH = Mathf.Max(lineH, d.OffY + size.y);
                        break;
                    }
                    case DrawItemType.Texture:
                        o.Runs.Add(new Run { Item = d, X = x, Y = lineY + d.OffY, W = d.TexW, H = d.TexH, Line = lines });
                        x += d.TexW;
                        lineH = Mathf.Max(lineH, d.OffY + d.TexH);
                        break;
                }
                lineW = x;
                maxW = Mathf.Max(maxW, x);
                maxSimple = Mathf.Max(maxSimple, x);
            }
            maxW = Mathf.Max(maxW, lineW);
            maxSimple = Mathf.Max(maxSimple, lineW);
            totalH += lineH;
            lines++;
            if (lines <= t.SimpleLineCount) Simple();
            o.W = maxW > 0 ? maxW : 0;
            o.H = totalH > 0 ? totalH : 0;
            return o;
        }

        /// <summary>Margem do conteudo dentro da caixa (DrawItemList em +5, +5) [I] 5 dos dois lados.</summary>
        public const float Pad = 5;

        /// <summary>
        /// NCTooltip::DrawTooltip (nw:0x10054680): a caixa (w x h) fica acima do ponto de referencia (canto superior esquerdo
        /// do controle ou do slot); se sair pelo topo, desce para y + 32. Na horizontal, se passar da borda direita recua o
        /// excesso; se sair pela esquerda, encosta em 0. Coordenadas da tela da interface (y para baixo).
        /// </summary>
        public static Vector2 Place(float refX, float refY, float w, float h, float screenW)
        {
            var x = refX;
            if (x + w > screenW) x -= x + w - screenW;
            else if (x < 0) x = 0;
            var y = refY - h;
            if (y < 0) y = refY + 32;
            return new Vector2(x, y);
        }
    }
}
