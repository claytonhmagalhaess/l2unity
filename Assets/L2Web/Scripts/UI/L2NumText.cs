// NWndUtil::ConvertNumToText (nw:0x100676e0), o texto por extenso de UIScript.ConvertNumToText / ConvertNumToTextNoAdena
// (execConvertNumToText 0x100050, execConvertNumToTextNoAdena 0x1001b0: o 3o argumento e 0 com adena e 1 sem).
// So o ramo do ingles (GLanguageType 1 ou 6): grupos de 3 digitos, os digitos como numeros e o nome do grupo da
// sysstring 1281 "Thousand, Million, Billion" (GL2GameData+0x6e4e8 = sysstring 1281, a tabela comeca em +0x6a8dc com
// FString de 12 bytes; o "Adena" do fim e o +0x6bed8 = sysstring 469).
using System;

namespace L2Web.UI
{
    public static class L2NumText
    {
        /// <summary>Nomes dos grupos (sysstring 1281), separados por "," sem tirar os espacos (FString::ParseIntoArray).</summary>
        public static Func<int, string> SysString = i => GameData.SysString(i, "");

        /// <summary>ConvertNumToTextNoAdena.</summary>
        public static string NoAdena(string s) => Convert(s, false);

        /// <summary>
        /// FUN_100676e0. Vazio para null, "", "0" ou caractere que nao e digito. Com 13 digitos ou mais o nativo usa outro
        /// caminho (FUN_10062ee0, [V]): aqui fica o proprio texto. Os zeros a esquerda saem; um grupo so de zeros nao aparece.
        /// O separador entre grupos e "," (DAT_10246d48) e antes do nome do grupo vai um " " (DAT_1023d5d0), mesmo no
        /// ultimo grupo: "1234567" -> "1  Million,234 Thousand,567 ".
        /// </summary>
        public static string Convert(string s, bool adena)
        {
            if (string.IsNullOrEmpty(s) || s == "0") return "";
            if (s.Length >= 13) return s;
            foreach (var ch in s)
                if (ch < '0' || ch > '9') return "";
            var digits = s.TrimStart('0');
            var units = (SysString(1281) ?? "").Split(',');
            var n = digits.Length;
            const int group = 3;
            var cnt = n % group;
            // local_124 = (int)(n / 3), menos 1 quando a divisao e exata: grupos que ainda faltam depois deste
            var left = n / group;
            if (n % group == 0) left--;
            var o = new System.Text.StringBuilder();
            bool inGroup = false, pendingSep = false, printed = false;
            for (var i = 0; i < n; i++)
            {
                if (cnt == 0) cnt = group;
                var d = digits[i] - '0';
                if (d != 0 || inGroup)
                {
                    if (pendingSep)
                    {
                        o.Append(',');
                        pendingSep = false;
                    }
                    o.Append(d);
                    inGroup = true;
                    printed = true;
                }
                if (cnt == 1)
                {
                    if (printed)
                    {
                        if (left <= units.Length)
                        {
                            o.Append(' ');
                            inGroup = false;
                        }
                        if (left > 0 && left <= units.Length) o.Append(units[left - 1]);
                        pendingSep = true;
                    }
                    left--;
                    printed = false;
                }
                cnt--;
            }
            if (o.Length > 0 && adena) o.Append(' ').Append(SysString(469));
            return o.ToString();
        }
    }
}
