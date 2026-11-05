// Criptografia do login server (LoginCrypt/NewCrypt do aCis), do lado do cliente.
using System;

namespace L2Web.Net
{
    public sealed class LoginCrypt
    {
        public static readonly byte[] StaticBlowfishKey =
        {
            0x6b, 0x60, 0xcb, 0x5b, 0x82, 0xce, 0x90, 0xb1, 0xcc, 0x2b, 0x6c, 0x55, 0x6c, 0x6c, 0x6c, 0x6c,
        };

        /// <summary>Checksum = XOR de todos os dwords, menos o ultimo, que guarda o resultado.</summary>
        public static void AppendChecksum(byte[] raw, int offset, int size)
        {
            uint sum = 0;
            var end = offset + size - 4;
            for (var i = offset; i < end; i += 4) sum ^= Blowfish.GetLE(raw, i);
            Blowfish.PutLE(raw, end, sum);
        }

        public static bool VerifyChecksum(byte[] raw, int offset, int size)
        {
            if ((size & 3) != 0 || size <= 4) return false;
            uint sum = 0;
            var end = offset + size - 4;
            for (var i = offset; i < end; i += 4) sum ^= Blowfish.GetLE(raw, i);
            return sum == Blowfish.GetLE(raw, end);
        }

        /// <summary>Inverso de NewCrypt.encXORPass: a chave final fica em size-8 e o XOR comeca no offset 4.</summary>
        public static void DecXORPass(byte[] raw, int offset, int size)
        {
            var stop = offset + 4;
            var pos = offset + size - 8;
            var ecx = Blowfish.GetLE(raw, pos);
            pos -= 4;
            while (pos >= stop)
            {
                var d = Blowfish.GetLE(raw, pos) ^ ecx;
                Blowfish.PutLE(raw, pos, d);
                unchecked { ecx -= d; }
                pos -= 4;
            }
        }

        /// <summary>Igual ao NewCrypt.encXORPass (usado nos testes e para simular o servidor).</summary>
        public static void EncXORPass(byte[] raw, int offset, int size, uint key)
        {
            var stop = offset + size - 8;
            var pos = offset + 4;
            var ecx = key;
            while (pos < stop)
            {
                var d = Blowfish.GetLE(raw, pos);
                unchecked { ecx += d; }
                d ^= ecx;
                Blowfish.PutLE(raw, pos, d);
                pos += 4;
            }
            Blowfish.PutLE(raw, pos, ecx);
        }

        readonly Blowfish staticBf = new Blowfish(StaticBlowfishKey);
        Blowfish dynamicBf;
        bool first = true;

        /// <summary>Decifra um pacote vindo do servidor (corpo sem o cabecalho de tamanho). Devolve false se o checksum falhar.</summary>
        public bool Decrypt(byte[] body)
        {
            if (first)
            {
                first = false;
                staticBf.Decrypt(body);
                DecXORPass(body, 0, body.Length);
                return true;
            }
            if (dynamicBf == null) throw new InvalidOperationException("LoginCrypt: chave dinamica ainda nao definida");
            dynamicBf.Decrypt(body);
            return VerifyChecksum(body, 0, body.Length);
        }

        /// <summary>Chave Blowfish enviada pelo servidor no Init.</summary>
        public void SetKey(byte[] key)
        {
            dynamicBf = new Blowfish(key);
        }

        /// <summary>Recebe o corpo em claro, acrescenta checksum e padding e devolve o corpo cifrado.</summary>
        public byte[] Encrypt(byte[] plain)
        {
            if (dynamicBf == null) throw new InvalidOperationException("LoginCrypt: chave dinamica ainda nao definida");
            var size = plain.Length + 4;
            size += 8 - (size % 8);
            var o = new byte[size];
            Array.Copy(plain, o, plain.Length);
            AppendChecksum(o, 0, size);
            dynamicBf.Encrypt(o);
            return o;
        }
    }
}
