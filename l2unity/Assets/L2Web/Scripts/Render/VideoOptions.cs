// Setters de video do OptionWnd (04 secao 2.3; OptionWnd.uc:822-984) como o NWindow os implementa [O, nwindow/00008.c-00009.c]:
//   SetTextureDetail(n<3)      -> GL2TextureDetail = n e releitura das texturas (0x100fa160)
//   SetModelingDetail(n)       -> GL2UseReducePawnLOD = n (0x100fa260)
//   SetMotionDetail(n)         -> GL2UseSkipAnim = n (0x100fa340)
//   SetShadow(b)               -> GIsL2Projector = b (0x100fa420; sombra dos pawns por projetor)
//   SetBackgroundEffect(b)     -> GL2RenderDeco = b (0x100fa500; camada de decoracao do terreno)
//   SetTerrainClippingRange(i) -> GL2OriginTerrainCR 8..4 (0x100fa5e0; ver L2EnvScene.TerrainRangeOf)
//   SetPawnClippingRange(i)    -> "Pawn ClippingRange" 3,0 / 2,5 / 2,0 / 1,5 / 1,0 (0x100fa890)
//   SetReflectionEffect(n)     -> GIsL2WaterEffectType = n (0x100faa00)
//   SetHDR(n<6)                -> GL2PostProcessType = n (0x100faae0)
//   SetWeatherEffect(n)        -> GL2LevelOfWeather = n (0x100fabc0)
//   SetResolution(res, rate)   -> se (W, H, bits, Hz) mudou: SetRes do viewport no modo atual (janela/tela cheia), com 1024x768
//                                 32 bits 60 Hz de reserva, EV_ResolutionChanged e grava Video.GamePlayViewportX/Y, ColorBits e
//                                 RefreshRate (0x10106420)
//   IsKeepMinFrameRate ligado  -> forca Texture 2, Model 1, Motion 1, Shadow off, Deco off, Terrain 4, Pawn 4, Reflection 0,
//                                 HDR 0, Weather 0 pelos setters, sem gravar esses valores (OptionWnd.uc:956-969)
// No porte, o que tem efeito: resolucao/janela, detalhe de textura (limite de mipmap [I]), detalhe de modelo e movimento (LOD de
// animacao [I]), alcance de terreno (nivel da neblina [O] e plano distante [I]) e anti-aliasing (MSAA do URP [I]). Sombra por
// projetor, decoracao do terreno, alcance dos pawns, reflexo da agua, HDR e clima nao existem no porte: so ficam no Option.ini.
using L2Web.Render.Env;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

namespace L2Web.Render
{
    public static class VideoOptions
    {
        /// <summary>Valores efetivos depois do IsKeepMinFrameRate.</summary>
        public struct Effective
        {
            public int TextureDetail, ModelDetail, SkipAnim, TerrainClippingRange, PawnClippingRange, AntiAliasing, PostProc, WeatherEffect, ReflectionType;
            public bool Shadow, RenderDeco, KeepMinFrameRate;
        }

        /// <summary>"Pawn ClippingRange" por indice do CharBox [O 0x100fa890].</summary>
        public static float PawnClippingRange(int comboIndex) => comboIndex switch { 0 => 3f, 1 => 2.5f, 2 => 2f, 3 => 1.5f, _ => 1f };

        /// <summary>Amostras do MSAA do URP para o indice do AABox (0 None, 1 2X, 2 4X) [I].</summary>
        public static int MsaaSamples(int aaIndex) => aaIndex <= 0 ? 1 : aaIndex == 1 ? 2 : 4;

        /// <summary>Le o Option.ini e aplica o IsKeepMinFrameRate (OptionWnd.uc:956-969).</summary>
        public static Effective Resolve()
        {
            var keep = L2Options.GetBool("Video", "IsKeepMinFrameRate");
            var e = new Effective
            {
                KeepMinFrameRate = keep,
                TextureDetail = keep ? 2 : Mathf.Clamp(L2Options.GetInt("Video", "TextureDetail"), 0, 2),
                ModelDetail = keep ? 1 : Mathf.Clamp(L2Options.GetInt("Video", "ModelDetail"), 0, 1),
                SkipAnim = keep ? 1 : Mathf.Clamp(L2Options.GetInt("Video", "SkipAnim"), 0, 1),
                Shadow = !keep && L2Options.GetBool("Video", "PawnShadow"),
                RenderDeco = !keep && L2Options.GetBool("Video", "RenderDeco"),
                TerrainClippingRange = keep ? 4 : Mathf.Clamp(L2Options.GetInt("Video", "TerrainClippingRange"), 0, 4),
                PawnClippingRange = keep ? 4 : Mathf.Clamp(L2Options.GetInt("Video", "PawnClippingRange"), 0, 4),
                ReflectionType = keep || !L2Options.GetBool("L2WaterEffect", "IsUseEffect") ? 0 : Mathf.Clamp(L2Options.GetInt("L2WaterEffect", "EffectType"), 0, 2),
                PostProc = keep ? 0 : Mathf.Clamp(L2Options.GetInt("Video", "PostProc"), 0, 5),
                WeatherEffect = keep ? 0 : Mathf.Clamp(L2Options.GetInt("Video", "WeatherEffect"), 0, 3),
                AntiAliasing = Mathf.Clamp(L2Options.GetInt("Video", "AntiAliasing"), 0, 2),
            };
            return e;
        }

        /// <summary>Aplica as opcoes de video na cena (InitVideoOption ao entrar e todo OK/Aplicar do OptionWnd).</summary>
        public static void Apply(GameScene scene, World.World world)
        {
            var e = Resolve();
            // SetTextureDetail: [I] um nivel de mipmap a menos por grau (0 = tudo, 1 = metade, 2 = um quarto). As texturas do
            // porte nascem em tempo de execucao (ignoram o limite global de mipmap), entao o grau vira mipMapBias nas texturas
            // dos materiais do mundo (nao nas da interface), reaplicado as que carregarem depois (Tick)
            QualitySettings.globalTextureMipmapLimit = 0;
            TextureBias = e.TextureDetail;
            RefreshTextureBias();
            // SetModelingDetail / SetMotionDetail: [I] o LOD de animacao do porte (longe/fora da tela anima a cada 4 quadros)
            if (world != null) world.Lod = e.ModelDetail == 1 || e.SkipAnim == 1;
            if (scene != null)
            {
                // SetTerrainClippingRange: nivel da neblina [O] e o plano distante no fim dela [I]
                scene.Env.SetTerrainOption(e.TerrainClippingRange, e.KeepMinFrameRate);
                var (start, end) = scene.Env.Env.FogRangeUu(scene.Env.FogLevel);
                scene.SetQuality(scene.Resolution, end);
                Debug.Log($"[opt] video: textura={e.TextureDetail} modelo={e.ModelDetail} movimento={e.SkipAnim} terreno={e.TerrainClippingRange} (CR {L2EnvScene.TerrainRangeOf(e.TerrainClippingRange)}, nivel {scene.Env.FogLevel}, neblina {start}..{end} UU) aa={e.AntiAliasing} minFrame={e.KeepMinFrameRate}");
            }
            // AntiAliasing: [I] MSAA do URP (o original reinicia o dispositivo com o multisample)
            if (GraphicsSettings.currentRenderPipeline is UniversalRenderPipelineAsset u) u.msaaSampleCount = MsaaSamples(e.AntiAliasing);
        }

        /// <summary>Grau de detalhe de textura em vigor (mipMapBias das texturas do mundo).</summary>
        public static int TextureBias;
        static readonly System.Collections.Generic.HashSet<Texture> biased = new();
        static float tickAcc;
        static readonly int[] TexProps = { Shader.PropertyToID("_BaseMap"), Shader.PropertyToID("baseColorTexture"), Shader.PropertyToID("_MainTex") };

        /// <summary>Aplica o mipMapBias do TextureDetail nas texturas dos renderers do mundo (fora da UI).</summary>
        public static void RefreshTextureBias()
        {
            var bias = (float)TextureBias;
            foreach (var r in Object.FindObjectsByType<Renderer>(FindObjectsInactive.Include, FindObjectsSortMode.None))
            {
                if (r is CanvasRenderer || r.GetComponentInParent<Canvas>()) continue;
                foreach (var m in r.sharedMaterials)
                {
                    if (!m) continue;
                    foreach (var id in TexProps)
                    {
                        if (!m.HasProperty(id)) continue;
                        var t = m.GetTexture(id) as Texture2D;
                        if (!t || t.mipmapCount <= 1) continue;
                        if (t.mipMapBias != bias) t.mipMapBias = bias;
                        biased.Add(t);
                    }
                }
            }
            if (bias == 0)
            {
                foreach (var t in biased) if (t) t.mipMapBias = 0;
                biased.Clear();
            }
        }

        /// <summary>Com detalhe reduzido, reaplica o bias nas texturas que foram carregadas depois (a cada 2 s).</summary>
        public static void Tick(float dt)
        {
            if (TextureBias == 0) return;
            tickAcc += dt;
            if (tickAcc < 2f) return;
            tickAcc = 0;
            RefreshTextureBias();
        }

        /// <summary>-l2opt "Secao.Chave=valor;..." (diagnostico): grava no Option.ini antes de aplicar as opcoes.</summary>
        public static void ApplyDevArgs()
        {
            var a = System.Environment.GetCommandLineArgs();
            var i = System.Array.IndexOf(a, "-l2opt");
            if (i < 0 || i + 1 >= a.Length) return;
            foreach (var kv in a[i + 1].Split(';'))
            {
                var eq = kv.IndexOf('=');
                var dot = kv.IndexOf('.');
                if (eq <= 0 || dot <= 0 || dot > eq) continue;
                L2Options.SetString(kv.Substring(0, dot), kv.Substring(dot + 1, eq - dot - 1), kv.Substring(eq + 1));
                Debug.Log($"[opt] {kv}");
            }
        }

        /// <summary>
        /// SetResolution [O 0x10106420]: so muda se (W, H, Hz) diferem do atual, mantendo o modo janela/tela cheia; grava
        /// Video.GamePlayViewportX/Y, ColorBits (32) e RefreshRate. Devolve true se mudou.
        /// </summary>
        public static bool SetResolution(int w, int h, int hz)
        {
            var curHz = Mathf.RoundToInt((float)Screen.currentResolution.refreshRateRatio.value);
            var changed = w != Screen.width || h != Screen.height || (hz > 0 && hz != curHz);
            if (changed && w > 0 && h > 0)
            {
                if (hz > 0) Screen.SetResolution(w, h, Screen.fullScreenMode, new RefreshRate { numerator = (uint)hz, denominator = 1 });
                else Screen.SetResolution(w, h, Screen.fullScreenMode);
            }
            L2Options.SetInt("Video", "GamePlayViewportX", w);
            L2Options.SetInt("Video", "GamePlayViewportY", h);
            L2Options.SetInt("Video", "ColorBits", 32);
            if (hz > 0) L2Options.SetInt("Video", "RefreshRate", hz);
            return changed;
        }
    }
}
