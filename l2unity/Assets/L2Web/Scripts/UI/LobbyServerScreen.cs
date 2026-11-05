// Selecao de servidor: NCLoginServerWnd 316x542 com NCServerSelectWnd (0, 0, 316, 330; Serverselect_back 1:1) e
// NCServerInfoWnd (0, 337, 316, 205; Serverinfo_back 1:1 e um NCHtmlViewer com ..\l2text\server_help.htm). A lista e o
// NCListCtrl do original (estudo lobby_ui_re §2): cabecalho de botoes tab1/2/3 (19 px; colunas 32/111/59/49/49), 15 linhas
// de 17 px, listras textbackline nas linhas impares, linha escolhida TextSelect + TextSelect2, texto de cada celula em
// (coluna + 10, linha + 3), setas da rolagem em x 285.
using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using L2Web.Net;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class LobbyServerScreen
    {
        public readonly RectTransform Root;
        public readonly Button Quality, Ok, Cancel;
        readonly RectTransform list, help;
        RenderedHtml helpHtml;
        readonly List<ServerInfo> servers = new();
        int chosen, top;

        /// <summary>Servidor escolhido (OK, duplo clique ou Enter).</summary>
        public Action<int> OnChoose;
        public Action OnCancel;

        /// <summary>FUN_100379e0 com GLanguageType 1: (largura, sysstring do titulo).</summary>
        static readonly (float W, int Sys)[] Columns = { (32, 416), (111, 451), (59, 452), (49, 601), (49, 602) };
        public const int Rows = 15, RowH = 17, HeaderH = 19;
        static readonly Color Cell = new Color32(0xdc, 0xdc, 0xdc, 0xff), Title = new Color32(0xe6, 0xdc, 0xbe, 0xff);

        public LobbyServerScreen(RectTransform parent)
        {
            Root = LobbyUi.Screen(parent, "scrServers");
            LobbyUi.Logos(Root);
            var frame = NativeLayout.LoginServer.Apply(UiRoot.Box("lb-loginserver", Root));
            var box = NativeLayout.ServerSelect.Apply(UiRoot.Box("lb-servers", frame));
            L2WndUtil.Paint(UiRoot.Box("Serverselect_back", box, 0, 0, 316, 330), "L2UI_CH3.ServerSelectWnd.serverselect_back", 316, 330, PaintMode.Normal, 0, 0, 316, 330);
            var lr = NativeLayout.ServerList;
            list = UiRoot.Box("NCServerSelectListCtrl", box, lr.X, lr.Y, 300, 274);
            list.gameObject.AddComponent<Image>().color = new Color(0, 0, 0, 0.001f);
            UiEvents.Of(list).OnWheel = e =>
            {
                top = Mathf.Clamp(top - (int)Mathf.Sign(e.scrollDelta.y), 0, Mathf.Max(0, servers.Count - Rows));
                Render();
            };
            Quality = LobbySkin.NativeButton(box, GameData.SysString(603, "Quality"), NativeLayout.ServerQuality, "L2UI_CH3.Button.Btn1_normal", "L2UI_CH3.Button.Btn1_normalOn", SortByPing);
            Ok = LobbySkin.NativeButton(box, GameData.SysString(140, "OK"), NativeLayout.ServerOk, "L2UI_CH3.Button.Btn1_normal", "L2UI_CH3.Button.Btn1_normalOn", () => { if (chosen != 0) OnChoose?.Invoke(chosen); });
            Cancel = LobbySkin.NativeButton(box, GameData.SysString(141, "Cancel"), NativeLayout.ServerCancel, "L2UI_CH3.Button.Btn1_normal", "L2UI_CH3.Button.Btn1_normalOn", () => OnCancel?.Invoke());

            var info = NativeLayout.ServerInfo.Apply(UiRoot.Box("lb-srvinfo", frame));
            L2WndUtil.Paint(UiRoot.Box("Serverinfo_back", info, 0, 0, 316, 205), "L2UI_CH3.ServerSelectWnd.serverinfo_back", 316, 205, PaintMode.Normal, 0, 0, 316, 205);
            help = UiRoot.Box("NCHtmlViewer", info, 7, 7, 302, 191);
            help.gameObject.AddComponent<RectMask2D>();
            LoadHelp("server_help.htm");
        }

        /// <summary>Arquivo local de ..\l2text (Lineage2Ver111: UTF-16 com XOR 0xAC), da copia do cliente.</summary>
        public static string ReadL2Text(string name)
        {
            try
            {
                var f = Path.Combine(Application.streamingAssetsPath, "L2Web", "client", "l2text", Path.GetFileName(name));
                if (!File.Exists(f)) return null;
                var raw = File.ReadAllBytes(f);
                var b = L2Files.Version(raw) != 0 ? L2Files.Decrypt(raw, name) : raw;
                var s = Encoding.Unicode.GetString(b);
                if (s.Length > 0 && s[0] == '﻿') s = s.Substring(1);
                // o Ver111 termina com um rodape de 20 bytes que nao e texto: fica so ate o ultimo '>'
                var end = s.LastIndexOf('>');
                return end >= 0 ? s.Substring(0, end + 1) : s;
            }
            catch (Exception e)
            {
                Debug.LogWarning("l2text " + name + ": " + e.Message);
                return null;
            }
        }

        /// <summary>NCHtmlViewer::LoadHtml: &lt;a link=...&gt; carrega outro arquivo local (sem pacote).</summary>
        void LoadHelp(string name)
        {
            var html = ReadL2Text(name);
            UiKit.Clear(help);
            if (html == null) return;
            var act = new HtmlActions { Link = l => LoadHelp(l.Replace("\\", "/")), File = l => LoadHelp(HelpHtmlView.FileName(l)) };
            // o viewer do server_help.htm tem 302 de largura; o L2Html poe o documento em (0, 0) com a altura dele
            helpHtml = L2Html.Render(html, act, help, 302);
            var body = helpHtml.Body;
            if (Array.IndexOf(Environment.GetCommandLineArgs(), "-l2partlog") >= 0)
            {
                var texts = body.GetComponentsInChildren<Text>(true);
                Debug.Log($"[help] {name} html={html.Length} filhos={body.childCount} textos={texts.Length} " + string.Join(" | ", Array.ConvertAll(texts, t => t.text + "@" + t.rectTransform.rect + t.color)));
            }
        }

        public bool Visible
        {
            get => Root.gameObject.activeSelf;
            set => Root.gameObject.SetActive(value);
        }

        public int Chosen => chosen;

        /// <summary>
        /// Traffic (FUN_101a99d0): fora do ar = ss456 "Down" vermelho; max &lt; 1 = ss457 "Normal"; ocupacao &gt;= 80% ou &gt;= 3700
        /// jogadores = ss458 "Heavy" #ff8080; acima de 50% = ss457 "Normal" #bfae64; senao ss466 "Light" #64a3d9.
        /// </summary>
        public static (string text, Color32 color) Traffic(ServerInfo s)
        {
            if (!s.Up) return (GameData.SysString(456, "Down"), new Color32(0xff, 0, 0, 0xff));
            if (s.Max < 1) return (GameData.SysString(457, "Normal"), new Color32(0xbf, 0xae, 0x64, 0xff));
            var pct = s.Online * 100.0 / s.Max;
            if (pct >= 80 || s.Online >= 3700) return (GameData.SysString(458, "Heavy"), new Color32(0xff, 0x80, 0x80, 0xff));
            if (pct > 50) return (GameData.SysString(457, "Normal"), new Color32(0xbf, 0xae, 0x64, 0xff));
            return (GameData.SysString(466, "Light"), new Color32(0x64, 0xa3, 0xd9, 0xff));
        }

        /// <summary>No. (FUN_101a84e0): "0%d" abaixo de 10.</summary>
        public static string Number(int id) => id < 10 ? "0" + id : id.ToString();

        /// <summary>Preenche a lista; o primeiro servidor no ar fica escolhido.</summary>
        public void SetServers(IList<ServerInfo> list)
        {
            servers.Clear();
            servers.AddRange(list);
            chosen = 0;
            top = 0;
            foreach (var s in list)
                if (s.Up)
                {
                    chosen = s.Id;
                    break;
                }
            LoadHelp("server_help.htm");
            Render();
            foreach (var s in list)
                if (s.Up && !pings.ContainsKey(s.Id))
                    MeasurePing(s).Forget();
        }

        // ------------------------------------------------------------ ping (s_info.ini)
        readonly Dictionary<int, int> pings = new();

        /// <summary>s_info.ini do port (o original grava System\s_info.ini: [id] Time=ms; [Date] Time).</summary>
        public static string SInfoPath => Path.Combine(Application.persistentDataPath, "s_info.ini");

        /// <summary>Celula Ping: o Time do s_info.ini (%d) quando houver; senao "9999" ate a resposta.</summary>
        string PingText(int id)
        {
            if (pings.TryGetValue(id, out var ms)) return ms.ToString();
            var t = SInfoTime(id);
            return t >= 0 ? t.ToString() : "9999";
        }

        public static int SInfoTime(int id)
        {
            try
            {
                if (!File.Exists(SInfoPath)) return -1;
                var section = "";
                foreach (var line in File.ReadAllLines(SInfoPath))
                {
                    var l = line.Trim();
                    if (l.StartsWith("[")) section = l.Trim('[', ']');
                    else if (section == id.ToString() && l.StartsWith("Time=") && int.TryParse(l.Substring(5), out var v)) return v;
                }
            }
            catch (Exception e)
            {
                Debug.LogWarning("s_info.ini: " + e.Message);
            }
            return -1;
        }

        /// <summary>
        /// [I] o ping do console (vt+0x454) nao foi reconstruido: ICMP ao servidor de jogo (ou, sem resposta, o tempo de conexao TCP; servidor
        /// local = 0, como o Time=0 que o original gravou) e grava no s_info.ini.
        /// </summary>
        async System.Threading.Tasks.Task MeasurePing(ServerInfo s)
        {
            // ICMP primeiro (round-trip em ms, servidor local = 0 como o Time=0 do original); sem resposta, a conexao TCP
            try
            {
                using var icmp = new System.Net.NetworkInformation.Ping();
                var reply = await icmp.SendPingAsync(s.Ip, 2000);
                if (reply.Status == System.Net.NetworkInformation.IPStatus.Success)
                {
                    pings[s.Id] = (int)reply.RoundtripTime;
                    SaveSInfo();
                    if (Root) Render();
                    return;
                }
            }
            catch (Exception)
            {
                // sem ICMP (bloqueado ou indisponivel): cai para o TCP
            }
            var sw = System.Diagnostics.Stopwatch.StartNew();
            try
            {
                using var tcp = new System.Net.Sockets.TcpClient();
                var connect = tcp.ConnectAsync(s.Ip, s.Port);
                if (await System.Threading.Tasks.Task.WhenAny(connect, System.Threading.Tasks.Task.Delay(3000)) != connect || !tcp.Connected) return;
            }
            catch (Exception)
            {
                return;
            }
            pings[s.Id] = (int)sw.ElapsedMilliseconds;
            SaveSInfo();
            if (Root) Render();
        }

        void SaveSInfo()
        {
            try
            {
                var sb = new StringBuilder();
                foreach (var kv in pings) sb.Append('[').Append(kv.Key).Append("]\r\nTime=").Append(kv.Value).Append("\r\n\r\n");
                // [Date] Time (740519 no original) tem formato desconhecido: nao e gravado
                File.WriteAllText(SInfoPath, sb.ToString());
            }
            catch (Exception e)
            {
                Debug.LogWarning("s_info.ini: " + e.Message);
            }
        }

        /// <summary>Quality (OnSortBtnClick 0x101a8fb0): ordena pela coluna Ping (todas "9999" ate o ping responder).</summary>
        void SortByPing() => Render();

        Text Label(RectTransform p, string s, float x, float y, float w, Color c, TextAnchor a = TextAnchor.UpperLeft)
        {
            var t = UiRoot.Label(p, s, x, y, w, 15, 11, c, a);
            t.horizontalOverflow = HorizontalWrapMode.Overflow;
            t.verticalOverflow = VerticalWrapMode.Overflow;
            t.raycastTarget = false;
            return t;
        }

        void Render()
        {
            UiKit.Clear(list);
            // cabecalho: 3 pedacos tab1/tab2/tab3 (UV 0,0,8,19), titulo centrado (+1) em #e6dcbe
            var x = 0f;
            foreach (var (w, sys) in Columns)
            {
                var h = UiRoot.Box("header", list, x, 0, w, HeaderH);
                L2WndUtil.Paint(UiRoot.Box("tab1", h, 0, 0, 8, HeaderH), "L2UI_CH3.ListCtrl.tab1", 8, HeaderH, PaintMode.Stretch, 0, 0, 8, 19);
                L2WndUtil.Paint(UiRoot.Box("tab2", h, 8, 0, w - 16, HeaderH), "L2UI_CH3.ListCtrl.tab2", w - 16, HeaderH, PaintMode.Stretch, 0, 0, 8, 19);
                L2WndUtil.Paint(UiRoot.Box("tab3", h, w - 8, 0, 8, HeaderH), "L2UI_CH3.ListCtrl.tab3", 8, HeaderH, PaintMode.Stretch, 0, 0, 8, 19);
                Label(h, GameData.SysString(sys, ""), 0, 3, w, Title, TextAnchor.UpperCenter);
                x += w;
            }
            // listras fixas nas linhas impares da tela, largura total
            for (var i = 1; i <= Rows; i += 2)
                L2WndUtil.Paint(UiRoot.Box("textbackline", list, 0, HeaderH + RowH * i - 1, 300, RowH), "L2UI_CH3.Etc.textbackline", 300, RowH, PaintMode.Stretch, 0, 0, 8, 15);
            for (var r = 0; r < Rows && top + r < servers.Count; r++)
            {
                var s = servers[top + r];
                var y = RowH * r + HeaderH - 1;
                if (s.Id == chosen)
                {
                    L2WndUtil.Paint(UiRoot.Box("TextSelect", list, 1, y, 251, RowH), "L2UI_CH3.ListCtrl.TextSelect", 251, RowH, PaintMode.Stretch, 0, 0, 16, 13);
                    L2WndUtil.Paint(UiRoot.Box("TextSelect2", list, 252, y, 32, RowH), "L2UI_CH3.ListCtrl.TextSelect2", 32, RowH, PaintMode.Stretch, 0, 0, 32, 13);
                }
                var (tt, tc) = Traffic(s);
                var cells = new (string text, Color c)[] { (Number(s.Id), Cell), (GameData.ServerName(s.Id), Cell), (tt, tc), (PingText(s.Id), Cell), ("", Cell) };
                var cx = 0f;
                for (var c = 0; c < cells.Length; c++)
                {
                    var clip = UiRoot.Box("cell", list, cx, RowH * r + HeaderH + 3 - 1, Columns[c].W, 15);
                    clip.gameObject.AddComponent<RectMask2D>();
                    Label(clip, cells[c].text, 10, 1, Columns[c].W, cells[c].c);
                    cx += Columns[c].W;
                }
                var hit = UiRoot.Box("row", list, 0, y, 285, RowH);
                hit.gameObject.AddComponent<Image>().color = new Color(0, 0, 0, 0.001f);
                var srv = s;
                UiEvents.Of(hit).OnClick = e =>
                {
                    if (!srv.Up) return;
                    chosen = srv.Id;
                    Render();
                    if (e.clickCount >= 2) OnChoose?.Invoke(srv.Id);
                };
            }
            // rolagem (NCListCtrl::InitScrollBar): setas em (285, 19) e (285, 259); o cursor so com mais itens que linhas
            var up = UiRoot.Box("up", list, 285, HeaderH, 15, 15);
            L2WndUtil.Button(up, "L2UI_CH3.ScrollBar.ScrollBarUpBtn", "L2UI_CH3.ScrollBar.ScrollBarUpOnBtn", "L2UI_CH3.ScrollBar.ScrollBarUpBtn_over", 15, 15).OnClick = () =>
            {
                top = Mathf.Max(0, top - 1);
                Render();
            };
            var dn = UiRoot.Box("down", list, 285, 274 - 15, 15, 15);
            L2WndUtil.Button(dn, "L2UI_CH3.ScrollBar.ScrollBarDownBtn", "L2UI_CH3.ScrollBar.ScrollBarDownOnBtn", "L2UI_CH3.ScrollBar.ScrollBarDownBtn_over", 15, 15).OnClick = () =>
            {
                top = Mathf.Min(Mathf.Max(0, servers.Count - Rows), top + 1);
                Render();
            };
        }
    }
}
