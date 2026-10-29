# 08. Ambiente: ciclo dia/noite, iluminação e animação de cenário

Este documento cobre o que muda no cenário com o tempo:
- o relógio do jogo;
- as curvas de cor e de brilho por hora;
- a troca de céu dos Sete Selos;
- o sol, a lua e a luz do sol;
- a modulação das luzes dinâmicas;
- os mapas de sombra do terreno por hora;
- a neblina;
- os objetos animados dos mapas: portas, peças que giram ou balançam, partículas e cinemáticas.

Marcadores: **[O]** observado no binário (pseudocódigo/assembly), **[Obs]** observado nos arquivos de dados do cliente, **[I]** inferência.

| Fonte | Como gerar |
|---|---|
| `out/re/env/env_config.json`: `Env.int` e `TimeEnv0..3.INT` em JSON | `python -I scripts/env_parse.py "<cliente>/system" out/re/env/env_config.json` |
| `out/re/env/env_golden.json`: valores de referência a cada 15 min de jogo, nos 4 ambientes | `python -I scripts/env_golden.py out/re/env/env_config.json out/re/env/env_golden.json` |
| `out/re/maps/<XX_YY>.json` (158 mapas): classes de todos os exports e propriedades dos atores de ambiente | `python -I scripts/unr_inventory.py "<cliente>/Maps" out/re/maps` |
| `out/re/maps_resumo.json`: resumo por mapa e total por classe | mesmo comando |
| Pseudocódigo das funções citadas (`UL2NEnvManager`, `UL2NTimeLight`, `UL2NEnvLight`, `ANSun`, `ANMovableSunLight`, `FDynamicLight`, `ATerrainInfo`…) | `python -I scripts/decomp_get.py out/re engine '<regex do nome>'`, que lê `out/re/decomp_all/engine` |

## 1. Arquivos de configuração

`System/Env.int` e os `TimeEnv*.INT` estão no formato `Lineage2Ver111`:
- cabeçalho UTF-16 de 28 bytes;
- corpo com XOR `0xAC`;
- texto ANSI, com comentários em coreano (cp949) **[Obs]**.

Quem lê cada arquivo **[O]**:
- `Env.int`: `UL2NEnvManager::Load` (0x10310429);
- os `TimeEnvN`: `UL2NEnvLight::Load` (0x1030fb5f), que chama `UL2NTimeLight::Load` (0x10307365).

Os valores entre parênteses, como `(T=6,R=255,G=122,B=23)`, são lidos com `Parse(texto, "CHAVE=")` **[O]**. O `Parse` procura cada chave no texto inteiro, e não por posição. Por isso a linha com erro de digitação `(T=10  Hue=1,Sat=255,Bri=180)`, sem a vírgula, ainda dá `T=10` e `Hue=1`. Essa linha aparece em `HSVStaticMeshLight` e `HSVBSPLight` de vários `TimeEnv` **[Obs]**, e o `env_parse.py` reproduz esse comportamento.

### 1.1 `Env.int` [Obs]

| Seção | Chave | Valor | Uso [O] |
|---|---|---|---|
| EnvSetup | IsClock / StartTime / TimeRatio | true / 12 / 6 | relógio local, antes do pacote do servidor (§2) |
| EnvSetup | SKYBOX, HAZERING, CLOUD1..3 (NumCloudColor=3) | SkybackgroundColor, HazeRing_Final, Cloud_Final, StarField_Final01/02 | texturas do céu. Sem a chave, o padrão é `SkybackgroundColor`/`HazeRing_Final`/`Cloud_Final`. As cores vêm de `HazeringColor` e `CloudColor1..3` do TimeEnv |
| EnvSetup | ShadowTick | 0.1 | hora de jogo mínima entre duas atualizações de sombra (§6). Padrão −1 = desligado |
| EnvSetup | SlopeSunAngle | 30 | inclinação da trajetória do sol e da lua (§4) |
| EnvSetup | StaticLightingAdjust | 4 | lido. Uso não rastreado |
| EnvSetup | SubLightNum | 0 | luzes de área extras (`SubLight%d` → `Light\%s.int`, com `MinDist`/`MaxDist`). O Interlude não tem nenhuma |
| EnvSetup | TimeEnvFileNum, TimeEnvFileName0..3 | 4, TimeEnv0..3.INT | um `UL2NEnvLight` por arquivo |
| TerrainShadowMap | Num / AutoTimeGeneration | 8 / true | 8 mapas de intensidade do terreno por dia (§6) |
| ActorStaticLight, BSPSunLight | Num | 8 | lidos por `UStaticMesh::Illuminate` e `UModel::Illuminate` (compilação da luz). Seleção em tempo de execução não verificada |
| WIND | DefaultWind, Area, Direction (0,1), Speed 48, Accel 4 | | vento (ver `out/re/env/env_config.json`) |
| FOG | StartRange1..5 = 1.0, 1.5, 2.0, 2.5, 4.0; EndRange1..5 = 4, 5, 6, 7, 10; FogSpeed=1 | | neblina por nível de alcance (§7) |
| WaterVolume | FogColor (39,87,126), FogStart 200, FogEnd 3000, CellophaneColor (a128, 45,121,117) | | neblina e véu debaixo d'água (`UEngine::Init`) |
| S1..S5 | Glow, GlowType, BloomScale, FinalBlend…, Hdr… | | pós-processamento por nível de opção |
| EnchantEffect | texturas e malhas de aura de encantamento e de herói | | efeitos de arma, fora deste documento |

### 1.2 `TimeEnvN.INT` [Obs]

Cada arquivo traz um `EnvType`: 0, 1, 2 ou 3. Ele também traz estas curvas por hora, com `NUM` e as chaves `Color%d`/`Scale%d`/`Light%d`:

| Seção | Tipo da chave | Getter no engine [O] |
|---|---|---|
| SkyBoxColor | `(T,R,G,B)` | `GetSkyBoxColor` |
| SunColor, MoonColor | `(T,R,G,B)` | `GetSunColor`, `GetMoonColor` |
| SunScale, MoonScale | `(T,S)` | `GetSunScale`, `GetMoonScale` |
| HazeringColor, CloudColor1..3 | `(T,R,G,B)` | `GetHazeColor`, `GetCloudColor` (uma curva por textura de nuvem) |
| ActorAmbient, StaticMeshAmbient, TerrainAmbient, BSPAmbient | `(T,R,G,B)` | `Get*AmbientColor` |
| HSVActorLight, HSVStaticMeshLight, HSVTerrainLight, HSVBSPLight | `(T,Hue,Sat,Bri)` | `GetColorPlane_HSV*SunLight`, `GetBrightness_HSV*SunLight` |

Valores ausentes ao carregar a chave **[O]** (`LoadColor`/`LoadScale`/`LoadHSV`):
- `T` ausente vira o índice da chave;
- uma cor ausente vira 255;
- `S` e `Bri` ausentes viram 255.

O engine lê só as chaves de 1 a `NUM`. No `TimeEnv3`, `SkyBoxColor` tem `NUM=1` e 25 chaves escritas, mas só a primeira é carregada.

## 2. Relógio do jogo

Estado no `UL2NEnvManager` **[O]**:
- hora (+0x120), minuto (+0x124) e segundo (+0x128);
- hora contínua `t` (+0x134, double): `t = seg/3600 + min/60 + hora`;
- `TimeRatio` (+0x12C);
- relógio ativo (+0x144);
- base do relógio (+0x13C), em `appSecondsQPC()`.

**Pacote `ClientSetTime` (0xEC, `dd`)** → `UGameEngine::OnClientSetTime` (0x10309034) **[O]**:
- 1º `d` = minutos do dia de jogo. Faz `SetNTime(hora = d/60, min = d%60, seg = 0)`, que também zera a base do relógio.
- 2º `d` = razão. Vai para `TimeRatio`, e o relógio fica ativo se ela for ≠ 0.
- Também recalcula a fase e marca as sombras para atualizar (+0x168 = 1).
- O aCis envia `getGameTime()` e `6`: 1 hora de jogo = 10 minutos reais, e 1 dia = 4 horas.

**`UpdateNTime`** (0x1030fab0), a cada tick com o relógio ativo **[O]**:
1. Calcula o tempo real decorrido desde a base vezes a razão.
2. Soma esse tempo a hora:min:seg, com transporte de 60 s → 1 min e de 60 min → 1 h, e hora módulo 24.
3. Recalcula `t`.
4. Atualiza a **fase** em +0x130: 0 = [6,8), 1 = [8,22), 2 = [22,24), 3 = [0,6).
5. Avalia as sombras: com `ShadowTick > 0` e `|t − t_última| > ShadowTick`, marca +0x168 e guarda `t` em +0x164.
6. Grava `t` num global lido pelo render.

No editor, o `UpdateNTime` só copia `t`.

Outros consultores da hora **[O]**:
- `IsDay`: 6 ≤ t ≤ 24.
- `IsSoundDay`: falso só em 0,001 < t < 5,999.
- `IsSoundNight`: falso em 6,001 ≤ t ≤ 23,999. Esses dois escolhem o som ambiente de dia ou de noite.
- `SetTimeToLobbyTime`: usado na tela de personagens, junto com `UL2ConsoleWnd`.
- `GetHour`/`GetMin`/`GetSecond`.
- `IncreaseNTimeRatio`/`DecreaseNTimeRatio`, com teto de 3600.

Antes do pacote, o construtor começa em 06:00 com razão 1. O `Load` lê `EnvSetup` (`IsClock`, `TimeRatio`, `StartTime`) **[O]**.

## 3. Curvas por hora e ambientes

### 3.1 Interpolação [O]

Todas as curvas usam a mesma busca: o índice `i` tal que `T[i] ≤ t < T[i+1]`, entre as `NUM` chaves carregadas, com `f = (t−T[i])/(T[i+1]−T[i])`.

- **Cor** (`UL2NTimeLight::GetColor`, 0x1030befb): `canal = round(c[i] + f·(c[i+1]−c[i]))`, por canal. O arredondamento é o `fistp` do x87, que arredonda para o par (170,5 → 170).
- **Escala** (`GetScale`, 0x10305ee3): interpolação linear, sem arredondar.
- **HSV** (`GetColorPlane`, 0x103090b1, e `GetBrightness`, 0x1030aecf):
  - `plano = lerp(FGetHSV(H[i],S[i],255), FGetHSV(H[i+1],S[i+1],255), f) · lerp(Bri[i],Bri[i+1],f)/255`, com V = 255 fixo (confirmado no assembly: `push 0xff`);
  - o `·` multiplica também o W do plano;
  - o brilho é `lerp(Bri)`.
- **`FGetHSV(H,S,V)`** (0x1030c482):
  - `b = clamp(0,7·(1,4V/255)/(√(1,4V/255)+0,01), 0, 1)`;
  - matiz por terços: `H<86`: ((85−H)/85, H/85, 0); `H<171`: (0, (170−H)/85, (H−85)/85); senão ((H−170)/85, 0, (255−H)/84);
  - `RGB = (matiz + S/255·(1−matiz))·b` e `W = 1`.
- **Fora do intervalo** (t antes da 1ª chave ou depois da última, ou `NUM < 2`): a função **não escreve**. O chamador fica com o valor inicial: (0,0,0) nas cores dos ambientes e (0,0,0,0) nos planos. Exemplos:
  - `SunColor` tem chaves de 6 a 24, então de 0 a 6 a cor do sol fica (0,0,0);
  - o `SkyBoxColor` do `TimeEnv3` (`NUM=1`) dá sempre (0,0,0).

### 3.2 Ambientes e a troca dos Sete Selos [O]

Há um `UL2NEnvLight` por arquivo, identificado por `EnvType` (+0x110). O gerenciador guarda:
- o ambiente atual (+0x1DD);
- o anterior (+0x1DC);
- o tempo de início (+0x1C8), de pico (+0x1D0) e de fim (+0x1CC) da transição;
- o peso do anterior (+0x1D8) e o peso alvo (+0x1D4);
- o delta (+0x1E0), recalculado a cada tick por `CalcEnvDelta(t)`.

**Pacote `SSQInfo` (0xF8, `cc`)** → `UGameEngine::OnSSQInfo` (0x103064e7) → `ChangeEnv(ambiente = 1º byte, modo = 2º byte, 0.02, 0.02, 1.0, 0.0, 1)`.

O aCis grava `writeH(256..259)`, que chega como os bytes `(0,1)`, `(1,1)`, `(2,1)` e `(3,1)`. Com modo = 1, a troca é **imediata**: início, pico e fim recebem o `t` atual, os pesos ficam em 1 e o delta fica em 1.

| `SSQInfo` (aCis) | Ambiente | Arquivo |
|---|---|---|
| 256 `REGULAR_SKY_PACKET` | 0 | TimeEnv0 (normal) |
| 257 `DUSK_SKY_PACKET` | 1 | TimeEnv1 |
| 258 `DAWN_SKY_PACKET` | 2 | TimeEnv2 |
| 259 `RED_SKY_PACKET` | 3 | TimeEnv3 |

**Mistura** (`GetEnvColor`, 0x1030dcce; `GetEnvBrightness`, 0x103053d5; `GetEnvColorPlane`). O gerenciador consulta três curvas na mesma hora: a do ambiente 0 (base), a do anterior e a do atual.
- Se atual = anterior = 0: o resultado é a base.
- Se atual = anterior ≠ 0: `base + delta·(atual − base)`. Com a troca imediata, delta = 1, então o resultado é a curva do ambiente atual.
- Se atual ≠ anterior e `t <` pico: primeiro `base' = base + peso_ant·(anterior − base)`, depois `base' + delta·(atual − base')`.
- As cores são arredondadas em cada etapa.

**Transição gradual** (`ChangeEnv` com modo ≠ 1; `CalcEnvDelta`, 0x10303b20):
- o delta sobe linearmente de 0 a 1 entre o início e o pico;
- vale 1 no pico;
- depois cai em `1 − (t−pico)/((p/(1−p)+1)·(fim−pico))`, com `p` = peso alvo (se `p ≠ 1`);
- fora de [início, fim] o delta vale `p`;
- os intervalos atravessam a meia-noite somando 24.

`UpdateNTime` também dispara `ChangeEnv(+0x1E5, 0, 0.002, 0.002, 1, 0, 0)` quando expira o temporizador +0x1E8. Isso é a volta automática a um ambiente agendado. No Interlude, só o `SSQInfo` chama `ChangeEnv`, com modo 1.

`GetSunScale`/`GetMoonScale` durante uma transição interpolam linearmente entre a escala do anterior (no início) e a do atual (no fim).

**Luzes de área (SubLight)**: com `SubLightNum > 0`, cada getter também mistura curvas de luzes de área. A mistura usa a distância 2D até a origem (`SetOrigin`, a posição do jogador), entre `MinDist` e `MaxDist`, e tira a média das que estão no alcance. O Interlude tem `SubLightNum=0`.

### 3.3 Valores de referência [O+Obs]

`out/re/env/env_golden.json` aplica as regras acima aos dados. A tabela mostra o ambiente 0, sem transição:

| Hora | Fase | SkyBoxColor | SunColor | ActorAmbient | HSVActorLight (plano RGB, brilho) |
|---|---|---|---|---|---|
| 03:00 | 3 | 40,49,70 | — (não escreve) | 84,108,131 | 0,2759 0,3175 0,3448; 120 |
| 07:00 | 0 | 126,158,241 | 255,170,87 | 67,71,88 | 0,3894 0,3321 0,2705; 140 |
| 12:00 | 1 | 66,124,176 | 255,219,151 | 150,150,150 | 0,5153 0,5153 0,5153; 160 |
| 20:00 | 1 | 60,111,157 | 255,174,125 | 120,120,120 | 0,5153 0,5153 0,5153; 160 |

Às 07:00 o `SunColor` cai no meio de T6 (255,122,23) e T8 (255,219,151). G = 170,5 arredonda para o par, 170.

## 4. Sol, lua e luz do sol

**Ângulos** [O]:
- `GetSunModifierInfo` (0x10313601):
  - para 5 ≤ t < 24: `θ = (t−6)·10° − 90°`, ou seja, 10° por hora (−90° às 06h, 0° às 15h, +90° às 24h);
  - para t < 1: `θ = (t+24−6)·10° − 90°`;
  - nos demais casos: θ = −180°.
- `GetMoonModifierInfo` (0x10309cc8): para 7 ≤ t ≤ 23, θ = −180° (lua escondida); senão `θ = t·30° − 90°`.
- Azimute: `φ = 180°` (construtor, +0x170).

**Direção** (`UL2NEnvManager::GetSunLightDirection`, 0x103120f3) **[O]**:
1. Usa a lua se t < 6 ou t ≥ 24, senão o sol.
2. Calcula `v = (sinθ·cosφ, sinθ·sinφ, cosθ)`.
3. Gira `v` por `SlopeSunAngle` em torno de (1,0,0), com `FVector::RotateAngleAxis`. O ângulo é convertido para unidades Unreal com truncamento: `30·32768/180 = 5461`, cerca de 29,997°. Uma flag global (`DAT_10c51050`) inverte o sinal.
4. Normaliza.

`env_golden.json` → `direcao_sol_lua` traz o resultado. Exemplo: 09h → (0,8660, −0,2500, 0,4330).

Atores **[O]**:
- **`ANSun::Tick`** (0x10311ed2): posiciona o sol a `Radius` (`NSun.Radius`, 350 em todos os mapas **[Obs]**) na direção acima, a partir do ator de zona com céu. O tamanho do desenho é `escala do sol (GetSunScale) × 8 × +0x3CC`. Também grava a direção normalizada, invertida, no gerenciador (+0x148), e essa é a direção da luz.
- **`ANMoon::Tick`**: faz o mesmo para a lua.
- **`ANMovableSunLight::Tick`** (0x1030206d): orienta a luz direcional do sol (`NMovableSunLight`, uma por mapa **[Obs]**). Na fase 3 usa os ângulos da lua.

**Cor da luz do sol** [O]:
- `NMovableSunLight` tem `bSunlightColor=True` nos padrões da classe (`Engine.u`) **[Obs]**.
- Em `FDynamicLight::Update` (0x10306bef), uma luz com `bSunlightColor` não usa `LightHue`/`LightSaturation`. Ela usa as curvas HSV do §3 e grava quatro cores: atores (`HSVActorLight`), static meshes, terreno e BSP. Cada uma é o plano HSV × brilho/255.

## 5. Luzes dinâmicas e luzes noturnas

### 5.1 Modulação por `LightType` (`FDynamicLight::Update`) [O]

O fator multiplica a cor da luz `FGetHSV(LightHue, LightSaturation) · LightBrightness/255`. O tempo é o `Level.TimeSeconds`.

| LightType | Fator |
|---|---|
| 1 Steady | 1 |
| 2 Pulse | `0,6 + 0,39·sen(fase)` (tabela de seno do `GMath`; fase = `LightPhase<<8` + termo de tempo/`LightPeriod`) |
| 3 Blink | 0 ou 1, por um bit do contador de fase |
| 4 Flicker | `appFrand()`; abaixo de 0,5 vira 0 |
| 5 Strobe | alterna 0/1 a cada mudança de `TimeSeconds` |
| 7 SubtlePulse | `0,9 + 0,09·sen(fase)` |
| 8/9 TexturePalette | cor e brilho da paleta da textura da luz, por `LifeFraction` ou por fase |
| 10 FadeOut | `min((1 − LifeFraction)·1,5, 1)` |
| 11 Fade (L2) | fase += taxa·Δt; fator `sen(fase)` |
| 0 None, 6 Backdrop | 0 (não contribuem como luz dinâmica) |

O termo de tempo exato dentro da fase (o argumento do `ftol`) não aparece no pseudocódigo. A fórmula da Unreal Engine 2 é `TimeSeconds·35·65536/LightPeriod` **[I]**.

### 5.2 Luzes que acendem à noite (`bTimeLight`) [O + Obs]

`AActor::Tick` chama `FUN_105d0c70(t)` para a luz do ator quando `bTimeLight` está ligado (bit 1 de +0x3D0):
- Normaliza `LightOffTime` e `t` para depois de `LightOnTime`, somando 24.
- Com `t` entre `On` e `Off`: `LightType = Steady` (luz acesa) e marca a luz como alterada. `LightLifeTime` guarda as horas que faltam para apagar.
- Fora do intervalo: `LightType = BackdropLight` (sem contribuição dinâmica) e `LightLifeTime` diminui.

Nos mapas **[Obs]**:
- 2.036 luzes têm `LightOnTime=19`/`LightOffTime=8` (acesas das 19h às 8h);
- **nenhuma** das 47.595 luzes tem `bTimeLight` ligado;
- o padrão da classe `Light` é desligado (padrões lidos do `Engine.u`: `LightType=Steady`, `LightBrightness=64`, `LightRadius=64`, `LightSaturation=255`, `LightPeriod=32`, `LightCone=128`, `MaxCoronaSize=1000`);
- nenhum script liga o `bTimeLight`.

Por isso o mecanismo existe, mas **não tem efeito no Interlude**: essas luzes ficam sempre acesas.

## 6. Iluminação estática do terreno por hora [O]

- **Dados**: cada `TerrainInfo` guarda `NumIntMap=8` mapas de intensidade em `TIntMap`, cerca de 528 KB: 8 × 257×257 bytes **[Obs]**.
- **Horas dos mapas**: `ATerrainInfo::SetTimeForIndex` (0x103051e6) define `hora[i] = 24·i/N + 12/N`. Com N = 8: 1,5; 4,5; 7,5; …; 22,5. Os mapas são gerados na compilação da luz (`UTerrainPrimitive::Illuminate`, `TerrainShadowMap.Num`/`AutoTimeGeneration`).
- **Escolha do mapa**: `GetShadowMapIndex(t)` (0x10313e71) leva `t` para [0,24] e devolve `i` com `hora[i] ≤ t < hora[i+1]`, ou `N−1`.
- **Mistura**: `UpdateShadow` (0x1030360c) mistura o mapa `i` com o `(i+1) mod N`, com frações que atravessam a meia-noite somando 24. A mistura é `InterpolateGlobalIntensityMap` (0x1031311a): `round(a·(1−f) + b·f)` por texel de 257×257. Depois vem `UTerrainSector::StaticLight` para os setores marcados.
- **Frequência**: só quando o gerenciador marca +0x168, ou seja, a cada `ShadowTick` = 0,1 h de jogo (36 s reais com razão 6), ou no `ClientSetTime`.
- **Não verificado**: BSP e static meshes também são compilados com `BSPSunLight`/`ActorStaticLight` `Num=8`, mas a escolha desses mapas em tempo de execução não foi rastreada.

## 7. Neblina

- **Alcance global** (NWindow `FUN_10147060`) **[O]**: o nível vem do alcance de terreno aplicado pela opção `TerrainClippingRange` (`GL2OriginTerrainCR`):
  - < 5, ou `IsKeepMinFrameRate` ligado → `StartRange1/EndRange1`;
  - [5,6) → 2; [6,7) → 3; [7,8) → 4; ≥ 8 → 5.
  - Os valores vão para `GL2FogStart/GL2FogEnd`.
  - O render converte em unidades de mundo com `× 32768 × 0,0625`, ou seja, **× 2048** (`FLevelSceneNode::Render`, `FUN_104447c0`). O comentário do `Env.int` diz "1.0=2000unit", mas o fator do código é 2048.
  - Padrões, quando a chave falta: (0,5; 3,5), (1; 4,5), (1,5; 5,5), (2; 6,5), (2,5; 7,5).
- **Por zona**: `ZoneInfo` tem `bDistanceFog`, `DistanceFogColor`, `DistanceFogStart/End` e `AmbientBrightness/Hue/Saturation/AmbientVector`. Há 933 zonas, 488 com neblina **[Obs]**.
- **Neblina local L2** (`L2FogInfo`, 604 atores em 31 mapas) **[Obs]**:
  - campos: `AffectRange` (Min/Max), `FogRange1..5` (Min/Max por nível de alcance), `TextureDistance`, `CloudTexture` e `Colors[]` com `Time`, `FogColor`, `SkyColor`, `CloudColor[]` e `HazeRingColor[]` por hora;
  - exemplo em `18_19`: `AffectRange` 2000–2500, neblina 0–3000 até 0–7000, e cores às 0, 5, 6, 7, 19, 20 e 23 h;
  - cada um se registra no tick na lista do gerenciador de neblina (`UGameEngine+0x18C`), lida por `FLevelSceneNode::Render` **[O]**;
  - a fórmula de mistura por distância e hora não foi reconstruída.
- **Água**: `WaterVolume` de `Env.int` (§1.1). Há 472 volumes em 131 mapas **[Obs]**.

## 8. Animação de cenário nos mapas [Obs + O]

Os 158 mapas (`Maps/*.unr`, pacote UE2 v123, licença 28) somam 658.518 exports **[Obs]**:

| Classe | Total | Mapas | O que anima |
|---|---|---|---|
| Light / Spotlight | 47.591 / 4 | 89 / 2 | Modulação do §5.1. LightType: padrão Steady 40.787, None 3.875, SubtlePulse 2.268, Backdrop 625, Flicker 31, Pulse 9. LightEffect: Spotlight 8.853, StaticSpot 690, Shock 140, outros 74. Só 8 têm `bDynamicLight` |
| NSun / NMoon / NMovableSunLight / SkyZoneInfo | 157 / 162 / 156 / 157 | ~156 | Sol, lua e luz do sol (§4). Céu com rolagem `TexUPanSpeed`/`TexVPanSpeed` (0,2) e 9 lens flares (`L2_Skies.FlareSet.*`) |
| Emitter + SpriteEmitter / MeshEmitter / BeamEmitter / VertMeshEmitter | 4.559 + 6.459 / 577 / 81 / 58 | 71 | Partículas do sistema da Unreal Engine 2 (fumaça, fogo, névoa). As propriedades de cada emissor estão no JSON do mapa |
| MovableStaticMeshActor | 741 | 35 | Malhas que giram ou balançam (moinhos, chamas, peças suspensas), em `physL2Movement` (0x10313395) **[O]**. Detalhes abaixo |
| Mover | 593 | 49 | Portas e portões: `StaticMesh`, `KeyPos`/`KeyRot`, sons de abrir e fechar, `MeshGrade[0..6]` (estágios de dano). 588 têm `L2ServerObjectID`, e o estado vem do servidor (`DoorInfo` 0x4C, `DoorStatusUpdate` 0x4D, `StaticObjectInfo` 0x99; ver 96) |
| SceneManager + ActionMoveCamera / ActionWarp / InterpolationPoint | 95 + 136 / 26 / 51 | Lobby (94), 21_20 (1) | Cinemáticas Matinee. Quase todas estão na cena de seleção de personagem (`Lobby.unr`) |
| ZoneInfo / L2FogInfo / WaterVolume | 933 / 604 / 472 | | Neblina e luz ambiente (§7) |
| TerrainInfo | 155 | 155 | 8 mapas de intensidade por dia (§6), `MapX`/`MapY` |
| AmbientSoundObject / MusicVolume | 185.688 / 414 | 129 / 102 | Som ambiente. Só a contagem; as propriedades estão no JSON |
| StaticMeshActor | 171.340 | 111 | Só a contagem. As propriedades de luz e de balanço de cada um não foram extraídas |

**`MovableStaticMeshActor`** **[O]**:
- Cada eixo (pitch, yaw, roll) oscila em seno em torno da rotação original:
  - a amplitude e a velocidade vêm de `L2RotatorMax` e `L2RotatorRate`;
  - o período é proporcional a `4·Max/Rate`;
  - `L2AccelRatio` dá o tempo de cada eixo.
- `bUseL2RotatorMaxRandom` sorteia a amplitude e `bUseL2RotatorRandomStart` sorteia a fase inicial.
- Atores com a mesma `L2MovementTag` são presos com deslocamento fixo (`AttachL2MovementActor`).
- A fórmula exata do ângulo por quadro passa por um `ftol` cujos argumentos o pseudocódigo não mostra **[I]**.

## 9. O que não está coberto

- A mistura de neblina e cor do `L2FogInfo` por distância e hora (§7): só os dados e o registro estão documentados.
- A seleção dos mapas de luz de BSP e static mesh por hora (§6).
- Vento (`WIND`) e pós-processamento (`S1..S5`): os dados estão em `env_config.json`, mas o consumo não foi rastreado.
- O Matinee: as classes e o pseudocódigo estão mapeados (99), mas não há texto por algoritmo. A simulação das partículas (`UParticleEmitter`), que também vale para os emissores dos mapas, está em 09 §4.
- O termo de tempo exato do Pulse/SubtlePulse/Blink e o ângulo por quadro do `MovableStaticMeshActor` (marcados **[I]**).
- Os lightmaps já calculados dos mapas (texturas `FStaticLightMapTexture` no `.unr`): o inventário lê as propriedades dos atores, não os lightmaps.

## Apêndice A. Achados do porte Unity (2026-10-28)

Leituras feitas ao recriar este documento no cliente Unity. Corrigem ou completam as seções acima.

- **§2 `UpdateNTime`** (corpo real 0x1051b330, o 0x1030fab0 é thunk) **[O]**: `e = (QPC − base)·TimeRatio`; `h += ftol(e)/3600`;
  `e2 = e − h·3600`; `m += ftol(e2)/60`; `s = e2 − m·60 + seg`. Se `s ≥ 60`: `m += 1` e **`s = 60`** (não `s − 60`); se `m > 59`:
  `h += 1`, `m −= 60`; `h %= 24`. A base (+0x13C) não é reposta a cada tick: h:m:s locais são recompostos a partir da base.
- **§3.2 `ChangeEnv(env, modo, a, b, w, timer, agendar)`** (0x10303229) **[O]**: modo 1 → anterior = atual = env, início = pico =
  fim = t, pesos 1. Senão: fim = t + a, pico = t + b (erro se fim < b ou w ∉ [0,1]), peso alvo = w, temporizador da volta
  (+0x1E8) = timer, anterior = atual, peso do anterior = alvo antigo, atual = env; com env = 0, pico = fim e w = 1.
- **§3.2 `GetEnvColor(base, atual, anterior, t)`** (0x1030DCCE) **[O]**: com atual ≠ anterior e t < pico, `b' = round(base + peso_ant·(anterior − base)) & 0xFF`
  e `out = round(b' + delta·(atual − b'))`; com t ≥ pico, `round(base + delta·(atual − base))`; com atual = anterior ≠ 0 o
  mesmo; com atual = anterior = 0, a base.
- **§7 Cor da neblina** **[O]**: em `FLevelSceneNode::Render` (0x1065E940), sem `L2FogInfo` na lista, uma zona com
  `bTerrainZone` (+0x3D8 bit 2; a ordem do `ZoneInfo.uc` dá bit 3 = `bDistanceFog`, confirmada pelo far-clip em 00002.c:28986)
  leva `FUN_104448F0` a escrever no gerenciador de neblina o `GetHazeColor(t)` (vtbl +0xDC: **`HazeringColor` da hora**) e
  `FUN_10443100` recebe `GL2FogStart/End × 32768 × 0,0625`; uma zona **sem** `bTerrainZone` e com `bDistanceFog` usa o próprio
  `DistanceFogColor/Start/End` (com `DistanceFogBlendTime` +0x404). `SetDistanceFog` só liga com o bit 3 e o flag de vídeo
  (`PC+0x5AC & 0x80000`).
- **§7 `L2FogInfo`** (estudo `l2foginfo_re.md`) **[O]**: cada ator se registra no tick (`AL2FogInfo::Tick` 0x10444D10 →
  AddUniqueItem na lista `UGameEngine+0x18C`) e o `Render` esvazia a lista a cada quadro. Peso pela distância **3D** ao
  ViewTarget (`FUN_10444560`): 0 com `Colors.Num ≤ 1` ou `d ≥ AffectRange.Max`, 1 com `d ≤ Min`, senão `(Max−d)/(Max−Min)`.
  Nível (`FUN_10443580/650`) pelo `GL2TerrainCR` efetivo (<5→1, [5,6)→2, [6,7)→3, [7,8)→4, ≥8→5) escolhe `FogRangeN` (já em
  unidades de mundo). Chaves por hora (`FUN_10444FD0`): `Time[i] ≤ t ≤ Time[i+1]` (a última liga a `Time[0]+24`), por byte
  `trunc(a + f·(b−a))` (`fistp` com truncamento, ao contrário do `GetColor`). Base: `GL2FogStart/End×2048`, cor **(127,127,127)**
  (o `GetHazeColor×0,72` de `FUN_10444A30` é descartado), `GetSkyBoxColor(t)`, `GetCloudColor(t)[]`, `GetHazeColor(t)[]`; por ator
  na ordem da lista: `start += w(Min−start)`, `end += w(Max−end)`, cores `trunc(acc + w(F−acc))`. O gerenciador faz a transição
  de `GL2FogSpeed` s (`FogSpeed` do Env.int) só ao entrar ou sair da lista (`FUN_10443AD0`: α = 1 − restante/duração).
  `FUN_10657850(1, céu, nuvens[], haze[])` escreve essas cores nos `ColorModifier` do céu. [Obs] `TextureDistance` e
  `CloudTexture` nunca são definidos nos mapas: o crossfade de textura das nuvens não ocorre no Interlude.
- **§7 Nível de alcance** **[O]**: `UUIScript::execSetTerrainClippingRange` (NWindow 0x100FA5E0) mapeia o índice do combo
  (0 Very Wide … 4 Very Narrow) para `TerrainClippingRange` = 8, 7, 6, 5, 4 (e `ActorClippingRange` 4, 3,5, 3, 2,5, 2; o terceiro
  valor 6, 5,5, 5, 4,5, 4). Com isso o nível de neblina é 5, 4, 3, 2, 1.
- **§8 `TexUPanSpeed`/`TexVPanSpeed`** **[O]**: nenhum código do Engine.dll ou D3DDrv.dll lê os dois floats (varredura por
  capstone, estudo `lobby_sky_re.md`); a rolagem das nuvens vem do `TexPanner` do material (`Cloud_Final`: PanRate 0,002 UV/s).
  No lobby o gerenciador não escreve as cores dos `ColorModifier` do céu (os três `FUN_10657850` são pulados): ficam as do pacote.
- **§8 Portas** **[O]**: `UGameEngine::OnDoorInfo` (0x10311B80) e `OnStaticObjectInfo` (0x1030F8F3) procuram o `AMover` com
  `AActor+0xB8` igual ao id do servidor (`L2ServerObjectRealID`) e guardam o id de rede em `+0x60`. `OnDoorStatusUpdate`
  (0x103125B7), com o ator já resolvido pelo id de rede, lê na ordem do pacote: fechada (0 → `eventTrigger`, abre; senão
  `eventUnTrigger`), grau de dano (< 7 → `MeshGrade[n]`, com som de quebra), inimigo (bit 0 em +0x3BC), e dois `d` ignorados.
  O `L2ParamStack::Top` devolve os campos na ordem em que o pacote os traz (confirmado em `OnClientSetTime`: 1º = minutos).
- **§5.1** o termo de tempo do Pulse/SubtlePulse continua **[I]** (35·65536/`LightPeriod` por segundo).
- **§6 Mapas de luz de BSP e static mesh por hora** (fecha o item "não verificado") **[O]**: `UpdateNTime` marca +0x168 e
  `ULevel::Tick` → `ULevel::ResetActorStaticLight` (0x105C9D70) marca `Actor+0x5C |= 0x40` em todos os atores e limpa o render
  data das luzes `bSunlightColor`; no próximo `RenderStaticMesh` (0x1067AFC0) um ator marcado em zona com sol refaz
  `CalculateStaticMeshLighting` (0x10677FA0) + `InterpolateSunLight(t)` (0x10679960) por inteiro, na hora do quadro. O BSP
  escolhe por quadro `k = trunc(N·t/24) mod N` do `FMultiLightMapTexture` (`FBspDrawList::Render` 0x10669DE0, 0x1066A11F), só
  em listas com `bSunAffect` (senão k = 0), sem mistura; nas zonas com sol a seção ganha um `UColorModifier` global com
  `GetBSPAmbientColor(t)` (composição no D3D não rastreada). Ambientes por quadro: `GetStaticMeshAmbientColor(t) >> 1` em
  `RenderStaticMesh`; `GetTerrainAmbientColor` e `GetColorPlane_HSVTerrainSunLight` só em `SetInterpolatedIntensityMap`
  (releitura). Em `SetIntensityMap` (0x10729BC0): `C = FColor(Int/255·0,5·S)` com `S` = `GetColorPlane` (já × Bri/255), depois
  `+ (Amb >> 1)` e `+ Static`, tudo saturando.
