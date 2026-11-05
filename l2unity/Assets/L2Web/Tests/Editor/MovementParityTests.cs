// M1 da matriz (Docs/validacao.md): constantes de movimento do Unity contra Golden/movement.json, lido do pseudocodigo do
// UGameEngine::OnValidateLocation (engine.dll): correcao de 3 s, ignora abaixo de 2 unidades, reposiciona acima de 200.
using L2Web.World;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class MovementParityTests
    {
        [Test]
        public void Constantes_DoOnValidateLocation()
        {
            var g = Golden.Load("movement.json");
            Assert.AreEqual((float)g["catchup"], Movement.ValidateCatchupTime);
            Assert.AreEqual((float)g["idleMin"], Movement.IdleMinDistance);
            Assert.AreEqual((float)g["snap"], Movement.SnapDistance);
        }
    }
}
