// Ceu do lobby (scratchpad/lobby_sky_re.md): o skybox do UE2. As superficies PF_FakeBackdrop do Lobby.unr fazem o
// FSkySceneNode desenhar antes a zona do SkyZoneInfo0, vista do Location dele com so a rotacao da camera (sem paralaxe).
// A zona do ceu (cache/map/Lobby_sky.json, brushes lidos do Lobby.unr) tem:
//  - a sala: teto e paredes de cima em SkybackgroundColor (ColorModifier (0,150,206) sobre WhiteChip), opaca;
//  - o plano das nuvens 13 UU acima do olho: Cloud_Final (255,192,151) x WhiteCloud, alfa da textura, TexPanner u += 0,002 t;
//  - o anel de nevoa (r 25,8, 18 lados, tampa embaixo): HazeRing_Final (255,228,149) x WhiteRing, alfa, dos dois lados;
//  - tres L2_Lobby.moonplane (MoonFinal, OB_Brighten) e o NSun0.
// O lobby nao empurra as cores do TimeEnv (FLevelSceneNode::Render pula os FUN_10657850): ficam as do pacote. Hora 12:00.
// Sol (ANSun::Tick, inclinacao -30 no lobby): olho + 350 (0,5, 0,433204, 0,749889), sprite Sun01 de 336,46 UU, cor do
// SunColor das 12h (255,219,151), FB_Brighten. Lens flares (FUN_10657c00) na tela depois do mundo, sem ZTest, One/One,
// so com o centro do sol no frustum e sem nada no caminho (SingleLineCheck na direcao sem inclinacao).
// No Unity: os objetos do ceu seguem a camera (posicao = camera + Escala (P - olho)), desenhados antes do mundo na fila
// Background, sem ZWrite e com ZTest Always, na ordem fundo < sol < luas < nuvens < anel; o mundo pinta por cima.
using System.Collections.Generic;
using System.Threading.Tasks;
using L2Web.World;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.Rendering;

namespace L2Web.Render
{
    public sealed class L2Sky
    {
        /// <summary>SkyZoneInfo0.Location (UE).</summary>
        public static readonly Vector3 Eye = new(229.2028f, 262985.1562f, 24471.0195f);
        /// <summary>
        /// Escala real [O]: o FSkySceneNode usa a mesma projecao da vista (near 10, far 65536, FOV 50) e so translada o olho para
        /// o SkyZoneInfo.Location; a geometria fica em UU x Coords.Scale em volta da camera, desenhada antes do mundo sem ZWrite.
        /// </summary>
        public const float Scale = 1;
        public static readonly Color Background = new Color32(0, 150, 206, 255);
        public static readonly Color CloudColor = new Color32(255, 192, 151, 255);
        public static readonly Color HazeColor = new Color32(255, 228, 149, 255);
        public static readonly Color SunColor = new Color32(255, 219, 151, 255);
        /// <summary>Direcao do sol as 12h no lobby (inclinacao -30 graus).</summary>
        public static readonly Vector3 SunDir = new(0.5f, 0.433204f, 0.749889f);
        /// <summary>Direcao sem inclinacao (theta, phi) do teste de oclusao dos flares.</summary>
        public static readonly Vector3 SunTraceDir = new(0.5f, 0, 0.866025f);
        public const float SunRadius = 350;
        public const float SunSize = 336.46f;
        /// <summary>PanRate do TexPanner0 das nuvens (UV por segundo).</summary>
        public const float CloudPan = 0.002f;

        /// <summary>LensFlare do SkyZoneInfo0: textura, offset, escala.</summary>
        public static readonly (string tex, float o, float s)[] Flares =
        {
            ("Flare02", -0.12f, 0.5f), ("Flare02", -0.10f, 0.38f), ("Flare02", 0.10f, 0.30f), ("Flare02", 0.12f, 0.40f),
            ("Flare01", 0.17f, 1f), ("Flare03", 0.20f, 1f), ("Flare04", 0.40f, 1f), ("Flare06", 0.50f, 2f), ("Flare06", 0.60f, 3f),
        };

        public readonly Transform Root;
        Material cloud, bgMat, ringMat, sunMat, moonMat;
        Transform sunTr, moonTr;
        float sunTexW = 128, moonTexW = 512;
        /// <summary>NMoon.Radius do mapa (245 no Lobby).</summary>
        public float MoonRadius = 245;
        readonly List<(Transform tr, Renderer r, float o, float s)> flares = new();
        Transform flareRoot;
        float time;

        public L2Sky(Transform parent)
        {
            Root = new GameObject("ceu (SkyZoneInfo0)").transform;
            Root.SetParent(parent, false);
        }

        static Vector3 Rel(JArray v) => Coords.ToUnity((float)v[0] - Eye.x, (float)v[1] - Eye.y, (float)v[2] - Eye.z);

        static Material Mat(Texture tex, Color c, BlendMode src, BlendMode dst, int queue)
        {
            var m = RenderMats.Fx(c, false, true, tex, false, false);
            m.SetFloat("_SrcBlend", (float)src);
            m.SetFloat("_DstBlend", (float)dst);
            m.SetFloat("_ZWrite", 0);
            m.SetFloat("_ZTest", (float)CompareFunction.Always);
            m.SetFloat("_Cull", (float)CullMode.Off);
            m.SetFloat("_VColor", 0);
            m.SetFloat("_Fog", 0);
            m.renderQueue = queue;
            return m;
        }

        static async Task<Texture2D> Tex(string name, bool repeat)
        {
            var t = await Http.GetTexture("/raw/L2_Skies/Texture/" + name + ".png");
            if (t) t.wrapMode = repeat ? TextureWrapMode.Repeat : TextureWrapMode.Clamp;
            return t;
        }

        /// <summary>
        /// Monta a zona do ceu. geometryUrl: os brushes da SkyZone lidos do .unr (Lobby_sky.json). [I] os outros mapas usam a
        /// sala do Lobby como modelo ate a extracao da SkyZone deles.
        /// </summary>
        public async Task Load(string geometryUrl = "/map/Lobby_sky.json", bool lobbyMoonPlanes = true)
        {
            JObject geo;
            try
            {
                geo = await Http.GetJson<JObject>(geometryUrl);
            }
            catch (System.Exception e)
            {
                Debug.LogWarning("ceu: " + e.Message);
                return;
            }
            if (geo == null || !Root) return;
            var chip = await Tex("WhiteChip", true);
            var cloudTex = await Tex("WhiteCloud", true);
            var ring = await Tex("WhiteRing", true);
            var sun = await Tex("Sun01", false);
            if (!Root) return;
            var mats = new Dictionary<string, Material>
            {
                ["SkybackgroundColor"] = bgMat = Mat(chip, Background, BlendMode.One, BlendMode.Zero, 1000),
                ["Cloud_Final"] = cloud = Mat(cloudTex, CloudColor, BlendMode.SrcAlpha, BlendMode.OneMinusSrcAlpha, 1003),
                ["HazeRing_Final"] = ringMat = Mat(ring, HazeColor, BlendMode.SrcAlpha, BlendMode.OneMinusSrcAlpha, 1004),
            };
            foreach (var kv in geo)
            {
                var polys = (JArray)kv.Value["polys"];
                var byMat = new Dictionary<string, (List<Vector3> v, List<Vector2> uv, List<int> t)>();
                foreach (JObject p in polys)
                {
                    var mat = (string)p["mat"];
                    if (!mats.ContainsKey(mat)) continue;
                    if (!byMat.TryGetValue(mat, out var b)) byMat[mat] = b = (new List<Vector3>(), new List<Vector2>(), new List<int>());
                    var vs = (JArray)p["verts"];
                    var uvs = (JArray)p["uv"];
                    var first = b.v.Count;
                    for (var i = 0; i < vs.Count; i++)
                    {
                        b.v.Add(Rel((JArray)vs[i]));
                        b.uv.Add(new Vector2((float)uvs[i][0], (float)uvs[i][1]));
                    }
                    for (var i = 1; i + 1 < vs.Count; i++)
                    {
                        b.t.Add(first);
                        b.t.Add(first + i);
                        b.t.Add(first + i + 1);
                    }
                }
                foreach (var (mat, b) in byMat)
                {
                    var mesh = new Mesh { name = kv.Key + " " + mat };
                    mesh.SetVertices(b.v);
                    mesh.SetUVs(0, b.uv);
                    mesh.SetTriangles(b.t, 0);
                    mesh.RecalculateBounds();
                    var go = new GameObject(mesh.name);
                    go.transform.SetParent(Root, false);
                    go.AddComponent<MeshFilter>().sharedMesh = mesh;
                    var mr = go.AddComponent<MeshRenderer>();
                    mr.sharedMaterial = mats[mat];
                    mr.shadowCastingMode = ShadowCastingMode.Off;
                    mr.receiveShadows = false;
                }
            }
            // sol: quad virado para a camera (o _Billboard usa a escala do objeto como tamanho)
            var sgo = new GameObject("NSun0");
            sgo.transform.SetParent(Root, false);
            sgo.transform.localPosition = Coords.ToUnity(SunDir.x * SunRadius, SunDir.y * SunRadius, SunDir.z * SunRadius);
            sgo.transform.localScale = Vector3.one * (SunSize * Coords.Scale);
            sgo.AddComponent<MeshFilter>().sharedMesh = RenderMats.Quad();
            var sm = sunMat = Mat(sun, SunColor, BlendMode.One, BlendMode.OneMinusSrcColor, 1001);
            sunTr = sgo.transform;
            if (sun) sunTexW = sun.width;
            // NMoon0: sprite moon (L2_Skies.moon.moon) a MoonRadius na direcao da lua; abaixo do horizonte ao meio-dia
            var moonTex = await Tex("moon", false);
            if (!Root) return;
            var mgo = new GameObject("NMoon0");
            mgo.transform.SetParent(Root, false);
            mgo.AddComponent<MeshFilter>().sharedMesh = RenderMats.Quad();
            moonMat = Mat(moonTex, Color.white, BlendMode.One, BlendMode.OneMinusSrcColor, 1001);
            moonMat.SetFloat("_Billboard", 1);
            var mmr = mgo.AddComponent<MeshRenderer>();
            mmr.sharedMaterial = moonMat;
            mmr.shadowCastingMode = ShadowCastingMode.Off;
            mmr.enabled = false;
            moonTr = mgo.transform;
            if (moonTex) moonTexW = moonTex.width;
            sm.SetFloat("_Billboard", 1);
            var smr = sgo.AddComponent<MeshRenderer>();
            smr.sharedMaterial = sm;
            smr.shadowCastingMode = ShadowCastingMode.Off;
            // os tres L2_Lobby.moonplane sao atores do Lobby.unr; os outros mapas so tem o NMoon
            if (lobbyMoonPlanes) await LoadMoons();
            await LoadFlares();
        }

        async Task LoadMoons()
        {
            Statics.MapActor[] moons =
            {
                new() { Name = "StaticMeshActor324", Loc = new[] { 164f, 262762f, 24493f }, Rot = new[] { -32768f, -32768f, 2048f }, Scale = 0.2f },
                new() { Name = "StaticMeshActor651", Loc = new[] { 116.0717f, 262968.4688f, 24507f }, Rot = new[] { -32768f, -50144f, 2048f }, Scale = 0.1f },
                new() { Name = "StaticMeshActor130", Loc = new[] { 226.5234f, 262910.3125f, 24486f }, Rot = new[] { -32768f, -29696f, 2048f }, Scale = 0.2f },
            };
            foreach (var a in moons)
            {
                a.Mesh = "L2_Lobby.moonplane";
                a.Url = "/statics/L2_Lobby.moonplane.glb";
                // relativo ao olho do ceu (precisao)
                a.Loc = new[] { a.Loc[0] - Eye.x, a.Loc[1] - Eye.y, a.Loc[2] - Eye.z };
                var m = await Statics.Spawn(a, Root);
                if (m == null || !Root) continue;
                foreach (var (tr, _) in m.Parts)
                {
                    var r = tr ? tr.GetComponent<Renderer>() : null;
                    if (!r) continue;
                    var ms = r.sharedMaterials;
                    for (var i = 0; i < ms.Length; i++)
                    {
                        // MoonFinal: OB_Brighten (One/InvSrcColor), ja trocado pelo MatAnim; aqui na ordem do ceu
                        var c = new Material(ms[i]);
                        c.SetFloat("_ZTest", (float)CompareFunction.Always);
                        c.SetFloat("_ZWrite", 0);
                        c.SetFloat("_Fog", 0);
                        c.renderQueue = 1002;
                        ms[i] = c;
                    }
                    r.sharedMaterials = ms;
                    r.shadowCastingMode = ShadowCastingMode.Off;
                }
            }
        }

        async Task LoadFlares()
        {
            flareRoot = new GameObject("lens flares").transform;
            flareRoot.SetParent(Root.parent, false);
            var cache = new Dictionary<string, Material>();
            foreach (var (tex, o, s) in Flares)
            {
                if (!cache.TryGetValue(tex, out var m))
                {
                    var t = await Tex(tex, false);
                    if (!Root) return;
                    m = Mat(t, Color.white, BlendMode.One, BlendMode.One, 4000);
                    cache[tex] = m;
                }
                var go = new GameObject(tex);
                go.transform.SetParent(flareRoot, false);
                go.AddComponent<MeshFilter>().sharedMesh = RenderMats.Quad();
                var r = go.AddComponent<MeshRenderer>();
                r.sharedMaterial = m;
                r.shadowCastingMode = ShadowCastingMode.Off;
                r.enabled = false;
                flares.Add((go.transform, r, o, s));
            }
        }

        /// <summary>Tamanho do flare em pixels (FUN_10657c00): min(ftol(s (k (R - d)) / R), ftol(0,4 W)), k = ftol(0,3 W).</summary>
        public static int FlareSize(float scale, int sizeX, int r, int d)
        {
            var k = (int)(sizeX * 0.3f);
            var max = (int)(sizeX * 0.4f);
            return Mathf.Min((int)(scale * (k * (r - d)) / r), max);
        }

        /// <summary>
        /// FUN_10657850: o gerenciador escreve a cor dos ColorModifiers SKYBOX, HAZERING e CLOUD1..3 (SkyBoxColor,
        /// HazeringColor, CloudColor1..3 da hora). No lobby isso nao acontece (ficam as cores do pacote).
        /// </summary>
        public void SetColors(Color32 sky, Color32 haze, Color32[] clouds)
        {
            if (bgMat) bgMat.SetColor("_Color", sky);
            if (ringMat) ringMat.SetColor("_Color", haze);
            if (cloud && clouds != null && clouds.Length > 0) cloud.SetColor("_Color", clouds[0]);
        }

        /// <summary>
        /// ANSun::Tick / ANMoon::Tick: sprite a Radius na direcao da hora, tamanho GetScale x 8 x USize, cor SunColor/MoonColor;
        /// escondidos com theta = -180 (direcao para baixo).
        /// </summary>
        public void SetSunMoon(double t, Vector3 sunDir, Color32 sunColor, float sunScale, Color32 moonColor, float moonScale)
        {
            if (sunTr)
            {
                var up = Env.L2Env.SunTheta(t) > -Mathf.PI + 1e-4;
                sunTr.gameObject.SetActive(up && t >= 6 && t < 24);
                sunTr.localPosition = Coords.ToUnity(sunDir.x * SunRadius, sunDir.y * SunRadius, sunDir.z * SunRadius);
                sunTr.localScale = Vector3.one * (sunScale * 8 * sunTexW * Coords.Scale);
                if (sunMat) sunMat.SetColor("_Color", sunColor);
            }
            if (moonTr)
            {
                var mdir = Env.L2Env.MoonDirection(t, Slope);
                var up = Env.L2Env.MoonTheta(t) > -Mathf.PI + 1e-4;
                moonTr.gameObject.SetActive(up);
                moonTr.GetComponent<Renderer>().enabled = up;
                moonTr.localPosition = Coords.ToUnity(mdir.x * MoonRadius, mdir.y * MoonRadius, mdir.z * MoonRadius);
                moonTr.localScale = Vector3.one * (moonScale * 8 * moonTexW * Coords.Scale);
                if (moonMat) moonMat.SetColor("_Color", moonColor);
            }
        }

        /// <summary>SlopeSunAngle do Env.int.</summary>
        public float Slope = 30;

        public void Tick(float dt, Camera cam)
        {
            if (!cam || !Root) return;
            time += dt;
            Root.SetPositionAndRotation(cam.transform.position, Quaternion.identity);
            Root.localScale = Vector3.one * Scale;
            if (cloud) cloud.SetVector("_MainTex_ST", new Vector4(1, 1, CloudPan * time % 1, 0));
            StepFlares(cam);
        }

        void StepFlares(Camera cam)
        {
            if (flares.Count == 0) return;
            var sunWorld = Root.TransformPoint(Coords.ToUnity(SunDir.x * SunRadius, SunDir.y * SunRadius, SunDir.z * SunRadius));
            var vp = cam.WorldToViewportPoint(sunWorld);
            var on = vp.z > 0 && vp.x >= 0 && vp.x <= 1 && vp.y >= 0 && vp.y <= 1;
            if (on)
            {
                // SingleLineCheck do olho ate o sol sem inclinacao, D = 2048 x GL2StaticMeshCR = 4096 UU [O: ModifyGlobalClippingRange
                // forca GL2StaticMeshCR = 2 com IsKeepMinFrameRate, e o Option.ini do usuario tem StaticMesh=2]
                var dir = Coords.ToUnity(SunTraceDir.x, SunTraceDir.y, SunTraceDir.z).normalized;
                on = !Physics.Raycast(cam.transform.position, dir, 4096 * Coords.Scale, ~0, QueryTriggerInteraction.Ignore);
            }
            foreach (var f in flares) f.r.enabled = on;
            if (!on) return;
            int w = cam.pixelWidth, h = cam.pixelHeight;
            // pixels com y para baixo, como o canvas
            float sx = vp.x * w, sy = (1 - vp.y) * h;
            int cx = w / 2, cy = h / 2;
            var rr = (int)Mathf.Sqrt(cx * cx + cy * cy);
            var d = (int)Mathf.Sqrt((sx - cx) * (sx - cx) + (sy - cy) * (sy - cy));
            int mx = (int)(2 * cx - sx), my = (int)(2 * cy - sy);
            var dist = cam.nearClipPlane + 0.05f;
            var pixToWorld = 2 * dist * Mathf.Tan(cam.fieldOfView * 0.5f * Mathf.Deg2Rad) / h;
            foreach (var f in flares)
            {
                var x = (int)((1 - f.o) * sx + f.o * mx);
                var y = (int)((1 - f.o) * sy + f.o * my);
                var sz = FlareSize(f.s, w, rr, d);
                if (sz <= 0)
                {
                    f.r.enabled = false;
                    continue;
                }
                var p = cam.ViewportToWorldPoint(new Vector3((float)x / w, 1 - (float)y / h, dist));
                f.tr.SetPositionAndRotation(p, Quaternion.LookRotation(cam.transform.forward, cam.transform.up));
                f.tr.localScale = new Vector3(sz * pixToWorld, sz * pixToWorld, 1);
            }
        }
    }
}
