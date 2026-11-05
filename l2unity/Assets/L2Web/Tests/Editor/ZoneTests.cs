// K6 da matriz (Docs/validacao.md): zona atual. Golden/zone_names.json (Docs/tools/gen_golden.py zone_names): uma
// implementacao em Python sobre os arquivos do cliente (ZoneName-e.dat e SysTextures/l2zonename.utx) do algoritmo do
// Engine.dll (GetSWMapXY, processGetZoneNameInfo, GetZoneNameInfo, ZoneNameListLoad) numa grade de 8192 unidades.
using System.Collections.Generic;
using System.IO;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class ZoneTests
    {
        [Test]
        public void Grade_IgualAoGolden()
        {
            var z = L2Zone.Instance;
            if (z == null) Assert.Ignore("sem ZoneName-e.dat ou cache/ui/l2zonename.bin (Docs/tools/export_zonename.py)");
            var g = (JObject)Golden.Load("zone_names.json");
            Assert.AreEqual((int)g["records"], z.Records.Count);
            var bad = new List<string>();
            foreach (JArray p in (JArray)g["points"])
            {
                var r = z.Lookup((int)p[0], (int)p[1], (int)p[2]);
                var want = p[4].Type == JTokenType.Null ? null : (string)p[4];
                if (r?.Name != want && bad.Count < 10) bad.Add($"({p[0]},{p[1]},{p[2]}): {r?.Name} != {want}");
            }
            CollectionAssert.IsEmpty(bad);
            Assert.AreEqual("Giran Castle Town", z.Lookup(84769, 148680, -3400)?.Name);
        }

        [Test]
        public void Regiao_PelaFormulaDoGetSWMapXY()
        {
            Assert.AreEqual((20, 18), L2Zone.TileOf(0, 0));
            Assert.AreEqual((19, 17), L2Zone.TileOf(-1, -1));
            Assert.AreEqual((22, 22), L2Zone.TileOf(84769, 148680));
            Assert.AreEqual(4 << 8, L2Zone.Key(4, 22, 22));
            Assert.AreEqual(((22 << 8 | 22) << 8 | 250) << 8, L2Zone.Key(250, 22, 22));
        }

        [Test]
        public void Tique_DoisESegundosEOitoParaOTitulo()
        {
            var z = L2Zone.Instance;
            if (z == null) Assert.Ignore("sem dados de zona");
            var titles = new List<string[]>();
            z.ShowTitle = t => titles.Add(t);
            z.Invalidate();
            // 2 s ainda nao consulta; o primeiro titulo so depois de 8 s
            z.Tick(2.0f, 84769, 148680, -3400);
            Assert.AreEqual(0, titles.Count);
            for (var i = 0; i < 4; i++) z.Tick(2.01f, 84769, 148680, -3400);
            Assert.AreEqual(1, titles.Count);
            Assert.AreEqual("Giran Castle Town", titles[0][0]);
            // mesma zona: nada; outra zona antes de 8 s: espera
            z.Tick(2.01f, 84769, 148680, -3400);
            z.Tick(2.01f, 0, 0, -3400);
            Assert.AreEqual(1, titles.Count);
            for (var i = 0; i < 3; i++) z.Tick(2.01f, 0, 0, -3400);
            Assert.AreEqual(2, titles.Count);
            Assert.AreEqual(z.Lookup(0, 0, -3400)?.Name, titles[1][0]);
            z.ShowTitle = _ => { };
        }
    }
}
