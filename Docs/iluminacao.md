# Iluminação e animação de cenário — paridade com a spec 08

Fonte: `C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim\docs\client_spec\08_ambiente_iluminacao.md`, `out\re\env\env_config.json` (dados),
`out\re\env\env_golden.json` (esperado a cada 15 min, 4 ambientes), `out\re\maps\<mapa>.json` (atores). Marcadores:
[O] binário, [Obs] dados do cliente, [I] inferência. Uma linha por item: regra, arquivo:linha, estado, evidência.

Estados: **pendente** · **implementado** (sem teste) · **aprovado** (teste EditMode passando) · **divergente** (teste
passa, captura não bate) · **fora** (não existe no Interlude; só anotado).

| # | Regra (08) | Arquivo:linha | Estado | Evidência |
|---|---|---|---|---|
| 1.1 | `Env.int`/`TimeEnvN.INT` (Ver111 XOR 0xAC, cp949) lidos de `Resources/env_config.json` (gerado por `env_parse.py`); `T` ausente = índice, cor ausente = 255; só as chaves 1..NUM | `Render/Env/L2EnvData.cs:60-120` | aprovado | `EnvParityTests.Config_EnvSetup_FOG_WaterVolume` |
| 1.1b | Padrões SKYBOX/HAZERING/CLOUD1..3, ShadowTick, SlopeSunAngle, TimeEnvFileNum, FOG Start/EndRange, WaterVolume | `Render/Env/L2EnvData.cs:30-50` | aprovado | idem |
| 2 | Relógio: `ClientSetTime` (min, razão) → `SetNTime`, base QPC; `UpdateNTime` recompõe t = base + decorrido×razão (horas → resto → minutos → resto → segundos, `s = 60` ao passar de 60 [O desmontagem 0x1051b330]); fases 0=[6,8) 1=[8,22) 2=[22,24) 3=[0,6); `IsDay`, `IsSoundDay/Night`; construtor 06:00 razão 1, `Load` StartTime/TimeRatio | `Render/Env/L2Env.cs:44-110` | aprovado | `EnvParityTests.Relogio_ClientSetTime_EAvancoPorRazao`, `Fase_EDirecao_96h` |
| 3.1 | Curvas: `T[i] ≤ t < T[i+1]`; cor `round` para o par; escala linear; HSV plano×brilho/255; fora do intervalo não escreve (contas em double como o `env_golden.py`; nos meio-pontos exatos o x87 pode diferir [I]) | `Render/Env/L2Env.cs:200-260` | aprovado | `EnvParityTests.Curvas_96h_4ambientes_IguaisAoGolden` (4×96×17 valores, cor exata, float 1e-4), `RoundEven_ComoOFistp` |
| 3.1b | `FGetHSV(H,S,V)` | `Render/UeLight.cs:15-26` | aprovado | `EnvParityTests.FGetHSV_ValoresDaSpec`, `LobbyEnvTests.Hsv_*` |
| 3.2 | SSQInfo 256..259 (bytes env, modo) → `ChangeEnv(env, 1, 0,02, 0,02, 1, 0, 1)` imediato; `GetEnvColor/Plane/Scale` com base (0), anterior e atual, peso do anterior e delta; `CalcEnvDelta` gradual; volta agendada | `Render/Env/L2Env.cs:112-200`, `App.cs` (`On(0xf8)`) | aprovado | `EnvParityTests.Ambientes_SSQInfo_TrocaImediata_EMisturaComABase` |
| 4 | Sol/lua: θ sol 10°/h (t≥5), lua 30°/h, φ 180°, SlopeSunAngle truncado para 5461 UU em X; direção = −v na luz; `NSun.Radius` 350 / `NMoon.Radius`; sprite GetScale×8×USize, cor SunColor/MoonColor; escondidos com θ = −180 | `Render/Env/L2Env.cs:262-310`, `L2EnvScene.cs` (luz), `L2Sky.cs` (`SetSunMoon`) | aprovado (direção) / implementado (sprites) | `EnvParityTests.Fase_EDirecao_96h` (96 direções, 1e-4) |
| 5 | Ambiente por superfície [O `hourly_relight_re.md`]: Actor (`USkeletalMeshInstance::Render` 0x106dcfd0 [O]) = zona com sol e gerenciador: `GetActorAmbientColor(t)>>1` (0x106ddb0b); senão `FDynamicActor.AmbientColor` inteiro (0x106ddb76; = `floor(255·AmbientVector)`, salão 70 → 140/255 em unidades de luz) — `_L2ActorAmbient` no `L2Web/Actor`; StaticMesh = `GetStaticMeshAmbientColor(t)>>1` por quadro nas zonas com sol (`RenderStaticMesh`), senão AmbientVector/2 da zona; Terreno = `GetTerrainAmbientColor(t)>>1` na releitura; BSP = atlas assado + `ColorModifier` com `GetBSPAmbientColor(t)` por quadro (composição não rastreada) | `L2EnvScene.cs` (`SetSunAmbient`), `BakedLight.cs`, `UeTerrain.cs`, `BspLightmap.cs` | implementado | capturas pendentes |
| 5.1 | Luzes dos mapas: cor HSV×Bri/255, fator por LightType (Pulse 0,6+0,39·sen, SubtlePulse 0,9+0,09·sen, Blink bit da fase, Flicker <0,5→0, Strobe, FadeOut, Fade); None/Backdrop = 0; termo de tempo 35·65536/período [I]; luz de hardware (`SetLight`, D3DDrv ignora índice ≥ 3): num ator **com** `StaticMeshInstance` só as `bDynamicLight`/Changed (as Steady estão embutidas); num ator **sem** instância (pawns, malhas esqueléticas) todas as luzes da lista, ponto com Range = Radius, queda f(r)=1−3r²+2r³ e cor×0,5 sob MODULATE2X [O `baked_light_re.md` §3.5]. Porte: `Light` pontual (color = cor×fator, intensity 1) para toda luz que ilumina; só o shader dos atores `L2Web/Actor` as lê (por vértice: `L = min(2, A + Σ Lc·N·L·f(r) + 1,75·S·N·Lsol)`, `pixel = saturate(tex·L)` em gama, f(r)=1−3r²+2r³ com Range = range, 3 luzes, sem especular/reflexo; `EnableLighting(1,0,Modulate2X=1,0,…)` e `SetLight` até `MaxLights` no `USkeletalMeshInstance::Render` [O 0x106dda1a/0x106dda40]; a ordem das 3 é a do URP e o filtro `FDynamicLight+0x34∈{0,2}` não foi decodificado [I]); desligadas além de raio+100 m da câmera [I] | `Render/UeLight.cs:36-70`, `Render/MapEnv.cs` | aprovado (fator) / implementado (cena) | `LightTypeTests.Fator_PorTipo` |
| 5.2 | `bTimeLight`: nenhum mapa liga | — | fora | `maps_resumo.json` |
| 6 | Terreno: 8 `TIntMap` 17×17 por setor (QuadsX/Y, OffsetX/Y) → 257×257; horas 1,5+3i; `GetShadowMapIndex` + mistura `round(a(1−f)+bf)`; `Color = Static + floor(255·Int/255·0,5·S) + Amb>>1` com `S` = plano HSVTerrainLight (já × Bri/255) [O] a cada `ShadowTick` 0,1 h e no `ClientSetTime`. Malhas estáticas: `RenderStaticMesh` refaz `CalculateStaticMeshLighting` + `InterpolateSunLight(t)` a cada `ShadowTick` (`ULevel::ResetActorStaticLight`) → `export_smlight.py hours` (estático + I_k do sol) e `BakedLight.SetHour`. BSP: `k = trunc(8t/24) mod 8` por quadro, sem mistura, só em zonas com sol (`FBspDrawList::Render` 0x1066a11f) → `BspLightmap.SetHour` | `export_terrainlight.py`, `export_smlight.py`, `UeTerrain.cs`, `BakedLight.cs`, `BspLightmap.cs` | aprovado (índice/mistura) / implementado (cena) | `LightTypeTests.Terreno_IndiceEMisturaDosMapas` |
| 7 | Neblina: nível pelo alcance de terreno (combo 0..4 → CR 8..4 [O `execSetTerrainClippingRange`]; <5→1 … ≥8→5) → Start/EndRange×2048; **zona de terreno: cor = `GetHazeColor(t)`**, zona fechada com `bDistanceFog`: `DistanceFogColor/Start/End` da zona (`FLevelSceneNode::Render`, bits 2/3 de +0x3D8 [O]); `L2FogInfo`: peso 3D por `AffectRange`, `FogRangeN` pelo alcance efetivo, chaves por hora truncadas, dobra sobre a base cinza 127 e transição `FogSpeed` [O `l2foginfo_re.md`]; WaterVolume do Env.int | `Render/Env/L2Env.cs`, `Render/Env/L2Fog.cs`, `L2EnvScene.cs` (`ApplyFog`) | aprovado (nível/faixas) / implementado | `EnvParityTests.Neblina_*`, `L2FogTests` |
| 8a | Céu: sala/skybox, haze ring, nuvens (geometria da SkyZone do Lobby; [I] modelo para os outros mapas), cores SkyBoxColor/HazeringColor/CloudColor1 por hora (`FUN_10657850`), rolagem pelo TexPanner 0,002 ([O] `TexUPanSpeed` não é lido), 9 lens flares, sol e lua | `Render/L2Sky.cs`, `L2EnvScene.cs` | implementado | `LobbySwayTests.Flares_*` |
| 8b | `MovableStaticMeshActor`: seno por eixo (Max, Rate, AccelRatio), random start; `L2MovementTag` pendente | `Render/Sway.cs`, `Render/LobbyMovers.cs` | aprovado | `LobbySwayTests.Vinha_SenoComPeriodo8MaxPorRate` |
| 8c | `Mover`: 0x4C/0x99 ligam id do servidor ↔ id de rede (`OnDoorInfo` 0x10311b80, `OnStaticObjectInfo` 0x1030f8f3); 0x4D campo 2 == 0 abre (`eventTrigger`), grau de dano < 7 troca a `MeshGrade` (`OnDoorStatusUpdate` 0x103125b7); malha entre KeyPos/KeyRot[0] e [1] em MoveTime [I] | `Docs/tools/export_map_emitters.py` (doors), `Render/MapEnv.cs`, `App.cs` (0x4c/0x4d/0x99) | implementado | — |
| 8d | Emissores: Sprite/Beam com as propriedades do mapa (Mesh/VertMesh pendentes) | `Render/UeParticles.cs`, `MapEnv.cs` | implementado | `LobbyEnvTests` |
| 9 | Itens não cobertos pela 08 (L2FogInfo por distância/hora, mapas de luz BSP/SM por hora, vento, Pulse exato, ângulo do MSMA): investigar no pseudocódigo e anexar à 08 | — | pendente | — |

## Removido (herança do three.js)

Feito: `Render/DayNight.cs` apagado (chaves próprias, `LightScale` 1/π, hemisfério, "noite 00–06"); `GameScene` sem o
céu/neblina fixos 0x9fb4c8 e o sol (30,60,20); `LobbyScene` sem `HemiSky/HemiGround/HemiIntensity` e `SetSky`. Um só sistema:
`Render/Env/L2Env*.cs`.

## Registro

- 2026-10-28: `L2EnvData`/`L2Env`/`L2EnvScene` criados; `EnvParityTests` (8 testes) e `LightTypeTests` (2) passando; suíte
  339/339. Exportadores por mapa: `export_map_env.py`, `export_map_emitters.py` (com portas), `export_terrainlight.py`
  (`intmaps.bin`), `export_smlight.py`, `export_bsplm.py`; rodados para Lobby e 22_22. Flags `-l2time HH:MM[:razão]`, `-l2ssq N`.
- 2026-10-28 (estudo `lobby_remaining_re.md`): [O] a cor de vértice do passe do projetor do terreno é a cor assada do terreno
  (`SetIntensityMap` → Diffuse do stream do setor; o passe liga o mesmo stream com a iluminação desligada) → `UeProjector`
  usa `UeTerrain.ColorAt` e segue o `SetHour`; [O] o céu é desenhado em escala real com a projeção da vista, só transladado
  (`L2Sky.Scale = 1`); [O] o traço de oclusão dos flares é 2048×GL2StaticMeshCR = 4096 UU; [O] o passo do vento é por quadro
  desenhado com FPS livre (fica [I] a taxa nominal de 60). Cor da neblina = HazeringColor(t) [O] (Apêndice A da 08).
- 2026-10-28: `BakedLight` passou a guardar um material por (fonte, ambiente, unlit): um molde usado em zonas com ambientes
  diferentes ficava com o ambiente da primeira (muros pretos no 22_22).
- 2026-10-28: no projeto Linear o `Material.SetColor` converte sRGB→linear (com ou sem `[Gamma]`); as cores de vértice chegam
  cruas. Os shaders `L2Web/Baked` e `L2Web/TerrainUE` usam a cor de vértice crua e o `_Ambient` como `Vector` via `SetVector`
  (experimento: pilar (9,7,5) → (24,20,15) = textura × 0,47, o esperado com ambiente 60). Estudo `hourly_relight_re.md`:
  releitura das malhas estáticas por `ShadowTick` (exportador `hours`), `k` do BSP por quadro, cadeia do terreno confirmada.
- 2026-10-28: capturas do porte no 22_22 (offline, ponto 83400,147950) às 03h, 07h, 12h, 20h e com SSQInfo 259
  (`Docs/evidencias/comparacoes/ilum_horas_porte_22_22.png`; `-l2time`, `-l2ssq 3`) e do lobby
  (`ilum_lobby_porte.png`): sem exceções; a hora muda sol, ambiente, terreno, lightmap e malhas. Falta a captura do
  original no mesmo ponto e horas (comando de GM do aCis) para fechar os itens como aprovados por captura.
- 2026-10-28: verificação numérica das 07h no 22_22 (`-l2partlog`): terreno t=7 k=1/2 f=0,833 S=(1,252;1,067;0,870)
  amb>>1=(41,44,54) média R 79,9 — igual ao esperado pelas curvas. O piso da praça é BSP e às 07h usa o atlas k=2 (cozedura
  das 7,5 h do editor), por isso fica escuro nessa hora: é o dado do mapa (`FBspDrawList::Render`), não a conta.
- 2026-10-28: `L2FogInfo` reconstruído e implementado (`Render/Env/L2Fog.cs`, `L2EnvScene.ApplyFog`, `MapEnv` registra os atores
  do tile; `export_map_env.py` exporta `fogs`): peso 3D por `AffectRange`, `FogRangeN` pelo nível, chaves por hora truncadas,
  dobra sobre a base cinza 127 + cores do céu da hora, transição `FogSpeed` ao entrar/sair; `L2FogTests` (4) com os dados do
  `L2FogInfo74` do 18_19. Correção: bit 2 de +0x3D8 é `bTerrainZone` (bit 3 = `bDistanceFog`): zona de terreno → haze + alcance
  global; zona fechada com `bDistanceFog` → `DistanceFogColor/Start/End` (o salão do lobby volta a ter a névoa (65,51,70) 0–4000).
  Suíte 343/343. Item 9 da 08: `L2FogInfo` fechado; restam Mesh/VertMesh emitters e `L2MovementTag`.
- 2026-10-28: `Docs/tools/compare_env.py <pasta_original> <x,y,z>` gera as capturas do porte no mesmo ponto e hora
  (03/07/12/20 h e SSQInfo 259) e monta `Docs/evidencias/comparacoes/ilum_cmp_<hora>.png` com as médias das regiões. Falta só
  a pasta com as capturas do original (h03/h07/h12/h20/red.png), feitas pelo usuário.
