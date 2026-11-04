// PetStatusWnd, SummonedStatusWnd, PetWnd e SummonedWnd do xdat (#0031) ligados ao PetScript pelos eventos do InterfaceRouter
// (EV_UpdatePetInfo com o GetPetInfo do router, EV_Pet*/EV_Summoned*, EV_PetInventoryItem*, EV_PetSummonedStatusClose) e pelas
// listas de acoes do actionname-e (EV_ActionPetList*/EV_ActionSummonedList*, que o ActionAPI do nativo monta no cliente).
using System;
using System.Collections.Generic;
using L2Web.Net;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class PetView
    {
        public readonly L2Wnd PetStatus, SummonedStatus, Wnd, SummonedWnd;
        public readonly PetScript S = new();
        readonly GameUi ui;
        readonly Action<byte[]> send;
        readonly List<int> petActions = new(), summonedActions = new();
        /// <summary>Tabela de acoes (actionname-e); trocavel nos testes.</summary>
        public Func<IEnumerable<L2TooltipData.ActionName>> AllActions = L2TooltipData.AllActions;

        public PetView(L2Layer layer, GameUi ui, Action<byte[]> send)
        {
            this.ui = ui;
            this.send = send;
            PetStatus = new L2Wnd("PetStatusWnd", layer, new WndOpts { AriaLabel = "Pet" });
            SummonedStatus = new L2Wnd("SummonedStatusWnd", layer, new WndOpts { AriaLabel = "Servo" });
            Wnd = new L2Wnd("PetWnd", layer, new WndOpts { AriaLabel = "Pet: detalhes" });
            SummonedWnd = new L2Wnd("SummonedWnd", layer, new WndOpts { AriaLabel = "Servo: detalhes" });

            L2Events.Register(Ev.EV_UpdatePetInfo, _ => InfoUpdate());
            L2Events.Register(Ev.EV_PetSummonedStatusClose, _ => Close());

            // ---- barrinhas
            L2Events.Register(Ev.EV_PetStatusShow, _ => StatusShow(PetStatus, PetScript.Pet));
            L2Events.Register(Ev.EV_SummonedStatusShow, _ => StatusShow(SummonedStatus, PetScript.Summoned));
            L2Events.Register(Ev.EV_ShowBuffIcon, p =>
            {
                var show = 0;
                L2Param.ParseInt(p, "Show", ref show);
                S.PetBuff = S.SummonedBuff = show == 1;
                UpdateBuff();
            });
            L2Events.Register(Ev.EV_PetStatusSpelledList, p => Buffs(PetStatus, p, S.PetBuff));
            L2Events.Register(Ev.EV_SummonedStatusSpelledList, p => Buffs(SummonedStatus, p, S.SummonedBuff));
            L2Events.Register(Ev.EV_SummonedStatusRemainTime, p =>
            {
                int remain = 0, max = 0;
                L2Param.ParseInt(p, "RemainTime", ref remain);
                L2Param.ParseInt(p, "MaxTime", ref max);
                if (S.RemainTime(remain, max)) ClearBuff(SummonedStatus);
                RenderRemain();
            });
            PetStatus.OnClick("btnBuff", () =>
            {
                S.PetBuff = !S.PetBuff;
                UpdateBuff();
            });
            SummonedStatus.OnClick("btnBuff", () =>
            {
                S.SummonedBuff = !S.SummonedBuff;
                UpdateBuff();
            });
            foreach (var w in new[] { PetStatus, SummonedStatus })
            {
                // OnLButtonDown: x em (13, largura - 10) = RequestAction(m_PetID) (seleciona o invocado)
                var wnd = w;
                var ev = UiEvents.Of(w.El);
                var front = ev.OnDown;
                ev.OnDown = e =>
                {
                    front?.Invoke(e);
                    var x = e.position.x / UiRoot.PixelScale - wnd.ScreenRect().X;
                    if (GameUi.StatusHit(x, wnd.Size[0]) && S.Data != null) ui.Party.Action(S.Data.Id, false);
                };
            }

            // ---- PetWnd
            L2Events.Register(Ev.EV_PetWndShow, _ => DetailShow(Wnd, true));
            L2Events.Register(Ev.EV_SummonedWndShow, _ => DetailShow(SummonedWnd, false));
            L2Events.Register(Ev.EV_PetWndShowNameBtn, p =>
            {
                var show = 0;
                L2Param.ParseInt(p, "Show", ref show);
                SetVisibleNameBtn(show == 1);
            });
            L2Events.Register(Ev.EV_PetWndRegPetNameFailed, p =>
            {
                var msg = 0;
                L2Param.ParseInt(p, "ErrMsgNo", ref msg);
                ui.ChatLine("sys", GameData.SystemMessage(msg, new List<string>()).Text, "#b09b79");
                AskName(S.NameFailedRestore(msg));
            });
            Wnd.OnClick("btnName", () => AskName(null));
            // OnShow: RequestPetInventoryItemList + RequestPetActionList; SummonedWnd: RequestSummonedActionList
            Wnd.OnShow = () =>
            {
                RequestInventory();
                RequestActions(true);
            };
            SummonedWnd.OnShow = () => RequestActions(false);
            L2Events.Register(Ev.EV_ActionPetListStart, _ =>
            {
                petActions.Clear();
                RenderActions(true);
            });
            L2Events.Register(Ev.EV_ActionPetList, p => AddAction(p, PetScript.ActionPet, petActions, true));
            L2Events.Register(Ev.EV_ActionSummonedListStart, _ =>
            {
                summonedActions.Clear();
                RenderActions(false);
            });
            L2Events.Register(Ev.EV_ActionSummonedList, p => AddAction(p, PetScript.ActionSummon, summonedActions, false));
            L2Events.Register(Ev.EV_PetInventoryItemStart, _ =>
            {
                S.ItemsStart();
                RenderInventory();
            });
            L2Events.Register(Ev.EV_PetInventoryItemList, p =>
            {
                S.ItemsAdd(ListWnd.FromParam(p));
                RenderInventory();
            });
            L2Events.Register(Ev.EV_PetInventoryItemUpdate, p =>
            {
                var wt = 0;
                L2Param.ParseInt(p, "WorkType", ref wt);
                S.ItemsUpdate(wt, ListWnd.FromParam(p));
                RenderInventory();
            });
        }

        // ------------------------------------------------------------ dados
        void InfoUpdate()
        {
            var r = ui.Router();
            S.Refresh(r?.Pet, r?.PetStatus);
            RenderStatus(PetStatus, true);
            RenderStatus(SummonedStatus, false);
            RenderDetail(Wnd, true);
            RenderDetail(SummonedWnd, false);
        }

        /// <summary>EV_PetSummonedStatusClose: as quatro fecham; o servo para e zera o tempo.</summary>
        void Close()
        {
            S.Refresh(null, null);
            PetStatus.Hide();
            S.ResetRemain();
            RenderRemain();
            SummonedStatus.Hide();
            Wnd.Hide();
            SummonedWnd.Hide();
        }

        // ------------------------------------------------------------ barrinhas
        /// <summary>Handle*StatusShow: Clear, mostra; o OnShow fecha de novo se o invocado nao e deste tipo.</summary>
        void StatusShow(L2Wnd w, int type)
        {
            ClearStatus(w, type == PetScript.Pet);
            w.Show();
            if (!S.StatusKeeps(type)) w.Hide();
            UpdateBuff();
        }

        void ClearStatus(L2Wnd w, bool pet)
        {
            ClearBuff(w);
            w.Text("PetName", "");
            w.Bar("barHP", 0, 0);
            w.Bar("barMP", 0, 0);
            if (pet) w.Bar("barFATIGUE", 0, 0);
        }

        void RenderStatus(L2Wnd w, bool pet)
        {
            var i = S.Data ?? new PetScript.Info();
            w.Text("PetName", i.Name);
            var t = w.TextEl("PetName");
            if (t) t.alignment = TextAnchor.MiddleCenter;
            w.Bar("barHP", i.Hp, i.MaxHp);
            w.Bar("barMP", i.Mp, i.MaxMp);
            if (pet) w.Bar("barFATIGUE", i.Fatigue, i.MaxFatigue);
        }

        void RenderRemain()
        {
            SummonedStatus.Bar("progFATIGUE", (float)S.RemainMs, (float)Math.Max(1, S.MaxMs));
        }

        void UpdateBuff()
        {
            PetStatus.ShowCtrl("StatusIcon", S.PetBuff);
            SummonedStatus.ShowCtrl("StatusIcon", S.SummonedBuff);
        }

        static void ClearBuff(L2Wnd w)
        {
            var box = w.Get("StatusIcon");
            if (box) UiKit.Clear(box);
        }

        /// <summary>Handle*StatusSpelledList: icones de 16 (nivel 1), 10 por linha.</summary>
        void Buffs(L2Wnd w, string param, bool show)
        {
            var box = w.Get("StatusIcon");
            if (!box) return;
            UiKit.Clear(box);
            var cells = PetScript.BuffGrid(param);
            var cols = 0;
            var rows = 0;
            foreach (var (id, col, row) in cells)
            {
                cols = Math.Max(cols, col + 1);
                rows = Math.Max(rows, row + 1);
                var d = UiRoot.Box("buff", box, col * 16, row * 16, 16, 16);
                var url = GameUi.IconUrl(GameData.SkillIcon(id));
                if (url == null) continue;
                var img = d.gameObject.AddComponent<RawImage>();
                img.raycastTarget = false;
                L2WndUtil.SetTexture(img, url);
            }
            box.sizeDelta = new Vector2(cols * 16, rows * 16);
            w.ShowCtrl("StatusIcon", show);
        }

        // ------------------------------------------------------------ PetWnd e SummonedWnd
        /// <summary>HandlePetShow: Clear, dados, mostra; PetWnd tambem aplica o botao de nome.</summary>
        void DetailShow(L2Wnd w, bool pet)
        {
            var r = ui.Router();
            S.Refresh(r?.Pet, r?.PetStatus);
            RenderDetail(w, pet);
            w.Show();
            if (pet) SetVisibleNameBtn(S.ShowNameBtn);
        }

        void RenderDetail(L2Wnd w, bool pet)
        {
            foreach (var (ctrl, text) in PetScript.Texts(S.Data, pet)) w.Text(ctrl, text);
            foreach (var (tex, width) in PetScript.Bars(S.Data, pet)) TexSize(w, tex, width, null);
            if (pet && S.Data != null) TexSize(w, "texWeight", PetScript.BarSize(S.Data.CarringWeight, S.Data.CarryWeight, PetScript.SmallBar),
                PetScript.WeightTexture(S.Data.CarringWeight, S.Data.CarryWeight));
        }

        /// <summary>SetWindowSize(w, 12) numa Texture esticada (e SetTexture no peso).</summary>
        static void TexSize(L2Wnd w, string name, int width, string file)
        {
            var el = w.Get(name);
            var c = w.Ctrl(name);
            if (!el || c == null) return;
            el.sizeDelta = new Vector2(width, PetScript.BarHeight);
            var f = string.IsNullOrEmpty(file) ? c.S("file") : file;
            var img = L2WndUtil.Paint(el, f, Math.Max(1, width), PetScript.BarHeight, PaintMode.Stretch, c.N0("u"), c.N0("v"), c.N0("uSize"), c.N0("vSize"));
            if (img) img.enabled = width > 0;
        }

        void SetVisibleNameBtn(bool show)
        {
            Wnd.ShowCtrl("btnName", show);
            S.ShowNameBtn = show;
        }

        /// <summary>OnNameClick / HandleRegPetName: OKCancelInput sm535 (com o nome anterior no MsgNo 80).</summary>
        void AskName(string restore)
        {
            if (ui.Dialog.S.InUse) ui.Dialog.Hide();
            ui.Dialog.Ask(EDialogType.OKCancelInput, GameData.SystemMessage(535, new List<string>()).Text, "PetWnd", (ok, text) =>
            {
                if (ok) send(PetPackets.RequestChangePetName(S.NameOk(text)));
            });
            if (restore != null) ui.Dialog.SetString(restore);
        }

        /// <summary>RequestPetInventoryItemList [I]: o nativo repete a lista que ja tem (PetItemList do router).</summary>
        void RequestInventory()
        {
            var r = ui.Router();
            if (r == null) return;
            foreach (var e in InterfaceEvents.PetItemList(new PetItemListInfo { Items = r.PetItems })) L2Events.Dispatch(e);
        }

        /// <summary>RequestPetActionList / RequestSummonedActionList [I]: Start e uma linha por acao da categoria.</summary>
        void RequestActions(bool pet)
        {
            L2Events.Dispatch(new PacketEvents.Event(pet ? Ev.EV_ActionPetListStart : Ev.EV_ActionSummonedListStart, ""));
            var cat = pet ? PetScript.ActionPet : PetScript.ActionSummon;
            foreach (var id in PetScript.ActionList(AllActions(), cat, S.Data?.NpcId ?? 0))
            {
                var a = L2TooltipData.Action(id);
                var p = L2Param.Add("", "Type", cat);
                p = L2Param.Add(p, "ActionID", id);
                p = L2Param.Add(p, "Name", a?.Name ?? GameData.ActionName(id));
                p = L2Param.Add(p, "IconName", a?.Icon ?? "");
                p = L2Param.Add(p, "Description", a?.Desc ?? "");
                p = L2Param.Add(p, "Command", a?.Cmd ?? "");
                L2Events.Dispatch(new PacketEvents.Event(pet ? Ev.EV_ActionPetList : Ev.EV_ActionSummonedList, p));
            }
        }

        /// <summary>HandleActionPetList / HandleActionSummonedList: so entra o Type da janela (ACTION_PET / ACTION_SUMMON).</summary>
        void AddAction(string p, int type, List<int> list, bool pet)
        {
            int t = 0, id = 0;
            L2Param.ParseInt(p, "Type", ref t);
            L2Param.ParseInt(p, "ActionID", ref id);
            if (t != type) return;
            list.Add(id);
            RenderActions(pet);
        }

        void RenderActions(bool pet)
        {
            var w = pet ? Wnd : SummonedWnd;
            var ctrl = pet ? "PetActionWnd" : "SummonedActionWnd";
            var list = pet ? petActions : summonedActions;
            var data = new List<SlotData>();
            foreach (var id in list)
            {
                var k = id;
                data.Add(new SlotData { Icon = GameData.ActionIcon(id), Title = GameData.ActionName(id), Tip = () => GameUi.ActionTooltip(k) });
            }
            var bs = L2WndUtil.FillItemWindow(w, ctrl, data, GameUi.IconUrl);
            for (var i = 0; i < bs.Count; i++)
            {
                var id = list[i];
                // OnClickItem: DoAction(ClassID); arrastar para a barra (acoes 15-27 com UserShortCut 2)
                bs[i].OnClick = () => ui.DoAction(id);
                ui.DragToBar(bs[i], "action", id);
            }
        }

        void RenderInventory()
        {
            var bs = ListWnd.Fill(Wnd, "PetInvenWnd", S.Items, "Inventory", null, null, null);
            for (var i = 0; i < bs.Count; i++)
            {
                var it = S.Items[i];
                if (it.Equipped)
                {
                    var fore = UiRoot.Box("fore", bs[i].GetComponent<RectTransform>(), 0, 0, 32, 32);
                    var img = L2WndUtil.Paint(fore, PetScript.EquippedTexture, 32, 32);
                    if (img) img.raycastTarget = false;
                }
                // OnDBClickItem / OnRClickItem: RequestPetUseItem
                bs[i].OnDoubleClick = () => send(PetPackets.RequestPetUseItem(it.ServerId));
                bs[i].OnRightClick = () => send(PetPackets.RequestPetUseItem(it.ServerId));
                // arrastar: para a barra (UserShortCut 2) ou para o inventario (RequestGetItemFromPet, InventoryWnd.OnDropItem)
                ui.DragToBar(bs[i], "item", it.ServerId, true, (e, alt) => ui.DropOnInventory(e, new InventoryScript.Item
                {
                    Src = "PetInvenWnd", ServerId = it.ServerId, ClassId = it.ClassId, ItemType = it.ItemType, ConsumeType = it.ConsumeType,
                    ItemNum = it.ItemNum, AllItemCount = alt && it.ItemNum > 1 ? it.ItemNum : 0, Name = it.Name,
                }));
            }
        }

        /// <summary>
        /// OnDropItem("PetInvenWnd") vindo do inventario: true se o soltar caiu na lista do pet (aberta), com o pedido ou o
        /// NumberPad sm72.
        /// </summary>
        public bool DropFromInventory(PointerEventData e, InventoryScript.Item info)
        {
            if (!Wnd.Visible || ListWnd.Target(Wnd, e, "PetInvenWnd") == null) return false;
            var (give, ask) = PetScript.Give(info);
            if (give is { } g) send(PetPackets.RequestGiveItemToPet(g.serverId, g.count));
            else if (ask != null)
            {
                if (ui.Dialog.S.InUse) ui.Dialog.Hide();
                ui.Dialog.SetParamInt((int)ask.ParamInt);
                var sid = ask.ServerId;
                ui.Dialog.Ask(EDialogType.NumberPad, GameData.SystemMessage(72, new List<string> { ask.Name, "" }).Text, "PetWnd", (ok, text) =>
                {
                    int.TryParse(text, out var n);
                    if (ok) send(PetPackets.RequestGiveItemToPet(sid, n));
                });
            }
            return true;
        }
    }
}
