using System;
using System.IO;
using System.Runtime.InteropServices;
using System.Text;

namespace SparkLauncher;

internal static class Log
{
	private static readonly object trava = new object();

	private static bool console;

	[DllImport("kernel32.dll")]
	private static extern bool AttachConsole(int pid);

	public static void LigaConsole()
	{
		try
		{
			console = AttachConsole(-1);
		}
		catch
		{
		}
	}

	public static void Escreve(string texto)
	{
		string text = DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss.fff") + "  " + texto;
		lock (trava)
		{
			try
			{
				Directory.CreateDirectory(Config.Dados);
				string text2 = Path.Combine(Config.Dados, "launcher.log");
				FileInfo fileInfo = new FileInfo(text2);
				if (fileInfo.Exists && fileInfo.Length > 2097152)
				{
					File.Delete(text2);
				}
				File.AppendAllText(text2, text + Environment.NewLine, Encoding.UTF8);
			}
			catch
			{
			}
			if (console)
			{
				try
				{
					Console.WriteLine(texto);
					return;
				}
				catch
				{
					return;
				}
			}
		}
	}
}
