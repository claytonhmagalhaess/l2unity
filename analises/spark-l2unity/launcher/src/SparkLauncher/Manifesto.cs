using System.Collections.Generic;
using System.Linq;

namespace SparkLauncher;

internal class Manifesto
{
	public string Url;

	public string Versao;

	public string Base;

	public string Exe = "L2.exe";

	public string LauncherVersao;

	public string LauncherUrl;

	public string LauncherSha;

	public List<ArquivoJogo> Arquivos = new List<ArquivoJogo>();

	public List<string> Apagar = new List<string>();

	public long TotalBytes => Arquivos.Sum((ArquivoJogo a) => a.Tamanho);
}
