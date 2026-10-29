// G1-G6 da matriz (Docs/validacao.md): as posicoes das telas nativas do Unity (UI/NativeLayout) contra
// Golden/native_layout.json (out/re/native_screen_layout.json com as formulas avaliadas em 1024x768 e 1920x1080).
using System.Collections.Generic;
using System.Linq;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class NativeLayoutTests
    {
        /// <summary>(tela, indice do controle no JSON, retangulo do Unity, indice da janela-mae no JSON ou -1 = tela).</summary>
        static IEnumerable<(string screen, int index, NRect rect, int parent)> Map()
        {
            yield return ("NCAuthWnd", 0, NativeLayout.Auth, -1);
            yield return ("NCAuthWnd", 1, NativeLayout.AuthId, 0);
            yield return ("NCAuthWnd", 2, NativeLayout.AuthPwd, 0);
            yield return ("NCAuthWnd", 3, NativeLayout.AuthOtpEdit, 0);
            yield return ("NCAuthWnd", 5, NativeLayout.AuthLogIn, 0);
            yield return ("NCAuthWnd", 6, NativeLayout.AuthExit, 0);
            yield return ("NCLoginFunctionWnd", 0, NativeLayout.FunctionWnd, -1);
            for (var i = 0; i < 5; i++) yield return ("NCLoginFunctionWnd", 1 + i, NativeLayout.FunctionButton(NativeLayout.LoginFunctionY[i]), 0);
            yield return ("NCLobbyFunctionWnd", 0, NativeLayout.FunctionWnd, -1);
            for (var i = 0; i < 3; i++) yield return ("NCLobbyFunctionWnd", 1 + i, NativeLayout.FunctionButton(NativeLayout.LobbyFunctionY[i]), 0);
            yield return ("NCPawnCreateFunctionWnd", 0, NativeLayout.FunctionWnd, -1);
            for (var i = 0; i < 2; i++) yield return ("NCPawnCreateFunctionWnd", 1 + i, NativeLayout.FunctionButton(NativeLayout.CreateFunctionY[i]), 0);
            yield return ("NCServerSelectWnd", 0, NativeLayout.ServerSelect, -1);
            yield return ("NCServerSelectWnd", 1, NativeLayout.ServerOk, 0);
            yield return ("NCServerSelectWnd", 2, NativeLayout.ServerCancel, 0);
            yield return ("NCServerSelectWnd", 3, NativeLayout.ServerQuality, 0);
            yield return ("NCServerSelectListCtrl", 0, NativeLayout.ServerList, -1);
            yield return ("NCServerInfoWnd", 0, NativeLayout.ServerInfo, -1);
            yield return ("NCServerInfoWnd", 1, NativeLayout.ServerInfoHtml, 0);
            yield return ("NCLobbyStartWnd", 0, NativeLayout.LobbyStart, -1);
            yield return ("NCLobbyStartWnd", 1, NativeLayout.LobbyStartButton, 0);
            yield return ("NCPawnSelectWnd", 0, NativeLayout.PawnSelect, -1);
            yield return ("NCPawnSelectWnd", 1, NativeLayout.PawnSelectCombo, 0);
            yield return ("NCPawnSetupWnd", 0, NativeLayout.PawnSetup, -1);
            yield return ("NCPawnSetupWnd", 1, NativeLayout.PawnSetupName, 0);
            for (var i = 0; i < 6; i++) yield return ("NCPawnSetupWnd", 2 + i, NativeLayout.PawnSetupSelect(i), 0);
            yield return ("NCPawnInfoWnd", 0, NativeLayout.PawnInfo, -1);
            yield return ("NCPawnCreateWnd", 0, NativeLayout.CreateLeft, -1);
            yield return ("NCPawnCreateWnd", 1, NativeLayout.CreateRight, -1);
            yield return ("NCPawnCreateWnd", 2, NativeLayout.CreateZoom, -1);
            yield return ("NCKeyCryptWarningDialogBox", 0, NativeLayout.KeyCrypt, -1);
        }

        [TestCase("1024x768", 1024, 768)]
        [TestCase("1920x1080", 1920, 1080)]
        public void TelasNativas_IguaisAoNWindow(string res, int sw, int sh)
        {
            var g = (JObject)Golden.Load("native_layout.json")[res];
            var erros = new List<string>();
            foreach (var (screen, index, rect, parent) in Map())
            {
                var rows = (JArray)g[screen];
                var expected = rows[index]["rect"].Select(v => (int)v).ToArray();
                var (pw, ph) = parent < 0 ? (sw, sh) : ((int)rows[parent]["rect"][2], (int)rows[parent]["rect"][3]);
                var (x, y, w, h) = rect.Resolve(pw, ph);
                if (x != expected[0] || y != expected[1] || w != expected[2] || h != expected[3])
                    erros.Add($"{screen}[{index}] {rows[index]["class"]} {rows[index]["id"]}: Unity ({x}, {y}, {w}, {h}) != original ({string.Join(", ", expected)})");
            }
            Assert.IsEmpty(erros, string.Join("\n", erros));
        }

        [Test]
        public void Logos_DoNCConsole()
        {
            var g = Golden.Load("native_layout.json")["logos"];
            Assert.AreEqual((float)g["startLogo"][0], NativeLayout.StartLogo.W);
            Assert.AreEqual((float)g["startLogo"][1], NativeLayout.StartLogo.H);
            Assert.AreEqual((int)g["startLogoAnchorY"], (int)NativeLayout.StartLogo.Y);
            // TopCenter: centralizado na largura
            Assert.AreEqual(1024 / 2 - 128, NativeLayout.StartLogo.Resolve(1024, 768).x);
            Assert.AreEqual((float)g["miniLogo"][0], NativeLayout.MiniLogo.W);
            Assert.AreEqual((float)g["miniLogo"][1], NativeLayout.MiniLogo.H);
        }

        [Test]
        public void KeyCryptOk_E_RotulosDoLogin()
        {
            // o x do OK do KeyCrypt foi resolvido a mao no assembly (89): 65
            Assert.AreEqual(65, NativeLayout.KeyCryptOk.Resolve(205, 87).x);
            var g = (JObject)Golden.Load("native_layout.json")["1024x768"];
            var ok = g["NCKeyCryptWarningDialogBox"][1]["rect"];
            Assert.AreEqual((int)ok[1], NativeLayout.KeyCryptOk.Resolve(205, 87).y);
            Assert.AreEqual((int)ok[2], NativeLayout.KeyCryptOk.Resolve(205, 87).w);
            // rotulos: sysstring 152/153 nos botoes, 154/155/156/805/1251 no menu
            StringAssert.Contains("sysstring[152]", (string)g["NCAuthWnd"][5]["labels"][0]);
            StringAssert.Contains("sysstring[1251]", (string)g["NCLoginFunctionWnd"][5]["labels"][0]);
        }
    }
}
