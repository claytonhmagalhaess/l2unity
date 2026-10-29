// PartyWnd / PartyWndCompact / PartyWndOption (06 §4): os scripts PartyWnd.uc e PartyWndCompact.uc (quase iguais) como
// modelo (PartyScript, testavel sem Unity) e a vista nas janelas do Interface.xdat (PartyView). Os slots 1..7 herdam os
// filhos do PartyStatusWnd0 pelo superName (o UC acessa "PartyWnd.PartyStatusWnd3.PlayerName").
using System;
using System.Collections.Generic;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace L2Web.UI
{
    /// <summary>Tabelas nativas do NWindow usadas pela janela de grupo.</summary>
    public static class PartyNative
    {
        /// <summary>FUN_10147480: estilo da classe (0..15) usado pelo icone e pelo texto do tipo.</summary>
        public static int ClassStyle(int c)
        {
            switch (c)
            {
                case 2: case 3: case 8: case 0x17: case 0x24: case 0x2e: case 0x30: case 0x37: case 0x39: return 0;
                case 9: case 0x18: case 0x25: return 1;
                case 5: case 6: case 0x14: case 0x21: return 2;
                case 0x15: case 0x22: return 3;
                case 0xc: case 0xd: case 0x1b: case 0x28: return 4;
                case 0x10: case 0x11: case 0x1e: case 0x2b: case 0x34: case 0x33: return 5;
                case 0xe: case 0x1c: case 0x29: return 6;
                case 0: case 1: case 4: case 7: case 0x12: case 0x13: case 0x16: case 0x1f: case 0x20: case 0x23: case 0x2c: case 0x2d:
                case 0x2f: case 0x35: case 0x36: case 0x38: return 7;
                case 0x31: case 0x32: case 0x26: case 0x27: case 0x2a: case 0x19: case 0x1a: case 0x1d: case 10: case 0xb: case 0xf: return 8;
                case 0x58: case 0x59: case 0x5d: case 0x65: case 0x6c: case 0x71: case 0x72: case 0x75: case 0x76: return 9;
                case 0x5c: case 0x66: case 0x6d: return 10;
                case 0x5a: case 0x5b: case 99: case 0x6a: return 11;
                case 100: case 0x6b: return 12;
                case 0x5e: case 0x5f: case 0x67: case 0x6e: return 13;
                case 0x61: case 0x62: case 0x69: case 0x70: case 0x74: case 0x73: return 14;
                case 0x60: case 0x68: case 0x6f: return 15;
                default: return 0;
            }
        }

        static readonly string[] Icons =
        {
            "party_styleicon1", "party_styleicon2", "party_styleicon3", "party_styleicon4", "party_styleicon5", "party_styleicon6",
            "party_styleicon7", "party_styleicon1_1", "party_styleicon1_2", "party_styleicon1_3", "party_styleicon2_3",
            "party_styleicon3_3", "party_styleicon4_3", "party_styleicon5_3", "party_styleicon6_3", "party_styleicon7_3",
        };

        /// <summary>GetClassIconName (FUN_1014eb90): textura do estilo.</summary>
        public static string ClassIconName(int classId) => "L2UI_CH3.PartyWnd." + Icons[ClassStyle(classId)];

        /// <summary>GetClassStr (FUN_1014e370): sysstring do estilo (874..880; 7 = 175 Fighter, 8 = 176 Mystic).</summary>
        public static int ClassStrIndex(int classId)
        {
            var s = ClassStyle(classId);
            return s == 7 ? 175 : s == 8 ? 176 : 874 + (s >= 9 ? s - 9 : s);
        }

        /// <summary>GetClassType (FUN_101460d0): nome da classe, sysstring 247 + id (id &lt; 0x58) ou 1071 + id.</summary>
        public static int ClassTypeIndex(int classId) => classId < 0x58 ? 247 + classId : 1071 + classId;

        /// <summary>
        /// GetRoutingString (execGetRoutingString): "S489 : S" com 0 = 487, 1 = 488, 2 = 798, 3 = 799, 4 = 800; outro valor = "".
        /// </summary>
        public static string RoutingString(int type, Func<int, string> ss)
        {
            int[] idx = { 487, 488, 798, 799, 800 };
            return type >= 0 && type < idx.Length ? ss(489) + " : " + ss(idx[type]) : "";
        }
    }

    /// <summary>Um slot (PartyStatusWnd i) como os handles do script o veem.</summary>
    public sealed class PartySlot
    {
        public int Id;
        public string Name = "";
        public string ClassTex = "";
        public string ClassTooltip = "";
        public string LeaderTex = "";
        public string LeaderTooltip = "";
        /// <summary>SetAnchor(slot, "TopCenter", "TopLeft", x, 8) do LeaderIcon (null = ancora do xdat).</summary>
        public int? LeaderX;
        /// <summary>Compacta: dica da janela do slot.</summary>
        public string SlotTooltip = "";
        public int MaxCp, Cp, MaxHp, Hp, MaxMp, Mp;
        public bool Visible;
    }

    /// <summary>PartyWnd.uc (compact = false) ou PartyWndCompact.uc (compact = true).</summary>
    public sealed class PartyScript
    {
        public const int MaxCount = 8;
        public readonly bool Compact;
        public int Height => Compact ? 26 : 46;
        public readonly PartySlot[] Slots = new PartySlot[MaxCount];
        public int CurCount;
        /// <summary>m_CurBf: 0 nada, 1 buffs, 2 debuffs (as grades ficam vazias: EV_PartySpelledList nao tem emissor).</summary>
        public int CurBf;
        /// <summary>Compacta: m_MasterID guardado entre eventos.</summary>
        public int MasterId;
        public bool WindowVisible;
        public int WindowHeight;
        /// <summary>GetOptionBool("Game", "SmallPartyWnd").</summary>
        public Func<bool> SmallPartyWnd = () => false;
        /// <summary>GetTextSize (largura em pixels).</summary>
        public Func<string, int> TextWidth = s => s.Length * 6;
        public Func<int, string> SysString = i => "";
        public Action Changed = () => { };

        public PartyScript(bool compact)
        {
            Compact = compact;
            for (var i = 0; i < MaxCount; i++) Slots[i] = new PartySlot();
        }

        /// <summary>OnEnterState.</summary>
        public void EnterState()
        {
            CurBf = 0;
            ResizeWnd();
        }

        public void OnEvent(int id, string param)
        {
            switch (id)
            {
                case Ev.EV_PartyAddParty: Add(param); break;
                case Ev.EV_PartyUpdateParty: Update(param); break;
                case Ev.EV_PartyDeleteParty: Delete(param); break;
                case Ev.EV_PartyDeleteAllParty:
                case Ev.EV_Restart: Clear(); break;
                case Ev.EV_ShowBuffIcon: NextBuffMode(); break;
                default: return;
            }
            Changed();
        }

        /// <summary>Tooltip do btnBuff: o proximo modo (1496/1497/1498).</summary>
        public string BuffTooltip => SysString(CurBf == 0 ? 1496 : CurBf == 1 ? 1497 : 1498);

        /// <summary>OnBuffButton / HandleShowBuffIcon (o parametro Show e ignorado).</summary>
        public void NextBuffMode()
        {
            CurBf++;
            if (CurBf > 2) CurBf = 0;
        }

        public void Clear()
        {
            for (var i = 0; i < MaxCount; i++) ClearStatus(i);
            CurCount = 0;
            ResizeWnd();
        }

        /// <summary>
        /// Elemento de array estatico como o VM le (execArrayElement do Core.dll): fora dos limites loga "Accessed array out
        /// of bounds" e usa o indice limitado a [0, 7] (thunk_FUN_101146b0).
        /// </summary>
        PartySlot At(int i) => Slots[Math.Max(0, Math.Min(MaxCount - 1, i))];

        void ClearStatus(int i)
        {
            // o Delete chama ClearStatus(m_CurCount): com 8 membros o indice 8 vira o 7
            var s = At(i);
            s.Name = "";
            if (!Compact) s.LeaderTex = "";
            s.ClassTex = "";
            s.MaxCp = s.Cp = s.MaxHp = s.Hp = s.MaxMp = s.Mp = 0;
            s.Id = 0;
        }

        void CopyStatus(int d, int src)
        {
            var a = At(d);
            var b = At(src);
            a.Id = b.Id;
            if (!Compact)
            {
                a.Name = b.Name;
                a.ClassTex = b.ClassTex;
                a.ClassTooltip = b.ClassTooltip;
                a.LeaderTex = b.LeaderTex;
                // defeito do PartyWnd.uc: mede o nome da textura do icone, nao o do jogador
                if (a.LeaderTex.Length > 0) a.LeaderX = -(TextWidth(a.LeaderTex) / 2) - 18;
                a.LeaderTooltip = b.LeaderTooltip;
            }
            else
            {
                a.SlotTooltip = b.SlotTooltip;
                a.ClassTex = b.ClassTex;
                a.ClassTooltip = b.ClassTooltip;
            }
            a.MaxCp = b.MaxCp;
            a.Cp = b.Cp;
            a.MaxHp = b.MaxHp;
            a.Hp = b.Hp;
            a.MaxMp = b.MaxMp;
            a.Mp = b.Mp;
        }

        /// <summary>ResizeWnd: altura = 46 (26) x membros; a PartyWnd aparece sem SmallPartyWnd, a compacta com.</summary>
        public void ResizeWnd()
        {
            var small = SmallPartyWnd();
            if (CurCount > 0)
            {
                WindowHeight = Height * CurCount;
                WindowVisible = Compact ? small : !small;
                for (var i = 0; i < MaxCount; i++) Slots[i].Visible = i <= CurCount - 1;
            }
            else WindowVisible = false;
        }

        public int FindPartyId(int id)
        {
            for (var i = 0; i < MaxCount; i++)
                if (Slots[i].Id == id)
                    return i;
            return -1;
        }

        static int Int(string p, string k)
        {
            var v = 0;
            L2Param.ParseInt(p, k, ref v);
            return v;
        }

        void Add(string p)
        {
            var id = Int(p, "ID");
            if (id <= 0) return;
            CurCount++;
            ResizeWnd();
            At(CurCount - 1).Id = id;
            UpdateStatus(CurCount - 1, p);
        }

        void Update(string p)
        {
            var id = Int(p, "ID");
            if (id > 0) UpdateStatus(FindPartyId(id), p);
        }

        void Delete(string p)
        {
            var id = Int(p, "ID");
            if (id <= 0) return;
            var idx = FindPartyId(id);
            if (idx <= -1) return;
            for (var i = idx; i < CurCount - 1; i++) CopyStatus(i, i + 1);
            // defeito do script: limpa o indice seguinte ao ultimo, antes de decrementar
            ClearStatus(CurCount);
            CurCount--;
            ResizeWnd();
        }

        void UpdateStatus(int idx, string p)
        {
            if (idx < 0 || idx >= MaxCount) return;
            var s = Slots[idx];
            var name = "";
            L2Param.ParseString(p, "Name", ref name);
            var id = Int(p, "ID");
            var classId = Int(p, "ClassID");
            var master = 0;
            var hasMaster = L2Param.ParseInt(p, "MasterID", ref master);
            var classTip = SysString(PartyNative.ClassStrIndex(classId)) + " - " + SysString(PartyNative.ClassTypeIndex(classId));
            if (!Compact)
            {
                s.Name = name;
                if (hasMaster)
                {
                    if (master > 0 && master == id)
                    {
                        s.LeaderTex = "L2UI_CH3.PartyWnd.party_leadericon";
                        s.LeaderTooltip = PartyNative.RoutingString(Int(p, "RoutingType"), SysString);
                        s.LeaderX = -(TextWidth(name) / 2) - 18;
                    }
                    else
                    {
                        s.LeaderTex = "";
                        s.LeaderTooltip = "";
                    }
                }
                s.ClassTooltip = classTip;
            }
            else
            {
                if (hasMaster) MasterId = master;
                var shown = MasterId > 0 && MasterId == id ? name + "(" + SysString(408) + ")" : name;
                s.SlotTooltip = shown;
                // 2 linhas: nome[(Leader)] e, abaixo, "estilo - classe" em (128,128,128)
                s.ClassTooltip = shown + "\n<color=#808080>" + classTip + "</color>";
            }
            s.ClassTex = PartyNative.ClassIconName(classId);
            s.Cp = Int(p, "CurCP");
            s.MaxCp = Int(p, "MaxCP");
            s.Hp = Int(p, "CurHP");
            s.MaxHp = Int(p, "MaxHP");
            s.Mp = Int(p, "CurMP");
            s.MaxMp = Int(p, "MaxMP");
        }

        /// <summary>
        /// OnLButtonDown: PartyWnd entre nX+13 e nX+w-10 -> (idx, ataque com IsPKMode); compacta com X &gt; nX+30. idx =
        /// (Y-nY)/46 (26). -1 fora da faixa.
        /// </summary>
        public int HitSlot(float x, float y, float wx, float wy, float ww)
        {
            var inside = Compact ? x > wx + 30 : x > wx + 13 && x < wx + ww - 10;
            if (!inside) return -1;
            return (int)((y - wy) / Height);
        }

        /// <summary>m_arrID do slot (indice limitado como no VM).</summary>
        public int IdAt(int idx) => At(idx).Id;
    }

    /// <summary>As tres janelas do xdat ligadas aos dois scripts.</summary>
    public sealed class PartyView
    {
        public readonly PartyScript Big = new(false), Small = new(true);
        public readonly L2Wnd BigWnd, SmallWnd, OptionWnd;
        bool optionShow;
        /// <summary>Clique esquerdo num membro: (id, ataque forcado) -> Action/AttackRequest.</summary>
        public Action<int, bool> Action = (_, _) => { };
        /// <summary>Compacta: RequestTargetUser(id).</summary>
        public Action<int> TargetUser = _ => { };
        /// <summary>Botao direito: RequestAssist(id).</summary>
        public Action<int> Assist = _ => { };

        public PartyView(L2Layer layer)
        {
            BigWnd = new L2Wnd("PartyWnd", layer, new WndOpts { Def = Inherited("PartyWnd"), AriaLabel = "Grupo" });
            SmallWnd = new L2Wnd("PartyWndCompact", layer, new WndOpts { Def = Inherited("PartyWndCompact"), AriaLabel = "Grupo" });
            OptionWnd = new L2Wnd("PartyWndOption", layer, new WndOpts { AriaLabel = GameData.SysString(1487, "Party Window Options") });
            foreach (var s in new[] { Big, Small })
            {
                s.SmallPartyWnd = () => L2Options.GetBool("Game", "SmallPartyWnd");
                s.TextWidth = TextWidth;
                s.SysString = i => GameData.SysString(i, "");
                var sc = s;
                s.Changed = () => Render(sc);
            }
            foreach (var ev in new[] { Ev.EV_PartyAddParty, Ev.EV_PartyUpdateParty, Ev.EV_PartyDeleteParty, Ev.EV_PartyDeleteAllParty, Ev.EV_ShowBuffIcon, Ev.EV_Restart })
            {
                var id = ev;
                L2Events.Register(id, p =>
                {
                    Big.OnEvent(id, p);
                    Small.OnEvent(id, p);
                });
            }
            // o clique no btnBuff de uma janela chama tambem o OnBuffButton da outra
            void Buff()
            {
                Big.NextBuffMode();
                Small.NextBuffMode();
                Render(Big);
                Render(Small);
            }
            BigWnd.OnClick("btnBuff", Buff);
            SmallWnd.OnClick("btnBuff", Buff);
            BigWnd.OnClick("btnCompact", () => ToggleOption(BigWnd));
            SmallWnd.OnClick("btnOption", () => ToggleOption(SmallWnd));
            OptionWnd.OnClick("okbtn", () =>
            {
                var ck = OptionWnd.Check("ShowSmallPartyWndCheck");
                L2Options.SetBool("Game", "SmallPartyWnd", ck && ck.isOn);
                L2Options.Save();
                // SwapBigandSmall: a compacta ancorada no TopLeft da grande, depois ResizeWnd nas duas
                SmallWnd.Moved = BigWnd.Moved ?? new Vector2(BigWnd.ScreenRect().X, BigWnd.ScreenRect().Y);
                Big.ResizeWnd();
                Small.ResizeWnd();
                Render(Big);
                Render(Small);
                OptionWnd.Hide();
                optionShow = false;
            });
            OptionWnd.OnShow += () =>
            {
                var ck = OptionWnd.Check("ShowSmallPartyWndCheck");
                if (ck) ck.SetIsOnWithoutNotify(L2Options.GetBool("Game", "SmallPartyWnd"));
                optionShow = true;
            };
            OptionWnd.OnClose += () => optionShow = false;
            Clicks(BigWnd, Big);
            Clicks(SmallWnd, Small);
            Tooltips(BigWnd, Big);
            Tooltips(SmallWnd, Small);
            // PartyWndCompact.OnLoad: m_ClassIcon[0].Move(0, 7) (fica abaixo do btnOption)
            // NameCtrl.SetName(nome, NCT_Normal, TA_Center)
            for (var i = 0; i < PartyScript.MaxCount; i++)
            {
                var t = BigWnd.TextEl("PlayerName" + i);
                if (t) t.alignment = TextAnchor.MiddleCenter;
            }
            var ic0 = SmallWnd.Get("ClassIcon0");
            if (ic0) ic0.anchoredPosition += new Vector2(0, -7);
            Render(Big);
            Render(Small);
        }

        /// <summary>ShowPartyWndOption (alterna) e a ancora TopRight(+5,+5) do slot 0 da janela que pediu.</summary>
        void ToggleOption(L2Wnd from)
        {
            if (!optionShow)
            {
                var r = from.ScreenRect();
                var slot = from.Rect("PartyStatusWnd0");
                OptionWnd.Moved = new Vector2(r.X + slot.X + slot.W + 5, r.Y + slot.Y + 5);
                OptionWnd.Show();
            }
            else OptionWnd.Hide();
        }

        void Clicks(L2Wnd w, PartyScript s)
        {
            var ev = UiEvents.Of(w.El);
            var front = ev.OnDown;
            Vector2 Ui(PointerEventData e) => new(e.position.x / UiRoot.PixelScale, UiRoot.Size.y - e.position.y / UiRoot.PixelScale);
            ev.OnDown = e =>
            {
                front?.Invoke(e);
                if (e.button != PointerEventData.InputButton.Left) return;
                var p = Ui(e);
                var r = w.ScreenRect();
                var idx = s.HitSlot(p.x, p.y, r.X, r.Y, r.W);
                if (idx < 0) return;
                if (s.Compact) TargetUser(s.IdAt(idx));
                else Action(s.IdAt(idx), UnityEngine.InputSystem.Keyboard.current?.ctrlKey.isPressed ?? false);
            };
            ev.OnUp = e =>
            {
                if (e.button != PointerEventData.InputButton.Right) return;
                var p = Ui(e);
                var r = w.ScreenRect();
                var idx = s.HitSlot(p.x, p.y, r.X, r.Y, r.W);
                if (idx >= 0) Assist(s.IdAt(idx));
            };
        }

        /// <summary>
        /// Dicas dos controles sob o mouse (icone de classe, icone de lider, janela do slot na compacta): uma so dica na
        /// janela, para os cliques continuarem chegando ao OnLButtonDown/OnRButtonUp dela.
        /// </summary>
        void Tooltips(L2Wnd w, PartyScript s)
        {
            var tip = w.El.gameObject.AddComponent<UiTooltip>();
            UiEvents.Of(w.El).OnLateUpdate += () =>
            {
                if (!w.Visible || UnityEngine.InputSystem.Mouse.current == null) return;
                var mp = UnityEngine.InputSystem.Mouse.current.position.ReadValue();
                var p = new Vector2(mp.x / UiRoot.PixelScale, UiRoot.Size.y - mp.y / UiRoot.PixelScale);
                var r = w.ScreenRect();
                tip.Change(TooltipAt(w, s, p.x - r.X, p.y - r.Y));
            };
        }

        static bool Inside(L2Wnd w, string ctrl, float x, float y)
        {
            var el = w.Get(ctrl);
            if (!el || !el.gameObject.activeInHierarchy) return false;
            var root = w.El.position;
            var c = el.position;
            var k = UiRoot.PixelScale;
            float lx = (c.x - root.x) / k, ly = -(c.y - root.y) / k;
            return x >= lx && y >= ly && x < lx + el.sizeDelta.x && y < ly + el.sizeDelta.y;
        }

        static string TooltipAt(L2Wnd w, PartyScript s, float x, float y)
        {
            for (var i = 0; i < PartyScript.MaxCount; i++)
            {
                var sl = s.Slots[i];
                if (!sl.Visible || s.CurCount == 0) continue;
                if (sl.ClassTex.Length > 0 && Inside(w, "ClassIcon" + i, x, y)) return sl.ClassTooltip;
                if (!s.Compact && sl.LeaderTex.Length > 0 && Inside(w, "LeaderIcon" + i, x, y)) return sl.LeaderTooltip;
                if (s.Compact && Inside(w, "PartyStatusWnd" + i, x, y)) return sl.SlotTooltip;
            }
            return "";
        }

        /// <summary>OnEnterState das duas janelas (ao entrar no mundo).</summary>
        public void EnterState()
        {
            Big.EnterState();
            Small.EnterState();
            Render(Big);
            Render(Small);
        }

        static int TextWidth(string s)
        {
            var gs = new TextGenerationSettings
            {
                font = UiRoot.Font, fontSize = 11, scaleFactor = 1, richText = false, horizontalOverflow = HorizontalWrapMode.Overflow,
                verticalOverflow = VerticalWrapMode.Overflow, generationExtents = new Vector2(1000, 100), pivot = Vector2.zero,
            };
            return Mathf.RoundToInt(new TextGenerator().GetPreferredWidth(s ?? "", gs));
        }

        void Render(PartyScript s)
        {
            var w = s.Compact ? SmallWnd : BigWnd;
            if (w == null) return;
            UiTooltip.Set(w.Get("btnBuff")?.gameObject, s.BuffTooltip);
            if (s.WindowVisible)
            {
                w.SetWindowSize(w.Size[0], s.WindowHeight);
                if (!w.Visible) w.Show();
            }
            else w.Hide();
            for (var i = 0; i < PartyScript.MaxCount; i++)
            {
                var sl = s.Slots[i];
                w.ShowCtrl("PartyStatusWnd" + i, sl.Visible && s.CurCount > 0);
                if (!s.Compact) w.Text("PlayerName" + i, sl.Name);
                SetTex(w, "ClassIcon" + i, sl.ClassTex, 11, 11);
                if (!s.Compact)
                {
                    SetTex(w, "LeaderIcon" + i, sl.LeaderTex, 11, 11);
                    var li = w.Get("LeaderIcon" + i);
                    if (li && sl.LeaderX is int lx)
                    {
                        var slot = w.Rect("PartyStatusWnd" + i);
                        li.anchoredPosition = new Vector2(slot.W / 2 + lx, -8);
                    }
                }
                w.Bar("barCP" + i, sl.Cp, sl.MaxCp);
                w.Bar("barHP" + i, sl.Hp, sl.MaxHp);
                w.Bar("barMP" + i, sl.Mp, sl.MaxMp);
            }
        }

        static void SetTex(L2Wnd w, string ctrl, string tex, float wd, float h)
        {
            var el = w.Get(ctrl);
            if (!el) return;
            if (string.IsNullOrEmpty(tex) || L2WndUtil.Tex(tex) == null)
            {
                L2WndUtil.Bg(el).enabled = false;
                return;
            }
            L2WndUtil.Paint(el, tex, wd, h, PaintMode.Normal);
        }

        /// <summary>
        /// Definicao da janela com os filhos do PartyStatusWnd0 copiados para os slots 1..7 (superName) e todos os filhos
        /// dos slots com o indice no nome (PlayerName3), para o L2Wnd achar cada um.
        /// </summary>
        public static L2Ctrl Inherited(string wnd)
        {
            var d = L2WndUtil.WindowDef(wnd);
            if (d == null) return null;
            var slot0 = d.Children.Find(c => c.Name == "PartyStatusWnd0");
            var kids = new List<L2Ctrl>();
            foreach (var c in d.Children)
            {
                if (c.Type != "Window" || !c.Name.StartsWith("PartyStatusWnd") || slot0 == null)
                {
                    kids.Add(c);
                    continue;
                }
                var i = c.Name.Substring("PartyStatusWnd".Length);
                var sub = new List<L2Ctrl>();
                foreach (var k in slot0.Children)
                {
                    var j = (JObject)k.J.DeepClone();
                    j["name"] = k.Name + i;
                    j["parent"] = c.Name;
                    sub.Add(new L2Ctrl { J = j, Children = new List<L2Ctrl>() });
                }
                kids.Add(new L2Ctrl { J = c.J, Children = sub });
            }
            return new L2Ctrl { J = d.J, Children = kids };
        }
    }
}
