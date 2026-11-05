// Radar do HUD (RadarContainerWnd.Radar 102x102), como o cliente o desenha: UCanvas::DrawRadarBack (thunk 0x1030ff0b,
// engine/00009.c) e UCanvas::DrawRadarEtc (0x103087d8, engine/00004.c) [O]. Nao e uma imagem 2D: sao atores Engine.L2Radar
// com malhas esqueleticas de LineageDecos.ukx (quadrados texturizados; FUN_1054fee0 os cria), renderizados num
// FActorSceneNode proprio com FOV 27 (0x41d80000), RendMap 6 (REN_PlainTex: sem luz), yaw = o da camera e pitch = pitch da
// camera - 0x800 limitado a [-0x2000, -0x1201], camera a 256 UU do centro (posicao = -Rotation.Vector() x 256):
//  - radar_back (100x100 UU no plano XY, no centro, rotacao 0): o disco, que por isso aparece em perspectiva e gira com a camera;
//  - radar_dot_target: o alvo selecionado, a min(35, |d| x 35 / 1500) UU do centro na direcao dele (0x10559xxx);
//  - radar_dot_party: cada membro da party, idem [I: o mesmo fator, pelo mesmo laco];
//  - radar_arrow: so com alvo de radar (EV_RadarAddTarget, quest), no centro, yaw = rumo + 0x4000 (nao ha no porte: sem pacote);
//  - DrawRadarEtc: radar_center ("eu", 15,3 UU) no centro e radar_n a 50 UU para o norte (-Y), com camera propria
//    (FRotator(0x4000,0,0)) [I: aqui desenhados de pe, virados para a camera do disco, nas mesmas posicoes 3D];
//  - radar_time so com o RadarTime do console (fora do porte).
// Tudo numa camada propria, longe do mundo, visto por uma camera que desenha direto no retangulo do controle Radar, por cima
// do quadro do jogo (como o FActorSceneNode no original) - sem RenderTexture, para a transparencia do disco compor uma vez so.
using System.Collections.Generic;
using System.Threading.Tasks;
using GLTFast;
using L2Web.Render;
using L2Web.World;
using UnityEngine;
using UnityEngine.Rendering.Universal;

namespace L2Web.UI
{
    public sealed class RadarView
    {
        /// <summary>Camada dos atores do radar (fora das camadas nomeadas do projeto).</summary>
        public const int Layer = 30;
        /// <summary>FOV do FActorSceneNode do radar (0x41d80000 = 27 graus) [O].</summary>
        public const float FovDeg = 27f;
        /// <summary>Distancia da camera ao centro, em UU [O]: com FOV 27 o disco (raio 50) ocupa 81% da largura do controle, com
        /// folga para a elipse e o N nao passarem do retangulo (o controle encosta na borda da tela).</summary>
        public const float CameraDistanceUu = 256f;
        /// <summary>Raio maximo dos pontos (UU) e alcance que o preenche (UU): r = min(35, d x 35 / 1500) [O].</summary>
        public const float DotRadiusUu = 35f, DotRangeUu = 1500f;
        /// <summary>Tamanho do controle Radar no xdat.</summary>
        public const int SizePx = 102;
        /// <summary>[I] distancia do centro do N ao centro do disco (UU): borda (50) + meia largura do N (7,7) + folga.</summary>
        public const float NorthDistanceUu = 60f;

        static readonly Dictionary<string, string> Meshes = new()
        {
            ["back"] = "/cache/mesh/LineageDecos.radar_back.951528cf.glb",
            ["arrow"] = "/cache/mesh/LineageDecos.radar_arrow.d8093613.glb",
            ["center"] = "/cache/mesh/LineageDecos.radar_center.8a0b5799.glb",
            ["n"] = "/cache/mesh/LineageDecos.radar_n.86e82a46.glb",
            ["dot_party"] = "/cache/mesh/LineageDecos.radar_dot_party.13295582.glb",
            ["dot_target"] = "/cache/mesh/LineageDecos.radar_dot_target.74560499.glb",
        };

        readonly Transform root;
        readonly Camera camera;
        readonly RectTransform host;
        readonly Dictionary<string, Transform> parts = new();
        readonly List<Transform> partyDots = new();
        Transform dotTarget, center, north, arrow;
        bool disposed;

        /// <summary>Pitch do FActorSceneNode: pitch da camera - 0x800, em [-0x2000, -0x1201] [O].</summary>
        public static float RadarPitch(float cameraPitch) => Mathf.Clamp(cameraPitch - 0x800, -0x2000, -0x1201);

        /// <summary>FRotator(pitch, yaw, 0).Vector() em UU (65536 = 360 graus).</summary>
        public static Vector3 RotatorVector(float pitch, float yaw)
        {
            var p = pitch / 65536f * 2 * Mathf.PI;
            var y = yaw / 65536f * 2 * Mathf.PI;
            return new Vector3(Mathf.Cos(p) * Mathf.Cos(y), Mathf.Cos(p) * Mathf.Sin(y), Mathf.Sin(p));
        }

        /// <summary>Posicao de um ponto do radar (UU relativos ao centro) para um objeto a (dx, dy) UU do personagem [O].</summary>
        public static Vector2 DotOffset(float dx, float dy)
        {
            var d = Mathf.Sqrt(dx * dx + dy * dy);
            if (d <= 0) return Vector2.zero;
            var r = Mathf.Min(DotRadiusUu, d * DotRadiusUu / DotRangeUu);
            return new Vector2(dx / d * r, dy / d * r);
        }

        /// <summary>Distancia efetiva da camera (= a do original).</summary>
        public static float EffectiveDistanceUu => CameraDistanceUu;

        public RadarView(RectTransform host)
        {
            this.host = host;
            root = new GameObject("l2 radar scene").transform;
            // longe do mundo: nada do jogo entra no quadro e a cena nao aparece na camera do jogo (camada propria)
            root.position = new Vector3(0, -4000, 0);
            var cgo = new GameObject("l2 radar camera");
            cgo.transform.SetParent(root, false);
            camera = cgo.AddComponent<Camera>();
            var data = cgo.AddComponent<UniversalAdditionalCameraData>();
            // camera Overlay empilhada na camera do jogo (URP): compoe sobre o quadro; ocupa a tela toda, por isso a projecao e
            // deslocada (Draw) para o frustum de 27 graus cair no retangulo do controle
            data.renderType = CameraRenderType.Overlay;
            data.renderPostProcessing = false;
            data.renderShadows = false;
            camera.cullingMask = 1 << Layer;
            camera.clearFlags = CameraClearFlags.Depth;
            camera.rect = new Rect(0, 0, 1, 1);
            camera.fieldOfView = FovDeg;
            camera.nearClipPlane = 0.05f;
            camera.farClipPlane = 20f;
            camera.allowHDR = false;
            camera.allowMSAA = false;
            camera.enabled = false;
            Load().Forget();
        }

        async Task Load()
        {
            foreach (var (key, url) in Meshes)
            {
                var t = await Instance(key, url);
                if (disposed) return;
                if (!t) continue;
                parts[key] = t;
                t.gameObject.SetActive(key == "back");
            }
            parts.TryGetValue("dot_target", out dotTarget);
            parts.TryGetValue("center", out center);
            parts.TryGetValue("n", out north);
            parts.TryGetValue("arrow", out arrow);
        }

        /// <summary>Instancia um glb do radar na camada do radar, com material sem luz (REN_PlainTex).</summary>
        async Task<Transform> Instance(string key, string url)
        {
            try
            {
                var g = await Actor.LoadGltf(url);
                if (disposed || g == null) return null;
                var inst = new GameObjectInstantiator(g, root, null, new InstantiationSettings { SceneObjectCreation = SceneObjectCreation.Always });
                if (!await g.InstantiateMainSceneAsync(inst) || inst.SceneTransform == null) return null;
                var t = inst.SceneTransform;
                t.name = "radar " + key;
                t.localPosition = Vector3.zero;
                t.localRotation = Quaternion.identity;
                foreach (var r in t.GetComponentsInChildren<Renderer>(true))
                {
                    r.gameObject.layer = Layer;
                    r.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
                    r.receiveShadows = false;
                    var mats = r.sharedMaterials;
                    for (var i = 0; i < mats.Length; i++)
                    {
                        mats[i] = Unlit(mats[i]);
                        // cada ator e um FActorSceneNode proprio desenhado depois do disco: pontos, N e "eu" sempre por cima
                        // dele, mesmo do lado de la (sem depender da ordem por distancia da fila de transparentes)
                        if (mats[i]) mats[i].renderQueue = key == "back" ? 3000 : 3010;
                    }
                    r.sharedMaterials = mats;
                    if (r is SkinnedMeshRenderer smr) smr.updateWhenOffscreen = true;
                }
                foreach (var tr in t.GetComponentsInChildren<Transform>(true)) tr.gameObject.layer = Layer;
                return t;
            }
            catch (System.Exception e)
            {
                Debug.LogWarning($"radar: {key}: {e.Message}");
                return null;
            }
        }

        static readonly Dictionary<Material, Material> unlit = new();

        static Material Unlit(Material src)
        {
            if (!src) return src;
            if (unlit.TryGetValue(src, out var m) && m) return m;
            var tex = src.HasProperty("baseColorTexture") ? src.GetTexture("baseColorTexture") : src.mainTexture;
            m = RenderMats.Fx(Color.white, false, true, tex, false, false);
            m.name = src.name + " (radar)";
            m.SetFloat("_VColor", 0);
            m.SetFloat("_ZWrite", 0);
            m.SetFloat("_Cull", (float)UnityEngine.Rendering.CullMode.Off);
            m.SetFloat("_ZTest", (float)UnityEngine.Rendering.CompareFunction.Always);
            unlit[src] = m;
            return m;
        }

        Transform PartyDot(int i)
        {
            while (partyDots.Count <= i)
            {
                if (!parts.TryGetValue("dot_party", out var proto)) return null;
                var c = Object.Instantiate(proto.gameObject, root).transform;
                c.name = "radar dot_party " + partyDots.Count;
                partyDots.Add(c);
            }
            return partyDots[i];
        }

        /// <summary>Um quadro: camera, disco, pontos e marcadores. Posicoes em UU do UE.</summary>
        public void Draw(float camYaw, float camPitch, Entity self, Entity target, IEnumerable<Entity> party, bool visible)
        {
            if (disposed) return;
            if (!visible || self == null || !parts.ContainsKey("back") || !host || !host.gameObject.activeInHierarchy)
            {
                camera.enabled = false;
                return;
            }
            // retangulo do controle na tela (canvas Overlay: cantos em pixels) -> viewport da camera
            var corners = new Vector3[4];
            host.GetWorldCorners(corners);
            var w = Mathf.Max(1f, Screen.width);
            var h = Mathf.Max(1f, Screen.height);
            var r = new Rect(corners[0].x / w, corners[0].y / h, (corners[2].x - corners[0].x) / w, (corners[2].y - corners[0].y) / h);
            if (r.width <= 0 || r.height <= 0)
            {
                camera.enabled = false;
                return;
            }
            // projecao de 27 graus (aspecto 1) deslocada para o retangulo r em NDC: clip' = M x clip
            var x0 = r.x * 2 - 1;
            var x1 = (r.x + r.width) * 2 - 1;
            var y0 = r.y * 2 - 1;
            var y1 = (r.y + r.height) * 2 - 1;
            var m = Matrix4x4.identity;
            m.m00 = (x1 - x0) / 2;
            m.m03 = (x0 + x1) / 2;
            m.m11 = (y1 - y0) / 2;
            m.m13 = (y0 + y1) / 2;
            camera.projectionMatrix = m * Matrix4x4.Perspective(FovDeg, 1, camera.nearClipPlane, camera.farClipPlane);
            var main = Camera.main;
            if (main)
            {
                var bd = main.GetUniversalAdditionalCameraData();
                if (bd && bd.renderType == CameraRenderType.Base && !bd.cameraStack.Contains(camera)) bd.cameraStack.Add(camera);
            }
            camera.enabled = true;
            var origin = root.position;
            var dir = RotatorVector(RadarPitch(camPitch), camYaw);
            var udir = new Vector3(-dir.x, dir.z, dir.y).normalized; // Coords.ToUnity sem escala
            camera.transform.position = origin - udir * (EffectiveDistanceUu * Coords.Scale);
            camera.transform.rotation = Quaternion.LookRotation(udir, Vector3.up);
            Vector3 At(Vector2 uu) => origin + new Vector3(-uu.x, 0, uu.y) * Coords.Scale;
            // alvo selecionado
            if (dotTarget)
            {
                var on = target != null && target != self;
                dotTarget.gameObject.SetActive(on);
                if (on) dotTarget.position = At(DotOffset(target.X - self.X, target.Y - self.Y));
            }
            // membros da party visiveis
            var n = 0;
            if (party != null)
                foreach (var e in party)
                {
                    if (e == null || e == self) continue;
                    var d = PartyDot(n);
                    if (!d) break;
                    d.gameObject.SetActive(true);
                    d.position = At(DotOffset(e.X - self.X, e.Y - self.Y));
                    n++;
                }
            for (var i = n; i < partyDots.Count; i++) partyDots[i].gameObject.SetActive(false);
            // sem alvo de radar (quest) no porte
            if (arrow) arrow.gameObject.SetActive(false);
            // "eu" no centro e o N a 50 UU para o norte (-Y), de pe, virados para a camera [I]
            // de pe, com a frente (normal +Y do glb = +Z do UE) virada para a camera
            var face = Quaternion.LookRotation(-udir, Vector3.up) * Quaternion.Euler(90, 0, 0);
            if (center)
            {
                center.gameObject.SetActive(true);
                center.position = origin;
                center.rotation = face;
            }
            if (north)
            {
                north.gameObject.SetActive(true);
                // [I] 50 UU do DrawRadarEtc poe o centro do N (15,4 UU de largura) na borda do disco; no original ele fica
                // um pouco fora da borda (capturas do usuario): centro a NorthDistanceUu
                north.position = At(new Vector2(0, -NorthDistanceUu));
                // a textura do N esta a 90 graus no plano do quad (o DrawRadarEtc o gira com o FRotator(0,-0x4000,0) [I])
                north.rotation = face * Quaternion.Euler(0, 90, 0);
            }
        }

        public void Dispose()
        {
            disposed = true;
            var main = Camera.main;
            if (main && camera)
            {
                var bd = main.GetUniversalAdditionalCameraData();
                if (bd) bd.cameraStack.Remove(camera);
            }
            if (root) RenderMats.Destroy(root.gameObject);
        }
    }
}
