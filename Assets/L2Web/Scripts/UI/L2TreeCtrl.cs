// TreeCtrl do xdat (#0037, #0039): o modelo (XMLTreeNodeInfo / XMLTreeNodeItemInfo e as chamadas do UIAPI_TREECTRL) e o desenho
// no porte [I: o NCTreeCtrl nao foi lido]: x = soma dos deslocamentos ate o no; botao de abrir 14 x 14; itens em fila
// (bLineBreak e espaco quebram a linha); texto longo quebra na largura que sobra; fundo do no aberto; rolagem pela roda.
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    /// <summary>XMLTreeNodeItemInfo: texto, textura ou espaco, na ordem do no.</summary>
    public sealed class TreeItem
    {
        public enum Kind
        {
            Text,
            Texture,
            Blank,
        }

        public Kind Type;
        public string Text = "", Tex = "";
        /// <summary>Alfa 0 = cor padrao do TreeCtrl.</summary>
        public Color32 Color;
        public int OffX, OffY, TexW, TexH, BlankH;
        public bool LineBreak;
    }

    /// <summary>XMLTreeNodeInfo: o nome completo (pai.nome), botao de abrir, dica, fundos e os itens.</summary>
    public sealed class TreeNode
    {
        public string Name = "";
        public TreeNode Parent;
        public readonly List<TreeNode> Children = new();
        public readonly List<TreeItem> Items = new();
        public int OffX, OffY;
        public bool ShowButton, Expanded;
        public string BtnExpand = "", BtnCollapse = "", Tooltip = "";
        /// <summary>strTexExpandedLeft/Right e os tamanhos (nTexExpanded*): o fundo do no aberto.</summary>
        public string ExpLeft = "", ExpRight = "";
        public int ExpOffX, ExpOffY, ExpH, ExpRightW, ExpLeftU, ExpLeftV, ExpRightU, ExpRightV;
        /// <summary>bDrawBackground (fundo do no de descricao, nTexBackWidth).</summary>
        public bool DrawBackground;
        public int BackW = 211;
    }

    /// <summary>As chamadas do UIAPI_TREECTRL (InsertNode, DeleteNode, GetChildNode, SetExpandedNode, GetExpandedNode).</summary>
    public class TreeModel
    {
        public readonly TreeNode Root = new() { Name = "" };

        public TreeNode Find(string name)
        {
            if (string.IsNullOrEmpty(name)) return Root;
            TreeNode Walk(TreeNode n)
            {
                foreach (var c in n.Children)
                {
                    if (c.Name == name) return c;
                    if (name.StartsWith(c.Name + ".", StringComparison.Ordinal))
                    {
                        var r = Walk(c);
                        if (r != null) return r;
                    }
                }
                return null;
            }
            return Walk(Root);
        }

        /// <summary>InsertNode: o nome devolvido e pai.nome (sem pai, so o nome); "" se o pai nao existe ou o nome repete.</summary>
        public string InsertNode(string parent, TreeNode n, string shortName)
        {
            var p = Find(parent);
            if (p == null) return "";
            n.Name = string.IsNullOrEmpty(parent) ? shortName : parent + "." + shortName;
            if (Find(n.Name) != null) return "";
            n.Parent = p;
            p.Children.Add(n);
            return n.Name;
        }

        public virtual void DeleteNode(string name)
        {
            var n = Find(name);
            if (n == null || n == Root) return;
            n.Parent.Children.Remove(n);
        }

        /// <summary>Clear.</summary>
        public void ClearTree() => Root.Children.Clear();

        /// <summary>GetChildNode: os filhos separados por "|".</summary>
        public string ChildNodes(string name)
        {
            var n = Find(name);
            if (n == null) return "";
            var l = new List<string>();
            foreach (var c in n.Children) l.Add(c.Name);
            return string.Join("|", l);
        }

        /// <summary>
        /// SetExpandedNode / clique no no: multiExpand = 0 no xdat [I] = abrir um no fecha os irmaos abertos.
        /// </summary>
        public void SetExpanded(string name, bool on)
        {
            var n = Find(name);
            if (n == null || n == Root) return;
            if (on)
                foreach (var s in n.Parent.Children)
                    if (s != n) s.Expanded = false;
            n.Expanded = on;
        }

        /// <summary>GetExpandedNode(tree, pai): o filho aberto do pai (so o primeiro conta nos scripts).</summary>
        public string ExpandedNode(string parent = "root")
        {
            var r = Find(parent);
            if (r == null) return "";
            foreach (var c in r.Children)
                if (c.Expanded) return c.Name;
            return "";
        }

        /// <summary>Nos visiveis em ordem, com a profundidade (os filhos so com o pai aberto; os nos raiz sempre abertos).</summary>
        public List<(TreeNode node, int depth)> Visible()
        {
            var o = new List<(TreeNode, int)>();
            void Walk(TreeNode n, int depth)
            {
                foreach (var c in n.Children)
                {
                    o.Add((c, depth));
                    if (c.Expanded || n == Root) Walk(c, depth + 1);
                }
            }
            Walk(Root, 0);
            return o;
        }
    }

    public sealed class L2TreeCtrl
    {
        readonly RectTransform el, content;
        readonly float h;
        float offset;
        static readonly Color TextColor = new Color32(0xdc, 0xdc, 0xdc, 0xff);
        static readonly TextGenerator gen = new();
        /// <summary>OnClickButton com o nome do no (nos com botao ou sem botao).</summary>
        public Action<TreeNode> OnClick;

        public L2TreeCtrl(L2Wnd w, string ctrl)
        {
            el = w?.Get(ctrl);
            if (!el) return;
            h = el.sizeDelta.y;
            var hit = el.TryGetComponent<Image>(out var img) ? img : el.gameObject.AddComponent<Image>();
            hit.color = new Color(0, 0, 0, 0.001f);
            el.gameObject.AddComponent<RectMask2D>();
            content = UiRoot.Box("content", el, 0, 0, el.sizeDelta.x, h);
            UiEvents.Of(el).OnWheel = e =>
            {
                offset = Mathf.Clamp(offset + Mathf.Sign(e.scrollDelta.y) * 15, Mathf.Min(0, h - content.sizeDelta.y), 0);
                content.anchoredPosition = new Vector2(0, -offset);
            };
        }

        /// <summary>SetScrollPosition(0).</summary>
        public void ScrollTop()
        {
            offset = 0;
            if (content) content.anchoredPosition = Vector2.zero;
        }

        public static float Measure(string s, float wrapW, bool height)
        {
            var gs = new TextGenerationSettings
            {
                font = UiRoot.Font, fontSize = 11, scaleFactor = 1, richText = false,
                horizontalOverflow = wrapW > 0 ? HorizontalWrapMode.Wrap : HorizontalWrapMode.Overflow, verticalOverflow = VerticalWrapMode.Overflow,
                generationExtents = new Vector2(wrapW > 0 ? wrapW : 4000, 4000), pivot = Vector2.zero,
            };
            return height ? gen.GetPreferredHeight(s ?? "", gs) : gen.GetPreferredWidth(s ?? "", gs);
        }

        public void Render(TreeModel m)
        {
            if (!content) return;
            UiKit.Clear(content);
            var width = el.sizeDelta.x;
            float y = 0;
            foreach (var (node, _) in m.Visible())
            {
                var x = 0f;
                for (var n = node; n != null && n != m.Root; n = n.Parent) x += n.OffX;
                y += node.OffY;
                var row = UiRoot.Box("node " + node.Name, content, 0, y, width, 14);
                var top = y;
                if (node.Expanded && node.ExpLeft.Length > 0)
                {
                    var lw = width - x - node.ExpOffX - 2 - node.ExpRightW;
                    var back = UiRoot.Box("back", row, x + node.ExpOffX, node.ExpOffY, lw, node.ExpH);
                    L2WndUtil.Paint(back, node.ExpLeft, lw, node.ExpH, PaintMode.Stretch, 0, 0, node.ExpLeftU, node.ExpLeftV);
                    if (node.ExpRight.Length > 0 && node.ExpRightW > 0)
                    {
                        var back2 = UiRoot.Box("back2", row, width - 2 - node.ExpRightW, node.ExpOffY, node.ExpRightW, node.ExpH);
                        L2WndUtil.Paint(back2, node.ExpRight, node.ExpRightW, node.ExpH, PaintMode.Stretch, 0, 0, node.ExpRightU, node.ExpRightV);
                    }
                }
                RectTransform bg = null;
                if (node.DrawBackground)
                {
                    bg = UiRoot.Box("descback", row, x, -2, node.BackW, 14);
                    var bi = bg.gameObject.AddComponent<Image>();
                    bi.color = new Color(0, 0, 0, 0.35f);
                    bi.raycastTarget = false;
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
                        var url = it.Tex.StartsWith("icon.", StringComparison.OrdinalIgnoreCase) ? GameUi.IconUrl(it.Tex) : null;
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
                    // o "\n" escrito dos .dat e a quebra de linha
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
                var hh = node.Items.Count == 0 && !node.ShowButton ? 0 : Mathf.Max(14, ly + lineH);
                row.sizeDelta = new Vector2(width, hh);
                if (bg) bg.sizeDelta = new Vector2(node.BackW, hh + 4);
                y = top + hh;
                if (hh > 0)
                {
                    var hit = row.gameObject.AddComponent<Image>();
                    hit.color = new Color(0, 0, 0, 0.001f);
                    var btn = row.gameObject.AddComponent<UiTexButton>();
                    var n0 = node;
                    btn.OnClick = () => OnClick?.Invoke(n0);
                    if (node.Tooltip.Length > 0) UiTooltip.Set(row.gameObject, node.Tooltip);
                }
            }
            content.sizeDelta = new Vector2(width, Mathf.Max(h, y));
            offset = Mathf.Clamp(offset, Mathf.Min(0, h - content.sizeDelta.y), 0);
            content.anchoredPosition = new Vector2(0, -offset);
        }
    }
}
