// Maquina de estados do login server: Init -> AuthGameGuard -> GGAuth -> RequestAuthLogin ->
// (LoginOk -> RequestServerList, ou ServerList direto quando o servidor tem ShowLicence = False) -> ServerList ->
// RequestServerLogin -> PlayOk.
// No navegador a conexao ia pelo gateway (url + '/login'); aqui e TCP direto em Config.LoginHost:Config.LoginPort.
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace L2Web.Net
{
    public sealed class ServerInfo
    {
        public int Id;
        public string Ip;
        public int Port;
        public int AgeLimit;
        public bool Pvp;
        public int Online;
        public int Max;
        public bool Up;
        public int Bits;
        public bool Brackets;
    }

    public sealed class LoginResult
    {
        public string Account;
        public int LoginOk1;
        public int LoginOk2;
        public int PlayOk1;
        public int PlayOk2;
        public ServerInfo Server;
        /// <summary>Host usado para o login (para o GameClient decidir quando o IP anunciado nao serve). Nao existia no TS.</summary>
        public string LoginHost;
    }

    public class LoginError : Exception
    {
        public LoginError(string message) : base(message) { }
    }

    public sealed class LoginOptions
    {
        /// <summary>null = Config.LoginHost.</summary>
        public string Host;
        /// <summary>0 = Config.LoginPort.</summary>
        public int Port;
        public string User;
        public string Password;
        /// <summary>Chamado com a lista de servidores; devolve o id escolhido. Padrao: o primeiro que esteja no ar.</summary>
        public Func<List<ServerInfo>, Task<int>> ChooseServer;
        public Action<string> Log;
    }

    /// <summary>
    /// Pacotes ao login server, como o engine.dll os envia (95): ResponseAuthGameGuard 0x07 `cddddd`, RL 0x00
    /// `cxddddddhc`, RequestServerList 0x05 `cddc` e RequestServerLogin 0x02 `cddc`.
    /// </summary>
    public static class LoginPackets
    {
        /// <summary>
        /// ResponseAuthGameGuard: sessao e 4 dwords do GameGuard (UGameEngine+0x36c..0x378, dados de execucao; aqui 0).
        /// </summary>
        public static byte[] AuthGameGuard(int sessionId) => new PacketWriter().C(0x07).D(sessionId).D(0).D(0).D(0).D(0).Bytes();

        /// <summary>
        /// RL (RequestAuthLogin): bloco RSA de 0x80, sessao, os 4 dwords do GameGuard, 8, um short lido de um arquivo do
        /// cliente (atol do conteudo; 0 sem o arquivo) e GL2ClientOrder - 1 (aqui 0).
        /// </summary>
        public static byte[] RequestAuthLogin(byte[] rsaBlock, int sessionId) =>
            new PacketWriter().C(0x00).B(rsaBlock).D(sessionId).D(0).D(0).D(0).D(0).D(8).H(0).C(0).Bytes();

        public static byte[] RequestServerList(int loginOk1, int loginOk2) => new PacketWriter().C(0x05).D(loginOk1).D(loginOk2).C(4).Bytes();

        public static byte[] RequestServerLogin(int loginOk1, int loginOk2, int serverId) =>
            new PacketWriter().C(0x02).D(loginOk1).D(loginOk2).C(serverId).Bytes();
    }

    public static class LoginClient
    {
        /// <summary>
        /// Pacotes do login que encerram a sessao e o texto da caixa (vazio = sem caixa):
        /// LoginFail 0x01 "c" -> sysmsg do motivo (FUN_10150be0); AccountKicked 0x02 "dd" -> o 2o dword escolhe a sysmsg
        /// (o aCis manda um so: o 2o vem 0); PlayFail 0x06 e 0x05/0x08/0x09: o original so fecha a conexao.
        /// </summary>
        public static string Refusal(int op, PacketReader r)
        {
            switch (op)
            {
                case 0x01:
                    return LoginMessages.Text(LoginMessages.FailIds(r.Remaining >= 1 ? r.C() : 0));
                case 0x02:
                {
                    if (r.Remaining >= 4) r.D();
                    var id = LoginMessages.KickedId(r.Remaining >= 4 ? r.D() : 0);
                    return id != 0 ? LoginMessages.Text(new[] { id }) : "";
                }
                default:
                    return "";
            }
        }

        public static List<ServerInfo> ParseServerList(PacketReader r)
        {
            var count = r.C();
            r.C(); // ultimo servidor usado
            var list = new List<ServerInfo>();
            for (var i = 0; i < count; i++)
            {
                var id = r.C();
                var ip = $"{r.C()}.{r.C()}.{r.C()}.{r.C()}";
                list.Add(new ServerInfo
                {
                    Id = id,
                    Ip = ip,
                    Port = r.D(),
                    AgeLimit = r.C(),
                    Pvp = r.C() == 1,
                    Online = r.H(),
                    Max = r.H(),
                    Up = r.C() == 1,
                    Bits = r.D(),
                    Brackets = r.C() == 1,
                });
            }
            return list;
        }

        public static Task<LoginResult> Login(string user, string password, Func<List<ServerInfo>, Task<int>> chooseServer = null, Action<string> log = null) =>
            Login(new LoginOptions { User = user, Password = password, ChooseServer = chooseServer, Log = log });

        public static Task<LoginResult> Login(LoginOptions opts)
        {
            var s = new Session(opts);
            s.Start();
            return s.Tcs.Task;
        }

        sealed class Session
        {
            public readonly TaskCompletionSource<LoginResult> Tcs = new TaskCompletionSource<LoginResult>(TaskCreationOptions.RunContinuationsAsynchronously);
            readonly LoginOptions opts;
            readonly Action<string> log;
            readonly string host;
            readonly int port;
            readonly LoginCrypt crypt = new LoginCrypt();
            int sessionId;
            int loginOk1;
            int loginOk2;
            List<ServerInfo> servers = new List<ServerInfo>();
            ServerInfo chosen;
            byte[] modulus;
            bool done;
            Transport t;

            public Session(LoginOptions o)
            {
                opts = o;
                log = o.Log ?? (_ => { });
                host = string.IsNullOrEmpty(o.Host) ? Config.LoginHost : o.Host;
                port = o.Port > 0 ? o.Port : Config.LoginPort;
            }

            public async void Start()
            {
                try
                {
                    var tr = await Transport.Connect(host, port);
                    t = tr;
                    t.OnFrame = b =>
                    {
                        try
                        {
                            OnPacket(b);
                        }
                        catch (Exception e)
                        {
                            Fail(e);
                        }
                    };
                    t.OnClose = reason =>
                    {
                        if (!done) Fail(new LoginError($"login server fechou a conexao ({reason})"));
                    };
                }
                catch (Exception e)
                {
                    Fail(e);
                }
            }

            void Fail(Exception e)
            {
                if (done) return;
                done = true;
                t?.Close();
                Tcs.TrySetException(e);
            }

            void Send(byte[] p) => t.Send(crypt.Encrypt(p));

            async void RequestServerLogin()
            {
                try
                {
                    int? id;
                    if (opts.ChooseServer != null) id = await opts.ChooseServer(servers);
                    else id = (servers.FirstOrDefault(s => s.Up) ?? servers.FirstOrDefault())?.Id;
                    if (done) return;
                    chosen = servers.FirstOrDefault(s => s.Id == id);
                    if (chosen == null)
                    {
                        Fail(new LoginError("nenhum servidor disponivel"));
                        return;
                    }
                    log($"RequestServerLogin servidor {chosen.Id}");
                    Send(LoginPackets.RequestServerLogin(loginOk1, loginOk2, chosen.Id));
                }
                catch (Exception e)
                {
                    Fail(e);
                }
            }

            void OnPacket(byte[] body)
            {
                if (done) return;
                if (!crypt.Decrypt(body))
                {
                    Fail(new LoginError("checksum invalido vindo do login server"));
                    return;
                }
                var r = new PacketReader(body);
                var op = r.C();
                switch (op)
                {
                    case 0x00:
                    {
                        // Init
                        sessionId = r.D();
                        var rev = r.D();
                        modulus = Rsa.UnscrambleModulus(r.B(128));
                        r.Skip(16);
                        var bfKey = r.B(16);
                        crypt.SetKey(bfKey);
                        log($"Init sessao={(uint)sessionId:x} revisao={rev:x}");
                        // AuthGameGuard
                        Send(LoginPackets.AuthGameGuard(sessionId));
                        break;
                    }
                    case 0x0b:
                    {
                        // GGAuth -> RequestAuthLogin
                        if (modulus == null)
                        {
                            Fail(new LoginError("GGAuth antes do Init"));
                            return;
                        }
                        var block = Rsa.RsaEncrypt(Rsa.CredentialBlock(opts.User, opts.Password), modulus);
                        log("GGAuth ok, enviando RequestAuthLogin");
                        Send(LoginPackets.RequestAuthLogin(block, sessionId));
                        break;
                    }
                    case 0x03:
                    {
                        // LoginOk
                        loginOk1 = r.D();
                        loginOk2 = r.D();
                        log("LoginOk, pedindo lista de servidores");
                        Send(LoginPackets.RequestServerList(loginOk1, loginOk2));
                        break;
                    }
                    case 0x04:
                    {
                        servers = ParseServerList(r);
                        log("ServerList: " + string.Join(", ", servers.Select(s => $"#{s.Id} {s.Ip}:{s.Port} {s.Online}/{s.Max} {(s.Up ? "no ar" : "fora")}")));
                        RequestServerLogin();
                        break;
                    }
                    case 0x07:
                    {
                        var playOk1 = r.D();
                        var playOk2 = r.D();
                        log("PlayOk");
                        done = true;
                        t.Close();
                        Tcs.TrySetResult(new LoginResult
                        {
                            Account = (opts.User ?? "").ToLowerInvariant(),
                            LoginOk1 = loginOk1,
                            LoginOk2 = loginOk2,
                            PlayOk1 = playOk1,
                            PlayOk2 = playOk2,
                            Server = chosen,
                            LoginHost = host,
                        });
                        break;
                    }
                    case 0x01:
                    case 0x02:
                    case 0x05:
                    case 0x06:
                    case 0x08:
                    case 0x09:
                        Fail(new LoginError(Refusal(op, r)));
                        return;
                    case 0x0a:
                    case 0x0c:
                        // lidos e ignorados (FUN_1040c8d0; FUN_10401150 so registra no log de rede)
                        break;
                    default:
                        log($"login: opcode desconhecido 0x{op:x}");
                        break;
                }
            }
        }
    }
}
