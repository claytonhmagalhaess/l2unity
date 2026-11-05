// F5/K4 da matriz (Docs/validacao.md): posicao padrao das janelas. Golden/wnd_defpos.json (Docs/tools/gen_golden.py
// wnd_defpos): o WndDefPos de out/re/interface_layout.json e as posicoes do WindowsInfo.ini gravado pelo original (sessao em
// 1374x1071). NCWnd::SetDefaultPosition (FUN_1005ffd0) usa o WndDefPos quando a janela tem entrada; as janelas de macro, que
// o jogador nao moveu, ficaram onde o WndDefPos as poe e nao onde a ancora do xdat poria.
using System;
using System.IO;
using System.Linq;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class DefPosTests
    {
        [OneTimeSetUp]
        public void CarregaOLayout()
        {
            var ui = Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "ui");
            if (!File.Exists(Path.Combine(ui, "layout.json"))) Assert.Ignore("sem a copia local de /ui");
            L2WndUtil.Use(JObject.Parse(File.ReadAllText(Path.Combine(ui, "layout.json"))), JObject.Parse(File.ReadAllText(Path.Combine(ui, "textures.json"))));
        }

        static JObject G => (JObject)Golden.Load("wnd_defpos.json");

        [Test]
        public void Entradas_IguaisAoXdat_ValeAUltima()
        {
            var list = (JArray)G["defPos"];
            Assert.AreEqual(56, list.Count);
            foreach (var name in list.Select(t => (string)t["wnd"]).Distinct(StringComparer.OrdinalIgnoreCase))
            {
                var last = list.Last(t => string.Equals((string)t["wnd"], name, StringComparison.OrdinalIgnoreCase));
                var d = L2WindowsInfo.DefPos(name);
                Assert.IsNotNull(d, name);
                Assert.AreEqual(((string)last["alignment"], (float)last["x"], (float)last["y"], (float)last["width"], (float)last["height"]), d.Value, name);
            }
            Assert.IsNull(L2WindowsInfo.DefPos("ChatFilterWnd"));
        }

        [Test]
        public void PosicoesDoOriginal_ExplicadasPeloWndDefPos()
        {
            var g = G;
            var scr = new Vector2((int)g["screen"][0], (int)g["screen"][1]);
            var saved = (JObject)g["saved"];
            int byDef = 0, byAnchor = 0;
            foreach (var p in saved.Properties())
            {
                var def = L2WndUtil.WindowDef(p.Name);
                if (def == null || def.Size == null) continue;
                var want = new Vector2((int)p.Value[0], (int)p.Value[1]);
                var size = new Vector2(def.Size[0], def.Size[1]);
                var d = L2WindowsInfo.DefPosition(p.Name, scr, size);
                if (d is { } dp && Vector2.Distance(Round(dp.pos), want) < 0.5f) byDef++;
                var a = def.Anchor;
                if (a != null && string.IsNullOrEmpty(a.Ctrl))
                {
                    var al = AnchorPos(a, scr, size);
                    if (Vector2.Distance(Round(al), want) < 0.5f) byAnchor++;
                }
            }
            Assert.Greater(byDef, byAnchor);
            // as duas janelas de macro: so o WndDefPos (CENTER 0,0) explica
            foreach (var n in new[] { "MacroListWnd", "MacroInfoWnd" })
            {
                var def = L2WndUtil.WindowDef(n);
                var want = new Vector2((int)saved[n][0], (int)saved[n][1]);
                var d = L2WindowsInfo.DefPosition(n, scr, new Vector2(def.Size[0], def.Size[1])).Value;
                Assert.AreEqual(want, Round(d.pos), n);
                Assert.AreNotEqual(want, Round(AnchorPos(def.Anchor, scr, new Vector2(def.Size[0], def.Size[1]))), n);
                Assert.AreEqual(want, Round(L2WindowsInfo.Default(n, scr).pos), "Default usa o WndDefPos");
            }
            // PartyWnd: TOP_LEFT (0, 84), logo abaixo da StatusWnd (84 de altura), e nao a ancora (0, 152)
            Assert.AreEqual(new Vector2(0, 84), L2WindowsInfo.Default("PartyWnd", new Vector2(1024, 768)).pos);
            Assert.AreEqual(new Vector2(0, 84), L2WindowsInfo.Default("PartyWndCompact", new Vector2(1024, 768)).pos);
        }

        static Vector2 Round(Vector2 v) => new(Mathf.Round(v.x), Mathf.Round(v.y));

        static Vector2 AnchorPos(L2Anchor a, Vector2 scr, Vector2 size)
        {
            Vector2 P(string k) => k switch
            {
                "TOP_CENTER" => new(0.5f, 0), "TOP_RIGHT" => new(1, 0), "CENTER_LEFT" => new(0, 0.5f), "CENTER" => new(0.5f, 0.5f),
                "CENTER_RIGHT" => new(1, 0.5f), "BOTTOM_LEFT" => new(0, 1), "BOTTOM_CENTER" => new(0.5f, 1), "BOTTOM_RIGHT" => new(1, 1),
                _ => Vector2.zero,
            };
            var t = P(a.This);
            var o = P(a.Parent);
            return new Vector2(scr.x * t.x + a.X - size.x * o.x, scr.y * t.y + a.Y - size.y * o.y);
        }
    }
}
