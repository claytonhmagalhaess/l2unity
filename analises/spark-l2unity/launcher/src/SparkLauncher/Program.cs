using System;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SparkLauncher;

internal static class Program
{
	private static Mutex unico;

	[STAThread]
	private static int Main(string[] args)
	{
		Args.Lista = args.ToList();
		Preferencias.Carrega();
		string text = Args.Valor("--lang");
		if (text != null)
		{
			L.Pt = text.StartsWith("pt", StringComparison.OrdinalIgnoreCase);
		}
		Atualizador.LimpaLauncherVelho();
		bool flag = Args.Tem("--verificar") || Args.Tem("--atualizar") || Args.Tem("--reparar") || Args.Tem("--jogar");
		if (flag)
		{
			Log.LigaConsole();
		}
		unico = new Mutex(initiallyOwned: false, "Local\\SparkInfinityLauncher_" + ((uint)Config.Raiz.ToLowerInvariant().GetHashCode()).ToString("x8"));
		bool flag2;
		try
		{
			flag2 = unico.WaitOne(Args.Tem("--atualizado") ? 20000 : 0);
		}
		catch (AbandonedMutexException)
		{
			flag2 = true;
		}
		if (!flag2)
		{
			if (flag)
			{
				Log.Escreve("outro launcher ja esta aberto nesta pasta");
				return 3;
			}
			TrazJanelaAberta();
			return 3;
		}
		Log.Escreve("Infinity Launcher " + Config.VersaoTexto + " em " + Config.Raiz + ((args.Length != 0) ? (" [" + string.Join(" ", args) + "]") : ""));
		if (flag)
		{
			return Cli().GetAwaiter().GetResult();
		}
		Application.EnableVisualStyles();
		Application.SetCompatibleTextRenderingDefault(defaultValue: false);
		Application.ThreadException += delegate(object s, ThreadExceptionEventArgs e)
		{
			Log.Escreve("erro na tela: " + e.Exception);
		};
		AppDomain.CurrentDomain.UnhandledException += delegate(object s, UnhandledExceptionEventArgs e)
		{
			Log.Escreve("erro fatal: " + e.ExceptionObject);
		};
		Application.Run(new Janela());
		return 0;
	}

	private static void TrazJanelaAberta()
	{
		Process[] processesByName = Process.GetProcessesByName(Path.GetFileNameWithoutExtension(Config.Exe));
		foreach (Process process in processesByName)
		{
			if (process.Id != Process.GetCurrentProcess().Id && !(process.MainWindowHandle == IntPtr.Zero))
			{
				Janela.Mostra(process.MainWindowHandle);
			}
		}
	}

	public static void ConferePasta()
	{
		string raiz = Config.Raiz;
		if (raiz.IndexOf("\\AppData\\Local\\Temp\\", StringComparison.OrdinalIgnoreCase) >= 0)
		{
			throw new ErroLauncher(L.T("The launcher is running from a temporary folder (inside a zip?). Extract it to a folder like C:\\Games\\Infinity first.", "O launcher está rodando numa pasta temporária (dentro de um zip?). Extraia para uma pasta como C:\\Jogos\\Infinity primeiro."));
		}
		try
		{
			Directory.CreateDirectory(Config.Dados);
			string path = Path.Combine(Config.Dados, "escrita.tmp");
			File.WriteAllText(path, "ok");
			File.Delete(path);
		}
		catch (Exception ex) when (ex is UnauthorizedAccessException || ex is IOException)
		{
			throw new ErroLauncher(L.T("This folder is protected (" + raiz + "). Move InfinityLauncher.exe to a folder like C:\\Games\\Infinity and open it again.", "Esta pasta é protegida (" + raiz + "). Mova o InfinityLauncher.exe para uma pasta como C:\\Jogos\\Infinity e abra de novo."), ex);
		}
	}

	public static Process Jogar(Atualizador at, string exe)
	{
		string text = at.Local(string.IsNullOrEmpty(exe) ? "L2.exe" : exe);
		if (!File.Exists(text))
		{
			throw new ErroLauncher(L.T("The game is not installed yet.", "O jogo ainda não está instalado."));
		}
		string text2 = Grafico.ArgumentoParaAbrir(Path.GetDirectoryName(text));
		Process process = Process.Start(new ProcessStartInfo(text, text2)
		{
			WorkingDirectory = Path.GetDirectoryName(text),
			UseShellExecute = false
		});
		Log.Escreve("jogo aberto: pid " + process.Id + " " + text2);
		return process;
	}

	private static async Task<int> Cli()
	{
		CancellationToken ct = CancellationToken.None;
		Stopwatch relogio = Stopwatch.StartNew();
		try
		{
			ConferePasta();
			Atualizador at = new Atualizador(Config.Raiz);
			Manifesto m = await Atualizador.BuscaManifesto(Args.Valor("--manifest"), ct);
			Log.Escreve("versao do cliente no servidor " + m.Versao + ", " + m.Arquivos.Count + " arquivos, " + Formata.Bytes(m.TotalBytes) + "; instalada " + (at.VersaoInstalada() ?? "nenhuma"));
			if (Atualizador.LauncherNovo(m))
			{
				await at.AtualizaLauncher(m, ct);
				return 0;
			}
			if (Args.Tem("--jogar"))
			{
				Console.WriteLine(Jogar(at, m.Exe).Id);
				return 0;
			}
			bool completa = Args.Tem("--reparar");
			Plano plano = await Task.Run(() => at.Confere(m, completa, ct));
			Log.Escreve("conferencia " + (completa ? "completa" : "rapida") + " em " + relogio.Elapsed.TotalSeconds.ToString("0.00", CultureInfo.InvariantCulture) + " s: baixar " + plano.Baixar.Count + " (" + Formata.Bytes(plano.Bytes) + "), apagar " + plano.Apagar.Count);
			foreach (ArquivoJogo item in plano.Baixar.Take(20))
			{
				Log.Escreve("  falta: " + item.Caminho);
			}
			if (Args.Tem("--verificar"))
			{
				return (!plano.Vazio) ? 2 : 0;
			}
			if (plano.Vazio)
			{
				Log.Escreve("tudo em dia");
				return 0;
			}
			Stopwatch inicio = Stopwatch.StartNew();
			long redeAntes = at.Rede;
			CancellationTokenSource parar = new CancellationTokenSource();
			try
			{
				Task relato = Task.Run(async delegate
				{
					while (!parar.IsCancellationRequested)
					{
						try
						{
							await Task.Delay(2000, parar.Token);
						}
						catch
						{
							break;
						}
						double b = (double)(at.Rede - redeAntes) / Math.Max(0.001, inicio.Elapsed.TotalSeconds);
						Log.Escreve(string.Format(CultureInfo.InvariantCulture, "  {0}: {1} / {2}, {3}/{4} arquivos, media {5}/s  [{6}]", at.Fase, Formata.Bytes(at.Feito), Formata.Bytes(at.Total), at.ArqFeitos, at.ArqTotal, Formata.Bytes(b), at.Detalhe));
					}
				});
				await at.Executa(m, plano, ct);
				parar.Cancel();
				await relato;
			}
			finally
			{
				if (parar != null)
				{
					((IDisposable)parar).Dispose();
				}
			}
			double totalSeconds = inicio.Elapsed.TotalSeconds;
			double num = at.Rede - redeAntes;
			Log.Escreve(string.Format(CultureInfo.InvariantCulture, "baixado {0} em {1:0.0} s ({2}/s)", Formata.Bytes(num), totalSeconds, Formata.Bytes(num / Math.Max(0.001, totalSeconds))));
			Plano plano2 = await Task.Run(() => at.Confere(m, completa: false, ct));
			Log.Escreve(plano2.Vazio ? ("OK: pasta igual ao manifest " + m.Versao) : ("ainda falta " + plano2.Baixar.Count));
			return (!plano2.Vazio) ? 1 : 0;
		}
		catch (ErroLauncher erroLauncher)
		{
			Log.Escreve("ERRO: " + erroLauncher.Message + ((erroLauncher.InnerException != null) ? (" | " + erroLauncher.InnerException.Message) : ""));
			return 1;
		}
		catch (Exception ex)
		{
			Log.Escreve("ERRO inesperado: " + ex);
			return 1;
		}
	}
}
