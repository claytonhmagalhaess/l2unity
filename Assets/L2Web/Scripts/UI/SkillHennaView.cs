// SkillTrainListWnd, SkillTrainInfoWnd (com SubWndNormal/SubWndEnchant), HennaListWnd e HennaInfoWnd do xdat (#0039) ligados
// ao SkillTrainScript/HennaScript pelos eventos do InterfaceRouter (AcquireSkillList/Info/Done, HennaEquipList/RemoveList,
// HennaItemInfo/RemoveInfo). Nome, icone e descricao vem dos .dat do cliente pelo id, como o InterfaceEvents pede.
using System;
using System.Collections.Generic;
using L2Web.Net;

namespace L2Web.UI
{
    public sealed class SkillHennaView
    {
        public readonly L2Wnd SkillList, SkillInfo, HennaList, HennaInfo;
        public readonly SkillTrainScript Skill = new();
        public readonly HennaScript Henna = new();
        readonly GameUi ui;
        readonly Action<byte[]> send;
        readonly L2TreeCtrl skillTree, hennaTree;

        public SkillHennaView(L2Layer layer, GameUi ui, Action<byte[]> send)
        {
            this.ui = ui;
            this.send = send;
            SkillList = new L2Wnd("SkillTrainListWnd", layer, new WndOpts { AriaLabel = "Aprender skill" });
            SkillInfo = new L2Wnd("SkillTrainInfoWnd", layer, new WndOpts { AriaLabel = "Skill", Embed = new[] { "SubWndNormal", "SubWndEnchant" } });
            HennaList = new L2Wnd("HennaListWnd", layer, new WndOpts { AriaLabel = "Tatuagens" });
            HennaInfo = new L2Wnd("HennaInfoWnd", layer, new WndOpts { AriaLabel = "Tatuagem" });
            skillTree = new L2TreeCtrl(SkillList, "SkillTrainListTree") { OnClick = n => SkillClick(n.Name) };
            hennaTree = new L2TreeCtrl(HennaList, "HennaListTree") { OnClick = n => HennaClick(n.Name) };

            // ---- SkillTrainListWnd
            L2Events.Register(Ev.EV_SkillTrainListWndShow, p =>
            {
                var type = 0;
                L2Param.ParseInt(p, "Type", ref type);
                Skill.ListShow(type);
                SkillInfo.Hide();
                var (title, label, clan) = Skill.Head;
                SkillList.SetTitle(GameData.SysString(title, ""));
                if (type != SkillTrainScript.Enchant)
                {
                    SkillList.Text("txtSPString", GameData.SysString(label, ""));
                    SkillList.Text("txtSP", PlayerSp(clan).ToString());
                }
                skillTree.Render(Skill);
                SkillList.Show();
            });
            // OnShow: o SP some no encantamento
            SkillList.OnShow = () =>
            {
                SkillList.ShowCtrl("txtSPString", Skill.Type != SkillTrainScript.Enchant);
                SkillList.ShowCtrl("txtSP", Skill.Type != SkillTrainScript.Enchant);
            };
            L2Events.Register(Ev.EV_SkillTrainListWndAddSkill, p =>
            {
                int id = 0, lv = 0, sp = 0;
                L2Param.ParseInt(p, "iID", ref id);
                L2Param.ParseInt(p, "iLevel", ref lv);
                L2Param.ParseInt(p, "iSPConsume", ref sp);
                Skill.AddSkill(GameData.SkillIcon(id), GameData.SkillName(id, lv), id, lv, sp, L2TooltipData.EnchantName(id, lv));
                skillTree.Render(Skill);
            });
            L2Events.Register(Ev.EV_SkillTrainListWndHide, _ => SkillList.Hide());

            // ---- SkillTrainInfoWnd
            L2Events.Register(Ev.EV_SkillTrainInfoWndShow, p =>
            {
                int type = 0, id = 0, lv = 0, sp = 0;
                L2Param.ParseInt(p, "Type", ref type);
                L2Param.ParseInt(p, "iID", ref id);
                L2Param.ParseInt(p, "iLevel", ref lv);
                L2Param.ParseInt(p, "iSPConsume", ref sp);
                var r = L2SkillData.Get(id, lv);
                Skill.Info(type, id, lv, GameData.SkillName(id, lv), L2TooltipData.OperateType(id, lv, i => GameData.SysString(i, "")), r?.MpConsume ?? 0,
                    r?.CastRange ?? -1, L2TooltipData.Skill(id, lv)?.Desc ?? "", sp, L2TooltipData.EnchantName(id, lv), "", 0);
                SkillInfo.SetTitle(GameData.SysString(type == SkillTrainScript.Clan ? 1436 : 477, ""));
                if (type != SkillTrainScript.Enchant) Sub("SubWndNormal")?.Text("txtSPString", GameData.SysString(type == SkillTrainScript.Clan ? 1372 : 92, ""));
                SkillInfo.Text("txtSP", PlayerSp(type == SkillTrainScript.Clan).ToString());
                SetIcon(SkillInfo, "texIcon", GameData.SkillIcon(id));
                SkillInfo.Show();
                RenderSkillInfo();
            });
            // OnShow: a sub-janela do tipo, sem o item necessario ate o AddExtendInfo
            SkillInfo.OnShow = RenderSkillInfo;
            L2Events.Register(Ev.EV_SkillTrainInfoWndAddExtendInfo, p =>
            {
                int n = 0, cls = 0;
                L2Param.ParseInt(p, "iNumOfItem", ref n);
                L2Param.ParseInt(p, "ClassID", ref cls);
                Skill.InfoItem(GameData.ItemName(cls), n);
                var w = Sub(Skill.InfoType == SkillTrainScript.Enchant ? "SubWndEnchant" : "SubWndNormal");
                if (w != null) SetIcon(w, "texNeedItemIcon", GameData.ItemIcon(cls));
                RenderSkillInfo();
            });
            L2Events.Register(Ev.EV_SkillTrainInfoWndHide, _ => SkillInfo.Hide());
            SkillInfo.OnClick("btnLearn", () =>
            {
                var (id, lv, type, enchant) = Skill.Learn();
                // RequestExEnchantSkill nao existe no Net do porte
                if (!enchant) send(SkillTrainPackets.RequestAcquireSkill(id, lv, type));
            });
            SkillInfo.OnClick("btnGoBackList", () =>
            {
                SkillInfo.Hide();
                SkillList.Show();
            });

            // ---- HennaListWnd
            foreach (var (ev, equip) in new[] { (Ev.EV_HennaListWndShowHideEquip, true), (Ev.EV_HennaListWndShowHideUnEquip, false) })
                L2Events.Register(ev, p =>
                {
                    var adena = 0;
                    L2Param.ParseInt(p, "Adena", ref adena);
                    Henna.ListShow(equip, adena);
                    var (title, text) = Henna.Head;
                    HennaList.SetTitle(GameData.SysString(title, ""));
                    HennaList.Text("txtList", GameData.SysString(text, ""));
                    HennaList.Text("txtAdena", L2Tooltip.MakeCostString(adena.ToString()));
                    var at = HennaList.Get("txtAdena");
                    if (at) UiTooltip.Set(at.gameObject, L2NumText.Convert(adena.ToString(), true));
                    hennaTree.Render(Henna);
                    HennaList.Show();
                });
            foreach (var ev in new[] { Ev.EV_HennaListWndAddHennaEquip, Ev.EV_HennaListWndAddHennaUnEquip })
                L2Events.Register(ev, p =>
                {
                    int id = 0, fee = 0;
                    L2Param.ParseInt(p, "HennaID", ref id);
                    L2Param.ParseInt(p, "Fee", ref fee);
                    var h = HennaGrp.Get(id);
                    Henna.Add(id, h?.Name ?? "", h?.Icon ?? "", h?.Desc ?? "", fee);
                    hennaTree.Render(Henna);
                });

            // ---- HennaInfoWnd
            foreach (var (ev, equip) in new[] { (Ev.EV_HennaInfoWndShowHideEquip, true), (Ev.EV_HennaInfoWndShowHideUnEquip, false) })
                L2Events.Register(ev, p =>
                {
                    Henna.Info(equip, p, cls => (GameData.ItemName(cls), GameData.ItemIcon(cls)));
                    HennaInfo.Show();
                    RenderHennaInfo();
                });
            HennaInfo.OnShow = RenderHennaInfo;
            foreach (var b in new[] { "btnOK", "btnPrev" })
            {
                var name = b;
                HennaInfo.OnClick(b, () =>
                {
                    HennaInfo.Hide();
                    var (kind, id) = Henna.Button(name);
                    switch (kind)
                    {
                        case "equip":
                            send(SkillTrainPackets.RequestHennaEquip(id));
                            break;
                        case "unequip":
                            send(SkillTrainPackets.RequestHennaRemove(id));
                            break;
                        case "list":
                            send(SkillTrainPackets.RequestHennaList());
                            break;
                        case "unequipList":
                            send(SkillTrainPackets.RequestHennaRemoveList());
                            break;
                    }
                });
            }
        }

        L2Wnd Sub(string name) => SkillInfo.Embedded.TryGetValue(name, out var w) ? w : null;

        /// <summary>SP do jogador ou, no cla, a reputacao (GetClanNameValue) [I: a do ClanWnd].</summary>
        long PlayerSp(bool clan)
        {
            if (clan) return ui.Clan?.S.NameValue ?? 0;
            var u = ui.User;
            return u?.Stats != null && u.Stats.TryGetValue("sp", out var v) ? v : 0;
        }

        static void SetIcon(L2Wnd w, string ctrl, string icon)
        {
            var el = w.Get(ctrl);
            if (!el) return;
            var url = GameUi.IconUrl(icon);
            if (url == null) return;
            var img = L2WndUtil.Bg(el, "icon");
            img.enabled = true;
            UiRoot.Fill(img.rectTransform);
            L2WndUtil.SetTexture(img, url);
        }

        void SkillClick(string node)
        {
            var c = Skill.Click(node);
            if (c == null) return;
            var (id, lv, enchant) = c.Value;
            // RequestExEnchantSkillInfo nao existe no Net do porte
            if (!enchant) send(SkillTrainPackets.RequestAcquireSkillInfo(id, lv, Skill.Type));
            SkillList.Hide();
            skillTree.ScrollTop();
        }

        void HennaClick(string node)
        {
            var id = Henna.Click(node);
            if (id <= 0) return;
            send(Henna.State == HennaScript.Equip ? SkillTrainPackets.RequestHennaItemInfo(id) : SkillTrainPackets.RequestHennaItemRemoveInfo(id));
        }

        void RenderSkillInfo()
        {
            var enchant = Skill.InfoType == SkillTrainScript.Enchant;
            SkillInfo.ShowCtrl("SubWndNormal", !enchant);
            SkillInfo.ShowCtrl("SubWndEnchant", enchant);
            var w = Sub(enchant ? "SubWndEnchant" : "SubWndNormal");
            foreach (var kv in Skill.Texts)
            {
                var key = kv.Key.Contains(".") ? kv.Key.Substring(kv.Key.IndexOf('.') + 1) : kv.Key;
                SkillInfo.Text(key, kv.Value);
                w?.Text(key, kv.Value);
            }
            if (w == null) return;
            w.ShowCtrl("texNeedItemIcon", Skill.NeedItemShown);
            w.ShowCtrl("txtNeedItemName", Skill.NeedItemShown);
            foreach (var n in new[] { "txtCastRangeString", "txtColoneCastRange", "txtCastRange" }) w.ShowCtrl(n, Skill.CastRangeShown);
        }

        void RenderHennaInfo()
        {
            var equip = Henna.InfoState == HennaScript.Equip;
            HennaInfo.SetTitle(GameData.SysString(equip ? 651 : 652, ""));
            HennaInfo.ShowCtrl("HennaInfoWndEquip", equip);
            HennaInfo.ShowCtrl("HennaInfoWndUnEquip", !equip);
            foreach (var kv in Henna.Texts)
            {
                if (kv.Key.StartsWith("texture", StringComparison.Ordinal)) SetIcon(HennaInfo, kv.Key, kv.Value);
                else HennaInfo.Text(kv.Key, kv.Value);
            }
            var sfx = equip ? "" : "UnEquip";
            var a = HennaInfo.TextEl("txtAdena" + sfx);
            if (a) a.color = Henna.FeeColor;
            var f = HennaInfo.TextEl("txtFee" + sfx);
            if (f) f.color = new UnityEngine.Color32(168, 168, 168, 255);
            var s = HennaInfo.TextEl("txtAdenaString" + sfx);
            if (s) s.color = new UnityEngine.Color32(255, 255, 0, 255);
        }
    }
}
