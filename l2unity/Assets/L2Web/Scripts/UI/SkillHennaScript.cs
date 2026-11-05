// SkillTrainListWnd.uc, SkillTrainInfoWnd.uc, HennaListWnd.uc e HennaInfoWnd.uc (spec 07, #0039) sem Unity: a lista de skills
// (TreeCtrl com icone, nome, nivel e SP ou reputacao do cla), o detalhe com o aprender e o voltar, a lista de tatuagens
// (pintar ou apagar, com a taxa) e o detalhe com os atributos antes/depois; e o hennagrp-e.dat.
using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

namespace L2Web.UI
{
    /// <summary>hennagrp-e.dat: d id, d item do corante, ASCF nome, icone, descricao e nome adicional (180 registros).</summary>
    public static class HennaGrp
    {
        public sealed class Row
        {
            public int Id, DyeId;
            public string Name = "", Icon = "", Desc = "", AddName = "";
            /// <summary>O icone sem o pacote "icon." (o nome dos icones do porte).</summary>
            public string IconName => Icon.StartsWith("icon.", StringComparison.OrdinalIgnoreCase) ? Icon.Substring(5) : Icon;
        }

        public static Dictionary<int, Row> Parse(byte[] b)
        {
            var n = BitConverter.ToInt32(b, 0);
            var p = 4;
            var o = new Dictionary<int, Row>(n);
            for (var i = 0; i < n; i++)
            {
                var r = new Row { Id = BitConverter.ToInt32(b, p), DyeId = BitConverter.ToInt32(b, p + 4) };
                p += 8;
                r.Name = L2Texts.FString(b, ref p);
                r.Icon = L2Texts.FString(b, ref p);
                r.Desc = L2Texts.FString(b, ref p);
                r.AddName = L2Texts.FString(b, ref p);
                o[r.Id] = r;
            }
            return o;
        }

        static Dictionary<int, Row> loaded;

        public static Row Get(int id)
        {
            if (loaded == null)
            {
                try
                {
                    var f = GameData.ClientFile("hennagrp-e.dat");
                    loaded = File.Exists(f) ? Parse(L2Files.Decrypt(File.ReadAllBytes(f))) : new Dictionary<int, Row>();
                }
                catch (Exception e)
                {
                    Debug.LogWarning("hennagrp-e.dat: " + e.Message);
                    loaded = new Dictionary<int, Row>();
                }
            }
            return loaded.TryGetValue(id, out var r) ? r : null;
        }
    }

    public sealed class SkillTrainScript : TreeModel
    {
        public const int Normal = 0, Fishing = 1, Clan = 2, Enchant = 3;
        const int SecondLine = -14;
        static readonly Color32 Grey = new(163, 163, 163, 255), Gold = new(176, 155, 121, 255);
        public const string RootName = "SkillTrainListRoot";
        public Func<int, string> SysString = id => GameData.SysString(id, "");

        public int Type;

        /// <summary>Titulo, rotulo e valor do SP: 477/ss92/SP do jogador, ou no cla 1436/ss1372/reputacao do cla.</summary>
        public (int title, int spLabel, bool clan) Head => Type == Clan ? (1436, 1372, true) : (477, 92, false);

        /// <summary>EV_SkillTrainListWndShow: limpa, guarda o tipo e poe o no raiz (deslocamento 7, 0).</summary>
        public void ListShow(int type)
        {
            ClearTree();
            Type = type;
            InsertNode("", new TreeNode { OffX = 7 }, RootName);
        }

        /// <summary>
        /// AddSkillTrainListItem: no "id,nivel" sem botao (fundo IconSelect2 38 de altura em -7, 2), moldura 34 e 35, icone 32,
        /// nome; depois "ss88 nivel" e "ss365 (ou ss1437 no cla) : SP" na 2a linha; o encantamento mostra so o nome dele.
        /// </summary>
        public void AddSkill(string icon, string name, int id, int level, int sp, string enchantName)
        {
            var n = new TreeNode
            {
                ExpLeft = "L2UI_CH3.etc.IconSelect2", ExpOffX = -7, ExpOffY = 2, ExpH = 38, ExpLeftU = 32, ExpLeftV = 38, Tooltip = "",
            };
            if (InsertNode(RootName, n, id + "," + level).Length < 1) return;
            n.Items.Add(new TreeItem { Type = TreeItem.Kind.Texture, Tex = "l2ui_ch3.InventoryWnd.Inventory_OutLine", TexW = 34, TexH = 34, OffY = 4 });
            n.Items.Add(new TreeItem { Type = TreeItem.Kind.Texture, Tex = "l2ui_ch3.InventoryWnd.Inventory_OutLine", TexW = 35, TexH = 35, OffX = -33, OffY = 4 });
            n.Items.Add(new TreeItem { Type = TreeItem.Kind.Texture, Tex = icon ?? "", TexW = 32, TexH = 32, OffX = -35, OffY = 5 });
            n.Items.Add(new TreeItem { Type = TreeItem.Kind.Text, Text = name ?? "", OffX = 3, OffY = 10 });
            if (Type == Enchant)
            {
                n.Items.Add(new TreeItem { Type = TreeItem.Kind.Text, Text = enchantName ?? "", LineBreak = true, OffX = 37, OffY = SecondLine, Color = Gold });
                return;
            }
            n.Items.Add(new TreeItem { Type = TreeItem.Kind.Text, Text = SysString(88), LineBreak = true, OffX = 37, OffY = SecondLine, Color = Grey });
            n.Items.Add(new TreeItem { Type = TreeItem.Kind.Text, Text = level.ToString(), OffX = 2, OffY = SecondLine, Color = Gold });
            n.Items.Add(new TreeItem { Type = TreeItem.Kind.Text, Text = SysString(Type == Clan ? 1437 : 365) + " : ", LineBreak = true, OffX = 77, OffY = SecondLine, Color = Grey });
            n.Items.Add(new TreeItem { Type = TreeItem.Kind.Text, Text = sp.ToString(), OffY = SecondLine, Color = Gold });
        }

        /// <summary>OnClickButton: o nome do no depois do raiz e "id,nivel"; o pedido do tipo (encantamento = ExEnchantSkillInfo).</summary>
        public (int id, int level, bool enchant)? Click(string node)
        {
            if (node == null || !node.StartsWith(RootName + ".", StringComparison.Ordinal)) return null;
            var s = node.Substring(RootName.Length + 1);
            var k = s.IndexOf(',');
            if (k < 0) return null;
            int.TryParse(s.Substring(0, k), out var id);
            int.TryParse(s.Substring(k + 1), out var lv);
            return (id, lv, Type == Enchant);
        }

        // ------------------------------------------------------------ SkillTrainInfoWnd
        public int InfoType, InfoId, InfoLevel;
        public readonly Dictionary<string, string> Texts = new();
        public bool CastRangeShown, NeedItemShown;

        /// <summary>
        /// EV_SkillTrainInfoWndShow + AddSkillTrainInfo: nome, nivel, tipo de uso, MP, descricao, SP necessario (ss365 ou ss1437 no
        /// cla); alcance so com &gt;= 0. O item necessario so aparece no EV_SkillTrainInfoWndAddExtendInfo.
        /// </summary>
        public void Info(int type, int id, int level, string name, string operateType, int mp, int castRange, string desc, int sp, string enchantName, string enchantDesc, int percent)
        {
            InfoType = type;
            InfoId = id;
            InfoLevel = level;
            Texts.Clear();
            Texts["txtName"] = name ?? "";
            NeedItemShown = false;
            if (type == Enchant)
            {
                Texts["txtEnchantName"] = enchantName ?? "";
                Texts["SubWndEnchant.txtDescription"] = enchantDesc ?? "";
                Texts["txtProbabilityOfSuccess"] = percent.ToString();
                Texts["txtNeedSP"] = sp.ToString();
            }
            else
            {
                Texts["txtLevel"] = level.ToString();
                Texts["txtOperateType"] = operateType ?? "";
                Texts["txtMP"] = mp.ToString();
                Texts["SubWndNormal.txtDescription"] = desc ?? "";
                Texts["txtNeedSPString"] = SysString(type == Clan ? 1437 : 365);
                Texts["txtNeedSP"] = sp.ToString();
            }
            CastRangeShown = castRange >= 0;
            if (CastRangeShown) Texts["txtCastRange"] = castRange.ToString();
        }

        /// <summary>AddSkillTrainInfoExtend: "nome X n" do item e mostra o item.</summary>
        public void InfoItem(string name, int count)
        {
            Texts["txtNeedItemName"] = (name ?? "") + " X " + count;
            NeedItemShown = true;
        }

        /// <summary>OnLearn: RequestAcquireSkill (id, nivel, tipo) ou, no encantamento, RequestExEnchantSkill.</summary>
        public (int id, int level, int type, bool enchant) Learn() => (InfoId, InfoLevel, InfoType, InfoType == Enchant);
    }

    public sealed class HennaScript : TreeModel
    {
        public const int Equip = 1, UnEquip = 2;
        public const string RootName = "HennaListRoot";
        public Func<int, string> SysString = id => GameData.SysString(id, "");
        public int State;
        public long Adena;

        /// <summary>Titulo e texto da lista: pintar 651/659, apagar 652/660.</summary>
        public (int title, int text) Head => State == UnEquip ? (652, 660) : (651, 659);

        /// <summary>EV_HennaListWndShowHide*: o estado, limpa, adena e o no raiz (7, -3).</summary>
        public void ListShow(bool equip, long adena)
        {
            State = equip ? Equip : UnEquip;
            ClearTree();
            Adena = adena;
            InsertNode("", new TreeNode { OffX = 7, OffY = -3 }, RootName);
        }

        /// <summary>
        /// AddHennaListItem: no do id (IconSelect2 46 de altura em -7, 8), icone 32 em y 15, nome (y 17 ao pintar, 10 ao apagar),
        /// ao apagar a descricao na 2a linha, e "ss637 : " + a taxa (MakeCostString).
        /// </summary>
        public void Add(int hennaId, string name, string icon, string desc, long fee)
        {
            var n = new TreeNode { ExpLeft = "L2UI_CH3.etc.IconSelect2", ExpOffX = -7, ExpOffY = 8, ExpH = 46, ExpLeftU = 32, ExpLeftV = 40 };
            if (InsertNode(RootName, n, hennaId.ToString()).Length < 1) return;
            n.Items.Add(new TreeItem { Type = TreeItem.Kind.Texture, Tex = icon ?? "", TexW = 32, TexH = 32, OffY = 15 });
            n.Items.Add(new TreeItem { Type = TreeItem.Kind.Text, Text = name ?? "", OffX = 5, OffY = State == Equip ? 17 : 10 });
            if (State == UnEquip) n.Items.Add(new TreeItem { Type = TreeItem.Kind.Text, Text = desc ?? "", LineBreak = true, OffX = 37, OffY = -24 });
            n.Items.Add(new TreeItem
            {
                Type = TreeItem.Kind.Text, Text = SysString(637) + " : ", LineBreak = true, OffX = 37, OffY = State == Equip ? -13 : -12, Color = new Color32(168, 168, 168, 255),
            });
            var cost = L2Tooltip.MakeCostString(fee.ToString());
            n.Items.Add(new TreeItem { Type = TreeItem.Kind.Text, Text = cost, OffY = State == Equip ? -13 : -12, Color = L2Tooltip.GetNumericColor(cost) });
        }

        /// <summary>OnClickButton: RequestHennaItemInfo (pintar) ou RequestHennaUnequipInfo (apagar) do id depois do raiz.</summary>
        public int Click(string node)
        {
            if (node == null || !node.StartsWith(RootName + ".", StringComparison.Ordinal)) return 0;
            int.TryParse(node.Substring(RootName.Length + 1), out var id);
            return id;
        }

        // ------------------------------------------------------------ HennaInfoWnd
        public int InfoState, HennaId;
        public readonly Dictionary<string, string> Texts = new();
        public Color32 FeeColor;

        /// <summary>ShowHennaInfoWnd: corante e tatuagem (pintar: corante em cima; apagar: tatuagem em cima), taxa e os 6 atributos.</summary>
        public void Info(bool equip, string p, Func<int, (string name, string icon)> item)
        {
            InfoState = equip ? Equip : UnEquip;
            int fee = 0, classId = 0;
            L2Param.ParseInt(p, "HennaID", ref HennaId);
            L2Param.ParseInt(p, "ClassID", ref classId);
            L2Param.ParseInt(p, "Fee", ref fee);
            var h = HennaGrp.Get(HennaId);
            var dye = item(classId);
            var cost = L2Tooltip.MakeCostString(fee.ToString());
            FeeColor = L2Tooltip.GetNumericColor(cost);
            Texts.Clear();
            var sfx = equip ? "" : "UnEquip";
            Texts["txtDyeInfo" + sfx] = SysString(638);
            Texts["txtDyeName" + sfx] = dye.name;
            Texts["textureDyeIconName" + sfx] = dye.icon;
            Texts["txtFee" + sfx] = SysString(637) + " : ";
            Texts["txtAdena" + sfx] = cost;
            Texts["txtAdenaString" + sfx] = SysString(469);
            Texts["txtTattooInfo" + sfx] = SysString(639);
            Texts["textureTattooIconName" + sfx] = h?.IconName ?? "";
            Texts["txtTattooName" + sfx] = equip ? h?.Name ?? "" : SysString(652) + ":" + (h?.Name ?? "");
            Texts["txtTattooAddName" + sfx] = h?.AddName ?? "";
            foreach (var s in SkillTrainPacketsStats)
            {
                int now = 0, change = 0;
                L2Param.ParseInt(p, s + "now", ref now);
                L2Param.ParseInt(p, s + "change", ref change);
                Texts["txt" + s + "Before"] = now.ToString();
                Texts["txt" + s + "After"] = change.ToString();
            }
        }

        static readonly string[] SkillTrainPacketsStats = { "INT", "STR", "CON", "MEN", "DEX", "WIT" };

        /// <summary>OnClickButton do HennaInfoWnd (que fecha antes): btnOK = pintar/apagar o id; btnPrev = pedir a lista de novo.</summary>
        public (string kind, int id) Button(string btn) => btn switch
        {
            "btnOK" => (InfoState == Equip ? "equip" : "unequip", HennaId),
            "btnPrev" => (InfoState == Equip ? "list" : "unequipList", 0),
            _ => ("", 0),
        };
    }
}
