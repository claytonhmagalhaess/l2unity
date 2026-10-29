using System;
using System.Collections.Generic;
using System.Drawing;
using System.Drawing.Text;
using System.Runtime.InteropServices;

namespace SparkLauncher;

internal static class Texto
{
	private static readonly PrivateFontCollection colecao;

	private static readonly FontFamily cinzel;

	private static readonly FontFamily corpo;

	private static readonly Dictionary<string, Font> fontes;

	private static readonly StringFormat tipo;

	private static readonly Dictionary<string, float> avancos;

	static Texto()
	{
		colecao = new PrivateFontCollection();
		fontes = new Dictionary<string, Font>();
		tipo = StringFormat.GenericTypographic;
		avancos = new Dictionary<string, float>();
		string[] array = new string[2] { "cinzel-400.ttf", "cinzel-700.ttf" };
		for (int i = 0; i < array.Length; i++)
		{
			byte[] array2 = Recurso.Bytes(array[i]);
			IntPtr intPtr = Marshal.AllocCoTaskMem(array2.Length);
			Marshal.Copy(array2, 0, intPtr, array2.Length);
			colecao.AddMemoryFont(intPtr, array2.Length);
		}
		cinzel = ((colecao.Families.Length != 0) ? colecao.Families[0] : FontFamily.GenericSerif);
		corpo = (Existe("Palatino Linotype") ? new FontFamily("Palatino Linotype") : (Existe("Georgia") ? new FontFamily("Georgia") : FontFamily.GenericSerif));
	}

	private static bool Existe(string nome)
	{
		try
		{
			using (new FontFamily(nome))
			{
				return true;
			}
		}
		catch
		{
			return false;
		}
	}

	private static Font Pega(FontFamily fam, float px, FontStyle st)
	{
		string key = fam.Name + "|" + px + "|" + st;
		if (!fontes.TryGetValue(key, out var value))
		{
			if (!fam.IsStyleAvailable(st))
			{
				st = FontStyle.Regular;
			}
			value = new Font(fam, px, st, GraphicsUnit.Pixel);
			fontes[key] = value;
		}
		return value;
	}

	public static Font Cinzel(float px, bool negrito = false)
	{
		return Pega(cinzel, px, negrito ? FontStyle.Bold : FontStyle.Regular);
	}

	public static Font Corpo(float px)
	{
		return Pega(corpo, px, FontStyle.Regular);
	}

	public static float Largura(Graphics g, string t, Font f, float espaco)
	{
		if (string.IsNullOrEmpty(t))
		{
			return 0f;
		}
		float num = 0f;
		foreach (char c in t)
		{
			num += Avanco(g, c, f) + espaco;
		}
		return num - espaco;
	}

	private static float Avanco(Graphics g, char c, Font f)
	{
		string key = f.Name + f.Size + f.Style.ToString() + c;
		if (!avancos.TryGetValue(key, out var value))
		{
			value = ((c != ' ') ? g.MeasureString(c.ToString(), f, PointF.Empty, tipo).Width : (g.MeasureString("a a", f, PointF.Empty, tipo).Width - g.MeasureString("aa", f, PointF.Empty, tipo).Width));
			avancos[key] = value;
		}
		return value;
	}

	public static void Espacado(Graphics g, string t, Font f, Color cor, float x, float y, float espaco)
	{
		if (string.IsNullOrEmpty(t))
		{
			return;
		}
		using SolidBrush brush = new SolidBrush(cor);
		if (espaco == 0f)
		{
			g.DrawString(t, f, brush, x, y, tipo);
			return;
		}
		for (int i = 0; i < t.Length; i++)
		{
			char c = t[i];
			if (c != ' ')
			{
				g.DrawString(c.ToString(), f, brush, x, y, tipo);
			}
			x += Avanco(g, c, f) + espaco;
		}
	}

	public static string Corta(Graphics g, string t, Font f, float largura, float espaco)
	{
		if (Largura(g, t, f, espaco) <= largura)
		{
			return t;
		}
		while (t.Length > 1 && Largura(g, t + "...", f, espaco) > largura)
		{
			t = t.Substring(0, t.Length - 1);
		}
		return t.TrimEnd() + "...";
	}

	public static void Simples(Graphics g, string t, Font f, Color cor, float x, float y)
	{
		using SolidBrush brush = new SolidBrush(cor);
		g.DrawString(t ?? "", f, brush, x, y, tipo);
	}

	public static void Quebra(Graphics g, string t, Font f, Color cor, RectangleF r, int linhas)
	{
		using SolidBrush brush = new SolidBrush(cor);
		using StringFormat format = new StringFormat(StringFormat.GenericTypographic)
		{
			Trimming = StringTrimming.EllipsisWord,
			FormatFlags = StringFormatFlags.LineLimit
		};
		r.Height = Math.Min(r.Height, f.GetHeight(g) * (float)linhas + 1f);
		g.DrawString(t ?? "", f, brush, r, format);
	}

	public static void Centro(Graphics g, string t, Font f, Color cor, RectangleF r)
	{
		using SolidBrush brush = new SolidBrush(cor);
		using StringFormat format = new StringFormat
		{
			Alignment = StringAlignment.Center,
			LineAlignment = StringAlignment.Near,
			Trimming = StringTrimming.EllipsisWord
		};
		g.DrawString(t ?? "", f, brush, r, format);
	}
}
