// Conexao TCP direta com o login/game server. No navegador cada mensagem WebSocket do gateway carregava exatamente um
// quadro L2 (2 bytes de tamanho + corpo); aqui o proprio cliente separa os quadros do fluxo TCP.
// A leitura do socket roda numa thread de fundo e so enfileira os corpos; os handlers (OnFrame/OnClose) sao chamados
// na thread principal pelo NetPump (Update no Play Mode, EditorApplication.update no Editor fora do Play Mode).
using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.IO;
using System.Net.Sockets;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;

namespace L2Web.Net
{
    public delegate void FrameHandler(byte[] body);

    public sealed class Transport
    {
        /// <summary>Corpo de cada quadro recebido (sem os 2 bytes de tamanho). Chamado na thread principal.</summary>
        public FrameHandler OnFrame;
        /// <summary>Chamado uma vez, na thread principal, quando a conexao fecha (pelo servidor, por erro ou por Close()).</summary>
        public Action<string> OnClose;

        public string Host { get; private set; }
        public int Port { get; private set; }

        TcpClient client;
        NetworkStream stream;
        Thread reader;
        readonly ConcurrentQueue<byte[]> inbox = new ConcurrentQueue<byte[]>();
        readonly object writeLock = new object();
        string closeReason;
        volatile bool userClosed;
        bool notified;

        static readonly List<Transport> active = new List<Transport>();
        static readonly List<Transport> scratch = new List<Transport>();

        /// <summary>Tempo maximo para abrir a conexao TCP (o gateway usava 10 s).</summary>
        public const int ConnectTimeoutMs = 10000;

        /// <summary>Abre a conexao TCP. Chame da thread principal (o pump e criado aqui).</summary>
        public static async Task<Transport> Connect(string host, int port, int timeoutMs = ConnectTimeoutMs)
        {
            NetPump.Ensure();
            var tcp = new TcpClient { NoDelay = true };
            var conn = tcp.ConnectAsync(host, port);
            if (await Task.WhenAny(conn, Task.Delay(timeoutMs)) != conn)
            {
                tcp.Close();
                _ = conn.ContinueWith(x => _ = x.Exception, TaskContinuationOptions.OnlyOnFaulted);
                throw new IOException($"tempo esgotado ao conectar em {host}:{port}");
            }
            try
            {
                await conn;
            }
            catch (Exception e)
            {
                tcp.Close();
                throw new IOException($"nao conectou em {host}:{port} ({e.GetBaseException().Message})", e);
            }
            var t = new Transport { Host = host, Port = port, client = tcp, stream = tcp.GetStream() };
            lock (active) active.Add(t);
            t.reader = new Thread(t.ReadLoop) { IsBackground = true, Name = $"L2Web.Net {host}:{port}" };
            t.reader.Start();
            return t;
        }

        void ReadLoop()
        {
            var buf = new byte[64 * 1024];
            var splitter = new FrameSplitter();
            try
            {
                for (;;)
                {
                    var n = stream.Read(buf, 0, buf.Length);
                    if (n <= 0)
                    {
                        SetClosed("servidor fechou a conexao");
                        return;
                    }
                    List<byte[]> frames;
                    try
                    {
                        frames = splitter.Push(buf, 0, n);
                    }
                    catch (Exception e)
                    {
                        SetClosed($"fluxo invalido do servidor: {e.Message}");
                        try { client.Close(); } catch { /* ja fechado */ }
                        return;
                    }
                    foreach (var f in frames)
                    {
                        var body = new byte[f.Length - 2];
                        Array.Copy(f, 2, body, 0, body.Length);
                        inbox.Enqueue(body);
                    }
                }
            }
            catch (Exception e)
            {
                SetClosed(userClosed ? "conexao fechada pelo cliente" : $"erro TCP: {e.GetBaseException().Message}");
            }
        }

        void SetClosed(string reason)
        {
            Interlocked.CompareExchange(ref closeReason, reason, null);
        }

        /// <summary>Envia um corpo ja cifrado; o cabecalho de tamanho e acrescentado aqui.</summary>
        public void Send(byte[] body)
        {
            if (!Open) throw new IOException("conexao fechada");
            var f = Packet.Frame(body);
            try
            {
                lock (writeLock) stream.Write(f, 0, f.Length);
            }
            catch (Exception e)
            {
                SetClosed($"erro TCP: {e.GetBaseException().Message}");
                try { client.Close(); } catch { /* ja fechado */ }
                throw new IOException("conexao fechada", e);
            }
        }

        /// <summary>Fecha a conexao. Os quadros ainda na fila sao descartados; OnClose vem no proximo pump.</summary>
        public void Close()
        {
            if (client == null) return;
            userClosed = true;
            SetClosed("conexao fechada pelo cliente");
            try { client.Close(); } catch { /* ja fechado */ }
        }

        public bool Open => client != null && Volatile.Read(ref closeReason) == null && !userClosed;

        /// <summary>Entrega os quadros enfileirados e o fechamento. So na thread principal.</summary>
        void Pump()
        {
            if (notified) return;
            if (!userClosed)
            {
                // Sem OnFrame ainda (o await do Connect nao voltou): deixa tudo na fila.
                if (OnFrame == null) return;
                while (!userClosed && inbox.TryDequeue(out var body))
                {
                    try
                    {
                        OnFrame?.Invoke(body);
                    }
                    catch (Exception e)
                    {
                        Debug.LogException(e);
                    }
                }
            }
            if (Volatile.Read(ref closeReason) == null || (!userClosed && !inbox.IsEmpty)) return;
            notified = true;
            while (inbox.TryDequeue(out _)) { }
            lock (active) active.Remove(this);
            try { client?.Close(); } catch { /* ja fechado */ }
            try
            {
                OnClose?.Invoke(closeReason);
            }
            catch (Exception e)
            {
                Debug.LogException(e);
            }
        }

        /// <summary>Chamado pelo NetPump a cada frame: drena todas as conexoes abertas.</summary>
        public static void PumpAll()
        {
            scratch.Clear();
            lock (active) scratch.AddRange(active);
            foreach (var t in scratch) t.Pump();
            scratch.Clear();
        }

        /// <summary>Fecha todas as conexoes (saida do jogo, recompilacao no Editor).</summary>
        public static void CloseAll()
        {
            Transport[] all;
            lock (active) all = active.ToArray();
            foreach (var t in all) t.Close();
        }

        public static int ActiveCount
        {
            get
            {
                lock (active) return active.Count;
            }
        }
    }
}
