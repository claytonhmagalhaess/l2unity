// Materiais dos atores: o glTFast cria materiais PBR (Shader Graphs/glTF-pbrMetallicRoughness, com especular e reflexo de
// ambiente que o cliente nao tem); aqui cada um vira um L2Web/Actor (so difuso, iluminacao fixa do D3D, ver o shader),
// um por material de origem (as instancias do mesmo .glb partilham). -l2pbr mantem os materiais do glTFast (diagnostico).
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

namespace L2Web.Render
{
    public static class ActorMaterial
    {
        static readonly Dictionary<Material, Material> cache = new();
        static Shader shader;
        static readonly int BaseColorTexture = Shader.PropertyToID("baseColorTexture");
        static readonly int BaseColorTextureST = Shader.PropertyToID("baseColorTexture_ST");
        static readonly int BaseColorFactor = Shader.PropertyToID("baseColorFactor");
        static readonly int AlphaCutoff = Shader.PropertyToID("alphaCutoff");
        static readonly int BaseMap = Shader.PropertyToID("_BaseMap");
        static readonly int BaseMapST = Shader.PropertyToID("_BaseMap_ST");
        static readonly int BaseColor = Shader.PropertyToID("_BaseColor");
        static readonly int Cutoff = Shader.PropertyToID("_Cutoff");
        static readonly int Cull = Shader.PropertyToID("_Cull");
        static readonly int SrcBlend = Shader.PropertyToID("_SrcBlend");
        static readonly int DstBlend = Shader.PropertyToID("_DstBlend");
        static readonly int ZWrite = Shader.PropertyToID("_ZWrite");
        public const string AlphaTestKeyword = "_ALPHATEST_ON";

        /// <summary>false com -l2pbr: fica o material do glTFast.</summary>
        public static bool Enabled = Array.IndexOf(Environment.GetCommandLineArgs(), "-l2pbr") < 0;

        public static Shader Shader => shader ??= Shader.Find("L2Web/Actor");

        /// <summary>O material L2Web/Actor equivalente (cache por material de origem); a origem se desligado ou sem shader.</summary>
        public static Material For(Material src)
        {
            if (!Enabled || !src || !Shader) return src;
            if (src.shader == Shader) return src;
            if (cache.TryGetValue(src, out var m) && m) return m;
            m = new Material(Shader) { name = src.name + " (L2)" };
            m.SetTexture(BaseMap, src.HasProperty(BaseColorTexture) ? src.GetTexture(BaseColorTexture) : null);
            m.SetVector(BaseMapST, src.HasProperty(BaseColorTextureST) ? src.GetVector(BaseColorTextureST) : new Vector4(1, 1, 0, 0));
            m.SetColor(BaseColor, src.HasProperty(BaseColorFactor) ? src.GetColor(BaseColorFactor) : Color.white);
            // glTF MASK: _ALPHATEST_ON + alphaCutoff; doubleSided: _CullMode/_Cull 0
            var alphaTest = src.IsKeywordEnabled(AlphaTestKeyword);
            m.SetFloat(Cutoff, src.HasProperty(AlphaCutoff) ? src.GetFloat(AlphaCutoff) : 0.5f);
            if (alphaTest) m.EnableKeyword(AlphaTestKeyword);
            m.SetFloat(Cull, src.HasProperty("_CullMode") ? src.GetFloat("_CullMode") : src.HasProperty("_Cull") ? src.GetFloat("_Cull") : (float)CullMode.Back);
            // glTF BLEND: alfa normal sem escrita de profundidade, na fila de transparentes
            var transparent = src.IsKeywordEnabled("_SURFACE_TYPE_TRANSPARENT") || src.renderQueue >= (int)RenderQueue.Transparent;
            m.SetFloat(SrcBlend, (float)(transparent ? BlendMode.SrcAlpha : BlendMode.One));
            m.SetFloat(DstBlend, (float)(transparent ? BlendMode.OneMinusSrcAlpha : BlendMode.Zero));
            m.SetFloat(ZWrite, transparent ? 0 : 1);
            m.renderQueue = transparent ? (int)RenderQueue.Transparent : alphaTest ? (int)RenderQueue.AlphaTest : (int)RenderQueue.Geometry;
            cache[src] = m;
            return m;
        }

        public static Material[] Convert(Material[] mats)
        {
            if (mats == null) return null;
            var changed = false;
            var r = new Material[mats.Length];
            for (var i = 0; i < mats.Length; i++)
            {
                r[i] = For(mats[i]);
                changed |= r[i] != mats[i];
            }
            return changed ? r : mats;
        }
    }
}
