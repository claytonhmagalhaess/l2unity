// QuestTreeWnd (aba 5 do MainWnd) e QuestListWnd do xdat (#0037) ligados ao QuestTreeScript/QuestListScript: o TreeCtrl
// MainTree desenhado no porte (botao de abrir 14 x 14, itens em fila com quebra, fundo do no aberto e da descricao, rolagem),
// Abort, o checkbox do marcador e a lista de quests do NPC (ListCtrl com as 5 colunas do xdat e a dica QuestInfo).
using System;
using System.Collections.Generic;
using L2Web.Net;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class QuestView
    {
        public readonly L2Wnd Tree, ListWnd;
        public readonly QuestTreeScript S;
        public readonly QuestListScript L = new();
        readonly GameUi ui;
        readonly Action<byte[]> send;

        public QuestView(L2Layer layer, GameUi ui, Action<byte[]> send)
        {
            this.ui = ui;
            this.send = send;
            S = new QuestTreeScript(QuestData.Client) { InventoryCount = ui.InventoryCount };
            ui.Main.Embedded.TryGetValue("QuestTreeWnd", out Tree);
            ListWnd = new L2Wnd("QuestListWnd", layer, new WndOpts { AriaLabel = "Quests" });
            if (Tree != null) BuildTree();
            BuildList();

            L2Events.Register(Ev.EV_QuestListStart, _ =>
            {
                S.ListStart();
                RenderTree();
            });
            L2Events.Register(Ev.EV_QuestList, p =>
            {
                int id = 0, lv = 0, done = 0;
                L2Param.ParseInt(p, "QuestID", ref id);
                L2Param.ParseInt(p, "Level", ref lv);
                L2Param.ParseInt(p, "Completed", ref done);
                S.List(id, lv, done);
            });
            L2Events.Register(Ev.EV_QuestListEnd, _ =>
            {
                S.ListEnd();
                RenderTree();
            });
            L2Events.Register(Ev.EV_QuestSetCurrentID, p =>
            {
                var id = 0;
                if (!L2Param.ParseInt(p, "QuestID", ref id)) return;
                if (S.SetCurrent(id)) UpdateTargetInfo();
                RenderTree();
            });
            foreach (var ev in new[] { Ev.EV_InventoryAddItem, Ev.EV_InventoryUpdateItem })
                L2Events.Register(ev, p =>
                {
                    var cls = 0;
                    L2Param.ParseInt(p, "classID", ref cls);
                    S.UpdateItemCount(cls);
                    if (Tree != null && Tree.Visible) RenderTree();
                });
            L2Events.Register(Ev.EV_QuestInfoStart, _ =>
            {
                L.Start();
                RenderList();
                ListWnd.Show();
            });
            L2Events.Register(Ev.EV_QuestInfo, p =>
            {
                L.Add(p);
                RenderList();
            });
        }

        // ------------------------------------------------------------ QuestTreeWnd
        void BuildTree()
        {
            // OnShow: RequestQuestList (a resposta QuestList 0x80 vira EV_QuestListStart/List/End)
            Tree.OnShow = () => send(ClanPackets.RequestQuestList());
            Tree.OnClick("btnClose", Cancel);
            var chk = Tree.Check("chkNpcPosBox");
            if (chk) chk.onValueChanged.AddListener(_ => UpdateTargetInfo());
            var tip = Tree.Get("QuestToolTip");
            if (tip) UiTooltip.SetCustom(tip.gameObject, () => L2Tooltip.QuestLegend(5), false, "");
            tree = new L2TreeCtrl(Tree, "MainTree")
            {
                OnClick = n =>
                {
                    if (!n.ShowButton) return;
                    S.SetExpanded(n.Name, !n.Expanded);
                    if (n.Name.StartsWith("root", StringComparison.Ordinal)) UpdateTargetInfo();
                    RenderTree();
                },
            };
        }

        L2TreeCtrl tree;

        bool NpcPos => Tree?.Check("chkNpcPosBox")?.isOn ?? false;

        /// <summary>UpdateTargetInfo: null = o script nao mexe no marcador (sem quest ou nivel no nome).</summary>
        void UpdateTargetInfo()
        {
            var t = S.TargetInfo(NpcPos);
            if (t != null) ui.SetQuestTargetInfo(t);
        }

        void Cancel()
        {
            var (type, msg, id) = S.Cancel();
            if (ui.Dialog.S.InUse) ui.Dialog.Hide();
            ui.Dialog.Ask(type, GameData.SystemMessage(msg, new List<string>()).Text, "QuestTreeWnd", (ok, _) =>
            {
                if (!ok) return;
                var q = S.CancelOk(id);
                if (q <= 0) return;
                send(ClanPackets.RequestQuestAbort(q));
                ui.SetQuestTargetInfo(new QuestTreeScript.Target());
                RenderTree();
            });
        }

        static float Measure(string s, float wrapW, bool height) => L2TreeCtrl.Measure(s, wrapW, height);

        /// <summary>O MainTree pelo L2TreeCtrl; o clique num no com botao abre ou fecha e, nos "root...", recalcula o alvo.</summary>
        public void RenderTree()
        {
            Tree?.Text("txtQuestNum", S.CountText);
            tree?.Render(S);
        }

        // ------------------------------------------------------------ QuestListWnd
        void BuildList()
        {
            ListWnd.OnClick("btnLoc", () =>
            {
                var t = L.Location(QuestData.Client, GameData.NpcName);
                if (t != null) ui.SetQuestTargetInfo(t);
            });
            var tip = ListWnd.Get("QuestToolTip");
            if (tip) UiTooltip.SetCustom(tip.gameObject, () => L2Tooltip.QuestLegend(2), false, "");
            list = new L2ListCtrl(ListWnd, "lstQuest")
            {
                OnClick = i => L.Selected = i,
                // popupType QuestInfo; o nReserved1 da coluna 3 fica 0 no QuestListWnd
                Tooltip = i =>
                {
                    var r = L.Records[i];
                    return L2Tooltip.QuestInfo(r.Name, r.Requirement, r.Level, 0, r.Desc, s => (int)Measure(s, 0, false));
                },
            };
        }

        L2ListCtrl list;

        void RenderList()
        {
            if (list == null) return;
            list.Selected = L.Selected;
            var rows = new List<L2ListCtrl.Cell[]>();
            foreach (var r in L.Records)
                rows.Add(new[]
                {
                    new L2ListCtrl.Cell { Text = r.Name }, new L2ListCtrl.Cell { Text = r.Requirement }, new L2ListCtrl.Cell { Text = r.Level },
                    new L2ListCtrl.Cell { Tex = r.Icon, TexW = 16, TexH = 16 }, new L2ListCtrl.Cell { Text = r.Npc },
                });
            list.Render(rows);
        }
    }
}
