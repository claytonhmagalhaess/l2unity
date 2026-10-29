using System.Collections.Generic;
using System.Text;

namespace SparkLauncher;

internal static class Args
{
	public static List<string> Lista = new List<string>();

	public static bool Tem(string a)
	{
		return Lista.Contains(a);
	}

	public static string Valor(string a)
	{
		int num = Lista.IndexOf(a);
		if (num < 0 || num + 1 >= Lista.Count)
		{
			return null;
		}
		return Lista[num + 1];
	}

	public static string Linha(params string[] extra)
	{
		StringBuilder stringBuilder = new StringBuilder();
		List<string> list = new List<string>(Lista);
		foreach (string item in extra)
		{
			if (!list.Contains(item))
			{
				list.Add(item);
			}
		}
		foreach (string item2 in list)
		{
			if (stringBuilder.Length > 0)
			{
				stringBuilder.Append(' ');
			}
			stringBuilder.Append((item2.IndexOf(' ') >= 0 || item2.Length == 0) ? ("\"" + item2 + "\"") : item2);
		}
		return stringBuilder.ToString();
	}
}
