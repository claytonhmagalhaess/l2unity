// Previa da interface sem servidor (ui/preview.ts, o #uitest do web): HUD com dados de exemplo, para conferir o layout
// das janelas do Interface.xdat sem abrir conexoes no login/game (o IPv4Filter do aCis bloqueia rajadas).
// Uso: UiPreview.Run(ui, showScreen, "inv&main=1&menu&vert&bars=3&dlg&npc&death&filter") — as opcoes sao as do hash
// #uitest?... do web (cada uma abre uma janela a mais).
using System;
using System.Collections.Generic;
using System.Linq;
using L2Web.Net;
using Entity = L2Web.World.Entity;

namespace L2Web.UI
{
    public static class UiPreview
    {
        /// <summary>Entidade falsa usada como alvo (o App/teste pode destruir o Actor.Root dela depois).</summary>
        public static Entity Target;

        static Dictionary<string, string> Query(string q)
        {
            var d = new Dictionary<string, string>();
            foreach (var part in (q ?? "").TrimStart('#', '?', '&').Replace("uitest", "").TrimStart('?', '&').Split('&', StringSplitOptions.RemoveEmptyEntries))
            {
                var i = part.IndexOf('=');
                if (i < 0) d[part] = "";
                else d[part.Substring(0, i)] = Uri.UnescapeDataString(part.Substring(i + 1));
            }
            return d;
        }

        static int Num(string s, int def) => int.TryParse(s, out var v) && v != 0 ? v : def;

        /// <summary>Preenche a interface com dados de exemplo e abre as janelas pedidas em `query`.</summary>
        public static void Run(GameUi ui, Action showScreen = null, string query = "")
        {
            showScreen?.Invoke();
            var stats = new Dictionary<string, long>
            {
                ["exp"] = 1600000, ["sp"] = 39000, ["STR"] = 41, ["DEX"] = 34, ["CON"] = 32, ["INT"] = 25, ["WIT"] = 12, ["MEN"] = 26, ["pAtk"] = 412,
                ["pDef"] = 300, ["mAtk"] = 210, ["mDef"] = 254, ["accuracy"] = 98, ["evasion"] = 96, ["crit"] = 121, ["pAtkSpd"] = 433, ["mAtkSpd"] = 333,
                ["load"] = 12000, ["maxLoad"] = 81900, ["karma"] = 0, ["pvp"] = 3, ["pk"] = 0,
            };
            var u = new UserInfo
            {
                ObjectId = 1, Name = "dsadas", Title = "", Level = 23, Hp = 1077, MaxHp = 1149, Mp = 226, MaxMp = 226, Cp = 218, MaxCp = 218,
                ClassId = 35, RunSpd = 120, MoveMul = 1, Stats = stats,
            };
            ui.SetUser(u);
            ui.ShowHud();
            ui.ShowHudExtras(true);
            if (Target == null)
            {
                Target = new Entity(-20134, "npc") { NpcId = 20134, Name = "Amber Basilisk", Title = "", Hp = 70, MaxHp = 100, Dead = false };
                Target.Actor.Root.gameObject.SetActive(false);
            }
            ui.SetTarget(Target);
            var ids = new[] { 1035, 1040, 1068, 1077, 1086, 1204, 1240, 1242, 1243, 1059 };
            ui.SetBuffs(Enumerable.Range(0, 30).Select(i => new AbnormalInfo { SkillId = ids[i % 10], Level = 1, Seconds = 1200 - i * 30 }).ToList());
            ui.SetSkills(new[] { 3, 16, 56, 101, 129, 263, 1016, 1177 }.Select((id, i) => new SkillInfo { Id = id, Level = 1, Passive = i > 5, Disabled = false }).ToList());
            ui.SetItems(new List<InvItem>
            {
                new() { ObjectId = 10, ItemId = 57, Count = 1234567, Type1 = 4, Type2 = 4, Equipped = false, BodyPart = 0, Enchant = 0, Mana = -1 },
                new() { ObjectId = 11, ItemId = 2369, Count = 1, Type1 = 0, Type2 = 0, Equipped = true, BodyPart = 0x0080, Enchant = 3, Mana = -1 },
                new() { ObjectId = 12, ItemId = 1146, Count = 1, Type1 = 1, Type2 = 1, Equipped = true, BodyPart = 0x0400, Enchant = 0, Mana = -1 },
                new() { ObjectId = 13, ItemId = 1835, Count = 4500, Type1 = 4, Type2 = 5, Equipped = false, BodyPart = 0, Enchant = 0, Mana = -1 },
                new() { ObjectId = 14, ItemId = 1060, Count = 12, Type1 = 4, Type2 = 5, Equipped = false, BodyPart = 0, Enchant = 0, Mana = -1 },
                new() { ObjectId = 15, ItemId = 736, Count = 3, Type1 = 4, Type2 = 5, Equipped = false, BodyPart = 0, Enchant = 0, Mana = -1 },
            }, false);
            ui.SetShortcuts(new List<Shortcut>
            {
                new() { Slot = 0, Type = "action", Id = 2, Level = 0 },
                new() { Slot = 3, Type = "action", Id = 0, Level = 0 },
                new() { Slot = 10, Type = "action", Id = 1, Level = 0 },
                new() { Slot = 1, Type = "item", Id = 13, Level = 0 },
            });
            var q = Query(query);
            var lines = new[]
            {
                ("ann", "Announcements: Welcome to L2Ketra X500 Custom PVP!"),
                ("ann", "Announcements: Website: www.L2Ketra.com"),
                ("sys", "It is dawn and the effect of Shadow Sense will now disappear."),
                ("sys", "As you acted, you are no longer under spawn protection."),
                ("say", "dsadas: olá"),
                ("trade", "+Vendo Soulshot (D)"),
            };
            for (var i = 0; i < 4; i++)
                foreach (var (c, t) in lines)
                    ui.ChatLine(c, t);
            ui.ChatLine("sys", "You hit for 120 damage.");
            ui.ChatLine("sys", "Your soulshot has been used.");
            if (q.ContainsKey("filter")) ui.ChatWnd.Button("ChatFilterBtn")?.OnClick?.Invoke();
            ui.DrawRadar(0);
            if (q.ContainsKey("inv")) ui.Inv.Show();
            if (q.ContainsKey("main"))
            {
                ui.Main.Show();
                ui.Main.SelectTab("MainTabCtrl", Num(q["main"], 0));
            }
            if (q.ContainsKey("menu")) ui.SysMenuWnd.Show();
            if (q.ContainsKey("vert")) ui.PreviewSetVertical(true);
            if (q.ContainsKey("bars")) ui.PreviewSetBarCount(Num(q["bars"], 3));
            if (q.ContainsKey("dlg"))
            {
                // dlg=<EDialogType> (OKCancel, OK, OKCancelInput, OKInput, Warning, Notice, NumberPad, Progress); dlgnum= texto do
                // edit; sem valor, o ConfirmDlg do servidor
                if (Enum.TryParse<EDialogType>(q["dlg"], true, out var dt))
                {
                    ui.Dialog.SetParamInt(dt == EDialogType.Progress ? 10000 : 1234567);
                    var msg = dt == EDialogType.NumberPad ? GameData.SystemMessage(72, new List<string> { "Soulshot: No Grade" }).Text : GameData.SystemMessage(1383, new List<string>()).Text;
                    ui.Dialog.Show(dt, msg, "UiPreview");
                    if (q.TryGetValue("dlgnum", out var dn)) ui.Dialog.SetString(dn);
                }
                else ui.Confirm(-1, new List<string>(), 0);
            }
            if (q.ContainsKey("npc"))
                ui.ShowHtml("<html><title>Gatekeeper</title><body>Gatekeeper Ruby:<br>Para onde deseja ir?<br><a action=\"bypass -h x\">Giran Castle Town - 0 Adena</a><br><a action=\"bypass -h y\">Dragon Valley - 1800 Adena</a><br><button value=\"Fechar\" action=\"bypass -h z\" width=80 height=21></body></html>");
            if (q.ContainsKey("death")) ui.ShowDeath(new List<(bool, int)> { (true, 0), (false, 1), (false, 2), (false, 3), (true, 4) });
        }
    }
}
