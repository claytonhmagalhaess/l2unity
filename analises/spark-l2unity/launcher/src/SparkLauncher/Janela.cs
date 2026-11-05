using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Drawing.Imaging;
using System.Drawing.Text;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using System.Web.Script.Serialization;
using System.Windows.Forms;

namespace SparkLauncher;

internal class Janela : Form
{
	private enum Estado
	{
		Conferindo,
		Pronto,
		Atualizar,
		Instalar,
		Trabalhando,
		Erro
	}

	private class Noticia
	{
		public string Id;

		public string Data;

		public string Titulo;

		public string Resumo;
	}

	private class Jogador
	{
		public string Nome;

		public string Clan;

		public int Nivel;

		public int Pvp;

		public bool Online;
	}

	private struct RECT
	{
		public int L;

		public int T;

		public int R;

		public int B;
	}

	private class Widget
	{
		public RectangleF Area;

		public Action Clique;

		public Func<bool> Visivel = () => true;

		public Func<bool> Ativo = () => true;

		public bool Fechar;

		public string Nome;
	}

	private class CoresMenu : ProfessionalColorTable
	{
		private static readonly Color Fundo = Color.FromArgb(14, 14, 17);

		private static readonly Color Borda = Color.FromArgb(90, 90, 100);

		private static readonly Color Sel = Color.FromArgb(42, 42, 50);

		public override Color ToolStripDropDownBackground => Fundo;

		public override Color MenuBorder => Borda;

		public override Color MenuItemBorder => Color.FromArgb(70, 70, 80);

		public override Color MenuItemSelected => Sel;

		public override Color MenuItemSelectedGradientBegin => Sel;

		public override Color MenuItemSelectedGradientEnd => Sel;

		public override Color ImageMarginGradientBegin => Fundo;

		public override Color ImageMarginGradientMiddle => Fundo;

		public override Color ImageMarginGradientEnd => Fundo;

		public override Color SeparatorDark => Color.FromArgb(50, 50, 58);

		public override Color SeparatorLight => Fundo;

		public override Color CheckBackground => Color.FromArgb(40, 40, 46);

		public override Color CheckSelectedBackground => Color.FromArgb(60, 60, 68);

		public override Color CheckPressedBackground => Color.FromArgb(60, 60, 68);
	}

	private const float W = 1200f;

	private const float H = 675f;

	private float s = 1f;

	private Bitmap cabecalho;

	private Bitmap cabecalhoEscalado;

	private readonly Bitmap[] miniaturas = new Bitmap[3];

	private readonly List<Widget> widgets = new List<Widget>();

	private Widget sobre;

	private Widget apertado;

	private Estado estado;

	private string erro;

	private Atualizador at;

	private Manifesto manifesto;

	private Plano plano;

	private readonly CancellationTokenSource fechando = new CancellationTokenSource();

	private readonly System.Windows.Forms.Timer relogio = new System.Windows.Forms.Timer
	{
		Interval = 250
	};

	private readonly System.Windows.Forms.Timer minuto = new System.Windows.Forms.Timer
	{
		Interval = 60000
	};

	private readonly Queue<KeyValuePair<double, long>> amostras = new Queue<KeyValuePair<double, long>>();

	private readonly Stopwatch tempo = Stopwatch.StartNew();

	private double velocidade;

	private double inicioTrabalho;

	private List<Noticia> noticias;

	private Dictionary<string, List<Jogador>> ranking;

	private bool rankingFalhou;

	private string abaRanking = "level";

	private bool? servidorOnline;

	private int? jogadoresOnline;

	private Widget wJogar;

	private Widget wTentar;

	private Widget wEngrenagem;

	private Dictionary<string, Dictionary<string, object>> brutoNoticias = new Dictionary<string, Dictionary<string, object>>();

	private static readonly RectangleF PNoticias = new RectangleF(49f, 289f, 382f, 271f);

	private static readonly RectangleF PRanking = new RectangleF(447f, 289f, 347f, 271f);

	private static readonly RectangleF PStatus = new RectangleF(809f, 289f, 342f, 271f);

	private static readonly RectangleF PBarra = new RectangleF(41f, 576f, 801f, 58f);

	private static readonly RectangleF PJogar = new RectangleF(853f, 572f, 246f, 66f);

	private static readonly RectangleF PEngrenagem = new RectangleF(1108f, 576f, 52f, 58f);

	private static readonly Color Branco = Color.FromArgb(236, 236, 240);

	private static readonly Color Cinza = Color.FromArgb(150, 150, 160);

	private static readonly Color Apagado = Color.FromArgb(100, 100, 110);

	private static readonly Color Prata = Color.FromArgb(178, 178, 188);

	private static readonly Color Verde = Color.FromArgb(88, 226, 170);

	private static readonly Color Vermelho = Color.FromArgb(240, 110, 110);

	protected override CreateParams CreateParams
	{
		get
		{
			CreateParams obj = base.CreateParams;
			obj.ClassStyle |= 131072;
			obj.Style |= 655360;
			return obj;
		}
	}

	public Janela()
	{
		Text = "Project SPARK - Infinity";
		base.FormBorderStyle = FormBorderStyle.None;
		base.StartPosition = FormStartPosition.Manual;
		BackColor = Color.Black;
		DoubleBuffered = true;
		SetStyle(ControlStyles.UserPaint | ControlStyles.ResizeRedraw | ControlStyles.AllPaintingInWmPaint | ControlStyles.OptimizedDoubleBuffer, value: true);
		try
		{
			base.Icon = Icon.ExtractAssociatedIcon(Config.Exe);
		}
		catch
		{
		}
		cabecalho = Recurso.Imagem("cabecalho.jpg");
		for (int i = 0; i < 3; i++)
		{
			miniaturas[i] = Recurso.Imagem("noticia" + (i + 1) + ".jpg");
		}
		MontaWidgets();
		relogio.Tick += delegate
		{
			Tique();
		};
		minuto.Tick += async delegate
		{
			await AtualizaSite(tudo: false);
		};
	}

	[DllImport("user32.dll")]
	private static extern int GetDpiForWindow(IntPtr h);

	[DllImport("user32.dll")]
	private static extern bool ReleaseCapture();

	[DllImport("user32.dll")]
	private static extern IntPtr SendMessage(IntPtr h, int msg, IntPtr w, IntPtr l);

	[DllImport("user32.dll")]
	private static extern bool SetForegroundWindow(IntPtr h);

	[DllImport("user32.dll")]
	private static extern bool ShowWindow(IntPtr h, int cmd);

	[DllImport("dwmapi.dll")]
	private static extern int DwmSetWindowAttribute(IntPtr h, int attr, ref int valor, int tam);

	public static void Mostra(IntPtr h)
	{
		ShowWindow(h, 9);
		SetForegroundWindow(h);
	}

	protected override void OnHandleCreated(EventArgs e)
	{
		base.OnHandleCreated(e);
		try
		{
			int valor = 2;
			DwmSetWindowAttribute(base.Handle, 33, ref valor, 4);
		}
		catch
		{
		}
		int dpi = 96;
		try
		{
			dpi = GetDpiForWindow(base.Handle);
		}
		catch
		{
			using Graphics graphics = CreateGraphics();
			dpi = (int)graphics.DpiX;
		}
		Rectangle workingArea = Screen.FromPoint(Cursor.Position).WorkingArea;
		AplicaEscala(dpi, workingArea, null);
	}

	private void AplicaEscala(int dpi, Rectangle area, Rectangle? sugerido)
	{
		s = Math.Min((float)dpi / 96f, Math.Min((float)area.Width * 0.97f / 1200f, (float)area.Height * 0.97f / 675f));
		Size size = new Size((int)Math.Round(1200f * s), (int)Math.Round(675f * s));
		if (sugerido.HasValue)
		{
			base.Bounds = new Rectangle(sugerido.Value.Location, size);
		}
		else
		{
			base.Bounds = new Rectangle(area.Left + (area.Width - size.Width) / 2, area.Top + (area.Height - size.Height) / 2, size.Width, size.Height);
		}
		cabecalhoEscalado?.Dispose();
		int num = (int)Math.Round((float)cabecalho.Height * (1200f / (float)cabecalho.Width) * s);
		cabecalhoEscalado = new Bitmap(size.Width, num);
		using (Graphics graphics = Graphics.FromImage(cabecalhoEscalado))
		{
			graphics.InterpolationMode = InterpolationMode.HighQualityBicubic;
			graphics.PixelOffsetMode = PixelOffsetMode.HighQuality;
			graphics.DrawImage(cabecalho, new Rectangle(0, 0, size.Width, num));
		}
		Invalidate();
	}

	protected override void WndProc(ref Message m)
	{
		if (m.Msg == 736)
		{
			int dpi = (int)((long)m.WParam & 0xFFFF);
			RECT rECT = (RECT)Marshal.PtrToStructure(m.LParam, typeof(RECT));
			AplicaEscala(dpi, Screen.FromHandle(base.Handle).WorkingArea, new Rectangle(rECT.L, rECT.T, rECT.R - rECT.L, rECT.B - rECT.T));
		}
		else
		{
			base.WndProc(ref m);
		}
	}

	private PointF Logico(Point p)
	{
		return new PointF((float)p.X / s, (float)p.Y / s);
	}

	private Widget Acha(Point p)
	{
		PointF pt = Logico(p);
		for (int num = widgets.Count - 1; num >= 0; num--)
		{
			if (widgets[num].Visivel() && widgets[num].Area.Contains(pt))
			{
				return widgets[num];
			}
		}
		return null;
	}

	protected override void OnMouseMove(MouseEventArgs e)
	{
		Widget widget = Acha(e.Location);
		if (widget != sobre)
		{
			sobre = widget;
			Cursor = ((widget != null && widget.Ativo()) ? Cursors.Hand : Cursors.Default);
			Invalidate();
		}
	}

	protected override void OnMouseLeave(EventArgs e)
	{
		sobre = null;
		Invalidate();
	}

	protected override void OnMouseDown(MouseEventArgs e)
	{
		if (e.Button == MouseButtons.Left)
		{
			Widget widget = Acha(e.Location);
			if (widget != null)
			{
				apertado = widget;
				Invalidate();
			}
			else
			{
				ReleaseCapture();
				SendMessage(base.Handle, 161, (IntPtr)2, IntPtr.Zero);
			}
		}
	}

	protected override void OnMouseUp(MouseEventArgs e)
	{
		Widget widget = Acha(e.Location);
		Widget widget2 = apertado;
		apertado = null;
		Invalidate();
		if (widget != null && widget == widget2 && widget.Ativo())
		{
			widget.Clique?.Invoke();
		}
	}

	protected override async void OnShown(EventArgs e)
	{
		base.OnShown(e);
		string text = Grafico.ConfereFalha(Grafico.PastaDoJogo(null), null);
		if (text != null && !Args.Tem("--auto") && Args.Valor("--screenshot") == null)
		{
			MessageBox.Show(this, text, Text, MessageBoxButtons.OK, MessageBoxIcon.Exclamation);
		}
		relogio.Start();
		minuto.Start();
		Task site = AtualizaSite(tudo: true);
		await Confere();
		if (Args.Tem("--auto") && (estado == Estado.Atualizar || estado == Estado.Instalar))
		{
			Trabalha(reparar: false);
		}
		string arq = Args.Valor("--screenshot");
		if (arq != null)
		{
			await site;
			await Task.Delay(TimeSpan.FromSeconds(double.TryParse(Args.Valor("--apos") ?? "1", NumberStyles.Float, CultureInfo.InvariantCulture, out var result) ? result : 1.0));
			SalvaPrint(arq);
			Close();
		}
	}

	protected override void OnFormClosing(FormClosingEventArgs e)
	{
		fechando.Cancel();
		at?.SalvaCache();
		base.OnFormClosing(e);
	}

	private async Task Confere()
	{
		estado = Estado.Conferindo;
		erro = null;
		Invalidate();
		try
		{
			Program.ConferePasta();
			at = at ?? new Atualizador(Config.Raiz);
			at.Fase = L.T("Checking for updates", "Procurando atualizações");
			manifesto = await Atualizador.BuscaManifesto(Args.Valor("--manifest"), fechando.Token);
			if (Atualizador.LauncherNovo(manifesto))
			{
				estado = Estado.Trabalhando;
				await at.AtualizaLauncher(manifesto, fechando.Token);
				Close();
				return;
			}
			plano = await Task.Run(() => at.Confere(manifesto, completa: false, fechando.Token));
			Define();
		}
		catch (OperationCanceledException)
		{
		}
		catch (Exception ex2)
		{
			Falhou(ex2);
		}
		Invalidate();
	}

	private void Define()
	{
		if (plano.Vazio)
		{
			estado = Estado.Pronto;
		}
		else
		{
			estado = (File.Exists(at.Local(manifesto.Exe)) ? Estado.Atualizar : Estado.Instalar);
		}
		Log.Escreve("estado: " + estado.ToString() + (plano.Vazio ? "" : (" (" + plano.Baixar.Count + " arquivos, " + Formata.Bytes(plano.Bytes) + ")")));
	}

	private void Falhou(Exception ex)
	{
		estado = Estado.Erro;
		erro = ((ex is ErroLauncher) ? ex.Message : (L.T("Unexpected error: ", "Erro inesperado: ") + ex.Message));
		Log.Escreve("erro: " + ex);
	}

	private async Task Trabalha(bool reparar)
	{
		if (estado == Estado.Trabalhando || estado == Estado.Conferindo)
		{
			return;
		}
		if (manifesto == null)
		{
			await Confere();
			if (manifesto == null)
			{
				return;
			}
		}
		if (estado == Estado.Instalar && !ConfirmaPasta())
		{
			return;
		}
		estado = Estado.Trabalhando;
		erro = null;
		amostras.Clear();
		velocidade = 0.0;
		inicioTrabalho = tempo.Elapsed.TotalSeconds;
		Invalidate();
		try
		{
			if (reparar || plano == null)
			{
				plano = await Task.Run(() => at.Confere(manifesto, reparar, fechando.Token));
			}
			if (!plano.Vazio)
			{
				await Task.Run(() => at.Executa(manifesto, plano, fechando.Token));
			}
			plano = await Task.Run(() => at.Confere(manifesto, completa: false, fechando.Token));
			Define();
		}
		catch (OperationCanceledException)
		{
		}
		catch (Exception ex2)
		{
			Falhou(ex2);
		}
		Invalidate();
	}

	private bool ConfirmaPasta()
	{
		string meu = Path.GetFileName(Config.Exe);
		List<string> list = (from n in Directory.EnumerateFileSystemEntries(Config.Raiz).Select(Path.GetFileName)
			where !n.Equals(meu, StringComparison.OrdinalIgnoreCase) && !n.Equals("Launcher", StringComparison.OrdinalIgnoreCase) && !n.StartsWith(meu, StringComparison.OrdinalIgnoreCase)
			select n).ToList();
		string text = Formata.Bytes(manifesto.TotalBytes);
		string text2 = L.T("Infinity will be installed in this folder:\n\n" + Config.Raiz + "\n\nSize: " + text + ".", "O Infinity vai ser instalado nesta pasta:\n\n" + Config.Raiz + "\n\nTamanho: " + text + ".");
		if (list.Count == 0 || Args.Tem("--auto"))
		{
			return true;
		}
		text2 += L.T("\n\nThis folder already has other files. We recommend an empty folder just for the game (e.g. C:\\Games\\Infinity): close the launcher, move it there and open it again.\n\nInstall here anyway?", "\n\nEsta pasta já tem outros arquivos. O ideal é uma pasta vazia só para o jogo (ex.: C:\\Jogos\\Infinity): feche o launcher, mova-o para lá e abra de novo.\n\nInstalar aqui mesmo assim?");
		return MessageBox.Show(this, text2, Text, MessageBoxButtons.YesNo, MessageBoxIcon.Question, MessageBoxDefaultButton.Button2) == DialogResult.Yes;
	}

	private void Jogar()
	{
		try
		{
			Process p = Program.Jogar(at ?? new Atualizador(Config.Raiz), manifesto?.Exe);
			if (!Preferencias.FecharAoJogar)
			{
				VigiaApi(p, manifesto?.Exe);
			}
			if (Preferencias.FecharAoJogar)
			{
				Close();
			}
			else
			{
				base.WindowState = FormWindowState.Minimized;
			}
		}
		catch (Exception ex)
		{
			Falhou(ex);
			Invalidate();
		}
	}

	private void VigiaApi(Process p, string exe)
	{
		string pasta = Grafico.PastaDoJogo(exe);
		if (p == null || Grafico.Le(pasta) == 0)
		{
			return;
		}
		Task.Run(delegate
		{
			bool flag;
			try
			{
				flag = p.WaitForExit(20000);
			}
			catch
			{
				return;
			}
			if (!flag)
			{
				return;
			}
			try
			{
				BeginInvoke((Action)delegate
				{
					string text = Grafico.ConfereFalha(pasta, exe);
					if (text != null)
					{
						if (base.WindowState == FormWindowState.Minimized)
						{
							base.WindowState = FormWindowState.Normal;
						}
						MessageBox.Show(this, text, Text, MessageBoxButtons.OK, MessageBoxIcon.Exclamation);
						Invalidate();
					}
				});
			}
			catch
			{
			}
		});
	}

	private void CliquePrincipal()
	{
		switch (estado)
		{
		case Estado.Pronto:
			Jogar();
			break;
		case Estado.Atualizar:
		case Estado.Instalar:
			Trabalha(reparar: false);
			break;
		case Estado.Erro:
			if (manifesto == null && JogoInstalado())
			{
				Jogar();
			}
			else
			{
				Tentar();
			}
			break;
		case Estado.Trabalhando:
			break;
		}
	}

	private async Task Tentar()
	{
		if (manifesto == null)
		{
			await Confere();
			return;
		}
		estado = Estado.Atualizar;
		plano = null;
		await Trabalha(reparar: false);
	}

	private bool JogoInstalado()
	{
		return File.Exists(Path.Combine(Config.Raiz, manifesto?.Exe ?? "L2.exe"));
	}

	private void Tique()
	{
		if (at != null && estado == Estado.Trabalhando)
		{
			double totalSeconds = tempo.Elapsed.TotalSeconds;
			long num = Interlocked.Read(ref at.Rede);
			amostras.Enqueue(new KeyValuePair<double, long>(totalSeconds, num));
			while (amostras.Count > 2 && totalSeconds - amostras.Peek().Key > 5.0)
			{
				amostras.Dequeue();
			}
			KeyValuePair<double, long> keyValuePair = amostras.Peek();
			velocidade = ((totalSeconds - keyValuePair.Key > 0.4) ? ((double)(num - keyValuePair.Value) / (totalSeconds - keyValuePair.Key)) : velocidade);
		}
		if (estado == Estado.Trabalhando || estado == Estado.Conferindo)
		{
			Invalidate(new Rectangle(0, (int)(560f * s), base.Width, base.Height - (int)(560f * s)));
		}
	}

	private async Task AtualizaSite(bool tudo)
	{
		CancellationToken ct = fechando.Token;
		List<Task> list = new List<Task>
		{
			Task.Run(async delegate
			{
				try
				{
					JavaScriptSerializer javaScriptSerializer = Atualizador.Json();
					Dictionary<string, object> dictionary = (Dictionary<string, object>)javaScriptSerializer.DeserializeObject(await Atualizador.BaixaTexto("https://l2spark.vercel.app/api/status?server=infinity", ct, 10));
					Janela janela = this;
					bool gb = default(bool);
					int num;
					if (dictionary.TryGetValue("game", out var value))
					{
						if (value is bool)
						{
							gb = (bool)value;
							num = 1;
						}
						else
						{
							num = 0;
						}
					}
					else
					{
						num = 0;
					}
					bool lb = default(bool);
					int num2;
					if (((uint)num & (gb ? 1u : 0u)) != 0 && dictionary.TryGetValue("login", out var value2))
					{
						if (value2 is bool)
						{
							lb = (bool)value2;
							num2 = 1;
						}
						else
						{
							num2 = 0;
						}
					}
					else
					{
						num2 = 0;
					}
					janela.servidorOnline = (byte)((uint)num2 & (lb ? 1u : 0u)) != 0;
					jogadoresOnline = (dictionary.TryGetValue("online", out var value3) ? new int?(Convert.ToInt32(value3, CultureInfo.InvariantCulture)) : ((int?)null));
				}
				catch (Exception ex)
				{
					servidorOnline = null;
					jogadoresOnline = null;
					Log.Escreve("status: " + ex.Message);
				}
			}),
			Task.Run(async delegate
			{
				try
				{
					JavaScriptSerializer javaScriptSerializer = Atualizador.Json();
					Dictionary<string, object> dictionary = (Dictionary<string, object>)javaScriptSerializer.DeserializeObject(await Atualizador.BaixaTexto("https://l2spark.vercel.app/api/rankings?server=infinity", ct, 10));
					Dictionary<string, List<Jogador>> dictionary2 = new Dictionary<string, List<Jogador>>();
					string[] array = new string[2] { "level", "pvp" };
					foreach (string key in array)
					{
						dictionary2[key] = ((dictionary.TryGetValue(key, out var value) && value is object[] source) ? (from j in source.Cast<Dictionary<string, object>>().Take(5)
							select new Jogador
							{
								Nome = Convert.ToString(j["name"]),
								Clan = (j.TryGetValue("clan", out var value2) ? Convert.ToString(value2) : ""),
								Nivel = Convert.ToInt32(j["level"], CultureInfo.InvariantCulture),
								Pvp = Convert.ToInt32(j["pvp"], CultureInfo.InvariantCulture),
								Online = (j.TryGetValue("online", out var value3) && Convert.ToInt32(value3, CultureInfo.InvariantCulture) != 0)
							}).ToList() : new List<Jogador>());
					}
					ranking = dictionary2;
					rankingFalhou = false;
				}
				catch (Exception ex)
				{
					rankingFalhou = ranking == null;
					Log.Escreve("ranking: " + ex.Message);
				}
			})
		};
		if (tudo)
		{
			list.Add(Task.Run((Func<Task>)CarregaNoticias));
		}
		await Task.WhenAll(list);
		if (!base.IsDisposed)
		{
			Invalidate();
		}
	}

	private async Task CarregaNoticias()
	{
		string arqCache = Path.Combine(Config.Dados, "news.json");
		string texto = null;
		try
		{
			texto = await Atualizador.BaixaTexto("https://l2spark.vercel.app/news.json", fechando.Token, 15);
			try
			{
				File.WriteAllText(arqCache, texto);
			}
			catch
			{
			}
		}
		catch (Exception ex)
		{
			Log.Escreve("noticias: " + ex.Message);
			try
			{
				if (File.Exists(arqCache))
				{
					texto = File.ReadAllText(arqCache);
				}
			}
			catch
			{
			}
		}
		if (texto == null)
		{
			noticias = new List<Noticia>();
			return;
		}
		try
		{
			noticias = (from n in (from Dictionary<string, object> n in (object[])Atualizador.Json().DeserializeObject(texto)
					where n["project"] as string == "infinity"
					select n).OrderByDescending((Dictionary<string, object> n) => (string)n["date"], StringComparer.Ordinal).Take(3)
				select new Noticia
				{
					Id = (string)n["id"],
					Data = (string)n["date"],
					Titulo = Campo(n, "title"),
					Resumo = Campo(n, "summary")
				}).ToList();
		}
		catch (Exception ex2)
		{
			Log.Escreve("noticias ilegiveis: " + ex2.Message);
			noticias = new List<Noticia>();
		}
	}

	private string Campo(Dictionary<string, object> n, string nome)
	{
		brutoNoticias[(string)n["id"]] = n;
		object value;
		object value2;
		return (n.TryGetValue(nome + (L.Pt ? "_pt" : "_en"), out value) ? (value as string) : null) ?? (n.TryGetValue(nome + "_en", out value2) ? (value2 as string) : "") ?? "";
	}

	private void TrocaIdioma(bool pt)
	{
		L.Pt = pt;
		Preferencias.Salva();
		if (noticias != null)
		{
			foreach (Noticia noticia in noticias)
			{
				if (brutoNoticias.TryGetValue(noticia.Id, out var value))
				{
					noticia.Titulo = Campo(value, "title");
					noticia.Resumo = Campo(value, "summary");
				}
			}
		}
		if (at != null && estado != Estado.Trabalhando)
		{
			at.Fase = "";
		}
		Invalidate();
	}

	private static string DataNoticia(string iso)
	{
		if (!DateTime.TryParseExact(iso, "yyyy-MM-dd", CultureInfo.InvariantCulture, DateTimeStyles.None, out var result))
		{
			return iso;
		}
		if (!L.Pt)
		{
			return result.ToString("MMM d, yyyy", CultureInfo.InvariantCulture);
		}
		return result.ToString("dd/MM/yyyy", CultureInfo.InvariantCulture);
	}

	private static void Abre(string url)
	{
		try
		{
			Process.Start(new ProcessStartInfo(url)
			{
				UseShellExecute = true
			});
		}
		catch (Exception ex)
		{
			Log.Escreve("nao abriu " + url + ": " + ex.Message);
		}
	}

	private void MontaWidgets()
	{
		widgets.Add(new Widget
		{
			Area = new RectangleF(1106f, 10f, 38f, 30f),
			Clique = delegate
			{
				base.WindowState = FormWindowState.Minimized;
			}
		});
		widgets.Add(new Widget
		{
			Area = new RectangleF(1148f, 10f, 38f, 30f),
			Clique = base.Close,
			Fechar = true
		});
		widgets.Add(new Widget
		{
			Area = new RectangleF(PNoticias.Right - 130f, PNoticias.Y + 14f, 112f, 26f),
			Clique = delegate
			{
				Abre("https://l2spark.vercel.app/news.html?f=infinity");
			},
			Nome = "todas"
		});
		for (int num = 0; num < 3; num++)
		{
			int k = num;
			widgets.Add(new Widget
			{
				Area = new RectangleF(PNoticias.X + 18f, PNoticias.Y + 50f + (float)(k * 72), PNoticias.Width - 36f, 68f),
				Visivel = () => noticias != null && noticias.Count > k,
				Clique = delegate
				{
					Abre("https://l2spark.vercel.app/news.html?f=infinity#" + noticias[k].Id);
				},
				Nome = "noticia"
			});
		}
		widgets.Add(new Widget
		{
			Area = new RectangleF(PRanking.Right - 128f, PRanking.Y + 14f, 58f, 26f),
			Clique = delegate
			{
				abaRanking = "level";
				Invalidate();
			},
			Nome = "aba"
		});
		widgets.Add(new Widget
		{
			Area = new RectangleF(PRanking.Right - 66f, PRanking.Y + 14f, 48f, 26f),
			Clique = delegate
			{
				abaRanking = "pvp";
				Invalidate();
			},
			Nome = "aba"
		});
		wTentar = new Widget
		{
			Area = new RectangleF(PBarra.Right - 190f, PBarra.Y + 6f, 172f, 24f),
			Visivel = () => estado == Estado.Erro,
			Clique = delegate
			{
				Tentar();
			},
			Nome = "tentar"
		};
		widgets.Add(wTentar);
		wJogar = new Widget
		{
			Area = PJogar,
			Clique = CliquePrincipal,
			Ativo = () => estado != Estado.Trabalhando && estado != Estado.Conferindo
		};
		widgets.Add(wJogar);
		wEngrenagem = new Widget
		{
			Area = PEngrenagem,
			Clique = AbreMenu
		};
		widgets.Add(wEngrenagem);
	}

	private bool Hover(Widget w)
	{
		if (sobre == w)
		{
			return w.Ativo();
		}
		return false;
	}

	private void AbreMenu()
	{
		ContextMenuStrip m = new ContextMenuStrip
		{
			Renderer = new ToolStripProfessionalRenderer(new CoresMenu())
			{
				RoundedEdges = false
			},
			ShowImageMargin = false,
			ShowCheckMargin = true
		};
		m.Font = new Font("Segoe UI", 10f);
		m.ForeColor = Color.FromArgb(230, 230, 236);
		bool flag = estado != Estado.Trabalhando && estado != Estado.Conferindo;
		Item(m, L.T("Repair game files", "Reparar arquivos do jogo"), delegate
		{
			Trabalha(reparar: true);
		}, flag && manifesto != null);
		Item(m, L.T("Open game folder", "Abrir pasta do jogo"), delegate
		{
			Abre(Config.Raiz);
		});
		m.Items.Add(new ToolStripSeparator());
		Item(m, L.T("Website", "Site oficial"), delegate
		{
			Abre("https://l2spark.vercel.app");
		});
		Item(m, "Discord", delegate
		{
			Abre("https://discord.gg/v7xnsd9dXW");
		});
		Item(m, "YouTube", delegate
		{
			Abre("https://www.youtube.com/@projectsparkl2");
		});
		Item(m, "Facebook", delegate
		{
			Abre("https://www.facebook.com/l2jspark/");
		});
		m.Items.Add(new ToolStripSeparator());
		Item(m, "English", delegate
		{
			TrocaIdioma(pt: false);
		}, ativo: true, !L.Pt);
		Item(m, "Português", delegate
		{
			TrocaIdioma(pt: true);
		}, ativo: true, L.Pt);
		m.Items.Add(new ToolStripSeparator());
		string pastaJogo = Grafico.PastaDoJogo(manifesto?.Exe);
		int num = Grafico.Le(pastaJogo);
		Item(m, L.T("Graphics API (used on the next Play):", "API gráfica (vale no próximo Jogar):"), null, ativo: false);
		for (int num2 = 0; num2 < Grafico.Nomes.Length; num2++)
		{
			int esta = num2;
			Item(m, "    " + Grafico.Nomes[num2] + ((num2 == 0) ? L.T("  (default)", "  (padrão)") : ""), delegate
			{
				Grafico.Grava(pastaJogo, esta);
			}, ativo: true, num == num2);
		}
		m.Items.Add(new ToolStripSeparator());
		Item(m, L.T("Close the launcher when the game starts", "Fechar o launcher ao abrir o jogo"), delegate
		{
			Preferencias.FecharAoJogar = !Preferencias.FecharAoJogar;
			Preferencias.Salva();
		}, ativo: true, Preferencias.FecharAoJogar);
		m.Items.Add(new ToolStripSeparator());
		Item(m, "Launcher " + Config.VersaoTexto + ((manifesto != null) ? ("  ·  " + L.T("Client ", "Cliente ") + manifesto.Versao) : ""), null, ativo: false);
		m.Closed += delegate
		{
			BeginInvoke((Action)delegate
			{
				m.Dispose();
			});
		};
		Point position = new Point((int)(PEngrenagem.Right * s), (int)(PEngrenagem.Y * s));
		m.Show(this, position, ToolStripDropDownDirection.AboveLeft);
	}

	private static void Item(ContextMenuStrip m, string texto, Action acao, bool ativo = true, bool marcado = false)
	{
		ToolStripMenuItem toolStripMenuItem = new ToolStripMenuItem(texto)
		{
			Enabled = ativo,
			Checked = marcado,
			ForeColor = (ativo ? Color.FromArgb(232, 232, 238) : Color.FromArgb(120, 120, 128)),
			Padding = new Padding(4, 3, 4, 3)
		};
		if (acao != null)
		{
			toolStripMenuItem.Click += delegate
			{
				acao();
			};
		}
		m.Items.Add(toolStripMenuItem);
	}

	protected override void OnPaintBackground(PaintEventArgs e)
	{
	}

	protected override void OnPaint(PaintEventArgs e)
	{
		Pinta(e.Graphics, cabecalhoEscalado);
	}

	private void SalvaPrint(string arq)
	{
		using (Bitmap bitmap = new Bitmap(base.ClientSize.Width, base.ClientSize.Height))
		{
			using (Graphics g = Graphics.FromImage(bitmap))
			{
				Pinta(g, cabecalhoEscalado);
			}
			Directory.CreateDirectory(Path.GetDirectoryName(Path.GetFullPath(arq)));
			bitmap.Save(arq, ImageFormat.Png);
		}
		Log.Escreve("print salvo em " + arq);
	}

	private void Pinta(Graphics g, Bitmap cab)
	{
		g.Clear(Color.FromArgb(4, 4, 5));
		g.InterpolationMode = InterpolationMode.HighQualityBicubic;
		g.PixelOffsetMode = PixelOffsetMode.HighQuality;
		if (cab != null)
		{
			g.DrawImage(cab, new Rectangle(0, 0, cab.Width, cab.Height), 0, 0, cab.Width, cab.Height, GraphicsUnit.Pixel);
		}
		g.ScaleTransform(s, s);
		g.SmoothingMode = SmoothingMode.AntiAlias;
		g.TextRenderingHint = TextRenderingHint.AntiAlias;
		using (LinearGradientBrush brush = new LinearGradientBrush(new RectangleF(0f, 240f, 1200f, 435f), Color.FromArgb(0, 4, 4, 5), Color.FromArgb(255, 4, 4, 5), 90f))
		{
			g.FillRectangle(brush, 0f, 241f, 1200f, 434f);
		}
		Moldura(g, new RectangleF(0.5f, 0.5f, 1199f, 674f), 0f, 70);
		for (int i = 0; i < 2; i++)
		{
			Widget widget = widgets[i];
			if (Hover(widget))
			{
				using SolidBrush brush2 = new SolidBrush(widget.Fechar ? Color.FromArgb(160, 170, 30, 30) : Color.FromArgb(40, 255, 255, 255));
				g.FillRectangle(brush2, widget.Area);
			}
			PointF pointF = new PointF(widget.Area.X + widget.Area.Width / 2f, widget.Area.Y + widget.Area.Height / 2f);
			using Pen pen = new Pen(Branco, 1.6f);
			if (widget.Fechar)
			{
				g.DrawLine(pen, pointF.X - 7f, pointF.Y - 7f, pointF.X + 7f, pointF.Y + 7f);
				g.DrawLine(pen, pointF.X - 7f, pointF.Y + 7f, pointF.X + 7f, pointF.Y - 7f);
			}
			else
			{
				g.DrawLine(pen, pointF.X - 8f, pointF.Y, pointF.X + 8f, pointF.Y);
			}
		}
		PintaNoticias(g);
		PintaRanking(g);
		PintaStatus(g);
		PintaRodape(g);
		Estrela(g, 600f, 656f, 9f, 1f);
		using (new Pen(Color.FromArgb(90, Prata), 1f))
		{
			int[] array = new int[2] { -1, 1 };
			foreach (int num in array)
			{
				using (LinearGradientBrush brush3 = new LinearGradientBrush(new PointF(600f + (float)(num * 14), 0f), new PointF(600f + (float)(num * 120), 0f), Color.FromArgb(120, Prata), Color.FromArgb(0, Prata)))
				{
					using Pen pen2 = new Pen(brush3, 1f);
					g.DrawLine(pen2, 600f + (float)(num * 14), 656f, 600f + (float)(num * 120), 656f);
				}
				Losango(g, 600f + (float)(num * 24), 656f, 2.5f, Color.FromArgb(150, Prata));
			}
		}
	}

	private void Painel(Graphics g, RectangleF r, string titulo)
	{
		using (GraphicsPath path = Chanfro(r, 7f))
		{
			using LinearGradientBrush brush = new LinearGradientBrush(r, Color.FromArgb(235, 12, 12, 14), Color.FromArgb(245, 6, 6, 7), 90f);
			g.FillPath(brush, path);
		}
		Moldura(g, r, 7f, 130);
		Moldura(g, RectangleF.Inflate(r, -4f, -4f), 5f, 34);
		float num = r.X + r.Width / 2f;
		using (LinearGradientBrush linearGradientBrush = new LinearGradientBrush(new PointF(num - 60f, 0f), new PointF(num + 60f, 0f), Color.FromArgb(0, Prata), Color.FromArgb(0, Prata)))
		{
			ColorBlend colorBlend = new ColorBlend();
			colorBlend.Colors = new Color[3]
			{
				Color.FromArgb(0, Prata),
				Color.FromArgb(200, Branco),
				Color.FromArgb(0, Prata)
			};
			colorBlend.Positions = new float[3] { 0f, 0.5f, 1f };
			ColorBlend interpolationColors = colorBlend;
			linearGradientBrush.InterpolationColors = interpolationColors;
			using Pen pen = new Pen(linearGradientBrush, 1.4f);
			g.DrawLine(pen, num - 60f, r.Y, num + 60f, r.Y);
		}
		Estrela(g, num, r.Y, 11f, 1f);
		PointF[] array = new PointF[4]
		{
			new PointF(r.X + 2f, r.Y + 2f),
			new PointF(r.Right - 2f, r.Y + 2f),
			new PointF(r.X + 2f, r.Bottom - 2f),
			new PointF(r.Right - 2f, r.Bottom - 2f)
		};
		for (int i = 0; i < array.Length; i++)
		{
			PointF pointF = array[i];
			Losango(g, pointF.X, pointF.Y, 2.6f, Color.FromArgb(170, Prata));
		}
		if (titulo != null)
		{
			Texto.Espacado(g, titulo, Texto.Cinzel(19f), Branco, r.X + 26f, r.Y + 16f, 1.6f);
		}
		using Pen pen2 = new Pen(Color.FromArgb(38, 255, 255, 255), 1f);
		g.DrawLine(pen2, r.X + 24f, r.Y + 46f, r.Right - 24f, r.Y + 46f);
	}

	private void PintaNoticias(Graphics g)
	{
		RectangleF pNoticias = PNoticias;
		Painel(g, pNoticias, L.T("NEWS", "NOTÍCIAS"));
		Link(g, widgets[2], L.T("VIEW ALL", "VER TODAS"));
		if (noticias == null)
		{
			Texto.Simples(g, "--", Texto.Corpo(12f), Cinza, pNoticias.X + 26f, pNoticias.Y + 64f);
			return;
		}
		if (noticias.Count == 0)
		{
			Texto.Simples(g, L.T("No news yet.", "Sem notícias ainda."), Texto.Corpo(12f), Cinza, pNoticias.X + 26f, pNoticias.Y + 64f);
			return;
		}
		for (int i = 0; i < noticias.Count; i++)
		{
			Noticia noticia = noticias[i];
			Widget widget = widgets[3 + i];
			RectangleF area = widget.Area;
			if (Hover(widget))
			{
				using SolidBrush brush = new SolidBrush(Color.FromArgb(16, 255, 255, 255));
				g.FillRectangle(brush, area);
			}
			RectangleF rect = new RectangleF(area.X + 6f, area.Y + 3f, 92f, 62f);
			if (miniaturas[i % 3] != null)
			{
				g.DrawImage(miniaturas[i % 3], rect);
			}
			using (Pen pen = new Pen(Color.FromArgb(Hover(widget) ? 160 : 70, Prata), 1f))
			{
				g.DrawRectangle(pen, rect.X, rect.Y, rect.Width, rect.Height);
			}
			float num = rect.Right + 12f;
			float largura = area.Right - num - 4f;
			Texto.Simples(g, DataNoticia(noticia.Data), Texto.Corpo(10f), Apagado, num, area.Y + 2f);
			Texto.Espacado(g, Texto.Corta(g, noticia.Titulo.ToUpper(CultureInfo.CurrentCulture), Texto.Cinzel(11.5f), largura, 0.8f), Texto.Cinzel(11.5f), Branco, num, area.Y + 16f, 0.8f);
			Texto.Quebra(g, noticia.Resumo, Texto.Corpo(11.5f), Cinza, new RectangleF(num, area.Y + 33f, largura, 32f), 2);
			if (i < noticias.Count - 1)
			{
				using Pen pen2 = new Pen(Color.FromArgb(26, 255, 255, 255), 1f);
				g.DrawLine(pen2, area.X + 4f, area.Bottom + 2f, area.Right - 4f, area.Bottom + 2f);
			}
		}
	}

	private void PintaRanking(Graphics g)
	{
		RectangleF pRanking = PRanking;
		Painel(g, pRanking, "TOP PLAYERS");
		Aba(g, widgets[6], L.T("LEVEL", "NÍVEL"), abaRanking == "level");
		Aba(g, widgets[7], "PVP", abaRanking == "pvp");
		List<Jogador> value = null;
		if (ranking != null)
		{
			ranking.TryGetValue(abaRanking, out value);
		}
		if (value == null || value.Count == 0)
		{
			string t = ((ranking == null) ? "--" : L.T("BE THE FIRST", "SEJA O PRIMEIRO"));
			string t2 = ((ranking != null) ? L.T("The ranking opens with the first heroes.", "O ranking abre com os primeiros heróis.") : (rankingFalhou ? L.T("Ranking unavailable right now.", "Ranking indisponível agora.") : ""));
			Font f = Texto.Cinzel(15f);
			float num = Texto.Largura(g, t, f, 1.5f);
			Estrela(g, pRanking.X + pRanking.Width / 2f, pRanking.Y + 120f, 14f, 1f);
			Texto.Espacado(g, t, f, Branco, pRanking.X + (pRanking.Width - num) / 2f, pRanking.Y + 146f, 1.5f);
			Texto.Centro(g, t2, Texto.Corpo(11.5f), Cinza, new RectangleF(pRanking.X + 20f, pRanking.Y + 172f, pRanking.Width - 40f, 20f));
			return;
		}
		for (int i = 0; i < value.Count; i++)
		{
			Jogador jogador = value[i];
			float num2 = pRanking.Y + 54f + (float)i * 42.5f;
			RectangleF r = new RectangleF(pRanking.X + 26f, num2 + 3f, 34f, 34f);
			using (GraphicsPath path = Chanfro(r, 4f))
			{
				using SolidBrush brush = new SolidBrush(Color.FromArgb((i == 0) ? 40 : 18, 255, 255, 255));
				g.FillPath(brush, path);
			}
			Moldura(g, r, 4f, (i < 3) ? 170 : 90);
			Font f2 = Texto.Cinzel(15f);
			string t3 = (i + 1).ToString(CultureInfo.InvariantCulture);
			Texto.Espacado(g, t3, f2, (i < 3) ? Branco : Cinza, r.X + (r.Width - Texto.Largura(g, t3, f2, 0f)) / 2f, r.Y + 7f, 0f);
			float num3 = r.Right + 14f;
			string t4 = ((abaRanking == "level") ? ("Lv " + jogador.Nivel) : (jogador.Pvp + " PvP"));
			Font font = Texto.Corpo(12.5f);
			float num4 = g.MeasureString(t4, font, PointF.Empty, StringFormat.GenericTypographic).Width;
			Texto.Espacado(g, Texto.Corta(g, jogador.Nome.ToUpperInvariant(), Texto.Cinzel(12f), pRanking.Right - 30f - num4 - num3 - 18f, 0.8f), Texto.Cinzel(12f), Branco, num3, num2 + 5f, 0.8f);
			Texto.Simples(g, string.IsNullOrEmpty(jogador.Clan) ? L.T("No clan", "Sem clã") : jogador.Clan, Texto.Corpo(10.5f), Apagado, num3, num2 + 22f);
			Texto.Simples(g, t4, font, Branco, pRanking.Right - 30f - num4, num2 + 11f);
			if (jogador.Online)
			{
				using SolidBrush brush2 = new SolidBrush(Verde);
				g.FillEllipse(brush2, pRanking.Right - 30f - num4 - 12f, num2 + 17f, 6f, 6f);
			}
			if (i < value.Count - 1)
			{
				using Pen pen = new Pen(Color.FromArgb(24, 255, 255, 255), 1f);
				g.DrawLine(pen, num3, num2 + 41f, pRanking.Right - 26f, num2 + 41f);
			}
		}
	}

	private void PintaStatus(Graphics g)
	{
		RectangleF pStatus = PStatus;
		Painel(g, pStatus, "STATUS");
		string t = ((!servidorOnline.HasValue) ? "--" : (servidorOnline.Value ? L.T("SERVER ONLINE", "SERVIDOR ONLINE") : L.T("SERVER OFFLINE", "SERVIDOR OFFLINE")));
		Color color = ((!servidorOnline.HasValue) ? Apagado : (servidorOnline.Value ? Verde : Vermelho));
		Font f = Texto.Cinzel(9.5f);
		float num = Texto.Largura(g, t, f, 0.8f);
		Texto.Espacado(g, t, f, color, pStatus.Right - 26f - num, pStatus.Y + 23f, 0.8f);
		using (SolidBrush brush = new SolidBrush(color))
		{
			g.FillEllipse(brush, pStatus.Right - 26f - num - 13f, pStatus.Y + 25.5f, 7f, 7f);
		}
		if (servidorOnline == true)
		{
			using SolidBrush brush2 = new SolidBrush(Color.FromArgb(50, color));
			g.FillEllipse(brush2, pStatus.Right - 26f - num - 16f, pStatus.Y + 22.5f, 13f, 13f);
		}
		var array = new[]
		{
			new
			{
				I = 0,
				R = "PLAYERS ONLINE",
				V = (jogadoresOnline?.ToString("N0", CultureInfo.InvariantCulture) ?? "--")
			},
			new
			{
				I = 1,
				R = L.T("VERSION", "VERSÃO"),
				V = "Unity Interlude"
			},
			new
			{
				I = 2,
				R = "EXP RATE",
				V = "x7 (VIP x10)"
			},
			new
			{
				I = 3,
				R = "SP RATE",
				V = "x7 (VIP x10)"
			},
			new
			{
				I = 4,
				R = "DROP RATE",
				V = "x3 (VIP x4.5)"
			},
			new
			{
				I = 5,
				R = "ADENA RATE",
				V = "x3 (VIP x4.5)"
			}
		};
		for (int i = 0; i < array.Length; i++)
		{
			float num2 = pStatus.Y + 54f + (float)i * 35.5f;
			Icone(g, array[i].I, pStatus.X + 36f, num2 + 16f);
			Texto.Espacado(g, array[i].R, Texto.Cinzel(11f), Branco, pStatus.X + 58f, num2 + 9f, 1f);
			Font font = Texto.Corpo(12.5f);
			float num3 = g.MeasureString(array[i].V, font, PointF.Empty, StringFormat.GenericTypographic).Width;
			Texto.Simples(g, array[i].V, font, Branco, pStatus.Right - 28f - num3, num2 + 8f);
			if (i < array.Length - 1)
			{
				using Pen pen = new Pen(Color.FromArgb(24, 255, 255, 255), 1f);
				g.DrawLine(pen, pStatus.X + 24f, num2 + 33f, pStatus.Right - 24f, num2 + 33f);
			}
		}
	}

	private void PintaRodape(Graphics g)
	{
		RectangleF pBarra = PBarra;
		using (GraphicsPath path = Chanfro(pBarra, 7f))
		{
			using SolidBrush brush = new SolidBrush(Color.FromArgb(235, 9, 9, 11));
			g.FillPath(brush, path);
		}
		Moldura(g, pBarra, 7f, 120);
		Moldura(g, RectangleF.Inflate(pBarra, -4f, -4f), 5f, 30);
		string text = "";
		string text2 = "";
		double num = 0.0;
		bool flag = false;
		long num2 = ((at != null) ? Interlocked.Read(ref at.Feito) : 0);
		long num3 = ((at != null) ? Interlocked.Read(ref at.Total) : 0);
		string text3;
		switch (estado)
		{
		case Estado.Conferindo:
		{
			Atualizador atualizador = at;
			text3 = (((((atualizador != null) ? atualizador.Fase : null) ?? "").Length > 0) ? at.Fase : L.T("Checking for updates", "Procurando atualizações"));
			if (num3 > 0)
			{
				num = (double)num2 / (double)num3;
				text = Formata.Bytes(num2) + " / " + Formata.Bytes(num3);
			}
			text3 += "...";
			break;
		}
		case Estado.Trabalhando:
		{
			Atualizador atualizador2 = at;
			text3 = ((atualizador2 != null) ? atualizador2.Fase : null) + "...";
			if (num3 > 0)
			{
				num = (double)num2 / (double)num3;
				text = Formata.Bytes(num2) + " / " + Formata.Bytes(num3) + " (" + (int)(num * 100.0) + "%)";
				if (at.Rede > 0 && at.ArqTotal > 0 && at.Fase == L.T("Updating files", "Atualizando arquivos") && velocidade > 0.0)
				{
					bool flag2 = tempo.Elapsed.TotalSeconds - inicioTrabalho > 8.0;
					text = text + "  ·  " + (flag2 ? (Formata.Tempo((double)(num3 - num2) / velocidade) + L.T(" left", " restantes")) : L.T("calculating time...", "calculando o tempo..."));
					text2 = Formata.Bytes(velocidade) + "/s";
				}
			}
			break;
		}
		case Estado.Pronto:
			text3 = L.T("Ready to play", "Pronto para jogar");
			num = 1.0;
			text = L.T("Version ", "Versão ") + manifesto?.Versao;
			break;
		case Estado.Atualizar:
			text3 = L.T("Update available", "Atualização disponível");
			text = Formata.Bytes(plano?.Bytes ?? 0) + "  ·  " + (plano?.Baixar.Count ?? 0) + L.T(" files", " arquivos");
			break;
		case Estado.Instalar:
			text3 = L.T("Ready to install", "Pronto para instalar");
			text = Formata.Bytes(plano?.Bytes ?? 0) + "  ·  " + L.T("click INSTALL", "clique em INSTALAR");
			break;
		default:
			text3 = erro ?? "";
			flag = true;
			break;
		}
		float num4 = pBarra.X + 20f;
		float num5 = pBarra.Right - 20f;
		if (flag)
		{
			Texto.Quebra(g, text3, Texto.Corpo(11.5f), Vermelho, new RectangleF(num4, pBarra.Y + 9f, pBarra.Width - 230f, 30f), 2);
		}
		else
		{
			Texto.Espacado(g, Texto.Corta(g, text3.ToUpper(CultureInfo.CurrentCulture), Texto.Cinzel(11f), 420f, 1.2f), Texto.Cinzel(11f), Branco, num4, pBarra.Y + 11f, 1.2f);
		}
		if (estado == Estado.Erro)
		{
			Link(g, wTentar, L.T("RETRY", "TENTAR DE NOVO"));
		}
		else
		{
			Font f = Texto.Cinzel(11f);
			float num6 = ((text2.Length > 0) ? Texto.Largura(g, text2, f, 0.6f) : 0f);
			if (num6 > 0f)
			{
				Texto.Espacado(g, text2, f, Branco, num5 - num6, pBarra.Y + 11f, 0.6f);
			}
			Font font = Texto.Corpo(11.5f);
			float num7 = g.MeasureString(text, font, PointF.Empty, StringFormat.GenericTypographic).Width;
			Texto.Simples(g, text, font, Cinza, num5 - num6 - (float)((num6 > 0f) ? 34 : 0) - num7, pBarra.Y + 10f);
		}
		RectangleF r = new RectangleF(num4, pBarra.Y + 35f, pBarra.Width - 40f, 9f);
		using (GraphicsPath path2 = Arredondado(r, 4.5f))
		{
			using (SolidBrush brush2 = new SolidBrush(Color.FromArgb(255, 22, 22, 26)))
			{
				g.FillPath(brush2, path2);
			}
			using Pen pen = new Pen(Color.FromArgb(60, 255, 255, 255), 1f);
			g.DrawPath(pen, path2);
		}
		if (num > 0.0)
		{
			RectangleF rectangleF = new RectangleF(r.X + 1.5f, r.Y + 1.5f, (float)Math.Max(6.0, (double)(r.Width - 3f) * Math.Min(1.0, num)), r.Height - 3f);
			using (GraphicsPath path3 = Arredondado(RectangleF.Inflate(rectangleF, 3f, 3f), 6f))
			{
				using SolidBrush brush3 = new SolidBrush(Color.FromArgb(28, 255, 255, 255));
				g.FillPath(brush3, path3);
			}
			using GraphicsPath path4 = Arredondado(rectangleF, 3f);
			using LinearGradientBrush brush4 = new LinearGradientBrush(rectangleF, Color.FromArgb(255, 205, 205, 212), Color.FromArgb(255, 255, 255, 255), 0f);
			g.FillPath(brush4, path4);
		}
		PintaJogar(g);
		RectangleF pEngrenagem = PEngrenagem;
		using (GraphicsPath path5 = Chanfro(pEngrenagem, 6f))
		{
			using SolidBrush brush5 = new SolidBrush(Hover(wEngrenagem) ? Color.FromArgb(255, 24, 24, 28) : Color.FromArgb(240, 10, 10, 12));
			g.FillPath(brush5, path5);
		}
		Moldura(g, pEngrenagem, 6f, Hover(wEngrenagem) ? 220 : 130);
		Moldura(g, RectangleF.Inflate(pEngrenagem, -4f, -4f), 4f, 34);
		Engrenagem(g, pEngrenagem.X + pEngrenagem.Width / 2f, pEngrenagem.Y + pEngrenagem.Height / 2f, 12f, Hover(wEngrenagem) ? Branco : Prata);
	}

	private void PintaJogar(Graphics g)
	{
		RectangleF pJogar = PJogar;
		bool flag = wJogar.Ativo();
		bool flag2 = Hover(wJogar);
		bool flag3 = apertado == wJogar && flag2;
		string t = estado switch
		{
			Estado.Atualizar => L.T("UPDATE", "ATUALIZAR"), 
			Estado.Instalar => L.T("INSTALL", "INSTALAR"), 
			Estado.Erro => (manifesto == null && JogoInstalado()) ? L.T("PLAY", "JOGAR") : L.T("RETRY", "TENTAR"), 
			_ => L.T("PLAY", "JOGAR"), 
		};
		using (GraphicsPath path = Hexagono(pJogar, 20f))
		{
			using (LinearGradientBrush brush = new LinearGradientBrush(pJogar, flag3 ? Color.FromArgb(10, 10, 12) : Color.FromArgb(flag2 ? 52 : 34, flag2 ? 52 : 34, flag2 ? 58 : 38), Color.FromArgb(6, 6, 7), 90f))
			{
				g.FillPath(brush, path);
			}
			if (flag2)
			{
				using Pen pen = new Pen(Color.FromArgb(40, 255, 255, 255), 7f);
				g.DrawPath(pen, path);
			}
			using LinearGradientBrush brush2 = new LinearGradientBrush(pJogar, Color.FromArgb(flag ? 255 : 120, 250, 250, 252), Color.FromArgb(flag ? 255 : 110, 120, 120, 130), 90f);
			using Pen pen2 = new Pen(brush2, 2.2f);
			g.DrawPath(pen2, path);
		}
		using (GraphicsPath path2 = Hexagono(RectangleF.Inflate(pJogar, -6f, -6f), 16f))
		{
			using Pen pen3 = new Pen(Color.FromArgb(flag ? 110 : 50, Prata), 1f);
			g.DrawPath(pen3, path2);
		}
		Estrela(g, pJogar.X + 18f, pJogar.Y + pJogar.Height / 2f, 8f, flag ? 1f : 0.5f);
		Estrela(g, pJogar.Right - 18f, pJogar.Y + pJogar.Height / 2f, 8f, flag ? 1f : 0.5f);
		Estrela(g, pJogar.X + pJogar.Width / 2f, pJogar.Y, 12f, (!flag) ? 0.4f : (flag2 ? 1.4f : 1.1f));
		float num = 28f;
		Font font;
		while (true)
		{
			font = Texto.Cinzel(num);
			if (Texto.Largura(g, t, font, 2f) <= pJogar.Width - 84f || num <= 14f)
			{
				break;
			}
			num -= 1f;
		}
		float num2 = Texto.Largura(g, t, font, 2f);
		Color cor = (flag ? Color.FromArgb(255, 248, 248, 250) : Color.FromArgb(120, 120, 128));
		float num3 = pJogar.Y + (pJogar.Height - font.GetHeight(g)) / 2f + (float)(flag3 ? 1 : 0);
		if (flag)
		{
			Texto.Espacado(g, t, font, Color.FromArgb(flag2 ? 90 : 50, 255, 255, 255), pJogar.X + (pJogar.Width - num2) / 2f, num3 + 1.5f, 2f);
		}
		Texto.Espacado(g, t, font, cor, pJogar.X + (pJogar.Width - num2) / 2f, num3, 2f);
	}

	private void Link(Graphics g, Widget w, string texto)
	{
		Font font = Texto.Cinzel(9.5f);
		float num = Texto.Largura(g, texto, font, 0.8f);
		Color color = (Hover(w) ? Branco : Cinza);
		float num2 = w.Area.Right - num - 14f;
		float num3 = w.Area.Y + (w.Area.Height - font.GetHeight(g)) / 2f;
		Texto.Espacado(g, texto, font, color, num2, num3, 0.8f);
		using Pen pen = new Pen(color, 1.1f);
		float num4 = w.Area.Right - 6f;
		float num5 = w.Area.Y + w.Area.Height / 2f;
		g.DrawLines(pen, new PointF[3]
		{
			new PointF(num4 - 3f, num5 - 4f),
			new PointF(num4 + 1f, num5),
			new PointF(num4 - 3f, num5 + 4f)
		});
	}

	private void Aba(Graphics g, Widget w, string texto, bool ativa)
	{
		Font font = Texto.Cinzel(9.5f);
		float num = Texto.Largura(g, texto, font, 0.8f);
		Color cor = (ativa ? Branco : (Hover(w) ? Prata : Apagado));
		float num2 = w.Area.X + (w.Area.Width - num) / 2f;
		float num3 = w.Area.Y + (w.Area.Height - font.GetHeight(g)) / 2f;
		Texto.Espacado(g, texto, font, cor, num2, num3, 0.8f);
		if (ativa)
		{
			using (Pen pen = new Pen(Color.FromArgb(200, Branco), 1f))
			{
				g.DrawLine(pen, num2, w.Area.Bottom - 3f, num2 + num, w.Area.Bottom - 3f);
			}
		}
	}

	private static GraphicsPath Chanfro(RectangleF r, float c)
	{
		GraphicsPath graphicsPath = new GraphicsPath();
		graphicsPath.AddPolygon(new PointF[8]
		{
			new PointF(r.X + c, r.Y),
			new PointF(r.Right - c, r.Y),
			new PointF(r.Right, r.Y + c),
			new PointF(r.Right, r.Bottom - c),
			new PointF(r.Right - c, r.Bottom),
			new PointF(r.X + c, r.Bottom),
			new PointF(r.X, r.Bottom - c),
			new PointF(r.X, r.Y + c)
		});
		return graphicsPath;
	}

	private static GraphicsPath Hexagono(RectangleF r, float ponta)
	{
		GraphicsPath graphicsPath = new GraphicsPath();
		float num = r.Y + r.Height / 2f;
		graphicsPath.AddPolygon(new PointF[6]
		{
			new PointF(r.X + ponta, r.Y),
			new PointF(r.Right - ponta, r.Y),
			new PointF(r.Right, num),
			new PointF(r.Right - ponta, r.Bottom),
			new PointF(r.X + ponta, r.Bottom),
			new PointF(r.X, num)
		});
		return graphicsPath;
	}

	private static GraphicsPath Arredondado(RectangleF r, float raio)
	{
		GraphicsPath graphicsPath = new GraphicsPath();
		float num = Math.Min(raio * 2f, Math.Min(r.Width, r.Height));
		graphicsPath.AddArc(r.X, r.Y, num, num, 180f, 90f);
		graphicsPath.AddArc(r.Right - num, r.Y, num, num, 270f, 90f);
		graphicsPath.AddArc(r.Right - num, r.Bottom - num, num, num, 0f, 90f);
		graphicsPath.AddArc(r.X, r.Bottom - num, num, num, 90f, 90f);
		graphicsPath.CloseFigure();
		return graphicsPath;
	}

	private static void Moldura(Graphics g, RectangleF r, float c, int alfa)
	{
		using GraphicsPath graphicsPath = ((c > 0f) ? Chanfro(r, c) : null);
		using LinearGradientBrush brush = new LinearGradientBrush(new RectangleF(r.X, r.Y - 1f, r.Width, r.Height + 2f), Color.FromArgb(alfa, 225, 225, 232), Color.FromArgb(alfa * 2 / 3, 140, 140, 150), 90f);
		using Pen pen = new Pen(brush, 1f);
		if (graphicsPath != null)
		{
			g.DrawPath(pen, graphicsPath);
		}
		else
		{
			g.DrawRectangle(pen, r.X, r.Y, r.Width, r.Height);
		}
	}

	private static void Losango(Graphics g, float x, float y, float t, Color cor)
	{
		using SolidBrush brush = new SolidBrush(cor);
		g.FillPolygon(brush, new PointF[4]
		{
			new PointF(x, y - t),
			new PointF(x + t, y),
			new PointF(x, y + t),
			new PointF(x - t, y)
		});
	}

	private static void Estrela(Graphics g, float x, float y, float t, float forca)
	{
		using (GraphicsPath graphicsPath = new GraphicsPath())
		{
			graphicsPath.AddEllipse(x - t * 1.6f, y - t * 1.6f, t * 3.2f, t * 3.2f);
			PathGradientBrush pathGradientBrush = new PathGradientBrush(graphicsPath);
			pathGradientBrush.CenterColor = Color.FromArgb((int)Math.Min(255f, 70f * forca), 255, 255, 255);
			pathGradientBrush.SurroundColors = new Color[1] { Color.FromArgb(0, 255, 255, 255) };
			using PathGradientBrush brush = pathGradientBrush;
			g.FillPath(brush, graphicsPath);
		}
		float num = t * 0.22f;
		PointF[] points = new PointF[8]
		{
			new PointF(x, y - t),
			new PointF(x + num, y - num),
			new PointF(x + t * 0.75f, y),
			new PointF(x + num, y + num),
			new PointF(x, y + t),
			new PointF(x - num, y + num),
			new PointF(x - t * 0.75f, y),
			new PointF(x - num, y - num)
		};
		using SolidBrush brush2 = new SolidBrush(Color.FromArgb((int)Math.Min(255f, 235f * Math.Min(1f, forca)), 250, 250, 255));
		g.FillPolygon(brush2, points);
	}

	private static void Engrenagem(Graphics g, float x, float y, float r, Color cor)
	{
		using GraphicsPath graphicsPath = new GraphicsPath();
		int num = 8;
		List<PointF> list = new List<PointF>();
		for (int i = 0; i < num * 4; i++)
		{
			double num2 = Math.PI * 2.0 * (double)i / (double)(num * 4) - Math.PI / (double)(num * 4) * 1.5;
			float num3 = ((i % 4 == 0 || i % 4 == 1) ? r : (r * 0.74f));
			list.Add(new PointF(x + (float)Math.Cos(num2) * num3, y + (float)Math.Sin(num2) * num3));
		}
		graphicsPath.AddPolygon(list.ToArray());
		graphicsPath.AddEllipse(x - r * 0.36f, y - r * 0.36f, r * 0.72f, r * 0.72f);
		graphicsPath.FillMode = FillMode.Alternate;
		using SolidBrush brush = new SolidBrush(cor);
		g.FillPath(brush, graphicsPath);
	}

	private static void Icone(Graphics g, int qual, float x, float y)
	{
		using Pen pen = new Pen(Prata, 1.4f)
		{
			LineJoin = LineJoin.Round
		};
		using SolidBrush brush = new SolidBrush(Prata);
		switch (qual)
		{
		case 0:
		{
			g.FillEllipse(brush, x - 3.6f, y - 8f, 7.2f, 7.2f);
			using GraphicsPath graphicsPath2 = new GraphicsPath();
			graphicsPath2.AddArc(x - 7.5f, y - 0.5f, 15f, 14f, 180f, 180f);
			graphicsPath2.CloseFigure();
			g.FillPath(brush, graphicsPath2);
			break;
		}
		case 1:
			g.DrawEllipse(pen, x - 8f, y - 8f, 16f, 16f);
			Estrela(g, x, y, 7f, 0.6f);
			break;
		case 2:
		case 3:
		{
			for (int i = 0; i < 4; i++)
			{
				double num = Math.PI / 4.0 * (double)i;
				float num2 = (float)Math.Cos(num) * 8f;
				float num3 = (float)Math.Sin(num) * 8f;
				g.DrawLine(pen, x - num2, y - num3, x + num2, y + num3);
			}
			if (qual == 2)
			{
				g.FillEllipse(brush, x - 3f, y - 3f, 6f, 6f);
				break;
			}
			using (SolidBrush brush2 = new SolidBrush(Color.FromArgb(10, 10, 12)))
			{
				g.FillEllipse(brush2, x - 3.5f, y - 3.5f, 7f, 7f);
			}
			g.DrawEllipse(pen, x - 3.5f, y - 3.5f, 7f, 7f);
			break;
		}
		case 4:
		{
			using GraphicsPath graphicsPath = new GraphicsPath();
			graphicsPath.AddLines(new PointF[6]
			{
				new PointF(x - 7f, y - 7f),
				new PointF(x, y - 9f),
				new PointF(x + 7f, y - 7f),
				new PointF(x + 6f, y + 2f),
				new PointF(x, y + 9f),
				new PointF(x - 6f, y + 2f)
			});
			graphicsPath.CloseFigure();
			g.DrawPath(pen, graphicsPath);
			Losango(g, x, y - 1f, 3.2f, Prata);
			break;
		}
		default:
		{
			Font font = Texto.Corpo(18f);
			SizeF sizeF = g.MeasureString("$", font, PointF.Empty, StringFormat.GenericTypographic);
			g.DrawString("$", font, brush, x - sizeF.Width / 2f, y - sizeF.Height / 2f, StringFormat.GenericTypographic);
			break;
		}
		}
	}
}
