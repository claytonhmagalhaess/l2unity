// Fluxo do cliente (porte do client/main.ts): login -> servidores -> personagens -> mundo.
// MonoBehaviour unico da cena: monta as telas do lobby e a interface do jogo, liga os pacotes do servidor ao mundo,
// a cena, a interface e o som, e le mouse/teclado (Input System) a cada quadro.
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using L2Web.Net;
using L2Web.Render;
using L2Web.UI;
using L2Web.World;
using UnityEngine;
using UnityEngine.InputSystem;
using GameWorld = L2Web.World.World;

namespace L2Web
{
    public class App : MonoBehaviour
    {
        /// <summary>Instancia ativa (diagnostico pelo script eval, como o window.l2web do navegador).</summary>
        public static App Instance { get; private set; }

        [Tooltip("Previa da HUD sem servidor (o #uitest do navegador).")]
        public bool uiTest;

        [Tooltip("Previa do lobby sem servidor: servers | chars | create (o #lobby= do navegador).")]
        public string lobbyTest = "";

        [Tooltip("Escolhe sozinho o primeiro servidor no ar (testes automaticos).")]
        public bool autoServer;

        // ------------------------------------------------------------------ estado
        GameClient gc;
        LoginResult session;
        List<CharSlot> chars = new();
        int selectedSlot;
        LobbyScene lobby;
        GameScene scene;
        bool inWorld;
        readonly GameWorld world = new();
        GameUi ui;
        SocialUi social;
        SettingsUi settings;
        MusicPlayer music;
        SfxPlayer sfx;
        LoadingScreen loading;
        LobbyLoginScreen scrLogin;
        LobbyServerScreen scrServers;
        LobbyCharsScreen scrChars;
        LobbyCreateScreen scrCreate;
        RectTransform lobbyRoot, gameRoot;
        string current = "scrLogin";
        int targetId;
        bool leaving;
        bool ready;
        readonly List<Action> offs = new();
        TaskCompletionSource<int> serverChoice;
        float deleteArmed;

        public GameWorld World => world;
        public GameClient Gc => gc;
        public GameScene Scene => scene;
        public LobbyScene Lobby => lobby;
        public GameUi Ui => ui;
        /// <summary>Pacotes das janelas da interface (#0046): eventos EV_* e o ultimo pacote lido de cada janela.</summary>
        public InterfaceRouter Interface;
        public bool InWorld => inWorld;
        public string CurrentScreen => current;
        public IReadOnlyList<CharSlot> Chars => chars;

        /// <summary>Camera do lobby (cena do Matinee do Lobby.unr) de cada tela.</summary>
        static readonly Dictionary<string, string> LobbyShot = new() { ["scrLogin"] = "Logon_Warp", ["scrServers"] = "Logon_Warp", ["scrChars"] = "Char_Select_Warp" };

        void Awake()
        {
            Instance = this;
            Application.runInBackground = true;
            Application.targetFrameRate = 120;
            // a cena e as luzes sao criadas pelo GameScene/LobbyScene; a camera e a luz de exemplo da cena saem
            foreach (var l in FindObjectsByType<Light>())
                if (l.type == LightType.Directional)
                    l.gameObject.SetActive(false);
            if (Camera.main) Camera.main.gameObject.SetActive(false);
        }

        async void Start()
        {
            L2Cursor.Load().Forget();
            try
            {
                await Init();
            }
            catch (Exception e)
            {
                Debug.LogException(e);
                scrLogin?.Msg($"Falha ao iniciar: {e.Message}", "err");
            }
        }

        void OnDestroy()
        {
            if (Instance == this) Instance = null;
            gc?.Close();
        }

        async Task Init()
        {
            world.Ground = GeoTerrain.GroundHeight;
            if (LocalAssets.Available)
            {
                world.GroundLayers = LocalAssets.GeoLayers;   // pedido 0051 (#0057): pouso do teleporte em celula multicamada
                GeoTerrain.AllLayers = LocalAssets.GeoLayers; // pedido 0052 (#0056): camada certa ao andar
            }
            Entities.SetDrawHeight(GeoTerrain.VisualFloor);
            var bootCam = BootCamera();
            loading = null;
            // interface original (Interface.xdat + texturas do cliente) e textos precisam estar prontos antes das janelas
            var dataOk = GameData.LoadL2Data();
            var texts = GameData.LoadTexts();
            var uiOk = L2WndUtil.LoadL2Ui();
            await Task.WhenAll(dataOk, texts, uiOk);
            BuildScreens();
            if (!uiOk.Result)
            {
                scrLogin.Msg(Config.UseLocalAssets
                    ? "Interface do cliente ausente na cópia local (" + LocalAssets.Root + "): copie o cache do l2web para lá."
                    : "Interface do cliente não convertida (ou servidor de assets fora do ar em " + Config.AssetBase + "): rode \"node tools/setup.ts --only ui\" e \"node tools/dev.ts\" no l2web.", "err");
                Show("scrLogin");
                return;
            }
            if (!dataOk.Result) scrLogin.Msg("Tabelas do l2anim indisponíveis (/l2anim/data.js): os modelos não vão carregar.", "err");

            ui = new GameUi(gameRoot, world, new UiDeps
            {
                Send = b => gc?.Send(b),
                ActionUse = DoAction,
                Chat = (cls, text, color) => Chat(cls, text, color),
                CancelTarget = () => gc?.Send(GamePackets.CancelTarget()),
                Restart = () => gc?.Send(GamePackets.RequestRestart()),
                Logout = () =>
                {
                    SaveWindowsInfo();
                    gc?.Send(GamePackets.Logout());
                },
                // OptionWnd do xdat (o SettingsUi do porte fica so para a configuracao de servidor/assets da tela de login)
                Options = () => OptionWindow().Toggle(),
                RestartPoint = type => gc?.Send(GamePackets.RequestRestartPoint(type)),
                TargetCommand = cmd =>
                {
                    var t = world.Get(targetId);
                    if (t == null || gc == null) return;
                    if (cmd == "party") gc.Send(SocialPackets.RequestJoinParty(t.Name));
                    else if (cmd == "trade") gc.Send(SocialPackets.TradeRequest(targetId));
                    else gc.Send(SocialPackets.FriendInvite(t.Name));
                },
            });
            ui.OnChatSubmit = OnChatSubmit;
            // GetClickLocation (InventoryWnd.uc:354): ponto do mundo (L2) sob o cursor, para o RequestDropItem (pedido 0027)
            ui.GroundAt = screen =>
            {
                var hit = scene?.Pick(screen.x, screen.y);
                return hit == null ? (Vector3?)null : new Vector3(hit.X, hit.Y, hit.Z);
            };
            // PartyWnd: RequestAction/RequestAttack (FUN_1014c9b0, Shift = 0x10), RequestTargetUser (FUN_1014c6a0) e RequestAssist
            // (FUN_1014c870), sempre com a posicao do proprio pawn
            ui.Party.Action = (id, force) =>
            {
                var s = world.Self;
                if (s == null || gc == null) return;
                var shift = Keyboard.current?.shiftKey.isPressed ?? false;
                int ox = Mathf.RoundToInt(s.X), oy = Mathf.RoundToInt(s.Y), oz = Mathf.RoundToInt(s.Z);
                gc.Send(force ? GamePackets.AttackRequest(id, ox, oy, oz, shift) : GamePackets.Action(id, ox, oy, oz, shift));
            };
            ui.Party.TargetUser = id => ui.Party.Action(id, false);
            ui.Party.Assist = Assist;
            // MinimapWnd: GetPlayerPosition (Location do pawn), Rotation.Yaw do controlador (a camera), hora do jogo, membros
            // com posicao (PartyMemberPosition 0xa7) e GetPartyMemberLocation
            ui.Minimap.Player = () =>
            {
                var s = world.Self;
                return s == null ? (0, 0, 0) : ((int)s.X, (int)s.Y, (int)(s.Z + s.CollisionHeight));
            };
            ui.Minimap.Yaw = () => scene?.Cam.Yaw ?? 0;
            ui.Minimap.PlayerName = () => world.Self?.Name ?? "";
            ui.Minimap.GameHours = () => scene?.Env.T ?? 0;
            ui.Minimap.Send = b => gc?.Send(b);
            ui.Messenger.Send = (to, text) => gc?.Send(new PacketWriter().C(0xcc).S(text).S(to).Bytes());
            ui.Messenger.MyName = () => world.Self?.Name ?? "";
            ui.Minimap.PartyCount = () => social.PartyCount;
            ui.Minimap.Party = () => social.Party.Values.Where(m => partyPos.ContainsKey(m.ObjectId))
                .Select(m => (m.ObjectId, partyPos[m.ObjectId].x, partyPos[m.ObjectId].y, m.Name)).ToList();
            ui.Minimap.PartyMemberLocation = i =>
            {
                var m = social.Party.Values.ElementAtOrDefault(i);
                return m != null && partyPos.TryGetValue(m.ObjectId, out var p) ? p : null;
            };
            chatFlood.SystemMessage = id =>
            {
                var t = GameData.SystemMessage(id, new List<string>());
                Chat("sys", t.Text, t.Color);
                if (!string.IsNullOrEmpty(t.Sound)) sfx?.PlayUi(t.Sound);
            };
            music = new MusicPlayer();
            sfx = new SfxPlayer();
            L2WndUtil.SetUiSound(name => sfx.PlayUi(name));
            // AnimNotify_Sound: com Sound toca o som; sem Sound e passo (piso: terreno do Unreal = Default, senao Stone_Hard)
            world.OnNotify = (e, cls, arg) =>
            {
                if (cls != "Sound" || !e.Actor.Root || !e.Actor.Root.gameObject.activeInHierarchy) return;
                var name = arg;
                if (string.IsNullOrEmpty(name))
                {
                    if (!e.Motion.Moving) return;
                    var h = UeTerrain.UeHeightAt(e.X, e.Y);
                    var surf = h.HasValue && Mathf.Abs(h.Value - e.Z) < 24 ? "default" : "stone_hard";
                    name = AudioUtil.StepSound(surf, Regex.IsMatch(e.Actor.ClipName ?? "", "run", RegexOptions.IgnoreCase));
                }
                sfx.Play(name, e.Actor.Root.position, e == world.Self ? 1f : 0.8f);
            };
            settings = new SettingsUi(gameRoot, new SettingsDeps { Scene = () => scene, Music = music, Sfx = sfx, World = world, Layer = () => ui.Layer });
            settings.Apply();
            social = new SocialUi(gameRoot, new SocialDeps
            {
                Send = b => gc?.Send(b),
                Chat = (cls, text, color) => Chat(cls, text, color),
                NameOf = id => world.Get(id)?.Name ?? $"#{id}",
            });
            GameData.LoadAnimTables().Forget();
            Statics.SetOnTileBuilding(tile => Chat("dbg", $"cenário: exportando o mapa {tile} do cliente (pode levar 1–2 min)..."));
            loading = new LoadingScreen(UiRoot.Rect);
            lobby = new LobbyScene(null, null, null) { OnPick = OnLobbyPick };
            Show("scrLogin");
            if (bootCam) Destroy(bootCam.gameObject);
            ready = true;
            // abertura: cena do lobby (cenario, terreno, BSP) e texturas da interface antes do login aparecer
            try
            {
                await loading.Until("Carregando", Task.WhenAll(lobby.Load(), LobbyUi.ApplyLobbyTheme()), minMs: 300);
            }
            catch (Exception e)
            {
                // cenario do lobby incompleto nao impede o login
                Debug.LogException(e);
            }
            if (LobbyShot.TryGetValue(current, out var shot)) lobby.Play(shot, false);
            else if (current == "scrCreate")
            {
                createRace = -1;
                UpdateCreate("race");
            }

            if (uiTest) UiPreview.Run(ui, () => Show("scrGame"));
            AutoRun().Forget();
            if (lobbyTest == "servers")
                ChooseServer(new List<ServerInfo>
                {
                    new() { Id = 1, Max = 1000, Online = 12, Up = true },
                    new() { Id = 2, Max = 1000, Online = 0, Up = false, Pvp = true },
                }).ContinueWith(_ => { }, TaskScheduler.FromCurrentSynchronizationContext()).Forget();
            if (lobbyTest == "chars" || lobbyTest == "create")
            {
                CharSlot Mk(string name, int race, int sex, int classId, int level) => new()
                {
                    Name = name, Race = race, Sex = sex, ClassId = classId, BaseClassId = classId, Level = level, Hp = 1053, Mp = 224, MaxHp = 1149, MaxMp = 226,
                    Sp = 39000, Exp = 1700000, Paperdoll = new Paperdoll(),
                };
                chars = new List<CharSlot> { Mk("dada", 0, 0, 0, 20), Mk("ADMIN", 0, 0, 0, 80), Mk("adadada", 1, 1, 18, 10), Mk("dsadas", 2, 0, 35, 23), Mk("teste", 3, 0, 44, 5) };
                ShowChars();
                selectedSlot = 3;
                RenderChars();
                if (lobbyTest == "create") NewCharacter();
            }
        }

        /// <summary>Valor de um argumento de linha de comando (-nome valor), ou null.</summary>
        public static string ArgValue(string name) => Arg(name);

        static string Arg(string name)
        {
            var a = Environment.GetCommandLineArgs();
            var i = Array.IndexOf(a, name);
            return i >= 0 && i + 1 < a.Length ? a[i + 1] : null;
        }

        /// <summary>
        /// Teste ponta a ponta no player (o tools/e2e.ts do navegador): -l2login conta:senha entra e escolhe o servidor,
        /// -l2enter slot entra no mundo, -l2shots pasta grava capturas de cada tela, -l2quit segundos sai depois.
        /// </summary>
        async Task AutoRun()
        {
            // -l2events: registra no log cada EV_* despachado (validacao ao vivo do D3 em Docs/validacao.md)
            if (Array.IndexOf(Environment.GetCommandLineArgs(), "-l2events") >= 0) L2Events.Recorder = e => Debug.Log("[ev] " + e);
            var login = Arg("-l2login");
            var shots = Arg("-l2shots");
            var quit = Arg("-l2quit");
            var variants = Arg("-l2variants");
            if (Arg("-l2offline") != null)
            {
                // mundo sem servidor de jogo (teste dos assets): Dev.OfflineView cuida do resto
                Dev.OfflineView.Begin(83400, 147950, -3400);
                return;
            }
            if (login == null && quit == null && variants == null) return;
            async Task Shot(string name)
            {
                if (shots == null) return;
                System.IO.Directory.CreateDirectory(shots);
                ScreenCapture.CaptureScreenshot(System.IO.Path.Combine(shots, name + ".png"));
                await Task.Delay(500);
                Debug.Log($"[auto] captura {name} ({current})");
            }
            async Task Until(Func<bool> cond, int ms)
            {
                for (var t = 0; t < ms && !cond(); t += 250) await Task.Delay(250);
            }
            await Task.Delay(1500);
            await Shot("1_login");
            if (variants != null) await ShowVariants(System.IO.File.ReadAllLines(variants), Shot);
            if (login != null)
            {
                var up = login.Split(':');
                // -l2screens: captura tambem a tela de servidor e a de criacao (comparacao com o original, G em Docs/validacao.md)
                var screens = Array.IndexOf(Environment.GetCommandLineArgs(), "-l2screens") >= 0;
                autoServer = !screens;
                TestLogin(up[0], up.Length > 1 ? up[1] : up[0]);
                if (screens)
                {
                    await Until(() => current == "scrServers", 30000);
                    await Task.Delay(2500);
                    await Shot("2a_servidor");
                    TestChooseServer();
                }
                await Until(() => current == "scrChars" && !loggingIn, 30000);
                await Task.Delay(4000);
                await Shot("2_personagens");
                if (screens && chars.Count > 0)
                {
                    // clique no primeiro: anda ate o centro; clique de novo: animacao (nao entra)
                    OnLobbyPick(0);
                    await Task.Delay(800);
                    await Shot("2c_andando");
                    await Task.Delay(3000);
                    await Shot("2d_escolhido");
                    OnLobbyPick(0);
                    await Task.Delay(1200);
                    await Shot("2e_animacao");
                }
                if (screens)
                {
                    NewCharacter();
                    await Until(() => current == "scrCreate", 10000);
                    await Task.Delay(5000);
                    await Shot("2b_criacao");
                    // segunda captura 1,5 s depois: o cata-vento (PHYS_Rotating) e as arvores (sway) mudam entre as duas
                    await Task.Delay(1500);
                    await Shot("2b2_criacao");
                    ShowChars();
                    await Until(() => current == "scrChars", 10000);
                    await Task.Delay(3000);
                }
                var slot = Arg("-l2enter");
                if (slot != null && current == "scrChars")
                {
                    TestEnter(int.Parse(slot));
                    // tela de carregamento (G7), enquanto o mundo carrega
                    await Until(() => loading.Visible, 10000);
                    await Task.Delay(700);
                    if (loading.Visible) await Shot("2c_carregando");
                    await Until(() => inWorld && !loading.Visible, 120000);
                    await Task.Delay(3000);
                    Debug.Log($"[auto] no mundo: {world.Self?.Name} em {world.Self?.X},{world.Self?.Y},{world.Self?.Z}; {world.Entities.Count} objetos");
                    await Shot("3_mundo");
                    var s = world.Self;
                    if (s != null) MoveTo(Mathf.RoundToInt(s.X + 300), Mathf.RoundToInt(s.Y), Mathf.RoundToInt(s.Z));
                    await Task.Delay(1000);
                    Debug.Log($"[auto] andando: {world.Self?.Actor.ClipName} {Mathf.RoundToInt(world.Self?.Speed ?? 0)} u/s | assets locais={Config.UseLocalAssets} pedidos de rede ao servidor de assets={Http.NetworkRequests}");
                    await Shot("4_andando");
                    // -l2chatfilter: aciona o botao do filtro do chat (como o UiPreview) e registra o estado da ChatFilterWnd
                    if (Arg("-l2chatfilter") != null)
                    {
                        var btn = ui.ChatWnd.Button("ChatFilterBtn");
                        Debug.Log($"[auto] ChatFilterBtn botao={(btn ? "sim" : "nao")} handlers={(btn?.OnClick != null ? "sim" : "nao")} visivelAntes={ui.ChatFilterWnd.Visible}");
                        if (btn)
                        {
                            // o que o clique do mouse acerta no centro do botao (quem fica por cima dele)
                            var rt = (RectTransform)btn.transform;
                            var canvas = rt.GetComponentInParent<Canvas>();
                            var ccam = canvas && canvas.renderMode != RenderMode.ScreenSpaceOverlay ? canvas.worldCamera : null;
                            var corners = new Vector3[4];
                            rt.GetWorldCorners(corners);
                            var center = RectTransformUtility.WorldToScreenPoint(ccam, (corners[0] + corners[2]) / 2);
                            var es = UnityEngine.EventSystems.EventSystem.current;
                            var hits = new List<UnityEngine.EventSystems.RaycastResult>();
                            if (es) es.RaycastAll(new UnityEngine.EventSystems.PointerEventData(es) { position = center }, hits);
                            var g = btn.GetComponent<UnityEngine.UI.Graphic>();
                            Debug.Log($"[auto] ChatFilterBtn tela={center} tam={rt.rect.size} raycastTarget={(g ? g.raycastTarget.ToString() : "sem Graphic")} ativo={btn.gameObject.activeInHierarchy} acertos=" +
                                      string.Join(" | ", hits.Take(8).Select(h => h.gameObject.name + "<" + (h.gameObject.transform.parent ? h.gameObject.transform.parent.name : "") + ">")));
                        }
                        btn?.OnClick?.Invoke();
                        await Task.Delay(600);
                        var el = ui.ChatFilterWnd.El;
                        Debug.Log($"[auto] ChatFilterWnd visivel={ui.ChatFilterWnd.Visible} ativoHierarquia={(el ? el.gameObject.activeInHierarchy : false)} pos={(el ? el.anchoredPosition.ToString() : "-")} tam={(el ? el.rect.size.ToString() : "-")} pai={(el && el.parent ? el.parent.name : "-")}");
                        await Shot("5_filtro");
                        btn?.OnClick?.Invoke();
                        // faixa de redimensionamento do chat (NCResizeFrame, Top, maxIncrease 300): cresce 150 px para cima
                        var rf = ui.ChatWnd.ResizeFrame;
                        var grown = ui.ChatWnd.ResizeBy(150);
                        await Task.Delay(400);
                        Debug.Log($"[auto] ChatWnd resize faixa={(rf != null ? $"dir {rf.Direction} ({rf.X},{rf.Y}) {rf.W}x{rf.H} max {rf.MaxIncrease}" : "nenhuma")} aplicado={grown} tam={ui.ChatWnd.Size[0]}x{ui.ChatWnd.Size[1]} sistema={ui.SysMsgWnd.ScreenRect().Y} chat={ui.ChatWnd.ScreenRect().Y}");
                        await Shot("6_chat_maior");
                        ui.ChatWnd.ResizeBy(-150);
                    }
                    // -l2chat: cada prefixo de canal na aba All e cada aba sem prefixo, pelo mesmo caminho do campo de chat
                    // (o tipo que chega ao servidor fica no log de chat do aCis; ver I7 em Docs/validacao.md)
                    if (Arg("-l2chat") != null)
                    {
                        var n = 0;
                        foreach (var (p, type) in L2Chat.Prefixes)
                        {
                            var text = p + (type == 2 ? world.Self?.Name + " " : "") + $"p{n++:00}";
                            Debug.Log($"[chat] aba=0 texto={text} tipo esperado={type}");
                            OnChatSubmit(text, 0);
                            await Task.Delay(400);
                        }
                        // com OldChatting o campo da aba ja vem com o prefixo do canal (ChatWnd.uc)
                        var old = L2Options.GetBool("Game", "OldChatting");
                        for (var tab = 0; tab < L2Chat.TabType.Length; tab++)
                        {
                            var text = (old ? L2Chat.TabPrefix[tab] : "") + $"t{tab}";
                            Debug.Log($"[chat] aba={tab} texto={text} tipo esperado={L2Chat.TabType[tab]} oldchat={old}");
                            OnChatSubmit(text, tab);
                            await Task.Delay(400);
                        }
                        Debug.Log($"[chat] anti-flood pontuacao={chatFlood.Score} bloqueado={chatFlood.Blocked}");
                    }
                    // -l2cmds "a;b": comandos de barra pelo campo de chat (I4), um a cada -l2cmdwait ms (2500); o log [cmd]
                    // traz o plano e o estado depois, o [ev] a resposta
                    var cmds = Arg("-l2cmds");
                    if (cmds != null)
                        foreach (var (line, ci) in cmds.Split(';').Select((x, k) => (x, k)))
                        {
                            OnChatSubmit(line, 0);
                            await Task.Delay(int.Parse(Arg("-l2cmdwait") ?? "2500"));
                            Debug.Log($"[cmd] depois de {line}: sentado={world.Self?.Sitting} correndo={world.Self?.Running}");
                            await Shot($"cmd{ci + 1:00}");
                        }
                    // -l2skill id: usa uma skill (ex.: Dash, que gasta MP) para o servidor mandar StatusUpdate (D3)
                    var skill = Arg("-l2skill");
                    if (skill != null)
                    {
                        gc?.Send(UiPackets.MagicSkillUse(int.Parse(skill)));
                        await Task.Delay(4000);
                    }
                    // -l2walk x,y,z: anda ate o ponto antes do -l2goto (o NPC precisa estar na lista de objetos conhecidos)
                    var walk = Arg("-l2walk");
                    if (walk != null)
                    {
                        var wp = walk.Split(',').Select(int.Parse).ToArray();
                        MoveTo(wp[0], wp[1], wp[2]);
                        await Until(() => world.Self != null && Mathf.Abs(world.Self.X - wp[0]) < 80 && Mathf.Abs(world.Self.Y - wp[1]) < 80, 40000);
                        await Task.Delay(2500);
                        Debug.Log($"[auto] andou ate {world.Self?.X},{world.Self?.Y},{world.Self?.Z}");
                    }
                    var go = Arg("-l2goto");
                    if (go != null)
                    {
                        Dev.Navigator.GoTalk(int.Parse(go));
                        for (var w = 0; w < 240 && !Dev.Navigator.Status.StartsWith("falou") && !Dev.Navigator.Status.StartsWith("sem") && !Dev.Navigator.Status.StartsWith("NPC"); w++) await Task.Delay(500);
                        Debug.Log("[auto] navegador: " + Dev.Navigator.Status);
                        await Task.Delay(3000);
                    }
                    // -l2bypass "a;b": RequestBypassToServer de cada um (links de HTML, ex. multisell), a cada 3 s
                    var bypass = Arg("-l2bypass");
                    if (bypass != null)
                        foreach (var (bp0, bi) in bypass.Split(';').Select((x, k) => (x, k)))
                        {
                            var bp = bp0.Replace("{npc}", lastHtmlNpc);
                            Debug.Log("[auto] bypass " + bp);
                            if (bp == "_board") gc?.Send(UiPackets.RequestShowBoard());
                            else gc?.Send(UiPackets.BypassToServer(bp));
                            await Task.Delay(3000);
                            await Shot($"bypass{bi + 1:00}");
                            // MultiSellWnd aberta: a 1a entrada e uma com 2+ produtos (se houver), com captura de cada
                            if (ui.MultiSellWnd.Wnd.Visible && ui.MultiSellWnd.S.ItemList.Count > 0)
                            {
                                var ms = ui.MultiSellWnd.S;
                                Debug.Log($"[multisell] loja {ms.ShopId}: {ms.ItemList.Count} entradas; " + string.Join(" | ", ms.ItemList.Take(6).Select(e =>
                                    $"{e.NeededItemNum}x {GameData.ItemName(e.ItemInfoList[0].ClassId)} tipo={e.MultiSellType} <- " + string.Join(", ", e.NeededItemList.Select(n => $"{n.Name} x{n.Count}")))));
                                ui.Npc.Hide();
                                ui.MultiSellWnd.ClickEntry(0);
                                await Task.Delay(1200);
                                await Shot($"bypass{bi + 1:00}_entrada0");
                                var multi = ms.ItemList.FindIndex(e => e.NeededItemNum > 1);
                                if (multi > 0)
                                {
                                    ui.MultiSellWnd.ClickEntry(multi);
                                    await Task.Delay(1200);
                                    await Shot($"bypass{bi + 1:00}_entrada{multi}");
                                }
                            }
                        }
                    // -l2party conta:senha: o figurante entra no mundo e aceita o convite; capturas da PartyWnd, da opcao, da
                    // compacta e do clique no membro (K4 em Docs/validacao.md); no fim o grupo e desfeito e a opcao volta
                    var party = Arg("-l2party");
                    if (party != null)
                    {
                        var fp = party.Split(':');
                        Dev.Figurante.Start(fp[0], fp.Length > 1 ? fp[1] : fp[0]);
                        await Until(() => Dev.Figurante.Status.Contains(" em "), 60000);
                        var fname = Dev.Figurante.Status.Split(" (")[0];
                        Debug.Log("[party] figurante: " + Dev.Figurante.Status);
                        async Task Click(Vector2 at)
                        {
                            Dev.TestMouse.Move(at);
                            await Task.Delay(250);
                            Dev.TestMouse.Down();
                            await Task.Delay(150);
                            Dev.TestMouse.Up();
                        }
                        gc?.Send(SocialPackets.RequestJoinParty(fname));
                        await Until(() => ui.Party.Big.CurCount > 0, 15000);
                        await Task.Delay(2500);
                        void Dump(string tag)
                        {
                            foreach (var sc in new[] { ui.Party.Big, ui.Party.Small })
                                Debug.Log($"[party] {tag} {(sc.Compact ? "compacta" : "grande")}: visivel={sc.WindowVisible} n={sc.CurCount} altura={sc.WindowHeight} " +
                                          string.Join(" | ", sc.Slots.Where(x => x.Visible && sc.CurCount > 0).Select(x =>
                                              $"{x.Id} {x.Name} cls={x.ClassTex} tip={x.ClassTooltip.Replace("\n", "/")} lider={x.LeaderTex} hp={x.Hp}/{x.MaxHp} cp={x.Cp}/{x.MaxCp} mp={x.Mp}/{x.MaxMp}")));
                            Debug.Log($"[party] janelas: PartyWnd={ui.Party.BigWnd.Visible} {ui.Party.BigWnd.ScreenRect().X},{ui.Party.BigWnd.ScreenRect().Y} {ui.Party.BigWnd.Size[0]}x{ui.Party.BigWnd.Size[1]} " +
                                      $"Compact={ui.Party.SmallWnd.Visible} Option={ui.Party.OptionWnd.Visible} SmallPartyWnd={L2Options.GetBool("Game", "SmallPartyWnd")}");
                        }
                        Dump("convite");
                        await Shot("party1_grupo");
                        // dica do icone de classe (mouse parado 0,5 s); o primeiro estado do mouse virtual nao gera "enter"
                        Dev.TestMouse.Move(Dev.TestMouse.Center(ui.Party.BigWnd.Get("PartyStatusWnd0"), 0.6f, 0.8f));
                        await Task.Delay(300);
                        Dev.TestMouse.Move(Dev.TestMouse.Center(ui.Party.BigWnd.Get("ClassIcon0")));
                        await Task.Delay(1500);
                        await Shot("party2_dica");
                        // btnBuff: proximo modo e a dica nova
                        await Click(Dev.TestMouse.Center(ui.Party.BigWnd.Get("btnBuff")));
                        await Task.Delay(300);
                        Debug.Log($"[party] btnBuff: CurBf={ui.Party.Big.CurBf}/{ui.Party.Small.CurBf} dica={ui.Party.Big.BuffTooltip}");
                        // clique esquerdo no membro: Action -> MyTargetSelected
                        var was = targetId;
                        await Click(Dev.TestMouse.Center(ui.Party.BigWnd.Get("PartyStatusWnd0"), 0.5f, 0.7f));
                        await Task.Delay(2500);
                        Debug.Log($"[party] clique no membro: alvo {was} -> {targetId} ({world.Get(targetId)?.Name})");
                        await Shot("party3_alvo");
                        // opcao: abre pelo btnCompact, marca "Small Party Window" e OK
                        await Click(Dev.TestMouse.Center(ui.Party.BigWnd.Get("btnCompact")));
                        await Task.Delay(800);
                        Dump("opcao");
                        await Shot("party4_opcao");
                        var ck = ui.Party.OptionWnd.Check("ShowSmallPartyWndCheck");
                        if (ck) ck.isOn = true;
                        await Click(Dev.TestMouse.Center(ui.Party.OptionWnd.Get("okbtn")));
                        await Task.Delay(1200);
                        Dump("compacta");
                        await Shot("party5_compacta");
                        Dev.TestMouse.Move(Dev.TestMouse.Center(ui.Party.SmallWnd.Get("PartyStatusWnd0"), 0.8f, 0.5f));
                        await Task.Delay(1500);
                        await Shot("party6_compacta_dica");
                        // volta a grande (Option.ini como estava)
                        await Click(Dev.TestMouse.Center(ui.Party.SmallWnd.Get("btnOption")));
                        await Task.Delay(800);
                        if (ck) ck.isOn = false;
                        await Click(Dev.TestMouse.Center(ui.Party.OptionWnd.Get("okbtn")));
                        await Task.Delay(1000);
                        Dump("volta");
                        Dev.TestMouse.Move(10, 10);
                        gc?.Send(SocialPackets.WithdrawParty());
                        await Task.Delay(2500);
                        Dump("saiu");
                        await Shot("party7_saiu");
                        Dev.Figurante.Stop();
                        await Task.Delay(1500);
                        Dev.TestMouse.Remove();
                    }
                    // -l2map: tecla M (RequestOpenMinimap -> ShowMiniMap 0x9d -> EV_ShowMinimap), captura o mapa de cidade, o
                    // mapa-mundi (botao de reduzir), um arrasto e a janela expandida (K6 em Docs/validacao.md)
                    if (Arg("-l2map") != null)
                    {
                        RunCommand("RequestOpenMinimap", false, false);
                        await Until(() => ui.Minimap.Normal.Visible, 8000);
                        await Task.Delay(1500);
                        var mm = ui.Minimap.NormalCtrl.M;
                        Debug.Log($"[map] aberto={ui.Minimap.Normal.Visible} mapa={mm.CurMap} ({L2Zone.Instance?.Record(mm.CurMap)?.TownMapTex}) vista={mm.ViewX},{mm.ViewY} " +
                                  $"eu={mm.MyLocation()} zona={L2Zone.Instance?.Current?.Name} reduzir={ui.Minimap.Normal.CtrlVisible("btnReduce")} hora={ui.Minimap.Normal.TextEl("txtGameTime")?.text} " +
                                  $"ssq={ui.Minimap.Normal.TextEl("txtVarSSQType")?.text} pos={ui.Minimap.Normal.TextEl("txtVarCurLoc")?.text}");
                        await Shot("map1_cidade");
                        // clique pelo mouse virtual, repetido ate o efeito (o mouse fisico pode virar o Mouse.current)
                        async Task ClickUntil(RectTransform at, Func<bool> done)
                        {
                            for (var k = 0; k < 4 && at && !done(); k++)
                            {
                                Dev.TestMouse.Move(Dev.TestMouse.Center(at) + new Vector2(k, 0));
                                await Task.Delay(300);
                                Dev.TestMouse.Down();
                                await Task.Delay(150);
                                Dev.TestMouse.Up();
                                await Task.Delay(900);
                            }
                        }
                        await ClickUntil(ui.Minimap.Normal.Get("btnReduce"), () => mm.CurMap == 0);
                        Debug.Log($"[map] reduzido: mapa={mm.CurMap} vista={mm.ViewX},{mm.ViewY} eu={mm.MyLocation()} botoes+={mm.TownButtons().Count(b => b.shown && b.x != 9999)}");
                        await Shot("map2_mundi");
                        // arrasto de 100 px para a direita e 60 para baixo no controle
                        var mc = ui.Minimap.Normal.Get("Minimap");
                        var a = Dev.TestMouse.Center(mc);
                        Dev.TestMouse.Move(a);
                        await Task.Delay(300);
                        Dev.TestMouse.Down();
                        for (var k = 1; k <= 10; k++)
                        {
                            await Task.Delay(50);
                            Dev.TestMouse.Move(a + new Vector2(10 * k, -6 * k) * UiRoot.PixelScale);
                        }
                        Dev.TestMouse.Up();
                        await Task.Delay(800);
                        Debug.Log($"[map] arrastado: vista={mm.ViewX},{mm.ViewY}");
                        await Shot("map3_arrasto");
                        await ClickUntil(ui.Minimap.Normal.Get("ExpandButton"), () => ui.Minimap.Expand?.Visible == true);
                        await Task.Delay(600);
                        var em = ui.Minimap.ExpandCtrl?.M;
                        Debug.Log($"[map] expandido={ui.Minimap.Expand?.Visible} tamanho={ui.Minimap.Expand?.Size[0]}x{ui.Minimap.Expand?.Size[1]} ctrl={em?.W}x{em?.H} mapa={em?.CurMap} vista={em?.ViewX},{em?.ViewY}");
                        await Shot("map4_expandido");
                        RunCommand("RequestOpenMinimap", false, false);
                        await Task.Delay(1500);
                        Debug.Log($"[map] M de novo: normal={ui.Minimap.Normal.Visible} expandido={ui.Minimap.Expand?.Visible}");
                        Dev.TestMouse.Move(10, 10);
                        Dev.TestMouse.Remove();
                    }
                    // -l2options: abre a OptionWnd, captura as 3 abas e confirma (OK grava o Option.ini)
                    if (Arg("-l2options") != null)
                    {
                        var ow = OptionWindow();
                        ow.Win.Show();
                        for (var tab = 0; tab < 3; tab++)
                        {
                            ow.Win.SelectTab("TabCtrl", tab);
                            await Task.Delay(800);
                            await Shot($"options{tab}");
                        }
                        ow.Ok();
                        Debug.Log("[auto] OptionWnd OK; Option.ini = " + L2Options.FilePath);
                    }
                    var hold = Arg("-l2hold");
                    if (hold != null) await Hold(float.Parse(hold, System.Globalization.CultureInfo.InvariantCulture));
                    gc?.Send(GamePackets.Logout());
                    await Task.Delay(2000);
                }
            }
            if (quit != null)
            {
                await Task.Delay((int)(float.Parse(quit, System.Globalization.CultureInfo.InvariantCulture) * 1000));
                Application.Quit();
            }
        }

        /// <summary>
        /// -l2variants arquivo: carrega os .glb listados (um por combinacao de material do exportador) na frente da camera
        /// do lobby e captura a tela. Com Strict Shader Variant Matching, uma variante que faltasse no build sairia magenta
        /// e com erro no log.
        /// </summary>
        async Task ShowVariants(string[] urls, Func<string, Task> shot)
        {
            var cam = lobby.Camera;
            var list = new List<string>();
            foreach (var u in urls)
                if (u.Trim().Length > 0)
                    list.Add(u.Trim());
            int done = 0, failed = 0, renderers = 0;
            var mats = new HashSet<string>();
            // lotes de 24: carrega, renderiza 3 quadros na frente da camera, confere os materiais e libera
            for (var b = 0; b < list.Count; b += 24)
            {
                var root = new GameObject("variantes");
                var jobs = new List<Task<GLTFast.GltfImport>>();
                for (var k = b; k < Math.Min(list.Count, b + 24); k++) jobs.Add(LoadVariant(list[k], k - b, root.transform, cam));
                await Task.WhenAll(jobs);
                for (var f = 0; f < 3; f++) await Task.Yield();
                await Task.Delay(50);
                foreach (var r in root.GetComponentsInChildren<Renderer>())
                {
                    renderers++;
                    foreach (var m in r.sharedMaterials)
                        if (m)
                            mats.Add($"{m.shader.name}[{string.Join(" ", m.shaderKeywords)}] suportado={m.shader.isSupported}");
                }
                if (b == 0) await shot("5_variantes");
                foreach (var j in jobs)
                {
                    if (j.Result == null) failed++;
                    else j.Result.Dispose();
                    done++;
                }
                Destroy(root);
                if ((b / 24) % 25 == 0) Debug.Log($"[variantes] {done}/{list.Count} modelos");
            }
            Debug.Log($"[variantes] {done} modelos, {failed} falharam, {renderers} renderers; materiais: {string.Join("; ", mats)}");
        }

        static async Task<GLTFast.GltfImport> LoadVariant(string url, int k, Transform root, Camera cam)
        {
            var g = new GLTFast.GltfImport();
            if (!await g.Load(Http.Url(url), new GLTFast.ImportSettings { AnimationMethod = GLTFast.AnimationMethod.Legacy }))
            {
                Debug.LogWarning("[variantes] falhou " + url);
                g.Dispose();
                return null;
            }
            var holder = new GameObject("v" + k);
            holder.transform.SetParent(root, false);
            await g.InstantiateMainSceneAsync(holder.transform);
            var b = new Bounds(holder.transform.position, Vector3.zero);
            var first = true;
            foreach (var r in holder.GetComponentsInChildren<Renderer>())
            {
                if (first) b = r.bounds;
                else b.Encapsulate(r.bounds);
                first = false;
            }
            var s = 0.9f / Mathf.Max(0.01f, b.size.magnitude);
            holder.transform.localScale = Vector3.one * s;
            var t = cam.transform;
            holder.transform.position = t.position + t.forward * 4 + t.right * ((k % 6) - 2.5f) * 0.9f + t.up * (1.2f - (k / 6) * 0.9f) - (b.center - holder.transform.position) * s;
            return g;
        }

        /// <summary>
        /// -l2hold segundos: fica no mundo com o inventario aberto e registra no log, a cada segundo, onde estao a barra de
        /// titulo do inventario (pixels da tela, origem embaixo a esquerda), a janela, o personagem e a musica. Serve para
        /// testar o executavel com mouse e teclado de verdade (SendInput do Windows) de fora.
        /// </summary>
        async Task Hold(float seconds)
        {
            if (!ui.Inv.Visible) ui.Inv.Show();
            using var presses = UnityEngine.InputSystem.Utilities.Observable.Call(UnityEngine.InputSystem.InputSystem.onAnyButtonPress, c => Debug.Log($"[hold] botao {c.path} em {Mouse.current?.position.ReadValue():0}"));
            await Task.Delay(500);
            for (var t = 0f; t < seconds; t += 1)
            {
                var head = Dev.TestMouse.Center(ui.Inv.El, 0.3f, 0.012f);
                var s = world.Self;
                var mus = "";
                foreach (var src in FindObjectsByType<AudioSource>())
                    if (src.name.StartsWith("musica"))
                        mus = $"{src.name} tocando={src.isPlaying} t={src.time:0.0}";
                var m = Mouse.current;
                var sel = UnityEngine.EventSystems.EventSystem.current ? UnityEngine.EventSystems.EventSystem.current.currentSelectedGameObject : null;
                // alvos para o teste de fora: um item do inventario, o slot 7 da barra 1, o botao de fechar do inventario
                Vector2 item = default, slot = default, close = default;
                string slotKey = "", tip = "";
                foreach (var tt in ui.Inv.El.GetComponentsInChildren<UiTooltip>())
                    if (tt.Text != null && tt.Text.Contains("Greater Healing Potion") && tt.gameObject.activeInHierarchy)
                        item = Dev.TestMouse.Center((RectTransform)tt.transform);
                var B = System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance | System.Reflection.BindingFlags.Static;
                foreach (var sl in (System.Collections.IList)typeof(GameUi).GetField("scSlots", B).GetValue(ui))
                {
                    var st = sl.GetType();
                    var rt = (RectTransform)st.GetField("Rt").GetValue(sl);
                    if ((int)st.GetField("Bar").GetValue(sl) == 0 && (int)st.GetField("Index").GetValue(sl) == 6 && rt.gameObject.activeInHierarchy)
                    {
                        slot = Dev.TestMouse.Center(rt);
                        slotKey = (string)st.GetField("Key").GetValue(sl);
                    }
                }
                foreach (var t2 in ui.Inv.El.GetComponentsInChildren<RectTransform>())
                    if (t2.name == "l2close")
                        close = Dev.TestMouse.Center(t2);
                var box = (RectTransform)typeof(UiTooltip).GetField("box", B).GetValue(null);
                var lab = (UnityEngine.UI.Text)typeof(UiTooltip).GetField("label", B).GetValue(null);
                if (box && box.gameObject.activeInHierarchy && lab) tip = lab.text.Split((char)10)[0];
                // mais alvos: skill Dash (janela de skills), slot 8, NPC visivel mais perto, link "Quest" do HTML, caixa de mudo
                Vector2 dash = default, slot8 = default, npcPt = default, quest = default, mute = default;
                string npcName = "", slot8Key = "", lastChat = "";
                foreach (var tt in UiRoot.Rect.GetComponentsInChildren<UiTooltip>())
                    if (tt.Text != null && tt.Text.StartsWith("Dash") && tt.gameObject.activeInHierarchy)
                        dash = Dev.TestMouse.Center((RectTransform)tt.transform);
                foreach (var sl in (System.Collections.IList)typeof(GameUi).GetField("scSlots", B).GetValue(ui))
                {
                    var st = sl.GetType();
                    var rt = (RectTransform)st.GetField("Rt").GetValue(sl);
                    if ((int)st.GetField("Bar").GetValue(sl) == 0 && (int)st.GetField("Index").GetValue(sl) == 7 && rt.gameObject.activeInHierarchy)
                    {
                        slot8 = Dev.TestMouse.Center(rt);
                        slot8Key = (string)st.GetField("Key").GetValue(sl);
                    }
                }
                var best = float.MaxValue;
                if (scene != null && world.Self != null)
                    foreach (var e in world.Entities.Values)
                    {
                        if (e.Kind != "npc" || e.Actor.Error != null || !e.Actor.Root) continue;
                        var sp = scene.Camera.WorldToScreenPoint(e.Actor.BonePosition("body"));
                        if (sp.z <= 0 || sp.x < 80 || sp.x > Screen.width - 80 || sp.y < 120 || sp.y > Screen.height - 120) continue;
                        var dd = (e.X - world.Self.X) * (e.X - world.Self.X) + (e.Y - world.Self.Y) * (e.Y - world.Self.Y);
                        if (e.NpcId == 30080) dd = 0; // a Gatekeeper Clarissa, acessivel, tem preferencia
                        if (dd < best)
                        {
                            best = dd;
                            npcPt = sp;
                            npcName = e.Name;
                        }
                    }
                if (ui.Npc.Visible)
                    foreach (var bt in ui.Npc.Body.GetComponentsInChildren<UiTexButton>())
                        if (bt.Label && bt.Label.text.Contains(">Quest<"))
                            quest = Dev.TestMouse.Center((RectTransform)bt.transform);
                if (settings.Win.Visible)
                    foreach (var t3 in settings.Win.El.GetComponentsInChildren<UnityEngine.UI.Text>())
                        if (t3.text.Contains("sem som"))
                            foreach (var sel2 in t3.transform.parent.GetComponentsInChildren<UnityEngine.UI.Selectable>())
                                mute = Dev.TestMouse.Center((RectTransform)sel2.transform);
                var chatLines = ui.ChatWnd.El.GetComponentsInChildren<UnityEngine.UI.Text>();
                foreach (var cl in chatLines)
                    if (cl.text.Contains(": oi") || cl.text.Contains("LEVEL to speak") || cl.text.Contains("oi"))
                        lastChat = System.Text.RegularExpressions.Regex.Replace(cl.text, "<[^>]+>", "").Split((char)10)[^1];
                Vector2 market = default, nobless = default;
                var boardTxt = "";
                if (ui.Board.Visible)
                {
                    foreach (var bt in ui.Board.Body.GetComponentsInChildren<UiTexButton>())
                        if (bt.Label && bt.Label.text.Contains("Marketplace"))
                            market = Dev.TestMouse.Center((RectTransform)bt.transform);
                    foreach (var bt in ui.Board.Body.GetComponentsInChildren<UiTexButton>())
                        if (bt.Label && (bt.Label.text.Contains("Sell Items") || bt.Label.text.Contains("Buy Items")))
                            boardTxt = "loja";
                }
                var npcTxt = "";
                if (ui.Npc.Visible)
                {
                    foreach (var bt in ui.Npc.Body.GetComponentsInChildren<UiTexButton>())
                        if (bt.Label && bt.Label.text.Contains("Noblesse Only"))
                            nobless = Dev.TestMouse.Center((RectTransform)bt.transform);
                    var tx = ui.Npc.Body.GetComponentsInChildren<UnityEngine.UI.Text>();
                    if (tx.Length > 0) npcTxt = System.Text.RegularExpressions.Regex.Replace(tx[0].text, "<[^>]+>", "");
                    if (npcTxt.Length > 50) npcTxt = npcTxt.Substring(0, 50);
                }
                // ponto da tela coberto pela interface (um jogador nao clicaria no mundo ali)
                bool UnderUi(Vector3 sp)
                {
                    var es = UnityEngine.EventSystems.EventSystem.current;
                    if (!es) return false;
                    var hits = new List<UnityEngine.EventSystems.RaycastResult>();
                    es.RaycastAll(new UnityEngine.EventSystems.PointerEventData(es) { position = sp }, hits);
                    return hits.Count > 0;
                }
                // party/troca: jogador visivel, botoes da janela de alvo, janela de troca e de quantidade
                Vector2 player = default, tParty = default, tTrade = default, soe = default, qtyIn = default, qtyOk = default, confirm = default;
                var bestP = float.MaxValue;
                if (scene != null && world.Self != null)
                    foreach (var e in world.Entities.Values)
                    {
                        if (e.Kind != "player" || !e.Actor.Root || !e.Actor.Root.gameObject.activeInHierarchy) continue;
                        // o mesmo ponto que o Pick testa (60% da altura do modelo)
                        var sp = scene.Camera.WorldToScreenPoint(e.Actor.Root.position + new Vector3(0, (e.Actor.Height > 0 ? e.Actor.Height : 0.5f) * 0.6f, 0));
                        if (sp.z <= 0 || sp.x < 80 || sp.x > Screen.width - 80 || sp.y < 120 || sp.y > Screen.height - 120 || UnderUi(sp)) continue;
                        var dd = (e.X - world.Self.X) * (e.X - world.Self.X) + (e.Y - world.Self.Y) * (e.Y - world.Self.Y);
                        if (e.Name == "L2webTest2") dd = 0; // o figurante dos testes tem preferencia
                        if (dd < bestP)
                        {
                            bestP = dd;
                            player = sp;
                        }
                    }
                foreach (var bt in ui.TargetWnd.El.GetComponentsInChildren<UiTexButton>())
                    if (bt.gameObject.activeInHierarchy && bt.Label)
                    {
                        if (bt.Label.text == "Party") tParty = Dev.TestMouse.Center((RectTransform)bt.transform);
                        if (bt.Label.text == "Trocar") tTrade = Dev.TestMouse.Center((RectTransform)bt.transform);
                    }
                var partyVis = ((RectTransform)typeof(SocialUi).GetField("partyBox", B).GetValue(social)).gameObject.activeSelf;
                var qtyWnd = (UiWindow)typeof(SocialUi).GetField("qty", B).GetValue(social);
                if (social.Trade.Visible)
                {
                    foreach (var t4 in social.Trade.El.GetComponentsInChildren<UnityEngine.UI.Text>())
                        if (t4.text.StartsWith("Scroll of Escape") && t4.gameObject.activeInHierarchy)
                            soe = Dev.TestMouse.Center((RectTransform)t4.transform.parent);
                    foreach (var bt in social.Trade.El.GetComponentsInChildren<UiTexButton>())
                        if (bt.Label && bt.Label.text == "Confirmar troca")
                            confirm = Dev.TestMouse.Center((RectTransform)bt.transform);
                }
                if (qtyWnd.Visible)
                {
                    var qi = qtyWnd.El.GetComponentInChildren<UnityEngine.UI.InputField>();
                    if (qi) qtyIn = Dev.TestMouse.Center((RectTransform)qi.transform);
                    foreach (var bt in qtyWnd.El.GetComponentsInChildren<UiTexButton>())
                        if (bt.Label && bt.Label.text == "OK")
                            qtyOk = Dev.TestMouse.Center((RectTransform)bt.transform);
                }
                var ownN = ((System.Collections.ICollection)typeof(SocialUi).GetField("tradeOwn", B).GetValue(social)).Count;
                // loja: link "Buy Dye" do NPC, campo de quantidade da primeira linha "Dye", botao Comprar, corante e adena
                Vector2 buyLink = default, shopQty = default, shopBuy = default;
                if (ui.Npc.Visible)
                    foreach (var bt in ui.Npc.Body.GetComponentsInChildren<UiTexButton>())
                        if (bt.Label && bt.Label.text.Contains(">Buy Dye<"))
                            buyLink = Dev.TestMouse.Center((RectTransform)bt.transform);
                if (ui.Shop.Visible)
                {
                    foreach (var t5 in ui.Shop.El.GetComponentsInChildren<UnityEngine.UI.Text>())
                        if (t5.text.StartsWith("Dye of STR <Str+1 Con-3>") && shopQty == default)
                        {
                            var qf = t5.transform.parent.GetComponentInChildren<UnityEngine.UI.InputField>();
                            if (qf) shopQty = Dev.TestMouse.Center((RectTransform)qf.transform);
                        }
                    foreach (var bt in ui.Shop.El.GetComponentsInChildren<UiTexButton>())
                        if (bt.Label && bt.Label.text == "Comprar")
                            shopBuy = Dev.TestMouse.Center((RectTransform)bt.transform);
                }
                long dyeN = 0, adenaN = 0;
                foreach (System.Collections.DictionaryEntry de in (System.Collections.IDictionary)typeof(GameUi).GetField("items", B).GetValue(ui))
                {
                    var it = (InvItem)de.Value;
                    if (it.ItemId == 4445) dyeN += it.Count;
                    if (it.ItemId == 57) adenaN += it.Count;
                }
                var npcTitle = ui.Npc.Visible ? ui.Npc.Title + ":" + ui.Npc.Body.GetComponentsInChildren<UnityEngine.UI.Text>().Length : "-";
                var samples = new float[1024];
                AudioListener.GetOutputData(samples, 0);
                var rms = 0f;
                foreach (var v in samples) rms += v * v;
                rms = Mathf.Sqrt(rms / samples.Length);
                Debug.Log($"[hold] tela={Screen.width}x{Screen.height} invTitulo={head.x:0},{head.y:0} invPos={ui.Inv.El.anchoredPosition.x:0},{ui.Inv.El.anchoredPosition.y:0} " +
                          $"self={s?.X:0},{s?.Y:0} anim={s?.Actor.ClipName} foco={Application.isFocused} musica=[{mus}] " +
                          $"mouse={(m == null ? "nenhum" : m.position.ReadValue().ToString("0") + " esq=" + m.leftButton.isPressed)} sobreUi={UiRoot.PointerOverUi()} digitando={UiRoot.TypingInField()} " +
                          $"selecionado={(sel ? sel.name : "-")} dispositivos={UnityEngine.InputSystem.InputSystem.devices.Count} " +
                          $"item={item.x:0},{item.y:0} slot7={slot.x:0},{slot.y:0} slot7Key={slotKey} fechar={close.x:0},{close.y:0} invVisivel={ui.Inv.Visible} dica=[{tip}] audioRms={rms:0.0000} ultimoClique=[{lastClick}] " +
                          $"dash={dash.x:0},{dash.y:0} slot8={slot8.x:0},{slot8.y:0} slot8Key={slot8Key} npc={npcPt.x:0},{npcPt.y:0} npcNome=[{npcName}] npcJanela=[{npcTitle}] " +
                          $"quest={quest.x:0},{quest.y:0} opcoes={settings.Win.Visible} mudo={mute.x:0},{mute.y:0} musicaMuda={music.Muted} chat=[{lastChat}] skills={dash != default} " +
                          $"board={ui.Board.Visible} boardPagina=[{boardTxt}] market={market.x:0},{market.y:0} nobless={nobless.x:0},{nobless.y:0} npcTexto=[{npcTxt}] " +
                          $"jogador={player.x:0},{player.y:0} tParty={tParty.x:0},{tParty.y:0} tTrade={tTrade.x:0},{tTrade.y:0} party={partyVis} troca={social.Trade.Visible} " +
                          $"soe={soe.x:0},{soe.y:0} qtd={qtyWnd.Visible} qtyIn={qtyIn.x:0},{qtyIn.y:0} qtyOk={qtyOk.x:0},{qtyOk.y:0} confirmar={confirm.x:0},{confirm.y:0} ofertas={ownN} " +
                          $"buyLink={buyLink.x:0},{buyLink.y:0} loja={ui.Shop.Visible} shopQty={shopQty.x:0},{shopQty.y:0} shopBuy={shopBuy.x:0},{shopBuy.y:0} corante={dyeN} adena={adenaN}");
                await Task.Delay(1000);
            }
        }

        /// <summary>Camera provisoria enquanto o lobby carrega (fundo preto em vez de "no cameras rendering").</summary>
        static Camera BootCamera()
        {
            var go = new GameObject("Boot Camera");
            var cam = go.AddComponent<Camera>();
            cam.clearFlags = CameraClearFlags.SolidColor;
            cam.backgroundColor = Color.black;
            cam.cullingMask = 0;
            return cam;
        }

        void BuildScreens()
        {
            lobbyRoot = UiRoot.Fill(UiRoot.Box("Lobby", UiRoot.Rect));
            gameRoot = UiRoot.Fill(UiRoot.Box("scrGame", UiRoot.Rect));
            scrLogin = new LobbyLoginScreen(lobbyRoot);
            scrServers = new LobbyServerScreen(lobbyRoot);
            scrChars = LobbyUi.BuildChars(lobbyRoot);
            scrCreate = LobbyUi.BuildCreate(lobbyRoot);
            LobbyUi.Band = new LobbyMessageBand(lobbyRoot);

            // login
            scrLogin.User.text = Config.Get("user", "");
            scrLogin.OnSubmit = () => SubmitLogin().Forget();
            scrLogin.OnExit = () =>
            {
                scrLogin.Pass.text = "";
                Application.Quit();
            };
            scrLogin.OnOptionsChanged = SaveLoginOptions;
            // NCLoginFunctionWnd: Options abre o OptionWnd do xdat (o mesmo do GamingState) (pedido 0037)
            scrLogin.OptionWindow = OptionWindow;
            // servidores
            scrServers.OnChoose = id => serverChoice?.TrySetResult(id);
            // NCServerSelectWnd::OnCancelBtnClick: desconecta e volta ao LoginState, sem mensagem
            scrServers.OnCancel = () => serverChoice?.TrySetException(new LoginError(""));
            // personagens
            scrChars.Info.Name.OnChange = i =>
            {
                selectedSlot = i;
                RenderChars();
            };
            scrChars.OnStart = () => Enter().Forget();
            scrChars.OnCreate = NewCharacter;
            scrChars.OnDelete = DeleteCharacter;
            scrChars.OnReLogin = () =>
            {
                leaving = true;
                gc?.Send(GamePackets.Logout());
                Delay(300, () => gc?.Close());
            };
            // criacao (CharacterCreateWnd)
            scrCreate.Panel.OnChange = (_, field) => UpdateCreate(field);
            scrCreate.Panel.OnMessage = id => scrCreate.Msg(GameData.SystemMessage(id, new List<string>()).Text, "err");
            scrCreate.Panel.OnModel = on => scrCreate.SetModelButtons(on);
            scrCreate.OnCancel = ShowChars;
            scrCreate.OnSubmit = () => CreateCharacter().Forget();
            // girar o modelo escolhido (ordem dos modelos: guerreiro H/M, mistico H/M; anao so guerreiros)
            scrCreate.OnRotL = () => lobby?.Rotate(CreateIndex(), -0.5f);
            scrCreate.OnRotR = () => lobby?.Rotate(CreateIndex(), 0.5f);
            gameRoot.gameObject.SetActive(false);
        }

        void SaveLoginOptions()
        {
            var s = scrLogin.LoginServer.text.Trim();
            var m = Regex.Match(s, @"^([^:\s]+)(?::(\d+))?$");
            if (m.Success)
            {
                Config.LoginHost = m.Groups[1].Value;
                if (m.Groups[2].Success) Config.LoginPort = int.Parse(m.Groups[2].Value);
            }
            var a = scrLogin.AssetServer.text.Trim();
            if (a.Equals("local", StringComparison.OrdinalIgnoreCase)) Config.UseLocalAssets = true;
            else if (a.StartsWith("http"))
            {
                Config.AssetBase = a;
                Config.UseLocalAssets = false;
            }
            Config.Protocol = scrLogin.Protocol;
        }

        static async void Delay(int ms, Action fn)
        {
            await Task.Delay(ms);
            fn();
        }

        // ------------------------------------------------------------------ telas
        void Show(string id)
        {
            current = id;
            scrLogin.Visible = id == "scrLogin";
            scrServers.Visible = id == "scrServers";
            scrChars.Visible = id == "scrChars";
            scrCreate.Visible = id == "scrCreate";
            var inLobby = id != "scrGame";
            lobbyRoot.gameObject.SetActive(inLobby);
            gameRoot.gameObject.SetActive(!inLobby);
            if (scene != null) scene.Camera.gameObject.SetActive(!inLobby);
            if (inLobby && LobbyUi.Band != null)
            {
                // UILoginState::OnEnter: a faixa volta ao copyright (systemmsg 94)
                if (id == "scrLogin") LobbyUi.Band.SetMessage(LobbyMessageBand.CopyrightId);
                else LobbyUi.Band.Relayout();
            }
            if (lobby == null) return;
            if (inLobby)
            {
                lobby.Start();
                // zona do Lobby.unr: o salao e a ZoneInfo2 (sem sol, neblina propria); login e criacao ficam na ZoneInfo0
                // (zona do terreno, com sol) [I: a camera do login dentro da ZoneInfo0]
                lobby.SetZone(id == "scrChars" ? "ZoneInfo2" : "ZoneInfo0");
                if (LobbyShot.TryGetValue(id, out var shot)) lobby.Play(shot, false);
                if (id != "scrChars" && id != "scrCreate") lobby.ShowChars(new List<LobbyChar>()).Forget();
            }
            else lobby.Stop();
        }

        HwidInfo Hwid()
        {
            var id = Config.Get("hwid");
            if (string.IsNullOrEmpty(id))
            {
                var b = new byte[8];
                new System.Random().NextBytes(b);
                id = "L2WEB-" + string.Concat(b.Select(x => x.ToString("x2")));
                Config.Set("hwid", id);
            }
            return new HwidInfo { Hdd = "L2WEB", Mac = "L2WEB", Guid = id, User = "l2web" };
        }

        // ------------------------------------------------------------------ login
        bool loggingIn;

        /// <summary>Preenche e envia o login (testes pelo script eval).</summary>
        public void TestLogin(string user, string password)
        {
            scrLogin.User.text = user;
            scrLogin.Pass.text = password;
            SubmitLogin().Forget();
        }

        async Task SubmitLogin()
        {
            if (loggingIn || !ready) return;
            // o original nao apara o ID
            var user = scrLogin.User.text;
            var password = scrLogin.Pass.text;
            var empty = LoginAuth.CheckFields(user, password);
            if (empty != 0)
            {
                scrLogin.Msg(LoginMessages.Text(new[] { empty }));
                return;
            }
            SaveLoginOptions();
            Config.Set("user", user);
            loggingIn = true;
            LobbySkin.SetEnabled(scrLogin.LoginBtn, false);
            // o original nao escreve nada na faixa enquanto conecta (pedido 0037)
            try
            {
                session = await LoginClient.Login(new LoginOptions
                {
                    Host = Config.LoginHost, Port = Config.LoginPort, User = user, Password = password, ChooseServer = ChooseServer, Log = m => Debug.Log("[login] " + m),
                });
                await ConnectGame(Config.Protocol);
            }
            catch (Exception e)
            {
                Show("scrLogin");
                Debug.Log("[login] recusado: " + e.Message);
                // RefuseLogOn: o texto do motivo na faixa; sem texto (PlayFail, Cancel da lista) nada; falha de conexao:
                // a systemmsg 90 do OnLoginBtnClick [I]
                if (e is LoginError le) { if (le.Message.Length > 0) scrLogin.Msg(le.Message); }
                else scrLogin.Msg(LoginMessages.Text(new[] { 90 }));
            }
            finally
            {
                loggingIn = false;
                LobbySkin.SetEnabled(scrLogin.LoginBtn, true);
            }
        }

        /// <summary>Lista de servidores (ServerSelectWnd): OK/duplo clique entra, Cancel volta.</summary>
        Task<int> ChooseServer(List<ServerInfo> list)
        {
            serverChoice?.TrySetCanceled();
            serverChoice = new TaskCompletionSource<int>();
            scrServers.SetServers(list);
            if (autoServer && scrServers.Chosen != 0) serverChoice.TrySetResult(scrServers.Chosen);
            else Show("scrServers");
            return serverChoice.Task;
        }

        /// <summary>Escolhe o servidor marcado (testes).</summary>
        public void TestChooseServer() => serverChoice?.TrySetResult(scrServers.Chosen);

        async Task ConnectGame(string proto)
        {
            gc?.Close();
            var (host, port) = GameClient.ResolveEndpoint(session);
            gc = new GameClient(new GameClientOptions { Host = host, Port = port, Session = session, Protocol = proto, Hwid = Hwid(), Log = m => Debug.Log("[game] " + m) });
            Interface?.Dispose();
            Interface = new InterfaceRouter(gc);
            leaving = false;
            var mine = gc;
            gc.OnClose = reason =>
            {
                if (gc != mine) return;
                if (inWorld) LeaveWorld();
                Show("scrLogin");
                // Re-Login (leaving) volta ao login sem texto; queda da conexao: a caixa do ServerClose (systemmsg 127) e o OK
                // fica no login (NConsoleWnd::ServerClose 0x1016ee60) (pedido 0037)
                Debug.Log("[game] conexao encerrada: " + reason);
                if (!leaving) LobbyUi.ShowServerClose(() => Show("scrLogin"));
            };
            chars = await gc.Connect();
            gc.On(0x13, r =>
            {
                chars = GamePackets.ParseCharSelectInfo(r);
                if (!inWorld) RenderChars();
            });
            ShowChars();
        }

        // ------------------------------------------------------------------ personagens
        void ShowChars()
        {
            Show("scrChars");
            // AddPawn (FUN_1017eab0): so o ultimo usado (flag do pacote) e escolhido e anda do slot ate o centro; sem ele nada
            // fica escolhido (combo vazio, Start/Delete desabilitados)
            selectedSlot = chars.FindIndex(c => c.Active && c.DeleteSeconds <= 0);
            shownCharsKey = null;
            RenderChars();
            // modelos dos personagens no salao antes de mostrar a tela
            loading?.Until("Carregando personagens", Task.CompletedTask, minMs: 300, quietMs: 500, maxMs: 60000).Forget();
        }

        /// <summary>Selecao (CharacterSelectWnd): o escolhido no centro do salao, os outros nos 7 lugares do logongrp.</summary>
        void RenderChars()
        {
            scrChars.Info.Name.SetOptions(chars.Select(c => c.Name + (c.DeleteSeconds > 0 ? " (excluindo)" : "")));
            if (selectedSlot >= chars.Count) selectedSlot = chars.Count - 1;
            scrChars.Info.Name.Value = selectedSlot;
            var c = selectedSlot >= 0 ? chars[selectedSlot] : null;
            LobbySkin.SetEnabled(scrChars.Start, c != null && c.DeleteSeconds <= 0);
            LobbySkin.SetEnabled(scrChars.Delete, c != null);
            scrChars.Info.Fill(c);
            LobbySkin.SetText(scrChars.Delete, c != null && c.DeleteSeconds > 0 ? "Restore" : GameData.SysString(159, "Delete"));
            if (chars.Count == 0) scrChars.Msg("Nenhum personagem nesta conta: use Create.");
            // slot_i = indice na lista (nunca compactado); os atores so sao refeitos quando a lista muda: trocar de personagem
            // e o SelectedCharacterNum (o anterior volta ao slot, o novo anda ate o centro)
            var key = string.Join("|", chars.Select(c => c.ObjectId + ":" + c.DeleteSeconds));
            if (key != shownCharsKey || lobby == null)
            {
                shownCharsKey = key;
                var list = new List<LobbyChar>();
                for (var i = 0; i < chars.Count; i++)
                    list.Add(new LobbyChar { Name = chars[i].Name, Appearance = chars[i], Selected = i == selectedSlot, Spot = i, Sitting = chars[i].DeleteSeconds > 0 });
                var sel = selectedSlot;
                lobby?.ShowChars(list).ContinueWith(_ => lobby.Select(sel), TaskScheduler.FromCurrentSynchronizationContext());
            }
            else lobby.Select(selectedSlot);
        }

        string shownCharsKey;

        /// <summary>Clique num personagem do lobby: seleciona (2o clique entra) ou, na criacao, escolhe classe/sexo.</summary>
        void OnLobbyPick(int i)
        {
            if (current == "scrChars")
            {
                // FUN_10173db0 (WM_LBUTTONDOWN no personagem): limpa o texto da faixa
                LobbyUi.Band?.ClearText();
                // clicar no personagem ja escolhido nao entra no jogo (so o Start entra): no original ele toca uma animacao
                if (i == selectedSlot) lobby.PlayPickedAnim(i);
                else
                {
                    selectedSlot = i;
                    RenderChars();
                }
            }
            else if (current == "scrCreate")
            {
                // modelos da criacao na ordem guerreiro H/M, mistico H/M
                var p = scrCreate.Panel;
                p.Apply("cls", p.State.Race == 4 ? 0 : i >> 1);
                p.Apply("sex", i & 1);
            }
        }

        void DeleteCharacter()
        {
            if (selectedSlot < 0 || selectedSlot >= chars.Count || gc == null) return;
            var c = chars[selectedSlot];
            if (c.DeleteSeconds > 0)
            {
                gc.Send(GamePackets.CharacterRestore(selectedSlot));
                return;
            }
            // confirm() do navegador: segundo clique em Delete em ate 5 s
            if (Time.unscaledTime - deleteArmed > 5)
            {
                deleteArmed = Time.unscaledTime;
                scrChars.Msg($"Excluir o personagem {c.Name}? Clique em Delete de novo para confirmar.", "err");
                return;
            }
            deleteArmed = -100;
            scrChars.Msg("");
            gc.Send(GamePackets.CharacterDelete(selectedSlot));
        }

        // ------------------------------------------------------------------ criacao (CharacterCreateWnd)
        int createRace = -1;
        string createLook = "";

        int CreateIndex()
        {
            var s = scrCreate.Panel.State;
            return s.Race == 4 ? s.Sex : s.Cls * 2 + s.Sex;
        }

        /// <summary>Modelos da raca nos lugares do logongrp e camera na cena do Matinee do modelo escolhido.</summary>
        /// <summary>Carga dos modelos da criacao em andamento (NewCharacter espera antes de trocar a tela).</summary>
        Task createLoad = Task.CompletedTask;
        bool deferCreateCamera;

        void UpdateCreate(string field)
        {
            var s = scrCreate.Panel.State;
            if (lobby == null) return;
            var look = s.ToString();
            if (field == "race" || createRace != s.Race || look != createLook)
            {
                var raceChanged = createRace != s.Race;
                createRace = s.Race;
                createLook = look;
                var bas = new[] { 8, 12, 16, 20, 24 }[s.Race];
                var combos = s.Race == 4 ? new[] { (0, 0), (0, 1) } : new[] { (0, 0), (0, 1), (1, 0), (1, 1) };
                var list = new List<LobbyChar>();
                for (var k = 0; k < combos.Length; k++)
                {
                    var (cls, sex) = combos[k];
                    var mine = cls == s.Cls && sex == s.Sex;
                    var st = s.Clone();
                    st.Cls = cls;
                    st.Sex = sex;
                    list.Add(new LobbyChar
                    {
                        Name = "",
                        Spot = bas + k,
                        Appearance = new Appearance
                        {
                            Race = s.Race, Sex = sex, ClassId = LobbyUi.ClassIdOf(st), HairStyle = mine ? s.Hair : 0, HairColor = mine ? s.Color : 0, Face = mine ? s.Face : 0,
                            Paperdoll = new Paperdoll(),
                        },
                    });
                }
                createLoad = lobby.ShowChars(list);
                createLoad.Forget();
                // raca nova: visao geral dos modelos (warp da raca); classe/sexo: camera vai ate o modelo escolhido
                if (raceChanged)
                {
                    if (!deferCreateCamera) lobby.Play(LobbyScene.RaceScene[s.Race], false);
                    return;
                }
            }
            if (field == "race" || s.Cls < 0 || s.Sex < 0) return;
            foreach (var tag in LobbyUi.CreateScene(s))
                if (lobby.Play(tag, true))
                    break;
        }

        void NewCharacter() => NewCharacterAsync().Forget();

        /// <summary>
        /// O original troca tela e camera num quadro so (resposta do NewCharacter): o salao fica na tela enquanto os modelos da
        /// raca 0 carregam; depois Show("scrCreate") e o warp da raca juntos (sem o quadro do fundo do login vazio).
        /// </summary>
        async Task NewCharacterAsync()
        {
            gc?.Send(GamePackets.NewCharacter());
            createRace = -1;
            // NCPawnSetupWnd: tudo em -1 (FUN_10197a50) e a raca em 0; girar/zoom desabilitados ate escolher o modelo
            scrCreate.Panel.Set(race: 0, cls: -1, sex: -1, hair: -1, color: -1, face: -1);
            // 1920_04_criacao.png: ao abrir, Human escolhido e a descricao vazia ate escolher a classe
            if (scrCreate.Panel.Desc) scrCreate.Panel.Desc.text = "";
            scrCreate.SetModelButtons(false);
            deferCreateCamera = true;
            try
            {
                UpdateCreate("race");
                await createLoad;
            }
            catch (Exception e)
            {
                Debug.LogException(e);
            }
            finally
            {
                deferCreateCamera = false;
            }
            Show("scrCreate");
            lobby?.Play(LobbyScene.RaceScene[Math.Max(0, scrCreate.Panel.State.Race)], false);
            scrCreate.Msg("");
            scrCreate.Name.ActivateInputField();
        }

        async Task CreateCharacter()
        {
            if (gc == null) return;
            var s = scrCreate.Panel.State;
            // sem raca/classe/sexo, a mensagem do campo que falta (81/82/83)
            var missing = s.Race < 0 ? 81 : s.Cls < 0 ? 82 : s.Sex < 0 ? 83 : 0;
            if (missing != 0)
            {
                scrCreate.Msg(GameData.SystemMessage(missing, new List<string>()).Text, "err");
                return;
            }
            try
            {
                chars = await gc.CreateCharacter(new CreateCharArgs
                {
                    Name = scrCreate.Name.text.Trim(), Race = s.Race, Sex = s.Sex, ClassId = LobbyUi.ClassIdOf(s), HairStyle = s.Hair, HairColor = s.Color, Face = s.Face,
                });
                selectedSlot = chars.Count - 1;
                scrCreate.Name.text = "";
                ShowChars();
                selectedSlot = chars.Count - 1;
                RenderChars();
                scrChars.Msg("Personagem criado.", "ok");
            }
            catch (Exception e)
            {
                scrCreate.Msg(e.Message, "err");
            }
        }

        // ------------------------------------------------------------------ mundo
        /// <summary>Entra no mundo com o personagem do slot (testes).</summary>
        public void TestEnter(int slot)
        {
            selectedSlot = slot;
            Enter().Forget();
        }

        async Task Enter()
        {
            if (gc == null || selectedSlot < 0 || selectedSlot >= chars.Count) return;
            LobbySkin.SetEnabled(scrChars.Start, false);
            scrChars.Msg("Entrando no mundo…");
            loading.PlayerLevel = selectedSlot < chars.Count ? chars[selectedSlot].Level : 0;
            loading.Show("Entrando no mundo");
            try
            {
                BindWorldHandlers(gc);
                var me = await gc.EnterWorld(selectedSlot);
                inWorld = true;
                L2Zone.Instance?.Invalidate();
                if (scene == null)
                {
                    scene = new GameScene(null, world);
                    scene.WireFx(sfx);
                    // AssociateAttackedNotify: opacidade do efeito do soulshot pelo tamanho do grupo (pedido 0053)
                    scene.PawnFx.PartyMemberCount = () => social.PartyCount;
                    if (gameMinutes >= 0 && !scene.Env.TimeForced) scene.Env.Env.OnClientSetTime((int)gameMinutes, gameRatio);
                    if (ssqEnv >= 0) scene.Env.Env.OnSSQInfo(ssqEnv, ssqMode);
                    scene.OnFrame = OnFrame;
                    settings.Apply();
                    // InitVideoOption/InitGameOption: as opcoes do Option.ini valem ao entrar no mundo (-l2opt: diagnostico)
                    VideoOptions.ApplyDevArgs();
                    VideoOptions.Apply(scene, world);
                    world.IsPartyMember = id => partyPos.ContainsKey(id);
                    GameOptions.Apply(scene, world, ui);
                }
                Show("scrGame");
                world.UpsertSelf(me);
                ui.SetUser(me);
                ui.ShowHud();
                // o original nao escreve nada no chat ao entrar; a posicao fica so no log
                Debug.Log($"[l2web] no mundo: {me.Name} em {me.X}, {me.Y}, {me.Z}");
                // a tela so sai com cenario, terreno, BSP, o proprio modelo e os personagens em volta carregados
                await loading.Until("Carregando o mundo", LoadWorldAround(me.X, me.Y), minMs: 1500, quietMs: 900);
                scrChars.Msg("");
            }
            catch (Exception e)
            {
                Debug.LogException(e);
                scrChars.Msg(e.Message, "err");
                // so desliga os pacotes do mundo se nem chegou a entrar; ja dentro, um erro de carga nao derruba a sessao
                if (!inWorld) UnbindWorldHandlers();
            }
            finally
            {
                loading.Hide();
                LobbySkin.SetEnabled(scrChars.Start, true);
            }
        }

        /// <summary>Cenario em volta: StaticMeshes do tile (se exportados) e terreno do geodata.</summary>
        async Task LoadWorldAround(float x, float y)
        {
            if (scene == null) return;
            var hasStatics = await Statics.HasStatics(x, y);
            GeoTerrain.SetHideRaised(hasStatics);
            var t = GeoTerrain.LoadTerrainFor(scene, x, y);
            var s = Statics.LoadStaticsFor(scene, x, y);
            var u = UeTerrain.LoadUeTerrainFor(scene, x, y);
            try
            {
                await Task.WhenAll(t, s, u);
            }
            catch (Exception e)
            {
                // uma parte do cenario que falha (registrada) nao impede o resto nem o jogo
                Debug.LogException(e);
            }
            GeoTerrain.SetGeodataVisible(!UeTerrain.HasUeTerrain());
            foreach (var job in new[] { t, s, u })
                if (job.IsCompletedSuccessfully && !string.IsNullOrEmpty(job.Result))
                    Chat("dbg", job.Result);
        }

        void LeaveWorld()
        {
            inWorld = false;
            music.Stop();
            sfx.StopAmbient();
            ui.Reset();
            social.Reset();
            UnbindWorldHandlers();
            world.Clear();
            targetId = 0;
            holdMouse = false;
            moveKeys.Clear();
            turnKeys.Clear();
            keyMove.Reset();
        }

        void UnbindWorldHandlers()
        {
            foreach (var f in offs) f();
            offs.Clear();
        }

        void BindWorldHandlers(GameClient c)
        {
            UnbindWorldHandlers();
            void On(int op, Action<PacketReader> fn) => offs.Add(c.On(op, fn));
            On(0x04, r =>
            {
                var u = GamePackets.ParseUserInfo(r);
                world.UpsertSelf(u);
                ui.SetUser(u);
                UpdateBars(u.Hp, u.MaxHp, u.Mp, u.MaxMp, u.Cp, u.MaxCp);
            });
            On(0x03, r => world.UpsertPlayer(GamePackets.ParseCharInfo(r)));
            On(0x16, r => world.UpsertNpc(GamePackets.ParseNpcInfo(r)));
            On(0x01, r =>
            {
                var m = GamePackets.ParseMoveToLocation(r);
                world.Get(m.ObjectId)?.ServerMove(m.Tx, m.Ty, m.Tz, m.X, m.Y, m.Z);
                world.Answered(m.ObjectId);
            });
            // recusas sem campos: so zeram a trava de pedido do clique (spec 05 secao 5.7)
            On(0x08, _ => world.OnAttackOutofRange());
            On(0x09, _ => world.OnAttackinCoolTime());
            On(0x0a, _ => world.OnAttackDeadTarget());
            On(0x25, _ => world.OnActionFailed());
            // 0xf1 CameraMode (d): OnCameraMode(1) liga o modo camera (+0xa90), em que Espaco/Ctrl sobem e descem
            On(0xf1, r => keyMove.FreeCamera = r.D() == 1);
            On(0x62, r =>
            {
                var s = GamePackets.ParseStartRotation(r);
                var e = world.Get(s.ObjectId);
                if (e != null && e != world.Self)
                {
                    e.Turning = Math.Sign(s.Side);
                    e.TurnSpeed = s.Speed != 0 ? s.Speed : CamUtil.Cfg.KeyTurnRate;
                }
            });
            On(0x63, r =>
            {
                var s = GamePackets.ParseStopRotation(r);
                var e = world.Get(s.ObjectId);
                if (e != null && e != world.Self)
                {
                    e.Turning = 0;
                    e.Motion.Yaw = e.Motion.DesiredYaw = s.Degree & 0xffff;
                }
            });
            On(0x47, r =>
            {
                var p = GamePackets.ParsePosition(r);
                world.Get(p.ObjectId)?.ServerStop(p.X, p.Y, p.Z);
            });
            On(0x61, r =>
            {
                var p = GamePackets.ParsePosition(r);
                world.Get(p.ObjectId)?.ServerValidate(p.X, p.Y, p.Z, p.Heading);
            });
            On(0x28, r =>
            {
                var t = GamePackets.ParseTeleport(r);
                world.Get(t.ObjectId)?.Place(t.X, t.Y, t.Z);
                if (t.ObjectId == world.SelfId)
                {
                    // tela de carregamento enquanto o cenario do destino carrega; Appearing ao terminar (como o cliente)
                    var job = t.Fast ? LoadWorldAround(t.X, t.Y) : loading.Until("Teletransportando", LoadWorldAround(t.X, t.Y), minMs: 600);
                    job.ContinueWith(_ => c.Send(new byte[] { 0x30 }), TaskScheduler.FromCurrentSynchronizationContext()); // Appearing
                }
            });
            On(0x12, r =>
            {
                var id = GamePackets.ParseDeleteObject(r).ObjectId;
                world.Request.Deleted(id, targetId);
                if (id == targetId) SetTarget(0);
                world.Remove(id);
            });
            On(0x60, r =>
            {
                var m = GamePackets.ParseMoveToPawn(r);
                var e = world.Get(m.ObjectId);
                if (e != null) e.Follow = new FollowInfo { TargetId = m.TargetId, Distance = m.Distance };
                world.Answered(m.ObjectId);
            });
            On(0x2e, r =>
            {
                var m = GamePackets.ParseChangeMoveType(r);
                var e = world.Get(m.ObjectId);
                if (e != null) e.Running = m.Running;
            });
            On(0x2f, r =>
            {
                var w = GamePackets.ParseChangeWaitType(r);
                world.Get(w.ObjectId)?.SetSitting(w.Type == 0);
            });
            On(0x0e, r =>
            {
                var s = GamePackets.ParseStatusUpdate(r);
                L2Events.Dispatch(PacketEvents.Status(s));
                int G(int k, int cur) => s.Attrs.TryGetValue(k, out var v) ? v : cur;
                if (s.ObjectId == world.SelfId)
                    UpdateBars(G(GamePackets.Status.CurHp, bars.hp), G(GamePackets.Status.MaxHp, bars.maxHp), G(GamePackets.Status.CurMp, bars.mp),
                        G(GamePackets.Status.MaxMp, bars.maxMp), G(GamePackets.Status.CurCp, bars.cp), G(GamePackets.Status.MaxCp, bars.maxCp));
                var e = world.Get(s.ObjectId);
                if (e != null)
                {
                    e.Hp = G(GamePackets.Status.CurHp, e.Hp);
                    e.MaxHp = G(GamePackets.Status.MaxHp, e.MaxHp);
                    if (s.ObjectId == targetId) ui.UpdateTarget();
                }
            });
            On(0x4a, r =>
            {
                var s = GamePackets.ParseCreatureSay(r);
                // Say2: 0 geral, 1 grito, 2 sussurro, 3 party, 4 cla, 5 GM, 6/7 peticao, 8 troca, 9 alianca, 10 anuncio, 11 barco,
                // 12 amigo, 13 MSN, 14 sala de party, 15/16 command channel, 17 voz de heroi, 18 anuncio critico
                string[] classes = { "say", "shout", "tell", "party", "clan", "sys", "tell", "tell", "trade", "ally", "ann", "say", "tell", "tell", "party", "cc", "cc", "hero", "ann" };
                var cls = s.Type >= 0 && s.Type < classes.Length ? classes[s.Type] : "say";
                // OnSay2 (slot 197 do console) filtra palavroes sempre, na recepcao (FUN_1014cff0)
                var text = L2Chat.FilterObscene(s.Text, GameData.ObsceneWords, GameData.SysString(740, null));
                var evs = PacketEvents.Say(s, text);
                L2Events.Dispatch(evs);
                // a linha do chat sai com o Msg e a cor do evento (o que o ChatWnd.uc recebe)
                string msg = null;
                int cr = 0xdc, cg = 0xdc, cb = 0xdc;
                var ev0 = evs[0].Param;
                if (!L2Param.ParseString(ev0, "Msg", ref msg)) L2Param.ParseString(ev0, "Message", ref msg);
                L2Param.ParseInt(ev0, "ColorR", ref cr);
                L2Param.ParseInt(ev0, "ColorG", ref cg);
                L2Param.ParseInt(ev0, "ColorB", ref cb);
                // U+FFFF (o npcString -1 do servidor lido como texto, como no original) nao tem glifo na fonte do cliente
                // EV_ChatMessage(Type = o tipo do Say2): o ChatWnd roteia pelo CheckFilter
                Chat(cls, (msg ?? text).Replace("￿", ""), $"#{cr:x2}{cg:x2}{cb:x2}", s.Type);
            });
            On(0x64, r =>
            {
                var m = GamePackets.ParseSystemMessage(r);
                var prms = m.Params.Select(p => p.Type switch
                {
                    "text" => p.Text,
                    "npc" => GameData.NpcTextName(p.Value),
                    "item" => GameData.ItemName(p.Value),
                    "skill" => GameData.SkillName(p.Id, p.Level),
                    "zone" => $"{p.X}, {p.Y}, {p.Z}",
                    "castle" => $"castelo {p.Value}",
                    "itemNumber" => p.Big.ToString(),
                    _ => p.Value.ToString(),
                }).ToList();
                var t = GameData.SystemMessage(m.Id, prms);
                L2Events.Dispatch(PacketEvents.SystemMessage(m.Id, t.Text, t.Record?.Argb ?? 0xffdcdcdc, t.Record?.Group ?? 0));
                // EV_ChatMessage(Type 5, SysType = group do systemmsg): DAMAGE/USEITEMS passam pelos filtros Damage/Consumables
                Chat("sys", t.Text, t.Color, (int)ChatType.System, t.Record?.Group ?? 0);
                // som da coluna do systemmsg-e.dat (ex.: ItemSound3.sys_chat_prohibition)
                if (!string.IsNullOrEmpty(t.Sound)) sfx?.PlayUi(t.Sound);
            });
            // combate
            On(0x05, r =>
            {
                var a = GamePackets.ParseAttack(r);
                // OnAttack(User*,User*) (+0x12c) zera a trava quando o atacante sou eu; com o alvo desconhecido o
                // tratador chama +0x128, que nao zera. Os golpes extras (OnAssociatedAttack) nao zeram.
                if (a.Hits.Count > 0 && world.Get(a.Hits[0].TargetId) != null) world.Answered(a.AttackerId);
                L2Events.Dispatch(PacketEvents.Attack(a, id => world.Get(id)?.Name ?? ""));
                OnAttack(a);
            });
            On(0x48, r => OnMagicSkillUse(GamePackets.ParseMagicSkillUse(r)));
            On(0x49, r =>
            {
                var e = world.Get(GamePackets.ParseObjectId(r).ObjectId);
                e?.CancelCast();
                if (e != null && scene != null) scene.Casts.OnMagicSkillCanceled(e);
            });
            On(0x76, r =>
            {
                // MagicSkillLaunched: alvos associados (bOnMultiTarget) do SkillVisualEffect
                var m = UiPackets.ParseMagicSkillLaunched(r);
                var caster = world.Get(m.ObjectId);
                if (caster == null || scene == null) return;
                var targets = new List<Entity>();
                foreach (var id in m.Targets) if (world.Get(id) is { } t) targets.Add(t);
                scene.Casts.OnMagicSkillLaunched(caster, m.SkillId, targets);
            });
            On(0x6d, r => ui.ShowCastBar(UiPackets.ParseSetupGauge(r).Time));
            On(0x7f, r =>
            {
                var l = UiPackets.ParseAbnormalStatus(r);
                L2Events.Dispatch(PacketEvents.Abnormal(l));
                ui.SetBuffs(l);
            });
            On(0xf3, r =>
            {
                var l = UiPackets.ParseEtcStatus(r);
                L2Events.Dispatch(PacketEvents.Abnormal(l, Ev.EV_AbnormalStatusEtcItem));
                ui.SetEtcBuffs(l);
            });
            On(0xf4, r =>
            {
                var l = UiPackets.ParseShortBuff(r);
                L2Events.Dispatch(PacketEvents.Abnormal(l, Ev.EV_AbnormalStatusShortItem));
                ui.SetShortBuffs(l);
            });
            On(0xec, r =>
            {
                // ClientSetTime (dd): minutos do dia e razao (aCis: getGameTime() e 6)
                gameMinutes = r.D();
                gameRatio = r.D();
                if (scene != null && !scene.Env.TimeForced) scene.Env.Env.OnClientSetTime((int)gameMinutes, gameRatio);
            });
            // portas (AMover): DoorInfo liga o id do servidor ao id de rede; StaticObjectInfo idem; DoorStatusUpdate abre/fecha
            On(0x4c, r =>
            {
                var objId = r.D();
                var doorId = r.D();
                MapEnv.BindDoor(doorId, objId);
            });
            On(0x99, r =>
            {
                var staticId = r.D();
                var objId = r.D();
                MapEnv.BindDoor(staticId, objId);
            });
            On(0x4d, r =>
            {
                // ddddddd: objectId, fechada (0 = aberta), grau de dano (< 7 troca a malha), inimigo, doorId, maxHp, curHp
                var objId = r.D();
                var closed = r.D();
                MapEnv.SetDoorByNetId(objId, closed == 0);
            });
            On(0xf8, r =>
            {
                // SSQInfo (cc, aCis writeH 256..259): byte baixo = ambiente 0..3, byte alto = modo (1 = imediato)
                var v = r.H();
                ssqEnv = v & 0xff;
                ssqMode = (v >> 8) & 0xff;
                scene?.Env.Env.OnSSQInfo(ssqEnv, ssqMode);
            });
            On(0xfe, r =>
            {
                var sub = r.H();
                if (sub == 0x4b)
                {
                    // ExDuelAskStart "Sd" -> EV_DuelAskStart{userName, type}; com Game.IsRejectingDuel o DuelManager.uc:110-118
                    // responde RequestDuelAnswerStart(type, 1, 0) na hora (recusa)
                    var requestor = r.S();
                    var duelType = r.D();
                    L2Events.Dispatch(new PacketEvents.Event(Ev.EV_DuelAskStart, L2Param.Add(L2Param.Add("", "userName", requestor), "type", duelType)));
                    // a resposta (recusa automatica ou o DialogBox de 10 s) e da PartyMatchView/DuelManager (pedido 0035)
                }
                if (sub == 0x01)
                {
                    // ExRegenMax "dddf" -> EV_RegenStatus; o StatusWnd.uc so trata Type 1 (SetRegenInfo no HPBar)
                    var g = UiPackets.ParseExRegenMax(r);
                    L2Events.Dispatch(new PacketEvents.Event(Ev.EV_RegenStatus,
                        L2Param.Add(L2Param.Add(L2Param.Add(L2Param.Add("", "Type", g.Type), "Duration", g.Duration), "Ticks", g.Ticks), "Amount",
                            ((float)g.Amount).ToString("0.######", System.Globalization.CultureInfo.InvariantCulture))));
                    if (g.Type == 1) ui.StatusWnd.SetRegen("HPBar", g.Duration, g.Ticks, g.Amount);
                }
                // ExCursedWeaponList 0x45 "d" + n x "d" / ExCursedWeaponLocation 0x46 "d" + n x "ddddd" (OnCursedWeaponList /
                // OnCursedWeaponLocation: NAME = FL2GameData::GetItemName)
                if (sub == 0x45)
                {
                    var n = r.D();
                    var p = L2Param.Add("", "NUM", n);
                    for (var i = 0; i < n && r.Remaining >= 4; i++)
                    {
                        var id = r.D();
                        p = L2Param.Add(L2Param.Add(p, "ID" + i, id), "NAME" + i, GameData.ItemName(id));
                    }
                    L2Events.Dispatch(new PacketEvents.Event(Ev.EV_MinimapCursedWeaponList, p));
                }
                if (sub == 0x46)
                {
                    var n = r.D();
                    var p = L2Param.Add("", "NUM", n);
                    for (var i = 0; i < n && r.Remaining >= 20; i++)
                    {
                        int id = r.D(), owned = r.D(), x = r.D(), y = r.D(), z = r.D();
                        p = L2Param.Add(L2Param.Add(L2Param.Add(p, "ID" + i, id), "NAME" + i, GameData.ItemName(id)), "ISOWNED" + i, owned);
                        p = L2Param.Add(L2Param.Add(L2Param.Add(p, "X" + i, x), "Y" + i, y), "Z" + i, z);
                    }
                    L2Events.Dispatch(new PacketEvents.Event(Ev.EV_MinimapCursedWeaponLocation, p));
                }
                if (sub == 0x12)
                {
                    var a = UiPackets.ParseExAutoSoulShot(r);
                    ui.SetAutoShot(a.ItemId, a.On);
                }
            });
            On(0x2b, r =>
            {
                var e = world.Get(GamePackets.ParseObjectId(r).ObjectId);
                if (e != null) e.InCombat = true;
            });
            On(0x2c, r =>
            {
                var e = world.Get(GamePackets.ParseObjectId(r).ObjectId);
                if (e != null) e.InCombat = false;
            });
            On(0xa6, r =>
            {
                var t = GamePackets.ParseMyTargetSelected(r);
                world.Request.MyTargetSelected();
                L2Events.Dispatch(PacketEvents.MyTargetSelected(t));
                ui.TargetLevelDiff = t.Color;
                SetTarget(t.ObjectId);
            });
            On(0x2a, r =>
            {
                var u = GamePackets.ParseTargetUnselected(r);
                var e = world.Get(u.ObjectId);
                if (e != null) e.TargetId = 0;
                world.Answered(u.ObjectId);
                if (u.ObjectId == world.SelfId) SetTarget(0);
            });
            On(0x29, r =>
            {
                var t = GamePackets.ParseTargetSelected(r);
                var e = world.Get(t.ObjectId);
                if (e != null) e.TargetId = t.TargetId;
                world.Answered(t.ObjectId);
            });
            On(0x06, r =>
            {
                var d = GamePackets.ParseDie(r);
                var e = world.Get(d.ObjectId);
                if (e != null)
                {
                    e.SetDead(true);
                    e.InCombat = false;
                }
                // RestartMenuWnd: vila, clan hall, castelo, QG de cerco, aqui (os indices sao os do RequestRestartPoint)
                if (d.ObjectId == world.SelfId) L2Events.Dispatch(PacketEvents.Die(d));
                if (d.ObjectId == world.SelfId) ShowRestartMenuLater(d);
                if (d.ObjectId == targetId) ui.UpdateTarget();
            });
            On(0x07, r =>
            {
                var id = GamePackets.ParseObjectId(r).ObjectId;
                world.Get(id)?.SetDead(false);
                if (id == world.SelfId)
                {
                    L2Events.Dispatch(PacketEvents.Revive());
                    ui.HideDeath();
                }
            });
            On(0x7e, _ =>
            {
                leaving = true;
                LeaveWorld();
                gc?.Close();
            });
            On(0x5f, r =>
            {
                if (!GamePackets.ParseRestartResponse(r).Ok)
                {
                    Chat("sys", "O servidor recusou a troca de personagem agora.");
                    return;
                }
                L2Events.Dispatch(PacketEvents.Restart());
                LeaveWorld();
                ShowChars();
            });
            // interface (Fase 9)
            On(0x0f, r =>
            {
                var nh = UiPackets.ParseNpcHtml(r);
                LogHtmlLinks("npc", nh.Html);
                ui.ShowHtml(nh.Html, nh.NpcObjectId);
            });
            // PartyMemberPosition 0xa7 "d" + n x "dddd": tabela de posicoes do grupo (FUN_10422800), lida pelo minimapa
            On(0xa7, r =>
            {
                partyPos.Clear();
                var n = r.D();
                for (var i = 0; i < n && r.Remaining >= 16; i++) partyPos[r.D()] = (r.D(), r.D(), r.D());
            });
            // ShowMiniMap: NCConsole::ShowMinimapWnd (FUN_1013db40) -> EV_ShowMinimap com SSQStatus
            On(0x9d, r => L2Events.Dispatch(new PacketEvents.Event(Ev.EV_ShowMinimap, L2Param.Add("", "SSQStatus", UiPackets.ParseShowMiniMap(r).ssq))));
            On(0x6e, r =>
            {
                var b = UiPackets.ParseShowBoard(r);
                LogHtmlLinks("board", b.Html);
                L2Events.Dispatch(PacketEvents.ShowBoard(b));
                ui.ShowBoard(b);
            });
            // TutorialShowHtml 0xa0 "S" / TutorialCloseHtml 0xa3 (sem corpo): TutorialViewerWnd (#0055, pedido 0042)
            On(0xa0, r =>
            {
                var html = r.S();
                LogHtmlLinks("tutorial", html);
                L2Events.Dispatch(PacketEvents.TutorialShowHtml(html));
            });
            On(0xa3, _ => L2Events.Dispatch(PacketEvents.TutorialCloseHtml()));
            // social (Fase 11)
            On(0x39, r => social.AskParty(SocialPackets.ParseAskJoinParty(r).Requestor));
            // JoinParty: o original so emite EV_SystemMessage, e o aCis ja manda as systemmsg de entrada e de recusa (pedido 0045 item 3)
            On(0x3a, r => SocialPackets.ParseJoinParty(r));
            On(0x4e, r =>
            {
                var pa = SocialPackets.ParsePartyAll(r);
                L2Events.Dispatch(PacketEvents.PartyAdd(pa.Members, pa.LeaderId, pa.Members.Count, pa.Distribution));
                social.PartyAll(pa);
            });
            On(0x4f, r =>
            {
                var pa = SocialPackets.ParsePartyAdd(r);
                L2Events.Dispatch(PacketEvents.PartyAdd(new[] { pa.Member }, pa.LeaderId, social.PartyCount + 1, pa.Distribution));
                social.PartyAdd(pa);
            });
            On(0x50, _ =>
            {
                L2Events.Dispatch(PacketEvents.PartyDeleteAll());
                social.PartyClear();
            });
            On(0x51, r =>
            {
                var pd = SocialPackets.ParsePartyDelete(r);
                L2Events.Dispatch(PacketEvents.PartyDelete(pd.ObjectId, System.Math.Max(0, social.PartyCount - 1)));
                social.PartyDelete(pd.ObjectId);
            });
            On(0x52, r =>
            {
                var pm = SocialPackets.ParsePartyUpdate(r);
                L2Events.Dispatch(PacketEvents.PartyUpdate(pm));
                social.PartyUpdate(pm);
            });
            On(0x5e, r =>
            {
                var t = SocialPackets.ParseTradeRequest(r);
                L2Events.Dispatch(PacketEvents.TradeRequest(t));
                social.AskTrade(t.SenderId);
            });
            On(0x1e, r =>
            {
                var t = SocialPackets.ParseTradeStart(r);
                L2Events.Dispatch(PacketEvents.TradeStart(t));
                social.TradeStart(t);
            });
            // TradeOwnAdd/TradeOtherAdd: o EV_TradeAddItem leva o item (pedido 0028)
            On(0x20, r =>
            {
                var own = SocialPackets.ParseTradeAdd(r);
                L2Events.Dispatch(PacketEvents.TradeAdd(true, own));
                social.OwnAdd(own);
            });
            On(0x21, r =>
            {
                var other = SocialPackets.ParseTradeAdd(r);
                L2Events.Dispatch(PacketEvents.TradeAdd(false, other));
                social.OtherAdd(other);
            });
            // 0xd3 NetPingPacket: o original responde na hora com NetPing (efeito "rede", 97)
            On(0xd3, r => gc?.Send(GamePackets.NetPing(r.D())));
            // 0x75 TradePressOwnOk: o original descarta (tratador xor al,al; ret, 97); a confirmacao propria e marcada no clique
            On(0x7c, _ =>
            {
                L2Events.Dispatch(PacketEvents.TradeOtherOk());
                social.Pressed(false);
            });
            On(0x22, r =>
            {
                L2Events.Dispatch(PacketEvents.TradeDone());
                social.TradeEnd(SocialPackets.ParseTradeDone(r).Done);
            });
            On(0x9b, r =>
            {
                var ps = SocialPackets.ParsePrivateStoreSell(r);
                L2Events.Dispatch(PacketEvents.PrivateStore(ps));
                social.StoreList(ps);
            });
            On(0x9c, r =>
            {
                var m = SocialPackets.ParsePrivateStoreMsg(r);
                var e = world.Get(m.OwnerId);
                if (e != null)
                {
                    e.StoreMsg = m.Message;
                    if (e.StoreType != 0) e.SetLabel($"{e.Name} · [{(e.StoreType == 3 ? "Compra" : "Venda")}] {m.Message}", "#f0c75e");
                }
            });
            On(0xfa, r =>
            {
                var fl = SocialPackets.ParseFriendList(r);
                // L2FriendWnd: limpa, acrescenta cada "dSdd" e refaz a arvore
                ui.Messenger.M.SetList(fl.Select(f => (f.ObjectId, f.Name, f.Online ? 1 : 0, f.Online ? f.ObjectId : 0)));
                ui.Messenger.Render();
            });
            // L2FriendPacket 0xfb "ddSdd" (acao, id, nome, online, id2), L2FriendStatus 0xfc "dSd", L2FriendSay 0xfd "dSSS"
            On(0xfb, r =>
            {
                int act = r.D(), id = r.D();
                var name = r.S();
                int on = r.D(), id2 = r.Remaining >= 4 ? r.D() : 0;
                ui.Messenger.M.Packet(act, id, name, on, id2);
                ui.Messenger.Render();
            });
            On(0xfc, r =>
            {
                var on = r.D();
                var name = r.S();
                var id = r.Remaining >= 4 ? r.D() : 0;
                ui.Messenger.M.Status(on, name, id);
                ui.Messenger.Render();
            });
            On(0xfd, r =>
            {
                var code = r.D();
                r.S();
                var sender = r.S();
                var msg = r.S();
                ui.Messenger.Receive(code, sender, msg);
            });
            On(0x7d, r => social.AskFriend(SocialPackets.ParseFriendAddRequest(r).Requestor));
            On(0x53, r => social.ClanMembers(SocialPackets.ParsePledgeMembers(r)));
            // itens no chao (Fase 10)
            On(0x0b, r => world.UpsertItem(UiPackets.ParseSpawnItem(r)));
            On(0x0c, r => world.UpsertItem(UiPackets.ParseDropItem(r)));
            On(0x0d, r =>
            {
                var g = UiPackets.ParseGetItem(r);
                var it = world.Get(g.ObjectId);
                var who = world.Get(g.PlayerId);
                if (it != null && who != null && scene != null) scene.Effects.Later(0.25f, () => world.Remove(g.ObjectId));
                else world.Remove(g.ObjectId);
            });
            On(0x11, r =>
            {
                var b = UiPackets.ParseBuyList(r);
                L2Events.Dispatch(PacketEvents.Shop("buy", b.ListId, b.Money, 0, b.Items));
                ui.BuyList(b);
            });
            On(0x10, r =>
            {
                var sl = UiPackets.ParseSellList(r);
                L2Events.Dispatch(PacketEvents.Shop("sell", 0, sl.Money, 0, sl.Items));
                ui.SellList(sl);
            });
            On(0xd0, r =>
            {
                var m = UiPackets.ParseMultiSellList(r);
                // a MultiSellWnd do xdat (UI/MultiSellView.cs) monta a lista pelos eventos
                L2Events.Dispatch(PacketEvents.MultiSell(m));
            });
            On(0x1b, r =>
            {
                var l = UiPackets.ParseItemList(r);
                L2Events.Dispatch(PacketEvents.ItemList(l));
                ui.SetItems(l.Items, l.Show);
            });
            On(0x27, r =>
            {
                var iu = UiPackets.ParseInventoryUpdate(r);
                L2Events.Dispatch(PacketEvents.InventoryUpdate(iu));
                ui.UpdateItems(iu);
            });
            On(0x45, r =>
            {
                var l = UiPackets.ParseShortCutInit(r);
                L2Events.Dispatch(PacketEvents.ShortcutInit(l));
                ui.SetShortcuts(l);
            });
            On(0x44, r =>
            {
                var sc = UiPackets.ParseShortCutRegister(r);
                if (sc != null) L2Events.Dispatch(PacketEvents.ShortcutRegister(sc));
                ui.RegisterShortcut(sc);
            });
            On(0x46, r => ui.DeleteShortcut(UiPackets.ParseShortCutDelete(r).Slot));
            On(0x58, r =>
            {
                L2Events.Dispatch(PacketEvents.SkillListStart());
                ui.SetSkills(UiPackets.ParseSkillList(r));
            });
            On(0xed, r =>
            {
                var d = UiPackets.ParseConfirmDlg(r);
                ui.Confirm(d.MessageId, d.Params, d.RequesterId);
            });
        }

        // ------------------------------------------------------------------ combate

        /// <summary>Pacote Attack: anima o atacante e mostra os golpes no tempo do cliente (notifies) e do servidor (dano).</summary>
        void OnAttack(AttackInfo a)
        {
            var attacker = world.Get(a.AttackerId);
            if (attacker == null || scene == null || a.Hits.Count == 0) return;
            var target = world.Get(a.Hits[0].TargetId);
            var res = attacker.Attack(target);
            var fx = scene.Effects;
            var kind = res.Ranged ? "bow" : a.Hits.Count > 1 || attacker.Widx == 3 ? "dual" : "melee";
            var srv = Combat.ServerHits(attacker.PAtkSpd, kind);
            // efeito de golpe (AssociateAttackedNotify) no notify AttackItem do cliente; flecha (NArrow) no AttackShot
            for (var i = 0; i < a.Hits.Count; i++)
            {
                var h = a.Hits[i];
                var victim = world.Get(h.TargetId);
                if (victim == null) continue;
                var hk = Combat.HitKind(h.Flags);
                if (res.Ranged)
                {
                    var shot = res.Shots.Count > 0 ? res.Shots[0] : res.Items.Count > 0 ? res.Items[0] : 0.2f;
                    var land = Mathf.Max(shot + 0.08f, srv.Hits[0] / 1000f);
                    fx.Later(shot, () => scene.PawnFx.OnBowShot(attacker, victim));
                    if (hk != "miss") fx.Later(land, () => scene.PawnFx.OnHit(victim, attacker, h.Flags, true, scene.DamageEffectOf));
                }
                else if (hk != "miss")
                {
                    var hitAt = i < res.Items.Count ? res.Items[i] : res.Items.Count > 0 ? res.Items[0] : srv.Hits[Math.Min(i, srv.Hits.Length - 1)] / 1000f;
                    fx.Later(hitAt, () => scene.PawnFx.OnHit(victim, attacker, h.Flags, false, scene.DamageEffectOf));
                }
            }
        }

        /// <summary>MagicSkillUse: animacao de cast no tempo do cliente, efeito no disparo e no hitTime, reuso e barra.</summary>
        void OnMagicSkillUse(MagicSkillUseInfo m)
        {
            var caster = world.Get(m.ObjectId);
            if (caster == null || scene == null) return;
            var target = world.Get(m.TargetId);
            var plan = caster.Kind == "npc"
                ? Skills.CastPlan("npc", caster.NpcId, caster.Widx, caster.MAtkSpd, m.SkillId, m.HitTime)
                : Skills.CastPlan("player", caster.Model, caster.Widx, caster.MAtkSpd, m.SkillId, m.HitTime);
            if (m.ObjectId == world.SelfId) ui.SetReuse(m.SkillId, m.Reuse);
            if (plan != null) caster.Cast(plan, target);
            // efeitos visuais (spec 09 §2): MagicType = cast_style do skillgrp; 0 = efeito transiente
            var rec = L2SkillData.Get(m.SkillId, m.Level);
            var castStyle = rec?.CastStyle ?? int.Parse(Skills.SkillData(m.SkillId)?.Cs ?? "0");
            scene.Casts.OnMagicSkillUse(caster, target, m.SkillId, m.Level, castStyle, m.HitTime, plan);
        }

        // ------------------------------------------------------------------ HUD
        (int hp, int maxHp, int mp, int maxMp, int cp, int maxCp) bars = (0, 1, 0, 1, 0, 1);

        void UpdateBars(int hp, int maxHp, int mp, int maxMp, int cp, int maxCp)
        {
            bars = (hp, maxHp, mp, maxMp, cp, maxCp);
            ui.SetBars(hp, maxHp, mp, maxMp, cp, maxCp);
        }

        void SetTarget(int id)
        {
            world.Get(targetId)?.SetSelected(false);
            targetId = id;
            var e = world.Get(id);
            e?.SetSelected(true);
            ui.SetTarget(e);
        }

        void Chat(string cls, string text, string color = null, int chatType = -1, int sysType = 0)
        {
            // linhas de diagnostico (cenario, terreno...) ficam no console, nao no chat do jogo
            if (cls == "dbg")
            {
                Debug.Log("[l2web] " + text);
                return;
            }
            ui?.ChatLine(cls, text, color, chatType, sysType);
        }

        // ------------------------------------------------------------------ cursor (FUN_10164e80: tipo pelo objeto sob o mouse)
        Vector2 cursorLastPos = new(-1, -1);
        float cursorAcc;

        void UpdateCursor()
        {
            if (Mouse.current == null || scene == null) return;
            cursorAcc += Time.deltaTime;
            var p = Mouse.current.position.ReadValue();
            if (p == cursorLastPos && cursorAcc < 0.25f) return;
            cursorAcc = 0;
            cursorLastPos = p;
            var es = UnityEngine.EventSystems.EventSystem.current;
            var overUi = es && es.IsPointerOverGameObject();
            Entity hover = null;
            if (!overUi && p.x >= 0 && p.y >= 0 && p.x < Screen.width && p.y < Screen.height)
            {
                var hit = scene.Pick(p.x, p.y);
                if (hit != null && hit.Kind == "entity" && hit.ObjectId is int id) hover = world.Get(id);
            }
            var self = world.Self;
            var selfPvp = self != null && (self.PvpFlag != 0 || self.Karma > 0);
            L2Cursor.Apply(L2Cursor.TypeFor(hover, overUi, selfPvp, hover != null && partyPos.ContainsKey(hover.ObjectId), hover != null && hover.ClanId != 0 && hover.ClanId == world.SelfClanId));
        }

        /// <summary>Anti-flood do chat (console+0x228 do NWindow.dll), com o timer de 1000 ms.</summary>
        readonly L2Chat.AntiFlood chatFlood = new();
        float chatFloodTimer;

        /// <summary>
        /// ProcessChatMessage(texto, aba) do ChatWnd.uc: '/' ou '／' = comando; senao o FUN_10139c50 (macros, tipo pela aba,
        /// prefixos, sussurro) e o anti-flood nos tipos 0, 1, 2 e 8.
        /// </summary>
        void OnChatSubmit(string text, int tab)
        {
            if (string.IsNullOrEmpty(text) || gc == null) return;
            if (L2Chat.IsCommand(text))
            {
                RunSlashCommand(text);
                return;
            }
            var say = L2Chat.Classify(L2Chat.Macros(text, world.Self?.Name, world.Get(targetId)?.Name), tab, L2Options.GetBool("Game", "OldChatting"));
            if (say == null) return;
            var s = say.Value;
            if (s.Flood && !chatFlood.Check(s.Text)) return;
            // UNetworkHandler::Say2: tipo 2 sempre `cSdS` (alvo nulo = string vazia); os outros `cSd`
            gc.Send(s.Type == 2 ? GamePackets.Say2Tell(s.Text, s.Target ?? "") : GamePackets.Say2(s.Text, s.Type));
        }

        /// <summary>Diagnostico do modo automatico: os links bypass de um HTML recebido.</summary>
        static void LogHtmlLinks(string src, string html)
        {
            if (string.IsNullOrEmpty(html)) return;
            var links = Regex.Matches(html, @"bypass\s+(-h\s+)?([^""]+)""").Cast<Match>().Select(m => m.Groups[2].Value.Trim()).Distinct().Take(60);
            Debug.Log($"[html] {src} ({html.Length}): " + string.Join(" | ", links));
            var mnpc = System.Text.RegularExpressions.Regex.Match(html, @"npc_(\d+)_");
            if (mnpc.Success) lastHtmlNpc = mnpc.Groups[1].Value;
        }

        /// <summary>
        /// EV_RestartMenuShow (console+0x388): o engine (FUN_104bac30) so mostra o menu com o pawn no DeathWait e mais de
        /// 2,0 s passados; os botoes vem do EV_Die (FUN_101512c0) ja despachado.
        /// </summary>
        async void ShowRestartMenuLater(DieInfo d)
        {
            var self = world.Self;
            for (var i = 0; i < 400 && self != null && self.Dead && !self.InDeathWait; i++) await Task.Delay(50);
            await Task.Delay(2050);
            if (self == null || !self.Dead || world.Self != self) return;
            L2Events.Dispatch(new PacketEvents.Event(Ev.EV_RestartMenuShow, ""));
            ui.ShowDeath(new[] { (d.ToVillage, 0), (d.ToClanHall, 1), (d.ToCastle, 2), (d.ToSiegeHq, 3), (d.Fixed, 4) });
        }

        OptionWnd optionWnd;

        OptionWnd OptionWindow()
        {
            if (optionWnd != null) return optionWnd;
            optionWnd = new OptionWnd(ui.Layer)
            {
                SetVolumes = (m, fx) =>
                {
                    music?.SetVolume(m);
                    sfx?.SetVolume(fx);
                },
                PartyMemberCount = () => social.PartyCount,
                // os setters nativos de video e de jogo depois de gravar o Option.ini (OptionWnd.uc:822-984, 1066-1143)
                OnApplied = () =>
                {
                    VideoOptions.Apply(scene, world);
                    GameOptions.Apply(scene, world, ui);
                },
                // Initialize: SetDefaultPosition() de todas as janelas
                OnInitialize = () => ui?.Layer.ResetPositions(),
            };
            return optionWnd;
        }

        /// <summary>Objeto do NPC no ultimo HTML (o {npc} do -l2bypass).</summary>
        static string lastHtmlNpc = "";

        /// <summary>PartyMemberPosition (0xa7): id -> posicao.</summary>
        readonly Dictionary<int, (int x, int y, int z)> partyPos = new();

        /// <summary>GetNextEnemy guarda o ultimo escolhido (in_ECX[0x18]) para o proximo /targetnext.</summary>
        int lastNextEnemy;

        /// <summary>Comandos que o Unity ainda nao executa (log uma vez por comando).</summary>
        readonly HashSet<string> missingSlash = new();

        /// <summary>
        /// Comando de barra: L2Commands.PlanLine (commandname-e.dat + switch FUN_1013a320) e a execucao de cada passo.
        /// </summary>
        void RunSlashCommand(string text)
        {
            var ctx = SlashCtx();
            var steps = L2Commands.PlanLine(text, ctx, out var id);
            Debug.Log($"[cmd] {text} -> id {id}: {string.Join(" ", steps)}");
            RunSteps(steps, ctx);
        }

        /// <summary>Estado que o switch dos comandos e o DoAction consultam (alvo, proprio pawn, party, buscas).</summary>
        CommandCtx SlashCtx()
        {
            var self = world.Self;
            var t = world.Get(targetId);
            return new CommandCtx
            {
                TargetId = t != null ? targetId : 0,
                TargetName = t?.Name,
                TargetIsPlayer = t != null && t.Kind == "player",
                SelfName = self?.Name ?? "",
                SelfX = self != null ? Mathf.RoundToInt(self.X) : 0,
                SelfY = self != null ? Mathf.RoundToInt(self.Y) : 0,
                SelfZ = self != null ? Mathf.RoundToInt(self.Z) : 0,
                PartyNames = social.PartyNames,
                PartyLooting = L2Options.GetInt("Game", "PartyLooting"),
                FindByName = n => world.Entities.Values.FirstOrDefault(e => e.Kind != "item" && string.Equals(e.Name, n, StringComparison.OrdinalIgnoreCase))?.ObjectId ?? 0,
                SkillByName = n => ui.SkillByName(n),
                HasObscene = s => L2Chat.FilterObscene(s, GameData.ObsceneWords, "\u0001") != s,
            };
        }

        /// <summary>Executa os passos de um comando ou de uma acao (pacote, DoAction, sysmsg, evento, rotina local).</summary>
        void RunSteps(List<CommandStep> steps, CommandCtx ctx)
        {
            var self = world.Self;
            foreach (var st in steps)
            {
                switch (st.Kind)
                {
                    case "pkt":
                        gc.Send(st.Packet);
                        break;
                    case "act":
                        DoAction(st.Value);
                        break;
                    case "msg":
                        chatFlood.SystemMessage(st.Value);
                        break;
                    case "ev":
                        L2Events.Dispatch(new PacketEvents.Event(st.Value, st.Text == null ? "" : L2Param.Add("", "Message", st.Text)));
                        break;
                    case "local" when st.Text == "useshortcut":
                        ui.UseShortcutIndex(st.Value, st.Ctrl, st.Shift);
                        break;
                    case "local" when st.Text == "assist":
                        Assist(targetId);
                        break;
                    case "local" when st.Text == "equip":
                        ui.EquipShortcutIndex(st.Value);
                        break;
                    case "local" when st.Text == "targetnext" || st.Text == "pickup":
                    {
                        if (self == null) break;
                        // FUN_1014c7c0(200, alvo) / FUN_1014c720(200, -1): distancia 3D ao proprio pawn; filtro 2 = criatura NPC
                        // viva (FUN_10407e50), 1 = item no chao
                        var pickup = st.Text == "pickup";
                        var near = world.Entities.Values.Where(e => e.ObjectId != world.SelfId).Select(e => new L2Commands.Near(e.ObjectId,
                            Mathf.Sqrt((e.X - self.X) * (e.X - self.X) + (e.Y - self.Y) * (e.Y - self.Y) + (e.Z - self.Z) * (e.Z - self.Z)),
                            pickup ? e.Kind == "item" : e.Kind == "npc" && !e.Dead)).ToList();
                        int pick;
                        if (pickup) pick = L2Commands.Nearest(near, 200, -1);
                        else
                        {
                            var last = near.FirstOrDefault(n => n.Id == lastNextEnemy);
                            pick = L2Commands.NextEnemy(near, 200, targetId, lastNextEnemy != 0 && last.Id != 0 ? Mathf.Max(0, last.Dist) : 0);
                            if (pick != 0) lastNextEnemy = pick;
                        }
                        if (pick != 0) gc.Send(GamePackets.Action(pick, ctx.SelfX, ctx.SelfY, ctx.SelfZ, Keyboard.current?.shiftKey.isPressed ?? false));
                        break;
                    }
                    default:
                        if (missingSlash.Add(st.Token)) Debug.Log($"[cmd] passo sem implementacao no Unity: {st.Token}");
                        break;
                }
            }
        }

        /// <summary>
        /// RequestAssist (FUN_1014c870) e /assist (FUN_1015a770, com o alvo atual): o alvo do personagem `id`, se o cliente o
        /// conhece, recebe um Action com a posicao do proprio pawn e o Shift.
        /// </summary>
        void Assist(int id)
        {
            var s = world.Self;
            var e = world.Get(id);
            if (s == null || gc == null || e == null || e.TargetId == 0) return;
            var t = world.Get(e.TargetId);
            if (t == null) return;
            gc.Send(GamePackets.Action(t.ObjectId, Mathf.RoundToInt(s.X), Mathf.RoundToInt(s.Y), Mathf.RoundToInt(s.Z), Keyboard.current?.shiftKey.isPressed ?? false));
        }

        /// <summary>
        /// DoAction (FUN_10170860): ActionWnd, barra de atalhos, PetWnd e os comandos de barra. L2Commands.PlanAction monta os
        /// passos (ataque, troca, grupo, sociais, duelo, lojas; o resto e RequestActionUse) com o Ctrl e o Shift do momento.
        /// </summary>
        void DoAction(int n)
        {
            if (gc == null) return;
            var kb = Keyboard.current;
            var ctx = SlashCtx();
            var steps = L2Commands.PlanAction(n, ctx, kb?.ctrlKey.isPressed ?? false, kb?.shiftKey.isPressed ?? false);
            Debug.Log($"[act] {n}: {string.Join(" ", steps)}");
            RunSteps(steps, ctx);
        }

        /// <summary>Anda ate (x, y, z) como um clique no chao (diagnostico).</summary>
        public void MoveTo(int x, int y, int z)
        {
            var s = world.Self;
            if (gc != null && s != null) gc.Send(GamePackets.MoveTo(x, y, z, Mathf.RoundToInt(s.X), Mathf.RoundToInt(s.Y), Mathf.RoundToInt(s.Z)));
        }

        /// <summary>Envia um pacote do jogo (diagnostico).</summary>
        public void Send(byte[] b) => gc?.Send(b);

        // ------------------------------------------------------------------ quadro
        /// <summary>Hora do jogo (ClientSetTime) recebida antes de a cena existir.</summary>
        float gameMinutes = -1;
        int gameRatio = 6;
        /// <summary>SSQInfo recebido antes de a cena existir (ambiente 0..3 e modo).</summary>
        int ssqEnv = -1, ssqMode = 1;
        /// <summary>Timer do PlayerController (0xa00): ValidatePosition a cada VALIDATE_INTERVAL enquanto o pawn anda.</summary>
        float validateTimer;
        float worldTimer;
        float infoTimer;

        /// <summary>
        /// Grava o WindowsInfo.ini como o original na saida: a janela aberta da a posicao (ScreenRect) e o tamanho; as outras
        /// ficam com o que o arquivo ja tinha ou com o padrao do xdat.
        /// </summary>
        void SaveWindowsInfo()
        {
            if (!L2WndUtil.L2UiReady()) return;
            try
            {
                var byXdat = new Dictionary<string, L2Wnd>();
                if (ui != null)
                    foreach (var w in ui.Layer.Windows.Values)
                        if (w.El && w.El.gameObject.activeSelf)
                        {
                            var xn = L2WindowsInfo.XdatName(w.Name);
                            byXdat[xn] = w;
                            // o tamanho do chat vai para a secao [6]
                            if (L2WindowsInfo.SizeSection(xn) != xn) byXdat[L2WindowsInfo.SizeSection(xn)] = w;
                        }
                L2WindowsInfo.Save(n =>
                {
                    if (!byXdat.TryGetValue(n, out var w)) return null;
                    var r = w.ScreenRect();
                    return (new Vector2(r.X, r.Y), new Vector2(r.W, r.H));
                }, n => L2WindowsInfo.Default(n, UiRoot.Size));
            }
            catch (Exception e)
            {
                Debug.LogWarning("WindowsInfo.ini: " + e.Message);
            }
        }

        void OnApplicationQuit()
        {
            SaveWindowsInfo();
            L2Options.Save();
        }

        void Update()
        {
            if (!ready) return;
            var dt = Time.deltaTime;
            if (lobby != null && lobby.Running) lobby.Tick(dt);
            // PrintScrn=OnRelease shot (UViewport::Exec): vale em qualquer tela, menos digitando
            if (Keyboard.current != null && Keyboard.current[UserIniKeys.Shot].wasReleasedThisFrame && !UiRoot.TypingInField()) Shot();
            if (scene != null && inWorld)
            {
                chatFloodTimer += dt;
                for (; chatFloodTimer >= L2Chat.AntiFlood.TickMs / 1000f; chatFloodTimer -= L2Chat.AntiFlood.TickMs / 1000f) chatFlood.Tick();
                ReadInput();
                scene.Tick(dt);
                // o radar acompanha a camera a cada quadro (no OnFrame, a 4 Hz, a rotacao do disco saia aos trancos)
                ui?.DrawRadar(scene.Cam.Yaw, scene.Cam.Pitch);
                VideoOptions.Tick(dt);
                UpdateCursor();
            }
            else if (current != "scrGame") LobbyKeys();
        }

        void OnFrame(float dt)
        {
            var self = world.Self;
            if (self == null || gc == null || !inWorld) return;
            ContinuousInput(dt);
            sfx.SetListener(scene.Camera);
            // FUN_105d5420: zona atual a cada 2 s pela Location do pawn (centro do cilindro) e o pedido do ZoneTitleWnd
            var zone = L2Zone.Instance;
            if (zone != null)
            {
                zone.ShowTitle = ZoneTitleView.Request;
                zone.Tick(dt, (int)self.X, (int)self.Y, (int)(self.Z + self.CollisionHeight));
            }
            // ValidatePosition como o tick do PlayerController: so com velocidade, timer += 1,2 s ao disparar
            if (self.Motion.Moving)
            {
                validateTimer -= dt;
                if (validateTimer <= 0)
                {
                    validateTimer += Movement.ValidateInterval;
                    gc.Send(GamePackets.ValidatePosition(Mathf.RoundToInt(self.X), Mathf.RoundToInt(self.Y), Mathf.RoundToInt(self.Z), self.Heading));
                }
            }
            infoTimer += dt;
            if (infoTimer < 0.25f) return;
            infoTimer = 0;
            GeoTerrain.FollowTerrain(scene, self.X, self.Y);
            worldTimer += 0.25f;
            if (worldTimer >= 3)
            {
                worldTimer = 0;
                music.Lists = GameData.MusicLists();
                music.Update(self.X, self.Y).Forget();
                Statics.LoadStaticsFor(scene, self.X, self.Y).ContinueWith(t =>
                {
                    if (t.IsFaulted) Debug.LogException(t.Exception);
                    else if (!string.IsNullOrEmpty(t.Result)) Chat("dbg", t.Result);
                }, TaskScheduler.FromCurrentSynchronizationContext());
                UeTerrain.LoadUeTerrainFor(scene, self.X, self.Y).ContinueWith(t =>
                {
                    GeoTerrain.SetGeodataVisible(!UeTerrain.HasUeTerrain());
                    if (t.IsFaulted) Debug.LogException(t.Exception);
                    else if (!string.IsNullOrEmpty(t.Result)) Chat("dbg", t.Result);
                }, TaskScheduler.FromCurrentSynchronizationContext());
            }
            if (Mathf.Abs(worldTimer % 1) < 0.01f) sfx.UpdateAmbient(self.X, self.Y, self.Z, scene.Env.Env.IsSoundNight).Forget();
            ui.Tick();
            int players = 0, npcs = 0;
            foreach (var e in world.Entities.Values)
                if (e.Kind == "npc") npcs++;
                else if (e.Kind == "player") players++;
            ui.SetInfo(
                $"{Mathf.RoundToInt(self.X)}, {Mathf.RoundToInt(self.Y)}, {Mathf.RoundToInt(self.Z)}\n" +
                $"{Mathf.RoundToInt(scene.Fps)} fps · {players} jogadores · {npcs} NPCs · {world.Animated} animados\n" +
                $"{(self.Running ? "correndo" : "andando")} · {Mathf.RoundToInt(self.Speed)} u/s · {scene.Env.Label}" +
                (string.IsNullOrEmpty(music.Label) ? "" : $"\n♪ {music.Label}{(music.Muted ? " (mudo)" : "")}") +
                (world.LoadErrors.Count > 0 ? $"\n{world.LoadErrors.Count} modelos indisponíveis" : ""));
        }

        // ------------------------------------------------------------------ entrada
        bool rotating;
        bool holdMouse;
        double holdSince, holdSent;

        /// <summary>Left/RightTurningStart (A/D, setas laterais): gira o personagem, e a camera junto.</summary>
        static readonly Dictionary<Key, int> TurnKeys = new() { [Key.A] = -1, [Key.LeftArrow] = -1, [Key.D] = 1, [Key.RightArrow] = 1 };
        /// <summary>KeyboardMoveStart (W/S, setas, Espaco/Ctrl) seguradas: Dir em UserIniKeys.MoveDirs.</summary>
        readonly HashSet<Key> moveKeys = new();
        readonly HashSet<Key> turnKeys = new();
        /// <summary>Movimento pelo teclado do user.ini (World/KeyboardMove.cs): W/S, Espaco/Ctrl e NumLock.</summary>
        readonly KeyboardMove keyMove = new();
        /// <summary>Zoom e altura da camera pelo teclado numerico (World/CameraKeys.cs).</summary>
        readonly CameraKeys camKeys = new();
        int turnSent;

        /// <summary>Teclas nas telas do lobby: Enter entra com o personagem escolhido.</summary>
        void LobbyKeys()
        {
            var kb = Keyboard.current;
            if (kb == null || UiRoot.TypingInField()) return;
            if (current == "scrChars" && (kb.enterKey.wasPressedThisFrame || kb.numpadEnterKey.wasPressedThisFrame)) Enter().Forget();
            if (current == "scrServers" && (kb.enterKey.wasPressedThisFrame || kb.numpadEnterKey.wasPressedThisFrame)) TestChooseServer();
        }

        bool typingLastFrame;

        void ReadInput()
        {
            var mouse = Mouse.current;
            var kb = Keyboard.current;
            if (mouse != null)
            {
                var overUi = UiRoot.PointerOverUi();
                var pos = mouse.position.ReadValue();
                // botao direito gira a camera (CameraRotationModeOn: desliga o auto-tracking); meio = TurnBack; roda = zoom
                if (mouse.rightButton.wasPressedThisFrame && !overUi)
                {
                    rotating = true;
                    scene.Cam.Tracking = false;
                }
                if (mouse.rightButton.wasReleasedThisFrame && rotating)
                {
                    rotating = false;
                    scene.Cam.Tracking = true;
                }
                if (rotating)
                {
                    var d = mouse.delta.ReadValue();
                    // movementY do DOM cresce para baixo; o delta do Input System, para cima
                    if (d != Vector2.zero) scene.Cam.Rotate(d.x, -d.y);
                }
                if (mouse.middleButton.wasPressedThisFrame && !overUi && world.Self != null) scene.Cam.TurnBack(world.Self.Heading);
                // como no cliente original, o clique age ao PRESSIONAR; segurado, o personagem segue o cursor (ContinuousInput)
                if (mouse.leftButton.wasPressedThisFrame && !overUi)
                {
                    holdMouse = true;
                    holdSince = holdSent = LoadTrack.Now();
                    ClickAt(pos, L2Input.IsPKMode(), kb != null && kb.shiftKey.isPressed);
                }
                if (!mouse.leftButton.isPressed) holdMouse = false;
                var scroll = mouse.scroll.ReadValue().y;
                if (scroll != 0 && !overUi)
                {
                    // roda para tras (deltaY > 0 no navegador, scroll < 0 aqui) = MouseWheelDown no UE2 = ZoomInPress
                    var clicks = Mathf.Abs(scroll) >= 10 ? -scroll / 120f : -scroll;
                    scene.Cam.Wheel(clicks);
                }
            }
            if (kb == null) return;
            if (!Application.isFocused)
            {
                moveKeys.Clear();
                turnKeys.Clear();
            }
            foreach (var k in UserIniKeys.MoveDirs.Keys)
                if (!kb[k].isPressed)
                    moveKeys.Remove(k);
            foreach (var k in TurnKeys.Keys)
                if (!kb[k].isPressed)
                    turnKeys.Remove(k);
            // o Enter que envia o chat tira o foco do campo no mesmo quadro: sem olhar o quadro anterior, o jogo via esse
            // Enter como tecla dele e focava o chat de novo (no navegador o evento ia para o <input>)
            var typing = UiRoot.TypingInField();
            var wasTyping = typingLastFrame;
            typingLastFrame = typing;
            if (typing || wasTyping)
            {
                // Enter/Esc no chat sao do InputField; as teclas de movimento param
                moveKeys.Clear();
                turnKeys.Clear();
                return;
            }
            // NumPad8/2 = CameraViewHeightAdjust Speed=+20/-20: vale enquanto segura (DeltaTime * Speed)
            if (world.Self != null)
                foreach (var (k, rate) in UserIniKeys.ViewHeightKeys)
                    if (kb[k].isPressed)
                        scene.Cam.ViewHeight = CameraKeys.ViewHeightHold(scene.Cam.ViewHeight, rate, Time.deltaTime);
            var alt = kb.altKey.isPressed;
            var ctrl = kb.ctrlKey.isPressed;
            var shift = kb.shiftKey.isPressed;
            foreach (var key in kb.allKeys)
            {
                if (key == null || !key.wasPressedThisFrame) continue;
                OnKey(key.keyCode, alt, ctrl, shift);
            }
        }

        /// <summary>Comandos da tabela de teclas que o Unity ainda nao tem (janela ou recurso ausente): avisados uma vez.</summary>
        readonly HashSet<string> missingCommands = new();

        /// <summary>
        /// Tecla no mundo: primeiro a tabela GamingStateShortcut do xdat (05 §5.1, prevalece), depois as ligacoes do
        /// user.ini [Engine.Input] (05 §5.6: W/S e setas andam, A/D e setas giram).
        /// </summary>
        void OnKey(Key key, bool alt, bool ctrl, bool shift)
        {
            if (gc == null) return;
            // NConsoleWnd::HandleKeyboardInput (03 §1 da #0024): EnterChatting, prioridade dos modificadores, tabela do estado
            var (kind, action) = L2Shortcuts.Handle("GamingState", L2Shortcuts.Vk(key), alt, shift, ctrl,
                L2Options.GetBool("Game", "EnterChatting", true), UiRoot.TypingInField());
            if (kind == L2Shortcuts.KeyResult.ChatFocus)
            {
                ui.Command("ChatWndSetFocus", new Dictionary<string, string>(), ctrl, shift);
                return;
            }
            if (kind == L2Shortcuts.KeyResult.Command)
            {
                RunCommand(action, ctrl, shift);
                return;
            }
            if (UserIniKeys.MoveDirs.ContainsKey(key))
            {
                moveKeys.Add(key);
                return;
            }
            if (key == UserIniKeys.PermanentMove)
            {
                if (world.Self != null) keyMove.TogglePermanent(world.Self.Heading);
                return;
            }
            // NumPad7/9, 4/6, 1/3 = ZoomOutPress/ZoomInPress Speed=2.0, 0.1, 0.01 (so no aperto)
            if (UserIniKeys.ZoomKeys.TryGetValue(key, out var zoomSpeed))
            {
                var c = scene.Cam;
                if (world.Self != null)
                    camKeys.ZoomPress(zoomSpeed, ref c.Zoom, ref c.ViewHeight, CamUtil.Cfg.ZoomMin, CamUtil.Cfg.ZoomMax,
                        world.Self.CollisionRadius, CamUtil.Presets[c.Preset].DisableZoom);
                return;
            }
            if (TurnKeys.ContainsKey(key))
            {
                turnKeys.Add(key);
                return;
            }
            // user.ini oficial (pasta _back): Home = FixedDefaultCamera, PageUp/PageDown = FixedDefaultCamera Down/Up,
            // End (e o botao do meio) = TurnBack. O user.ini do cliente instalado troca essas teclas por comandos de
            // depuracao (stat fps, show fog...), que nao sao do Interlude.
            if (world.Self != null && (key == Key.Home || key == Key.PageUp || key == Key.PageDown || key == Key.End))
            {
                var c = scene.Cam;
                if (key == Key.End) c.TurnBack(world.Self.Heading);
                else c.ApplyPreset(c.Preset + (key == Key.PageUp ? -1 : key == Key.PageDown ? 1 : 0), world.Self.Heading);
                return;
            }
            // H = ajuda do porte (nao existe no original)
            if (key == Key.H && !alt && !ctrl) ui.ToggleHelp();
        }

        void RunCommand(string action, bool ctrl, bool shift)
        {
            var (cmd, args) = L2Shortcuts.Parse(action);
            if (ui.Command(cmd, args, ctrl, shift)) return;
            switch (cmd)
            {
                case "TargetCancel":
                    gc.Send(GamePackets.CancelTarget());
                    return;
                case "ShowBoardWindow":
                    gc.Send(UiPackets.RequestShowBoard());
                    return;
                case "RequestOpenMinimap":
                    gc.Send(UiPackets.RequestShowMiniMap());
                    return;
                case "ShowMessengerWindow":
                    ui.Messenger.Toggle();
                    return;
                default:
                    if (missingCommands.Add(cmd)) Debug.Log("[teclas] comando do xdat sem implementacao no Unity: " + action);
                    return;
            }
        }

        /// <summary>Resultado do ultimo clique no mundo (diagnostico do modo -l2hold).</summary>
        string lastClick = "";

        void ClickAt(Vector2 screen, bool ctrl, bool shift)
        {
            if (gc == null || !inWorld) return;
            var self = world.Self;
            if (self == null) return;
            if (!world.Request.CanClick) return;   // PLAYERPAWNMOVETO 0x105af027: trava ligada = clique ignorado
            var hit = scene.Pick(screen.x, screen.y);
            lastClick = hit == null ? $"nada em {screen:0}" : $"{hit.Kind} {hit.ObjectId} {Mathf.RoundToInt(hit.X)},{Mathf.RoundToInt(hit.Y)},{Mathf.RoundToInt(hit.Z)}";
            if (hit == null) return;
            var ox = Mathf.RoundToInt(self.X);
            var oy = Mathf.RoundToInt(self.Y);
            var oz = Mathf.RoundToInt(self.Z);
            if (hit.Kind == "entity" && hit.ObjectId.HasValue && hit.ObjectId.Value != 0)
            {
                if (ctrl) gc.Send(GamePackets.AttackRequest(hit.ObjectId.Value, ox, oy, oz, shift));
                else gc.Send(GamePackets.Action(hit.ObjectId.Value, ox, oy, oz, shift));
                world.Request.Lock();
                keyMove.Cancel();
            }
            else
            {
                gc.Send(GamePackets.MoveTo(Mathf.RoundToInt(hit.X), Mathf.RoundToInt(hit.Y), Mathf.RoundToInt(hit.Z), ox, oy, oz));
                world.Request.Lock();
                scene.ShowMarker(hit.X, hit.Y, hit.Vz ?? hit.Z);
                keyMove.Cancel();
            }
        }

        // ------------------------------------------------------------------ entrada continua (Fase 12)
        void ContinuousInput(float dt)
        {
            var self = world.Self;
            if (self == null || gc == null || scene == null) return;
            var ox = Mathf.RoundToInt(self.X);
            var oy = Mathf.RoundToInt(self.Y);
            var oz = Mathf.RoundToInt(self.Z);
            // mouse segurado no chao: o cliente reenvia o destino sob o cursor a cada ~0,35 s (depois de 300 ms)
            var now = LoadTrack.Now();
            if (holdMouse && Mouse.current != null && now - holdSince > 300 && now - holdSent > 350 && world.Request.CanClick)
            {
                var p = Mouse.current.position.ReadValue();
                var hit = scene.Pick(p.x, p.y);
                if (hit != null && hit.Kind == "ground")
                {
                    gc.Send(GamePackets.MoveTo(Mathf.RoundToInt(hit.X), Mathf.RoundToInt(hit.Y), Mathf.RoundToInt(hit.Z), ox, oy, oz));
                    world.Request.Lock();   // mesmo comando PlayerPawnMoveTo do clique
                    holdSent = now;
                }
            }
            // giro pelo teclado: StartRotating/FinishRotating ao mudar; personagem e camera giram a KeyboardRotationRate
            var side = 0;
            foreach (var k in turnKeys) side += TurnKeys[k];
            side = Math.Sign(side);
            if (side != turnSent)
            {
                gc.Send(side != 0 ? GamePackets.StartRotating(self.Heading, side) : GamePackets.FinishRotating(self.Heading));
                turnSent = side;
            }
            self.Turning = side;
            self.TurnSpeed = CamUtil.Cfg.KeyTurnRate;
            if (side != 0) scene.Cam.Turn(side * CamUtil.Cfg.KeyTurnRate * dt);
            // teclado (ResetKeyboardMoving): destino = posicao + direcao(yaw da camera + 0/180 graus) * velocidade * 5;
            // NumLock corre no rumo do pawn; Espaco/Ctrl so sobem e descem no modo camera (World/KeyboardMove.cs).
            // Reenvia quando o rumo gira o suficiente (ou a cada 1 s); ao soltar, para 0,2 s a frente
            var bits = 0;
            foreach (var k in moveKeys) bits |= UserIniKeys.MoveDirs[k];
            keyMove.Hold(bits);
            if (keyMove.Tick(dt, side, scene.Cam.Yaw, scene.Cam.Pitch, self.X, self.Y, self.Z, self.Heading, self.Speed) is { } o)
                gc.Send(GamePackets.MoveTo(Mathf.RoundToInt(o.X), Mathf.RoundToInt(o.Y), Mathf.RoundToInt(o.Z), ox, oy, oz, false));
        }

        /// <summary>PrintScrn = OnRelease shot: Shot%05i.bmp/.jpg pelo Game.ScreenShotQuality e a mensagem 1204 no mundo.</summary>
        void Shot()
        {
            var q = Mathf.Clamp(L2Options.GetInt("Game", "ScreenShotQuality", 1), 0, 3);
            StartCoroutine(ScreenShot.Capture(Application.persistentDataPath, q, (name, w, h) =>
            {
                Debug.Log($"[teclas] captura {name} ({w}x{h})");
                if (!inWorld) return;
                var t = GameData.SystemMessage(ScreenShot.SavedMessage, new List<string> { name, w.ToString(), h.ToString() });
                L2Events.Dispatch(PacketEvents.SystemMessage(ScreenShot.SavedMessage, t.Text, t.Record?.Argb ?? 0xffdcdcdc, t.Record?.Group ?? 0));
            }));
        }
    }
}
