// Prototipo da fase 3 da #0023 (compressao de GPU das texturas do cenario), desligado por padrao; nao muda nenhum asset.
//   -l2gpucomp                comprime as texturas dos moldes de StaticMesh e do BSP logo depois da carga (DXT1 quando a
//                             textura nao tem alfa, DXT5 quando tem; Texture2D.Compress de alta qualidade, com os mips), para
//                             capturar a mesma vista com PNG e com BC
//   -l2gpubench lista saida   para cada PNG da lista (um caminho por linha), mede o tamanho em PNG, em BC com mips e em BC
//                             com gzip, e o tempo de LoadImage do PNG contra LoadRawTextureData do BC pronto; grava um TSV em
//                             saida e fecha o jogo
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.IO.Compression;
using System.Text;
using UnityEngine;
using Debug = UnityEngine.Debug;

namespace L2Web.Render
{
    public class GpuTexProto : MonoBehaviour
    {
        /// <summary>-l2gpucomp: texturas do cenario comprimidas na GPU depois da carga.</summary>
        public static readonly bool Enabled = Array.IndexOf(Environment.GetCommandLineArgs(), "-l2gpucomp") >= 0;

        static readonly Dictionary<Texture2D, Texture2D> done = new();
        public static long Count, BytesBefore, BytesAfter;

        static bool HasAlpha(Color32[] px)
        {
            foreach (var p in px)
                if (p.a != 255)
                    return true;
            return false;
        }

        /// <summary>Copia em BC (DXT1 opaca, DXT5 com alfa), com os mesmos mips, filtro e repeticao; a textura precisa ser legivel.</summary>
        public static Texture2D ToBc(Texture2D src)
        {
            var mips = src.mipmapCount;
            var alpha = HasAlpha(src.GetPixels32(0));
            var dst = new Texture2D(src.width, src.height, alpha ? TextureFormat.RGBA32 : TextureFormat.RGB24, mips > 1)
            {
                name = src.name, wrapModeU = src.wrapModeU, wrapModeV = src.wrapModeV, filterMode = src.filterMode, anisoLevel = src.anisoLevel,
            };
            for (var m = 0; m < mips; m++) dst.SetPixels32(src.GetPixels32(m), m);
            dst.Apply(false);
            dst.Compress(true);
            return dst;
        }

        static long RgbaBytes(Texture2D t)
        {
            long n = 0;
            for (int m = 0, w = t.width, h = t.height; m < t.mipmapCount; m++, w = Math.Max(1, w / 2), h = Math.Max(1, h / 2)) n += (long)w * h * 4;
            return n;
        }

        /// <summary>Troca as texturas dos materiais pela copia em BC (uma vez por textura).</summary>
        public static void Compress(IEnumerable<Material> mats)
        {
            if (!Enabled) return;
            foreach (var m in mats)
            {
                if (!m) continue;
                foreach (var id in m.GetTexturePropertyNameIDs())
                {
                    if (m.GetTexture(id) is not Texture2D t || !t.isReadable && !done.ContainsKey(t)) continue;
                    if (!done.TryGetValue(t, out var bc))
                    {
                        bc = ToBc(t);
                        BytesAfter += bc.GetRawTextureData<byte>().Length;
                        bc.Apply(false, true);
                        bc.hideFlags |= HideFlags.DontUnloadUnusedAsset;
                        done[t] = bc;
                        Count++;
                        BytesBefore += RgbaBytes(t);
                        if (Count % 500 == 0) Debug.Log($"[gpucomp] {Count} texturas, {BytesBefore / 1048576} MB -> {BytesAfter / 1048576} MB na GPU");
                    }
                    m.SetTexture(id, bc);
                }
            }
        }

        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
        static void Boot()
        {
            var a = Environment.GetCommandLineArgs();
            var i = Array.IndexOf(a, "-l2gpubench");
            if (i < 0 || i + 2 >= a.Length) return;
            var go = new GameObject("l2web gpubench");
            DontDestroyOnLoad(go);
            go.AddComponent<GpuTexProto>().StartCoroutine(Bench(a[i + 1], a[i + 2]));
        }

        static IEnumerator Bench(string list, string outFile)
        {
            yield return null;
            var sb = new StringBuilder("png\tlargura\taltura\tformato\tbytes_png\tbytes_bc\tbytes_bc_gzip\tms_loadimage\tms_loadraw\n");
            long png = 0, bcAll = 0, gz = 0, n = 0;
            double msPng = 0, msBc = 0;
            var sw = new Stopwatch();
            foreach (var line in File.ReadAllLines(list))
            {
                var f = line.Trim();
                if (f.Length == 0 || !File.Exists(f)) continue;
                var bytes = File.ReadAllBytes(f);
                sw.Restart();
                var t = new Texture2D(2, 2, TextureFormat.RGBA32, true);
                t.LoadImage(bytes, false);
                sw.Stop();
                var tPng = sw.Elapsed.TotalMilliseconds;
                var bc = ToBc(t);
                var raw = bc.GetRawTextureData();
                byte[] packed;
                using (var ms = new MemoryStream())
                {
                    using (var z = new GZipStream(ms, System.IO.Compression.CompressionLevel.Optimal, true)) z.Write(raw, 0, raw.Length);
                    packed = ms.ToArray();
                }
                sw.Restart();
                var u = new Texture2D(bc.width, bc.height, bc.format, bc.mipmapCount > 1);
                u.LoadRawTextureData(raw);
                u.Apply(false, true);
                sw.Stop();
                var tBc = sw.Elapsed.TotalMilliseconds;
                sb.Append(FormattableString.Invariant($"{Path.GetFileName(f)}\t{t.width}\t{t.height}\t{bc.format}\t{bytes.Length}\t{raw.Length}\t{packed.Length}\t{tPng:0.000}\t{tBc:0.000}\n"));
                png += bytes.Length;
                bcAll += raw.Length;
                gz += packed.Length;
                msPng += tPng;
                msBc += tBc;
                n++;
                Destroy(t);
                Destroy(bc);
                Destroy(u);
                if (n % 50 == 0) yield return null;
            }
            File.WriteAllText(outFile, sb.ToString());
            Debug.Log($"[gpubench] {n} texturas: PNG {png} bytes, BC {bcAll} bytes, BC+gzip {gz} bytes; LoadImage {msPng:0} ms, LoadRawTextureData {msBc:0} ms");
            Application.Quit();
        }
    }
}
