// #0050: tooltip da multisell e bloco de conjunto. ItemName-e.dat com os 3 pares de conjunto (FL2GameData +0x68/+0x74 a
// cada 0x18, +0xb0/+0xb4), etcitemgrp.dat (GetItemInfo tipo 2, nw:0x10123940), o bloco do ToolTip.uc:727-805 com as
// Conditions Equip/SetEffect/EnchantEffect (DrawItemList, 00003.c:14897-15290), o ItemInfo da ItemList (GetItemInfo +
// HandleItemList) e o NCItem reduzido do NCNameCtrl::SetNameData (nw:0x1004b310, construtor FUN_1002cd30).
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using L2Web.UI;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class MultiSellTooltipTests
    {
        Func<int, string> oldSs;
        Func<int, int, int[]> oldIds;
        Func<int, int, string> oldEff;
        Func<int, string> oldEnchEff, oldName;
        Func<int, int> oldEnchCount, oldEquipCls;
        Func<int, bool> oldEquipSrv;
        Func<TooltipItem, bool> oldMagic;

        // conjunto de teste: peito 6379 (pecas 6379,6382,6380,6381), escudo extra 6377 no par 1, encantamento 6
        static readonly Dictionary<int, string> Names = new()
        {
            [6379] = "Draconic Leather Armor", [6380] = "Draconic Leather Gloves", [6381] = "Draconic Leather Boots",
            [6382] = "Draconic Leather Helmet", [6377] = "Imperial Crusader Shield",
        };

        [SetUp]
        public void Fake()
        {
            oldSs = L2Tooltip.SysString;
            oldIds = L2Tooltip.SetItemIdList;
            oldEff = L2Tooltip.SetItemEffect;
            oldEnchEff = L2Tooltip.SetItemEnchantEffect;
            oldEnchCount = L2Tooltip.SetItemEnchantCount;
            oldName = L2Tooltip.ItemNameOf;
            oldEquipSrv = L2Tooltip.EquippedServer;
            oldEquipCls = L2Tooltip.EquippedClassEnchant;
            oldMagic = L2Tooltip.IsMagicalArmor;
            L2Tooltip.SysString = id => "#" + id;
            L2Tooltip.SetItemIdList = (id, idx) => id != 6379 ? Array.Empty<int>() : idx == 0 ? new[] { 6379, 6382, 6380, 6381 } : idx == 1 ? new[] { 6377 } : Array.Empty<int>();
            L2Tooltip.SetItemEffect = (id, idx) => id != 6379 ? "" : idx == 0 ? "DEX+1, STR+1." : idx == 1 ? "Poison -80%." : "";
            L2Tooltip.SetItemEnchantEffect = id => id == 6379 ? "Enchant 6: M. Def." : "";
            L2Tooltip.SetItemEnchantCount = id => id == 6379 ? 6 : -1;
            L2Tooltip.ItemNameOf = id => Names.TryGetValue(id, out var n) ? n : "";
            L2Tooltip.EquippedServer = _ => false;
            L2Tooltip.EquippedClassEnchant = _ => -1;
            L2Tooltip.IsMagicalArmor = it => it.ClassId == 2407 || it.ClassId == 0 && it.ArmorType == 3;
        }

        [TearDown]
        public void Restore()
        {
            L2Tooltip.SysString = oldSs;
            L2Tooltip.SetItemIdList = oldIds;
            L2Tooltip.SetItemEffect = oldEff;
            L2Tooltip.SetItemEnchantEffect = oldEnchEff;
            L2Tooltip.SetItemEnchantCount = oldEnchCount;
            L2Tooltip.ItemNameOf = oldName;
            L2Tooltip.EquippedServer = oldEquipSrv;
            L2Tooltip.EquippedClassEnchant = oldEquipCls;
            L2Tooltip.IsMagicalArmor = oldMagic;
        }

        static string[] Seq(CustomTooltip t) =>
            t.DrawList.Select(d => d.Type == DrawItemType.Blank ? "[B" + d.BlankHeight + "]" : d.Id > 0 ? "#" + d.Id : d.Text).ToArray();

        static string Rgb(Color32 c) => $"{c.r},{c.g},{c.b}";

        static ItemStats Draconic() => new()
        {
            Armor = true, Weight = 4950, Durability = -1, ArmorType = 1, CrystalType = 5, PDef = 249, MDef = 0, MpBonus = 0, BodyPart = 0x8000,
        };

        // ------------------------------------------------------------ ItemList (GetItemInfo + HandleItemList)
        [Test]
        public void Lista_ArmaduraComOsDadosDoClienteEOConjunto()
        {
            var p = new MultiSellScript.Product { ClassId = 6379, Reserved = 12, SlotBitType = 0x8000, ItemType = 1, ItemNum = 1 };
            var it = MultiSellScript.ListTooltip(p, "Draconic Leather Armor", "", "Full body armor.", Draconic(), null);
            Assert.AreEqual((0, 12, 0x8000, 1, 1L), (it.ServerId, it.Reserved, it.SlotBitType, it.ItemType, it.ItemNum), "campos do pacote por cima, sem ServerID");
            Assert.AreEqual((249, 4950, 5, 1, 0), (it.PhysicalDefense, it.Weight, it.CrystalType, it.ArmorType, it.Enchanted));
            var t = L2Tooltip.Item(it);
            CollectionAssert.AreEqual(new[]
            {
                "Draconic Leather Armor", " ", "`grades`",
                "#542 / #245", "#95", " : ", "249", "#52", " : ", "4950",
                "Full body armor.",
                "Draconic Leather Helmet", "Draconic Leather Gloves", "Draconic Leather Boots", "DEX+1, STR+1.",
                "Imperial Crusader Shield", "Poison -80%.",
                "Enchant 6: M. Def.",
            }, Seq(t));
            Assert.AreEqual(L2Tooltip.MinimumWidth, t.MinimumWidth);
            var piece = t.DrawList[11];
            Assert.AreEqual(("112,115,123", 6, true, true), (Rgb(piece.Color), piece.OffY, piece.LineBreak, piece.OneLine), "peca: cinza, uma linha");
            var eff = t.DrawList[14];
            Assert.AreEqual(("128,127,103", false), (Rgb(eff.Color), eff.OneLine), "efeito: quebra de linha");
            Assert.AreEqual("74,92,104", Rgb(t.DrawList.Last().Color));
        }

        [Test]
        public void Lista_RobeSemMpBonusNoGetItemInfo()
        {
            // GetItemInfo tipo 1 nao copia o MpBonus: a linha ss388 sai com 0 (IsMagicalArmor pelo ClassID)
            var s = new ItemStats { Armor = true, Weight = 2450, ArmorType = 3, CrystalType = 4, PDef = 139, MpBonus = 665 };
            var it = MultiSellScript.ListTooltip(new MultiSellScript.Product { ClassId = 2407, SlotBitType = 0x8000, ItemType = 1, ItemNum = 1 }, "Dark Crystal Robe", "", "", s, null);
            CollectionAssert.AreEqual(new[] { "Dark Crystal Robe", " ", "`gradea`", "#542 / #244", "#388", " : ", "0", "#95", " : ", "139", "#52", " : ", "2450" },
                Seq(L2Tooltip.Item(it)));
        }

        [Test]
        public void Lista_EtcEmpilhavelEItemSombra()
        {
            var etc = new L2TooltipData.EtcItemRecord { Id = 1835, Weight = 4, ConsumeType = 2, CrystalType = 0 };
            var it = MultiSellScript.ListTooltip(new MultiSellScript.Product { ClassId = 1835, ItemType = 5, ItemNum = 1000 }, "Soulshot: No Grade", "", "", null, etc);
            CollectionAssert.AreEqual(new[] { "Soulshot: No Grade", " (1,000)", "#52", " : ", "4" }, Seq(L2Tooltip.Item(it)));

            // arma sombra: durabilidade cheia (MultiSellWnd.uc:184-185)
            var w = new ItemStats { Weapon = true, Weight = 1000, Durability = 60, WeaponType = 1, CrystalType = 2, PAtk = 100, MAtk = 50, Speed = 379 };
            var sh = MultiSellScript.ListTooltip(new MultiSellScript.Product { ClassId = 6310, SlotBitType = 0x80, ItemType = 0, ItemNum = 1 }, "Shadow Sword", "", "", w, null);
            Assert.AreEqual((60, 60), (sh.CurrentDurability, sh.Durability));
            var seq = Seq(L2Tooltip.Item(sh));
            CollectionAssert.IsSubsetOf(new[] { "#1492", "#1493", " 60/60", "#1491" }, seq);
        }

        // ------------------------------------------------------------ NCNameCtrl (SetNameData modo 1)
        [Test]
        public void Nome_NCItemReduzido()
        {
            var a = MultiSellScript.NameTooltip("Draconic Leather Armor", 6379, 1, 0, 5, 1);
            Assert.AreEqual((-1, -1, -1, -1, 0, 0), (a.WeaponType, a.ArmorType, a.RefineryOp1, a.CurrentDurability, a.Weight, a.SlotBitType));
            CollectionAssert.AreEqual(new[]
            {
                "Draconic Leather Armor", " ", "`grades`", "#95", " : ", "0", "#52", " : ", "0",
                "Draconic Leather Helmet", "Draconic Leather Gloves", "Draconic Leather Boots", "DEX+1, STR+1.",
                "Imperial Crusader Shield", "Poison -80%.", "Enchant 6: M. Def.",
            }, Seq(L2Tooltip.Item(a)));

            // arma: sem tipo (WeaponType -1), 0, "Very Slow" e o cabecalho do aumento (RefineryOp -1)
            var w = L2Tooltip.Item(MultiSellScript.NameTooltip("Sword of Valhalla", 7722, 0, 3, 5, 1));
            CollectionAssert.AreEqual(new[]
            {
                "+3 ", "Sword of Valhalla", " ", "`grades`", "[B12]", "#1489",
                "#94", " : ", "0", "#98", " : ", "0", "#111", " : ", "#310", "#52", " : ", "0",
                "[B12]", "#1490", "#1491",
            }, Seq(w));
            Assert.AreEqual("187,181,138", Rgb(w.DrawList.Last().Color), "GetRefineryColor padrao");

            // ingrediente etc (GetItemDataType 2): ramo de acessorio
            CollectionAssert.AreEqual(new[] { "Gold Bar", "#99", " : ", "0", "#52", " : ", "0" },
                Seq(L2Tooltip.Item(MultiSellScript.NameTooltip("Gold Bar", 3470, 2, 0, 0, 20))));
        }

        [Test]
        public void TipoDoDado_ComoGetItemDataType()
        {
            Assert.AreEqual(0, MultiSellScript.DataType(new ItemStats { Weapon = true }, false));
            Assert.AreEqual(1, MultiSellScript.DataType(new ItemStats { Armor = true, BodyPart = 0x10 }, false), "joia = armorgrp = 1");
            Assert.AreEqual(2, MultiSellScript.DataType(null, true));
            Assert.AreEqual(0, MultiSellScript.DataType(null, false), "sem dado = 0");
        }

        // ------------------------------------------------------------ cores das Conditions
        [Test]
        public void Conjunto_CoresAtivasPelosEquipados()
        {
            var eq = new Dictionary<int, int>();
            L2Tooltip.EquippedServer = sid => sid == 900;
            L2Tooltip.EquippedClassEnchant = cls => eq.TryGetValue(cls, out var e) ? e : -1;
            var t = L2Tooltip.Item(new TooltipItem { ClassId = 6379, ServerId = 900, Name = "D", ItemType = 1, SlotBitType = 0x8000 });
            DrawItem Find(string s) => t.DrawList.First(d => d.Text == s);
            string C(string s) => Rgb(L2Tooltip.ConditionColor(Find(s)));

            eq[6379] = 0;
            eq[6380] = 0;
            Assert.AreEqual("176,185,205", C("Draconic Leather Gloves"), "peca equipada");
            Assert.AreEqual("112,115,123", C("Draconic Leather Boots"));
            Assert.AreEqual("128,127,103", C("DEX+1, STR+1."), "conjunto incompleto");

            eq[6381] = 6;
            eq[6382] = 7;
            Assert.AreEqual("183,178,122", C("DEX+1, STR+1."), "conjunto completo");
            Assert.AreEqual("128,127,103", C("Poison -80%."), "sem o escudo");
            Assert.AreEqual("74,92,104", C("Enchant 6: M. Def."), "pecas abaixo de +6");

            eq[6377] = 6;
            eq[6379] = 6;
            eq[6380] = 6;
            Assert.AreEqual("183,178,122", C("Poison -80%."));
            Assert.AreEqual("111,146,169", C("Enchant 6: M. Def."), "todas as pecas das 3 listas em +6");

            // na multisell o ServerID e 0: nada fica ativo
            L2Tooltip.EquippedServer = sid => sid == 900;
            var ms = L2Tooltip.Item(new TooltipItem { ClassId = 6379, ServerId = 0, Name = "D", ItemType = 1 });
            Assert.IsTrue(ms.DrawList.Where(d => d.Condition.Length > 0).All(d => Rgb(L2Tooltip.ConditionColor(d)) == Rgb(d.Color)));
        }

        // ------------------------------------------------------------ parsers dos .dat
        static byte[] Uni(string s)
        {
            var b = Encoding.Unicode.GetBytes(s);
            return BitConverter.GetBytes(b.Length).Concat(b).ToArray();
        }

        static byte[] Ascf(string s)
        {
            if (s.Length == 0) return new byte[] { 0 };
            var a = Encoding.ASCII.GetBytes(s);
            return new[] { (byte)(a.Length + 1) }.Concat(a).Concat(new byte[] { 0 }).ToArray();
        }

        [Test]
        public void ItemName_ParesDeConjunto()
        {
            var b = new List<byte>();
            b.AddRange(BitConverter.GetBytes(1));
            b.AddRange(BitConverter.GetBytes(6373));
            b.AddRange(Uni("Imperial Crusader Breastplate"));
            b.AddRange(Uni(""));
            b.AddRange(Ascf("Upper body."));
            b.AddRange(BitConverter.GetBytes(-1));
            foreach (var s in new[] { "6373,6374,6378", "STR+2.", "6377", "Poison -80%.", "", "" }) b.AddRange(Ascf(s));
            b.AddRange(BitConverter.GetBytes(6));
            b.AddRange(Ascf("Enchant 6."));
            var r = L2TooltipData.ParseItemNames(b.ToArray())[6373];
            Assert.AreEqual(("Imperial Crusader Breastplate", "Upper body.", -1), (r.Name, r.Desc, r.Popup));
            CollectionAssert.AreEqual(new[] { "6373,6374,6378", "6377", "" }, r.SetIds);
            CollectionAssert.AreEqual(new[] { "STR+2.", "Poison -80%.", "" }, r.SetEffects);
            Assert.AreEqual((6, "Enchant 6."), (r.EnchantCount, r.EnchantEffect));
            CollectionAssert.AreEqual(new[] { 6373, 6374, 6378 }, L2TooltipData.ParseIdList(r.SetIds[0]));
            CollectionAssert.IsEmpty(L2TooltipData.ParseIdList(""));
        }

        [Test]
        public void EtcItemGrp_CamposDoGetItemInfo()
        {
            var b = new List<byte>();
            b.AddRange(BitConverter.GetBytes(1));
            foreach (var v in new[] { 2, 1835, 0, 3, 8, 4, 0 }) b.AddRange(BitConverter.GetBytes(v));
            for (var k = 0; k < 6; k++) b.AddRange(Uni(k == 0 ? "dropitems.drop_soulshot_m00" : ""));
            b.AddRange(Uni("icon.etc_spirit_bullet_white_i00"));
            for (var k = 1; k < 5; k++) b.AddRange(Uni(""));
            foreach (var v in new[] { -1, 4, 18, 0, 0 }) b.AddRange(BitConverter.GetBytes(v));
            b.AddRange(BitConverter.GetBytes(1));
            b.AddRange(Uni("mesh"));
            b.AddRange(BitConverter.GetBytes(2));
            b.AddRange(Uni("tex1"));
            b.AddRange(Uni("tex2"));
            b.AddRange(Uni("ItemSound.itemdrop_shot"));
            b.AddRange(Uni(""));
            foreach (var v in new[] { 2, 0, 1 }) b.AddRange(BitConverter.GetBytes(v));
            var r = L2TooltipData.ParseEtcItems(b.ToArray())[1835];
            Assert.AreEqual(("icon.etc_spirit_bullet_white_i00", -1, 4, 18, 2, 0, 1), (r.Icon, r.Durability, r.Weight, r.Material, r.ConsumeType, r.EtcItemType, r.CrystalType));
        }

        /// <summary>Os .dat do cliente (shared): o peito Draconic e o Soulshot como no ItemName-e e no etcitemgrp.</summary>
        [Test]
        public void DatDoCliente_DraconicESoulshot()
        {
            var fn = GameData.ClientFile("ItemName-e.dat");
            var fe = GameData.ClientFile("etcitemgrp.dat");
            if (!File.Exists(fn) || !File.Exists(fe)) Assert.Ignore("sem os .dat do cliente");
            var names = L2TooltipData.ParseItemNames(L2Files.Decrypt(File.ReadAllBytes(fn)));
            Assert.AreEqual(11059, names.Count);
            var d = names[6379];
            Assert.AreEqual(("Draconic Leather Armor", "6379,6382,6380,6381", "", 6), (d.Name, d.SetIds[0], d.SetIds[1], d.EnchantCount));
            StringAssert.StartsWith("DEX+1, STR+1", d.SetEffects[0]);
            StringAssert.StartsWith("When all set items are enchanted by 6", d.EnchantEffect);
            Assert.AreEqual(("6377", "Chance to get Poison/Bleed attack -80%."), (names[6373].SetIds[1], names[6373].SetEffects[1]));
            Assert.AreEqual(180, names.Values.Count(r => r.SetIds[0].Length > 0));
            Assert.IsTrue(names.Values.All(r => r.SetIds[2].Length == 0 && r.SetEffects[2].Length == 0), "par 2 vazio no Interlude");

            var etc = L2TooltipData.ParseEtcItems(L2Files.Decrypt(File.ReadAllBytes(fe)));
            Assert.AreEqual(7294, etc.Count);
            Assert.AreEqual((4, 2), (etc[1835].Weight, etc[1835].ConsumeType), "Soulshot: peso 4, empilhavel");
            Assert.AreEqual(3, etc[57].ConsumeType, "Adena: asset");
            Assert.AreEqual(1, etc[1458].CrystalType, "Crystal: D-Grade");
        }
    }
}
