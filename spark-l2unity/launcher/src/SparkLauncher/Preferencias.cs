using System.Globalization;
using System.IO;

namespace SparkLauncher;

internal static class Preferencias
{
	public static bool FecharAoJogar;

	private static string Arq => Path.Combine(Config.Dados, "settings.txt");

	public static void Carrega()
	{
		L.Pt = CultureInfo.CurrentUICulture.TwoLetterISOLanguageName == "pt";
		try
		{
			if (!File.Exists(Arq))
			{
				return;
			}
			string[] array = File.ReadAllLines(Arq);
			for (int i = 0; i < array.Length; i++)
			{
				string[] array2 = array[i].Split(new char[1] { '=' }, 2);
				if (array2.Length == 2)
				{
					if (array2[0] == "lang")
					{
						L.Pt = array2[1].Trim() == "pt";
					}
					if (array2[0] == "close")
					{
						FecharAoJogar = array2[1].Trim() == "1";
					}
				}
			}
		}
		catch
		{
		}
	}

	public static void Salva()
	{
		try
		{
			Directory.CreateDirectory(Config.Dados);
			File.WriteAllText(Arq, "lang=" + (L.Pt ? "pt" : "en") + "\r\nclose=" + (FecharAoJogar ? "1" : "0") + "\r\n");
		}
		catch
		{
		}
	}
}
