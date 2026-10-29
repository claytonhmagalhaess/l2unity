// Malha estatica com a luz embutida do UE2 (scratchpad/baked_light_re.md 3): o ColorStream do UStaticMeshInstance vai ao
// D3D como emissivo (COLOR1), o ambiente da zona entra pela metade (D3DRS_AMBIENT = AmbientVector/2) e a textura e aplicada
// com MODULATE2X: pixel = sat(2 tex sat(vc + amb)). Tudo em gama (D3D fixed function nao tem sRGB): a albedo linear e
// convertida para gama, iluminada e devolvida. bUnlit (_Unlit) = so a textura. Neblina depois, como no original.
Shader "L2Web/Baked"
{
    Properties
    {
        _MainTex ("Textura", 2D) = "white" {}
        // Vector, nao Color: o Material.SetColor converte sRGB -> linear no projeto Linear; o ambiente e um valor em gama cru
        _Ambient ("Ambiente D3D (ja /2)", Vector) = (0.137, 0.137, 0.137, 1)
        _LightMap ("Lightmap (BSP)", 2D) = "white" {}
        _UseLightMap ("Usa lightmap", Float) = 0
        _Unlit ("Unlit", Float) = 0
        _Cutoff ("Corte alfa", Float) = 0
        [Enum(UnityEngine.Rendering.CullMode)] _Cull ("Cull", Float) = 0
    }
    SubShader
    {
        Tags { "RenderType" = "Opaque" "RenderPipeline" = "UniversalPipeline" "Queue" = "Geometry" }

        HLSLINCLUDE
        #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"
        TEXTURE2D(_MainTex); SAMPLER(sampler_MainTex);
        TEXTURE2D(_LightMap); SAMPLER(sampler_LightMap);
        CBUFFER_START(UnityPerMaterial)
            float4 _MainTex_ST;
            half4 _Ambient;
            float _UseLightMap;
            float _Unlit;
            float _Cutoff;
            float _Cull;
        CBUFFER_END
        ENDHLSL

        Pass
        {
            Name "ForwardLit"
            Tags { "LightMode" = "UniversalForward" }
            Cull [_Cull]
            HLSLPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma multi_compile_fog

            struct Attributes
            {
                float4 positionOS : POSITION;
                float2 uv : TEXCOORD0;
                float2 uv2 : TEXCOORD1;
                float4 color : COLOR;
            };

            struct Varyings
            {
                float4 positionCS : SV_POSITION;
                float2 uv : TEXCOORD0;
                float4 color : TEXCOORD1;
                float fog : TEXCOORD2;
                float2 uv2 : TEXCOORD3;
            };

            Varyings vert(Attributes v)
            {
                Varyings o;
                o.positionCS = TransformObjectToHClip(v.positionOS.xyz);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                o.uv2 = v.uv2;
                o.color = v.color;
                o.fog = ComputeFogFactor(o.positionCS.z);
                return o;
            }

            half4 frag(Varyings i) : SV_Target
            {
                half4 t = SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, i.uv);
                if (_Cutoff > 0 && t.a < _Cutoff) discard;
                // a cor de vertice (Color32 da malha) chega crua: ja e o valor em gama que o D3D somava; _Ambient e [Gamma]
                half3 vc = i.color.rgb;
                half3 texG = pow(max(t.rgb, 0), 1.0 / 2.2);
                // BSP: a etapa do lightmap (MODULATE2X) no lugar da luz por vertice; o atlas e lido linear (ja e um valor
                // de luz em gama, como o ColorStream)
                half3 lit = _UseLightMap > 0.5 ? SAMPLE_TEXTURE2D(_LightMap, sampler_LightMap, i.uv2).rgb : saturate(vc + _Ambient.rgb);
                half3 cG = _Unlit > 0.5 ? texG : saturate(2 * texG * lit);
                half3 c = pow(cG, 2.2);
                c = MixFog(c, i.fog);
                return half4(c, 1);
            }
            ENDHLSL
        }

        Pass
        {
            Name "DepthOnly"
            Tags { "LightMode" = "DepthOnly" }
            ZWrite On
            ColorMask R
            Cull [_Cull]
            HLSLPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            struct Attributes { float4 positionOS : POSITION; float2 uv : TEXCOORD0; };
            struct Varyings { float4 positionCS : SV_POSITION; float2 uv : TEXCOORD0; };
            Varyings vert(Attributes v) { Varyings o; o.positionCS = TransformObjectToHClip(v.positionOS.xyz); o.uv = TRANSFORM_TEX(v.uv, _MainTex); return o; }
            half4 frag(Varyings i) : SV_Target { if (_Cutoff > 0 && SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, i.uv).a < _Cutoff) discard; return 0; }
            ENDHLSL
        }
    }
}
