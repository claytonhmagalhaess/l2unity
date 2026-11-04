// Regras do NCAuthWnd (NWindow.dll) sem Unity, para os testes (#0048, Docs/login_lacunas.md):
//   OnCreate 0x10181c80: NCEditBox ID (0x1502, tipo 6) e PWD (0x1503, tipo 2 = mascara '*'), ambos so com IME ingles
//     (+0x338 = 1) e sem SetLimitedCharNum; a ordem de Tab (vt+0x10c em 0x101822a9): a janela entra pelo ID, ID -> PWD e
//     PWD -> ID nos dois sentidos (Tab e Shift+Tab fazem o mesmo).
//   ShowWindow 0x10181030: foco no ID (vt+0x78) toda vez que a janela aparece (cada entrada no LoginState).
//   NCEditBox::OnKeyDown 0x10019880, Enter: com texto avisa o pai 0x501(id, 1); vazio avisa 0x501(id, 7). O NCAuthWnd so
//     trata 0x1503 (PWD, OnPasswordDone: 1 -> OnLoginBtnClick); Enter no ID nao faz nada.
//   OnLoginBtnClick 0x10180d70: ID vazio -> systemmsg 86; senha vazia -> 87; senao RequestAuthLogin (uma vez ate o timer
//     0xaff12013 de 5 s zerar +0x200); no fim sempre o som 0 (InterfaceSound.click_01, tabela 0x10350fa0).
//   NCEditBox::OnChar 0x10018f40: aceita 0x20..0x81 (o resto so com GLanguageType 9/13). UNetworkHandler::RequestAuthLogin
//     copia 14 caracteres do ID e 16 da senha (wcsncpy 0xe/0x10): o Rsa.CredentialBlock faz o mesmo corte.
namespace L2Web.UI
{
    public static class LoginAuth
    {
        public enum Field { None, Id, Pwd }

        public const int MsgNoId = 86, MsgNoPassword = 87;
        /// <summary>Som 0 da tabela do PlayConsoleSound (FUN_1014ed50(0)).</summary>
        public const string ClickSound = "InterfaceSound.click_01";
        /// <summary>Som 5/6 do NConsoleWnd::ShowOptionWnd (FUN_10164450).</summary>
        public const string WindowOpenSound = "itemsound.window_open", WindowCloseSound = "itemsound.window_close";
        /// <summary>O que o RequestAuthLogin copia (wcsncpy).</summary>
        public const int IdChars = 14, PasswordChars = 16;

        /// <summary>OnLoginBtnClick: a systemmsg que barra o login, ou 0 (segue para o RequestAuthLogin).</summary>
        public static int CheckFields(string id, string password)
        {
            if (string.IsNullOrEmpty(id)) return MsgNoId;
            if (string.IsNullOrEmpty(password)) return MsgNoPassword;
            return 0;
        }

        /// <summary>Tab/Shift+Tab: ID e PWD sao o proximo e o anterior um do outro; sem foco, entra pelo ID.</summary>
        public static Field TabNext(Field current) => current == Field.Id ? Field.Pwd : Field.Id;

        /// <summary>Enter faz o login so no campo da senha e com texto.</summary>
        public static bool EnterSubmits(Field current, string text) => current == Field.Pwd && !string.IsNullOrEmpty(text);

        /// <summary>NCEditBox::OnChar: caracteres aceitos nos campos do login.</summary>
        public static bool AcceptChar(char c) => c >= 0x20 && c < 0x82;
    }
}
