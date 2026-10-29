// StaticMeshes do mapa (predios, muros, arvores, postes...) a partir de /map/X_Y.json, gerado por
// tools/map/build_statics.py (render/statics.ts), e a geometria BSP do nivel (/bsp/X_Y.glb).
// Cada .glb distinto e importado uma vez (glTFast, em cache por URL) e instanciado uma vez como molde; cada ator do
// mapa vira um GameObject leve que reaproveita a Mesh e os materiais do molde (SRP Batcher/instancing), com
// MeshCollider (cozido uma vez por malha numa thread de trabalho) para clique, piso visivel e colisao da camera.
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using GLTFast;
using L2Web.World;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Rendering;

namespace L2Web.Render
{
    public static class Statics
    {
        public sealed class MapActor
        {
            public string Name;
            public string Mesh;
            public string Url;
            public float[] Loc;
            public float[] Rot;
            public float Scale = 1;
            public float[] Scale3d;
        }

        sealed class MapJson
        {
            public List<MapActor> Actors;
        }

        /// <summary>Uma malha do molde: Mesh + materiais + matriz relativa a raiz do glb (ja no espaco do Unity).</summary>
        sealed class Part
        {
            public Mesh Mesh;
            public Material[] Materials;
            public Matrix4x4 Local;
        }

        sealed class Template
        {
            public GltfImport Gltf;
            public List<Part> Parts;
        }

        const float S = Coords.Scale;
        static readonly Dictionary<string, Transform> loadedTiles = new();
        /// <summary>Tile de StaticMeshes carregado (nome, raiz): o ambiente do mapa (luzes, portas, emissores) engancha aqui.</summary>
        public static Action<string, Transform> OnTileLoaded;
        static readonly Dictionary<string, Task<List<MapActor>>> available = new();
        static readonly Dictionary<string, Task<Template>> templates = new();
        static readonly HashSet<Mesh> baked = new();
        static readonly HashSet<string> reported = new();
        /// <summary>Tiles cujo BSP ja foi pedido, com a raiz onde foi colocado (uma cena nova pede de novo).</summary>
        static readonly Dictionary<string, Transform> bspTried = new();
        static readonly Dictionary<string, Task<string>> inflight = new();
        static Transform templateRoot;

        static ImportSettings Settings() => new ImportSettings
        {
            GenerateMipMaps = true,
            DefaultMinFilterMode = GLTFast.Schema.Sampler.MinFilterMode.LinearMipmapLinear,
            AnisotropicFilterLevel = 4,
        };

        /// <summary>
        /// Matriz do Unity de um ator UE. O TS montava a do three (P * R(pitch, yaw, roll) * S * P, P trocando y e z) com
        /// translacao (x, z, y); o Unity e o three com X negado: N * M * N, N = diag(-1, 1, 1).
        /// </summary>
        public static Matrix4x4 ActorMatrix(MapActor a)
        {
            const double k = Math.PI * 2 / 65536;
            var rot = a.Rot ?? new float[3];
            double pitch = rot[0] * k, yaw = rot[1] * k, roll = rot[2] * k;
            double SP = Math.Sin(pitch), CP = Math.Cos(pitch), SY = Math.Sin(yaw), CY = Math.Cos(yaw), SR = Math.Sin(roll), CR = Math.Cos(roll);
            // FRotationMatrix do UE (convencao de vetor-linha); A = M^T para vetor-coluna
            var M = new[,]
            {
                { CP * CY, CP * SY, SP },
                { SR * SP * CY - CR * SY, SR * SP * SY + CR * CY, -SR * CP },
                { -(CR * SP * CY + SR * SY), CY * SR - CR * SP * SY, CR * CP },
            };
            var s3 = a.Scale3d ?? new float[] { 1, 1, 1 };
            var sc = a.Scale;
            var s = new double[] { s3[0] * sc, s3[1] * sc, s3[2] * sc };
            double A(int i, int j) => M[j, i] * s[j];
            int[] P = { 0, 2, 1 }; // eixo three -> eixo UE
            float[] n = { -1, 1, 1 }; // three -> Unity
            var m = Matrix4x4.identity;
            for (var r = 0; r < 3; r++)
                for (var c = 0; c < 3; c++)
                    m[r, c] = (float)(A(P[r], P[c]) * n[r] * n[c]);
            var loc = a.Loc ?? new float[3];
            m.SetColumn(3, (Vector4)Coords.ToUnity(loc[0], loc[1], loc[2]) + new Vector4(0, 0, 0, 1));
            return m;
        }

        /// <summary>Aviso quando o servidor de desenvolvimento comeca a gerar um tile que ainda nao foi exportado.</summary>
        public static Action<string> OnTileBuilding = _ => { };

        public static void SetOnTileBuilding(Action<string> fn) => OnTileBuilding = fn ?? (_ => { });

        static Task<List<MapActor>> FetchTile(string tile)
        {
            if (!available.TryGetValue(tile, out var p))
            {
                p = FetchTileNow(tile);
                available[tile] = p;
            }
            return p;
        }

        static async Task<List<MapActor>> FetchTileNow(string tile)
        {
            // 202: o dev server esta exportando o tile (build_statics.py); tenta de novo por ate ~5 min
            for (var i = 0; i < 30; i++)
            {
                var r = await Http.Fetch($"/map/{tile}.json");
                if (r.Error != null) return null;
                if (r.Status == 200)
                {
                    try
                    {
                        return r.Json<MapJson>()?.Actors;
                    }
                    catch (Exception e)
                    {
                        Debug.LogException(e);
                        return null;
                    }
                }
                if (r.Status != 202) return null;
                if (i == 0) OnTileBuilding?.Invoke(tile);
                await Task.Delay(10000);
            }
            return null;
        }

        /// <summary>Tiles que precisam de cenario: o atual e os vizinhos a menos de `margin` unidades da borda.</summary>
        public static List<string> TilesAround(float x, float y, float margin = 4000)
        {
            var o = new List<string>();
            foreach (var dx in new[] { -margin, 0, margin })
                foreach (var dy in new[] { -margin, 0, margin })
                {
                    var t = Coords.MapTile(x + dx, y + dy);
                    var k = $"{t.tx}_{t.ty}";
                    if (!o.Contains(k)) o.Add(k);
                }
            return o;
        }

        /// <summary>Ha StaticMeshes exportados para o tile da posicao?</summary>
        public static async Task<bool> HasStatics(float x, float y)
        {
            var (tx, ty) = Coords.MapTile(x, y);
            // nao espera a exportacao de um tile novo: o terreno nao pode ficar bloqueado por ela
            var f = FetchTile($"{tx}_{ty}");
            var done = await Task.WhenAny(f, Task.Delay(1500));
            return done == f && f.Result != null;
        }

        public static async Task<string> LoadStaticsFor(GameScene scene, float x, float y)
        {
            var tiles = TilesAround(x, y);
            var jobs = new List<Task<string>>();
            foreach (var t in tiles) jobs.Add(LoadTrack.Track(LoadTileOnce(scene.Statics, t)));
            foreach (var t in tiles) jobs.Add(LoadTrack.Track(LoadBsp(scene.Statics, t)));
            var msgs = await Task.WhenAll(jobs);
            return Join(msgs);
        }

        static string Join(string[] msgs) => string.Join(" · ", Array.FindAll(msgs, m => !string.IsNullOrEmpty(m)));

        /// <summary>
        /// Geometria BSP do nivel (/bsp/X_Y.glb, tools/map/unr_bsp.py): pisos de cidade, pracas, escadarias e interiores,
        /// ja em coordenadas de mundo. 202 enquanto o dev server exporta; 404 = tile sem BSP visivel.
        /// </summary>
        static async Task<string> LoadBsp(Transform statics, string tile)
        {
            if (bspTried.TryGetValue(tile, out var prev) && prev && prev == statics) return "";
            bspTried[tile] = statics;
            for (var i = 0; i < 30; i++)
            {
                var r = await Http.Fetch($"/bsp/{tile}.glb");
                if (r.Error != null) return "";
                if (r.Status == 200)
                {
                    var gltf = new GltfImport();
                    GameObject root;
                    try
                    {
                        if (!await LoadTrack.Track(gltf.Load(r.Data, new Uri(Http.Url($"/bsp/{tile}.glb")), Settings())))
                            return $"BSP: falha ao ler {tile}";
                        if (!statics) return "";
                        root = new GameObject($"bsp {tile}");
                        root.transform.SetParent(statics, false);
                        if (!await gltf.InstantiateMainSceneAsync(root.transform)) return $"BSP: falha ao ler {tile}";
                    }
                    catch (Exception e)
                    {
                        Debug.LogException(e);
                        return $"BSP: falha ao ler {tile}";
                    }
                    var tris = 0L;
                    var filters = root.GetComponentsInChildren<MeshFilter>(true);
                    var list = new List<Mesh>();
                    foreach (var mf in filters)
                    {
                        if (!mf.sharedMesh) continue;
                        list.Add(mf.sharedMesh);
                        for (var sm = 0; sm < mf.sharedMesh.subMeshCount; sm++) tris += (long)mf.sharedMesh.GetIndexCount(sm) / 3;
                    }
                    await GeoTerrain.BakeColliders(list.ToArray());
                    if (!root) return "";
                    foreach (var mf in filters)
                    {
                        if (!mf || !mf.sharedMesh) continue;
                        mf.gameObject.AddComponent<MeshCollider>().sharedMesh = mf.sharedMesh;
                        var mr = mf.GetComponent<MeshRenderer>();
                        if (mr) mr.shadowCastingMode = ShadowCastingMode.Off;
                    }
                    // lightmap do BSP (FMultiLightMapTexture da hora), quando o mapa tem o <tile>_lm.png
                    var lm = await BspLightmap.Apply(tile, filters);
                    if (lm > 0 && Array.IndexOf(Environment.GetCommandLineArgs(), "-l2partlog") >= 0) Debug.Log($"[bsp] lightmap em {lm} materiais de {tile}");
                    Physics.SyncTransforms();
                    GeoTerrain.MarkBspTile(tile);
                    return $"BSP: {Mathf.RoundToInt(tris / 1000f)} mil triângulos em {tile}";
                }
                if (r.Status != 202) return "";
                await Task.Delay(5000);
            }
            return "";
        }

        /// <summary>Mapa com nome (Lobby): StaticMeshes e BSP sob `statics`.</summary>
        public static async Task<string> LoadNamedMap(Transform statics, string name)
        {
            var msgs = await Task.WhenAll(LoadTrack.Track(LoadTileOnce(statics, name)), LoadTrack.Track(LoadBsp(statics, name)));
            return Join(msgs);
        }

        public static Task<string> LoadNamedMap(GameScene scene, string name) => LoadNamedMap(scene.Statics, name);

        static Task<string> LoadTileOnce(Transform statics, string tile)
        {
            if (loadedTiles.TryGetValue(tile, out var g) && g) return Task.FromResult("");
            if (!inflight.TryGetValue(tile, out var p))
            {
                p = LoadTileGuarded(statics, tile);
                inflight[tile] = p;
                return p;
            }
            return p.ContinueWith(_ => "", TaskScheduler.FromCurrentSynchronizationContext());
        }

        static async Task<string> LoadTileGuarded(Transform statics, string tile)
        {
            try
            {
                return await LoadTile(statics, tile);
            }
            finally
            {
                inflight.Remove(tile);
            }
        }

        /// <summary>Importa o glb uma vez e guarda as malhas (com materiais e matriz de no) para reaproveitar.</summary>
        static Task<Template> GetTemplate(string url)
        {
            // molde cuja malha foi destruida (nao deveria mais acontecer): importa de novo
            if (templates.TryGetValue(url, out var old) && old.IsCompletedSuccessfully && old.Result != null && old.Result.Parts.Exists(pp => !pp.Mesh))
                templates.Remove(url);
            if (!templates.TryGetValue(url, out var t))
            {
                t = LoadTemplate(url);
                templates[url] = t;
            }
            return t;
        }

        static async Task<Template> LoadTemplate(string url)
        {
            var gltf = new GltfImport();
            if (!await gltf.Load(Http.Url(url), Settings()))
            {
                gltf.Dispose();
                return null;
            }
            if (!templateRoot)
            {
                var tr = new GameObject("l2web statics (moldes)");
                tr.SetActive(false);
                tr.hideFlags = HideFlags.HideAndDontSave;
                templateRoot = tr.transform;
            }
            var holder = new GameObject(url);
            holder.transform.SetParent(templateRoot, false);
            if (!await gltf.InstantiateMainSceneAsync(holder.transform))
            {
                RenderMats.Destroy(holder);
                return null;
            }
            var parts = new List<Part>();
            var inv = holder.transform.worldToLocalMatrix;
            foreach (var mf in holder.GetComponentsInChildren<MeshFilter>(true))
            {
                var mr = mf.GetComponent<MeshRenderer>();
                if (!mf.sharedMesh || !mr) continue;
                var mats = mr.sharedMaterials;
                // a limpeza de assets sem uso do Unity (UnloadUnusedAssets) chegava a destruir as malhas dos moldes,
                // que so ficam referenciadas pelo cache (e o lobby/mundo quebrava ao reaproveita-las)
                mf.sharedMesh.hideFlags |= HideFlags.DontUnloadUnusedAsset;
                foreach (var m in mats)
                    if (m)
                    {
                        m.enableInstancing = true;
                        m.hideFlags |= HideFlags.DontUnloadUnusedAsset;
                        foreach (var tn in m.GetTexturePropertyNameIDs())
                        {
                            var tex = m.GetTexture(tn);
                            if (tex) tex.hideFlags |= HideFlags.DontUnloadUnusedAsset;
                        }
                    }
                parts.Add(new Part { Mesh = mf.sharedMesh, Materials = mats, Local = inv * mf.transform.localToWorldMatrix });
            }
            // Shader/FinalBlend com blend de efeito (chamas, cachoeiras, planos de luz): material Fx animado
            foreach (var p in parts) await MatAnim.Apply(p.Materials);
            // o molde nao precisa ficar na cena: Mesh/materiais pertencem ao GltfImport (mantido vivo no Template)
            RenderMats.Destroy(holder);
            var bake = new List<Mesh>();
            foreach (var p in parts)
                if (baked.Add(p.Mesh))
                    bake.Add(p.Mesh);
            await GeoTerrain.BakeColliders(bake.ToArray());
            return new Template { Gltf = gltf, Parts = parts };
        }

        /// <summary>Instancia de um ator que se mexe (moinho, vinhas): cada parte com a matriz relativa ao ator.</summary>
        public sealed class Moving
        {
            public MapActor Actor;
            public readonly List<(Transform tr, Matrix4x4 local)> Parts = new();

            /// <summary>Reposiciona com a rotacao (pitch, yaw, roll) do UE dada.</summary>
            public void Pose(float pitch, float yaw, float roll)
            {
                var rot = Actor.Rot;
                Actor.Rot = new[] { pitch, yaw, roll };
                var am = ActorMatrix(Actor);
                Actor.Rot = rot;
                foreach (var (tr, local) in Parts)
                    if (tr)
                        SetMatrix(tr, am * local);
            }
        }

        /// <summary>Cria a malha do ator (molde do cache, sem colisao) sob parent, para animar com Moving.Pose.</summary>
        public static async Task<Moving> Spawn(MapActor a, Transform parent)
        {
            var t = await GetTemplate(a.Url);
            if (t == null || !parent) return null;
            var m = new Moving { Actor = a };
            foreach (var p in t.Parts)
            {
                if (!p.Mesh) continue;
                var go = new GameObject(a.Mesh ?? "movel");
                go.transform.SetParent(parent, false);
                go.AddComponent<MeshFilter>().sharedMesh = p.Mesh;
                var mr = go.AddComponent<MeshRenderer>();
                mr.sharedMaterials = p.Materials;
                mr.shadowCastingMode = ShadowCastingMode.Off;
                mr.receiveShadows = false;
                m.Parts.Add((go.transform, p.Local));
            }
            var r = a.Rot ?? new float[3];
            m.Pose(r[0], r[1], r[2]);
            return m;
        }

        /// <summary>Coloca a matriz (TRS, sem cisalhamento) num Transform; escala negativa vira X negativo.</summary>
        static void SetMatrix(Transform t, Matrix4x4 m)
        {
            Vector3 c0 = m.GetColumn(0), c1 = m.GetColumn(1), c2 = m.GetColumn(2);
            float sx = c0.magnitude, sy = c1.magnitude, sz = c2.magnitude;
            if (Vector3.Dot(Vector3.Cross(c0, c1), c2) < 0)
            {
                sx = -sx;
                c0 = -c0;
            }
            t.localPosition = m.GetColumn(3);
            if (sy > 1e-8f && sz > 1e-8f) t.localRotation = Quaternion.LookRotation(c2 / sz, c1 / sy);
            t.localScale = new Vector3(sx, sy, sz);
        }

        static async Task<string> LoadTile(Transform statics, string tile)
        {
            if (loadedTiles.TryGetValue(tile, out var lt) && lt) return "";
            var actors = await FetchTile(tile);
            if (actors == null)
            {
                if (!reported.Add(tile)) return "";
                return $"cenário: sem StaticMeshes para {tile}";
            }
            if (loadedTiles.TryGetValue(tile, out lt) && lt) return "";
            if (!statics) return "";
            var group = new GameObject($"statics {tile}").transform;
            group.SetParent(statics, false);
            loadedTiles[tile] = group;
            OnTileLoaded?.Invoke(tile, group.transform);
            var byUrl = new Dictionary<string, List<MapActor>>();
            foreach (var a in actors)
            {
                if (string.IsNullOrEmpty(a.Url)) continue;
                if (!byUrl.TryGetValue(a.Url, out var l)) byUrl[a.Url] = l = new List<MapActor>();
                l.Add(a);
            }
            var tris = 0L;
            var failed = 0;
            var jobs = new List<Task>();
            foreach (var kv in byUrl)
            {
                var url = kv.Key;
                var list = kv.Value;
                jobs.Add(Place(url, list));
            }
            async Task Place(string url, List<MapActor> list)
            {
                Template t;
                try
                {
                    t = await LoadTrack.Track(GetTemplate(url));
                }
                catch (Exception e)
                {
                    Debug.LogWarning($"statics {url}: {e.Message}");
                    t = null;
                }
                if (t == null)
                {
                    failed++;
                    return;
                }
                if (!group) return;
                // bSwayObject da malha: o ator balanca com o vento (WindSway, FWind::Sway)
                var sway = list.Count > 0 ? await WindSway.Of(list[0].Mesh) : null;
                // luz embutida por ator (UStaticMeshInstance), quando o mapa tem o <mapa>_smlight.json
                var bakedMap = await BakedLight.Of(tile);
                if (!group) return;
                foreach (var a in list)
                {
                    var am = ActorMatrix(a);
                    var moving = sway != null ? new Moving { Actor = a } : null;
                    foreach (var p in t.Parts)
                    {
                        if (!p.Mesh) continue;
                        var go = new GameObject(a.Mesh ?? "static");
                        moving?.Parts.Add((go.transform, p.Local));
                        var tr = go.transform;
                        tr.SetParent(group, false);
                        SetMatrix(tr, am * p.Local);
                        go.AddComponent<MeshFilter>().sharedMesh = p.Mesh;
                        var mr = go.AddComponent<MeshRenderer>();
                        mr.sharedMaterials = p.Materials;
                        mr.shadowCastingMode = ShadowCastingMode.Off;
                        mr.receiveShadows = false;
                        if (a.Name != null && bakedMap.TryGetValue(a.Name, out var be))
                            BakedLight.Apply(mr, go.GetComponent<MeshFilter>(), be, a.Name);
                        go.AddComponent<MeshCollider>().sharedMesh = p.Mesh;
                        for (var sm = 0; sm < p.Mesh.subMeshCount; sm++) tris += (long)p.Mesh.GetIndexCount(sm) / 3;
                    }
                    if (moving != null) WindSway.Register(moving, sway.Value.f, sway.Value.m);
                }
            }
            await Task.WhenAll(jobs);
            Physics.SyncTransforms();
            GeoTerrain.InvalidateFloors();
            return $"cenário: {actors.Count} objetos de {byUrl.Count} malhas em {tile} ({Mathf.RoundToInt(tris / 1000f)} mil triângulos{(failed > 0 ? $", {failed} falharam" : "")})";
        }

        /// <summary>Descarta os tiles carregados (os moldes ficam em cache).</summary>
        public static void Clear()
        {
            foreach (var g in loadedTiles.Values)
                if (g)
                    RenderMats.Destroy(g.gameObject);
            loadedTiles.Clear();
            bspTried.Clear();
        }
    }
}
