// M3/M4 da matriz (Docs/validacao.md): constantes do ataque (APawn::SwordAttackProcess/BowAttackProcess) e a escolha do
// lead do cast (APawn::InitSkillProcess) contra Golden/combat.json e Golden/skills.json, lidos do pseudocodigo e da
// desmontagem do engine.dll.
using System.Linq;
using L2Web.World;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class CombatParityTests
    {
        [Test]
        public void Ataque_ConstantesDoEngine()
        {
            var g = Golden.Load("combat.json");
            Assert.AreEqual((double)g["meleeRate"], Combat.MeleeRateFactor, 1e-9);
            Assert.AreEqual((double)g["meleeTween"], Combat.MeleeTween, 1e-9);
            Assert.AreEqual((double)g["bowTween"], Combat.BowTween, 1e-9);
        }

        [Test]
        public void LeadDoCast_PorCastStyle()
        {
            var g = Golden.Load("skills.json");
            var proj = g["projectile"].Select(v => (int)v).ToArray();
            var phys = g["physical"].Select(v => (int)v).ToArray();
            for (var cs = 0; cs <= 20; cs++)
            {
                var expected = proj.Contains(cs) ? (double)g["projectileLead"] : phys.Contains(cs) ? 0 : cs == (int)g["special"] ? (double)g["specialLead"] : (double)g["defaultLead"];
                Assert.AreEqual(expected, L2Calc.SkillLead(false, 0, cs).lead, 1e-9, "cast_style " + cs);
            }
            Assert.AreEqual(0.5, L2Calc.SkillLead(true, 0.5, 2).lead, 1e-9);
            Assert.AreEqual(0, L2Calc.SkillLead(true, 0.1, 3).lead, 1e-9);
            Assert.AreEqual((double)g["defaultLead"], L2Calc.SkillLead(true, 0.1, 2).lead, 1e-9);
        }
    }
}
