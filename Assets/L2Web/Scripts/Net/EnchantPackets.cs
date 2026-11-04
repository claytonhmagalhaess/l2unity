// Melhoria de item (#0046, T20): enchant (ChooseInventoryItem 0x6f, EnchantResult 0x81, RequestEnchantItem 0x58) e refino
// (ExShowVariationMakeWindow/CancelWindow FE:50/51, ExConfirmVariation* FE:52-54, ExVariationResult FE:55, ExConfirmCancelItem
// FE:56, ExVariationCancelResult FE:57 e os RequestConfirm*/RequestRefine* D0:29-2e). Campos pelo aCis; tipos conferidos
// contra o engine.dll em ReceivedLayoutTests e RequestFormatTests. A ordem das chaves de cada Ex de refino segue o
// significado dos campos no aCis (os nomes do NWindow.dll vem em ordem alfabetica na spec 91): a validar.
namespace L2Web.Net
{
    /// <summary>ExPutItemResultForVariationMake FE:52 (ExConfirmVariationItem do aCis).</summary>
    public sealed class VariationTargetInfo
    {
        public int ServerId, ClassId, Result;
    }

    /// <summary>ExPutIntensiveResultForVariationMake FE:53 (ExConfirmVariationRefiner): life stone e a gema exigida.</summary>
    public sealed class VariationRefinerInfo
    {
        public int ServerId, ClassId, GemStoneClassId, GemStoneCount, Result;
    }

    /// <summary>ExPutCommissionResultForVariationMake FE:54 (ExConfirmVariationGemstone).</summary>
    public sealed class VariationGemStoneInfo
    {
        public int ServerId, ClassId, NecessaryCount, GemStoneCount, Result;
    }

    /// <summary>ExVariationResult FE:55: as duas opcoes do aumento e o resultado.</summary>
    public sealed class VariationResultInfo
    {
        public int Option1, Option2, Result;
    }

    /// <summary>ExPutItemResultForVariationCancel FE:56 (ExConfirmCancelItem): item aumentado e o preco para tirar.</summary>
    public sealed class VariationCancelItemInfo
    {
        public int ServerId, ClassId, Option1, Option2;
        public long Adena;
        public int Result;
    }

    public static class EnchantPackets
    {
        /// <summary>ChooseInventoryItem 0x6f "d": o pergaminho de enchant usado (ClassID do EV_EnchantShow).</summary>
        public static int ParseChooseInventoryItem(PacketReader r) => r.D();

        /// <summary>EnchantResult 0x81 "d": 0 sucesso, 1 falha/quebrou, 2 cancelado (aCis EnchantResult).</summary>
        public static int ParseEnchantResult(PacketReader r) => r.D();

        /// <summary>FE:52 "ddd": item, classe, resultado.</summary>
        public static VariationTargetInfo ParseExConfirmVariationItem(PacketReader r) => new VariationTargetInfo { ServerId = r.D(), ClassId = r.D(), Result = r.D() };

        /// <summary>FE:53 "ddddd": life stone, id da life stone, id da gema, quantidade de gemas, resultado.</summary>
        public static VariationRefinerInfo ParseExConfirmVariationRefiner(PacketReader r) => new VariationRefinerInfo
        {
            ServerId = r.D(), ClassId = r.D(), GemStoneClassId = r.D(), GemStoneCount = r.D(), Result = r.D(),
        };

        /// <summary>FE:54 "ddddd": gema, classe, quantidade exigida, quantidade, resultado.</summary>
        public static VariationGemStoneInfo ParseExConfirmVariationGemstone(PacketReader r) => new VariationGemStoneInfo
        {
            ServerId = r.D(), ClassId = r.D(), NecessaryCount = r.D(), GemStoneCount = r.D(), Result = r.D(),
        };

        /// <summary>FE:55 "ddd": opcao 1, opcao 2, resultado (1 sucesso).</summary>
        public static VariationResultInfo ParseExVariationResult(PacketReader r) => new VariationResultInfo { Option1 = r.D(), Option2 = r.D(), Result = r.D() };

        /// <summary>FE:56 "ddddQd": item, classe, opcao 1, opcao 2, preco, resultado.</summary>
        public static VariationCancelItemInfo ParseExConfirmCancelItem(PacketReader r) => new VariationCancelItemInfo
        {
            ServerId = r.D(), ClassId = r.D(), Option1 = r.D(), Option2 = r.D(), Adena = r.Q(), Result = r.D(),
        };

        /// <summary>FE:57 "d": resultado (o engine le um d; o aCis manda ainda um 2o d com o resultado real, ignorado).</summary>
        public static int ParseExVariationCancelResult(PacketReader r) => r.D();

        // ---------------------------------------------------------------- cliente -> servidor

        /// <summary>RequestEnchantItem 0x58 "d": item a encantar com o pergaminho do ChooseInventoryItem.</summary>
        public static byte[] RequestEnchantItem(int objectId) => new PacketWriter().C(0x58).D(objectId).Bytes();

        /// <summary>RequestConfirmTargetItem D0:29 "d": item a aumentar.</summary>
        public static byte[] RequestConfirmTargetItem(int targetId) => new PacketWriter().C(0xd0).H(0x29).D(targetId).Bytes();

        /// <summary>RequestConfirmRefinerItem D0:2a "dd": item e life stone.</summary>
        public static byte[] RequestConfirmRefinerItem(int targetId, int refinerId) => new PacketWriter().C(0xd0).H(0x2a).D(targetId).D(refinerId).Bytes();

        /// <summary>RequestConfirmGemStone D0:2b "dddd": item, life stone, gema e quantidade.</summary>
        public static byte[] RequestConfirmGemStone(int targetId, int refinerId, int gemStoneId, int count) =>
            new PacketWriter().C(0xd0).H(0x2b).D(targetId).D(refinerId).D(gemStoneId).D(count).Bytes();

        /// <summary>RequestRefine D0:2c "dddd": item, life stone, gema e quantidade.</summary>
        public static byte[] RequestRefine(int targetId, int refinerId, int gemStoneId, int count) =>
            new PacketWriter().C(0xd0).H(0x2c).D(targetId).D(refinerId).D(gemStoneId).D(count).Bytes();

        /// <summary>RequestConfirmCancelItem D0:2d "d": item aumentado (UnrefineryWnd).</summary>
        public static byte[] RequestConfirmCancelItem(int objectId) => new PacketWriter().C(0xd0).H(0x2d).D(objectId).Bytes();

        /// <summary>RequestRefineCancel D0:2e "d": tira o aumento.</summary>
        public static byte[] RequestRefineCancel(int objectId) => new PacketWriter().C(0xd0).H(0x2e).D(objectId).Bytes();
    }
}
