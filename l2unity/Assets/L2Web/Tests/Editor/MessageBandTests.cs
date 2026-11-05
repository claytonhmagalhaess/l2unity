// Faixa de mensagens do lobby (NCMessageWnd, scratchpad/login_strip_re.md): systemmsg 94 e as regras de SetMessage /
// ShowMessage / ClearText (0x10186b80, 0x10186b50, 0x101456c0, 0x10186b40).
using L2Web.UI;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class MessageBandTests
    {
        [Test]
        public void Copyright_ESystemMsg94()
        {
            var r = GameData.ServerSystemMsgRecord(LobbyMessageBand.CopyrightId) ?? GameData.SystemMsgRecord(LobbyMessageBand.CopyrightId);
            if (r == null) Assert.Ignore("sem systemmsg-e.dat na copia local");
            // referencia do usuario (Image #11): o id 94 do cliente instalado
            Assert.AreEqual("2013 Copyright Lineage2 NcSoft.", r.Msg.Trim());
        }

        [Test]
        public void Estado_TextoIdELimpeza()
        {
            var go = new GameObject("teste faixa", typeof(RectTransform));
            try
            {
                var b = new LobbyMessageBand(go.transform);
                b.SetMessage(LobbyMessageBand.CopyrightId);
                var copyright = b.Current;
                b.ShowMessage("Account is already in use.");
                Assert.AreEqual("Account is already in use.", b.Current);
                // o texto pos id = -1: limpar deixa a faixa vazia (nao volta ao copyright)
                b.ClearText();
                Assert.AreEqual("", b.Current);
                b.SetMessage(LobbyMessageBand.CopyrightId);
                Assert.AreEqual(copyright, b.Current);
                // ClearText nao mexe no id
                b.ClearText();
                Assert.AreEqual(copyright, b.Current);
                Assert.AreEqual(52f, LobbyMessageBand.Height);
            }
            finally
            {
                Object.DestroyImmediate(go);
            }
        }
    }
}
