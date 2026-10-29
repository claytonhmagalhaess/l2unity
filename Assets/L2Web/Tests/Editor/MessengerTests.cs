// G11 da matriz (Docs/validacao.md): MessengerWnd, aba de amigos (L2FriendWnd / L2FriendTree do NWindow.dll): ordem,
// pacotes 0xfa/0xfb/0xfc, grupos e linhas da arvore.
using System.Linq;
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class MessengerTests
    {
        static string Ss(int i) => "S" + i;

        [Test]
        public void Ordem_OnlinePrimeiro_DepoisNomeOrdinal()
        {
            var m = new MessengerModel();
            m.SetList(new[] { (1, "bob", 0, 0), (2, "Zed", 1, 2), (3, "alice", 1, 3), (4, "Bob", 0, 0) });
            CollectionAssert.AreEqual(new[] { "Zed", "alice", "Bob", "bob" }, m.Friends.Select(f => f.Name).ToArray(), "appStrcmp: maiusculas antes");
            m.Packet(2, 1, "bob", 1, 1);
            Assert.AreEqual("bob", m.Friends[2].Name);
            m.Packet(3, 0, "Zed", 0, 0);
            Assert.IsFalse(m.Friends.Any(f => f.Name == "Zed"));
            m.Packet(1, 9, "carl", 1, 9);
            m.Status(0, "carl", 9);
            Assert.AreEqual("carl", m.Friends.Last().Name.Equals("carl") ? "carl" : m.Friends.Last().Name);
            m.Update(5, "ninguem", 1, 5);
            Assert.AreEqual(4, m.Friends.Count, "update de nome desconhecido e ignorado");
        }

        [Test]
        public void Arvore_GruposFechados_LinhasDe19()
        {
            var m = new MessengerModel();
            m.SetList(new[] { (1, "ana", 1, 1), (2, "beto", 0, 0), (3, "caio", 1, 3) });
            var r = m.Rows(Ss);
            Assert.AreEqual(2, r.Count, "os dois grupos comecam fechados");
            Assert.AreEqual("S1006 (2)", r[0].Text);
            Assert.AreEqual("S1007 (1)", r[1].Text);
            Assert.AreEqual(4, r[0].Y);
            Assert.AreEqual(23, r[1].Y);
            m.Click(r[0]);
            r = m.Rows(Ss);
            CollectionAssert.AreEqual(new[] { "S1006 (2)", "ana", "caio", "S1007 (1)" }, r.Select(x => x.Text).ToArray());
            Assert.AreEqual(21, r[1].X);
            Assert.AreEqual(24, r[1].TextX);
            Assert.AreEqual(4 + 19 * 3, r[3].Y);
            Assert.AreEqual("ana", m.DoubleClick(r[1]));
            m.Click(r[3]);
            r = m.Rows(Ss);
            Assert.IsNull(m.DoubleClick(r.First(x => x.Name == "beto")), "amigo offline nao abre conversa");
            Assert.AreEqual("abc...", MessengerModel.Truncate("abcdefgh", 40, s => s.Length * 6));
            Assert.AreEqual(1355, MessengerModel.SayMessage(0x437));
        }
    }
}
