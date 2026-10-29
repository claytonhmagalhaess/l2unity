// Assets dos efeitos (spec 09 §1.1): texturas das particulas, malhas estaticas dos MeshEmitter e malhas de vertices dos
// VertMeshEmitter, pelo mapa ref -> url gerado por Docs/tools/export_fx_assets.py (fx/fx_assets.json). Tambem as tabelas
// (fx/fx_tables.json: weapongrp, Npcgrp, armorgrp, chargrp, skillsoundgrp, env.int [EnchantEffect], soulshot.int) e a
// biblioteca de classes (fx/lineageeffect.json + pacotes extras sobre fx/engine_defaults.json).
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using GLTFast;
using L2Web.World;
using Newtonsoft.Json.Linq;
using UnityEngine;

namespace L2Web.Render.Fx
{
    public static class FxAssets
    {
        static JObject assets;
        static readonly Dictionary<string, Task<Texture2D>> textures = new();
        static readonly Dictionary<string, Task<MeshTemplate>> meshes = new();
        static readonly Dictionary<string, Task<VertMeshData>> vmeshes = new();
        static Task<FxLibrary> library;
        static Task<JObject> tables;

        public sealed class MeshTemplate
        {
            public struct Part
            {
                public Mesh Mesh;
                public Material[] Materials;
                public Matrix4x4 Local;
            }

            public readonly List<Part> Parts = new();
            public GltfImport Gltf;
            /// <summary>MeshExtent (UMeshEmitter::Initialize): max(|Min-C|, |Max-C|) da caixa, em unidades do Unreal.</summary>
            public float MeshExtent;
        }

        public sealed class VertMeshData
        {
            public Vector3[][] Frames = Array.Empty<Vector3[]>();
            public int[] Triangles = Array.Empty<int>();
            public Vector2[] Uv = Array.Empty<Vector2>();
            public int[] Wedges = Array.Empty<int>();
        }

        public static void Reset()
        {
            assets = null;
            textures.Clear();
            meshes.Clear();
            vmeshes.Clear();
            library = null;
            tables = null;
        }

        /// <summary>fx_assets.json (ref -> url); nulo se o export ainda nao rodou.</summary>
        public static async Task<JObject> Map()
        {
            if (assets != null) return assets;
            try
            {
                var j = await Http.GetJson<JObject>("/fx/fx_assets.json");
                assets = j?["assets"] as JObject ?? new JObject();
            }
            catch (Exception)
            {
                assets = new JObject();
            }
            return assets;
        }

        public static string UrlOf(string reference)
        {
            if (assets == null || string.IsNullOrEmpty(reference)) return null;
            return (string)assets[reference];
        }

        /// <summary>Biblioteca de classes de efeito (carregada uma vez).</summary>
        public static Task<FxLibrary> Library() => library ??= LoadLibrary();

        static async Task<FxLibrary> LoadLibrary()
        {
            var lib = new FxLibrary();
            try
            {
                lib.LoadEngineDefaults(await Http.GetJson<JObject>("/fx/engine_defaults.json"));
                foreach (var fn in new[] { "lineageeffect.json", "LineageKetraEffect.json", "Rider_Effect.json" })
                {
                    try
                    {
                        var text = await Http.GetText("/fx/" + fn);
                        if (text == null) continue;
                        var j = await Task.Run(() => JObject.Parse(text));
                        lib.LoadPackage(j);
                    }
                    catch (Exception e)
                    {
                        Debug.LogWarning("fx: " + fn + ": " + e.Message);
                    }
                }
            }
            catch (Exception e)
            {
                Debug.LogWarning("fx: sem engine_defaults.json: " + e.Message);
            }
            return lib;
        }

        /// <summary>fx_tables.json (armas, npcs, sons, enchant...).</summary>
        public static Task<JObject> Tables() => tables ??= LoadTables();

        static async Task<JObject> LoadTables()
        {
            try
            {
                return await Http.GetJson<JObject>("/fx/fx_tables.json") ?? new JObject();
            }
            catch (Exception)
            {
                return new JObject();
            }
        }

        public static Task<Texture2D> Texture(string reference)
        {
            if (string.IsNullOrEmpty(reference)) return Task.FromResult<Texture2D>(null);
            if (textures.TryGetValue(reference, out var t)) return t;
            t = LoadTexture(reference);
            textures[reference] = t;
            return t;
        }

        static async Task<Texture2D> LoadTexture(string reference)
        {
            await Map();
            var url = UrlOf(reference);
            if (url == null)
            {
                // sem mapa: tenta o nome direto nas pastas do umodel
                var name = reference.Substring(reference.LastIndexOf('.') + 1);
                var pkg = reference.Split('.')[0];
                url = $"/raw/{pkg}/Texture/{name}.png";
            }
            var tex = await Http.GetTexture(url);
            if (tex) tex.wrapMode = TextureWrapMode.Repeat;
            return tex;
        }

        public static Task<MeshTemplate> StaticMesh(string reference)
        {
            if (string.IsNullOrEmpty(reference)) return Task.FromResult<MeshTemplate>(null);
            if (meshes.TryGetValue(reference, out var t)) return t;
            t = LoadMesh(reference);
            meshes[reference] = t;
            return t;
        }

        static Transform templateRoot;

        static async Task<MeshTemplate> LoadMesh(string reference)
        {
            await Map();
            var url = UrlOf(reference) ?? "/statics/" + reference + ".glb";
            var gltf = new GltfImport();
            try
            {
                if (!await gltf.Load(Http.Url(url), new ImportSettings { GenerateMipMaps = true, DefaultMinFilterMode = GLTFast.Schema.Sampler.MinFilterMode.LinearMipmapLinear }))
                {
                    gltf.Dispose();
                    return null;
                }
            }
            catch (Exception)
            {
                gltf.Dispose();
                return null;
            }
            if (!templateRoot)
            {
                var tr = new GameObject("l2web fx (moldes)");
                tr.SetActive(false);
                tr.hideFlags = HideFlags.HideAndDontSave;
                templateRoot = tr.transform;
            }
            var holder = new GameObject(reference);
            holder.transform.SetParent(templateRoot, false);
            if (!await gltf.InstantiateMainSceneAsync(holder.transform))
            {
                RenderMats.Destroy(holder);
                return null;
            }
            var t = new MeshTemplate { Gltf = gltf };
            var inv = holder.transform.worldToLocalMatrix;
            var box = new Bounds();
            var any = false;
            foreach (var mf in holder.GetComponentsInChildren<MeshFilter>(true))
            {
                var mr = mf.GetComponent<MeshRenderer>();
                if (!mf.sharedMesh || !mr) continue;
                mf.sharedMesh.hideFlags |= HideFlags.DontUnloadUnusedAsset;
                foreach (var m in mr.sharedMaterials)
                    if (m)
                    {
                        m.hideFlags |= HideFlags.DontUnloadUnusedAsset;
                        foreach (var tn in m.GetTexturePropertyNameIDs())
                        {
                            var tex = m.GetTexture(tn);
                            if (tex) tex.hideFlags |= HideFlags.DontUnloadUnusedAsset;
                        }
                    }
                var local = inv * mf.transform.localToWorldMatrix;
                t.Parts.Add(new MeshTemplate.Part { Mesh = mf.sharedMesh, Materials = mr.sharedMaterials, Local = local });
                var b = mf.sharedMesh.bounds;
                for (var i = 0; i < 8; i++)
                {
                    var c = b.center + Vector3.Scale(b.extents, new Vector3((i & 1) != 0 ? 1 : -1, (i & 2) != 0 ? 1 : -1, (i & 4) != 0 ? 1 : -1));
                    var p = local.MultiplyPoint3x4(c);
                    if (!any) { box = new Bounds(p, Vector3.zero); any = true; }
                    else box.Encapsulate(p);
                }
            }
            foreach (var p in t.Parts) await MatAnim.Apply(p.Materials);
            RenderMats.Destroy(holder);
            if (any)
            {
                // caixa em unidades do Unreal (as malhas ja estao em unidades do Unity)
                var c = box.center;
                t.MeshExtent = Mathf.Max((box.min - c).magnitude, (box.max - c).magnitude) / Coords.Scale;
            }
            return t;
        }

        public static Task<VertMeshData> VertMesh(string reference)
        {
            if (string.IsNullOrEmpty(reference)) return Task.FromResult<VertMeshData>(null);
            if (vmeshes.TryGetValue(reference, out var t)) return t;
            t = LoadVertMesh(reference);
            vmeshes[reference] = t;
            return t;
        }

        /// <summary>.vmesh (L2VM): quadros de vertices (x, y, z em unidades do mesh), triangulos com UV por wedge.</summary>
        static async Task<VertMeshData> LoadVertMesh(string reference)
        {
            await Map();
            var url = UrlOf(reference) ?? "/fx/vm/" + reference.Substring(reference.LastIndexOf('.') + 1) + ".vmesh";
            var b = await Http.GetBytes(url);
            if (b == null || b.Length < 16 || b[0] != (byte)'L' || b[1] != (byte)'2' || b[2] != (byte)'V' || b[3] != (byte)'M') return null;
            var nf = BitConverter.ToInt32(b, 4);
            var nv = BitConverter.ToInt32(b, 8);
            var np = BitConverter.ToInt32(b, 12);
            var p = 16;
            var d = new VertMeshData { Frames = new Vector3[nf][] };
            for (var f = 0; f < nf; f++)
            {
                var fr = new Vector3[nv];
                for (var v = 0; v < nv; v++)
                {
                    fr[v] = new Vector3(BitConverter.ToSingle(b, p), BitConverter.ToSingle(b, p + 4), BitConverter.ToSingle(b, p + 8));
                    p += 12;
                }
                d.Frames[f] = fr;
            }
            d.Triangles = new int[np * 3];
            d.Wedges = new int[np * 3];
            d.Uv = new Vector2[np * 3];
            for (var i = 0; i < np; i++)
            {
                int v0 = BitConverter.ToUInt16(b, p), v1 = BitConverter.ToUInt16(b, p + 2), v2 = BitConverter.ToUInt16(b, p + 4);
                var uv = new Vector2[3];
                for (var k = 0; k < 3; k++) uv[k] = new Vector2(b[p + 8 + k * 2] / 255f, b[p + 9 + k * 2] / 255f);
                p += 14;
                d.Wedges[i * 3] = v0; d.Wedges[i * 3 + 1] = v1; d.Wedges[i * 3 + 2] = v2;
                d.Uv[i * 3] = uv[0]; d.Uv[i * 3 + 1] = uv[1]; d.Uv[i * 3 + 2] = uv[2];
                d.Triangles[i * 3] = i * 3; d.Triangles[i * 3 + 1] = i * 3 + 1; d.Triangles[i * 3 + 2] = i * 3 + 2;
            }
            return d;
        }
    }
}
