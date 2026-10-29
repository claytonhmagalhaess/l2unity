// I1-I6 da matriz (Docs/validacao.md): envio do chat (FUN_10139c50), anti-flood (FUN_10136b70/10138860/10137d30) e filtro de
// palavroes (FUN_1014cff0), contra Golden/chat.json (prefixos lidos do NWindow.dll, constantes e tipos do pseudocodigo,
// lista do obscene-e.dat e a sysstring 740).
using System.Collections.Generic;
using System.IO;
using System.Linq;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class ChatTests
    {
        static JToken G => Golden.Load("chat.json");

        [Test]
        public void Prefixos_IguaisATabelaDoNWindow()
        {
            var g = ((JArray)G["prefixes"]).Select(p => ((string)p["text"], (int)p["type"])).ToList();
            CollectionAssert.AreEquivalent(g, L2Chat.Prefixes);
            CollectionAssert.AreEqual(((JArray)G["command"]).Select(c => (string)c), new[] { "/", "／" });
        }

        [Test]
        public void TipoPelaAba()
        {
            var g = (JObject)G["tabType"];
            for (var tab = 0; tab < 5; tab++)
            {
                Assert.AreEqual((int)g[tab.ToString()], L2Chat.TabType[tab]);
                Assert.AreEqual(L2Chat.TabType[tab], L2Chat.Classify("oi", tab)?.Type);
            }
        }

        [Test]
        public void CadaPrefixo_DefineOTipoESaiDoTexto()
        {
            foreach (var p in (JArray)G["prefixes"])
            {
                var text = (string)p["text"];
                var type = (int)p["type"];
                if (type == 2) continue; // sussurro tem teste proprio
                for (var tab = 0; tab < 5; tab++)
                {
                    var s = L2Chat.Classify(text + "oi", tab);
                    Assert.IsNotNull(s, text);
                    Assert.AreEqual(type, s.Value.Type, $"{text} na aba {tab}");
                    Assert.AreEqual("oi", s.Value.Text, text);
                }
            }
            // so o prefixo: nada vai ao servidor
            Assert.IsNull(L2Chat.Classify("!", 0));
            Assert.IsNull(L2Chat.Classify("``", 0));
            Assert.IsNull(L2Chat.Classify("", 0));
            // ~ forca o geral mesmo numa aba de canal
            Assert.AreEqual(0, L2Chat.Classify("~oi", 2)?.Type);
            // sem prefixo o texto vai inteiro, com espacos
            Assert.AreEqual(" oi ", L2Chat.Classify(" oi ", 0)?.Text);
        }

        [Test]
        public void Sussurro_AlvoAteOPrimeiroEspaco()
        {
            foreach (var q in new[] { "\"", "”", "＂" })
            {
                var s = L2Chat.Classify(q + "Nome oi tudo", 0).Value;
                Assert.AreEqual(2, s.Type);
                Assert.AreEqual("Nome", s.Target);
                Assert.AreEqual("oi tudo", s.Text);
                s = L2Chat.Classify(q + "Nome　oi", 3).Value;
                Assert.AreEqual("Nome", s.Target);
                Assert.AreEqual("oi", s.Text);
            }
            // sem alvo: tipo 2, alvo vazio e o texto inteiro (com o prefixo)
            var semAlvo = L2Chat.Classify("\" oi", 0).Value;
            Assert.AreEqual(2, semAlvo.Type);
            Assert.IsNull(semAlvo.Target);
            Assert.AreEqual("\" oi", semAlvo.Text);
            // alvo sem mensagem: nada vai
            Assert.IsNull(L2Chat.Classify("\"Nome", 0));
            Assert.IsNull(L2Chat.Classify("\"Nome ", 0));
        }

        [Test]
        public void AntiFlood_SoNosTiposGeralGritoSussurroEComercio()
        {
            var flood = new HashSet<int>();
            foreach (var p in (JArray)G["prefixes"])
            {
                var s = L2Chat.Classify((string)p["text"] + "Alvo oi", 0).Value;
                if (s.Flood) flood.Add(s.Type);
            }
            CollectionAssert.AreEquivalent(new[] { 0, 1, 2, 8 }, flood);
        }

        [Test]
        public void AntiFlood_ConstantesDoConstrutor()
        {
            var c = ((JArray)G["antiflood"]["constructor"]).Select(v => (long)v).ToArray();
            Assert.AreEqual(c[0], L2Chat.AntiFlood.BlockAbove);
            Assert.AreEqual(c[1], L2Chat.AntiFlood.ReleaseAtOrBelow);
            Assert.AreEqual(c[3], L2Chat.AntiFlood.DecayPerTick);
            Assert.AreEqual(c[4], L2Chat.AntiFlood.PerChar);
            Assert.AreEqual(c[5], L2Chat.AntiFlood.PerMessage);
            Assert.AreEqual(c[6], L2Chat.AntiFlood.Repeat);
            Assert.AreEqual(c[7], System.BitConverter.ToInt32(System.BitConverter.GetBytes(L2Chat.AntiFlood.ScoreFactor), 0));
        }

        [Test]
        public void AntiFlood_BloqueiaAcimaDe20000_RecusaE_LiberaEm10000()
        {
            var msgs = new List<int>();
            var f = new L2Chat.AntiFlood { SystemMessage = msgs.Add };
            // pontuacao esperada pela formula: += int(60*len + 100 + 0,1*p)
            var p = 0;
            var n = 0;
            while (true)
            {
                var text = "mensagem " + n++;
                var expected = p + (int)(60 * text.Length + 100 + 0.1f * p);
                var ok = f.Check(text);
                Assert.AreEqual(expected, f.Score);
                p = expected;
                if (!ok) break;
                Assert.IsEmpty(msgs);
            }
            Assert.IsTrue(f.Blocked);
            Assert.Greater(f.Score, 20000);
            CollectionAssert.AreEqual(new[] { 964, 1078, 966 }, msgs);
            Assert.IsFalse(f.Check("outra"));
            Assert.AreEqual(966, msgs.Last());
            // cada tick tira 200; libera quando tudo fica <= 10000
            msgs.Clear();
            var ticks = 0;
            while (f.Blocked)
            {
                var before = f.Score;
                f.Tick();
                ticks++;
                Assert.AreEqual(System.Math.Max(0, before - 200), f.Score);
            }
            Assert.LessOrEqual(f.Score, 10000);
            CollectionAssert.AreEqual(new[] { 965 }, msgs);
            Assert.Greater(ticks, 0);
        }

        [Test]
        public void AntiFlood_MensagemRepetida()
        {
            var f = new L2Chat.AntiFlood();
            f.Check("igual");
            Assert.AreEqual(2000, f.History.Single().score);
            f.Check("igual");
            Assert.AreEqual(2000 + (int)(0.1f * 2000 + 2000), f.History.Single().score);
            // diferencia maiusculas (appStrcmp)
            f.Check("IGUAL");
            Assert.AreEqual(2, f.History.Count);
            // a entrada repetida sozinha tambem bloqueia
            var g = new L2Chat.AntiFlood();
            for (var i = 0; i < 20 && !g.Blocked; i++)
            {
                g.Check("x");
                g.Score = 0; // so a entrada do historico conta
            }
            Assert.IsTrue(g.Blocked);
            Assert.Greater(g.History.Single().score, 20000);
        }

        [Test]
        public void Palavroes_ListaDoObsceneDat_E_Mascara740()
        {
            var g = G["obscene"];
            var raw = File.ReadAllBytes(Path.Combine(Golden.ClientSystem, "obscene-e.dat"));
            var words = L2Chat.ParseObsceneDat(L2Files.Decrypt(raw));
            CollectionAssert.AreEqual(((JArray)g["words"]).Select(w => (string)w), words);
            var mask = (string)g["mask"];
            Assert.AreEqual(mask + " you", L2Chat.FilterObscene("FuCk you", words, mask));
            Assert.AreEqual("a" + mask + "b " + mask, L2Chat.FilterObscene("ashitb shit", words, mask));
            Assert.AreEqual("limpo", L2Chat.FilterObscene("limpo", words, mask));
        }

        [Test]
        public void OldChatting_SemTipoPelaAba_ESemTil()
        {
            // GIsOldChat = 1 (Option.ini [Game] OldChatting=True no cliente do usuario): a aba nao da o tipo, o campo leva o prefixo
            Assert.AreEqual(0, L2Chat.Classify("oi", 2, true)?.Type);
            Assert.AreEqual(3, L2Chat.Classify(L2Chat.TabPrefix[2] + "oi", 2, true)?.Type);
            Assert.AreEqual("oi", L2Chat.Classify("#oi", 2, true)?.Text);
            var til = L2Chat.Classify("~oi", 0, true).Value;
            Assert.AreEqual(0, til.Type);
            Assert.AreEqual("~oi", til.Text); // o '~' so e prefixo com GIsOldChat = 0
            Assert.AreEqual(2, L2Chat.Classify("\"Nome oi", 0, true)?.Type);
            CollectionAssert.AreEqual(new[] { "", "+", "#", "@", "$" }, L2Chat.TabPrefix);
        }

        [Test]
        public void Macros_SelfETarget()
        {
            // FUN_10137b70 (assembly 0x10137c66-0x10137c99): o espaco antes de um token depende do token ANTERIOR ter sido
            // macro substituida (FUN_10135a20 devolve 1 em 0x10135af2): depois da macro a palavra vem colada
            Assert.AreEqual("oi Alvoeu sou Eu", L2Chat.Macros("oi %target eu sou %SELF", "Eu", "Alvo"));
            Assert.AreEqual("Alvo", L2Chat.Macros("%target", "Eu", "Alvo"));
            Assert.AreEqual("sem macro  aqui", L2Chat.Macros("sem macro  aqui", "Eu", "Alvo"));
            Assert.AreEqual("oi %target", L2Chat.Macros("oi %target", "Eu", null));
            // com macro, a linha e remontada: espacos duplos viram um, colchetes somem, '=' separa
            Assert.AreEqual("a  b Eu", L2Chat.Macros("[a  b]   %self", "Eu", "Alvo"));
            Assert.AreEqual("x y Eu", L2Chat.Macros("x=y %self", "Eu", "Alvo"));
            // '$' no comeco: "%s%s" se o 1o token foi macro, "%s %s" se nao
            Assert.AreEqual("$Alvooi", L2Chat.Macros("$%target oi", "Eu", "Alvo"));
            Assert.AreEqual("$ oi Alvo", L2Chat.Macros("$oi %target", "Eu", "Alvo"));
            // %party1 sem membro: o token esvazia mas nao conta como substituicao, entao o texto volta inteiro
            Assert.AreEqual("%party1 x", L2Chat.Macros("%party1 x", "Eu", "Alvo"));
            Assert.AreEqual("Anax", L2Chat.Macros("%PARTY1 x", "Eu", "Alvo", null, new[] { "Ana" }));
        }
    }
}
