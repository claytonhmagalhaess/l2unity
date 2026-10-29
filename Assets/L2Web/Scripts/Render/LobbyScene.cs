// Cena 3D do lobby (render/lobby.ts; maps/Lobby.unr): floresta do login, salao da selecao de personagem e cenarios da
// criacao por raca. Cameras das cenas do Matinee (tools/ui/lobby.py -> /ui/lobby.json) e personagens nas posicoes do
// logongrp.dat (GameData.LogonSpots).
//
// No Unity (classe comum, nao MonoBehaviour):
//  - tem a propria raiz (Root) com o cenario, os personagens, as luzes e, se nao recebeu uma, a propria Camera;
//    Start/Stop ligam/desligam a raiz (e a camera propria) e aplicam/restauram o ambiente global (RenderSettings:
//    neblina, ambiente Trilight, sol) e desligam/religam as outras luzes direcionais ativas (ex.: o sol da GameScene);
//  - o App chama Tick(dt) a cada quadro enquanto o lobby esta ativo (camera, animacoes, nomes, clique);
//  - clique: por padrao o proprio Tick le o Mouse.current (botao esquerdo) e ignora quando PointerOverUi() e true
//    (padrao: UiRoot.PointerOverUi). Com HandleClicks = false o App chama ClickAt(posicao de tela) por conta propria;
//  - os nomes (div .lobbyname do TS) sao Text do uGUI num container no fundo do Canvas da interface (UiRoot.Rect).
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using L2Web.Net;
using L2Web.UI;
using L2Web.World;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;
using UnityEngine.UI;

namespace L2Web.Render
{
    /// <summary>Personagem mostrado no lobby (LobbyChar do TS).</summary>
    public class LobbyChar
    {
        public string Name = "";
        public Appearance Appearance;
        /// <summary>Indice do lugar no logongrp.</summary>
        public int Spot;
        public bool Selected;
        /// <summary>Sendo apagado (deleteTime &gt; 0): senta (SitWaitAnimName) e nao anda.</summary>
        public bool Sitting;
    }

    public class LobbyScene
    {
        /// <summary>Uma acao de camera de uma cena do Matinee (/ui/lobby.json).</summary>
        public sealed class SceneAction
        {
            public string Type;
            public float[] Loc;
            public float[] Rot;
            public float Duration;
            public int? PathStyle;
            public float[] StartControlPoint;
            public float[] EndControlPoint;
        }

        sealed class LobbyJson
        {
            public Dictionary<string, List<SceneAction>> Scenes;
        }

        struct Shot
        {
            public Vector3 Pos;
            public Vector3 Dir;
        }

        /// <summary>
        /// UGameEngine::Draw (0x1058fe7c) usa o Controller.FovAngle do viewport actor: 50 nos defaults do PlayerController
        /// (o LineagePlayerController so muda DesiredFOV/DefaultFOV para 60 e nada os copia no lobby). Horizontal.
        /// </summary>
        public const float LobbyFovDeg = 50;
        /// <summary>Planos de corte do UE2 (Core.dll): near 10 UU, far 65536 UU.</summary>
        public const float NearUu = 10, FarUu = 65536;

        /// <summary>Uma ActionMoveCamera com as 100 amostras do caminho (FMatineeTools::GetSamples) e o trecho de tempo.</summary>
        sealed class Segment
        {
            public Vector3[] Samples;
            public float[] RotFrom, RotTo;
            public float PctStart, PctDur, PctEnd;
        }

        readonly List<Segment> segments = new();
        float sceneTime, sceneTotal;
        bool scenePlaying;

        /// <summary>
        /// FMatineeTools::GetSamples (0x10307f13): P0 = ponto anterior, P3 = atual; PathStyle 1 (Bezier) P1 = P0 +
        /// prev.StartControlPoint, P2 = P3 + cur.EndControlPoint; senao P1/P2 a 1/3 e 2/3 (reta uniforme). 100 amostras, t = k/99.
        /// </summary>
        public static Vector3[] PathSamples(Vector3 p0, Vector3 p3, int? pathStyle, float[] startCp, float[] endCp)
        {
            Vector3 p1, p2;
            if (pathStyle == 1 && startCp != null && endCp != null)
            {
                p1 = p0 + new Vector3(startCp[0], startCp[1], startCp[2]);
                p2 = p3 + new Vector3(endCp[0], endCp[1], endCp[2]);
            }
            else
            {
                p1 = p0 + (p3 - p0) / 3;
                p2 = p3 - (p3 - p0) / 3;
            }
            var s = new Vector3[100];
            for (var k = 0; k < 100; k++)
            {
                var t = k / 99f;
                var u = 1 - t;
                s[k] = u * u * u * p0 + 3 * u * u * t * p1 + 3 * u * t * t * p2 + t * t * t * p3;
            }
            return s;
        }

        /// <summary>GetLocation (0x10698480): f = 99 u; k = trunc(f); S[k] + (f - k)(S[k+1] - S[k]).</summary>
        public static Vector3 SampleAt(Vector3[] s, float u)
        {
            var f = 99 * u;
            var k = Mathf.Clamp((int)f, 0, 98);
            return s[k] + (f - k) * (s[k + 1] - s[k]);
        }

        /// <summary>GetRotation (0x1030ad99): d = cur - prev por componente, enrolado em 65535; prev + d u.</summary>
        public static float RotLerp(float from, float to, float u)
        {
            var d = to - from;
            while (d > 32767) d -= 65535;
            while (d < -32767) d += 65535;
            return from + d * u;
        }

        sealed class CharView
        {
            public Actor Actor;
            public Text Label;
            public string Name;
            public bool Selected;
            public int Index;
            /// <summary>Slot do logongrp (= indice na lista), posicao atual / destino em unidades do Unreal e o yaw (0..65535).</summary>
            public int Home;
            public Vector3 Pos, Target;
            public int Yaw, DesiredYaw, FinalYaw;
            public bool Moving, Walking, Special, Sitting;
            public float Radius = 9;
            public string Model;
            public int Widx;
        }

        /// <summary>
        /// Velocidade no lobby (scratchpad/lobby_turn_re.md): APawn::Tick poe GroundSpeed = GetCurSpeed = GroundMinSpeed 80 dos
        /// defaults do LineageWarrior.u (NonAttackSpeedRate 1); calcVelocity (0x10639950) sem aceleracao.
        /// </summary>
        public const float WalkSpeed = 80;
        /// <summary>LineagePawn.RotationRate.Yaw = 65000 (APawn::physicsRotation 0x10634450: passo _ftol(65000 dt), lado mais curto).</summary>
        public const int TurnRate = 65000;

        /// <summary>CollisionRadius dos defaults de cada classe: APawn::ReachedDestination (0x106186a0) para a min(raio, 30) do alvo.</summary>
        static readonly System.Collections.Generic.Dictionary<string, float> CollisionRadius = new()
        {
            ["MFighter"] = 9, ["FFighter"] = 8, ["MMagic"] = 7.5f, ["FMagic"] = 6.5f, ["MElf"] = 7.5f, ["FElf"] = 7.5f, ["MDarkElf"] = 7.5f,
            ["FDarkElf"] = 7, ["MOrc"] = 11, ["FOrc"] = 7, ["MShaman"] = 7, ["FShaman"] = 8, ["MDwarf"] = 9, ["FDwarf"] = 5,
        };

        /// <summary>AActor::fixedTurn (0x10306f05) sem bFixedRotationDir: anda delta para o lado mais curto e para no alvo.</summary>
        public static int TurnToward(int current, int desired, int delta)
        {
            if (delta == 0) return current & 0xFFFF;
            current &= 0xFFFF;
            desired &= 0xFFFF;
            var result = current;
            if (current > desired)
            {
                if (current - desired < 32768) result -= Math.Min(current - desired, delta);
                else result += Math.Min(desired + 65536 - current, delta);
            }
            else
            {
                if (desired - current < 32768) result += Math.Min(desired - current, delta);
                else result -= Math.Min(current + 65536 - desired, delta);
            }
            return result & 0xFFFF;
        }

        static int YawOf(float dx, float dy) => (int)Mathf.Repeat(Mathf.Atan2(dy, dx) * 32768f / Mathf.PI, 65536) & 0xFFFF;
        int selectedChar = -1;

        /// <summary>Racas na ordem do logongrp/classinfo: humano, elfo, elfo negro, orc, anao (tag da cena do Matinee).</summary>
        public static readonly string[] RaceScene = { "Human", "Elf", "DarkElf", "orc", "Dwarf" };
        /// <summary>Primeiro lugar de cada raca no logongrp (7 da selecao + o central = 8 primeiros).</summary>
        public static readonly int[] RaceSpot = { 8, 12, 16, 20, 24 };

        /// <summary>Cores dos nomes (.lobbyname / .lobbyname.sel do style.css).</summary>
        static readonly Color NameColor = RenderMats.Hex(0xe4e2da);
        static readonly Color NameSelColor = Color.white;

        public readonly Transform Root;
        public readonly Camera Camera;
        /// <summary>StaticMeshes, BSP e terreno do Lobby.unr.</summary>
        public readonly Transform Statics;
        /// <summary>Personagens.</summary>
        public readonly Transform Chars;
        public readonly Light Sun;

        /// <summary>Clique num personagem do lobby (indice na lista passada ao ShowChars).</summary>
        public Action<int> OnPick = _ => { };
        /// <summary>Tick trata o clique do mouse (botao esquerdo); false = o App chama ClickAt.</summary>
        public bool HandleClicks = true;
        /// <summary>Ponteiro sobre a interface (o clique nao vai para a cena). Padrao: UiRoot.PointerOverUi.</summary>
        public Func<bool> PointerOverUi = UiRoot.PointerOverUi;

        public bool Running => running;

        readonly bool ownCamera;
        RectTransform labelsParent;
        RectTransform labels;
        LobbyJson json;
        Task<string> loaded;
        GameObject terrain;
        bool running;
        Shot? from;
        Shot? to;
        float t = 1;
        float dur;
        readonly List<CharView> chars = new();
        int token;

        // ambiente (EnvScene) e zona do Lobby.unr
        bool sunAffect = true;
        (Color32 color, float start, float end)? zoneFog;
        /// <summary>Gerenciador de ambiente do lobby: SetTimeToLobbyTime = EnvSetup.StartTime (12h), relogio parado.</summary>
        public L2Web.Render.Env.L2EnvScene EnvScene;

        // ambiente global salvo no Start e restaurado no Stop
        struct Env
        {
            public bool Fog;
            public FogMode FogMode;
            public Color FogColor;
            public float FogStart, FogEnd, FogDensity;
            public AmbientMode AmbientMode;
            public Color AmbSky, AmbEquator, AmbGround, AmbLight;
            public float AmbIntensity;
            public Light Sun;
        }

        Env saved;
        readonly List<Light> mutedLights = new();

        /// <param name="parent">Onde a raiz fica (null = raiz da cena do Unity).</param>
        /// <param name="camera">Camera a usar; null cria uma propria (ligada so entre Start e Stop). Uma camera recebida
        /// e so posicionada (nao e ligada/desligada nem restaurada).</param>
        /// <param name="labelsParent">Onde ficam os nomes (null = UiRoot.Rect, criado no primeiro uso).</param>
        public LobbyScene(Transform parent = null, Camera camera = null, RectTransform labelsParent = null)
        {
            Root = new GameObject("LobbyScene").transform;
            if (parent) Root.SetParent(parent, false);
            Root.gameObject.SetActive(false);
            this.labelsParent = labelsParent;

            if (!camera)
            {
                var cgo = new GameObject("Lobby Camera");
                cgo.transform.SetParent(Root, false);
                camera = cgo.AddComponent<Camera>();
                cgo.AddComponent<UniversalAdditionalCameraData>();
                camera.depth = 10; // por cima de outra camera que tenha ficado ligada
                ownCamera = true;
            }
            Camera = camera;
            ConfigureCamera();

            // three: HemisphereLight(0xdde6ff, 0x3a3428, 1.5) (ambiente, aplicado no Start) + DirectionalLight(0xfff1dc, 1.8)
            var sgo = new GameObject("sol do lobby");
            sgo.transform.SetParent(Root, false);
            Sun = sgo.AddComponent<Light>();
            Sun.type = LightType.Directional;
            Sun.color = RenderMats.Hex(0xfff1dc);
            EnvScene = new L2Web.Render.Env.L2EnvScene(Sun, camera);
            EnvScene.Env.OnClientSetTime((int)(EnvScene.Env.Data.StartTime * 60), 0);
            EnvScene.OnShadowUpdate = e =>
            {
                UeTerrain.SetHour(e);
                BakedLight.SetHour(e);
            };
            Sun.shadows = LightShadows.None;
            sgo.transform.rotation = Quaternion.LookRotation(-Coords.ThreeToUnity(new Vector3(30, 60, 20)).normalized);

            Statics = Child("cenario");
            Chars = Child("personagens");
        }

        Transform Child(string name)
        {
            var tr = new GameObject(name).transform;
            tr.SetParent(Root, false);
            return tr;
        }

        void ConfigureCamera()
        {
            // UE2: near 10 UU, far 65536 UU; FOV horizontal 50 (LobbyFovDeg) convertido pelo aspecto real (ForceAspectRatio=False)
            Camera.nearClipPlane = NearUu * Coords.Scale;
            Camera.farClipPlane = FarUu * Coords.Scale;
            Camera.clearFlags = CameraClearFlags.SolidColor;
            Camera.backgroundColor = Color.black;
            UpdateFov();
        }

        void UpdateFov()
        {
            var aspect = Camera.aspect > 0 ? Camera.aspect : 4f / 3f;
            Camera.fieldOfView = CamUtil.VerticalFov(LobbyFovDeg, aspect);
        }

        // ------------------------------------------------------------ carga

        /// <summary>Carrega o mapa do lobby (uma vez) e as cenas de camera. Devolve as mensagens do cenario.</summary>
        public Task<string> Load()
        {
            // o cenario pode ter sido descartado por fora (Statics.Clear): carrega de novo
            if (loaded != null && loaded.IsCompleted && !StaticsIntact()) loaded = null;
            return loaded ??= LoadNow();
        }

        bool StaticsIntact()
        {
            for (var i = 0; i < Statics.childCount; i++)
                if (Statics.GetChild(i).name.StartsWith("statics ")) return true;
            return false;
        }

        async Task<string> LoadNow()
        {
            // recarga: tira o que sobrou (o BSP seria duplicado); o terreno fica
            for (var i = Statics.childCount - 1; i >= 0; i--)
            {
                var c = Statics.GetChild(i).gameObject;
                if (c != terrain) RenderMats.Destroy(c);
            }
            var jt = LoadJson();
            var mt = Statics_LoadNamedMap();
            var tt = terrain ? Task.FromResult<GameObject>(null) : LoadTrack.Track(BuildTerrain());
            await Task.WhenAll(jt, mt, tt);
            json = jt.Result ?? json;
            if (tt.Result)
            {
                if (Root)
                {
                    terrain = tt.Result;
                    terrain.transform.SetParent(Statics, false);
                }
                else RenderMats.Destroy(tt.Result);
            }
            // cata-vento (PHYS_Rotating) e vinhas (MovableStaticMeshActor): depois do cenario, que tem a instancia estatica
            if (Root)
            {
                if (movers != null && movers.Root) RenderMats.Destroy(movers.Root.gameObject);
                movers = new LobbyMovers(Root);
                await movers.Load("/map/Lobby_movers.json", Statics);
                // Projector8: a luz entre as folhas na trilha do login (so terreno)
                try
                {
                    env ??= await Http.GetJson<Newtonsoft.Json.Linq.JObject>("/map/Lobby_env.json");
                }
                catch (Exception e)
                {
                    Debug.LogWarning("lobby env: " + e.Message);
                }
                // ceu: a zona do SkyZoneInfo0 (FSkySceneNode), uma vez
                if (skyZone == null)
                {
                    skyZone = new L2Sky(Root);
                    await skyZone.Load();
                }
                var col = terrain ? terrain.GetComponentInChildren<MeshCollider>() : null;
                var projs = 0;
                if (env?["projectors"] is Newtonsoft.Json.Linq.JArray pjs && col && Root)
                    foreach (Newtonsoft.Json.Linq.JObject pj in pjs)
                        if (await UeProjector.Build(pj, col, Statics))
                            projs++;
                if (Array.IndexOf(Environment.GetCommandLineArgs(), "-l2partlog") >= 0)
                {
                    int bakedN = 0, total = 0;
                    foreach (var mr in Statics.GetComponentsInChildren<MeshRenderer>(true))
                    {
                        total++;
                        if (mr.additionalVertexStreams) bakedN++;
                    }
                    Debug.Log($"[lobby] balancando {WindSway.Count} moveis {movers.Count} projetores {projs} ceu {(skyZone != null && skyZone.Root ? skyZone.Root.childCount : -1)} luzEmbutida {bakedN}/{total} luzesHw {(lights ? lights.GetComponentsInChildren<Light>().Length : 0)}");
                }
            }
            return mt.Result;
        }

        Task<string> Statics_LoadNamedMap() => L2Web.Render.Statics.LoadNamedMap(Statics, "Lobby");

        static async Task<GameObject> BuildTerrain()
        {
            try
            {
                return await UeTerrain.BuildUeTerrain("Lobby", false);
            }
            catch (Exception e)
            {
                Debug.LogWarning($"lobby: terreno: {e.Message}");
                return null;
            }
        }

        static async Task<LobbyJson> LoadJson()
        {
            try
            {
                var r = await Http.Fetch("/ui/lobby.json");
                return r.Ok ? r.Json<LobbyJson>() : null;
            }
            catch (Exception e)
            {
                Debug.LogWarning($"lobby: /ui/lobby.json: {e.Message}");
                return null;
            }
        }

        /// <summary>Tags das cenas do Matinee disponiveis (vazio antes do Load).</summary>
        public IEnumerable<string> SceneTags => json?.Scenes?.Keys ?? (IEnumerable<string>)Array.Empty<string>();

        // ------------------------------------------------------------ ciclo

        /// <summary>Liga a cena: raiz, camera propria, ceu/neblina/luzes do lobby (o ambiente anterior e salvo).</summary>
        public void Start()
        {
            if (running) return;
            running = true;
            saved = new Env
            {
                Fog = RenderSettings.fog,
                FogMode = RenderSettings.fogMode,
                FogColor = RenderSettings.fogColor,
                FogStart = RenderSettings.fogStartDistance,
                FogEnd = RenderSettings.fogEndDistance,
                FogDensity = RenderSettings.fogDensity,
                AmbientMode = RenderSettings.ambientMode,
                AmbSky = RenderSettings.ambientSkyColor,
                AmbEquator = RenderSettings.ambientEquatorColor,
                AmbGround = RenderSettings.ambientGroundColor,
                AmbLight = RenderSettings.ambientLight,
                AmbIntensity = RenderSettings.ambientIntensity,
                Sun = RenderSettings.sun,
            };
            Root.gameObject.SetActive(true);
            if (ownCamera) Camera.enabled = true;
            // luzes direcionais de outras cenas (o sol da GameScene) iluminariam o lobby tambem
            mutedLights.Clear();
            foreach (var l in UnityEngine.Object.FindObjectsByType<Light>(FindObjectsInactive.Exclude))
            {
                if (!l || !l.enabled || l.type != LightType.Directional || l.transform.IsChildOf(Root)) continue;
                l.enabled = false;
                mutedLights.Add(l);
            }
            ApplyEnv();
            if (labels) labels.gameObject.SetActive(true);
        }

        /// <summary>Desliga a cena e restaura o ambiente global e as luzes de antes do Start.</summary>
        public void Stop()
        {
            if (!running) return;
            running = false;
            if (Root) Root.gameObject.SetActive(false);
            if (labels) labels.gameObject.SetActive(false);
            foreach (var l in mutedLights)
                if (l)
                    l.enabled = true;
            mutedLights.Clear();
            var s = saved;
            RenderSettings.fog = s.Fog;
            RenderSettings.fogMode = s.FogMode;
            RenderSettings.fogColor = s.FogColor;
            RenderSettings.fogStartDistance = s.FogStart;
            RenderSettings.fogEndDistance = s.FogEnd;
            RenderSettings.fogDensity = s.FogDensity;
            RenderSettings.ambientMode = s.AmbientMode;
            RenderSettings.ambientSkyColor = s.AmbSky;
            RenderSettings.ambientEquatorColor = s.AmbEquator;
            RenderSettings.ambientGroundColor = s.AmbGround;
            RenderSettings.ambientLight = s.AmbLight;
            RenderSettings.ambientIntensity = s.AmbIntensity;
            RenderSettings.sun = s.Sun;
        }

        void ApplyEnv()
        {
            if (Camera)
            {
                Camera.clearFlags = CameraClearFlags.SolidColor;
                Camera.backgroundColor = Color.black;
            }
            // sol, ambiente dos atores e neblina pelo gerenciador (a luz embutida das malhas ja traz a da zona)
            EnvScene.SunAffect = sunAffect;
            EnvScene.ZoneAmbient = zoneAmbient ?? Color.black;
            EnvScene.ZoneFog = zoneFog;
            EnvScene.Update(0);
            RenderSettings.sun = Sun;
            if (Array.IndexOf(Environment.GetCommandLineArgs(), "-l2partlog") >= 0)
                Debug.Log($"[env] neblina {RenderSettings.fogColor} {RenderSettings.fogStartDistance}..{RenderSettings.fogEndDistance} ambiente {RenderSettings.ambientLight} sol {(Sun ? Sun.enabled : false)} luzes {(lights ? lights.childCount : -1)}");
        }

        Newtonsoft.Json.Linq.JObject env;

        /// <summary>
        /// ZoneInfo do Lobby.unr (cache/map/Lobby_env.json, Docs/tools/export_lobby_env.py; P1 do lobby_env_plan): neblina linear
        /// DistanceFogStart..End (UU x 0,01) na cor da zona e o sol so com bSunAffect. Salao = ZoneInfo2 (neblina roxa 0..4000,
        /// sem sol); floresta do login e da criacao = ZoneInfo0. [?] a combinacao com o GL2FogStart/End global nao foi
        /// reconstruida; o ambiente (AmbientVector) ainda nao entra (sem as luzes pontuais escureceria o salao).
        /// </summary>
        public async void SetZone(string name)
        {
            try
            {
                env ??= await Http.GetJson<Newtonsoft.Json.Linq.JObject>("/map/Lobby_env.json");
            }
            catch (Exception e)
            {
                Debug.LogWarning("lobby env: " + e.Message);
            }
            await EnsureLights();
            if (name == null)
            {
                zoneAmbient = null;
                sunAffect = true;
                zoneFog = null;
                if (running) ApplyEnv();
                return;
            }
            if (env?["zones"] is not Newtonsoft.Json.Linq.JArray zones) return;
            foreach (var z in zones)
            {
                if ((string)z["name"] != name) continue;
                sunAffect = (bool?)z["sunAffect"] ?? true;
                // zona de terreno: alcance global e cor da haze; zona fechada com bDistanceFog: DistanceFogColor/Start/End
                var terrainZone = (bool?)z["terrain"] ?? false;
                if (!terrainZone && (bool?)z["fog"] == true && z["fogColor"] is Newtonsoft.Json.Linq.JArray fc)
                    zoneFog = (new Color32((byte)(int)fc[0], (byte)(int)fc[1], (byte)(int)fc[2], 255), (float)z["fogStart"], (float)z["fogEnd"]);
                else zoneFog = null;
                // AmbientVector da zona (salao: 0,2773 cinza); sem ele, o hemisferio de antes
                zoneAmbient = z["ambient"] is Newtonsoft.Json.Linq.JArray av ? new Color((float)av[0], (float)av[1], (float)av[2], 1) : null;
                if (running) ApplyEnv();
                return;
            }
        }

        readonly List<Corona> coronas = new();
        Transform lights;

        /// <summary>
        /// Luzes do Lobby.unr (P4): Point sem sombra com a cor FGetHSV * Brightness/255 e alcance 25 (LightRadius + 1) UU;
        /// Backdrop (6) so tem corona. As malhas ja trazem as luzes estaticas embutidas (Lobby_smlight.json) e os shaders
        /// proprios nao leem luzes adicionais; as pontuais do URP iluminam so os atores, como no original, onde um ator sem
        /// StaticMeshInstance (os pawns da selecao/criacao) recebe as luzes da lista por SetLight (baked_light_re.md 3.5 [O]);
        /// UeLight.SetPoint e o shader L2Web/Actor.
        /// </summary>
        async Task EnsureLights()
        {
            if (lights || env?["lights"] is not Newtonsoft.Json.Linq.JArray list) return;
            lights = Child("luzes do mapa");
            // feixes de luz, vagalumes, nevoa e fumaca (P2/P5); -l2nopart / -l2nolights: diagnostico
            var args = Environment.GetCommandLineArgs();
            if (Array.IndexOf(args, "-l2nopart") < 0)
            {
                particles = new Fx.FxWorld(Root) { Camera = Camera };
                particles.LoadMapEmitters("/map/Lobby_emitters.json").Forget();
            }
            if (Array.IndexOf(args, "-l2nolights") >= 0) return;
            Material coronaMat = null;
            foreach (var l in list)
            {
                var loc = (Newtonsoft.Json.Linq.JArray)l["loc"];
                var pos = Coords.ToUnity((float)loc[0], (float)loc[1], (float)loc[2]);
                var type = (int?)l["type"] ?? 1;
                var color = UeLight.LightColor((int?)l["hue"] ?? 0, (int?)l["sat"] ?? 255, (float?)l["brightness"] ?? 64);
                if (UeLight.Lights(type))
                {
                    var go = new GameObject((string)l["name"]);
                    go.transform.SetParent(lights, false);
                    go.transform.position = pos;
                    var li = go.AddComponent<Light>();
                    li.type = LightType.Point;
                    li.shadows = LightShadows.None;
                    var r = UeLight.WorldRadius((float?)l["radius"] ?? 64) * Coords.Scale;
                    li.range = r;
                    UeLight.SetPoint(li, color, LightIntensity);
                }
                if ((bool?)l["corona"] == true && (string)l["skin"] is { } skin)
                {
                    var tex = await Http.GetTexture(skin);
                    if (!lights) return;
                    coronaMat ??= Corona.MakeMaterial(tex);
                    var go = new GameObject("corona " + (string)l["name"]);
                    go.transform.SetParent(lights, false);
                    go.transform.position = pos;
                    var size = ((float?)l["drawScale"] ?? 1) * (tex ? tex.width : 128) * Coords.Scale * CoronaScale;
                    go.transform.localScale = new Vector3(size, size, size);
                    go.AddComponent<MeshFilter>().sharedMesh = RenderMats.Quad();
                    var mr = go.AddComponent<MeshRenderer>();
                    mr.sharedMaterial = coronaMat;
                    mr.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
                    // Backdrop sem Hue/Sat proprios: branco
                    coronas.Add(new Corona { Tr = go.transform, R = mr, Color = type == 6 && l["hue"] == null ? Color.white : color });
                }
            }
        }

        Color? zoneAmbient;
        Fx.FxWorld particles;
        LobbyMovers movers;
        L2Sky skyZone;


        /// <summary>[I] tamanho da corona = DrawScale x USize x isto (halo das tochas do 1920_03_lobby.png ~0,7 m).</summary>
        public float CoronaScale = 2.5f;

        /// <summary>Ajuste geral das luzes pontuais dos atores (diagnostico; 1 = a cor do mapa).</summary>
        public float LightIntensity = 1f;


        /// <summary>Um quadro (enquanto ativo): camera, animacoes, nomes e clique.</summary>
        public void Tick(float dt)
        {
            if (!running) return;
            dt = Mathf.Min(0.1f, dt);
            UpdateFov();
            Step(dt);
            StepChars(dt);
            MatAnim.Tick(dt);
            Corona.Step(coronas, Camera, dt);
            particles?.Tick(dt);
            movers?.Tick(dt);
            WindSway.Tick(dt);
            skyZone?.Tick(dt, Camera);
            foreach (var c in chars) c.Actor.Update(dt);
            PlaceLabels();
            if (HandleClicks)
            {
                var m = Mouse.current;
                if (m != null && m.leftButton.wasPressedThisFrame && !(PointerOverUi?.Invoke() ?? false))
                    ClickAt(m.position.ReadValue());
            }
        }

        // ------------------------------------------------------------ camera

        static Shot? ShotOf(SceneAction a)
        {
            if (a?.Loc == null || a.Rot == null || a.Loc.Length < 3 || a.Rot.Length < 2) return null;
            var d = CamUtil.RotatorDir(a.Rot[0], a.Rot[1]);
            return new Shot { Pos = Coords.ToUnity(a.Loc[0], a.Loc[1], a.Loc[2]), Dir = Coords.ToUnity(d.X, d.Y, d.Z).normalized };
        }

        /// <summary>
        /// Vai para a cena do Matinee `tag` (warp direto, ou movimento ate o ultimo ponto com a soma das duracoes da cena).
        /// false se a cena nao existe (ou o Load ainda nao terminou).
        /// </summary>
        public bool Play(string tag, bool animate = true)
        {
            if (tag == null || json?.Scenes == null || !json.Scenes.TryGetValue(tag, out var acts) || acts == null || acts.Count == 0) return false;
            var shots = new List<Shot>();
            var total = 0f;
            foreach (var a in acts)
            {
                var s = ShotOf(a);
                if (s.HasValue) shots.Add(s.Value);
                total += a?.Duration ?? 0;
            }
            if (shots.Count == 0) return false;
            var last = shots[shots.Count - 1];
            segments.Clear();
            scenePlaying = false;
            // ActionWarp (ou cena sem duracao): FarMoveActor direto no ponto, pct = 2 -> SceneEnded
            if (!animate || acts.Count == 1 || total <= 0 || acts[0].Type == "ActionWarp" && acts.Count == 1)
            {
                from = null;
                to = last;
                t = 1;
                Apply(last);
                return true;
            }
            // SetSceneStartTime: PctStarting/PctEnding por acao; as amostras do caminho de cada ActionMoveCamera i >= 1
            var c = 0f;
            for (var i = 0; i < acts.Count; i++)
            {
                var a = acts[i];
                var dur = a?.Duration ?? 0;
                if (i == 0 || a?.Loc == null || acts[i - 1]?.Loc == null)
                {
                    c += dur;
                    continue;
                }
                var prev = acts[i - 1];
                var p0 = new Vector3(prev.Loc[0], prev.Loc[1], prev.Loc[2]);
                var p3 = new Vector3(a.Loc[0], a.Loc[1], a.Loc[2]);
                segments.Add(new Segment
                {
                    Samples = PathSamples(p0, p3, a.PathStyle, prev.StartControlPoint, a.EndControlPoint),
                    RotFrom = prev.Rot, RotTo = a.Rot, PctStart = c / total, PctDur = dur / total, PctEnd = (c + dur) / total,
                });
                c += dur;
            }
            if (segments.Count == 0)
            {
                Apply(last);
                return true;
            }
            // a cena comeca no primeiro ponto (Actions[0]), nao onde a camera estava
            Apply(shots[0]);
            to = last;
            from = null;
            sceneTime = 0;
            sceneTotal = total;
            scenePlaying = true;
            return true;
        }

        /// <summary>
        /// USceneManager::Tick: CurrentTime += dt, pct = CurrentTime / T; pct <= 1 -> UpdateViewerFromPct (a acao e a primeira
        /// com pct <= PctEnding; u = clamp((pct - PctStarting) / PctDuration, 0,0001, 1), linear no tempo); senao SceneEnded sem
        /// atualizar (a camera fica na ultima amostra com pct <= 1).
        /// </summary>
        void Step(float dt)
        {
            if (!scenePlaying) return;
            sceneTime += dt;
            var pct = sceneTime / Mathf.Max(0.0001f, sceneTotal);
            if (pct > 1)
            {
                scenePlaying = false;
                return;
            }
            pct = Mathf.Max(pct, 0.0001f);
            Segment seg = null;
            foreach (var sg in segments)
                if (pct <= sg.PctEnd)
                {
                    seg = sg;
                    break;
                }
            if (seg == null) return;
            var u = Mathf.Clamp((pct - seg.PctStart) / (seg.PctDur > 0 ? seg.PctDur : 1), 0.0001f, 1);
            var loc = SampleAt(seg.Samples, u);
            var pitch = RotLerp(seg.RotFrom[0], seg.RotTo[0], u);
            var yaw = RotLerp(seg.RotFrom[1], seg.RotTo[1], u);
            var d = CamUtil.RotatorDir(pitch, yaw);
            Apply(new Shot { Pos = Coords.ToUnity(loc.x, loc.y, loc.z), Dir = Coords.ToUnity(d.X, d.Y, d.Z).normalized });
        }

        void Apply(Shot s)
        {
            var ct = Camera.transform;
            ct.position = s.Pos;
            // Object3D.lookAt do three: "up" = +Y do mundo
            ct.rotation = Quaternion.LookRotation(s.Dir, Vector3.up);
        }

        /// <summary>Gira o modelo `index` (ordem do ShowChars) no proprio eixo; radianos no sentido do rotation.y do three.</summary>
        public void Rotate(int index, float radians)
        {
            // o StepChars poe o yaw do personagem a cada quadro: gira o yaw (UU) e o alvo junto, para nao voltar
            var du = Mathf.RoundToInt(-radians * 32768f / Mathf.PI);
            foreach (var c in chars)
                if (c.Index == index && c.Actor.Root)
                    c.Yaw = c.DesiredYaw = c.FinalYaw = (c.Yaw + du) & 0xFFFF;
        }

        // ------------------------------------------------------------ personagens

        void ClearChars()
        {
            foreach (var c in chars)
            {
                c.Actor.Dispose();
                if (c.Label) RenderMats.Destroy(c.Label.gameObject);
            }
            chars.Clear();
        }

        /// <summary>Personagens nos lugares do logongrp (selecao: 0..6 em arco, 7 = centro; criacao: os da raca).</summary>
        public async Task ShowChars(IList<LobbyChar> list)
        {
            var tk = ++token;
            ClearChars();
            selectedChar = -1;
            if (list == null || list.Count == 0) return;
            var spots = GameData.LogonSpots();
            var jobs = new List<Task>();
            for (var i = 0; i < list.Count; i++) jobs.Add(ShowOne(list[i], i, spots, tk));
            await Task.WhenAll(jobs);
        }

        async Task ShowOne(LobbyChar c, int index, float[][] spots, int tk)
        {
            if (c?.Appearance == null || c.Spot < 0 || c.Spot >= spots.Length) return;
            var spot = spots[c.Spot];
            if (spot == null || spot.Length < 4) return;
            var a = c.Appearance;
            Actor actor = null;
            try
            {
                var model = GameData.PlayerModel(a.Race, a.Sex, a.ClassId);
                actor = new Actor();
                if (!await actor.Load("player", model) || tk != token || !Root)
                {
                    actor.Dispose();
                    return;
                }
                await actor.SetEquipment(GameData.EquipKeys(model, a));
                if (tk != token || !Root)
                {
                    actor.Dispose();
                    return;
                }
                actor.Root.SetParent(Chars, false);
                actor.Root.position = Coords.ToUnity(spot[0], spot[1], spot[2]);
                var h = (((int)spot[3] % 65536) + 65536) % 65536;
                actor.Yaw.localRotation = Quaternion.Euler(0, Coords.HeadingToUnityDeg(h), 0);
                var pd = a.Paperdoll ?? new Paperdoll();
                var widx = GameData.WeaponIndex(pd.Rhand != 0 ? pd.Rhand : pd.Lrhand);
                // InsertSelectCharacterInfo: em pe com WaitAnimName; quem esta sendo apagado senta (SitWaitAnimName)
                var sitting = c.Sitting;
                var anim = GameData.PlayerAnim(model, sitting ? "sitwait" : "wait", widx);
                if (!actor.HasClip(anim) && sitting) anim = actor.FindClip("sit");
                actor.Play(actor.HasClip(anim) ? anim : actor.FindClip("wait"));
                actor.Update(0);
                chars.Add(new CharView
                {
                    Actor = actor, Label = MakeLabel(c.Name, c.Selected), Name = c.Name ?? "", Selected = c.Selected, Index = index, Home = c.Spot,
                    Pos = new Vector3(spot[0], spot[1], spot[2]), Yaw = h, DesiredYaw = h, FinalYaw = h, Model = model, Widx = widx, Sitting = sitting,
                    Radius = Mathf.Min(CollisionRadius.TryGetValue(model, out var cr) ? cr : 9, 30),
                });
                // escolhido antes de o modelo carregar (o App chama Select logo depois do ShowChars): anda agora
                if (index == selectedChar && !sitting && spots.Length > 7 && spots[7] is { } cs) Walk(chars[^1], cs);
            }
            catch (Exception e)
            {
                Debug.LogWarning($"lobby: personagem {c.Name}: {e.Message}");
                actor?.Dispose();
            }
        }

        RectTransform LabelsRoot()
        {
            if (labels) return labels;
            RectTransform parent;
            try
            {
                parent = labelsParent ? labelsParent : UiRoot.Rect;
            }
            catch (Exception)
            {
                return null;
            }
            if (!parent) return null;
            var go = new GameObject("lobby: nomes", typeof(RectTransform));
            labels = (RectTransform)go.transform;
            labels.SetParent(parent, false);
            UiRoot.Fill(labels);
            labels.SetAsFirstSibling(); // atras das telas, como o .lobbylabels dentro do #lobbyView
            go.SetActive(running);
            return labels;
        }

        Text MakeLabel(string name, bool selected)
        {
            if (string.IsNullOrEmpty(name)) return null;
            var root = LabelsRoot();
            if (!root) return null;
            var go = new GameObject("nome", typeof(RectTransform));
            var rt = (RectTransform)go.transform;
            rt.SetParent(root, false);
            rt.anchorMin = rt.anchorMax = Vector2.zero;
            rt.pivot = new Vector2(0.5f, 0); // translate(-50%, -100%)
            rt.sizeDelta = new Vector2(240, 16);
            var tx = go.AddComponent<Text>();
            tx.font = UiRoot.Font;
            tx.fontSize = 12;
            tx.color = selected ? NameSelColor : NameColor;
            tx.alignment = TextAnchor.LowerCenter;
            tx.horizontalOverflow = HorizontalWrapMode.Overflow;
            tx.verticalOverflow = VerticalWrapMode.Overflow;
            tx.supportRichText = false;
            tx.raycastTarget = false;
            tx.text = name;
            var sh = go.AddComponent<Shadow>(); // text-shadow: 1px 1px 0 #000
            sh.effectColor = Color.black;
            sh.effectDistance = new Vector2(1, -1);
            go.SetActive(false);
            return tx;
        }

        void PlaceLabels()
        {
            if (!labels) return;
            var canvas = labels.GetComponentInParent<Canvas>();
            var scale = canvas ? canvas.scaleFactor : 1;
            if (scale <= 0) scale = 1;
            foreach (var c in chars)
            {
                if (!c.Label) continue;
                var root = c.Actor.Root;
                var h = c.Actor.Height > 0 ? c.Actor.Height : 0.5f;
                var sp = Camera.WorldToScreenPoint(root.position + new Vector3(0, h + 0.12f, 0));
                var on = sp.z > Camera.nearClipPlane && sp.z < Camera.farClipPlane;
                if (c.Label.gameObject.activeSelf != on) c.Label.gameObject.SetActive(on);
                if (on) ((RectTransform)c.Label.transform).anchoredPosition = new Vector2(sp.x, sp.y) / scale;
            }
        }

        /// <summary>
        /// Personagem sob a posicao de tela (coordenadas do Unity, origem embaixo a esquerda, como Mouse.current.position):
        /// indice do ShowChars ou -1. Como o TS: 3 pontos ao longo da altura, ate 60 px.
        /// </summary>
        CharView ViewOf(int index) => chars.Find(c => c.Index == index);

        /// <summary>
        /// UL2ConsoleWnd::SelectedCharacterNum (engine 0x10440f00): o anterior volta ao slot dele e o novo vai ao centro
        /// (slot_center do logongrp), os dois ao mesmo tempo (MoveTo com Speed 1); na chegada giram para o yaw do destino.
        /// A camera nao se mexe. Um personagem sendo apagado nao sai do lugar.
        /// </summary>
        public void Select(int index)
        {
            if (index == selectedChar) return;
            var spots = GameData.LogonSpots();
            if (spots == null || spots.Length < 8) return;
            var prev = ViewOf(selectedChar);
            if (prev != null && spots[prev.Home] is { } hs) Walk(prev, hs);
            selectedChar = index;
            var n = ViewOf(index);
            if (n != null && !n.Sitting && spots[7] is { } cs) Walk(n, cs);
            foreach (var c in chars)
            {
                c.Selected = c.Index == index;
                if (c.Label) c.Label.color = c.Selected ? new Color32(0xff, 0xff, 0xff, 0xff) : new Color32(0xdc, 0xdc, 0xdc, 0xff);
            }
        }

        /// <summary>
        /// AController::MoveTo (0x105661f0) sem ViewFocus: FocalPoint = 2 Dest - Location, entao o yaw desejado e a direcao da
        /// viagem durante a perna toda; na chegada execPollMoveTo poe o yaw do slot (L2DesiredRotator).
        /// </summary>
        void Walk(CharView c, float[] spot)
        {
            c.Target = new Vector3(spot[0], spot[1], spot[2]);
            c.FinalYaw = (int)spot[3] & 0xFFFF;
            float dx = c.Target.x - c.Pos.x, dy = c.Target.y - c.Pos.y;
            c.Moving = Mathf.Sqrt(dx * dx + dy * dy) > c.Radius;
            c.DesiredYaw = c.Moving ? YawOf(dx, dy) : c.FinalYaw;
            c.Special = false;
        }

        void PlayLoop(CharView c, string kind, float tween)
        {
            var anim = GameData.PlayerAnim(c.Model, kind, c.Widx);
            c.Actor.Play(c.Actor.HasClip(anim) ? anim : c.Actor.FindClip(kind), 1, true, tween);
        }

        /// <summary>
        /// Clique no personagem ja escolhido (FUN_10173db0): PcSocialAnimName[3] = Social_Victory_&lt;classe&gt; uma vez (tween 0,3) e
        /// depois a espera; andando, a caminhada vence.
        /// </summary>
        public void PlayPickedAnim(int index)
        {
            var c = ViewOf(index);
            if (c == null || c.Moving || c.Sitting) return;
            var clip = "Social_Victory_" + c.Model;
            if (!c.Actor.HasClip(clip)) return;
            // Actor.Play nao reinicia o clipe atual: passa pela espera para recomecar
            if (string.Equals(c.Actor.ClipName, clip, StringComparison.OrdinalIgnoreCase)) PlayLoop(c, "wait", 0);
            c.Actor.Play(clip, 1, false, 0.3f);
            c.Special = true;
        }

        /// <summary>Movimento e giro dos personagens do lobby a cada quadro.</summary>
        void StepChars(float dt)
        {
            foreach (var c in chars)
            {
                if (c.Moving)
                {
                    // ReachedDestination: distancia 2D <= raio de colisao -> para ali mesmo (sem encaixar no ponto)
                    var d = new Vector2(c.Target.x - c.Pos.x, c.Target.y - c.Pos.y);
                    if (d.magnitude <= c.Radius)
                    {
                        c.Moving = false;
                        c.DesiredYaw = c.FinalYaw;
                    }
                    else
                    {
                        var mv = d.normalized * Mathf.Min(WalkSpeed * dt, d.magnitude);
                        c.Pos.x += mv.x;
                        c.Pos.y += mv.y;
                    }
                }
                // physicsRotation: o yaw anda junto com a translacao, passo inteiro
                var before = c.Yaw;
                c.Yaw = TurnToward(c.Yaw, c.DesiredYaw, (int)(TurnRate * dt));
                var turned = Mathf.Abs(((c.Yaw - before + 32768) & 0xFFFF) - 32768);
                // UpdateMovementAnimation (0x10624cc0): girando mais de 1000 UU/s toca o TurnAnimName, que e o proprio walk
                var turning = turned > dt * 1000;
                if (c.Moving || turning)
                {
                    if (!c.Walking)
                    {
                        PlayLoop(c, "walk", 0.1f);
                        c.Walking = true;
                    }
                }
                else if (c.Walking)
                {
                    c.Walking = false;
                    PlayLoop(c, "wait", 0.2f);
                }
                else if (c.Special && !c.Actor.ClipName.Equals("", StringComparison.Ordinal) && c.Actor.ClipTime >= c.Actor.ClipDuration(c.Actor.ClipName))
                {
                    c.Special = false;
                    PlayLoop(c, "wait", 0.2f);
                }
                c.Actor.Root.position = Coords.ToUnity(c.Pos.x, c.Pos.y, c.Pos.z);
                c.Actor.Yaw.localRotation = Quaternion.Euler(0, Coords.HeadingToUnityDeg(c.Yaw), 0);
            }
        }

        public int Pick(Vector2 screen)
        {
            var best = -1;
            var bestD = float.MaxValue;
            foreach (var c in chars)
            {
                if (!c.Actor.Root) continue;
                var h = c.Actor.Height > 0 ? c.Actor.Height : 0.5f;
                var rp = c.Actor.Root.position;
                foreach (var f in new[] { 0.25f, 0.55f, 0.85f })
                {
                    var sp = Camera.WorldToScreenPoint(rp + new Vector3(0, h * f, 0));
                    if (sp.z < Camera.nearClipPlane || sp.z > Camera.farClipPlane) continue;
                    var d = Vector2.Distance(new Vector2(sp.x, sp.y), screen);
                    if (d < 60 && d < bestD)
                    {
                        bestD = d;
                        best = c.Index;
                    }
                }
            }
            return best;
        }

        /// <summary>Clique na tela: escolhe o personagem (Pick) e chama OnPick. true se acertou algum.</summary>
        public bool ClickAt(Vector2 screen)
        {
            var i = Pick(screen);
            if (i < 0) return false;
            OnPick?.Invoke(i);
            return true;
        }

        /// <summary>Atores mostrados (diagnostico/testes), na ordem em que terminaram de carregar.</summary>
        public IEnumerable<(int Index, string Name, Actor Actor)> Shown
        {
            get
            {
                foreach (var c in chars) yield return (c.Index, c.Name, c.Actor);
            }
        }

        /// <summary>Destroi tudo o que a cena criou (a camera so se foi criada aqui).</summary>
        public void Dispose()
        {
            Stop();
            token++;
            ClearChars();
            if (labels) RenderMats.Destroy(labels.gameObject);
            if (!ownCamera && Camera && Camera.transform.IsChildOf(Root)) Camera.transform.SetParent(null, true);
            if (Root) RenderMats.Destroy(Root.gameObject);
        }
    }
}
