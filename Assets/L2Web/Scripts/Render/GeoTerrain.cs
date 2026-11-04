// Terreno a partir do geodata do servidor (render/terrain.ts): pedacos de 128x128 celulas (2048 unidades)
// carregados em volta do personagem. Celulas com bloqueio (paredes, bordas de predios) e celulas
// multicamada (pontes, andares) recebem cores proprias para dar leitura do cenario.
// Formato de /terrain/RX_RY/CX_CY.bin (tools/geodata.ts): Int16 baixa[128*128] + Int16 alta[128*128] +
// Uint8 flags[128*128], celula y-major (indice = cy*128 + cx); flags: bits 0-3 NSWE da camada baixa (1 = livre),
// bit 4 = multicamada.
// No Unity: um GameObject por pedaco (MeshRenderer so com os triangulos visiveis) com MeshCollider dos visiveis e um
// filho "oculto" so com MeshCollider dos triangulos coincidentes com o terreno UE (o grupo invisivel do three):
// tudo vale para clique, altura e colisao da camera.
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using L2Web.World;
using UnityEngine;
using UnityEngine.Rendering;

namespace L2Web.Render
{
    public static class GeoTerrain
    {
        const int Chunk = 128;
        const int Cell = 16;
        const int Radius = 1;
        const float S = Coords.Scale;

        sealed class ChunkData
        {
            public short[] Height;
            public short[] High;
            public byte[] Flags;
        }

        static readonly Dictionary<string, Task<ChunkData>> data = new();
        static readonly Dictionary<string, GameObject> meshes = new();
        static readonly Dictionary<string, ChunkData> loaded = new();
        /// <summary>Colliders dos triangulos ocultos (coincidentes com o terreno UE): o clique prefere uma superficie visivel.</summary>
        static readonly HashSet<Collider> hiddenColliders = new();
        static Material material;
        static string current = "";
        static GameScene lastScene;

        /// <summary>
        /// Com o terreno do Unreal carregado, as celulas do geodata que coincidem com ele somem (so o terreno texturizado
        /// aparece); as que ficam acima (piso BSP: praca, calcadas, andares) continuam, exceto nos tiles cujo BSP ja foi
        /// carregado (MarkBspTile), onde o proprio BSP desenha esse piso.
        /// Todas continuam valendo para clique, altura e colisao da camera.
        /// </summary>
        static bool geodataVisible = true;

        /// <summary>Geodata ate esta altura (unidades L2) acima do terreno UE e o proprio chao: fica escondido.</summary>
        const float GeoAboveUe = 48;
        static bool ueMode;

        /// <summary>
        /// Terreno do Unreal de um tile acabou de chegar: os pedacos de geodata montados antes dele (ex.: logo depois de um
        /// teletransporte, com o modo UE ja ligado) ainda desenham o chao inteiro; refaz para esconder o que ele cobre.
        /// </summary>
        public static void OnUeTerrainLoaded()
        {
            InvalidateFloors();
            if (ueMode) RebuildAll();
        }

        public static void SetGeodataVisible(bool on)
        {
            geodataVisible = on;
            var wantUe = !on;
            if (wantUe != ueMode)
            {
                ueMode = wantUe;
                RebuildAll();
            }
        }

        /// <summary>Tiles com geometria BSP desenhada (Statics): ali o piso do geodata acima do terreno UE tambem some.</summary>
        static readonly HashSet<string> bspTiles = new();

        public static void MarkBspTile(string tile)
        {
            floorCache.Clear();
            if (!bspTiles.Add(tile)) return;
            if (ueMode) RebuildAll();
        }

        /// <summary>
        /// Altura em que o pawn e desenhado (Entities.DrawHeight): o chao visivel logo abaixo do z do servidor/geodata.
        /// O z do geodata fica ~30 unidades acima do chao desenhado, tanto do piso BSP das cidades quanto do terreno do
        /// Unreal nos campos (Turek, Gludio, Dion: mediana 26-32, p95 34-41; tarefa #0056). O cliente original nao desenha
        /// o pawn no z do servidor: UGameEngine::AdjustPawnLocation (engine.c, Tryskell) faz um trace do cilindro de
        /// colisao para baixo, de z + CollisionHeight + 20 ate z - 30 (alargando 30 para cada lado se nao achar), e poe o
        /// pawn no chao que o trace achou; depois o physWalking o mantem sobre a superficie. Aqui: o piso de Statics por
        /// raio (de z + 8 ate z - 48, em cache por celula de 16) e o terreno do Unreal pela propria malha (SurfaceAt),
        /// ficando o mais alto dos que estao na janela (PickFloor). Sem nenhum, o z do geodata.
        /// </summary>
        static readonly Dictionary<(int, int, int), float> floorCache = new();
        static readonly RaycastHit[] floorHits = new RaycastHit[32];

        /// <summary>Janela do piso de Statics (BSP/StaticMesh) em volta do z do geodata (unidades L2).</summary>
        public const float StaticsUp = 8, StaticsDown = 48;

        /// <summary>
        /// Janela do terreno do Unreal: de z + 20 (o fundo do cilindro no inicio do trace do AdjustPawnLocation) ate
        /// z - 84 (as duas primeiras voltas do trace: 30 + CollisionHeight ~24 + 30), que cobre o p99 das zonas medidas.
        /// </summary>
        public const float TerrainUp = 20, TerrainDown = 84;

        /// <summary>
        /// Regra do chao do desenho: entre o piso de Statics e o terreno que estiverem nas suas janelas em volta de z, o mais
        /// alto (o primeiro que um trace de cima para baixo acha). Nenhum: o proprio z.
        /// </summary>
        public static float PickFloor(float z, float? statics, float? terrain)
        {
            float? best = null;
            if (statics.HasValue && statics.Value <= z + StaticsUp && statics.Value >= z - StaticsDown) best = statics;
            if (terrain.HasValue && terrain.Value <= z + TerrainUp && terrain.Value >= z - TerrainDown && (!best.HasValue || terrain.Value > best.Value))
                best = terrain;
            return best ?? z;
        }

        public static float VisualFloor(float x, float y, float z)
        {
            var s = lastScene;
            if (s == null) return z;
            float? statics = null;
            if (s.Statics && s.Statics.childCount > 0)
            {
                var cx = (int)x >> 4;
                var cy = (int)y >> 4;
                var key = (cx, cy, Mathf.RoundToInt(z));
                if (!floorCache.TryGetValue(key, out var off))
                {
                    var from = Coords.ToUnity(cx * 16 + 8, cy * 16 + 8, z + StaticsUp);
                    var n = Physics.RaycastNonAlloc(new Ray(from, Vector3.down), floorHits, (StaticsUp + StaticsDown) * S, Physics.AllLayers, QueryTriggerInteraction.Ignore);
                    var best = float.MaxValue;
                    var bestY = 0f;
                    for (var i = 0; i < n; i++)
                    {
                        var h = floorHits[i];
                        if (h.distance >= best || !h.collider.transform.IsChildOf(s.Statics)) continue;
                        best = h.distance;
                        bestY = h.point.y;
                    }
                    off = best < float.MaxValue ? bestY / S - z : float.NaN;
                    if (floorCache.Count > 20000) floorCache.Clear();
                    floorCache[key] = off;
                }
                if (!float.IsNaN(off)) statics = z + off;
            }
            // terreno do Unreal so quando e ele que esta desenhado (sem ele o chao visivel e o proprio geodata)
            var terrain = ueMode ? UeTerrain.SurfaceAt(x, y) : null;
            return PickFloor(z, statics, terrain);
        }

        /// <summary>Cenario novo carregado: as alturas de piso em cache podem ter mudado.</summary>
        public static void InvalidateFloors() => floorCache.Clear();

        /// <summary>Com os StaticMeshes do mapa carregados, os telhados do geodata (celulas elevadas) sao omitidos.</summary>
        static bool hideRaised;

        public static void SetHideRaised(bool on) => hideRaised = on;

        /// <summary>O collider e de triangulos do geodata escondidos sob o terreno UE/BSP (so clique)?</summary>
        public static bool IsHiddenCollider(Collider c) => c && hiddenColliders.Contains(c);

        /// <summary>Pedacos de geodata desenhados agora.</summary>
        public static int ChunkCount => meshes.Count;

        /// <summary>Chave global do pedaco: indices absolutos (regiao * 16 + pedaco).</summary>
        static (int gx, int gy) ChunkOf(float x, float y)
        {
            const int ox = 11 * 32768 - 20 * 32768; // origem do mundo L2 (tile 11)
            const int oy = 10 * 32768 - 18 * 32768; // (tile 10)
            return (Mathf.FloorToInt((x - ox) / (Chunk * Cell)), Mathf.FloorToInt((y - oy) / (Chunk * Cell)));
        }

        static string ChunkUrl(int gx, int gy)
        {
            var rx = 11 + Mathf.FloorToInt(gx / 16f);
            var ry = 10 + Mathf.FloorToInt(gy / 16f);
            return $"/terrain/{rx}_{ry}/{gx % 16}_{gy % 16}.bin?v=2";
        }

        static (int x, int y) ChunkOrigin(int gx, int gy) => ((11 - 20) * 32768 + gx * Chunk * Cell, (10 - 18) * 32768 + gy * Chunk * Cell);

        static Task<ChunkData> Load(int gx, int gy)
        {
            var key = $"{gx}_{gy}";
            if (!data.TryGetValue(key, out var p))
            {
                p = LoadChunk(gx, gy);
                data[key] = p;
            }
            return p;
        }

        static async Task<ChunkData> LoadChunk(int gx, int gy)
        {
            if (gx < 0 || gy < 0) return null;
            var r = await LoadTrack.Track(Http.Fetch(ChunkUrl(gx, gy)));
            const int n = Chunk * Chunk;
            if (!r.Ok || r.Data == null || r.Data.Length < n * 5) return null;
            var d = new ChunkData { Height = new short[n], High = new short[n], Flags = new byte[n] };
            Buffer.BlockCopy(r.Data, 0, d.Height, 0, n * 2);
            Buffer.BlockCopy(r.Data, n * 2, d.High, 0, n * 2);
            Buffer.BlockCopy(r.Data, n * 4, d.Flags, 0, n);
            return d;
        }

        static float Frac(double v) => (float)((v % 1 + 1) % 1);

        /// <summary>Cor por celula: chao (grama/terra pela inclinacao), area construida (pedra) e bordas bloqueadas (linear).</summary>
        static Color ColorFor(int flags, int h, int hn, int ground, float rnd)
        {
            var blocked = (flags & 0x0f) != 0x0f;
            var multi = (flags & 0x10) != 0;
            var slope = Mathf.Min(1, Mathf.Abs(h - hn) / 64f);
            var raised = h - ground > 160; // telhados/plataformas acima do chao local
            Color c;
            if (ueMode)
            {
                // com terreno UE, o geodata so aparece onde ha piso BSP (praca, calcadas): tom de pedra do Interlude
                c = new Color(0.36f, 0.33f, 0.29f);
                if (blocked) c *= 0.8f;
                return Mul(c, 0.9f + rnd * 0.2f);
            }
            if (raised) c = Color.Lerp(new Color(0.5f, 0.45f, 0.4f), new Color(0.62f, 0.36f, 0.28f), Mathf.Min(1, (h - ground) / 2500f) * 0.6f);
            else if (blocked) c = new Color(0.4f, 0.37f, 0.33f);
            else if (multi) c = new Color(0.55f, 0.53f, 0.49f);
            else c = new Color(0.36f + slope * 0.18f, 0.44f + slope * 0.06f, 0.27f + slope * 0.1f);
            return Mul(c, 0.9f + rnd * 0.2f);
        }

        static Color Mul(Color c, float k) => new Color(c.r * k, c.g * k, c.b * k, 1);

        /// <summary>Altura de "chao" do pedaco: percentil 25 das alturas (ignora telhados).</summary>
        static int GroundLevel(short[] h)
        {
            var s = (short[])h.Clone();
            Array.Sort(s);
            return s[(int)Math.Floor(s.Length * 0.25)];
        }

        static Material Mat()
        {
            if (material) return material;
            material = new Material(RenderMats.VertexLitShader) { name = "geodata", enableInstancing = true, hideFlags = HideFlags.DontUnloadUnusedAsset };
            return material;
        }

        static async Task<GameObject> BuildChunk(int gx, int gy)
        {
            var d = await Load(gx, gy);
            if (d == null) return null;
            loaded[$"{gx}_{gy}"] = d;
            // vizinhos para fechar a costura (+X e +Y)
            var tdx = Load(gx + 1, gy);
            var tdy = Load(gx, gy + 1);
            var tdxy = Load(gx + 1, gy + 1);
            await Task.WhenAll(tdx, tdy, tdxy);
            ChunkData dx = tdx.Result, dy = tdy.Result, dxy = tdxy.Result;
            const int N = Chunk + 1;
            var o = ChunkOrigin(gx, gy);
            var pos = new Vector3[N * N];
            var col = new Color[N * N];
            var ground = GroundLevel(d.Height);
            var hs = new int[N * N];
            var fs = new int[N * N];
            for (var j = 0; j < N; j++)
                for (var i = 0; i < N; i++)
                {
                    // i = coluna (x), j = linha (y), podendo valer Chunk (borda do vizinho)
                    var src = d;
                    int ii = i, jj = j;
                    if (i == Chunk && j == Chunk) (src, ii, jj) = (dxy, 0, 0);
                    else if (i == Chunk) (src, ii) = (dx, 0);
                    else if (j == Chunk) (src, jj) = (dy, 0);
                    if (src == null)
                    {
                        src = d;
                        ii = Math.Min(i, Chunk - 1);
                        jj = Math.Min(j, Chunk - 1);
                    }
                    var k = jj * Chunk + ii;
                    hs[j * N + i] = src.Height[k];
                    fs[j * N + i] = src.Flags[k];
                }
            for (var j = 0; j < N; j++)
                for (var i = 0; i < N; i++)
                {
                    var v = j * N + i;
                    var h = hs[v];
                    var hn = hs[j * N + Math.Min(i + 1, Chunk)];
                    double wx = o.x + i * Cell + Cell / 2;
                    double wy = o.y + j * Cell + Cell / 2;
                    pos[v] = Coords.ToUnity((float)wx, (float)wy, h);
                    var rnd = Frac(Math.Sin((o.x + i * 16) * 12.9898 + (o.y + j * 16) * 78.233) * 43758.5453);
                    col[v] = ColorFor(fs[v], h, hn, ground, rnd);
                }
            var raised = new bool[N * N];
            if (hideRaised)
                for (var v = 0; v < N * N; v++) raised[v] = hs[v] - ground > 160;
            // com terreno UE: so as celulas acima dele (>= 24 unidades) ficam visiveis; o resto vira so superficie de clique
            var onTerrain = new bool[N * N];
            var mt = Coords.MapTile(o.x + 1, o.y + 1);
            var bsp = bspTiles.Contains($"{mt.tx}_{mt.ty}");
            if (ueMode)
                for (var j = 0; j < N; j++)
                    for (var i = 0; i < N; i++)
                    {
                        var h = hs[j * N + i];
                        var t = UeTerrain.UeHeightAt(o.x + i * Cell + Cell / 2, o.y + j * Cell + Cell / 2);
                        // com BSP no tile, o piso elevado (praca, calcadas) e desenhado por ele. O chao do geodata fica de 20 a
                        // 44 unidades acima do heightmap (o cliente web usava 24 e deixava manchas cinzas em campo aberto,
                        // ex.: Breka's Stronghold); 48 so mantem visiveis plataformas de verdade. Com os StaticMeshes do tile
                        // carregados (hideRaised), o que fica acima do terreno (topo de pedras, pontes) e desenhado por eles
                        onTerrain[j * N + i] = t.HasValue && (bsp || hideRaised || h - t.Value < GeoAboveUe);
                    }
            var vis = new List<int>(Chunk * Chunk * 6);
            var hid = new List<int>();
            for (var j = 0; j < Chunk; j++)
                for (var i = 0; i < Chunk; i++)
                {
                    var a = j * N + i;
                    if (hideRaised && (raised[a] || raised[a + 1] || raised[a + N] || raised[a + N + 1])) continue;
                    var b = (j + 1) * N + i;
                    var cc = j * N + i + 1;
                    var dd = (j + 1) * N + i + 1;
                    // ordem invertida em relacao ao three (o Unity usa a face da frente em sentido horario)
                    var list = ueMode && onTerrain[a] && onTerrain[a + 1] && onTerrain[a + N] && onTerrain[a + N + 1] ? hid : vis;
                    list.Add(a);
                    list.Add(cc);
                    list.Add(b);
                    list.Add(cc);
                    list.Add(dd);
                    list.Add(b);
                }
            // malha de desenho: visiveis (submalha 0, a unica com material) + ocultos (submalha 1, so para as normais)
            var mesh = new Mesh { name = $"geodata {gx}_{gy}", indexFormat = IndexFormat.UInt16, hideFlags = HideFlags.DontUnloadUnusedAsset };
            mesh.vertices = pos;
            mesh.colors = col;
            mesh.subMeshCount = hid.Count > 0 ? 2 : 1;
            mesh.SetTriangles(vis, 0, false);
            if (hid.Count > 0) mesh.SetTriangles(hid, 1, false);
            mesh.RecalculateNormals();
            mesh.RecalculateBounds();
            var go = RenderMats.MeshObject($"terreno {gx}_{gy}", mesh, Mat(), null);
            Mesh visCol = null, hidCol = null;
            if (vis.Count > 0)
            {
                visCol = new Mesh { name = mesh.name + " col", indexFormat = IndexFormat.UInt16, vertices = pos, hideFlags = HideFlags.DontUnloadUnusedAsset };
                visCol.SetTriangles(vis, 0);
            }
            if (hid.Count > 0)
            {
                hidCol = new Mesh { name = mesh.name + " oculto", indexFormat = IndexFormat.UInt16, vertices = pos, hideFlags = HideFlags.DontUnloadUnusedAsset };
                hidCol.SetTriangles(hid, 0);
            }
            await BakeColliders(visCol, hidCol);
            if (!go) return null;
            if (visCol) go.AddComponent<MeshCollider>().sharedMesh = visCol;
            if (hidCol)
            {
                var h = new GameObject("oculto");
                h.transform.SetParent(go.transform, false);
                var mc = h.AddComponent<MeshCollider>();
                mc.sharedMesh = hidCol;
                hiddenColliders.Add(mc);
            }
            return go;
        }

        /// <summary>Cozinha os colliders numa thread de trabalho (Physics.BakeMesh), para nao travar o quadro.</summary>
        internal static async Task BakeColliders(params Mesh[] list)
        {
            var ids = new List<EntityId>();
            foreach (var m in list)
                if (m)
                    ids.Add(m.GetEntityId());
            if (ids.Count == 0) return;
            await Task.Run(() =>
            {
                foreach (var id in ids) Physics.BakeMesh(id, false);
            });
        }

        static void DestroyChunk(GameObject go)
        {
            if (!go) return;
            foreach (var mc in go.GetComponentsInChildren<MeshCollider>(true))
            {
                hiddenColliders.Remove(mc);
                RenderMats.Destroy(mc.sharedMesh);
            }
            var mf = go.GetComponent<MeshFilter>();
            if (mf) RenderMats.Destroy(mf.sharedMesh);
            RenderMats.Destroy(go);
        }

        /// <summary>
        /// Celula do geodata em (x, y): flags NSWE da camada baixa (bit 0 = E, 1 = W, 2 = S, 3 = N; 1 = livre) e alturas.
        /// false se o pedaco nao esta carregado. Para ferramentas (ex.: navegacao de teste).
        /// </summary>
        public static bool CellAt(float x, float y, out int flags, out int low, out int high)
        {
            flags = low = high = 0;
            var (gx, gy) = ChunkOf(x, y);
            if (!loaded.TryGetValue($"{gx}_{gy}", out var d)) return false;
            var o = ChunkOrigin(gx, gy);
            var cx = Math.Min(Chunk - 1, Math.Max(0, Mathf.FloorToInt((x - o.x) / Cell)));
            var cy = Math.Min(Chunk - 1, Math.Max(0, Mathf.FloorToInt((y - o.y) / Cell)));
            var k = cy * Chunk + cx;
            flags = d.Flags[k];
            low = d.Height[k];
            high = d.High[k];
            return true;
        }

        /// <summary>Tamanho da celula do geodata (unidades L2).</summary>
        public const int CellSize = Cell;

        /// <summary>
        /// Altura do chao em (x, y) mais proxima de zRef: o pawn do cliente anda sobre a superficie (PHYS_Walking);
        /// aqui a superficie e o geodata, escolhendo entre a camada baixa e a alta da celula. null se o pedaco nao esta carregado.
        /// </summary>
        public static float? GroundHeight(float x, float y, float zRef)
        {
            var (gx, gy) = ChunkOf(x, y);
            if (!loaded.TryGetValue($"{gx}_{gy}", out var d)) return null;
            var o = ChunkOrigin(gx, gy);
            var cx = Math.Min(Chunk - 1, Math.Max(0, Mathf.FloorToInt((x - o.x) / Cell)));
            var cy = Math.Min(Chunk - 1, Math.Max(0, Mathf.FloorToInt((y - o.y) / Cell)));
            var k = cy * Chunk + cx;
            int lo = d.Height[k];
            int hi = d.High[k];
            return Math.Abs(hi - zRef) < Math.Abs(lo - zRef) ? hi : lo;
        }

        static void RebuildAll()
        {
            if (lastScene == null) return;
            foreach (var m in meshes.Values) DestroyChunk(m);
            meshes.Clear();
            gen++;
            var s = lastScene;
            current = "";
            var self = s.World?.Self;
            if (self != null) LoadTerrainFor(s, self.X, self.Y).Forget();
        }

        /// <summary>Carrega (ou atualiza) os pedacos em volta da posicao. Devolve uma linha de status.</summary>
        public static async Task<string> LoadTerrainFor(GameScene scene, float x, float y)
        {
            if (lastScene != scene)
            {
                // cena nova (relogin): os pedacos da anterior foram (ou serao) destruidos com ela
                Clear();
                floorCache.Clear();
            }
            lastScene = scene;
            var (gx, gy) = ChunkOf(x, y);
            var key = $"{gx}_{gy}";
            if (key == current) return "";
            current = key;
            var my = ++gen;
            var want = new HashSet<string>();
            var jobs = new List<Task>();
            for (var dy = -Radius; dy <= Radius; dy++)
                for (var dx = -Radius; dx <= Radius; dx++)
                {
                    var k = $"{gx + dx}_{gy + dy}";
                    want.Add(k);
                    if (meshes.ContainsKey(k)) continue;
                    jobs.Add(BuildInto(scene, gx + dx, gy + dy, k, my));
                }
            var drop = new List<string>();
            foreach (var kv in meshes)
                if (!want.Contains(kv.Key))
                    drop.Add(kv.Key);
            foreach (var k in drop)
            {
                DestroyChunk(meshes[k]);
                meshes.Remove(k);
            }
            await Task.WhenAll(jobs);
            return meshes.Count > 0 ? $"terreno: {meshes.Count} pedaços do geodata em volta de {Mathf.RoundToInt(x)}, {Mathf.RoundToInt(y)}" : "terreno: sem geodata para esta área";
        }

        /// <summary>Geracao do pedido de terreno: so o pedido mais recente coloca os seus pedacos na cena.</summary>
        static int gen;

        static async Task BuildInto(GameScene scene, int gx, int gy, string k, int my)
        {
            GameObject m;
            try
            {
                m = await BuildChunk(gx, gy);
            }
            catch (Exception e)
            {
                Debug.LogException(e);
                return;
            }
            if (!m) return;
            if (my != gen || scene.Ground == null || meshes.ContainsKey(k))
            {
                DestroyChunk(m);
                return;
            }
            meshes[k] = m;
            m.transform.SetParent(scene.Ground, false);
        }

        /// <summary>Chamado a cada quadro: troca os pedacos quando o personagem cruza a borda.</summary>
        public static void FollowTerrain(GameScene scene, float x, float y)
        {
            var (gx, gy) = ChunkOf(x, y);
            if ($"{gx}_{gy}" != current) LoadTerrainFor(scene, x, y).Forget();
        }

        /// <summary>Descarta todos os pedacos (troca de personagem/cena).</summary>
        public static void Clear()
        {
            foreach (var m in meshes.Values) DestroyChunk(m);
            meshes.Clear();
            gen++;
            current = "";
        }
    }
}
