// GameUi (continuacao): teclas, buffs, reuso, soulshot automatico, radar, barra de cast, caixa de informacoes (hudInfo)
// e ajuda (helpBox), e o tick (4x por segundo).
using System;
using System.Collections.Generic;
using L2Web.Net;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;
using IKey = UnityEngine.InputSystem.Key;
using Entity = L2Web.World.Entity;

namespace L2Web.UI
{
    public partial class GameUi
    {
        // ------------------------------------------------------------ teclas
        static int FKey(IKey k) => k >= IKey.F1 && k <= IKey.F12 ? k - IKey.F1 + 1 : 0;

        static int Digit(IKey k)
        {
            if (k >= IKey.Digit1 && k <= IKey.Digit9) return k - IKey.Digit1 + 1;
            if (k == IKey.Digit0) return 0;
            if (k >= IKey.Numpad1 && k <= IKey.Numpad9) return k - IKey.Numpad1 + 1;
            if (k == IKey.Numpad0) return 0;
            return -1;
        }

        /// <summary>Abas da MainWnd na ordem do MainTabCtrl (o parametro Tab= dos comandos ShowMainWindow).</summary>
        static readonly string[] MainTabs = { "Status", "Skill", "Action", "Pledge", "Quest" };

        /// <summary>
        /// Comandos da tabela de teclas do xdat (L2Shortcuts) que sao da interface. Devolve false para os que o App trata
        /// (alvo, board, social) ou que nao existem no Unity.
        /// </summary>
        bool partyBuffFlag;

        public bool Command(string cmd, Dictionary<string, string> args, bool ctrl, bool shift)
        {
            var num = args.TryGetValue("Num", out var n) && int.TryParse(n, out var v) ? v : 0;
            switch (cmd)
            {
                case "UseShortcutItem":
                    // a barra 1 na pagina atual; Ctrl+ forca o uso, Shift+ usa sem andar (como o clique)
                    UseSlot(barPage[0] * Page + num, ctrl, shift);
                    return true;
                case "SetShortcutPage":
                    SetPage(0, num);
                    return true;
                case "ChatWndSetFocus":
                    // HandleKeyboardInput com o Enter Chat desligado: EV_ChatWndSetFocus (o ChatWnd.uc foca o campo)
                    L2Events.Dispatch(new PacketEvents.Event(Ev.EV_ChatWndSetFocus, ""));
                    return true;
                case "ShowBoardWindow":
                    // [I] B/Alt+B (_shortcuts.txt:52) -> EV_ShowBBS Init=1, como o btnBBS do SystemMenuWnd (spec 07: BoardWnd)
                    L2Events.Dispatch(new PacketEvents.Event(Ev.EV_ShowBBS, L2Param.Add("", "Init", 1)));
                    return true;
                case "ShowMacroListWindow":
                    // NCConsole::ShowMacroListWnd -> EV_MacroShowListWnd (MacroListWnd.uc)
                    L2Events.Dispatch(new PacketEvents.Event(Ev.EV_MacroShowListWnd, ""));
                    return true;
                case "ApplyMinFrame":
                    // [I] alterna o "manter FPS minimo" (Option.ini [Video] IsKeepMinFrameRate) e avisa com EV_MinFrameRateChanged
                    L2Options.SetBool("Video", "IsKeepMinFrameRate", !L2Options.GetBool("Video", "IsKeepMinFrameRate"));
                    L2Events.Dispatch(new PacketEvents.Event(Ev.EV_MinFrameRateChanged, L2Param.Add("", "MinFrameRate", L2Options.GetBool("Video", "IsKeepMinFrameRate") ? 1 : 0)));
                    return true;
                case "ShowGMPetitionWindow":
                    // [I] a janela de peticao do usuario (UserPetitionWnd.uc registra EV_ShowUserPetitionWnd)
                    L2Events.Dispatch(new PacketEvents.Event(Ev.EV_ShowUserPetitionWnd, ""));
                    return true;
                case "FocusChatWindow":
                    // com o DialogBox aberto o Enter e a acao padrao dele (DoDefaultAction) [I]
                    if (Dialog.Enter()) return true;
                    FocusChat();
                    return true;
                case "ShowPartyBuff":
                    // FUN_10165d00: alterna uma flag e manda EV_ShowBuffIcon com Show (as janelas de grupo ignoram o valor)
                    partyBuffFlag = !partyBuffFlag;
                    L2Events.Dispatch(new PacketEvents.Event(Ev.EV_ShowBuffIcon, L2Param.Add("", "Show", partyBuffFlag ? 1 : 0)));
                    return true;
                case "TabShowInventoryWindow":
                case "ShowInventoryWindow":
                    Inv.Toggle();
                    return true;
                case "ShowMainWindow":
                    if (args.TryGetValue("Tab", out var tab)) OpenMain(System.Math.Max(0, System.Array.IndexOf(MainTabs, tab)));
                    else Main.Toggle();
                    return true;
                case "ShowSystemMenuWindow":
                    SysMenuWnd.Toggle();
                    return true;
                case "ShowChatWindow":
                    if (ChatWnd.Visible) ChatWnd.Hide();
                    else ChatWnd.Show();
                    return true;
                case "SetPrevChatType":
                case "SetNextChatType":
                    CycleChatTab(cmd == "SetNextChatType" ? 1 : -1);
                    return true;
                case "HideAllWindow":
                    Layer.El.gameObject.SetActive(!Layer.El.gameObject.activeSelf);
                    return true;
                case "CloseAllWindow":
                    foreach (var w in new[] { Inv, Main, SysMenuWnd }) w.Hide();
                    Npc.Hide();
                    Shop.Hide();
                    Board.Hide();
                    return true;
                default:
                    return false;
            }
        }

        /// <summary>Alt+PageUp/PageDown: aba anterior/seguinte do chat.</summary>
        void CycleChatTab(int d)
        {
            var i = System.Array.IndexOf(TabNames, chatTab);
            i = ((i < 0 ? 0 : i) + d + TabNames.Length) % TabNames.Length;
            ChatWnd.SelectTab("ChatTabCtrl", i);
        }

        // ------------------------------------------------------------ reuso, buffs, soulshot
        /// <summary>Tempo de recarga de uma skill (MagicSkillUse.reuse), em ms.</summary>
        public void SetReuse(int skillId, double ms)
        {
            if (ms > 0) reuse[skillId] = (LoadTrack.Now() + ms, ms);
        }

        /// <summary>ExAutoSoulShot: liga/desliga o destaque do atalho do item.</summary>
        public void SetAutoShot(int itemId, bool on)
        {
            if (on) autoShots.Add(itemId);
            else autoShots.Remove(itemId);
            RenderBars();
        }

        readonly List<(Text text, double until)> buffTimers = new();

        /// <summary>AbnormalStatusUpdate (EV_AbnormalStatusNormalItem): a categoria Normal (seconds &lt; 0 = sem tempo).</summary>
        public void SetBuffs(IList<AbnormalInfo> list) => SetBuffCategory(buffs, list);

        /// <summary>ShortBuffStatusUpdate (EV_AbnormalStatusShortItem): id 0 limpa.</summary>
        public void SetShortBuffs(IList<AbnormalInfo> list) => SetBuffCategory(shortBuffs, list);

        /// <summary>EtcStatusUpdate (EV_AbnormalStatusEtcItem): estados, sempre sem tempo.</summary>
        public void SetEtcBuffs(IList<AbnormalInfo> list) => SetBuffCategory(etcBuffs, list);

        readonly List<(int skillId, int level, double until)> shortBuffs = new(), etcBuffs = new();

        /// <summary>Cada evento apaga so a sua categoria (ClearStatus(bEtc, bShort)) e so entram itens com SkillID &gt; 0.</summary>
        void SetBuffCategory(List<(int skillId, int level, double until)> cat, IList<AbnormalInfo> list)
        {
            var now = LoadTrack.Now();
            cat.Clear();
            foreach (var b in list)
                if (b.SkillId > 0) cat.Add((b.SkillId, b.Level, b.Seconds < 0 ? double.PositiveInfinity : now + b.Seconds * 1000.0));
            RenderBuffs();
            // IsToggleOn (nw:0x10146830) le a lista de buffs: a moldura das skills de liga/desliga segue a categoria Normal
            if (cat == buffs) RenderBars();
        }

        /// <summary>NCItem::IsToggleSkill: operate_type 3 no Skillgrp, no nivel que o personagem tem (ou 1).</summary>
        bool IsToggleSkill(int id)
        {
            var lv = skills.Find(k => k.Id == id)?.Level ?? 1;
            var r = L2SkillData.Get(id, lv) ?? L2SkillData.Get(id, 1);
            return r != null && ShortcutBar.IsToggleOperateType(r.OperateType);
        }

        /// <summary>
        /// Por quadro (o OnPaint do NCShortcutItemWnd): ToggleEffect a 9 quadros/s e a recarga (cooltime0..359 pelo tempo
        /// decorrido; CooltimeEnd001..009 nos 0,5 s seguintes, com o som do fim uma vez).
        /// </summary>
        void AnimateBars()
        {
            if (!skillTimePreloaded && L2WndUtil.Tex(ShortcutBar.ToggleTex(1)) != null)
            {
                // os 13 + 360 + 9 quadros (32x32) de uma vez, para a varredura nao esperar a carga de cada um
                skillTimePreloaded = true;
                var names = new List<string>();
                for (var i = 1; i <= ShortcutBar.ToggleFrames; i++) names.Add(ShortcutBar.ToggleTex(i));
                for (var i = 0; i < 360; i++) names.Add(ShortcutBar.CoolTex(i));
                for (var i = 1; i <= ShortcutBar.EndFrames; i++) names.Add(ShortcutBar.EndTex(i));
                foreach (var n in names)
                    if (L2WndUtil.Tex(n)?.Url is { } u) L2WndUtil.LoadTex(u);
            }
            var now = LoadTrack.Now();
            var toggleTex = L2WndUtil.Tex(ShortcutBar.ToggleTex(ShortcutBar.ToggleFrame(now / 1000.0)))?.Url;
            foreach (var sc in scSlots)
            {
                if (!sc.Rt.gameObject.activeInHierarchy) continue;
                if (sc.ToggleOn) SetFrame(sc.Toggle, toggleTex);
                string cool = null;
                if (sc.CoolSkill != 0 && reuse.TryGetValue(sc.CoolSkill, out var r))
                {
                    var start = r.until - r.total;
                    var (phase, frame) = ShortcutBar.Cool(start / 1000.0, r.total / 1000.0, now / 1000.0);
                    if (phase == 1) cool = L2WndUtil.Tex(ShortcutBar.CoolTex(frame))?.Url;
                    else if (phase == 2)
                    {
                        cool = L2WndUtil.Tex(ShortcutBar.EndTex(frame))?.Url;
                        if (sc.CoolEndPlayed != start)
                        {
                            sc.CoolEndPlayed = start;
                            L2WndUtil.UiSound(ShortcutBar.CoolEndSound);
                        }
                    }
                }
                if (cool == sc.CoolTex) continue;
                if (cool == null) sc.Cool.enabled = false;
                else if (!SetFrame(sc.Cool, cool)) continue;
                sc.CoolTex = cool;
            }
        }

        bool skillTimePreloaded;

        /// <summary>
        /// Troca o quadro sem esconder a imagem enquanto o proximo carrega (as texturas ficam no cache do Http). false = o
        /// quadro ainda carrega (fica o anterior).
        /// </summary>
        static bool SetFrame(RawImage img, string url)
        {
            if (url == null)
            {
                img.enabled = false;
                return true;
            }
            var task = L2WndUtil.LoadTex(url);
            if (!task.IsCompleted) return false;
            var tx = task.Status == System.Threading.Tasks.TaskStatus.RanToCompletion ? task.Result : null;
            if (img.texture != tx) img.texture = tx;
            img.enabled = tx;
            return true;
        }

        /// <summary>
        /// AbnormalStatusWnd: linhas de 12 das Normal; depois uma linha com as Short (InsertCol: no inicio) e as Etc (AddCol).
        /// </summary>
        void RenderBuffs()
        {
            var box = AbnormalWnd.Get("StatusIcon");
            buffTimers.Clear();
            if (!box) return;
            UiKit.Clear(box);
            var cells = new List<(int skillId, int level, double until, int col, int row)>();
            for (var i = 0; i < buffs.Count; i++) cells.Add((buffs[i].skillId, buffs[i].level, buffs[i].until, i % 12, i / 12));
            var normalRows = (buffs.Count + 11) / 12;
            var last = new List<(int skillId, int level, double until)>();
            for (var i = shortBuffs.Count - 1; i >= 0; i--) last.Insert(0, shortBuffs[i]);
            last.AddRange(etcBuffs);
            for (var i = 0; i < last.Count; i++) cells.Add((last[i].skillId, last[i].level, last[i].until, i, normalRows));
            var cols = 0;
            foreach (var (skillId, level, until, col, row) in cells)
            {
                cols = Math.Max(cols, col + 1);
                // NCStatusIconCtrl (FUN_1004db50): fundo BackTex em Size+2 (26), icone de Size (24) em +1, sem espaco entre os itens
                var d = UiRoot.Box("buff", box, col * 26, row * 26, 26, 26);
                L2WndUtil.Paint(d, "L2UI.EtcWndBack.AbnormalBack", 26, 26);
                var name = $"{GameData.SkillName(skillId, level)} Nv {level}";
                int sid = skillId, slv = level;
                var end = until;
                UiTooltip.SetCustom(d.gameObject, () => BuffTooltip(sid, slv, end), true, name);
                var url = IconUrl(GameData.SkillIcon(skillId));
                if (url != null)
                {
                    var img = UiRoot.Box("icon", d, 1, 1, 24, 24).gameObject.AddComponent<RawImage>();
                    img.raycastTarget = false;
                    L2WndUtil.SetTexture(img, url);
                }
                if (L2SkillData.IsDebuff(skillId, level))
                {
                    // +0x1f7c = IsDebuff: moldura L2UI_CH3.PlayerStatusWnd.debuff (UV 26x26) sobre o icone, e sem numero
                    var fr = UiRoot.Box("debuff", d, 1, 1, 24, 24);
                    L2WndUtil.Paint(fr, "L2UI_CH3.PlayerStatusWnd.debuff", 24, 24, PaintMode.Stretch, 0, 0, 26, 26);
                    continue;
                }
                // tempo restante: so abaixo de 60 s, "%d" em 0xffdcdcdc com alfa 0xCC, (x+7, y+10) com 1 digito e (x+2, y+10) com 2
                // ([?] DrawSpecialDigit usa a fonte de digitos do engine; aqui um texto pequeno)
                var t = UiRoot.Label(d, "", 0, 10, 26, 12, 10, new Color32(0xdc, 0xdc, 0xdc, 0xcc), TextAnchor.UpperLeft);
                t.raycastTarget = false;
                buffTimers.Add((t, until));
            }
            // UpdateWindowSize: largura da grade + 12 (alca), altura da grade; sem linhas, oculta
            var rows = normalRows + (last.Count > 0 ? 1 : 0);
            box.sizeDelta = new Vector2(Math.Max(1, cols) * 26, Math.Max(1, rows) * 26);
            AbnormalWnd.El.sizeDelta = new Vector2(12 + Math.Max(1, cols) * 26, Math.Max(1, rows) * 26);
            AbnormalWnd.SideFrame(Math.Max(1, rows) * 26); // SetFrameSize(12, altura da grade)
            var cg = (AbnormalWnd.El.TryGetComponent<CanvasGroup>(out var __c) ? __c : AbnormalWnd.El.gameObject.AddComponent<CanvasGroup>());
            cg.alpha = rows == 0 ? 0 : 1;
            cg.blocksRaycasts = rows > 0;
            Tick();
        }

        /// <summary>
        /// Tooltip "AbnormalStatus": nome, encantamento, nivel, tempo restante (MakeBuffTimeStr, so fora dos debuffs e com
        /// tempo) e descricao.
        /// </summary>
        static CustomTooltip BuffTooltip(int id, int level, double until)
        {
            var r = L2SkillData.Get(id, level);
            var add = L2TooltipData.EnchantName(id, level);
            var lv = add.Length > 0 && r != null && r.EnchantSkillLevel > 0 ? r.EnchantSkillLevel : level;
            var remain = double.IsInfinity(until) ? -1 : (int)Math.Max(0, Math.Floor((until - LoadTrack.Now()) / 1000));
            return L2Tooltip.AbnormalStatus(GameData.SkillName(id, level), add, lv, L2SkillData.IsDebuff(id, level), remain, L2TooltipData.Skill(id, level)?.Desc ?? "");
        }

        /// <summary>Atualiza contadores (reuso nos atalhos, tempo dos buffs) e o alvo. Chamado algumas vezes por segundo.</summary>
        public void Tick()
        {
            var now = LoadTrack.Now();
            StatusWnd.TickRegen();
            foreach (var (t, until) in buffTimers)
            {
                if (!t) continue;
                var s = "";
                if (!double.IsInfinity(until))
                {
                    var sec = (int)Math.Max(0, Math.Floor((until - now) / 1000));
                    if (sec < 60) s = sec.ToString();
                }
                if (t.text == s) continue;
                t.text = s;
                t.rectTransform.anchoredPosition = new Vector2(s.Length < 2 ? 7 : 2, -10);
            }
            if (target != null) UpdateTarget();
        }

        // ------------------------------------------------------------ radar (UCanvas::DrawRadarBack/DrawRadarEtc: cena 3D, ver RadarView)
        RadarView radar;
        static Texture2D gradTex;

        void BuildRadar()
        {
            var host = RadarWnd.Get("Radar");
            if (!host) return;
            radar = new RadarView(host);
        }

        /// <summary>Desenha o radar com o yaw e o pitch da camera (unidades do UE): disco em perspectiva, alvo e party.</summary>
        public void DrawRadar(float camYaw = 0, float camPitch = 0)
        {
            if (radar == null) return;
            var self = world?.Self;
            var members = new List<Entity>();
            var ps = Party.Big;
            for (var i = 0; i < ps.CurCount && i < ps.Slots.Length; i++)
            {
                var slot = ps.Slots[i];
                if (slot == null || slot.Id == 0 || world == null) continue;
                var e = world.Get(slot.Id);
                if (e != null) members.Add(e);
            }
            radar.Draw(camYaw, camPitch, self, target, members, RadarWnd.Visible);
        }

        // ------------------------------------------------------------ elementos do HUD do main.ts
        RectTransform castBar, castFill;
        Text castText;
        double castT0, castMs;
        RectTransform hudInfo, helpBox, helpText;
        Text hudInfoText;
        UiTexButton helpToggle;
        bool helpOpen;

        /// <summary>Ajuda aberta (H).</summary>
        public bool HelpOpen => helpOpen;

        /// <summary>Caixa de informacoes (posicao, fps...) visivel junto com a ajuda.</summary>
        public bool InfoVisible => hudInfo && hudInfo.gameObject.activeSelf;

        const string HelpText =
            "<b>Clique</b> andar / selecionar · <b>2º clique</b> no alvo ataca/fala · <b>Ctrl+clique</b> força ataque\n" +
            "<b>Botão direito</b> girar câmera · <b>Roda</b> zoom (para trás aproxima, como no L2) · <b>botão do meio/End</b> câmera atrás\n" +
            "<b>W/S/↑/↓</b> andar · <b>A/D/←/→</b> girar · <b>Home/PgUp/PgDn</b> câmeras fixas · <b>segurar o clique</b> segue o cursor\n" +
            "<b>M</b> música liga/desliga · <b>+/−</b> volume · <b>Alt+O</b> opções\n" +
            "<b>R</b> andar/correr · <b>X</b> sentar · <b>Esc</b> cancelar alvo · <b>F1–F12</b> atalhos\n" +
            "<b>I</b>/Alt+V inventário · <b>K</b>/Alt+K skills · <b>C</b>/Alt+T personagem · Alt+C ações · Alt+X menu · Alt+B board · Alt+U amigos · Alt+N clã ·\n" +
            "<b>F1–F12</b> barra 1 · <b>Alt+F1–F12</b> barra 2 · <b>Ctrl+Shift+F1–F12</b> barra 3 · arraste as janelas pela moldura ·\n" +
            "/invite nome · /leave · /dismiss nome · /trade · /friendinvite nome · chat: <b>!</b> grito <b>\"nome</b> sussurro <b>#</b> party <b>@</b> clã <b>+</b> troca ·\n" +
            "menu do sistema (Alt+X): reiniciar / sair";

        static RectTransform HudPanel(Transform parent, string name, Vector2 anchor, Vector2 pos, RectOffset pad)
        {
            var rt = UiRoot.Box(name, parent, 0, 0, 10, 10);
            rt.anchorMin = rt.anchorMax = anchor;
            rt.pivot = anchor;
            rt.anchoredPosition = pos;
            // .panel: fundo rgba(22,24,28,.86), borda 1px rgba(255,255,255,.12)
            var border = rt.gameObject.AddComponent<Image>();
            border.color = new Color(1, 1, 1, 0.12f);
            var inner = UiRoot.Panel(rt, 0, 0, 0, 0, new Color(22 / 255f, 24 / 255f, 28 / 255f, 0.86f));
            inner.name = "back";
            UiRoot.Fill(inner.rectTransform, 1);
            inner.raycastTarget = false;
            inner.gameObject.AddComponent<LayoutElement>().ignoreLayout = true;
            var g = rt.gameObject.AddComponent<VerticalLayoutGroup>();
            g.padding = pad;
            g.childControlWidth = g.childControlHeight = true;
            g.childForceExpandWidth = g.childForceExpandHeight = false;
            var f = rt.gameObject.AddComponent<ContentSizeFitter>();
            f.horizontalFit = f.verticalFit = ContentSizeFitter.FitMode.PreferredSize;
            return rt;
        }

        void BuildHudExtras()
        {
            // barra de cast: centro, 66 px acima da base
            castBar = UiRoot.Box("castBar", Root, 0, 0, 260, 14);
            castBar.anchorMin = castBar.anchorMax = new Vector2(0.5f, 0);
            castBar.pivot = new Vector2(0.5f, 0);
            castBar.anchoredPosition = new Vector2(0, 66);
            var cb = castBar.gameObject.AddComponent<Image>();
            cb.color = new Color(1, 1, 1, 0.12f);
            cb.raycastTarget = false;
            var cin = UiRoot.Panel(castBar, 0, 0, 0, 0, new Color(0, 0, 0, 0.6f));
            UiRoot.Fill(cin.rectTransform, 1);
            cin.raycastTarget = false;
            castFill = UiRoot.Box("castFill", castBar, 1, 1, 0, 12);
            var fill = castFill.gameObject.AddComponent<RawImage>();
            fill.texture = GradTex();
            fill.raycastTarget = false;
            castText = UiRoot.Label(castBar, "", 0, 0, 260, 14, 10, UiKit.TextColor, TextAnchor.MiddleCenter);
            UiKit.AddShadow(castText);
            UiEvents.Of(castBar).OnLateUpdate = CastStep;
            castBar.gameObject.SetActive(false);

            // informacoes de depuracao (escondidas ate abrir a ajuda)
            hudInfo = HudPanel(Root, "hudInfo", new Vector2(1, 0), new Vector2(-8, 60), new RectOffset(10, 10, 8, 8));
            hudInfoText = UiRoot.Label(hudInfo, "", 0, 0, 10, 10, 12, new Color32(0xe8, 0xe6, 0xdf, 0xff), TextAnchor.UpperLeft);
            hudInfoText.horizontalOverflow = HorizontalWrapMode.Overflow;
            hudInfoText.verticalOverflow = VerticalWrapMode.Overflow;
            hudInfoText.supportRichText = false;
            hudInfo.GetComponent<Image>().raycastTarget = false;
            hudInfo.gameObject.SetActive(false);

            // ajuda (H)
            helpBox = HudPanel(Root, "helpBox", new Vector2(1, 1), new Vector2(-8, -112), new RectOffset(8, 8, 4, 4));
            var tg = UiKit.Text(helpBox, "? Controles (H)", 12, UiKit.Accent, FontStyle.Bold);
            tg.horizontalOverflow = HorizontalWrapMode.Overflow;
            tg.raycastTarget = true;
            helpToggle = tg.gameObject.AddComponent<UiTexButton>();
            helpToggle.Label = tg;
            helpToggle.OnClick = ToggleHelp;
            var ht = UiKit.Text(helpBox, HelpText, 12, UiKit.Muted);
            ht.lineSpacing = 1.2f;
            UiKit.Layout(ht, 400);
            helpText = ht.rectTransform;
            helpText.gameObject.SetActive(false);
            // extra do porte: escondida ate o H
            helpBox.gameObject.SetActive(false);
            // .hud (z-index 5) fica embaixo da camada das janelas (.l2layer, z-index 6)
            foreach (var el in new[] { castBar, hudInfo, helpBox }) el.SetSiblingIndex(Layer.El.GetSiblingIndex());
        }

        static Texture2D GradTex()
        {
            if (gradTex) return gradTex;
            // linear-gradient(90deg, #4f7fd8, #8fb6ff)
            gradTex = new Texture2D(2, 1, TextureFormat.RGBA32, false) { hideFlags = HideFlags.DontSave, wrapMode = TextureWrapMode.Clamp, filterMode = FilterMode.Bilinear };
            gradTex.SetPixel(0, 0, new Color32(0x4f, 0x7f, 0xd8, 0xff));
            gradTex.SetPixel(1, 0, new Color32(0x8f, 0xb6, 0xff, 0xff));
            gradTex.Apply();
            return gradTex;
        }

        /// <summary>Barra de cast (MagicSkillUse do proprio personagem): enche em `ms`; 0 esconde.</summary>
        public void ShowCastBar(double ms)
        {
            if (!castBar) return;
            if (ms <= 0)
            {
                castBar.gameObject.SetActive(false);
                return;
            }
            castT0 = LoadTrack.Now();
            castMs = ms;
            castBar.gameObject.SetActive(true);
            CastStep();
        }

        void CastStep()
        {
            if (castMs <= 0) return;
            var k = Math.Min(1, (LoadTrack.Now() - castT0) / castMs);
            castFill.sizeDelta = new Vector2((float)(258 * k), 12);
            castFill.GetComponent<RawImage>().uvRect = new Rect(0, 0, (float)k, 1);
            castText.text = (castMs * (1 - k) / 1000).ToString("0.0", System.Globalization.CultureInfo.InvariantCulture) + " s";
            if (k >= 1)
            {
                castMs = 0;
                castBar.gameObject.SetActive(false);
            }
        }

        /// <summary>Texto da caixa de informacoes (o #hudInfo: posicao, fps, jogadores...).</summary>
        public void SetInfo(string text)
        {
            if (hudInfoText && hudInfoText.text != text) hudInfoText.text = text;
        }

        /// <summary>Abre/fecha a ajuda (H); as informacoes de depuracao aparecem junto.</summary>
        public void ToggleHelp()
        {
            helpOpen = !helpOpen;
            // a caixa de ajuda e extra do porte (nao existe no cliente original): so aparece com H
            helpBox.gameObject.SetActive(helpOpen);
            helpText.gameObject.SetActive(helpOpen);
            hudInfo.gameObject.SetActive(helpOpen);
        }

        /// <summary>Mostra/esconde os elementos do HUD do main.ts (ajuda, barra de cast) junto com a tela do jogo.</summary>
        public void ShowHudExtras(bool on)
        {
            helpBox.gameObject.SetActive(on && helpOpen);
            if (!on)
            {
                hudInfo.gameObject.SetActive(false);
                castBar.gameObject.SetActive(false);
            }
            else hudInfo.gameObject.SetActive(helpOpen);
        }
    }
}
