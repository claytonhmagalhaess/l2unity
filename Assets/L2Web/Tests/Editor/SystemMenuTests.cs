// #0047: itens do SystemMenuWnd que abriam nada. BoardWnd.uc ShowBBSTab (:140-185), HelpHtmlWnd.uc (LoadHtml do FilePath) e
// UserPetitionWnd.uc (OnClickOKButton e os PetitionCategoryLink).
using System.IO;
using L2Web.UI;
using Newtonsoft.Json.Linq;
using NUnit.Framework;
using UnityEngine;

namespace L2Web.Tests
{
    public class SystemMenuTests
    {
        /// <summary>As 7 abas da BoardWnd tem o mesmo alvo (HtmlViewer): qualquer aba escolhida o deixa visivel.</summary>
        [Test]
        public void Board_AbasComOMesmoAlvo_ViewerVisivel()
        {
            var ui = Path.Combine(Application.streamingAssetsPath, "L2Web", "cache", "ui");
            if (!File.Exists(Path.Combine(ui, "layout.json"))) Assert.Ignore("sem a copia local de /ui");
            L2WndUtil.Use(JObject.Parse(File.ReadAllText(Path.Combine(ui, "layout.json"))), JObject.Parse(File.ReadAllText(Path.Combine(ui, "textures.json"))));
            var root = new GameObject("teste board", typeof(RectTransform));
            try
            {
                var w = new L2Wnd("BoardWnd", new L2Layer(root.transform));
                for (var i = 0; i < 7; i++)
                {
                    w.SelectTab("TabCtrl", i);
                    Assert.IsTrue(w.CtrlVisible("HtmlViewer"), "aba " + i);
                }
            }
            finally
            {
                Object.DestroyImmediate(root);
            }
        }

        [TestCase(TextAnchor.UpperLeft, 0f)]
        [TestCase(TextAnchor.MiddleCenter, 0.5f)]
        [TestCase(TextAnchor.UpperCenter, 0.5f)]
        [TestCase(TextAnchor.MiddleRight, 1f)]
        public void Html_SublinhadoSegueOAlinhamento(TextAnchor align, float x) => Assert.AreEqual(x, L2Html.UnderlineAnchor(align));

        [Test]
        public void Board_BypassDasAbas()
        {
            Assert.AreEqual(new[]
            {
                "bypass _bbshome", "bypass _bbsgetfav", "bypass _bbsloc", "bypass _bbsclan", "bypass _bbsmemo", "bypass _maillist_0_1_0_",
                "bypass _friendlist_0_",
            }, BoardView.TabBypass);
        }

        [TestCase("..\\L2text\\help.htm", "help.htm")]
        [TestCase("..\\L2text\\help_macro.htm", "help_macro.htm")]
        [TestCase("help_general.htm", "help_general.htm")]
        [TestCase("../L2text/pet_help_bug.htm", "pet_help_bug.htm")]
        [TestCase("", "")]
        public void Ajuda_NomeDoArquivo(string path, string file) => Assert.AreEqual(file, HelpHtmlView.FileName(path));

        [Test]
        public void Peticao_Validacao()
        {
            Assert.AreEqual(804, PetitionScript.Validate(0, "texto longo o bastante"));
            Assert.AreEqual(386, PetitionScript.Validate(3, "1234"));
            Assert.AreEqual(0, PetitionScript.Validate(3, "12345"));
            Assert.AreEqual(0, PetitionScript.Validate(1, new string('a', 254)));
            Assert.AreEqual(971, PetitionScript.Validate(1, new string('a', 255)));
        }

        [Test]
        public void Peticao_AjudaDaCategoria()
        {
            Assert.IsNull(PetitionScript.HelpFile(0));
            Assert.AreEqual("pet_help_move.htm", PetitionScript.HelpFile(1));
            Assert.AreEqual("pet_help_etc.htm", PetitionScript.HelpFile(9));
            Assert.IsNull(PetitionScript.HelpFile(10));
            Assert.AreEqual(9, PetitionScript.CategoryTitle.Length);
        }

        [Test]
        public void Peticao_Pacotes()
        {
            var p = PetitionScript.RequestPetition("ab", 4);
            Assert.AreEqual(0x7f, p[0]);
            // S = UTF-16LE com terminador
            Assert.AreEqual(1 + 6 + 4, p.Length);
            Assert.AreEqual(4, p[p.Length - 4]);
            Assert.AreEqual(new byte[] { 0x80 }, PetitionScript.RequestPetitionCancel());
        }
    }
}
