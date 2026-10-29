using System;
using System.IO;
using System.Runtime.InteropServices;

namespace SparkLauncher;

internal static class Nativo
{
	private const int MOVEFILE_REPLACE_EXISTING = 1;

	private const int MOVEFILE_WRITE_THROUGH = 8;

	[DllImport("kernel32.dll", CharSet = CharSet.Unicode, SetLastError = true)]
	private static extern bool MoveFileEx(string de, string para, int flags);

	public static void Troca(string de, string para)
	{
		if (!MoveFileEx(de, para, 9))
		{
			int lastWin32Error = Marshal.GetLastWin32Error();
			if (lastWin32Error == 32 || lastWin32Error == 5 || lastWin32Error == 33)
			{
				throw new ErroLauncher(L.T("A game file is in use (", "Um arquivo do jogo está em uso (") + Path.GetFileName(para) + L.T("). Close Infinity and try again.", "). Feche o Infinity e tente de novo."));
			}
			throw new IOException("Could not replace " + para + " (Windows error " + lastWin32Error + ").");
		}
	}

	public static bool DiscoCheio(Exception e)
	{
		int num = e.HResult & 0xFFFF;
		if (e is IOException)
		{
			if (num != 112)
			{
				return num == 39;
			}
			return true;
		}
		return false;
	}
}
