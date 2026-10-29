// Terreno do Unreal (TerrainInfo) como no render/terrain_ue.ts: ate 8 camadas misturadas em sequencia como no UE2
// (cada uma sobre a anterior pelo seu alphamap; a camada base tem peso 1). A textura de cada camada repete pelas
// coordenadas do mundo L2 (uv1 = x, y do Unreal) vezes 1/(UScale * largura); os alphamaps usam uv0 (0..1 no tile).
// Iluminacao Lambert (luz principal + ambiente SH) e neblina, como o MeshLambertMaterial do three.
Shader "L2Web/TerrainUE"
{
    Properties
    {
        _Color ("Color", Color) = (1,1,1,1)
        _Baked ("Luz embutida (cor de vertice, MODULATE2X)", Float) = 0
        _L0 ("Layer 0", 2D) = "white" {}
        _L1 ("Layer 1", 2D) = "white" {}
        _L2 ("Layer 2", 2D) = "white" {}
        _L3 ("Layer 3", 2D) = "white" {}
        _L4 ("Layer 4", 2D) = "white" {}
        _L5 ("Layer 5", 2D) = "white" {}
        _L6 ("Layer 6", 2D) = "white" {}
        _L7 ("Layer 7", 2D) = "white" {}
        _A0 ("Alpha 0", 2D) = "white" {}
        _A1 ("Alpha 1", 2D) = "black" {}
        _A2 ("Alpha 2", 2D) = "black" {}
        _A3 ("Alpha 3", 2D) = "black" {}
        _A4 ("Alpha 4", 2D) = "black" {}
        _A5 ("Alpha 5", 2D) = "black" {}
        _A6 ("Alpha 6", 2D) = "black" {}
        _A7 ("Alpha 7", 2D) = "black" {}
        _P01 ("Periods 0,1", Vector) = (0,0,0,0)
        _P23 ("Periods 2,3", Vector) = (0,0,0,0)
        _P45 ("Periods 4,5", Vector) = (0,0,0,0)
        _P67 ("Periods 6,7", Vector) = (0,0,0,0)
        _AC0 ("Alpha channel 0-3 (1 = A, 0 = R)", Vector) = (0,0,0,0)
        _AC1 ("Alpha channel 4-7 (1 = A, 0 = R)", Vector) = (0,0,0,0)
        _Count ("Layer count", Float) = 1
    }
    SubShader
    {
        Tags { "RenderType" = "Opaque" "RenderPipeline" = "UniversalPipeline" "Queue" = "Geometry" }

        HLSLINCLUDE
        #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"
        CBUFFER_START(UnityPerMaterial)
            half4 _Color;
            float _Baked;
            float4 _P01, _P23, _P45, _P67;
            float4 _AC0, _AC1;
            float _Count;
        CBUFFER_END
        ENDHLSL

        Pass
        {
            Name "ForwardLit"
            Tags { "LightMode" = "UniversalForward" }
            HLSLPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma multi_compile_fog
            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Lighting.hlsl"

            TEXTURE2D(_L0); SAMPLER(sampler_L0);
            TEXTURE2D(_L1); TEXTURE2D(_L2); TEXTURE2D(_L3); TEXTURE2D(_L4); TEXTURE2D(_L5); TEXTURE2D(_L6); TEXTURE2D(_L7);
            TEXTURE2D(_A1); SAMPLER(sampler_A1); // _A0 (camada base) nao e amostrado: peso 1
            TEXTURE2D(_A2); TEXTURE2D(_A3); TEXTURE2D(_A4); TEXTURE2D(_A5); TEXTURE2D(_A6); TEXTURE2D(_A7);

            struct Attributes
            {
                float4 positionOS : POSITION;
                float3 normalOS : NORMAL;
                float2 uv : TEXCOORD0;
                float2 ue : TEXCOORD1;
                float4 color : COLOR;
            };

            struct Varyings
            {
                float4 positionCS : SV_POSITION;
                float2 uv : TEXCOORD0;
                float2 ue : TEXCOORD1;
                float3 normalWS : TEXCOORD2;
                float fog : TEXCOORD3;
                float4 color : TEXCOORD4;
            };

            Varyings vert(Attributes v)
            {
                Varyings o;
                VertexPositionInputs p = GetVertexPositionInputs(v.positionOS.xyz);
                o.positionCS = p.positionCS;
                o.normalWS = TransformObjectToWorldNormal(v.normalOS);
                o.uv = v.uv;
                o.ue = v.ue;
                o.color = v.color;
                o.fog = ComputeFogFactor(p.positionCS.z);
                return o;
            }

            float AlphaOf(float4 s, float useA) { return useA > 0.5 ? s.a : s.r; }

            #define L2_LAYER(i, tex, per, a) if (_Count > i) terr = lerp(terr, SAMPLE_TEXTURE2D(tex, sampler_L0, ue * per).rgb, a);

            half4 frag(Varyings i) : SV_Target
            {
                float2 ue = i.ue;
                float2 uv = i.uv;
                float3 terr = SAMPLE_TEXTURE2D(_L0, sampler_L0, ue * _P01.xy).rgb; // camada base: peso 1 (como no UE2)
                L2_LAYER(1, _L1, _P01.zw, AlphaOf(SAMPLE_TEXTURE2D(_A1, sampler_A1, uv), _AC0.y))
                L2_LAYER(2, _L2, _P23.xy, AlphaOf(SAMPLE_TEXTURE2D(_A2, sampler_A1, uv), _AC0.z))
                L2_LAYER(3, _L3, _P23.zw, AlphaOf(SAMPLE_TEXTURE2D(_A3, sampler_A1, uv), _AC0.w))
                L2_LAYER(4, _L4, _P45.xy, AlphaOf(SAMPLE_TEXTURE2D(_A4, sampler_A1, uv), _AC1.x))
                L2_LAYER(5, _L5, _P45.zw, AlphaOf(SAMPLE_TEXTURE2D(_A5, sampler_A1, uv), _AC1.y))
                L2_LAYER(6, _L6, _P67.xy, AlphaOf(SAMPLE_TEXTURE2D(_A6, sampler_A1, uv), _AC1.z))
                L2_LAYER(7, _L7, _P67.zw, AlphaOf(SAMPLE_TEXTURE2D(_A7, sampler_A1, uv), _AC1.w))
                float3 c;
                if (_Baked > 0.5)
                {
                    // ATerrainInfo::Render: MODULATE2X da camada com a cor de vertice ja assada (ambiente incluso), em gama;
                    // a cor de vertice chega crua (sem conversao de espaco de cor)
                    float3 vc = i.color.rgb;
                    float3 tG = pow(max(terr, 0), 1.0 / 2.2);
                    c = pow(saturate(2 * tG * vc), 2.2) * _Color.rgb;
                }
                else
                {
                    float3 n = normalize(i.normalWS);
                    Light l = GetMainLight();
                    float3 light = l.color * saturate(dot(n, l.direction)) + SampleSH(n);
                    c = terr * _Color.rgb * light;
                }
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
            HLSLPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            float4 vert(float4 positionOS : POSITION) : SV_POSITION { return TransformObjectToHClip(positionOS.xyz); }
            half frag() : SV_Target { return 0; }
            ENDHLSL
        }

        Pass
        {
            Name "DepthNormals"
            Tags { "LightMode" = "DepthNormals" }
            ZWrite On
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
