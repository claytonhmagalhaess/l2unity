// C1 da matriz (Docs/validacao.md): mensagens do login. Golden/login_msgs.json (Docs/tools/gen_golden.py login_msgs):
// o switch do FUN_10150be0 (LoginFail) e as cadeias de bits do FUN_10150730/FUN_10150920 (AccountKicked) do NWindow.dll.
using System.Linq;
using L2Web.Net;
using Newtonsoft.Json.Linq;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class LoginMessageTests
    {
        [Test]
        public void LoginFail_MotivoParaSysmsg()
        {
            var g = (JObject)Golden.Load("login_msgs.json")["fail"];
            for (var reason = 0; reason < 256; reason++)
            {
                var want = g[reason.ToString()] is JArray a ? a.Select(x => (int)x).ToArray() : new int[0];
                CollectionAssert.AreEqual(want, LoginMessages.FailIds(reason), $"motivo {reason}");
            }
        }

        [Test]
        public void AccountKicked_OrdemDosBits()
        {
            var g = Golden.Load("login_msgs.json");
            CollectionAssert.AreEqual(((JArray)g["kickedFirst"]).Select(x => ((int)x[0], (int)x[1])).ToArray(), LoginMessages.KickedFirst);
            CollectionAssert.AreEqual(((JArray)g["kickedSecond"]).Select(x => ((int)x[0], (int)x[1])).ToArray(), LoginMessages.KickedSecond);
            Assert.AreEqual(2123, LoginMessages.KickedId(1)); // o 1o teste do FUN_10150730 ganha
            Assert.AreEqual(2042, LoginMessages.KickedId(0x4000000));
            Assert.AreEqual(0, LoginMessages.KickedId(0)); // aCis manda um dword so: o 2o vem 0 e nao ha caixa
        }

        [Test]
        public void Leitura_ComoOFormatoDoEngine()
        {
            string R(string hex)
            {
                var b = Packet.FromHex(hex);
                var r = new PacketReader(b);
                return LoginClient.Refusal(r.C(), r);
            }
            // aCis LoginFail: writeC(1) writeD(motivo); o engine le "c" (o 1o byte)
            Assert.AreEqual(LoginMessages.Text(new[] { 449, 450 }), R("0102000000"));
            Assert.AreEqual(LoginMessages.Text(new[] { 455 }), R("0107000000"));
            Assert.AreEqual("", R("0117000000"), "motivo sem case: caixa vazia");
            // AccountKicked: o engine le "dd" e usa o 2o; o aCis manda writeD(motivo) so
            Assert.AreEqual("", R("0220000000"));
            Assert.AreEqual(LoginMessages.Text(new[] { 2118 }), R("020000000020000000"));
            // PlayFail e 0x05/0x08/0x09: sem texto
            Assert.AreEqual("", R("0603000000"));
            Assert.AreEqual("", R("05"));
        }

        [Test]
        public void Textos_ExistemNoSystemmsgDaCopia()
        {
            var ids = LoginMessages.Fail.Values.SelectMany(v => v).Concat(LoginMessages.KickedFirst.Select(k => k.msg)).Concat(LoginMessages.KickedSecond.Select(k => k.msg)).Distinct();
            foreach (var id in ids)
                Assert.IsNotEmpty(GameData.SystemMessage(id, new System.Collections.Generic.List<string>()).Text, $"sysmsg {id}");
            Assert.AreEqual("Password does not match this account. Confirm your account information and log in again later.", LoginMessages.Text(LoginMessages.FailIds(2)));
        }
    }
}
