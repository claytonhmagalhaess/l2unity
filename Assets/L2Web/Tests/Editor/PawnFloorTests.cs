// Altura em que o pawn e desenhado (tarefa #0056): o z do servidor/geodata fica ~30 unidades acima do chao desenhado,
// e o cliente original poe o pawn no chao que o trace do UGameEngine::AdjustPawnLocation acha. GeoTerrain.PickFloor
// escolhe entre o piso de Statics (BSP/StaticMesh) e o terreno do Unreal; UeTerrain.SurfaceAt da a altura dos
// triangulos da malha do terreno.
using System;
using System.IO;
using L2Web.Render;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class PawnFloorTests
    {
        // ------------------------------------------------------------ regra do chao (PickFloor)

        [Test]
        public void SemChao_FicaNoZDoServidor()
        {
            Assert.AreEqual(-3584f, GeoTerrain.PickFloor(-3584, null, null));
        }

        [Test]
        public void Campo_TerrenoAbaixoDoGeodata_PesNoTerreno()
        {
            // Turek: geodata -3584, terreno -3606,5
            Assert.AreEqual(-3606.5f, GeoTerrain.PickFloor(-3584, null, -3606.5f), 1e-3f);
        }

        [Test]
        public void Cidade_PisoBspAcimaDoTerreno_PesNoBsp()
        {
            // Giran: geodata -3400, piso BSP ~30 abaixo, terreno do Unreal 163 abaixo (fora da janela)
            Assert.AreEqual(-3430f, GeoTerrain.PickFloor(-3400, -3430, -3563.3f), 1e-3f);
        }

        [Test]
        public void TerrenoForaDaJanela_FicaNoZDoServidor()
        {
            // ponte ou andar cuja malha ainda nao carregou: o terreno la embaixo nao puxa o pawn
            Assert.AreEqual(-3400f, GeoTerrain.PickFloor(-3400, null, -3400 - GeoTerrain.TerrainDown - 1));
            Assert.AreEqual(-3400 - GeoTerrain.TerrainDown, GeoTerrain.PickFloor(-3400, null, -3400 - GeoTerrain.TerrainDown), 1e-3f);
        }

        [Test]
        public void TerrenoUmPoucoAcima_SobeOPawn_MuitoAcimaNao()
        {
            Assert.AreEqual(-3395f, GeoTerrain.PickFloor(-3400, null, -3395), 1e-3f);
            Assert.AreEqual(-3400 + GeoTerrain.TerrainUp, GeoTerrain.PickFloor(-3400, null, -3400 + GeoTerrain.TerrainUp), 1e-3f);
            Assert.AreEqual(-3400f, GeoTerrain.PickFloor(-3400, null, -3400 + GeoTerrain.TerrainUp + 1));
        }

        [Test]
        public void MalhaSobreOTerreno_FicaNaMaisAlta()
        {
            // pedra (StaticMesh) 10 abaixo do geodata, terreno 30 abaixo: o trace de cima acha a pedra primeiro
            Assert.AreEqual(-3410f, GeoTerrain.PickFloor(-3400, -3410, -3430), 1e-3f);
            // terreno acima do piso de Statics (ex.: chao de caverna sob o terreno): o terreno
            Assert.AreEqual(-3420f, GeoTerrain.PickFloor(-3400, -3440, -3420), 1e-3f);
        }

        [Test]
        public void PisoDeStaticsForaDaJanela_UsaOTerreno()
        {
            Assert.AreEqual(-3430f, GeoTerrain.PickFloor(-3400, -3400 - GeoTerrain.StaticsDown - 1, -3430), 1e-3f);
            Assert.AreEqual(-3400f, GeoTerrain.PickFloor(-3400, -3400 + GeoTerrain.StaticsUp + 1, null));
        }

        [Test]
        public void JanelaDoTerreno_CobreODeslocamentoMedido()
        {
            // p95 de (geodata - terreno) nos campos medidos: 34-41; p99 82-107 (Docs da tarefa #0056)
            Assert.GreaterOrEqual(GeoTerrain.TerrainDown, 82f);
            Assert.GreaterOrEqual(GeoTerrain.StaticsDown, 30f);
        }

        // ------------------------------------------------------------ superficie do terreno (SurfaceAt)

        [Test]
        public void TriHeight_VerticesEDiagonal()
        {
            const float a = 10, b = 20, c = 30, d = 70;
            Assert.AreEqual(a, UeTerrain.TriHeight(a, b, c, d, 0, 0), 1e-4f);
            Assert.AreEqual(b, UeTerrain.TriHeight(a, b, c, d, 1, 0), 1e-4f);
            Assert.AreEqual(c, UeTerrain.TriHeight(a, b, c, d, 0, 1), 1e-4f);
            Assert.AreEqual(d, UeTerrain.TriHeight(a, b, c, d, 1, 1), 1e-4f);
            // na diagonal (10)-(01) os dois triangulos dao a media de b e c, sem depender de a nem d
            Assert.AreEqual((b + c) / 2, UeTerrain.TriHeight(a, b, c, d, 0.5f, 0.5f), 1e-4f);
            Assert.AreEqual((b + c) / 2, UeTerrain.TriHeight(0, b, c, 1000, 0.5f, 0.5f), 1e-4f);
            // meio do primeiro triangulo
            Assert.AreEqual(a + 0.25f * (b - a) + 0.25f * (c - a), UeTerrain.TriHeight(a, b, c, d, 0.25f, 0.25f), 1e-4f);
        }

        // tile sintetico 5_5 (x de -491520 a -458752, y de -425984 a -393216) com 4x4 vertices a cada 8192
        const string Tile = "5_5", Next = "6_5";
        const float X0 = (5 - 20) * 32768f, Y0 = (5 - 18) * 32768f;
        static readonly float[] Scale = { 8192, 8192, 256 };

        static ushort[] Grid(int baseZ, Func<int, int, int> dz)
        {
            var h = new ushort[16];
            for (var j = 0; j < 4; j++)
                for (var i = 0; i < 4; i++)
                    h[j * 4 + i] = (ushort)(32768 + baseZ + dz(i, j)); // Sz 256: 1 passo = 1 unidade
            return h;
        }

        [TearDown]
        public void Limpa()
        {
            UeTerrain.SetField(Tile, null, null, 0, 0, null);
            UeTerrain.SetField(Next, null, null, 0, 0, null);
            UeTerrain.SetField("17_21", null, null, 0, 0, null);
        }

        [Test]
        public void SurfaceAt_SeguraOsTriangulosDaMalha()
        {
            UeTerrain.SetField(Tile, new[] { X0 + 16384, Y0 + 16384, -3000f }, Scale, 4, 4, Grid(0, (i, j) => i * 10 + j * 100));
            Assert.AreEqual(-3000f, UeTerrain.SurfaceAt(X0, Y0).Value, 1e-3f);
            Assert.AreEqual(-3000f + 10, UeTerrain.SurfaceAt(X0 + 8192, Y0).Value, 1e-3f);
            Assert.AreEqual(-3000f + 100, UeTerrain.SurfaceAt(X0, Y0 + 8192).Value, 1e-3f);
            Assert.AreEqual(-3000f + 55, UeTerrain.SurfaceAt(X0 + 4096, Y0 + 4096).Value, 1e-3f);
            Assert.IsNull(UeTerrain.SurfaceAt(X0 - 1, Y0), "tile vizinho nao registrado");
        }

        [Test]
        public void SurfaceAt_DivisaUsaOVizinhoOuRepeteABorda()
        {
            UeTerrain.SetField(Tile, new[] { X0 + 16384, Y0 + 16384, -3000f }, Scale, 4, 4, Grid(0, (_, _) => 0));
            // sem vizinho: a coluna extra repete a borda (como a malha)
            Assert.AreEqual(-3000f, UeTerrain.SurfaceAt(X0 + 3 * 8192 + 4096, Y0).Value, 1e-3f);
            // com vizinho 40 acima: metade do caminho entre a ultima coluna e a primeira do vizinho (como o StitchAll)
            UeTerrain.SetField(Next, new[] { X0 + 32768 + 16384, Y0 + 16384, -3000f }, Scale, 4, 4, Grid(40, (_, _) => 0));
            Assert.AreEqual(-3000f + 20, UeTerrain.SurfaceAt(X0 + 3 * 8192 + 4096, Y0).Value, 1e-3f);
        }

        // ------------------------------------------------------------ dados reais: Turek (Orc Barracks)

        static bool LoadTile(string tile)
        {
            var dir = Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "terrain_ue", tile);
            var json = Path.Combine(dir, "terrain.json");
            var bin = Path.Combine(dir, "height.bin");
            if (!File.Exists(json) || !File.Exists(bin)) return false;
            var j = JObject.Parse(File.ReadAllText(json));
            int w = (int)j["size"][0], v = (int)j["size"][1];
            var bytes = File.ReadAllBytes(bin);
            var h = new ushort[w * v];
            Buffer.BlockCopy(bytes, 0, h, 0, w * v * 2);
            UeTerrain.SetField(tile, j["location"].ToObject<float[]>(), j["scale"].ToObject<float[]>(), w, v, h);
            return true;
        }

        [Test]
        public void Turek_PawnDesenhadoNoTerrenoENaoNoZDoGeodata()
        {
            if (!LoadTile("17_21")) Assert.Ignore("sem cache/terrain_ue/17_21");
            // teleporte 1044 do aCis (Orc Barracks): (-89839, 105362, -3580); geodata da celula: -3584
            var t = UeTerrain.SurfaceAt(-89839, 105362).Value;
            Assert.AreEqual(-3606.5f, t, 0.5f);
            var draw = GeoTerrain.PickFloor(-3584, null, t);
            Assert.AreEqual(t, draw, 1e-3f);
            Assert.Greater(-3584 - draw, 20f, "antes o pawn ficava ~22 unidades acima do terreno");
            // Turek War Hound (spawnlist 20494): (-97578, 102537); geodata -3488, terreno -3514,9
            var t2 = UeTerrain.SurfaceAt(-97578, 102537).Value;
            Assert.AreEqual(-3514.9f, t2, 0.5f);
            Assert.AreEqual(t2, GeoTerrain.PickFloor(-3488, null, t2), 1e-3f);
        }
    }
}
