// Option.ini do cliente (04 §7.1): INI de texto com CRLF, booleanos True/False e floats com 6 casas. Get/SetOption* do script
// leem e gravam aqui. O Unity guarda o arquivo em Application.persistentDataPath; na primeira execucao parte do Option.ini
// do cliente original (copia em StreamingAssets/L2Web/client/System), sem as secoes acrescentadas pelo servidor
// ([Key], [AutoEnchant], [Neophron], [Potions]: decisao do usuario, N3 em Docs/validacao.md).
using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Text;
using UnityEngine;

namespace L2Web
{
    public static class L2Options
    {
        /// <summary>Secoes que nao sao do Interlude original (93 §6) e nao vao para o Option.ini do Unity.</summary>
        public static readonly string[] ServerSections = { "Key", "AutoEnchant", "Neophron", "Potions" };

        public static string FilePath => Path.Combine(Application.persistentDataPath, "Option.ini");

        static readonly List<(string name, List<(string key, string value)> keys)> sections = new();
        static bool loaded;

        /// <summary>Le o arquivo do Unity, ou o do cliente original na primeira vez (`path` para testes).</summary>
        public static void Load(string path = null)
        {
            loaded = true;
            sections.Clear();
            var f = path ?? FilePath;
            if (path == null && !File.Exists(f)) f = GameData.ClientFile("Option.ini");
            if (!File.Exists(f)) return;
            List<(string, string)> cur = null;
            foreach (var raw in File.ReadAllLines(f))
            {
                var l = raw.Trim();
                if (l.StartsWith("[") && l.EndsWith("]"))
                {
                    var name = l.Substring(1, l.Length - 2);
                    cur = Array.IndexOf(ServerSections, name) >= 0 ? null : new List<(string, string)>();
                    if (cur != null) sections.Add((name, cur));
                }
                else if (cur != null && l.IndexOf('=') > 0)
                {
                    var i = l.IndexOf('=');
                    cur.Add((l.Substring(0, i), l.Substring(i + 1)));
                }
            }
        }

        static List<(string key, string value)> Section(string name, bool create)
        {
            if (!loaded) Load();
            foreach (var s in sections)
                if (string.Equals(s.name, name, StringComparison.OrdinalIgnoreCase)) return s.keys;
            if (!create) return null;
            var l = new List<(string, string)>();
            sections.Add((name, l));
            return l;
        }

        public static string GetString(string section, string key, string def = null)
        {
            var s = Section(section, false);
            if (s == null) return def;
            foreach (var (k, v) in s)
                if (string.Equals(k, key, StringComparison.OrdinalIgnoreCase)) return v;
            return def;
        }

        public static void SetString(string section, string key, string value)
        {
            var s = Section(section, true);
            for (var i = 0; i < s.Count; i++)
                if (string.Equals(s[i].key, key, StringComparison.OrdinalIgnoreCase))
                {
                    s[i] = (s[i].key, value);
                    return;
                }
            s.Add((key, value));
        }

        /// <summary>GetOptionBool: "True"/"False" (sem diferenciar maiusculas), ou um numero diferente de 0.</summary>
        public static bool GetBool(string section, string key, bool def = false)
        {
            var v = GetString(section, key);
            if (v == null) return def;
            if (bool.TryParse(v, out var b)) return b;
            return int.TryParse(v, out var n) ? n != 0 : def;
        }

        public static void SetBool(string section, string key, bool v) => SetString(section, key, v ? "True" : "False");

        public static int GetInt(string section, string key, int def = 0) =>
            int.TryParse(GetString(section, key), NumberStyles.Integer, CultureInfo.InvariantCulture, out var v) ? v : def;

        public static void SetInt(string section, string key, int v) => SetString(section, key, v.ToString(CultureInfo.InvariantCulture));

        public static float GetFloat(string section, string key, float def = 0) =>
            float.TryParse(GetString(section, key), NumberStyles.Float, CultureInfo.InvariantCulture, out var v) ? v : def;

        /// <summary>Floats com 6 casas, como o original (1.000000).</summary>
        public static void SetFloat(string section, string key, float v) => SetString(section, key, v.ToString("0.000000", CultureInfo.InvariantCulture));

        /// <summary>Texto do arquivo (secoes e chaves na ordem lidas, CRLF, linha em branco entre secoes).</summary>
        public static string Build()
        {
            if (!loaded) Load();
            var sb = new StringBuilder();
            foreach (var (name, keys) in sections)
            {
                sb.Append('[').Append(name).Append("]\r\n");
                foreach (var (k, v) in keys) sb.Append(k).Append('=').Append(v).Append("\r\n");
                sb.Append("\r\n");
            }
            return sb.ToString();
        }

        public static void Save(string path = null) => File.WriteAllText(path ?? FilePath, Build());

        /// <summary>Secoes e chaves atuais (para os testes).</summary>
        public static IEnumerable<(string section, string key)> Keys()
        {
            if (!loaded) Load();
            foreach (var (name, keys) in sections)
                foreach (var (k, _) in keys) yield return (name, k);
        }
    }
}
