// Luz embutida das malhas estaticas (UStaticMeshInstance; Docs/tools/export_smlight.py -> cache/map/<mapa>_smlight.json;
// estudo em scratchpad/baked_light_re.md). Por ator: o ColorStream RGBA por vertice na ordem do VertexStream da malha (= a
// ordem do glb do build_statics.py, conferida pelo exportador), posto no MeshRenderer.additionalVertexStreams; o material
// do molde vira um L2Web/Baked com a mesma textura, o corte alfa e o ambiente D3D da zona (d3d_ambient = AmbientVector/2
// em bytes). Atores sem instancia usavel (chamas bUnlit, planos de luz, contagem errada) ficam com o material do molde.
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.Rendering;

namespace L2Web.Render
{
    public static class BakedLight
    {
        public sealed class Entry
        {
            public string Mesh;
            public int NVerts;
            public bool Unlit, SunZone;
            public Color Ambient;
            public Color32[] Colors;
            /// <summary>Parte estatica (luzes do mapa) e intensidade do sol por mapa k (byte = I x 127), para a releitura por hora.</summary>
            public byte[] Static;
            public byte[][] Sun;
            /// <summary>Malhas de cores dos atores que usam esta entrada (uma por ator).</summary>
            public readonly List<Mesh> Meshes = new();
        }

        static readonly List<Entry> hourly = new();

        /// <summary>
        /// RenderStaticMesh refaz CalculateStaticMeshLighting + InterpolateSunLight (0x10679960) a cada ShadowTick [O
        /// hourly_relight_re.md]: cor = static + floor(I_k0 (1 - f) 0,5 S(t) 255) + floor(I_k1 f 0,5 S(t) 255), saturando, com
        /// S = plano HSVStaticMeshLight(t) e k0/k1/f como o terreno (time(i) = (i + 0,5) 24 / n).
        /// </summary>
        public static void SetHour(L2Web.Render.Env.L2Env env)
        {
            if (hourly.Count == 0) return;
            var sp = env.GetEnvPlane("HSVStaticMeshLight");
            foreach (var e in hourly)
            {
                var n = e.Sun.Length;
                if (n == 0 || e.Static == null) continue;
                var (i0, i1, f) = L2Web.Render.Env.L2Env.ShadowMapIndex(env.T, n);
                byte[] s0 = e.Sun[i0], s1 = e.Sun[i1];
                for (var v = 0; v < e.NVerts; v++)
                {
                    var a = s0[v] / 127f * (1 - f) * 0.5f;
                    var b = s1[v] / 127f * f * 0.5f;
                    int r = e.Static[v * 4] + (int)(a * sp.x * 255) + (int)(b * sp.x * 255);
                    int g = e.Static[v * 4 + 1] + (int)(a * sp.y * 255) + (int)(b * sp.y * 255);
                    int bl = e.Static[v * 4 + 2] + (int)(a * sp.z * 255) + (int)(b * sp.z * 255);
                    e.Colors[v] = new Color32((byte)Mathf.Min(255, r), (byte)Mathf.Min(255, g), (byte)Mathf.Min(255, bl), 255);
                }
                e.Meshes.RemoveAll(m => !m);
                foreach (var m in e.Meshes) m.colors32 = e.Colors;
            }
        }

        static readonly Dictionary<string, Task<Dictionary<string, Entry>>> maps = new();
        // um material por (fonte, ambiente D3D ou "zona com sol", unlit): o mesmo material do molde serve a atores de zonas com
        // ambientes diferentes; nas zonas com sol o ambiente e GetStaticMeshAmbientColor(t) >> 1 por quadro (RenderStaticMesh)
        static readonly Dictionary<(Material, int, bool), Material> baked = new();
        static readonly List<Material> sunZoneMats = new();
        const int SunKey = -1;

        /// <summary>RenderStaticMesh: SetAmbientLight(GetStaticMeshAmbientColor(t) &gt;&gt; 1) nas zonas com sol, a cada quadro.</summary>
        public static void SetSunAmbient(Color32 amb)
        {
            var c = new Color((amb.r >> 1) / 255f, (amb.g >> 1) / 255f, (amb.b >> 1) / 255f, 1);
            sunZoneMats.RemoveAll(m => !m);
            foreach (var m in sunZoneMats) m.SetVector("_Ambient", new Vector4(c.r, c.g, c.b, 1));
        }
        static readonly Dictionary<(Mesh, string), Mesh> colorMeshes = new();
        static Shader shader;

        static Shader BakedShader => shader ??= Shader.Find("L2Web/Baked");

        /// <summary>Tabela do mapa (por nome de ator); vazia sem o json.</summary>
        public static Task<Dictionary<string, Entry>> Of(string map)
        {
            if (!maps.TryGetValue(map, out var t))
            {
                t = Load(map);
                maps[map] = t;
            }
            return t;
        }

        static async Task<Dictionary<string, Entry>> Load(string map)
        {
            var res = new Dictionary<string, Entry>(StringComparer.Ordinal);
            JArray arr;
            try
            {
                arr = await Http.GetJson<JArray>($"/map/{map}_smlight.json");
            }
            catch (Exception e)
            {
                Debug.LogWarning("smlight: " + e.Message);
                return res;
            }
            if (arr == null) return res;
            foreach (JObject o in arr)
            {
                var name = (string)o["actor"];
                if (name == null) continue;
                var e = new Entry { Mesh = (string)o["mesh"], NVerts = (int?)o["nverts"] ?? 0, Unlit = (bool?)o["unlit"] == true, SunZone = (bool?)o["sun_zone"] == true };
                var amb = o["d3d_ambient"] as JArray;
                e.Ambient = amb != null && amb.Count >= 3 ? new Color((float)amb[0] / 255f, (float)amb[1] / 255f, (float)amb[2] / 255f, 1) : new Color(60 / 255f, 60 / 255f, 60 / 255f, 1);
                if ((bool?)o["instance_usable"] == true && o["colors"] is JValue cv && cv.Type == JTokenType.String)
                {
                    var bytes = Convert.FromBase64String((string)cv);
                    if (bytes.Length == e.NVerts * 4)
                    {
                        e.Colors = new Color32[e.NVerts];
                        for (var i = 0; i < e.NVerts; i++) e.Colors[i] = new Color32(bytes[i * 4], bytes[i * 4 + 1], bytes[i * 4 + 2], 255);
                    }
                    // releitura por hora: parte estatica + sol por mapa k (zonas com sol)
                    if (o["static"] is JValue sv && sv.Type == JTokenType.String && o["sun"] is JArray sun && sun.Count > 0)
                    {
                        var st = Convert.FromBase64String((string)sv);
                        if (st.Length == e.NVerts * 4)
                        {
                            e.Static = st;
                            e.Sun = new byte[sun.Count][];
                            var ok = true;
                            for (var k = 0; k < sun.Count; k++)
                            {
                                e.Sun[k] = Convert.FromBase64String((string)sun[k]);
                                if (e.Sun[k].Length != e.NVerts) ok = false;
                            }
                            if (ok) hourly.Add(e);
                            else e.Sun = null;
                        }
                    }
                }
                res[name] = e;
            }
            return res;
        }

        /// <summary>Material L2Web/Baked equivalente ao material do molde (textura, corte alfa, cull); um por molde e ambiente.</summary>
        public static Material MaterialFor(Material src, Entry e)
        {
            if (!src || !BakedShader) return src;
            var ambKey = e.SunZone && !e.Unlit ? SunKey : ((int)(e.Ambient.r * 255) << 16) | ((int)(e.Ambient.g * 255) << 8) | (int)(e.Ambient.b * 255);
            var key = (src, ambKey, e.Unlit);
            if (baked.TryGetValue(key, out var m) && m) return m;
            m = new Material(BakedShader) { name = src.name + " (baked)", hideFlags = HideFlags.DontUnloadUnusedAsset };
            var tex = src.HasProperty("baseColorTexture") ? src.GetTexture("baseColorTexture") : src.mainTexture;
            if (tex) m.SetTexture("_MainTex", tex);
            var cutoff = src.HasProperty("alphaCutoff") && src.IsKeywordEnabled("_ALPHATEST_ON") ? src.GetFloat("alphaCutoff") : 0;
            if (cutoff <= 0 && src.HasProperty("alphaCutoff") && src.renderQueue == (int)RenderQueue.AlphaTest) cutoff = src.GetFloat("alphaCutoff");
            m.SetFloat("_Cutoff", cutoff);
            m.SetFloat("_Cull", (float)CullMode.Off);
            // SetVector: o SetColor converteria o valor (em gama) para linear
            m.SetVector("_Ambient", new Vector4(e.Ambient.r, e.Ambient.g, e.Ambient.b, 1));
            m.SetFloat("_Unlit", e.Unlit ? 1 : 0);
            m.enableInstancing = true;
            baked[key] = m;
            if (ambKey == SunKey) sunZoneMats.Add(m);
            return m;
        }

        /// <summary>Malha so com as cores (mesmo numero de vertices) para o additionalVertexStreams do ator.</summary>
        public static Mesh ColorMesh(Mesh template, string actor, Color32[] colors)
        {
            if (!template || colors == null || template.vertexCount != colors.Length) return null;
            var key = (template, actor);
            if (colorMeshes.TryGetValue(key, out var m) && m) return m;
            m = new Mesh { name = template.name + " cores " + actor, hideFlags = HideFlags.DontUnloadUnusedAsset };
            m.vertices = template.vertices;
            m.colors32 = colors;
            colorMeshes[key] = m;
            return m;
        }

        /// <summary>Aplica num renderer de uma parte do ator; false se a instancia nao serve (contagem diferente).</summary>
        static readonly bool Disabled = System.Array.IndexOf(System.Environment.GetCommandLineArgs(), "-l2nobaked") >= 0;
        static readonly bool Log = System.Array.IndexOf(System.Environment.GetCommandLineArgs(), "-l2partlog") >= 0;
        static int logged;

        public static bool Apply(MeshRenderer mr, MeshFilter mf, Entry e, string actor)
        {
            if (Disabled || mr == null || mf == null || e?.Colors == null || !mf.sharedMesh) return false;
            if (Log && logged < 12)
            {
                logged++;
                int sum = 0;
                foreach (var c in e.Colors) sum += c.r + c.g + c.b;
                Debug.Log($"[baked] {actor} {e.Mesh} v={e.Colors.Length}/{mf.sharedMesh.vertexCount} media={(float)sum / (3 * e.Colors.Length):0.0} amb={e.Ambient} sol={e.SunZone} unlit={e.Unlit} mats={mr.sharedMaterials.Length} shader0={(mr.sharedMaterials.Length > 0 && mr.sharedMaterials[0] ? mr.sharedMaterials[0].shader.name : "-")}");
            }
            var cm = ColorMesh(mf.sharedMesh, actor, e.Colors);
            if (!cm) return false;
            if (e.Sun != null && !e.Meshes.Contains(cm)) e.Meshes.Add(cm);
            var mats = mr.sharedMaterials;
            for (var i = 0; i < mats.Length; i++)
                // materiais de efeito (MatAnim: chamas, planos de luz) ficam como estao
                if (mats[i] && mats[i].shader != RenderMats.FxShader)
                    mats[i] = MaterialFor(mats[i], e);
            mr.sharedMaterials = mats;
            mr.additionalVertexStreams = cm;
            return true;
        }
    }
}
