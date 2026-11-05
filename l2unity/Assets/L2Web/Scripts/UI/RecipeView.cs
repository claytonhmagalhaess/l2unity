// RecipeBookWnd, RecipeManufactureWnd, RecipeBuyManufactureWnd, RecipeShopWnd, RecipeBuyListWnd e RecipeTreeWnd do xdat (#0043)
// ligados aos scripts de RecipeScript.cs pelos eventos do InterfaceRouter (RecipeBookItemList, RecipeItemMakeInfo,
// RecipeShopManageList/SellList/ItemInfo) e pelo EV_RecipeShowRecipeTreeWnd dos botoes de arvore.
using System;
using System.Collections.Generic;
using L2Web.Net;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class RecipeView
    {
        public readonly L2Wnd Book, Make, BuyMake, Shop, BuyList, Tree;
        public readonly RecipeBookScript BookS = new();
        public readonly RecipeMakeScript MakeS = new(), BuyMakeS = new();
        public readonly RecipeShopScript ShopS = new();
        public readonly RecipeBuyListScript BuyListS = new();
        public readonly RecipeTreeScript TreeS = new();
        readonly GameUi ui;
        readonly Action<byte[]> send;
        readonly L2TreeCtrl buyTree, recipeTree;
        int bookSel = -1, shopSel = -1, bookListSel = -1;

        public RecipeView(L2Layer layer, GameUi ui, Action<byte[]> send)
        {
            this.ui = ui;
            this.send = send;
            Book = new L2Wnd("RecipeBookWnd", layer, new WndOpts { AriaLabel = "Livro de receitas" });
            Make = new L2Wnd("RecipeManufactureWnd", layer, new WndOpts { AriaLabel = "Fabricar" });
            BuyMake = new L2Wnd("RecipeBuyManufactureWnd", layer, new WndOpts { AriaLabel = "Fabricar na loja" });
            Shop = new L2Wnd("RecipeShopWnd", layer, new WndOpts { AriaLabel = "Loja de fabricação" });
            BuyList = new L2Wnd("RecipeBuyListWnd", layer, new WndOpts { AriaLabel = "Loja de fabricação" });
            Tree = new L2Wnd("RecipeTreeWnd", layer, new WndOpts { AriaLabel = "Árvore da receita" });
            MakeS.InventoryCount = BuyMakeS.InventoryCount = TreeS.InventoryCount = ui.InventoryCount;
            buyTree = new L2TreeCtrl(BuyList, "MainTree") { OnClick = n => BuyClick(n.Name) };
            recipeTree = new L2TreeCtrl(Tree, "MainTree")
            {
                OnClick = n =>
                {
                    if (!n.ShowButton) return;
                    TreeS.SetExpanded(n.Name, !n.Expanded);
                    recipeTree.Render(TreeS);
                },
            };
            // a dica e o arrasto do atalho de receita (SCIT_RECIPE) usam o nome do item da receita
            ui.RecipeName = id => GameData.ItemName(RecipeData.Get(id)?.ItemId ?? 0);
            BuildBook();
            BuildMake(Make, MakeS, false);
            BuildMake(BuyMake, BuyMakeS, true);
            BuildShop();
            BuildBuyList();
            L2Events.Register(Ev.EV_RecipeShowRecipeTreeWnd, p =>
            {
                int id = 0, rate = 0;
                L2Param.ParseInt(p, "RecipeID", ref id);
                L2Param.ParseInt(p, "SuccessRate", ref rate);
                TreeS.All = RecipeData.All.Values;
                TreeS.Show(id, rate, cls => ItemStats.Of(cls)?.CrystalType ?? 0);
                foreach (var kv in TreeS.Texts) Tree.Text(kv.Key, kv.Value);
                SetIcon(Tree, "texIcon", GameData.ItemIcon(RecipeData.Get(id)?.ProductId ?? 0));
                Tree.Show();
                recipeTree.Render(TreeS);
            });
            Tree.OnClick("btnClose", Tree.Hide);
        }

        static void SetIcon(L2Wnd w, string ctrl, string icon)
        {
            var el = w.Get(ctrl);
            var url = GameUi.IconUrl(icon);
            if (!el || url == null) return;
            var img = L2WndUtil.Bg(el, "icon");
            img.enabled = true;
            UiRoot.Fill(img.rectTransform);
            L2WndUtil.SetTexture(img, url);
        }

        static SlotData Slot(RecipeSlot s, long count = 0, bool disabled = false) => new()
        {
            Icon = GameData.ItemIcon(s.ProductId), Title = s.Name, Count = count, Cls = disabled ? "disabled" : null,
            Tip = () => L2Tooltip.Item(new TooltipItem { ClassId = s.ClassId, Name = s.Name, Price = s.Price, CrystalType = ItemStats.Of(s.ProductId)?.CrystalType ?? 0 }, s.Price > 0 ? "InventoryPrice1" : "Inventory"),
        };

        void Ask(EDialogType type, string msg, string owner, Action<bool, string> done, int param = 0, bool defaultOk = false, int maxLength = -1, string init = null)
        {
            if (ui.Dialog.S.InUse) ui.Dialog.Hide();
            if (param != 0) ui.Dialog.SetParamInt(param);
            if (defaultOk) ui.Dialog.SetDefaultOK();
            if (maxLength >= 0) ui.Dialog.SetEditBoxMaxLength(maxLength);
            ui.Dialog.Ask(type, msg, owner, done);
            if (init != null) ui.Dialog.SetString(init);
        }

        // ------------------------------------------------------------ RecipeBookWnd
        void BuildBook()
        {
            L2Events.Register(Ev.EV_RecipeShowBookWnd, p =>
            {
                var type = 0;
                L2Param.ParseInt(p, "Type", ref type);
                var title = BookS.Show(type);
                // MoveTo na posicao da RecipeManufactureWnd
                if (Make.Visible) Book.El.anchoredPosition = Make.El.anchoredPosition;
                Book.SetTitle(GameData.SysString(title, ""));
                RenderBook();
                Book.Show();
            });
            L2Events.Register(Ev.EV_RecipeAddBookItem, p =>
            {
                var id = 0;
                L2Param.ParseInt(p, "RecipeID", ref id);
                BookS.Add(id);
                RenderBook();
            });
            L2Events.Register(Ev.EV_SetMaxCount, p =>
            {
                L2Param.ParseInt(p, "recipe", ref BookS.MaxNormal);
                L2Param.ParseInt(p, "dwarvenRecipe", ref BookS.MaxDwarf);
                Book.Text("txtCount", BookS.CountText);
            });
            Book.OnClick("btnTrash", () =>
            {
                if (bookSel >= 0 && bookSel < BookS.Items.Count) AskDelete(BookS.Items[bookSel]);
            });
        }

        void AskDelete(RecipeSlot s)
        {
            var msg = BookS.AskDelete(s, (id, a) => GameData.SystemMessage(id, new List<string> { a, "" }).Text);
            Ask(EDialogType.Warning, msg, "RecipeBookWnd", (ok, _) =>
            {
                if (ok) send(RecipePackets.RequestRecipeItemDelete(BookS.DeleteId));
            });
        }

        void RenderBook()
        {
            Book.Text("txtCount", BookS.CountText);
            bookSel = -1;
            var bs = L2WndUtil.FillItemWindow(Book, "RecipeItem", BookS.Items.ConvertAll(s => Slot(s)), GameUi.IconUrl);
            for (var i = 0; i < bs.Count; i++)
            {
                var k = i;
                var s = BookS.Items[i];
                bs[i].OnClick = () => bookSel = k;
                bs[i].OnDoubleClick = () =>
                {
                    if (BookS.Open(k) is { } id) send(RecipePackets.RequestRecipeItemMakeInfo(id));
                };
                // arrastar para a barra (atalho de receita) ou para a lixeira (OnDropItem btnTrash)
                ui.DragToBar(bs[i], "recipe", s.RecipeId, false, (e, _) =>
                {
                    if (ListWnd.Target(Book, e, "btnTrash") != null) AskDelete(s);
                });
            }
        }

        // ------------------------------------------------------------ RecipeManufactureWnd / RecipeBuyManufactureWnd
        void BuildMake(L2Wnd w, RecipeMakeScript s, bool buy)
        {
            L2Events.Register(buy ? Ev.EV_RecipeShopItemInfo : Ev.EV_RecipeItemMakeInfo, p =>
            {
                int id = 0, mp = 0, max = 0, result = 0, type = 0, merchant = 0, adena = 0;
                L2Param.ParseInt(p, "RecipeID", ref id);
                L2Param.ParseInt(p, "CurrentMP", ref mp);
                L2Param.ParseInt(p, "MaxMP", ref max);
                L2Param.ParseInt(p, "MakingResult", ref result);
                L2Param.ParseInt(p, "Type", ref type);
                L2Param.ParseInt(p, "MerchantID", ref merchant);
                L2Param.ParseInt(p, "Adena", ref adena);
                var from = buy ? BuyList : Book;
                from.Hide();
                s.Clear();
                // MoveTo na posicao da RecipeBookWnd / RecipeBuyListWnd
                w.El.anchoredPosition = from.El.anchoredPosition;
                s.MerchantId = merchant;
                s.Adena = adena;
                s.Info(id, mp, max, result, type, buy ? merchant : ui.User?.ObjectId ?? 0);
                if (buy) w.SetTitle(GameData.SysString(663, "") + " - " + NameOf(merchant));
                RenderMake(w, s);
                w.Show();
            });
            L2Events.Register(Ev.EV_UpdateMP, p =>
            {
                int sid = 0, mp = 0;
                L2Param.ParseInt(p, "ServerID", ref sid);
                L2Param.ParseInt(p, "CurrentMP", ref mp);
                if (s.PlayerId != sid || s.PlayerId <= 0) return;
                s.Mp = mp;
                MpBar(w, s.MpBar);
            });
            foreach (var ev in new[] { Ev.EV_InventoryAddItem, Ev.EV_InventoryUpdateItem })
                L2Events.Register(ev, p =>
                {
                    var cls = 0;
                    if (L2Param.ParseInt(p, "classID", ref cls) && s.InventoryChanged(cls) && w.Visible) RenderMake(w, s);
                });
            w.OnClick("btnClose", () =>
            {
                s.Clear();
                w.Hide();
            });
            w.OnClick("btnPrev", () =>
            {
                send(buy ? RecipePackets.RequestRecipeShopSellList(s.MerchantId) : RecipePackets.RequestRecipeBookOpen(s.BookType));
                s.Clear();
                w.Hide();
            });
            w.OnClick("btnRecipeTree", () =>
            {
                if (Tree.Visible) Tree.Hide();
                else L2Events.Dispatch(new PacketEvents.Event(Ev.EV_RecipeShowRecipeTreeWnd, L2Param.Add(L2Param.Add("", "RecipeID", s.RecipeId), "SuccessRate", s.SuccessRate)));
            });
            w.OnClick("btnManufacture", () =>
                send(buy ? RecipePackets.RequestRecipeShopMakeDo(s.MerchantId, s.RecipeId, (int)s.Adena) : RecipePackets.RequestRecipeItemMakeSelf(s.RecipeId)));
        }

        string NameOf(int objectId) => ui.EntityName(objectId);

        static void MpBar(L2Wnd w, int width)
        {
            var el = w.Get("texMPBar");
            if (el) el.sizeDelta = new Vector2(width, 12);
        }

        void RenderMake(L2Wnd w, RecipeMakeScript s)
        {
            foreach (var kv in s.Texts) w.Text(kv.Key, kv.Value);
            SetIcon(w, "texItem", GameData.ItemIcon(RecipeData.Get(s.RecipeId)?.ProductId ?? 0));
            MpBar(w, s.MpBar);
            var data = s.Materials.ConvertAll(m => new SlotData
            {
                Icon = GameData.ItemIcon(m.ClassId), Title = GameData.ItemName(m.ClassId), Count = m.Have, Cls = m.Disabled ? "disabled" : null,
                Tip = () => L2Tooltip.Item(new TooltipItem { ClassId = m.ClassId, Name = GameData.ItemName(m.ClassId), ItemNum = m.Have, Reserved = m.Need }, "Inventory"),
            });
            L2WndUtil.FillItemWindow(w, "ItemWnd", data, GameUi.IconUrl);
        }

        // ------------------------------------------------------------ RecipeShopWnd
        void BuildShop()
        {
            L2Events.Register(Ev.EV_RecipeShopShowWnd, p =>
            {
                var type = 0;
                L2Param.ParseInt(p, "Type", ref type);
                Shop.SetTitle(GameData.SysString(ShopS.Show(type), ""));
                RenderShop();
                Shop.Show();
            });
            L2Events.Register(Ev.EV_RecipeShopAddBookItem, p =>
            {
                var id = 0;
                L2Param.ParseInt(p, "RecipeID", ref id);
                ShopS.AddBook(id);
                RenderShop();
            });
            L2Events.Register(Ev.EV_RecipeShopAddShopItem, p =>
            {
                int id = 0, can = 0, fee = 0;
                L2Param.ParseInt(p, "RecipeID", ref id);
                L2Param.ParseInt(p, "CanbeMade", ref can);
                L2Param.ParseInt(p, "MakingFee", ref fee);
                ShopS.AddShop(id, can, fee);
                RenderShop();
            });
            var closing = false;
            void Close()
            {
                closing = true;
                ShopS.Clear();
                Shop.Hide();
            }
            Shop.OnClick("btnEnd", () =>
            {
                send(RecipePackets.RequestRecipeShopManageQuit());
                Close();
            });
            Shop.OnClick("btnStart", () =>
            {
                send(RecipePackets.RequestRecipeShopListSet(ShopS.Start()));
                Close();
            });
            Shop.OnClick("btnMsg", () => Ask(EDialogType.OKCancelInput, GameData.SystemMessage(334, new List<string>()).Text, "RecipeShopWnd",
                (ok, text) =>
                {
                    if (ok) send(RecipePackets.RequestRecipeShopMessageSet(text));
                }, 0, false, 29, ui.RecipeShopMsg));
            Shop.OnClick("btnMoveUp", () =>
            {
                if (shopSel >= 0 && shopSel < ShopS.Shop.Count) ShopS.Delete(ShopS.Shop[shopSel]);
                RenderShop();
            });
            Shop.OnClick("btnMoveDown", () =>
            {
                if (bookListSel >= 0 && bookListSel < ShopS.Book.Count)
                {
                    ShopS.Handle = ShopS.Book[bookListSel];
                    AskPrice();
                }
            });
            // OnSendPacketWhenHiding: fechar pela moldura desmonta a loja
            Shop.OnClose = () =>
            {
                if (!closing) send(RecipePackets.RequestRecipeShopManageQuit());
                closing = false;
                ShopS.Clear();
            };
        }

        /// <summary>ShowShopItemAddDialog: NumberPad sm963, ParamInt -1, DefaultOK; o OK confere o limite (sm1369).</summary>
        void AskPrice()
        {
            Ask(EDialogType.NumberPad, GameData.SystemMessage(963, new List<string>()).Text, "RecipeShopWnd", (ok, text) =>
            {
                if (!ok)
                {
                    ShopS.Handle = null;
                    return;
                }
                if (ShopS.PriceOk(text)) Ask(EDialogType.Warning, GameData.SystemMessage(1369, new List<string>()).Text, "RecipeShopWnd", (_, _) => { });
                RenderShop();
            }, -1, true);
        }

        void RenderShop()
        {
            Shop.Text("txtCount", ShopS.CountText);
            bookListSel = shopSel = -1;
            var bb = L2WndUtil.FillItemWindow(Shop, "BookItemWnd", ShopS.Book.ConvertAll(s => Slot(s)), GameUi.IconUrl);
            for (var i = 0; i < bb.Count; i++)
            {
                var k = i;
                bb[i].OnClick = () => bookListSel = k;
                bb[i].OnDoubleClick = () =>
                {
                    if (ShopS.DoubleClickBook(k)) AskPrice();
                    RenderShop();
                };
                ListWnd.Drag(bb[i], (e, _) =>
                {
                    if (ListWnd.Target(Shop, e, "ShopItemWnd") == null) return;
                    ShopS.Handle = ShopS.Book[k];
                    AskPrice();
                });
            }
            var sb = L2WndUtil.FillItemWindow(Shop, "ShopItemWnd", ShopS.Shop.ConvertAll(s => Slot(s)), GameUi.IconUrl);
            for (var i = 0; i < sb.Count; i++)
            {
                var k = i;
                sb[i].OnClick = () => shopSel = k;
                sb[i].OnDoubleClick = () =>
                {
                    ShopS.DoubleClickShop(k);
                    RenderShop();
                };
                ListWnd.Drag(sb[i], (e, _) =>
                {
                    if (ListWnd.Target(Shop, e, "BookItemWnd") == null) return;
                    ShopS.Delete(ShopS.Shop[k]);
                    RenderShop();
                });
            }
        }

        // ------------------------------------------------------------ RecipeBuyListWnd
        void BuildBuyList()
        {
            L2Events.Register(Ev.EV_RecipeShowBuyListWnd, p =>
            {
                int sid = 0, mp = 0, max = 0, adena = 0;
                L2Param.ParseInt(p, "ServerID", ref sid);
                L2Param.ParseInt(p, "CurrentMP", ref mp);
                L2Param.ParseInt(p, "MaxMP", ref max);
                L2Param.ParseInt(p, "Adena", ref adena);
                if (BuyMake.Visible) BuyList.El.anchoredPosition = BuyMake.El.anchoredPosition;
                BuyListS.Show(sid, mp, max, adena);
                BuyList.SetTitle(GameData.SysString(663, "") + " - " + NameOf(sid));
                MpBar(BuyList, BuyListS.MpBar);
                BuyList.Text("txtAdena", L2Tooltip.MakeCostString(adena.ToString()));
                var at = BuyList.Get("txtAdena");
                if (at) UiTooltip.Set(at.gameObject, L2NumText.Convert(adena.ToString(), true));
                buyTree.Render(BuyListS);
                BuyList.Show();
            });
            L2Events.Register(Ev.EV_RecipeShopSellItem, p =>
            {
                int id = 0, fee = 0;
                L2Param.ParseInt(p, "RecipeID", ref id);
                L2Param.ParseInt(p, "MakingFee", ref fee);
                BuyListS.Add(id, fee);
                buyTree.Render(BuyListS);
            });
            L2Events.Register(Ev.EV_UpdateMP, p =>
            {
                int sid = 0, mp = 0;
                L2Param.ParseInt(p, "ServerID", ref sid);
                L2Param.ParseInt(p, "CurrentMP", ref mp);
                if (BuyListS.MerchantId != sid || sid <= 0) return;
                BuyListS.Mp = mp;
                MpBar(BuyList, BuyListS.MpBar);
            });
            BuyList.OnClick("btnClose", BuyList.Hide);
        }

        void BuyClick(string node)
        {
            var id = BuyListS.Click(node);
            if (id > 0) send(RecipePackets.RequestRecipeShopMakeInfo(BuyListS.MerchantId, id));
        }
    }
}
