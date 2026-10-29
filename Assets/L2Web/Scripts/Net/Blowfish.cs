// Blowfish ECB igual ao BlowfishEngine do aCis: agenda de chave padrao (bytes da chave em big-endian),
// mas cada metade de 32 bits do bloco e lida e gravada em little-endian.
using System;

namespace L2Web.Net
{
    public sealed class Blowfish
    {
        const int Rounds = 16;

        readonly uint[] P = new uint[Rounds + 2];
        readonly uint[] S0 = new uint[256];
        readonly uint[] S1 = new uint[256];
        readonly uint[] S2 = new uint[256];
        readonly uint[] S3 = new uint[256];
        uint pair0, pair1;

        public Blowfish(byte[] key)
        {
            Array.Copy(BlowfishTables.KP, P, P.Length);
            Array.Copy(BlowfishTables.KS0, S0, 256);
            Array.Copy(BlowfishTables.KS1, S1, 256);
            Array.Copy(BlowfishTables.KS2, S2, 256);
            Array.Copy(BlowfishTables.KS3, S3, 256);
            var k = 0;
            for (var i = 0; i < Rounds + 2; i++)
            {
                uint data = 0;
                for (var j = 0; j < 4; j++)
                {
                    data = (data << 8) | key[k++];
                    if (k >= key.Length) k = 0;
                }
                P[i] ^= data;
            }
            FillTable(0, 0, P);
            FillTable(P[Rounds], P[Rounds + 1], S0);
            FillTable(S0[254], S0[255], S1);
            FillTable(S1[254], S1[255], S2);
            FillTable(S2[254], S2[255], S3);
        }

        uint Fn(uint x) => unchecked(((S0[x >> 24] + S1[(x >> 16) & 0xff]) ^ S2[(x >> 8) & 0xff]) + S3[x & 0xff]);

        void Enc(uint xl, uint xr)
        {
            xl ^= P[0];
            for (var i = 1; i < Rounds; i += 2)
            {
                xr ^= Fn(xl) ^ P[i];
                xl ^= Fn(xr) ^ P[i + 1];
            }
            xr ^= P[Rounds + 1];
            pair0 = xr;
            pair1 = xl;
        }

        void Dec(uint xl, uint xr)
        {
            xl ^= P[Rounds + 1];
            for (var i = Rounds; i > 0; i -= 2)
            {
                xr ^= Fn(xl) ^ P[i];
                xl ^= Fn(xr) ^ P[i - 1];
            }
            xr ^= P[0];
            pair0 = xr;
            pair1 = xl;
        }

        void FillTable(uint xl, uint xr, uint[] table)
        {
            for (var s = 0; s < table.Length; s += 2)
            {
                Enc(xl, xr);
                table[s] = pair0;
                table[s + 1] = pair1;
                xl = pair0;
                xr = pair1;
            }
        }

        /// <summary>Cifra em bloco (tamanho multiplo de 8), no proprio buffer. size &lt; 0 = ate o fim.</summary>
        public void Encrypt(byte[] raw, int offset = 0, int size = -1) => Run(raw, offset, size < 0 ? raw.Length - offset : size, true);

        /// <summary>Decifra em bloco (tamanho multiplo de 8), no proprio buffer. size &lt; 0 = ate o fim.</summary>
        public void Decrypt(byte[] raw, int offset = 0, int size = -1) => Run(raw, offset, size < 0 ? raw.Length - offset : size, false);

        void Run(byte[] raw, int offset, int size, bool encrypting)
        {
            if (size % 8 != 0) throw new ArgumentException($"Blowfish: tamanho {size} nao e multiplo de 8");
            for (var p = offset; p < offset + size; p += 8)
            {
                var xl = GetLE(raw, p);
                var xr = GetLE(raw, p + 4);
                if (encrypting) Enc(xl, xr);
                else Dec(xl, xr);
                PutLE(raw, p, pair0);
                PutLE(raw, p + 4, pair1);
            }
        }

        public static uint GetLE(byte[] b, int i) => (uint)(b[i] | (b[i + 1] << 8) | (b[i + 2] << 16) | (b[i + 3] << 24));

        public static void PutLE(byte[] b, int i, uint v)
        {
            b[i] = (byte)(v & 0xff);
            b[i + 1] = (byte)((v >> 8) & 0xff);
            b[i + 2] = (byte)((v >> 16) & 0xff);
            b[i + 3] = (byte)((v >> 24) & 0xff);
        }
    }
}
