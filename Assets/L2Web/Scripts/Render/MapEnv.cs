// Ambiente de um tile do mundo (spec 08 secoes 5.1, 8): luzes do mapa com a modulacao por LightType, coronas, portas (Mover
// pelo servidor), emissores e malhas moveis. Dados: Docs/tools/export_map_env.py (<tile>_env.json), export_map_emitters.py
// (<tile>_emitters.json, <tile>_movers.json com doors).
//  - luzes: as Steady estao embutidas nas malhas/lightmap (StaticMeshInstance, FLightMap); so viram luz de hardware as
//    bDynamicLight e as de tipo variavel (Pulse, SubtlePulse, Flicker, Blink, Strobe, Fade), com o fator por quadro
//    (FDynamicLight::Update); None/Backdrop nao iluminam; coronas como no lobby;
//  - portas (AMover): o estado vem do servidor (DoorInfo 0x4C, DoorStatusUpdate 0x4D, StaticObjectInfo 0x99); a malha
//    interpola entre KeyPos/KeyRot[0] (fechada) e [1] (aberta) em MoveTime segundos [I: interpolacao linear do UE2 Mover].
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using L2Web.World;
using Newtonsoft.Json.Linq;
using UnityEngine;

namespace L2Web.Render
{
    public sealed class MapEnv
    {
        sealed class MapLight
        {
            public Light Light;
            public Color Color;
            public int Type, Phase, Period;
        }

        /// <summary>[I] luzes mais longe da camera que o raio + isto (m) ficam desligadas (o URP mostra no maximo 256).</summary>
        public const float LightCullMargin = 100f;

        public sealed class Door
        {
            public string Name, Mesh;
            public int ServerId, RealId;
            public Statics.Moving Inst;
            public float[] BasePos, BaseRot;
            public List<(Vector3 pos, Vector3 rot)> Keys = new();
            public float MoveTime = 1;
            public bool Open;
            public float T;
        }

        public readonly string Tile;
        public readonly Transform Root;
        readonly List<MapLight> lights = new();
        readonly List<Corona> coronas = new();
        readonly List<Door> doors = new();
        readonly List<L2Web.Render.Env.FogActor> fogActors = new();
        /// <summary>Atores Emitter do tile no simulador da cena (FxWorld).</summary>
        readonly List<L2Web.Render.Fx.FxEmitterActor> emitters = new();
        LobbyMovers movers;
        public static readonly Dictionary<int, Door> DoorsByRealId = new();
        /// <summary>Portas pelo id de rede do servidor (AActor+0x60), ligado pelo DoorInfo/StaticObjectInfo.</summary>
        public static readonly Dictionary<int, Door> DoorsByNetId = new();
        public static readonly Dictionary<string, MapEnv> Loaded = new();

        public MapEnv(string tile, Transform parent)
        {
            Tile = tile;
            Root = new GameObject("ambiente " + tile).transform;
            Root.SetParent(parent, false);
            Loaded[tile] = this;
        }

        public async Task Load(Transform statics)
        {
            await LoadLights();
            if (!Root) return;
            var fx = L2Web.Render.Fx.FxWorld.Instance;
            if (fx != null)
            {
                await fx.LoadMapEmitters($"/map/{Tile}_emitters.json");
                foreach (var a in fx.Pending) if (a.Class.Package == "map" && a.LifeAnchor == null) { a.LifeAnchor = Root; emitters.Add(a); }
                foreach (var (a, _) in fx.Actors) if (a.Class.Package == "map" && a.LifeAnchor == null) { a.LifeAnchor = Root; emitters.Add(a); }
            }
            if (!Root) return;
            movers = new LobbyMovers(Root);
            await movers.Load($"/map/{Tile}_movers.json", statics);
            if (!Root) return;
            await LoadDoors();
        }

        async Task LoadLights()
        {
            JObject env;
            try
            {
                env = await Http.GetJson<JObject>($"/map/{Tile}_env.json");
            }
            catch (Exception)
            {
                return;
            }
            if (env?["fogs"] is JArray fogs)
                foreach (JObject f in fogs)
                {
                    var loc = (JArray)f["loc"];
                    var fa = new L2Web.Render.Env.FogActor
                    {
                        Name = (string)f["name"], Loc = new Vector3((float)loc[0], (float)loc[1], (float)loc[2]),
                        AffectMin = (float?)f["affectMin"] ?? 0, AffectMax = (float?)f["affectMax"] ?? 0,
                    };
                    var rg = (JArray)f["ranges"];
                    for (var i = 0; i < 5 && i < rg.Count; i++) fa.Ranges[i] = ((float)rg[i][0], (float)rg[i][1]);
                    var keys = new List<L2Web.Render.Env.FogKey>();
                    foreach (JObject k in (JArray)f["colors"])
                    {
                        Color32 Rgb(JToken c) => new((byte)(int)c[0], (byte)(int)c[1], (byte)(int)c[2], 255);
                        var fk = new L2Web.Render.Env.FogKey { Time = (float?)k["time"] ?? 0, Fog = Rgb(k["fog"]), Sky = Rgb(k["sky"]) };
                        var cl = new List<Color32>();
                        foreach (var c in (JArray)k["clouds"]) cl.Add(Rgb(c));
                        var hz = new List<Color32>();
                        foreach (var c in (JArray)k["hazes"]) hz.Add(Rgb(c));
                        fk.Clouds = cl.ToArray();
                        fk.Hazes = hz.ToArray();
                        keys.Add(fk);
                    }
                    fa.Colors = keys.ToArray();
                    fogActors.Add(fa);
                    L2Web.Render.Env.L2Fog.Registry.Add(fa);
                }
            if (env?["lights"] is not JArray list || !Root) return;
            Material coronaMat = null;
            foreach (var l in list)
            {
                var loc = (JArray)l["loc"];
                var pos = Coords.ToUnity((float)loc[0], (float)loc[1], (float)loc[2]);
                var type = (int?)l["type"] ?? 1;
                var color = UeLight.LightColor((int?)l["hue"] ?? 0, (int?)l["sat"] ?? 255, (float?)l["brightness"] ?? 64);
                // todas as que iluminam: as malhas/terreno/BSP ja tem as estaticas embutidas e nao leem luzes adicionais; as
                // pontuais do URP chegam so aos atores, que no original recebem as luzes da lista por SetLight (UeLight.SetPoint)
                if (UeLight.Lights(type))
                {
                    var go = new GameObject((string)l["name"]);
                    go.transform.SetParent(Root, false);
                    go.transform.position = pos;
                    var li = go.AddComponent<Light>();
                    li.type = LightType.Point;
                    li.shadows = LightShadows.None;
                    li.range = UeLight.WorldRadius((float?)l["radius"] ?? 64) * Coords.Scale;
                    UeLight.SetPoint(li, color);
                    lights.Add(new MapLight { Light = li, Color = color, Type = type, Phase = (int?)l["phase"] ?? 0, Period = (int?)l["period"] ?? 32 });
                }
                if ((bool?)l["corona"] == true && (string)l["skin"] is { } skin)
                {
                    var tex = await Http.GetTexture(skin);
                    if (!Root) return;
                    coronaMat ??= Corona.MakeMaterial(tex);
                    var go = new GameObject("corona " + (string)l["name"]);
                    go.transform.SetParent(Root, false);
                    go.transform.position = pos;
                    var size = ((float?)l["drawScale"] ?? 1) * (tex ? tex.width : 128) * Coords.Scale;
                    go.transform.localScale = new Vector3(size, size, size);
                    go.AddComponent<MeshFilter>().sharedMesh = RenderMats.Quad();
                    var mr = go.AddComponent<MeshRenderer>();
                    mr.sharedMaterial = coronaMat;
                    mr.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
                    coronas.Add(new Corona { Tr = go.transform, R = mr, Color = type == 6 && l["hue"] == null ? Color.white : color });
                }
            }
        }

        async Task LoadDoors()
        {
            JObject j;
            try
            {
                j = await Http.GetJson<JObject>($"/map/{Tile}_movers.json");
            }
            catch (Exception)
            {
                return;
            }
            if (j?["doors"] is not JArray arr) return;
            foreach (JObject o in arr)
            {
                var mesh = (string)o["mesh"];
                if (string.IsNullOrEmpty(mesh) || o["loc"] is not JArray loc) continue;
                var d = new Door
                {
                    Name = (string)o["name"], Mesh = mesh, ServerId = (int?)o["serverId"] ?? 0, RealId = (int?)o["serverRealId"] ?? 0,
                    BasePos = (o["basePos"] as JArray)?.ToObject<float[]>() ?? loc.ToObject<float[]>(),
                    BaseRot = (o["baseRot"] as JArray)?.ToObject<float[]>() ?? (o["rot"] as JArray)?.ToObject<float[]>() ?? new float[3],
                    MoveTime = (float?)o["moveTime"] ?? 1,
                };
                foreach (JObject k in (JArray)o["keys"])
                    d.Keys.Add((Vec(k["pos"]), Vec(k["rot"])));
                var a = new Statics.MapActor
                {
                    Name = d.Name, Mesh = mesh, Url = "/statics/" + mesh + ".glb", Loc = d.BasePos, Rot = d.BaseRot,
                    Scale = (float?)o["scale"] ?? 1, Scale3d = (o["scale3d"] as JArray)?.ToObject<float[]>(),
                };
                d.Inst = await Statics.Spawn(a, Root);
                if (d.Inst == null || !Root) continue;
                doors.Add(d);
                if (d.RealId != 0) DoorsByRealId[d.RealId] = d;
                Pose(d, 0);
            }
        }

        static Vector3 Vec(JToken t) => t is JArray a && a.Count >= 3 ? new Vector3((float)a[0], (float)a[1], (float)a[2]) : Vector3.zero;

        /// <summary>Posicao/rotacao do Mover: base + KeyPos/KeyRot interpolados entre a chave 0 (fechada) e a 1 (aberta).</summary>
        static void Pose(Door d, float f)
        {
            if (d.Inst == null || d.Keys.Count == 0) return;
            var (p0, r0) = d.Keys[0];
            var (p1, r1) = d.Keys.Count > 1 ? d.Keys[1] : d.Keys[0];
            var p = Vector3.Lerp(p0, p1, f);
            var r = Vector3.Lerp(r0, r1, f);
            d.Inst.Actor.Loc = new[] { d.BasePos[0] + p.x, d.BasePos[1] + p.y, d.BasePos[2] + p.z };
            d.Inst.Pose(d.BaseRot[0] + r.x, d.BaseRot[1] + r.y, d.BaseRot[2] + r.z);
        }

        /// <summary>
        /// OnDoorInfo (0x10311b80) / OnStaticObjectInfo (0x1030f8f3): acha o Mover com AActor+0xb8 == id do servidor (o
        /// L2ServerObjectRealID, ex. 22220004; [I] o L2ServerObjectID curto tambem e aceito) e guarda o id de rede em +0x60.
        /// </summary>
        public static void BindDoor(int serverId, int netId)
        {
            Door d = null;
            if (!DoorsByRealId.TryGetValue(serverId, out d))
                foreach (var m in Loaded.Values)
                    foreach (var x in m.doors)
                        if (x.ServerId == serverId) { d = x; break; }
            if (d != null) DoorsByNetId[netId] = d;
        }

        /// <summary>OnDoorStatusUpdate (0x103125b7): campo 2 == 0 -> eventTrigger (abre); senao eventUnTrigger (fecha).</summary>
        public static void SetDoorByNetId(int netId, bool open)
        {
            if (DoorsByNetId.TryGetValue(netId, out var d)) d.Open = open;
        }

        public void Tick(float dt, Camera cam, float timeSeconds)
        {
            var eye = cam ? cam.transform.position : Vector3.zero;
            foreach (var l in lights)
            {
                if (!l.Light) continue;
                var near = !cam || (l.Light.transform.position - eye).sqrMagnitude <= (l.Light.range + LightCullMargin) * (l.Light.range + LightCullMargin);
                var k = near ? UeLight.TypeFactor(l.Type, timeSeconds, l.Phase, l.Period) : 0;
                UeLight.SetPoint(l.Light, l.Color, k);
                l.Light.enabled = k > 0;
            }
            Corona.Step(coronas, cam, dt);
            movers?.Tick(dt);
            foreach (var d in doors)
            {
                var target = d.Open ? 1f : 0f;
                if (Mathf.Approximately(d.T, target)) continue;
                d.T = Mathf.MoveTowards(d.T, target, dt / Mathf.Max(0.01f, d.MoveTime));
                Pose(d, d.T);
            }
        }

        public void Destroy()
        {
            foreach (var d in doors)
                if (d.RealId != 0 && DoorsByRealId.TryGetValue(d.RealId, out var x) && x == d)
                    DoorsByRealId.Remove(d.RealId);
            Loaded.Remove(Tile);
            foreach (var f in fogActors) L2Web.Render.Env.L2Fog.Registry.Remove(f);
            if (Root) RenderMats.Destroy(Root.gameObject);
        }
    }
}
