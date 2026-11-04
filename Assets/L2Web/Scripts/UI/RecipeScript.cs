// recipe-c.dat (UIDATA_RECIPE) e RecipeBookWnd.uc, RecipeManufactureWnd.uc, RecipeBuyManufactureWnd.uc, RecipeShopWnd.uc,
// RecipeBuyListWnd.uc e RecipeTreeWnd.uc (spec 07 §6, #0043) sem Unity: o livro (contador, apagar sm74), fabricar (proprio e na
// loja de outro: MP 165 px, chance, materiais sem o bastante desligados, sm959/sm960), a loja de fabricacao (ate 20, taxa
// sm963, limite sm1369, titulo sm334), a lista da loja de outro e a arvore de materiais.
using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

namespace L2Web.UI
{
    public static class RecipeData
    {
        public sealed class Row
        {
            public string Name = "";
            public int Id, ItemId, Level, ProductId, ProductNum, Mp, SuccessRate;
            public (int id, int count)[] Materials = Array.Empty<(int, int)>();
        }

        /// <summary>d n; por receita: ASCF nome, d id, d item da receita, d nivel, d produto, d quantidade, d MP, d chance, d m, m x (d id, d qtd).</summary>
        public static Dictionary<int, Row> Parse(byte[] b)
        {
            var n = BitConverter.ToInt32(b, 0);
            var p = 4;
            var o = new Dictionary<int, Row>(n);
            int D()
            {
                var v = BitConverter.ToInt32(b, p);
                p += 4;
                return v;
            }
            for (var i = 0; i < n; i++)
            {
                var r = new Row { Name = L2Texts.FString(b, ref p) };
                r.Id = D();
                r.ItemId = D();
                r.Level = D();
                r.ProductId = D();
                r.ProductNum = D();
                r.Mp = D();
                r.SuccessRate = D();
                var m = D();
                r.Materials = new (int, int)[Math.Max(0, m)];
                for (var k = 0; k < r.Materials.Length; k++) r.Materials[k] = (D(), D());
                o[r.Id] = r;
            }
            return o;
        }

        static Dictionary<int, Row> loaded;

        public static Dictionary<int, Row> All
        {
            get
            {
                if (loaded != null) return loaded;
                try
                {
                    var f = GameData.ClientFile("recipe-c.dat");
                    loaded = File.Exists(f) ? Parse(L2Files.Decrypt(File.ReadAllBytes(f))) : new Dictionary<int, Row>();
                }
                catch (Exception e)
                {
                    Debug.LogWarning("recipe-c.dat: " + e.Message);
                    loaded = new Dictionary<int, Row>();
                }
                return loaded;
            }
        }

        public static Row Get(int id) => All.TryGetValue(id, out var r) ? r : null;

        /// <summary>Troca a tabela (testes).</summary>
        public static void Use(params Row[] rows)
        {
            loaded = new Dictionary<int, Row>();
            foreach (var r in rows) loaded[r.Id] = r;
        }

        /// <summary>*By2Condition: a receita do produto com a chance (0 = qualquer uma; prefere a de 100%) [I].</summary>
        public static Row ByProduct(IEnumerable<Row> all, int productId, int rate)
        {
            Row any = null;
            foreach (var r in all)
            {
                if (r.ProductId != productId) continue;
                if (rate > 0 && r.SuccessRate == rate) return r;
                if (any == null || (r.SuccessRate == 100 && any.SuccessRate != 100)) any = r;
            }
            return rate > 0 ? null : any;
        }
    }

    /// <summary>Um slot de receita no ItemWindow (ClassID = item da receita, ServerID = id da receita, icone = o do produto).</summary>
    public sealed class RecipeSlot
    {
        public int RecipeId, ClassId, ProductId, Level, CanBeMade;
        public long Price;
        public string Name = "";
    }

    public sealed class RecipeBookScript
    {
        public int Type, MaxNormal, MaxDwarf;
        public readonly List<RecipeSlot> Items = new();
        public int DeleteId;
        public Func<int, string> ItemName = GameData.ItemName;

        public static RecipeSlot Slot(int recipeId, Func<int, string> itemName)
        {
            var r = RecipeData.Get(recipeId);
            return new RecipeSlot { RecipeId = recipeId, ClassId = r?.ItemId ?? 0, ProductId = r?.ProductId ?? 0, Level = r?.Level ?? 0, Name = itemName(r?.ItemId ?? 0) };
        }

        /// <summary>EV_RecipeShowBookWnd: limpa; titulo 1214 (Type 1 = comum) ou 1215 (anao).</summary>
        public int Show(int type)
        {
            Items.Clear();
            Type = type;
            return type == 1 ? 1214 : 1215;
        }

        public void Add(int recipeId) => Items.Add(Slot(recipeId, ItemName));

        /// <summary>SetItemCount: "(n/max)" com o limite do tipo (EV_SetMaxCount recipe / dwarvenRecipe).</summary>
        public string CountText => "(" + Items.Count + "/" + (Type == 1 ? MaxNormal : MaxDwarf) + ")";

        /// <summary>OnDBClickItem: RequestRecipeItemMakeInfo do id.</summary>
        public int? Open(int index) => index >= 0 && index < Items.Count ? Items[index].RecipeId : null;

        /// <summary>DeleteItem (lixeira ou soltar nela): Warning sm74 com o nome; o OK manda RequestRecipeItemDelete.</summary>
        public string AskDelete(RecipeSlot s, Func<int, string, string> sysMsg)
        {
            DeleteId = s.RecipeId;
            return sysMsg(74, s.Name);
        }
    }

    /// <summary>RecipeManufactureWnd (proprio) e RecipeBuyManufactureWnd (na loja de outro): sao o mesmo desenho.</summary>
    public sealed class RecipeMakeScript
    {
        public const float MpWidth = 165f;
        public int RecipeId, SuccessRate, BookType, MaxMp, PlayerId, MerchantId;
        public long Adena;
        public readonly Dictionary<string, string> Texts = new();
        public sealed class Material
        {
            public int ClassId;
            public int Need;
            public long Have;
            public bool Disabled => Need > Have;
        }

        public readonly List<Material> Materials = new();
        public Func<int, long> InventoryCount = _ => 0;
        public Func<int, string> ItemName = GameData.ItemName;
        public Func<int, int> Crystal = id => ItemStats.Of(id)?.CrystalType ?? 0;
        public Func<int, string, string, string> SysMsg = (id, a, b) => GameData.SystemMessage(id, new List<string> { a, b }).Text;

        public void Clear()
        {
            RecipeId = SuccessRate = BookType = MaxMp = PlayerId = MerchantId = 0;
            Adena = 0;
            Materials.Clear();
            Texts.Clear();
        }

        /// <summary>
        /// ReceiveRecipeItemMakeInfo / ReceiveRecipeShopSellList: nome + "`grau`", MP, chance "%", resultado, quantidade no
        /// inventario, sm960 (falhou) ou sm959 (n feitos), e os materiais (desligados com menos do que pede).
        /// </summary>
        public void Info(int recipeId, int curMp, int maxMp, int result, int type, int playerId)
        {
            RecipeId = recipeId;
            var r = RecipeData.Get(recipeId);
            SuccessRate = r?.SuccessRate ?? 0;
            BookType = type;
            MaxMp = maxMp;
            PlayerId = playerId;
            var product = r?.ProductId ?? 0;
            var name = ItemName(product);
            var g = L2Tooltip.GradeString(Crystal(product));
            Texts["txtName"] = name + " " + (g.Length > 0 ? "`" + g + "`" : "");
            Texts["txtMPConsume"] = (r?.Mp ?? 0).ToString();
            Texts["txtSuccessRate"] = SuccessRate + "%";
            Texts["txtResultValue"] = (r?.ProductNum ?? 0).ToString();
            Texts["txtCountValue"] = InventoryCount(product).ToString();
            Texts["txtMsg"] = result == 0 ? SysMsg(960, name, "") : result == 1 ? SysMsg(959, name, (r?.ProductNum ?? 0).ToString()) : "";
            Materials.Clear();
            foreach (var (id, count) in r?.Materials ?? Array.Empty<(int, int)>()) Materials.Add(new Material { ClassId = id, Need = count, Have = InventoryCount(id) });
            Mp = curMp;
        }

        public int Mp;

        /// <summary>SetMPBar: 165 * MP / max (inteiro), no maximo 165.</summary>
        public int MpBar => MaxMp > 0 ? (int)Math.Min(MpWidth, (int)(MpWidth * Mp) / MaxMp) : 0;

        /// <summary>HandleInventoryItem: o material com o classID tem a quantidade relida.</summary>
        public bool InventoryChanged(int classId)
        {
            var m = Materials.Find(x => x.ClassId == classId);
            if (m == null) return false;
            m.Have = InventoryCount(classId);
            return true;
        }
    }

    public sealed class RecipeShopScript
    {
        public const int MaxSell = 20;
        public const int DialogMsg = 0, DialogPrice = 1, DialogPriceLimit = 2;
        public int Type;
        public readonly List<RecipeSlot> Book = new(), Shop = new();
        public RecipeSlot Handle;
        public Func<int, string> ItemName = GameData.ItemName;

        /// <summary>EV_RecipeShopShowWnd: limpa; titulo 1212 (Type 1) ou 1213.</summary>
        public int Show(int type)
        {
            Clear();
            Type = type;
            return type == 1 ? 1212 : 1213;
        }

        public void Clear()
        {
            Handle = null;
            Book.Clear();
            Shop.Clear();
        }

        public void AddBook(int recipeId) => Book.Add(RecipeBookScript.Slot(recipeId, ItemName));

        public void AddShop(int recipeId, int canBeMade, long fee)
        {
            var s = RecipeBookScript.Slot(recipeId, ItemName);
            s.Price = fee;
            s.CanBeMade = canBeMade;
            Shop.Add(s);
        }

        public string CountText => "(" + Shop.Count + "/" + MaxSell + ")";

        /// <summary>
        /// OnDBClickItem no livro: se a receita ja esta na loja, sai dela; senao pede a taxa (NumberPad sm963, ParamInt -1,
        /// DefaultOK). Na loja: sai. Devolve true se o NumberPad deve abrir.
        /// </summary>
        public bool DoubleClickBook(int index)
        {
            Handle = null;
            if (index < 0 || index >= Book.Count) return false;
            var b = Book[index];
            if (Shop.Exists(s => s.ClassId == b.ClassId))
            {
                Delete(b);
                return false;
            }
            Handle = b;
            return true;
        }

        public void DoubleClickShop(int index)
        {
            Handle = null;
            if (index >= 0 && index < Shop.Count) Delete(Shop[index]);
        }

        /// <summary>DeleteShopItem: o primeiro da loja com o mesmo classID sai.</summary>
        public void Delete(RecipeSlot s)
        {
            var i = Shop.FindIndex(x => x.ClassId == s.ClassId);
            if (i >= 0) Shop.RemoveAt(i);
        }

        /// <summary>EV_DialogOK do id 1: taxa &gt;= 2.000.000.000 = Warning sm1369 (id 2); senao entra (sem repetir o classID).</summary>
        public bool PriceOk(string text)
        {
            var h = Handle;
            Handle = null;
            if (h == null || string.IsNullOrEmpty(text)) return false;
            long.TryParse(text, out var price);
            if (price >= 2000000000) return true;
            if (Shop.Exists(x => x.ClassId == h.ClassId)) return false;
            var n = new RecipeSlot { RecipeId = h.RecipeId, ClassId = h.ClassId, ProductId = h.ProductId, Level = h.Level, Name = h.Name, Price = price };
            Shop.Add(n);
            return false;
        }

        /// <summary>StartRecipeShop: RequestRecipeShopListSet com (id da receita, taxa) de cada item da loja.</summary>
        public List<(int RecipeId, int Fee)> Start()
        {
            var o = new List<(int, int)>();
            foreach (var s in Shop) o.Add((s.RecipeId, (int)s.Price));
            return o;
        }
    }

    public sealed class RecipeBuyListScript : TreeModel
    {
        public int MerchantId, MaxMp, Mp;
        public long Adena;
        public Func<int, string> ItemName = GameData.ItemName;
        public Func<int, string> ItemIcon = GameData.ItemIcon;
        public Func<int, string> SysString = id => GameData.SysString(id, "");

        /// <summary>ReceiveRecipeShopSellList: titulo "ss663 - dono", MP, adena e o no "root" (7, 7).</summary>
        public void Show(int merchant, int mp, int maxMp, long adena)
        {
            ClearTree();
            MerchantId = merchant;
            Mp = mp;
            MaxMp = maxMp;
            Adena = adena;
            InsertNode("", new TreeNode { OffX = 7, OffY = 7 }, "root");
        }

        public int MpBar => MaxMp > 0 ? (int)Math.Min(RecipeMakeScript.MpWidth, (int)(RecipeMakeScript.MpWidth * Mp) / MaxMp) : 0;

        /// <summary>AddRecipeShopSellItem: no do id (IconSelect2 46 em (-7, -3)), icone 32, nome e "ss641 : taxa" (cor do numero).</summary>
        public void Add(int recipeId, long fee)
        {
            var product = RecipeData.Get(recipeId)?.ProductId ?? 0;
            var name = ItemName(product);
            var n = new TreeNode
            {
                ExpLeft = "L2UI_CH3.etc.IconSelect2", ExpOffX = -7, ExpOffY = -3, ExpH = 46, ExpLeftU = 32, ExpLeftV = 40,
                Tooltip = name + " (" + L2Tooltip.MakeCostString(fee.ToString()) + ")",
            };
            if (InsertNode("root", n, recipeId.ToString()).Length < 1) return;
            var icon = ItemIcon(product);
            n.Items.Add(new TreeItem { Type = TreeItem.Kind.Texture, Tex = string.IsNullOrEmpty(icon) ? "Default.BlackTexture" : icon, TexW = 32, TexH = 32, OffY = 4 });
            n.Items.Add(new TreeItem { Type = TreeItem.Kind.Text, Text = name, OffX = 10 });
            n.Items.Add(new TreeItem { Type = TreeItem.Kind.Text, Text = SysString(641), LineBreak = true, OffX = 42, OffY = -22, Color = new Color32(168, 168, 168, 255) });
            n.Items.Add(new TreeItem { Type = TreeItem.Kind.Text, Text = " : ", OffY = -22 });
            var cost = L2Tooltip.MakeCostString(fee.ToString());
            n.Items.Add(new TreeItem { Type = TreeItem.Kind.Text, Text = cost, OffY = -22, Color = L2Tooltip.GetNumericColor(cost) });
        }

        /// <summary>OnClickButton: Mid(nome, 5) = id da receita, para o RequestRecipeShopMakeInfo(dono, id).</summary>
        public int Click(string node) => node != null && node.Length > 5 && int.TryParse(node.Substring(5), out var id) ? id : 0;
    }

    public sealed class RecipeTreeScript : TreeModel
    {
        public Func<int, long> InventoryCount = _ => 0;
        public Func<int, string> ItemName = GameData.ItemName;
        public Func<int, string> ItemIcon = GameData.ItemIcon;
        public IEnumerable<RecipeData.Row> All = RecipeData.All.Values;
        public readonly Dictionary<string, string> Texts = new();

        /// <summary>SetRecipeInfo: nome + grau, MP, chance, "Lv.n" e a arvore a partir do produto.</summary>
        public void Show(int recipeId, int rate, Func<int, int> crystal)
        {
            ClearTree();
            Texts.Clear();
            var r = RecipeData.Get(recipeId);
            var product = r?.ProductId ?? 0;
            var g = L2Tooltip.GradeString(crystal(product));
            Texts["txtName"] = ItemName(product) + " " + (g.Length > 0 ? "`" + g + "`" : "");
            Texts["txtMPConsume"] = (r?.Mp ?? 0).ToString();
            Texts["txtSuccessRate"] = rate + "%";
            Texts["txtLevel"] = "Lv." + (r?.Level ?? 0);
            InsertNode("", new TreeNode { OffX = 1, OffY = 5 }, "root");
            Add(product, rate, 0, "root", 0);
        }

        /// <summary>
        /// AddRecipeItem: produto com receita (pela chance) = no com botao (+/- 12 x 12), icone da receita e o nome dela, e nos
        /// materiais "(tem/precisa)" e o fundo vermelho sem o bastante; os filhos sao os materiais. Sem receita = item simples.
        /// </summary>
        void Add(int product, int rate, int need, string parent, int depth)
        {
            if (depth > 12) return;
            var root = parent == "root";
            var r = RecipeData.ByProduct(All, product, rate);
            var have = InventoryCount(product);
            var icon = ItemIcon(product);
            var tex = string.IsNullOrEmpty(icon) ? "Default.BlackTexture" : icon;
            if (r != null)
            {
                var name = ItemName(r.ItemId);
                var n = new TreeNode
                {
                    Tooltip = name, OffX = root ? 0 : 16, ShowButton = true, BtnExpand = "L2UI.RecipeWnd.TreePlus", BtnCollapse = "L2UI.RecipeWnd.TreeMinus",
                };
                var nn = InsertNode(parent, n, product + "_" + r.SuccessRate);
                if (nn.Length < 1) return;
                n.Items.Add(new TreeItem { Type = TreeItem.Kind.Texture, Tex = tex, TexW = 32, TexH = 32, OffX = 2 });
                n.Items.Add(new TreeItem { Type = TreeItem.Kind.Texture, Tex = "L2UI.RecipeWnd.RecipeTreeIconBack", TexW = 32, TexH = 32, OffX = -32 });
                if (!root && have < need) n.Items.Add(new TreeItem { Type = TreeItem.Kind.Texture, Tex = "Default.ChatBack", TexW = 32, TexH = 32, OffX = -32 });
                n.Items.Add(new TreeItem { Type = TreeItem.Kind.Text, Text = name, OffX = 5, OffY = 4 });
                if (!root) n.Items.Add(new TreeItem { Type = TreeItem.Kind.Text, Text = "(" + have + "/" + need + ")", LineBreak = true, OffX = 51, OffY = -14 });
                n.Items.Add(new TreeItem { Type = TreeItem.Kind.Blank, BlankH = 6 });
                foreach (var (id, count) in r.Materials) Add(id, 0, count, nn, depth + 1);
                return;
            }
            var iname = ItemName(product);
            var m = new TreeNode { OffX = 30, Tooltip = iname };
            if (InsertNode(parent, m, product + "_" + rate).Length < 1) return;
            m.Items.Add(new TreeItem { Type = TreeItem.Kind.Texture, Tex = tex, TexW = 32, TexH = 32 });
            m.Items.Add(new TreeItem { Type = TreeItem.Kind.Texture, Tex = "L2UI.RecipeWnd.RecipeTreeIconDisableBack", TexW = 32, TexH = 32, OffX = -32 });
            if (have < need) m.Items.Add(new TreeItem { Type = TreeItem.Kind.Texture, Tex = "Default.ChatBack", TexW = 32, TexH = 32, OffX = -32 });
            m.Items.Add(new TreeItem { Type = TreeItem.Kind.Text, Text = iname, OffX = 5, OffY = 3 });
            m.Items.Add(new TreeItem { Type = TreeItem.Kind.Text, Text = "(" + have + "/" + need + ")", LineBreak = true, OffX = 37, OffY = -14 });
            m.Items.Add(new TreeItem { Type = TreeItem.Kind.Blank, BlankH = 4 });
        }
    }
}
