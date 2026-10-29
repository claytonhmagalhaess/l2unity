// "Figurante" para testes (porte do tools/game-test.ts com AUTOACCEPT=1): um segundo cliente de jogo, sem tela, que
// entra no mundo com outra conta e aceita party, troca (confirmando depois do parceiro) e amizade. Usado pelo
// script eval do Unity CLI para testar no servidor real o que precisa de dois jogadores (e2e-social do navegador).
//   L2Web.Dev.Figurante.Start("l2webtest2", "l2webtest2")      -> entra no mundo
//   L2Web.Dev.Figurante.TeleportVia(30080, "Teleport", "Breka") -> fala com o NPC 30080 e segue os links do HTML
//   L2Web.Dev.Figurante.Status / Log                              -> estado e o que aconteceu
//   L2Web.Dev.Figurante.Stop()                                    -> logout
using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using L2Web.Net;
using UnityEngine;

namespace L2Web.Dev
{
    public static class Figurante
    {
        static GameClient gc;
        static UserInfo me;
        static float x, y, z;
        static readonly Dictionary<int, NpcInfo> npcs = new();
        static TaskCompletionSource<string> html;

        /// <summary>O que aconteceu, em ordem (convites, troca, teleporte...).</summary>
        public static readonly List<string> Log = new();

        public static string Status => gc == null ? "parado" : me == null ? "entrando" : $"{me.Name} ({me.ObjectId}) em {Mathf.RoundToInt(x)},{Mathf.RoundToInt(y)},{Mathf.RoundToInt(z)}";

        static void Note(string m)
        {
            Log.Add(m);
            Debug.Log("[figurante] " + m);
        }

        /// <summary>Login com a conta, entra no mundo com o primeiro personagem e liga as respostas automaticas.</summary>
        public static void Start(string user, string password) => Run(user, password).Forget();

        static async Task Run(string user, string password)
        {
            try
            {
                Log.Clear();
                var session = await LoginClient.Login(new LoginOptions { Host = Config.LoginHost, Port = Config.LoginPort, User = user, Password = password, ChooseServer = l => Task.FromResult(l.Find(s => s.Up)?.Id ?? l[0].Id) });
                var (host, port) = GameClient.ResolveEndpoint(session);
                gc = new GameClient(new GameClientOptions { Host = host, Port = port, Session = session, Protocol = Config.Protocol, Hwid = new HwidInfo { Hdd = "L2WEB", Mac = "L2WEB", Guid = "L2WEB-FIGURANTE", User = "l2web" } });
                gc.OnClose = r =>
                {
                    Note("conexao fechada: " + r);
                    gc = null;
                    me = null;
                };
                var chars = await gc.Connect();
                if (chars.Count == 0) throw new Exception("conta sem personagem");
                gc.On(0x39, r =>
                {
                    Note($"convite de party de {SocialPackets.ParseAskJoinParty(r).Requestor}: aceitando");
                    gc.Send(SocialPackets.AnswerJoinParty(true));
                });
                gc.On(0x5e, _ =>
                {
                    Note("pedido de troca: aceitando");
                    gc.Send(SocialPackets.AnswerTradeRequest(true));
                });
                gc.On(0x21, r =>
                {
                    var i = SocialPackets.ParseTradeAdd(r);
                    Note($"parceiro ofereceu item {i.ItemId} x{i.Count}");
                });
                gc.On(0x75, _ => Note("troca: eu confirmei"));
                gc.On(0x7c, _ =>
                {
                    Note("troca: parceiro confirmou -> confirmando");
                    gc.Send(SocialPackets.TradeDone(true));
                });
                gc.On(0x22, r => Note("troca encerrada: " + (SocialPackets.ParseTradeDone(r).Done ? "concluida" : "cancelada")));
                gc.On(0x7d, r =>
                {
                    Note($"pedido de amizade de {SocialPackets.ParseFriendAddRequest(r).Requestor}: aceitando");
                    gc.Send(SocialPackets.AnswerFriendInvite(true));
                });
                gc.On(0x4e, r => Note("party: " + string.Join(", ", SocialPackets.ParsePartyAll(r).Members.ConvertAll(m => m.Name))));
                gc.On(0x16, r =>
                {
                    var n = GamePackets.ParseNpcInfo(r);
                    npcs[n.ObjectId] = n;
                });
                gc.On(0x12, r => npcs.Remove(GamePackets.ParseDeleteObject(r).ObjectId));
                gc.On(0x0f, r => html?.TrySetResult(UiPackets.ParseNpcHtml(r).Html));
                gc.On(0x28, r =>
                {
                    var t = GamePackets.ParseTeleport(r);
                    if (me == null || t.ObjectId != me.ObjectId) return;
                    (x, y, z) = (t.X, t.Y, t.Z);
                    npcs.Clear();
                    Note($"teleportado para {t.X},{t.Y},{t.Z}");
                    gc.Send(new byte[] { 0x30 }); // Appearing
                });
                gc.On(0x01, r =>
                {
                    var m = GamePackets.ParseMoveToLocation(r);
                    if (me != null && m.ObjectId == me.ObjectId) (x, y, z) = (m.Tx, m.Ty, m.Tz);
                });
                me = await gc.EnterWorld(0);
                (x, y, z) = (me.X, me.Y, me.Z);
                Note($"no mundo: {me.Name} em {me.X},{me.Y},{me.Z}");
            }
            catch (Exception e)
            {
                Note("falhou: " + e.Message);
            }
        }

        /// <summary>
        /// Fala com o NPC (id do modelo, ex. 30080 = Gatekeeper Clarissa de Giran) e segue, em ordem, os links do HTML
        /// cujo texto contem cada um de `links` (ex. "Teleport", "Breka").
        /// </summary>
        public static void TeleportVia(int npcId, params string[] links) => Teleport(npcId, links).Forget();

        static async Task Teleport(int npcId, string[] links)
        {
            try
            {
                NpcInfo npc = null;
                var best = float.MaxValue;
                foreach (var n in npcs.Values)
                {
                    var d = (n.X - x) * (n.X - x) + (n.Y - y) * (n.Y - y);
                    if (n.NpcId == npcId && d < best)
                    {
                        best = d;
                        npc = n;
                    }
                }
                if (npc == null) throw new Exception($"NPC {npcId} nao esta em volta");
                html = new TaskCompletionSource<string>();
                // 1o Action seleciona, o 2o vai ate o NPC e abre o HTML
                gc.Send(GamePackets.Action(npc.ObjectId, (int)x, (int)y, (int)z));
                await Task.Delay(800);
                gc.Send(GamePackets.Action(npc.ObjectId, (int)x, (int)y, (int)z));
                var page = await WithTimeout(html.Task, 20000);
                foreach (var l in links)
                {
                    var m = Regex.Match(page, "<a\\s+action=\"bypass\\s+(?:-h\\s+)?([^\"]+)\"[^>]*>([^<]*" + Regex.Escape(l) + "[^<]*)</a>", RegexOptions.IgnoreCase);
                    if (!m.Success) throw new Exception($"link \"{l}\" nao encontrado");
                    Note($"link \"{m.Groups[2].Value.Trim()}\" -> {m.Groups[1].Value}");
                    html = new TaskCompletionSource<string>();
                    gc.Send(UiPackets.BypassToServer(m.Groups[1].Value));
                    var next = await Task.WhenAny(html.Task, Task.Delay(4000));
                    if (next == html.Task) page = html.Task.Result;
                }
            }
            catch (Exception e)
            {
                Note("teleporte falhou: " + e.Message);
            }
        }

        static async Task<T> WithTimeout<T>(Task<T> t, int ms)
        {
            if (await Task.WhenAny(t, Task.Delay(ms)) != t) throw new TimeoutException("sem resposta do NPC");
            return t.Result;
        }

        /// <summary>Anda ate (x, y, z).</summary>
        public static void MoveTo(int tx, int ty, int tz) => gc?.Send(GamePackets.MoveTo(tx, ty, tz, (int)x, (int)y, (int)z));

        /// <summary>Logout e fecha a conexao.</summary>
        public static async void Stop()
        {
            if (gc == null) return;
            var g = gc;
            try
            {
                g.Send(GamePackets.Logout());
                await Task.WhenAny(g.WaitFor(0x7e, 8000), Task.Delay(8000));
            }
            catch
            {
                /* sessao ja encerrada */
            }
            g.Close();
        }
    }
}
