// #0026 (inventario): ramos do InventoryWnd.uc (OnDropItem :184-345, OnDropItemSource :347-383, UseItem :953-976,
// HandleDialogOK :1100-1140) e a reordenacao (SwapItems em sequencia).
using System.Collections.Generic;
using L2Web.UI;
using NUnit.Framework;
using It = L2Web.UI.InventoryScript.Item;

namespace L2Web.Tests
{
    public class InventoryTests
    {
        static It Sword(string src = "InventoryItem") => new() { Src = src, ServerId = 11, ClassId = 2369, ItemType = 0, SlotBitType = 0x80, ItemNum = 1, Name = "Sword" };
        static It Shots(long n = 500, long all = 0, string src = "InventoryItem") => new() { Src = src, ServerId = 13, ClassId = 1835, ItemType = 5, ConsumeType = 2, ItemNum = n, AllItemCount = all, Name = "Soulshot" };

        [Test]
        public void UseItem_ReceitaEPopupConfirmam()
        {
            var s = new InventoryScript();
            Assert.AreEqual(("use", 11), (s.UseItem(Sword()).Kind, s.UseItem(Sword()).ServerId));
            var r = s.UseItem(new It { ServerId = 20, Recipe = true, Name = "Recipe" });
            Assert.AreEqual(("dialog", EDialogType.Warning, 798, InventoryScript.DialogUseRecipe), (r.Kind, r.DlgType, r.MsgId, r.DlgId));
            var p = s.UseItem(new It { ServerId = 21, PopMsgNum = 1500 });
            Assert.AreEqual((1500, InventoryScript.DialogPopup), (p.MsgId, p.DlgId));
            Assert.AreEqual(("use", 20), (s.DialogOk(InventoryScript.DialogUseRecipe, 20, 0, "").Kind, s.DialogOk(InventoryScript.DialogUseRecipe, 20, 0, "").ServerId));
        }

        [Test]
        public void Soltar_EquipamentoEDesequipar()
        {
            var s = new InventoryScript();
            Assert.AreEqual("use", s.Drop("EquipItem_RHand", Sword()).Kind, "inventario -> slot de equipamento = RequestUseItem");
            Assert.IsNull(s.Drop("EquipItem_RHand", Shots()), "etcitem nao equipa");
            Assert.IsNull(s.Drop("EquipItem_LHand", Sword("EquipItem_RHand")), "equipamento -> equipamento: nada");
            var u = s.Drop("InventoryItem", Sword("EquipItem_RHand"));
            Assert.AreEqual(("unequip", 0x80), (u.Kind, u.SlotBitType));
            Assert.IsNull(s.Drop("InventoryItem", Sword("SkillItem")), "origem que nao e item");
        }

        [Test]
        public void Soltar_LixeiraComQuantidadeOuAlt()
        {
            var s = new InventoryScript();
            var one = s.Drop("TrashButton", Sword());
            Assert.AreEqual((EDialogType.Warning, 74, InventoryScript.DialogDestroyItem), (one.DlgType, one.MsgId, one.DlgId));
            var ask = s.Drop("TrashButton", Shots());
            Assert.AreEqual((EDialogType.NumberPad, 73, 500L), (ask.DlgType, ask.MsgId, ask.Param));
            var all = s.Drop("TrashButton", Shots(500, 500));
            Assert.AreEqual((EDialogType.Warning, 74, 500L, InventoryScript.DialogDestroyItemAll), (all.DlgType, all.MsgId, all.Reserved2, all.DlgId));
            Assert.AreEqual(("destroy", 13L), (s.DialogOk(InventoryScript.DialogDestroyItemAskCount, 13, 0, "13").Kind, s.DialogOk(InventoryScript.DialogDestroyItemAskCount, 13, 0, "13").Count));
            Assert.AreEqual(500L, s.DialogOk(InventoryScript.DialogDestroyItemAll, 13, 500, "").Count);
            Assert.AreEqual(1L, s.DialogOk(InventoryScript.DialogDestroyItem, 11, 0, "").Count);
        }

        [Test]
        public void Soltar_Cristalizar()
        {
            var s = new InventoryScript();
            Assert.IsNull(s.Drop("CrystallizeButton", Sword()), "sem a habilidade");
            s.HasCrystallize = () => true;
            s.IsCrystallizable = id => id == 2369;
            var c = s.Drop("CrystallizeButton", Sword());
            Assert.AreEqual((336, InventoryScript.DialogCrystallize), (c.MsgId, c.DlgId));
            Assert.IsNull(s.Drop("CrystallizeButton", Shots()));
            Assert.IsNull(s.Drop("CrystallizeButton", Sword("QuestItem")), "so do inventario ou do equipamento");
            Assert.AreEqual("crystallize", s.DialogOk(InventoryScript.DialogCrystallize, 11, 0, "").Kind);
        }

        [Test]
        public void LargarNoMundo()
        {
            var s = new InventoryScript();
            Assert.AreEqual((400, InventoryScript.DialogDropItem), (s.DropToWorld(Sword()).MsgId, s.DropToWorld(Sword()).DlgId));
            Assert.AreEqual((71, EDialogType.NumberPad), (s.DropToWorld(Shots()).MsgId, s.DropToWorld(Shots()).DlgType));
            Assert.AreEqual((1833, 500L), (s.DropToWorld(Shots(500, 500)).MsgId, s.DropToWorld(Shots(500, 500)).Reserved2));
            Assert.IsNull(s.DropToWorld(Shots(5, 0, "PetInvenWnd")));
            Assert.AreEqual(1L, s.DialogOk(InventoryScript.DialogDropItemAskCount, 13, 0, "").Count, "sem numero larga 1");
            Assert.AreEqual(7L, s.DialogOk(InventoryScript.DialogDropItemAskCount, 13, 0, "7").Count);
        }

        [Test]
        public void DoPet()
        {
            var s = new InventoryScript();
            var one = s.Drop("InventoryItem", Sword("PetInvenWnd"));
            Assert.AreEqual(("getpet", 1L, false), (one.Kind, one.Count, one.Equip));
            Assert.AreEqual(("getpet", 500L), (s.Drop("InventoryItem", Shots(500, 500, "PetInvenWnd")).Kind, s.Drop("InventoryItem", Shots(500, 500, "PetInvenWnd")).Count));
            Assert.AreEqual((72, InventoryScript.DialogDropItemPetAskCount), (s.Drop("InventoryItem", Shots(500, 0, "PetInvenWnd")).MsgId, s.Drop("InventoryItem", Shots(500, 0, "PetInvenWnd")).DlgId));
            Assert.IsTrue(s.Drop("EquipItem_Chest", Sword("PetInvenWnd")).Equip);
        }

        [Test]
        public void Reordenar()
        {
            var l = new List<int> { 1, 2, 3, 4, 5 };
            InventoryScript.Reorder(l, 0, 3);
            CollectionAssert.AreEqual(new[] { 2, 3, 4, 1, 5 }, l);
            InventoryScript.Reorder(l, 4, 0);
            CollectionAssert.AreEqual(new[] { 5, 2, 3, 4, 1 }, l);
            InventoryScript.Reorder(l, 1, -1);
            CollectionAssert.AreEqual(new[] { 5, 3, 4, 1, 2 }, l, "solto fora de um slot: para o fim");
        }
    }
}
