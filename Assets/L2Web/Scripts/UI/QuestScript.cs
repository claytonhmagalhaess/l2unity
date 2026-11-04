// QuestTreeWnd.uc e QuestListWnd.uc (spec 07 §3.3 e §8, #0037) sem Unity: a arvore do diario como o TreeCtrl (nos root.<id>,
// root.<id>.<nivel>.<completo> e .desc, com os itens de cada no), o contador (n/25), as quantidades "(%s/N)" dos itens de
// quest, o marcador do alvo (SetQuestTargetInfo), o abandonar (sm1201/sm182) e as linhas da lista de quests do NPC.
using System;
using System.Collections.Generic;
using UnityEngine;

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

    /// <summary>XMLTreeNodeInfo: o nome completo (pai.nome), botao de abrir, dica e os itens.</summary>
    public sealed class TreeNode
    {
        public string Name = "";
        public TreeNode Parent;
        public readonly List<TreeNode> Children = new();
        public readonly List<TreeItem> Items = new();
        public int OffX, OffY;
        public bool ShowButton, Expanded;
        public string BtnExpand = "", BtnCollapse = "", Tooltip = "";
        /// <summary>Fundo do no aberto (TextSelect/TextSelect2) e o fundo do no de descricao.</summary>
        public bool ExpandedBack, DrawBackground;
    }

    public sealed class QuestTreeScript
    {
        public const int MaxCount = 25;
        public const int DialogAbort = 0, DialogNoQuest = 1;
        static readonly Color32 Gold = new(176, 155, 121, 255), DescColor = new(140, 140, 140, 255);

        public QuestData Data;
        /// <summary>GetInventoryItemCount(classID).</summary>
        public Func<int, long> InventoryCount = _ => 0;
        public Func<int, string> SysString = id => GameData.SysString(id, "");
        public Func<int, string> ItemName = GameData.ItemName;
        public Func<int, string> ItemIcon = GameData.ItemIcon;

        public readonly TreeNode Root = new() { Name = "" };
        public int QuestNum;
        int oldQuestId = -1;
        string curNodeName = "";
        public int DeleteQuestId;
        public string DeleteNodeName = "";
        /// <summary>m_arrItemNodeName / m_arrItemString / m_arrItemClassID (o mais novo primeiro).</summary>
        readonly List<(string node, string text, int classId, TreeItem item)> itemCounts = new();

        public QuestTreeScript(QuestData data) => Data = data;

        // ------------------------------------------------------------ TreeCtrl
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

        public void DeleteNode(string name)
        {
            var n = Find(name);
            if (n == null || n == Root) return;
            n.Parent.Children.Remove(n);
            itemCounts.RemoveAll(x => x.node == name || x.node.StartsWith(name + ".", StringComparison.Ordinal));
        }

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
        /// SetExpandedNode / clique no botao: multiExpand = 0 no xdat [I] = abrir um no fecha os irmaos abertos.
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

        /// <summary>GetExpandedNode(tree, "root"): o filho aberto do root (so o primeiro conta no script).</summary>
        public string ExpandedNode()
        {
            var r = Find("root");
            if (r == null) return "";
            foreach (var c in r.Children)
                if (c.Expanded) return c.Name;
            return "";
        }

        // ------------------------------------------------------------ eventos
        public void Clear()
        {
            QuestNum = 0;
            oldQuestId = -1;
            curNodeName = "";
            DeleteQuestId = 0;
            DeleteNodeName = "";
            itemCounts.Clear();
            Root.Children.Clear();
        }

        /// <summary>HandleQuestListStart = InitTree: limpa e poe o "root" (deslocamento 3, 5).</summary>
        public void ListStart()
        {
            Clear();
            InsertNode("", new TreeNode { OffX = 3, OffY = 5 }, "root");
        }

        /// <summary>HandleQuestList: quest nova conta e comeca do pai ""; a mesma quest continua no no atual.</summary>
        public void List(int questId, int level, int completed)
        {
            if (oldQuestId != questId)
            {
                QuestNum++;
                AddQuestInfo("", questId, level, completed);
            }
            else AddQuestInfo(curNodeName, questId, level, completed);
            oldQuestId = questId;
        }

        /// <summary>HandleQuestListEnd: contador e todas as quantidades.</summary>
        public void ListEnd() => UpdateItemCount(0);

        public string CountText => "(" + QuestNum + "/" + MaxCount + ")";

        static TreeItem Txt(string s, Color32 c = default, int ox = 0, int oy = 0, bool br = false) =>
            new() { Type = TreeItem.Kind.Text, Text = s ?? "", Color = c, OffX = ox, OffY = oy, LineBreak = br };

        static TreeItem Tex(string t, int w, int h, int ox = 0, int oy = 0) =>
            new() { Type = TreeItem.Kind.Texture, Tex = t, TexW = w, TexH = h, OffX = ox, OffY = oy };

        static TreeItem Blank(int h) => new() { Type = TreeItem.Kind.Blank, BlankH = h };

        /// <summary>QuestType: (icone 1, icone 2) — 0 = 4/1, 1 = 4/2, 2 = 3/1, 3 = 3/2.</summary>
        public static (string, string) TypeIcons(int type) => type switch
        {
            0 => ("L2UI_CH3.QUESTWND.QuestWndInfoIcon_4", "L2UI_CH3.QUESTWND.QuestWndInfoIcon_1"),
            1 => ("L2UI_CH3.QUESTWND.QuestWndInfoIcon_4", "L2UI_CH3.QUESTWND.QuestWndInfoIcon_2"),
            2 => ("L2UI_CH3.QUESTWND.QuestWndInfoIcon_3", "L2UI_CH3.QUESTWND.QuestWndInfoIcon_1"),
            3 => ("L2UI_CH3.QUESTWND.QuestWndInfoIcon_3", "L2UI_CH3.QUESTWND.QuestWndInfoIcon_2"),
            _ => ("", ""),
        };

        /// <summary>Faixa de nivel: "(ss922:min~max)", "(ss922:min ss859)" ou "(ss922:ss866)".</summary>
        public string LevelText(int min, int max)
        {
            if (max > 0 && min > 0) return "(" + SysString(922) + ":" + min + "~" + max + ")";
            if (min > 0) return "(" + SysString(922) + ":" + min + " " + SysString(859) + ")";
            return "(" + SysString(922) + ":" + SysString(866) + ")";
        }

        /// <summary>AddQuestInfo (QuestTreeWnd.uc:440-800).</summary>
        public void AddQuestInfo(string parent, int questId, int level, int completed)
        {
            var row = Data?.Get(questId, level);
            var showItem = row?.ShowItemNum ?? false;
            var showJournal = row?.ShowJournal ?? false;
            if (level == 1)
            {
                var name = Data?.Name(questId) ?? "";
                var q = new TreeNode
                {
                    Tooltip = name, ShowButton = true, ExpandedBack = true,
                    BtnExpand = "L2UI_CH3.QUESTWND.QuestWndPlusBtn", BtnCollapse = "L2UI_CH3.QUESTWND.QuestWndMinusBtn",
                };
                var qn = InsertNode("root", q, questId.ToString());
                if (qn.Length < 1) return;
                q.Items.Add(Txt(name, default, 5, 2));
                var (t1, t2) = TypeIcons(row?.Type ?? 0);
                if (t1.Length > 0) q.Items.Add(Tex(t1, 11, 11, 5));
                if (t2.Length > 0) q.Items.Add(Tex(t2, 11, 11));
                q.Items.Add(Txt(LevelText(row?.MinLevel ?? 0, row?.MaxLevel ?? 0), Gold, 22, 0, true));
                q.Items.Add(Blank(7));
                parent = qn;
                curNodeName = qn;
            }

            var jname = row?.Journal ?? "";
            var j = new TreeNode
            {
                Tooltip = jname, OffX = 7, ShowButton = true,
                BtnExpand = "L2UI_CH3.QUESTWND.QuestWndDownBtn", BtnCollapse = "L2UI_CH3.QUESTWND.QuestWndUpBtn",
            };
            var jn = InsertNode(parent, j, level + "." + completed);
            if (jn.Length < 1) return;
            j.Items.Add(Txt(jname, default, 5));
            if ((row?.Target ?? "").Length > 0) j.Items.Add(Tex("L2UI_CH3.QUESTWND.QuestWndInfoIcon_5", 11, 11, 5));
            if (completed > 0 && showJournal) j.Items.Add(Txt(SysString(898), Gold, 5));
            j.Items.Add(Blank(5));

            var d = new TreeNode { OffX = 2, DrawBackground = true };
            var dn = InsertNode(jn, d, "desc");
            if (dn.Length < 1) return;
            d.Items.Add(Txt(row?.Desc ?? "", DescColor, 5));
            var items = row?.Items ?? Array.Empty<int>();
            var nums = row?.Nums ?? Array.Empty<int>();
            for (var i = 0; i < items.Length && i < nums.Length; i++)
            {
                var icon = ItemIcon(items[i]);
                if (string.IsNullOrEmpty(icon)) continue;
                d.Items.Add(Blank(4));
                d.Items.Add(Tex("L2UI_CH3.Etc.menu_outline", 34, 34, 4));
                d.Items.Add(Tex(icon, 32, 32, -33, 1));
                d.Items.Add(Txt(ItemName(items[i]), Gold, 5, 1));
                string s;
                var counted = !(completed > 0 && showItem);
                if (nums[i] > 0) s = counted ? "(%s/" + nums[i] + ")" : "(" + SysString(898) + "/" + nums[i] + ")";
                else if (nums[i] == 0) s = counted ? "(%s/" + SysString(858) + ")" : "(" + SysString(898) + "/" + SysString(858) + ")";
                else s = counted ? "(%s/" + -nums[i] + SysString(859) + ")" : "(" + SysString(898) + "/" + -nums[i] + SysString(859) + ")";
                var it = Txt(s, default, 42, -16, true);
                d.Items.Add(it);
                if (counted) itemCounts.Insert(0, (dn, s, items[i], it));
            }
            d.Items.Add(Blank(9));
        }

        /// <summary>
        /// UpdateItemCount: classID 0 = todos; "%s" vira a quantidade do inventario (-1 = 0, 0 = GetInventoryItemCount, outro =
        /// o numero dado).
        /// </summary>
        public void UpdateItemCount(int classId, long itemCount = 0)
        {
            foreach (var (_, text, cls, item) in itemCounts)
            {
                if (classId != 0 && classId != cls) continue;
                var n = itemCount == -1 ? 0 : itemCount == 0 ? InventoryCount(cls) : itemCount;
                var k = text.IndexOf("%s", StringComparison.Ordinal);
                if (k > -1) item.Text = text.Substring(0, k) + n + text.Substring(k + 2);
            }
        }

        // ------------------------------------------------------------ alvo e abandonar
        /// <summary>SetQuestTargetInfo(QuestOn, ShowTargetInRadar, ShowArrow, TargetName, TargetPos, QuestID).</summary>
        public sealed class Target
        {
            public bool On, Radar, Arrow;
            public string Name = "";
            public Vector3 Pos;
            public int QuestId;
        }

        /// <summary>
        /// UpdateTargetInfo: so com o checkbox; quest aberta; o ultimo diario dela (nome root.id.nivel.completo); sem alvo, ja
        /// completo ou sem nivel, desliga. O script le o completo no case 2 repetido, entao ele fica sempre 0.
        /// </summary>
        public Target TargetInfo(bool check)
        {
            var off = new Target();
            if (!check) return off;
            var q = ExpandedNode();
            if (q.Length < 1) return off;
            var children = ChildNodes(q);
            if (children.Length < 1) return off;
            var split = children.Split('|');
            var parts = split[split.Length - 1].Split('.');
            int questId = 0, level = 0;
            const int completed = 0;
            if (parts.Length > 1) int.TryParse(parts[1], out questId);
            if (parts.Length > 2) int.TryParse(parts[2], out level);
            if (questId <= 0 || level <= 0) return null;
            var row = Data?.Get(questId, level);
            var name = row?.Target ?? "";
            if (completed != 0 || name.Length < 1) return off;
            var only = row.MinimapOnly;
            return new Target { On = true, Radar = !only, Arrow = !only, Name = name, Pos = new Vector3(row.X, row.Y, row.Z), QuestId = questId };
        }

        /// <summary>HandleQuestCancel: sem quest aberta, Notice sm1201 (id 1); com, Warning sm182 (id 0).</summary>
        public (EDialogType type, int msg, int id) Cancel()
        {
            DeleteQuestId = 0;
            DeleteNodeName = "";
            var n = ExpandedNode();
            var parts = n.Split('.');
            if (n.Length > 0 && parts.Length > 1)
            {
                int.TryParse(parts[1], out DeleteQuestId);
                DeleteNodeName = n;
            }
            return DeleteNodeName.Length < 1 ? (EDialogType.Notice, 1201, DialogNoQuest) : (EDialogType.Warning, 182, DialogAbort);
        }

        /// <summary>EV_DialogOK com o id 0: a quest a destruir (RequestDestroyQuest) e o no some; 0 = nada.</summary>
        public int CancelOk(int dialogId)
        {
            if (dialogId != DialogAbort) return 0;
            var id = DeleteQuestId;
            DeleteNode(DeleteNodeName);
            DeleteQuestId = 0;
            DeleteNodeName = "";
            return id;
        }

        /// <summary>HandleQuestSetCurrentID: abre a quest e o ultimo diario; true se o alvo deve ser recalculado.</summary>
        public bool SetCurrent(int questId)
        {
            if (questId <= 0) return false;
            var q = "root." + questId;
            SetExpanded(q, true);
            var c = ChildNodes(q);
            if (c.Length > 0)
            {
                var s = c.Split('|');
                SetExpanded(s[s.Length - 1], true);
            }
            return true;
        }

        /// <summary>Nos visiveis em ordem, com a profundidade (os filhos so com o pai aberto; o "root" sempre aberto).</summary>
        public List<(TreeNode node, int depth)> Visible()
        {
            var o = new List<(TreeNode, int)>();
            void Walk(TreeNode n, int depth)
            {
                foreach (var c in n.Children)
                {
                    o.Add((c, depth));
                    if (c.Expanded || c.Name == "root") Walk(c, depth + 1);
                }
            }
            Walk(Root, 0);
            return o;
        }
    }

    /// <summary>QuestListWnd.uc: as linhas do EV_QuestInfo (ExShowQuestInfo FE:19) e o "Location" do NPC inicial.</summary>
    public sealed class QuestListScript
    {
        public sealed class Record
        {
            public int QuestId, Type;
            public string Name = "", Requirement = "", Level = "", Npc = "", Desc = "";
            /// <summary>Coluna 3: QuestWndInfoIcon_1 (0/2) ou _2 (1/3).</summary>
            public string Icon => Type == 1 || Type == 3 ? "L2UI_CH3.QUESTWND.QuestWndInfoIcon_2" : "L2UI_CH3.QUESTWND.QuestWndInfoIcon_1";
        }

        public readonly List<Record> Records = new();
        public int Selected = -1;

        /// <summary>HandleQuestInfoStart: DeleteAllItem (e mostra).</summary>
        public void Start()
        {
            Records.Clear();
            Selected = -1;
        }

        public void Add(string p)
        {
            var r = new Record();
            L2Param.ParseInt(p, "QuestID", ref r.QuestId);
            L2Param.ParseString(p, "QuestName", ref r.Name);
            L2Param.ParseString(p, "QuestRequirement", ref r.Requirement);
            L2Param.ParseString(p, "QuestLevel", ref r.Level);
            L2Param.ParseInt(p, "QuestType", ref r.Type);
            L2Param.ParseString(p, "QuestNpcName", ref r.Npc);
            L2Param.ParseString(p, "QuestDecription", ref r.Desc);
            Records.Add(r);
        }

        /// <summary>ShowQuestTarget: o NPC inicial (nivel 1) da quest escolhida, com radar e seta; null sem quest ou sem nome.</summary>
        public QuestTreeScript.Target Location(QuestData data, Func<int, string> npcName)
        {
            if (Selected < 0 || Selected >= Records.Count) return null;
            var id = Records[Selected].QuestId;
            var row = id > 0 ? data?.Get(id, 1) : null;
            if (row == null) return null;
            var name = npcName(row.StartNpc) ?? "";
            if (name.Length < 1) return null;
            return new QuestTreeScript.Target { On = true, Radar = true, Arrow = true, Name = name, Pos = new Vector3(row.NpcX, row.NpcY, row.NpcZ), QuestId = id };
        }
    }
}
