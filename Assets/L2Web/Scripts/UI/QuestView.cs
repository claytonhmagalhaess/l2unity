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
        RectTransform treeEl, content;
        float treeOffset, treeH;
        static readonly Color TextColor = new Color32(0xdc, 0xdc, 0xdc, 0xff);

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
            treeEl = Tree.Get("MainTree");
            if (!treeEl) return;
            treeH = treeEl.sizeDelta.y;
            var hit = treeEl.TryGetComponent<Image>(out var img) ? img : treeEl.gameObject.AddComponent<Image>();
            hit.color = new Color(0, 0, 0, 0.001f);
            treeEl.gameObject.AddComponent<RectMask2D>();
            content = UiRoot.Box("content", treeEl, 0, 0, treeEl.sizeDelta.x, treeH);
            UiEvents.Of(treeEl).OnWheel = e =>
            {
                treeOffset = Mathf.Clamp(treeOffset + Mathf.Sign(e.scrollDelta.y) * 15, Mathf.Min(0, treeH - content.sizeDelta.y), 0);
                content.anchoredPosition = new Vector2(0, -treeOffset);
            };
        }

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

        static readonly TextGenerator gen = new();

        static float Measure(string s, float wrapW, bool height)
        {
            var gs = new TextGenerationSettings
            {
                font = UiRoot.Font, fontSize = 11, scaleFactor = 1, richText = false,
                horizontalOverflow = wrapW > 0 ? HorizontalWrapMode.Wrap : HorizontalWrapMode.Overflow, verticalOverflow = VerticalWrapMode.Overflow,
                generationExtents = new Vector2(wrapW > 0 ? wrapW : 4000, 4000), pivot = Vector2.zero,
            };
            return height ? gen.GetPreferredHeight(s ?? "", gs) : gen.GetPreferredWidth(s ?? "", gs);
        }

        /// <summary>
        /// Desenha os nos visiveis [I: o NCTreeCtrl nao foi lido]: x = soma dos deslocamentos ate o no; botao 14 x 14; itens em
        /// fila (bLineBreak e espaco quebram a linha); texto longo quebra na largura que sobra; o no aberto ganha o fundo
        /// TextSelect/TextSelect2 (altura 13, y + 1) e a descricao um fundo escuro de 211.
        /// </summary>
        public void RenderTree()
        {
            Tree?.Text("txtQuestNum", S.CountText);
            if (!content) return;
            UiKit.Clear(content);
            var width = treeEl.sizeDelta.x;
            float y = 0;
            foreach (var (node, _) in S.Visible())
            {
                var x = 0f;
                for (var n = node; n != null && n != S.Root; n = n.Parent) x += n.OffX;
                y += node.OffY;
                var row = UiRoot.Box("node " + node.Name, content, 0, y, width, 14);
                var top = y;
                if (node.Expanded && node.ExpandedBack)
                {
                    var back = UiRoot.Box("back", row, x, 1, width - x - 2 - 32, 13);
                    L2WndUtil.Paint(back, "L2UI_CH3.ListCtrl.TextSelect", back.sizeDelta.x, 13, PaintMode.Stretch, 0, 0, 16, 13);
                    var back2 = UiRoot.Box("back2", row, width - 2 - 32, 1, 32, 13);
                    L2WndUtil.Paint(back2, "L2UI_CH3.ListCtrl.TextSelect2", 32, 13, PaintMode.Stretch, 0, 0, 32, 13);
                }
                RectTransform bg = null;
                if (node.DrawBackground)
                {
                    bg = UiRoot.Box("descback", row, x, -2, 211, 14);
                    bg.gameObject.AddComponent<Image>().color = new Color(0, 0, 0, 0.35f);
                    bg.GetComponent<Image>().raycastTarget = false;
                }
                var start = x;
                if (node.ShowButton)
                {
                    var b = UiRoot.Box("btn", row, x, 0, 14, 14);
                    L2WndUtil.Paint(b, node.Expanded ? node.BtnCollapse : node.BtnExpand, 14, 14, PaintMode.Normal);
                    start += 14;
                }
                float cx = start, lineH = node.ShowButton ? 14 : 0, ly = 0;
                foreach (var it in node.Items)
                {
                    if (it.Type == TreeItem.Kind.Blank)
                    {
                        ly += lineH + it.BlankH;
                        lineH = 0;
                        cx = start;
                        continue;
                    }
                    if (it.LineBreak && cx > start)
                    {
                        ly += lineH;
                        lineH = 0;
                        cx = start;
                    }
                    var px = cx + it.OffX;
                    var py = ly + it.OffY;
                    if (it.Type == TreeItem.Kind.Texture)
                    {
                        var t = UiRoot.Box("tex", row, px, py, it.TexW, it.TexH);
                        var url = it.Tex.StartsWith("L2UI", StringComparison.OrdinalIgnoreCase) ? null : GameUi.IconUrl(it.Tex);
                        if (url != null)
                        {
                            var img = t.gameObject.AddComponent<RawImage>();
                            img.raycastTarget = false;
                            L2WndUtil.SetTexture(img, url);
                        }
                        else L2WndUtil.Paint(t, it.Tex, it.TexW, it.TexH, PaintMode.Stretch);
                        cx = px + it.TexW;
                        lineH = Mathf.Max(lineH, py - ly + it.TexH);
                        continue;
                    }
                    var room = width - px - 4;
                    // o "\n" escrito do questname-e.dat e a quebra de linha
                    var text = it.Text.Replace("\\n", "\n");
                    var w = Measure(text, 0, false);
                    var wrap = w > room || text.Contains("\n");
                    var c = it.Color.a > 0 ? (Color)it.Color : TextColor;
                    var label = UiRoot.Label(row, text, px, py, wrap ? room : w + 2, 14, 11, c, TextAnchor.UpperLeft);
                    label.supportRichText = false;
                    label.horizontalOverflow = wrap ? HorizontalWrapMode.Wrap : HorizontalWrapMode.Overflow;
                    label.verticalOverflow = VerticalWrapMode.Overflow;
                    label.raycastTarget = false;
                    var th = wrap ? Mathf.Ceil(label.preferredHeight) : 14;
                    label.rectTransform.sizeDelta = new Vector2(label.rectTransform.sizeDelta.x, th);
                    cx = px + (wrap ? room : w);
                    lineH = Mathf.Max(lineH, py - ly + th);
                }
                var h = Mathf.Max(14, ly + lineH);
                row.sizeDelta = new Vector2(width, h);
                if (bg) bg.sizeDelta = new Vector2(211, h + 4);
                y = top + h;
                if (node.ShowButton)
                {
                    // o no e um botao: o clique abre ou fecha (OnClickButton com o nome do no) e recalcula o alvo
                    var hit = row.gameObject.AddComponent<Image>();
                    hit.color = new Color(0, 0, 0, 0.001f);
                    var btn = row.gameObject.AddComponent<UiTexButton>();
                    var name = node.Name;
                    var open = node.Expanded;
                    btn.OnClick = () =>
                    {
                        S.SetExpanded(name, !open);
                        if (name.StartsWith("root", StringComparison.Ordinal)) UpdateTargetInfo();
                        RenderTree();
                    };
                    if (node.Tooltip.Length > 0) UiTooltip.Set(row.gameObject, node.Tooltip);
                }
            }
            content.sizeDelta = new Vector2(width, Mathf.Max(treeH, y));
            treeOffset = Mathf.Clamp(treeOffset, Mathf.Min(0, treeH - content.sizeDelta.y), 0);
            content.anchoredPosition = new Vector2(0, -treeOffset);
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
