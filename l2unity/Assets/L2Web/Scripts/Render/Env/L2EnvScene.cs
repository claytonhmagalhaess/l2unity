// Aplica o UL2NEnvManager (L2Env) na cena do Unity, no lugar do DayNight do three.js:
//  - ANMovableSunLight::Tick (0x1030206d): a luz direcional aponta -GetSunLightDirection (lua na fase 3);
//    FDynamicLight::Update com bSunlightColor: a cor e o plano HSV x brilho/255 por tipo de superficie (atores aqui; as
//    malhas estaticas, o terreno e o BSP usam as suas na luz embutida);
//  - ambiente dos atores: GetActorAmbientColor(t) (D3DRS_AMBIENT = cor >> 1 com o MODULATE2X do UE2: no URP Lit
//    e ambiente chapado = a cor inteira e a luz direcional com 1,75 x cor, ver baked_light_re.md 3 [I: mapeamento]);
//  - neblina: GL2FogStart/End = Start/EndRange do nivel x 2048 e a cor = GetHazeColor(t) (FLevelSceneNode::Render 0x1065e940
//    -> FUN_104448f0 [O]); debaixo d'agua, o WaterVolume do Env.int;
//  - ceu (L2Sky): SkyBoxColor, HazeringColor, CloudColor1..3, SunColor/SunScale, MoonColor/MoonScale a cada quadro;
//  - terreno (UeTerrain.SetHour) e BSP (BspLightmap.SetHour) quando as sombras sao marcadas (ShadowTick 0,1 h).
using L2Web.World;
using UnityEngine;
using UnityEngine.Rendering;

namespace L2Web.Render.Env
{
    public sealed class L2EnvScene
    {
        public readonly L2Env Env;
        readonly Light sun;
        readonly Camera camera;
        /// <summary>Ceu da cena (SkyZoneInfo do mapa), se houver.</summary>
        public L2Sky Sky;
        /// <summary>[I] fator da luz direcional dos atores (0,875 x 2 do MODULATE2X).</summary>
        public const float ActorSunIntensity = 1.75f;
        /// <summary>Nivel de neblina 1..5 (alcance de terreno das opcoes).</summary>
        public int FogLevel = 5;
        static readonly int ActorAmbientId = Shader.PropertyToID("_L2ActorAmbient");
        static readonly int ActorSunId = Shader.PropertyToID("_L2ActorSun");

        /// <summary>
        /// Ambiente dos atores numa zona com sol, em unidades de luz do L2Web/Actor: D3DRS_AMBIENT = GetActorAmbientColor(t) >> 1
        /// por canal (0x106ddb0b [O]) e o MODULATE2X devolve x2 -> (c >> 1) 2 / 255 (o bit baixo cai: 71 -> 70).
        /// </summary>
        public static Vector4 ActorAmbientUnits(Color32 c) => new((c.r >> 1) * 2 / 255f, (c.g >> 1) * 2 / 255f, (c.b >> 1) * 2 / 255f, 1);

        /// <summary>
        /// Ambiente dos atores numa zona sem sol: D3DRS_AMBIENT = FDynamicActor.AmbientColor inteiro (0x106ddb76 [O]), com
        /// AmbientColor = FColor(AmbientVector) = clamp(floor(255 v)) (0x10373aa0 [O]); x2 do MODULATE2X. Salao: 0,2773 -> 70 -> 140/255.
        /// </summary>
        public static Vector4 ZoneAmbientUnits(Color v)
        {
            static float Ch(float x) => Mathf.Clamp(Mathf.Floor(x * 255f), 0, 255) * 2 / 255f;
            return new Vector4(Ch(v.r), Ch(v.g), Ch(v.b), 1);
        }
        /// <summary>Zona sem sol (ZoneInfo.bSunAffect false): a luz do sol nao entra e o ambiente e o da zona.</summary>
        public bool SunAffect = true;
        /// <summary>AmbientVector da zona (FGetHSV do AmbientHue/Sat/Brightness), para zonas sem sol.</summary>
        public Color ZoneAmbient = Color.black;

        /// <summary>
        /// UUIScript::execSetTerrainClippingRange (NWindow 0x100fa5e0): indice do combo 0..4 (Very Wide..Very Narrow) ->
        /// GL2OriginTerrainCR 8, 7, 6, 5, 4 (e ActorCR 4..2). Com IsKeepMinFrameRate o nivel cai para 1.
        /// </summary>
        public static float TerrainRangeOf(int comboIndex) => 8 - Mathf.Clamp(comboIndex, 0, 4);

        public void SetTerrainOption(int comboIndex, bool keepMinFrameRate) => FogLevel = L2Env.FogLevel(TerrainRangeOf(comboIndex), keepMinFrameRate);
        /// <summary>
        /// Zona fechada (sem bTerrainZone) com bDistanceFog: DistanceFogColor/Start/End da zona, em UU. Null = zona de terreno
        /// (alcance global e cor da haze, FUN_104448f0 [O]).
        /// </summary>
        public (Color32 color, float start, float end)? ZoneFog;
        /// <summary>Posicao do ViewTarget (o personagem) em UE, para o peso do L2FogInfo; null = a camera.</summary>
        public System.Func<Vector3> ViewTargetUe;
        readonly L2Fog.Transition fogTransition = new();
        /// <summary>Dentro de um WaterVolume: neblina da agua (Env.int).</summary>
        public bool UnderWater;
        /// <summary>Chamado quando as sombras do terreno/BSP devem ser refeitas (ShadowTick).</summary>
        public System.Action<L2Env> OnShadowUpdate;

        public L2EnvScene(Light sun, Camera camera, L2EnvData data = null)
        {
            Env = new L2Env(data ?? L2EnvData.Load());
            this.sun = sun;
            this.camera = camera;
            if (sun)
            {
                sun.type = LightType.Directional;
                sun.shadows = LightShadows.None;
            }
        }

        public double T => Env.T;

        /// <summary>
        /// Argumentos de desenvolvimento (capturas de paridade): -l2time HH:MM[:razao] fixa a hora (razao 0 = parada) e ignora o
        /// ClientSetTime; -l2ssq N (0..3) forca o ambiente como o SSQInfo. Devolve true se a hora foi forcada.
        /// </summary>
        public bool ApplyDevArgs()
        {
            var args = System.Environment.GetCommandLineArgs();
            var forced = false;
            for (var i = 0; i + 1 < args.Length; i++)
            {
                if (args[i] == "-l2time")
                {
                    var p = args[i + 1].Split(':');
                    if (p.Length >= 2 && int.TryParse(p[0], out var h) && int.TryParse(p[1], out var m))
                    {
                        var ratio = p.Length > 2 && int.TryParse(p[2], out var r) ? r : 0;
                        Env.OnClientSetTime(h * 60 + m, ratio);
                        forced = true;
                    }
                }
                else if (args[i] == "-l2ssq" && int.TryParse(args[i + 1], out var e)) Env.OnSSQInfo(e & 3, 1);
            }
            TimeForced = forced;
            return forced;
        }

        /// <summary>Hora fixada por -l2time: o ClientSetTime do servidor nao a muda.</summary>
        public bool TimeForced;
        /// <summary>Cores do ceu vindas do L2FogInfo ativo (FUN_10657850 com as cores dobradas); null = as das curvas.</summary>
        public (Color32 sky, Color32[] clouds, Color32[] hazes)? FogSkyOverride;

        /// <summary>Hora:minuto do jogo para o HUD.</summary>
        public string Label => $"{Env.Hour:00}:{Env.Minute:00}";

        /// <summary>Um quadro: relogio, luz do sol, ambiente, neblina, ceu e sombras.</summary>
        public void Update(float dt)
        {
            Env.UpdateNTime(dt);
            var t = Env.T;
            // luz do sol/lua
            var dir = Env.SunLightDirection();
            if (sun)
            {
                var toLight = Coords.ToUnity(dir.x, dir.y, dir.z).normalized;
                sun.transform.rotation = Quaternion.LookRotation(-toLight, Vector3.up);
                var plane = Env.GetEnvPlane("HSVActorLight");
                sun.color = new Color(plane.x, plane.y, plane.z, 1);
                sun.intensity = ActorSunIntensity;
                sun.enabled = SunAffect && plane.x + plane.y + plane.z > 0;
            }
            // ambiente dos atores: GetActorAmbientColor(t) na zona com sol; senao o AmbientVector da zona
            RenderSettings.ambientMode = AmbientMode.Flat;
            RenderSettings.ambientLight = SunAffect ? (Color)Env.GetEnvColor("ActorAmbient") : ZoneAmbient;
            // L2Web/Actor (USkeletalMeshInstance::Render 0x106dcfd0 [O]): zona com sol e gerenciador de ambiente ->
            // SetAmbientLight(GetActorAmbientColor(t) >> 1) (0x106ddb0b); senao SetAmbientLight(FDynamicActor.AmbientColor)
            // inteiro (0x106ddb76), AmbientColor = FColor(AmbientVector da zona) = floor(255 v); x2 do MODULATE2X; sol x 1,75
            Shader.SetGlobalVector(ActorAmbientId, SunAffect ? ActorAmbientUnits(Env.GetEnvColor("ActorAmbient")) : ZoneAmbientUnits(ZoneAmbient));
            var sunPlane = Env.GetEnvPlane("HSVActorLight");
            var sunOn = sun ? sun.enabled : SunAffect && sunPlane.x + sunPlane.y + sunPlane.z > 0;
            Shader.SetGlobalVector(ActorSunId, sunOn ? new Vector4(sunPlane.x, sunPlane.y, sunPlane.z, 1) * ActorSunIntensity : Vector4.zero);
            // malhas estaticas nas zonas com sol: GetStaticMeshAmbientColor(t) >> 1 (RenderStaticMesh, por quadro)
            BakedLight.SetSunAmbient(Env.GetEnvColor("StaticMeshAmbient"));
            // BSP: atlas do lightmap da hora (k = trunc(8 t / 24) mod 8), por quadro
            BspLightmap.SetHour(t);
            // neblina
            ApplyFog();
            // ceu
            if (Sky != null)
            {
                if (FogSkyOverride is { } fo)
                    Sky.SetColors(fo.sky, fo.hazes.Length > 0 ? fo.hazes[0] : Env.GetEnvColor("HazeringColor"), fo.clouds);
                else
                    Sky.SetColors(Env.GetEnvColor("SkyBoxColor"), Env.GetEnvColor("HazeringColor"),
                        new[] { Env.GetEnvColor("CloudColor1"), Env.GetEnvColor("CloudColor2"), Env.GetEnvColor("CloudColor3") });
                Sky.SetSunMoon(t, dir, Env.GetEnvColor("SunColor"), Env.GetEnvScale("SunScale", t), Env.GetEnvColor("MoonColor"), Env.GetEnvScale("MoonScale", t));
            }
            if (Env.ShadowDirty)
            {
                Env.ShadowDirty = false;
                OnShadowUpdate?.Invoke(Env);
            }
        }

        void ApplyFog()
        {
            RenderSettings.fog = true;
            RenderSettings.fogMode = FogMode.Linear;
            if (UnderWater)
            {
                RenderSettings.fogColor = Env.Data.WaterFogColor;
                RenderSettings.fogStartDistance = Env.Data.WaterFogStart * Coords.Scale;
                RenderSettings.fogEndDistance = Env.Data.WaterFogEnd * Coords.Scale;
            }
            else
            {
                var (gs, ge) = Env.FogRangeUu(FogLevel);
                // L2FogInfo na lista: dobra sobre a base (global x 2048, cinza 127, cores do ceu da hora) e transicao FogSpeed
                var baseState = new FogState
                {
                    Start = gs, End = ge, Sky = Env.GetEnvColor("SkyBoxColor"),
                    Clouds = new[] { Env.GetEnvColor("CloudColor1"), Env.GetEnvColor("CloudColor2"), Env.GetEnvColor("CloudColor3") },
                    Hazes = new[] { Env.GetEnvColor("HazeringColor") },
                };
                var view = ViewTargetUe != null ? ViewTargetUe() : camera ? Coords.FromUnityF(camera.transform.position) : Vector3.zero;
                var folded = L2Fog.Fold(L2Fog.Registry, view, FogLevel, Env.T, baseState, out var any);
                fogTransition.Duration = Mathf.Max(0.01f, Env.Data.FogSpeed);
                if (any)
                {
                    fogTransition.SetTarget(folded, true);
                    var cur = fogTransition.Step(Time.deltaTime);
                    RenderSettings.fogColor = cur.Fog;
                    RenderSettings.fogStartDistance = cur.Start * Coords.Scale;
                    RenderSettings.fogEndDistance = Mathf.Max(cur.Start + 1, cur.End) * Coords.Scale;
                    FogSkyOverride = (cur.Sky, cur.Clouds, cur.Hazes);
                }
                else
                {
                    FogSkyOverride = null;
                    if (ZoneFog is { } z)
                    {
                        // zona fechada com bDistanceFog: os valores da propria zona
                        fogTransition.SetTarget(new FogState { Start = z.start, End = z.end, Fog = z.color }, false);
                        var cur = fogTransition.Step(Time.deltaTime);
                        RenderSettings.fogColor = cur.Fog;
                        RenderSettings.fogStartDistance = cur.Start * Coords.Scale;
                        RenderSettings.fogEndDistance = Mathf.Max(cur.Start + 1, cur.End) * Coords.Scale;
                    }
                    else
                    {
                        // zona de terreno (FUN_104448f0): alcance global e cor = GetHazeColor(t)
                        fogTransition.SetTarget(new FogState { Start = gs, End = ge, Fog = Env.GetEnvColor("HazeringColor") }, false);
                        var cur = fogTransition.Step(Time.deltaTime);
                        RenderSettings.fogColor = cur.Fog;
                        RenderSettings.fogStartDistance = cur.Start * Coords.Scale;
                        RenderSettings.fogEndDistance = cur.End * Coords.Scale;
                    }
                }
            }
            if (camera)
            {
                camera.clearFlags = CameraClearFlags.SolidColor;
                camera.backgroundColor = Sky != null ? Color.black : RenderSettings.fogColor;
            }
        }
    }
}
