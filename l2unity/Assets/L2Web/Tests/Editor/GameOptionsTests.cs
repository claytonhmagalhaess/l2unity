// Aba Game do OptionWnd (04 secao 2.5; nwindow/00002.c: GL2Show*Name, GL2HideDropMesh, GIsArrowMode...) e o cursor
// (nwindow FUN_10070d60 / FUN_10164e80): regras de nome por tipo de entidade e tipo de cursor pelo objeto sob o mouse.
using L2Web.UI;
using L2Web.World;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class GameOptionsTests
    {
        [Test]
        public void Nomes_PorOpcao()
        {
            var w = new World.World { SelfClanId = 7, IsPartyMember = id => id == 2 };
            var self = new Entity(1, "self");
            var party = new Entity(2, "player") { ClanId = 0 };
            var clan = new Entity(3, "player") { ClanId = 7 };
            var other = new Entity(4, "player") { ClanId = 9 };
            var npc = new Entity(5, "npc");
            var item = new Entity(6, "item");
            Assert.IsTrue(w.NameVisible(self));
            Assert.IsTrue(w.NameVisible(party));
            Assert.IsTrue(w.NameVisible(item));
            w.ShowMyName = false;
            Assert.IsFalse(w.NameVisible(self));
            w.ShowNpcName = false;
            Assert.IsFalse(w.NameVisible(npc));
            // GroupName e o mestre dos tres de "Other PCs"
            w.ShowPartyName = false;
            Assert.IsFalse(w.NameVisible(party));
            Assert.IsTrue(w.NameVisible(clan));
            w.ShowClanName = false;
            Assert.IsFalse(w.NameVisible(clan));
            Assert.IsTrue(w.NameVisible(other));
            w.ShowOtherName = false;
            Assert.IsFalse(w.NameVisible(other));
            w.ShowOtherName = w.ShowClanName = w.ShowPartyName = true;
            w.ShowGroupName = false;
            Assert.IsFalse(w.NameVisible(party));
            Assert.IsFalse(w.NameVisible(clan));
            Assert.IsFalse(w.NameVisible(other));
        }

        [Test]
        public void Cursor_TipoPeloObjeto()
        {
            Assert.AreEqual(L2Cursor.Normal, L2Cursor.TypeFor(null, false, false, false, false));
            Assert.AreEqual(L2Cursor.PickUp, L2Cursor.TypeFor(new Entity(1, "item"), false, false, false, false));
            // sobre a UI: normal, seja o que for que esteja atras
            Assert.AreEqual(L2Cursor.Normal, L2Cursor.TypeFor(new Entity(1, "item"), true, false, false, false));
            Assert.AreEqual(L2Cursor.Attack, L2Cursor.TypeFor(new Entity(2, "npc") { Attackable = true }, false, false, false, false));
            Assert.AreEqual(L2Cursor.Talk, L2Cursor.TypeFor(new Entity(2, "npc") { Attackable = false }, false, false, false, false));
            var pc = new Entity(3, "player");
            Assert.AreEqual(L2Cursor.Normal, L2Cursor.TypeFor(pc, false, false, false, false));
            Assert.AreEqual(L2Cursor.Attack, L2Cursor.TypeFor(pc, false, true, false, false)); // eu com flag
            Assert.AreEqual(L2Cursor.Attack, L2Cursor.TypeFor(new Entity(3, "player") { PvpFlag = 1 }, false, false, false, false));
            Assert.AreEqual(L2Cursor.Attack, L2Cursor.TypeFor(new Entity(3, "player") { Karma = 50 }, false, false, false, false));
            Assert.AreEqual(L2Cursor.Talk, L2Cursor.TypeFor(new Entity(3, "player") { StoreType = 1 }, false, false, false, false));
            Assert.AreEqual(L2Cursor.Talk, L2Cursor.TypeFor(pc, false, false, true, false));
            Assert.AreEqual(L2Cursor.Talk, L2Cursor.TypeFor(pc, false, false, false, true));
        }
    }
}
