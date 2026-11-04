// DialogBox.uc (spec 01 §1.10) sem Unity: a janela unica de perguntas, com os 8 EDialogType de UICommonAPI.uc:4-14, o
// NumberPad, a caixa de texto, a barra de tempo e a acao padrao do Enter. As janelas usam a API do UICommonAPI
// (DialogShow, DialogIsMine, DialogSetParamInt...) e recebem EV_DialogOK / EV_DialogCancel.
using System;

namespace L2Web.UI
{
    /// <summary>UICommonAPI.uc:4-14.</summary>
    public enum EDialogType
    {
        OKCancel,
        OK,
        OKCancelInput,
        OKInput,
        Warning,
        Notice,
        NumberPad,
        Progress,
    }

    /// <summary>UICommonAPI.uc:16-21.</summary>
    public enum DialogDefaultAction
    {
        None,
        OK,
        Cancel,
    }

    public sealed class DialogBoxScript
    {
        /// <summary>layout/DialogBox.txt: DialogBody 306x128 e NumberPad 128x128 (a janela tem 434x128).</summary>
        public const float BodyW = 306, BodyH = 128, NumberPadW = 128;

        public string Target = "";
        public string EditMessage = "";
        public EDialogType Type;
        public int Id;
        public bool InUse;
        public int ParamInt, ReservedInt, ReservedInt2, ReservedInt3;
        public int EditMaxLength = -1, EditMaxLengthPrev;
        public DialogDefaultAction DefaultAction;
        public string Message = "Message uninitialized";

        // ---- estado dos controles (a view copia para a janela)
        public bool Visible;
        public bool ShowEdit, ShowOK, ShowCancel, ShowCenterOK, ShowNumberPad, ShowProgress;
        /// <summary>Texto do DialogBoxEdit.</summary>
        public string Edit = "";
        /// <summary>"normal" ou "number" (SetEditType).</summary>
        public string EditType = "normal";
        /// <summary>Limite do EditBox (0 = o do xdat, sem limite).</summary>
        public int EditLimit;
        public string ReadingText = "";
        public float Width = BodyW, Height = BodyH;
        /// <summary>SetAnchor: BottomCenter no Progress, CenterCenter nos demais (DialogBox.uc:330-337).</summary>
        public bool AnchorBottom;
        /// <summary>O edit ganha o foco ao mostrar (DialogBox.uc:37-45).</summary>
        public bool FocusEdit;

        // ---- NCProgressCtrl (nw:0x1000d670): tempo em ms, Start/Stop/Reset
        public int ProgressTime, ProgressElapsed;
        public bool ProgressRunning;

        /// <summary>ExecuteEvent(EV_DialogOK / EV_DialogCancel).</summary>
        public Action<int> Execute = _ => { };
        public Func<string, string> NumToText = L2NumText.NoAdena;

        public DialogBoxScript() => Initialize();

        // ------------------------------------------------------------ API publica (DialogBox.uc:22-147)
        /// <summary>ShowDialog: recusa se ja estiver em uso (m_bInUse); grava quem pediu.</summary>
        public bool ShowDialog(EDialogType style, string message, string target)
        {
            if (InUse) return false;
            Visible = true;
            SetWindowStyle(style);
            Message = message ?? "";
            FocusEdit = ShowEdit;
            if (ShowEdit && EditMaxLength != -1)
            {
                EditMaxLengthPrev = EditLimit;
                EditLimit = EditMaxLength;
            }
            Target = target ?? "";
            InUse = true;
            return true;
        }

        /// <summary>HideDialog: esconde e volta ao estado inicial (perde o dono: DialogIsMine passa a false).</summary>
        public void HideDialog()
        {
            HideWindow();
            Initialize();
        }

        public void SetDefaultAction(DialogDefaultAction a) => DefaultAction = a;
        public bool IsMine(string owner) => Target == (owner ?? "");
        public void SetEditMessage(string s) => SetEdit(s ?? "");
        public void SetEditBoxMaxLength(int n)
        {
            if (n >= 0) EditMaxLength = n;
        }

        // ------------------------------------------------------------ eventos da janela
        /// <summary>OnClickButton (DialogBox.uc:158-190).</summary>
        public void Click(string id)
        {
            switch (id)
            {
                case "OKButton":
                case "CenterOKButton":
                    HandleOK();
                    break;
                case "CancelButton":
                    HandleCancel();
                    break;
                default:
                    if (id != null && id.StartsWith("num")) HandleNumberClick(id);
                    break;
            }
        }

        /// <summary>OnChangeEditBox (DialogBox.uc:218-233): no NumberPad o texto por extenso acompanha o numero.</summary>
        public void ChangeEdit(string s)
        {
            Edit = s ?? "";
            if (Type != EDialogType.NumberPad) return;
            ReadingText = Edit.Length > 0 ? NumToText(Edit) : "";
        }

        /// <summary>OnHide (DialogBox.uc:192-216).</summary>
        public void OnHide()
        {
            if (Type == EDialogType.Progress) ProgressRunning = false;
            EditType = "normal";
            SetEdit("");
            if (EditMaxLength != -1)
            {
                EditMaxLength = -1;
                EditLimit = EditMaxLengthPrev;
            }
        }

        /// <summary>
        /// DoDefaultAction (DialogBox.uc:429-448): Enter. OK so com DialogSetDefaultOK; None e Cancel fecham com Cancel. A acao
        /// volta a None depois de cada uso (inclusive se o OK abriu outro dialogo e pediu DefaultOK de novo).
        /// </summary>
        public void DoDefaultAction()
        {
            if (DefaultAction == DialogDefaultAction.OK) HandleOK();
            else HandleCancel();
            SetDefaultAction(DialogDefaultAction.None);
        }

        /// <summary>
        /// NCProgressCtrl::OnPaint (nw:0x1000d670): soma o tempo do quadro; ao passar do total chama OnProgressTimeUp, que no
        /// DialogBox e o Cancel (DialogBox.uc:422-427).
        /// </summary>
        public void Tick(int ms)
        {
            if (!ProgressRunning || ms <= 0) return;
            ProgressElapsed += ms;
            if (ProgressElapsed < ProgressTime) return;
            ProgressElapsed = ProgressTime;
            ProgressRunning = false;
            if (Type == EDialogType.Progress && Visible) HandleCancel();
        }

        /// <summary>Fracao que a barra ainda mostra: (total - decorrido) / total (a barra encolhe).</summary>
        public float ProgressLeft => ProgressTime > 0 ? 1f - (float)ProgressElapsed / ProgressTime : 0;

        // ------------------------------------------------------------ interno
        void Initialize()
        {
            Target = "";
            InUse = false;
            EditType = "normal";
            ParamInt = 0;
            ReservedInt = 0;
            ReservedInt2 = 0;
            EditMaxLength = -1;
            SetDefaultAction(DialogDefaultAction.None);
        }

        void HideWindow()
        {
            if (!Visible) return;
            Visible = false;
            OnHide();
        }

        void SetEdit(string s)
        {
            Edit = s;
            ChangeEdit(s);
        }

        void HideAll()
        {
            ShowEdit = ShowOK = ShowCancel = ShowCenterOK = ShowNumberPad = ShowProgress = false;
        }

        /// <summary>SetWindowStyle (DialogBox.uc:248-338).</summary>
        void SetWindowStyle(EDialogType style)
        {
            HideAll();
            Type = style;
            Width = BodyW;
            Height = BodyH;
            switch (style)
            {
                case EDialogType.OKCancel:
                case EDialogType.Warning:
                    ShowOK = ShowCancel = true;
                    break;
                case EDialogType.OK:
                case EDialogType.Notice:
                    ShowCenterOK = true;
                    break;
                case EDialogType.OKCancelInput:
                    ShowEdit = true;
                    ReadingText = "";
                    ShowOK = ShowCancel = true;
                    break;
                case EDialogType.OKInput:
                    ShowEdit = true;
                    ReadingText = "";
                    ShowCenterOK = true;
                    break;
                case EDialogType.NumberPad:
                    ShowEdit = true;
                    ReadingText = "";
                    ShowOK = ShowCancel = ShowNumberPad = true;
                    Width = BodyW + NumberPadW;
                    EditType = "number";
                    break;
                case EDialogType.Progress:
                    ShowOK = ShowCancel = ShowProgress = true;
                    // sem ParamInt o script so escreve um erro no log e a barra nao anda
                    if (ParamInt != 0)
                    {
                        ProgressTime = ParamInt;
                        ProgressElapsed = 0;
                        ProgressRunning = true;
                    }
                    break;
            }
            AnchorBottom = style == EDialogType.Progress;
        }

        void HandleOK()
        {
            EditMessage = ShowEdit ? Edit : "";
            // o evento vai por ultimo para o dono poder abrir outro dialogo dentro dele (comentario de DialogBox.uc:356)
            HideWindow();
            InUse = false;
            Execute(Ev.EV_DialogOK);
        }

        void HandleCancel()
        {
            HideWindow();
            InUse = false;
            Execute(Ev.EV_DialogCancel);
        }

        /// <summary>HandleNumberClick (DialogBox.uc:372-419): AddString no fim, All = ParamInt (se &gt;= 0), BS, C = "0".</summary>
        void HandleNumberClick(string id)
        {
            if (id.Length == 4 && id[3] >= '0' && id[3] <= '9')
            {
                if (EditLimit > 0 && Edit.Length >= EditLimit) return;
                SetEdit(Edit + id[3]);
                return;
            }
            switch (id)
            {
                case "numAll":
                    if (ParamInt >= 0) SetEdit(ParamInt.ToString());
                    break;
                case "numBS":
                    if (Edit.Length > 0) SetEdit(Edit.Substring(0, Edit.Length - 1));
                    break;
                case "numC":
                    SetEdit("0");
                    break;
            }
        }
    }
}
