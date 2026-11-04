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
            Assert.AreEqual(-1500f, Movement.Land(Floor(-1500), null, 0, 0, 0, -10, true));
            Assert.IsNull(Movement.Land(NoGround, null, 0, 0, 0, -10, true));
            Assert.IsNull(Movement.Land(null, null, 0, 0, 0, -10, true));
        }

        [Test]
        public void Land_DuasCamadas_SoConfiaAte150()
        {
            // ponte: chao em -3464 e tabuleiro em -3100; teleporte para -3340 (pe -3330)
            var g = Layers(-3464, -3100);
            // busca (proprio): -3464 na janela 5 (134), -3100 na 8 (230): pousa embaixo (134 <= 150)
            Assert.AreEqual(-3464f, Movement.Land(g, null, 0, 0, -3330, -3340, true));
            // os outros caem no tabuleiro, nao atravessam
            Assert.AreEqual(-3100f, Movement.Land(g, null, 0, 0, -3050, -3060, false));
            // 264 abaixo numa celula multicamada: pode haver camada no meio que o porte nao conhece; fica no Z
            Assert.AreEqual(-3210f, Movement.Land(g, null, 0, 0, -3200, -3210, false));
        }

        [Test]
        public void Land_MulticamadaLonge_FicaNoZ()
        {
            // Baium (teleportLocations 50021): z 9007 + 10; camadas 10080 ... 8992 ... -5104. So com a mais alta e a mais
            // baixa, a busca nao acha nada a 900 e a queda iria a -5104 (14 mil abaixo): fica no Z do servidor
            Assert.AreEqual(9017f, Movement.Land(Layers(-5104, 10080), null, 115410, 16829, 9027, 9017, true));
            Assert.AreEqual(9017f, Movement.Land(Layers(-5104, 10080), null, 115410, 16829, 9027, 9017, false));
        }

        [Test]
        public void Land_ComTodasAsCamadas_RegraDoOriginal()
        {
            float[] baium = { 10080, 8992, 6992, 5008, 3952, 2944, 1936, 928, -640, -2128, -3616, -5104 };
            System.Collections.Generic.IReadOnlyList<float> All(float x, float y) => baium;
            Assert.AreEqual(8992f, Movement.Land(Layers(-5104, 10080), All, 0, 0, 9027, 9017, true));
            Assert.AreEqual(8992f, Movement.Land(Layers(-5104, 10080), All, 0, 0, 9027, 9017, false));
            // Dark Elven Village (TownZone 11404, 16699, -4500): camadas 7136 e -4656; pe -4480 -> 176 abaixo
            float[] de = { 7136, -4656 };
            System.Collections.Generic.IReadOnlyList<float> De(float x, float y) => de;
            Assert.AreEqual(-4656f, Movement.Land(Layers(-4656, 7136), De, 0, 0, -4480, -4490, true));
            // sem as camadas, a multicamada a 176 fica no Z
            Assert.AreEqual(-4490f, Movement.Land(Layers(-4656, 7136), null, 0, 0, -4480, -4490, true));
            // lista vazia = sem camadas conhecidas: volta ao ground
            System.Collections.Generic.IReadOnlyList<float> None(float x, float y) => new float[0];
            Assert.AreEqual(-3464f, Movement.Land(Floor(-3464), None, 0, 0, -3330, -3340, true));
        }

        [Test]
        public void PawnMotion_UsaAsCamadas()
        {
            var p = new PawnMotion { Layers = (_, _) => new float[] { 10080, 8992, -5104 } };
            p.Place(115410, 16829, 9017);
            p.Drop(true);
            p.Step(0.016f, Layers(-5104, 10080), null);
            Assert.AreEqual(8992f, p.Z);
            Assert.IsFalse(p.Landing);
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
