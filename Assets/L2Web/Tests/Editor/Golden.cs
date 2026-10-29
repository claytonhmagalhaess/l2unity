// Fixtures golden dos testes de paridade (Tests/Editor/Golden), geradas por Docs/tools/gen_golden.py a partir das
// evidencias do l2anim (out/re) e dos arquivos do cliente original.
using System.IO;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public static class Golden
    {
        public static string Dir => Path.Combine(Application.dataPath, "L2Web/Tests/Editor/Golden");

        public static JToken Load(string name)
        {
            var f = Path.Combine(Dir, name);
            if (!File.Exists(f)) Assert.Ignore($"sem a fixture {name} (rode python -I Docs/tools/gen_golden.py)");
            return JToken.Parse(File.ReadAllText(f));
        }

        /// <summary>Pasta System do cliente original (os testes que leem arquivos dele sao ignorados se ela nao existir).</summary>
        public static string ClientSystem
        {
            get
            {
                const string dir = @"C:\Program Files (x86)\Lineage II Interlude\System";
                if (!Directory.Exists(dir)) Assert.Ignore("cliente original nao instalado em " + dir);
                return dir;
            }
        }

        public static byte[] Hex(string h)
        {
            var b = new byte[h.Length / 2];
            for (var i = 0; i < b.Length; i++) b[i] = System.Convert.ToByte(h.Substring(i * 2, 2), 16);
            return b;
        }
    }
}
