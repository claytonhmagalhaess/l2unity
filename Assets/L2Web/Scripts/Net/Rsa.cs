// RSA do login (RSA/ECB/NoPadding, e = 65537) com o modulo "scrambled" do ScrambledKeyPair do aCis.
using System;
using System.Numerics;

namespace L2Web.Net
{
    public static class Rsa
    {
        public static readonly BigInteger DefaultExponent = new BigInteger(65537);

        /// <summary>Desfaz scrambleModulus: aplica os 4 passos na ordem inversa.</summary>
        public static byte[] UnscrambleModulus(byte[] scrambled)
        {
            var n = (byte[])scrambled.Clone();
            if (n.Length != 128) throw new ArgumentException($"modulo com {n.Length} bytes");
            for (var i = 0; i < 0x40; i++) n[0x40 + i] ^= n[i];
            for (var i = 0; i < 4; i++) n[0x0d + i] ^= n[0x34 + i];
            for (var i = 0; i < 0x40; i++) n[i] ^= n[0x40 + i];
            for (var i = 0; i < 4; i++)
            {
                var t = n[i];
                n[i] = n[0x4d + i];
                n[0x4d + i] = t;
            }
            return n;
        }

        /// <summary>Inverso exato (para testes).</summary>
        public static byte[] ScrambleModulus(byte[] mod)
        {
            var n = (byte[])mod.Clone();
            for (var i = 0; i < 4; i++)
            {
                var t = n[i];
                n[i] = n[0x4d + i];
                n[0x4d + i] = t;
            }
            for (var i = 0; i < 0x40; i++) n[i] ^= n[0x40 + i];
            for (var i = 0; i < 4; i++) n[0x0d + i] ^= n[0x34 + i];
            for (var i = 0; i < 0x40; i++) n[0x40 + i] ^= n[i];
            return n;
        }

        /// <summary>Bytes big-endian sem sinal para inteiro (o BigInteger(byte[]) do .NET e little-endian com sinal).</summary>
        public static BigInteger BytesToBig(byte[] b)
        {
            var le = new byte[b.Length + 1]; // byte 0 no fim: sempre positivo
            for (var i = 0; i < b.Length; i++) le[i] = b[b.Length - 1 - i];
            return new BigInteger(le);
        }

        /// <summary>Os `len` bytes menos significativos de v, em big-endian.</summary>
        public static byte[] BigToBytes(BigInteger v, int len)
        {
            var le = v.ToByteArray(); // little-endian, complemento de 2
            var o = new byte[len];
            var fill = v.Sign < 0 ? (byte)0xff : (byte)0;
            for (var i = 0; i < len; i++) o[len - 1 - i] = i < le.Length ? le[i] : fill;
            return o;
        }

        public static BigInteger ModPow(BigInteger b, BigInteger exp, BigInteger mod) => BigInteger.ModPow(b, exp, mod);

        /// <summary>Cifra um bloco de 128 bytes com a chave publica (modulo ja "desembaralhado").</summary>
        public static byte[] RsaEncrypt(byte[] block, byte[] modulus) => RsaEncrypt(block, modulus, DefaultExponent);

        public static byte[] RsaEncrypt(byte[] block, byte[] modulus, BigInteger e) =>
            BigToBytes(BigInteger.ModPow(BytesToBig(block), e, BytesToBig(modulus)), 128);

        /// <summary>Bloco de credenciais do RequestAuthLogin: usuario em 0x5E (14 bytes), senha em 0x6C (16 bytes).</summary>
        public static byte[] CredentialBlock(string user, string password)
        {
            var b = new byte[128];
            void Put(string s, int at, int max)
            {
                for (var i = 0; i < Math.Min(s.Length, max); i++) b[at + i] = (byte)(s[i] & 0xff);
            }
            Put(user ?? "", 0x5e, 14);
            Put(password ?? "", 0x6c, 16);
            return b;
        }
    }
}
