// Sessao com o game server: ProtocolVersion -> KeyPacket -> AuthLogin -> CharSelectInfo -> ... -> EnterWorld.
// Depois disso repassa cada pacote decifrado para os handlers registrados por opcode (na thread principal).
// No navegador a conexao ia pelo gateway (url + '/game'); aqui e TCP direto no IP/porta do ServerList
// (com Host/Port de GameClientOptions para forcar outro destino).
using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Threading.Tasks;

namespace L2Web.Net
{
    public delegate void PacketHandler(PacketReader r, int op);

    public sealed class GameClientOptions
    {
        /// <summary>Forca o host do game server (senao: IP do ServerList, com recuo para o host do login).</summary>
        public string Host;
        /// <summary>Forca a porta do game server (0 = a do ServerList).</summary>
        public int Port;
        public LoginResult Session;
        /// <summary>"hwid515" ou "acis" (ProtocolMode).</summary>
        public string Protocol = ProtocolMode.Hwid515;
        public HwidInfo Hwid;
        public Action<string> Log;
        /// <summary>Loga em hexa os opcodes sem handler.</summary>
        public bool TraceUnknown;
    }

    public sealed class GameClient
    {
        Transport t;
        readonly GameCrypt crypt = new GameCrypt();
        readonly Dictionary<int, List<PacketHandler>> handlers = new Dictionary<int, List<PacketHandler>>();
        readonly Dictionary<int, List<Waiter>> once = new Dictionary<int, List<Waiter>>();
        readonly GameClientOptions opts;
        readonly Action<string> log;
        public readonly Dictionary<int, int> Unknown = new Dictionary<int, int>();
        public Action<string> OnClose;
        /// <summary>Recebe cada pacote decifrado (opcode no byte 0), antes dos handlers.</summary>
        public Action<byte[]> OnRaw;
        public bool Closed;

        /// <summary>Destino efetivo da conexao (preenchido no Connect).</summary>
        public string Host { get; private set; }
        public int Port { get; private set; }

        sealed class Waiter
        {
            public int[] Ops;
            public TaskCompletionSource<(int op, PacketReader r)> Tcs;
        }

        public GameClient(GameClientOptions opts)
        {
            this.opts = opts;
            log = opts.Log ?? (_ => { });
        }

        /// <summary>
        /// Host/porta do game server para a sessao: o override, senao o IP do ServerList. Se o IP anunciado for 0.0.0.0
        /// (ou vazio) usa o host do login; se for loopback (127.x) mas o login foi em outra maquina, tambem.
        /// </summary>
        public static (string host, int port) ResolveEndpoint(LoginResult s, string overrideHost = null, int overridePort = 0)
        {
            var port = overridePort > 0 ? overridePort : (s?.Server != null && s.Server.Port > 0 ? s.Server.Port : 7777);
            if (!string.IsNullOrEmpty(overrideHost)) return (overrideHost, port);
            var loginHost = string.IsNullOrEmpty(s?.LoginHost) ? Config.LoginHost : s.LoginHost;
            var ip = s?.Server?.Ip;
            if (string.IsNullOrEmpty(ip) || ip == "0.0.0.0" || ip == "255.255.255.255") return (loginHost, port);
            if (ip.StartsWith("127.") && !IsLoopback(loginHost)) return (loginHost, port);
            return (ip, port);
        }

        static bool IsLoopback(string host)
        {
            if (string.IsNullOrEmpty(host)) return true;
            if (host == "localhost") return true;
            return IPAddress.TryParse(host, out var a) && IPAddress.IsLoopback(a);
        }

        /// <summary>Conecta, troca a chave e autentica. Resolve com a lista de personagens.</summary>
        public async Task<List<CharSlot>> Connect()
        {
            var (host, port) = ResolveEndpoint(opts.Session, opts.Host, opts.Port);
            Host = host;
            Port = port;
            log($"conectando em {host}:{port}");
            t = await Transport.Connect(host, port);
            t.OnClose = reason =>
            {
                Closed = true;
                FailWaiters(new Exception($"conexao com o game server encerrada ({reason})"));
                OnClose?.Invoke(reason);
            };
            t.OnFrame = OnFrame;
            var key = WaitFor(0x00);
            t.Send(GamePackets.ProtocolVersion(opts.Protocol, opts.Hwid));
            var kr = await key;
            if (kr.C() != 1) throw new Exception("KeyPacket recusado: versao de protocolo nao aceita");
            crypt.SetKey(kr.B(16));
            log("KeyPacket recebido, criptografia ligada");
            var chars = WaitFor(0x13);
            var s = opts.Session;
            Send(GamePackets.AuthLogin(s.Account, s.PlayOk1, s.PlayOk2, s.LoginOk1, s.LoginOk2));
            return GamePackets.ParseCharSelectInfo(await chars);
        }

        public async Task<List<CharSlot>> CreateCharacter(CreateCharArgs a)
        {
            var res = WaitForAny(new[] { 0x19, 0x1a });
            // depois do CharCreateOk o servidor manda uma nova CharSelectInfo, as vezes no mesmo segmento TCP:
            // a espera ja fica registrada aqui (no TS a microtarefa registrava antes da proxima mensagem).
            var charsWaiter = AddWaiter(new[] { 0x13 }, 15000);
            Send(GamePackets.CharacterCreate(a));
            (int op, PacketReader r) x;
            try
            {
                x = await res;
            }
            catch
            {
                RemoveWaiter(charsWaiter);
                throw;
            }
            if (x.op == 0x1a)
            {
                RemoveWaiter(charsWaiter);
                var code = x.r.D();
                throw new Exception($"criacao recusada: {(GamePackets.CharCreateFail.TryGetValue(code, out var m) ? m : "motivo desconhecido")}");
            }
            return GamePackets.ParseCharSelectInfo((await charsWaiter.Tcs.Task).r);
        }

        /// <summary>Seleciona o personagem e entra no mundo. Resolve com o primeiro UserInfo.</summary>
        public async Task<UserInfo> EnterWorld(int slot)
        {
            var selected = WaitFor(0x15);
            Send(GamePackets.CharacterSelected(slot));
            var cs = GamePackets.ParseCharSelected(await selected);
            log($"CharSelected: {cs.Name} ({cs.ObjectId}) em {cs.X},{cs.Y},{cs.Z}");
            Send(GamePackets.RequestManorList());
            var ui = WaitFor(0x04);
            Send(GamePackets.EnterWorld());
            return GamePackets.ParseUserInfo(await ui);
        }

        /// <summary>Registra um handler para o opcode; devolve a funcao que o remove.</summary>
        public Action On(int op, PacketHandler fn)
        {
            if (!handlers.TryGetValue(op, out var list)) handlers[op] = list = new List<PacketHandler>();
            list.Add(fn);
            return () =>
            {
                if (handlers.TryGetValue(op, out var l)) l.Remove(fn);
            };
        }

        /// <summary>Atalho para handlers que nao usam o opcode: gc.On(0x13, r => ...).</summary>
        public Action On(int op, Action<PacketReader> fn) => On(op, (r, _) => fn(r));

        public async Task<PacketReader> WaitFor(int op, int timeoutMs = 15000) => (await WaitForAny(new[] { op }, timeoutMs)).r;

        public Task<(int op, PacketReader r)> WaitForAny(int[] ops, int timeoutMs = 15000) => AddWaiter(ops, timeoutMs).Tcs.Task;

        Waiter AddWaiter(int[] ops, int timeoutMs)
        {
            var w = new Waiter { Ops = ops, Tcs = new TaskCompletionSource<(int, PacketReader)>() };
            lock (once)
            {
                foreach (var op in ops)
                {
                    if (!once.TryGetValue(op, out var l)) once[op] = l = new List<Waiter>();
                    l.Add(w);
                }
            }
            Timeout(w, timeoutMs);
            return w;
        }

        async void Timeout(Waiter w, int ms)
        {
            await Task.Delay(ms);
            if (w.Tcs.Task.IsCompleted) return;
            RemoveWaiter(w);
            w.Tcs.TrySetException(new TimeoutException($"tempo esgotado esperando {string.Join("/", w.Ops.Select(GamePackets.OpName))}"));
        }

        void RemoveWaiter(Waiter w)
        {
            lock (once)
            {
                foreach (var op in w.Ops)
                    if (once.TryGetValue(op, out var l)) l.Remove(w);
            }
        }

        void FailWaiters(Exception e)
        {
            List<Waiter> all;
            lock (once)
            {
                all = once.Values.SelectMany(l => l).Distinct().ToList();
                once.Clear();
            }
            foreach (var w in all) w.Tcs.TrySetException(e);
        }

        public void Send(byte[] plain)
        {
            var b = (byte[])plain.Clone();
            crypt.Encrypt(b);
            t.Send(b);
        }

        public void Close()
        {
            t?.Close();
        }

        void OnFrame(byte[] body)
        {
            crypt.Decrypt(body);
            Dispatch(body);
        }

        /// <summary>Entrega um pacote ja decifrado aos handlers (tambem usado por testes para simular o servidor).</summary>
        public void Dispatch(byte[] body)
        {
            OnRaw?.Invoke(body);
            var r = new PacketReader(body);
            var op = r.C();
            var handled = false;
            Waiter w = null;
            lock (once)
            {
                if (once.TryGetValue(op, out var waiting) && waiting.Count > 0)
                {
                    w = waiting[0];
                    foreach (var o in w.Ops)
                        if (once.TryGetValue(o, out var l)) l.Remove(w);
                }
            }
            if (w != null)
            {
                w.Tcs.TrySetResult((op, new PacketReader(body, 1)));
                handled = true;
            }
            if (handlers.TryGetValue(op, out var list) && list.Count > 0)
            {
                foreach (var fn in list.ToArray())
                {
                    handled = true;
                    try
                    {
                        fn(new PacketReader(body, 1), op);
                    }
                    catch (Exception e)
                    {
                        log($"erro tratando {GamePackets.OpName(op)}: {e.Message}");
                        UnityEngine.Debug.LogException(e);
                    }
                }
            }
            if (!handled)
            {
                Unknown[op] = Unknown.TryGetValue(op, out var c) ? c + 1 : 1;
                if (opts.TraceUnknown)
                    log($"sem handler: 0x{op:x} {(GamePackets.ServerOpcodes.TryGetValue(op, out var n) ? n : "?")} ({body.Length}b) {Packet.Hex(body, 16)}");
            }
        }
    }
}
