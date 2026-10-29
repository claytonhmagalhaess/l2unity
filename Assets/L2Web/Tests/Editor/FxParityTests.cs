// Paridade do simulador de particulas com o cliente (spec 09 §4, §5): compara, para cada emissor de fx_golden.json
// (l2anim/out/re/fx, gerado por scripts/fx_golden.py), a cor da ColorScale (RGBA exato), o fator do SizeScale e o fade
// (1e-4) em 21 idades relativas, com as propriedades do emissor sobre os defaults do Engine.u. Ignorado se os JSON do
// l2anim nao existirem.
using System;
using System.Collections.Generic;
using System.IO;
using L2Web.Render.Fx;
using Newtonsoft.Json.Linq;
using NUnit.Framework;

namespace L2Web.Tests
{
    public static class FxFixtures
    {
        public const string FxDir = @"C:\Users\Clayton\workspace-claude\L2Unity-workspace\analises\l2-interlude\re\fx";
        static FxLibrary lib;
        static JObject golden;

        public static FxLibrary Library()
        {
            if (lib != null) return lib;
            if (!File.Exists(Path.Combine(FxDir, "engine_defaults.json"))) Assert.Ignore("sem l2anim/out/re/fx");
            lib = new FxLibrary();
            lib.LoadEngineDefaults(JObject.Parse(File.ReadAllText(Path.Combine(FxDir, "engine_defaults.json"))));
            foreach (var fn in new[] { "lineageeffect.json", "LineageKetraEffect.json", "Rider_Effect.json" })
            {
                var f = Path.Combine(FxDir, fn);
                if (File.Exists(f)) lib.LoadPackage(JObject.Parse(File.ReadAllText(f)));
            }
            return lib;
        }

        public static JObject Golden()
        {
            if (golden != null) return golden;
            var f = Path.Combine(FxDir, "fx_golden.json");
            if (!File.Exists(f)) Assert.Ignore("sem fx_golden.json");
            golden = JObject.Parse(File.ReadAllText(f));
            return golden;
        }

        public static JObject Load(string name)
        {
            var f = Path.Combine(FxDir, name);
            if (!File.Exists(f)) Assert.Ignore("sem " + name);
            return JObject.Parse(File.ReadAllText(f));
        }
    }

    public class FxParityTests
    {
        static EmitterDef Find(FxLibrary lib, string key, out string why)
        {
            // "<pacote>.<classe>.<emissor>"
            var parts = key.Split('.');
            why = null;
            if (parts.Length < 3) { why = "chave"; return null; }
            var cls = lib.Get(parts[0] + "." + parts[1]) ?? lib.Get(parts[1]);
            if (cls == null) { why = "classe " + parts[1]; return null; }
            var em = parts[2];
            foreach (var e in cls.Emitters) if (e.Name == em) return e;
            why = "emissor " + em;
            return null;
        }

        [Test]
        public void Golden_CorTamanhoEFade_DeTodosOsEmissores()
        {
            var lib = FxFixtures.Library();
            var g = FxFixtures.Golden();
            var samples = new List<double>();
            foreach (var t in (JArray)g["amostras_reltime"]) samples.Add((double)t);
            var emissores = (JObject)g["emissores"];
            int n = 0, colorChecks = 0, sizeChecks = 0, fadeChecks = 0;
            var failures = new List<string>();
            foreach (var kv in emissores)
            {
                var def = Find(lib, kv.Key, out var why);
                if (def == null) { failures.Add(kv.Key + ": " + why); continue; }
                n++;
                var ge = (JObject)kv.Value;
                var sim = new ParticleEmitterSim(def, new FxRand(1));
                var life = (double)ge["MaxLifetime"];
                Assert.AreEqual(life, def.LifetimeRange.Max, 1e-6, kv.Key + " MaxLifetime");
                Assert.AreEqual((int)ge["DrawStyle"], (int)def.DrawStyle, kv.Key + " DrawStyle");
                if (ge["color"] is JArray cols)
                    for (var i = 0; i < samples.Count; i++)
                    {
                        var has = sim.ColorAt(samples[i], out var c);
                        if (cols[i].Type == JTokenType.Null)
                        {
                            if (has) failures.Add($"{kv.Key} cor[{i}]: esperado nulo");
                            continue;
                        }
                        var e = (JArray)cols[i];
                        if (!has || c.r != (int)e[0] || c.g != (int)e[1] || c.b != (int)e[2] || c.a != (int)e[3])
                            failures.Add($"{kv.Key} cor[{i}] t={samples[i]}: esperado ({e[0]},{e[1]},{e[2]},{e[3]}) obtido ({c.r},{c.g},{c.b},{c.a}) has={has}");
                        colorChecks++;
                    }
                if (ge["size"] is JArray sizes)
                    for (var i = 0; i < samples.Count; i++)
                    {
                        var has = sim.SizeAt(samples[i], out var s);
                        if (sizes[i].Type == JTokenType.Null)
                        {
                            if (has) failures.Add($"{kv.Key} size[{i}]: esperado nulo, obtido {s}");
                            continue;
                        }
                        if (!has || System.Math.Abs(s - (float)sizes[i]) > 1e-4) failures.Add($"{kv.Key} size[{i}] t={samples[i]}: esperado {sizes[i]} obtido {s} has={has}");
                        sizeChecks++;
                    }
                if (ge["size_regular"] is JArray reg)
                    for (var i = 0; i < samples.Count; i++)
                    {
                        var expected = (float)reg[i];
                        var got = 1.0 / (samples[i] * life + 1.0);
                        if (System.Math.Abs(got - expected) > 1e-4) failures.Add($"{kv.Key} size_regular[{i}]");
                        sizeChecks++;
                    }
                if (ge["fade"] is JArray fades)
                    for (var i = 0; i < samples.Count; i++)
                    {
                        var tm = samples[i] * life;
                        var has = sim.FadeAt(tm, life, out var fadeOut, out var f);
                        if (fades[i].Type == JTokenType.Null)
                        {
                            if (has) failures.Add($"{kv.Key} fade[{i}] t={tm}: esperado nenhum, obtido {(fadeOut ? "out" : "in")} {f}");
                            continue;
                        }
                        var e = (JArray)fades[i];
                        var which = (string)e[0];
                        if (!has || (which == "out") != fadeOut || System.Math.Abs(f - (float)e[1]) > 1e-4)
                            failures.Add($"{kv.Key} fade[{i}] t={tm}: esperado {which} {e[1]} obtido {(has ? (fadeOut ? "out" : "in") + " " + f : "nenhum")}");
                        fadeChecks++;
                    }
            }
            Assert.Greater(n, 3000, "emissores comparados");
            Assert.Greater(colorChecks, 10000);
            Assert.Greater(sizeChecks, 10000);
            Assert.Greater(fadeChecks, 10000);
            if (failures.Count > 0) Assert.Fail($"{failures.Count} divergencias (de {n} emissores):\n" + string.Join("\n", failures.GetRange(0, System.Math.Min(40, failures.Count))));
        }

        [Test]
        public void Biblioteca_ClassesEEmissores_ComOsDefaultsDoEngine()
        {
            var lib = FxFixtures.Library();
            Assert.GreaterOrEqual(lib.Count, 886 * 2 - 10, "classes (com e sem prefixo)");
            var mb = lib.Get("LineageEffect.at_mortal_blow_cs");
            Assert.IsNotNull(mb);
            Assert.AreEqual("Engine.Emitter", mb.Super);
            Assert.IsTrue(mb.AutoDestroy);
            Assert.AreEqual(0.05f, mb.DrawScale, 1e-6);
            Assert.AreEqual(3, mb.Emitters.Count);
            var s0 = mb.Emitters[0];
            Assert.AreEqual(EmitterKind.Sprite, s0.Kind);
            Assert.AreEqual(4, s0.TextureUSubdivisions);
            Assert.AreEqual(14, s0.SubdivisionStart);
            Assert.AreEqual(16, s0.SubdivisionEnd);
            Assert.IsTrue(s0.UseRandomSubdivision);
            Assert.AreEqual(DrawStyle.Translucent, s0.DrawStyle, "default do Engine.u");
            Assert.AreEqual(10, s0.MaxParticles, "default do Engine.u");
            Assert.AreEqual(CoordSystem.Relative, s0.CoordinateSystem);
            Assert.IsTrue(s0.UseRegularSizeScale, "default true do Engine.u (nao gravado neste emissor)");
            Assert.AreEqual(0.48f, s0.FadeOutStartTime, 1e-6);
            Assert.AreEqual("LineageEffectsTextures.Particles.fx_m_t0000", s0.Texture);
            Assert.AreEqual(0.7f, s0.LifetimeRange.Min, 1e-6);
            Assert.AreEqual(1.2f, s0.LifetimeRange.Max, 1e-6);
            var fl = lib.Get("el_wind_strike_fl");
            Assert.IsNotNull(fl);
            Assert.IsTrue(fl.IsProjectile);
            Assert.AreEqual(1000f, fl.Speed, 1e-6);
            Assert.AreEqual(3000f, fl.AccSpeed, 1e-6);
            Assert.AreEqual(4, fl.Emitters.Count);
            Assert.AreEqual(EmitterKind.Mesh, fl.Emitters[0].Kind);
            Assert.IsFalse(fl.Emitters[0].UseMeshBlendMode);
            Assert.AreEqual(5, fl.Emitters[0].SizeScale.Count);
            Assert.IsFalse(fl.Emitters[0].UseRegularSizeScale);
            // float gravado como 4 bytes (SubdivisionScale lido como FColor pelo extrator)
            var ss = lib.Get("at_shield_slam_ta");
            EmitterDef withScale = null;
            foreach (var e in ss.Emitters) if (e.SubdivisionScale.Count > 0) withScale = e;
            Assert.IsNotNull(withScale);
            Assert.AreEqual(BitConverter.ToSingle(new byte[] { 76, 204, 205, 62 }, 0), withScale.SubdivisionScale[0], 1e-6, "bytes R,G,B,A little-endian");
            var ribbon = lib.Get("RibbonSet");
            Assert.AreEqual(EmitterKind.Ribbon, ribbon.Emitters[0].Kind);
            Assert.AreEqual(1, ribbon.Emitters[0].MaxParticles, "RibbonEmitter default MaxParticles 1");
            Assert.AreEqual(80, ribbon.Emitters[0].NumPoints);
            Assert.IsTrue(ribbon.Emitters[0].bUseBones);
        }
    }
}
