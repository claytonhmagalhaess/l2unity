// Atores do Lobby.unr que se mexem (P6 do lobby_env_plan; Docs/tools/export_lobby_emitters.py -> cache/map/Lobby_movers.json):
//  - Physics = PHYS_Rotating (5) com bFixedRotationDir: o cata-vento da vila humana. AActor::physicsRotation (engine
//    0x1030d2ce): delta = RotationRate * dt (FRotator * float, inteiro por eixo) e fixedTurn soma o delta a rotacao
//    (& 0xFFFF) a cada quadro.
//  - MovableStaticMeshActor (vinhas do login): AMovableStaticMeshActor::physL2Movement; ver Sway.
// A instancia estatica do mesmo ator (Statics) e escondida e substituida pela movel.
using System.Collections.Generic;
using System.Threading.Tasks;
using L2Web.World;
using Newtonsoft.Json.Linq;
using UnityEngine;

namespace L2Web.Render
{
    public sealed class LobbyMovers
    {
        sealed class M
        {
            public Statics.Moving Inst;
            public int Pitch, Yaw, Roll;
            public int RatePitch, RateYaw, RateRoll;
            public bool Rotating;
            public Sway Sway;
        }

        readonly List<M> list = new();
        public readonly Transform Root;

        public LobbyMovers(Transform parent)
        {
            Root = new GameObject("atores moveis").transform;
            Root.SetParent(parent, false);
        }

        public int Count => list.Count;

        /// <summary>FRotator * float do UE (appTrunc por eixo) e fixedTurn com bFixedRotationDir: current + delta, & 0xFFFF.</summary>
        public static int FixedTurn(int current, int delta) => delta == 0 ? current & 0xFFFF : ((current & 0xFFFF) + delta) & 0xFFFF;

        public static int Delta(int rate, float dt) => (int)(rate * dt);

        public async Task Load(string url, Transform statics)
        {
            JObject j;
            try
            {
                j = await Http.GetJson<JObject>(url);
            }
            catch (System.Exception e)
            {
                Debug.LogWarning("moveis: " + e.Message);
                return;
            }
            if (j?["movers"] is not JArray arr) return;
            foreach (JObject o in arr)
            {
                var mesh = (string)o["mesh"];
                if (string.IsNullOrEmpty(mesh)) continue;
                var physics = (int?)o["physics"] ?? 0;
                var rr = o["rotationRate"] as JArray;
                var sway = Sway.From(o);
                var rotating = physics == 5 && rr != null;
                if (!rotating && sway == null && (string)o["cls"] != "MovableStaticMeshActor") continue;
                var loc = ((JArray)o["loc"]).ToObject<float[]>();
                var rot = (o["rot"] as JArray)?.ToObject<float[]>() ?? new float[3];
                var s3 = (o["scale3d"] as JArray)?.ToObject<float[]>();
                var a = new Statics.MapActor
                {
                    Name = (string)o["name"], Mesh = mesh, Url = "/statics/" + mesh + ".glb", Loc = loc, Rot = rot,
                    Scale = (float?)o["scale"] ?? 1, Scale3d = s3,
                };
                Hide(statics, mesh, Coords.ToUnity(loc[0], loc[1], loc[2]));
                var inst = await Statics.Spawn(a, Root);
                if (inst == null || !Root) continue;
                // a malha pode balancar tambem (MovableStaticMeshActor0 = InDecotree002): os dois sistemas convivem
                if (await WindSway.Of(mesh) is { } ws && sway == null && !rotating) WindSway.Register(inst, ws.f, ws.m);
                list.Add(new M
                {
                    Inst = inst, Pitch = (int)rot[0], Yaw = (int)rot[1], Roll = rot.Length > 2 ? (int)rot[2] : 0, Rotating = rotating,
                    RatePitch = rotating ? (int)rr[0] : 0, RateYaw = rotating ? (int)rr[1] : 0, RateRoll = rotating ? (int)rr[2] : 0, Sway = sway,
                });
            }
        }

        /// <summary>Esconde a instancia estatica do mesmo ator (mesmo nome de malha, mesma posicao).</summary>
        static void Hide(Transform statics, string mesh, Vector3 pos)
        {
            if (!statics) return;
            foreach (var mf in statics.GetComponentsInChildren<MeshFilter>(true))
                if (mf.gameObject.name == mesh && (mf.transform.position - pos).sqrMagnitude < 0.25f)
                    mf.gameObject.SetActive(false);
        }

        public void Tick(float dt)
        {
            foreach (var m in list)
            {
                if (m.Inst == null) continue;
                if (m.Rotating)
                {
                    m.Pitch = FixedTurn(m.Pitch, Delta(m.RatePitch, dt));
                    m.Yaw = FixedTurn(m.Yaw, Delta(m.RateYaw, dt));
                    m.Roll = FixedTurn(m.Roll, Delta(m.RateRoll, dt));
                    m.Inst.Pose(m.Pitch, m.Yaw, m.Roll);
                }
                else if (m.Sway != null)
                {
                    var (p, y, r) = m.Sway.Step(m.Pitch, m.Yaw, m.Roll, dt);
                    m.Inst.Pose(p, y, r);
                }
            }
        }
    }
}
