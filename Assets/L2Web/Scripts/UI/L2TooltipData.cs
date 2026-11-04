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
