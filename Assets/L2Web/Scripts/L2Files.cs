// Arquivos cifrados do cliente (93 §1): cabecalho UTF-16 "Lineage2VerNNN" de 28 bytes e o corpo.
//   Ver111 (.u, .int, Localization.ini, .usx, .unr, .uax): XOR 0xAC byte a byte.
//   Ver121 (.utx): XOR com um byte tirado do nome do arquivo (FL2FileDecryptArchive do L2.exe, FUN_10906720: soma dos
//     caracteres do nome, de tras ate a 1a barra, com A-Z em minusculas; so o byte baixo vale). Outras versoes fora de
//     111/121/211-212/311/411-413 (ex.: Ver821 de pacotes customizados) ficam com chave 0 no original.
//   Ver413 (.dat, user.ini, l2.ini): blocos RSA de 128 bytes (sem padding) + zlib, com uma cauda de 20 bytes ignorada.
//     Este cliente usa a chave embutida no L2.exe (modulo 75b4..., e = 0x1D); a chave original da NCsoft (97df..., e = 0x35)
//     esta no Core.dll/engine.dll mas nao decifra nenhum arquivo dele. As duas sao tentadas, como no scripts/l2dec413.py.
using System;
using System.Globalization;
using System.IO;
using System.IO.Compression;
using System.Numerics;
using System.Text;

namespace L2Web
{
    public static class L2Files
    {
        const int HeaderSize = 28;

        static readonly (BigInteger n, BigInteger e)[] Ver413Keys =
        {
            (Hex("97df398472ddf737ef0a0cd17e8d172f0fef1661a38a8ae1d6e829bc1c6e4c3cfc19292dda9ef90175e46e7394a18850b6417d03be6eea" +
                 "274d3ed1dde5b5d7bde72cc0a0b71d03608655633881793a02c9a67d9ef2b45eb7c08d4be329083ce450e68f7867b6749314d40511d09bc574" +
                 "4551baa86a89dc38123dc1668fd72d83"), 0x35),
            (Hex("75b4d6de5c016544068a1acf125869f43d2e09fc55b8b1e289556daf9b8757635593446288b3653da1ce91c87bb1a5c18f16323495c55d7d72" +
                 "c0890a83f69bfd1fd9434eb1c02f3e4679edfa43309319070129c267c85604d87bb65bae205de3707af1d2108881abb567c3b3d069ae67c3a4c6a3" +
                 "aa93d26413d4c66094ae2039"), 0x1d),
        };

        static BigInteger Hex(string h) => BigInteger.Parse("0" + h, NumberStyles.HexNumber);

        /// <summary>Versao do cabecalho ("Lineage2Ver413" -> 413), ou 0 se o arquivo nao tem cabecalho.</summary>
        public static int Version(byte[] raw)
        {
            if (raw == null || raw.Length < HeaderSize) return 0;
            var h = Encoding.Unicode.GetString(raw, 0, HeaderSize);
            return h.StartsWith("Lineage2Ver", StringComparison.Ordinal) && int.TryParse(h.Substring(11), out var v) ? v : 0;
        }

        /// <summary>Corpo decifrado conforme a versao do cabecalho (111, 121 ou 413). Ver121 precisa do nome do arquivo.</summary>
        public static byte[] Decrypt(byte[] raw, string fileName = null)
        {
            switch (Version(raw))
            {
                case 111: return DecryptVer111(raw);
                case 121:
                    if (fileName == null) throw new ArgumentException("Ver121 precisa do nome do arquivo");
                    return DecryptVer121(raw, fileName);
                case 413: return DecryptVer413(raw);
                default: throw new InvalidDataException($"formato nao suportado: Lineage2Ver{Version(raw)}");
            }
        }

        /// <summary>FUN_10906720 do L2.exe: chave do Ver121 pelo nome (caminho aceito; conta so o que vem depois da ultima barra).</summary>
        public static byte Ver121Key(string path)
        {
            var sum = 0;
            for (var i = path.Length - 1; i >= 0 && path[i] != '\\' && path[i] != '/'; i--)
            {
                var c = path[i];
                sum += c > '@' && c < '[' ? c + 0x20 : c;
            }
            return (byte)sum;
        }

        public static byte[] DecryptVer121(byte[] raw, string fileName)
        {
            var k = Ver121Key(fileName);
            var body = new byte[raw.Length - HeaderSize];
            for (var i = 0; i < body.Length; i++) body[i] = (byte)(raw[HeaderSize + i] ^ k);
            return body;
        }

        public static byte[] DecryptVer111(byte[] raw)
        {
            var body = new byte[raw.Length - HeaderSize];
            for (var i = 0; i < body.Length; i++) body[i] = (byte)(raw[HeaderSize + i] ^ 0xAC);
            return body;
        }

        public static byte[] DecryptVer413(byte[] raw)
        {
            var len = (raw.Length - HeaderSize) / 128 * 128; // descarta a cauda de 20 bytes
            if (len <= 0) throw new InvalidDataException("Ver413 sem blocos");
            // a chave certa deixa os 3 primeiros bytes do 1o bloco zerados
            var key = Array.Find(Ver413Keys, k =>
            {
                var m = Block(raw, HeaderSize, k);
                return m[0] == 0 && m[1] == 0 && m[2] == 0;
            });
            if (key.n.IsZero) throw new InvalidDataException("nenhuma chave conhecida decifra este arquivo");
            var packed = new MemoryStream(len);
            for (var off = HeaderSize; off < HeaderSize + len; off += 128)
            {
                var m = Block(raw, off, key);
                int size = m[3];
                var pad = ((124 - size) % 4 + 4) % 4;
                packed.Write(m, 128 - size - pad, size);
            }
            var buf = packed.GetBuffer();
            var expected = BitConverter.ToInt32(buf, 0);
            // zlib: 4 bytes do tamanho, 2 de cabecalho, deflate e adler32 no fim
            using var inflate = new DeflateStream(new MemoryStream(buf, 6, (int)packed.Length - 6), CompressionMode.Decompress);
            var outp = new MemoryStream(Math.Max(expected, 0));
            inflate.CopyTo(outp);
            var data = outp.ToArray();
            if (data.Length != expected) throw new InvalidDataException($"Ver413: {data.Length} bytes, esperado {expected}");
            return data;
        }

        /// <summary>Um bloco RSA de 128 bytes (big-endian), decifrado com m = c^e mod n.</summary>
        static byte[] Block(byte[] raw, int off, (BigInteger n, BigInteger e) key)
        {
            var c = new byte[129]; // little-endian com um zero no fim (positivo)
            for (var i = 0; i < 128; i++) c[i] = raw[off + 127 - i];
            var m = BigInteger.ModPow(new BigInteger(c), key.e, key.n).ToByteArray();
            var outp = new byte[128];
            for (var i = 0; i < Math.Min(128, m.Length); i++) outp[127 - i] = m[i];
            return outp;
        }
    }
}
