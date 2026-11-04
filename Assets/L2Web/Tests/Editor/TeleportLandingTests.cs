// Pouso depois do teleporte (#0057): UGameEngine::OnTeleportToLocation poe o pawn em Z + CollisionHeight + 10 e o
// L2_Teleport procura o lugar de pouso (traces de z+30i ate z-30i, i = 1..30); os outros pawns caem ate o chao.
// O aCis manda o Z do destino + 10 sem consultar a geodata: em Giran o /unstuck chega 110-124 unidades acima do chao.
using L2Web.World;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class TeleportLandingTests
    {
        /// <summary>Mesma regra do GeoTerrain.GroundHeight: das duas camadas da celula, a mais proxima de zRef.</summary>
        static System.Func<float, float, float, float?> Layers(float lo, float hi) =>
            (_, _, zr) => System.Math.Abs(hi - zr) < System.Math.Abs(lo - zr) ? hi : lo;

        static System.Func<float, float, float, float?> Floor(float h) => Layers(h, h);

        static float? NoGround(float x, float y, float z) => null;

        [Test]
        public void Unstuck_Giran_ProprioPousaNaGeodata()
        {
            // TownZone.xml de Giran: spawn (82480, 149087, -3350); Creature.teleportTo soma 10; geodata 22_22 ali = -3464
            var p = new PawnMotion();
            p.Place(82480, 149087, -3340);
            p.Drop(true);
            p.Step(0.016f, Floor(-3464), null);
            Assert.AreEqual(-3464f, p.Z);
            Assert.IsFalse(p.Landing);
        }

        [Test]
        public void Pouso_EsperaOChaoCarregar()
        {
            var p = new PawnMotion();
            p.Place(83473, 149223, -3290);
            p.Drop(true);
            p.Step(0.016f, NoGround, null);
            Assert.AreEqual(-3290f, p.Z);
            Assert.IsTrue(p.Landing);
            p.Step(0.016f, Floor(-3400), null);
            Assert.AreEqual(-3400f, p.Z);
            Assert.IsFalse(p.Landing);
            // pousado, um Step parado nao mexe mais no Z
            p.Step(0.016f, Floor(-3000), null);
            Assert.AreEqual(-3400f, p.Z);
        }

        [Test]
        public void LandingZ_PrimeiraJanelaComChao_MaisAltoNela()
        {
            // pe em 0: -100 cai na janela 4 (+-120), +40 na 2 (+-60): vence +40
            Assert.AreEqual(40f, Movement.LandingZ(0, -100, 40));
            // -50 e +55 caem na janela 2: o trace desce do alto e para no mais alto
            Assert.AreEqual(55f, Movement.LandingZ(0, -50, 55));
            Assert.AreEqual(-10f, Movement.LandingZ(0, -10, 100));
            // nada ate 900: "Couldn't find landing place"
            Assert.IsNull(Movement.LandingZ(0, -1000));
            Assert.AreEqual(-900f, Movement.LandingZ(0, -900));
        }

        [Test]
        public void FallZ_ChaoMaisAltoAbaixoDoPe()
        {
            Assert.AreEqual(0f, Movement.FallZ(10, 0, 50));
            Assert.AreEqual(-200f, Movement.FallZ(10, -200, -500));
            // nenhum abaixo: o mais proximo
            Assert.AreEqual(50f, Movement.FallZ(10, 50, 300));
            Assert.IsNull(Movement.FallZ(10, null));
        }

        [Test]
        public void Land_SemChaoAte900_ProprioCai()
        {
            Assert.AreEqual(-1500f, Movement.Land(Floor(-1500), 0, 0, 0, true));
            Assert.IsNull(Movement.Land(NoGround, 0, 0, 0, true));
            Assert.IsNull(Movement.Land(null, 0, 0, 0, true));
        }

        [Test]
        public void Land_DuasCamadas_UsaAltaEBaixa()
        {
            // ponte: chao em -3464 e tabuleiro em -3100; teleporte para -3340 (pe -3330)
            var g = Layers(-3464, -3100);
            // busca (proprio): -3464 na janela 5 (134), -3100 na 8 (230): pousa embaixo
            Assert.AreEqual(-3464f, Movement.Land(g, 0, 0, -3330, true));
            // teleporte para cima do tabuleiro: os outros caem no tabuleiro, nao atravessam
            Assert.AreEqual(-3100f, Movement.Land(g, 0, 0, -3050, false));
            Assert.AreEqual(-3464f, Movement.Land(g, 0, 0, -3200, false));
        }

        [Test]
        public void OutroPawn_CaiAteOChao()
        {
            // outro jogador que fez unstuck: CharInfo/TeleportToLocation com o Z do servidor (-3340)
            var p = new PawnMotion();
            p.Place(81440, 149119, -3340);
            p.Drop(false);
            p.Step(0.016f, Floor(-3464), null);
            Assert.AreEqual(-3464f, p.Z);
        }

        [Test]
        public void ValidateLocation_Proprio_PousaDepois()
        {
            var me = new PawnMotion();
            me.ServerValidate(new Vec3(82480, 149087, -3340), 0, true);
            Assert.AreEqual(-3340f, me.Z);
            me.Step(0.016f, Floor(-3464), null);
            Assert.AreEqual(-3464f, me.Z);
            // outro pawn corrigido pelo ValidateLocation (AdjustPawnLocation) nao arma pouso
            var other = new PawnMotion();
            other.ServerValidate(new Vec3(1000, 0, 50), 0, false);
            Assert.IsFalse(other.Landing);
        }

        [Test]
        public void AndandoSemChao_PousaDeOndeEsta()
        {
            var p = new PawnMotion { RunSpd = 100, WalkSpd = 100 };
            p.Place(0, 0, 100);
            p.Drop(true);
            p.AddMoveTo(new Vec3(0, 0, 100), new Vec3(1000, 0, 100));
            p.Step(0.5f, NoGround);
            Assert.IsTrue(p.Landing);
            Assert.AreEqual(110f, p.LandingFeet);
            p.Step(0.016f, Floor(-20));
            Assert.AreEqual(-20f, p.Z);
            Assert.IsFalse(p.Landing);
        }
    }
}
