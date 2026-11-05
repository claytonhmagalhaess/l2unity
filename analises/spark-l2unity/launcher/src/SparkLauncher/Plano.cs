using System.Collections.Generic;
using System.Linq;

namespace SparkLauncher;

internal class Plano
{
	public List<ArquivoJogo> Baixar = new List<ArquivoJogo>();

	public List<string> Apagar = new List<string>();

	public long Bytes => Baixar.Sum((ArquivoJogo a) => a.Tamanho);

	public bool Vazio
	{
		get
		{
			if (Baixar.Count == 0)
			{
				return Apagar.Count == 0;
			}
			return false;
		}
	}
}
