// Atores (pawns, NPCs, monstros): a iluminacao fixa do D3D da malha esqueletica, USkeletalMeshInstance::Render
// (thunk 0x10308463 -> 0x106dcfd0, engine/00030.c) [O]: EnableLighting(UseDynamic=1, UseStatic=0, Modulate2X=1, Lightmap=0,
// LightingOnly = RendMap==7) (0x106dda1a); SetLight(i, luz) para cada luz da lista com +0x34 em {0,2} ate MaxLights
// (0x106dda40..); ambiente: zona com sol e gerenciador -> GetActorAmbientColor(t) >> 1 (0x106ddb0b), senao
// FDynamicActor.AmbientColor inteiro (0x106ddb76). Estado D3D do baked_light_re.md 3 (MODULATE2X, luz pontual x 0,5,
// queda 1 - 3r^2 + 2r^3, sol x 0,875). Por vertice, em gama:
//   L = min(2, A + sum Lc . max(N.L, 0) . f(r) + 1,75 . S . max(N.Lsol, 0)),  f(r) = 1 - 3r^2 + 2r^3 (r = d / Range)
//   pixel = saturate(tex . L)        (MODULATE2X: diffuse D3D = L/2 saturado em 1, x2 na textura)
// A = ambiente D3D x 2 (_L2ActorAmbient), S = plano HSVActorLight (_L2ActorSun ja x 1,75), Lc = cor da luz do mapa
// (Light.color = FGetHSV x Bri/255 x fator; o Unity entrega em linear, LinearToSRGB devolve o valor em gama). So difuso:
// sem especular nem reflexo de ambiente. No maximo 3 luzes (D3DDrv ignora SetLight >= 3 [O]; a ordem e a do URP [I]; o
// filtro +0x34 nao foi decodificado [I] - as luzes estaticas do Lobby passam, o original ilumina os pawns com elas).
// Neblina depois (spec 08 secao 7).
Shader "L2Web/Actor"
{
    Properties
    {
        _BaseMap ("Textura", 2D) = "white" {}
        _BaseColor ("Fator (glTF baseColorFactor)", Color) = (1,1,1,1)
        _Cutoff ("Corte alfa", Range(0,1)) = 0.5
        _Cull ("Cull", Float) = 2
        _SrcBlend ("SrcBlend", Float) = 1
        _DstBlend ("DstBlend", Float) = 0
        _ZWrite ("ZWrite", Float) = 1
    }
    SubShader
    {
        Tags { "RenderType" = "Opaque" "RenderPipeline" = "UniversalPipeline" "Queue" = "Geometry" }

        HLSLINCLUDE
        #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"
        #include "Packages/com.unity.render-pipelines.core/ShaderLibrary/Color.hlsl"
        TEXTURE2D(_BaseMap);
        SAMPLER(sampler_BaseMap);
        CBUFFER_START(UnityPerMaterial)
            float4 _BaseMap_ST;
            half4 _BaseColor;
            half _Cutoff;
        CBUFFER_END
        // globais do L2EnvScene (valores em gama, "unidades de luz")
        float4 _L2ActorAmbient;
        float4 _L2ActorSun;
        ENDHLSL

        Pass
        {
            Name "ForwardLit"
            Tags { "LightMode" = "UniversalForward" }
            Cull [_Cull]
            Blend [_SrcBlend] [_DstBlend]
            ZWrite [_ZWrite]
            HLSLPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma multi_compile_fog
            #pragma multi_compile_local _ _ALPHATEST_ON
            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Lighting.hlsl"

            struct Attributes
            {
                float4 positionOS : POSITION;
                float3 normalOS : NORMAL;
                float2 uv : TEXCOORD0;
            };

            struct Varyings
            {
                float4 positionCS : SV_POSITION;
                float2 uv : TEXCOORD0;
                float3 light : TEXCOORD1;
                float fog : TEXCOORD2;
            };

            // queda do UE2 ate o raio (D3DDrv 0x10020e50): 2 (1 - 3r^2 + 2r^3) com a cor x 0,5 -> f(r)
            float Falloff(float r)
            {
                return r < 1 ? 1 - 3 * r * r + 2 * r * r * r : 0;
            }

            Varyings vert(Attributes v)
            {
                Varyings o;
                VertexPositionInputs p = GetVertexPositionInputs(v.positionOS.xyz);
                o.positionCS = p.positionCS;
                o.uv = TRANSFORM_TEX(v.uv, _BaseMap);
                float3 n = normalize(TransformObjectToWorldNormal(v.normalOS));
                float3 L = _L2ActorAmbient.rgb;
                L += _L2ActorSun.rgb * saturate(dot(n, _MainLightPosition.xyz));
            #if !USE_CLUSTER_LIGHT_LOOP
                uint count = min(GetAdditionalLightsCount(), 3u);
                for (uint i = 0u; i < count; i++)
                {
                    int idx = GetPerObjectLightIndex(i);
                    float4 lp = _AdditionalLightsPosition[idx];
                    float4 att = _AdditionalLightsAttenuation[idx];
                    float3 d = lp.xyz - p.positionWS;
                    float dist = max(length(d), 1e-4);
                    // att.x = 1 / Range^2 (pontual); direcional (lp.w = 0) nao existe entre as luzes dos mapas
                    float range = rsqrt(max(att.x, 1e-8));
                    float f = lp.w > 0.5 ? Falloff(dist / range) : 0;
                    float3 lc = LinearToSRGB(_AdditionalLightsColor[idx].rgb);
                    L += lc * saturate(dot(n, d / dist)) * f;
                }
            #endif
                o.light = min(L, 2.0);
                o.fog = ComputeFogFactor(p.positionCS.z);
                return o;
            }

            half4 frag(Varyings i) : SV_Target
            {
                half4 t = SAMPLE_TEXTURE2D(_BaseMap, sampler_BaseMap, i.uv) * _BaseColor;
            #if _ALPHATEST_ON
                clip(t.a - _Cutoff);
            #endif
                float3 cg = saturate(LinearToSRGB(t.rgb) * i.light);
                float3 c = SRGBToLinear(cg);
                c = MixFog(c, i.fog);
                return half4(c, t.a);
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
            #pragma multi_compile_local _ _ALPHATEST_ON
            struct A { float4 positionOS : POSITION; float2 uv : TEXCOORD0; };
            struct V { float4 positionCS : SV_POSITION; float2 uv : TEXCOORD0; };
            V vert(A v) { V o; o.positionCS = TransformObjectToHClip(v.positionOS.xyz); o.uv = TRANSFORM_TEX(v.uv, _BaseMap); return o; }
            half frag(V i) : SV_Target
            {
            #if _ALPHATEST_ON
                clip((SAMPLE_TEXTURE2D(_BaseMap, sampler_BaseMap, i.uv) * _BaseColor).a - _Cutoff);
            #endif
                return 0;
            }
            ENDHLSL
        }

        Pass
        {
            Name "DepthNormals"
            Tags { "LightMode" = "DepthNormals" }
            ZWrite On
            Cull [_Cull]
            HLSLPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            struct A { float4 positionOS : POSITION; float3 normalOS : NORMAL; };
            struct V { float4 positionCS : SV_POSITION; float3 normalWS : TEXCOORD0; };
            V vert(A v) { V o; o.positionCS = TransformObjectToHClip(v.positionOS.xyz); o.normalWS = TransformObjectToWorldNormal(v.normalOS); return o; }
            half4 frag(V i) : SV_Target { return half4(normalize(i.normalWS), 0); }
            ENDHLSL
        }
    }
}
