// ItemEnchantWnd.uc, RefineryWnd.uc e UnrefineryWnd.uc (spec 07 §4.2-4.4, #0044): o encantamento (lista dos itens que o
// pergaminho aceita, OK e cancelar), o augment com as 3 caixas na ordem (alvo, life stone, gemstone com o numero) e o
// progresso de 1900 ms antes do RequestRefine, e o remover augment (taxa, adena, 2000 ms e RequestRefineCancel).
using System;
using System.Collections.Generic;
using L2Web.Net;
using UnityEngine;
using UnityEngine.EventSystems;

namespace L2Web.UI
{
    public sealed class EnchantScript
    {
        public int ScrollId;
        public readonly List<ListItem> Items = new();
        public int Selected = -1;

        /// <summary>HandleEnchantShow: limpa e o titulo "ss1220(nome do pergaminho)".</summary>
        public string Show(int scrollId, Func<int, string> sys, Func<int, string> itemName)
        {
            Items.Clear();
            Selected = -1;
            ScrollId = scrollId;
            return sys(1220) + "(" + itemName(scrollId) + ")";
        }

        /// <summary>
        /// EV_EnchantItemList [I]: o nativo monta do inventario; aqui pelo nome do pergaminho ("Weapon"/"Armor" e "Grade X"):
        /// armas (Type2 0) ou armaduras e acessorios (Type2 1/2) do mesmo grau.
        /// </summary>
        public static bool Accepts(string scrollName, int type2, int crystal)
        {
            var n = scrollName ?? "";
            var weapon = n.IndexOf("Weapon", StringComparison.OrdinalIgnoreCase) >= 0;
            var armor = n.IndexOf("Armor", StringComparison.OrdinalIgnoreCase) >= 0;
            if (!weapon && !armor) return false;
            if (weapon ? type2 != 0 : type2 != 1 && type2 != 2) return false;
            var k = n.IndexOf("Grade ", StringComparison.OrdinalIgnoreCase);
            if (k < 0 || k + 6 >= n.Length) return false;
            var g = "DCBAS".IndexOf(char.ToUpperInvariant(n[k + 6]));
            return g >= 0 && crystal == g + 1;
        }

        /// <summary>OnOKClick: RequestEnchantItem do escolhido (ServerID &gt; 0); null sem escolha.</summary>
        public int? Ok() => Selected >= 0 && Selected < Items.Count && Items[Selected].ServerId > 0 ? Items[Selected].ServerId : null;
    }

    public sealed class RefineryScript
    {
        /// <summary>procedure1stat..4stat.</summary>
        public bool P1, P2, P3, P4;
        public int TargetId, RefinerId, GemId, GemClassId, NeedGems, GemCount;
        public ListItem Target, Refiner, Gem, Result;
        public string Instruction = "", GemName = "", GemCountText = "";
        public bool RefineEnabled, CloseEnabled = true, Refining;
        public int Highlight = 1;
        public Func<int, string> SysMsg = id => GameData.SystemMessage(id, new List<string>()).Text;
        public Func<int, string, string, string> SysMsg2 = (id, a, b) => GameData.SystemMessage(id, new List<string> { a, b }).Text;
        public Func<int, string> ItemName = GameData.ItemName;

        /// <summary>ResetReady: tudo limpo, so a 1a caixa, instrucao sm1957.</summary>
        public void Reset()
        {
            P1 = P2 = P3 = P4 = false;
            Target = Refiner = Gem = Result = null;
            GemName = GemCountText = "";
            Instruction = SysMsg(1957);
            RefineEnabled = false;
            CloseEnabled = true;
            Refining = false;
            Highlight = 1;
        }

        /// <summary>
        /// OnDropItem: a caixa 1 so antes de tudo; a 2 depois do alvo; a 3 depois da life stone. Devolve o pedido
        /// (target / refiner / gem) ou "ask" para o NumberPad sm72 da gemstone sem Alt.
        /// </summary>
        public string Drop(int box, ListItem it, long allCount)
        {
            if (it == null) return null;
            if (box == 1 && !P1 && !P2 && !P3)
            {
                Target = it;
                TargetId = it.ServerId;
                return "target";
            }
            if (box == 2 && P1 && !P2 && !P3)
            {
                Refiner = it;
                RefinerId = it.ServerId;
                return "refiner";
            }
            if (box == 3 && P1 && P2 && !P3)
            {
                Gem = it;
                GemId = it.ServerId;
                if (allCount > 0)
                {
                    GemCount = (int)allCount;
                    return "gem";
                }
                return "ask";
            }
            return null;
        }

        /// <summary>EV_RefineryConfirmTargetItemResult: Result 1 com o mesmo ServerID = o alvo fica, sm1958, a 2a caixa.</summary>
        public bool TargetResult(string p)
        {
            int sid = 0, result = 0;
            L2Param.ParseInt(p, "TargetItemServerID", ref sid);
            L2Param.ParseInt(p, "Result", ref result);
            if (result != 1 || Target == null || sid != Target.ServerId) return false;
            P1 = true;
            P2 = P3 = P4 = false;
            Instruction = SysMsg(1958);
            GemName = GemCountText = "";
            RefineEnabled = false;
            Highlight = 2;
            return true;
        }

        /// <summary>EV_RefineryConfirmRefinerItemResult: a gemstone e a quantidade; sm1959 com nome e numero; a 3a caixa.</summary>
        public bool RefinerResult(string p)
        {
            int sid = 0, result = 0;
            L2Param.ParseInt(p, "RefinerItemServerID", ref sid);
            L2Param.ParseInt(p, "Result", ref result);
            L2Param.ParseInt(p, "GemStoneCount", ref NeedGems);
            L2Param.ParseInt(p, "GemStoneClassID", ref GemClassId);
            if (result != 1 || Refiner == null || sid != Refiner.ServerId) return false;
            P1 = P2 = true;
            P3 = P4 = false;
            GemName = ItemName(GemClassId);
            Instruction = SysMsg2(1959, GemName, NeedGems.ToString());
            GemCountText = L2Tooltip.MakeCostString(NeedGems.ToString());
            RefineEnabled = false;
            Highlight = 3;
            return true;
        }

        /// <summary>EV_RefineryConfirmGemStoneResult: a gemstone fica com a quantidade conferida; sm1984; libera o Refine.</summary>
        public bool GemResult(string p)
        {
            int sid = 0, result = 0, cls = 0, checkedCount = 0;
            L2Param.ParseInt(p, "GemStoneServerID", ref sid);
            L2Param.ParseInt(p, "GemStoneClassID", ref cls);
            L2Param.ParseInt(p, "Result", ref result);
            L2Param.ParseInt(p, "GemStoneCount", ref checkedCount);
            GemClassId = cls;
            NeedGems = checkedCount;
            if (result != 1 || Gem == null || sid != Gem.ServerId) return false;
            Gem.ItemNum = checkedCount;
            P1 = P2 = P3 = true;
            P4 = false;
            Instruction = SysMsg(1984);
            GemName = GemCountText = "";
            RefineEnabled = true;
            Highlight = 0;
            return true;
        }

        /// <summary>OnClickRefineButton: desliga os botoes, comeca o progresso (1900 ms); no fim, RequestRefine.</summary>
        public void Refine()
        {
            RefineEnabled = CloseEnabled = false;
            P1 = P2 = P3 = P4 = true;
            Instruction = "";
            Refining = true;
        }

        /// <summary>EV_RefineryRefineResult: 1 = o alvo com as opcoes na caixa de resultado; 0 = o cancelar.</summary>
        public bool RefineResult(string p)
        {
            int o1 = 0, o2 = 0, result = 0;
            L2Param.ParseInt(p, "Option1", ref o1);
            L2Param.ParseInt(p, "Option2", ref o2);
            L2Param.ParseInt(p, "Result", ref result);
            CloseEnabled = true;
            Refining = false;
            if (result != 1)
            {
                P1 = P2 = P3 = P4 = false;
                return false;
            }
            Result = Target?.Copy();
            return true;
        }
    }

    public sealed class UnrefineryScript
    {
        public bool P1, Open;
        public ListItem Item;
        public long Adena;
        public string Instruction = "", AdenaText = "";
        public bool ButtonEnabled, CloseEnabled = true, Running;
        public Func<int, string, string> SysMsg = (id, a) => GameData.SystemMessage(id, new List<string> { a, "" }).Text;

        /// <summary>ResetReady: sm1963, "0 ss469", botao desligado.</summary>
        public void Reset(string adenaWord)
        {
            P1 = Open = false;
            Item = null;
            ButtonEnabled = false;
            CloseEnabled = true;
            Running = false;
            Instruction = SysMsg(1963, "");
            AdenaText = "0 " + adenaWord;
        }

        /// <summary>OnDropItem("ItemUnrefine"): so antes de remover; RequestConfirmCancelItem.</summary>
        public bool Drop(ListItem it)
        {
            if (P1 || it == null) return false;
            Item = it;
            return true;
        }

        /// <summary>EV_RefineryConfirmCancelItemResult 1: a taxa; sem adena, botao desligado e sm279.</summary>
        public void CancelItemResult(string p, long myAdena, string adenaWord)
        {
            var result = 0;
            var s = "";
            L2Param.ParseInt(p, "Result", ref result);
            // ParseInt64 do script: a taxa pode passar de 2^31
            L2Param.ParseString(p, "Adena", ref s);
            long.TryParse(s, out var a);
            if (result != 1) return;
            Adena = a;
            ButtonEnabled = true;
            AdenaText = L2Tooltip.MakeCostString(a.ToString()) + " " + adenaWord;
            Instruction = "";
            Open = true;
            if (myAdena < Adena)
            {
                ButtonEnabled = false;
                Instruction = SysMsg(279, "");
            }
        }

        /// <summary>OnClickUnRefineButton: com adena, progresso de 2000 ms; sem, o OK sm279 (null).</summary>
        public bool Start(long myAdena)
        {
            if (myAdena < Adena) return false;
            ButtonEnabled = false;
            CloseEnabled = false;
            Running = true;
            return true;
        }

        /// <summary>EV_RefineryRefineCancelResult: 1 = sem opcoes, sm1965; 0 = fecha.</summary>
        public bool Result(string p)
        {
            var r = 0;
            L2Param.ParseInt(p, "Result", ref r);
            CloseEnabled = true;
            Running = false;
            if (r == 1)
            {
                Instruction = SysMsg(1965, Item?.Name ?? "");
                ButtonEnabled = false;
                P1 = true;
                return true;
            }
            ButtonEnabled = true;
            P1 = false;
            return false;
        }
    }

    public sealed class ItemUpgradeView
    {
        public readonly L2Wnd Enchant, Refinery, Unrefinery;
        public readonly EnchantScript E = new();
        public readonly RefineryScript R = new();
        public readonly UnrefineryScript U = new();
        readonly GameUi ui;
        readonly Action<byte[]> send;
        double refineAt = -1, unrefineAt = -1, now;

        public ItemUpgradeView(L2Layer layer, GameUi ui, Action<byte[]> send)
        {
            this.ui = ui;
            this.send = send;
            Enchant = new L2Wnd("ItemEnchantWnd", layer, new WndOpts { AriaLabel = "Encantar" });
            Refinery = new L2Wnd("RefineryWnd", layer, new WndOpts { AriaLabel = "Augment" });
            Unrefinery = new L2Wnd("UnrefineryWnd", layer, new WndOpts { AriaLabel = "Remover augment" });
            UiRoot.Box("ItemUpgradeTicker", layer.El, 0, 0, 0, 0).gameObject.AddComponent<UiTicker>().OnTick = Tick;

            // ---- ItemEnchantWnd
            L2Events.Register(Ev.EV_EnchantShow, p =>
            {
                var cls = 0;
                L2Param.ParseInt(p, "ClassID", ref cls);
                Enchant.SetTitle(E.Show(cls, i => GameData.SysString(i, ""), GameData.ItemName));
                Enchant.Show();
                // EV_EnchantItemList: os itens do inventario que o pergaminho aceita
                var name = GameData.ItemName(cls);
                foreach (var it in ui.InventoryItems())
                    if (EnchantScript.Accepts(name, it.Type2, ItemStats.Of(it.ItemId)?.CrystalType ?? 0))
                        L2Events.Dispatch(new PacketEvents.Event(Ev.EV_EnchantItemList, InterfaceEvents.Item("", it)));
                RenderEnchant();
            });
            L2Events.Register(Ev.EV_EnchantItemList, p =>
            {
                E.Items.Add(ListWnd.FromParam(p));
                RenderEnchant();
            });
            foreach (var ev in new[] { Ev.EV_EnchantHide, Ev.EV_EnchantResult })
                L2Events.Register(ev, _ =>
                {
                    Enchant.Hide();
                    E.Items.Clear();
                });
            Enchant.OnClick("btnOK", () =>
            {
                if (E.Ok() is { } id) send(EnchantPackets.RequestEnchantItem(id));
            });
            Enchant.OnClick("btnCancel", () =>
            {
                send(EnchantPackets.RequestEnchantItem(-1));
                Enchant.Hide();
                E.Items.Clear();
            });

            // ---- RefineryWnd
            L2Events.Register(Ev.EV_ShowRefineryInteface, _ =>
            {
                if (R.P1) return;
                R.Reset();
                Refinery.Show();
                ui.Inv.Show();
                RenderRefinery();
            });
            L2Events.Register(Ev.EV_RefineryConfirmTargetItemResult, p =>
            {
                R.TargetResult(p);
                RenderRefinery();
            });
            L2Events.Register(Ev.EV_RefineryConfirmRefinerItemResult, p =>
            {
                R.RefinerResult(p);
                RenderRefinery();
            });
            L2Events.Register(Ev.EV_RefineryConfirmGemStoneResult, p =>
            {
                R.GemResult(p);
                RenderRefinery();
            });
            L2Events.Register(Ev.EV_RefineryRefineResult, p =>
            {
                // RefineryWnd.uc:670-672: Result 0 = OnClickCancelButton (fecha a janela)
                if (!R.RefineResult(p))
                {
                    refineAt = -1;
                    R.P1 = R.P2 = R.P3 = R.P4 = false;
                    Refinery.Hide();
                    return;
                }
                RenderRefinery();
            });
            Refinery.OnClick("btnRefine", () =>
            {
                if (!R.RefineEnabled) return;
                R.Refine();
                refineAt = now + 1900;
                RenderRefinery();
            });
            Refinery.OnClick("btnClose", () =>
            {
                if (!R.CloseEnabled) return;
                refineAt = -1;
                R.P1 = R.P2 = R.P3 = R.P4 = false;
                Refinery.Hide();
            });

            // ---- UnrefineryWnd
            L2Events.Register(Ev.EV_ShowRefineryCancelInteface, _ =>
            {
                if (U.Open) return;
                U.Reset(GameData.SysString(469, ""));
                Unrefinery.Show();
                RenderUnrefinery();
            });
            L2Events.Register(Ev.EV_RefineryConfirmCancelItemResult, p =>
            {
                U.CancelItemResult(p, ui.AdenaCount(), GameData.SysString(469, ""));
                RenderUnrefinery();
            });
            L2Events.Register(Ev.EV_RefineryRefineCancelResult, p =>
            {
                if (!U.Result(p)) Unrefinery.Hide();
                RenderUnrefinery();
            });
            Unrefinery.OnClick("btnUnRefine", () =>
            {
                if (!U.ButtonEnabled) return;
                if (U.Start(ui.AdenaCount())) unrefineAt = now + 2000;
                else ui.Dialog.Ask(EDialogType.OK, GameData.SystemMessage(279, new List<string>()).Text, "UnrefineryWnd", (_, _) => { });
                RenderUnrefinery();
            });
            Unrefinery.OnClick("btnClose", () =>
            {
                if (!U.CloseEnabled) return;
                unrefineAt = -1;
                U.P1 = U.Open = false;
                Unrefinery.Hide();
            });
            ui.InventoryDropTargets.Add(DropFromInventory);
        }

        void Tick(float dt)
        {
            now += dt * 1000;
            // OnProgressTimeUp: o pedido sai no fim da barra
            if (refineAt >= 0 && now >= refineAt)
            {
                refineAt = -1;
                send(EnchantPackets.RequestRefine(R.TargetId, R.RefinerId, R.GemId, R.NeedGems));
            }
            if (unrefineAt >= 0 && now >= unrefineAt)
            {
                unrefineAt = -1;
                if (U.Item != null) send(EnchantPackets.RequestRefineCancel(U.Item.ServerId));
            }
            if (refineAt >= 0) Progress(Refinery, "RefineryProgress", 1 - (float)((refineAt - now) / 1900));
            if (unrefineAt >= 0) Progress(Unrefinery, "UnRefineryProgress", 1 - (float)((unrefineAt - now) / 2000));
        }

        static void Progress(L2Wnd w, string name, float k) => w.Bar(name, Mathf.Clamp01(k), 1);

        /// <summary>Soltar um item do inventario numa caixa do RefineryWnd ou do UnrefineryWnd.</summary>
        bool DropFromInventory(PointerEventData e, InventoryScript.Item info)
        {
            var it = new ListItem { ServerId = info.ServerId, ClassId = info.ClassId, ItemNum = info.ItemNum, Name = info.Name, ConsumeType = info.ConsumeType };
            if (Refinery.Visible)
            {
                var box = ListWnd.Target(Refinery, e, "ItemDragBox1", "ItemDragBox2", "ItemDragBox3");
                if (box != null)
                {
                    var kind = R.Drop(box[box.Length - 1] - '0', it, info.AllItemCount);
                    switch (kind)
                    {
                        case "target":
                            send(EnchantPackets.RequestConfirmTargetItem(R.TargetId));
                            break;
                        case "refiner":
                            send(EnchantPackets.RequestConfirmRefinerItem(R.TargetId, R.RefinerId));
                            break;
                        case "gem":
                            send(EnchantPackets.RequestConfirmGemStone(R.TargetId, R.RefinerId, R.GemId, R.GemCount));
                            break;
                        case "ask":
                            if (ui.Dialog.S.InUse) ui.Dialog.Hide();
                            ui.Dialog.SetParamInt((int)info.ItemNum);
                            ui.Dialog.Ask(EDialogType.NumberPad, GameData.SystemMessage(72, new List<string> { info.Name, "" }).Text, "RefineryWnd", (ok, text) =>
                            {
                                if (!ok) return;
                                int.TryParse(text, out R.GemCount);
                                send(EnchantPackets.RequestConfirmGemStone(R.TargetId, R.RefinerId, R.GemId, R.GemCount));
                            });
                            break;
                    }
                    return true;
                }
            }
            if (Unrefinery.Visible && ListWnd.Target(Unrefinery, e, "ItemUnrefine") != null)
            {
                if (U.Drop(it)) send(EnchantPackets.RequestConfirmCancelItem(it.ServerId));
                RenderUnrefinery();
                return true;
            }
            return false;
        }

        void RenderEnchant()
        {
            var bs = ListWnd.Fill(Enchant, "ItemWnd", E.Items, "Inventory", i => E.Selected = i, null, null);
            if (E.Selected >= bs.Count) E.Selected = -1;
        }

        void Box(L2Wnd w, string ctrl, ListItem it)
        {
            ListWnd.Fill(w, ctrl, it == null ? new List<ListItem>() : new List<ListItem> { it }, "Inventory", null, null, null);
        }

        void RenderRefinery()
        {
            Refinery.Text("txtInstruction", R.Instruction);
            Refinery.Text("txtGemstoneName", R.GemName);
            Refinery.Text("txtGemstoneCount", R.GemCountText);
            Box(Refinery, "ItemDragBox1", R.Target);
            Box(Refinery, "ItemDragBox2", R.Refiner);
            Box(Refinery, "ItemDragBox3", R.Gem);
            Box(Refinery, "ItemRefined", R.Result);
            Refinery.ShowCtrl("ItemDragBoxResultWnd", R.Result != null);
            // ResetReady e os passos escondem o fundo e as animacoes; a de carregar so durante o refino
            Refinery.ShowCtrl("BackPattern", false);
            Refinery.ShowCtrl("RefineLoadingAnimation", R.Refining);
            foreach (var n in new[] { "RefineResultAnimation01", "RefineResultAnimation02", "RefineResultAnimation03" }) Refinery.ShowCtrl(n, false);
            Enable(Refinery, "btnRefine", R.RefineEnabled);
            Enable(Refinery, "btnClose", R.CloseEnabled);
            if (!R.Refining) Refinery.Bar("RefineryProgress", 0, 1);
        }

        void RenderUnrefinery()
        {
            Unrefinery.Text("txtInstruction", U.Instruction);
            Unrefinery.ShowCtrl("RefineResultAnimation01", false);
            Unrefinery.ShowCtrl("ItemtounrefineAnim", false);
            Unrefinery.Text("txtAdenaInstruction", U.AdenaText);
            var a = Unrefinery.TextEl("txtAdenaInstruction");
            if (a) a.color = L2Tooltip.GetNumericColor(L2Tooltip.MakeCostString(U.Adena.ToString()));
            Box(Unrefinery, "ItemUnrefine", U.Item);
            Enable(Unrefinery, "btnUnRefine", U.ButtonEnabled);
            Enable(Unrefinery, "btnClose", U.CloseEnabled);
            if (!U.Running) Unrefinery.Bar("UnRefineryProgress", 0, 1);
        }

        static void Enable(L2Wnd w, string name, bool on)
        {
            var b = w.Button(name);
            if (!b) return;
            var cg = b.TryGetComponent<CanvasGroup>(out var g) ? g : b.gameObject.AddComponent<CanvasGroup>();
            cg.alpha = on ? 1 : 0.45f;
            cg.interactable = on;
        }
    }
}
