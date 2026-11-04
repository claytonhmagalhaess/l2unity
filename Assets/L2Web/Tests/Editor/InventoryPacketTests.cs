// Inventario e barra de atalhos (#0046, T2/T4): os envios campo a campo como o aCis os le (clientpackets/*.java do servidor
// do usuario, C:\Workspace-java\aCis_gameserver) e os recebidos como o aCis os escreve. O formato de cada envio tambem e
// conferido contra o engine.dll em RequestFormatTests, e os tipos lidos de cada recebido em ReceivedLayoutTests.
using L2Web.Net;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class InventoryPacketTests
    {
        static void Bytes(PacketWriter expected, byte[] actual) => CollectionAssert.AreEqual(expected.Bytes(), actual);

        [Test]
        public void RequestUnEquipItem_SlotDoItem() => Bytes(new PacketWriter().C(0x11).D(0x4000), UiPackets.RequestUnEquipItem(0x4000));

        [Test]
        public void RequestDropItem_ObjetoQuantidadeEPonto() =>
            Bytes(new PacketWriter().C(0x12).D(0x10000001).D(5).D(-71000).D(258000).D(-3100), UiPackets.RequestDropItem(0x10000001, 5, -71000, 258000, -3100));

        [Test]
        public void RequestDestroyItem_ObjetoEQuantidade() => Bytes(new PacketWriter().C(0x59).D(0x10000002).D(3), UiPackets.RequestDestroyItem(0x10000002, 3));

        [Test]
        public void RequestCrystallizeItem_ObjetoEQuantidade() => Bytes(new PacketWriter().C(0x72).D(0x10000003).D(1), UiPackets.RequestCrystallizeItem(0x10000003, 1));

        [Test]
        public void RequestShortCutReg_TipoSlotIdEUserShortCut()
        {
            // o aCis le type, slot (+ pagina*12), id, characterType
            Bytes(new PacketWriter().C(0x33).D(2).D(13).D(1216).D(1), UiPackets.ShortCutReg("skill", 13, 1216));
            Bytes(new PacketWriter().C(0x33).D(3).D(0).D(16).D(2), UiPackets.ShortCutReg("action", 0, 16, 2));
            Bytes(new PacketWriter().C(0x33).D(5).D(1).D(7).D(1), UiPackets.ShortCutReg("recipe", 1, 7));
        }

        [Test]
        public void RequestShortCutDel_Slot() => Bytes(new PacketWriter().C(0x35).D(25), UiPackets.ShortCutDel(25));

        [Test]
        public void RequestAutoSoulShot_ItemELigado()
        {
            Bytes(new PacketWriter().C(0xd0).H(0x05).D(1835).D(1), UiPackets.RequestAutoSoulShot(1835, true));
            Bytes(new PacketWriter().C(0xd0).H(0x05).D(1835).D(0), UiPackets.RequestAutoSoulShot(1835, false));
        }

        [Test]
        public void ShortCutRegister_ItemSkillEMacroComoOAcis()
        {
            // ShortCutRegister.writeImpl: type, slot + page*12, e por tipo
            var item = UiPackets.ParseShortCutRegister(new PacketReader(new PacketWriter().D(1).D(14).D(0x10000005).D(1).D(-1).Bytes()));
            Assert.AreEqual(("item", 14, 0x10000005), (item.Type, item.Slot, item.Id));
            var r = new PacketReader(new PacketWriter().D(2).D(3).D(1216).D(4).C(0).D(1).Bytes());
            var skill = UiPackets.ParseShortCutRegister(r);
            Assert.AreEqual(("skill", 3, 1216, 4), (skill.Type, skill.Slot, skill.Id, skill.Level));
            Assert.AreEqual(0, r.Remaining);
            var macro = UiPackets.ParseShortCutRegister(new PacketReader(new PacketWriter().D(4).D(119).D(1000).D(1).Bytes()));
            Assert.AreEqual(("macro", 119, 1000), (macro.Type, macro.Slot, macro.Id));
            var recipe = UiPackets.ParseShortCutRegister(new PacketReader(new PacketWriter().D(5).D(2).D(7).D(1).Bytes()));
            Assert.AreEqual(("recipe", 2, 7), (recipe.Type, recipe.Slot, recipe.Id));
        }

        [Test]
        public void ExAutoSoulShot_ItemELigado()
        {
            var a = UiPackets.ParseExAutoSoulShot(new PacketReader(new PacketWriter().D(3947).D(1).Bytes()));
            Assert.AreEqual((3947, true), (a.ItemId, a.On));
        }

        [Test]
        public void InventoryUpdate_MudancaEItemComoOAcis()
        {
            // InventoryUpdate.writeImpl: H n, por item H change, H type1, D obj, D id, D count, H type2, H custom1, H equipped,
            // D bodyPart, H enchant, H custom2, D augmentation, D mana
            var w = new PacketWriter().H(1);
            w.H(2).H(0).D(0x10000007).D(57).D(1500).H(4).H(0).H(0).D(0).H(0).H(0).D(0).D(-1);
            var r = new PacketReader(w.Bytes());
            var l = UiPackets.ParseInventoryUpdate(r);
            Assert.AreEqual(0, r.Remaining);
            Assert.AreEqual((2, 0x10000007, 57, 1500, 4, -1), (l[0].Change.Value, l[0].ObjectId, l[0].ItemId, l[0].Count, l[0].Type2, l[0].Mana));
        }

        [Test]
        public void DropItem_QuemLargouEOItem()
        {
            var r = new PacketReader(new PacketWriter().D(0x10000001).D(0x10000008).D(57).D(1).D(2).D(3).D(1).D(100).Bytes());
            var d = UiPackets.ParseDropItem(r);
            Assert.AreEqual((0x10000001, 0x10000008, 57, 1, 2, 3, 100), (d.DropperId, d.ObjectId, d.ItemId, d.X, d.Y, d.Z, d.Count));
        }
    }
}
