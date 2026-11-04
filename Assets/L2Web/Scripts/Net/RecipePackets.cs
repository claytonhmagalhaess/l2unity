// Fabricacao (#0046, T19): RecipeBookItemList 0xd6, RecipeItemMakeInfo 0xd7, RecipeShopManageList 0xd8, RecipeShopSellList
// 0xd9, RecipeShopItemInfo 0xda, RecipeShopMsg 0xdb e os envios 0xac-0xb7 das janelas Recipe*. O aCis do usuario nao
// implementa receitas (nem os serverpackets nem os clientpackets 0xac-0xb7): os formatos sao os que o engine.dll le e envia
// (Golden/packet_layouts.json e requests.json); a ordem dos campos segue as chaves dos eventos (spec 07 §6) e e a validar
// num servidor que tenha fabricacao.
using System.Collections.Generic;

namespace L2Web.Net
{
    public sealed class RecipeBookInfo
    {
        /// <summary>Type do EV_RecipeShowBookWnd: 0 anao, 1 comum (RecipeBookWnd: 1 = ss1214).</summary>
        public int Type;
        public int MaxMp;
        /// <summary>Id da receita e a posicao (1..n).</summary>
        public List<(int RecipeId, int Index)> Recipes = new List<(int, int)>();
    }

    public sealed class RecipeMakeInfo
    {
        public int RecipeId, Type, CurrentMp, MaxMp;
        /// <summary>MakingResult: resultado da ultima fabricacao (1 sucesso, 0 falha; -1 antes de fabricar).</summary>
        public int MakingResult;
    }

    public sealed class RecipeShopEntry
    {
        public int RecipeId, CanBeMade, Fee;
    }

    public sealed class RecipeShopManageInfo
    {
        public int OwnerId, Adena, Type;
        public List<(int RecipeId, int Index)> Book = new List<(int, int)>();
        public List<RecipeShopEntry> Shop = new List<RecipeShopEntry>();
    }

    public sealed class RecipeShopSellInfo
    {
        /// <summary>ServerID do EV_RecipeShowBuyListWnd: o dono da loja de fabricacao.</summary>
        public int OwnerId, CurrentMp, MaxMp, Adena;
        public List<RecipeShopEntry> Items = new List<RecipeShopEntry>();
    }

    public sealed class RecipeShopItemInfo
    {
        public int OwnerId, RecipeId, CurrentMp, MaxMp, MakingResult, Adena;
    }

    public static class RecipePackets
    {
        static List<(int, int)> ReadBook(PacketReader r)
        {
            var n = r.D();
            var o = new List<(int, int)>();
            for (var i = 0; i < n; i++) o.Add((r.D(), r.D()));
            return o;
        }

        /// <summary>RecipeBookItemList 0xd6 "ddd" + n x "dd": tipo, MP maximo, n, (receita, posicao).</summary>
        public static RecipeBookInfo ParseRecipeBookItemList(PacketReader r)
        {
            var o = new RecipeBookInfo { Type = r.D(), MaxMp = r.D() };
            o.Recipes = ReadBook(r);
            return o;
        }

        /// <summary>RecipeItemMakeInfo 0xd7 "ddddd": receita, tipo, MP atual, MP maximo, resultado.</summary>
        public static RecipeMakeInfo ParseRecipeItemMakeInfo(PacketReader r) => new RecipeMakeInfo
        {
            RecipeId = r.D(), Type = r.D(), CurrentMp = r.D(), MaxMp = r.D(), MakingResult = r.D(),
        };

        /// <summary>RecipeShopManageList 0xd8 "ddd" + livro ("d" + n x "dd") + loja ("d" + n x "ddd": receita, 0, taxa).</summary>
        public static RecipeShopManageInfo ParseRecipeShopManageList(PacketReader r)
        {
            var o = new RecipeShopManageInfo { OwnerId = r.D(), Adena = r.D(), Type = r.D() };
            o.Book = ReadBook(r);
            var m = r.D();
            for (var i = 0; i < m; i++) o.Shop.Add(new RecipeShopEntry { RecipeId = r.D(), CanBeMade = r.D(), Fee = r.D() });
            return o;
        }

        /// <summary>RecipeShopSellList 0xd9 "ddddd" + n x "ddd": dono, MP atual, MP maximo, adena, n, (receita, pode fazer, taxa).</summary>
        public static RecipeShopSellInfo ParseRecipeShopSellList(PacketReader r)
        {
            var o = new RecipeShopSellInfo { OwnerId = r.D(), CurrentMp = r.D(), MaxMp = r.D(), Adena = r.D() };
            var n = r.D();
            for (var i = 0; i < n; i++) o.Items.Add(new RecipeShopEntry { RecipeId = r.D(), CanBeMade = r.D(), Fee = r.D() });
            return o;
        }

        /// <summary>RecipeShopItemInfo 0xda "dddddd": dono, receita, MP atual, MP maximo, resultado, adena.</summary>
        public static RecipeShopItemInfo ParseRecipeShopItemInfo(PacketReader r) => new RecipeShopItemInfo
        {
            OwnerId = r.D(), RecipeId = r.D(), CurrentMp = r.D(), MaxMp = r.D(), MakingResult = r.D(), Adena = r.D(),
        };

        /// <summary>RecipeShopMsg 0xdb "dS": dono e titulo da loja de fabricacao (vai para o nome no mundo, sem EV_).</summary>
        public static PrivateStoreMsgInfo ParseRecipeShopMsg(PacketReader r) => new PrivateStoreMsgInfo { OwnerId = r.D(), Message = r.S() };

        // ---------------------------------------------------------------- cliente -> servidor

        /// <summary>RequestRecipeBookOpen 0xac "d": 0 anao, 1 comum.</summary>
        public static byte[] RequestRecipeBookOpen(int type) => new PacketWriter().C(0xac).D(type).Bytes();

        /// <summary>RequestRecipeItemDelete 0xad "d": receita.</summary>
        public static byte[] RequestRecipeItemDelete(int recipeId) => new PacketWriter().C(0xad).D(recipeId).Bytes();

        /// <summary>RequestRecipeItemMakeInfo 0xae "d": receita (duplo clique no livro).</summary>
        public static byte[] RequestRecipeItemMakeInfo(int recipeId) => new PacketWriter().C(0xae).D(recipeId).Bytes();

        /// <summary>RequestRecipeItemMakeSelf 0xaf "d": fabricar a receita.</summary>
        public static byte[] RequestRecipeItemMakeSelf(int recipeId) => new PacketWriter().C(0xaf).D(recipeId).Bytes();

        /// <summary>RequestRecipeShopManageList 0xb0: abre a montagem da loja de fabricacao.</summary>
        public static byte[] RequestRecipeShopManageList() => new PacketWriter().C(0xb0).Bytes();

        /// <summary>RequestRecipeShopMessageSet 0xb1 "S": titulo da loja.</summary>
        public static byte[] RequestRecipeShopMessageSet(string msg) => new PacketWriter().C(0xb1).S(msg ?? "").Bytes();

        /// <summary>RequestRecipeShopListSet 0xb2 "db": n, n x (D receita, D taxa).</summary>
        public static byte[] RequestRecipeShopListSet(IList<(int RecipeId, int Fee)> items)
        {
            var w = new PacketWriter().C(0xb2).D(items.Count);
            foreach (var i in items) w.D(i.RecipeId).D(i.Fee);
            return w.Bytes();
        }

        /// <summary>RequestRecipeShopManageQuit 0xb3: fecha a loja.</summary>
        public static byte[] RequestRecipeShopManageQuit() => new PacketWriter().C(0xb3).Bytes();

        /// <summary>RequestRecipeShopManageCancel 0xb4: cancela a montagem.</summary>
        public static byte[] RequestRecipeShopManageCancel() => new PacketWriter().C(0xb4).Bytes();

        /// <summary>RequestRecipeShopMakeInfo 0xb5 "dd": dono da loja e receita.</summary>
        public static byte[] RequestRecipeShopMakeInfo(int ownerId, int recipeId) => new PacketWriter().C(0xb5).D(ownerId).D(recipeId).Bytes();

        /// <summary>RequestRecipeShopMakeDo 0xb6 "ddd": dono da loja, receita e a taxa anunciada.</summary>
        public static byte[] RequestRecipeShopMakeDo(int ownerId, int recipeId, int fee) => new PacketWriter().C(0xb6).D(ownerId).D(recipeId).D(fee).Bytes();

        /// <summary>RequestRecipeShopSellList 0xb7 "d": dono da loja (volta para a lista).</summary>
        public static byte[] RequestRecipeShopSellList(int ownerId) => new PacketWriter().C(0xb7).D(ownerId).Bytes();
    }
}
