// Interface do jogo com as janelas originais do Interlude (ui/gameui.ts): status, alvo, buffs, chat, mensagens do
// sistema, barras de atalho, menu, menu do sistema, radar, inventario, janela principal (status detalhado, skills,
// acoes), reinicio e dialogo. Janelas de NPC, board e lojas seguem o modelo generico (UiWindow) com a moldura original.
// Tambem tem os elementos do HUD que no web ficavam no index.html/main.ts: caixa de informacoes (hudInfo), ajuda
// (helpBox) e barra de cast (castBar).
// Partes: GameUi.cs (nucleo, status, alvo, chat), GameUi.Windows.cs (inventario, skills, acoes, atalhos, lojas, NPC,
// board, dialogo, morte), GameUi.Hud.cs (teclas, buffs, reuso, radar, cast, info, ajuda, tick).
using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using L2Web.Net;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.UI;
using Entity = L2Web.World.Entity;
using WorldT = L2Web.World.World;

namespace L2Web.UI
{
    /// <summary>Acoes que a interface pede ao App (UiDeps do TS).</summary>
    public sealed class UiDeps
    {
        /// <summary>Envia um pacote ao game server.</summary>
        public Action<byte[]> Send = _ => { };
        /// <summary>RequestActionUse(id).</summary>
        public Action<int> ActionUse = _ => { };
        /// <summary>Linha no chat (classe, texto, cor opcional).</summary>
        public Action<string, string, string> Chat = (_, _, _) => { };
        /// <summary>RequestTargetCanceld.</summary>
        public Action CancelTarget = () => { };
        /// <summary>RequestRestart (voltar a selecao de personagens).</summary>
        public Action Restart = () => { };
        /// <summary>Logout.</summary>
        public Action Logout = () => { };
        /// <summary>Abre/fecha as opcoes.</summary>
        public Action Options = () => { };
        /// <summary>RequestRestartPoint(tipo).</summary>
        public Action<int> RestartPoint = _ => { };
        /// <summary>Comando do alvo: "party" | "trade" | "friend".</summary>
        public Action<string> TargetCommand = _ => { };
    }

    /// <summary>Tecla para GameUi.Key (o KeyboardEvent do TS).</summary>
    public struct KeyEvent
    {
        public UnityEngine.InputSystem.Key Key;
        public bool Alt, Ctrl, Shift;

        public KeyEvent(UnityEngine.InputSystem.Key key, bool alt = false, bool ctrl = false, bool shift = false)
        {
            Key = key;
            Alt = alt;
            Ctrl = ctrl;
            Shift = shift;
        }
    }

    public partial class GameUi
    {
        /// <summary>Ponto do corpo (bodyPart do item) -> slot da InventoryWnd.</summary>
        static readonly Dictionary<int, string[]> Equip = new()
        {
            [0x0001] = new[] { "EquipItem_Underwear" }, [0x0002] = new[] { "EquipItem_REar" }, [0x0004] = new[] { "EquipItem_LEar" },
            [0x0006] = new[] { "EquipItem_REar", "EquipItem_LEar" }, [0x0008] = new[] { "EquipItem_Neck" }, [0x0010] = new[] { "EquipItem_RFinger" },
            [0x0020] = new[] { "EquipItem_LFinger" }, [0x0030] = new[] { "EquipItem_RFinger", "EquipItem_LFinger" }, [0x0040] = new[] { "EquipItem_Head" },
            [0x0080] = new[] { "EquipItem_RHand" }, [0x0100] = new[] { "EquipItem_LHand" }, [0x0200] = new[] { "EquipItem_Gloves" },
            [0x0400] = new[] { "EquipItem_Chest" }, [0x0800] = new[] { "EquipItem_Legs" }, [0x1000] = new[] { "EquipItem_Feet" },
            [0x2000] = new[] { "EquipItem_Chest" }, [0x4000] = new[] { "EquipItem_RHand" }, [0x8000] = new[] { "EquipItem_Chest" },
            [0x10000] = new[] { "EquipItem_Hair" }, [0x20000] = new[] { "EquipItem_Chest" }, [0x40000] = new[] { "EquipItem_Hair2" },
            [0x80000] = new[] { "EquipItem_Hair" },
        };

        static readonly Dictionary<int, string> Body = new()
        {
            [0x0001] = "Roupa de baixo", [0x0002] = "Brinco", [0x0004] = "Brinco", [0x0006] = "Brinco", [0x0008] = "Colar", [0x0010] = "Anel",
            [0x0020] = "Anel", [0x0030] = "Anel", [0x0040] = "Elmo", [0x0080] = "Mão direita", [0x0100] = "Mão esquerda", [0x0200] = "Luvas",
            [0x0400] = "Peitoral", [0x0800] = "Calças", [0x1000] = "Botas", [0x2000] = "Capa", [0x4000] = "Duas mãos", [0x8000] = "Armadura completa",
            [0x10000] = "Cabelo", [0x20000] = "Traje", [0x40000] = "Rosto", [0x80000] = "Cabelo (tudo)",
        };

        /// <summary>Acoes da ActionWnd: basicas, de grupo e sociais (actionname-e).</summary>
        static readonly int[] ActionsBasic = { 0, 1, 2, 3, 4, 5, 6, 10, 28, 37, 51, 38, 40, 57, 55 };
        static readonly int[] ActionsParty = { 7, 8, 9, 11, 50, 56, 58, 60 };
        static readonly int[] ActionsSocial = { 12, 13, 14, 24, 25, 26, 29, 30, 31, 33, 34, 35 };

        /// <summary>Experiencia acumulada para cada nivel (Experience.LEVEL do servidor; nivel 0 inatingivel).</summary>
        static readonly long[] Exp =
        {
            -1, 0, 68, 363, 1168, 2884, 6038, 11287, 19423, 31378, 48229, 71201, 101676, 141192, 191452, 254327, 331864, 426284,
            539995, 675590, 835854, 1023775, 1242536, 1495531, 1786365, 2118860, 2497059, 2925229, 3407873, 3949727, 4555766, 5231213, 5981539,
            6812472, 7729999, 8740372, 9850111, 11066012, 12395149, 13844879, 15422851, 17137002, 18995573, 21007103, 23180442, 25524751,
            28049509, 30764519, 33679907, 36806133, 40153995, 45524865, 51262204, 57383682, 63907585, 70852742, 80700339, 91162131,
            102265326, 114038008, 126509030, 146307211, 167243291, 189363788, 212716741, 237351413, 271973532, 308441375, 346825235,
            387197529, 429632402, 474205751, 532692055, 606319094, 696376867, 804219972, 931275828, 1151275834, 1511275834, 2099275834,
            4200000000,
        };

        /// <summary>Porcentagem da experiencia no nivel (0 a 100).</summary>
        public static double ExpPercent(int level, long exp)
        {
            var a = level >= 0 && level < Exp.Length ? Exp[level] : 0;
            if (level + 1 < 0 || level + 1 >= Exp.Length) return 0;
            var b = Exp[level + 1];
            if (b <= a) return 0;
            return Math.Max(0, Math.Min(100, (double)(exp - a) / (b - a) * 100));
        }

        /// <summary>URL do icone do cliente (/icons/&lt;nome&gt;.png), ou null.</summary>
        public static string IconUrl(string name) => string.IsNullOrEmpty(name) ? null : "/icons/" + Uri.EscapeDataString(name.ToLowerInvariant()) + ".png";

        /// <summary>Numero com separador de milhar como o toLocaleString('pt-BR') (1.234.567).</summary>
        public static string Fmt(long n) => n.ToString("#,0", CultureInfo.InvariantCulture).Replace(',', '.');

        const int Adena = 57;
        const int Page = 12;
        const int Bars = 3;

        /// <summary>Abas na ordem CHAT_WINDOW_* (ChatWnd.uc:27-31): 0 All, 1 Trade, 2 Party, 3 Clan, 4 Ally.</summary>
        static readonly string[] TabNames = { "NormalChat", "TradeChat", "PartyChat", "ClanChat", "AllyChat" };
        /// <summary>Sysstring do rotulo de cada aba, para o CurrentText da ChatFilterWnd (ChatWnd.uc:808-830).</summary>
        static readonly int[] TabSysString = { 144, 355, 188, 128, 559 };
        /// <summary>Checkbox da ChatFilterWnd -> chave do chatfilter.ini (SetChatFilterButton / SaveChatFilterOption).</summary>
        static readonly (string box, string key)[] FilterBoxes =
        {
            ("CheckBoxSystem", "system"), ("CheckBoxDamage", "damage"), ("CheckBoxItem", "useitems"), ("CheckBoxChat", "chat"),
            ("CheckBoxNormal", "normal"), ("CheckBoxShout", "shout"), ("CheckBoxPledge", "pledge"), ("CheckBoxParty", "party"),
            ("CheckBoxTrade", "market"), ("CheckBoxWhisper", "tell"), ("CheckBoxAlly", "ally"), ("CheckBoxHero", "hero"), ("CheckBoxUnion", "union"),
        };
        static readonly string[] ChatBoxes = { "CheckBoxNormal", "CheckBoxShout", "CheckBoxPledge", "CheckBoxParty", "CheckBoxTrade", "CheckBoxWhisper", "CheckBoxAlly", "CheckBoxHero", "CheckBoxUnion" };

        readonly UiDeps deps;
        readonly WorldT world;
        /// <summary>Raiz da interface do jogo (o #scrGame).</summary>
        public readonly RectTransform Root;
        /// <summary>Camada das janelas do Interface.xdat.</summary>
        public readonly L2Layer Layer;
        // janelas genericas (moldura original)
        public readonly NpcHtmlWnd Npc;
        public readonly UiWindow Board;
        public readonly UiWindow Shop;
        // janelas do Interface.xdat
        public readonly L2Wnd StatusWnd;
        public readonly L2Wnd TargetWnd;
        public readonly L2Wnd AbnormalWnd;
        public readonly L2Wnd ChatWnd;
        public readonly L2Wnd SysMsgWnd;
        public readonly L2Wnd ChatFilterWnd;
        /// <summary>m_filterInfo + chatfilter.ini (ChatWnd.uc / ChatFilterWnd.uc).</summary>
        public readonly ChatFilter Filter = new();
        public readonly L2Wnd MenuWnd;
        public readonly L2Wnd SysMenuWnd;
        public readonly L2Wnd RadarWnd;
        /// <summary>PartyWnd / PartyWndCompact / PartyWndOption.</summary>
        public readonly PartyView Party;
        /// <summary>ZoneTitleWnd.</summary>
        public readonly ZoneTitleView ZoneTitle;
        /// <summary>MinimapWnd / MinimapWnd_Expand.</summary>
        public readonly MinimapView Minimap;
        /// <summary>MultiSellWnd do xdat.</summary>
        public readonly MultiSellView MultiSellWnd;
        /// <summary>MessengerWnd nativo (lista de amigos).</summary>
        public readonly MessengerView Messenger;
        public readonly L2Wnd RestartWnd;
        /// <summary>Janelas de macro (#0032).</summary>
        public MacroView Macros { get; private set; }
        /// <summary>DialogBox (UICommonAPI: DialogShow, DialogIsMine...).</summary>
        public readonly DialogBoxView Dialog;
        public readonly L2Wnd DialogWnd;
        public readonly L2Wnd Inv;
        public readonly L2Wnd Main;
        /// <summary>Barras horizontais e verticais (o botao de girar troca o conjunto visivel).</summary>
        readonly List<L2Wnd> hbars = new();
        readonly List<L2Wnd> vbars = new();
        readonly int[] barPage = { 0, 1, 2 };
        int barCount = 1;
        bool barsLocked;
        bool vertical;
        L2Log chatLog;
        string chatTab = "NormalChat";
        int mainTab = -1;
        /// <summary>Aba de cima da MainWnd (GetTopIndex do MainTabCtrl).</summary>
        int mainTopTab;
        (int listId, List<MultisellEntry> entries)? multisell;
        List<string> boardParts = new();
        int boardTimer;
        Dictionary<int, InvItem> items = new();
        List<SkillInfo> skills = new();
        Dictionary<int, Shortcut> shortcuts = new();
        UserInfo lastUser;
        readonly Dictionary<int, (double until, double total)> reuse = new();
        readonly HashSet<int> autoShots = new();
        readonly List<(int skillId, int level, double until)> buffs = new();
        Entity target;

        /// <summary>
        /// Cria a interface em `root` (um RectTransform em tela cheia, ex.: filho de UiRoot.Rect). Precisa de
        /// GameData.LoadTexts e L2WndUtil.LoadL2Ui prontos.
        /// </summary>
        public GameUi(RectTransform root, WorldT world, UiDeps deps)
        {
            Root = root;
            this.world = world;
            this.deps = deps ?? new UiDeps();
            Layer = new L2Layer(root);
            Shop = new UiWindow("shop", "Loja", root, 380, 380, 100);
            Npc = new NpcHtmlWnd(Layer);
            Board = new UiWindow("board", "Community Board", root, Mathf.Min(780, UiRoot.Size.x - 24), 40, 60);

            // ---- status e alvo
            StatusWnd = new L2Wnd("StatusWnd", Layer, new WndOpts { AriaLabel = "Status" });
            TargetWnd = new L2Wnd("TargetStatusWnd", Layer, new WndOpts { AriaLabel = "Alvo" });
            foreach (var n in new[] { "BackExpTex", "NpcInfo", "txtPledge", "texPledgeCrest", "txtPledgeName", "txtAlliance", "texPledgeAllianceCrest", "txtPledgeAllianceName" })
                TargetWnd.ShowCtrl(n, false);
            // os botoes Party/Trocar/Amigo do porte nao existem no TargetStatusWnd do original (02 §3.1 da #0024)
            TargetWnd.OnClick("btnClose", () => this.deps.CancelTarget());
            // OnFrameExpandClick -> SetExpandMode (TargetStatusWnd.uc:464-487)
            TargetWnd.OnFrameExpand = SetTargetExpand;
            // StatusWnd.uc:47-56: clique com x em (13, largura - 10) = RequestSelfTarget
            var sev = UiEvents.Of(StatusWnd.El);
            var front = sev.OnDown;
            sev.OnDown = e =>
            {
                front?.Invoke(e);
                var x = e.position.x / UiRoot.PixelScale - StatusWnd.ScreenRect().X;
                if (StatusHit(x, StatusWnd.Size[0])) SelfTarget();
            };

            // ---- buffs
            AbnormalWnd = new L2Wnd("AbnormalStatusWnd", Layer, new WndOpts { AriaLabel = "Efeitos ativos" });

            // ---- chat e mensagens do sistema
            ChatWnd = new L2Wnd("ChatWnd", Layer, new WndOpts { AriaLabel = "Chat" });
            // SystemMsgWnd: ancorada no ChatWnd (xdat TOP_LEFT -> ChatWnd.BOTTOM_LEFT (0,-5), parentWnd ChatWnd); acompanha o chat
            // e nao se arrasta sozinha
            SysMsgWnd = new L2Wnd("SystemMsgWnd", Layer, new WndOpts { AriaLabel = "Mensagens do sistema", Movable = false });
            chatLog = ChatWnd.Log("NormalChat");
            BuildChatInput();
            ChatWnd.OnTab = (_, _, tgt) =>
            {
                if (tgt == null) return;
                chatTab = tgt;
                // HandleTabClick com OldChatting: troca o prefixo de canal do campo pelo da aba nova
                if (L2Options.GetBool("Game", "OldChatting") && ChatInput)
                {
                    var t = ChatInput.text;
                    if (t.Length > 0 && Array.IndexOf(L2Chat.TabPrefix, t.Substring(0, 1), 1) > 0) t = t.Substring(1);
                    ChatInput.text = L2Chat.TabPrefix[Math.Max(0, Array.IndexOf(TabNames, tgt))] + t;
                }
                ChatWnd.Log(tgt)?.ScrollToEnd();
                // a aba destacada continua na tela (o TabCtrl so esconde as que estao na janela)
                foreach (var k in splitChats.Keys) ChatWnd.Get(TabNames[k])?.gameObject.SetActive(true);
            };
            BindChatSplit();
            ChatWnd.ShowCtrl("LanguageTexture", false);
            // ChatWnd.uc:120-127: as 5 abas com SetScrollBarPosition(5, 10, -25) (acima do botao de filtro); a SystemMsgList
            // fica com o (5, 10, 0) do NCChatListBox::OnCreate
            foreach (var n in TabNames) ChatWnd.Log(n)?.SetScrollBarPosition(5, 10, -25);
            // filtro do chat (martelinho): ChatFilterWnd do xdat, em cima da janela de mensagens do sistema
            var fdef = L2WndUtil.WindowDef("ChatFilterWnd");
            var fj = (JObject)fdef.J.DeepClone();
            if (fj["anchor"] is JObject fa) fa["ctrl"] = "SystemMsgWnd";
            ChatFilterWnd = new L2Wnd("ChatFilterWnd", Layer, new WndOpts { Def = new L2Ctrl { J = fj, Children = fdef.Children }, AriaLabel = "Filtro do chat", Frame = false });
            LoadFilter();
            // o ChatFilterBtn (5,121)-(20,136) fica dentro do retangulo das listas (0,0)-(343,141), criadas depois dele no xdat;
            // no cliente o botao recebe o clique mesmo assim, entao aqui ele passa para cima da area de rolagem das listas
            ChatWnd.Get("ChatFilterBtn")?.transform.SetAsLastSibling();
            ChatWnd.OnClick("ChatFilterBtn", ToggleFilter);
            ChatFilterWnd.OnClick("ChatFilterOK", SaveFilterFromWindow);
            ChatFilterWnd.OnClick("ChatFilterCancel", () => ChatFilterWnd.Hide());
            // OnClickCheckBox (ChatFilterWnd.uc:18-110): todo clique reaplica as regras de habilitacao
            foreach (var (box, _) in FilterBoxes)
            {
                var b = ChatFilterWnd.Check(box);
                var name = box;
                if (b) b.onValueChanged.AddListener(_ => OnFilterCheckClick(name));
            }
            foreach (var box in new[] { "SystemMsgBox", "DamageBox", "ItemBox", "CheckBoxCommand" })
            {
                var b = ChatFilterWnd.Check(box);
                var name = box;
                if (b) b.onValueChanged.AddListener(_ => OnFilterCheckClick(name));
            }

            // ---- barras de atalho (3 barras horizontais empilhadas, presas a primeira)
            // a vertical primeiro: a horizontal principal se ancora nela
            for (var i = 0; i < Bars; i++) vbars.Add(BuildBar(i, true));
            for (var i = 0; i < Bars; i++) hbars.Add(BuildBar(i, false));
            LoadBarState();

            // ---- menu, menu do sistema, radar
            MenuWnd = new L2Wnd("MenuWnd", Layer, new WndOpts { AriaLabel = "Menu" });
            SysMenuWnd = new L2Wnd("SystemMenuWnd", Layer, new WndOpts { AriaLabel = "Menu do sistema" });
            RadarWnd = new L2Wnd("RadarContainerWnd", Layer, new WndOpts { AriaLabel = "Radar" });
            Party = new PartyView(Layer);
            ZoneTitle = new ZoneTitleView(Layer);
            Minimap = new MinimapView(Layer);
            Messenger = new MessengerView(Layer);
            // MessengerBtn do chat: ToggleMsnWindow (ChatWnd.uc:210-212)
            ChatWnd.OnClick("MessengerBtn", Messenger.Toggle);
            MultiSellWnd = new MultiSellView(Layer)
            {
                Send = b => this.deps.Send(b), Ask = (id, cb) => Ask(id, cb), HideDialog = () => Dialog.Hide(), HideInventory = () => Inv.Hide(),
            };
            BuildRadar();
            // MacroListWnd / MacroEditWnd / MacroInfoWnd (#0032): as linhas da macro rodam pelo chat
            Macros = new MacroView(Layer, this, b => this.deps.Send(b)) { Run = t => OnChatSubmit?.Invoke(t, 0) };

            // ---- reinicio e dialogo
            RestartWnd = new L2Wnd("RestartMenuWnd", Layer, new WndOpts { AriaLabel = "Você morreu", Movable = false });
            L2WndUtil.Paint(RestartWnd.El, "L2UI_CH3.Calculate.Calculate12_back", 128, 128);
            Dialog = new DialogBoxView(Layer);
            DialogWnd = Dialog.Wnd;

            // ---- inventario e janela principal
            Inv = new L2Wnd("InventoryWnd", Layer, new WndOpts { AriaLabel = "Inventário" });
            Inv.OnShow += () =>
            {
                if (invDirty) RenderInv();
            };
            // TrashButton/CrystallizeButton so recebem item arrastado (InventoryWnd.uc OnDropItem); o clique nao faz nada
            InvScript.HasCrystallize = () => skills.Exists(k => k.Id == 248);
            InvScript.IsCrystallizable = id => ItemStats.Of(id) is { } st && st.CrystalType > 0 && (st.Weapon || st.Armor);
            Main = new L2Wnd("MainWnd", Layer, new WndOpts { Embed = new[] { "DetailStatusWnd", "MagicSkillWnd", "ActionWnd", "ClanWnd", "QuestTreeWnd" }, AriaLabel = "Personagem" });
            // MainWnd.uc:18-34: OnMinimize -> Iconize com o icone e a dica da aba de cima
            Main.OnMinimize = () =>
            {
                int[] tips = { 194, 196, 197, 895, 198 };
                var i = Mathf.Clamp(mainTopTab, 0, 4);
                Main.Iconize("L2UI_CH3.TABBUTTON.MainWndTabIcon" + (i + 1), tips[i]);
            };
            Main.OnTab = (_, i, _) =>
            {
                mainTopTab = i;
                var tabs = Main.Ctrl("MainTabCtrl")?.J["tabs"] as JArray;
                var tip = tabs != null && i >= 0 && i < tabs.Count ? (int)L2Ctrl.ToNum(tabs[i]["tooltip"], -1) : -1;
                var t = GameData.SysString(tip, "");
                t = Regex.Replace(t, @"\s*\(.*\)$", "");
                Main.SetTitle(t.Length > 0 ? t : "Personagem");
            };
            Main.SelectTab("MainTabCtrl", 0);
            FillActions();
            BindMenus();
            RenderBars();
            BuildHudExtras();
            // HUD fixa aparece ao entrar no mundo (ShowHud), janelas de uso sob demanda
        }

        /// <summary>Mostra a HUD de jogo (ao entrar no mundo).</summary>
        public void ShowHud()
        {
            foreach (var w in new[] { StatusWnd, AbnormalWnd, ChatWnd, MenuWnd, RadarWnd }) w.Show();
            // ChatWnd.OnShow (ChatWnd.uc:172-184): a SystemMsgWnd segue [Game] SystemMsgWnd
            SyncSystemMsgWnd();
            SetBarCount(barCount);
            Party.EnterState();
        }

        /// <summary>Esconde todas as janelas do xdat.</summary>
        public void HideHud()
        {
            foreach (var w in Layer.Windows.Values.ToList()) w.Hide();
        }

        void OpenMain(int tab)
        {
            if (Main.Visible && mainTab == tab)
            {
                Main.Hide();
                return;
            }
            Main.Show();
            Main.SelectTab("MainTabCtrl", tab);
            mainTab = tab;
        }

        void BindMenus()
        {
            MenuWnd.OnClick("BtnCharInfo", () => OpenMain(0));
            MenuWnd.OnClick("BtnInventory", () => Inv.Toggle());
            // MenuWnd.uc:17-19, 55-58: Map = RequestOpenMinimap (o servidor responde com o ShowMiniMap); as dicas sao as
            // sysstrings do popupValue do xdat (434, 195, 925, 193)
            MenuWnd.OnClick("BtnMap", () => deps.Send(UiPackets.RequestShowMiniMap()));
            MenuWnd.OnClick("BtnSystemMenu", () => SysMenuWnd.Toggle());
            var s = SysMenuWnd;
            s.OnClick("btnBBS", () =>
            {
                deps.Send(UiPackets.RequestShowBoard());
                s.Hide();
            });
            s.OnClick("btnOption", () =>
            {
                deps.Options();
                s.Hide();
            });
            // SystemMenuWnd.uc:31-63: DialogShow(DIALOG_Warning, sm126/sm125), ID 0 -> esconde o menu e ExecRestart, ID 1 -> ExecQuit
            s.OnClick("btnRestart", () => Ask(126, ok =>
            {
                if (!ok) return;
                s.Hide();
                deps.Restart();
            }));
            s.OnClick("btnQuit", () => Ask(125, ok =>
            {
                if (ok) deps.Logout();
            }));
            foreach (var n in new[] { "btnMacro", "btnHelpHtml", "btnPetition" })
            {
                var b = s.Button(n);
                if (b) b.Interactable = false;
            }
        }

        // ------------------------------------------------------------ alvo
        /// <summary>Modo expandido do alvo (m_bExpand).</summary>
        bool targetExpand;

        /// <summary>Nome do cla pelo id (UIDATA_CLAN.GetName); "" quando nao se conhece.</summary>
        public Func<int, string> ClanName = _ => "";

        /// <summary>SetExpandMode: alterna BackTex/BackExpTex e refaz o alvo (as linhas de cla so no modo expandido).</summary>
        void SetTargetExpand(bool on)
        {
            targetExpand = on;
            TargetWnd.ShowCtrl("BackTex", !on);
            TargetWnd.ShowCtrl("BackExpTex", on);
            if (target != null) UpdateTarget();
            else TargetExpandLines(null);
        }

        /// <summary>
        /// Linhas do modo expandido (TargetStatusWnd.uc:300-379): jogador = "Pledge" e "Alliance" com os nomes; NPC = a arvore
        /// de propriedades (GetNpcProperty), que o porte nao tem.
        /// </summary>
        void TargetExpandLines(Entity e)
        {
            var pledge = targetExpand && e != null && e.Kind == "player";
            foreach (var n in new[] { "txtPledge", "txtPledgeName", "txtAlliance", "txtPledgeAllianceName" }) TargetWnd.ShowCtrl(n, pledge);
            foreach (var n in new[] { "texPledgeCrest", "texPledgeAllianceCrest", "NpcInfo" }) TargetWnd.ShowCtrl(n, false);
            if (!pledge) return;
            var clan = e.ClanId > 0 ? ClanName(e.ClanId) ?? "" : "";
            TargetWnd.Text("txtPledgeName", clan);
            var t = TargetWnd.TextEl("txtPledgeName");
            // cor do nome do cla: 176/152/121 (academia e guerra pelo GetClanType/GetNameValue, sem os dados no porte)
            if (t) t.color = new Color32(176, 152, 121, 255);
        }

        /// <summary>StatusWnd.OnLButtonDown: so entre x = 13 e largura - 10 (fora disso e a moldura).</summary>
        public static bool StatusHit(float x, float width) => x > 13 && x < width - 10;

        /// <summary>RequestSelfTarget: o Action sobre o proprio objectId [V] (o pacote do nativo nao foi lido).</summary>
        void SelfTarget()
        {
            if (lastUser != null && lastUser.ObjectId != 0) Party.Action(lastUser.ObjectId, false);
        }

        /// <summary>Alvo selecionado (ou null): nome, nivel e HP do alvo.</summary>
        public void SetTarget(Entity e)
        {
            target = e;
            if (e == null)
            {
                TargetWnd.Hide();
                return;
            }
            TargetWnd.Show();
            UpdateTarget();
        }

        /// <summary>LevelDiff do EV_ReceiveTargetLevelDiff (MyTargetSelected 0xa6).</summary>
        public int TargetLevelDiff;

        /// <summary>Atualiza a TargetStatusWnd como o HandleTargetUpdate (TargetStatus.Compute; chamado pelo Tick e quando muda).</summary>
        public void UpdateTarget()
        {
            var e = target;
            if (e == null) return;
            var self = e.Kind == "self";
            var v = TargetStatus.Compute(e.Kind == "npc", false, e.Attackable, self, false, e.NpcId, e.Name, e.PledgeClass, TargetLevelDiff,
                id => GameData.SysString(id, ""));
            var name = TargetWnd.TextEl("UserName");
            if (name)
            {
                if (name.text != v.Name) name.text = v.Name;
                name.alignment = TextAnchor.MiddleCenter; // SetName(..., TA_Center)
                // SetName sem cor: a cor padrao do NameCtrl ([?] nativo; usa o cinza claro da faixa -2..+2)
                var c = v.Color ?? 0xffdcdcdc;
                name.color = new Color32((byte)(c >> 16), (byte)(c >> 8), (byte)c, (byte)(c >> 24));
            }
            TargetWnd.Text("RankName", v.Rank);
            var rank = TargetWnd.TextEl("RankName");
            if (rank) rank.alignment = TextAnchor.MiddleCenter;
            TargetWnd.ShowCtrl("RankName", !v.Hp);
            TargetWnd.ShowCtrl("barHP", v.Hp);
            if (v.Hp) TargetWnd.Bar("barHP", e.MaxHp > 0 ? e.Hp : 1, e.MaxHp > 0 ? e.MaxHp : 1);
            TargetWnd.ShowCtrl("barMP", v.Mp);
            if (v.Mp && self) TargetWnd.Bar("barMP", selfMp, selfMaxMp > 0 ? selfMaxMp : 1);
            TargetExpandLines(e);
        }

        // ------------------------------------------------------------ status
        /// <summary>Barras de HP/MP/CP da StatusWnd.</summary>
        public void SetBars(int hp, int maxHp, int mp, int maxMp, int cp, int maxCp)
        {
            StatusWnd.Bar("HPBar", hp, maxHp);
            StatusWnd.Bar("MPBar", mp, maxMp);
            StatusWnd.Bar("CPBar", cp, maxCp);
            selfMp = mp;
            selfMaxMp = maxMp;
        }

        int selfMp, selfMaxMp;

        static long Stat(UserInfo u, string k) => u.Stats != null && u.Stats.TryGetValue(k, out var v) ? v : 0;

        static string F2(double v) => v.ToString("0.00", CultureInfo.InvariantCulture);

        /// <summary>Dados do personagem (UserInfo): nome, nivel, EXP, barras e o status detalhado.</summary>
        public void SetUser(UserInfo u)
        {
            lastUser = u;
            StatusWnd.Text("UserName", u.Name);
            StatusWnd.Text("StatusWnd_LevelTextBox", u.Level.ToString());
            var pct = ExpPercent(u.Level, Stat(u, "exp"));
            StatusWnd.Bar("EXPBar", (float)pct, 100, F2(pct) + "%");
            SetBars(u.Hp, u.MaxHp, u.Mp, u.MaxMp, u.Cp, u.MaxCp);
            RenderStatus(u, pct);
        }

        /// <summary>Ultimo UserInfo recebido.</summary>
        public UserInfo User => lastUser;

        void RenderStatus(UserInfo u, double pct)
        {
            if (!Main.Embedded.TryGetValue("DetailStatusWnd", out var w)) return;
            w.ShowCtrl("txtName2", false);
            w.Text("txtName1", u.Name + (string.IsNullOrEmpty(u.Title) ? "" : " · " + u.Title));
            w.Text("txtLvName", $"{u.Level} {GameData.ClassName(u.ClassId)}");
            w.Text("txtPledge", "");
            void Bar(string tex, string txt, double cur, double max, string label = null)
            {
                w.TexWidth(tex, (float)Math.Round(85 * (max > 0 ? Math.Min(1, cur / max) : 0)));
                w.Text(txt, label ?? $"{Math.Round(cur)}/{Math.Round(max)}");
            }
            Bar("texHP", "txtHP", u.Hp, u.MaxHp);
            Bar("texMP", "txtMP", u.Mp, u.MaxMp);
            Bar("texCP", "txtCP", u.Cp, u.MaxCp);
            Bar("texExp", "txtExp", pct, 100, F2(pct) + "%");
            var load = Stat(u, "load");
            var maxLoad = Stat(u, "maxLoad");
            Bar("texWeight", "txtWeight", load, maxLoad, $"{Math.Round(load / (double)Math.Max(1, maxLoad) * 100)}%");
            w.Text("txtSP", Stat(u, "sp").ToString());
            var vals = new (string, string)[]
            {
                ("txtPhysicalAttack", Stat(u, "pAtk").ToString()), ("txtPhysicalDefense", Stat(u, "pDef").ToString()), ("txtHitRate", Stat(u, "accuracy").ToString()),
                ("txtCriticalRate", Stat(u, "crit").ToString()), ("txtPhysicalAttackSpeed", Stat(u, "pAtkSpd").ToString()), ("txtMagicalAttack", Stat(u, "mAtk").ToString()),
                ("txtMagicDefense", Stat(u, "mDef").ToString()), ("txtPhysicalAvoid", Stat(u, "evasion").ToString()),
                ("txtMovingSpeed", Math.Round(u.RunSpd * u.MoveMul).ToString(CultureInfo.InvariantCulture)),
                ("txtMagicCastingSpeed", Stat(u, "mAtkSpd").ToString()), ("txtSTR", Stat(u, "STR").ToString()), ("txtDEX", Stat(u, "DEX").ToString()),
                ("txtCON", Stat(u, "CON").ToString()), ("txtINT", Stat(u, "INT").ToString()), ("txtWIT", Stat(u, "WIT").ToString()), ("txtMEN", Stat(u, "MEN").ToString()),
                ("txtCriminalRate", Stat(u, "karma").ToString()), ("txtPVP", $"{Stat(u, "pvp")} / {Stat(u, "pk")}"), ("txtSociality", "0"), ("txtRemainSulffrage", "0"),
            };
            w.ShowCtrl("txtGmMoving", false);
            foreach (var (k, v) in vals) w.Text(k, v);
        }

        // ------------------------------------------------------------ chat
        /// <summary>Campo de digitacao do chat (ChatEditBox).</summary>
        public InputField ChatInput { get; private set; }

        /// <summary>
        /// Texto enviado no chat (Enter no campo) e a aba ativa (0 All, 1 +Trade, 2 #Party, 3 @Clan, 4 $Alliance), como o
        /// ProcessChatMessage(texto, m_chatType) do ChatWnd.uc. O App classifica (L2Chat.Classify) e envia.
        /// </summary>
        public Action<string, int> OnChatSubmit = (_, _) => { };

        int focusFrame = -10;

        void BuildChatInput()
        {
            ChatInput = ChatWnd.Edit("ChatEditBox");
            if (!ChatInput) return;
            ChatInput.lineType = InputField.LineType.SingleLine;
            ChatInput.characterLimit = L2Chat.MaxInput;
            ChatInput.onEndEdit.AddListener(OnChatEndEdit);
            // ChatWnd.uc:361-366: EV_ChatWndSetFocus foca o campo; EV_ChatWndSetString troca o texto (nomes de sussurro)
            L2Events.Register(Ev.EV_ChatWndSetFocus, _ => FocusChat());
            L2Events.Register(Ev.EV_ChatWndSetString, p =>
            {
                string s = null;
                if (!L2Param.ParseString(p, "String", ref s) || !ChatInput) return;
                ChatInput.text = s;
                ChatInput.caretPosition = s.Length;
            });
            // nomes de sussurro: quem sussurrou ou para quem se sussurrou (CreatureSay tipo 2)
            L2Events.Register(Ev.EV_ChatMessage, p =>
            {
                var t = 0;
                string m = null;
                if (L2Param.ParseInt(p, "Type", ref t) && t == 2 && L2Param.ParseString(p, "Msg", ref m)) Whisper.Add(ChatWhisper.Sender(m));
            });
            // NCEditBox::OnKeyDown (nw:0x10019880) no campo de chat: setas para cima e para baixo mandam ao NCChatWnd os codigos
            // 4 e 5 (ChangeWhisperName 1 e 0) [I]; o codigo 3 (AttachWhisperName) [V] nao tem tecla achada
            ChatInput.gameObject.AddComponent<UiTicker>().OnTick = _ =>
            {
                var kb = UnityEngine.InputSystem.Keyboard.current;
                if (kb == null || !ChatInput.isFocused) return;
                string s = null;
                if (kb.upArrowKey.wasPressedThisFrame) s = Whisper.Change(1);
                else if (kb.downArrowKey.wasPressedThisFrame) s = Whisper.Change(0);
                if (s != null) L2Events.Dispatch(new PacketEvents.Event(Ev.EV_ChatWndSetString, L2Param.Add("", "String", s)));
            };
        }

        /// <summary>Nomes de sussurro do campo do chat (NCChatWnd).</summary>
        public readonly ChatWhisper Whisper = new();

        /// <summary>AttachWhisperName: poe "\"nome " no campo (sem nome, o ultimo que sussurrou).</summary>
        public void AttachWhisperName(string name = null)
        {
            var s = Whisper.Attach(name);
            if (s != null) L2Events.Dispatch(new PacketEvents.Event(Ev.EV_ChatWndSetString, L2Param.Add("", "String", s)));
        }

        void OnChatEndEdit(string _)
        {
            var kb = UnityEngine.InputSystem.Keyboard.current;
            var enter = kb != null && (kb.enterKey.wasPressedThisFrame || kb.numpadEnterKey.wasPressedThisFrame || kb.enterKey.isPressed || kb.numpadEnterKey.isPressed);
            if (!enter) return;
            // o mesmo Enter que abriu o campo nao envia
            if (Time.frameCount - focusFrame <= 1 && ChatInput.text.Length == 0)
            {
                FocusChat();
                return;
            }
            SubmitChat();
        }

        /// <summary>Envia o texto do campo (prefixo do canal da aba), limpa e tira o foco.</summary>
        public void SubmitChat()
        {
            var inp = ChatInput;
            if (!inp) return;
            // como o OnCompleteEditBox do ChatWnd.uc: o texto vai sem cortar espacos, com o indice da aba; com OldChatting o
            // campo volta com o prefixo da aba; com EnterChatting o campo perde o foco
            var text = inp.text;
            var tab = Math.Max(0, Array.IndexOf(TabNames, chatTab));
            inp.text = L2Options.GetBool("Game", "OldChatting") ? L2Chat.TabPrefix[tab] : "";
            if (L2Options.GetBool("Game", "EnterChatting", true))
            {
                inp.DeactivateInputField();
                if (UnityEngine.EventSystems.EventSystem.current && UnityEngine.EventSystems.EventSystem.current.currentSelectedGameObject == inp.gameObject)
                    UnityEngine.EventSystems.EventSystem.current.SetSelectedGameObject(null);
            }
            if (text.Length > 0) OnChatSubmit?.Invoke(text, tab);
        }

        // ------------------------------------------------------------ abas destacadas do chat (OnTabSplit / OnTabMerge)
        /// <summary>Abas fora da janela: indice -> (pai, posicao e tamanho dentro do ChatWnd).</summary>
        readonly Dictionary<int, (Transform parent, Vector2 pos, Vector2 size)> splitChats = new();

        /// <summary>
        /// Arrastar uma aba do ChatTabCtrl para fora da janela destaca a lista (OnTabSplit); arrastar a aba de volta para dentro
        /// junta (OnTabMerge). [I] o gesto do NCTabCtrl (o nativo que chama os dois eventos) nao foi lido.
        /// </summary>
        void BindChatSplit()
        {
            for (var i = 0; i < TabNames.Length; i++)
            {
                var k = i;
                var b = ChatWnd.TabButton("ChatTabCtrl", i);
                if (!b) continue;
                var ev = UiEvents.Of(b);
                ev.OnBeginDrag = _ => { };
                ev.OnDrag = _ => { };
                ev.OnEndDrag = e =>
                {
                    var px = UiRoot.PixelScale;
                    var p = new Vector2(e.position.x / px, UiRoot.Size.y - e.position.y / px);
                    var r = ChatWnd.ScreenRect();
                    var inside = p.x >= r.X && p.y >= r.Y && p.x < r.X + r.W && p.y < r.Y + r.H;
                    if (!inside) TabSplit(k, p);
                    else TabMerge(k);
                };
            }
        }

        /// <summary>Abas destacadas (indices de TabNames).</summary>
        public IReadOnlyCollection<int> SplitTabs => splitChats.Keys;

        /// <summary>
        /// ChatWnd.uc:229-264 OnTabSplit: seleciona a aba, tira o tamanho relativo (SetWindowSizeRel -1), a lista vira janela
        /// solta (SetSettledWnd) e ganha o fundo (EnableTexture). Fica onde a aba foi solta, com o tamanho de antes.
        /// </summary>
        public void TabSplit(int k, Vector2 at)
        {
            if (k < 0 || k >= TabNames.Length || splitChats.ContainsKey(k)) return;
            var el = ChatWnd.Get(TabNames[k]);
            if (!el) return;
            ChatWnd.SelectTab("ChatTabCtrl", k);
            splitChats[k] = (el.parent, el.anchoredPosition, el.sizeDelta);
            el.SetParent(Layer.El, false);
            el.anchoredPosition = new Vector2(Mathf.Round(at.x), -Mathf.Round(at.y));
            el.gameObject.SetActive(true);
            el.SetAsLastSibling();
            // EnableTexture(true): o fundo das listas do chat [I] Chatting_Back3 (o corpo do ChatWnd)
            var back = el.Find("splitback");
            if (!back) L2WndUtil.Paint(UiRoot.Box("splitback", el, 0, 0, el.sizeDelta.x, el.sizeDelta.y), "L2UI_CH3.ChatWnd.Chatting_Back3", el.sizeDelta.x, el.sizeDelta.y, PaintMode.Tile).transform.parent.SetAsFirstSibling();
            else back.gameObject.SetActive(true);
            var ev = UiEvents.Of(el);
            ev.OnBeginDrag = _ => { };
            ev.OnDrag = e =>
            {
                if (!splitChats.ContainsKey(k)) return;
                el.anchoredPosition += e.delta / UiRoot.PixelScale;
            };
            ev.OnEndDrag = _ => { };
            ChatWnd.Log(TabNames[k])?.Invalidate();
        }

        /// <summary>
        /// ChatWnd.uc:266-300 OnTabMerge: volta para dentro do ChatWnd na posicao e no tamanho da NormalChat (relativo, -46 de
        /// altura) e sem o fundo.
        /// </summary>
        public void TabMerge(int k)
        {
            if (!splitChats.TryGetValue(k, out var o)) return;
            splitChats.Remove(k);
            var el = ChatWnd.Get(TabNames[k]);
            if (!el) return;
            el.SetParent(o.parent, false);
            var normal = ChatWnd.Get(TabNames[0]);
            el.anchoredPosition = normal && k != 0 ? normal.anchoredPosition : o.pos;
            el.sizeDelta = normal && k != 0 ? normal.sizeDelta : o.size;
            el.Find("splitback")?.gameObject.SetActive(false);
            var ev = UiEvents.Of(el);
            ev.OnDrag = null;
            ChatWnd.SelectTab("ChatTabCtrl", k);
            ChatWnd.Log(TabNames[k])?.Invalidate();
        }

        /// <summary>Foco no campo do chat (Enter no jogo).</summary>
        public void FocusChat()
        {
            if (!ChatInput || !ChatWnd.Visible) return;
            focusFrame = Time.frameCount;
            ChatInput.Select();
            ChatInput.ActivateInputField();
        }

        /// <summary>
        /// HandleChatmessage (ChatWnd.uc:389-431): a linha vai para cada aba e para a SystemMsgWnd que o CheckFilter liberar.
        /// chatType = EChatType (o tipo do Say2; -1 = pela classe da linha), sysType = ESystemMsgType (so no CHAT_SYSTEM).
        /// </summary>
        public void ChatLine(string cls, string text, string color = null, int chatType = -1, int sysType = 0)
        {
            Color? c = string.IsNullOrEmpty(color) ? null : UiRoot.Css(color, UiKit.TextColor);
            var type = chatType >= 0 ? ChatFilter.TypeOfSay2(chatType) : ChatFilter.TypeOfClass(cls);
            var st = type == ChatType.System ? (SystemMsgType)sysType : SystemMsgType.None;
            for (var w = 0; w < ChatFilter.WindowCount; w++)
                if (Filter.CheckFilter(type, w, st)) ChatWnd.Log(TabNames[w])?.Add(text, cls, c);
            if (Filter.CheckFilter(type, ChatFilter.WindowSystem, st)) SysMsgWnd.Log("SystemMsgList")?.Add(text, cls, c);
        }

        // ------------------------------------------------------------ filtro do chat (ChatFilterWnd)
        int ChatTabIndex => Math.Max(0, Array.IndexOf(TabNames, chatTab));

        static void SetCheck(Toggle b, bool on)
        {
            if (b) b.SetIsOnWithoutNotify(on);
        }

        static void SetDisable(Toggle b, bool disabled)
        {
            if (b) b.interactable = !disabled;
        }

        bool IsChecked(string name)
        {
            var b = ChatFilterWnd.Check(name);
            // IsChecked num controle que nao e checkbox (CheckBoxChat e TextBox) devolve false [I]
            return b && b.isOn;
        }

        /// <summary>ChatFilterBtn (ChatWnd.uc:199-209): alterna a janela; antes de mostrar, SetChatFilterButton.</summary>
        void ToggleFilter()
        {
            if (ChatFilterWnd.Visible)
            {
                ChatFilterWnd.Hide();
                return;
            }
            SetChatFilterButton();
            ChatFilterWnd.Show();
        }

        /// <summary>SetChatFilterButton (ChatWnd.uc:790-908).</summary>
        void SetChatFilterButton()
        {
            var w = ChatFilterWnd;
            var tab = ChatTabIndex;
            SetCheck(w.Check("SystemMsgBox"), L2Options.GetBool("Game", "SystemMsgWnd"));
            SetCheck(w.Check("DamageBox"), L2Options.GetBool("Game", "SystemMsgWndDamage"));
            SetCheck(w.Check("ItemBox"), L2Options.GetBool("Game", "SystemMsgWndExpendableItem"));
            // MakeFullSystemMsg(sysmsg 1995 "$s1 channel filtering option", sysstring da aba)
            w.Text("CurrentText", GameData.SystemMessage(1995, new List<string> { GameData.SysString(TabSysString[tab], TabNames[tab]) }).Text);
            var f = Filter.Filters[tab];
            foreach (var (box, key) in FilterBoxes)
                if (box != "CheckBoxChat") SetCheck(w.Check(box), f.Get(key));
            SetCheck(w.Check("CheckBoxCommand"), Filter.NoUnionCommanderMessage);
            var system = IsChecked("CheckBoxSystem");
            SetDisable(w.Check("CheckBoxDamage"), !system);
            SetDisable(w.Check("CheckBoxItem"), !system);
            // o estado de DamageBox/ItemBox em relacao ao SystemMsgBox nao e ajustado aqui, so no clique (ChatFilterWnd.uc:69-81)
            ApplyChatBoxRules(tab);
        }

        /// <summary>Os 9 checkboxes de chat habilitados, menos o do tipo da propria aba (ChatWnd.uc:884-906, ChatFilterWnd.uc:83-109).</summary>
        void ApplyChatBoxRules(int tab)
        {
            foreach (var box in ChatBoxes) SetDisable(ChatFilterWnd.Check(box), false);
            var forced = tab switch { ChatFilter.WindowTrade => "CheckBoxTrade", ChatFilter.WindowParty => "CheckBoxParty", ChatFilter.WindowClan => "CheckBoxPledge", ChatFilter.WindowAlly => "CheckBoxAlly", _ => null };
            if (forced != null) SetDisable(ChatFilterWnd.Check(forced), true);
        }

        /// <summary>OnClickCheckBox (ChatFilterWnd.uc:18-110).</summary>
        void OnFilterCheckClick(string id)
        {
            var w = ChatFilterWnd;
            if (id == "CheckBoxSystem")
            {
                var on = IsChecked("CheckBoxSystem");
                SetDisable(w.Check("CheckBoxDamage"), !on);
                SetDisable(w.Check("CheckBoxItem"), !on);
            }
            else if (id == "SystemMsgBox")
            {
                var on = IsChecked("SystemMsgBox");
                SetDisable(w.Check("DamageBox"), !on);
                SetDisable(w.Check("ItemBox"), !on);
            }
            ApplyChatBoxRules(ChatTabIndex);
        }

        /// <summary>SaveChatFilterOption (ChatFilterWnd.uc:112-176): m_filterInfo da aba, Option.ini [Game], SystemMsgWnd e o ini.</summary>
        void SaveFilterFromWindow()
        {
            var tab = ChatTabIndex;
            var f = Filter.Filters[tab];
            foreach (var (box, key) in FilterBoxes) f.Set(key, IsChecked(box));
            Filter.NoUnionCommanderMessage = IsChecked("CheckBoxCommand");
            L2Options.SetBool("Game", "SystemMsgWnd", IsChecked("SystemMsgBox"));
            L2Options.SetBool("Game", "SystemMsgWndDamage", IsChecked("DamageBox"));
            L2Options.SetBool("Game", "SystemMsgWndExpendableItem", IsChecked("ItemBox"));
            try
            {
                L2Options.Save();
            }
            catch (Exception e)
            {
                Debug.LogWarning("Option.ini: " + e.Message);
            }
            SyncSystemMsgWnd();
            try
            {
                var path = ChatFilter.FilePath;
                var old = File.Exists(path) ? File.ReadAllText(path) : "";
                File.WriteAllText(path, Filter.SaveTab(old, tab));
            }
            catch (Exception e)
            {
                Debug.LogWarning("chatfilter.ini: " + e.Message);
            }
            // as linhas ja mostradas nao sao refiltradas (so as proximas mensagens)
            ChatFilterWnd.Hide();
        }

        /// <summary>InitFilterInfo (ChatWnd.uc:633-687) com o chatfilter.ini do Unity.</summary>
        void LoadFilter()
        {
            string ini = null;
            try
            {
                if (File.Exists(ChatFilter.FilePath)) ini = File.ReadAllText(ChatFilter.FilePath);
            }
            catch
            {
                /* sem armazenamento: padroes */
            }
            Filter.Init(ini);
        }

        /// <summary>A SystemMsgWnd segue [Game] SystemMsgWnd enquanto o ChatWnd esta visivel.</summary>
        void SyncSystemMsgWnd()
        {
            if (!ChatWnd.Visible) return;
            if (L2Options.GetBool("Game", "SystemMsgWnd")) SysMsgWnd.Show();
            else SysMsgWnd.Hide();
        }

        /// <summary>Apaga o chat e as mensagens do sistema.</summary>
        public void ClearChat()
        {
            foreach (var n in TabNames) ChatWnd.Log(n)?.Clear();
            SysMsgWnd.Log("SystemMsgList")?.Clear();
        }

        /// <summary>objectId do primeiro item com esse nome (diagnostico/testes).</summary>
        public int FindItem(string name)
        {
            foreach (var it in items.Values)
                if (GameData.ItemName(it.ItemId) == name) return it.ObjectId;
            return 0;
        }

        /// <summary>Volta ao estado inicial (logout/restart): esvazia itens, atalhos, skills, chat e esconde tudo.</summary>
        public void Reset()
        {
            items.Clear();
            shortcuts.Clear();
            skills = new List<SkillInfo>();
            target = null;
            foreach (var w in new[] { Board, Shop }) w.Hide();
            Npc.Hide();
            Dialog.Hide();
            HideHud();
            ClearChat();
            RenderBars();
            RenderInv();
            ShowCastBar(0);
        }
    }
}
