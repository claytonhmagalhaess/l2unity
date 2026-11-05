namespace SparkLauncher;

internal static class L
{
	public static bool Pt;

	public static string T(string en, string pt)
	{
		if (!Pt)
		{
			return en;
		}
		return pt;
	}
}
