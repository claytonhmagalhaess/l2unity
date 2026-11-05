// MessengerWnd, aba "Chat with Friends" (L2FriendWnd / L2FriendTree do NWindow.dll; 89 MessengerWnd e o estudo do
// subagente): lista de amigos pelos pacotes 0xfa / 0xfb / 0xfc, ordem (online primeiro, depois o nome com appStrcmp),
// grupos "Online (n)" (id 1) e "Offline (n)" (id 0) e as linhas da arvore (19 px). Sem Unity.
using System;
using System.Collections.Generic;

namespace L2Web.UI
{
    public sealed class MessengerModel
    {
        public sealed class Friend
        {
            public string Name;
            public int Online, Id, Id2;
        }

        public readonly List<Friend> Friends = new();
        /// <summary>Grupo aberto (+0x2870): os dois comecam fechados (so a raiz e expandida no fim da lista).</summary>
        public bool OnlineOpen, OfflineOpen;
        public string Selected;
        public bool SelectedGroup;
        public int SelectedGroupId = -1;

        Friend Find(string name) => Friends.Find(f => f.Name == name);

        /// <summary>FUN_100ac1b0: online (!= 0) primeiro; empate: appStrcmp (ordinal, diferencia maiusculas).</summary>
        public void Sort() => Friends.Sort((a, b) =>
        {
            var oa = a.Online != 0;
            var ob = b.Online != 0;
            if (oa != ob) return oa ? -1 : 1;
            return string.CompareOrdinal(a.Name, b.Name);
        });

        /// <summary>FriendList 0xfa: limpa, acrescenta cada um e refaz a arvore (os grupos fecham).</summary>
        public void SetList(IEnumerable<(int id, string name, int online, int id2)> list)
        {
            Friends.Clear();
            foreach (var f in list) Add(f.id, f.name, f.online, f.id2);
            Sort();
            OnlineOpen = OfflineOpen = false;
            Selected = null;
        }

        /// <summary>Add (FUN_100acaf0): acha pelo nome; novo entra no fim, existente tem online/id/id2 trocados; ordena.</summary>
        public void Add(int id, string name, int online, int id2)
        {
            var f = Find(name);
            if (f == null) Friends.Add(new Friend { Name = name, Online = online, Id = id, Id2 = id2 });
            else
            {
                f.Online = online;
                f.Id = id;
                f.Id2 = id2;
            }
            Sort();
        }

        /// <summary>L2FriendPacket 0xfb: acao 1 = add, 2 = atualiza, 3 = remove (pelo nome).</summary>
        public void Packet(int action, int id, string name, int online, int id2)
        {
            if (action == 1) Add(id, name, online, id2);
            else if (action == 2) Update(id, name, online, id2);
            else if (action == 3)
            {
                Friends.RemoveAll(f => f.Name == name);
                Sort();
            }
        }

        /// <summary>Update (FUN_100ac4c0): so nomes conhecidos.</summary>
        public void Update(int id, string name, int online, int id2)
        {
            var f = Find(name);
            if (f == null) return;
            f.Online = online;
            f.Id = id;
            f.Id2 = id2;
            Sort();
        }

        /// <summary>L2FriendStatusPacket 0xfc "dSd": (online, nome, id).</summary>
        public void Status(int online, string name, int id)
        {
            var f = Find(name);
            if (f == null) return;
            f.Online = online;
            f.Id = id;
            Sort();
        }

        public bool IsOnline(string name) => Find(name) is { } f && f.Online != 0;

        public sealed class Row
        {
            /// <summary>"group" ou "friend".</summary>
            public string Kind;
            public int GroupId;
            public string Text;
            /// <summary>Canto do botao +/- (grupo) e do texto, na arvore (224 de largura).</summary>
            public float X, Y, TextX;
            public bool Expanded, Selected;
            public string Name;
        }

        /// <summary>
        /// v128 (0x100c5a10): a raiz vazia tem 4 px; os grupos em x 3 com o botao 15 x 15 e o texto "%s (%d)" em x 3+15+3;
        /// os amigos (abertos) em x 3+15+3 com o texto 3 px depois; 19 px por linha.
        /// </summary>
        public List<Row> Rows(Func<int, string> ss)
        {
            var o = new List<Row>();
            float y = 4;
            foreach (var (gid, label, open) in new[] { (1, ss(1006), OnlineOpen), (0, ss(1007), OfflineOpen) })
            {
                var members = Friends.FindAll(f => (f.Online != 0 ? 1 : 0) == gid);
                o.Add(new Row { Kind = "group", GroupId = gid, Text = $"{label} ({members.Count})", X = 3, Y = y, TextX = 3 + 15 + 3, Expanded = open,
                    Selected = SelectedGroup && SelectedGroupId == gid });
                y += 19;
                if (!open) continue;
                foreach (var f in members)
                {
                    o.Add(new Row { Kind = "friend", GroupId = gid, Text = f.Name, Name = f.Name, X = 21, Y = y, TextX = 24, Selected = !SelectedGroup && Selected == f.Name });
                    y += 19;
                }
            }
            return o;
        }

        /// <summary>Altura do conteudo da arvore (para a barra de rolagem).</summary>
        public float Height(Func<int, string> ss)
        {
            var r = Rows(ss);
            return r.Count == 0 ? 4 : r[r.Count - 1].Y + 19;
        }

        /// <summary>LButtonDown: seleciona a linha; num grupo tambem abre/fecha.</summary>
        public void Click(Row r)
        {
            if (r == null) return;
            if (r.Kind == "group")
            {
                SelectedGroup = true;
                SelectedGroupId = r.GroupId;
                if (r.GroupId == 1) OnlineOpen = !OnlineOpen;
                else OfflineOpen = !OfflineOpen;
            }
            else
            {
                SelectedGroup = false;
                Selected = r.Name;
            }
        }

        /// <summary>Duplo clique (v111): so um amigo online abre a conversa.</summary>
        public string DoubleClick(Row r) => r != null && r.Kind == "friend" && IsOnline(r.Name) ? r.Name : null;

        /// <summary>
        /// FUN_100c72c0: o texto cabe em 218 - (botao + recuo + x); cortado, ganha "...".
        /// </summary>
        public static string Truncate(string s, float maxW, Func<string, float> measure)
        {
            if (measure(s) <= maxW) return s;
            var k = s.Length;
            while (k > 0 && measure(s.Substring(0, k) + "...") > maxW) k--;
            return s.Substring(0, k) + "...";
        }

        /// <summary>L2FriendSay: os codigos especiais viram systemmsg (0x93 1354, 0x91 1356, 0x26c 1357, 0x437 1355).</summary>
        public static int SayMessage(int code) => code switch { 0x93 => 1354, 0x91 => 1356, 0x26c => 1357, 0x437 => 1355, _ => 0 };
    }
}
