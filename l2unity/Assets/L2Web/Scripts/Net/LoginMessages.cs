// Mensagens do login server (C1 da matriz, Docs/validacao.md), como o NWindow.dll as monta:
//   LoginFail 0x01 ("c" = motivo) -> console+0x90 = FUN_10150be0: switch(motivo) -> 1 a 3 sysmsg juntadas com " " numa
//     caixa de mensagem (console+0x658); motivo sem case = caixa vazia. O motivo 0x1f nao desfaz o estado do login.
//   AccountKicked 0x02 ("dd", usa o 2o) -> console+0x544 = FUN_10150730 (bits em ordem); sem bit: console+0x540 =
//     FUN_10150920. Os ids sao os FString em GL2GameData+off: (off - 0x240e8 - 4) / 0x5c.
// Tabelas tiradas do pseudocodigo (Docs/tools/gen_golden.py login_msgs); LoginMessageTests confere com o golden.
using System.Collections.Generic;
using System.Linq;

namespace L2Web.Net
{
    public static class LoginMessages
    {
        public static readonly Dictionary<int, int[]> Fail = new()
        {
            [1] = new[] { 448 },
            [2] = new[] { 449, 450 },
            [3] = new[] { 449, 450 },
            [4] = new[] { 461, 462, 463 },
            [6] = new[] { 461, 462, 463 },
            [8] = new[] { 461, 462, 463 },
            [9] = new[] { 461, 462, 463 },
            [10] = new[] { 461, 462, 463 },
            [11] = new[] { 461, 462, 463 },
            [13] = new[] { 461, 462, 463 },
            [14] = new[] { 461, 462, 463 },
            [5] = new[] { 453, 454 },
            [7] = new[] { 455 },
            [12] = new[] { 456 },
            [15] = new[] { 1650 },
            [16] = new[] { 457 },
            [17] = new[] { 396 },
            [18] = new[] { 458, 459, 460 },
            [19] = new[] { 398 },
            [20] = new[] { 399 },
            [21] = new[] { 461 },
            [22] = new[] { 621 },
            [30] = new[] { 756 },
            [31] = new[] { 1243 },
            [32] = new[] { 1242 },
            [33] = new[] { 1340 },
            [35] = new[] { 1407 },
            [36] = new[] { 1920 },
            [37] = new[] { 2051 },
            [38] = new[] { 2052 },
            [39] = new[] { 2053 },
            [40] = new[] { 2056 },
            [41] = new[] { 2091 },
            [42] = new[] { 2153 },
        };

        /// <summary>FUN_10150730: o 1o bit da lista (na ordem dos testes) decide.</summary>
        public static readonly (int mask, int msg)[] KickedFirst =
        {
            (0x1, 2123),
            (0x2, 2122),
            (0x4, 2121),
            (0x8, 2120),
            (0x10, 2119),
            (0x20, 2118),
            (0x40, 2117),
            (0x80, 2128),
            (0x400, 2116),
            (0x800, 2115),
            (0x1000, 2054),
            (0x2000, 2054),
            (0x100, 2126),
            (0x200, 2127),
        };

        /// <summary>FUN_10150920 (so quando o KickedFirst nao acha nada).</summary>
        public static readonly (int mask, int msg)[] KickedSecond =
        {
            (0x4000000, 2042),
            (0x20, 1808),
            (0x100000, 1806),
            (0x200000, 1807),
            (0x80000, 1805),
            (0x10, 1804),
            (0x400000, 1809),
            (0x40000, 1796),
            (0x1, 428),
            (0x2, 429),
            (0x4, 430),
            (0x8, 431),
            (0x40, 434),
            (0x80, 435),
            (0x100, 436),
            (0x200, 437),
            (0x400, 438),
            (0x800, 439),
            (0x1000, 440),
            (0x2000, 441),
            (0x4000, 442),
            (0x8000, 443),
            (0x1830000, 437),
            (0x8000000, 2120),
        };

        public static int[] FailIds(int reason) => Fail.TryGetValue(reason, out var a) ? a : new int[0];

        /// <summary>Sysmsg do AccountKicked, ou 0 (nenhuma caixa).</summary>
        public static int KickedId(int reason)
        {
            foreach (var (m, id) in KickedFirst)
                if ((reason & m) != 0) return id;
            foreach (var (m, id) in KickedSecond)
                if ((reason & m) != 0) return id;
            return 0;
        }

        /// <summary>Textos das sysmsg juntados com " " (o appSprintf "%s %s [%s]").</summary>
        public static string Text(IEnumerable<int> ids) => string.Join(" ", ids.Select(i => GameData.SystemMessage(i, new List<string>()).Text));
    }
}
