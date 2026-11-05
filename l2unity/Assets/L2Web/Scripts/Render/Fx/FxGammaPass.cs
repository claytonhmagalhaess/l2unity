// Mistura das particulas em espaco de gama (spec 09 §4.5.1). O cliente desenha os efeitos no D3D8/9 sem sRGB: textura,
// cor de vertice (TFactor) e o framebuffer sao bytes em gama e o blending (One/One, DstColor/SrcColor, One/InvSrcColor...)
// opera nesses bytes. Num projeto linear o mesmo blending sai outro: um aditivo sobre a grama fica bem mais fraco e o
// Modulated 2x, cujo neutro e o cinza 127, escurece (127 vira 0,21 em linear). Este passe copia a cor da camera para um
// alvo UNORM com os bytes em gama, desenha nele os materiais L2Web/Particle (LightMode "L2WebFxGamma", que o URP nao
// desenha sozinho) com o depth da cena e devolve a imagem: onde nada mudou fica a cor original (HDR preservado).
// Injetado por RenderPipelineManager.beginCameraRendering, sem mexer no asset do renderer.
using UnityEngine;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering;
using UnityEngine.Rendering.RenderGraphModule;
using UnityEngine.Rendering.RenderGraphModule.Util;
using UnityEngine.Rendering.Universal;

namespace L2Web.Render.Fx
{
    public sealed class FxGammaPass : ScriptableRenderPass
    {
        /// <summary>LightMode do passe do L2Web/Particle.</summary>
        public static readonly ShaderTagId Tag = new("L2WebFxGamma");
        static readonly int OrigId = Shader.PropertyToID("_L2FxOrig");
        static FxGammaPass instance;
        static Material blit;
        static readonly int LinearId = Shader.PropertyToID("_L2FxLinear");
        /// <summary>Quadro em que algum FxRenderer montou geometria (sem efeitos, o passe nao roda).</summary>
        public static int DrawnFrame = -1;
        /// <summary>Diagnostico (-l2fxlinear): mistura linear de antes da #0053, direto na cor da camera (capturas antes/depois).</summary>
        public static bool LinearDebug = System.Array.IndexOf(System.Environment.GetCommandLineArgs(), "-l2fxlinear") >= 0;

        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
        static void Install()
        {
            if (instance != null) return;
            instance = new FxGammaPass();
            RenderPipelineManager.beginCameraRendering += OnBeginCamera;
        }

        FxGammaPass()
        {
            renderPassEvent = RenderPassEvent.AfterRenderingTransparents;
            requiresIntermediateTexture = true;
        }

        static void OnBeginCamera(ScriptableRenderContext ctx, Camera cam)
        {
            if (cam.cameraType != CameraType.Game || DrawnFrame < Time.frameCount - 1) return;
            if (!blit)
            {
                var sh = Shader.Find("Hidden/L2Web/FxGamma");
                if (!sh) return;
                blit = new Material(sh) { hideFlags = HideFlags.HideAndDontSave };
            }
            Shader.SetGlobalFloat(LinearId, LinearDebug ? 1 : 0);
            var data = cam.GetUniversalAdditionalCameraData();
            data?.scriptableRenderer?.EnqueuePass(instance);
        }

        sealed class DrawData
        {
            public RendererListHandle List;
        }

        sealed class CompositeData
        {
            public TextureHandle Gamma, Orig;
            public Material Mat;
        }

        public override void RecordRenderGraph(RenderGraph rg, ContextContainer frame)
        {
            var res = frame.Get<UniversalResourceData>();
            if (res.isActiveTargetBackBuffer || !blit) return;
            var cam = frame.Get<UniversalCameraData>();
            var render = frame.Get<UniversalRenderingData>();
            var light = frame.Get<UniversalLightData>();
            var color = res.activeColorTexture;
            var depth = res.activeDepthTexture;
            var desc = rg.GetTextureDesc(color);
            if (LinearDebug)
            {
                using var lb = rg.AddRasterRenderPass<DrawData>("L2Web fx: particulas (linear, diagnostico)", out var ld);
                var lds = RenderingUtils.CreateDrawingSettings(Tag, render, cam, light, SortingCriteria.CommonTransparent);
                ld.List = rg.CreateRendererList(new RendererListParams(render.cullResults, lds, new FilteringSettings(RenderQueueRange.all)));
                lb.UseRendererList(ld.List);
                lb.SetRenderAttachment(color, 0);
                lb.SetRenderAttachmentDepth(depth, AccessFlags.Read);
                lb.SetRenderFunc((DrawData dd, RasterGraphContext c) => c.cmd.DrawRendererList(dd.List));
                return;
            }
            if (desc.msaaSamples != MSAASamples.None) return; // [I] o projeto nao usa MSAA (PC_RPAsset m_MSAA 1)

            var gdesc = desc;
            gdesc.name = "L2Web fx (gama)";
            gdesc.format = GraphicsFormat.R8G8B8A8_UNorm;
            gdesc.clearBuffer = false;
            gdesc.depthBufferBits = DepthBits.None;
            var gamma = rg.CreateTexture(gdesc);
            rg.AddBlitPass(new RenderGraphUtils.BlitMaterialParameters(color, gamma, blit, 0), "L2Web fx: linear -> gama");

            using (var b = rg.AddRasterRenderPass<DrawData>("L2Web fx: particulas em gama", out var d))
            {
                var ds = RenderingUtils.CreateDrawingSettings(Tag, render, cam, light, SortingCriteria.CommonTransparent);
                var fs = new FilteringSettings(RenderQueueRange.all);
                d.List = rg.CreateRendererList(new RendererListParams(render.cullResults, ds, fs));
                b.UseRendererList(d.List);
                b.SetRenderAttachment(gamma, 0);
                b.SetRenderAttachmentDepth(depth, AccessFlags.Read);
                b.AllowGlobalStateModification(true);
                b.SetRenderFunc((DrawData dd, RasterGraphContext c) => c.cmd.DrawRendererList(dd.List));
            }

            // copia da cor original (HDR) para a composicao, que escreve de volta na propria cor da camera
            var odesc = desc;
            odesc.name = "L2Web cor da camera antes dos fx";
            odesc.clearBuffer = false;
            var orig = rg.CreateTexture(odesc);
            rg.AddCopyPass(color, orig, "L2Web fx: copia da cor");
            using (var b = rg.AddRasterRenderPass<CompositeData>("L2Web fx: gama -> linear", out var d))
            {
                d.Gamma = gamma;
                d.Orig = orig;
                d.Mat = blit;
                b.UseTexture(gamma);
                b.UseTexture(orig);
                b.SetRenderAttachment(color, 0);
                b.SetRenderFunc((CompositeData dd, RasterGraphContext c) =>
                {
                    dd.Mat.SetTexture(OrigId, dd.Orig);
                    Blitter.BlitTexture(c.cmd, dd.Gamma, new Vector4(1, 1, 0, 0), dd.Mat, 1);
                });
            }
        }
    }
}
