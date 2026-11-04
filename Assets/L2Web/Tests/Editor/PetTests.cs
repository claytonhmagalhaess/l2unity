// #0031 (pet e servo, spec 06 §5-6): PetStatusWnd/SummonedStatusWnd/PetWnd/SummonedWnd.uc — GetPetInfo do PetInfo e do
// PetStatusUpdate, tipo de cada barrinha, barras e peso, textos, inventario do pet (WorkType pelo classID), dar item (sm72 ou
// Alt), nome (MsgNo 80), lista de acoes (categoria e NPC), grade de buffs e o tempo do servo.
using System.Collections.Generic;
using System.Linq;
using L2Web.Net;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class PetTests
    {
        static PetInfo Wolf() => new()
        {
            SummonType = 2, ObjectId = 500, NpcId = 12077, Name = "Lobo", Level = 15, Hp = 50, MaxHp = 200, Mp = 30, MaxMp = 60,
            Fatigue = 300, MaxFatigue = 600, CarringWeight = 700, CarryWeight = 1000, CurExp = 150, MinExp = 100, MaxExp = 300, Sp = 7, PAtk = 33,
        };

        [Test]
        public void Dados_PetInfoEStatusUpdate()
        {
            var s = new PetScript();
            var p = Wolf();
            var d = s.Refresh(p, null);
            Assert.AreEqual((500, "Lobo", 50), (d.Id, d.Name, d.Hp));
            Assert.IsTrue(s.StatusKeeps(PetScript.Pet));
            Assert.IsFalse(s.StatusKeeps(PetScript.Summoned), "SummonedStatusWnd fecha com pet");
            var u = new PetStatusUpdateInfo { ObjectId = 500, Hp = 120, MaxHp = 200, Mp = 60, MaxMp = 60, Fatigue = 10, MaxFatigue = 600, Level = 16 };
            d = s.Refresh(p, u);
            Assert.AreEqual((120, 16, "Lobo"), (d.Hp, d.Level, d.Name), "o status por cima, o nome fica");
            d = s.Refresh(p, u);
            Assert.AreEqual(120, d.Hp);
            var p2 = Wolf();
            d = s.Refresh(p2, u);
            Assert.AreEqual(50, d.Hp, "PetInfo novo vence o status antigo");
            Assert.IsNull(s.Refresh(null, null));
            Assert.IsFalse(s.StatusKeeps(PetScript.Pet));
        }

        [TestCase(0, 0, 85, 0)]
        [TestCase(10, 0, 85, 0)]
        [TestCase(50, 200, 85, 21)]
        [TestCase(250, 200, 85, 85)]
        [TestCase(150, 300, 206, 103)]
        public void Barra(int v, int max, int size, int w) => Assert.AreEqual(w, PetScript.BarSize(v, max, size));

        [TestCase(500, 1000, "L2UI_CH3.PlayerStatusWnd.ps_weightbar1")]
        [TestCase(600, 1000, "L2UI_CH3.PlayerStatusWnd.ps_weightbar2")]
        [TestCase(700, 1000, "L2UI_CH3.PlayerStatusWnd.ps_weightbar3")]
        [TestCase(801, 1000, "L2UI_CH3.PlayerStatusWnd.ps_weightbar4")]
        [TestCase(1, 0, "")]
        public void Peso(int v, int max, string tex) => Assert.AreEqual(tex, PetScript.WeightTexture(v, max));

        [Test]
        public void Textos_PetEServo()
        {
            var s = new PetScript();
            s.Refresh(Wolf(), null);
            var t = PetScript.Texts(s.Data, true).ToDictionary(x => x.ctrl, x => x.text);
            Assert.AreEqual(("15 Lobo", "50/200", "7", "33"), (t["txtLvName"], t["txtHP"], t["txtSP"], t["txtPhysicalAttack"]));
            Assert.AreEqual(("25.00%", "50.00%", "70.00%"), (t["txtExp"], t["txtFatigue"], t["txtWeight"]));
            var b = PetScript.Bars(s.Data, true).ToDictionary(x => x.tex, x => x.w);
            Assert.AreEqual((21, 51, 103, 59), (b["texHP"], b["texExp"], b["texFatigue"], b["texWeight"]), "EXP: int(25) de 100");
            var sv = PetScript.Texts(s.Data, false).Select(x => x.ctrl).ToList();
            CollectionAssert.DoesNotContain(sv, "txtSP");
            Assert.AreEqual(31, PetScript.Bars(s.Data, false).First(x => x.tex == "texHP").w, "servo: 125 px");
        }

        [Test]
        public void Inventario_WorkTypePeloClassId()
        {
            var s = new PetScript();
            s.ItemsStart();
            s.ItemsAdd(new ListItem { ClassId = 2375, ServerId = 1, ItemNum = 1, Equipped = true });
            s.ItemsAdd(new ListItem { ClassId = 2515, ServerId = 2, ItemNum = 10, ConsumeType = 2 });
            s.ItemsUpdate(2, new ListItem { ClassId = 2515, ServerId = 2, ItemNum = 4, ConsumeType = 2 });
            Assert.AreEqual(4L, s.Items[1].ItemNum);
            s.ItemsUpdate(1, new ListItem { ClassId = 1835, ServerId = 3, ItemNum = 100 });
            s.ItemsUpdate(3, new ListItem { ClassId = 2375, ServerId = 1 });
            s.ItemsUpdate(1, new ListItem { ClassId = 0, ServerId = 9 });
            CollectionAssert.AreEqual(new[] { 2515, 1835 }, s.Items.Select(i => i.ClassId));
            var it = ListWnd.FromParam(InterfaceEvents.PetItemList(new PetItemListInfo
            {
                Items = new List<InvItem> { new() { ObjectId = 1, ItemId = 2375, Count = 1, Equipped = true, Mana = -1 } },
            })[1].Param);
            Assert.IsTrue(it.Equipped, "bEquipped do ItemInfo");
        }

        [Test]
        public void DarItem_NumeroAltOuUm()
        {
            static InventoryScript.Item Inv(long n, long all, int consume) =>
                new() { Src = "InventoryItem", ServerId = 13, ConsumeType = consume, ItemNum = n, AllItemCount = all, Name = "Soulshot" };
            var (give, ask) = PetScript.Give(Inv(100, 0, 2));
            Assert.IsNull(give);
            Assert.AreEqual((PetScript.DialogGiveItemToPet, 13, 100L), (ask.DlgId, ask.ServerId, ask.ParamInt));
            Assert.AreEqual((13, 100), PetScript.Give(Inv(100, 100, 2)).give, "Alt = tudo");
            Assert.AreEqual((13, 1), PetScript.Give(Inv(1, 0, 0)).give);
            var eq = Inv(1, 0, 0);
            eq.Src = "EquipItem_RHand";
            var none = PetScript.Give(eq);
            Assert.IsTrue(none.give == null && none.ask == null, "so do InventoryItem");
        }

        [Test]
        public void Nome_RepoeNoMsg80()
        {
            var s = new PetScript();
            Assert.AreEqual("Rex", s.NameOk("Rex"));
            Assert.AreEqual("Rex", s.NameFailedRestore(80));
            Assert.IsNull(s.NameFailedRestore(81));
        }

        [Test]
        public void Acoes_CategoriaENpc()
        {
            var all = new[]
            {
                new L2TooltipData.ActionName { Id = 15, Category = 4, Npcs = new[] { -2 } },
                new L2TooltipData.ActionName { Id = 21, Category = 5, Npcs = new[] { -2 } },
                new L2TooltipData.ActionName { Id = 22, Category = 5, Npcs = new[] { 14111, 14113 } },
                new L2TooltipData.ActionName { Id = 1001, Category = 4, Npcs = new[] { 12564 } },
                new L2TooltipData.ActionName { Id = 0, Category = 1, Npcs = new[] { -2 } },
            };
            CollectionAssert.AreEqual(new[] { 15 }, PetScript.ActionList(all, PetScript.ActionPet, 12077));
            CollectionAssert.AreEqual(new[] { 15, 1001 }, PetScript.ActionList(all, PetScript.ActionPet, 12564));
            CollectionAssert.AreEqual(new[] { 21, 22 }, PetScript.ActionList(all, PetScript.ActionSummon, 14111));
            var real = L2TooltipData.ParseActionNames(ActionDat((15, 4, new[] { -2 }), (22, 5, new[] { 14111 })));
            Assert.AreEqual((4, 5, 14111), (real[15].Category, real[22].Category, real[22].Npcs[0]), "category e a lista de NPCs do actionname-e");
        }

        /// <summary>actionname-e.dat minimo: d tag, d id, d type, d category, d n, n x d, 4 FStrings vazias.</summary>
        static byte[] ActionDat(params (int id, int cat, int[] npcs)[] rows)
        {
            var b = new List<byte>();
            void D(int v) => b.AddRange(System.BitConverter.GetBytes(v));
            D(rows.Length);
            foreach (var (id, cat, npcs) in rows)
            {
                D(1);
                D(id);
                D(-1);
                D(cat);
                D(npcs.Length);
                foreach (var n in npcs) D(n);
                for (var k = 0; k < 4; k++) b.Add(0);
            }
            return b.ToArray();
        }

        [Test]
        public void Buffs_DezPorLinha()
        {
            var p = L2Param.Add("", "Max", 12);
            for (var i = 0; i < 12; i++) p = L2Param.Add(p, "SkillID_" + i, i == 3 ? 0 : 1000 + i);
            var g = PetScript.BuffGrid(p);
            Assert.AreEqual(11, g.Count, "id 0 nao entra");
            Assert.AreEqual((1011, 0, 1), g[10]);
            Assert.AreEqual((1004, 3, 0), g[3]);
        }

        [Test]
        public void TempoDoServo()
        {
            var s = new PetScript();
            Assert.IsTrue(s.RemainTime(5000, 60000), "1a vez: limpa os buffs e comeca");
            Assert.AreEqual((60000.0, 60000.0), (s.RemainMs, s.MaxMs));
            Assert.IsFalse(s.RemainTime(42000, 60000));
            Assert.AreEqual(42000.0, s.RemainMs);
            s.ResetRemain();
            Assert.IsFalse(s.SummonedStarted);
        }
    }
}
