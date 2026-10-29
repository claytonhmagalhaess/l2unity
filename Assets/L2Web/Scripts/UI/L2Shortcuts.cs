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
            return k switch
            {
                Key.Escape => 27,
                Key.Enter or Key.NumpadEnter => 13,
                Key.Tab => 9,
                Key.PageUp => 33,
                Key.PageDown => 34,
                Key.Minus => 189,
                Key.Equals => 187,
                Key.LeftBracket => 219,
                Key.RightBracket => 221,
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
