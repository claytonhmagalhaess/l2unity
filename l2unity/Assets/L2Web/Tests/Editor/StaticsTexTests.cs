// Texturas unicas do cenario (#0023, Docs/tools/dedup_statics_tex.py): o .glb reescrito, com images[].uri
// "../statics_tex/<sha256>.png" no lugar do bufferView, carrega pelo glTFast igual ao original. Fixture em
// Tests/Data/statics_tex: coin00 (LineageEffectsStaticmeshes.Etc.coin00, 2 materiais MASK, texturas 64x64 e 16x16) antes e
// depois do script, e os dois PNG que ele gravou; os nomes terminam em .bin para o Unity nao importar.
using System.Collections;
using System.IO;
using System.Threading.Tasks;
using GLTFast;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace L2Web.Tests
{
    public class StaticsTexTests
    {
        static string Fixture(string f) => Path.Combine(Application.dataPath, "L2Web/Tests/Data/statics_tex", f);

        /// <summary>Monta statics/ e statics_tex/ numa pasta temporaria, como no cache, e devolve as duas URLs.</summary>
        static (string orig, string dedup) Layout()
        {
            var root = Path.Combine(Path.GetTempPath(), "l2web_statics_tex_test");
            if (Directory.Exists(root)) Directory.Delete(root, true);
            Directory.CreateDirectory(Path.Combine(root, "orig"));
            Directory.CreateDirectory(Path.Combine(root, "statics"));
            Directory.CreateDirectory(Path.Combine(root, "statics_tex"));
            File.Copy(Fixture("coin00.orig.glb.bin"), Path.Combine(root, "orig", "coin00.glb"));
            File.Copy(Fixture("coin00.glb.bin"), Path.Combine(root, "statics", "coin00.glb"));
            foreach (var f in Directory.GetFiles(Path.GetDirectoryName(Fixture("x")), "*.png.bin"))
                File.Copy(f, Path.Combine(root, "statics_tex", Path.GetFileNameWithoutExtension(f)));
            return (new System.Uri(Path.Combine(root, "orig", "coin00.glb")).AbsoluteUri, new System.Uri(Path.Combine(root, "statics", "coin00.glb")).AbsoluteUri);
        }

        static IEnumerator Wait(Task t)
        {
            while (!t.IsCompleted) yield return null;
            if (t.IsFaulted) throw t.Exception;
        }

        static GltfImport New() => new GltfImport(null, new UninterruptedDeferAgent());

        static ImportSettings Settings() => new ImportSettings { GenerateMipMaps = true, TexturesReadable = true };

        [Test]
        public void Glb_Reescrito_NaoTemImagemEmbutida()
        {
            var b = File.ReadAllBytes(Fixture("coin00.glb.bin"));
            var json = System.Text.Encoding.UTF8.GetString(b, 20, System.BitConverter.ToInt32(b, 12));
            StringAssert.Contains("\"uri\":\"../statics_tex/4886eb0bc912645468b13843870031dd80ec9ce57af1a96731b74276f8b5ea83.png\"", json);
            StringAssert.Contains("\"name\":\"cbui24.png\"", json);
            Assert.Less(b.Length, File.ReadAllBytes(Fixture("coin00.orig.glb.bin")).Length / 4);
        }

        [Test]
        public void StaticsTex_ServidoPelosAssetsLocais()
        {
            var f = LocalAssets.FileFor("/statics_tex/abc.png");
            Assert.IsNotNull(f);
            StringAssert.EndsWith(Path.Combine("cache", "statics_tex", "abc.png"), f);
        }

        [UnityTest]
        public IEnumerator Glb_Reescrito_CarregaIgualAoOriginal()
        {
            var (origUrl, dedupUrl) = Layout();
            var a = New();
            var b = New();
            try
            {
                var la = a.Load(origUrl, Settings());
                yield return Wait(la);
                var lb = b.Load(dedupUrl, Settings());
                yield return Wait(lb);
                Assert.IsTrue(la.Result, "original");
                Assert.IsTrue(lb.Result, "reescrito");

                var ma = a.GetMeshes();
                var mb = b.GetMeshes();
                Assert.AreEqual(ma.Length, mb.Length, "malhas");
                for (var i = 0; i < ma.Length; i++)
                {
                    Assert.AreEqual(ma[i].vertexCount, mb[i].vertexCount, "vertices");
                    Assert.AreEqual(ma[i].subMeshCount, mb[i].subMeshCount, "submalhas");
                    CollectionAssert.AreEqual(ma[i].vertices, mb[i].vertices, "posicoes");
                    CollectionAssert.AreEqual(ma[i].uv, mb[i].uv, "uv");
                    CollectionAssert.AreEqual(ma[i].triangles, mb[i].triangles, "indices");
                }

                Assert.AreEqual(2, a.MaterialCount);
                Assert.AreEqual(a.MaterialCount, b.MaterialCount, "materiais");
                for (var i = 0; i < a.MaterialCount; i++)
                {
                    Assert.AreEqual(a.GetMaterial(i).name, b.GetMaterial(i).name);
                    Assert.AreEqual(a.GetMaterial(i).shader, b.GetMaterial(i).shader);
                }

                Assert.AreEqual(2, a.TextureCount);
                Assert.AreEqual(a.TextureCount, b.TextureCount, "texturas");
                for (var i = 0; i < a.TextureCount; i++)
                {
                    Texture2D ta = a.GetTexture(i), tb = b.GetTexture(i);
                    Assert.AreEqual(ta.name, tb.name, "nome");
                    Assert.AreEqual(ta.width, tb.width, ta.name);
                    Assert.AreEqual(ta.height, tb.height, ta.name);
                    Assert.AreEqual(ta.wrapMode, tb.wrapMode, ta.name);
                    Assert.AreEqual(ta.filterMode, tb.filterMode, ta.name);
                    CollectionAssert.AreEqual(ta.GetPixels32(), tb.GetPixels32(), ta.name);
                }
                Assert.AreEqual(new Vector2Int(64, 64), new Vector2Int(a.GetTexture(0).width, a.GetTexture(0).height));
                Assert.AreEqual(new Vector2Int(16, 16), new Vector2Int(a.GetTexture(1).width, a.GetTexture(1).height));
            }
            finally
            {
                a.Dispose();
                b.Dispose();
            }
        }
    }
}
