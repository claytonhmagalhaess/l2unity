// E1/E2 da matriz (Docs/validacao.md): formato "Chave=Valor" do param (93 §8.2), com os casos de borda do appStrfind do
// Core.dll e do FUN_1003fc20/FUN_1003fb30 do NWindow.dll.
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class ParamTests
    {
        const char Q = L2Param.Quote;

        static string S(string param, string key, string def = "(nada)")
        {
            var v = def;
            return L2Param.ParseString(param, key, ref v) ? v : null;
        }

        [Test]
        public void ParamAdd_EspacoEntrePares_ValorEntre7F()
        {
            var p = L2Param.Add("", "Type", 2);
            Assert.AreEqual($"Type={Q}2{Q}", p);
            p = L2Param.Add(p, "Msg", "oi tudo bem");
            Assert.AreEqual($"Type={Q}2{Q} Msg={Q}oi tudo bem{Q}", p);
            Assert.AreEqual("oi tudo bem", S(p, "Msg"));
            Assert.AreEqual("2", S(p, "Type"));
        }

        [Test]
        public void ParamAdd_ChaveOuValorVazioNaoMuda()
        {
            Assert.AreEqual("", L2Param.Add("", "", "x"));
            Assert.AreEqual("", L2Param.Add("", "A", ""));
            Assert.AreEqual($"A={Q}1{Q}", L2Param.Add($"A={Q}1{Q}", "B", ""));
        }

        [Test]
        public void ParseString_IdNaoCasaEmServerId_MasCasaEmServer_Id()
        {
            Assert.IsNull(S("ServerID=5", "ID"));
            Assert.AreEqual("5", S($"ServerID={Q}5{Q} ID={Q}3{Q}", "ServerID"));
            Assert.AreEqual("3", S($"ServerID={Q}5{Q} ID={Q}3{Q}", "ID"));
            Assert.AreEqual("7", S("Server_ID=7", "ID"));
        }

        [Test]
        public void ParseString_SemDiferenciarMaiusculas()
        {
            Assert.AreEqual("4", S("id=4", "ID"));
            Assert.AreEqual("4", S("Id=4", "iD"));
        }

        [Test]
        public void ParseString_OcorrenciaSemIgualContinuaABusca()
        {
            Assert.AreEqual("2", S("ID IDX=1 ID=2", "ID"));
        }

        [Test]
        public void ParseString_ValorSemAspasTerminaNoEspaco()
        {
            Assert.AreEqual("12", S("A=12 B=3", "A"));
            Assert.AreEqual("3", S("A=12 B=3", "B"));
            Assert.AreEqual("", S("A= B=3", "A"));
        }

        [Test]
        public void ParseString_CasaDentroDeUmValor_PorqueABuscaNaoPulaValores()
        {
            // o valor achado dentro de outro valor nao comeca por 0x7F: termina no espaco ou no fim, e leva o 0x7F junto
            Assert.AreEqual($"3{Q}", S($"Msg={Q}a ID=3{Q}", "ID"));
        }

        [Test]
        public void ParseString_NoMaximo4096Caracteres()
        {
            var longo = new string('x', 5000);
            Assert.AreEqual(4096, S($"A={Q}{longo}{Q}", "A").Length);
        }

        [Test]
        public void Parse_ChaveOuParamVazio_NaoAchaENaoMudaASaida()
        {
            var v = "antes";
            Assert.IsFalse(L2Param.ParseString("", "A", ref v));
            Assert.IsFalse(L2Param.ParseString("A=1", "", ref v));
            Assert.IsFalse(L2Param.ParseString("A=1", "B", ref v));
            Assert.AreEqual("antes", v);
            var n = 9;
            Assert.IsFalse(L2Param.ParseInt("A=1", "B", ref n));
            Assert.AreEqual(9, n);
        }

        [Test]
        public void ParseInt_AppAtoi()
        {
            var n = 0;
            Assert.IsTrue(L2Param.ParseInt($"A={Q}-12abc{Q}", "A", ref n));
            Assert.AreEqual(-12, n);
            Assert.IsTrue(L2Param.ParseInt("A=x", "A", ref n));
            Assert.AreEqual(0, n);
            Assert.IsTrue(L2Param.ParseInt(L2Param.Add("", "Id", 268480740), "Id", ref n));
            Assert.AreEqual(268480740, n);
        }
    }
}
