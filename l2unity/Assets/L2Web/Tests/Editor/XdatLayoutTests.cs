// F1/F2 da matriz (Docs/validacao.md): o retangulo de cada controle calculado pelo L2Wnd (a partir do /ui/layout.json que o
// Unity le) contra Golden/xdat_rects.json, calculado do out/re/interface_layout.json do l2anim com a semantica da
// ancora da 93 §2 (1o ponto = do proprio controle). Bate os dados (mesmo xdat) e a conta das ancoras.
using System.Collections.Generic;
using System.IO;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class XdatLayoutTests
    {
        readonly List<GameObject> made = new();

        [OneTimeSetUp]
        public void CarregaOLayout()
        {
            var ui = Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "ui");
            if (!File.Exists(Path.Combine(ui, "layout.json"))) Assert.Ignore("sem a copia local de /ui");
            L2WndUtil.Use(JObject.Parse(File.ReadAllText(Path.Combine(ui, "layout.json"))), JObject.Parse(File.ReadAllText(Path.Combine(ui, "textures.json"))));
        }

        [TearDown]
        public void Limpa()
        {
            foreach (var g in made)
                if (g) Object.DestroyImmediate(g);
            made.Clear();
        }

        /// <summary>As 140 janelas do Interface.xdat.</summary>
        static IEnumerable<string> Janelas()
        {
            var f = Path.Combine(Application.dataPath, "L2Web/Tests/Editor/Golden/xdat_rects.json");
            if (!File.Exists(f)) yield break;
            foreach (var p in JObject.Parse(File.ReadAllText(f)).Properties()) yield return p.Name;
        }

        [TestCaseSource(nameof(Janelas))]
        public void Controles_IguaisAoInterfaceXdat(string janela)
        {
            var g = Golden.Load("xdat_rects.json")[janela];
            var root = new GameObject("teste " + janela, typeof(RectTransform));
            made.Add(root);
            var layer = new L2Layer(root.transform);
            var w = new L2Wnd(janela, layer);
            Assert.AreEqual((float)g["size"][0], w.Size[0]);
            Assert.AreEqual((float)g["size"][1], w.Size[1]);
            var erros = new List<string>();
            foreach (var p in ((JObject)g["rects"]).Properties())
            {
                var r = w.RectOf(p.Name);
                var e = (JArray)p.Value;
                // TextBox autosize: NCTextBox::RefreshTextCoords (0x10051af0) poe a largura do texto + 1 em tempo de execucao
                bool Auto(string n) => w.Ctrl(n) is { } c && c.Type == "TextBox" && c.N("autosize") == 1 && !string.IsNullOrEmpty(w.TextEl(n)?.text);
                // ancorado (em cadeia) numa caixa autosize: a posicao acompanha a largura do texto
                bool Moved(string n, int d = 0)
                {
                    var a = w.Ctrl(n)?.Anchor;
                    if (d > 20 || a == null || string.IsNullOrEmpty(a.Ctrl)) return false;
                    var t = a.Ctrl.Substring(a.Ctrl.LastIndexOf('.') + 1);
                    return t != n && (Auto(t) || Moved(t, d + 1));
                }
                var auto = Auto(p.Name);
                // a caixa autosize encolhe pelo textAlign (RefreshTextCoords: MoveTo(x + deslocamento do alinhamento), #0051):
                // esquerda mantem a borda esquerda, centro o centro, direita a borda direita
                var fx = L2Wnd.AutoSizeAnchor(w.Ctrl(p.Name)?.N("textAlign") ?? 1);
                var ex = auto ? (float)e[0] + ((float)e[2] - r.W) * fx : (float)e[0];
                if (!Moved(p.Name) && (Mathf.Abs(r.X - ex) > 0.01f || Mathf.Abs(r.Y - (float)e[1]) > 0.01f || !auto && Mathf.Abs(r.W - (float)e[2]) > 0.01f || Mathf.Abs(r.H - (float)e[3]) > 0.01f))
                    erros.Add($"{janela}.{p.Name}: Unity ({r.X}, {r.Y}, {r.W}, {r.H}) != xdat ({e[0]}, {e[1]}, {e[2]}, {e[3]})");
            }
            Assert.IsEmpty(erros, string.Join("\n", erros));
        }

        [Test]
        public void Ancora_PrimeiroPontoEDoProprioControle()
        {
            // 93 §2: DialogBox.NumberPad num2 a direita de num1 (x+1) e num4 abaixo (y+1): o teclado 3x3
            var g = (JObject)Golden.Load("xdat_rects.json")["DialogBox"]["rects"];
            float X(string n) => (float)g[n][0];
            float Y(string n) => (float)g[n][1];
            Assert.AreEqual(X("num1") + (float)g["num1"][2] + 1, X("num2"));
            Assert.AreEqual(Y("num1"), Y("num2"));
            Assert.AreEqual(Y("num1") + (float)g["num1"][3] + 1, Y("num4"));
            Assert.AreEqual(X("num1"), X("num4"));
        }
    }
}
