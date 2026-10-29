// A1/A2 da matriz (Docs/validacao.md): leitura Ver413 e Ver111 dos arquivos do cliente, comparada com a saida do
// scripts/l2dec413.py do l2anim (Golden/dat_files.json: tamanho, SHA-256 e os primeiros bytes de cada arquivo).
using System.IO;
using System.Linq;
using System.Security.Cryptography;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class FileFormatTests
    {
        static string Sha256(byte[] b)
        {
            using var sha = SHA256.Create();
            return string.Concat(sha.ComputeHash(b).Select(x => x.ToString("x2")));
        }

        [TestCase("sysstring-e.dat")]
        [TestCase("systemmsg-e.dat")]
        [TestCase("commandname-e.dat")]
        [TestCase("obscene-e.dat")]
        [TestCase("skillgrp.dat")]
        public void Ver413_IgualAoL2dec413(string file)
        {
            var g = Golden.Load("dat_files.json")[file];
            var raw = File.ReadAllBytes(Path.Combine(Golden.ClientSystem, file));
            Assert.AreEqual(413, L2Files.Version(raw));
            var data = L2Files.Decrypt(raw);
            Assert.AreEqual((int)g["size"], data.Length);
            Assert.AreEqual((string)g["head"], string.Concat(data.Take(32).Select(x => x.ToString("x2"))));
            Assert.AreEqual((string)g["sha256"], Sha256(data));
        }

        [Test]
        public void Ver121_ChaveDoNome()
        {
            // FUN_10906720: so o nome depois da ultima barra conta, A-Z viram minusculas, fica o byte baixo
            Assert.AreEqual(0x0d, L2Files.Ver121Key(@"C:\x\Textures\Elmo_fielddeco_T.utx"));
            Assert.AreEqual(L2Files.Ver121Key("elmo_fielddeco_t.utx"), L2Files.Ver121Key("a/ELMO_FIELDDECO_T.UTX"));
        }

        [Test]
        public void Ver121_TodosOsUtx_PacoteUE2()
        {
            // os .utx Ver121 de Textures e SysTextures: assinatura 0x9E2A83C1, versao do UE2 e a tabela de nomes legivel
            var root = Path.GetDirectoryName(Golden.ClientSystem);
            var files = new[] { "Textures", "SysTextures" }.SelectMany(d => Directory.GetFiles(Path.Combine(root, d), "*.utx")).ToList();
            var bmps = Directory.GetFiles(Path.Combine(root, "SysTextures"), "*.bmp");
            var n = 0;
            var wrongKey = new System.Collections.Generic.List<string>();
            foreach (var f in files)
            {
                using var fs = File.OpenRead(f);
                var head = new byte[28 + 36];
                fs.Read(head, 0, head.Length);
                if (L2Files.Version(head) != 121) continue;
                n++;
                var k = L2Files.Ver121Key(f);
                var h = head.Skip(28).Select(b => (byte)(b ^ k)).ToArray();
                if (System.BitConverter.ToUInt32(h, 0) != 0x9E2A83C1u)
                {
                    wrongKey.Add(Path.GetFileName(f));
                    continue;
                }
                var ver = System.BitConverter.ToUInt16(h, 4);
                Assert.IsTrue(ver >= 100 && ver <= 128, $"{f}: versao {ver}"); // 123 quase todos; themepark_kerthang_t e 118
                var nameCount = System.BitConverter.ToInt32(h, 12);
                var nameOffset = System.BitConverter.ToInt32(h, 16);
                Assert.Greater(nameCount, 0, f);
                Assert.Less(nameOffset, fs.Length - 28, f);
                // 1o nome: indice compacto (tamanho com o zero) + ASCII imprimivel
                fs.Seek(28 + nameOffset, SeekOrigin.Begin);
                var nb = new byte[64];
                fs.Read(nb, 0, nb.Length);
                for (var i = 0; i < nb.Length; i++) nb[i] ^= k;
                var len = nb[0] & 0x3f;
                Assert.IsTrue(len > 1 && (nb[0] & 0xc0) == 0, f);
                var name = System.Text.Encoding.ASCII.GetString(nb, 1, len - 1);
                Assert.IsTrue(name.All(c => c >= 0x20 && c < 0x7f), $"{f}: {name}");
                Assert.AreEqual(0, nb[len], f);
            }
            Assert.AreEqual(384 + 262, n, "Textures 384 + SysTextures 262 (os Ver821 e os sem cabecalho sao pacotes customizados)");
            // os .bmp Ver121 da SysTextures (telas de carregamento) tambem: "BM" depois do XOR
            foreach (var f in bmps)
            {
                var raw = File.ReadAllBytes(f);
                Assert.AreEqual(121, L2Files.Version(raw), f);
                var body = L2Files.Decrypt(raw, f);
                Assert.AreEqual("BM", System.Text.Encoding.ASCII.GetString(body, 0, 2), f);
                Assert.AreEqual(0, System.BitConverter.ToInt32(body, 6), f); // reservados
                Assert.AreEqual(40, System.BitConverter.ToInt32(body, 14), f); // BITMAPINFOHEADER
            }
            Assert.AreEqual(22, bmps.Length);
            // logocw.utx (2023, do servidor) foi cifrado com outro nome: a chave dele nao sai do nome, nem no L2.exe
            CollectionAssert.AreEqual(new[] { "logocw.utx" }, wrongKey);
        }

        [Test]
        public void Ver111_InterfaceU_AssinaturaUE2()
        {
            var g = Golden.Load("dat_files.json")["Interface.u"];
            var raw = File.ReadAllBytes(Path.Combine(Golden.ClientSystem, "Interface.u"));
            Assert.AreEqual(111, L2Files.Version(raw));
            var data = L2Files.Decrypt(raw);
            // pacote UE2: assinatura 0x9E2A83C1 e versao 123
            Assert.AreEqual(0x9E2A83C1u, System.BitConverter.ToUInt32(data, 0));
            Assert.AreEqual(123, System.BitConverter.ToUInt16(data, 4));
            Assert.AreEqual((int)g["size"], data.Length);
            Assert.AreEqual((string)g["sha256"], Sha256(data));
        }

        [Test]
        public void Ver111_Localization_IdiomaIngles()
        {
            var raw = File.ReadAllBytes(Path.Combine(Golden.ClientSystem, "Localization.ini"));
            var body = L2Files.Decrypt(raw);
            // .ini Ver111: texto ANSI, ou UTF-16 quando comeca com o BOM FF FE
            var text = body.Length > 1 && body[0] == 0xFF && body[1] == 0xFE ? System.Text.Encoding.Unicode.GetString(body) : System.Text.Encoding.ASCII.GetString(body);
            var m = System.Text.RegularExpressions.Regex.Match(text, @"\[LanguageSet\]\s*Language=(\d+)");
            Assert.IsTrue(m.Success, "sem [LanguageSet] Language");
            Assert.AreEqual(Net.GamePackets.LanguageType, int.Parse(m.Groups[1].Value));
        }
    }
}
