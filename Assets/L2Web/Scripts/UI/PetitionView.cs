// UserPetitionWnd do Interface.xdat (256x401, petition1_back) com o UserPetitionWnd.uc:
//   OnLoad: o combo PetitionTypeComboBox (ss695 "Select a Type" do xdat) recebe as 9 categorias ss696..704.
//   EV_ShowUserPetitionWnd (tecla O/Alt+O, /gm texto): mostra, foca e poe o Message no PetitionMultiEdit.
//   EV_LoadPetitionHtml (HtmlString): carrega no HelpHtmlCtrl.
//   Categoria >= 1: LoadHtml("..\L2text\" + PetitionCategoryLink[i - 1]) no HelpHtmlCtrl.
//   OK: tipo 0 -> sm804; texto < 5 -> sm386; >= 255 -> sm971; senao RequestPetition(texto, tipo), limpa, fecha e escreve
//     "ss708 : texto" na PetitionWnd (a janela de conversa com o GM, que o porte ainda nao tem).
//   Cancel: RequestPetitionCancel, limpa e fecha.
// SystemMenuWnd btnPetition alterna a janela (HandleShowPetitionBegin, SystemMenuWnd.uc:88-102).
// As categorias e os links sao os defaultproperties do UserPetitionWnd (Interface_P166/.../UserPetitionWnd.uc:145-166; as
// sysstrings 696..704 do Interlude sao as mesmas categorias).
using System;
using L2Web.Net;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    public static class PetitionScript
    {
        public static readonly int[] CategoryTitle = { 696, 697, 698, 699, 700, 701, 702, 703, 704 };
        public static readonly string[] CategoryLink =
        {
            "pet_help_move.htm", "pet_help_recover.htm", "pet_help_bug.htm", "pet_help_quest.htm", "pet_help_report.htm",
            "pet_help_suggest.htm", "pet_help_game.htm", "pet_help_oprn.htm", "pet_help_etc.htm",
        };

        /// <summary>Arquivo de ajuda do item `index` do combo (0 = "Select a Type": nenhum).</summary>
        public static string HelpFile(int index) => index >= 1 && index <= CategoryLink.Length ? CategoryLink[index - 1] : null;

        /// <summary>OnClickOKButton: a mensagem de sistema que barra o envio (804, 386, 971) ou 0 = pode enviar.</summary>
        public static int Validate(int type, string message)
        {
            var len = (message ?? "").Length;
            if (type == 0) return 804;
            if (len < 5) return 386;
            if (len >= 255) return 971;
            return 0;
        }

        // [pedido 0034 -> net] RequestPetition 0x7f "cSd" e RequestPetitionCancel 0x80 (spec 95); ficam aqui ate entrarem no
        // Scripts\Net. O cancelamento vai sem corpo [I]: a spec lista "cS", o servidor nao le nada [V].
        public static byte[] RequestPetition(string message, int type) => new PacketWriter().C(0x7f).S(message).D(type).Bytes();
        public static byte[] RequestPetitionCancel() => new PacketWriter().C(0x80).Bytes();
    }

    public sealed class PetitionView
    {
        public readonly L2Wnd Wnd;
        readonly Action<byte[]> send;
        readonly Action<string> say;
        readonly DialogBoxView dialog;
        InputField edit;

        /// <summary>`say` = a linha "Contents of a Petition : texto" (sem a PetitionWnd, vai para o chat do sistema).</summary>
        public PetitionView(L2Layer layer, DialogBoxView dialog, Action<byte[]> send, Action<string> say)
        {
            this.dialog = dialog;
            this.send = send;
            this.say = say;
            Wnd = new L2Wnd("UserPetitionWnd", layer, new WndOpts { AriaLabel = "Petition" });
            var combo = Wnd.Combo("PetitionTypeComboBox");
            if (combo != null)
            {
                foreach (var t in PetitionScript.CategoryTitle) combo.Items.Add(GameData.SysString(t, ""));
                combo.SetItems(combo.Items.ToArray());
                combo.Select(0);
                combo.OnSelect = i =>
                {
                    var f = PetitionScript.HelpFile(i);
                    if (f != null) Html(LobbyServerScreen.ReadL2Text(f) ?? "");
                };
            }
            BuildEdit();
            Wnd.OnClick("OKButton", Ok);
            Wnd.OnClick("CancelButton", Cancel);
            L2Events.Register(Ev.EV_ShowUserPetitionWnd, p =>
            {
                Wnd.Show();
                string m = null;
                if (L2Param.ParseString(p, "Message", ref m) && edit) edit.text = m;
            });
            L2Events.Register(Ev.EV_LoadPetitionHtml, p =>
            {
                string h = null;
                if (L2Param.ParseString(p, "HtmlString", ref h) && !string.IsNullOrEmpty(h)) Html(h);
            });
        }

        /// <summary>HandleShowPetitionBegin (SystemMenuWnd): alterna.</summary>
        public void Toggle() => Wnd.Toggle();

        /// <summary>MultiEdit PetitionMultiEdit: caixa de varias linhas no lugar do controle (o L2Wnd nao monta MultiEdit).</summary>
        void BuildEdit()
        {
            var el = Wnd.Get("PetitionMultiEdit");
            if (!el) return;
            var g = el.gameObject.AddComponent<Image>();
            g.color = new Color(0, 0, 0, 0.25f);
            var t = UiRoot.Label(el, "", 3, 2, el.sizeDelta.x - 6, el.sizeDelta.y - 4, 11, Color.white, TextAnchor.UpperLeft);
            t.supportRichText = false;
            edit = el.gameObject.AddComponent<InputField>();
            edit.textComponent = t;
            edit.targetGraphic = g;
            edit.lineType = InputField.LineType.MultiLineNewline;
        }

        void Html(string html)
        {
            var body = Wnd.Content("HelpHtmlCtrl");
            if (!body) return;
            UiKit.Clear(body);
            L2Html.Render(html, new HtmlActions { Link = l => Html(LobbyServerScreen.ReadL2Text(HelpHtmlView.FileName(l)) ?? "") }, body,
                HelpHtmlView.ViewerWidth(Wnd.Ctrl("HelpHtmlCtrl")));
        }

        void Ok()
        {
            var type = Wnd.Combo("PetitionTypeComboBox")?.Selected ?? 0;
            var msg = edit ? edit.text : "";
            var err = PetitionScript.Validate(type, msg);
            if (err != 0)
            {
                // DialogShow(DIALOG_OK, GetSystemMessage(err))
                dialog.Ask(EDialogType.OK, GameData.SystemMessage(err, new System.Collections.Generic.List<string>()).Text, "UserPetitionWnd", (_, _) => { });
                return;
            }
            send(PetitionScript.RequestPetition(msg, type));
            Clear();
            Wnd.Hide();
            say(GameData.SysString(708, "") + " : " + msg);
        }

        void Cancel()
        {
            send(PetitionScript.RequestPetitionCancel());
            Clear();
            Wnd.Hide();
        }

        void Clear()
        {
            Wnd.Combo("PetitionTypeComboBox")?.Select(0);
            if (edit) edit.text = "";
            var body = Wnd.Content("HelpHtmlCtrl");
            if (body) UiKit.Clear(body);
        }
    }
}
