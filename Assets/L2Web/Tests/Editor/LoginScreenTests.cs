// Tela de login como o NCAuthWnd/NCLoginFunctionWnd (#0048, Docs/login_lacunas.md): foco e teclas, campos, a mensagem
// do OnLoginBtnClick, o menu so com Options e a caixa NCGaraDialogBox do ServerClose.
using System.Linq;
using L2Web.Net;
using L2Web.UI;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.UI;
using Field = L2Web.UI.LoginAuth.Field;

namespace L2Web.Tests
{
    public class LoginScreenTests
    {
        [Test]
        public void OnLoginBtnClick_MensagemPorCampo()
        {
            // 0x10180d70: ID vazio -> 86 (mesmo com a senha vazia), senha vazia -> 87
            Assert.AreEqual(86, LoginAuth.CheckFields("", ""));
            Assert.AreEqual(86, LoginAuth.CheckFields("", "x"));
            Assert.AreEqual(87, LoginAuth.CheckFields("conta", ""));
            Assert.AreEqual(0, LoginAuth.CheckFields("conta", "senha"));
            // o original nao apara: espaco conta como texto
            Assert.AreEqual(0, LoginAuth.CheckFields(" ", " "));
        }

        [Test]
        public void TextosDoSystemMsg()
        {
            var t86 = GameData.SystemMessage(86, new System.Collections.Generic.List<string>()).Text;
            if (string.IsNullOrEmpty(t86) || t86.StartsWith("Mensagem do sistema")) Assert.Ignore("sem systemmsg na copia local");
            Assert.AreEqual("Please enter your ID.", t86);
            Assert.AreEqual("Please enter your password.", GameData.SystemMessage(87, new System.Collections.Generic.List<string>()).Text);
            Assert.AreEqual("You have been disconnected from the server. Please login again.", GameData.SystemMessage(LobbyDialogBox.ServerCloseMsg, new System.Collections.Generic.List<string>()).Text);
        }

        [Test]
        public void OrdemDeTab_IdEPwdNosDoisSentidos()
        {
            // SetTabOrder em 0x101822a9: janela -> ID; ID -> PWD/PWD; PWD -> ID/ID
            Assert.AreEqual(Field.Pwd, LoginAuth.TabNext(Field.Id));
            Assert.AreEqual(Field.Id, LoginAuth.TabNext(Field.Pwd));
            Assert.AreEqual(Field.Id, LoginAuth.TabNext(Field.None));
        }

        [Test]
        public void Enter_SoNaSenhaComTexto()
        {
            // NCEditBox::OnKeyDown 0xd: com texto 0x501(id,1); o NCAuthWnd so trata o 0x1503 (OnPasswordDone)
            Assert.IsTrue(LoginAuth.EnterSubmits(Field.Pwd, "senha"));
            Assert.IsFalse(LoginAuth.EnterSubmits(Field.Pwd, ""));
            Assert.IsFalse(LoginAuth.EnterSubmits(Field.Id, "senha"));
            Assert.IsFalse(LoginAuth.EnterSubmits(Field.None, "senha"));
        }

        [Test]
        public void Caracteres_DoOnChar()
        {
            Assert.IsTrue(LoginAuth.AcceptChar('a'));
            Assert.IsTrue(LoginAuth.AcceptChar(' '));
            Assert.IsTrue(LoginAuth.AcceptChar('~'));
            Assert.IsFalse(LoginAuth.AcceptChar('\t'));
            Assert.IsFalse(LoginAuth.AcceptChar('\n'));
            Assert.IsFalse(LoginAuth.AcceptChar('ç'));
        }

        [Test]
        public void CorteDe14E16_ComoORequestAuthLogin()
        {
            var b = Rsa.CredentialBlock("abcdefghijklmnopqrst", "0123456789abcdefghij");
            // o ID ocupa 0x5e..0x6b (14) e a senha comeca logo depois, em 0x6c: o 15o caractere do ID ('o') nao entra
            Assert.AreEqual('n', (char)b[0x5e + 13]);
            Assert.AreEqual(0x6c, 0x5e + LoginAuth.IdChars);
            Assert.AreEqual('0', (char)b[0x6c]);
            CollectionAssert.DoesNotContain(b, (byte)'o');
            // a senha ocupa 0x6c..0x7b (16): o 17o caractere ('g') nao entra
            Assert.AreEqual('f', (char)b[0x6c + 15]);
            Assert.AreEqual(0, b[0x6c + 16]);
            Assert.AreEqual(LoginAuth.IdChars, 14);
            Assert.AreEqual(LoginAuth.PasswordChars, 16);
        }

        [Test]
        public void Tela_MenuSoComOptionsECampos()
        {
            var go = new GameObject("teste login", typeof(RectTransform));
            var oldBand = LobbyUi.Band;
            try
            {
                var s = new LobbyLoginScreen((RectTransform)go.transform);
                var menu = s.Root.Find("lb-menu");
                Assert.IsNotNull(menu);
                var buttons = menu.GetComponentsInChildren<Button>(true);
                Assert.AreEqual(1, buttons.Length, "so Options");
                Assert.AreSame(s.OptionsBtn, buttons[0]);
                Assert.AreEqual(GameData.SysString(156, "Options"), buttons[0].GetComponentInChildren<Text>().text);
                var mr = (RectTransform)menu;
                Assert.AreEqual(new Vector2(120, 39), mr.sizeDelta);
                Assert.AreEqual(0, s.User.characterLimit);
                Assert.AreEqual(0, s.Pass.characterLimit);
                Assert.AreEqual(InputField.ContentType.Password, s.Pass.contentType);
                Assert.IsFalse(s.Options.gameObject.activeSelf, "janela de conexao do porte fechada");

                // OnLoginBtnClick: campos vazios -> faixa com a systemmsg, sem login
                LobbyUi.Band = new LobbyMessageBand(go.transform);
                var sent = 0;
                s.OnSubmit = () => sent++;
                s.User.text = "";
                s.Pass.text = "x";
                s.Submit();
                Assert.AreEqual(0, sent);
                Assert.AreEqual(LoginMessages.Text(new[] { 86 }), LobbyUi.Band.Current);
            }
            finally
            {
                LobbyUi.Band = oldBand;
                Object.DestroyImmediate(go);
            }
        }

        [Test]
        public void Tela_SubmitComCamposPreenchidos()
        {
            var go = new GameObject("teste login 2", typeof(RectTransform));
            try
            {
                var s = new LobbyLoginScreen((RectTransform)go.transform);
                var sent = 0;
                s.OnSubmit = () => sent++;
                s.User.text = "conta";
                s.Pass.text = "senha";
                s.Submit();
                Assert.AreEqual(1, sent);
            }
            finally
            {
                Object.DestroyImmediate(go);
            }
        }

        [Test]
        public void GaraDialogBox_DoServerClose()
        {
            var go = new GameObject("teste dialogo", typeof(RectTransform));
            try
            {
                var d = new LobbyDialogBox((RectTransform)go.transform);
                Assert.IsFalse(d.Visible);
                Assert.AreEqual(new Vector2(306, 128), d.Root.sizeDelta);
                var ok = (RectTransform)d.Ok.transform;
                Assert.AreEqual(new Vector2(76, 23), ok.sizeDelta);
                Assert.AreEqual(115f, NativeLayout.GaraCenterOk.X);
                Assert.AreEqual(99f, NativeLayout.GaraCenterOk.Y);
                var clicked = 0;
                d.Show("texto", () => clicked++);
                Assert.IsTrue(d.Visible);
                Assert.AreEqual("texto", d.Message.text);
                d.Ok.onClick.Invoke();
                Assert.IsFalse(d.Visible);
                Assert.AreEqual(1, clicked);
                Assert.AreEqual(0x1d, LobbyDialogBox.ServerCloseId);
            }
            finally
            {
                Object.DestroyImmediate(go);
            }
        }

        [Test]
        public void Eula_MedidasDoOnCreate()
        {
            // NCConsole 0x1013f765 e NCEulaWnd::OnCreate 0x10190910 (a janela ainda nao existe no porte: pedido na #0048)
            Assert.AreEqual(546f, NativeLayout.Eula.W);
            Assert.AreEqual(425f, NativeLayout.Eula.H);
            Assert.AreEqual(-273f, NativeLayout.Eula.X);
            Assert.AreEqual(-212f, NativeLayout.Eula.Y);
            Assert.AreEqual(196f, NativeLayout.EulaAgree.X);
            Assert.AreEqual(276f, NativeLayout.EulaDisagree.X);
        }
    }
}
