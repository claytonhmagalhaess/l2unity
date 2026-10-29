// Material simples sem luz para efeitos (Sprite aditivo do three: faisca, brilho, projetil), marcador de destino,
// grade e flecha. Blend/ZWrite por propriedade; _Billboard = 1 desenha o quad virado para a camera (como THREE.Sprite),
// com o tamanho dado pela escala do objeto.
Shader "L2Web/Fx"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _Color ("Color", Color) = (1,1,1,1)
        _Billboard ("Billboard", Float) = 0
        _Fog ("Fog", Float) = 0
        _VColor ("Vertex color", Float) = 1
        _Gamma2x ("Modulate2X em gama", Float) = 0
        _GammaOver ("Alfa em gama sobre destino conhecido (rgb gama, w = 1 liga)", Vector) = (0,0,0,0)
        [Enum(UnityEngine.Rendering.BlendMode)] _SrcBlend ("Src", Float) = 5
        [Enum(UnityEngine.Rendering.BlendMode)] _DstBlend ("Dst", Float) = 10
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
            #include "Packages/com.unity.render-pipelines.core/ShaderLibrary/Color.hlsl"

            TEXTURE2D(_MainTex); SAMPLER(sampler_MainTex);
            CBUFFER_START(UnityPerMaterial)
                float4 _MainTex_ST;
                half4 _Color;
                float _Billboard;
                float _Fog;
                float _VColor;
                float _Gamma2x;
                float4 _GammaOver;
                float _SrcBlend, _DstBlend, _ZWrite, _Cull, _ZTest;
            CBUFFER_END

            struct Attributes
            {
                float4 positionOS : POSITION;
                float2 uv : TEXCOORD0;
                float4 color : COLOR;
            };

            struct Varyings
            {
                float4 positionCS : SV_POSITION;
                float2 uv : TEXCOORD0;
                float4 color : TEXCOORD1;
                float fog : TEXCOORD2;
            };

            Varyings vert(Attributes v)
            {
                Varyings o;
                if (_Billboard > 0.5)
                {
                    float3 centerVS = TransformWorldToView(TransformObjectToWorld(float3(0, 0, 0)));
                    float sx = length(float3(UNITY_MATRIX_M._m00, UNITY_MATRIX_M._m10, UNITY_MATRIX_M._m20));
                    float sy = length(float3(UNITY_MATRIX_M._m01, UNITY_MATRIX_M._m11, UNITY_MATRIX_M._m21));
                    float3 posVS = centerVS + float3(v.positionOS.x * sx, v.positionOS.y * sy, 0);
                    o.positionCS = TransformWViewToHClip(posVS);
                }
                else
                {
                    o.positionCS = TransformObjectToHClip(v.positionOS.xyz);
                }
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                o.color = v.color;
                o.fog = _Fog > 0.5 ? ComputeFogFactor(o.positionCS.z) : 0;
                return o;
            }

            half4 frag(Varyings i) : SV_Target
            {
                half4 c = SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, i.uv) * _Color * lerp(1, i.color, _VColor);
                // _Fog 3: multiplicacao 2x (projetor PB_Modulate): a neblina leva ao cinza neutro (127)
                if (_Fog > 2.5) c.rgb = MixFogColor(c.rgb, half3(0.498, 0.498, 0.498), i.fog);
                // _Fog 2: blend aditivo (Translucent/Brighten do UE2), a neblina apaga em vez de pintar a cor dela
                else if (_Fog > 1.5) c.rgb = MixFogColor(c.rgb, half3(0, 0, 0), i.fog);
                else if (_Fog > 0.5) c.rgb = MixFog(c.rgb, i.fog);
                // Blend DstColor SrcColor = 2 src dst. O UE2 faz isso em gama; com a textura lida linear (127 = 0,498) e o
                // projeto em espaco linear, src = (2 t)^2,2 / 2 da o mesmo resultado depois da conversao
                if (_Gamma2x > 0.5) c.rgb = pow(saturate(2 * c.rgb), 2.2) * 0.5;
                // SrcAlpha/InvSrcAlpha: o D3D mistura os valores em gama, R = a C + (1 - a) D. Em linear uma camada clara e fina
                // sobre um fundo escuro sai muito mais forte (nuvens do ceu). Com o destino D conhecido (o fundo opaco do ceu),
                // o alfa que da o mesmo R em linear e a' = (lin(R) - lin(D)) / (lin(C) - lin(D)), pela luminancia
                if (_GammaOver.w > 0.5)
                {
                    float3 d = SRGBToLinear(_GammaOver.rgb);
                    float3 r = SRGBToLinear(c.a * LinearToSRGB(c.rgb) + (1 - c.a) * _GammaOver.rgb);
                    float3 w = float3(0.2126, 0.7152, 0.0722);
                    float den = dot(c.rgb - d, w);
                    if (abs(den) > 1e-4) c.a = saturate(dot(r - d, w) / den);
                }
                return c;
            }
            ENDHLSL
        }
    }
}
