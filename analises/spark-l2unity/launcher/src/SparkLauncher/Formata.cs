using System;
using System.Globalization;

namespace SparkLauncher;

internal static class Formata
{
	private static CultureInfo C
	{
		get
		{
			if (!L.Pt)
			{
				return CultureInfo.InvariantCulture;
			}
			return new CultureInfo("pt-BR");
		}
	}

	public static string Bytes(double b)
	{
		if (b < 1024.0)
		{
			return b.ToString("0", C) + " B";
		}
		if (b < 1048576.0)
		{
			return (b / 1024.0).ToString("0", C) + " KB";
		}
		if (b < 1073741824.0)
		{
			return (b / 1024.0 / 1024.0).ToString("0.0", C) + " MB";
		}
		return (b / 1024.0 / 1024.0 / 1024.0).ToString("0.00", C) + " GB";
	}

	public static string Tempo(double s)
	{
		if (double.IsNaN(s) || double.IsInfinity(s) || s < 0.0)
		{
			return "--";
		}
		if (s < 60.0)
		{
			return Math.Ceiling(s) + " s";
		}
		if (s < 3600.0)
		{
			return (int)(s / 60.0) + " min " + ((int)(s % 60.0)).ToString("00") + " s";
		}
		return (int)(s / 3600.0) + " h " + ((int)(s % 3600.0 / 60.0)).ToString("00") + " min";
	}
}
