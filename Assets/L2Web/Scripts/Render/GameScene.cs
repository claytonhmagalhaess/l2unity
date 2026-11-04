// Cena do jogo (render/scene.ts): camera em 3a pessoa seguindo o personagem, luzes e ceu (DayNight), raizes do
// terreno do geodata (Ground), dos StaticMeshes/BSP (Statics) e do terreno do Unreal (UeTerrain), efeitos, marcador
// de destino, grade provisoria e picking. Classe comum (nao MonoBehaviour): o App chama Tick(dt) no Update.
// Picking: entidades pela projecao na tela (como o TS: 3 pontos ao longo da altura do ator) e o chao por raycast de
// fisica contra os MeshColliders que GeoTerrain/UeTerrain/Statics criam (nao precisa de collider nas entidades).
using System;
using System.Threading.Tasks;
using L2Web.World;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;
using GameWorld = L2Web.World.World;

namespace L2Web.Render
{
    public class PickResult
    {
        /// <summary>"ground" ou "entity".</summary>
        public string Kind;
        public int? ObjectId;
        public float X;
        public float Y;
        public float Z;
        /// <summary>Altura do ponto visivel clicado (piso BSP/cenario/terreno), para o marcador; Z e a do geodata.</summary>
        public float? Vz;
    }

    public class GameScene
    {
        const float S = Coords.Scale;

        /// <summary>Raiz de tudo o que a cena cria (luzes, chao, cenario, efeitos, marcador; o World.Group entra aqui).</summary>
        public readonly Transform Root;
        public readonly Camera Camera;
        /// <summary>Camera do cliente L2 (CalcBehindView): yaw/pitch/zoom, presets e auto-tracking.</summary>
        public readonly L2Camera Cam = new L2Camera();
        public readonly GameWorld World;
        /// <summary>Pedacos do geodata (clique e colisao da camera; visiveis onde nao ha terreno UE/BSP).</summary>
        public readonly Transform Ground;
        /// <summary>StaticMeshes e BSP do mapa (tambem entram no clique, no piso visivel e na colisao da camera).</summary>
        public readonly Transform Statics;
        /// <summary>Terreno do Unreal (visual + clique); o geodata em Ground continua para clique e colisao da camera.</summary>
        public readonly Transform UeTerrain;
        public readonly Effects Effects = new Effects();
        /// <summary>Efeitos de skill e particulas do UE2 (spec 09): simulador, gatilhos e tabela legada.</summary>
        public readonly L2Web.Render.Fx.FxWorld Fx;
        public readonly L2Web.Render.Fx.SkillFx SkillFx;
        public readonly L2Web.Render.Fx.FxCastRunner Casts;
        /// <summary>Brilho de encantamento, halo de raid, efeito de golpe e flecha.</summary>
        public readonly L2Web.Render.Fx.FxPawnEffects PawnFx;
        /// <summary>Ambiente (UL2NEnvManager): relogio, sol, ambiente, neblina, ceu.</summary>
        public readonly Env.L2EnvScene Env;
        readonly List<MapEnv> mapEnvs = new();
        /// <summary>Level.TimeSeconds (modulacao das luzes).</summary>
        float timeSeconds;
        public readonly Light Sun;
        /// <summary>Chamado a cada Tick depois da atualizacao do mundo e da camera.</summary>
        public Action<float> OnFrame = _ => { };
        /// <summary>Camera fixa para inspecao (testes/capturas): enquanto definida, ignora o acompanhamento do personagem.</summary>
        public (Vector3 Pos, Vector3 Look)? DebugCamera;
        public float Fps;
        /// <summary>Fracao da resolucao (opcoes); so aplicada no player (no Editor mudaria o asset do URP).</summary>
        public float Resolution = 1;

        readonly bool ownCamera;
        readonly GameObject grid;
        readonly GameObject marker;
        readonly Material markerMat;
        float markerT;
        bool hasSelf;
        bool selfHidden;
        Vector3 fallbackPos;
        float fpsAcc;
        int fpsN;
        readonly RaycastHit[] traceHits = new RaycastHit[64];

        /// <param name="parent">Onde a raiz da cena fica (null = raiz da cena do Unity).</param>
        /// <param name="world">Entidades (o World.Group e colocado sob a raiz).</param>
        /// <param name="camera">Camera a usar (ex.: a Main Camera da cena); null cria uma.</param>
        public GameScene(Transform parent, GameWorld world, Camera camera = null)
        {
            World = world;
            Root = new GameObject("GameScene").transform;
            if (parent) Root.SetParent(parent, false);
            if (!camera)
            {
                var cgo = new GameObject("L2 Camera");
                cgo.transform.SetParent(Root, false);
                camera = cgo.AddComponent<Camera>();
                cgo.AddComponent<UniversalAdditionalCameraData>();
                cgo.tag = "MainCamera";
                ownCamera = true;
            }
            Camera = camera;
            // a cena do radar do HUD (RadarView) fica numa camada propria, so da camera do radar
            Camera.cullingMask &= ~(1 << L2Web.UI.RadarView.Layer);
            Camera.nearClipPlane = 0.05f;
            Camera.farClipPlane = 400;
            Camera.clearFlags = CameraClearFlags.SolidColor;
            // NMovableSunLight do mapa: a luz direcional orientada e colorida pelo gerenciador de ambiente
            var sgo = new GameObject("NMovableSunLight");
            sgo.transform.SetParent(Root, false);
            Sun = sgo.AddComponent<Light>();
            RenderSettings.sun = Sun;
            Env = new Env.L2EnvScene(Sun, Camera);
            // sombras do terreno a cada ShadowTick (0,1 h de jogo) e no ClientSetTime
            Env.OnShadowUpdate = e =>
            {
                L2Web.Render.UeTerrain.SetHour(e);
                BakedLight.SetHour(e);
            };
            // SkyZoneInfo do mapa: cores do TimeEnv da hora (FUN_10657850), sol, lua e flares
            Env.Sky = new L2Sky(Root) { Slope = Env.Env.Data.SlopeSunAngle };
            Env.Sky.Load("/map/Lobby_sky.json", false).Forget();
            Env.ViewTargetUe = () => World?.Self != null ? new Vector3(World.Self.X, World.Self.Y, World.Self.Z) : Coords.FromUnityF(Camera.transform.position);
            Env.ApplyDevArgs();
            Env.Update(0);
            // luzes variaveis, coronas, portas, emissores e malhas moveis de cada tile carregado
            L2Web.Render.Statics.OnTileLoaded = (tile, group) =>
            {
                if (!Root) return;
                var me = new MapEnv(tile, Root);
                mapEnvs.Add(me);
                me.Load(Statics).Forget();
            };

            grid = MakeGrid();
            grid.transform.SetParent(Root, false);
            Ground = Child("geodata");
            Statics = Child("cenario");
            UeTerrain = Child("terreno UE");
            Effects.Group.SetParent(Root, false);
            Fx = new L2Web.Render.Fx.FxWorld(Root, true) { Camera = Camera };
            SkillFx = new L2Web.Render.Fx.SkillFx(Fx);
            Casts = new L2Web.Render.Fx.FxCastRunner(SkillFx) { Legacy = new L2Web.Render.Fx.LegacyFx(SkillFx) };
            PawnFx = new L2Web.Render.Fx.FxPawnEffects(Fx, SkillFx, Casts);
            SkillFx.Prefetch = id => Casts.Legacy.Prefetch(id);
            LoadFx().Forget();
            if (world != null)
            {
                var g = world.Group;
                if (g) g.transform.SetParent(Root, false);
            }
            markerMat = RenderMats.Fx(RenderMats.Hex(0x7cff9a, 0.9f), transparent: true, fog: true);
            marker = RenderMats.MeshObject("marcador", Ring(0.08f, 0.12f, 32), markerMat, Root);
            marker.SetActive(false);
            Camera.transform.position = Coords.ThreeToUnity(new Vector3(-4, 2.5f, 0));
            UpdateFov();
        }

        Transform Child(string name)
        {
            var t = new GameObject(name).transform;
            t.SetParent(Root, false);
            return t;
        }

        /// <summary>Opcoes de qualidade: fracao da resolucao nativa e distancia de visao (unidades L2; neblina e plano distante).</summary>
        public void SetQuality(float resolution, float viewDistance)
        {
            Resolution = resolution;
            if (!Application.isEditor && GraphicsSettings.currentRenderPipeline is UniversalRenderPipelineAsset u)
                u.renderScale = Mathf.Clamp(resolution, 0.1f, 2f);
            var far = viewDistance * S;
            // a neblina vem do gerenciador de ambiente (nivel do alcance de terreno); aqui so o plano distante
            Camera.farClipPlane = far + 30;
        }

        void UpdateFov()
        {
            var aspect = Camera.aspect > 0 ? Camera.aspect : 4f / 3f;
            Camera.fieldOfView = CamUtil.VerticalFov(CamUtil.Cfg.FovDeg, aspect);
        }

        /// <summary>Um quadro: mundo, efeitos, dia/noite, camera seguindo o personagem, marcador e OnFrame.</summary>
        public void Tick(float dt)
        {
            MatAnim.Tick(dt);
            WindSway.Tick(dt);
            dt = Mathf.Min(0.25f, dt);
            fpsAcc += dt;
            fpsN++;
            if (fpsAcc >= 0.5f)
            {
                Fps = fpsN / fpsAcc;
                fpsAcc = 0;
                fpsN = 0;
            }
            UpdateFov();
            World?.Update(dt, Camera);
            Effects.Update(dt);
            Casts.Tick(dt);
            PawnFx.Tick(dt, World);
            Fx.Tick(dt);
            Env.Update(dt);
            Env.Sky?.Tick(dt, Camera);
            timeSeconds += dt;
            mapEnvs.RemoveAll(m => !m.Root);
            foreach (var m in mapEnvs) m.Tick(dt, Camera, timeSeconds);
            FollowSelf();
            World?.UpdateLabels(Camera); // nomes virados para a camera ja na posicao deste quadro
            if (marker.activeSelf)
            {
                markerT += dt;
                marker.transform.localScale = Vector3.one * (1 + 0.25f * Mathf.Sin(markerT * 8));
            }
            OnFrame?.Invoke(dt);
            if (DebugCamera.HasValue)
            {
                Camera.transform.position = DebugCamera.Value.Pos;
                Camera.transform.LookAt(DebugCamera.Value.Look);
            }
        }

        /// <summary>Camera e chao provisorio acompanham o personagem.</summary>
        void FollowSelf()
        {
            var self = World?.Self;
            if (self == null || self.Actor == null || !self.Actor.Root) return;
            var p = self.Actor.Root.transform.position;
            if (!hasSelf)
            {
                hasSelf = true;
                Cam.ApplyPreset(0, self.Heading);
            }
            if (!DebugCamera.HasValue)
            {
                // Location do pawn = centro do cilindro de colisao
                var l2 = Coords.FromUnityF(p);
                var center = new V3(l2.x, l2.y, l2.z + self.CollisionHeight);
                var v = Cam.Update(center, TraceCamera);
                Camera.transform.position = Coords.ToUnity(v.Pos.X, v.Pos.Y, v.Pos.Z);
                Camera.transform.LookAt(Coords.ToUnity(v.Target.X, v.Target.Y, v.Target.Z));
            }
            if (Cam.HidePlayer != selfHidden || selfHidden)
            {
                // o three escondia o root (visible = false) sem parar a animacao; aqui so os renderers
                selfHidden = Cam.HidePlayer;
                foreach (var r in self.Actor.Root.GetComponentsInChildren<Renderer>(true)) r.enabled = !selfHidden;
            }
            fallbackPos = p;
            grid.transform.position = new Vector3(Mathf.Round(p.x * 2) / 2, p.y + 0.002f, Mathf.Round(p.z * 2) / 2);
            var showGrid = Ground.childCount == 0;
            if (grid.activeSelf != showGrid) grid.SetActive(showGrid);
            // o destino so existe depois do MoveToLocation do servidor: o marcador espera a resposta antes de sumir
            if (marker.activeSelf && self.Dest == null && markerT > 0.6f) marker.SetActive(false);
        }

        bool IsSceneSurface(Collider c, bool withGround)
        {
            if (!c) return false;
            var t = c.transform;
            return (withGround && t.IsChildOf(Ground)) || t.IsChildOf(Statics) || t.IsChildOf(UeTerrain);
        }

        /// <summary>Trace da camera (bUseHitCheckCamera): distancia L2 ate o primeiro chao/StaticMesh no segmento, ou null.</summary>
        float? TraceCamera(V3 from, V3 dir, float len)
        {
            if (Ground.childCount == 0 && Statics.childCount == 0 && UeTerrain.childCount == 0) return null;
            var o = Coords.ToUnity(from.X, from.Y, from.Z);
            var d = Coords.ToUnity(dir.X, dir.Y, dir.Z).normalized;
            var n = Physics.RaycastNonAlloc(new Ray(o, d), traceHits, len * S, Physics.AllLayers, QueryTriggerInteraction.Ignore);
            var best = float.MaxValue;
            for (var i = 0; i < n; i++)
            {
                var h = traceHits[i];
                if (h.distance < best && IsSceneSurface(h.collider, true)) best = h.distance;
            }
            return best < float.MaxValue ? best / S : null;
        }

        /// <summary>Game.ArrowMode (GIsArrowMode): a seta 3D no destino do clique.</summary>
        public bool ArrowMode = true;

        /// <summary>Marcador de destino no ponto L2 (x, y, z).</summary>
        public void ShowMarker(float x, float y, float z)
        {
            if (!ArrowMode) return;
            marker.transform.position = Coords.ToUnity(x, y, z) + new Vector3(0, 0.01f, 0);
            marker.SetActive(true);
            markerT = 0;
        }

        /// <summary>
        /// Clique na tela (coordenadas de tela do Unity, origem embaixo a esquerda, como Mouse.current.position):
        /// primeiro entidades (pela projecao na tela), depois o chao.
        /// </summary>
        public PickResult Pick(float screenX, float screenY)
        {
            var w = World;
            if (w != null)
            {
                int? best = null;
                var bestD = float.MaxValue;
                var camPos = Camera.transform.position;
                foreach (var e in w.Entities.Values)
                {
                    if (e == null || e.Kind == "self" || e.Actor == null || !e.Actor.Root) continue;
                    var root = e.Actor.Root.transform;
                    if (!root.gameObject.activeInHierarchy) continue;
                    var h = e.Actor.Height > 0 ? e.Actor.Height : 0.5f;
                    var rp = root.position;
                    var dist = Vector3.Distance(camPos, rp);
                    // pixels CSS no navegador: em tela com escala do Windows o raio cresce junto (dpi / 96)
                    var radius = Mathf.Max(14, 60 / Mathf.Max(1, dist)) * UI.UiRoot.DpiScale;
                    foreach (var f in new[] { 0.3f, 0.6f, 0.9f })
                    {
                        var sp = Camera.WorldToScreenPoint(rp + new Vector3(0, h * f, 0));
                        if (sp.z < Camera.nearClipPlane || sp.z > Camera.farClipPlane) continue;
                        var dx = sp.x - screenX;
                        var dy = sp.y - screenY;
                        var d = Mathf.Sqrt(dx * dx + dy * dy);
                        if (d < radius && d < bestD)
                        {
                            bestD = d;
                            best = e.ObjectId;
                        }
                    }
                }
                if (best.HasValue)
                {
                    var e = w.Get(best.Value);
                    return new PickResult { Kind = "entity", ObjectId = best.Value, X = e.X, Y = e.Y, Z = e.Z };
                }
            }
            var ray = Camera.ScreenPointToRay(new Vector3(screenX, screenY, 0));
            var useGround = Ground.childCount > 0;
            var hits = Physics.RaycastAll(ray, 100000, Physics.AllLayers, QueryTriggerInteraction.Ignore);
            Array.Sort(hits, (a, b) => a.distance.CompareTo(b.distance));
            // primeira superficie VISIVEL: o geodata coincidente com o terreno UE/BSP fica num collider "oculto"
            // e ~30 unidades acima do piso BSP; acerta-lo desloca o ponto ao longo do raio da camera
            Vector3? point = null;
            Vector3? first = null;
            var firstDist = float.MaxValue;
            foreach (var hh in hits)
            {
                if (!IsSceneSurface(hh.collider, useGround)) continue;
                if (!first.HasValue)
                {
                    first = hh.point;
                    firstDist = hh.distance;
                }
                if (!GeoTerrain.IsHiddenCollider(hh.collider))
                {
                    point = hh.point;
                    break;
                }
            }
            point ??= first;
            if (!useGround)
            {
                // plano provisorio (400 x 400) na altura do personagem enquanto nao ha geodata
                var plane = new Plane(Vector3.up, fallbackPos);
                if (plane.Raycast(ray, out var enter) && enter < firstDist && Mathf.Abs(ray.GetPoint(enter).x - fallbackPos.x) <= 200 &&
                    Mathf.Abs(ray.GetPoint(enter).z - fallbackPos.z) <= 200)
                    point = ray.GetPoint(enter);
            }
            if (!point.HasValue) return null;
            var p = Coords.FromUnityF(point.Value);
            float? geo = w != null ? w.Ground(p.x, p.y, p.z + 24) : null; // camada do geodata logo acima do piso visivel
            // parede/coluna: a celula do geodata pode ser so o topo (centenas de unidades acima); fica o ponto clicado
            var z = geo.HasValue && Mathf.Abs(geo.Value - p.z) <= 64 ? geo.Value : p.z;
            return new PickResult { Kind = "ground", X = p.x, Y = p.y, Z = z, Vz = p.z };
        }

        /// <summary>Carrega a biblioteca de efeitos, o mapa de skills, a tabela legada e as tabelas (armas, npcs, sons).</summary>
        async Task LoadFx()
        {
            try
            {
                await Fx.Ready();
                SkillFx.Map = L2Web.Render.Fx.SkillFxMap.Parse(await Http.GetJson<Newtonsoft.Json.Linq.JObject>("/fx/skill_fx_map.json"));
                SkillFx.Tables = await L2Web.Render.Fx.FxAssets.Tables();
                PawnFx.Tables = SkillFx.Tables;
                var legacy = await Http.GetJson<Newtonsoft.Json.Linq.JObject>("/fx/legacy_skill_fx.json");
                Casts.Legacy.Table = legacy;
                Casts.Legacy.Soulshot = SkillFx.Tables?["soulshot"] as Newtonsoft.Json.Linq.JObject ?? new Newtonsoft.Json.Linq.JObject();
                FxReady = true;
            }
            catch (Exception e)
            {
                Debug.LogWarning("fx: " + e.Message);
            }
        }

        public bool FxReady;

        /// <summary>Liga os efeitos ao som (PlaySkillSound), as vozes por classe, ao comprimento da arma e ao DamageEffect do Npcgrp.</summary>
        public void WireFx(SfxPlayer sfx)
        {
            SkillFx.PlaySound = (name, pos, vol, radius) =>
            {
                if (sfx == null || string.IsNullOrEmpty(name)) return;
                sfx.Play(name.Substring(name.LastIndexOf('.') + 1), Coords.ToUnity(pos.x, pos.y, pos.z), vol);
            };
            SkillFx.VoiceOf = a => a is L2Web.Render.Fx.FxPawn p && p.E.Kind != "npc" ? L2Web.Render.Fx.SkillFx.VoiceIndex(p.E.Model) : -1;
            SkillFx.WeaponLength = (a, right) => a is L2Web.Render.Fx.FxPawn p ? p.E.Actor.AttachedLength(right ? "rhand" : "lhand") : 0;
            Casts.Legacy.WeaponLength = SkillFx.WeaponLength;
            // CurWeaponType (pawn+0x71d = GetAnimType) [I: mesmo indice do .int que o porte usa nas animacoes]
            Casts.Legacy.WeaponType = a => a is L2Web.Render.Fx.FxPawn p ? p.E.Widx : 0;
            Casts.Legacy.DamageEffect = a => a is L2Web.Render.Fx.FxPawn p ? DamageEffectOf(p.E) : null;
            Fx.Sound = (name, pos, vol, radius, pitch) => SkillFx.PlaySound(name, pos, vol, radius);
        }

        /// <summary>Classe do efeito de golpe do pawn: Npcgrp.effect (NPC), chargrp.attack_eff/armorgrp.att_eff (jogador) [I: p_u002_a].</summary>
        public string DamageEffectOf(Entity e)
        {
            var t = SkillFx.Tables;
            if (e.Kind == "npc")
            {
                var n = t?["npcs"]?[e.NpcId.ToString()];
                var eff = (string)n?["effect"];
                return string.IsNullOrEmpty(eff) ? "LineageEffect.p_u002_a" : eff;
            }
            return "LineageEffect.p_u002_a";
        }

        /// <summary>Destroi tudo o que a cena criou (a camera so se foi criada aqui).</summary>
        public void Dispose()
        {
            Effects.Clear();
            Casts.Clear();
            Fx.Dispose();
            // as entidades sao do World (o App as limpa); so a raiz sai daqui antes de destruir a cena
            if (World != null && World.Group && World.Group.IsChildOf(Root)) World.Group.SetParent(null, false);
            if (ownCamera || !Camera) RenderMats.Destroy(Root ? Root.gameObject : null);
            else
            {
                Camera.transform.SetParent(null, true);
                RenderMats.Destroy(Root.gameObject);
            }
            RenderMats.Destroy(markerMat);
        }

        // ------------------------------------------------------------ geometria auxiliar

        /// <summary>RingGeometry(inner, outer, n) deitado no plano XZ.</summary>
        static Mesh Ring(float inner, float outer, int n)
        {
            var v = new Vector3[(n + 1) * 2];
            var c = new Color[v.Length];
            var t = new int[n * 6];
            for (var i = 0; i <= n; i++)
            {
                var a = i * Mathf.PI * 2 / n;
                v[i * 2] = new Vector3(Mathf.Cos(a) * inner, 0, Mathf.Sin(a) * inner);
                v[i * 2 + 1] = new Vector3(Mathf.Cos(a) * outer, 0, Mathf.Sin(a) * outer);
                c[i * 2] = c[i * 2 + 1] = Color.white;
            }
            for (var i = 0; i < n; i++)
            {
                var b = i * 2;
                t[i * 6] = b;
                t[i * 6 + 1] = b + 2;
                t[i * 6 + 2] = b + 1;
                t[i * 6 + 3] = b + 1;
                t[i * 6 + 4] = b + 2;
                t[i * 6 + 5] = b + 3;
            }
            var m = new Mesh { name = "l2web anel", vertices = v, colors = c, triangles = t };
            m.RecalculateBounds();
            return m;
        }

        /// <summary>GridHelper(60, 120, 0x6b6a62, 0x3d3c38) com opacidade 0.5.</summary>
        static GameObject MakeGrid()
        {
            const float size = 60;
            const int div = 120;
            var step = size / div;
            var half = size / 2;
            var center = RenderMats.Hex(0x6b6a62).linear;
            var line = RenderMats.Hex(0x3d3c38).linear;
            var v = new Vector3[(div + 1) * 4];
            var c = new Color[v.Length];
            var idx = new int[v.Length];
            var k = 0;
            for (var i = 0; i <= div; i++)
            {
                var p = -half + i * step;
                var col = i == div / 2 ? center : line; // cor de vertice: o shader usa direto (linear, como o three)
                v[k] = new Vector3(-half, 0, p);
                v[k + 1] = new Vector3(half, 0, p);
                v[k + 2] = new Vector3(p, 0, -half);
                v[k + 3] = new Vector3(p, 0, half);
                for (var j = 0; j < 4; j++)
                {
                    c[k + j] = col;
                    idx[k + j] = k + j;
                }
                k += 4;
            }
            var m = new Mesh { name = "l2web grade", vertices = v, colors = c };
            m.SetIndices(idx, MeshTopology.Lines, 0);
            m.RecalculateBounds();
            return RenderMats.MeshObject("grade", m, RenderMats.Fx(new Color(1, 1, 1, 0.5f), transparent: true, fog: true), null);
        }
    }
}
