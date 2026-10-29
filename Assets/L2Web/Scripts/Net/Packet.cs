// Leitura e escrita de pacotes no formato L2: tudo little-endian, strings UTF-16LE terminadas em 00 00.
using System;
using System.Collections.Generic;
using System.Text;

namespace L2Web.Net
{
    public sealed class PacketReader
    {
        public readonly byte[] Buf;
        public int Pos;

        public PacketReader(byte[] buf, int pos = 0)
        {
            Buf = buf;
            Pos = pos;
        }

        public int Remaining => Buf.Length - Pos;

        /// <summary>Se nao nulo, cada leitura anota o tipo ("c", "h", "d", "Q", "f", "S", "b8", "skip4"): C2/C3 da matriz.</summary>
        public List<string> Trace;

        void Need(int n)
        {
            if (Pos < 0 || Pos + n > Buf.Length)
                throw new IndexOutOfRangeException($"PacketReader: leitura de {n} bytes em {Pos} passa do fim ({Buf.Length})");
        }

        /// <summary>Byte sem sinal.</summary>
        public int C()
        {
            Need(1);
            Trace?.Add("c");
            return Buf[Pos++];
        }

        /// <summary>int16 com sinal.</summary>
        public int H()
        {
            Need(2);
            Trace?.Add("h");
            var v = (short)(Buf[Pos] | (Buf[Pos + 1] << 8));
            Pos += 2;
            return v;
        }

        /// <summary>int32 com sinal.</summary>
        public int D()
        {
            Need(4);
            Trace?.Add("d");
            var v = Buf[Pos] | (Buf[Pos + 1] << 8) | (Buf[Pos + 2] << 16) | (Buf[Pos + 3] << 24);
            Pos += 4;
            return v;
        }

        public long Q()
        {
            Need(8);
            Trace?.Add("Q");
            var v = BitConverter.IsLittleEndian ? BitConverter.ToInt64(Buf, Pos) : ReadLE64(Buf, Pos);
            Pos += 8;
            return v;
        }

        public double F()
        {
            Need(8);
            Trace?.Add("f");
            var v = BitConverter.Int64BitsToDouble(BitConverter.IsLittleEndian ? BitConverter.ToInt64(Buf, Pos) : ReadLE64(Buf, Pos));
            Pos += 8;
            return v;
        }

        /// <summary>Copia n bytes (como o slice do TS: corta no fim do buffer, mas avanca n).</summary>
        public byte[] B(int n)
        {
            Trace?.Add("b" + n);
            var start = Math.Min(Math.Max(Pos, 0), Buf.Length);
            var end = Math.Min(Math.Max(Pos + n, start), Buf.Length);
            var v = new byte[end - start];
            Array.Copy(Buf, start, v, 0, v.Length);
            Pos += n;
            return v;
        }

        public string S()
        {
            Trace?.Add("S");
            var sb = new StringBuilder();
            while (Pos + 1 < Buf.Length)
            {
                var ch = (char)(Buf[Pos] | (Buf[Pos + 1] << 8));
                Pos += 2;
                if (ch == 0) break;
                sb.Append(ch);
            }
            return sb.ToString();
        }

        public PacketReader Skip(int n)
        {
            Trace?.Add("skip" + n);
            Pos += n;
            return this;
        }

        static long ReadLE64(byte[] b, int i)
        {
            long v = 0;
            for (var k = 7; k >= 0; k--) v = (v << 8) | b[i + k];
            return v;
        }
    }

    public sealed class PacketWriter
    {
        byte[] data;
        public int Pos;

        public PacketWriter(int capacity = 64)
        {
            data = new byte[Math.Max(1, capacity)];
        }

        void Ensure(int n)
        {
            if (Pos + n <= data.Length) return;
            var cap = data.Length * 2;
            while (cap < Pos + n) cap *= 2;
            Array.Resize(ref data, cap);
        }

        public PacketWriter C(int v)
        {
            Ensure(1);
            data[Pos++] = (byte)(v & 0xff);
            return this;
        }

        public PacketWriter H(int v)
        {
            Ensure(2);
            data[Pos] = (byte)(v & 0xff);
            data[Pos + 1] = (byte)((v >> 8) & 0xff);
            Pos += 2;
            return this;
        }

        public PacketWriter D(int v)
        {
            Ensure(4);
            data[Pos] = (byte)(v & 0xff);
            data[Pos + 1] = (byte)((v >> 8) & 0xff);
            data[Pos + 2] = (byte)((v >> 16) & 0xff);
            data[Pos + 3] = (byte)((v >> 24) & 0xff);
            Pos += 4;
            return this;
        }

        public PacketWriter Q(long v)
        {
            Ensure(8);
            for (var i = 0; i < 8; i++) data[Pos + i] = (byte)((v >> (8 * i)) & 0xff);
            Pos += 8;
            return this;
        }

        public PacketWriter F(double v) => Q(BitConverter.DoubleToInt64Bits(v));

        public PacketWriter B(byte[] bytes)
        {
            Ensure(bytes.Length);
            Array.Copy(bytes, 0, data, Pos, bytes.Length);
            Pos += bytes.Length;
            return this;
        }

        public PacketWriter S(string str)
        {
            str ??= "";
            Ensure(str.Length * 2 + 2);
            foreach (var ch in str)
            {
                data[Pos] = (byte)(ch & 0xff);
                data[Pos + 1] = (byte)(ch >> 8);
                Pos += 2;
            }
            data[Pos] = 0;
            data[Pos + 1] = 0;
            Pos += 2;
            return this;
        }

        /// <summary>Reserva bytes zerados (padding/checksum).</summary>
        public PacketWriter Zero(int n)
        {
            Ensure(n);
            Array.Clear(data, Pos, n);
            Pos += n;
            return this;
        }

        public byte[] Bytes()
        {
            var o = new byte[Pos];
            Array.Copy(data, o, Pos);
            return o;
        }
    }

    /// <summary>Separa quadros de um fluxo TCP. Guarda o resto incompleto entre chamadas.</summary>
    public sealed class FrameSplitter
    {
        byte[] pending = Array.Empty<byte>();

        public List<byte[]> Push(byte[] chunk) => Push(chunk, 0, chunk.Length);

        public List<byte[]> Push(byte[] chunk, int offset, int count)
        {
            byte[] buf;
            if (pending.Length > 0)
            {
                buf = new byte[pending.Length + count];
                Array.Copy(pending, buf, pending.Length);
                Array.Copy(chunk, offset, buf, pending.Length, count);
            }
            else
            {
                buf = new byte[count];
                Array.Copy(chunk, offset, buf, 0, count);
            }
            var output = new List<byte[]>();
            var p = 0;
            while (buf.Length - p >= 2)
            {
                var len = buf[p] | (buf[p + 1] << 8);
                if (len < 2) throw new FormatException($"quadro invalido (tamanho {len})");
                if (buf.Length - p < len) break;
                var f = new byte[len];
                Array.Copy(buf, p, f, 0, len);
                output.Add(f);
                p += len;
            }
            pending = new byte[buf.Length - p];
            Array.Copy(buf, p, pending, 0, pending.Length);
            return output;
        }
    }

    public static class Packet
    {
        /// <summary>Monta o quadro TCP: tamanho de 2 bytes LE (incluindo o proprio cabecalho) + corpo.</summary>
        public static byte[] Frame(byte[] body)
        {
            var o = new byte[body.Length + 2];
            o[0] = (byte)((body.Length + 2) & 0xff);
            o[1] = (byte)(((body.Length + 2) >> 8) & 0xff);
            Array.Copy(body, 0, o, 2, body.Length);
            return o;
        }

        public static string Hex(byte[] b, int max = 64)
        {
            var sb = new StringBuilder();
            var n = Math.Min(b.Length, max);
            for (var i = 0; i < n; i++)
            {
                if (i > 0) sb.Append(' ');
                sb.Append(b[i].ToString("x2"));
            }
            if (b.Length > max) sb.Append($" …(+{b.Length - max})");
            return sb.ToString();
        }

        /// <summary>Bytes de uma string hexa ("a1b2..."), para testes e logs.</summary>
        public static byte[] FromHex(string hex)
        {
            var o = new byte[hex.Length / 2];
            for (var i = 0; i < o.Length; i++) o[i] = Convert.ToByte(hex.Substring(i * 2, 2), 16);
            return o;
        }

        /// <summary>Hexa contiguo em minusculas (sem espacos), como Buffer.toString('hex').</summary>
        public static string ToHex(byte[] b)
        {
            var sb = new StringBuilder(b.Length * 2);
            foreach (var x in b) sb.Append(x.ToString("x2"));
            return sb.ToString();
        }
    }
}
