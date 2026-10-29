// Materiais criados em codigo pelos modulos de render (equivalentes aos MeshBasic/MeshLambert/Sprite do three) e
// conversoes de cor. Os shaders ficam em Render/Resources (incluidos no build).
using UnityEngine;
using UnityEngine.Rendering;

namespace L2Web.Render
{
    public static class RenderMats
    {
        static Shader fx;
        static Shader vertexLit;
        static Shader terrainUe;
        static Texture2D glow;
        static Mesh quad;

        public static Shader FxShader => fx ??= Shader.Find("L2Web/Fx");
        public static Shader VertexLitShader => vertexLit ??= Shader.Find("L2Web/VertexLit");
        public static Shader TerrainUeShader => terrainUe ??= Shader.Find("L2Web/TerrainUE");

        /// <summary>Cor do three (0xRRGGBB, sRGB) para Color do Unity.</summary>
        public static Color Hex(int rgb, float a = 1f) =>
            new Color(((rgb >> 16) & 255) / 255f, ((rgb >> 8) & 255) / 255f, (rgb & 255) / 255f, a);

        /// <summary>Material sem luz. additive = AdditiveBlending do three; transparent = alpha normal; senao opaco.</summary>
        public static Material Fx(Color color, bool additive = false, bool transparent = true, Texture tex = null, bool billboard = false, bool fog = false)
        {
            var m = new Material(FxShader) { name = "l2web fx" };
            m.SetColor("_Color", color);
            if (tex) m.SetTexture("_MainTex", tex);
            m.SetFloat("_Billboard", billboard ? 1 : 0);
            m.SetFloat("_Fog", fog ? 1 : 0);
            if (additive)
            {
                m.SetFloat("_SrcBlend", (float)BlendMode.SrcAlpha);
                m.SetFloat("_DstBlend", (float)BlendMode.One);
                m.SetFloat("_ZWrite", 0);
                m.renderQueue = (int)RenderQueue.Transparent;
            }
            else if (transparent)
            {
                m.SetFloat("_SrcBlend", (float)BlendMode.SrcAlpha);
                m.SetFloat("_DstBlend", (float)BlendMode.OneMinusSrcAlpha);
                m.SetFloat("_ZWrite", 0);
                m.renderQueue = (int)RenderQueue.Transparent;
            }
            else
            {
                m.SetFloat("_SrcBlend", (float)BlendMode.One);
                m.SetFloat("_DstBlend", (float)BlendMode.Zero);
                m.SetFloat("_ZWrite", 1);
                m.SetOverrideTag("RenderType", "Opaque");
                m.renderQueue = (int)RenderQueue.Geometry;
            }
            return m;
        }

        /// <summary>Gradiente radial branco (64x64) dos sprites de efeito.</summary>
        public static Texture2D GlowTexture()
        {
            if (glow) return glow;
            const int n = 64;
            glow = new Texture2D(n, n, TextureFormat.RGBA32, false) { name = "l2web glow", wrapMode = TextureWrapMode.Clamp, hideFlags = HideFlags.DontUnloadUnusedAsset };
            var px = new Color32[n * n];
            for (var y = 0; y < n; y++)
                for (var x = 0; x < n; x++)
                {
                    var d = Mathf.Sqrt((x + 0.5f - 32) * (x + 0.5f - 32) + (y + 0.5f - 32) * (y + 0.5f - 32)) / 32f;
                    // canvas: 0 -> 1, 0.3 -> 0.7, 1 -> 0
                    var a = d >= 1 ? 0 : d < 0.3f ? Mathf.Lerp(1, 0.7f, d / 0.3f) : Mathf.Lerp(0.7f, 0, (d - 0.3f) / 0.7f);
                    px[y * n + x] = new Color32(255, 255, 255, (byte)Mathf.RoundToInt(a * 255));
                }
            glow.SetPixels32(px);
            glow.Apply(false, true);
            return glow;
        }

        /// <summary>Quad 1x1 centrado (geometria do THREE.Sprite).</summary>
        public static Mesh Quad()
        {
            if (quad) return quad;
            quad = new Mesh { name = "l2web quad", hideFlags = HideFlags.DontUnloadUnusedAsset };
            quad.vertices = new[] { new Vector3(-0.5f, -0.5f, 0), new Vector3(0.5f, -0.5f, 0), new Vector3(0.5f, 0.5f, 0), new Vector3(-0.5f, 0.5f, 0) };
            quad.uv = new[] { new Vector2(0, 0), new Vector2(1, 0), new Vector2(1, 1), new Vector2(0, 1) };
            quad.colors = new[] { Color.white, Color.white, Color.white, Color.white };
            quad.triangles = new[] { 0, 2, 1, 0, 3, 2 };
            quad.bounds = new Bounds(Vector3.zero, Vector3.one * 2);
            return quad;
        }

        /// <summary>GameObject com malha e material (sem sombras).</summary>
        public static GameObject MeshObject(string name, Mesh mesh, Material mat, Transform parent)
        {
            var go = new GameObject(name);
            if (parent) go.transform.SetParent(parent, false);
            go.AddComponent<MeshFilter>().sharedMesh = mesh;
            var r = go.AddComponent<MeshRenderer>();
            r.sharedMaterial = mat;
            r.shadowCastingMode = ShadowCastingMode.Off;
            r.receiveShadows = false;
            return go;
        }

        public static void Destroy(Object o)
        {
            if (!o) return;
            if (Application.isPlaying) Object.Destroy(o);
            else Object.DestroyImmediate(o);
        }
    }
}
