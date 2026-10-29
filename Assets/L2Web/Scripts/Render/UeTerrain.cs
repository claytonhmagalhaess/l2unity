// Terreno do Unreal (TerrainInfo) exportado por tools/map/unr_terrain.py (render/terrain_ue.ts): heightmap G16
// 256x256 e camadas (textura + alphamap). As camadas sao misturadas em sequencia como no UE2 (cada uma sobre a anterior
// pelo seu alpha) no shader L2Web/TerrainUE (Render/Resources), com Lambert + neblina.
// /terrain_ue/<tile>/terrain.json (202 enquanto o dev server exporta), height.bin (Uint16 LE, W*V), layerN_tex.png,
// layerN_alpha.png.
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using L2Web.World;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Rendering;

namespace L2Web.Render
{
    public static class UeTerrain
    {
        public sealed class TerrainLayer
        {
            public string Texture;
            public string Alpha;
            public float UScale;
            public float VScale;
        }

        public sealed class TerrainJson
        {
            public string Tile;
            public float[] Location;
            public float[] Scale;
            public int[] Size;
            public List<TerrainLayer> Layers;
        }

        const int MaxLayers = 8;
        const float S = Coords.Scale;

        /// <summary>Multiplicador da escala de repeticao das texturas de camada (1 = formula do UE2).</summary>
        public const float TexMul = 1;

        sealed class HeightField
        {
            public float Lx, Ly, Lz, Sx, Sy, Sz;
            public int W, V;
            public ushort[] H;
        }

        static readonly Dictionary<string, HeightField> fields = new();

        /// <summary>Malha de um tile para costurar a coluna/linha extra com a primeira linha do vizinho.</summary>
        sealed class Seam
        {
            public string Tile;
            public Mesh Mesh;
            public MeshCollider Collider;
            public Vector3[] Pos;
            public int MW, MV, W, V;
            public float Lx, Ly, Sx, Sy;
            public List<int> Ring;
            public int SkirtFirst;
            public float Drop;
        }

        static readonly List<Seam> seams = new();

        /// <summary>Terreno com os 8 mapas de intensidade (TIntMap) para a cor por hora (spec 08 secao 6).</summary>
        sealed class Lit
        {
            public Mesh Mesh;
            public byte[] Maps;
            public int N, MW, MV;
            public List<int> Ring;
            public int SkirtFirst;
            public Color32[] Colors;
            public float Lx, Ly, Sx, Sy;
            public int W, V;
        }

        static readonly List<Lit> lit = new();
        static Env.L2Env lastEnv;
        /// <summary>Chamado depois de SetHour recolorir os terrenos (o projetor do terreno copia a cor de vertice).</summary>
        public static Action OnRelit;

        /// <summary>Cor de vertice assada do terreno no ponto (UE x, y), bilinear na grade; null sem terreno iluminado ali.</summary>
        public static Color32? ColorAt(float x, float y)
        {
            foreach (var l in lit)
            {
                if (!l.Mesh) continue;
                var fx = (x - l.Lx) / l.Sx + l.W / 2f;
                var fy = (y - l.Ly) / l.Sy + l.V / 2f;
                if (fx < 0 || fy < 0 || fx > l.MW - 1 || fy > l.MV - 1) continue;
                int i = Mathf.Clamp((int)fx, 0, l.MW - 2), j = Mathf.Clamp((int)fy, 0, l.MV - 2);
                float u = fx - i, v = fy - j;
                Color32 c00 = l.Colors[j * l.MW + i], c10 = l.Colors[j * l.MW + i + 1], c01 = l.Colors[(j + 1) * l.MW + i], c11 = l.Colors[(j + 1) * l.MW + i + 1];
                return Color32.Lerp(Color32.Lerp(c00, c10, u), Color32.Lerp(c01, c11, u), v);
            }
            return null;
        }

        /// <summary>
        /// ATerrainInfo::UpdateShadow -> UTerrainSector::SetInterpolatedIntensityMap/SetIntensityMap: Int = round(a (1 - f) + b f)
        /// dos mapas i0/i1 da hora; Color = FColor(Int/255 x 0,5 x S) + (Amb &gt;&gt; 1), saturando, com S = plano HSVTerrainLight(t) e
        /// Amb = TerrainAmbient(t). A luz pontual estatica do setor (StaticLight) nao entra (Lobby: so a Light16, bits insuficientes).
        /// </summary>
        public static void SetHour(Env.L2Env env)
        {
            lastEnv = env;
            lit.RemoveAll(l => !l.Mesh);
            if (lit.Count == 0) return;
            var (i0, i1, f) = Env.L2Env.ShadowMapIndex(env.T, 8);
            var sp = env.GetEnvPlane("HSVTerrainLight");
            var amb = env.GetEnvColor("TerrainAmbient");
            int ar = amb.r >> 1, ag = amb.g >> 1, ab = amb.b >> 1;
            foreach (var l in lit)
            {
                var n = l.N;
                int o0 = i0 * n, o1 = i1 * n;
                for (var v = 0; v < n; v++)
                {
                    var inten = Env.L2Env.BlendIntensity(l.Maps[o0 + v], l.Maps[o1 + v], f) / 255f * 0.5f;
                    l.Colors[v] = new Color32((byte)Mathf.Min(255, (int)(inten * sp.x * 255) + ar), (byte)Mathf.Min(255, (int)(inten * sp.y * 255) + ag), (byte)Mathf.Min(255, (int)(inten * sp.z * 255) + ab), 255);
                }
                for (var r = 0; r < l.Ring.Count; r++) l.Colors[l.SkirtFirst + r * 2] = l.Colors[l.SkirtFirst + r * 2 + 1] = l.Colors[l.Ring[r]];
                l.Mesh.colors32 = l.Colors;
                if (Array.IndexOf(Environment.GetCommandLineArgs(), "-l2partlog") >= 0)
                {
                    long sum = 0;
                    for (var v = 0; v < n; v++) sum += l.Colors[v].r;
                    Debug.Log($"[terreno] t={env.T:0.00} k={i0}/{i1} f={f:0.000} S=({sp.x:0.000},{sp.y:0.000},{sp.z:0.000}) amb>>1=({ar},{ag},{ab}) mediaR={(float)sum / n:0.0} mapas={l.Maps.Length / n}");
                }
            }
            OnRelit?.Invoke();
        }
        static readonly Dictionary<string, GameObject> loaded = new();
        static readonly Dictionary<string, Task<string>> pending = new();
        static readonly HashSet<string> failed = new();

        /// <summary>Altura do terreno do Unreal em (x, y), interpolada; null se o tile nao foi carregado.</summary>
        public static float? UeHeightAt(float x, float y)
        {
            var t = Coords.MapTile(x, y);
            if (!fields.TryGetValue($"{t.tx}_{t.ty}", out var f)) return null;
            var fi = (x - f.Lx) / f.Sx + f.W / 2f;
            var fj = (y - f.Ly) / f.Sy + f.V / 2f;
            var i = Math.Max(0, Math.Min(f.W - 2, Mathf.FloorToInt(fi)));
            var j = Math.Max(0, Math.Min(f.V - 2, Mathf.FloorToInt(fj)));
            var u = Mathf.Clamp01(fi - i);
            var v = Mathf.Clamp01(fj - j);
            float H(int a, int b) => f.H[b * f.W + a];
            var top = H(i, j) * (1 - u) + H(i + 1, j) * u;
            var bot = H(i, j + 1) * (1 - u) + H(i + 1, j + 1) * u;
            return f.Lz + (top * (1 - v) + bot * v - 32768) * f.Sz / 256;
        }

        static async Task<Texture2D> LoadTex(string url, bool linear, bool repeat)
        {
            var bytes = await Http.GetBytes(url);
            if (bytes == null) return null;
            // DontUnloadUnusedAsset: ainda sem dono na cena enquanto o terreno carrega (o UnloadUnusedAssets o destruiria)
            var tex = new Texture2D(2, 2, TextureFormat.RGBA32, true, linear) { name = url, hideFlags = HideFlags.DontUnloadUnusedAsset };
            if (!tex.LoadImage(bytes, false)) return null;
            tex.wrapMode = repeat ? TextureWrapMode.Repeat : TextureWrapMode.Clamp;
            tex.anisoLevel = repeat ? 4 : 1;
            tex.filterMode = FilterMode.Trilinear;
            return tex;
        }

        /// <summary>Alphamap RGB (camada base) usa o vermelho; RGBA usa o alpha (amostra a cada 97 pixels, como o TS).</summary>
        static bool HasAlpha(Texture2D t)
        {
            if (!t) return false;
            var px = t.GetPixels32();
            for (var i = 0; i < px.Length; i += 97)
                if (px[i].a != 255)
                    return true;
            return false;
        }

        /// <summary>
        /// Terreno de um mapa (GameObject sem pai, com MeshCollider); `register` = entra no UeHeightAt (mapas do mundo;
        /// o Lobby nao, para nao cobrir 19_25).
        /// </summary>
        public static async Task<GameObject> BuildUeTerrain(string tile, bool register = true)
        {
            var b = $"/terrain_ue/{tile}/";
            TerrainJson info = null;
            for (var i = 0; i < 30; i++)
            {
                var r = await Http.Fetch(b + "terrain.json");
                if (r.Error != null) return null;
                if (r.Status == 200)
                {
                    info = r.Json<TerrainJson>();
                    break;
                }
                if (r.Status != 202) return null;
                await Task.Delay(5000);
            }
            if (info == null || info.Size == null || info.Location == null || info.Scale == null) return null;
            var hb = await Http.GetBytes(b + "height.bin");
            if (hb == null) return null;
            // luz embutida do terreno (Docs/tools/export_terrainlight.py: 257x257 RGB da hora): sem o arquivo fica a luz do URP
            byte[] lb = null, maps = null;
            try
            {
                lb = await Http.GetBytes(b + "light.bin");
                maps = await Http.GetBytes(b + "intmaps.bin");
            }
            catch (Exception)
            {
                lb = null;
            }
            int W = info.Size[0], V = info.Size[1];
            if (hb.Length < W * V * 2) return null;
            var H = new ushort[W * V];
            Buffer.BlockCopy(hb, 0, H, 0, W * V * 2);
            float lx = info.Location[0], ly = info.Location[1], lz = info.Location[2];
            float sx = info.Scale[0], sy = info.Scale[1], sz = info.Scale[2];
            if (register) fields[tile] = new HeightField { Lx = lx, Ly = ly, Lz = lz, Sx = sx, Sy = sy, Sz = sz, W = W, V = V, H = H };

            // o heightmap tem 256 vertices = 255 celulas: sem mais uma coluna/linha (com a altura da borda) sobrava uma
            // fresta de uma celula (128 unidades) na divisa com o tile vizinho
            int MW = W + 1, MV = V + 1;
            var pos = new Vector3[MW * MV];
            var uv = new Vector2[MW * MV];
            var ue = new Vector2[MW * MV];
            for (var j = 0; j < MV; j++)
                for (var i = 0; i < MW; i++)
                {
                    var k = j * MW + i;
                    var x = lx + (i - W / 2f) * sx;
                    var y = ly + (j - V / 2f) * sy;
                    var z = lz + (H[Math.Min(j, V - 1) * W + Math.Min(i, W - 1)] - 32768) * sz / 256;
                    pos[k] = Coords.ToUnity(x, y, z);
                    // alphamap: o three le a imagem sem flipY (linha 0 em v = 0); no Unity a linha 0 fica em v = 1
                    uv[k] = new Vector2((Math.Min(i, W - 1) + 0.5f) / W, 1 - (Math.Min(j, V - 1) + 0.5f) / V);
                    ue[k] = new Vector2(x, y);
                }
            var idx = new int[(MW - 1) * (MV - 1) * 6];
            var p = 0;
            for (var j = 0; j < MV - 1; j++)
                for (var i = 0; i < MW - 1; i++)
                {
                    var a = j * MW + i;
                    var bb = a + MW;
                    // ordem invertida em relacao ao three (face da frente em sentido horario no Unity)
                    idx[p++] = a;
                    idx[p++] = a + 1;
                    idx[p++] = bb;
                    idx[p++] = a + 1;
                    idx[p++] = bb + 1;
                    idx[p++] = bb;
                }
            // "saia": faixa vertical descendo 600 unidades da borda do tile, para que a diferenca de altura entre a borda
            // esticada e a primeira linha do vizinho nao abra uma rachadura com o ceu atras
            var ring = new List<int>();
            for (var i = 0; i < MW; i++) ring.Add(i);
            for (var j = 1; j < MV; j++) ring.Add(j * MW + MW - 1);
            for (var i = MW - 2; i >= 0; i--) ring.Add((MV - 1) * MW + i);
            for (var j = MV - 2; j > 0; j--) ring.Add(j * MW);
            var skirtDrop = 600 * Coords.Scale;
            var posL = new List<Vector3>(pos);
            var uvL = new List<Vector2>(uv);
            var ueL = new List<Vector2>(ue);
            var idxL = new List<int>(idx);
            var first = posL.Count;
            // vertices proprios (em cima e embaixo) para a saia nao entortar as normais da borda do terreno
            foreach (var k in ring)
            {
                posL.Add(pos[k]);
                posL.Add(pos[k] - new Vector3(0, skirtDrop, 0));
                uvL.Add(uv[k]);
                uvL.Add(uv[k]);
                ueL.Add(ue[k]);
                ueL.Add(ue[k]);
            }
            for (var r = 0; r < ring.Count; r++)
            {
                var r2 = (r + 1) % ring.Count;
                int a0 = first + r * 2, a1 = first + r2 * 2, b0 = a0 + 1, b1 = a1 + 1;
                // os dois lados, para ser visivel de dentro e de fora do tile
                idxL.AddRange(new[] { a0, b0, a1, a1, b0, b1, a0, a1, b0, a1, b1, b0 });
            }
            pos = posL.ToArray();
            uv = uvL.ToArray();
            ue = ueL.ToArray();
            idx = idxL.ToArray();
            // cores da grade global (257 = W+1 vertices por lado); a saia copia o vertice de cima
            Color32[] colors = null;
            if (lb != null && lb.Length >= MW * MV * 3)
            {
                colors = new Color32[pos.Length];
                for (var j = 0; j < MV; j++)
                    for (var i = 0; i < MW; i++)
                    {
                        var o = (j * MW + i) * 3;
                        colors[j * MW + i] = new Color32(lb[o], lb[o + 1], lb[o + 2], 255);
                    }
                for (var r = 0; r < ring.Count; r++)
                    colors[first + r * 2] = colors[first + r * 2 + 1] = colors[ring[r]];
            }

            var mesh = new Mesh { name = $"terreno UE {tile}", indexFormat = IndexFormat.UInt32, hideFlags = HideFlags.DontUnloadUnusedAsset };
            mesh.vertices = pos;
            mesh.uv = uv;
            mesh.uv2 = ue;
            if (colors != null) mesh.colors32 = colors;
            if (colors != null && maps != null && maps.Length >= 8 * MW * MV)
            {
                var entry = new Lit { Mesh = mesh, Maps = maps, N = MW * MV, MW = MW, MV = MV, Ring = ring, SkirtFirst = first, Colors = colors, Lx = lx, Ly = ly, Sx = sx, Sy = sy, W = W, V = V };
                lit.Add(entry);
                if (lastEnv != null) SetHour(lastEnv);
            }
            mesh.triangles = idx;
            mesh.RecalculateNormals();
            mesh.RecalculateBounds();

            var layers = info.Layers ?? new List<TerrainLayer>();
            if (layers.Count > MaxLayers) layers = layers.GetRange(0, MaxLayers);
            var texJobs = new List<Task<Texture2D>>();
            var alphaJobs = new List<Task<Texture2D>>();
            foreach (var l in layers)
            {
                texJobs.Add(LoadTex(b + l.Texture, false, true));
                alphaJobs.Add(LoadTex(b + l.Alpha, true, false));
            }
            await Task.WhenAll(texJobs);
            await Task.WhenAll(alphaJobs);

            var mat = new Material(RenderMats.TerrainUeShader) { name = mesh.name, hideFlags = HideFlags.DontUnloadUnusedAsset };
            mat.SetColor("_Color", Color.white);
            var periods = new Vector2[MaxLayers];
            var ac = new float[MaxLayers];
            for (var i = 0; i < layers.Count; i++)
            {
                var t = texJobs[i].Result;
                var a = alphaJobs[i].Result;
                if (t) mat.SetTexture("_L" + i, t);
                if (a)
                {
                    ac[i] = HasAlpha(a) ? 1 : 0;
                    a.Apply(false, true); // libera a copia na CPU
                    mat.SetTexture("_A" + i, a);
                }
                // periodo de repeticao: UScale * tamanho da textura (unidades do Unreal), como a matriz de textura do UE2
                var w = t ? t.width : 256;
                var l = layers[i];
                periods[i] = new Vector2(1 / ((l.UScale != 0 ? l.UScale : 1) * w * TexMul), 1 / ((l.VScale != 0 ? l.VScale : 1) * w * TexMul));
            }
            mat.SetVector("_P01", new Vector4(periods[0].x, periods[0].y, periods[1].x, periods[1].y));
            mat.SetVector("_P23", new Vector4(periods[2].x, periods[2].y, periods[3].x, periods[3].y));
            mat.SetVector("_P45", new Vector4(periods[4].x, periods[4].y, periods[5].x, periods[5].y));
            mat.SetVector("_P67", new Vector4(periods[6].x, periods[6].y, periods[7].x, periods[7].y));
            mat.SetVector("_AC0", new Vector4(ac[0], ac[1], ac[2], ac[3]));
            mat.SetVector("_AC1", new Vector4(ac[4], ac[5], ac[6], ac[7]));
            mat.SetFloat("_Count", layers.Count);
            // luz embutida do terreno (cor de vertice): o shader faz o MODULATE2X do original no lugar da luz do URP
            mat.SetFloat("_Baked", colors != null ? 1 : 0);

            await GeoTerrain.BakeColliders(mesh);
            var go = RenderMats.MeshObject(mesh.name, mesh, mat, null);
            var col = go.AddComponent<MeshCollider>();
            col.sharedMesh = mesh;
            if (register)
            {
                seams.RemoveAll(sm => !sm.Mesh || sm.Tile == tile);
                seams.Add(new Seam { Tile = tile, Mesh = mesh, Collider = col, Pos = pos, MW = MW, MV = MV, W = W, V = V, Lx = lx, Ly = ly, Sx = sx, Sy = sy, Ring = ring, SkirtFirst = first, Drop = skirtDrop });
                StitchAll();
                GeoTerrain.OnUeTerrainLoaded();
            }
            return go;
        }

        /// <summary>
        /// Coluna/linha extra de cada tile (na divisa) com a altura real da primeira linha do vizinho, quando ele esta
        /// carregado: sem isso a borda esticada fica num degrau em relacao ao vizinho nas encostas.
        /// </summary>
        static void StitchAll()
        {
            seams.RemoveAll(sm => !sm.Mesh);
            foreach (var sm in seams)
            {
                var changed = false;
                for (var j = 0; j < sm.MV; j++)
                    for (var i = 0; i < sm.MW; i++)
                    {
                        if (i < sm.W && j < sm.V) continue;
                        var x = sm.Lx + (i - sm.W / 2f) * sm.Sx;
                        var y = sm.Ly + (j - sm.V / 2f) * sm.Sy;
                        var t = Coords.MapTile(x, y);
                        if ($"{t.tx}_{t.ty}" == sm.Tile) continue;
                        var h = UeHeightAt(x, y);
                        if (!h.HasValue) continue;
                        var k = j * sm.MW + i;
                        var yU = h.Value * Coords.Scale;
                        if (Mathf.Abs(sm.Pos[k].y - yU) < 1e-4f) continue;
                        sm.Pos[k].y = yU;
                        changed = true;
                    }
                if (!changed) continue;
                for (var r = 0; r < sm.Ring.Count; r++)
                {
                    var top = sm.Pos[sm.Ring[r]];
                    sm.Pos[sm.SkirtFirst + r * 2] = top;
                    sm.Pos[sm.SkirtFirst + r * 2 + 1] = top - new Vector3(0, sm.Drop, 0);
                }
                sm.Mesh.vertices = sm.Pos;
                sm.Mesh.RecalculateNormals();
                sm.Mesh.RecalculateBounds();
                if (sm.Collider)
                {
                    sm.Collider.sharedMesh = null;
                    sm.Collider.sharedMesh = sm.Mesh;
                }
            }
        }

        /// <summary>Carrega o terreno do Unreal dos tiles em volta (o atual e vizinhos perto da borda).</summary>
        public static async Task<string> LoadUeTerrainFor(GameScene scene, float x, float y)
        {
            var tiles = new HashSet<string>();
            foreach (var dx in new[] { -4000, 0, 4000 })
                foreach (var dy in new[] { -4000, 0, 4000 })
                {
                    var t = Coords.MapTile(x + dx, y + dy);
                    tiles.Add($"{t.tx}_{t.ty}");
                }
            var jobs = new List<Task<string>>();
            foreach (var tile in tiles)
            {
                // ja carregado (e ainda vivo: uma cena nova recarrega) ou sem terreno no servidor
                if ((loaded.TryGetValue(tile, out var g) && g) || failed.Contains(tile)) continue;
                if (!pending.TryGetValue(tile, out var p))
                {
                    p = LoadOne(scene, tile);
                    pending[tile] = p;
                }
                jobs.Add(p);
            }
            var msgs = await Task.WhenAll(jobs);
            return string.Join(" · ", Array.FindAll(msgs, m => !string.IsNullOrEmpty(m)));
        }

        static async Task<string> LoadOne(GameScene scene, string tile)
        {
            try
            {
                var m = await LoadTrack.Track(BuildUeTerrain(tile));
                if (!m)
                {
                    failed.Add(tile);
                    return "";
                }
                loaded[tile] = m;
                if (scene.UeTerrain) m.transform.SetParent(scene.UeTerrain, false);
                return $"terreno do Unreal: {tile}";
            }
            catch (Exception e)
            {
                Debug.LogException(e);
                failed.Add(tile);
                return "";
            }
            finally
            {
                pending.Remove(tile);
            }
        }

        public static bool HasUeTerrain()
        {
            foreach (var m in loaded.Values)
                if (m)
                    return true;
            return false;
        }
    }
}
