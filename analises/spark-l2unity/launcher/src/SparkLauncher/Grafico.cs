using System;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text;

namespace SparkLauncher;

internal static class Grafico
{
	public static readonly string[] Nomes = new string[3] { "DirectX 11", "DirectX 12", "Vulkan" };

	private static readonly string[] Chaves = new string[3] { "dx11", "dx12", "vulkan" };

	private static readonly string[] Argumentos = new string[3] { "-force-d3d11", "-force-d3d12", "-force-vulkan" };

	public const int SegundosParaFalha = 20;

	private static string Arquivo(string pasta)
	{
		return Path.Combine(pasta, "grafico.txt");
	}

	private static string Teste(string pasta)
	{
		return Path.Combine(pasta, "grafico_teste.txt");
	}

	public static string PastaDoJogo(string exe)
	{
		return Path.GetDirectoryName(Path.Combine(Config.Raiz, string.IsNullOrEmpty(exe) ? "L2.exe" : exe));
	}

	public static int Le(string pasta)
	{
		try
		{
			if (!File.Exists(Arquivo(pasta)))
			{
				return 0;
			}
			string[] array = File.ReadAllLines(Arquivo(pasta));
			for (int i = 0; i < array.Length; i++)
			{
				string text = array[i].Trim();
				if (text.StartsWith("api=", StringComparison.OrdinalIgnoreCase))
				{
					int num = Array.IndexOf(Chaves, text.Substring(4).Trim().ToLowerInvariant());
					return (num >= 0) ? num : 0;
				}
			}
		}
		catch
		{
		}
		return 0;
	}

	public static void Grava(string pasta, int api)
	{
		try
		{
			if (api < 0 || api >= Chaves.Length)
			{
				api = 0;
			}
			Directory.CreateDirectory(pasta);
			File.WriteAllText(Arquivo(pasta), "api=" + Chaves[api] + "\r\n", Encoding.ASCII);
			Log.Escreve("API grafica: " + Nomes[api]);
		}
		catch (Exception ex)
		{
			Log.Escreve("API grafica: nao gravou (" + ex.Message + ")");
		}
	}

	public static string ArgumentoParaAbrir(string pasta)
	{
		int num = Le(pasta);
		try
		{
			if (num != 0)
			{
				File.WriteAllText(Teste(pasta), Chaves[num], Encoding.ASCII);
			}
			else if (File.Exists(Teste(pasta)))
			{
				File.Delete(Teste(pasta));
			}
		}
		catch
		{
		}
		return Argumentos[num];
	}

	public static string ConfereFalha(string pasta, string exe)
	{
		try
		{
			if (!File.Exists(Teste(pasta)))
			{
				return null;
			}
			if (JogoAberto(exe))
			{
				return null;
			}
			int num = Array.IndexOf(Chaves, File.ReadAllText(Teste(pasta)).Trim().ToLowerInvariant());
			File.Delete(Teste(pasta));
			if (num <= 0)
			{
				return null;
			}
			Grava(pasta, 0);
			Log.Escreve("API grafica: " + Nomes[num] + " nao abriu, voltou para DirectX 11");
			return L.T(Nomes[num] + " could not start the game on this PC, so the graphics API is back on DirectX 11.\n\nYou can try again in the gear menu > Graphics API.", "O " + Nomes[num] + " não conseguiu abrir o jogo neste PC, então a API gráfica voltou para DirectX 11.\n\nVocê pode tentar de novo na engrenagem > API gráfica.");
		}
		catch
		{
			return null;
		}
	}

	private static bool JogoAberto(string exe)
	{
		try
		{
			return Process.GetProcessesByName(Path.GetFileNameWithoutExtension(string.IsNullOrEmpty(exe) ? "L2.exe" : exe)).Any();
		}
		catch
		{
			return false;
		}
	}
}
