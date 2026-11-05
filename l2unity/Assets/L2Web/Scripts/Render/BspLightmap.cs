// Lightmap do BSP (scratchpad/bsp_lightmap_re.md; Docs/tools/export_bsplm.py -> cache/bsp/<mapa>_lm.png (atlas 512 da hora,
// FMultiLightMapTexture.Textures[k], k = (int)(8 t / 24) % 8 = 4 as 12h) + <mapa>_lm_uv2.json (TEXCOORD_1 por material na
// ordem dos vertices do glb do porte, conferida pelo check-glb). O D3D liga o atlas como segunda etapa com MODULATE2X e
// clamp: pixel = sat(2 tex lm), sem luz por vertice. Vertices sem lightmap (iLightMap = -1, ex. GL_CA_in_wall) ficam no
// (0, 0) do atlas; no original tambem ficam sem luz.
// O glTFast junta os primitivos do glb numa Mesh so (um buffer de vertices compartilhado, uma submalha por material):
// os uv2 dos materiais sao concatenados na ordem dos primitivos, que e a ordem global dos vertices.
using System.Collections.Generic;
using System.Threading.Tasks;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.Rendering;

namespace L2Web.Render
{
    public static class BspLightmap
    {
        static Shader shader;
        static Shader BakedShader => shader ??= Shader.Find("L2Web/Baked");

        /// <summary>Atlas por hora (FMultiLightMapTexture.Textures[k]) e os materiais que os usam, por tile.</summary>
        sealed class Tile
        {
            public Texture2D[] Atlases = new Texture2D[8];
            public readonly List<Material> Mats = new();
            public int K = -1;
        }

        static readonly Dictionary<string, Tile> tiles = new();

        /// <summary>
        /// FBspDrawList::Render (0x10669de0, 0x1066a11f): k = trunc(N t / 24) mod N por quadro, so em zonas com sol (senao 0),
        /// sem mistura entre atlas. [I] aplicado a todos os materiais do tile (a zona por secao nao e exportada).
        /// </summary>
        public static void SetHour(double t)
        {
            var k = ((int)(8 * t / 24) % 8 + 8) % 8;
            foreach (var tile in tiles.Values)
            {
                if (tile.K == k || !tile.Atlases[k]) continue;
                tile.K = k;
                tile.Mats.RemoveAll(m => !m);
                foreach (var m in tile.Mats) m.SetTexture("_LightMap", tile.Atlases[k]);
            }
        }

        /// <summary>uv2 de cada material, concatenados na ordem dos primitivos; null se a soma nao bate com a malha.</summary>
        public static Vector2[] Concat(JArray mats, int vertexCount)
        {
            var list = new List<Vector2>(vertexCount);
            foreach (JObject m in mats)
                foreach (var uv in (JArray)m["uv2"])
                    // atlas: V do D3D cresce para baixo; a textura do Unity cresce para cima
                    list.Add(new Vector2((float)uv[0], 1 - (float)uv[1]));
            return list.Count == vertexCount ? list.ToArray() : null;
        }

        static Material Baked(Material src, Texture2D atlas)
        {
            var bm = new Material(BakedShader) { name = src.name.Replace(" (Instance)", "") + " (lightmap)", hideFlags = HideFlags.DontUnloadUnusedAsset };
            var tex = src.HasProperty("baseColorTexture") ? src.GetTexture("baseColorTexture") : src.mainTexture;
            if (tex) bm.SetTexture("_MainTex", tex);
            var cutoff = src.HasProperty("alphaCutoff") && src.renderQueue == (int)RenderQueue.AlphaTest ? src.GetFloat("alphaCutoff") : 0;
            bm.SetFloat("_Cutoff", cutoff);
            bm.SetFloat("_Cull", (float)CullMode.Off);
            bm.SetTexture("_LightMap", atlas);
            bm.SetFloat("_UseLightMap", 1);
            return bm;
        }

        /// <summary>Aplica o lightmap nas malhas do glb do BSP; devolve quantos materiais foram trocados.</summary>
        public static async Task<int> Apply(string tile, MeshFilter[] filters)
        {
            JObject j;
            Texture2D atlas;
            try
            {
                j = await Http.GetJson<JObject>($"/bsp/{tile}_lm_uv2.json");
                // lido linear: o atlas ja e o valor de luz em gama que o D3D multiplica (como o ColorStream)
                atlas = await Http.GetTexture($"/bsp/{tile}_lm.png", true);
            }
            catch (System.Exception)
            {
                return 0;
            }
            if (j == null || !atlas || j["materials"] is not JArray mats || !BakedShader) return 0;
            atlas.wrapMode = TextureWrapMode.Clamp;
            atlas.filterMode = FilterMode.Bilinear;
            atlas.hideFlags |= HideFlags.DontUnloadUnusedAsset;
            // os 8 atlas da hora (k = 4 e o das 12h, igual ao <tile>_lm.png)
            var td = new Tile();
            for (var k = 0; k < 8; k++)
            {
                try
                {
                    var tk = await Http.GetTexture($"/bsp/{tile}_lm_k{k}.png", true);
                    if (tk)
                    {
                        tk.wrapMode = TextureWrapMode.Clamp;
                        tk.hideFlags |= HideFlags.DontUnloadUnusedAsset;
                        td.Atlases[k] = tk;
                    }
                }
                catch (System.Exception)
                {
                    // sem o atlas da hora: fica o das 12h
                }
            }
            tiles[tile] = td;
            var applied = 0;
            foreach (var mf in filters)
            {
                if (!mf || !mf.sharedMesh) continue;
                var mr = mf.GetComponent<MeshRenderer>();
                if (!mr) continue;
                var mesh = mf.sharedMesh;
                var uv2 = Concat(mats, mesh.vertexCount);
                if (uv2 == null)
                {
                    Debug.LogWarning($"lightmap {tile}: uv2 de {mats.Count} materiais nao soma {mesh.vertexCount} vertices");
                    continue;
                }
                mesh.SetUVs(1, uv2);
                var ms = mr.sharedMaterials;
                for (var i = 0; i < ms.Length; i++)
                {
                    // materiais de efeito (agua, MatAnim) ficam como estao
                    if (!ms[i] || ms[i].shader == RenderMats.FxShader) continue;
                    ms[i] = Baked(ms[i], atlas);
                    td.Mats.Add(ms[i]);
                    applied++;
                }
                mr.sharedMaterials = ms;
            }
            return applied;
        }
    }
}
