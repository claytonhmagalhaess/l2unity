// Nomes de sussurro do campo do chat (NCChatWnd, nw:0x10139700 AttachWhisperName e nw:0x101398c0 ChangeWhisperName, chamados
// pelo NCChatWnd::OnChatEditBox nw:0x1013bf90 com os codigos 3, 4 e 5). Cada um poe no campo, por EV_ChatWndSetString,
// o texto "\"nome " (o prefixo de sussurro e o nome). Sem Unity.
using System.Collections.Generic;

namespace L2Web.UI
{
    public sealed class ChatWhisper
    {
        /// <summary>Quantos nomes ficam guardados [I] (o tamanho da lista do nativo nao foi lido).</summary>
        public const int Max = 10;

        /// <summary>Nomes, o mais recente primeiro.</summary>
        public readonly List<string> Names = new();
        /// <summary>+0x21c: ligado pelo AttachWhisperName; sem ele o ChangeWhisperName nao faz nada.</summary>
        public bool Active;
        /// <summary>+0x218: indice do nome mostrado.</summary>
        public int Index;

        /// <summary>Guarda o nome de quem sussurrou (ou para quem se sussurrou), na frente da lista, sem repetir.</summary>
        public void Add(string name)
        {
            if (string.IsNullOrEmpty(name)) return;
            Names.Remove(name);
            Names.Insert(0, name);
            if (Names.Count > Max) Names.RemoveAt(Names.Count - 1);
        }

        /// <summary>
        /// AttachWhisperName(nome): sem nome, o mais recente (codigo 3); com nome, esse. Devolve o texto do campo ou null (lista
        /// vazia). Liga a troca de nomes.
        /// </summary>
        public string Attach(string name = null)
        {
            Active = true;
            Index = 0;
            if (name != null) return "\"" + name + " ";
            return Names.Count > 0 ? "\"" + Names[0] + " " : null;
        }

        /// <summary>
        /// ChangeWhisperName(dir): so com a troca ligada. dir 0 (codigo 5) vai para o proximo nome (mais antigo); passando do
        /// ultimo, o campo fica so com o prefixo. dir 1 (codigo 4) volta (mais recente), parando no primeiro.
        /// </summary>
        public string Change(int dir)
        {
            if (!Active || Names.Count == 0) return null;
            if (dir == 0)
            {
                if (Index >= Names.Count - 1)
                {
                    Index = Names.Count;
                    return "\"";
                }
                Index++;
            }
            else
            {
                Index = System.Math.Min(Index - 1, Names.Count - 1);
                if (Index < 0) Index = 0;
            }
            return "\"" + Names[Index] + " ";
        }

        /// <summary>Nome do remetente numa linha "nome: texto" de sussurro ("->nome" = sussurro enviado) [I].</summary>
        public static string Sender(string msg)
        {
            if (string.IsNullOrEmpty(msg)) return null;
            var i = msg.IndexOf(':');
            if (i <= 0) return null;
            var n = msg.Substring(0, i).Trim();
            if (n.StartsWith("->")) n = n.Substring(2);
            return n.Length > 0 ? n : null;
        }
    }
}
