// F4 da matriz (Docs/validacao.md): o WindowsInfo.ini que o Unity grava tem exatamente as secoes e chaves do arquivo gravado
// pelo original (Golden/windowsinfo.json, de out/re/runtime/WindowsInfo.ini): 47 posicoes (savePosition, incluindo as barras
// filhas do ShortcutWnd e o GMInventoryWnd pela heranca), 6 tamanhos (saveSize) e as secoes numericas [1]..[8], na mesma ordem.
using System.IO;
using System.Linq;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class WindowsInfoTests
    {
        [OneTimeSetUp]
        public void CarregaOLayout()
        {
            var ui = Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "ui");
            if (!File.Exists(Path.Combine(ui, "layout.json"))) Assert.Ignore("sem a copia local de /ui");
            L2WndUtil.Use(JObject.Parse(File.ReadAllText(Path.Combine(ui, "layout.json"))), JObject.Parse(File.ReadAllText(Path.Combine(ui, "textures.json"))));
        }

        [Test]
        public void SecoesEChaves_IguaisAoOriginal_NaMesmaOrdem()
        {
            var g = (JArray)Golden.Load("windowsinfo.json");
            var tmp = Path.Combine(Path.GetTempPath(), "l2web_windowsinfo_test.ini");
            if (File.Exists(tmp)) File.Delete(tmp);
            L2WindowsInfo.Load(tmp); // arquivo vazio: tudo pelo padrao
            File.WriteAllText(tmp, L2WindowsInfo.Build(null, n => L2WindowsInfo.Default(n, new Vector2(1024, 768))));
            L2WindowsInfo.Load(tmp);
            var lines = File.ReadAllLines(tmp);
            var got = new System.Collections.Generic.List<(string section, string[] keys)>();
            foreach (var l in lines)
            {
                if (l.StartsWith("[")) got.Add((l.Trim('[', ']'), new string[0]));
                else if (l.Contains("=")) got[got.Count - 1] = (got[^1].section, got[^1].keys.Append(l.Split('=')[0]).ToArray());
            }
            CollectionAssert.AreEqual(g.Select(s => (string)s["section"]), got.Select(s => s.section), "secoes");
            for (var i = 0; i < g.Count; i++)
                CollectionAssert.AreEqual(((JArray)g[i]["keys"]).Select(k => (string)k), got[i].keys, "chaves de [" + got[i].section + "]");
            Assert.AreEqual(47, got.Count(s => s.keys.Contains("posX") && !int.TryParse(s.section, out _)));
            Assert.AreEqual(6, got.Count(s => s.keys.Contains("width") && !int.TryParse(s.section, out _)));
            File.Delete(tmp);
        }

        [Test]
        public void SoAsJanelasComSavePosition_GuardamPosicao()
        {
            var tmp = Path.Combine(Path.GetTempPath(), "l2web_windowsinfo_test2.ini");
            if (File.Exists(tmp)) File.Delete(tmp);
            L2WindowsInfo.Load(tmp);
            Assert.IsTrue(L2WindowsInfo.SavesPosition("InventoryWnd"));
            Assert.IsTrue(L2WindowsInfo.SavesPosition("GMInventoryWnd")); // herda do InventoryWnd (superName, -1)
            Assert.IsFalse(L2WindowsInfo.SavesPosition("ChatWnd"));
            Assert.IsTrue(L2WindowsInfo.SavesPosition(L2WindowsInfo.XdatName("ShortcutBar1")));
            Assert.IsFalse(L2WindowsInfo.SavesPosition(L2WindowsInfo.XdatName("ShortcutBar2"))); // Horizontal_1 = -1, sem superName
            L2WindowsInfo.SetPosition("InventoryWnd", new Vector2(100, 200));
            L2WindowsInfo.SetPosition("ChatWnd", new Vector2(5, 5));
            Assert.IsTrue(L2WindowsInfo.TryPosition("InventoryWnd", out var p));
            Assert.AreEqual(new Vector2(100, 200), p);
            Assert.IsFalse(L2WindowsInfo.TryPosition("ChatWnd", out _));
        }
    }
}
