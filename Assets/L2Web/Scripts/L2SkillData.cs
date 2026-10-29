// Skillgrp.dat (Ver413) como o FL2GameData::MSItemDataLoad o le (registro serializado por FUN_1044e890): int n e, por
// registro, skill_id, skill_level, operate_type, mp_consume, cast_range, cast_style, hit_time (float), is_magic, animation,
// skill_visual_effect, icon (strings: int com o tamanho em bytes + UTF-16, sem terminador), debuff, enchanted,
// enchant_skill_level, hp_consume, rumble_self e rumble_target. IsDebuff(id, nivel) = coluna debuff (93 §8.3).
using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEngine;

namespace L2Web
{
    public sealed class SkillGrpRecord
    {
        public int Id, Level, OperateType, MpConsume, CastRange, CastStyle, IsMagic, Debuff, Enchanted, EnchantSkillLevel, HpConsume, RumbleSelf, RumbleTarget;
        public float HitTime;
        public string Animation, VisualEffect, Icon;
    }

    public static class L2SkillData
    {
        static Dictionary<(int, int), SkillGrpRecord> table;

        public static List<SkillGrpRecord> Parse(byte[] b)
        {
            var n = BitConverter.ToInt32(b, 0);
            var p = 4;
            var outp = new List<SkillGrpRecord>(n);
            int I()
            {
                var v = BitConverter.ToInt32(b, p);
                p += 4;
                return v;
            }
            string S()
            {
                var len = I();
                var s = Encoding.Unicode.GetString(b, p, len);
                p += len;
                return s;
            }
            for (var i = 0; i < n; i++)
            {
                var r = new SkillGrpRecord { Id = I(), Level = I(), OperateType = I(), MpConsume = I(), CastRange = I(), CastStyle = I() };
                r.HitTime = BitConverter.ToSingle(b, p);
                p += 4;
                r.IsMagic = I();
                r.Animation = S();
                r.VisualEffect = S();
                r.Icon = S();
                r.Debuff = I();
                r.Enchanted = I();
                r.EnchantSkillLevel = I();
                r.HpConsume = I();
                r.RumbleSelf = I();
                r.RumbleTarget = I();
                outp.Add(r);
            }
            return outp;
        }

        /// <summary>Tabela do skillgrp.dat da copia local do cliente (vazia sem a copia).</summary>
        static Dictionary<(int, int), SkillGrpRecord> Table
        {
            get
            {
                if (table != null) return table;
                table = new Dictionary<(int, int), SkillGrpRecord>();
                try
                {
                    var f = GameData.ClientFile("skillgrp.dat");
                    if (File.Exists(f))
                        foreach (var r in Parse(L2Files.Decrypt(File.ReadAllBytes(f)))) table[(r.Id, r.Level)] = r;
                }
                catch (Exception e)
                {
                    Debug.LogWarning("skillgrp.dat: " + e.Message);
                }
                return table;
            }
        }

        /// <summary>FL2GameData::GetMSData(id, nivel).</summary>
        public static SkillGrpRecord Get(int id, int level) => Table.TryGetValue((id, level), out var r) ? r : null;

        /// <summary>UUIScript::execIsDebuff: registro+0x4C (coluna debuff) != 0; sem registro, false.</summary>
        public static bool IsDebuff(int id, int level)
        {
            var r = Get(id, level);
            return r != null && r.Debuff != 0;
        }
    }
}
