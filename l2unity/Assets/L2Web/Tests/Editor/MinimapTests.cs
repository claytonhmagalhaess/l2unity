// K6 da matriz (Docs/validacao.md): NCMinimapWnd. Golden/minimap.json (Docs/tools/gen_golden.py minimap): constantes da
// desmontagem do NWindow.dll (excecoes, projecao, tamanho do mapa, grade); o resto segue o pseudocodigo (03 §4).
using System.IO;
using System.Linq;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class MinimapTests
    {
        static JObject G => (JObject)Golden.Load("minimap.json");

        [Test]
        public void Constantes_IguaisADesmontagem()
        {
            var g = G;
            Assert.AreEqual((double)g["unitsToPixel"], MinimapModel.UnitsToPixel);
            Assert.AreEqual((int)g["offsetX"], MinimapModel.OffsetX);
            Assert.AreEqual((int)g["offsetY"], MinimapModel.OffsetY);
            Assert.AreEqual((int)g["mapWidth"], MinimapModel.WorldWidth);
            Assert.AreEqual((int)g["mapHeight"], MinimapModel.WorldHeight);
            Assert.AreEqual((int)g["gridCell"], MinimapModel.Cell);
            var ex = (JArray)g["exceptions"];
            Assert.AreEqual(ex.Count, MinimapModel.Exceptions.Length);
            for (var i = 0; i < ex.Count; i++)
            {
                var e = ex[i];
                Assert.AreEqual(((int)e["minX"], (int)e["maxX"], (int)e["minY"], (int)e["maxY"], (int)e["minZ"], (int)e["maxZ"], (int)e["px"], (int)e["py"]),
                    MinimapModel.Exceptions[i], $"excecao {i}");
            }
            // 164 px por regiao; o canto da regiao 16_10 e (0, 0)
            var m = new MinimapModel(null, 328, 328);
            Assert.AreEqual((0, 0), m.Project(-131072, -262144, 0));
            Assert.AreEqual((164, 164), m.Project(-131072 + 32768, -262144 + 32768, 0));
            Assert.AreEqual((100, 2478), m.LocWithException(45000, 245000, -5000, true, 0));
            Assert.AreNotEqual((100, 2478), m.LocWithException(45000, 245000, -3000, true, 0));
            Assert.AreEqual((100, 2478), m.LocWithException(45000, 245000, -3000, false, 0), "alvos testam so x, y");
        }

        [Test]
        public void Grade_ECentralizacao()
        {
            var g = G;
            var m = new MinimapModel(null, 328, 328);
            m.Center(10, 10, 1804, 2624);
            Assert.AreEqual((0, 0), (m.ViewX, m.ViewY));
            m.Center(1800, 2620, 1804, 2624);
            Assert.AreEqual((1804 - 328, 2624 - 328), (m.ViewX, m.ViewY));
            m.Center(1000, 1000, 1804, 2624);
            Assert.AreEqual((836, 836), (m.ViewX, m.ViewY));
            var (cols, rows) = m.Grid();
            // vista 836: primeira coluna em 61 - 836 % 61 = 18, rotulo 836/61 + 20 = 33; linhas com rotulo + 1
            Assert.AreEqual(18, cols[0].pos);
            Assert.AreEqual(((int)g["gridLabelBase"] + 836 / 61).ToString(), cols[0].label);
            Assert.AreEqual((329 / 61) + 1, cols.Count);
            Assert.AreEqual(18, rows[0].pos);
            Assert.IsNull(rows[0].label, "y <= 20 nao desenha o rotulo");
            Assert.AreEqual((836 / 61 + 22).ToString(), rows[1].label);
            m.Center(1000, 1000, 1804, 2624);
            m.Drag(-2000, 5000);
            Assert.AreEqual((0, 2624 - 328), (m.ViewX, m.ViewY));
        }

        [Test]
        public void MapaDeCidade_ZoomReduceEBotoes()
        {
            var z = L2Zone.Instance;
            if (z == null) Assert.Ignore("sem dados de zona");
            var m = new MinimapModel(z, 328, 328) { Player = () => (84769, 148680, -3377) };
            Assert.AreEqual(22, m.TownMaps.Count);
            var shown = new System.Collections.Generic.List<bool>();
            m.ReduceBtn = b => shown.Add(b);
            z.Lookup(84769, 148680, -3377);
            m.AdjustMapView(84769, 148680, -3377);
            var giran = z.Record(m.CurMap);
            Assert.AreEqual("map_giran_castle_town", giran?.TownMapTex);
            Assert.AreEqual(true, shown.Last());
            var (px, py) = m.Project(84769, 148680, m.CurMap);
            Assert.AreEqual(((int)((84769 - giran.TownMapX) * giran.TownMapScale), (int)((148680 - giran.TownMapY) * giran.TownMapScale)), (px, py));
            Assert.IsTrue(m.TownButtons().All(b => !b.shown), "no mapa de cidade os botoes + somem");
            m.ReduceClick();
            Assert.AreEqual(0, m.CurMap);
            Assert.AreEqual(false, shown.Last());
            var me = m.MyLocation();
            Assert.IsTrue(me.shown);
            Assert.AreEqual((int)((84769 + 131072) * MinimapModel.UnitsToPixel) - m.ViewX, me.x);
            // a_ZoomToTownMap = false longe da cidade atual: mapa-mundi
            m.AdjustMapView(84769, 148680, -3377);
            m.AdjustMapView(-80000, 150000, -3000, false);
            Assert.AreEqual(0, m.CurMap);
            var btn = m.TownButtons();
            Assert.AreEqual(22, btn.Count);
            var gi = m.TownMaps.FindIndex(t => t.rec.TownMapTex == "map_giran_castle_town");
            m.TownButtonClick(gi);
            Assert.AreEqual("map_giran_castle_town", z.Record(m.CurMap).TownMapTex);
        }

        [Test]
        public void Script_HoraSsqEArmas()
        {
            Assert.AreEqual("AM 12 : 00", MinimapScript.TimeText(0, 0));
            Assert.AreEqual("PM 03 : 07", MinimapScript.TimeText(15, 7));
            Assert.AreEqual("PM 12 : 30", MinimapScript.TimeText(12, 30));
            Assert.IsFalse(MinimapScript.Sun(5));
            Assert.IsTrue(MinimapScript.Sun(6));
            var s = new MinimapScript { SysString = i => "S" + i };
            Assert.IsTrue(s.ShowMinimap(L2Param.Add("", "SSQStatus", 2)));
            Assert.IsTrue(s.NormalVisible);
            Assert.AreEqual("S975", s.SsqText);
            Assert.IsFalse(s.ShowMinimap(""));
            s.ExpandState = true;
            Assert.IsTrue(s.ShowMinimap(""));
            Assert.IsTrue(s.ExpandVisible && !s.NormalVisible);
            var p = L2Param.Add(L2Param.Add(L2Param.Add("", "NUM", 1), "ID0", 8190), "NAME0", "Zariche");
            CollectionAssert.AreEqual(new[] { ("S1463", 0), ("Zariche", 8190) }, s.CursedList(p, false));
            CollectionAssert.AreEqual(new[] { ("S1463", 0), ("", 0), ("Zariche", 8190) }, s.CursedList(p, true));
            Assert.AreEqual("L2UI_CH3.MiniMap.cursedmapicon02_drop", MinimapScript.CursedIcon(8689, true));
            Assert.AreEqual(0, s.NextPartyLoc(2));
            Assert.AreEqual(1, s.NextPartyLoc(2));
            Assert.AreEqual(0, s.NextPartyLoc(2));
        }
    }

    public class TextBoxAutosizeTests
    {
        [Test]
        public void RotulosDoMinimapa_EmCadeia()
        {
            var ui = Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "ui");
            if (!File.Exists(Path.Combine(ui, "layout.json"))) Assert.Ignore("sem a copia local de /ui");
            L2WndUtil.Use(JObject.Parse(File.ReadAllText(Path.Combine(ui, "layout.json"))), JObject.Parse(File.ReadAllText(Path.Combine(ui, "textures.json"))));
            var root = new GameObject("teste autosize", typeof(RectTransform));
            try
            {
                var w = new L2Wnd("MinimapWnd", new L2Layer(root.transform));
                // NCTextBox::RefreshTextCoords: largura = texto + 1; ":" no TOP_RIGHT do rotulo + 2, o valor no do ":" + 2
                var lab = w.RectOf("txtCurLoc");
                Assert.AreEqual(Mathf.Ceil(w.TextEl("txtCurLoc").preferredWidth) + 1, lab.W);
                var colon = w.RectOf("txtColonCurLoc");
                Assert.AreEqual(lab.X + lab.W + 2, colon.X);
                w.Text("txtVarCurLoc", "Giran Castle Town");
                Assert.AreEqual(colon.X + colon.W + 2, w.RectOf("txtVarCurLoc").X);
                var el = w.Get("txtVarCurLoc");
                Assert.AreEqual(w.RectOf("txtVarCurLoc").X, el.anchoredPosition.x);
            }
            finally
            {
                Object.DestroyImmediate(root);
            }
        }
    }
}
