// Controle do Interface.xdat (/ui/layout.json): o `Ctrl` do l2wnd.ts. As propriedades variam por tipo, entao o JSON
// fica num JObject e os campos comuns tem acessores.
using System.Collections.Generic;
using System.Globalization;
using Newtonsoft.Json.Linq;

namespace L2Web.UI
{
    public sealed class L2Anchor
    {
        public string Parent = "TOP_LEFT";
        public string This = "TOP_LEFT";
        public string Ctrl = "";
        public float X, Y;
    }

    public sealed class L2Ctrl
    {
        /// <summary>Propriedades do controle (como no layout.json, sem "children").</summary>
        public JObject J;
        /// <summary>Filhos (as heranca de superName nao mudam os filhos).</summary>
        public List<L2Ctrl> Children = new();

        public string Type => S("type");
        public string Name => S("name");
        public string SuperName => S("superName");
        public string Parent => S("parent");

        /// <summary>size [w, h] (null se faltar).</summary>
        public float[] Size => Pair("size");

        /// <summary>sizePercent [w, h] (null se faltar).</summary>
        public float[] SizePercent => Pair("sizePercent");

        public L2Anchor Anchor
        {
            get
            {
                if (J["anchor"] is not JObject a) return null;
                return new L2Anchor
                {
                    Parent = (string)a["parent"] ?? "TOP_LEFT",
                    This = (string)a["this"] ?? "TOP_LEFT",
                    Ctrl = (string)a["ctrl"] ?? "",
                    X = ToNum(a["x"], 0),
                    Y = ToNum(a["y"], 0),
                };
            }
        }

        public JToken this[string k] => J[k];

        /// <summary>Campo de janela pelo nome XML original (L2XdatFields: "frame", "title", "savePosition"...).</summary>
        public float WndN(string xml) => N(L2XdatFields.Unk("Window", xml) ?? xml);

        public string WndS(string xml) => S(L2XdatFields.Unk("Window", xml) ?? xml);

        /// <summary>Texto da propriedade (null se ausente).</summary>
        public string S(string k)
        {
            var t = J[k];
            return t == null || t.Type == JTokenType.Null ? null : t.Type == JTokenType.String ? (string)t : t.ToString();
        }

        /// <summary>Number(c[k]) do JS: NaN se nao for numero.</summary>
        public float N(string k) => ToNum(J[k], float.NaN);

        /// <summary>Number(c[k]) || 0.</summary>
        public float N0(string k)
        {
            var v = N(k);
            return float.IsNaN(v) ? 0 : v;
        }

        /// <summary>O `set(v)` do l2wnd.ts: definido (nao "undefined" nem -9999).</summary>
        public bool Has(string k) => IsSet(J[k]);

        public static bool IsSet(JToken v)
        {
            if (v == null || v.Type == JTokenType.Null || v.Type == JTokenType.Undefined) return false;
            if (v.Type == JTokenType.String && (string)v == "undefined") return false;
            if ((v.Type == JTokenType.Integer || v.Type == JTokenType.Float) && (double)v == -9999) return false;
            return true;
        }

        public static float ToNum(JToken t, float def)
        {
            if (t == null) return def;
            switch (t.Type)
            {
                case JTokenType.Integer:
                case JTokenType.Float:
                    return (float)(double)t;
                case JTokenType.Boolean:
                    return (bool)t ? 1 : 0;
                case JTokenType.String:
                    var s = ((string)t).Trim();
                    if (s.Length == 0) return 0;
                    return float.TryParse(s, NumberStyles.Float, CultureInfo.InvariantCulture, out var f) ? f : def;
                default:
                    return def;
            }
        }

        float[] Pair(string k)
        {
            if (J[k] is not JArray a || a.Count < 2) return null;
            return new[] { ToNum(a[0], 0), ToNum(a[1], 0) };
        }

        /// <summary>Controle a partir do JSON (recursivo nos filhos).</summary>
        public static L2Ctrl Parse(JObject o)
        {
            var c = new L2Ctrl { J = new JObject() };
            foreach (var p in o.Properties())
                if (p.Name != "children") c.J[p.Name] = p.Value;
            if (o["children"] is JArray ch)
                foreach (var k in ch)
                    if (k is JObject ko) c.Children.Add(Parse(ko));
            return c;
        }
    }
}
