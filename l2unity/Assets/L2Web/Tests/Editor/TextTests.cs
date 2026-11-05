// L1/L2 da matriz (Docs/validacao.md): sysstring e systemmsg lidos dos .dat do cliente (L2Texts) contra Golden/texts.json
// (amostra de 100 ids de cada tabela mais os ids usados no chat e na interface, de out/re/strings.json e
// out/re/systemmsg_full.json), e o GameData usando esses textos (cor, som, parametros).
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Newtonsoft.Json.Linq;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class TextTests
    {
        static JToken G => Golden.Load("texts.json");

        static byte[] Dat(string name) => L2Files.Decrypt(File.ReadAllBytes(Path.Combine(Golden.ClientSystem, name)));

        [Test]
        public void SysString_AmostraIgualAoCliente()
        {
            var all = L2Texts.ParseSysString(Dat("sysstring-e.dat"));
            Assert.AreEqual((int)G["sysstringCount"], all.Count);
            foreach (var kv in (JObject)G["sysstring"])
                Assert.AreEqual((string)kv.Value, all[int.Parse(kv.Key)], "sysstring " + kv.Key);
        }

        [Test]
        public void SystemMsg_AmostraIgualAoCliente_ComCorSomETipo()
        {
            var all = L2Texts.ParseSystemMsg(Dat("systemmsg-e.dat"));
            Assert.AreEqual((int)G["systemmsgCount"], all.Count);
            foreach (var kv in (JObject)G["systemmsg"])
            {
                var r = all[int.Parse(kv.Key)];
                var g = kv.Value;
                Assert.AreEqual((string)g["msg"], r.Msg, "msg " + kv.Key);
                Assert.AreEqual((int)g["group"], r.Group, "grupo " + kv.Key);
                CollectionAssert.AreEqual(((JArray)g["col"]).Select(c => (byte)(int)c), r.Color, "cor " + kv.Key);
                Assert.AreEqual((string)g["snd"], r.Sound, "som " + kv.Key);
                Assert.AreEqual((string)g["voice"], r.Voice, "voz " + kv.Key);
                Assert.AreEqual((string)g["typ"], r.Type, "tipo " + kv.Key);
            }
        }

        [Test]
        public void NpcNameDat_NomeTituloECor()
        {
            // NpcName-e.dat da copia (Ver413): d id, nome, titulo, cor BGRA
            var a = GameData.ClientNpcName(10000);
            Assert.IsNotNull(a, "sem NpcName-e.dat na copia");
            Assert.AreEqual("Andromeda", a.Name);
            Assert.AreEqual("Weeding Manager", a.Title); // assim no arquivo do cliente
            var b = GameData.ClientNpcName(10001);
            Assert.AreEqual("Class Manager", b.Name);
            Assert.AreEqual("www.L2Ketra.com", b.Title);
            Assert.AreEqual("rgb(255,0,0)", b.TitleCss); // vermelho, como nas capturas do original
            Assert.IsNull(GameData.ClientNpcName(-5));
        }

        [Test]
        public void GameData_UsaOsDatDaCopiaLocal()
        {
            if (!File.Exists(GameData.ClientFile("systemmsg-e.dat"))) Assert.Ignore("sem a copia em StreamingAssets/L2Web/client/System");
            // N4 (decisao do usuario): a copia local leva o systemmsg-e.dat oficial (pasta _back), nao o editado pelo servidor
            var g = (JObject)G["official"]["964"];
            var t = GameData.SystemMessage(964, new List<string>());
            Assert.AreEqual((string)g["msg"], t.Text);
            Assert.AreEqual((string)g["snd"], t.Sound);
            // bytes B, G, R, A (02 §3.6): a 964 sai com a cor que o anti-flood passa (FUN_10138860)
            var col = ((JArray)g["col"]).Select(c => (int)c).ToArray();
            Assert.AreEqual($"#{col[2]:x2}{col[1]:x2}{col[0]:x2}", t.Color);
            var block = (uint)(long)Golden.Load("chat.json")["antiflood"]["blockMsgColor"];
            Assert.AreEqual(block, t.Record.Argb);
            Assert.AreEqual((string)G["sysstring"]["740"], GameData.SysString(740));
            // parametros $sN
            foreach (var kv in (JObject)G["official"])
            {
                var o = GameData.SystemMessage(int.Parse(kv.Key), new List<string>());
                if (!((string)kv.Value["msg"]).Contains("$s")) Assert.AreEqual((string)kv.Value["msg"], o.Text, "oficial " + kv.Key);
            }
            var withParam = ((JObject)G["official"]).Properties().First(p => ((string)p.Value["msg"]).Contains("$s1"));
            var filled = GameData.SystemMessage(int.Parse(withParam.Name), new List<string> { "XYZ" }).Text;
            StringAssert.Contains("XYZ", filled);
            StringAssert.DoesNotContain("$s1", filled);
        }
    }
}
