// GameUi (continuacao): morte, janela de NPC, community board, lojas, inventario, skills, acoes, barras de atalho e
// dialogo de confirmacao.
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using L2Web.Net;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
using UnityEngine.UI;

namespace L2Web.UI
{
    public partial class GameUi
    {
        static bool CtrlHeld => L2Input.IsPKMode();
        static bool ShiftHeld => Keyboard.current != null && Keyboard.current.shiftKey.isPressed;

        // ------------------------------------------------------------ morte
        bool deathBound;

        /// <summary>Janela de reinicio (RestartMenuWnd): opcoes (disponivel, tipo) — vila, clan hall, castelo, QG, aqui.</summary>
        public void ShowDeath(IList<(bool ok, int type)> opts)
        {
            var names = new[] { "btnVillage", "btnAgit", "btnCastle", "btnBattleCamp", "btnOriginal" };
            var w = RestartWnd;
            var any = false;
            for (var i = 0; i < names.Length; i++)
            {
                var ok = false;
                foreach (var o in opts)
                    if (o.type == i)
                    {
                        ok = o.ok;
                        break;
                    }
                w.ShowCtrl(names[i], ok);
                if (ok) any = true;
            }
            if (!deathBound)
            {
                deathBound = true;
                for (var i = 0; i < names.Length; i++)
                {
                    var k = i;
                    w.OnClick(names[i], () => deps.RestartPoint(k));
                }
            }
            if (any) w.Show();
            else deps.Chat("sys", "Aguarde ressurreição.", null);
        }

        /// <summary>Fecha a janela de reinicio.</summary>
        public void HideDeath() => RestartWnd.Hide();

        // ------------------------------------------------------------ janela de NPC
        HtmlActions HtmlAct() => new()
        {
            Bypass = c => deps.Send(UiPackets.BypassToServer(c)),
            Link = l => deps.Send(UiPackets.RequestLinkHtml(l)),
            Icon = IconUrl,
        };

        /// <summary>
        /// NpcHtmlMessage (ReceiveHtmlMessage 0x1016d6f0): renderiza o HTML na janela de NPC; titulo = nome do NPC (com
        /// objectId) ou sysstring 444, trocado pelo &lt;title&gt; do HTML quando ha um (AnalyzeHtml).
        /// </summary>
        public void ShowHtml(string html, int npcObjectId = 0)
        {
            Npc.Clear();
            var r = L2Html.Render(html, HtmlAct(), Npc.Body);
            var npcName = npcObjectId != 0 ? world?.Get(npcObjectId)?.Name : null;
            Npc.SetTitle(NpcHtmlWnd.TitleFor(r.Title, npcName, GameData.SysString(NpcHtmlWnd.TitleSysString, "")));
            Npc.Show();
        }

        // ------------------------------------------------------------ community board (ShowBoard 101/102/103)
        /// <summary>ShowBoard: junta as partes (101/102/103) e mostra o board.</summary>
        public void ShowBoard(ShowBoardInfo p)
        {
            if (!p.Show)
            {
                Board.Hide();
                return;
            }
            if (p.Id == "101") boardParts = new List<string> { p.Html };
            else if (p.Id == "102" || p.Id == "103") boardParts.Add(p.Html);
            else boardParts = new List<string> { p.Html };
            var token = ++boardTimer;
            var buttons = p.Buttons;
            if (p.Id == "103" || (p.Id != "101" && p.Id != "102")) RenderBoard(buttons);
            else Later(150, () =>
            {
                if (token == boardTimer) RenderBoard(buttons);
            });
        }

        static async void Later(int ms, Action fn)
        {
            await Task.Delay(ms);
            fn();
        }

        void RenderBoard(List<string> buttons)
        {
            Board.Clear();
            var nav = UiKit.Row(Board.Body, 4, TextAnchor.MiddleLeft, "boardnav");
            var labels = new[] { "Início", "Favoritos", "Região", "Clã", "Memo", "Correio", "Amigos", "+ Favorito" };
            for (var i = 0; i < buttons.Count; i++)
            {
                var m = Regex.Match(buttons[i], @"^bypass\s+(.*)$", RegexOptions.IgnoreCase);
                if (!m.Success) continue;
                var cmd = m.Groups[1].Value;
                UiKit.Button(nav, i < labels.Length ? labels[i] : cmd, () => deps.Send(UiPackets.BypassToServer(cmd)));
            }
            UiKit.Separator(Board.Body);
            var r = L2Html.Render(string.Join("", boardParts), HtmlAct(), Board.Body);
            Board.SetTitle(string.IsNullOrEmpty(r.Title) ? "Community Board" : r.Title);
            Board.Show();
        }

        // ------------------------------------------------------------ lojas (BuyList / SellList / MultiSellList)
        /// <summary>BuyList: janela de compra.</summary>
        public void BuyList(BuyListInfo l)
        {
            TradeWindow("Comprar", l.Money, l.Items, cart => deps.Send(UiPackets.RequestBuyItem(l.ListId, cart.Select(c => (c.item.ItemId, c.count)).ToList())));
        }

        /// <summary>SellList: janela de venda.</summary>
        public void SellList(SellListInfo l)
        {
            TradeWindow("Vender", l.Money, l.Items, cart => deps.Send(UiPackets.RequestSellItem(0, cart.Select(c => (c.item.ObjectId, c.item.ItemId, c.count)).ToList())));
        }

        static RectTransform MiniSlot(Transform parent, string icon, string name)
        {
            var b = UiKit.Slot(parent, IconUrl(icon), name, 0, null, 28);
            return (RectTransform)b.transform;
        }

        void TradeWindow(string mode, int money, List<ShopItem> list, Action<List<(ShopItem item, int count)>> submit)
        {
            var body = Shop.Body;
            Shop.Clear();
            UiKit.Text(body, $"Adena: {Fmt(money)}", 11, UiKit.Muted).name = "invhead";
            var listEl = UiKit.ScrollMax(body, Mathf.Round(UiRoot.Size.y * 0.52f), 3);
            var qty = new List<(ShopItem it, InputField inp)>();
            Text total = null;
            void Recalc()
            {
                long t = 0;
                foreach (var (it, inp) in qty) t += (long)it.Price * Math.Max(0, int.TryParse(inp.text, out var v) ? v : 0);
                total.text = $"Total: {Fmt(t)} adena";
                total.color = mode == "Comprar" && t > money ? new Color32(0xff, 0x8f, 0x80, 0xff) : UiKit.TextColor;
            }
            foreach (var it in list)
            {
                var row = UiKit.Row(listEl, 8, TextAnchor.MiddleLeft, "shoprow");
                MiniSlot(row, GameData.ItemIcon(it.ItemId), GameData.ItemName(it.ItemId));
                var name = UiKit.Text(row, $"{(it.Enchant != 0 ? "+" + it.Enchant + " " : "")}{GameData.ItemName(it.ItemId)}{(mode == "Vender" && it.Count > 1 ? $" ({it.Count})" : "")}", 12);
                name.alignment = TextAnchor.MiddleLeft;
                name.horizontalOverflow = HorizontalWrapMode.Wrap;
                UiKit.Layout(name, -1, -1, 1, 0);
                var price = UiKit.Text(row, Fmt(it.Price), 12, UiKit.Accent, FontStyle.Normal, TextAnchor.MiddleRight);
                UiKit.Layout(price, -1, -1, 0);
                var inp = UiKit.Input(row, "0", 70, 20, InputField.ContentType.IntegerNumber);
                var maxCount = it.Count;
                inp.onValueChanged.AddListener(_ =>
                {
                    if (mode == "Vender" && int.TryParse(inp.text, out var v) && v > maxCount) inp.text = maxCount.ToString();
                    Recalc();
                });
                qty.Add((it, inp));
            }
            var foot = UiKit.Row(body, 8, TextAnchor.MiddleLeft, "shopfoot");
            total = UiKit.Text(foot, "", 12);
            total.alignment = TextAnchor.MiddleLeft;
            UiKit.Layout(total, -1, -1, 1, 0);
            UiKit.Button(foot, mode, () =>
            {
                var cart = qty.Select(q => (q.it, count: int.TryParse(q.inp.text, out var v) ? v : 0)).Where(c => c.count > 0).ToList();
                if (cart.Count == 0) return;
                submit(cart);
                Shop.Hide();
            });
            Recalc();
            Shop.SetTitle(mode == "Comprar" ? "Loja: comprar" : "Loja: vender");
            Shop.Show();
        }

        /// <summary>MultiSellList: junta as paginas e mostra as trocas.</summary>
        public void MultiSell(MultiSellListInfo p)
        {
            if (p.Page == 1 || multisell == null || multisell.Value.listId != p.ListId) multisell = (p.ListId, new List<MultisellEntry>());
            multisell.Value.entries.AddRange(p.Entries);
            if (!p.Finished) return;
            var ms = multisell.Value;
            var body = Shop.Body;
            Shop.Clear();
            var listEl = UiKit.ScrollMax(body, Mathf.Round(UiRoot.Size.y * 0.52f), 3);
            static string F(MultisellItem x) => $"{(x.Count > 1 ? Fmt(x.Count) + "× " : "")}{(x.Enchant != 0 ? "+" + x.Enchant + " " : "")}{GameData.ItemName(x.ItemId)}";
            foreach (var e in ms.entries)
            {
                var row = UiKit.Row(listEl, 8, TextAnchor.MiddleLeft, "shoprow ms");
                var main = e.Products.Count > 0 ? e.Products[0] : null;
                MiniSlot(row, main != null ? GameData.ItemIcon(main.ItemId) : null, main != null ? GameData.ItemName(main.ItemId) : "?");
                var ing = string.Join(" + ", e.Ingredients.Select(F));
                var txt = UiKit.Text(row, $"{string.Join(" + ", e.Products.Select(F))}  ←  {(ing.Length > 0 ? ing : "grátis")}", 12);
                txt.alignment = TextAnchor.MiddleLeft;
                UiKit.Layout(txt, -1, -1, 1, 0);
                var inp = UiKit.Input(row, "1", 56, 20, InputField.ContentType.IntegerNumber);
                inp.interactable = e.Stackable;
                var entry = e;
                UiKit.Button(row, "Trocar", () => deps.Send(UiPackets.MultiSellChoose(ms.listId, entry.EntryId, Math.Max(1, int.TryParse(inp.text, out var v) ? v : 1))));
            }
            Shop.SetTitle($"Multisell ({ms.entries.Count})");
            Shop.Show();
        }

        // ------------------------------------------------------------ inventario (InventoryWnd)
        /// <summary>ItemList: troca o inventario (show = abrir a janela).</summary>
        public void SetItems(List<InvItem> list, bool show)
        {
            items = new Dictionary<int, InvItem>();
            foreach (var i in list) items[i.ObjectId] = i;
            RenderInv();
            if (show) Inv.Show();
        }

        /// <summary>InventoryUpdate: change 3 = removido, senao adicionado/alterado.</summary>
        public void UpdateItems(List<InvItem> list)
        {
            foreach (var i in list)
            {
                if (i.Change == 3) items.Remove(i.ObjectId);
                else items[i.ObjectId] = i;
            }
            RenderInv();
            RenderBars();
        }

        SlotData ItemData(InvItem it)
        {
            var name = GameData.ItemName(it.ItemId);
            var title = $"{(it.Enchant != 0 ? "+" + it.Enchant + " " : "")}{name}{(it.Count > 1 ? " (" + Fmt(it.Count) + ")" : "")}{(it.Equipped ? " · " + (Body.TryGetValue(it.BodyPart, out var b) ? b : "equipado") : "")}\nDuplo clique: usar/equipar · arraste para a barra";
            return new SlotData { Icon = GameData.ItemIcon(it.ItemId), Title = title, Count = it.Count, Badge = it.Enchant != 0 ? "+" + it.Enchant : null, Cls = it.Equipped ? "equipped" : null };
        }

        void BindItem(UiTexButton b, InvItem it)
        {
            var oid = it.ObjectId;
            b.OnDoubleClick = () => deps.Send(UiPackets.UseItem(oid, CtrlHeld));
            Draggable(b, "item", oid);
        }

        bool invDirty;

        // o inventario so e refeito aberto (InventoryUpdate chega a cada soulshot); fechado, fica para o OnShow
        void RenderInv()
        {
            if (!Inv.Visible)
            {
                invDirty = true;
                return;
            }
            invDirty = false;
            var list = items.Values.ToList();
            var adena = list.FirstOrDefault(i => i.ItemId == Adena)?.Count ?? 0;
            var equipped = list.Where(i => i.Equipped).ToList();
            var bag = list.Where(i => !i.Equipped && i.ItemId != Adena).OrderBy(i => i.Type2).ThenBy(i => i.ItemId).ToList();
            var quest = bag.Where(i => i.Type2 == 3).ToList();
            var normal = bag.Where(i => i.Type2 != 3).ToList();
            var w = Inv;
            // slots de equipamento
            foreach (var n in Equip.Values.SelectMany(x => x).Distinct()) L2WndUtil.FillItemWindow(w, n, Array.Empty<SlotData>(), IconUrl);
            var used = new HashSet<string>();
            foreach (var it in equipped)
            {
                if (!Equip.TryGetValue(it.BodyPart, out var names)) continue;
                var n = names.FirstOrDefault(x => !used.Contains(x)) ?? names[0];
                used.Add(n);
                var bs = L2WndUtil.FillItemWindow(w, n, new[] { ItemData(it) }, IconUrl);
                if (bs.Count > 0) BindItem(bs[0], it);
            }
            var nb = L2WndUtil.FillItemWindow(w, "InventoryItem", normal.Select(ItemData).ToList(), IconUrl);
            for (var k = 0; k < nb.Count; k++) BindItem(nb[k], normal[k]);
            var qb = L2WndUtil.FillItemWindow(w, "QuestItem", quest.Select(ItemData).ToList(), IconUrl);
            for (var k = 0; k < qb.Count; k++) BindItem(qb[k], quest[k]);
            w.Text("AdenaText", Fmt(adena));
            w.Text("ItemCount", $"({list.Count})");
            w.SetTitle($"Inventário ({list.Count})");
        }

        // ------------------------------------------------------------ skills (MagicSkillWnd) e acoes (ActionWnd)
        /// <summary>SkillList: skills ativas e passivas na MagicSkillWnd.</summary>
        public void SetSkills(List<SkillInfo> list)
        {
            skills = list;
            if (!Main.Embedded.TryGetValue("MagicSkillWnd", out var w)) return;
            var active = list.Where(s => !s.Passive).ToList();
            var passive = list.Where(s => s.Passive).ToList();
            SlotData Data(SkillInfo s)
            {
                var name = $"{GameData.SkillName(s.Id, s.Level)} Nv {s.Level}";
                return new SlotData { Icon = GameData.SkillIcon(s.Id), Title = name + (s.Passive ? " (passiva)" : "\nDuplo clique: usar · arraste para a barra"), Cls = s.Disabled ? "disabled" : null };
            }
            var bs = L2WndUtil.FillItemWindow(w, "SkillItem", active.Select(Data).ToList(), IconUrl);
            for (var k = 0; k < bs.Count; k++)
            {
                var id = active[k].Id;
                bs[k].OnDoubleClick = () => deps.Send(UiPackets.MagicSkillUse(id, CtrlHeld, ShiftHeld));
                Draggable(bs[k], "skill", id);
            }
            L2WndUtil.FillItemWindow(w, "PItemWnd", passive.Select(Data).ToList(), IconUrl);
        }

        void FillActions()
        {
            if (!Main.Embedded.TryGetValue("ActionWnd", out var w)) return;
            void Fill(string ctrl, int[] ids)
            {
                var list = ids.Where(id => GameData.ActionName(id) != $"ação {id}").ToList();
                var bs = L2WndUtil.FillItemWindow(w, ctrl, list.Select(id => new SlotData { Icon = GameData.ActionIcon(id), Title = $"{GameData.ActionName(id)}\nClique: usar · arraste para a barra" }).ToList(), IconUrl);
                for (var k = 0; k < bs.Count; k++)
                {
                    var id = list[k];
                    bs[k].OnClick = () => deps.ActionUse(id);
                    Draggable(bs[k], "action", id);
                }
            }
            Fill("ActionBasicItem", ActionsBasic);
            Fill("ActionPartyItem", ActionsParty);
            Fill("ActionSocialItem", ActionsSocial);
        }

        // ------------------------------------------------------------ arrastar para a barra (dragstart/drop)
        RawImage dragGhost;
        readonly Dictionary<GameObject, int> dropSlots = new();

        void Draggable(UiTexButton b, string type, int id)
        {
            var ev = UiEvents.Of(b);
            ev.OnBeginDrag = _ =>
            {
                var icon = b.transform.Find("icon")?.GetComponent<RawImage>();
                if (!dragGhost)
                {
                    var rt = UiRoot.Box("DragGhost", UiRoot.Rect, 0, 0, 32, 32);
                    dragGhost = rt.gameObject.AddComponent<RawImage>();
                    dragGhost.raycastTarget = false;
                    dragGhost.color = new Color(1, 1, 1, 0.8f);
                }
                dragGhost.texture = icon ? icon.texture : null;
                dragGhost.enabled = dragGhost.texture;
                dragGhost.transform.SetAsLastSibling();
                dragGhost.gameObject.SetActive(true);
            };
            ev.OnDrag = e =>
            {
                if (!dragGhost) return;
                var k = UiRoot.PixelScale;
                UiRoot.Place(dragGhost.rectTransform, e.position.x / k - 16, UiRoot.Size.y - e.position.y / k - 16, 32, 32);
            };
            ev.OnEndDrag = e =>
            {
                if (dragGhost) dragGhost.gameObject.SetActive(false);
                for (var t = e.pointerCurrentRaycast.gameObject ? e.pointerCurrentRaycast.gameObject.transform : null; t; t = t.parent)
                {
                    if (!dropSlots.TryGetValue(t.gameObject, out var host)) continue;
                    var slot = SlotOfHost(host);
                    if (!barsLocked && slot >= 0) deps.Send(UiPackets.ShortCutReg(type, slot, id));
                    break;
                }
            };
        }

        // ------------------------------------------------------------ barras de atalho (ShortcutWnd)
        sealed class ScSlot
        {
            public int Bar, Index;
            public RectTransform Rt;
            public UiTexButton Btn;
            public RawImage Icon;
            public Text Letter;
            public RectTransform Count;
            public RectTransform Cool;
            public GameObject AutoShot;
            public int CoolSkill;
            public string Key;
        }

        readonly List<ScSlot> scSlots = new();
        readonly List<(L2Wnd w, int bar)> allBars = new();

        List<L2Wnd> ActiveBars => vertical ? vbars : hbars;

        int SlotOfHost(int host)
        {
            var s = scSlots[host];
            return barPage[s.Bar] * Page + s.Index;
        }

        /// <summary>Uma barra a partir das sub-janelas do ShortcutWnd (horizontal ou vertical), presa a barra 1.</summary>
        L2Wnd BuildBar(int i, bool vert)
        {
            var all = L2WndUtil.WindowDef("ShortcutWnd");
            var bse = vert ? "ShortcutWndVertical" : "ShortcutWndHorizontal";
            var sub = all?.Children.FirstOrDefault(c => c.Name == (i == 0 ? bse : $"{bse}_{i}"));
            var name = $"ShortcutBar{(vert ? "V" : "")}{i + 1}";
            var prev = $"ShortcutBar{(vert ? "V" : "")}{i}";
            // xdat (05 §2.1): Vertical em CENTER_RIGHT (0,0); Horizontal com o BOTTOM_RIGHT preso ao BOTTOM_RIGHT da Vertical;
            // as extras (unk126/unk129) coladas a principal: vertical a esquerda, horizontal acima, sem folga (WindowsInfo.ini:
            // Vertical_1 = Vertical - 46, Vertical_2 = Vertical - 92)
            var anchor = vert
                ? i == 0
                    ? Anchor("CENTER_RIGHT", "CENTER_RIGHT", "", 0, 0)
                    : Anchor("TOP_RIGHT", "TOP_LEFT", prev, 0, 0)
                : i == 0
                    ? Anchor("BOTTOM_RIGHT", "BOTTOM_RIGHT", "ShortcutBarV1", 0, 0)
                    : Anchor("BOTTOM_LEFT", "TOP_LEFT", prev, 0, 0);
            var j = (Newtonsoft.Json.Linq.JObject)sub.J.DeepClone();
            j["name"] = name;
            j["anchor"] = anchor;
            var w = new L2Wnd(name, Layer, new WndOpts { Def = new L2Ctrl { J = j, Children = sub.Children }, AriaLabel = $"Barra de atalhos {i + 1}", Movable = i == 0, Frame = false });
            w.ShowCtrl("JoypadBtn", false);
            if (i == 0)
            {
                w.OnClick("ExpandButton", () => SetBarCount(barCount % Bars + 1));
                w.OnClick("ReduceButton", () => SetBarCount(1));
                w.OnClick("RotateBtn", () => SetVertical(!vertical));
                w.OnClick("LockBtn", () => SetLocked(false));
                w.OnClick("UnlockBtn", () => SetLocked(true));
                foreach (var (n, t) in new[] { ("ExpandButton", "Mais barras"), ("ReduceButton", "Menos barras"), ("RotateBtn", "Girar as barras"), ("LockBtn", "Destravar as barras"), ("UnlockBtn", "Travar as barras") })
                {
                    var el = w.Get(n);
                    if (el) UiTooltip.Set(el.gameObject, t);
                }
                // a barra 1 arrasta as outras (presas a ela)
                w.OnDragMove = () => Layer.Relayout();
            }
            // numeros das teclas por cima dos icones, como no cliente
            for (var k = 1; k <= Page; k++) w.Get($"F{k}Tex")?.SetAsLastSibling();
            var sfx = i == 0 ? "" : (i + 1).ToString();
            var bi = i;
            w.OnClick("PrevBtn" + sfx, () => SetPage(bi, (barPage[bi] + 9) % 10));
            w.OnClick("NextBtn" + sfx, () => SetPage(bi, (barPage[bi] + 1) % 10));
            for (var k = 0; k < Page; k++) BuildScSlot(w, i, k);
            allBars.Add((w, i));
            return w;
        }

        static Newtonsoft.Json.Linq.JObject Anchor(string parent, string self, string ctrl, float x, float y) =>
            new() { ["parent"] = parent, ["this"] = self, ["ctrl"] = ctrl, ["x"] = x, ["y"] = y };

        void BuildScSlot(L2Wnd w, int bar, int index)
        {
            var host = w.Get($"Shortcut{index + 1}");
            if (!host) return;
            var rt = UiRoot.Box("l2scslot", host, 0, 0, 0, 0);
            UiRoot.Fill(rt);
            var hit = rt.gameObject.AddComponent<Image>();
            hit.color = new Color(0, 0, 0, 0);
            var size = host.sizeDelta;
            var s = new ScSlot { Bar = bar, Index = index, Rt = rt };
            s.Icon = UiRoot.Box("icon", rt, 2, 2, 32, 32).gameObject.AddComponent<RawImage>();
            s.Icon.raycastTarget = false;
            s.Icon.enabled = false;
            s.Letter = UiRoot.Label(rt, "", 0, 0, size.x, size.y, 11, UiKit.Muted, TextAnchor.MiddleCenter);
            // cooldown: escurece de baixo para cima (scaleY)
            var cool = UiRoot.Panel(rt, 0, 0, 0, 0, new Color(0, 0, 0, 0.6f));
            cool.raycastTarget = false;
            s.Cool = cool.rectTransform;
            UiRoot.Fill(s.Cool);
            s.Cool.pivot = new Vector2(0.5f, 0);
            s.Cool.localScale = new Vector3(1, 0, 1);
            // contorno dourado do slot com atalho (inventory_outline 64x64 em tamanho natural), realce/pressionado
            s.Btn = rt.gameObject.AddComponent<UiTexButton>();
            var outline = UiRoot.Box("outline", rt, 0, 0, 0, 0).gameObject.AddComponent<RawImage>();
            outline.raycastTarget = false;
            L2WndUtil.PlaceImage(outline, size.x, size.y, 0, 0, 64, 64, false);
            outline.enabled = false;
            s.Btn.Image = outline;
            // auto soulshot: borda interna 2px #e8c56e
            s.AutoShot = UiRoot.Box("autoshot", rt, 0, 0, size.x, size.y).gameObject;
            var gold = new Color32(0xe8, 0xc5, 0x6e, 0xff);
            foreach (var (x, y, bw, bh) in new[] { (0f, 0f, size.x, 2f), (0f, size.y - 2, size.x, 2f), (0f, 0f, 2f, size.y), (size.x - 2, 0f, 2f, size.y) })
                UiRoot.Panel(s.AutoShot.transform, x, y, bw, bh, gold).raycastTarget = false;
            s.AutoShot.SetActive(false);
            var hostIdx = scSlots.Count;
            s.Btn.OnClick = () => UseSlot(SlotOfHost(hostIdx), CtrlHeld, ShiftHeld);
            s.Btn.OnRightClick = () =>
            {
                var slot = SlotOfHost(hostIdx);
                if (shortcuts.ContainsKey(slot) && !barsLocked) deps.Send(UiPackets.ShortCutDel(slot));
            };
            dropSlots[rt.gameObject] = hostIdx;
            scSlots.Add(s);
        }

        void SetBarCount(int n)
        {
            barCount = n;
            foreach (var set in new[] { hbars, vbars })
            {
                var on = set == ActiveBars;
                for (var i = 0; i < set.Count; i++)
                {
                    if (on && i < n) set[i].Show();
                    else set[i].Hide();
                }
                set[0].ShowCtrl("ExpandButton", n < Bars);
                set[0].ShowCtrl("ReduceButton", n >= Bars);
                set[0].ShowCtrl("LockBtn", barsLocked);
                set[0].ShowCtrl("UnlockBtn", !barsLocked);
                foreach (var b in set) b.Locked = barsLocked;
            }
            Layer.Relayout();
            SaveBarState();
        }

        /// <summary>Previa: barras na vertical.</summary>
        internal void PreviewSetVertical(bool v) => SetVertical(v);

        /// <summary>Previa: quantidade de barras.</summary>
        internal void PreviewSetBarCount(int n) => SetBarCount(Math.Min(Bars, Math.Max(1, n)));

        /// <summary>
        /// Rotate (ShortcutWnd.uc:383-394): a nova orientacao fica com o canto inferior direito da antiga; ArrangeWnd
        /// (:566-577) nao deixa coordenada negativa (vertical: y >= 0; horizontal: x >= 0).
        /// </summary>
        void SetVertical(bool v)
        {
            if (v != vertical)
            {
                var old = (vertical ? vbars : hbars)[0];
                var neu = (v ? vbars : hbars)[0];
                var r = old.ScreenRect();
                var x = r.X + r.W - neu.Size[0];
                var y = r.Y + r.H - neu.Size[1];
                if (v) y = Math.Max(0, y);
                else x = Math.Max(0, x);
                neu.Moved = new Vector2(x, y);
            }
            vertical = v;
            L2Options.SetBool("Game", "IsShortcutWndVertical", v);
            L2Options.Save();
            SetBarCount(barCount);
        }

        /// <summary>Cadeado: travado, as barras nao arrastam e os atalhos nao mudam (soltar/remover).</summary>
        void SetLocked(bool on)
        {
            barsLocked = on;
            L2Options.SetBool("Game", "IsLockShortcutWnd", on);
            L2Options.Save();
            SetBarCount(barCount);
        }

        sealed class BarState
        {
            public int? count;
            public bool vertical;
            public bool locked;
        }

        /// <summary>
        /// Option.ini [Game] (ShortcutWnd.uc:37-40): IsShortcutWndVertical, IsLockShortcutWnd, Is1ExpandShortcutWnd,
        /// Is2ExpandShortcutWnd (Is2 sem Is1 normalizado para 1 barra a mais, 05 §3.3). Padrao (OnDefaultPosition): vertical, 1 barra.
        /// </summary>
        void LoadBarState()
        {
            vertical = L2Options.GetBool("Game", "IsShortcutWndVertical", true);
            barsLocked = L2Options.GetBool("Game", "IsLockShortcutWnd");
            var e1 = L2Options.GetBool("Game", "Is1ExpandShortcutWnd");
            var e2 = L2Options.GetBool("Game", "Is2ExpandShortcutWnd");
            barCount = e1 || e2 ? (e1 && e2 ? 3 : 2) : 1;
        }

        /// <summary>Expand1/Expand2/Reduce (ShortcutWnd.uc:642-671): Is1/Is2ExpandShortcutWnd no Option.ini.</summary>
        void SaveBarState()
        {
            L2Options.SetBool("Game", "Is1ExpandShortcutWnd", barCount >= 2);
            L2Options.SetBool("Game", "Is2ExpandShortcutWnd", barCount >= 3);
            L2Options.Save();
        }

        /// <summary>ShortCutInit: todos os atalhos.</summary>
        public void SetShortcuts(List<Shortcut> list)
        {
            shortcuts = new Dictionary<int, Shortcut>();
            foreach (var s in list) shortcuts[s.Slot] = s;
            RenderBars();
        }

        /// <summary>ShortCutRegister.</summary>
        public void RegisterShortcut(Shortcut s)
        {
            if (s == null) return;
            shortcuts[s.Slot] = s;
            RenderBars();
        }

        /// <summary>ShortCutDelete.</summary>
        public void DeleteShortcut(int slot)
        {
            shortcuts.Remove(slot);
            RenderBars();
        }

        void SetPage(int bar, int p)
        {
            barPage[bar] = p;
            RenderBars();
        }

        void UseSlot(int slot, bool ctrl, bool shift)
        {
            if (!shortcuts.TryGetValue(slot, out var s)) return;
            if (s.Type == "item" && ctrl)
            {
                if (items.TryGetValue(s.Id, out var it)) deps.Send(UiPackets.RequestAutoSoulShot(it.ItemId, !autoShots.Contains(it.ItemId)));
                return;
            }
            if (s.Type == "item") deps.Send(UiPackets.UseItem(s.Id, ctrl));
            else if (s.Type == "skill") deps.Send(UiPackets.MagicSkillUse(s.Id, ctrl, shift));
            else if (s.Type == "action") deps.ActionUse(s.Id);
        }

        void RenderBars()
        {
            foreach (var (w, bar) in allBars) w.Text("PageNumTextBox", (barPage[bar] + 1).ToString());
            foreach (var sc in scSlots)
            {
                var slot = barPage[sc.Bar] * Page + sc.Index;
                shortcuts.TryGetValue(slot, out var s);
                var label = s != null ? ShortcutLabel(s) : "vazio";
                string icon = null;
                long count = 0;
                var auto = false;
                if (s != null)
                {
                    if (s.Type == "item")
                    {
                        items.TryGetValue(s.Id, out var it);
                        icon = GameData.ItemIcon(it?.ItemId ?? 0);
                        if (it != null && it.Count > 1) count = it.Count;
                        auto = it != null && autoShots.Contains(it.ItemId);
                    }
                    else if (s.Type == "skill") icon = GameData.SkillIcon(s.Id);
                    else if (s.Type == "action") icon = GameData.ActionIcon(s.Id);
                }
                var key = $"{slot}|{s?.Type}|{s?.Id}|{label}|{icon}|{count}|{auto}";
                if (key == sc.Key) continue;
                sc.Key = key;
                var keyName = sc.Bar == 0 ? $"F{sc.Index + 1}" : sc.Bar == 1 ? $"Alt+F{sc.Index + 1}" : $"Ctrl+Shift+F{sc.Index + 1}";
                UiTooltip.Set(sc.Rt.gameObject, $"{keyName}: {label}{(s != null ? "\nBotão direito: remover" : "\nArraste um item, skill ou ação para cá")}");
                var url = s != null ? IconUrl(icon) : null;
                sc.Letter.text = s != null && url == null ? (label.Length > 2 ? label.Substring(0, 2) : label) : "";
                var letter = sc.Letter;
                var lbl = label;
                if (url != null)
                    L2WndUtil.SetTexture(sc.Icon, url, false, () =>
                    {
                        if (letter) letter.text = lbl.Length > 2 ? lbl.Substring(0, 2) : lbl;
                    });
                else
                {
                    sc.Icon.texture = null;
                    sc.Icon.enabled = false;
                }
                if (sc.Count) UiKit.Destroy(sc.Count.gameObject);
                sc.Count = count > 1 ? (RectTransform)UiKit.Badge(sc.Rt, L2WndUtil.Compact(count), false).transform.parent : null;
                sc.AutoShot.SetActive(auto);
                sc.CoolSkill = s != null && s.Type == "skill" ? s.Id : 0;
                sc.Cool.localScale = new Vector3(1, 0, 1);
                sc.Btn.Normal = sc.Btn.Pushed = sc.Btn.Over = null;
                sc.Btn.Refresh();
                if (s != null)
                    L2WndUtil.SetButtonTextures(sc.Btn, L2WndUtil.Tex("L2UI_CH3.InventoryWnd.inventory_outline")?.Url,
                        L2WndUtil.Tex("L2UI_CH3.InventoryWnd.inventory_outline_down")?.Url, L2WndUtil.Tex("L2UI_CH3.InventoryWnd.inventory_outline_over")?.Url);
                else
                {
                    sc.Btn.Normal = sc.Btn.Pushed = sc.Btn.Over = null;
                    sc.Btn.Refresh();
                }
            }
        }

        /// <summary>/useshortcut pagina slot: usa o atalho do indice (como a tecla), com Ctrl/Shift.</summary>
        public void UseShortcutIndex(int slot, bool ctrl, bool shift) => UseSlot(slot, ctrl, shift);

        /// <summary>/equip pagina slot (FUN_1015a2d0): so atalhos de item, com RequestUseItem.</summary>
        public void EquipShortcutIndex(int slot)
        {
            if (shortcuts.TryGetValue(slot, out var s) && s.Type == "item") deps.Send(UiPackets.UseItem(s.Id));
        }

        /// <summary>GetMSCommandData(nome): skill aprendida com esse nome (sem diferenciar maiusculas), ou 0.</summary>
        public int SkillByName(string name) =>
            skills.FirstOrDefault(k => string.Equals(GameData.SkillName(k.Id, k.Level), name, StringComparison.OrdinalIgnoreCase))?.Id ?? 0;

        string ShortcutLabel(Shortcut s)
        {
            if (s.Type == "item") return items.TryGetValue(s.Id, out var it) ? GameData.ItemName(it.ItemId) : $"item {s.Id}";
            if (s.Type == "skill")
            {
                var lv = skills.FirstOrDefault(k => k.Id == s.Id)?.Level ?? s.Level;
                return GameData.SkillName(s.Id, lv != 0 ? lv : 1);
            }
            if (s.Type == "action") return GameData.ActionName(s.Id);
            return $"macro {s.Id}";
        }

        // ------------------------------------------------------------ confirmacao (DialogBox)
        /// <summary>
        /// ConfirmDlg (0xed, nativo no original): pergunta com OK/Cancelar no DialogBox; a resposta vai no DlgAnswer. Um dialogo
        /// aberto e fechado antes (o nativo nao passa pelo m_bInUse do script).
        /// </summary>
        public void Confirm(int messageId, IList<string> prms, int requesterId)
        {
            var m = GameData.SystemMessage(messageId, prms);
            Dialog.Ask(EDialogType.OKCancel, m.Text, "ConfirmDlg", (ok, _) => deps.Send(UiPackets.DlgAnswer(messageId, ok, requesterId)));
        }

        /// <summary>DialogShow(DIALOG_Warning, sysmsg) local: OK chama `answer(true)`; Cancelar `answer(false)`.</summary>
        public void Ask(int messageId, Action<bool> answer)
        {
            var m = GameData.SystemMessage(messageId, new List<string>());
            Dialog.Ask(EDialogType.Warning, m.Text, "GameUi", (ok, _) => answer(ok));
        }
    }
}
