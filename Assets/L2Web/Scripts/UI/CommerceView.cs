// Janelas de comercio do xdat ligadas aos scripts (#0029): ShopWnd (ShopScript) e TradeWnd (TradeScript). Ferramentas comuns
// das janelas de duas listas: encher uma ItemWindow com ListItem (tooltip do tipo da lista), selecao, duplo clique e o
// arrasto entre listas (com o Alt do inicio, AllItemCount).
using System;
using System.Collections.Generic;
using System.Linq;
using L2Web.Net;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
using UnityEngine.UI;

namespace L2Web.UI
{
    public static class ListWnd
    {
        static RawImage ghost;

        /// <summary>TooltipItem de um ListItem (preco e reservado entram nos tipos InventoryPrice*).</summary>
        public static TooltipItem Tip(ListItem i)
        {
            var t = new TooltipItem
            {
                ClassId = i.ClassId, ServerId = i.ServerId, Name = i.Name, ItemType = i.ItemType, Enchanted = i.Enchant, ConsumeType = i.ConsumeType,
                ItemNum = i.ItemNum, Price = i.Price, Reserved = i.Reserved,
            };
            var s = ItemStats.Of(i.ClassId);
            if (s == null) return t;
            t.AdditionalName = s.AddName ?? "";
            t.Description = (s.Description ?? "").Replace("\\n", "\n");
            t.CrystalType = s.CrystalType;
            t.Weight = s.Weight;
            t.ArmorType = s.ArmorType;
            t.SlotBitType = s.BodyPart;
            t.WeaponType = s.WeaponType;
            t.PhysicalDamage = s.PAtk;
            t.MagicalDamage = s.MAtk;
            t.AttackSpeed = s.Speed;
            t.SoulshotCount = s.SoulShot;
            t.SpiritshotCount = s.SpiritShot;
            t.ShieldDefense = s.ShieldPDef;
            t.ShieldDefenseRate = s.ShieldRate;
            t.AvoidModify = s.Avoid;
            t.PhysicalDefense = s.PDef;
            t.MagicalDefense = s.MDef;
            t.MpBonus = s.MpBonus;
            return t;
        }

        /// <summary>ListItem de um item do inventario/pacote (empilhavel [I] = Type2 &gt;= 3; peso do ItemStats).</summary>
        public static ListItem Of(int objectId, int itemId, long count, int enchant, int type2, long price = 0)
        {
            return new ListItem
            {
                ServerId = objectId, ClassId = itemId, ItemNum = count, Enchant = enchant, ItemType = type2, Price = price,
                ConsumeType = type2 >= 3 ? 2 : 0, Weight = ItemStats.Of(itemId)?.Weight ?? 0, Name = GameData.ItemName(itemId),
            };
        }

        /// <summary>
        /// ParamToItemInfo: o ItemInfo de um evento (chaves do InterfaceEvents.Item: classID, serverID, itemNum, itemType,
        /// enchanted, damaged, price, defaultPrice, reserved). Empilhavel [I] = itemType &gt;= 3.
        /// </summary>
        public static ListItem FromParam(string p)
        {
            int cls = 0, sid = 0, type = 5, ench = 0, dmg = 0, res = 0, price = 0, def = 0, num = 0;
            L2Param.ParseInt(p, "classID", ref cls);
            L2Param.ParseInt(p, "serverID", ref sid);
            L2Param.ParseInt(p, "itemNum", ref num);
            L2Param.ParseInt(p, "itemType", ref type);
            L2Param.ParseInt(p, "enchanted", ref ench);
            L2Param.ParseInt(p, "damaged", ref dmg);
            L2Param.ParseInt(p, "reserved", ref res);
            L2Param.ParseInt(p, "price", ref price);
            L2Param.ParseInt(p, "defaultPrice", ref def);
            var i = Of(sid, cls, num, ench, type, price);
            i.Damaged = dmg;
            i.Reserved = res;
            i.DefaultPrice = def;
            return i;
        }

        /// <summary>
        /// Enche a ItemWindow: icone, quantidade (ShowCount), tooltip do tipo dado; clique seleciona, duplo clique e arrasto
        /// chamam de volta com o indice.
        /// </summary>
        public static List<UiTexButton> Fill(L2Wnd w, string ctrl, List<ListItem> list, string tooltip, Action<int> select, Action<int> dbl,
            Action<int, PointerEventData, bool> drop, bool faded = false)
        {
            var data = list.Select(i => new SlotData
            {
                Icon = GameData.ItemIcon(i.ClassId), Title = i.Name, Count = i.ShowCount ? i.ItemNum : 0, Badge = i.Enchant > 0 ? "+" + i.Enchant : null,
                Cls = faded ? "disabled" : null, Tip = () => L2Tooltip.Item(Tip(i), tooltip),
            }).ToList();
            var bs = L2WndUtil.FillItemWindow(w, ctrl, data, GameUi.IconUrl);
            for (var k = 0; k < bs.Count; k++)
            {
                var idx = k;
                bs[k].OnClick = () => select?.Invoke(idx);
                bs[k].OnDoubleClick = () => dbl?.Invoke(idx);
                if (drop != null) Drag(bs[k], (e, alt) => drop(idx, e, alt));
            }
            return bs;
        }

        /// <summary>Arrasto com o icone seguindo o ponteiro; no soltar, o evento e o Alt do inicio (nw:0x1002eb00).</summary>
        public static void Drag(UiTexButton b, Action<PointerEventData, bool> onDrop)
        {
            var ev = UiEvents.Of(b);
            var alt = false;
            ev.OnBeginDrag = _ =>
            {
                UiTooltip.Dragging = true;
                alt = Keyboard.current != null && Keyboard.current.altKey.isPressed;
                if (!ghost)
                {
                    var rt = UiRoot.Box("ListDragGhost", UiRoot.Rect, 0, 0, 32, 32);
                    ghost = rt.gameObject.AddComponent<RawImage>();
                    ghost.raycastTarget = false;
                    ghost.color = new Color(1, 1, 1, 0.8f);
                }
                ghost.texture = b.transform.Find("icon")?.GetComponent<RawImage>()?.texture;
                ghost.enabled = ghost.texture;
                ghost.transform.SetAsLastSibling();
                ghost.gameObject.SetActive(true);
            };
            ev.OnDrag = e =>
            {
                if (!ghost) return;
                var k = UiRoot.PixelScale;
                UiRoot.Place(ghost.rectTransform, e.position.x / k - 16, UiRoot.Size.y - e.position.y / k - 16, 32, 32);
            };
            ev.OnEndDrag = e =>
            {
                UiTooltip.Dragging = false;
                if (ghost) ghost.gameObject.SetActive(false);
                onDrop(e, alt);
            };
        }

        /// <summary>Nome do controle do xdat sob o ponteiro, dentro da janela (o destino do OnDropItem), ou null.</summary>
        public static string Target(L2Wnd w, PointerEventData e, params string[] names)
        {
            for (var t = e.pointerCurrentRaycast.gameObject ? e.pointerCurrentRaycast.gameObject.transform : null; t && t != w.El.transform; t = t.parent)
                if (Array.IndexOf(names, t.name) >= 0)
                    return t.name;
            return null;
        }
    }

    // ------------------------------------------------------------ ShopWnd
    public sealed class ShopView
    {
        public readonly L2Wnd Wnd;
        public readonly ShopScript S = new();
        readonly GameUi ui;
        readonly Action<byte[]> send;
        int selTop = -1, selBottom = -1;
        int listId;

        public ShopView(L2Layer layer, GameUi ui, Action<byte[]> send)
        {
            this.ui = ui;
            this.send = send;
            Wnd = new L2Wnd("ShopWnd", layer, new WndOpts { AriaLabel = "Loja" });
            Wnd.OnClick("UpButton", () => Ask(S.BottomToTop(selBottom, false)));
            Wnd.OnClick("DownButton", () => Ask(S.TopToBottom(selTop, false)));
            Wnd.OnClick("OKButton", Ok);
            Wnd.OnClick("CancelButton", () =>
            {
                S.Clear();
                Wnd.Hide();
            });
        }

        /// <summary>BuyList (0x11): loja de compra.</summary>
        public void Buy(BuyListInfo b)
        {
            listId = b.ListId;
            S.Open("buy", b.ListId, b.Money);
            foreach (var i in b.Items) S.Add(ListWnd.Of(i.ObjectId, i.ItemId, i.Count, i.Enchant, i.Type2, i.Price));
            Open();
        }

        /// <summary>SellList (0x10): venda dos itens do inventario.</summary>
        public void Sell(SellListInfo s)
        {
            S.Open("sell", 0, s.Money);
            foreach (var i in s.Items) S.Add(ListWnd.Of(i.ObjectId, i.ItemId, i.Count, i.Enchant, i.Type2, i.Price));
            Open();
        }

        /// <summary>HandleOpenWindow: fecha o inventario, textos e tooltips do tipo, mostra.</summary>
        void Open()
        {
            ui.Inv.Hide();
            var (title, top, bottom, price) = S.Texts();
            Wnd.SetTitle(GameData.SysString(title, ""));
            Wnd.Text("TopText", GameData.SysString(top, ""));
            Wnd.Text("BottomText", GameData.SysString(bottom, ""));
            Wnd.Text("PriceConstText", GameData.SysString(price, ""));
            Wnd.Text("AdenaText", L2Tooltip.MakeCostString(S.Adena.ToString()));
            var at = Wnd.Get("AdenaText");
            if (at) UiTooltip.Set(at.gameObject, L2NumText.Convert(S.Adena.ToString(), true));
            Render();
            Wnd.Show();
        }

        void Render()
        {
            var (tt, bt) = S.TooltipTypes();
            selTop = selBottom = -1;
            ListWnd.Fill(Wnd, "TopList", S.Top, tt, i => selTop = i, i => Ask(S.TopToBottom(i, false)), (i, e, alt) =>
            {
                if (ListWnd.Target(Wnd, e, "BottomList") != null) Ask(S.TopToBottom(i, alt));
            });
            ListWnd.Fill(Wnd, "BottomList", S.Bottom, bt, i => selBottom = i, i => Ask(S.BottomToTop(i, false)), (i, e, alt) =>
            {
                if (ListWnd.Target(Wnd, e, "TopList") != null) Ask(S.BottomToTop(i, alt));
            });
            Wnd.Text("PriceText", L2Tooltip.MakeCostString(S.Price.ToString()));
            var pt = Wnd.Get("PriceText");
            if (pt) UiTooltip.Set(pt.gameObject, L2NumText.Convert(S.Price.ToString(), true));
        }

        /// <summary>Move ou pede a quantidade (NumberPad com DialogSetDefaultOK).</summary>
        void Ask(ShopScript.Ask a)
        {
            if (a == null)
            {
                Render();
                return;
            }
            if (ui.Dialog.S.InUse) ui.Dialog.Hide();
            ui.Dialog.SetParamInt((int)a.ParamInt);
            ui.Dialog.SetDefaultOK();
            var msg = GameData.SystemMessage(a.MsgId, new List<string> { a.Name, "" }).Text;
            int id = a.DlgId, cls = a.ClassId;
            ui.Dialog.Ask(a.Type, msg, "ShopWnd", (ok, text) =>
            {
                if (!ok) return;
                long.TryParse(text, out var n);
                S.DialogOk(id, n, cls);
                Render();
            });
        }

        /// <summary>HandleOKButton: RequestBuyItem / RequestSellItem; estoque limitado excedido = sm1338.</summary>
        void Ok()
        {
            var (items, warn) = S.Ok();
            if (warn != 0)
            {
                ui.Dialog.Ask(EDialogType.Warning, GameData.SystemMessage(warn, new List<string>()).Text, "ShopWnd", (_, _) => { });
                if (warn == 1338) return;
            }
            if (items != null)
            {
                if (S.Type == ShopScript.ShopType.Buy) send(UiPackets.RequestBuyItem(listId, items.Select(x => (x.ClassId, (int)x.Count)).ToList()));
                else if (S.Type == ShopScript.ShopType.Sell) send(UiPackets.RequestSellItem(S.MerchantId, items.Select(x => (x.ServerId, x.ClassId, (int)x.Count)).ToList()));
            }
            Wnd.Hide();
        }
    }

    // ------------------------------------------------------------ TradeWnd
    public sealed class TradeView
    {
        public readonly L2Wnd Wnd;
        public readonly TradeScript S = new();
        readonly GameUi ui;
        readonly Action<byte[]> send;
        int selInv = -1;
        bool closing;
        /// <summary>Nome (e cla) do parceiro pelo objectId.</summary>
        public Func<int, string> NameOf = id => "";

        public TradeView(L2Layer layer, GameUi ui, Action<byte[]> send)
        {
            this.ui = ui;
            this.send = send;
            Wnd = new L2Wnd("TradeWnd", layer, new WndOpts { AriaLabel = "Troca" });
            Wnd.OnClick("OKButton", () =>
            {
                S.MyOk = true;
                Render();
                send(SocialPackets.TradeDone(true));
            });
            Wnd.OnClick("CancelButton", () => send(SocialPackets.TradeDone(false)));
            Wnd.OnClick("MoveButton", () => Act(S.Move(selInv)));
            // OnSendPacketWhenHiding: fechar a janela pela moldura cancela a troca
            Wnd.OnClose = () =>
            {
                if (!closing) send(SocialPackets.TradeDone(false));
            };
        }

        /// <summary>
        /// HandleStartTrade: fecha inventario, armazem, loja privada, loja e multisell; nome do parceiro (- cla); os itens do
        /// pacote entram na InventoryList (EV_TradeAddItem destination=inventoryList).
        /// </summary>
        public void Start(TradeStartInfo t, IEnumerable<L2Wnd> toClose)
        {
            S.Clear();
            S.TargetId = t.PartnerId;
            foreach (var w in toClose) w?.Hide();
            foreach (var i in t.Items) S.AddItem("inventoryList", ListWnd.Of(i.ObjectId, i.ItemId, i.Count, i.Enchant, ItemType(i.ItemId)));
            Wnd.Text("TargetName", NameOf(t.PartnerId));
            Render();
            closing = false;
            Wnd.Show();
        }

        static int ItemType(int itemId)
        {
            var s = ItemStats.Of(itemId);
            return s == null ? 5 : s.Weapon ? 0 : s.Armor ? 1 : 5;
        }

        /// <summary>TradeOwnAdd / TradeOtherAdd: myList ou otherList. [I] o que foi oferecido sai da InventoryList.</summary>
        public void Add(bool own, TradeItem i)
        {
            var it = ListWnd.Of(i.ObjectId, i.ItemId, i.Count, i.Enchant, ItemType(i.ItemId));
            S.AddItem(own ? "myList" : "otherList", it);
            if (own)
            {
                var at = Lists.FindServer(S.Inventory, i.ObjectId);
                if (at >= 0)
                {
                    S.Inventory[at].ItemNum -= i.Count;
                    if (S.Inventory[at].ItemNum <= 0 || !S.Inventory[at].Stackable) S.Inventory.RemoveAt(at);
                }
            }
            Render();
        }

        /// <summary>TradeOtherDone (0x7c): HandleTradeOtherOK apaga a OtherList.</summary>
        public void OtherOk()
        {
            S.OtherOk = true;
            Render();
        }

        /// <summary>TradeDone (0x22): esconde (sem mandar outro TradeDone).</summary>
        public void Done()
        {
            closing = true;
            Wnd.Hide();
            S.Clear();
        }

        void Render()
        {
            selInv = -1;
            ListWnd.Fill(Wnd, "InventoryList", S.Inventory, "Inventory", i => selInv = i, i => Act(S.DoubleClick(i)), (i, e, alt) =>
            {
                if (ListWnd.Target(Wnd, e, "MyList") != null) Act(S.DropOnMy(S.Inventory[i], alt && S.Inventory[i].ItemNum > 1 ? S.Inventory[i].ItemNum : 0));
            });
            ListWnd.Fill(Wnd, "MyList", S.My, "Inventory", null, null, null, S.MyOk);
            ListWnd.Fill(Wnd, "OtherList", S.Other, "Inventory", null, null, null, S.OtherOk);
        }

        void Act(TradeScript.Act a)
        {
            if (a == null) return;
            if (!a.Ask)
            {
                send(SocialPackets.AddTradeItem(a.ServerId, (int)a.Count));
                return;
            }
            if (ui.Dialog.S.InUse) ui.Dialog.Hide();
            ui.Dialog.SetParamInt((int)a.Count);
            var sid = a.ServerId;
            ui.Dialog.Ask(EDialogType.NumberPad, GameData.SystemMessage(72, new List<string> { a.Name, "" }).Text, "TradeWnd", (ok, text) =>
            {
                if (ok && long.TryParse(text, out var n) && n > 0) send(SocialPackets.AddTradeItem(sid, (int)n));
            });
        }
    }
}
