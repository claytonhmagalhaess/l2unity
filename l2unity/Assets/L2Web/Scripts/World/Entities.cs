// Funcoes soltas de client/world/entities.ts (setDrawHeight, bgrCss) e tipos auxiliares.
using System;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;

namespace L2Web.World
{
    /// <summary>Instantes (s, a partir de agora) dos notifies de um ataque (retorno de Entity.Attack).</summary>
    public sealed class AttackTimes
    {
        public List<float> Items = new();
        public List<float> Shots = new();
        public bool Ranged;
    }

    /// <summary>Seguindo outro objeto (MoveToPawn).</summary>
    public sealed class FollowInfo
    {
        public int TargetId;
        public float Distance;
    }

    public static class Entities
    {
        /// <summary>
        /// Altura em que o modelo e desenhado. O z do servidor/geodata fica ~30 unidades acima do piso BSP das cidades; o
        /// cliente original assenta o pawn na colisao do chao, entao o desenho usa o piso visivel (terreno) e o
        /// movimento e os pacotes continuam com o z do geodata. (x, y, z) -> z, em unidades do L2.
        /// </summary>
        public static Func<float, float, float, float> DrawHeight = (_, _, z) => z;

        public static void SetDrawHeight(Func<float, float, float, float> fn) => DrawHeight = fn ?? ((_, _, z) => z);

        /// <summary>Cor do L2 (inteiro BGR) para CSS ("rgb(r,g,b)").</summary>
        public static string BgrCss(int? v, string fallback)
        {
            if (v == null) return fallback;
            var b = (v.Value >> 16) & 255;
            var g = (v.Value >> 8) & 255;
            var r = v.Value & 255;
            return $"rgb({r},{g},{b})";
        }

        /// <summary>Cor CSS ("#rgb", "#rrggbb", "rgb(r,g,b)") para Color; `fallback` se nao reconhecer.</summary>
        public static Color CssColor(string css, Color fallback)
        {
            if (string.IsNullOrEmpty(css)) return fallback;
            css = css.Trim();
            if (css.StartsWith("rgb", StringComparison.OrdinalIgnoreCase))
            {
                var a = css.IndexOf('(');
                var b = css.IndexOf(')');
                if (a < 0 || b < a) return fallback;
                var parts = css.Substring(a + 1, b - a - 1).Split(',');
                if (parts.Length < 3) return fallback;
                float P(string s) => float.TryParse(s.Trim(), NumberStyles.Float, CultureInfo.InvariantCulture, out var f) ? f : 0;
                var alpha = parts.Length > 3 ? P(parts[3]) : 1f;
                return new Color(P(parts[0]) / 255f, P(parts[1]) / 255f, P(parts[2]) / 255f, alpha);
            }
            return ColorUtility.TryParseHtmlString(css, out var c) ? c : fallback;
        }
    }
}
