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
        RectTransform treeEl, content, listContent;
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
            var hit = treeEl.gameObject.GetComponent<Image>() ?? treeEl.gameObject.AddComponent<Image>();
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
                    var w = Measure(it.Text, 0, false);
                    var wrap = w > room;
                    var th = wrap ? Measure(it.Text, room, true) : 14;
                    var c = it.Color.a > 0 ? (Color)it.Color : TextColor;
                    var label = UiRoot.Label(row, it.Text, px, py, wrap ? room : w + 2, th, 11, c, TextAnchor.UpperLeft);
                    label.supportRichText = false;
                    label.horizontalOverflow = wrap ? HorizontalWrapMode.Wrap : HorizontalWrapMode.Overflow;
                    label.verticalOverflow = VerticalWrapMode.Overflow;
                    label.raycastTarget = false;
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
            var el = ListWnd.Get("lstQuest");
            if (!el) return;
            var hit = el.gameObject.GetComponent<Image>() ?? el.gameObject.AddComponent<Image>();
            hit.color = new Color(0, 0, 0, 0.001f);
            el.gameObject.AddComponent<RectMask2D>();
            listContent = UiRoot.Box("content", el, 0, 0, el.sizeDelta.x, el.sizeDelta.y);
        }

        const float HeaderH = 22, RowH = 18;

        /// <summary>ListCtrl lstQuest [I: o NCListCtrl nao foi lido]: cabecalho com as colunas do xdat, linhas de 18 px.</summary>
        void RenderList()
        {
            if (!listContent) return;
            UiKit.Clear(listContent);
            var cols = ListWnd.Ctrl("lstQuest")?.J["columns"] as Newtonsoft.Json.Linq.JArray;
            var widths = new List<float>();
            float x = 0;
            if (cols != null)
                foreach (var c in cols)
                {
                    var w = (float)c["width"];
                    var h = UiRoot.Box("head", listContent, x, 0, w, HeaderH);
                    L2WndUtil.Paint(h, "L2UI_CH3.ListCtrl.ListCtrlHead", w, HeaderH, PaintMode.Stretch);
                    var t = UiRoot.Label(h, GameData.SysString((int)c["textStringId"], ""), 0, 0, w, HeaderH, 11, new Color32(0xa3, 0xa3, 0xa3, 0xff), TextAnchor.MiddleCenter);
                    t.raycastTarget = false;
                    widths.Add(w);
                    x += w;
                }
            for (var i = 0; i < L.Records.Count; i++)
            {
                var r = L.Records[i];
                var idx = i;
                var row = UiRoot.Box("row", listContent, 0, HeaderH + i * RowH, listContent.sizeDelta.x, RowH);
                if (i == L.Selected) L2WndUtil.Paint(row, "L2UI_CH3.ListCtrl.TextSelect", row.sizeDelta.x, RowH, PaintMode.Stretch, 0, 0, 16, 13);
                var cells = new[] { r.Name, r.Requirement, r.Level, null, r.Npc };
                float cx = 0;
                for (var k = 0; k < cells.Length && k < widths.Count; k++)
                {
                    if (k == 3)
                    {
                        var ic = UiRoot.Box("icon", row, cx + (widths[k] - 16) / 2, 1, 16, 16);
                        L2WndUtil.Paint(ic, r.Icon, 16, 16, PaintMode.Stretch);
                    }
                    else
                    {
                        var t = UiRoot.Label(row, cells[k], cx + 4, 0, widths[k] - 8, RowH, 11, TextColor, k == 2 ? TextAnchor.MiddleCenter : TextAnchor.MiddleLeft);
                        t.raycastTarget = false;
                    }
                    cx += widths[k];
                }
                var hit = row.gameObject.AddComponent<Image>();
                hit.color = new Color(0, 0, 0, 0.001f);
                row.gameObject.AddComponent<UiTexButton>().OnClick = () =>
                {
                    L.Selected = idx;
                    RenderList();
                };
                // popupType QuestInfo; o nReserved1 da coluna 3 fica 0 no QuestListWnd
                UiTooltip.SetCustom(row.gameObject, () => L2Tooltip.QuestInfo(r.Name, r.Requirement, r.Level, 0, r.Desc, s => (int)Measure(s, 0, false)), false, r.Name);
            }
        }
    }
}
