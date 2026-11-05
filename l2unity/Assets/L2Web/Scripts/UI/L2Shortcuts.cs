// Teclas da interface pela tabela do Interface.xdat (layout.json "shortcuts", 05 §5): cada estado de UI (GamingState,
// ServerListState...) liga tecla virtual do Windows + modificadores (16 Shift, 17 Ctrl, 18 Alt) a um comando
// ("UseShortcutItem Num=0", "ShowMainWindow Tab=Skill"...). A tabela prevalece sobre o user.ini (InteractionMaster entrega
// a tecla as Interactions antes do PlayerInput); teclas sem entrada caem no user.ini (movimento, camera).
using System.Collections.Generic;
using Newtonsoft.Json.Linq;
using UnityEngine.InputSystem;

namespace L2Web.UI
{
    public static class L2Shortcuts
    {
        public const int VK_SHIFT = 16, VK_CONTROL = 17, VK_MENU = 18;

        /// <summary>Tecla virtual do Windows para uma tecla do Input System (0 se nao ha).</summary>
        public static int Vk(Key k)
        {
            if (k >= Key.A && k <= Key.Z) return 'A' + (k - Key.A);
            if (k >= Key.Digit1 && k <= Key.Digit9) return '1' + (k - Key.Digit1);
            if (k == Key.Digit0) return '0';
            if (k >= Key.F1 && k <= Key.F12) return 112 + (k - Key.F1);
            if (k >= Key.Numpad0 && k <= Key.Numpad9) return 0x60 + (k - Key.Numpad0);
            return k switch
            {
                Key.Escape => 27,
                Key.Enter or Key.NumpadEnter => 13,
                Key.Tab => 9,
                Key.Backspace => 8,
                Key.Space => 0x20,
                Key.PageUp => 33,
                Key.PageDown => 34,
                Key.End => 0x23,
                Key.Home => 0x24,
                Key.LeftArrow => 0x25,
                Key.UpArrow => 0x26,
                Key.RightArrow => 0x27,
                Key.DownArrow => 0x28,
                Key.PrintScreen => 0x2c,
                Key.Insert => 0x2d,
                Key.Delete => 0x2e,
                Key.NumpadMultiply => 0x6a,
                Key.NumpadPlus => 0x6b,
                Key.NumpadMinus => 0x6d,
                Key.NumpadPeriod => 0x6e,
                Key.NumpadDivide => 0x6f,
                Key.NumLock => 0x90,
                Key.Semicolon => 186,
                Key.Equals => 187,
                Key.Comma => 188,
                Key.Minus => 189,
                Key.Period => 190,
                Key.Slash => 191,
                Key.Backquote => 192,
                Key.LeftBracket => 219,
                Key.Backslash => 220,
                Key.RightBracket => 221,
                Key.Quote => 222,
                _ => 0,
            };
        }

        static readonly Dictionary<string, List<(int key, int m1, int m2, string action)>> sets = new();

        /// <summary>Entradas de um estado ("GamingState"...), do layout carregado.</summary>
        public static List<(int key, int m1, int m2, string action)> State(string state)
        {
            if (sets.TryGetValue(state, out var l)) return l;
            l = new List<(int, int, int, string)>();
            if (L2WndUtil.Layout?["shortcuts"] is JArray all)
                foreach (var s in all)
                    if ((string)s["unk1"] == state && s["actions"] is JArray acts)
                        foreach (var a in acts)
                        {
                            var k = (JArray)a["keys"];
                            l.Add(((int)k[0], (int)k[1], (int)k[2], (string)a["action"]));
                        }
            sets[state] = l;
            return l;
        }

        public static void Reset() => sets.Clear();

        /// <summary>NWndUtil::IsTypingKey (nw:0x100624e0): tudo menos F1-F12, Tab, Esc e NumLock.</summary>
        public static bool IsTypingKey(int vk) => (uint)(vk - 0x70) > 0xb && vk != 9 && vk != 0x1b && vk != 0x90;

        /// <summary>
        /// Modificadores como o HandleKeyboardInput monta (nw:0x101734e0): o primeiro e o de maior prioridade (Alt &gt; Shift &gt;
        /// Ctrl) e o segundo o seguinte; com os tres, o Ctrl fica de fora.
        /// </summary>
        public static (int m1, int m2) Mods(bool alt, bool shift, bool ctrl)
        {
            int m1 = 0, m2 = 0;
            if (alt) m1 = VK_MENU;
            if (shift)
            {
                if (m1 == 0) m1 = VK_SHIFT;
                else m2 = VK_SHIFT;
            }
            if (ctrl)
            {
                if (m1 == 0) m1 = VK_CONTROL;
                else if (m2 == 0) m2 = VK_CONTROL;
            }
            return (m1, m2);
        }

        public enum KeyResult
        {
            /// <summary>Nada: a tecla segue para o user.ini (movimento, camera).</summary>
            None,
            /// <summary>Comando da tabela (Action).</summary>
            Command,
            /// <summary>EV_ChatWndSetFocus: tecla de digitacao com o Enter Chat desligado.</summary>
            ChatFocus,
            /// <summary>LOGINSTATE: tecla de digitacao foca a caixa de login.</summary>
            LoginFocus,
            /// <summary>Shift+Ctrl+Tab com autoridade de builder: alterna a janela de builder (GM) [I].</summary>
            Builder,
        }

        /// <summary>
        /// NConsoleWnd::HandleKeyboardInput (nw:0x101734e0), na ordem: Alt/Shift/Ctrl sozinhos nao fazem nada; sem Alt, em
        /// GamingState/OlympiadObserverState, tecla de digitacao sem caixa de edicao com foco e com EnterChatting desligado
        /// foca o chat; no LoginState foca a caixa de login; Shift+Ctrl+Tab do builder; a tabela do estado e depois a de
        /// estado vazio (GetCommand nw:0x10049120 + ExecuteShortcutCommand).
        /// </summary>
        public static (KeyResult kind, string action) Handle(string state, int vk, bool alt, bool shift, bool ctrl, bool enterChatting, bool editFocused, bool builder = false)
        {
            if (vk == VK_MENU || vk == VK_SHIFT || vk == VK_CONTROL || vk == 0) return (KeyResult.None, null);
            if (!alt)
            {
                var st = (state ?? "").ToUpperInvariant();
                if (st == "GAMINGSTATE" || st == "OLYMPIADOBSERVERSTATE")
                {
                    if (IsTypingKey(vk))
                    {
                        if (editFocused) return (KeyResult.None, null);
                        if (!enterChatting) return (KeyResult.ChatFocus, null);
                    }
                }
                else if (st == "LOGINSTATE" && IsTypingKey(vk) && !editFocused) return (KeyResult.LoginFocus, null);
            }
            var (m1, m2) = Mods(alt, shift, ctrl);
            if (builder && vk == 9 && m1 == VK_SHIFT && m2 == VK_CONTROL) return (KeyResult.Builder, null);
            var a = FindMods(state, vk, m1, m2) ?? FindMods("", vk, m1, m2);
            return a != null ? (KeyResult.Command, a) : (KeyResult.None, null);
        }

        static string FindMods(string state, int vk, int m1, int m2)
        {
            foreach (var (key, e1, e2, action) in State(state))
            {
                if (key != vk) continue;
                // [I] a ordem dos dois modificadores na tabela nao importa
                if ((e1 == m1 && e2 == m2) || (e1 == m2 && e2 == m1)) return action;
            }
            return null;
        }

        /// <summary>Comando da tecla com exatamente esses modificadores, ou null.</summary>
        public static string Find(string state, int vk, bool ctrl, bool alt, bool shift)
        {
            if (vk == 0) return null;
            foreach (var (key, m1, m2, action) in State(state))
            {
                if (key != vk) continue;
                bool c = m1 == VK_CONTROL || m2 == VK_CONTROL, a = m1 == VK_MENU || m2 == VK_MENU, s = m1 == VK_SHIFT || m2 == VK_SHIFT;
                if (c == ctrl && a == alt && s == shift) return action;
            }
            return null;
        }

        /// <summary>Nome do comando e parametros ("ShowMainWindow Tab=Skill" -> ("ShowMainWindow", {Tab: Skill})).</summary>
        public static (string cmd, Dictionary<string, string> args) Parse(string action)
        {
            var args = new Dictionary<string, string>();
            var parts = (action ?? "").Split(' ');
            for (var i = 1; i < parts.Length; i++)
            {
                var eq = parts[i].IndexOf('=');
                if (eq > 0) args[parts[i].Substring(0, eq)] = parts[i].Substring(eq + 1);
            }
            return (parts[0], args);
        }
    }
}
