// MultiSellWnd do xdat (07 §5.4) com o MultiSellWnd.uc (MultiSellScript) e os controles nativos MultiSellItemInfo
// (NCVIPShopItemInfoWnd) e MultiSellNeededItem (NCVIPShopNeededItemWnd): linhas de 36 px (caixa 34x34 em (10, 36i+5), icone
// 32x32 em (11, 36i+6), nome em (46, 36i+10)), ou a vista de detalhes com um produto; rolagem de 15 px (45 por "notch").
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class MultiSellListCtrl
    {
        readonly RectTransform el, content;
        readonly bool info;
        readonly float h;
        int offset;
        float contentH;
        static readonly Color Name = new Color32(0xdc, 0xdc, 0xdc, 0xff), Add = new Color32(0xff, 0xd9, 0x69, 0xff),
            Grey = new Color32(0xa3, 0xa3, 0xa3, 0xff), Gold = new Color32(0xb0, 0x9b, 0x79, 0xff), Desc = new Color32(0xb2, 0xbe, 0xcf, 0xff);

        public MultiSellListCtrl(RectTransform el, bool info)
        {
            this.el = el;
            this.info = info;
            h = el.sizeDelta.y;
            var hit = el.gameObject.AddComponent<Image>();
            hit.color = new Color(0, 0, 0, 0.001f);
            el.gameObject.AddComponent<RectMask2D>();
            content = UiRoot.Box("content", el, 0, 0, el.sizeDelta.x, h);
            UiEvents.Of(el).OnWheel = e =>
            {
                var d = e.scrollDelta.y;
                var n = Mathf.Abs(d) >= 60 ? (int)(d / 120) : (int)Mathf.Sign(d);
                Scroll(n * 45);
            };
        }

        void Scroll(int dy)
        {
            var min = contentH > h ? (int)(h - contentH) : 0;
            offset = Mathf.Clamp(offset + dy, min, 0);
            content.anchoredPosition = new Vector2(0, -offset);
        }

        /// <summary>Clear: tira as linhas e volta a rolagem a 0.</summary>
        public void Clear()
        {
            UiKit.Clear(content);
            offset = 0;
            contentH = 0;
            content.anchoredPosition = Vector2.zero;
        }

        static readonly TextGenerator gen = new();

        static float Measure(string s, float wrapW = 0, bool height = false)
        {
            var gs = new TextGenerationSettings
            {
                font = UiRoot.Font, fontSize = 11, scaleFactor = 1, richText = false,
                horizontalOverflow = wrapW > 0 ? HorizontalWrapMode.Wrap : HorizontalWrapMode.Overflow, verticalOverflow = VerticalWrapMode.Overflow,
                generationExtents = new Vector2(wrapW > 0 ? wrapW : 4000, 4000), pivot = Vector2.zero,
            };
            return height ? gen.GetPreferredHeight(s ?? "", gs) : gen.GetPreferredWidth(s ?? "", gs);
        }

        static Text Label(RectTransform p, string s, float x, float y, float w, Color c, bool wrap = false)
        {
            var t = UiRoot.Label(p, s, x, y, w, 14, 11, c, TextAnchor.UpperLeft);
            t.supportRichText = false;
            t.horizontalOverflow = wrap ? HorizontalWrapMode.Wrap : HorizontalWrapMode.Overflow;
            t.verticalOverflow = VerticalWrapMode.Overflow;
            t.raycastTarget = false;
            if (wrap) t.rectTransform.sizeDelta = new Vector2(w, Mathf.Ceil(t.preferredHeight));
            return t;
        }

        void Slot(int i, string icon)
        {
            L2WndUtil.Paint(UiRoot.Box("iconbox", content, 10, 36 * i + 5, 34, 34), "L2ui_ch3.etc.iconbox", 34, 34, PaintMode.Stretch);
            var url = GameUi.IconUrl(icon);
            var ib = UiRoot.Box("icon", content, 11, 36 * i + 6, 32, 32);
            if (url != null) UiKit.FillSlot(ib, url, "", 0, null, 32);
        }

        /// <summary>
        /// NCNameCtrl (180 x 14 no ItemInfo, 170 x 14 no NeededItem): "+N nome" (#dcdcdc), nome adicional (#ffd969) a +2,
        /// espaco de 14 px do grau [?] (a textura do simbolo nao foi achada) e "x%d" com o contador ligado; corta com "..".
        /// </summary>
        void NameCtrl(int i, string name, int classId, int itemType, int enchant, int crystal, int count, bool showCount)
        {
            var w = info ? 180 : 170;
            var row = UiRoot.Box("name", content, 46, 36 * i + 10, w, 14);
            row.gameObject.AddComponent<RectMask2D>();
            var main = ItemInfoText.MainName(name, enchant, itemType);
            var add = ItemStats.Of(classId)?.AddName ?? "";
            var grade = ItemInfoText.Grade(crystal);
            var cnt = showCount && count > 0 ? "x" + count : "";
            float W(string s) => string.IsNullOrEmpty(s) ? 0 : Measure(s);
            float Total(string m) => W(m) + (add.Length > 0 ? 2 + W(add) : 0) + (grade != null ? 2 + 14 : 0) + (cnt.Length > 0 ? 2 + W(cnt) : 0);
            // maior que o controle: o texto principal perde caracteres do fim e ganha ".." ate caber
            var shown = main;
            if (Total(main) > w)
            {
                var k = main.Length;
                while (k > 0 && Total(main.Substring(0, k) + "..") > w) k--;
                shown = main.Substring(0, k) + "..";
            }
            var x = 0f;
            x += Label(row, shown, x, 0, w, Name).preferredWidth;
            if (add.Length > 0) x += 2 + Label(row, add, x + 2, 0, w, Add).preferredWidth;
            if (grade != null) x += 2 + 14;
            if (cnt.Length > 0) Label(row, cnt, x + 2, 0, w, Name);
            UiTooltip.Set(row.gameObject, ItemInfoText.MainName(name, enchant, itemType) + (count > 1 ? " (" + count + ")" : ""));
            var img = row.gameObject.AddComponent<Image>();
            img.color = new Color(0, 0, 0, 0.001f);
        }

        /// <summary>MultiSellItemInfo: 1 produto = detalhes; 2 ou mais = linhas com o nome e "x%d".</summary>
        public void SetProducts(IList<MultiSellScript.Product> products, Func<int, string> ss)
        {
            Clear();
            var n = Math.Min(50, products.Count);
            if (n == 1)
            {
                var p = products[0];
                Slot(0, GameData.ItemIcon(p.ClassId));
                // a vista de detalhes posiciona o icone em (9, 3)/(10, 4)
                foreach (Transform t in content) ((RectTransform)t).anchoredPosition += new Vector2(-1, 1);
                NameCtrl(0, GameData.ItemName(p.ClassId), p.ClassId, p.ItemType, 0, ItemStats.Of(p.ClassId)?.CrystalType ?? 0, p.ItemNum, true);
                var (lines, hh) = ItemInfoText.Detail(new ItemInfoText.Product { ClassId = p.ClassId, ItemType = p.ItemType, SlotBitType = p.SlotBitType },
                    ItemStats.Of(p.ClassId), ss, d => Measure(d, 200, true));
                foreach (var l in lines)
                {
                    if (l.Kind == "header") Label(content, l.Value, l.X, l.Y, 200, Gold);
                    else if (l.Kind == "desc") Label(content, l.Value, l.X, l.Y, 200, Desc, true);
                    else
                    {
                        var a = Label(content, l.Label, l.X, l.Y, 200, Grey);
                        var c = Label(content, " : ", l.X + a.preferredWidth, l.Y, 20, Name);
                        Label(content, l.Value, l.X + a.preferredWidth + c.preferredWidth, l.Y, 200, Gold);
                    }
                }
                contentH = hh;
                return;
            }
            for (var i = 0; i < n; i++)
            {
                var p = products[i];
                if (p == null) continue;
                Slot(i, GameData.ItemIcon(p.ClassId));
                NameCtrl(i, GameData.ItemName(p.ClassId), p.ClassId, p.ItemType, 0, ItemStats.Of(p.ClassId)?.CrystalType ?? 0, p.ItemNum, true);
            }
            contentH = 36 * n + 5;
        }

        /// <summary>MultiSellNeededItem.AddData: linha com o icone, o nome sem contador e "x %d" em (46, 36i+25).</summary>
        public void SetNeeded(IList<MultiSellScript.Needed> list)
        {
            Clear();
            for (var i = 0; i < Math.Min(50, list.Count); i++)
            {
                var it = list[i];
                Slot(i, it.IconName);
                NameCtrl(i, it.Name, it.Id, it.ItemType, it.Enchant, it.CrystalType, it.Count, false);
                Label(content, "x " + it.Count, 46, 36 * i + 25, 120, Name);
            }
            contentH = 36 * list.Count + 5;
        }
    }

    public sealed class MultiSellView
    {
        public readonly L2Wnd Wnd;
        public readonly MultiSellScript S = new();
        readonly MultiSellListCtrl info, needed;
        int selected = -1;
        bool dialogMine;
        public Action<int, Action<bool>> Ask = (_, _) => { };
        public Action HideDialog = () => { };
        public Action<byte[]> Send = _ => { };
        public Action HideInventory = () => { };

        public MultiSellView(L2Layer layer)
        {
            Wnd = new L2Wnd("MultiSellWnd", layer, new WndOpts { AriaLabel = GameData.SysString(136, "Multisell") });
            S.SysString = i => GameData.SysString(i, "");
            S.ItemName = GameData.ItemName;
            S.ItemIcon = GameData.ItemIcon;
            S.ItemDataType = id => ItemStats.Of(id) is { } s ? s.Weapon ? 0 : s.Armor ? (IsAccessory(s.BodyPart) ? 2 : 1) : 5 : 5;
            S.ItemCrystalType = id => ItemStats.Of(id)?.CrystalType ?? 0;
            info = new MultiSellListCtrl(Wnd.Get("ItemInfo"), true);
            needed = new MultiSellListCtrl(Wnd.Get("NeededItem"), false);
            foreach (var ev in new[] { Ev.EV_MultiSellShopID, Ev.EV_MultiSellItemList, Ev.EV_MultiSellNeededItemList, Ev.EV_MultiSellItemListEnd })
            {
                var id = ev;
                L2Events.Register(id, p =>
                {
                    if (id == Ev.EV_MultiSellShopID) Clear();
                    S.OnEvent(id, p);
                    if (id == Ev.EV_MultiSellItemListEnd) End();
                });
            }
            Wnd.OnShow += () => Count("", true);
            Wnd.OnClick("OKButton", Ok);
            Wnd.OnClick("CancelButton", () =>
            {
                Clear();
                Wnd.Hide();
            });
        }

        // brincos, colar, aneis: acessorio (ItemType 2) no tipo de dados do cliente
        static bool IsAccessory(int body) => body == 0x2 || body == 0x4 || body == 0x6 || body == 0x8 || body == 0x10 || body == 0x20 || body == 0x30;

        void Count(string s, bool enabled)
        {
            var e = Wnd.Edit("ItemCountEdit");
            if (!e) return;
            e.text = s;
            e.interactable = enabled;
        }

        void Clear()
        {
            S.Clear();
            info.Clear();
            needed.Clear();
            selected = -1;
            L2WndUtil.FillItemWindow(Wnd, "ItemList", new List<SlotData>(), GameUi.IconUrl);
        }

        /// <summary>HandleItemListEnd: fecha o inventario, mostra, foca e enche a lista com o 1o produto de cada entrada.</summary>
        void End()
        {
            HideInventory();
            Wnd.Show();
            var data = new List<SlotData>();
            foreach (var e in S.ItemList)
            {
                var f = e.ItemInfoList[0];
                data.Add(new SlotData { Icon = GameData.ItemIcon(f.ClassId), Title = GameData.ItemName(f.ClassId), Count = f.ItemNum });
            }
            var slots = L2WndUtil.FillItemWindow(Wnd, "ItemList", data, GameUi.IconUrl);
            for (var i = 0; i < slots.Count; i++)
            {
                var k = i;
                slots[i].OnClick = () => Click(k);
            }
        }

        /// <summary>Clique numa linha da lista (diagnostico: -l2bypass com a MultiSellWnd aberta).</summary>
        public void ClickEntry(int index) => Click(index);

        /// <summary>OnClickItem: limpa os dois controles, poe os ingredientes e os produtos da entrada e a quantidade.</summary>
        void Click(int index)
        {
            info.Clear();
            needed.Clear();
            var r = S.Click(index, dialogMine);
            if (r == null) return;
            selected = index;
            var e = S.ItemList[index];
            needed.SetNeeded(e.NeededItemList);
            var prods = e.ItemInfoList.GetRange(0, Math.Min(e.NeededItemNum, e.ItemInfoList.Count));
            info.SetProducts(prods, i => GameData.SysString(i, ""));
            Count(r.Value.count, r.Value.editable);
            if (r.Value.hideDialog)
            {
                dialogMine = false;
                HideDialog();
            }
        }

        /// <summary>HandleOKButton -> DIALOG_Warning sm1383 -> HandleDialogOK -> RequestMultiSellChoose.</summary>
        void Ok()
        {
            var ok = S.Ok(selected, Wnd.Edit("ItemCountEdit")?.text ?? "");
            if (ok == null) return;
            dialogMine = true;
            var (idx, n) = ok.Value;
            Ask(1383, yes =>
            {
                dialogMine = false;
                if (!yes) return;
                if (S.Choose(idx, n) is { } c) Send(Net.UiPackets.MultiSellChoose(c.shop, c.itemId, c.count, c.op1, c.op2));
            });
        }
    }
}
