// XOR com chave rolante do game server (GameCrypt do aCis), do lado do cliente.
// O cliente cifra com a sua "outKey" (= inKey do servidor) e decifra com a "inKey" (= outKey do servidor).
using System;

namespace L2Web.Net
{
    public sealed class GameCrypt
    {
        readonly byte[] inKey = new byte[16];
        readonly byte[] outKey = new byte[16];
        public bool Enabled;

        /// <summary>
        /// Metade fixa da chave: o tratador do VersionCheck (FUN_1040d000) monta a chave com os 8 primeiros bytes recebidos e
        /// estas constantes (0x019327c8, 0x97316ca1), e ignora o resto do que o servidor mandou.
        /// </summary>
        public static readonly byte[] StaticKey = { 0xc8, 0x27, 0x93, 0x01, 0xa1, 0x6c, 0x31, 0x97 };

        /// <summary>Chave do KeyPacket: usa os 8 primeiros bytes e completa com <see cref="StaticKey"/>, como o original.</summary>
        public void SetKey(byte[] key)
        {
            if (key.Length < 8) throw new ArgumentException($"GameCrypt: chave de {key.Length} bytes");
            Array.Copy(key, inKey, 8);
            Array.Copy(StaticKey, 0, inKey, 8, 8);
            Array.Copy(inKey, outKey, 16);
            Enabled = true;
        }

        public void Decrypt(byte[] raw)
        {
            if (!Enabled) return;
            var prev = 0;
            for (var i = 0; i < raw.Length; i++)
            {
                int c = raw[i];
                raw[i] = (byte)(c ^ inKey[i & 15] ^ prev);
                prev = c;
            }
            Roll(inKey, raw.Length);
        }

        public void Encrypt(byte[] raw)
        {
            if (!Enabled) return;
            var prev = 0;
            for (var i = 0; i < raw.Length; i++)
            {
                prev = (raw[i] ^ outKey[i & 15] ^ prev) & 0xff;
                raw[i] = (byte)prev;
            }
            Roll(outKey, raw.Length);
        }

        static void Roll(byte[] key, int size)
        {
            var old = Blowfish.GetLE(key, 8);
            unchecked { old += (uint)size; }
            Blowfish.PutLE(key, 8, old);
        }
    }
}
