// J6 da matriz (Docs/validacao.md): o Option.ini do Unity tem as secoes e chaves do Option.ini gravado pelo original
// (Golden/option_ini.json, de out/re/runtime/Option.ini) menos as secoes acrescentadas pelo servidor (decisao N3), na
// mesma ordem, com o formato do original (True/False, floats com 6 casas, CRLF).
using System.IO;
using System.Linq;
using Newtonsoft.Json.Linq;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class OptionIniTests
    {
        [Test]
        public void SecoesEChaves_DoOriginal_SemAsDoServidor()
        {
            var src = GameData.ClientFile("Option.ini");
            if (!File.Exists(src)) Assert.Ignore("sem a copia do Option.ini em StreamingAssets/L2Web/client/System");
            var g = ((JArray)Golden.Load("option_ini.json")).Where(s => !L2Options.ServerSections.Contains((string)s["section"])).ToList();
            L2Options.Load(src);
            var tmp = Path.Combine(Path.GetTempPath(), "l2web_option_test.ini");
            L2Options.Save(tmp);
            L2Options.Load(tmp);
            var got = L2Options.Keys().ToList();
            var expected = g.SelectMany(s => ((JArray)s["keys"]).Select(k => ((string)s["section"], (string)k))).ToList();
            // a copia e a do cliente instalado; as chaves batem com as do arquivo da sessao observada (87)
            CollectionAssert.AreEqual(expected.Select(e => e.Item1).Distinct(), got.Select(e => e.section).Distinct(), "secoes");
            CollectionAssert.IsSubsetOf(expected, got, "chaves do original");
            foreach (var s in L2Options.ServerSections) Assert.IsFalse(got.Any(k => k.section == s), s);
            var text = File.ReadAllText(tmp);
            StringAssert.Contains("\r\n", text);
            StringAssert.Contains("[Video]\r\n", text);
            File.Delete(tmp);
        }

        [Test]
        public void Formato_TrueFalse_FloatsCom6Casas()
        {
            var tmp = Path.Combine(Path.GetTempPath(), "l2web_option_test2.ini");
            File.WriteAllText(tmp, "[Audio]\r\nSoundVolume=0.200000\r\n[Game]\r\nOldChatting=True\r\n");
            L2Options.Load(tmp);
            Assert.IsTrue(L2Options.GetBool("Game", "OldChatting"));
            Assert.AreEqual(0.2f, L2Options.GetFloat("Audio", "SoundVolume"), 1e-6);
            L2Options.SetFloat("Audio", "SoundVolume", 0.5f);
            L2Options.SetBool("Game", "OldChatting", false);
            StringAssert.Contains("SoundVolume=0.500000\r\n", L2Options.Build());
            StringAssert.Contains("OldChatting=False\r\n", L2Options.Build());
            File.Delete(tmp);
        }
    }
}
