// Interface social (Fase 11, ui/social.ts): janela de party, troca, loja privada, amigos, cla e convites.
using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text.RegularExpressions;
using L2Web.Net;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    /// <summary>Dependencias do SocialUi (SocialDeps do TS).</summary>
    public sealed class SocialDeps
    {
        public Action<byte[]> Send = _ => { };
        /// <summary>(classe da linha, texto, cor opcional).</summary>
        public Action<string, string, string> Chat = (_, _, _) => { };
        /// <summary>Itens do inventario (objectId -> itemId, quantidade, equipado) para a troca.</summary>
        public Func<IList<InvItem>> Inventory = () => Array.Empty<InvItem>();
        public Func<int, string> NameOf = id => id.ToString();
    }

    public sealed class SocialUi
    {
        readonly SocialDeps deps;
        readonly RectTransform partyBox;
        public readonly UiWindow Trade;
        public readonly UiWindow Store;
        public readonly UiWindow Clan;
        readonly UiWindow ask;
        readonly UiWindow qty;
        Dictionary<int, PartyMember> party = new();

        /// <summary>Membros da party (sem o proprio personagem), para o PartyMemberCount dos eventos.</summary>
        public int PartyCount => party.Count;
        /// <summary>Nomes dos membros (sem o proprio), para %party1..%party8 dos comandos.</summary>
        public IReadOnlyList<string> PartyNames => party.Values.Select(m => m.Name).ToList();
        int leaderId;
        List<TradeItem> tradeOwn = new();
        List<TradeItem> tradeOther = new();
        int tradePartner;
        bool stateOwn, stateOther;
        List<TradeItem> tradeCandidates = new();

        static readonly Color Ok = new Color32(0x7c, 0xd4, 0x92, 0xff);
        static readonly Color Err = new Color32(0xff, 0x8f, 0x80, 0xff);
        static readonly Color TextCol = new Color32(0xe8, 0xe6, 0xdf, 0xff);

        public SocialUi(RectTransform root, SocialDeps deps)
        {
            this.deps = deps;
            // .hud.partybox.panel.small: left 12, top 120, 200 de largura, coluna com 6 de espaco
            partyBox = UiRoot.Box("partybox", root, 12, 120, 200, 0);
            var border = partyBox.gameObject.AddComponent<Image>();
            border.color = new Color(1, 1, 1, 0.12f);
            var bg = UiRoot.Panel(partyBox, 0, 0, 0, 0, new Color(22 / 255f, 24 / 255f, 28 / 255f, 0.86f));
            bg.name = "back";
            UiRoot.Fill(bg.rectTransform, 1);
            bg.raycastTarget = false;
            bg.gameObject.AddComponent<LayoutElement>().ignoreLayout = true;
            var g = partyBox.gameObject.AddComponent<VerticalLayoutGroup>();
            g.padding = new RectOffset(10, 10, 8, 8);
            g.spacing = 6;
            g.childControlWidth = g.childControlHeight = true;
            g.childForceExpandWidth = true;
            g.childForceExpandHeight = false;
            partyBox.gameObject.AddComponent<ContentSizeFitter>().verticalFit = ContentSizeFitter.FitMode.PreferredSize;
            partyBox.gameObject.SetActive(false);

            Trade = new UiWindow("trade", "Troca", root, 420, 300, 120);
            Store = new UiWindow("pstore", "Loja privada", root, 380, 360, 110);
            Clan = new UiWindow("clan", "Clã", root, 300, 100, 140);
            var size = UiRoot.Size;
            ask = new UiWindow("ask", "Convite", root, 300, size.x / 2 - 150, size.y / 3);
            qty = new UiWindow("tradeqty", "Quantidade", root, 280, size.x / 2 - 140, size.y / 3);
            Trade.OnClose = TradeClose;
        }

        void TradeClose()
        {
            if (tradePartner != 0) deps.Send(SocialPackets.TradeDone(false));
        }

        /// <summary>toLocaleString('pt-BR') de inteiros (1.234.567).</summary>
        static string Num(long n) => n.ToString("#,0", CultureInfo.InvariantCulture).Replace(',', '.');

        // ------------------------------------------------------------ convites (party, troca, amigo)
        void AskYesNo(string text, Action<bool> answer)
        {
            ask.Clear();
            UiKit.Text(ask.Body, text, 11);
            var row = UiKit.Row(ask.Body, 8, TextAnchor.MiddleLeft, "row");
            var done = false;
            void Reply(bool ok)
            {
                if (done) return;
                done = true;
                answer(ok);
                ask.OnClose = () => { };
                ask.Hide();
            }
            UiKit.Button(row, "Aceitar", () => Reply(true));
            UiKit.Button(row, "Recusar", () => Reply(false));
            ask.OnClose = () => Reply(false);
            ask.Show();
        }

        public void AskParty(string requestor) =>
            AskYesNo($"{requestor} convidou você para a party.", ok => deps.Send(SocialPackets.AnswerJoinParty(ok)));

        public void AskTrade(int senderId) =>
            AskYesNo($"{deps.NameOf(senderId)} quer trocar itens com você.", ok => deps.Send(SocialPackets.AnswerTradeRequest(ok)));

        public void AskFriend(string requestor) =>
            AskYesNo($"{requestor} quer adicionar você como amigo.", ok => deps.Send(SocialPackets.AnswerFriendInvite(ok)));

        // ------------------------------------------------------------ party
        public void PartyAll(PartyAllInfo p)
        {
            leaderId = p.LeaderId;
            party = new Dictionary<int, PartyMember>();
            foreach (var m in p.Members) party[m.ObjectId] = m;
            RenderParty();
        }

        public void PartyAdd(PartyAddInfo p)
        {
            leaderId = p.LeaderId;
            party[p.Member.ObjectId] = p.Member;
            RenderParty();
        }

        public void PartyUpdate(PartyMember m)
        {
            party[m.ObjectId] = m;
            RenderParty();
        }

        public void PartyDelete(int objectId)
        {
            party.Remove(objectId);
            RenderParty();
        }

        public void PartyClear()
        {
            party.Clear();
            RenderParty();
        }

        /// <summary>Membros da party (objectId -> membro), na ordem de chegada.</summary>
        public IReadOnlyDictionary<int, PartyMember> Party => party;

        void RenderParty()
        {
            var box = partyBox;
            for (var i = box.childCount - 1; i >= 0; i--)
            {
                var c = box.GetChild(i);
                if (c.name == "back") continue;
                c.gameObject.SetActive(false);
                c.SetParent(null, false);
                if (Application.isPlaying) UnityEngine.Object.Destroy(c.gameObject);
                else UnityEngine.Object.DestroyImmediate(c.gameObject);
            }
            // a PartyWnd do xdat (UI/PartyWnd.cs) mostra o grupo: a caixa do porte fica escondida
            box.gameObject.SetActive(false);
            foreach (var m in party.Values)
            {
                var row = UiKit.Column(box, 2, "pmember");
                var name = UiKit.Text(row, $"{(m.ObjectId == leaderId ? "★ " : "")}{m.Name} · Nv {m.Level} · {GameData.ClassName(m.ClassId)}", 12, TextCol, FontStyle.Bold);
                name.name = "strong";
                Bar(row, m.Cp, m.MaxCp, new Color32(0xd7, 0x9a, 0x2b, 0xff));
                Bar(row, m.Hp, m.MaxHp, new Color32(0xc8, 0x42, 0x3a, 0xff));
                Bar(row, m.Mp, m.MaxMp, new Color32(0x3b, 0x6f, 0xd1, 0xff));
            }
            if (party.Count > 0)
            {
                var leave = UiKit.Row(box, 0, TextAnchor.MiddleLeft, "leave");
                var b = UiKit.LinkButton(leave, "Sair da party", () => deps.Send(SocialPackets.WithdrawParty()));
                b.Label.text = "<color=#d9b56a>Sair da party</color>";
            }
        }

        /// <summary>.bar.thin: 5 de altura, 2 de margem em cima, fundo rgba(0,0,0,.5).</summary>
        static void Bar(Transform parent, int cur, int max, Color c)
        {
            var fill = LobbySkin.Fill(parent, 0, 0, 180, 5, c, new Color(0, 0, 0, 0.5f));
            var bar = fill.rectTransform.parent;
            UiKit.Layout(bar, -1, 5, -1, -1, 5);
            LobbySkin.SetPercent(fill, max > 0 ? Mathf.Min(100, cur / (float)max * 100) : 0);
        }

        // ------------------------------------------------------------ troca
        public void TradeStart(TradeStartInfo t)
        {
            // TradeWnd do xdat (#0029); a janela generica so fica sem o GameUi
            if (GameUi.Current?.TradeWnd is { } tw)
            {
                Store.Hide();
                tw.Start(t, GameUi.Current.TradeCloses());
                return;
            }
            tradePartner = t.PartnerId;
            tradeOwn = new List<TradeItem>();
            tradeOther = new List<TradeItem>();
            stateOwn = stateOther = false;
            RenderTrade(t.Items);
            Trade.Show();
        }

        public void OwnAdd(TradeItem i)
        {
            if (GameUi.Current?.TradeWnd is { } tw)
            {
                tw.Add(true, i);
                return;
            }
            tradeOwn.Add(i);
            RenderTrade(tradeCandidates);
        }

        public void OtherAdd(TradeItem i)
        {
            if (GameUi.Current?.TradeWnd is { } tw)
            {
                tw.Add(false, i);
                return;
            }
            tradeOther.Add(i);
            RenderTrade(tradeCandidates);
        }

        public void Pressed(bool own)
        {
            if (!own && GameUi.Current?.TradeWnd is { } tw) tw.OtherOk();
            if (own) stateOwn = true;
            else stateOther = true;
            RenderTrade(tradeCandidates);
        }

        public void TradeEnd(bool done)
        {
            GameUi.Current?.TradeWnd?.Done();
            tradePartner = 0;
            Trade.OnClose = () => { };
            Trade.Hide();
            qty.OnClose = () => { };
            qty.Hide();
            Trade.OnClose = TradeClose;
            deps.Chat("sys", done ? "Troca concluída." : "Troca cancelada.", null);
        }

        void RenderTrade(List<TradeItem> candidates)
        {
            tradeCandidates = candidates ?? new List<TradeItem>();
            var body = Trade.Body;
            Trade.Clear();
            Trade.SetTitle($"Troca com {deps.NameOf(tradePartner)}");
            var cols = UiKit.Row(body, 10, TextAnchor.UpperLeft, "tradecols");
            void Col(string title, List<TradeItem> list, bool ok)
            {
                var c = UiKit.Column(cols, 3, "col");
                UiKit.Layout(c, 0, -1, 1);
                UiKit.Heading(c, title + (ok ? " ✓" : ""));
                if (list.Count == 0) UiKit.Text(c, "(nada)", 11, UiKit.Muted);
                foreach (var i in list) ItemLine(c, i.ItemId, i.Count, i.Enchant);
            }
            Col("Você oferece", tradeOwn, stateOwn);
            Col("Parceiro oferece", tradeOther, stateOther);
            UiKit.Heading(body, "Seu inventário (clique para oferecer)");
            var pick = UiKit.Scroll(body, Mathf.Min(PickHeight(tradeCandidates.Count), UiRoot.Size.y * 0.52f), 3);
            foreach (var it in tradeCandidates)
            {
                if (tradeOwn.Any(o => o.ObjectId == it.ObjectId)) continue;
                var row = ItemLine(pick, it.ItemId, it.Count, it.Enchant);
                var hl = row.gameObject.AddComponent<Image>();
                hl.color = new Color(1, 1, 1, 0.001f);
                var ev = UiEvents.Of(row);
                var item = it;
                ev.OnEnter = _ => hl.color = new Color(1, 1, 1, 0.06f);
                ev.OnExit = _ => hl.color = new Color(1, 1, 1, 0.001f);
                ev.OnClick = _ => Offer(item);
            }
            var foot = UiKit.Row(body, 8, TextAnchor.MiddleLeft, "shopfoot");
            UiKit.Button(foot, "Cancelar", () => deps.Send(SocialPackets.TradeDone(false)));
            Spacer(foot);
            var ok = UiKit.Button(foot, "Confirmar troca", () =>
            {
                deps.Send(SocialPackets.TradeDone(true));
                Pressed(true);
            });
            ok.Interactable = !stateOwn;
        }

        static float PickHeight(int n) => Mathf.Max(32, n * 31);

        static void Spacer(Transform row)
        {
            var s = UiRoot.Box("spacer", row, 0, 0, 0, 0);
            UiKit.Layout(s, 0, 0, 1);
        }

        void Offer(TradeItem it)
        {
            if (it.Count <= 1)
            {
                deps.Send(SocialPackets.AddTradeItem(it.ObjectId, 1));
                return;
            }
            // prompt(`Quantidade de X (max. N):`, N)
            qty.Clear();
            UiKit.Text(qty.Body, $"Quantidade de {GameData.ItemName(it.ItemId)} (máx. {it.Count}):", 11);
            var inp = UiKit.Input(qty.Body, it.Count.ToString(), 120, 18, InputField.ContentType.IntegerNumber);
            var row = UiKit.Row(qty.Body, 8, TextAnchor.MiddleLeft, "row");
            void Answer(bool ok)
            {
                qty.OnClose = () => { };
                qty.Hide();
                if (!ok) return;
                var n = long.TryParse(inp.text, out var v) ? v : 0;
                n = Math.Max(0, Math.Min(it.Count, n));
                if (n > 0) deps.Send(SocialPackets.AddTradeItem(it.ObjectId, (int)n));
            }
            inp.onSubmit.AddListener(_ => Answer(true));
            UiKit.Button(row, "OK", () => Answer(true));
            UiKit.Button(row, "Cancelar", () => Answer(false));
            qty.OnClose = () => { };
            qty.Show();
            inp.Select();
            inp.ActivateInputField();
        }

        // ------------------------------------------------------------ loja privada
        public void StoreList(PrivateStoreSellInfo l)
        {
            // a PrivateShopWnd do xdat (#0036) abre pelos eventos do 0x9b; a janela generica so fica sem o GameUi
            if (GameUi.Current?.PrivateShopWnd != null) return;
            var body = Store.Body;
            Store.Clear();
            Store.SetTitle($"Loja de {deps.NameOf(l.OwnerId)}{(l.PackageSale ? " (pacote)" : "")}");
            UiKit.Text(body, $"Sua adena: {Num(l.Adena)}", 11, UiKit.Muted).name = "invhead";
            var list = UiKit.Scroll(body, Mathf.Min(Mathf.Max(32, l.Items.Count * 31), UiRoot.Size.y * 0.52f), 3);
            var qtys = new List<(StoreItem It, InputField Inp)>();
            Text total = null;
            void Recalc()
            {
                long t = 0;
                foreach (var (it, inp) in qtys) t += (long)it.Price * Math.Max(0, long.TryParse(inp.text, out var v) ? v : 0);
                total.text = $"Total: {Num(t)} adena";
                total.color = t > l.Adena ? Err : TextCol;
            }
            foreach (var it in l.Items)
            {
                var row = UiKit.Row(list, 8, TextAnchor.MiddleLeft, "shoprow");
                UiKit.Slot(row, GameUi.IconUrl(GameData.ItemIcon(it.ItemId)), GameData.ItemName(it.ItemId), 0, null, 28);
                var name = UiKit.Text(row, $"{(it.Enchant != 0 ? "+" + it.Enchant + " " : "")}{GameData.ItemName(it.ItemId)} ({it.Count})", 12, TextCol);
                name.name = "shopname";
                name.horizontalOverflow = HorizontalWrapMode.Wrap;
                UiKit.Layout(name, 0, -1, 1);
                var price = UiKit.Text(row, Num(it.Price), 12, UiKit.Accent, FontStyle.Normal, TextAnchor.MiddleRight);
                price.name = "shopprice";
                var inp = UiKit.Input(row, l.PackageSale ? it.Count.ToString() : "0", 70, 20, InputField.ContentType.IntegerNumber);
                inp.name = "shopqty";
                inp.interactable = !l.PackageSale;
                inp.onValueChanged.AddListener(_ => Recalc());
                qtys.Add((it, inp));
            }
            var foot = UiKit.Row(body, 8, TextAnchor.MiddleLeft, "shopfoot");
            total = UiKit.Text(foot, "", 12, TextCol);
            total.name = "shoptotal";
            total.horizontalOverflow = HorizontalWrapMode.Overflow;
            Spacer(foot);
            UiKit.Button(foot, "Comprar", () =>
            {
                var cart = qtys.Select(q => (q.It.ObjectId, Count: long.TryParse(q.Inp.text, out var v) ? (int)Math.Min(int.MaxValue, v) : 0, q.It.Price))
                    .Where(c => c.Count > 0).ToList();
                if (cart.Count == 0) return;
                deps.Send(SocialPackets.PrivateStoreBuy(l.OwnerId, cart));
                Store.Hide();
            });
            Recalc();
            Store.Show();
        }

        // ------------------------------------------------------------ amigos e cla
        /// <summary>FriendList 0xfa: a lista vai para a MessengerWnd nativa (GameUi.Messenger, aba "Chat with Friends"); a janela
        /// "Amigos" do porte saiu (G11). Fica vazio ate a chamada sair do App.cs (pedido a coordenadora no TAREFAS.md).</summary>
        public void FriendList(List<FriendInfo> list)
        {
        }

        public void ClanMembers(PledgeMembersInfo c)
        {
            var body = Clan.Body;
            Clan.Clear();
            var ally = string.IsNullOrEmpty(c.AllyName) ? "" : " · aliança " + c.AllyName;
            UiKit.Text(body, $"{c.ClanName} · Nv {c.Level} · líder {c.Leader}{ally} · reputação {c.Reputation}", 11, UiKit.Muted).name = "invhead";
            var sorted = c.Members.OrderBy(m => m.Online ? 0 : 1).ThenByDescending(m => m.Level).ToList();
            foreach (var m in sorted)
            {
                var t = UiKit.Text(body, $"{(m.Online ? "●" : "○")} {m.Name} · Nv {m.Level} · {GameData.ClassName(m.ClassId)}", 11, m.Online ? Ok : UiKit.Muted);
                t.name = "friend" + (m.Online ? " online" : "");
            }
            Clan.SetTitle($"Clã {c.ClanName} ({c.Members.Count(m => m.Online)}/{c.Members.Count})");
        }

        public void Reset()
        {
            PartyClear();
            tradePartner = 0;
            foreach (var w in new[] { Trade, Store, Clan, ask, qty })
            {
                w.OnClose = () => { };
                w.Hide();
            }
            Trade.OnClose = TradeClose;
        }

        /// <summary>Linha de item (.shoprow.trade): icone 28 + nome "+enchant nome × quantidade".</summary>
        static RectTransform ItemLine(Transform parent, int itemId, int count, int enchant)
        {
            var row = UiKit.Row(parent, 8, TextAnchor.MiddleLeft, "shoprow trade");
            UiKit.Slot(row, GameUi.IconUrl(GameData.ItemIcon(itemId)), GameData.ItemName(itemId), 0, null, 28);
            var name = UiKit.Text(row, $"{(enchant != 0 ? "+" + enchant + " " : "")}{GameData.ItemName(itemId)}{(count > 1 ? " × " + Num(count) : "")}", 12, TextCol);
            name.name = "shopname";
            UiKit.Layout(name, 0, -1, 1);
            return row;
        }
    }
}
