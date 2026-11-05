// J4 da matriz (Docs/validacao.md): IsDebuff(id, nivel) = coluna debuff do Skillgrp.dat (93 §8.3), lido com o layout do
// registro do FUN_1044e890, contra Golden/skillgrp.json (gerado do mesmo arquivo pelo l2dec413.py).
using System.IO;
using System.Linq;
using Newtonsoft.Json.Linq;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class SkillDataTests
    {
        [Test]
        public void Skillgrp_TodosOsRegistros_EIsDebuff()
        {
            var g = Golden.Load("skillgrp.json");
            var raw = File.ReadAllBytes(Path.Combine(Golden.ClientSystem, "skillgrp.dat"));
            var recs = L2SkillData.Parse(L2Files.Decrypt(raw));
            Assert.AreEqual((int)g["count"], recs.Count);
            Assert.AreEqual((int)g["debuffs"], recs.Count(r => r.Debuff != 0));
            var by = recs.GroupBy(r => (r.Id, r.Level)).ToDictionary(x => x.Key, x => x.First());
            foreach (var s in (JArray)g["sample"])
            {
                var r = by[((int)s["id"], (int)s["level"])];
                Assert.AreEqual((int)s["debuff"], r.Debuff, $"{s["id"]}/{s["level"]}");
                Assert.AreEqual((string)s["icon"], r.Icon);
            }
            if (File.Exists(GameData.ClientFile("skillgrp.dat")))
            {
                Assert.IsTrue(L2SkillData.IsDebuff(102, 1)); // Entangle
                Assert.IsTrue(L2SkillData.IsDebuff(1160, 1)); // Slow
                Assert.IsFalse(L2SkillData.IsDebuff(1204, 2)); // Wind Walk
                Assert.IsFalse(L2SkillData.IsDebuff(999999, 1)); // sem registro
            }
        }
    }
}
