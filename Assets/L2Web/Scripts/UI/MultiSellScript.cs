// MultiSellWnd.uc (07 §5.4) sem Unity: as entradas montadas pelos eventos EV_MultiSell*, o clique na lista, o OK com o
// dialogo de confirmacao (systemmsg 1383) e o RequestMultiSellChoose.
using System;
using System.Collections.Generic;

namespace L2Web.UI
{
    public sealed class MultiSellScript
    {
        public const int DialogOk = 1122;

        public sealed class Product
        {
            public int ClassId, Reserved, SlotBitType, ItemType, ItemNum, RefineryOp1, RefineryOp2;
        }

        public sealed class Needed
        {
            public int Id, Count, Enchant, CrystalType, ItemType, RefineryOp1, RefineryOp2;
            public string Name = "", IconName = "";
        }

        public sealed class Entry
        {
            public int MultiSellType;
            public int NeededItemNum;
            public readonly List<Product> ItemInfoList = new();
            public readonly List<Needed> NeededItemList = new();
        }

        public readonly List<Entry> ItemList = new();
        public int ShopId;
        public int PreItemList = -1;
        public Func<int, string> SysString = _ => "";
        public Func<int, string> ItemName = _ => "";
        public Func<int, string> ItemIcon = _ => "";
        public Func<int, int> ItemDataType = _ => 0;
        public Func<int, int> ItemCrystalType = _ => 0;

        static int Int(string p, string k)
        {
            var v = 0;
            L2Param.ParseInt(p, k, ref v);
            return v;
        }

        public void Clear() => ItemList.Clear();

        public void HandleShopId(string p)
        {
            Clear();
            ShopId = Int(p, "shopID");
        }

        /// <summary>HandleItemList: index 0 abre uma entrada; index &gt; 0 junta na ultima com o mesmo ID e refinaria.</summary>
        public void HandleItemList(string p)
        {
            var info = new Product
            {
                ClassId = Int(p, "classID"), Reserved = Int(p, "ID"), SlotBitType = Int(p, "slotBitType"), ItemType = Int(p, "itemType"),
                ItemNum = Int(p, "itemCount"), RefineryOp1 = Int(p, "OutputRefineryOp1"), RefineryOp2 = Int(p, "OutputRefineryOp2"),
            };
            var index = Int(p, "index");
            var type = Int(p, "type");
            if (index == 0)
            {
                var e = new Entry { MultiSellType = type, NeededItemNum = 1 };
                e.ItemInfoList.Add(info);
                ItemList.Add(e);
            }
            else if (index > 0)
            {
                for (var i = ItemList.Count - 1; i >= 0; i--)
                {
                    var f = ItemList[i].ItemInfoList[0];
                    if (f.Reserved != info.Reserved || f.RefineryOp1 != info.RefineryOp1 || f.RefineryOp2 != info.RefineryOp2) continue;
                    var e = ItemList[i];
                    while (e.ItemInfoList.Count <= index) e.ItemInfoList.Add(null);
                    e.MultiSellType = type;
                    e.ItemInfoList[index] = info;
                    e.NeededItemNum++;
                    break;
                }
            }
        }

        /// <summary>HandleNeededItemList: -100 = pontos do PC cafe (ss1277), -200 = reputacao do cla (ss1311).</summary>
        public void HandleNeededItemList(string p)
        {
            var id = Int(p, "ID");
            var op1 = Int(p, "refineryOp1");
            var op2 = Int(p, "refineryOp2");
            var item = new Needed
            {
                Id = Int(p, "ClassID"), Count = Int(p, "count"), Enchant = Int(p, "enchant"), RefineryOp1 = Int(p, "inputRefineryOp1"),
                RefineryOp2 = Int(p, "inputRefineryOp2"),
            };
            if (item.Id == -100)
            {
                item.Name = SysString(1277);
                item.IconName = "icon.etc_i.etc_pccafe_point_i00";
                item.Enchant = 0;
                item.ItemType = -1;
                item.Id = 0;
            }
            else if (item.Id == -200)
            {
                item.Name = SysString(1311);
                item.IconName = "icon.etc_i.etc_bloodpledge_point_i00";
                item.Enchant = 0;
                item.ItemType = -1;
                item.Id = 0;
            }
            else
            {
                item.Name = ItemName(item.Id);
                item.IconName = ItemIcon(item.Id);
            }
            for (var i = ItemList.Count - 1; i >= 0; i--)
            {
                var f = ItemList[i].ItemInfoList[0];
                if (f.Reserved != id || f.RefineryOp1 != op1 || f.RefineryOp2 != op2) continue;
                // o script sobrescreve o tipo (inclusive o -1 dos pontos) com o GetItemDataType do id (0 para os pontos)
                item.ItemType = ItemDataType(item.Id);
                item.CrystalType = ItemCrystalType(item.Id);
                ItemList[i].NeededItemList.Add(item);
                break;
            }
        }

        /// <summary>OnClickItem: quantidade "1" travada (tipo 0) ou editavel (tipo 1); trocar de linha fecha o dialogo dele.</summary>
        public (string count, bool editable, bool hideDialog)? Click(int index, bool dialogIsMine)
        {
            if (index < 0 || index >= ItemList.Count) return null;
            var t = ItemList[index].MultiSellType;
            var hide = PreItemList != index && dialogIsMine;
            return t == 0 ? ("1", false, hide) : t == 1 ? ("1", true, hide) : ("", true, hide);
        }

        /// <summary>HandleOKButton: com uma linha escolhida guarda (indice, quantidade) e pede o dialogo DIALOG_Warning sm1383.</summary>
        public (int index, int count)? Ok(int selected, string countText)
        {
            if (selected < 0) return null;
            int.TryParse(countText, out var n);
            PreItemList = selected;
            return (selected, n);
        }

        /// <summary>HandleDialogOK: param do RequestMultiSellChoose (ShopID, ItemID, RefineryOp1, RefineryOp2, ItemCount).</summary>
        public (int shop, int itemId, int op1, int op2, int count)? Choose(int index, int count)
        {
            if (index < 0 || index >= ItemList.Count) return null;
            var f = ItemList[index].ItemInfoList[0];
            return (ShopId, f.Reserved, f.RefineryOp1, f.RefineryOp2, count);
        }

        /// <summary>
        /// UIDATA_ITEM.GetItemDataType (nw:0x10123620): o tipo do dado do cliente (*(dado+4)): 0 arma, 1 armadura ou joia
        /// (armorgrp), 2 etc (etcitemgrp); id sem dado = 0.
        /// </summary>
        public static int DataType(ItemStats s, bool etc) => s != null && s.Weapon ? 0 : s != null && s.Armor ? 1 : etc ? 2 : 0;

        /// <summary>
        /// ItemInfo de uma linha da ItemList (popupType Inventory): HandleItemList pede UIDATA_ITEM.GetItemInfo(classID)
        /// (nw:0x10123940: nome, nome adicional, descricao e os campos do dado pelo tipo; ServerID, Enchanted e MpBonus nao
        /// sao preenchidos) e por cima poe o ID da entrada (Reserved), slotBitType, itemType, itemCount e a refinaria do
        /// pacote; com durabilidade &gt; 0 a atual fica cheia (MultiSellWnd.uc:164-190).
        /// </summary>
        public static TooltipItem ListTooltip(Product p, string name, string addName, string desc, ItemStats s, L2TooltipData.EtcItemRecord etc)
        {
            var t = new TooltipItem { ClassId = p.ClassId, CurrentDurability = 0 };
            var kind = s != null && s.Weapon ? 0 : s != null && s.Armor ? 1 : etc != null ? 2 : -1;
            if (p.ClassId >= 0 && kind >= 0)
            {
                t.Name = name ?? "";
                t.AdditionalName = addName ?? "";
                t.Description = (desc ?? "").Replace("\\n", "\n");
                switch (kind)
                {
                    case 0:
                        t.Weight = s.Weight;
                        t.WeaponType = s.WeaponType;
                        t.PhysicalDamage = s.PAtk;
                        t.MagicalDamage = s.MAtk;
                        t.ShieldDefense = s.ShieldPDef;
                        t.ShieldDefenseRate = s.ShieldRate;
                        t.Durability = s.Durability;
                        t.CurrentDurability = -1;
                        t.CrystalType = s.CrystalType;
                        t.AttackSpeed = s.Speed;
                        t.MpConsume = s.MpConsume;
                        t.AvoidModify = s.Avoid;
                        t.SoulshotCount = s.SoulShot;
                        t.SpiritshotCount = s.SpiritShot;
                        break;
                    case 1:
                        t.Weight = s.Weight;
                        t.Durability = s.Durability;
                        t.CrystalType = s.CrystalType;
                        t.ArmorType = s.ArmorType;
                        t.AvoidModify = s.Avoid;
                        t.PhysicalDefense = s.PDef;
                        t.MagicalDefense = s.MDef;
                        break;
                    case 2:
                        t.Weight = etc.Weight;
                        t.Durability = etc.Durability;
                        t.CrystalType = etc.CrystalType;
                        t.ConsumeType = etc.ConsumeType;
                        t.ItemSubType = etc.EtcItemType;
                        break;
                }
            }
            t.Reserved = p.Reserved;
            t.SlotBitType = p.SlotBitType;
            t.ItemType = p.ItemType;
            t.ItemNum = p.ItemNum;
            t.RefineryOp1 = p.RefineryOp1;
            t.RefineryOp2 = p.RefineryOp2;
            if (t.Durability > 0) t.CurrentDurability = t.Durability;
            return t;
        }

        /// <summary>
        /// NCNameCtrl::SetNameData modo 1 (nw:0x1004b310): o tooltip "Inventory" dos nomes da MultiSellItemInfo e da
        /// MultiSellNeededItem sai de um NCItem novo (construtor FUN_1002cd30) com so nome, ClassID, ItemType, Enchanted,
        /// CrystalType e ItemNum; o resto fica no padrao do construtor: 0, e -1 em WeaponType, ArmorType, Reserved,
        /// RefineryOp1/2 e CurrentDurability (sem nome adicional, descricao, peso nem atributos).
        /// </summary>
        public static TooltipItem NameTooltip(string name, int classId, int itemType, int enchant, int crystal, int count) => new()
        {
            Name = name ?? "", ClassId = classId, ItemType = itemType, Enchanted = enchant, CrystalType = crystal, ItemNum = count,
            ItemSubType = -1, WeaponType = -1, ArmorType = -1, Reserved = -1, Level = -1, RefineryOp1 = -1, RefineryOp2 = -1, CurrentDurability = -1,
        };

        public void OnEvent(int id, string p)
        {
            switch (id)
            {
                case Ev.EV_MultiSellShopID: HandleShopId(p); break;
                case Ev.EV_MultiSellItemList: HandleItemList(p); break;
                case Ev.EV_MultiSellNeededItemList: HandleNeededItemList(p); break;
            }
        }
    }
}
