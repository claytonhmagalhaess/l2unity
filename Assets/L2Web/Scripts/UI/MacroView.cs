// MacroListWnd, MacroEditWnd e MacroInfoWnd do xdat (spec 05 §6.2, #0032) ligados ao MacroScript e ao InterfaceRouter.Macros.
// R (ShowMacroListWindow) chega como EV_MacroShowListWnd; EV_MacroUpdate pede a lista de novo; o RequestUseMacro executa as
// linhas pelo chat (OnChatSubmit), esperando nos /delay.
using System;
using System.Collections.Generic;
using System.Linq;
using L2Web.Net;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class MacroView
    {
        public readonly L2Wnd List, Edit, Info;
        readonly GameUi ui;
        readonly Action<byte[]> send;
        /// <summary>Executa uma linha como se fosse digitada no chat.</summary>
        public Action<string> Run = _ => { };
        int deleteId, editId, iconNum = 1;
        string desc = "", descBefore = "";
        readonly Queue<(int waitMs, string command)> running = new();
        float waitLeft;

        public MacroView(L2Layer layer, GameUi ui, Action<byte[]> send)
        {
            this.ui = ui;
            this.send = send;
            List = new L2Wnd("MacroListWnd", layer, new WndOpts { AriaLabel = "Macros" });
            Edit = new L2Wnd("MacroEditWnd", layer, new WndOpts { AriaLabel = "Macro" });
            Info = new L2Wnd("MacroInfoWnd", layer, new WndOpts { AriaLabel = "Descrição" });
            L2Events.Register(Ev.EV_MacroShowListWnd, _ => List.Toggle());
            L2Events.Register(Ev.EV_MacroUpdate, _ => RequestList());
            L2Events.Register(Ev.EV_MacroList, FillList);
            L2Events.Register(Ev.EV_MacroShowEditWnd, ShowEdit);
            L2Events.Register(Ev.EV_MacroDeleted, p =>
            {
                var id = 0;
                if (L2Param.ParseInt(p, "MacroID", ref id) && id == editId && Edit.Visible) Edit.Hide();
            });
            List.OnShow += RequestList;
            List.OnClick("btnAdd", () =>
            {
                desc = "";
                L2Events.Dispatch(new PacketEvents.Event(Ev.EV_MacroShowEditWnd, ""));
            });
            List.OnClick("btnHelp", () => L2Events.Dispatch(new PacketEvents.Event(Ev.EV_ShowHelp, L2Param.Add("", "FilePath", "..\\L2text\\help_macro.htm"))));
            Edit.OnClick("btnLeft", () => SetIcon(MacroScript.IconStep(iconNum, -1)));
            Edit.OnClick("btnRight", () => SetIcon(MacroScript.IconStep(iconNum, 1)));
            Edit.OnClick("btnInfo", () =>
            {
                if (Info.Visible) Info.Hide();
                else ShowInfo();
            });
            Edit.OnClick("btnSave", Save);
            Edit.OnClick("btnCancel", Edit.Hide);
            Edit.OnClick("btnHelp", () => L2Events.Dispatch(new PacketEvents.Event(Ev.EV_ShowHelp, L2Param.Add("", "FilePath", "..\\L2text\\help_macro.htm"))));
            var acr = Edit.Edit("txtShortName");
            if (acr) acr.onValueChanged.AddListener(v => Edit.Text("txtMacroName", v));
            BuildInfoEdit();
            Info.OnClick("btnOk", () =>
            {
                var t = InfoEdit ? InfoEdit.text : "";
                desc = t.Length > MacroScript.MaxDesc ? t.Substring(0, MacroScript.MaxDesc) : t;
                Info.Hide();
            });
            Info.OnClick("btnCancel", () =>
            {
                desc = descBefore;
                Info.Hide();
            });
            var tick = UiRoot.Box("MacroRunner", layer.El, 0, 0, 0, 0).gameObject.AddComponent<UiTicker>();
            tick.OnTick = Tick;
            ui.UseMacro = UseMacro;
        }

        InputField InfoEdit;

        /// <summary>MultiEdit txtInfo: uma caixa de texto de varias linhas no lugar do controle (o L2Wnd nao monta MultiEdit).</summary>
        void BuildInfoEdit()
        {
            var el = Info.Get("txtInfo");
            if (!el) return;
            var g = el.gameObject.AddComponent<Image>();
            g.color = new Color(0, 0, 0, 0.25f);
            var t = UiRoot.Label(el, "", 3, 2, el.sizeDelta.x - 6, el.sizeDelta.y - 4, 11, Color.white, TextAnchor.UpperLeft);
            t.supportRichText = false;
            InfoEdit = el.gameObject.AddComponent<InputField>();
            InfoEdit.textComponent = t;
            InfoEdit.targetGraphic = g;
            InfoEdit.lineType = InputField.LineType.MultiLineNewline;
            InfoEdit.characterLimit = MacroScript.MaxDesc;
        }

        void RequestList() => ui.Router()?.RequestMacroList();

        /// <summary>HandleMacroList: a grade com o icone, o acronimo por cima e o tooltip Action (nome e descricao).</summary>
        void FillList(string p)
        {
            var list = MacroScript.ParseList(p);
            List.Text("txtCount", MacroScript.CountText(list.Count));
            var data = list.Select(e => new SlotData { Icon = e.Texture, Title = e.Name, Tip = () => L2Tooltip.Action(e.Name, e.Description) }).ToList();
            var bs = L2WndUtil.FillItemWindow(List, "MacroItem", data, n => L2WndUtil.Tex(n)?.Url);
            for (var i = 0; i < bs.Count; i++)
            {
                var e = list[i];
                var lab = UiRoot.Label(bs[i].transform, e.Acronym, 0, 0, 32, 32, 10, Color.white, TextAnchor.MiddleCenter);
                lab.raycastTarget = false;
                UiKit.AddShadow(lab);
                bs[i].OnClick = () => UseMacro(e.Id);
                ui.DragToBar(bs[i], "macro", e.Id, false, (ev, _) => DropFromList(ev, e));
            }
        }

        /// <summary>OnDropItem: soltar em btnTrash apaga (sm828, Warning); em btnEdit abre o editor com a macro.</summary>
        void DropFromList(PointerEventData ev, MacroScript.Entry e)
        {
            for (var t = ev.pointerCurrentRaycast.gameObject ? ev.pointerCurrentRaycast.gameObject.transform : null; t; t = t.parent)
            {
                if (t == List.Get("btnTrash"))
                {
                    deleteId = e.Id;
                    var msg = GameData.SystemMessage(828, new List<string> { e.Name, "" }).Text;
                    ui.Dialog.Ask(EDialogType.Warning, msg, "MacroListWnd", (ok, _) =>
                    {
                        if (ok && deleteId > 0) send(MacroPackets.RequestDeleteMacro(deleteId));
                        deleteId = 0;
                    });
                    return;
                }
                if (t == List.Get("btnEdit"))
                {
                    L2Events.Dispatch(new PacketEvents.Event(Ev.EV_MacroShowEditWnd, L2Param.Add("", "MacroID", e.Id)));
                    return;
                }
            }
        }

        /// <summary>
        /// EV_MacroShowEditWnd (MacroEditWnd.uc:266-328): sem id e com 24 macros, sm797 e nao abre; sem id e aberta, fecha; com
        /// id, preenche nome, acronimo, icone, descricao e as 12 linhas.
        /// </summary>
        void ShowEdit(string p)
        {
            var id = 0;
            L2Param.ParseInt(p, "MacroID", ref id);
            var count = ui.Router()?.Macros.Macros.Count ?? 0;
            if (id == 0)
            {
                if (count >= MacroScript.MaxCount)
                {
                    // HandleMacroShowEditWnd (MacroEditWnd.uc:278-286): DialogShow(DIALOG_Notice, sm797)
                    var sm = GameData.SystemMessage(797, new List<string>());
                    ui.Dialog.Ask(EDialogType.Notice, sm.Text, "MacroEditWnd", (_, _) => { });
                    return;
                }
                if (Edit.Visible)
                {
                    Edit.Hide();
                    return;
                }
            }
            editId = id;
            var m = id > 0 ? ui.MacroOf(id) : null;
            SetText("txtName", m?.Name ?? "");
            SetText("txtShortName", m?.Acronym ?? "");
            Edit.Text("txtMacroName", m?.Acronym ?? "");
            SetIcon(m != null ? m.Icon + 1 : 1);
            desc = m?.Description ?? desc;
            for (var i = 0; i < MacroScript.Lines; i++)
                SetText("txtEdit" + i, m?.Commands.FirstOrDefault(c => c.Entry == i)?.Command ?? "");
            Edit.Show();
        }

        void SetText(string ctrl, string s)
        {
            var e = Edit.Edit(ctrl);
            if (e) e.text = s;
        }

        void SetIcon(int n)
        {
            iconNum = n;
            var el = Edit.Get("texMacro");
            if (el) L2WndUtil.Paint(el, "L2UI.MacroWnd.Macro_Icon" + n, 32, 32);
        }

        void ShowInfo()
        {
            descBefore = desc;
            if (InfoEdit) InfoEdit.text = desc;
            Info.Show();
        }

        /// <summary>btnSave: RequestMakeMacro e fecha.</summary>
        void Save()
        {
            var lines = Enumerable.Range(0, MacroScript.Lines).Select(i => Edit.Edit("txtEdit" + i)?.text ?? "").ToList();
            var m = MacroScript.Build(editId, Edit.Edit("txtName")?.text, Edit.Edit("txtShortName")?.text, iconNum, desc, lines, ui.SkillByName);
            send(MacroPackets.RequestMakeMacro(m));
            Edit.Hide();
            Info.Hide();
        }

        /// <summary>Solta uma skill ou acao numa linha do editor: copia o MacroCommand (MacroEditWnd.uc:139-149).</summary>
        public bool DropOnEditLine(PointerEventData ev, string type, string name, string actionCmd)
        {
            if (!Edit.Visible) return false;
            for (var t = ev.pointerCurrentRaycast.gameObject ? ev.pointerCurrentRaycast.gameObject.transform : null; t; t = t.parent)
            {
                if (!t.name.StartsWith("txtEdit")) continue;
                var f = t.GetComponent<InputField>();
                var cmd = MacroScript.CommandOf(type, name, actionCmd);
                if (f && cmd.Length > 0) f.text = cmd;
                return true;
            }
            return false;
        }

        // ------------------------------------------------------------ RequestUseMacro
        /// <summary>Executa a macro: as linhas em ordem pelo chat, esperando nos /delay.</summary>
        public void UseMacro(int id)
        {
            var m = ui.MacroOf(id);
            if (m == null) return;
            running.Clear();
            foreach (var x in MacroScript.Plan(m)) running.Enqueue(x);
            waitLeft = running.Count > 0 ? running.Peek().waitMs / 1000f : 0;
            Tick(0);
        }

        void Tick(float dt)
        {
            while (running.Count > 0)
            {
                waitLeft -= dt;
                dt = 0;
                if (waitLeft > 0) return;
                var (_, cmd) = running.Dequeue();
                Run(cmd);
                waitLeft = running.Count > 0 ? running.Peek().waitMs / 1000f : 0;
            }
        }
    }
}
