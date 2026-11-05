// WindowsInfo.ini como o NWindow.dll o le (FUN_1014d5xx: posX/posY e width/height por janela) e grava (FUN_1014d380, na
// saida; 87, 93 §5): so as janelas com savePosition = 1 no xdat guardam a posicao e so as com saveSize = 1 guardam o
// tamanho, incluindo as barras de atalho filhas do ShortcutWnd e a heranca por superName (-1 = nao definido, vale o da
// janela-base: GMInventoryWnd <- InventoryWnd). Janela sem nome usa um numero como secao ([1]..[8]: chat, abas e janelas
// nativas). Ordem das secoes como no arquivo do original: as de tamanho, as numericas e as de posicao, na ordem do xdat.
// O arquivo fica em Application.persistentDataPath (o original o grava em System\).
using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Text;
using UnityEngine;

namespace L2Web.UI
{
    public static class L2WindowsInfo
    {
        public static string FilePath => Path.Combine(Application.persistentDataPath, "WindowsInfo.ini");

        /// <summary>Secoes lidas (ordem preservada) -> chave -> valor.</summary>
        static readonly List<(string name, Dictionary<string, string> keys)> sections = new();
        static bool loaded;

        /// <summary>
        /// Secoes numericas observadas no WindowsInfo.ini do original (out/re/runtime, 87): [6] guarda o tamanho do chat
        /// (348x187) e [7] a MessengerWnd nativa em (384, 180) (89); as demais sao abas destacadas do chat e janelas nativas
        /// sem nome. Valem quando o arquivo ainda nao tem a secao.
        /// </summary>
        static readonly (string name, int? x, int? y, int? w, int? h)[] Numbered =
        {
            ("1", 0, 263, null, null), ("2", 0, 263, null, null), ("3", 0, 263, null, null), ("4", 559, 482, null, null),
            ("5", 347, 1072, null, null), ("6", null, null, 348, 187), ("7", 384, 180, null, null), ("8", 692, 358, null, null),
        };

        /// <summary>Nome no xdat das barras de atalho do Unity (L2Wnd "ShortcutBar1" = ShortcutWndHorizontal etc.).</summary>
        public static string XdatName(string unityName) => unityName switch
        {
            "ShortcutBar1" => "ShortcutWndHorizontal",
            "ShortcutBar2" => "ShortcutWndHorizontal_1",
            "ShortcutBar3" => "ShortcutWndHorizontal_2",
            "ShortcutBarV1" => "ShortcutWndVertical",
            "ShortcutBarV2" => "ShortcutWndVertical_1",
            "ShortcutBarV3" => "ShortcutWndVertical_2",
            _ => unityName,
        };

        /// <summary>Campo bool da janela com a heranca do superName (-1 = nao definido).</summary>
        public static bool Flag(L2Ctrl def, string xml, int depth = 0)
        {
            if (def == null) return false;
            var v = def.WndN(xml);
            if ((float.IsNaN(v) || v == -1) && depth < 20 && def.Has("superName"))
            {
                var sup = def.SuperName;
                return Flag(L2WndUtil.WindowDef(sup.Substring(sup.LastIndexOf('.') + 1)), xml, depth + 1);
            }
            return v == 1;
        }

        /// <summary>Definicao (raiz ou filha do ShortcutWnd) pelo nome do xdat.</summary>
        static L2Ctrl Def(string name)
        {
            var d = L2WndUtil.WindowDef(name);
            if (d != null) return d;
            var sc = L2WndUtil.WindowDef("ShortcutWnd");
            return sc?.Children.Find(c => c.Name == name);
        }

        /// <summary>true se a janela grava a posicao (savePosition).</summary>
        public static bool SavesPosition(string xdatName) => Flag(Def(xdatName), "savePosition");

        /// <summary>
        /// Secoes que o original grava, em ordem: (nome, grava posicao, grava tamanho). Precisa do layout carregado.
        /// </summary>
        public static List<(string name, bool pos, bool size)> Layout()
        {
            var size = new List<string>();
            var pos = new List<string>();
            foreach (var w in (Newtonsoft.Json.Linq.JArray)L2WndUtil.Layout["windows"])
            {
                var name = (string)w["name"];
                var def = L2WndUtil.WindowDef(name);
                if (Flag(def, "saveSize")) size.Add(name);
                if (Flag(def, "savePosition")) pos.Add(name);
                if (name == "ShortcutWnd")
                    foreach (var c in def.Children)
                        if (Flag(c, "savePosition")) pos.Add(c.Name);
            }
            var outp = new List<(string, bool, bool)>();
            foreach (var n in Numbered)
                if (n.w != null) outp.Add((n.name, n.x != null, true));
            foreach (var n in size) outp.Add((n, pos.Contains(n), true));
            foreach (var n in Numbered)
                if (n.w == null) outp.Add((n.name, true, false));
            foreach (var n in pos)
                if (!size.Contains(n)) outp.Add((n, true, false));
            return outp;
        }

        public static void Load(string path = null)
        {
            sections.Clear();
            loaded = true;
            path ??= FilePath;
            if (!File.Exists(path)) return;
            Dictionary<string, string> cur = null;
            foreach (var raw in File.ReadAllLines(path))
            {
                var l = raw.Trim();
                if (l.StartsWith("[") && l.EndsWith("]"))
                {
                    cur = new Dictionary<string, string>(StringComparer.OrdinalIgnoreCase);
                    sections.Add((l.Substring(1, l.Length - 2), cur));
                }
                else if (cur != null && l.IndexOf('=') > 0)
                {
                    var i = l.IndexOf('=');
                    cur[l.Substring(0, i)] = l.Substring(i + 1);
                }
            }
        }

        static Dictionary<string, string> Section(string name, bool create)
        {
            if (!loaded) Load();
            foreach (var s in sections)
                if (string.Equals(s.name, name, StringComparison.OrdinalIgnoreCase)) return s.keys;
            if (!create) return null;
            var d = new Dictionary<string, string>(StringComparer.OrdinalIgnoreCase);
            sections.Add((name, d));
            return d;
        }

        static bool Int(Dictionary<string, string> s, string k, out int v)
        {
            v = 0;
            return s != null && s.TryGetValue(k, out var t) && int.TryParse(t, NumberStyles.Integer, CultureInfo.InvariantCulture, out v);
        }

        /// <summary>Secao do tamanho: o ChatWnd (348x187 no xdat) e a unica janela 348x187 e grava em [6] [I 87].</summary>
        public static string SizeSection(string xdatName) => xdatName == "ChatWnd" ? "6" : xdatName;

        /// <summary>Tamanho salvo (width, height) da janela, se o arquivo tem a secao com os dois.</summary>
        public static bool TrySize(string unityName, out Vector2 size)
        {
            size = default;
            var s = Section(SizeSection(XdatName(unityName)), false);
            if (!Int(s, "width", out var w) || !Int(s, "height", out var h)) return false;
            size = new Vector2(w, h);
            return true;
        }

        /// <summary>Posicao salva (posX, posY) da janela, se ela grava posicao e o arquivo tem a secao.</summary>
        public static bool TryPosition(string unityName, out Vector2 p)
        {
            p = default;
            var n = XdatName(unityName);
            if (!SavesPosition(n)) return false;
            var s = Section(n, false);
            if (!Int(s, "posX", out var x) || !Int(s, "posY", out var y)) return false;
            p = new Vector2(x, y);
            return true;
        }

        /// <summary>Guarda a posicao (so das janelas com savePosition); null apaga.</summary>
        public static void SetPosition(string unityName, Vector2? p)
        {
            var n = XdatName(unityName);
            if (!SavesPosition(n)) return;
            var s = Section(n, p != null);
            if (s == null) return;
            if (p is Vector2 v)
            {
                s["posX"] = Mathf.RoundToInt(v.x).ToString(CultureInfo.InvariantCulture);
                s["posY"] = Mathf.RoundToInt(v.y).ToString(CultureInfo.InvariantCulture);
            }
            else
            {
                s.Remove("posX");
                s.Remove("posY");
            }
        }

        /// <summary>
        /// Texto do arquivo: as secoes do Layout(), cada uma com o valor da janela aberta (`current`), senao o que o arquivo
        /// ja tinha, senao o padrao (`fallback`: tamanho do xdat e posicao pela ancora).
        /// </summary>
        public static string Build(Func<string, (Vector2 pos, Vector2 size)?> current, Func<string, (Vector2 pos, Vector2 size)> fallback)
        {
            var sb = new StringBuilder();
            foreach (var (name, pos, size) in Layout())
            {
                var old = Section(name, false);
                var num = Array.Find(Numbered, n => n.name == name);
                var cur = current?.Invoke(name);
                var def = num.name != null
                    ? (pos: new Vector2(num.x ?? 0, num.y ?? 0), size: new Vector2(num.w ?? 0, num.h ?? 0))
                    : fallback(name);
                sb.Append('[').Append(name).Append("]\r\n");
                if (size)
                {
                    sb.Append("width=").Append(Val(cur?.size.x, old, "width", def.size.x)).Append("\r\n");
                    sb.Append("height=").Append(Val(cur?.size.y, old, "height", def.size.y)).Append("\r\n");
                }
                if (pos)
                {
                    sb.Append("posX=").Append(Val(cur?.pos.x, old, "posX", def.pos.x)).Append("\r\n");
                    sb.Append("posY=").Append(Val(cur?.pos.y, old, "posY", def.pos.y)).Append("\r\n");
                }
                sb.Append("\r\n");
            }
            return sb.ToString();
        }

        static string Val(float? cur, Dictionary<string, string> old, string key, float def)
        {
            if (cur is float c) return Mathf.RoundToInt(c).ToString(CultureInfo.InvariantCulture);
            if (old != null && old.TryGetValue(key, out var o)) return o;
            return Mathf.RoundToInt(def).ToString(CultureInfo.InvariantCulture);
        }

        static readonly Dictionary<string, Vector2> AnchorPoint = new()
        {
            ["NONE"] = new(0, 0), ["TOP_LEFT"] = new(0, 0), ["TOP_CENTER"] = new(0.5f, 0), ["TOP_RIGHT"] = new(1, 0), ["CENTER_LEFT"] = new(0, 0.5f),
            ["CENTER"] = new(0.5f, 0.5f), ["CENTER_RIGHT"] = new(1, 0.5f), ["BOTTOM_LEFT"] = new(0, 1), ["BOTTOM_CENTER"] = new(0.5f, 1),
            ["BOTTOM_RIGHT"] = new(1, 1),
        };

        /// <summary>
        /// WndDefPos do Interface.xdat (layout.json "defaultPositions") pelo nome da janela, sem diferenciar caixa: o
        /// XMLDataManager::CreateDefaultPosition (FUN_100c9230) passa cada entrada ao NCWnd::SetDefaultPositionInfo (FUN_1005ca60),
        /// que numa repetida so atualiza os campos, entao vale a ultima. -9999 = nao definido.
        /// </summary>
        public static (string align, float x, float y, float w, float h)? DefPos(string name)
        {
            if (L2WndUtil.Layout?["defaultPositions"] is not Newtonsoft.Json.Linq.JArray list || name == null) return null;
            (string, float, float, float, float)? o = null;
            foreach (var t in list)
                if (string.Equals((string)t["wnd"], name, StringComparison.OrdinalIgnoreCase))
                    o = ((string)t["alignment"], (float)t["x"], (float)t["y"], (float)t["width"], (float)t["height"]);
            return o;
        }

        /// <summary>
        /// NCWnd::SetDefaultPosition (FUN_1005ffd0, slot 0xC8) com WndDefPos: o alinhamento e o ponto da tela e o da janela
        /// (TOP_LEFT, CENTER_RIGHT...), mais (x, y); largura/altura do WndDefPos quando definidas. null sem entrada.
        /// </summary>
        public static (Vector2 pos, Vector2 size)? DefPosition(string name, Vector2 screen, Vector2 size)
        {
            if (DefPos(name) is not { } d) return null;
            if (d.w != -9999 && d.w != -1) size.x = d.w;
            if (d.h != -9999 && d.h != -1) size.y = d.h;
            var p = AnchorPoint.TryGetValue(d.align ?? "", out var v) ? v : Vector2.zero;
            return (new Vector2(screen.x * p.x + d.x - size.x * p.x, screen.y * p.y + d.y - size.y * p.y), size);
        }

        /// <summary>
        /// Posicao e tamanho padrao de uma janela do xdat na tela `screen`: o WndDefPos da janela (DefPosition) e, sem entrada,
        /// a ancora do xdat (o campo "parent" do layout.json e o ponto da propria janela, "this" o do alvo; alvo = outra janela
        /// raiz ou a tela).
        /// </summary>
        public static (Vector2 pos, Vector2 size) Default(string name, Vector2 screen, int depth = 0)
        {
            var d = Def(name);
            var sz = d?.Size ?? new float[] { 0, 0 };
            var size = new Vector2(sz[0], sz[1]);
            if (DefPosition(name, screen, size) is { } dp) return dp;
            var a = d?.Anchor;
            if (a == null || depth > 10) return (Vector2.zero, size);
            var refName = string.IsNullOrEmpty(a.Ctrl) ? "" : a.Ctrl.Substring(a.Ctrl.LastIndexOf('.') + 1);
            var rf = refName != "" && refName != name && Def(refName) != null ? Default(refName, screen, depth + 1) : (Vector2.zero, screen);
            var own = AnchorPoint.TryGetValue(a.Parent ?? "", out var o) ? o : Vector2.zero;
            var tgt = AnchorPoint.TryGetValue(a.This ?? "", out var t) ? t : Vector2.zero;
            var x = rf.Item1.x + rf.Item2.x * tgt.x + a.X - size.x * own.x;
            var y = rf.Item1.y + rf.Item2.y * tgt.y + a.Y - size.y * own.y;
            return (new Vector2(x, y), size);
        }

        /// <summary>Grava o arquivo (na saida do jogo, como o original).</summary>
        public static void Save(Func<string, (Vector2 pos, Vector2 size)?> current, Func<string, (Vector2 pos, Vector2 size)> fallback, string path = null)
        {
            var text = Build(current, fallback);
            File.WriteAllText(path ?? FilePath, text);
            Load(path ?? FilePath);
        }
    }
}
