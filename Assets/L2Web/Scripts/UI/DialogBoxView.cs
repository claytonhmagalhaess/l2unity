// DialogBox do xdat (layout/DialogBox.txt) ligado ao DialogBoxScript. A API segue o UICommonAPI (DialogShow, DialogHide,
// DialogSetDefaultOK, DialogIsMine, DialogSetID...): quem abre passa um nome de dono (o string(Self) do script) e recebe
// EV_DialogOK / EV_DialogCancel pelo L2Events, ou uma resposta direta com Ask.
using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class DialogBoxView
    {
        static readonly string[] NumButtons = { "num0", "num1", "num2", "num3", "num4", "num5", "num6", "num7", "num8", "num9", "numAll", "numBS", "numC" };

        public readonly L2Wnd Wnd;
        public readonly DialogBoxScript S = new();
        readonly InputField edit;
        (string owner, Action<bool, string> answer) pending;
        bool syncing;
        float tickAcc;

        public DialogBoxView(L2Layer layer)
        {
            Wnd = new L2Wnd("DialogBox", layer, new WndOpts { AriaLabel = "Confirmação" });
            // OnLoad: SetButtonName(1337, 1342) nos tres botoes
            Wnd.LabelButton("OKButton", GameData.SysString(1337, "Confirm"));
            Wnd.LabelButton("CenterOKButton", GameData.SysString(1337, "Confirm"));
            Wnd.LabelButton("CancelButton", GameData.SysString(1342, "Cancel"));
            foreach (var n in new[] { "OKButton", "CenterOKButton", "CancelButton" })
            {
                var id = n;
                Wnd.OnClick(n, () => Do(() => S.Click(id)));
            }
            foreach (var n in NumButtons)
            {
                var id = n;
                Wnd.OnClick(n, () => Do(() => S.Click(id)));
            }
            var t = Wnd.TextEl("DialogText");
            if (t)
            {
                t.horizontalOverflow = HorizontalWrapMode.Wrap;
                t.alignment = TextAnchor.UpperLeft;
            }
            edit = Wnd.Edit("DialogBoxEdit");
            if (edit)
            {
                edit.onValueChanged.AddListener(v =>
                {
                    if (syncing) return;
                    S.ChangeEdit(v);
                    Wnd.Text("DialogReadingText", S.ReadingText);
                });
                // SetEditType("number"): o NCEditBox so aceita digitos
                edit.onValidateInput = (_, _, c) => S.EditType == "number" && (c < '0' || c > '9') ? '\0' : c;
                // Enter no campo = a acao padrao (DoDefaultAction)
                edit.onSubmit.AddListener(_ => Enter());
            }
            S.Execute = id =>
            {
                Sync();
                var p = pending;
                if (p.answer != null && S.IsMine(p.owner))
                {
                    pending = default;
                    p.answer(id == Ev.EV_DialogOK, S.EditMessage);
                }
                L2Events.Dispatch(new PacketEvents.Event(id, ""));
            };
            // fechada por fora (Alt+W, logout): sem evento e livre para o proximo dialogo
            Wnd.OnClose = () =>
            {
                if (!S.Visible) return;
                pending = default;
                S.HideDialog();
            };
            Wnd.El.gameObject.AddComponent<UiTicker>().OnTick = Tick;
            Sync();
        }

        // ------------------------------------------------------------ UICommonAPI
        /// <summary>DialogShow: false se ja houver um dialogo aberto (m_bInUse).</summary>
        public bool Show(EDialogType type, string message, string owner)
        {
            var ok = S.ShowDialog(type, message, owner);
            Sync();
            return ok;
        }

        /// <summary>
        /// Show com a resposta direta: (OK?, texto do edit). Um dialogo aberto fecha antes, sem evento; se ele tambem era de
        /// resposta direta, recebe "cancelado" (o ConfirmDlg do servidor precisa da resposta).
        /// </summary>
        public void Ask(EDialogType type, string message, string owner, Action<bool, string> answer)
        {
            if (S.InUse)
            {
                var old = pending;
                Hide();
                old.answer?.Invoke(false, "");
            }
            pending = (owner, answer);
            Show(type, message, owner);
        }

        /// <summary>DialogHide: esconde sem evento e esquece o dono.</summary>
        public void Hide()
        {
            pending = default;
            S.HideDialog();
            Sync();
        }

        public void SetDefaultOK() => S.SetDefaultAction(DialogDefaultAction.OK);
        public bool IsMine(string owner) => S.IsMine(owner);
        public void SetID(int id) => S.Id = id;
        public int GetID() => S.Id;
        public void SetEditType(string t) => S.EditType = t ?? "normal";
        public string GetString() => S.EditMessage;
        public void SetString(string s) => Do(() => S.SetEditMessage(s));
        public void SetParamInt(int v) => S.ParamInt = v;
        public void SetReservedInt(int v) => S.ReservedInt = v;
        public void SetReservedInt2(int v) => S.ReservedInt2 = v;
        public void SetReservedInt3(int v) => S.ReservedInt3 = v;
        public int GetReservedInt() => S.ReservedInt;
        public int GetReservedInt2() => S.ReservedInt2;
        public int GetReservedInt3() => S.ReservedInt3;
        public void SetEditBoxMaxLength(int n) => S.SetEditBoxMaxLength(n);
        public bool Visible => S.Visible;

        /// <summary>Enter com o dialogo aberto: DoDefaultAction. false se nao havia dialogo.</summary>
        public bool Enter()
        {
            if (!S.Visible) return false;
            Do(S.DoDefaultAction);
            return true;
        }

        // ------------------------------------------------------------ janela
        void Do(Action a)
        {
            a();
            Sync();
        }

        void Tick(float dt)
        {
            if (!S.ProgressRunning) return;
            tickAcc += dt * 1000;
            var ms = (int)tickAcc;
            tickAcc -= ms;
            Do(() => S.Tick(ms));
        }

        /// <summary>Copia o estado do script para a janela (controles, tamanho, ancora, textos, edit, barra, foco).</summary>
        void Sync()
        {
            Wnd.ShowCtrl("DialogBoxEdit", S.ShowEdit);
            Wnd.ShowCtrl("OKButton", S.ShowOK);
            Wnd.ShowCtrl("CancelButton", S.ShowCancel);
            Wnd.ShowCtrl("CenterOKButton", S.ShowCenterOK);
            Wnd.ShowCtrl("NumberPad", S.ShowNumberPad);
            Wnd.ShowCtrl("DialogProgress", S.ShowProgress);
            if (Wnd.Size[0] != S.Width || Wnd.Size[1] != S.Height)
            {
                Wnd.SetWindowSize(S.Width, S.Height);
                Wnd.RelayoutChildren();
            }
            Wnd.Text("DialogText", S.Message);
            Wnd.Text("DialogReadingText", S.ReadingText);
            if (edit)
            {
                syncing = true;
                if (edit.text != S.Edit)
                {
                    edit.text = S.Edit;
                    edit.caretPosition = S.Edit.Length;
                }
                edit.characterLimit = S.EditLimit;
                syncing = false;
            }
            DrawProgress();
            if (S.Visible && !Wnd.Visible)
            {
                tickAcc = 0;
                Wnd.SetAnchor(S.AnchorBottom ? "BOTTOM_CENTER" : "CENTER", S.AnchorBottom ? "BOTTOM_CENTER" : "CENTER", 0, 0);
                Wnd.Show();
            }
            else if (!S.Visible && Wnd.Visible)
            {
                var close = Wnd.OnClose;
                Wnd.OnClose = () => { };
                Wnd.Hide();
                Wnd.OnClose = close;
            }
            if (S.Visible && S.FocusEdit)
            {
                // SetFocus("DialogBox") e, com o edit visivel, o foco nele
                S.FocusEdit = false;
                if (edit && S.ShowEdit) edit.ActivateInputField();
            }
            else if (S.Visible && !S.ShowEdit && EventSystem.current && UiRoot.TypingInField())
                EventSystem.current.SetSelectedGameObject(Wnd.El.gameObject);
        }

        /// <summary>NCProgressCtrl::OnPaint: a barra em (gap, gap), largura (W - 2 gap) x o que falta do tempo.</summary>
        void DrawProgress()
        {
            var b = Wnd.BarInfo("DialogProgress");
            if (b == null || !b.Fill) return;
            var gap = Wnd.Ctrl("DialogProgress")?.N("gap") ?? 0;
            if (float.IsNaN(gap) || gap < 0) gap = 0;
            var w = Mathf.Max(0, b.W - 2 * gap);
            var rt = b.Fill.rectTransform;
            rt.anchoredPosition = new Vector2(gap, -gap);
            rt.sizeDelta = new Vector2(Mathf.Round(w * Mathf.Clamp01(S.ProgressLeft)), Mathf.Max(0, b.H - 2 * gap));
            b.Fill.uvRect = new Rect(0, 0, 1, 1);
        }
    }
}
