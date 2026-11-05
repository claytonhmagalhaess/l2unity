// Efeito do soulshot no alvo ao acertar (#0058): APawn::AssociateAttackedNotify 0x10310ba9 (corpo a corpo) e
// APawn::AttackedNotify 0x103046e2 (flecha). Com o flag 0x10 e a grade (flags & 0xF) < 6 do pacote Attack 0x05, o golpe
// mostra o DamageEffect e o soulshot.int[grade].Atk (critico: AtkCr; AtkDarkCr so com bUseDarkEffect), sem p_u004_a, no
// ponto do golpe; o efeito do shot fica com 0.9 - (n - 3) * 0.08 de opacidade com grupo de n > 2.
using System.Collections.Generic;
using L2Web.Render.Fx;
using L2Web.World;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class FxSoulshotHitTests
    {
        const string Dmg = "LineageEffect.p_u002_a";
        const string Crit = "LineageEffect.p_u004_a";

        /// <summary>As secoes de grau do soulshot.int do cliente (e_u505..e_u510; c = Atk, d = AtkDarkCr, e = AtkCr).</summary>
        static JObject Table()
        {
            var t = new JObject();
            for (var g = 0; g < 6; g++)
            {
                var n = 505 + g;
                t[LegacyFx.ShotGrades[g]] = new JObject
                {
                    ["OnSticks"] = $"LineageEffect.e_u{n}_a", ["OnBooks"] = $"LineageEffect.e_u{n}_b",
                    ["Atk"] = $"LineageEffect.e_u{n}_c", ["AtkDarkCr"] = $"LineageEffect.e_u{n}_d", ["AtkCr"] = $"LineageEffect.e_u{n}_e",
                };
            }
            return t;
        }

        static List<(string cls, bool partyFade)> L(params (string, bool)[] x) => new List<(string, bool)>(x);

        [Test]
        public void Campo_AtkNoGolpe_AtkCrNoCritico_AtkDarkCrSoComDarkEffect()
        {
            Assert.AreEqual("Atk", FxPawnEffects.SoulshotHitField(false, false));
            Assert.AreEqual("Atk", FxPawnEffects.SoulshotHitField(false, true));
            Assert.AreEqual("AtkCr", FxPawnEffects.SoulshotHitField(true, false));
            Assert.AreEqual("AtkDarkCr", FxPawnEffects.SoulshotHitField(true, true));
        }

        [Test]
        public void Classe_PorGradeDoFlag_DeNoneAteS()
        {
            var t = Table();
            for (var g = 0; g < 6; g++)
            {
                Assert.AreEqual($"LineageEffect.e_u{505 + g}_c", FxPawnEffects.SoulshotHitClass(t, Combat.Hit.Soulshot | g), "grade " + g);
                Assert.AreEqual($"LineageEffect.e_u{505 + g}_e", FxPawnEffects.SoulshotHitClass(t, Combat.Hit.Soulshot | Combat.Hit.Crit | g), "critico " + g);
                Assert.AreEqual($"LineageEffect.e_u{505 + g}_d", FxPawnEffects.SoulshotHitClass(t, Combat.Hit.Soulshot | Combat.Hit.Crit | g, true), "dark " + g);
            }
            // grade D = 1 e C = 2 (o aCis manda HITFLAG_USESS | crystal type)
            Assert.AreEqual("LineageEffect.e_u506_c", FxPawnEffects.SoulshotHitClass(t, 0x11));
            Assert.AreEqual("LineageEffect.e_u507_e", FxPawnEffects.SoulshotHitClass(t, 0x32));
            Assert.IsNull(FxPawnEffects.SoulshotHitClass(t, 0x02), "sem o flag 0x10, nada");
            Assert.IsNull(FxPawnEffects.SoulshotHitClass(t, 0x16), "grade 6..15 fora do ramo (param_11 < 6)");
            Assert.IsNull(FxPawnEffects.SoulshotHitClass(null, 0x11));
        }

        [Test]
        public void Classe_ComOSoulshotIntDoCliente()
        {
            var t = FxFixtures.Load("legacy_skill_fx.json")["_soulshot_int"]?["tabela"] as JObject;
            if (t == null) Assert.Ignore("sem _soulshot_int");
            Assert.AreEqual("LineageEffect.e_u506_c", FxPawnEffects.SoulshotHitClass(t, 0x11));
            Assert.AreEqual("LineageEffect.e_u506_e", FxPawnEffects.SoulshotHitClass(t, 0x31));
            Assert.AreEqual("LineageEffect.e_u507_c", FxPawnEffects.SoulshotHitClass(t, 0x12));
            Assert.AreEqual("LineageEffect.e_u510_e", FxPawnEffects.SoulshotHitClass(t, 0x35));
            Assert.AreEqual("LineageEffect.e_u505_c", FxPawnEffects.SoulshotHitClass(t, 0x10));
        }

        [Test]
        public void CorpoACorpo_ComSoulshot_DamageEffectEOShot_SemP_u004()
        {
            var t = Table();
            Assert.AreEqual(L((Dmg, false), ("LineageEffect.e_u506_c", true)), FxPawnEffects.HitEffects(0x11, false, Dmg, t));
            Assert.AreEqual(L((Dmg, false), ("LineageEffect.e_u507_e", true)), FxPawnEffects.HitEffects(0x32, false, Dmg, t), "critico: AtkCr, sem p_u004_a");
            Assert.AreEqual(L((Dmg, false), ("LineageEffect.e_u507_e", true)), FxPawnEffects.HitEffects(0x72, false, Dmg, t), "o escudo nao muda o ramo do soulshot");
            Assert.AreEqual(L(("LineageEffect.e_u506_c", true)), FxPawnEffects.HitEffects(0x11, false, Dmg, t, keepMinFrameRate: true), "KeepMinFrameRate tira so o DamageEffect");
            Assert.AreEqual(L(("LineageEffect.e_u506_c", true)), FxPawnEffects.HitEffects(0x11, false, null, t), "sem DamageEffect");
        }

        [Test]
        public void CorpoACorpo_SemSoulshot_ComoAntes()
        {
            var t = Table();
            Assert.AreEqual(L((Dmg, false)), FxPawnEffects.HitEffects(0, false, Dmg, t));
            Assert.AreEqual(L((Dmg, false), (Crit, false)), FxPawnEffects.HitEffects(Combat.Hit.Crit, false, Dmg, t));
            Assert.AreEqual(L((Dmg, false)), FxPawnEffects.HitEffects(Combat.Hit.Crit | Combat.Hit.Shield, false, Dmg, t), "critico no escudo: sem p_u004_a");
            Assert.AreEqual(L((Dmg, false)), FxPawnEffects.HitEffects(0x16, false, Dmg, t), "grade invalida cai no ramo comum");
            Assert.AreEqual(L((Dmg, false)), FxPawnEffects.HitEffects(Combat.Hit.Shield, false, Dmg, t));
        }

        [Test]
        public void Miss_NadaMesmoComSoulshot()
        {
            Assert.IsEmpty(FxPawnEffects.HitEffects(Combat.Hit.Miss, false, Dmg, Table()));
            Assert.IsEmpty(FxPawnEffects.HitEffects(Combat.Hit.Miss | 0x11, false, Dmg, Table()));
            Assert.IsEmpty(FxPawnEffects.HitEffects(Combat.Hit.Miss | 0x11, true, Dmg, Table()));
        }

        [Test]
        public void Flecha_ComSoulshotIgual_SemSoulshotPeloEscudo()
        {
            var t = Table();
            Assert.AreEqual(L((Dmg, false), ("LineageEffect.e_u506_c", true)), FxPawnEffects.HitEffects(0x11, true, Dmg, t));
            Assert.AreEqual(L((Dmg, false), ("LineageEffect.e_u506_e", true)), FxPawnEffects.HitEffects(0x31, true, Dmg, t));
            Assert.AreEqual(L((Dmg, false)), FxPawnEffects.HitEffects(0, true, Dmg, t));
            Assert.AreEqual(L((Dmg, false)), FxPawnEffects.HitEffects(Combat.Hit.Crit, true, Dmg, t), "flecha critica sem escudo: so o DamageEffect");
            Assert.IsEmpty(FxPawnEffects.HitEffects(Combat.Hit.Shield, true, Dmg, t), "bloqueada no escudo");
            Assert.AreEqual(L((Dmg, false), (Crit, false)), FxPawnEffects.HitEffects(Combat.Hit.Shield | Combat.Hit.Crit, true, Dmg, t));
        }

        [Test]
        public void Opacidade_PeloTamanhoDoGrupo()
        {
            Assert.AreEqual(1f, FxPawnEffects.SoulshotOpacity(0));
            Assert.AreEqual(1f, FxPawnEffects.SoulshotOpacity(2));
            Assert.AreEqual(0.9f, FxPawnEffects.SoulshotOpacity(3), 1e-6);
            Assert.AreEqual(0.82f, FxPawnEffects.SoulshotOpacity(4), 1e-6);
            Assert.AreEqual(0.42f, FxPawnEffects.SoulshotOpacity(9), 1e-6);
        }

        [Test]
        public void Ponto_NaMetadeDoRaioDoAlvo_VoltadoParaOAtacante()
        {
            var p = FxPawnEffects.HitLocation(new Vector3(100, 0, 0), Vector3.zero, 10, 20, 8, out var rot);
            Assert.AreEqual(95f, p.x, 1e-3);
            Assert.AreEqual(0f, p.y, 1e-3);
            Assert.AreEqual(0, rot.Yaw, "rotacao do golpe = Rotation(alvo - atacante)");
            p = FxPawnEffects.HitLocation(new Vector3(0, 100, 0), Vector3.zero, 10, 20, 8, out rot);
            Assert.AreEqual(0f, p.x, 1e-3);
            Assert.AreEqual(95f, p.y, 1e-3);
            Assert.AreEqual(16384, rot.Yaw);
            // CR + CH = 150 ainda usa CR/2 (o teste e estrito)
            p = FxPawnEffects.HitLocation(new Vector3(200, 0, 0), Vector3.zero, 50, 100, 8, out _);
            Assert.AreEqual(175f, p.x, 1e-3);
        }

        [Test]
        public void Ponto_EmAlvoGrande_85PorCentoDoCaminho_LimitadoPeloRaioDoAtacante()
        {
            // CR 60 + CH 100 > 150: Clamp(0.85 * 200, 0, 200 - 10) = 170
            var p = FxPawnEffects.HitLocation(new Vector3(200, 0, 0), Vector3.zero, 60, 100, 10, out _);
            Assert.AreEqual(30f, p.x, 1e-3);
            // Clamp(0.85 * 100, 0, 100 - 30) = 70
            p = FxPawnEffects.HitLocation(new Vector3(100, 0, 0), Vector3.zero, 60, 100, 30, out _);
            Assert.AreEqual(30f, p.x, 1e-3);
            // dentro do raio do atacante: max negativo vence (FUN_103704b0)
            p = FxPawnEffects.HitLocation(new Vector3(20, 0, 0), Vector3.zero, 60, 100, 30, out _);
            Assert.AreEqual(30f, p.x, 1e-3);
        }
    }
}
