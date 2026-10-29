// Compara a criptografia em C# com os vetores gerados pelas classes Java do aCis (tools/golden/gen.sh do l2web).
// Porte de test/crypto.test.ts.
using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Numerics;
using L2Web.Net;
using Newtonsoft.Json;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class CryptoTests
    {
        static Dictionary<string, string> g;

        static Dictionary<string, string> G =>
            g ??= JsonConvert.DeserializeObject<Dictionary<string, string>>(File.ReadAllText(Path.Combine(Application.dataPath, "L2Web/Tests/Data", "golden.json")));

        static byte[] H(string k) => Packet.FromHex(G[k]);

        static void Eq(byte[] a, byte[] b) => Assert.AreEqual(Packet.ToHex(b), Packet.ToHex(a));

        static byte[] Sub(byte[] a, int n)
        {
            var o = new byte[n];
            Array.Copy(a, o, n);
            return o;
        }

        [Test]
        public void BlowfishMatchesAcisEngine()
        {
            var bf = new Blowfish(H("bf_key"));
            var buf = H("bf_plain");
            bf.Encrypt(buf);
            Eq(buf, H("bf_cipher"));
            bf.Decrypt(buf);
            Eq(buf, H("bf_plain"));
        }

        [Test]
        public void LoginCryptInitStaticXorPassThenDynamic()
        {
            var lc = new LoginCrypt();
            var init = H("init_cipher");
            Assert.IsTrue(lc.Decrypt(init));
            var plain = H("init_plain");
            Eq(Sub(init, plain.Length), plain);
            lc.SetKey(H("bf_key"));
            var dyn = H("dyn_cipher");
            Assert.IsTrue(lc.Decrypt(dyn), "checksum do pacote dinamico");
            var dp = H("dyn_plain");
            Eq(Sub(dyn, dp.Length), dp);
        }

        [Test]
        public void LoginCryptClientPacketMatchesServer()
        {
            Assert.AreEqual("true", G["cli_server_accepts"]);
            var lc = new LoginCrypt();
            lc.SetKey(H("bf_key"));
            Eq(lc.Encrypt(H("cli_plain")), H("cli_cipher"));
        }

        [Test]
        public void ChecksumDetectsCorruption()
        {
            var b = new byte[16];
            b[0] = 1;
            b[1] = 2;
            b[2] = 3;
            b[3] = 4;
            b[4] = 5;
            LoginCrypt.AppendChecksum(b, 0, 16);
            Assert.IsTrue(LoginCrypt.VerifyChecksum(b, 0, 16));
            b[2] ^= 1;
            Assert.IsFalse(LoginCrypt.VerifyChecksum(b, 0, 16));
        }

        [Test]
        public void XorPassRoundTrip()
        {
            var b = new byte[40];
            for (var i = 0; i < b.Length; i++) b[i] = (byte)(i * 37 + 11);
            var orig = (byte[])b.Clone();
            LoginCrypt.EncXORPass(b, 0, b.Length, 0xdeadbeef);
            LoginCrypt.DecXORPass(b, 0, b.Length);
            // o XOR vai de 4 ate size-8; os ultimos 8 bytes guardam a chave final (e o padding)
            Eq(Sub(b, b.Length - 8), Sub(orig, orig.Length - 8));
        }

        [Test]
        public void RsaUnscrambleAndEncryptMatchJavaCipher()
        {
            var mod = Rsa.UnscrambleModulus(H("rsa_scrambled"));
            Eq(mod, H("rsa_modulus"));
            Eq(Rsa.ScrambleModulus(mod), H("rsa_scrambled"));
            var block = Rsa.CredentialBlock("tester", "segredo123");
            Eq(block, H("rsa_block"));
            var c = Rsa.RsaEncrypt(block, mod);
            Eq(c, H("rsa_cipher"));
            // decifrando com o expoente privado volta o bloco
            var d = BigInteger.Parse("0" + G["rsa_private_exp"], NumberStyles.HexNumber);
            Eq(Rsa.BigToBytes(Rsa.ModPow(Rsa.BytesToBig(c), d, Rsa.BytesToBig(mod)), 128), block);
        }

        [Test]
        public void RsaBigIntegerConversions()
        {
            // alto bit ligado: o BigInteger(byte[]) do .NET leria como negativo sem o 0 extra
            var b = new byte[] { 0xff, 0x00, 0x80 };
            var v = Rsa.BytesToBig(b);
            Assert.AreEqual(new BigInteger(0xff0080), v);
            Eq(Rsa.BigToBytes(v, 3), b);
            Eq(Rsa.BigToBytes(v, 5), new byte[] { 0, 0, 0xff, 0x00, 0x80 });
            Eq(Rsa.BigToBytes(v, 2), new byte[] { 0x00, 0x80 });
        }

        [Test]
        public void GameCryptDecryptsServerAndEncryptsAsServerExpects()
        {
            var gc = new GameCrypt();
            gc.SetKey(H("gc_key"));
            for (var i = 0; i < 3; i++)
            {
                var c = H($"gc_s2c_cipher_{i}");
                gc.Decrypt(c);
                Eq(c, H($"gc_s2c_plain_{i}"));
            }
            for (var i = 0; i < 3; i++)
            {
                Assert.AreEqual("true", G[$"gc_c2s_server_ok_{i}"]);
                var p = H($"gc_c2s_plain_{i}");
                gc.Encrypt(p);
                Eq(p, H($"gc_c2s_cipher_{i}"));
            }
        }
    }
}
