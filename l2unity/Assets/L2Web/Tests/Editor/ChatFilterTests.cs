// ChatFilterWnd / chatfilter.ini (02 secoes 2.4, 3.3, 4.1, 4.2), contra o ChatWnd.uc e o ChatFilterWnd.uc do Interface.u
// (export/uc/Interface) e o chatfilter.ini exportado do cliente (export/client_cfg).
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class ChatFilterTests
    {
        const string Exported = "[entire_tab]\r\nsystem=True\r\ndamage=True\r\nuseitems=True\r\nchat=False\r\nnormal=True\r\nparty=True\r\nshout=True\r\nmarket=True\r\npledge=True\r\ntell=True\r\nally=True\r\nhero=True\r\nunion=True\r\n\r\n[global]\r\ncommand=True\r\n\r\n";

        static bool[] Row(ChatFilter.Info f) => new[] { f.System, f.Chat, f.Normal, f.Shout, f.Clan, f.Party, f.Trade, f.Whisper, f.Damage, f.Ally, f.UseItem, f.Hero, f.Union };

        [Test]
        public void Padroes_SetDefaultFilterValue()
        {
            var cf = new ChatFilter();
            //                              system chat  normal shout clan  party trade whisp dmg   ally  item  hero  union
            Assert.AreEqual(new[] { true, true, true, true, true, true, false, true, true, false, false, false, true }, Row(cf.Filters[ChatFilter.WindowNormal]));
            Assert.AreEqual(new[] { true, true, false, true, false, false, true, true, true, false, false, false, false }, Row(cf.Filters[ChatFilter.WindowTrade]));
            Assert.AreEqual(new[] { true, true, false, true, false, true, false, true, true, false, false, false, false }, Row(cf.Filters[ChatFilter.WindowParty]));
            Assert.AreEqual(new[] { true, true, false, true, true, false, false, true, true, false, false, false, false }, Row(cf.Filters[ChatFilter.WindowClan]));
            Assert.AreEqual(new[] { true, true, false, true, false, false, false, true, true, true, false, false, false }, Row(cf.Filters[ChatFilter.WindowAlly]));
            Assert.IsFalse(cf.Filters[ChatFilter.WindowSystem].System);
            Assert.IsFalse(cf.NoUnionCommanderMessage);
            Assert.AreEqual(new[] { "entire_tab", "pledge_tab", "party_tab", "market_tab", "ally_tab" }, ChatFilter.SectionName);
        }

        [Test]
        public void Init_LeOIniExportado_EForcaOTipoDaAba()
        {
            var cf = new ChatFilter();
            cf.Init(Exported);
            // [entire_tab] do cliente: tudo True menos chat
            Assert.IsTrue(cf.Filters[0].Trade);
            Assert.IsTrue(cf.Filters[0].Hero);
            Assert.IsTrue(cf.Filters[0].UseItem);
            Assert.IsFalse(cf.Filters[0].Chat);
            Assert.IsTrue(cf.NoUnionCommanderMessage);
            // as outras abas ficam nos padroes
            Assert.IsFalse(cf.Filters[ChatFilter.WindowParty].Normal);
            // SetDefaultFilterOn: um ini com market=False na aba Trade ([pledge_tab]!) volta a 1
            cf.Init("[pledge_tab]\r\nmarket=False\r\nnormal=True\r\n\r\n");
            Assert.IsTrue(cf.Filters[ChatFilter.WindowTrade].Trade);
            Assert.IsTrue(cf.Filters[ChatFilter.WindowTrade].Normal);
            Assert.IsFalse(cf.Filters[ChatFilter.WindowClan].Normal);
            Assert.AreEqual("market", ChatFilter.ForcedKey(ChatFilter.WindowTrade));
            Assert.IsNull(ChatFilter.ForcedKey(ChatFilter.WindowNormal));
        }

        [Test]
        public void SaveTab_GravaSoAAba_NaOrdemDoCliente()
        {
            var cf = new ChatFilter();
            cf.Filters[ChatFilter.WindowClan].Hero = true;
            cf.NoUnionCommanderMessage = true;
            var ini = cf.SaveTab("", ChatFilter.WindowClan);
            // a aba Clan grava em [market_tab]; chaves na ordem do SaveChatFilterOption; CRLF e linha em branco por secao
            Assert.AreEqual("[market_tab]\r\nsystem=True\r\ndamage=True\r\nuseitems=False\r\nchat=True\r\nnormal=False\r\nparty=False\r\nshout=True\r\nmarket=False\r\npledge=True\r\ntell=True\r\nally=False\r\nhero=True\r\nunion=False\r\n\r\n[global]\r\ncommand=True\r\n\r\n", ini);
            // salvar outra aba mantem a secao existente e o que ja estava la
            var again = new ChatFilter();
            again.Init(ini);
            var ini2 = again.SaveTab(ini, ChatFilter.WindowNormal);
            StringAssert.StartsWith("[market_tab]\r\nsystem=True", ini2);
            StringAssert.Contains("[entire_tab]\r\nsystem=True\r\ndamage=True\r\nuseitems=False\r\nchat=True\r\nnormal=True", ini2);
            // o exportado do cliente passa por Parse/Build sem mudar
            Assert.AreEqual(Exported, ChatFilter.Ini.Parse(Exported).Build());
        }

        [Test]
        public void CheckFilter_TabelaDoChatWnd()
        {
            var cf = new ChatFilter();
            var opt = new System.Collections.Generic.Dictionary<string, bool> { ["SystemMsgWndDamage"] = true, ["SystemMsgWndExpendableItem"] = false };
            cf.GetGameOption = k => opt.TryGetValue(k, out var v) && v;
            // canais pelos flags da aba (padroes): All sem Trade; a aba Trade sem Normal
            Assert.IsFalse(cf.CheckFilter(ChatType.Market, ChatFilter.WindowNormal, SystemMsgType.None));
            Assert.IsTrue(cf.CheckFilter(ChatType.Market, ChatFilter.WindowTrade, SystemMsgType.None));
            Assert.IsFalse(cf.CheckFilter(ChatType.Normal, ChatFilter.WindowTrade, SystemMsgType.None));
            Assert.IsTrue(cf.CheckFilter(ChatType.Shout, ChatFilter.WindowAlly, SystemMsgType.None));
            // anuncios e peticoes: sempre, inclusive na SystemMsgWnd
            Assert.IsTrue(cf.CheckFilter(ChatType.Announce, ChatFilter.WindowSystem, SystemMsgType.None));
            Assert.IsTrue(cf.CheckFilter(ChatType.CriticalAnnounce, ChatFilter.WindowParty, SystemMsgType.None));
            Assert.IsTrue(cf.CheckFilter(ChatType.UserPet, ChatFilter.WindowClan, SystemMsgType.None));
            // command channel: union (so o All por padrao)
            Assert.IsTrue(cf.CheckFilter(ChatType.CommanderChat, ChatFilter.WindowNormal, SystemMsgType.None));
            Assert.IsFalse(cf.CheckFilter(ChatType.InterPartyMasterChat, ChatFilter.WindowTrade, SystemMsgType.None));
            // nunca no ChatWnd
            Assert.IsFalse(cf.CheckFilter(ChatType.Custom, ChatFilter.WindowNormal, SystemMsgType.None));
            Assert.IsFalse(cf.CheckFilter(ChatType.PartyRoomChat, ChatFilter.WindowNormal, SystemMsgType.None));
            // sistema: SERVER/PETITION sempre; na SystemMsgWnd DAMAGE/USEITEMS pelas opcoes, BATTLE/NONE sim, POPUP/ERROR nao
            Assert.IsTrue(cf.CheckFilter(ChatType.System, ChatFilter.WindowSystem, SystemMsgType.Server));
            Assert.IsTrue(cf.CheckFilter(ChatType.System, ChatFilter.WindowSystem, SystemMsgType.Damage));
            Assert.IsFalse(cf.CheckFilter(ChatType.System, ChatFilter.WindowSystem, SystemMsgType.UseItems));
            Assert.IsTrue(cf.CheckFilter(ChatType.System, ChatFilter.WindowSystem, SystemMsgType.Battle));
            Assert.IsTrue(cf.CheckFilter(ChatType.System, ChatFilter.WindowSystem, SystemMsgType.None));
            Assert.IsFalse(cf.CheckFilter(ChatType.System, ChatFilter.WindowSystem, SystemMsgType.Popup));
            Assert.IsFalse(cf.CheckFilter(ChatType.System, ChatFilter.WindowSystem, SystemMsgType.Error));
            // nas abas: bSystem, depois bDamage/bUseItem; POPUP/ERROR passam
            Assert.IsTrue(cf.CheckFilter(ChatType.System, ChatFilter.WindowNormal, SystemMsgType.Popup));
            Assert.IsTrue(cf.CheckFilter(ChatType.System, ChatFilter.WindowNormal, SystemMsgType.Damage));
            Assert.IsFalse(cf.CheckFilter(ChatType.System, ChatFilter.WindowNormal, SystemMsgType.UseItems));
            cf.Filters[ChatFilter.WindowNormal].System = false;
            Assert.IsFalse(cf.CheckFilter(ChatType.System, ChatFilter.WindowNormal, SystemMsgType.None));
            Assert.IsTrue(cf.CheckFilter(ChatType.System, ChatFilter.WindowNormal, SystemMsgType.Petition));
            // janela invalida
            Assert.IsFalse(cf.CheckFilter(ChatType.Announce, 7, SystemMsgType.None));
            // Say2 do aCis -> EChatType com os mesmos numeros
            Assert.AreEqual(ChatType.Hero, ChatFilter.TypeOfSay2(17));
            Assert.AreEqual(ChatType.Market, ChatFilter.TypeOfClass("trade"));
        }
    }
}
