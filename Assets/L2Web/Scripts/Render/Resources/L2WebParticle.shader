// Material das particulas do UE2/L2 (spec 09 §4.5.1): cor de vertice (P.Color, bytes sRGB) modulando a textura, blending
// por DrawStyle (Src/Dst por propriedade), AlphaTest/AlphaRef, ZTest/ZWrite, dois lados e a cor de neblina forcada por
// estilo (preto nos aditivos, cinza 127 no Modulated). _Blend2 = BlendBetweenSubdivisions: lerp(tex(UV0), tex(UV1), alfa
// do vertice) e o alfa final vem da textura (o alfa da particula nao chega ao blending) [O].
// [I] o D3D do cliente mistura em espaco de gama; aqui o projeto e linear: a cor de vertice e convertida para linear.
Shader "L2Web/Particle"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _Color ("Color", Color) = (1,1,1,1)
        _Blend2 ("Blend between subdivisions", Float) = 0
        _AlphaTest ("AlphaTest", Float) = 1
        _AlphaRef ("AlphaRef", Float) = 0
        _FogMode ("Fog: 0 none, 1 normal, 2 black, 3 gray", Float) = 1
        [Enum(UnityEngine.Rendering.BlendMode)] _SrcBlend ("Src", Float) = 1
        [Enum(UnityEngine.Rendering.BlendMode)] _DstBlend ("Dst", Float) = 1
        [Enum(Off, 0, On, 1)] _ZWrite ("ZWrite", Float) = 0
        [Enum(UnityEngine.Rendering.CullMode)] _Cull ("Cull", Float) = 0
        [Enum(UnityEngine.Rendering.CompareFunction)] _ZTest ("ZTest", Float) = 4
    }
    SubShader
    {
        Tags { "RenderType" = "Transparent" "RenderPipeline" = "UniversalPipeline" "Queue" = "Transparent" "IgnoreProjector" = "True" }
        Pass
        {
            Name "Unlit"
            Tags { "LightMode" = "UniversalForward" }
            Blend [_SrcBlend] [_DstBlend]
            ZWrite [_ZWrite]
            Cull [_Cull]
            ZTest [_ZTest]
            HLSLPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma multi_compile_fog
            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"

            TEXTURE2D(_MainTex); SAMPLER(sampler_MainTex);
            CBUFFER_START(UnityPerMaterial)
                float4 _MainTex_ST;
                half4 _Color;
                float _Blend2;
                float _AlphaTest;
                float _AlphaRef;
                float _FogMode;
                float _SrcBlend, _DstBlend, _ZWrite, _Cull, _ZTest;
            CBUFFER_END

            struct Attributes
            {
                float4 positionOS : POSITION;
                float2 uv0 : TEXCOORD0;
                float2 uv1 : TEXCOORD1;
                float4 color : COLOR;
            };

            struct Varyings
            {
                float4 positionCS : SV_POSITION;
                float2 uv0 : TEXCOORD0;
                float2 uv1 : TEXCOORD1;
                float4 color : TEXCOORD2;
                float fog : TEXCOORD3;
            };

            Varyings vert(Attributes v)
            {
                Varyings o;
                o.positionCS = TransformObjectToHClip(v.positionOS.xyz);
                o.uv0 = v.uv0;
                o.uv1 = v.uv1;
                o.color = v.color;
                o.fog = _FogMode > 0.5 ? ComputeFogFactor(o.positionCS.z) : 0;
                return o;
            }

            half4 frag(Varyings i) : SV_Target
            {
                half4 t0 = SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, i.uv0);
                half4 t;
                half4 vc = i.color;
                if (_Blend2 > 0.5)
                {
                    half4 t1 = SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, i.uv1);
                    t = lerp(t0, t1, vc.a);
                    vc.a = 1;
                }
                else t = t0;
                // cor de vertice em bytes sRGB -> linear (o projeto e linear)
                half3 lin = pow(max(vc.rgb, 0.0), 2.2);
                half4 c = half4(t.rgb * lin * _Color.rgb, t.a * vc.a * _Color.a);
                if (_AlphaTest > 0.5 && c.a * 255 <= _AlphaRef) discard;
                if (_FogMode > 2.5) c.rgb = MixFogColor(c.rgb, half3(0.212, 0.212, 0.212), i.fog); // 127/255 em linear
                else if (_FogMode > 1.5) c.rgb = MixFogColor(c.rgb, half3(0, 0, 0), i.fog);
                else if (_FogMode > 0.5) c.rgb = MixFog(c.rgb, i.fog);
                return c;
            }
            ENDHLSL
        }
    }
}
