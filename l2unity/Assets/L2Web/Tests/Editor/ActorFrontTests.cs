// Frente do modelo (#0062): o engine aplica o RotOrigin da malha esqueletica entre o mesh e o ator (ULodMesh::RotOrigin;
// "#exec MESH ORIGIN ... YAW=192" no .uc do umodel = rotator Y=49152). O psk/glb do umodel sai sem ele, com a frente do rig
// em +Z do Unity. O porte media a frente pelos ossos do pe com os nomes do three.js ("bip01_l_toe0"), mas o glTFast mantem o
// espaco dos rigs de NPC ("Bip01 L Toe0"): os NPCs ficavam sem correcao, de lado (andando e atacando).
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;
using GLTFast;
using L2Web.Render;
using L2Web.World;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace L2Web.Tests
{
    public class ActorFrontTests
    {
        /// <summary>Direcao no Unity de um heading do L2 (Coords: unity = (-x, z, y)).</summary>
        static Vector3 HeadingDir(int h)
        {
            var a = h / 65536f * Mathf.PI * 2;
            return Coords.ToUnity(Mathf.Cos(a), Mathf.Sin(a), 0).normalized;
        }

        /// <summary>Root -> Yaw (heading, como Entity.Sync) -> Model (RotOrigin) aplicado a um vetor do rig.</summary>
        static Vector3 Draw(int heading, string mesh, Vector3 rig) =>
            Quaternion.Euler(0, Coords.HeadingToUnityDeg(heading), 0) * Actor.MeshRotOrigin(mesh) * rig;

        [Test]
        public void RotOrigin_PadraoMenos90()
        {
            Assert.AreEqual(49152, Actor.MeshRotOriginYaw);
            Assert.AreEqual(49152, Actor.MeshRotOriginYawOf("batur_orc_m00"));
            Assert.AreEqual(49152, Actor.MeshRotOriginYawOf("LineageMonsters.batur_orc_m00"));
            Assert.AreEqual(49152, Actor.MeshRotOriginYawOf("MFighter_m001_b"));
            Assert.AreEqual(49152, Actor.MeshRotOriginYawOf(null), "sem nome: o padrao de todas as malhas");
            Assert.AreEqual(0, Actor.MeshRotOriginYawOf("LineageMonsters.susceptor_prime_m00"));
            Assert.AreEqual(0, Actor.MeshRotOriginYawOf("skill_dummy_00_m00"));
        }

        [Test]
        public void FrenteDoRig_ApontaParaOHeading([Values(0, 8192, 16384, 32768, 49152, 60000)] int heading)
        {
            // a frente do rig do umodel e +Z do Unity (+Y do mesh do UE); com o RotOrigin vira o heading do pawn
            var front = Draw(heading, "batur_orc_m00", Vector3.forward);
            Assert.Less(Vector3.Angle(front, HeadingDir(heading)), 0.1f, $"heading {heading}");
        }

        [Test]
        public void SemRotOrigin_FicaDeLado()
        {
            // o defeito: sem a correcao (Model identidade) o NPC aponta 90 graus a esquerda do heading
            var front = Quaternion.Euler(0, Coords.HeadingToUnityDeg(0), 0) * Vector3.forward;
            Assert.AreEqual(90f, Vector3.Angle(front, HeadingDir(0)), 0.1f);
            Assert.Less(Vector3.Angle(front, HeadingDir(16384)), 0.1f);
        }

        // ------------------------------------------------------------ rigs reais do cache do l2anim

        static IEnumerator Wait(Task t)
        {
            while (!t.IsCompleted) yield return null;
            if (t.IsFaulted) throw t.Exception;
        }

        static Dictionary<string, Transform> Bones(Transform root)
        {
            var d = new Dictionary<string, Transform>();
            foreach (var t in root.GetComponentsInChildren<Transform>(true)) d[t.name.ToLowerInvariant().Replace(' ', '_')] = t;
            return d;
        }

        static Vector3 Mid(Dictionary<string, Transform> b, Transform space, params string[] names)
        {
            var s = Vector3.zero;
            foreach (var n in names) s += space.InverseTransformPoint(b[n].position);
            return s / names.Length;
        }

        static Vector3 Flat(Vector3 v)
        {
            v.y = 0;
            return v.normalized;
        }

        /// <summary>
        /// Carrega o glb de animacao do cache, monta Yaw (heading 0) -> Model (RotOrigin) -> rig como o Actor, e devolve as
        /// direcoes pe -> dedos e bacia -> cabeca no espaco do Yaw (-X = heading 0). Ignora se o cache nao existe.
        /// </summary>
        static IEnumerator Rig(string glb, string mesh, System.Action<Vector3, Vector3, bool> check)
        {
            var file = LocalAssets.FileFor("/cache/anim/" + glb);
            if (file == null || !File.Exists(file)) Assert.Ignore("cache do l2anim ausente: " + glb);
            var g = new GltfImport(null, new UninterruptedDeferAgent());
            var yaw = new GameObject("Yaw").transform;
            try
            {
                var load = g.Load(new System.Uri(file).AbsoluteUri, new ImportSettings { AnimationMethod = AnimationMethod.Legacy });
                yield return Wait(load);
                Assert.IsTrue(load.Result, glb);
                var model = new GameObject("Model").transform;
                model.SetParent(yaw, false);
                model.localRotation = Actor.MeshRotOrigin(mesh);
                var inst = new GameObjectInstantiator(g, model, null, new InstantiationSettings { SceneObjectCreation = SceneObjectCreation.Always });
                var ok = g.InstantiateMainSceneAsync(inst);
                yield return Wait(ok);
                var b = Bones(model);
                var spaced = false;
                foreach (var t in model.GetComponentsInChildren<Transform>(true))
                    if (t.name.StartsWith("Bip01 ")) spaced = true;
                var feet = Flat(Mid(b, yaw, "bip01_l_toe0", "bip01_r_toe0") - Mid(b, yaw, "bip01_l_foot", "bip01_r_foot"));
                var body = Flat(Mid(b, yaw, "bip01_head") - Mid(b, yaw, "bip01_pelvis"));
                check(feet, body, spaced);
            }
            finally
            {
                Object.DestroyImmediate(yaw.gameObject);
                g.Dispose();
            }
        }

        [UnityTest]
        public IEnumerator Orc_NpcComEspacoNosOssos_OlhaParaOHeading() =>
            Rig("LineageMonsters.batur_orc_anim.glb", "batur_orc_m00", (feet, _, spaced) =>
            {
                Assert.IsTrue(spaced, "o glTFast mantem 'Bip01 L Toe0' (o three trocava por '_')");
                Assert.Less(Vector3.Angle(feet, Vector3.left), 5f, "pes -> dedos no heading 0 (-X)");
            });

        [UnityTest]
        public IEnumerator Jogador_OlhaParaOHeading() =>
            Rig("Fighter.MFighter_anim.glb", "MFighter_m001_b", (feet, _, spaced) =>
            {
                Assert.IsFalse(spaced);
                Assert.Less(Vector3.Angle(feet, Vector3.left), 5f, "igual a medida antiga pelos pes (-90)");
            });

        [UnityTest]
        public IEnumerator Valakas_ToeParaTras_CorpoParaOHeading() =>
            Rig("LineageMonsters2.valakas_anim.glb", "valakas_m00", (feet, body, _) =>
            {
                Assert.Less(Vector3.Angle(body, Vector3.left), 30f, "a cabeca fica a frente da bacia, no heading 0");
                Assert.Greater(Vector3.Angle(feet, Vector3.left), 150f, "o Toe0 aponta para tras: a medida pelos pes girava 180");
            });
    }
}
