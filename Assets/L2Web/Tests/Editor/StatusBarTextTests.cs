// #0054: texto "atual/maximo" das barras da StatusWnd (NCStatusBarCtrl::OnPaint, nw:0x1004c7c0). O texto ficava sobreposto
// quando a barra era redesenhada mais de uma vez no mesmo quadro (UserInfo e StatusUpdate de um buff de HP maximo): o
// L2Digits.Draw destruia o container com Object.Destroy (adiado) e a chamada seguinte achava o antigo pelo nome.
using System.Collections.Generic;
using System.IO;
using System.Text;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.Tests
{
    public class StatusBarTextTests
    {
        const string Cells = "0123456789HMP/%.C:";
        readonly List<GameObject> made = new();

        [OneTimeSetUp]
        public void CarregaOLayout()
        {
            var ui = Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "ui");
            if (!File.Exists(Path.Combine(ui, "layout.json"))) Assert.Ignore("sem a copia local de /ui");
            L2WndUtil.Use(JObject.Parse(File.ReadAllText(Path.Combine(ui, "layout.json"))), JObject.Parse(File.ReadAllText(Path.Combine(ui, "textures.json"))));
            var texts = Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "texts.json");
            if (File.Exists(texts)) GameData.LoadTextsFromFile(texts);
        }

        [SetUp]
        public void SemWindowsInfo() => L2WindowsInfo.Load(Path.Combine(Path.GetTempPath(), "l2web-sem-windowsinfo.ini"));

        [TearDown]
        public void Limpa()
        {
            foreach (var g in made) Object.DestroyImmediate(g);
            made.Clear();
            L2WindowsInfo.Load();
        }

        L2Layer Layer()
        {
            var root = new GameObject("teste barras", typeof(RectTransform));
            made.Add(root);
            return new L2Layer(root.transform);
        }

        /// <summary>Texto que os glifos ativos do container mostram (celula pela UV da tira L2UI.NWindow.Number).</summary>
        static string Shown(Transform container)
        {
            var texW = L2WndUtil.Tex(L2Digits.Types[1].tex).W;
            var sb = new StringBuilder();
            for (var i = 0; i < container.childCount; i++)
            {
                var g = container.GetChild(i);
                if (!g.gameObject.activeSelf) continue;
                var img = g.GetComponent<RawImage>();
                Assert.AreEqual(8 * sb.Length, ((RectTransform)g).anchoredPosition.x, "avanco de 8 px por glifo");
                sb.Append(Cells[Mathf.RoundToInt(img.uvRect.x * texW / 8)]);
            }
            return sb.ToString();
        }

        /// <summary>Containers com esse nome (ativos) dentro da barra.</summary>
        static List<Transform> Named(Transform bar, string name)
        {
            var o = new List<Transform>();
            for (var i = 0; i < bar.childCount; i++)
                if (bar.GetChild(i).name == name && bar.GetChild(i).gameObject.activeSelf) o.Add(bar.GetChild(i));
            return o;
        }

        [Test]
        public void Draw_ReaproveitaOContainerEOsGlifos()
        {
            Assume.That(L2WndUtil.Tex(L2Digits.Types[1].tex), Is.Not.Null);
            var p = new GameObject("pai", typeof(RectTransform));
            made.Add(p);
            var parent = (RectTransform)p.transform;
            var a = L2Digits.Draw(parent, "d", "4087", 10, 2);
            var b = L2Digits.Draw(parent, "d", "12", 20, 2);
            Assert.AreSame(a, b, "mesmo nome = mesmo container");
            Assert.AreEqual(1, parent.childCount);
            Assert.AreEqual("12", Shown(b));
            Assert.AreEqual(new Vector2(16, 8), b.sizeDelta);
            Assert.AreEqual(new Vector2(20, -2), b.anchoredPosition);
            Assert.AreEqual("56301", Shown(L2Digits.Draw(parent, "d", "56301", 0, 2)));
            L2Digits.Hide(parent, "d");
            Assert.IsFalse(a.gameObject.activeSelf);
            Assert.AreEqual("7", Shown(L2Digits.Draw(parent, "d", "7", 0, 2)));
            Assert.IsTrue(a.gameObject.activeSelf);
        }

        [Test]
        public void StatusWnd_BuffDeHpMaximoNoMesmoQuadro()
        {
            var w = new L2Wnd("StatusWnd", Layer());
            var bar = w.BarInfo("HPBar");
            Assume.That(bar, Is.Not.Null);
            Assume.That(L2WndUtil.Tex(L2Digits.Types[1].tex), Is.Not.Null);
            Assert.IsTrue(bar.Digits);
            // vida cheia; o buff aumenta o maximo (UserInfo) e a regeneracao chega no StatusUpdate seguinte, tudo num quadro
            w.Bar("HPBar", 4087, 4087);
            w.Bar("HPBar", 4087, 5630);
            w.Bar("HPBar", 4100, 5630);
            var want = L2Digits.StatusBarText(null, bar.W, 4100, 5630, null);
            for (var i = 0; i < 3; i++)
            {
                var c = Named(bar.El, "dig" + i);
                Assert.AreEqual(1, c.Count, "um texto por parte (dig" + i + ")");
                Assert.AreEqual(want[i].text, Shown(c[0]));
                Assert.AreEqual(want[i].x, ((RectTransform)c[0]).anchoredPosition.x);
                Assert.AreEqual(-2, ((RectTransform)c[0]).anchoredPosition.y);
            }
            // a barra segue o maximo novo na hora
            Assert.AreEqual(bar.W * 4100f / 5630f, bar.Fill.rectTransform.sizeDelta.x, 0.01f);
            Assert.AreEqual("HP", Shown(Named(bar.El, "digTitle")[0]));
        }

        [TestCase(1, 9)]
        [TestCase(12, 99)]
        [TestCase(408, 999)]
        [TestCase(4087, 5630)]
        [TestCase(40870, 56300)]
        public void StatusWnd_TextoLegivelDe1a5Digitos(int cur, int max)
        {
            var w = new L2Wnd("StatusWnd", Layer());
            foreach (var name in new[] { "CPBar", "HPBar", "MPBar" })
            {
                var bar = w.BarInfo(name);
                Assume.That(bar, Is.Not.Null);
                w.Bar(name, cur, max);
                var p = L2Digits.StatusBarText(null, bar.W, cur, max, null);
                float slash = p[0].x, curX = p[1].x, maxX = p[2].x;
                // as celulas so se tocam nas 2 colunas de contorno (os glifos acesos ocupam as colunas 0..5 de 8)
                Assert.LessOrEqual(curX + L2Digits.Width(cur.ToString()) - slash, 2, name + ": atual x barra");
                Assert.LessOrEqual(slash + 8 - maxX, 2, name + ": barra x maximo");
                Assert.Greater(curX, 9 + L2Digits.Width(name.Substring(0, 2)) - 2, name + ": titulo x atual");
                Assert.LessOrEqual(maxX + L2Digits.Width(max.ToString()), bar.W, name + ": cabe na barra");
                Assert.AreEqual(cur.ToString(), Shown(Named(bar.El, "dig1")[0]));
                Assert.AreEqual(max.ToString(), Shown(Named(bar.El, "dig2")[0]));
            }
        }

        [Test]
        public void StatusWnd_RecortaNoRetanguloDaBarraEExpEmPorcentagem()
        {
            var w = new L2Wnd("StatusWnd", Layer());
            foreach (var name in new[] { "CPBar", "HPBar", "MPBar", "EXPBar" })
            {
                var bar = w.BarInfo(name);
                Assume.That(bar, Is.Not.Null);
                Assert.IsNotNull(bar.El.GetComponent<RectMask2D>(), name + ": SetClip do OnPaint");
            }
            var exp = w.BarInfo("EXPBar");
            w.Bar("EXPBar", 42.5f, 100, "42.50%");
            w.Bar("EXPBar", 7.25f, 100, "7.25%");
            Assert.AreEqual(1, Named(exp.El, "dig0").Count);
            Assert.AreEqual("7.25%", Shown(Named(exp.El, "dig0")[0]));
            Assert.AreEqual(0, Named(exp.El, "dig1").Count);
            Assert.AreEqual(0, Named(exp.El, "dig2").Count);
        }

        [TestCase("TargetStatusWnd", "barHP")]
        [TestCase("PetStatusWnd", "barHP")]
        [TestCase("SummonedStatusWnd", "barHP")]
        public void BarCtrl_SemTexto(string wnd, string name)
        {
            // NCBarCtrl (nw:0x10002f70) so desenha textura (SetClip, DrawTexture, ReleaseClip): nenhum texto na barra
            var w = new L2Wnd(wnd, Layer());
            var bar = w.BarInfo(name);
            Assume.That(bar, Is.Not.Null);
            Assert.AreEqual("BarCtrl", w.Ctrl(name).Type);
            w.Bar(name, 4087, 5630);
            Assert.IsFalse(bar.Digits);
            for (var i = 0; i < bar.El.childCount; i++) StringAssert.DoesNotStartWith("dig", bar.El.GetChild(i).name);
            Assert.AreEqual(bar.W * 4087f / 5630f, bar.Fill.rectTransform.sizeDelta.x, 0.01f);
        }
    }
}
