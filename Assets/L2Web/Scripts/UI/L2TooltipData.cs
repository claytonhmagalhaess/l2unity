// Dados dos tooltips que vem dos .dat do cliente (copia local, Ver413): skillname-e.dat (nome, descricao e os dois nomes
// de encantamento: UIDATA_SKILL.GetName/GetDescription/GetEnchantName) e actionname-e.dat (nome e descricao da acao).
using System;
using System.Collections.Generic;
using System.IO;

namespace L2Web.UI
{
    public static class L2TooltipData
    {
        public sealed class SkillName
        {
            public string Name = "", Desc = "", Add1 = "", Add2 = "";
        }

        public sealed class ActionName
        {
            public int Id;
            public string Name = "", Icon = "", Desc = "", Cmd = "";
            /// <summary>EActionCategory (1 basica, 2 grupo, 3 social, 4 pet, 5 servo).</summary>
            public int Category;
            /// <summary>Lista de NPCs da acao (-2 = qualquer um) [I].</summary>
            public int[] Npcs = Array.Empty<int>();
        }

        /// <summary>skillname-e.dat: d id, d nivel, FString nome, descricao, desc_add1, desc_add2 ("none" = vazio).</summary>
        public static Dictionary<(int, int), SkillName> ParseSkillNames(byte[] b)
        {
            var n = BitConverter.ToInt32(b, 0);
            var p = 4;
            var o = new Dictionary<(int, int), SkillName>(n);
            for (var i = 0; i < n; i++)
            {
                var id = BitConverter.ToInt32(b, p);
                var lv = BitConverter.ToInt32(b, p + 4);
                p += 8;
                o[(id, lv)] = new SkillName { Name = L2Texts.FString(b, ref p), Desc = None(L2Texts.FString(b, ref p)), Add1 = None(L2Texts.FString(b, ref p)), Add2 = None(L2Texts.FString(b, ref p)) };
            }
            return o;
        }

        /// <summary>
        /// actionname-e.dat: d tag, d id, d type, d category (EActionCategory), indice compacto n, n x d (NPCs; -2 = qualquer
        /// um), as ASCF nome, icone e descricao, e o comando em UNICODE (d tamanho em bytes + UTF-16). O txt do l2disasm le o n
        /// como d, o que desalinha a partir do primeiro registro.
        /// </summary>
        public static Dictionary<int, ActionName> ParseActionNames(byte[] b)
        {
            var n = BitConverter.ToInt32(b, 0);
            var p = 4;
            var o = new Dictionary<int, ActionName>(n);
            for (var i = 0; i < n; i++)
            {
                p += 4; // tag
                var id = BitConverter.ToInt32(b, p);
                var cat = BitConverter.ToInt32(b, p + 8);
                p += 12; // id, type, category
                var cnt = Compact(b, ref p);
                var npcs = new int[Math.Max(0, cnt)];
                for (var k = 0; k < npcs.Length; k++, p += 4) npcs[k] = BitConverter.ToInt32(b, p);
                var a = new ActionName { Id = id, Category = cat, Npcs = npcs, Name = L2Texts.FString(b, ref p), Icon = L2Texts.FString(b, ref p), Desc = L2Texts.FString(b, ref p) };
                var len = BitConverter.ToInt32(b, p);
                p += 4;
                a.Cmd = System.Text.Encoding.Unicode.GetString(b, p, Math.Max(0, len)).TrimEnd('\0');
                p += Math.Max(0, len);
                o[id] = a;
            }
            return o;
        }

        /// <summary>Indice compacto do UE2: 6 bits no 1o byte (0x80 sinal, 0x40 continua), depois 7 por byte (0x80 continua).</summary>
        public static int Compact(byte[] b, ref int p)
        {
            int b0 = b[p++];
            var v = b0 & 0x3f;
            if ((b0 & 0x40) != 0)
                for (var sh = 6; ; sh += 7)
                {
                    int x = b[p++];
                    v |= (x & 0x7f) << sh;
                    if ((x & 0x80) == 0) break;
                }
            return (b0 & 0x80) != 0 ? -v : v;
        }

        static string None(string s) => s == "none" ? "" : s ?? "";

        /// <summary>
        /// Registro do ItemName-e.dat com os campos de conjunto. FL2GameData guarda os tres pares (lista de ids, efeito) a
        /// cada 0x18 a partir de +0x68 (GetItemSetListID 0x1030df8a le +0x68 + idx*0x18, GetItemSetEffect 0x1030ba37 le
        /// +0x74 + idx*0x18), a contagem do encantamento em +0xb0 (GetItemSetEnchantCount 0x10301ff0) e o efeito em +0xb4
        /// (GetItemSetEnchantEffect 0x103120cb). No arquivo: par 0 = set_ids / set_bonus_desc, par 1 = set_extra_id /
        /// set_extra_desc (o escudo), par 2 = unk[0] / unk[1] (vazio em todos os 11059 registros do Interlude).
        /// </summary>
        public sealed class ItemNameRecord
        {
            public int Id;
            public string Name = "", AddName = "", Desc = "";
            public int Popup;
            public readonly string[] SetIds = { "", "", "" };
            public readonly string[] SetEffects = { "", "", "" };
            public int EnchantCount;
            public string EnchantEffect = "";
        }

        /// <summary>
        /// ItemName-e.dat (Ver413, Interlude): d n; por registro d id, nome e nome adicional em UNICODE (d bytes + UTF-16),
        /// ASCF descricao, d popup, 3 x (ASCF ids separados por virgula, ASCF efeito), d special_enchant_amount e ASCF
        /// special_enchant_desc.
        /// </summary>
        public static Dictionary<int, ItemNameRecord> ParseItemNames(byte[] b)
        {
            var n = BitConverter.ToInt32(b, 0);
            var p = 4;
            var o = new Dictionary<int, ItemNameRecord>(n);
            string Uni()
            {
                var len = BitConverter.ToInt32(b, p);
                p += 4;
                var s = System.Text.Encoding.Unicode.GetString(b, p, Math.Max(0, len)).TrimEnd('\0');
                p += Math.Max(0, len);
                return s;
            }
            for (var i = 0; i < n; i++)
            {
                var r = new ItemNameRecord { Id = BitConverter.ToInt32(b, p) };
                p += 4;
                r.Name = Uni();
                r.AddName = Uni();
                r.Desc = L2Texts.FString(b, ref p);
                r.Popup = BitConverter.ToInt32(b, p);
                p += 4;
                for (var k = 0; k < 3; k++)
                {
                    r.SetIds[k] = L2Texts.FString(b, ref p);
                    r.SetEffects[k] = L2Texts.FString(b, ref p);
                }
                r.EnchantCount = BitConverter.ToInt32(b, p);
                p += 4;
                r.EnchantEffect = L2Texts.FString(b, ref p);
                o[r.Id] = r;
            }
            return o;
        }

        /// <summary>
        /// GetSetItemIDList (execGetSetItemIDList nw:0x10123e50): so com id &gt; 0 e idx &lt; 3; a lista do par idx quebrada
        /// pelo separador (DAT_10246d48, [I] ",") com appAtoi em cada parte.
        /// </summary>
        public static int[] ParseIdList(string s)
        {
            if (string.IsNullOrEmpty(s)) return Array.Empty<int>();
            var parts = s.Split(',');
            var o = new List<int>(parts.Length);
            foreach (var x in parts)
                if (x.Length > 0) o.Add(L2Param.Atoi(x));
            return o.ToArray();
        }

        /// <summary>
        /// Campos do etcitemgrp que o GetItemInfo copia para o tipo de dado 2 (nw:0x10123940): peso (+0xc4), material
        /// (+200), durabilidade (+0xc0), ConsumeType (+0xfc), ItemSubType/EEtcItemType (+0x100) e grau (+0x104).
        /// </summary>
        public sealed class EtcItemRecord
        {
            public int Id, Durability, Weight, Material, ConsumeType, EtcItemType, CrystalType;
            public string Icon = "";
        }

        /// <summary>
        /// etcitemgrp.dat (Ver413, Interlude; DDF Interlude do l2disasm): d n; por registro d tag, d id, 5 d de queda (tipo,
        /// animacao, raio, altura, unk), 6 UNICODE (malhas e texturas de queda), 5 UNICODE (icones), d durabilidade, d peso,
        /// d material, d crystallizable, d type1, MTX (d n + n UNICODE malhas, d n + n UNICODE texturas), 2 UNICODE (sons),
        /// d stackable (ConsumeType), d family (EEtcItemType) e d grade (CrystalType).
        /// </summary>
        public static Dictionary<int, EtcItemRecord> ParseEtcItems(byte[] b)
        {
            var p = 0;
            int D()
            {
                var v = BitConverter.ToInt32(b, p);
                p += 4;
                return v;
            }
            string Uni()
            {
                var len = D();
                var s = System.Text.Encoding.Unicode.GetString(b, p, Math.Max(0, len)).TrimEnd('\0');
                p += Math.Max(0, len);
                return s;
            }
            var n = D();
            var o = new Dictionary<int, EtcItemRecord>(n);
            for (var i = 0; i < n; i++)
            {
                D();
                var r = new EtcItemRecord { Id = D() };
                for (var k = 0; k < 5; k++) D();
                for (var k = 0; k < 6; k++) Uni();
                r.Icon = Uni();
                for (var k = 1; k < 5; k++) Uni();
                r.Durability = D();
                r.Weight = D();
                r.Material = D();
                D();
                D();
                for (var k = D(); k > 0; k--) Uni();
                for (var k = D(); k > 0; k--) Uni();
                Uni();
                Uni();
                r.ConsumeType = D();
                r.EtcItemType = D();
                r.CrystalType = D();
                o[r.Id] = r;
            }
            return o;
        }

        static Dictionary<int, EtcItemRecord> etcItems;

        public static EtcItemRecord EtcItem(int id)
        {
            etcItems ??= Load("etcitemgrp.dat", ParseEtcItems, new Dictionary<int, EtcItemRecord>());
            return etcItems.TryGetValue(id, out var r) ? r : null;
        }

        /// <summary>Troca a tabela (testes).</summary>
        public static void SetEtcItems(Dictionary<int, EtcItemRecord> t) => etcItems = t;

        static Dictionary<int, ItemNameRecord> itemNames;

        public static ItemNameRecord ItemName(int id)
        {
            itemNames ??= Load("ItemName-e.dat", ParseItemNames, new Dictionary<int, ItemNameRecord>());
            return itemNames.TryGetValue(id, out var r) ? r : null;
        }

        /// <summary>Troca a tabela (testes).</summary>
        public static void SetItemNames(Dictionary<int, ItemNameRecord> t) => itemNames = t;

        public static int[] SetItemIdList(int classId, int idx) =>
            classId > 0 && idx >= 0 && idx < 3 && ItemName(classId) is { } r ? ParseIdList(r.SetIds[idx]) : Array.Empty<int>();

        /// <summary>GetSetItemEffectDescription (nw:0x10122cf0): so com id &gt; 0 e idx &lt; 3.</summary>
        public static string SetItemEffect(int classId, int idx) =>
            classId > 0 && idx >= 0 && idx < 3 ? ItemName(classId)?.SetEffects[idx] ?? "" : "";

        /// <summary>GetSetItemEnchantEffectDescription (nw:0x10122e00).</summary>
        public static string SetItemEnchantEffect(int classId) => ItemName(classId)?.EnchantEffect ?? "";

        /// <summary>GetItemSetEnchantCount (0x10301ff0): -1 sem registro.</summary>
        public static int SetItemEnchantCount(int classId) => ItemName(classId)?.EnchantCount ?? -1;

        static Dictionary<(int, int), SkillName> skills;
        static Dictionary<int, ActionName> actions;

        static T Load<T>(string file, Func<byte[], T> parse, T empty)
        {
            try
            {
                var f = GameData.ClientFile(file);
                if (File.Exists(f)) return parse(L2Files.Decrypt(File.ReadAllBytes(f)));
            }
            catch (Exception e)
            {
                UnityEngine.Debug.LogWarning(file + ": " + e.Message);
            }
            return empty;
        }

        public static SkillName Skill(int id, int level)
        {
            skills ??= Load("skillname-e.dat", ParseSkillNames, new Dictionary<(int, int), SkillName>());
            return skills.TryGetValue((id, level), out var s) ? s : null;
        }

        public static ActionName Action(int id)
        {
            actions ??= Load("actionname-e.dat", ParseActionNames, new Dictionary<int, ActionName>());
            return actions.TryGetValue(id, out var a) ? a : null;
        }

        /// <summary>Todas as acoes do actionname-e, na ordem dos ids.</summary>
        public static List<ActionName> AllActions()
        {
            actions ??= Load("actionname-e.dat", ParseActionNames, new Dictionary<int, ActionName>());
            var l = new List<ActionName>(actions.Values);
            l.Sort((a, b) => a.Id.CompareTo(b.Id));
            return l;
        }

        /// <summary>
        /// GetEnchantName: o nome do encantamento da skill (desc_add1 do nivel; os niveis 101+ e 141+ sao os dois ramos do
        /// encantamento do Interlude) [I].
        /// </summary>
        public static string EnchantName(int id, int level)
        {
            var s = Skill(id, level);
            if (s == null || level < 100) return "";
            return s.Add1.Length > 0 ? s.Add1 : s.Add2;
        }

        /// <summary>
        /// GetOperateType (NMagicSkillDataManager::GetMSOperateType, nw:0x101b5880): registro+0x3c 0 = fisica (+0x20 == 2
        /// passiva, sysstring 312; senao ativa, 311); 3 = cancao/danca (1500); outro = magia (313). [I] +0x3c = is_magic e
        /// +0x20 = oper_type do skillgrp.
        /// </summary>
        public static string OperateType(int id, int level, Func<int, string> ss)
        {
            var r = L2SkillData.Get(id, level);
            if (r == null) return "";
            if (r.IsMagic == 0) return ss(r.OperateType == 2 ? 312 : 311);
            return ss(r.IsMagic == 3 ? 1500 : 313);
        }
    }
}
