// H3 da matriz (Docs/validacao.md): NCChatListBox (xdat ChatWindow). Golden/chat_list.json (Docs/tools/gen_golden.py
// chat_list): constantes da desmontagem (AddString, OnPaint, construtor) e do pseudocodigo (OnCreate, exec AddString).
using System.Linq;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class ChatListTests
    {
        static JObject G => (JObject)Golden.Load("chat_list.json");

        // largura fixa: 6 por letra, 3 o espaco
        static float Mono(string s) => s.Sum(c => c == ' ' ? 3f : 6f);

        [Test]
        public void Constantes_IguaisAoNativo()
        {
            var g = G;
            Assert.AreEqual((double)g["firstMinus"], ChatListModel.FirstMinus);
            Assert.AreEqual((double)g["nextMinus"], ChatListModel.NextMinus);
            Assert.AreEqual((int)g["indent"], ChatListModel.Indent);
            Assert.AreEqual((int)g["originX"], ChatListModel.OriginX);
            Assert.AreEqual((int)g["originY"], ChatListModel.OriginY);
            Assert.AreEqual((int)g["pitchAdd"], ChatListModel.PitchAdd);
            Assert.AreEqual((int)g["maxLines"], ChatListModel.DefaultMax);
            var m = new ChatListModel { W = 343, H = 141 };
            Assert.AreEqual((int)((141 - (double)g["rowsMinus"]) / (double)g["rowsDiv"]), m.Visible);
            Assert.AreEqual(8, m.Visible);
            Assert.AreEqual(7, new ChatListModel { W = 348, H = 125 }.Visible);
        }

        [Test]
        public void Quebra_PorPalavra_ComRecuo()
        {
            // larguras 60
            var l = ChatListModel.Wrap("aaaa bbbb cccc dddd", 60, 60, Mono);
            // "aaaa" 24 + " " 27 + "bbbb" 51 < 60; " " 54; "cccc" 78 >= 60 -> proxima
            CollectionAssert.AreEqual(new[] { "aaaa bbbb ", "cccc dddd" }, l);
            // palavra maior que a linha: cortada por caractere
            CollectionAssert.AreEqual(new[] { "aaaaaaaaa", "aaaaaaa", "aaa" }, ChatListModel.Wrap(new string('a', 19), 60, 48, Mono));
            // a sequencia barra-n quebra a linha
            CollectionAssert.AreEqual(new[] { "ab", "cd" }, ChatListModel.Wrap("ab\\ncd", 60, 48, Mono));
            Assert.IsEmpty(ChatListModel.Wrap("", 60, 48, Mono));
            var m = new ChatListModel { W = 82, H = 141 };
            m.Add("aaaa bbbb cccc dddd", Color.white, new string[0], false, Mono);
            // 1a linha W - 22 = 60, seguintes W - 34 = 48: "cccc " e "dddd" com recuo 12
            CollectionAssert.AreEqual(new[] { "aaaa bbbb ", "cccc ", "dddd" }, m.All.Select(e => e.Text).ToArray());
            CollectionAssert.AreEqual(new[] { 0, 12, 12 }, m.All.Select(e => e.Indent).ToArray());
        }

        [Test]
        public void Capacidade_ERolagem()
        {
            var m = new ChatListModel { W = 343, H = 141, MaxLines = 20 };
            for (var i = 0; i < 12; i++) m.Add("l" + i, Color.white, new string[0], false, Mono);
            Assert.AreEqual(12, m.Count);
            Assert.AreEqual(4, m.Top, "no fim: topo = contagem - visiveis");
            m.Step(-2);
            Assert.AreEqual(2, m.Top);
            // linha nova com a vista para cima: a distancia do fim fica igual
            m.Add("x", Color.white, new string[0], false, Mono);
            Assert.AreEqual(3, m.Top);
            m.Wheel(240);
            Assert.AreEqual(1, m.Top);
            m.Wheel(-120 * 50);
            Assert.AreEqual(13 - 8, m.Top);
            for (var i = 0; i < 20; i++) m.Add("y" + i, Color.white, new string[0], false, Mono);
            Assert.AreEqual(20, m.Count, "200 linhas no cliente; a mais antiga sai");
            Assert.AreEqual("y19", m.All.Last().Text);
            var t = m.Thumb(76);
            Assert.IsNotNull(t);
            Assert.AreEqual(System.Math.Max(15, 8 * 76 / 20), t.Value.h);
            Assert.IsNull(new ChatListModel { W = 343, H = 141 }.Thumb(76), "sem cursor com poucas linhas");
        }
    }
}
