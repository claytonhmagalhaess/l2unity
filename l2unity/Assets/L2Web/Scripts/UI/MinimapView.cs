// MinimapWnd / MinimapWnd_Expand (03): as janelas do xdat com os scripts (MinimapScript) e o MinimapCtrl desenhado como o
// NCMinimapWnd::OnPaint (0x101895c0): mapa (mundi em 6 texturas 1:1 ou de cidade), icones de arma amaldicoada, grade,
// membros do grupo, o proprio marcador, alvos; botoes "+" das cidades; arrasto com o botao esquerdo.
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class MinimapCtrlView
    {
        public readonly MinimapModel M;
        readonly RectTransform root, mapLayer, gridLayer, iconLayer, markLayer, btnLayer;
        readonly RectTransform[] world = new RectTransform[6];
        readonly RectTransform town;
        readonly RawImage me;
        readonly RectTransform[] party = new RectTransform[8];
        readonly List<RectTransform> targets = new(), lines = new(), icons = new();
        readonly List<Text> labels = new();
        readonly List<UiTexButton> plus = new();
        readonly Text hover;
        int townShown = -1;
        Vector2? last;
        int lastMinute = -1;
        /// <summary>Membros do grupo com posicao (PartyMemberPosition 0xa7): id, x, y, nome.</summary>
        public Func<IEnumerable<(int id, int x, int y, string name)>> Party = () => Array.Empty<(int, int, int, string)>();
        /// <summary>Rotation.Yaw do PlayerController (unidades do Unreal).</summary>
        public Func<float> Yaw = () => 0;
        public Func<string> PlayerName = () => "";
        /// <summary>Hora do jogo em horas (global+0x50 -> +0x6c -> +0x134).</summary>
        public Func<double> GameHours = () => 0;
        /// <summary>Icones da grade (DrawGridIcon): textura, x, y, celula, recorte, dica.</summary>
        public readonly List<(string tex, int x, int y, int gx, int gy, int w, int h, string tip)> GridIcons = new();

        public MinimapCtrlView(RectTransform el, MinimapModel m)
        {
            M = m;
            root = el;
            var hit = el.gameObject.GetComponent<Image>() ?? el.gameObject.AddComponent<Image>();
            hit.color = new Color(0, 0, 0, 0);
            el.gameObject.AddComponent<RectMask2D>();
            RectTransform Layer(string n) => UiRoot.Box(n, el, 0, 0, M.W, M.H);
            mapLayer = Layer("map");
            for (var i = 0; i < 6; i++)
            {
                world[i] = UiRoot.Box("int_worldmap" + (i + 1), mapLayer, 0, 0, 1024, 1024);
                L2WndUtil.Paint(world[i], "L2Font-e.Minimap.int_worldmap" + (i + 1), 1024, 1024, PaintMode.Normal);
            }
            town = UiRoot.Box("townmap", mapLayer, 0, 0, 1024, 1024);
            iconLayer = Layer("cursed");
            gridLayer = Layer("grid");
            markLayer = Layer("marks");
            for (var i = 0; i < party.Length; i++)
            {
                party[i] = UiRoot.Box("party" + i, markLayer, 0, 0, 16, 16);
                var img = L2WndUtil.Paint(party[i], "L2UI_CH3.Minimap.minimap_party", 16, 16, PaintMode.Normal);
                if (img) img.raycastTarget = true;
                party[i].gameObject.SetActive(false);
            }
            var meBox = UiRoot.Box("MinimapPos", markLayer, 0, 0, 32, 32);
            meBox.pivot = new Vector2(0.5f, 0.5f);
            me = L2WndUtil.Paint(meBox, "L2UI.MinimapWnd.MinimapPos", 32, 32, PaintMode.Normal);
            btnLayer = Layer("townbuttons");
            for (var i = 0; i < m.TownMaps.Count; i++)
            {
                var b = UiRoot.Box("plus" + i, btnLayer, 0, 0, 26, 26);
                var tb = L2WndUtil.Button(b, "L2UI_CH3.Minimap.MapButton_ZoomIn1", "L2UI_CH3.Minimap.MapButton_ZoomIn2", null, 26, 26);
                var k = i;
                tb.OnClick = () =>
                {
                    M.TownButtonClick(k);
                    Refresh();
                };
                plus.Add(tb);
            }
            hover = UiRoot.Label(el, "", 0, 0, 300, 14, 11, new Color32(0xdc, 0xdc, 0xdc, 0xff));
            hover.horizontalOverflow = HorizontalWrapMode.Overflow;
            UiKit.AddShadow(hover);
            var ev = UiEvents.Of(el);
            Vector2 Local(PointerEventData e)
            {
                RectTransformUtility.ScreenPointToLocalPointInRectangle(el, e.position, null, out var lp);
                return new Vector2(lp.x - el.rect.xMin, el.rect.yMax - lp.y);
            }
            // OnLButtonDown guarda o ponto (0 < x <= W, 0 < y <= H); OnMouseMove com o botao arrasta; OnLButtonUp so solta
            ev.OnDown = e =>
            {
                if (e.button != PointerEventData.InputButton.Left) return;
                var p = Local(e);
                if (p.x > 0 && p.x <= M.W && p.y > 0 && p.y <= M.H) last = p;
            };
            ev.OnBeginDrag = _ => { };
            ev.OnDrag = e =>
            {
                if (last is not Vector2 l || e.button != PointerEventData.InputButton.Left) return;
                var p = Local(e);
                if (p.x < 1 || p.x > M.W || p.y < 1 || p.y > M.H)
                {
                    last = p;
                    return;
                }
                M.Drag((int)(l.x - p.x), (int)(l.y - p.y));
                last = p;
                Refresh(true);
            };
            ev.OnUp = _ => last = null;
            ev.OnLateUpdate = () =>
            {
                if (root.gameObject.activeInHierarchy) Refresh();
            };
        }

        static void Place(RectTransform r, float x, float y) => r.anchoredPosition = new Vector2(x, -y);

        /// <summary>OnPaint: desenha tudo na vista atual.</summary>
        public void Refresh(bool dragging = false)
        {
            var townMap = M.CurMap != 0 ? M.TownMaps.Find(t => t.key == M.CurMap).rec : null;
            for (var i = 0; i < 6; i++)
            {
                world[i].gameObject.SetActive(townMap == null);
                Place(world[i], i % 2 * 1024 - M.ViewX, i / 2 * 1024 - M.ViewY);
            }
            town.gameObject.SetActive(townMap != null);
            if (townMap != null)
            {
                if (townShown != M.CurMap)
                {
                    townShown = M.CurMap;
                    town.sizeDelta = new Vector2(townMap.TownMapWidth, townMap.TownMapHeight);
                    L2WndUtil.Paint(town, "L2Font-e.TownMap." + townMap.TownMapTex, townMap.TownMapWidth, townMap.TownMapHeight, PaintMode.Normal);
                }
                Place(town, -M.ViewX, -M.ViewY);
            }
            DrawCursed(townMap == null);
            DrawGrid(townMap == null && M.ShowGrid);
            DrawParty();
            var (px, py, shown) = M.MyLocation();
            if (me)
            {
                var rt = me.rectTransform.parent as RectTransform;
                rt.gameObject.SetActive(shown);
                rt.anchoredPosition = new Vector2(px, -py);
                // DrawMinimapLoc: o topo da textura aponta para (cos yaw, sin yaw) com y para baixo
                rt.localEulerAngles = new Vector3(0, 0, -(Yaw() * 360f / 65536f + 90f));
            }
            DrawTargets();
            DrawQuestTarget();
            foreach (var (i, bx, by, on) in M.TownButtons(dragging))
            {
                plus[i].gameObject.SetActive(on);
                Place((RectTransform)plus[i].transform, bx, by);
            }
            // dica do proprio marcador (OnMouseMove: a 10 px dele, dentro da margem): caixa em (px, py + 10)
            var mp = UnityEngine.InputSystem.Mouse.current?.position.ReadValue();
            var near = false;
            if (mp is Vector2 sp && shown && RectTransformUtility.ScreenPointToLocalPointInRectangle(root, sp, null, out var lp))
            {
                var mx = lp.x - root.rect.xMin;
                var my = root.rect.yMax - lp.y;
                near = Math.Abs(mx - px) <= 10 && Math.Abs(my - py) <= 10;
            }
            hover.gameObject.SetActive(near);
            if (near)
            {
                hover.text = PlayerName();
                var tw = hover.preferredWidth;
                var th = hover.preferredHeight;
                float bx = px, by = py + 10;
                if (bx + tw + 16 > M.W - 5) bx = (int)(M.W - 21 - tw);
                if (by + th + 16 > M.H - 5) by = (int)(M.H - 21 - th);
                Place(hover.rectTransform, bx + 8, by + 8);
                hover.transform.SetAsLastSibling();
            }
            // hora do jogo: EV_MinimapUpdateGameTime quando o minuto muda (so enquanto o controle e pintado)
            var t = GameHours();
            var h = (int)t;
            var m = (int)((t - h) * 60);
            if (m >= 60)
            {
                m -= 60;
                h++;
            }
            if (m != lastMinute)
            {
                lastMinute = m;
                L2Events.Dispatch(new PacketEvents.Event(Ev.EV_MinimapUpdateGameTime, L2Param.Add(L2Param.Add("", "GameHour", h), "GameMinute", m)));
            }
        }

        void DrawGrid(bool on)
        {
            gridLayer.gameObject.SetActive(on);
            if (!on) return;
            var (cols, rows) = M.Grid();
            int li = 0, ti = 0;
            RectTransform Line()
            {
                if (li < lines.Count) return lines[li++];
                var img = UiRoot.Panel(gridLayer, 0, 0, 1, 1, new Color(0, 0, 0, 0x40 / 255f));
                img.raycastTarget = false;
                lines.Add(img.rectTransform);
                li++;
                return img.rectTransform;
            }
            Text Label()
            {
                if (ti < labels.Count) return labels[ti++];
                var t = UiRoot.Label(gridLayer, "", 0, 0, 40, 14, 11, new Color32(0xdc, 0xdc, 0xdc, 0xff));
                t.horizontalOverflow = HorizontalWrapMode.Overflow;
                t.raycastTarget = false;
                labels.Add(t);
                ti++;
                return t;
            }
            foreach (var (x, lab) in cols)
            {
                float th = 12;
                if (lab != null)
                {
                    var t = Label();
                    t.text = lab;
                    th = t.preferredHeight;
                    Place(t.rectTransform, x - t.preferredWidth / 2, 2);
                    t.gameObject.SetActive(true);
                }
                var l = Line();
                l.sizeDelta = new Vector2(1, Mathf.Max(0, M.H - th));
                Place(l, x, th);
                l.gameObject.SetActive(true);
            }
            foreach (var (y, lab) in rows)
            {
                float tw = 12;
                if (lab != null)
                {
                    var t = Label();
                    t.text = lab;
                    tw = t.preferredWidth;
                    Place(t.rectTransform, 0, y - t.preferredHeight / 2);
                    t.gameObject.SetActive(true);
                }
                var l = Line();
                l.sizeDelta = new Vector2(Mathf.Max(0, M.W - tw), 1);
                Place(l, tw, y);
                l.gameObject.SetActive(true);
            }
            for (var i = li; i < lines.Count; i++) lines[i].gameObject.SetActive(false);
            for (var i = ti; i < labels.Count; i++) labels[i].gameObject.SetActive(false);
        }

        void DrawParty()
        {
            var n = 0;
            foreach (var (_, x, y, name) in Party())
            {
                var (px, py, shown) = M.Marker(x, y);
                if (n < party.Length && shown)
                {
                    party[n].gameObject.SetActive(true);
                    Place(party[n], px, py);
                    UiTooltip.Set(party[n].gameObject, name);
                    n++;
                }
            }
            for (var i = n; i < party.Length; i++) party[i].gameObject.SetActive(false);
        }

        RectTransform questMark;

        /// <summary>
        /// DrawQuestTarget (10189490): com o SetShowQuest e o x/y/z do alvo nao todos 0, MapIcon_Mark 32 x 32 em (px, py - 20), sem
        /// teste de margem. Dica: o nome do alvo e o nome da quest (so com id &gt; 0) [I: a caixa do nativo virou a dica do porte].
        /// </summary>
        void DrawQuestTarget()
        {
            var q = MinimapModel.Quest;
            var on = M.ShowQuest && !(q.x == 0 && q.y == 0 && q.z == 0);
            if (!on)
            {
                if (questMark) questMark.gameObject.SetActive(false);
                return;
            }
            if (!questMark)
            {
                questMark = UiRoot.Box("QuestMark", markLayer, 0, 0, 32, 32);
                var img = L2WndUtil.Paint(questMark, "L2UI_CH3.Minimap.MapIcon_Mark", 32, 32, PaintMode.Normal);
                if (img) img.raycastTarget = true;
            }
            var (px, py) = M.TargetPos((int)q.x, (int)q.y, M.CurMap);
            questMark.gameObject.SetActive(true);
            Place(questMark, px - M.ViewX, py - M.ViewY - 20);
            var name = q.questId > 0 ? QuestData.Client.Name(q.questId) : "";
            UiTooltip.Set(questMark.gameObject, name.Length > 0 ? q.name + "\n" + name : q.name);
        }

        void DrawTargets()
        {
            var n = 0;
            foreach (var (x, y, _) in M.Targets)
            {
                var (px, py, shown) = M.Marker(x, y);
                if (!shown) continue;
                if (n >= targets.Count)
                {
                    var b = UiRoot.Box("TargetPos", markLayer, 0, 0, 32, 32);
                    L2WndUtil.Paint(b, "L2UI.MinimapWnd.TargetPos", 32, 32, PaintMode.Normal);
                    targets.Add(b);
                }
                targets[n].gameObject.SetActive(true);
                Place(targets[n], px - 16, py - 31);
                n++;
            }
            for (var i = n; i < targets.Count; i++) targets[i].gameObject.SetActive(false);
        }

        /// <summary>
        /// DrawGridIcon (0x10188d90): celula de 61 px no mapa-mundi, recorte (61 - 2*xOff) x (61 - 2*yOff) sem escala; um icone
        /// na mesma celula de outro troca para a textura de "repetido" e tira os anteriores daquela celula.
        /// </summary>
        public void DrawGridIcon(string icon, string dupIcon, int x, int y, bool refresh, int xOff, int yOff, string tip)
        {
            if (refresh) GridIcons.Clear();
            var (px, py) = M.TargetPos(x, y, 0);
            var gx = (int)(px / 61.0);
            var gy = (int)(py / 61.0);
            var dup = false;
            for (var i = 0; i < GridIcons.Count; i++)
                if (GridIcons[i].gx == gx && GridIcons[i].gy == gy)
                {
                    GridIcons.RemoveAt(i);
                    dup = true;
                }
            var tex = dup ? dupIcon : icon;
            if (L2WndUtil.Tex(tex) == null) return;
            GridIcons.Add((tex, gx * 61 + xOff, gy * 61 + yOff, gx, gy, 61 - 2 * xOff, 61 - 2 * yOff, (tip ?? "").Replace("\\n", "\n")));
        }

        void DrawCursed(bool on)
        {
            iconLayer.gameObject.SetActive(on);
            var n = 0;
            foreach (var e in GridIcons)
            {
                var rx = e.x - M.ViewX;
                var ry = e.y - M.ViewY;
                if (!(-61 <= rx && rx < M.W + 61 && -61 <= ry && ry < M.H + 61)) continue;
                if (n >= icons.Count) icons.Add(UiRoot.Box("cursed", iconLayer, 0, 0, 61, 61));
                var b = icons[n++];
                b.sizeDelta = new Vector2(e.w, e.h);
                L2WndUtil.Paint(b, e.tex, e.w, e.h, PaintMode.Normal);
                Place(b, rx, ry);
                b.gameObject.SetActive(true);
                var img = L2WndUtil.Bg(b);
                img.raycastTarget = true;
                UiTooltip.Set(b.gameObject, e.tip);
            }
            for (var i = n; i < icons.Count; i++) icons[i].gameObject.SetActive(false);
        }
    }

    /// <summary>As duas janelas do mapa ligadas aos scripts e aos eventos.</summary>
    public sealed class MinimapView
    {
        public readonly MinimapScript S = new();
        public L2Wnd Normal, Expand;
        public MinimapCtrlView NormalCtrl, ExpandCtrl;
        readonly L2Layer layer;
        Vector2 expandFor;
        public Func<(int x, int y, int z)> Player = () => (0, 0, 0);
        public Func<int> PartyCount = () => 0;
        public Func<int, (int x, int y, int z)?> PartyMemberLocation = _ => null;
        public Action<byte[]> Send = _ => { };
        public Func<IEnumerable<(int id, int x, int y, string name)>> Party = () => Array.Empty<(int, int, int, string)>();
        public Func<float> Yaw = () => 0;
        public Func<string> PlayerName = () => "";
        public Func<double> GameHours = () => 0;

        public MinimapView(L2Layer layer)
        {
            this.layer = layer;
            S.SysString = i => GameData.SysString(i, "");
            Normal = new L2Wnd("MinimapWnd", layer, new WndOpts { AriaLabel = GameData.SysString(447, "Map") });
            NormalCtrl = Ctrl(Normal);
            Bind(Normal, NormalCtrl, false);
            L2Events.Register(Ev.EV_ShowMinimap, p =>
            {
                var was = (S.NormalVisible, S.ExpandVisible);
                var any = S.ShowMinimap(p);
                Apply(was);
                if (any)
                {
                    // MiniMapAPI.RequestCursedWeaponList / RequestCursedWeaponLocation
                    Send(new Net.PacketWriter().C(0xd0).H(0x22).Bytes());
                    Send(new Net.PacketWriter().C(0xd0).H(0x23).Bytes());
                }
            });
            L2Events.Register(Ev.EV_MinimapShowReduceBtn, _ => ReduceBtn(true));
            // MinimapWnd.uc:267-279: SetShowQuest
            foreach (var (ev, show) in new[] { (Ev.EV_MinimapShowQuest, true), (Ev.EV_MinimapHideQuest, false) })
                L2Events.Register(ev, _ =>
                {
                    NormalCtrl.M.ShowQuest = show;
                    NormalCtrl.Refresh();
                    if (ExpandCtrl != null)
                    {
                        ExpandCtrl.M.ShowQuest = show;
                        if (Expand.Visible) ExpandCtrl.Refresh();
                    }
                });
            L2Events.Register(Ev.EV_MinimapHideReduceBtn, _ => ReduceBtn(false));
            L2Events.Register(Ev.EV_MinimapUpdateGameTime, p =>
            {
                int h = 0, m = 0;
                L2Param.ParseInt(p, "GameHour", ref h);
                L2Param.ParseInt(p, "GameMinute", ref m);
                foreach (var w in Wnds())
                {
                    w.ShowCtrl("texSun", MinimapScript.Sun(h));
                    w.ShowCtrl("texMoon", !MinimapScript.Sun(h));
                    w.Text("txtGameTime", MinimapScript.TimeText(h, m));
                }
            });
            L2Events.Register(Ev.EV_BeginShowZoneTitleWnd, _ => SetCurrentLocation());
            L2Events.Register(Ev.EV_PartyMemberChanged, p =>
            {
                var n = 0;
                L2Param.ParseInt(p, "PartyMemberCount", ref n);
                S.PartyMemberCount = n;
            });
            L2Events.Register(Ev.EV_MinimapCursedWeaponList, p =>
            {
                Combo(Normal, S.CursedList(p, false));
                if (Expand != null && Expand.Visible) Combo(Expand, S.CursedList(p, true));
                NormalCtrl.M.Targets.Clear();
                if (Expand != null && Expand.Visible) ExpandCtrl.M.Targets.Clear();
            });
            L2Events.Register(Ev.EV_MinimapCursedWeaponLocation, p => CursedLocation(p, NormalCtrl, Normal));
        }

        IEnumerable<L2Wnd> Wnds()
        {
            yield return Normal;
            if (Expand != null) yield return Expand;
        }

        /// <summary>Clear + AddStringWithReserved; o SetSelectedNum(0) vem junto com cada item depois do titulo.</summary>
        static void Combo(L2Wnd w, List<(string text, int reserved)> items)
        {
            var c = w.Combo("CursedComboBox");
            if (c == null) return;
            var l = new List<string>();
            foreach (var (t, _) in items) l.Add(t);
            c.SetItems(l);
            if (l.Count > 1) c.Select(0);
        }

        MinimapCtrlView Ctrl(L2Wnd w)
        {
            var el = w.Get("Minimap");
            var r = w.Rect("Minimap");
            var m = new MinimapModel(L2Zone.Instance, r.W, r.H) { Player = () => Player() };
            m.ReduceBtn = on => L2Events.Dispatch(new PacketEvents.Event(on ? Ev.EV_MinimapShowReduceBtn : Ev.EV_MinimapHideReduceBtn, ""));
            return new MinimapCtrlView(el, m)
            {
                Party = () => Party(), Yaw = () => Yaw(), PlayerName = () => PlayerName(), GameHours = () => GameHours(),
            };
        }

        void ReduceBtn(bool on)
        {
            foreach (var w in Wnds()) w.ShowCtrl("btnReduce", on);
        }

        void SetCurrentLocation()
        {
            var name = L2Zone.Instance?.Current?.Name ?? "";
            foreach (var w in Wnds()) w.Text("txtVarCurLoc", name);
        }

        void Bind(L2Wnd w, MinimapCtrlView c, bool expand)
        {
            w.ShowCtrl("btnReduce", false);
            w.OnShow += () =>
            {
                // NCMinimapWnd::ShowWindow sempre esconde o botao de reduzir; OnShow: AdjustMapToPlayerPosition(true)
                ReduceBtn(false);
                var p = Player();
                c.M.AdjustMapView(p.x, p.y, p.z);
                w.Text("txtVarSSQType", S.SsqText);
                SetCurrentLocation();
                L2WndUtil.UiSound("interfacesound.Interface.map_open_01");
                c.Refresh();
            };
            w.OnClose += () =>
            {
                L2WndUtil.UiSound("interfacesound.Interface.map_close_01");
                if (expand) S.ExpandVisible = false;
                else S.NormalVisible = false;
            };
            w.OnClick("MyLocButton", () =>
            {
                var p = Player();
                c.M.AdjustMapView(p.x, p.y, p.z);
            });
            w.OnClick("PartyLocButton", () =>
            {
                var i = S.NextPartyLoc(PartyCount());
                if (i >= 0 && PartyMemberLocation(i) is { } loc) c.M.AdjustMapView(loc.x, loc.y, loc.z, false);
            });
            w.OnClick("btnReduce", () =>
            {
                c.M.ReduceClick();
                w.ShowCtrl("btnReduce", false);
            });
            w.OnClick("Pursuit", () =>
            {
                S.AdjustCursedLoc = true;
                Send(new Net.PacketWriter().C(0xd0).H(0x23).Bytes());
            });
            w.OnClick("ExpandButton", () =>
            {
                S.ExpandState = true;
                var was = (S.NormalVisible, S.ExpandVisible);
                S.NormalVisible = false;
                S.ExpandVisible = true;
                Apply(was);
            });
            w.OnClick("CollapseButton", () =>
            {
                S.ExpandState = false;
                var was = (S.NormalVisible, S.ExpandVisible);
                S.ExpandVisible = false;
                S.NormalVisible = true;
                Apply(was);
            });
        }

        /// <summary>
        /// MinimapWnd_Expand.ResetMiniMapSize (:185-222): janela min(W, 1024) x min(H, 1024); mapa W - W*3/100 (1016 acima de
        /// 1024) x H - 90 (934 acima de 1024). O xdat tem 0 x 0: a definicao e refeita com os tamanhos.
        /// </summary>
        void BuildExpand()
        {
            var scr = UiRoot.Size;
            if (Expand != null && expandFor == scr) return;
            expandFor = scr;
            int sw = (int)scr.x, sh = (int)scr.y;
            var ww = sw > 1024 ? 1024 : sw;
            var wh = sh > 1024 ? 1024 : sh;
            var mw = sw > 1024 ? 1016 : sw - sw * 3 / 100;
            var mh = sh > 1024 ? 934 : sh - 90;
            var d = L2WndUtil.WindowDef("MinimapWnd_Expand");
            if (d == null) return;
            var j = (Newtonsoft.Json.Linq.JObject)d.J.DeepClone();
            j["size"] = new Newtonsoft.Json.Linq.JArray(ww, wh);
            var kids = new List<L2Ctrl>();
            foreach (var c in d.Children)
            {
                if (c.Name != "Minimap")
                {
                    kids.Add(c);
                    continue;
                }
                var cj = (Newtonsoft.Json.Linq.JObject)c.J.DeepClone();
                cj["size"] = new Newtonsoft.Json.Linq.JArray(mw, mh);
                kids.Add(new L2Ctrl { J = cj, Children = c.Children });
            }
            if (Expand != null) UnityEngine.Object.Destroy(Expand.El.gameObject);
            Expand = new L2Wnd("MinimapWnd_Expand", layer, new WndOpts { Def = new L2Ctrl { J = j, Children = kids }, Size = new float[] { ww, wh }, AriaLabel = GameData.SysString(447, "Map") });
            ExpandCtrl = Ctrl(Expand);
            Bind(Expand, ExpandCtrl, true);
            L2Events.Register(Ev.EV_MinimapCursedWeaponLocation, p =>
            {
                if (Expand.Visible) CursedLocation(p, ExpandCtrl, Expand);
            });
        }

        void Apply((bool n, bool e) was)
        {
            if (S.ExpandVisible) BuildExpand();
            if (was.n && !S.NormalVisible) Normal.Hide();
            if (was.e && !S.ExpandVisible) Expand?.Hide();
            if (S.NormalVisible && !Normal.Visible) Normal.Show();
            if (S.ExpandVisible && Expand != null && !Expand.Visible) Expand.Show();
        }

        /// <summary>HandleCursedWeaponLoctaion (MinimapWnd.uc:405-582).</summary>
        void CursedLocation(string p, MinimapCtrlView c, L2Wnd w)
        {
            var num = 0;
            L2Param.ParseInt(p, "NUM", ref num);
            if (num == 0)
            {
                if (S.AdjustCursedLoc)
                {
                    var pl = Player();
                    c.M.AdjustMapView(pl.x, pl.y, pl.z);
                }
                c.GridIcons.Clear();
                return;
            }
            var ids = new int[2];
            var names = new[] { "", "" };
            var owned = new int[2];
            var loc = new (int x, int y, int z)[2];
            int id = 0, own = 0, x = 0, y = 0, z = 0;
            var nm = "";
            for (var i = 0; i < num; i++)
            {
                L2Param.ParseInt(p, "ID" + i, ref id);
                L2Param.ParseString(p, "NAME" + i, ref nm);
                L2Param.ParseInt(p, "ISOWNED" + i, ref own);
                L2Param.ParseInt(p, "X" + i, ref x);
                L2Param.ParseInt(p, "Y" + i, ref y);
                L2Param.ParseInt(p, "Z" + i, ref z);
                if (i > 1) continue;
                ids[i] = id;
                names[i] = nm;
                owned[i] = own;
                loc[i] = (x, y, z);
            }
            if (S.AdjustCursedLoc)
            {
                S.AdjustCursedLoc = false;
                var cb = w.Combo("CursedComboBox");
                var sel = cb != null && cb.Selected >= 0 && cb.Selected < cb.Items.Count ? cb.Items[cb.Selected] : "";
                if (sel == names[0]) c.M.AdjustMapView(loc[0].x, loc[0].y, loc[0].z, false);
                else if (sel == names[1]) c.M.AdjustMapView(loc[1].x, loc[1].y, loc[1].z, false);
                else
                {
                    var pl = Player();
                    c.M.AdjustMapView(pl.x, pl.y, pl.z);
                }
                return;
            }
            if (num == 1) c.DrawGridIcon(MinimapScript.CursedIcon(ids[0], owned[0] == 0), "L2UI_CH3.MiniMap.cursedmapicon00", loc[0].x, loc[0].y, true, 0, -12, names[0]);
            else if (num == 2)
            {
                if (c.M.IsOverlapped(loc[0].x, loc[0].y, loc[1].x, loc[1].y))
                    c.DrawGridIcon("L2UI_CH3.MiniMap.cursedmapicon00", "L2UI_CH3.MiniMap.cursedmapicon00", loc[0].x, loc[0].y, true, 0, -12, names[0] + "\\n" + names[1]);
                else
                {
                    c.DrawGridIcon(MinimapScript.CursedIcon(ids[0], owned[0] == 0), "L2UI_CH3.MiniMap.cursedmapicon00", loc[0].x, loc[0].y, true, 0, -12, names[0]);
                    c.DrawGridIcon(MinimapScript.CursedIcon(ids[1], owned[1] == 0), "L2UI_CH3.MiniMap.cursedmapicon00", loc[1].x, loc[1].y, false, 0, -12, names[1]);
                }
            }
        }
    }
}
