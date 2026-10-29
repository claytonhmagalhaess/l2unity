// Formato "Chave=Valor" do param dos eventos EV_* e dos natives (93 §8.2), como o NWindow.dll o escreve e le:
//   escrita (execParamAdd -> FUN_10040230 -> FUN_1003fb30): nada se a chave ou o valor estiver vazio; senao ' ' se o
//     param ja tem algo, depois chave, '=', 0x7F, valor e 0x7F;
//   leitura (execParseString/execParseInt -> FUN_1003fc20): appStrfind (Core.dll 0x10103ea4) da chave; a ocorrencia so
//     vale com '=' logo depois, senao a busca continua depois dela; o valor termina no proximo 0x7F se comecar por 0x7F,
//     senao no primeiro espaco (ou no fim), com no maximo 4096 caracteres. Chave ou param vazio = nao encontrado, e o
//     valor de saida fica como estava.
using System.Text;

namespace L2Web.UI
{
    public static class L2Param
    {
        public const char Quote = '\x7f';
        public const int MaxValue = 0x1000;

        /// <summary>ParamAdd(param, chave, valor).</summary>
        public static string Add(string param, string key, string value)
        {
            param ??= "";
            if (string.IsNullOrEmpty(key) || string.IsNullOrEmpty(value)) return param;
            var sb = new StringBuilder(param);
            if (sb.Length != 0) sb.Append(' ');
            return sb.Append(key).Append('=').Append(Quote).Append(value).Append(Quote).ToString();
        }

        public static string Add(string param, string key, int value) => Add(param, key, value.ToString());

        /// <summary>ParseString(param, chave, out valor): true se achou.</summary>
        public static bool ParseString(string param, string key, ref string value)
        {
            if (string.IsNullOrEmpty(param) || string.IsNullOrEmpty(key)) return false;
            var p = StrFind(param, 0, key);
            if (p < 0) return false;
            while (true)
            {
                p += key.Length;
                if (p < param.Length && param[p] == '=') break;
                p = StrFind(param, p, key);
                if (p < 0) return false;
            }
            var start = p + 1;
            var end = ' ';
            if (start < param.Length && param[start] == Quote)
            {
                start++;
                end = Quote;
            }
            var sb = new StringBuilder();
            for (var i = 0; i < MaxValue && start + i < param.Length && param[start + i] != end; i++) sb.Append(param[start + i]);
            value = sb.ToString();
            return true;
        }

        /// <summary>ParseInt(param, chave, out valor): o texto achado passa pelo appAtoi.</summary>
        public static bool ParseInt(string param, string key, ref int value)
        {
            string s = null;
            if (!ParseString(param, key, ref s)) return false;
            value = Atoi(s);
            return true;
        }

        /// <summary>
        /// appStrfind do Core.dll a partir de `start`: sem diferenciar maiusculas (so a-z), e so aceita uma ocorrencia cujo
        /// caractere anterior nao seja [A-Za-z0-9]; o estado "anterior alfanumerico" comeca falso em `start`.
        /// </summary>
        public static int StrFind(string s, int start, string find)
        {
            if (string.IsNullOrEmpty(find)) return -1;
            var first = Upper(find[0]);
            var prevAlnum = false;
            for (var i = start; i < s.Length && s[i] != '\0'; i++)
            {
                var c = Upper(s[i]);
                if (!prevAlnum && c == first && string.Compare(s, i + 1, find, 1, find.Length - 1, System.StringComparison.OrdinalIgnoreCase) == 0
                    && i + find.Length <= s.Length)
                    return i;
                prevAlnum = c >= 'A' && c <= 'Z' || c >= '0' && c <= '9';
            }
            return -1;
        }

        static char Upper(char c) => c >= 'a' && c <= 'z' ? (char)(c - 0x20) : c;

        /// <summary>appAtoi (atoi do CRT em texto largo): espacos iniciais, sinal e digitos ate o primeiro nao-digito.</summary>
        public static int Atoi(string s)
        {
            if (s == null) return 0;
            var i = 0;
            while (i < s.Length && (s[i] == ' ' || s[i] >= '\t' && s[i] <= '\r')) i++;
            var neg = false;
            if (i < s.Length && (s[i] == '+' || s[i] == '-')) neg = s[i++] == '-';
            long v = 0;
            for (; i < s.Length && s[i] >= '0' && s[i] <= '9'; i++) v = unchecked(v * 10 + (s[i] - '0'));
            return unchecked((int)(neg ? -v : v));
        }
    }
}
