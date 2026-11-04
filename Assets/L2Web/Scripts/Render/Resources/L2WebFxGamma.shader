// Passes de copia do FxGammaPass (spec 09 §4.5.1): o D3D do cliente mistura as particulas com os valores do framebuffer em
// gama (sem sRGB); o projeto e linear. 0 = cor da camera (linear) -> alvo UNORM com os bytes em gama; 1 = composicao de
// volta: onde os efeitos nao mexeram devolve a cor original (preserva HDR), senao a cor em gama decodificada (+ excesso HDR).
Shader "Hidden/L2Web/FxGamma"
{
    SubShader
    {
        Tags { "RenderPipeline" = "UniversalPipeline" }
        ZWrite Off ZTest Always Cull Off Blend Off

        HLSLINCLUDE
        #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"
        #include "Packages/com.unity.render-pipelines.core/ShaderLibrary/Color.hlsl"
        #include "Packages/com.unity.render-pipelines.core/Runtime/Utilities/Blit.hlsl"

        TEXTURE2D_X(_L2FxOrig);

        // linear -> bytes em gama como o hardware grava num alvo UNORM (arredondamento para o mais proximo)
        float3 GammaBytes(float3 lin) { return round(LinearToSRGB(saturate(lin)) * 255.0) / 255.0; }
        ENDHLSL

        Pass
        {
            Name "LinearToGamma"
            HLSLPROGRAM
            #pragma vertex Vert
            #pragma fragment Frag
            float4 Frag(Varyings i) : SV_Target
            {
                float4 c = SAMPLE_TEXTURE2D_X(_BlitTexture, sampler_PointClamp, i.texcoord);
                return float4(LinearToSRGB(saturate(c.rgb)), c.a);
            }
            ENDHLSL
        }

        Pass
        {
            Name "GammaToLinear"
            HLSLPROGRAM
            #pragma vertex Vert
            #pragma fragment Frag
            float4 Frag(Varyings i) : SV_Target
            {
                float4 g = SAMPLE_TEXTURE2D_X(_BlitTexture, sampler_PointClamp, i.texcoord);
                float4 o = SAMPLE_TEXTURE2D_X(_L2FxOrig, sampler_PointClamp, i.texcoord);
                if (all(abs(g.rgb - GammaBytes(o.rgb)) < 0.5 / 255.0)) return o;
                return float4(SRGBToLinear(g.rgb) + max(o.rgb - 1.0, 0.0), o.a);
            }
            ENDHLSL
        }
    }
}
