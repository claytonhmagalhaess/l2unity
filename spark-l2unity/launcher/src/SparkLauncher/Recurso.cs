using System.Drawing;
using System.IO;
using System.Reflection;

namespace SparkLauncher;

internal static class Recurso
{
	public static Stream Abre(string nome)
	{
		return Assembly.GetExecutingAssembly().GetManifestResourceStream(nome);
	}

	public static Bitmap Imagem(string nome)
	{
		using Stream stream = Abre(nome);
		if (stream == null)
		{
			return null;
		}
		using Bitmap original = new Bitmap(stream);
		return new Bitmap(original);
	}

	public static byte[] Bytes(string nome)
	{
		using Stream stream = Abre(nome);
		using MemoryStream memoryStream = new MemoryStream();
		stream.CopyTo(memoryStream);
		return memoryStream.ToArray();
	}
}
