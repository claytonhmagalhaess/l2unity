// #0047: itens do SystemMenuWnd que abriam nada. BoardWnd.uc ShowBBSTab (:140-185), HelpHtmlWnd.uc (LoadHtml do FilePath) e
// UserPetitionWnd.uc (OnClickOKButton e os PetitionCategoryLink).
using L2Web.UI;
using NUnit.Framework;

namespace L2Web.Tests
{
    public class SystemMenuTests
    {
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
