// Comandos de barra do chat (I4 da matriz, spec 02 §3.7), como o NWindow.dll:
//   FUN_101358a0: 1o caractere diferente de '/' e '／' = chat (0x20000000); senao FL2GameData::GetCommandType (Engine.dll
//     0x10301d5c) com a 1a palavra: "///x" = 0x10000001, "//x" = 0x10000000 (construtor), "/x" = id da tabela
//     commandname-e.dat (int n; n x {int seq, int id, FString nome}; nomes sem diferenciar maiusculas, TMap<FString>),
//     desconhecido = -1 (o switch nao faz nada: o default so trata id < 0x10000001 sem sinal);
//   FUN_1013a320: switch(id) -> pacote (vtable do UNetworkHandler), acao (FUN_10170860 = DoAction), mensagem de sistema
//     (FUN_10170650), evento (FUN_10005c30), dialogo de confirmacao (FUN_1000dd30) ou rotina local; default = BypassUserCmd
//     (RequestUserCommand 0xAA, d id).
// Plan() so monta os passos; quem executa e o App. Cada passo tem o Token comparado com Golden/commands.json.
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using L2Web.Net;

namespace L2Web.UI
{
    public readonly struct CommandStep
    {
        /// <summary>"pkt" (Packet), "act" (DoAction Value), "msg" (sysmsg Value), "ev" (evento Value, Text = Message),
        /// "dlg" (dialogo da sysmsg Value) ou "local" (Text = rotina, Value/Ctrl/Shift = argumentos).</summary>
        public readonly string Kind;
        public readonly string Token;
        public readonly byte[] Packet;
        public readonly int Value;
        public readonly string Text;
        public readonly bool Ctrl, Shift;

        public CommandStep(string kind, string token, byte[] packet = null, int value = 0, string text = null, bool ctrl = false, bool shift = false)
        {
            Kind = kind;
            Token = token;
            Packet = packet;
            Value = value;
            Text = text;
            Ctrl = ctrl;
            Shift = shift;
        }

        public override string ToString() => Token;
    }

    /// <summary>Estado que o switch consulta: alvo (FUN_1014ddd0), o proprio pawn (FUN_1014dd00) e buscas.</summary>
    public sealed class CommandCtx
    {
        public int TargetId;
        public string TargetName;
        /// <summary>Alvo e um jogador (User+8 == 0 no cliente).</summary>
        public bool TargetIsPlayer;
        public string SelfName = "";
        public string PetName;
        /// <summary>Nomes dos membros da party (%party1..%party8), sem o proprio.</summary>
        public IReadOnlyList<string> PartyNames = Array.Empty<string>();
        public int SelfX, SelfY, SelfZ;
        /// <summary>GL2PartyLooting (distribuicao escolhida para o convite).</summary>
        public int PartyLooting;
        /// <summary>GetUser(nome): objectId ou 0.</summary>
        public Func<string, int> FindByName = _ => 0;
        /// <summary>GetMSCommandData(nome): id da skill ou 0.</summary>
        public Func<string, int> SkillByName = _ => 0;
        /// <summary>FUN_1014cff0: o texto tem palavrao.</summary>
        public Func<string, bool> HasObscene = _ => false;
        /// <summary>Id social da acao (GL2GameData+0x3d2c[id]+8, o 2o int do actionname-e); -1 sem ele.</summary>
        public Func<int, int> ActionType = id => L2TooltipData.Action(id)?.Type ?? -1;
    }

    public static class L2Commands
    {
        public const int Chat = 0x20000000, Build = 0x10000000, Build3 = 0x10000001, Unknown = -1;
        /// <summary>Mensagem de formato invalido: FString em GL2GameData+0x4044c = sysmsg (0x4044c - 0x240e8 - 4) / 0x5c.</summary>
        public const int MsgBadFormat = 1256;

        static Dictionary<string, int> byName;
        static List<(int seq, int id, string name)> entries;

        public static IReadOnlyList<(int seq, int id, string name)> Entries
        {
            get
            {
                Ensure();
                return entries;
            }
        }

        public static void Load(byte[] decrypted)
        {
            var b = decrypted;
            var n = BitConverter.ToInt32(b, 0);
            var p = 4;
            entries = new List<(int, int, string)>(n);
            byName = new Dictionary<string, int>(StringComparer.OrdinalIgnoreCase);
            for (var i = 0; i < n; i++)
            {
                var seq = BitConverter.ToInt32(b, p);
                var id = BitConverter.ToInt32(b, p + 4);
                p += 8;
                var name = L2Texts.FString(b, ref p);
                entries.Add((seq, id, name));
                byName.TryAdd(name, id);
            }
        }

        static void Ensure()
        {
            if (entries != null) return;
            var f = GameData.ClientFile("commandname-e.dat");
            if (File.Exists(f)) Load(L2Files.Decrypt(File.ReadAllBytes(f)));
            else
            {
                entries = new List<(int, int, string)>();
                byName = new Dictionary<string, int>(StringComparer.OrdinalIgnoreCase);
            }
        }

        /// <summary>
        /// FParser do Engine.dll: SetString copia os separadores padrao (DAT_1089881c), o que desfaz o SetSperator do
        /// construtor do NWindow (FUN_10135770); '[' e ']' agrupam (o separador dentro dos colchetes faz parte do token e os
        /// colchetes saem); o token termina no separador seguinte, que tambem e consumido; GetRemainStr devolve o resto
        /// sem pular mais nada (nulo se vazio).
        /// </summary>
        public sealed class FParser
        {
            public const string Separators = " \u3000\n\t\r={}$";
            readonly string s;
            int pos, depth;

            public FParser(string text) => s = text ?? "";

            public string Next()
            {
                var sb = new System.Text.StringBuilder();
                for (; pos < s.Length; pos++)
                {
                    var ch = s[pos];
                    if (Separators.IndexOf(ch) < 0 || depth != 0)
                    {
                        if (ch == '[') depth++;
                        else if (ch == ']')
                        {
                            depth--;
                            if (sb.Length > 0)
                            {
                                pos++;
                                return sb.ToString();
                            }
                        }
                        else sb.Append(ch);
                    }
                    else if (sb.Length > 0)
                    {
                        pos++;
                        return sb.ToString();
                    }
                }
                return sb.Length > 0 ? sb.ToString() : null;
            }

            public string Remain()
            {
                var r = pos < s.Length ? s.Substring(pos) : "";
                pos = s.Length;
                return r.Length > 0 ? r : null;
            }
        }

        /// <summary>FUN_10135a20 com o contexto do comando (L2Chat.MacroToken).</summary>
        public static string Macro(string token, CommandCtx c)
        {
            L2Chat.MacroToken(ref token, string.IsNullOrEmpty(c.SelfName) ? null : c.SelfName, c.TargetId != 0 ? c.TargetName : null, c.PetName, c.PartyNames);
            return token;
        }

        /// <summary>
        /// FUN_101358a0 + GetCommandType: a 1a palavra decide; `rest` e o FParser::GetRemainStr dali em diante (nulo se
        /// vazio). "///x" = Build3, "//x" = Build, "/x" = id do commandname-e.dat (sem diferenciar maiusculas), senao -1.
        /// </summary>
        public static int Classify(string text, out string rest)
        {
            rest = null;
            if (string.IsNullOrEmpty(text)) return Unknown;
            if (text[0] != '/' && text[0] != '\uff0f') return Chat;
            var p = new FParser(text);
            var word = p.Next() ?? "";
            var remain = p.Remain();
            if (word.Length > 3 && word.StartsWith("///")) return Build3;
            if (word.Length > 2 && word.StartsWith("//")) return Build;
            if (word.Length > 1 && word[0] == '/')
            {
                rest = remain;
                Ensure();
                if (byName.TryGetValue(word.Substring(1), out var id)) return id;
            }
            return Unknown;
        }

        /// <summary>Candidato das buscas locais: id, distancia 3D ao proprio pawn (FUN_10407cf0) e se passa no filtro do tipo (FUN_10407e50).</summary>
        public readonly struct Near
        {
            public readonly int Id;
            public readonly float Dist;
            public readonly bool Ok;
            public Near(int id, float dist, bool ok)
            {
                Id = id;
                Dist = dist;
                Ok = ok;
            }
        }

        /// <summary>
        /// GetNearestItem / slot 0x538 (FUN_10432a20): o mais perto que passa no filtro, com 0 &lt;= distancia &lt; raio e id
        /// diferente de `skip`; 0 se nenhum.
        /// </summary>
        public static int Nearest(IEnumerable<Near> all, float radius, int skip)
        {
            int best = 0;
            var bd = radius;
            foreach (var n in all)
                if (n.Ok && n.Dist >= 0 && n.Dist < bd && n.Id != skip)
                {
                    bd = n.Dist;
                    best = n.Id;
                }
            return best;
        }

        /// <summary>
        /// GetNextEnemy / slot 0x53c (FUN_10432bc0): o mais perto que esteja mais longe que o escolhido da vez anterior
        /// (`lastDist`, 0 sem anterior), dentro do raio e diferente do alvo atual; sem nenhum, volta ao mais perto (0x538).
        /// </summary>
        public static int NextEnemy(IList<Near> all, float radius, int currentTarget, float lastDist)
        {
            int best = 0;
            var bd = radius;
            foreach (var n in all)
                if (n.Ok && n.Dist >= 0 && lastDist < n.Dist && n.Dist < bd && n.Id != currentTarget)
                {
                    bd = n.Dist;
                    best = n.Id;
                }
            return best != 0 ? best : Nearest(all, radius, currentTarget);
        }

        /// <summary>appAtoi: sinal e digitos do comeco; o resto e ignorado (0 se nao houver digito).</summary>
        static int Atoi(string t)
        {
            if (t == null) return 0;
            var i = 0;
            while (i < t.Length && char.IsWhiteSpace(t[i])) i++;
            var neg = i < t.Length && t[i] == '-';
            if (i < t.Length && (t[i] == '-' || t[i] == '+')) i++;
            long v = 0;
            while (i < t.Length && t[i] >= '0' && t[i] <= '9' && v < int.MaxValue) v = v * 10 + (t[i++] - '0');
            return (int)(neg ? -v : v);
        }

        static CommandStep Pkt(byte[] b, params int[] lits)
        {
            var op = b[0] == 0xd0 ? $"0xd0/0x{b[1] | b[2] << 8:x}" : $"0x{b[0]:x}";
            return new CommandStep("pkt", lits.Length == 0 ? $"pkt:{op}" : $"pkt:{op}({string.Join(",", lits)})", b);
        }

        static CommandStep Act(int n) => new CommandStep("act", $"act:{n}", value: n);
        static CommandStep Msg(int n) => new CommandStep("msg", $"msg:{n}", value: n);
        static CommandStep Dlg(int n) => new CommandStep("dlg", $"dlg:{n}", value: n);
        static CommandStep Local(string name, int v = 0, bool ctrl = false, bool shift = false, string text = null) =>
            new CommandStep("local", "local:" + name, value: v, text: text ?? name, ctrl: ctrl, shift: shift);

        static PacketWriter W(int op) => new PacketWriter().C(op);
        static PacketWriter Ex(int sub) => new PacketWriter().C(0xd0).H(sub);

        /// <summary>Nome do 1o argumento ou do alvo jogador (os casos que aceitam os dois).</summary>
        static string NameOrTarget(string arg, CommandCtx c) => !string.IsNullOrEmpty(arg) ? arg : c.TargetId != 0 && c.TargetIsPlayer ? c.TargetName : null;

        /// <summary>"pagina slot" de /useshortcut e /equip (appAtoi de cada token, com macro): indice slot - 13 +
        /// pagina*12 (pagina 1..10, slot 1..12), ou -1.</summary>
        static int PageSlot(FParser p, CommandCtx c)
        {
            var a = Macro(p.Next(), c);
            if (a == null) return -1;
            var page = Atoi(a);
            if (page - 1 < 0 || page - 1 >= 10) return -1;
            var b = Macro(p.Next(), c);
            if (b == null) return -1;
            var slot = Atoi(b);
            if (slot - 1 < 0 || slot - 1 >= 12) return -1;
            return slot - 13 + page * 12;
        }

        /// <summary>Planeja uma linha inteira do chat (`/cmd args`); id = o do Classify.</summary>
        public static List<CommandStep> PlanLine(string line, CommandCtx c, out int id)
        {
            id = Classify(line, out var rest);
            if (id == Chat) return new List<CommandStep>();
            if (id == Build || id == Build3)
            {
                // FUN_101382a0: "//cmd" = console+0x360 com o texto depois das duas barras (SendBypassBuildCmd 0x5b);
                // "///" e local (depuracao)
                var o = new List<CommandStep>();
                if (id == Build) o.Add(Pkt(W(0x5b).S(line.Substring(2)).Bytes()));
                return o;
            }
            return Plan(id, rest, c);
        }

        /// <summary>
        /// Passos do DoAction (FUN_10170860) para a acao `id` do actionname-e: o que o cliente resolve sozinho (ataque, troca,
        /// alvo, grupo, sociais, duelo, lojas) e, no default, RequestActionUse (0x45 d id, d ctrl, c shift). `ctrl` e `shift`
        /// sao as teclas no momento (o nativo le o Ctrl pelo vtable+0x590 e o Shift por UInput::KeyDown(0x10)).
        /// </summary>
        public static List<CommandStep> PlanAction(int id, CommandCtx c, bool ctrl, bool shift)
        {
            var o = new List<CommandStep>();
            var hasTarget = c.TargetId != 0;
            var player = hasTarget && c.TargetIsPlayer;
            switch (id)
            {
                case 2: // Attack: FUN_1014ca10(alvo, x, y, z): Ctrl = vtable+0xe8 (AttackRequest), senao vtable+0x100 (Action) com o Shift
                    if (!hasTarget) break;
                    o.Add(Pkt(ctrl ? GamePackets.AttackRequest(c.TargetId, c.SelfX, c.SelfY, c.SelfZ, shift)
                        : GamePackets.Action(c.TargetId, c.SelfX, c.SelfY, c.SelfZ, shift), shift ? 1 : 0));
                    break;
                case 3: // Exchange: NConsoleWnd::RequestTrade(alvo)
                    if (hasTarget) o.Add(Pkt(SocialPackets.TradeRequest(c.TargetId)));
                    break;
                case 4: o.Add(Local("targetnext", c.TargetId)); break; // FUN_1014c7c0(200, alvo)
                case 5: o.Add(Local("pickup")); break; // FUN_1014c720(200, -1)
                case 6: o.Add(Local("assist")); break; // FUN_1015a770
                case 7: // Invite: alvo jogador -> FUN_10144860(nome, GL2PartyLooting) = RequestJoinParty; senao sysmsg 185
                    if (!player) o.Add(Msg(0xb9));
                    else o.Add(Pkt(SocialPackets.RequestJoinParty(c.TargetName, c.PartyLooting)));
                    break;
                case 8: o.Add(Pkt(SocialPackets.WithdrawParty())); break; // Leave Party: FUN_10144880
                case 9: // Dismiss Party Member: alvo jogador -> FUN_10144890(nome) = RequestOustPartyMember; senao sysmsg 187
                    if (!player) o.Add(Msg(0xbb));
                    else o.Add(Pkt(SocialPackets.OustPartyMember(c.TargetName)));
                    break;
                case 10: o.Add(Pkt(W(0x73).Bytes())); break; // Private Store - Sell: FUN_10145240 = RequestPrivateStoreManage
                case 11: // Party Matching: FUN_10149af0(1, -1, 1) = RequestListPartyWaiting e EV_PartyMatchCommand (0x65e)
                    o.Add(Pkt(W(0x6f).D(1).D(-1).D(1).Bytes(), 1, -1, 1));
                    o.Add(new CommandStep("ev", "ev:1630", value: Ev.EV_PartyMatchCommand, text: ""));
                    break;
                case 12: case 13: case 14: case 24: case 25: case 26: case 29: case 30: case 31: case 33: case 34: case 35:
                {
                    // sociais: FUN_10144110(tipo) = RequestSocialAction (0x1b d); so com 0 < id < total e tipo > 0
                    var type = c.ActionType(id);
                    if (type > 0) o.Add(Pkt(W(0x1b).D(type).Bytes(), type));
                    break;
                }
                case 18: o.Add(Local("petpickup")); break; // FUN_10144c60(200, -1)
                case 28: o.Add(Pkt(W(0x90).Bytes())); break; // Private Store - Buy: FUN_10145290 = RequestPrivateStoreBuyManage
                case 40: // Recommend: sem alvo sysmsg 242; jogador = VoteSociality (0xb9 d alvo); outro = sysmsg 144
                    if (!hasTarget) o.Add(Msg(0xf2));
                    else if (c.TargetIsPlayer) o.Add(Pkt(W(0xb9).D(c.TargetId).Bytes()));
                    else o.Add(Msg(0x90));
                    break;
                case 50: // Change of Party Leader: alvo jogador -> FUN_10149690(nome) = RequestChangePartyLeader; senao sysmsg 1400
                    if (!player) o.Add(Msg(0x578));
                    else o.Add(Pkt(Ex(0x04).S(c.TargetName).Bytes()));
                    break;
                case 55: o.Add(Local("replay")); break; // Start/End Recording Replay: FL2ReplayManager::OnSaveStartStop
                case 56: // Command Channel Invitation: alvo jogador -> FUN_10143a10(nome) = RequestExAskJoinMPCC; senao sysmsg 50
                    if (!player) o.Add(Msg(0x32));
                    else o.Add(Pkt(Ex(0x0d).S(c.TargetName).Bytes()));
                    break;
                case 57: // Find Store: dialogo de texto com a sysmsg 1722 (FUN_1000dd30(0x6ba), FUN_1016e1b0) -> SetMatchedStore
                    o.Add(Dlg(0x6ba));
                    break;
                case 58: // Duel / Party Duel: alvo jogador -> FUN_101445d0(nome, 0/1) = RequestDuelStart; sem alvo nada
                case 60:
                    if (player)
                    {
                        var party = id == 60 ? 1 : 0;
                        o.Add(Pkt(Ex(0x27).S(c.TargetName).D(party).Bytes(), party));
                    }
                    break;
                case 59: o.Add(Pkt(Ex(0x30).Bytes())); break; // Withdraw: FUN_10144710 = RequestDuelSurrender
                default: // FUN_101440c0(id, ctrl, shift): RequestActionUse
                    o.Add(Pkt(GamePackets.ActionUse(id, ctrl, shift), id, ctrl ? 1 : 0, shift ? 1 : 0));
                    break;
            }
            return o;
        }

        /// <summary>Passos do FUN_1013a320 para o comando `id` com o resto da linha.</summary>
        public static List<CommandStep> Plan(int id, string rest, CommandCtx c)
        {
            var o = new List<CommandStep>();
            var p = new FParser(rest);
            // FUN_10135980 (GetNextToken) sem macro: so a 1a palavra
            string First() => p.Next();
            // GetNextToken + FUN_10135a20 em cada token, juntados com " " (DAT_1023d5d0); nulo sem nenhum token
            string Joined()
            {
                var tk = p.Next();
                if (tk == null) return null;
                var sb = new System.Text.StringBuilder();
                while (tk != null)
                {
                    sb.Append(Macro(tk, c));
                    tk = p.Next();
                    if (tk == null) break;
                    sb.Append(' ');
                }
                return sb.ToString();
            }
            var hasTarget = c.TargetId != 0;
            byte[] Action(int obj, bool shift) => GamePackets.Action(obj, c.SelfX, c.SelfY, c.SelfZ, shift);
            void Social(int n) => o.Add(Pkt(W(0x1b).D(n).Bytes(), n));
            void Block(int type, string name)
            {
                var w = W(0xa0).D(type);
                if (name != null) w.S(name);
                o.Add(Pkt(w.Bytes(), type));
            }
            void Skill(bool ctrl, bool shift)
            {
                var all = Joined();
                if (all == null)
                {
                    o.Add(Msg(MsgBadFormat));
                    return;
                }
                var sk = c.SkillByName(all);
                if (sk != 0) o.Add(Pkt(UiPackets.MagicSkillUse(sk, ctrl, shift), ctrl ? 1 : 0, shift ? 1 : 0));
            }
            void Shortcut(bool ctrl, bool shift)
            {
                var i = PageSlot(p, c);
                if (i >= 0) o.Add(Local("useshortcut", i, ctrl, shift));
            }
            switch (id)
            {
                case 1: // gm: EV_ShowUserPetitionWnd com Message = resto da linha
                    o.Add(new CommandStep("ev", "ev:1921", value: Ev.EV_ShowUserPetitionWnd, text: p.Remain()));
                    break;
                case 2: o.Add(Pkt(W(0x80).Bytes())); break; // RequestPetitionCancel
                case 3: o.Add(Pkt(W(0x81).Bytes())); break; // RequestGMList
                case 4: o.Add(Pkt(W(0x1d).D(0).Bytes(), 0)); break; // sit: ChangeWaitType(0)
                case 5: o.Add(Pkt(W(0x1d).D(1).Bytes(), 1)); break;
                case 6: o.Add(Pkt(W(0x1c).D(0).Bytes(), 0)); break; // walk: ChangeMoveType(0)
                case 7: o.Add(Pkt(W(0x1c).D(1).Bytes(), 1)); break;
                case 8: // attack / attackstand: FUN_1014ca10 -> Action (0x04) com shift 0/1
                case 10:
                    if (hasTarget) o.Add(Pkt(Action(c.TargetId, id == 10)));
                    break;
                case 9: // attackforce: Atk (AttackRequest 0x0a)
                    if (hasTarget) o.Add(Pkt(GamePackets.AttackRequest(c.TargetId, c.SelfX, c.SelfY, c.SelfZ)));
                    break;
                case 11: // trade: RequestTrade(alvo)
                    if (hasTarget) o.Add(Pkt(SocialPackets.TradeRequest(c.TargetId)));
                    break;
                case 12: // target nome: GetUser(nome) -> FUN_1014c6a0 = Action
                {
                    var all = Joined();
                    if (all == null) o.Add(Msg(MsgBadFormat));
                    else
                    {
                        var obj = c.FindByName(all);
                        if (obj != 0) o.Add(Pkt(Action(obj, false)));
                    }
                    break;
                }
                case 13: o.Add(Local("targetnext", c.TargetId)); break; // FUN_1014c7c0(200, alvo): GetNextEnemy -> Action
                case 14: o.Add(Local("pickup")); break; // FUN_1014c720(200, -1): GetNearestItem -> Action
                case 15: o.Add(Local("assist")); break; // FUN_1015a770: alvo do alvo
                case 16: // invite [nome]: 1a palavra ou alvo jogador; sem os dois, sysmsg 185
                {
                    var n = NameOrTarget(First(), c);
                    if (n == null) o.Add(Msg(0xb9));
                    else o.Add(Pkt(SocialPackets.RequestJoinParty(n, c.PartyLooting)));
                    break;
                }
                case 17: o.Add(Pkt(SocialPackets.WithdrawParty())); break;
                case 18: // dismiss [nome]: palavras juntadas com espaco, ou alvo jogador; sem os dois, sysmsg 187
                {
                    var n = NameOrTarget(Joined(), c);
                    if (n == null) o.Add(Msg(0xbb));
                    else o.Add(Pkt(SocialPackets.OustPartyMember(n)));
                    break;
                }
                case 19: o.Add(Pkt(W(0x73).Bytes())); break; // vendor: RequestPrivateStoreManage
                case 20: // partymatching: RequestListPartyWaiting(1, -1, 1) e o EV_PartyMatchCommand (0x65e)
                    o.Add(Pkt(W(0x6f).D(1).D(-1).D(1).Bytes(), 1, -1, 1));
                    o.Add(new CommandStep("ev", "ev:1630", value: Ev.EV_PartyMatchCommand, text: ""));
                    break;
                case 21: Social(2); break;
                case 22: Social(3); break;
                case 23: Social(4); break;
                case 24: Skill(false, false); break;
                case 25: Skill(true, false); break;
                case 26: Skill(false, true); break;
                case 27: Shortcut(false, false); break;
                case 28: Shortcut(true, false); break;
                case 29: Shortcut(false, true); break;
                case 30: // allyinvite: alvo jogador -> sysmsg 510 + RequestJoinAlly; senao 511
                    if (hasTarget && c.TargetIsPlayer)
                    {
                        o.Add(Msg(0x1fe));
                        o.Add(Pkt(W(0x82).D(c.TargetId).Bytes()));
                    }
                    else o.Add(Msg(0x1ff));
                    break;
                case 31: o.Add(Dlg(0x200)); break; // allyleave
                case 32: o.Add(Dlg(0x201)); break; // allydismiss
                case 33: o.Add(Dlg(0x202)); break; // allydissolve
                case 34: o.Add(Dlg(0x203)); break; // allycrest
                case 35: o.Add(Pkt(W(0x8e).Bytes())); break; // allyinfo
                case 36:
                {
                    var all = Joined();
                    if (all == null) o.Add(Msg(MsgBadFormat));
                    else o.Add(Pkt(SocialPackets.FriendInvite(all)));
                    break;
                }
                case 37: o.Add(Pkt(W(0x60).Bytes())); break; // friendlist: RequestFriendList
                case 38:
                {
                    var all = Joined();
                    if (all == null) o.Add(Msg(MsgBadFormat));
                    else o.Add(Pkt(SocialPackets.FriendDel(all)));
                    break;
                }
                case 39: o.Add(Pkt(W(0x90).Bytes())); break; // buy: RequestPrivateStoreBuyManage
                case 40: case 41: case 42: case 68: case 97: break; // allywar*, summonattack, channelinfo: nada
                case 43: Block(2, null); break; // blocklist
                case 44: // block [nome] ou alvo jogador
                {
                    var n = NameOrTarget(Joined(), c);
                    if (n == null) o.Add(Msg(MsgBadFormat));
                    else Block(0, n);
                    break;
                }
                case 45:
                {
                    var all = Joined();
                    if (all == null) o.Add(Msg(MsgBadFormat));
                    else Block(1, all);
                    break;
                }
                case 46: Social(5); break;
                case 47: Social(6); break;
                case 48: Social(7); break;
                case 49: Social(8); break;
                case 50: Social(9); break;
                case 51: Social(10); break;
                case 53: o.Add(Pkt(W(0xa9).Bytes())); break; // remaintime: RequestRemainTime
                case 54: Social(11); break;
                case 55: Social(12); break;
                case 56: Social(13); break;
                case 57: o.Add(Act(0)); break; // sitstand
                case 58: o.Add(Act(1)); break; // walkrun
                case 59: o.Add(Pkt(GamePackets.ActionUse(0x25), 0x25, 0, 0)); break; // dwarvenmanufacture
                case 60: o.Add(Act(0x26)); break; // mountdismount
                case 63: o.Add(Act(0xf)); break;
                case 64: o.Add(Act(0x10)); break;
                case 65: o.Add(Act(0x11)); break;
                case 66: o.Add(Local("petpickup")); break; // FUN_10144c60(200, -1)
                case 67: o.Add(Act(0x13)); break;
                case 69: o.Add(Act(0x15)); break;
                case 70: o.Add(Act(0x16)); break;
                case 71: o.Add(Act(0x17)); break;
                case 75: o.Add(Act(0x28)); break; // evaluate
                case 78: Block(3, null); break; // allblock
                case 79: Block(4, null); break; // allunblock
                case 80: // equip pagina slot: FUN_1015a2d0 -> RequestUseItem do item do atalho
                {
                    var i = PageSlot(p, c);
                    if (i >= 0) o.Add(Local("equip", i));
                    break;
                }
                case 84: o.Add(Local("findprivatestore", text: First() ?? "")); break; // SetMatchedStore(1a palavra)
                case 85: // changepartyleader [nome] ou alvo jogador; senao sysmsg 1400
                {
                    var n = NameOrTarget(First(), c);
                    if (n == null) o.Add(Msg(0x578));
                    else o.Add(Pkt(Ex(0x04).S(n).Bytes()));
                    break;
                }
                case 86: o.Add(Dlg(0x5fb)); break; // clanwarstart
                case 87: o.Add(Dlg(0x5fc)); break; // clanwarstop
                case 91: o.Add(Pkt(W(0x87).D(0).Bytes())); break; // deletealliancecrest: RequestSetAllyCrest(0, nulo)
                case 94: // channelinvite / channelkick [nome] ou alvo jogador; senao sysmsg 1530
                case 95:
                {
                    var n = NameOrTarget(First(), c);
                    if (n == null) o.Add(Msg(0x5fa));
                    else o.Add(Pkt(Ex(id == 94 ? 0x0d : 0x0f).S(n).Bytes()));
                    break;
                }
                case 98: // nick titulo: palavrao = sysmsg 204, mais de 16 caracteres = sysmsg 80; RequestGiveNickName(eu, titulo)
                {
                    var title = p.Remain() ?? "";
                    if (title.Length != 0)
                    {
                        if (c.HasObscene(title))
                        {
                            o.Add(Msg(0xcc));
                            break;
                        }
                        if (title.Length > 16)
                        {
                            o.Add(Msg(0x50));
                            break;
                        }
                    }
                    o.Add(Pkt(W(0x55).S(c.SelfName ?? "").S(title).Bytes()));
                    break;
                }
                case 101: o.Add(Pkt(GamePackets.ActionUse(0x33), 0x33, 0, 0)); break; // generalmanufacture
                case 103: case 104: o.Add(Local("replay")); break; // FL2ReplayManager (gravacao de replay)
                case 105: o.Add(Act(0x37)); break;
                case 106: o.Add(Act(0x36)); break;
                case 107: o.Add(Act(0x35)); break;
                case 108: o.Add(Act(0x34)); break;
                case 111: // duel / partyduel [nome] ou alvo jogador (ate 11 caracteres): RequestDuelStart(nome, 0/1)
                case 113:
                {
                    var n = p.Remain() ?? (hasTarget && c.TargetIsPlayer ? c.TargetName : null);
                    if (n == null) break;
                    if (n.Length > 11) n = n.Substring(0, 11);
                    var party = id == 113 ? 1 : 0;
                    o.Add(Pkt(Ex(0x27).S(n).D(party).Bytes(), party));
                    break;
                }
                case 112: o.Add(Pkt(Ex(0x30).Bytes())); break; // withdraw: RequestDuelSurrender
                default:
                    // id >= 0 sem case: BypassUserCmd (RequestUserCommand 0xAA, d id); -1 (desconhecido) nao faz nada
                    if (id >= 0 && id < Build3) o.Add(Pkt(W(0xaa).D(id).Bytes()));
                    break;
            }
            return o;
        }
    }
}
