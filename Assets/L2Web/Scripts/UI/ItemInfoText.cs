// Textos do NCVIPShopItemInfoWnd / NCNameCtrl (MultiSellItemInfo e MultiSellNeededItem; Docs/tools/gen_golden.py
// item_info): nome com "+N", nome adicional, grau e "x%d"; a vista de detalhes de um produto (tipo, P.Atk/M.Atk/defesa
// com as tabelas de encantamento, velocidade, soulshots, peso e descricao). Sem Unity.
using System;
using System.Collections.Generic;
using System.IO;

namespace L2Web.UI
{
    /// <summary>Atributos de cliente do item (weapongrp / armorgrp / ItemName-e; Docs/tools/export_itemdata.py).</summary>
    public sealed class ItemStats
    {
        public bool Weapon, Armor;
        public int Weight, WeaponType, CrystalType, PAtk, MAtk, ShieldPDef, ShieldRate, Avoid, Speed, SoulShot, SpiritShot, BodyPart;
        public int ArmorType, PDef, MDef, MpBonus;
        public string AddName = "", Description = "";

        static Dictionary<int, ItemStats> all;

        public static ItemStats Of(int id)
        {
            Load();
            return all.TryGetValue(id, out var s) ? s : null;
        }

        static void Load()
        {
            if (all != null) return;
            all = new Dictionary<int, ItemStats>();
            try
            {
                var f = Path.Combine(UnityEngine.Application.streamingAssetsPath, "L2Web", "cache", "itemdata.json");
                if (!File.Exists(f)) return;
                var j = Newtonsoft.Json.Linq.JObject.Parse(File.ReadAllText(f));
                foreach (var p in ((Newtonsoft.Json.Linq.JObject)j["w"]).Properties())
                {
                    var v = (Newtonsoft.Json.Linq.JArray)p.Value;
                    int I(int k) => (int)(double)v[k];
                    all[int.Parse(p.Name)] = new ItemStats
                    {
                        Weapon = true, Weight = I(0), WeaponType = I(3), CrystalType = I(4), PAtk = I(5), MAtk = I(6), ShieldPDef = I(7),
                        ShieldRate = I(8), Avoid = I(9), Speed = I(10), SoulShot = I(11), SpiritShot = I(12), BodyPart = I(13),
                    };
                }
                foreach (var p in ((Newtonsoft.Json.Linq.JObject)j["a"]).Properties())
                {
                    var v = (Newtonsoft.Json.Linq.JArray)p.Value;
                    int I(int k) => (int)(double)v[k];
                    all[int.Parse(p.Name)] = new ItemStats
                    {
                        Armor = true, Weight = I(0), ArmorType = I(3), CrystalType = I(4), Avoid = I(5), PDef = I(6), MDef = I(7), MpBonus = I(8), BodyPart = I(9),
                    };
                }
                foreach (var p in ((Newtonsoft.Json.Linq.JObject)j["n"]).Properties())
                {
                    var id = int.Parse(p.Name);
                    if (!all.TryGetValue(id, out var s)) all[id] = s = new ItemStats();
                    s.AddName = (string)p.Value[0];
                    s.Description = (string)p.Value[1];
                }
            }
            catch (Exception e)
            {
                UnityEngine.Debug.LogWarning("itemdata: " + e.Message);
            }
        }
    }

    public static class ItemInfoText
    {
        // tabelas por grau de cristal (0..5): P.Atk @0x1027df48 / df78 / dfa8, M.Atk @0x10351020 (iguais), defesa @0x1027dfd8
        public static readonly double[][] PAtkTables = { new double[] { 0, 2, 3, 3, 4, 5 }, new double[] { 0, 2, 4, 4, 5, 6 }, new double[] { 0, 4, 6, 6, 8, 10 } };
        public static readonly double[] MAtkTable = { 0, 2, 3, 3, 3, 4 };
        public static readonly double[] DefTable = { 0, 1, 1, 1, 1, 1 };
        public static readonly int[] SpeedLimits = { 260, 309, 352, 406 };
        public static readonly int[] SpeedStrings = { 310, 309, 308, 307, 306 };

        static int F(int e) => e <= 3 ? e : 2 * e - 3;
        static int G(int e) => e <= 3 ? e : 3 * e - 6;
        static double At(double[] t, int c) => c >= 0 && c < t.Length ? t[c] : 0;

        /// <summary>Tabela de P.Atk pelo tipo da arma: espada/porrete de uma mao, adaga, haste, outros = 0; de duas maos, punho, duplas = 1; arco = 2.</summary>
        public static int PAtkTable(int weaponType, int slot)
        {
            if ((weaponType == 1 || weaponType == 2) && slot != 0x4000 || weaponType == 3 || weaponType == 4 || weaponType == 7) return 0;
            if ((weaponType == 1 || weaponType == 2) && slot == 0x4000 || weaponType == 5 || weaponType == 8) return 1;
            return weaponType == 6 ? 2 : -1;
        }

        public static int PAtk(int weaponType, int slot, int crystal, int enchant, int b)
        {
            var t = PAtkTable(weaponType, slot);
            return (int)(b + (t < 0 ? 0 : At(PAtkTables[t], crystal)) * F(enchant));
        }

        public static int MAtk(int weaponType, int slot, int crystal, int enchant, int b) =>
            (int)(b + (PAtkTable(weaponType, slot) < 0 ? 0 : At(MAtkTable, crystal)) * F(enchant));

        public static int Def(int crystal, int enchant, int b) => (int)(b + At(DefTable, crystal) * G(enchant));

        public static int SpeedString(int v)
        {
            for (var i = 0; i < SpeedLimits.Length; i++)
                if (v < SpeedLimits[i]) return SpeedStrings[i];
            return SpeedStrings[SpeedLimits.Length];
        }

        /// <summary>WeaponTypeString: 1 Sword ss43 ... 7 Etc 49, 8 Double Blades 504.</summary>
        public static int WeaponTypeString(int t) => t >= 1 && t <= 7 ? 42 + t : t == 8 ? 504 : -1;

        /// <summary>GetSlotTypeString (0x10145ba0).</summary>
        public static string SlotType(int itemType, int slot, int armorType, Func<int, string> ss)
        {
            switch (itemType)
            {
                case 0:
                    return slot == 0x80 || slot == 0x100 ? ss(242) : slot == 0x4000 ? ss(243) : "";
                case 1:
                    switch (slot)
                    {
                        case 0x1: return ss(229);
                        case 0x40: return ss(230);
                        case 0x80: case 0x100: return ss(231);
                        case 0x200: return ss(232);
                        case 0x1000: return ss(233);
                        case 0x2000: return ss(234);
                        case 0x10000: case 0x40000: case 0x80000: return ss(1024);
                        case 0x400: case 0x800: case 0x8000:
                            var b = ss(slot == 0x400 ? 235 : slot == 0x800 ? 236 : 542) + " / ";
                            return b + (armorType == 1 ? ss(245) : armorType == 2 ? ss(246) : armorType == 3 ? ss(244) : "");
                        default: return "";
                    }
                case 2:
                    return slot == 0x2 || slot == 0x4 ? ss(237) : slot == 0x8 ? ss(238) : slot == 0x10 || slot == 0x20 ? ss(239) : "";
                case 3: return ss(240);
                case 4: return ss(241);
                default: return "";
            }
        }

        /// <summary>NCNameCtrl::DrawItemName: "+N " so com encantamento &gt;= 1 e tipo 0..3.</summary>
        public static string MainName(string name, int enchant, int itemType) =>
            enchant >= 1 && itemType >= 0 && itemType <= 3 ? $"+{enchant} {name}" : name;

        /// <summary>Grau: 1..4 = graded/c/b/a (o S nao tem icone).</summary>
        public static string Grade(int crystal) => crystal >= 1 && crystal <= 4 ? new[] { "", "graded", "gradec", "gradeb", "gradea" }[crystal] : null;

        public sealed class Line
        {
            /// <summary>"header" (dourado em x 46), "stat" (rotulo cinza : valor dourado em x 10), "desc" (azulado, quebra em 200).</summary>
            public string Kind;
            public float X, Y;
            public string Label, Value;
        }

        public sealed class Product
        {
            public int ClassId, ItemType, SlotBitType, Enchant;
        }

        /// <summary>
        /// FUN_10182730 (detalhe com 1 produto): cursor y = 4 + 8 + H; cabecalho (y += 20), linhas de atributo (y += 4 + H),
        /// peso e descricao. Devolve as linhas e a altura do conteudo (o y final).
        /// </summary>
        public static (List<Line> lines, float height) Detail(Product p, ItemStats s, Func<int, string> ss, Func<string, float> descHeight, float H = 13)
        {
            var o = new List<Line>();
            float y = 4 + 8 + H;
            var xL = 46f;
            s ??= new ItemStats();
            var crystal = s.CrystalType;
            var type = SlotType(p.ItemType, p.SlotBitType, s.ArmorType, ss);
            void Header(string t)
            {
                o.Add(new Line { Kind = "header", X = 46, Y = y, Value = t });
                y += 20;
            }
            void Stat(int label, string value, float x = 10)
            {
                o.Add(new Line { Kind = "stat", X = x, Y = y, Label = ss(label), Value = value });
                y += 4 + H;
            }
            switch (p.ItemType)
            {
                case 0:
                    Header($"{(WeaponTypeString(s.WeaponType) is var wt && wt > 0 ? ss(wt) : "")} / {type}");
                    Stat(94, PAtk(s.WeaponType, p.SlotBitType, crystal, p.Enchant, s.PAtk).ToString());
                    Stat(98, MAtk(s.WeaponType, p.SlotBitType, crystal, p.Enchant, s.MAtk).ToString());
                    Stat(111, ss(SpeedString(s.Speed)));
                    Stat(404, "X " + s.SoulShot);
                    Stat(496, "X " + s.SpiritShot);
                    xL = 10;
                    break;
                case 1:
                    Header(type);
                    if ((p.SlotBitType & 0x100) == 0 && (p.SlotBitType & 0x80) == 0)
                    {
                        if (s.ArmorType == 3) Stat(388, s.MpBonus.ToString());
                        Stat(95, Def(crystal, p.Enchant, s.PDef).ToString());
                    }
                    else
                    {
                        Stat(95, Def(crystal, p.Enchant, s.ShieldPDef).ToString());
                        Stat(317, s.ShieldRate.ToString());
                        Stat(97, s.Avoid.ToString());
                    }
                    xL = 10;
                    break;
                case 2:
                    Header(type);
                    Stat(99, Def(crystal, p.Enchant, s.MDef).ToString());
                    xL = 10;
                    break;
            }
            var desc = (s.Description ?? "").Replace("\\n", "\n");
            void Desc()
            {
                if (desc.Length == 0) return;
                y += 4 + H;
                o.Add(new Line { Kind = "desc", X = 10, Y = y, Value = desc });
                y += descHeight(desc);
            }
            switch (p.ItemType)
            {
                case 0:
                case 1:
                case 2:
                    o.Add(new Line { Kind = "stat", X = 10, Y = y, Label = ss(52), Value = s.Weight.ToString() });
                    Desc();
                    break;
                case 3:
                    o.Add(new Line { Kind = "header", X = 46, Y = y, Value = type });
                    Desc();
                    break;
                case 5:
                    // xL nunca volta a 10 nesse ramo: o peso fica em x 46
                    o.Add(new Line { Kind = "stat", X = xL, Y = y, Label = ss(52), Value = s.Weight.ToString() });
                    Desc();
                    break;
                default:
                    Desc();
                    break;
            }
            return (o, y);
        }
    }
}
