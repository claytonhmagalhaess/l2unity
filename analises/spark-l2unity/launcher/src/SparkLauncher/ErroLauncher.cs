using System;

namespace SparkLauncher;

internal class ErroLauncher : Exception
{
	public ErroLauncher(string msg, Exception inner = null)
		: base(msg, inner)
	{
	}
}
