// #0049: as 8 vinhas do login (MovableStaticMeshActor1-4 e 6-9 do Lobby.unr, Primitive_INDeco_Long003). Todas tem
// PrePivot (0, 0, 3000) no .unr; AActor::LocalToWorld (Engine.dll export 0x4ad9, decomp_all/engine/00002.c:9880) poe o
// ponto p da malha em Location + (p - PrePivot) S R, entao a vinha fica pendurada 157..289 UU abaixo de Location e
// balanca (physL2Movement 0x1063e7c0, Sway) como pendulo preso nele. Sem o PrePivot ela ficava acima do quadro do login.
using L2Web.Render;
using L2Web.World;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class VinhasLoginTests
    {
        // linha do Lobby_movers.json reexportado com o export_map_emitters.py; os valores sao os do Lobby.unr
        const string Msma4 = @"{""name"": ""MovableStaticMeshActor4"", ""cls"": ""MovableStaticMeshActor"",
            ""mesh"": ""Primitive_FieldOBJ_S.Deco_S.Primitive_INDeco_Long003"", ""loc"": [-8697.5352, 238358.7656, -6393.0],
            ""rot"": [0, -7376, 0], ""scale"": 0.1, ""scale3d"": [1.2, 1.2, 1.0], ""physics"": 0, ""rotationRate"": null,
            ""l2RotatorRate"": [100, 80, 60], ""l2RotatorMax"": [200, 120, 80],
            ""l2AccelRatio"": {""PitchTime"": 1.0, ""RollTime"": 1.0, ""YawTime"": 1.0}, ""groups"": """", ""prePivot"": [0.0, 0.0, 3000.0]}";

        /// <summary>Extremos da malha INDeco_Long003 no eixo Z do UE (o glb vai de y 1,1 a 14,3 = 110..1430 UU).</summary>
        const float TopZ = 1430, TipZ = 110;

        /// <summary>Ponto da malha (UE) no mundo (UE) pela matriz do ator.</summary>
        static Vector3 World(Statics.MapActor a, float x, float y, float z) =>
            Coords.FromUnityF(Statics.ActorMatrix(a).MultiplyPoint3x4(Coords.ToUnity(x, y, z)));

        [Test]
        public void Json_LeParametrosEPrePivot()
        {
            var o = JObject.Parse(Msma4);
            var a = LobbyMovers.ActorOf(o);
            Assert.AreEqual(new[] { 0f, 0f, 3000f }, a.PrePivot);
            Assert.AreEqual(0.1f, a.Scale, 1e-6f);
            Assert.AreEqual(new[] { 1.2f, 1.2f, 1f }, a.Scale3d);
            Assert.AreEqual(new[] { 0f, -7376f, 0f }, a.Rot);
            var s = Sway.From(o);
            Assert.AreEqual(new Vector3Int(100, 80, 60), s.Rate);
            Assert.AreEqual(new Vector3Int(200, 120, 80), s.Max);
            Assert.AreEqual(Vector3.one, s.Accel);
            // json antigo, sem a chave: sem PrePivot (malha com a origem em Location)
            o.Remove("prePivot");
            Assert.IsNull(LobbyMovers.ActorOf(o).PrePivot);
        }

        [Test]
        public void PrePivot_MalhaPenduradaAbaixoDeLocation()
        {
            var a = LobbyMovers.ActorOf(JObject.Parse(Msma4));
            // o proprio PrePivot cai em Location
            var pivot = World(a, 0, 0, 3000);
            Assert.AreEqual(-8697.5352f, pivot.x, 0.05f);
            Assert.AreEqual(238358.7656f, pivot.y, 0.05f);
            Assert.AreEqual(-6393f, pivot.z, 0.05f);
            // (p - PrePivot) * DrawScale * DrawScale3D.Z: topo 157 UU e ponta 289 UU abaixo
            Assert.AreEqual(-6393f + (TopZ - 3000) * 0.1f, World(a, 0, 0, TopZ).z, 0.05f);
            Assert.AreEqual(-6393f + (TipZ - 3000) * 0.1f, World(a, 0, 0, TipZ).z, 0.05f);
        }

        [Test]
        public void SemPrePivot_OrigemDaMalhaEmLocation()
        {
            var a = LobbyMovers.ActorOf(JObject.Parse(Msma4));
            a.PrePivot = null;
            var o = World(a, 0, 0, 0);
            Assert.AreEqual(-6393f, o.z, 0.05f);
            Assert.AreEqual(-6393f + TipZ * 0.1f, World(a, 0, 0, TipZ).z, 0.05f);
            a.PrePivot = new[] { 0f, 0f, 0f };
            Assert.AreEqual(-6393f, World(a, 0, 0, 0).z, 0.05f);
        }

        [Test]
        public void PrePivot_GiraEmVoltaDeLocation()
        {
            var a = LobbyMovers.ActorOf(JObject.Parse(Msma4));
            var rest = World(a, 0, 0, TipZ);
            a.Rot = new[] { 200f, -7376f, 0f }; // pico do pitch (L2RotatorMax.Pitch)
            var pivot = World(a, 0, 0, 3000);
            Assert.AreEqual(-8697.5352f, pivot.x, 0.05f);
            Assert.AreEqual(238358.7656f, pivot.y, 0.05f);
            Assert.AreEqual(-6393f, pivot.z, 0.05f);
            // a ponta (289 UU abaixo do pivo) anda 289 sen(200 * 360 / 65536 graus) = 5,5 UU na horizontal
            var tip = World(a, 0, 0, TipZ);
            var d = new Vector2(tip.x - rest.x, tip.y - rest.y).magnitude;
            Assert.AreEqual(289f * Mathf.Sin(200f / 65536f * 2 * Mathf.PI), d, 0.05f);
        }

        [Test]
        public void Enquadramento_PontaDentroDoQuadroDoLogin()
        {
            // Logon_Warp (lobby.json): camera em (-8316.74, 238312.09, -6687.99) olhando para -X, FOV horizontal 50 em 4:3
            var cam = new Vector3(-8316.74f, 238312.09f, -6687.99f);
            var half = CamUtil.VerticalFov(LobbyScene.LobbyFovDeg, 4f / 3f) / 2;
            var a = LobbyMovers.ActorOf(JObject.Parse(Msma4));
            float Elev(Vector3 p) => Mathf.Atan2(p.z - cam.z, cam.x - p.x) * Mathf.Rad2Deg;
            Assert.Less(Elev(World(a, 0, 0, TipZ)), half);
            // sem o PrePivot a parte mais baixa ficava 300 UU acima da camera, fora do quadro
            a.PrePivot = null;
            Assert.Greater(Elev(World(a, 0, 0, TipZ)), half);
        }

        [Test]
        public void Balanco_PontaOscilaComPeriodoDoPitch()
        {
            var a = LobbyMovers.ActorOf(JObject.Parse(Msma4));
            // sem fase aleatoria: Pitch T = 8*200/100 = 16 s, Yaw 8*120/80 = 12 s, Roll 8*80/60 = 10,67 s
            var s = new Sway { Rate = new Vector3Int(100, 80, 60), Max = new Vector3Int(200, 120, 80), Accel = Vector3.one, T = Vector3.zero };
            var rest = World(a, 0, 0, TipZ);
            float max = 0;
            const float dt = 1f / 60;
            for (var i = 0; i < 96 * 60; i++)
            {
                var (p, y, r) = s.Step(0, -7376, 0, dt);
                a.Rot = new float[] { p, y, r };
                var tip = World(a, 0, 0, TipZ);
                max = Mathf.Max(max, new Vector2(tip.x - rest.x, tip.y - rest.y).magnitude);
            }
            // so o pitch (1,10 graus) ja leva a ponta a 5,5 UU; com o roll (0,44 graus) no maximo 289 sen(1,18 graus) = 5,96 UU
            Assert.Greater(max, 5.4f);
            Assert.Less(max, 6.1f);
            // so o pitch: pico (+200) em 4 s e de volta ao original em 16 s (um periodo)
            var s2 = new Sway { Rate = new Vector3Int(100, 0, 0), Max = new Vector3Int(200, 0, 0), Accel = Vector3.one, T = Vector3.zero };
            var (p16, _, _) = s2.Step(0, -7376, 0, 16f);
            Assert.AreEqual(0, p16, 1);
            var (p4, _, _) = new Sway { Rate = new Vector3Int(100, 0, 0), Max = new Vector3Int(200, 0, 0), Accel = Vector3.one, T = Vector3.zero }.Step(0, -7376, 0, 4f);
            Assert.AreEqual(200, p4, 1);
        }
    }
}
