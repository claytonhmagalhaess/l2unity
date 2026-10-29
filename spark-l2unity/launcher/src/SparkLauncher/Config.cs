using System;
using System.Diagnostics;
using System.IO;
using System.Reflection;

namespace SparkLauncher;

internal static class Config
{
	public const string Site = "https://l2spark.vercel.app";

	public const string LauncherJson = "https://l2spark.vercel.app/launcher.json";

	public const string ManifestReserva = "https://pub-b1817e859aff494da9f49d01ee0d9e35.r2.dev/manifest.json";

	public const string Noticias = "https://l2spark.vercel.app/news.json";

	public const string PaginaNoticia = "https://l2spark.vercel.app/news.html#";

	public const string Discord = "https://discord.gg/v7xnsd9dXW";

	public const string YouTube = "https://www.youtube.com/@projectsparkl2";

	public const string Facebook = "https://www.facebook.com/l2jspark/";

	public const string NomePastaDados = "Launcher";

	public static Version Versao => Assembly.GetExecutingAssembly().GetName().Version;

	public static string VersaoTexto => Versao.ToString(3);

	public static string Exe => Process.GetCurrentProcess().MainModule.FileName;

	public static string Raiz => Path.GetDirectoryName(Exe);

	public static string Dados => Path.Combine(Raiz, "Launcher");
}
