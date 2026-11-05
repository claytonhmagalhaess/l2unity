using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Security.Cryptography;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Web.Script.Serialization;

namespace SparkLauncher;

internal class Atualizador
{
	private struct EntradaCache
	{
		public long Tamanho;

		public long Data;

		public string Sha;
	}

	public const int Paralelos = 4;

	public const int ParalelosMiudos = 12;

	public const long Miudo = 1048576L;

	public const long Grande = 268435456L;

	private const int Tentativas = 5;

	private static readonly TimeSpan SemDados = TimeSpan.FromSeconds(30.0);

	public static readonly HttpClient Http = CriaHttp();

	public readonly string Raiz;

	private readonly string arqCache;

	private readonly Dictionary<string, EntradaCache> cache = new Dictionary<string, EntradaCache>(StringComparer.OrdinalIgnoreCase);

	private readonly object travaCache = new object();

	public volatile string Fase = "";

	public volatile string Detalhe = "";

	public long Feito;

	public long Total;

	public long Rede;

	public int ArqFeitos;

	public int ArqTotal;

	private string ArqVersao => Path.Combine(Raiz, "Launcher", "version.txt");

	public Atualizador(string raiz)
	{
		Raiz = Path.GetFullPath(raiz);
		arqCache = Path.Combine(Raiz, "Launcher", "cache.tsv");
		CarregaCache();
	}

	private static HttpClient CriaHttp()
	{
		//IL_001d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0022: Unknown result type (might be due to invalid IL or missing references)
		//IL_0029: Unknown result type (might be due to invalid IL or missing references)
		//IL_0035: Expected O, but got Unknown
		//IL_0030: Unknown result type (might be due to invalid IL or missing references)
		//IL_0035: Unknown result type (might be due to invalid IL or missing references)
		//IL_0040: Unknown result type (might be due to invalid IL or missing references)
		//IL_0065: Expected O, but got Unknown
		ServicePointManager.SecurityProtocol |= SecurityProtocolType.Tls12 | SecurityProtocolType.Tls13;
		ServicePointManager.DefaultConnectionLimit = 16;
		ServicePointManager.Expect100Continue = false;
		HttpClient val = new HttpClient((HttpMessageHandler)new HttpClientHandler
		{
			AutomaticDecompression = (DecompressionMethods.GZip | DecompressionMethods.Deflate),
			UseCookies = false
		})
		{
			Timeout = Timeout.InfiniteTimeSpan
		};
		val.DefaultRequestHeaders.UserAgent.ParseAdd("ProjectSPARK-Launcher/" + Config.VersaoTexto + " (Windows)");
		return val;
	}

	public static async Task<string> BaixaTexto(string url, CancellationToken ct, int segundos = 20)
	{
		using CancellationTokenSource cts = CancellationTokenSource.CreateLinkedTokenSource(ct);
		cts.CancelAfter(TimeSpan.FromSeconds(segundos));
		HttpRequestMessage val = new HttpRequestMessage(HttpMethod.Get, url);
		val.Headers.CacheControl = new CacheControlHeaderValue
		{
			NoCache = true
		};
		HttpResponseMessage r = await ((HttpMessageInvoker)Http).SendAsync(val, cts.Token).ConfigureAwait(continueOnCapturedContext: false);
		try
		{
			if (!r.IsSuccessStatusCode)
			{
				throw new HttpRequestException("HTTP " + (int)r.StatusCode + " at " + url);
			}
			byte[] bytes = await r.Content.ReadAsByteArrayAsync().ConfigureAwait(continueOnCapturedContext: false);
			return Encoding.UTF8.GetString(bytes);
		}
		finally
		{
			((IDisposable)r)?.Dispose();
		}
	}

	private static string SemCache(string url)
	{
		return url + (url.Contains("?") ? "&" : "?") + "t=" + DateTime.UtcNow.Ticks;
	}

	public static async Task<Manifesto> BuscaManifesto(string forcado, CancellationToken ct)
	{
		string url = forcado;
		if (string.IsNullOrEmpty(url))
		{
			try
			{
				JavaScriptSerializer javaScriptSerializer = Json();
				Dictionary<string, object> dictionary = (Dictionary<string, object>)javaScriptSerializer.DeserializeObject(await BaixaTexto(SemCache("https://l2spark.vercel.app/launcher.json"), ct, 15).ConfigureAwait(continueOnCapturedContext: false));
				url = (string)dictionary["manifest"];
			}
			catch (Exception ex) when (!ct.IsCancellationRequested)
			{
				Log.Escreve("launcher.json falhou (" + ex.Message + "), usando o endereco de reserva");
				url = "https://pub-b1817e859aff494da9f49d01ee0d9e35.r2.dev/manifest.json";
			}
		}
		string texto;
		try
		{
			texto = await BaixaTexto(SemCache(url), ct, 30).ConfigureAwait(continueOnCapturedContext: false);
		}
		catch (Exception ex2) when (!ct.IsCancellationRequested)
		{
			Log.Escreve("manifest falhou: " + url + " -> " + ex2);
			throw new ErroLauncher(L.T("Could not reach the update server. Check your internet connection.", "Não foi possível falar com o servidor de atualização. Verifique sua internet."), ex2);
		}
		Log.Escreve("manifest: " + url);
		return LeManifesto(texto, url);
	}

	public static JavaScriptSerializer Json()
	{
		return new JavaScriptSerializer
		{
			MaxJsonLength = int.MaxValue,
			RecursionLimit = 64
		};
	}

	private static Manifesto LeManifesto(string texto, string url)
	{
		try
		{
			Dictionary<string, object> dictionary = (Dictionary<string, object>)Json().DeserializeObject(texto);
			Manifesto manifesto = new Manifesto
			{
				Url = url,
				Versao = Convert.ToString(dictionary["version"], CultureInfo.InvariantCulture)
			};
			manifesto.Base = new Uri(new Uri(url), (string)dictionary["base"]).AbsoluteUri;
			if (!manifesto.Base.EndsWith("/"))
			{
				manifesto.Base += "/";
			}
			if (dictionary.TryGetValue("exe", out var value) && value is string { Length: >0 } text)
			{
				manifesto.Exe = text;
			}
			if (dictionary.TryGetValue("launcher", out var value2) && value2 is Dictionary<string, object> dictionary2)
			{
				manifesto.LauncherVersao = (string)dictionary2["version"];
				manifesto.LauncherUrl = new Uri(new Uri(url), (string)dictionary2["url"]).AbsoluteUri;
				manifesto.LauncherSha = ((string)dictionary2["sha256"]).ToLowerInvariant();
			}
			object[] array = (object[])dictionary["files"];
			for (int i = 0; i < array.Length; i++)
			{
				Dictionary<string, object> dictionary3 = (Dictionary<string, object>)array[i];
				ArquivoJogo arquivoJogo = new ArquivoJogo
				{
					Caminho = (string)dictionary3["path"],
					Tamanho = Convert.ToInt64(dictionary3["size"], CultureInfo.InvariantCulture),
					Sha = ((string)dictionary3["sha256"]).ToLowerInvariant()
				};
				CaminhoSeguro(arquivoJogo.Caminho);
				manifesto.Arquivos.Add(arquivoJogo);
			}
			if (dictionary.TryGetValue("delete", out var value3) && value3 is object[] array2)
			{
				array = array2;
				for (int i = 0; i < array.Length; i++)
				{
					string text2 = (string)array[i];
					CaminhoSeguro(text2);
					manifesto.Apagar.Add(text2);
				}
			}
			return manifesto;
		}
		catch (ErroLauncher)
		{
			throw;
		}
		catch (Exception inner)
		{
			throw new ErroLauncher(L.T("The update server sent an invalid file list. Try again later.", "O servidor de atualização mandou uma lista inválida. Tente mais tarde."), inner);
		}
	}

	private static void CaminhoSeguro(string p)
	{
		if (string.IsNullOrWhiteSpace(p) || p.StartsWith("/") || p.StartsWith("\\") || p.Contains(":") || p.Split('/', '\\').Any((string s) => s == ".." || s == "." || s.Length == 0) || p.Equals(Path.GetFileName(Config.Exe), StringComparison.OrdinalIgnoreCase) || p.StartsWith("Launcher/", StringComparison.OrdinalIgnoreCase))
		{
			throw new ErroLauncher(L.T("The update server sent an invalid path: ", "O servidor de atualização mandou um caminho inválido: ") + p);
		}
	}

	public string Local(string rel)
	{
		return Path.Combine(Raiz, rel.Replace('/', '\\'));
	}

	private void CarregaCache()
	{
		try
		{
			if (!File.Exists(arqCache))
			{
				return;
			}
			string[] array = File.ReadAllLines(arqCache, Encoding.UTF8);
			for (int i = 0; i < array.Length; i++)
			{
				string[] array2 = array[i].Split('\t');
				if (array2.Length == 4)
				{
					cache[array2[0]] = new EntradaCache
					{
						Tamanho = long.Parse(array2[1]),
						Data = long.Parse(array2[2]),
						Sha = array2[3]
					};
				}
			}
		}
		catch (Exception ex)
		{
			Log.Escreve("cache ilegivel, ignorado: " + ex.Message);
			cache.Clear();
		}
	}

	public void SalvaCache()
	{
		lock (travaCache)
		{
			try
			{
				Directory.CreateDirectory(Path.GetDirectoryName(arqCache));
				StringBuilder stringBuilder = new StringBuilder();
				foreach (KeyValuePair<string, EntradaCache> item in cache)
				{
					stringBuilder.Append(item.Key).Append('\t').Append(item.Value.Tamanho)
						.Append('\t')
						.Append(item.Value.Data)
						.Append('\t')
						.Append(item.Value.Sha)
						.Append('\n');
				}
				File.WriteAllText(arqCache + ".tmp", stringBuilder.ToString(), new UTF8Encoding(encoderShouldEmitUTF8Identifier: false));
				Nativo.Troca(arqCache + ".tmp", arqCache);
			}
			catch (Exception ex)
			{
				Log.Escreve("nao salvou o cache: " + ex.Message);
			}
		}
	}

	private void Anota(string rel, string sha)
	{
		FileInfo fileInfo = new FileInfo(Local(rel));
		lock (travaCache)
		{
			cache[rel] = new EntradaCache
			{
				Tamanho = fileInfo.Length,
				Data = fileInfo.LastWriteTimeUtc.Ticks,
				Sha = sha
			};
		}
	}

	private void MigraPastaDoJogo(Manifesto m)
	{
		string text = Path.Combine(Raiz, Path.GetFileNameWithoutExtension(m.Exe) + "_Data");
		string[] array = new string[1] { "Infinity.exe" };
		foreach (string text2 in array)
		{
			if (text2.Equals(m.Exe, StringComparison.OrdinalIgnoreCase))
			{
				continue;
			}
			string prefixoVelho = Path.GetFileNameWithoutExtension(text2) + "_Data";
			string text3 = Path.Combine(Raiz, prefixoVelho);
			if (!Directory.Exists(text3) || Directory.Exists(text))
			{
				continue;
			}
			try
			{
				Directory.Move(text3, text);
			}
			catch (IOException inner)
			{
				throw new ErroLauncher(L.T("Could not rename the game folder. Close Infinity and try again.", "Não foi possível renomear a pasta do jogo. Feche o Infinity e tente de novo."), inner);
			}
			string fileName = Path.GetFileName(text);
			lock (travaCache)
			{
				foreach (string item in cache.Keys.Where((string k) => k.StartsWith(prefixoVelho + "/", StringComparison.OrdinalIgnoreCase)).ToList())
				{
					cache[fileName + item.Substring(prefixoVelho.Length)] = cache[item];
					cache.Remove(item);
				}
			}
			SalvaCache();
			try
			{
				File.Delete(Path.Combine(Raiz, text2));
			}
			catch
			{
			}
			Log.Escreve("pasta do jogo renomeada: " + prefixoVelho + " -> " + fileName);
		}
	}

	public Plano Confere(Manifesto m, bool completa, CancellationToken ct)
	{
		MigraPastaDoJogo(m);
		Plano plano = new Plano();
		List<ArquivoJogo> list = new List<ArquivoJogo>();
		foreach (ArquivoJogo arquivo in m.Arquivos)
		{
			FileInfo fileInfo = new FileInfo(Local(arquivo.Caminho));
			if (!fileInfo.Exists || fileInfo.Length != arquivo.Tamanho)
			{
				plano.Baixar.Add(arquivo);
				continue;
			}
			bool flag;
			EntradaCache value;
			lock (travaCache)
			{
				flag = cache.TryGetValue(arquivo.Caminho, out value);
			}
			if (!completa && flag && value.Tamanho == fileInfo.Length && value.Data == fileInfo.LastWriteTimeUtc.Ticks)
			{
				if (value.Sha != arquivo.Sha)
				{
					plano.Baixar.Add(arquivo);
				}
			}
			else
			{
				list.Add(arquivo);
			}
		}
		Fase = (completa ? L.T("Verifying all game files", "Verificando todos os arquivos") : L.T("Checking game files", "Conferindo arquivos"));
		Total = list.Sum((ArquivoJogo a) => a.Tamanho);
		Feito = 0L;
		ArqTotal = list.Count;
		ArqFeitos = 0;
		if (list.Count > 0)
		{
			Log.Escreve(Fase + ": " + list.Count + " arquivos, " + Formata.Bytes(Total));
		}
		byte[] buffer = new byte[1048576];
		foreach (ArquivoJogo item in list)
		{
			ct.ThrowIfCancellationRequested();
			Detalhe = item.Caminho;
			string text = HashArquivo(Local(item.Caminho), buffer, ct);
			Anota(item.Caminho, text);
			if (text != item.Sha)
			{
				plano.Baixar.Add(item);
				Log.Escreve("diferente: " + item.Caminho);
			}
			ArqFeitos++;
		}
		HashSet<string> hashSet = new HashSet<string>(m.Arquivos.Select((ArquivoJogo a) => a.Caminho), StringComparer.OrdinalIgnoreCase);
		foreach (string item2 in m.Apagar)
		{
			if (!hashSet.Contains(item2) && File.Exists(Local(item2)))
			{
				plano.Apagar.Add(item2);
			}
		}
		SalvaCache();
		if (plano.Vazio)
		{
			GravaVersaoInstalada(m.Versao);
		}
		Detalhe = "";
		return plano;
	}

	private string HashArquivo(string caminho, byte[] buffer, CancellationToken ct)
	{
		using SHA256Cng sHA256Cng = new SHA256Cng();
		using FileStream fileStream = new FileStream(caminho, FileMode.Open, FileAccess.Read, FileShare.Read, 1, FileOptions.SequentialScan);
		int num;
		while ((num = fileStream.Read(buffer, 0, buffer.Length)) > 0)
		{
			ct.ThrowIfCancellationRequested();
			sHA256Cng.TransformBlock(buffer, 0, num, null, 0);
			Interlocked.Add(ref Feito, num);
		}
		sHA256Cng.TransformFinalBlock(buffer, 0, 0);
		return Hex(sHA256Cng.Hash);
	}

	private static string Hex(byte[] h)
	{
		StringBuilder stringBuilder = new StringBuilder(64);
		foreach (byte b in h)
		{
			stringBuilder.Append(b.ToString("x2"));
		}
		return stringBuilder.ToString();
	}

	public long FaltaNoDisco(Plano p)
	{
		return p.Baixar.Sum(delegate(ArquivoJogo a)
		{
			FileInfo fileInfo = new FileInfo(Local(a.Caminho) + ".part");
			return Math.Max(0L, a.Tamanho - (fileInfo.Exists ? fileInfo.Length : 0));
		});
	}

	public void ConfereEspaco(Plano p)
	{
		long num = FaltaNoDisco(p) + 268435456;
		DriveInfo driveInfo = new DriveInfo(Path.GetPathRoot(Raiz));
		if (driveInfo.AvailableFreeSpace < num)
		{
			throw new ErroLauncher(L.T("Not enough disk space on ", "Espaço insuficiente no disco ") + driveInfo.Name + ": " + Formata.Bytes(num) + L.T(" needed, ", " necessários, ") + Formata.Bytes(driveInfo.AvailableFreeSpace) + L.T(" free.", " livres."));
		}
	}

	public async Task Executa(Manifesto m, Plano plano, CancellationToken ct)
	{
		ConfereEspaco(plano);
		Fase = L.T("Updating files", "Atualizando arquivos");
		Total = plano.Bytes;
		Feito = 0L;
		ArqTotal = plano.Baixar.Count;
		ArqFeitos = 0;
		Log.Escreve("baixar: " + plano.Baixar.Count + " arquivos, " + Formata.Bytes(Total) + "; apagar: " + plano.Apagar.Count);
		List<ArquivoJogo> grandes = (from a in plano.Baixar
			where a.Tamanho >= 268435456
			orderby a.Tamanho
			select a).ToList();
		Stopwatch ultimoSalvo = Stopwatch.StartNew();
		CancellationTokenSource paraGrandes = CancellationTokenSource.CreateLinkedTokenSource(ct);
		try
		{
			Task tarefaGrandes = Task.Run(async delegate
			{
				foreach (ArquivoJogo item in grandes)
				{
					await Baixa(m.Base, item, paraGrandes.Token).ConfigureAwait(continueOnCapturedContext: false);
					SalvaCache();
				}
			});
			try
			{
				await Lote(plano.Baixar.Where((ArquivoJogo a) => a.Tamanho < 1048576), 12).ConfigureAwait(continueOnCapturedContext: false);
				await Lote(plano.Baixar.Where((ArquivoJogo a) => a.Tamanho >= 1048576 && a.Tamanho < 268435456), 4).ConfigureAwait(continueOnCapturedContext: false);
			}
			catch
			{
				paraGrandes.Cancel();
				try
				{
					await tarefaGrandes.ConfigureAwait(continueOnCapturedContext: false);
				}
				catch
				{
				}
				throw;
			}
			await tarefaGrandes.ConfigureAwait(continueOnCapturedContext: false);
		}
		finally
		{
			if (paraGrandes != null)
			{
				((IDisposable)paraGrandes).Dispose();
			}
		}
		foreach (string item2 in plano.Apagar)
		{
			try
			{
				File.Delete(Local(item2));
				Log.Escreve("apagado: " + item2);
			}
			catch (Exception inner)
			{
				throw new ErroLauncher(L.T("Could not delete an old file (", "Não foi possível apagar um arquivo antigo (") + item2 + L.T("). Close Infinity and try again.", "). Feche o Infinity e tente de novo."), inner);
			}
			lock (travaCache)
			{
				cache.Remove(item2);
			}
		}
		SalvaCache();
		GravaVersaoInstalada(m.Versao);
		Fase = L.T("Done", "Pronto");
		Detalhe = "";
		async Task Lote(IEnumerable<ArquivoJogo> lista, int paralelos)
		{
			ConcurrentQueue<ArquivoJogo> fila = new ConcurrentQueue<ArquivoJogo>(lista.OrderBy((ArquivoJogo a) => a.Caminho, StringComparer.Ordinal));
			if (fila.IsEmpty)
			{
				return;
			}
			CancellationTokenSource falha = CancellationTokenSource.CreateLinkedTokenSource(ct);
			try
			{
				List<Task> tarefas = (from _ in Enumerable.Range(0, paralelos)
					select Task.Run((Func<Task>)Trabalhador)).ToList();
				try
				{
					await Task.WhenAll(tarefas).ConfigureAwait(continueOnCapturedContext: false);
				}
				catch
				{
					falha.Cancel();
					Exception ex = (from t in tarefas
						where t.IsFaulted
						select t.Exception.InnerException).FirstOrDefault((Exception e) => !(e is OperationCanceledException));
					SalvaCache();
					if (ex != null)
					{
						throw ex;
					}
					throw;
				}
			}
			finally
			{
				if (falha != null)
				{
					((IDisposable)falha).Dispose();
				}
			}
			async Task Trabalhador()
			{
				ArquivoJogo result;
				while (fila.TryDequeue(out result))
				{
					await Baixa(m.Base, result, falha.Token).ConfigureAwait(continueOnCapturedContext: false);
					if (ultimoSalvo.Elapsed.TotalSeconds > 10.0)
					{
						ultimoSalvo.Restart();
						SalvaCache();
					}
				}
			}
		}
	}

	public static string Url(string baseUrl, string rel)
	{
		return baseUrl + string.Join("/", rel.Split('/').Select(Uri.EscapeDataString));
	}

	private Task Baixa(string baseUrl, ArquivoJogo a, CancellationToken ct)
	{
		return BaixaPara(Url(baseUrl, a.Caminho), Local(a.Caminho), a.Tamanho, a.Sha, a.Caminho, ct, anotar: true);
	}

	public async Task BaixaPara(string url, string destino, long tamanho, string shaEsperado, string nome, CancellationToken ct, bool anotar)
	{
		string parte = destino + ".part";
		Directory.CreateDirectory(Path.GetDirectoryName(destino));
		bool recomecou = false;
		long contadoNoTotal = 0L;
		byte[] buffer = new byte[1048576];
		int tentativa = 1;
		while (true)
		{
			ct.ThrowIfCancellationRequested();
			try
			{
				long tem = (File.Exists(parte) ? new FileInfo(parte).Length : 0);
				if (tem > tamanho)
				{
					File.Delete(parte);
					tem = 0L;
				}
				using (SHA256Cng sha = new SHA256Cng())
				{
					if (tem > 0)
					{
						Detalhe = nome + L.T(" (resuming)", " (retomando)");
						Log.Escreve("retomando " + nome + " a partir de " + tem + " bytes (" + Formata.Bytes(tem) + ")");
						using (FileStream fileStream = new FileStream(parte, FileMode.Open, FileAccess.Read, FileShare.Read, 1, FileOptions.SequentialScan))
						{
							int num2;
							for (long num = 0L; num < tem; num += num2)
							{
								if ((num2 = fileStream.Read(buffer, 0, (int)Math.Min(buffer.Length, tem - num))) <= 0)
								{
									break;
								}
								ct.ThrowIfCancellationRequested();
								sha.TransformBlock(buffer, 0, num2, null, 0);
							}
						}
						Interlocked.Add(ref Feito, tem - contadoNoTotal);
						contadoNoTotal = tem;
					}
					Detalhe = nome;
					if (tem < tamanho)
					{
						HttpRequestMessage val = new HttpRequestMessage(HttpMethod.Get, url);
						if (tem > 0)
						{
							val.Headers.Range = new RangeHeaderValue((long?)tem, (long?)null);
						}
						HttpResponseMessage r;
						using (CancellationTokenSource cab = CancellationTokenSource.CreateLinkedTokenSource(ct))
						{
							cab.CancelAfter(SemDados);
							try
							{
								r = await Http.SendAsync(val, (HttpCompletionOption)1, cab.Token).ConfigureAwait(continueOnCapturedContext: false);
							}
							catch (OperationCanceledException) when (!ct.IsCancellationRequested)
							{
								throw new TimeoutException("no answer from server");
							}
						}
						HttpResponseMessage val2 = r;
						try
						{
							using (ct.Register(delegate
							{
								r.Dispose();
							}))
							{
								if (r.StatusCode == HttpStatusCode.RequestedRangeNotSatisfiable)
								{
									File.Delete(parte);
									throw new IOException("range not satisfiable, restarting " + nome);
								}
								if (r.StatusCode == HttpStatusCode.NotFound)
								{
									throw new ErroLauncher(L.T("A game file is missing on the update server (", "Falta um arquivo no servidor de atualização (") + nome + L.T("). Try again later.", "). Tente mais tarde."));
								}
								if (!r.IsSuccessStatusCode)
								{
									throw new HttpRequestException("HTTP " + (int)r.StatusCode + " for " + nome);
								}
								int num3;
								if (tem > 0 && r.StatusCode == HttpStatusCode.PartialContent)
								{
									ContentRangeHeaderValue contentRange = r.Content.Headers.ContentRange;
									num3 = ((contentRange != null && contentRange.From == tem) ? 1 : 0);
								}
								else
								{
									num3 = 0;
								}
								bool flag = (byte)num3 != 0;
								if (tem > 0 && !flag)
								{
									Log.Escreve("servidor nao retomou " + nome + " (HTTP " + (int)r.StatusCode + "), do zero");
									sha.Initialize();
									Interlocked.Add(ref Feito, -contadoNoTotal);
									contadoNoTotal = 0L;
									tem = 0L;
								}
								using (Stream rede = await r.Content.ReadAsStreamAsync().ConfigureAwait(continueOnCapturedContext: false))
								{
									using FileStream fs = new FileStream(parte, (tem > 0) ? FileMode.Append : FileMode.Create, FileAccess.Write, FileShare.Read, 1);
									while (tem < tamanho)
									{
										Task<int> leitura = rede.ReadAsync(buffer, 0, buffer.Length, ct);
										if (await Task.WhenAny(leitura, Task.Delay(SemDados, ct)).ConfigureAwait(continueOnCapturedContext: false) != leitura)
										{
											ct.ThrowIfCancellationRequested();
											r.Dispose();
											throw new TimeoutException("download stalled");
										}
										int num4 = await leitura.ConfigureAwait(continueOnCapturedContext: false);
										if (num4 == 0)
										{
											break;
										}
										if (tem + num4 > tamanho)
										{
											num4 = (int)(tamanho - tem);
										}
										fs.Write(buffer, 0, num4);
										sha.TransformBlock(buffer, 0, num4, null, 0);
										tem += num4;
										contadoNoTotal += num4;
										Interlocked.Add(ref Feito, num4);
										Interlocked.Add(ref Rede, num4);
									}
									fs.Flush(flushToDisk: true);
								}
								if (tem < tamanho)
								{
									throw new IOException("connection closed early (" + tem + " of " + tamanho + " bytes)");
								}
							}
						}
						finally
						{
							((IDisposable)val2)?.Dispose();
						}
					}
					sha.TransformFinalBlock(buffer, 0, 0);
					string text = Hex(sha.Hash);
					if (!(text != shaEsperado))
					{
						goto end_IL_00db;
					}
					File.Delete(parte);
					Interlocked.Add(ref Feito, -contadoNoTotal);
					contadoNoTotal = 0L;
					Log.Escreve("hash errado em " + nome + ": " + text + " (esperado " + shaEsperado + ")");
					if (recomecou)
					{
						throw new ErroLauncher(L.T("A downloaded file is corrupted (", "Um arquivo baixado veio corrompido (") + nome + L.T("). Click Retry; if it keeps failing, the update may still be uploading.", "). Clique em Tentar de novo; se continuar, a atualização ainda pode estar subindo."));
					}
					recomecou = true;
					goto end_IL_0078;
					end_IL_00db:;
				}
				Nativo.Troca(parte, destino);
				if (anotar)
				{
					Anota(nome, shaEsperado);
				}
				Interlocked.Increment(ref ArqFeitos);
				break;
				end_IL_0078:;
			}
			catch (Exception ex2) when (Nativo.DiscoCheio(ex2))
			{
				throw new ErroLauncher(L.T("Your disk is full. Free some space and click Retry.", "O disco está cheio. Libere espaço e clique em Tentar de novo."), ex2);
			}
			catch (UnauthorizedAccessException inner)
			{
				throw new ErroLauncher(L.T("Windows blocked writing to the game folder. Move the launcher to a folder like C:\\Games\\Infinity.", "O Windows bloqueou a escrita na pasta do jogo. Mova o launcher para uma pasta como C:\\Jogos\\Infinity."), inner);
			}
			catch (Exception ex3) when (!(ex3 is ErroLauncher) && !ct.IsCancellationRequested && tentativa < 5 && (ex3 is IOException || ex3 is HttpRequestException || ex3 is TimeoutException || ex3 is WebException || ex3 is ObjectDisposedException))
			{
				Log.Escreve("falha em " + nome + " (tentativa " + tentativa + "): " + ex3.Message + " -- tenta de novo, mantendo o .part");
				Detalhe = nome + L.T(" (connection lost, retrying)", " (conexão caiu, tentando de novo)");
				await Task.Delay(TimeSpan.FromSeconds(2 * tentativa), ct).ConfigureAwait(continueOnCapturedContext: false);
			}
			catch (Exception ex4) when (!(ex4 is ErroLauncher) && !ct.IsCancellationRequested && !(ex4 is OperationCanceledException))
			{
				Log.Escreve("falha final em " + nome + ": " + ex4);
				throw new ErroLauncher(L.T("Download failed (", "O download falhou (") + Path.GetFileName(nome) + L.T("). Check your internet connection and click Retry.", "). Verifique sua internet e clique em Tentar de novo."), ex4);
			}
			tentativa++;
		}
	}

	public string VersaoInstalada()
	{
		try
		{
			return File.Exists(ArqVersao) ? File.ReadAllText(ArqVersao).Trim() : null;
		}
		catch
		{
			return null;
		}
	}

	private void GravaVersaoInstalada(string v)
	{
		try
		{
			File.WriteAllText(ArqVersao, v);
		}
		catch
		{
		}
	}

	public static bool LauncherNovo(Manifesto m)
	{
		if (string.IsNullOrEmpty(m.LauncherVersao) || string.IsNullOrEmpty(m.LauncherUrl))
		{
			return false;
		}
		if (Version.TryParse(m.LauncherVersao, out var result))
		{
			return result > Config.Versao;
		}
		return false;
	}

	public async Task AtualizaLauncher(Manifesto m, CancellationToken ct)
	{
		string exe = Config.Exe;
		string novo = exe + ".new";
		string velho = exe + ".old";
		Fase = L.T("Updating the launcher to ", "Atualizando o launcher para ") + m.LauncherVersao;
		Total = 0L;
		Feito = 0L;
		Log.Escreve("launcher " + Config.VersaoTexto + " -> " + m.LauncherVersao);
		try
		{
			if (File.Exists(novo))
			{
				File.Delete(novo);
			}
		}
		catch
		{
		}
		HttpResponseMessage val = await ((HttpMessageInvoker)Http).SendAsync(new HttpRequestMessage(HttpMethod.Head, m.LauncherUrl), ct).ConfigureAwait(continueOnCapturedContext: false);
		long value;
		try
		{
			if (!val.IsSuccessStatusCode || !val.Content.Headers.ContentLength.HasValue)
			{
				throw new ErroLauncher(L.T("Could not download the new launcher (HTTP ", "Não foi possível baixar o launcher novo (HTTP ") + (int)val.StatusCode + ").");
			}
			value = val.Content.Headers.ContentLength.Value;
		}
		finally
		{
			((IDisposable)val)?.Dispose();
		}
		Total = value;
		await BaixaPara(m.LauncherUrl, novo, value, m.LauncherSha, Path.GetFileName(exe), ct, anotar: false).ConfigureAwait(continueOnCapturedContext: false);
		try
		{
			if (File.Exists(velho))
			{
				File.Delete(velho);
			}
		}
		catch
		{
			velho = exe + "." + DateTime.Now.Ticks + ".old";
		}
		File.Move(exe, velho);
		try
		{
			File.Move(novo, exe);
		}
		catch
		{
			File.Move(velho, exe);
			throw;
		}
		Log.Escreve("launcher trocado, reabrindo");
		Process.Start(new ProcessStartInfo(exe, Args.Linha("--atualizado"))
		{
			WorkingDirectory = Path.GetDirectoryName(exe),
			UseShellExecute = false
		});
	}

	public static void LimpaLauncherVelho()
	{
		Task.Run(async delegate
		{
			for (int i = 0; i < 20; i++)
			{
				try
				{
					string[] files = Directory.GetFiles(Config.Raiz, Path.GetFileName(Config.Exe) + "*.old");
					for (int j = 0; j < files.Length; j++)
					{
						File.Delete(files[j]);
					}
					break;
				}
				catch
				{
					await Task.Delay(500).ConfigureAwait(continueOnCapturedContext: false);
				}
			}
		});
	}
}
