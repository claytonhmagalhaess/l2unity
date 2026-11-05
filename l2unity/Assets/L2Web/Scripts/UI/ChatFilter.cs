// Filtro do chat do cliente (ChatWnd.uc / ChatFilterWnd.uc do Interface.u, export/uc/Interface) [O]:
//  - m_filterInfo[6]: 5 abas + a janela de sistema (CHAT_WINDOW_SYSTEM = 5, toda zero), 13 flags por aba;
//  - chatfilter.ini (pasta system): secoes por aba com os nomes trocados (Trade grava em [pledge_tab], Clan em [market_tab]),
//    chaves True/False; InitFilterInfo = SetDefaultFilterValue, le o que existe no ini, SetDefaultFilterOn (o tipo da aba
//    volta a 1), [global] command = m_NoUnionCommanderMessage; SaveChatFilterOption grava so a aba atual + global;
//  - CheckFilter(type, janela, sysType): roteamento de cada EV_ChatMessage para as 5 abas e a SystemMsgWnd
//    (ChatWnd.uc:535-630), com as opcoes [Game] SystemMsgWndDamage/SystemMsgWndExpendableItem do Option.ini.
// O arquivo fica ao lado do Option.ini do Unity (Application.persistentDataPath), nao na pasta do cliente original.
using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEngine;

namespace L2Web.UI
{
    /// <summary>EChatType (UIEventManager.uc:538-559).</summary>
    public enum ChatType
    {
        Normal = 0, Shout = 1, Tell = 2, Party = 3, Clan = 4, System = 5, UserPet = 6, GmPet = 7, Market = 8, Alliance = 9,
        Announce = 10, Custom = 11, L2Friend = 12, MsnChat = 13, PartyRoomChat = 14, CommanderChat = 15, InterPartyMasterChat = 16,
        Hero = 17, CriticalAnnounce = 18,
    }

    /// <summary>ESystemMsgType (UIEventManager.uc:561-570) = coluna group do systemmsg-e.dat.</summary>
    public enum SystemMsgType
    {
        None = 0, Battle = 1, Server = 2, Damage = 3, Popup = 4, Error = 5, Petition = 6, UseItems = 7,
    }

    public sealed class ChatFilter
    {
        public const int WindowNormal = 0, WindowTrade = 1, WindowParty = 2, WindowClan = 3, WindowAlly = 4, WindowCount = 5, WindowSystem = 5;
        public const string FileName = "chatfilter.ini";
        /// <summary>m_sectionName (ChatWnd.uc:59-64): Trade em [pledge_tab] e Clan em [market_tab], como no cliente.</summary>
        public static readonly string[] SectionName = { "entire_tab", "pledge_tab", "party_tab", "market_tab", "ally_tab" };
        /// <summary>Chaves na ordem em que SaveChatFilterOption as grava (ChatFilterWnd.uc:157-169).</summary>
        public static readonly string[] Keys = { "system", "damage", "useitems", "chat", "normal", "party", "shout", "market", "pledge", "tell", "ally", "hero", "union" };

        /// <summary>Uma linha de m_filterInfo (os 13 campos).</summary>
        public sealed class Info
        {
            public bool System, Chat, Normal, Shout, Clan, Party, Trade, Whisper, Damage, Ally, UseItem, Hero, Union;

            public bool Get(string key) => key switch
            {
                "system" => System, "chat" => Chat, "normal" => Normal, "shout" => Shout, "pledge" => Clan, "party" => Party, "market" => Trade,
                "tell" => Whisper, "damage" => Damage, "ally" => Ally, "useitems" => UseItem, "hero" => Hero, "union" => Union,
                _ => throw new ArgumentException(key),
            };

            public void Set(string key, bool v)
            {
                switch (key)
                {
                    case "system": System = v; break;
                    case "chat": Chat = v; break;
                    case "normal": Normal = v; break;
                    case "shout": Shout = v; break;
                    case "pledge": Clan = v; break;
                    case "party": Party = v; break;
                    case "market": Trade = v; break;
                    case "tell": Whisper = v; break;
                    case "damage": Damage = v; break;
                    case "ally": Ally = v; break;
                    case "useitems": UseItem = v; break;
                    case "hero": Hero = v; break;
                    case "union": Union = v; break;
                    default: throw new ArgumentException(key);
                }
            }

            public void Set(bool system, bool chat, bool normal, bool shout, bool clan, bool party, bool trade, bool whisper, bool damage, bool ally, bool useItem, bool hero, bool union)
            {
                System = system; Chat = chat; Normal = normal; Shout = shout; Clan = clan; Party = party; Trade = trade;
                Whisper = whisper; Damage = damage; Ally = ally; UseItem = useItem; Hero = hero; Union = union;
            }
        }

        public readonly Info[] Filters = new Info[WindowCount + 1];
        /// <summary>[global] command: com 1 nao mostra o aviso do Command Channel na tela (ChatWnd.uc:434-436).</summary>
        public bool NoUnionCommanderMessage;
        /// <summary>GetOptionBool("Game", chave) (Option.ini); injetavel nos testes.</summary>
        public Func<string, bool> GetGameOption = key => L2Options.GetBool("Game", key);

        public ChatFilter()
        {
            for (var i = 0; i < Filters.Length; i++) Filters[i] = new Info();
            SetDefaultFilterValue();
        }

        public static string FilePath => Path.Combine(Application.persistentDataPath, FileName);

        /// <summary>SetDefaultFilterValue (ChatWnd.uc:698-787).</summary>
        public void SetDefaultFilterValue()
        {
            //                       system chat   normal shout  clan   party  trade  whisp  damage ally   item   hero   union
            Filters[WindowNormal].Set(true, true, true, true, true, true, false, true, true, false, false, false, true);
            Filters[WindowTrade].Set(true, true, false, true, false, false, true, true, true, false, false, false, false);
            Filters[WindowParty].Set(true, true, false, true, false, true, false, true, true, false, false, false, false);
            Filters[WindowClan].Set(true, true, false, true, true, false, false, true, true, false, false, false, false);
            Filters[WindowAlly].Set(true, true, false, true, false, false, false, true, true, true, false, false, false);
            Filters[WindowSystem].Set(false, false, false, false, false, false, false, false, false, false, false, false, false);
            NoUnionCommanderMessage = false;
        }

        /// <summary>SetDefaultFilterOn (ChatWnd.uc:690-696): o tipo da propria aba fica sempre ligado.</summary>
        public void SetDefaultFilterOn()
        {
            Filters[WindowTrade].Trade = true;
            Filters[WindowParty].Party = true;
            Filters[WindowClan].Clan = true;
            Filters[WindowAlly].Ally = true;
        }

        /// <summary>A chave que a aba forca ligada (checkbox desabilitado), ou null.</summary>
        public static string ForcedKey(int tab) => tab switch { WindowTrade => "market", WindowParty => "party", WindowClan => "pledge", WindowAlly => "ally", _ => null };

        /// <summary>InitFilterInfo (ChatWnd.uc:633-687): padroes, depois o ini (so as chaves presentes), SetDefaultFilterOn e [global].</summary>
        public void Init(string iniText)
        {
            SetDefaultFilterValue();
            var ini = Ini.Parse(iniText);
            for (var i = 0; i < WindowCount; i++)
                foreach (var key in Keys)
                    if (ini.TryGetBool(SectionName[i], key, out var v))
                        Filters[i].Set(key, v);
            SetDefaultFilterOn();
            if (ini.TryGetBool("global", "command", out var c)) NoUnionCommanderMessage = c;
        }

        /// <summary>SaveChatFilterOption (ChatFilterWnd.uc:157-172): grava so a secao da aba e o [global] command; devolve o ini novo.</summary>
        public string SaveTab(string iniText, int tab)
        {
            var ini = Ini.Parse(iniText);
            foreach (var key in Keys) ini.SetBool(SectionName[tab], key, Filters[tab].Get(key));
            ini.SetBool("global", "command", NoUnionCommanderMessage);
            return ini.Build();
        }

        /// <summary>CheckFilter (ChatWnd.uc:535-630).</summary>
        public bool CheckFilter(ChatType type, int window, SystemMsgType systemType)
        {
            if (!(window >= 0 && window < WindowCount) && window != WindowSystem) return false;
            var f = Filters[window];
            if (type == ChatType.Market && f.Trade) return true;
            if (type == ChatType.Normal && f.Normal) return true;
            if (type == ChatType.Clan && f.Clan) return true;
            if (type == ChatType.Party && f.Party) return true;
            if (type == ChatType.Shout && f.Shout) return true;
            if (type == ChatType.Tell && f.Whisper) return true;
            if (type == ChatType.Alliance && f.Ally) return true;
            if (type == ChatType.Hero && f.Hero) return true;
            if (type == ChatType.Announce || type == ChatType.CriticalAnnounce || type == ChatType.UserPet || type == ChatType.GmPet) return true;
            if ((type == ChatType.InterPartyMasterChat || type == ChatType.CommanderChat) && f.Union) return true;
            if (type == ChatType.System)
            {
                if (systemType == SystemMsgType.Server || systemType == SystemMsgType.Petition) return true;
                if (window == WindowSystem)
                {
                    if (systemType == SystemMsgType.Damage) return GetGameOption("SystemMsgWndDamage");
                    if (systemType == SystemMsgType.UseItems) return GetGameOption("SystemMsgWndExpendableItem");
                    return systemType == SystemMsgType.Battle || systemType == SystemMsgType.None;
                }
                if (f.System)
                {
                    if (systemType == SystemMsgType.Damage) return f.Damage;
                    if (systemType == SystemMsgType.UseItems) return f.UseItem;
                    return true;
                }
                return false;
            }
            return false;
        }

        /// <summary>Tipo do Say2 do aCis -> EChatType: os numeros coincidem (02 secao 3.1).</summary>
        public static ChatType TypeOfSay2(int say2) => say2 >= 0 && say2 <= 18 ? (ChatType)say2 : ChatType.Normal;

        /// <summary>Classe de linha do porte (cores do L2Log) -> EChatType, para as mensagens locais.</summary>
        public static ChatType TypeOfClass(string cls) => cls switch
        {
            "say" => ChatType.Normal, "shout" => ChatType.Shout, "tell" => ChatType.Tell, "party" => ChatType.Party, "clan" => ChatType.Clan,
            "trade" => ChatType.Market, "ally" => ChatType.Alliance, "ann" => ChatType.Announce, "cc" => ChatType.CommanderChat, "hero" => ChatType.Hero,
            _ => ChatType.System,
        };

        /// <summary>INI minimo do GConfig: secoes e chaves na ordem do arquivo, CRLF, linha em branco depois de cada secao.</summary>
        public sealed class Ini
        {
            public readonly List<(string name, List<(string key, string value)> keys)> Sections = new();

            public static Ini Parse(string text)
            {
                var ini = new Ini();
                if (string.IsNullOrEmpty(text)) return ini;
                List<(string, string)> cur = null;
                foreach (var raw in text.Split('\n'))
                {
                    var l = raw.Trim();
                    if (l.Length == 0 || l.StartsWith(";")) continue;
                    if (l.StartsWith("[") && l.EndsWith("]"))
                    {
                        cur = new List<(string, string)>();
                        ini.Sections.Add((l.Substring(1, l.Length - 2), cur));
                        continue;
                    }
                    var eq = l.IndexOf('=');
                    if (eq < 0 || cur == null) continue;
                    cur.Add((l.Substring(0, eq).Trim(), l.Substring(eq + 1).Trim()));
                }
                return ini;
            }

            List<(string key, string value)> Section(string name, bool create)
            {
                foreach (var s in Sections)
                    if (string.Equals(s.name, name, StringComparison.OrdinalIgnoreCase)) return s.keys;
                if (!create) return null;
                var k = new List<(string, string)>();
                Sections.Add((name, k));
                return k;
            }

            /// <summary>GetINIBool: so devolve true se a chave existe.</summary>
            public bool TryGetBool(string section, string key, out bool value)
            {
                value = false;
                var s = Section(section, false);
                if (s == null) return false;
                foreach (var (k, v) in s)
                    if (string.Equals(k, key, StringComparison.OrdinalIgnoreCase))
                    {
                        value = string.Equals(v, "True", StringComparison.OrdinalIgnoreCase) || v == "1";
                        return true;
                    }
                return false;
            }

            public void SetBool(string section, string key, bool value)
            {
                var s = Section(section, true);
                var text = value ? "True" : "False";
                for (var i = 0; i < s.Count; i++)
                    if (string.Equals(s[i].key, key, StringComparison.OrdinalIgnoreCase))
                    {
                        s[i] = (s[i].key, text);
                        return;
                    }
                s.Add((key, text));
            }

            public string Build()
            {
                var sb = new StringBuilder();
                foreach (var (name, keys) in Sections)
                {
                    sb.Append('[').Append(name).Append("]\r\n");
                    foreach (var (k, v) in keys) sb.Append(k).Append('=').Append(v).Append("\r\n");
                    sb.Append("\r\n");
                }
                return sb.ToString();
            }
        }
    }
}
