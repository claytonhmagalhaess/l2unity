// questname-e.dat (UIDATA_QUEST, #0037): um registro por (quest, nivel do diario). Layout levantado do arquivo (2050 registros
// e 13 bytes de rodape) e dos offsets do UUIDATA_QUEST::exec* do NWindow (titulo +0xc, diario +0x18, alvo +0x50..58, niveis
// +0x5c/+0x60, tipo +0x64, nome do alvo +0x68, so minimapa +0x74, NPC inicial +0x78, posicao +0x7c..84).
using System;
using System.Collections.Generic;
using System.IO;

namespace L2Web.UI
{
    public sealed class QuestData
    {
        public sealed class Row
        {
            public int Id, Level;
            public string Title = "", Journal = "", Desc = "";
            public int[] Items = Array.Empty<int>(), Nums = Array.Empty<int>();
            public float X, Y, Z;
            public int MinLevel, MaxLevel, Type;
            public string Target = "";
            /// <summary>IsMinimapOnly (+0x74): o 1o d depois do nome do alvo.</summary>
            public bool MinimapOnly;
            /// <summary>IsShowableJournalQuest / IsShowableItemNumQuest [I]: os 2 d seguintes (FL2QuestData +0x24 e +0x4c).</summary>
            public bool ShowJournal, ShowItemNum;
            public int StartNpc;
            public float NpcX, NpcY, NpcZ;
            public string Requirement = "", Short = "";
            public int[] Classes = Array.Empty<int>(), ReqItems = Array.Empty<int>();
            public int ClanPet, ReqQuest, Area;
        }

        readonly Dictionary<(int, int), Row> rows = new();

        public QuestData(IEnumerable<Row> list)
        {
            foreach (var r in list) rows[(r.Id, r.Level)] = r;
        }

        /// <summary>
        /// d n; por registro: d tag, d id, d nivel, ASCF titulo, diario e descricao, n compacto + n x d (itens), n compacto + n x d
        /// (quantidades), f x/y/z do alvo, d nivel minimo, maximo e tipo, ASCF alvo, d so minimapa, d diario, d itens, d NPC
        /// inicial, f x/y/z do NPC, ASCF requisito e resumo, n compacto + classes, n compacto + itens exigidos, d pet de cla,
        /// d quest exigida, d ?, d area.
        /// </summary>
        public static List<Row> Parse(byte[] b)
        {
            var n = BitConverter.ToInt32(b, 0);
            var p = 4;
            var o = new List<Row>(n);
            int D()
            {
                var v = BitConverter.ToInt32(b, p);
                p += 4;
                return v;
            }
            float F()
            {
                var v = BitConverter.ToSingle(b, p);
                p += 4;
                return v;
            }
            int[] Ints()
            {
                var c = L2TooltipData.Compact(b, ref p);
                var a = new int[Math.Max(0, c)];
                for (var k = 0; k < a.Length; k++) a[k] = D();
                return a;
            }
            for (var i = 0; i < n; i++)
            {
                D(); // tag
                var r = new Row { Id = D(), Level = D() };
                r.Title = L2Texts.FString(b, ref p);
                r.Journal = L2Texts.FString(b, ref p);
                r.Desc = L2Texts.FString(b, ref p);
                r.Items = Ints();
                r.Nums = Ints();
                r.X = F();
                r.Y = F();
                r.Z = F();
                r.MinLevel = D();
                r.MaxLevel = D();
                r.Type = D();
                r.Target = L2Texts.FString(b, ref p);
                r.MinimapOnly = D() != 0;
                r.ShowJournal = D() != 0;
                r.ShowItemNum = D() != 0;
                r.StartNpc = D();
                r.NpcX = F();
                r.NpcY = F();
                r.NpcZ = F();
                r.Requirement = L2Texts.FString(b, ref p);
                r.Short = L2Texts.FString(b, ref p);
                r.Classes = Ints();
                r.ReqItems = Ints();
                r.ClanPet = D();
                r.ReqQuest = D();
                D();
                r.Area = D();
                o.Add(r);
            }
            return o;
        }

        static QuestData loaded;

        /// <summary>A tabela do cliente (vazia sem o arquivo).</summary>
        public static QuestData Client
        {
            get
            {
                if (loaded != null) return loaded;
                try
                {
                    var f = GameData.ClientFile("questname-e.dat");
                    loaded = new QuestData(File.Exists(f) ? Parse(L2Files.Decrypt(File.ReadAllBytes(f))) : new List<Row>());
                }
                catch (Exception e)
                {
                    UnityEngine.Debug.LogWarning("questname-e.dat: " + e.Message);
                    loaded = new QuestData(new List<Row>());
                }
                return loaded;
            }
        }

        public Row Get(int id, int level) => rows.TryGetValue((id, level), out var r) ? r : null;

        /// <summary>GetQuestName(id): o titulo do nivel 1.</summary>
        public string Name(int id) => Get(id, 1)?.Title ?? "";

        /// <summary>GetQuestItem: "Max", ItemID_i, ItemNum_i.</summary>
        public string ItemParam(int id, int level)
        {
            var r = Get(id, level);
            var n = r == null ? 0 : Math.Min(r.Items.Length, r.Nums.Length);
            var p = L2Param.Add("", "Max", n);
            for (var i = 0; i < n; i++)
            {
                p = L2Param.Add(p, "ItemID_" + i, r.Items[i]);
                p = L2Param.Add(p, "ItemNum_" + i, r.Nums[i]);
            }
            return p;
        }
    }
}
