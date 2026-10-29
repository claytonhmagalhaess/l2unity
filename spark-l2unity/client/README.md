# Cliente `L2.exe` (Project SPARK — Infinity) — arquitetura

| Item | Valor |
|---|---|
| Engine | Unity **6000.3.21f1** (c02631ffc030), URP, IL2CPP x86-64, Windows, build GUID `ec07d47596784128bfd1fa510011543a` |
| Produto | `app.info`: "Project SPARK" / "Infinity"; `globalgamemanagers`: versão do bundle `0.0.7` |
| Executável | `L2.exe` (stub Unity, importa só `UnityPlayer.dll`) |
| Código | `GameAssembly.dll` 58,4 MB (SHA-256 `afa466fd…`) + `global-metadata.dat` 11,9 MB (v39, não cifrado) |
| Assemblies de usuário | `Assembly-CSharp.dll` (1.657 typedefs, 778 classes de topo, 11.469 métodos), `Assembly-CSharp-firstpass.dll` (12 tipos), Animancer, FMODUnity (+Resonance), Boxophobic AtmosphericHeightFog, JBooth MicroSplat, SkyrimWaterfalls, ProBuilder, UnityMeshSimplifier, Newtonsoft.Json, InputSystem, Burst, TextMeshPro, Timeline, UnifiedRayTracing, URP |
| Plugins nativos | `fmodstudio.dll`, `resonanceaudio.dll`, `lib_burst_generated.dll`, `libonigwrap.dll` (Oniguruma — motor regex, exportações `onigwrap_*`) |
| Gráficos | DX11/DX12 (`D3D12/D3D12Core.dll` agent) /Vulkan selecionáveis; `grafico.txt` |
| Rede | WS2_32 via IL2CPP Socket; login server `192.99.42.182:2108` |

## Origem do código (inferência)
A base é o projeto open-source **L2-Unity** (cliente Unity + servidor em C#/Java "L2J-like" de *shnok*): classes idênticas — `DefaultClient`, `AsynchronousClient`, `GameClientPacketHandler`, `ServerPacketHandler`, `NetworkTransformShare/Receive`, `NetworkCharacterControllerShare`, `EntitySpawnStrategy`, `L2GameUI`, `L2LoginUI`, `*Table` (Armorgrp, Weapongrp, Npcgrp, Skillgrp, SysString, SystemMessage…), `Geodata`, `PathFinder`, `CameraController`, `L2_login.BlowfishEngine/RSACrypt/NewCrypt/GameCrypt`. Sobre essa base o Project SPARK acrescentou **187 classes `Spark*`** (nomes em português) e adaptou o protocolo para um servidor Interlude próprio (L2J, "Helena", VPS em `/opt/infinity`).

## Camadas

1. **Boot** — `RuntimeInitializeOnLoads.json` registra 60 inicializadores; os do SPARK: `SparkRelease.DesligaLog` (desliga log em release), `SparkApiGrafica.AoAbrir` (lê/grava `grafico.txt`, confirma API após N segundos), `SparkArte.AoIniciar` (abre `arte/indice.spi` e pacotes iniciais), `SparkFontesFallback.Configura`, `SparkMusica/Clima/Caverna/Nado/Pesca/Montaria/Territorio/GeoView/LuzesDoMapa/EmissoresDoMapa/MoveisDoMapa/… .Liga`, `SparkSaida.Liga` (saída limpa), `SparkTextoDano.LigaPedidor`, `SparkMedidorRede.Liga`, `DefaultClient.LeDebugBuild/PreparaSaida`.
2. **Cenas** — `Menu.unity` (login: `LoginWindow`, `ServerListWindow`, `CharSelectWindow`, `CharCreationWindow`, `LicenseWindow`, `SparkEasyLogin`/`SparkContasSalvas` com logins salvos) e `Game.unity` (mundo). Mundo carregado por região (`SparkArte.GaranteCena/SoltaCena` + `cena_X_Y.spa` e `data_maps_X_Y.spa`), 151 tiles segundo o dev log.
3. **Assets** — `SparkArte` substitui `Resources.Load` por AssetBundles cifrados (`SparkCifraStream`) indexados por `SparkArteIndice`; `SparkDados`/`SparkCripto` decifram os `.spk`; `SparkDds` lê/escreve DDS DXT1 (brasões de clã/aliança 16×12 / 8×12); `SparkArquivo` abre diálogo nativo (`GetOpenFileName`) para imagens.
4. **Dados** — tabelas `Data/Meta` carregadas em `*Table` (Armorgrp, Weapongrp, EtcItemgrp, Npcgrp, Skillgrp, SkillName, SystemMessage, SysString, ActionName, Logongrp, Chargrp, ItemStatData, SkillSoundgrp), efeitos de skill `LineageEffects/<id>.json` (4.572), geodata L2J (`Geodata`, `GeodataImporter`, `PathFinder`).
5. **Rede** — ver `network.md`.
6. **Gameplay/UI** — estados (`LoginState`, `CharSelectionState`, `InGameState`…), entidades (`PlayerEntity`, `NetworkHumanoidEntity`, `NetworkMonsterEntity`, `Nameplate`), janelas (Inventory, Skill, Status, Target, Party, Clan, Trade, Shop, PrivateShop, Multisell, Warehouse, Mail, Manor, Olympiad, SevenSigns, Siege, Board, Macro, Friend, Vip, NpcHtml via `SparkHtml` — parser HTML próprio para diálogos de NPC); janelas SPARK: Craft, Find, Gm, Henna, Mapa, Quest, Refino, EnchantSkill, LojaCristal, DropWindow, PescaJanela, Opcoes (vídeo/áudio/jogo/interface com presets, FSR, resolução dinâmica, clima, céu, cores de party, texto de dano), Macros, ChatFiltro (abas/canais), Comandos (/nick, duelo…), Tutorial, Radar.
7. **Mundo/visual** — `SparkClima` (chuva/neve/tempestade, pegadas), `SparkCachoeira*` (Skyrim waterfalls), `SparkAguaInterativa`, `SparkLuzesDoMapa/EmissoresDoMapa/MoveisDoMapa/Cercas/Fogo*/Neblina*/Caverna`, `SparkMultidao` (crowd rendering por GPU, "malha única"), `SparkEnchant*` (brilho de enchant/augment retail), `SparkAuraHeroi`, `SparkMontaria` (Strider/Wyvern/dragões), `SparkPesca`, `SparkNado`, `SparkDesintegra`, `SparkAnimacaoLOD`, `SparkEsqueletoAssado`, `SparkCosturaRosto`, `SparkEscalaNpc`.
8. **Diagnóstico** — `SparkFps`, `SparkMedidorRede` (OnGUI: ping, fila de pacotes, CPU/render/GPU), `SparkDesempenho`, `SparkEstresse`, `SparkDiagVariantes/DiagEfeitos/DiagMovimento`, `SparkGmWindow` (painel GM com busca de itens/NPCs/skills/quests, anúncio, fakes, clima/céu, hora).

## Arquivos desta pasta
- `assemblies.md` — 90 imagens do metadata.
- `assembly_csharp_api.md` — API completa (tipos, campos, propriedades, métodos com parâmetros, token e endereço no GameAssembly).
- `class_index.md` — índice condensado (1.019 tipos) / `spark_classes.md` — as 366 classes/aninhadas `Spark*`.
- `enums.md` — 94 enums com valores (opcodes, tipos de item/skill, estados).
- `method_rvas.tsv` — RVA/VA por método (11.498 linhas).
- `formats.md` — formatos SPK1/SPA1/geodata/manifest/cache.
- `network.md` — protocolo, cripto, opcodes.
- `il2cpp_metadata_v39_layout.md` — layout do metadata v39 (novo).
- `il2cpp_string_literals_interessantes.txt` — 716 literais relevantes (caminhos, mensagens, nomes).
- `native_analysis.md` — decompilação Ghidra (via REA) das rotinas de cifra.
