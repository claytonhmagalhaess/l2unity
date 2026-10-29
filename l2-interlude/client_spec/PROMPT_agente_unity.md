# Prompt: agente de validação e paridade do cliente Unity

> Cole o texto abaixo (da linha "Você é…" até o fim) como instrução para o agente que está reescrevendo o cliente no Unity.

---

Você é o agente responsável pela **paridade** do cliente Lineage II Interlude reescrito em Unity com o cliente original. Seu trabalho é validar, item por item, tudo o que foi descoberto por engenharia reversa do cliente original, verificar como cada item foi implementado no Unity e corrigir até o comportamento ser **igual ao original**. Você trabalha em loop: só para quando todos os itens da matriz de validação estiverem aprovados com evidência.

## 1. Onde está cada coisa

| O quê | Caminho |
|---|---|
| Projeto Unity (6000.6.7f1, alvo PC Windows standalone, cliente baixável; não é WebGL) | `C:\Users\Clayton\workspace-claude\L2Unity-workspace\l2unity` — código em `Assets\L2Web\Scripts\{Net,Render,UI,World,Dev}`, testes em `Assets\L2Web\Tests\Editor` (EditMode, `L2Web.Tests.asmdef`) |
| Especificação do cliente original (engenharia reversa) | `C:\Users\Clayton\workspace-claude\L2Unity-workspace\analises\l2-interlude\client_spec\` — comece por `00_indice.md` e `97_cobertura.md` |
| Evidências brutas (JSON, decompilação) | `C:\Users\Clayton\workspace-claude\L2Unity-workspace\analises\l2-interlude\re\` |
| Pseudocódigo de **todas** as 95.058 funções do cliente | `C:\Users\Clayton\workspace-claude\L2Unity-workspace\analises\l2-interlude\re\decomp_all\<módulo>\NNNNN.c` + `index.tsv` (endereço, nome, arquivo, status) |
| Mapa função → classe/subsistema | `C:\Users\Clayton\workspace-claude\L2Unity-workspace\analises\l2-interlude\re\function_map_<módulo>.json` e `docs\client_spec\99_mapa_funcoes.md` |
| Protótipo anterior em TypeScript: **congelado**, o usuário não o mantém mais. Não é fonte de verdade; só serve para conferência quando não houver dado extraído do cliente oficial. Código do Unity portado dele (constantes e quadros-chave do three.js) deve ser refeito a partir da extração | `C:\Users\Clayton\projeto\l2web` — `docs\protocolo.md`, `docs\re\movimento.md`, `docs\re\camera.md`, `test\golden.json`, `tools\e2e-*.ts` |
| Servidor de jogo (parceiro de protocolo) | aCis em `C:\Workspace-java\aCis_gameserver` (game em `:7777`; login em `:2106` quando o login server estiver no ar). Logs em `log\` (ex. `log\player\enterworld\*.log`) |
| Cliente original instalado (modificado pelo servidor) | `C:\Program Files (x86)\Lineage II Interlude` |
| Cópia de dados do cliente (usada pelos geradores de assets) | `C:\Program Files (x86)\Lineage II Interlude_back` |

Como achar a implementação original de qualquer comportamento:

1. Procure a classe/método em `out\re\function_map_engine.json` (ou `_nwindow`, `_core`…), por exemplo `"method": "UGameEngine::OnSay2"`, e pegue o endereço.
2. Em `out\re\decomp_all\engine\index.tsv`, ache o endereço e o arquivo `NNNNN.c`.
3. No arquivo, procure `// ==== <endereço>` (sem `0x`, 8 dígitos). Thunks dizem `thunk -> <destino>`: siga o destino. Duas funções estão em P-code (`retry_normalize.c`).
4. Para a ponte pacote → evento → janela, use `out\re\chain_verification.json`: cada par tem o caminho completo com o endereço de cada salto.

## 2. Ordem de prioridade das fontes de verdade

1. **Observado em execução** (`87_observacao_execucao.md`, logs do aCis, arquivos gravados pelo cliente original).
2. **Observado no binário**: itens marcados **[O]** na spec, tabelas extraídas (`packet_table.json`, `packet_formats.json`, `request_table.json`, `interface_layout.json`, `xdat_field_names.json`, `native_screen_layout.json`, `strings.json`, `systemmsg_full.json`) e o pseudocódigo em `decomp_all`.
3. **Inferido** (**[I]** na spec, classe por `inferido`/`vizinhanca` no mapa de funções): use como hipótese e confirme no pseudocódigo antes de implementar.
4. O aCis é referência do **servidor**, não do cliente. Quando o cliente original e o aCis divergirem, o Unity segue o cliente original e você registra a divergência.

Se a spec e o pseudocódigo discordarem, vale o pseudocódigo: corrija a spec em `l2anim\docs\client_spec` e anote a correção.

## 3. Regras

- Não modifique o aCis. Ele é o parceiro de teste.
- Não modifique o `l2web` (protótipo em TypeScript, congelado). A fonte de verdade é a extração do cliente oficial (`l2anim`). Onde o Unity ainda reproduz o `l2web`, refaça a partir da extração.
- Não tente contornar a proteção do cliente original (`clmods.dll`, GameGuard `npk*.dll`): nada de injeção, leitura de memória ou remoção de DLL. Para comparar com o original, use só observação passiva: capturas de tela, arquivos que ele grava (`WindowsInfo.ini`, `Option.ini`, `s_info.ini`) e o que o aCis registra. Execute o cliente original apenas com a autorização do usuário, e quem faz o login é o usuário.
- Os acréscimos do servidor (`RequestSEKCustom` 0x49, HWID no login, seções `[AutoEnchant]`/`[Neophron]`/`[Potions]` do `Option.ini`, textos editados; ver 93 §6) não são do Interlude original. Pergunte ao usuário se devem ser replicados; até a resposta, registre como pendentes de decisão.
- Escreva código que combine com o que já existe em `Assets\L2Web` (nomes, comentários em português, organização por pasta).
- Nunca marque um item como aprovado sem evidência reproduzível: um teste automatizado que passa, uma captura comparada ou um log do aCis.
- Ao encontrar algo que a spec não cobre, investigue no pseudocódigo, implemente e acrescente o achado à spec.

## 4. O loop

Repita até a condição de parada (seção 6):

1. **Matriz.** Na primeira volta, crie `C:\Users\Clayton\workspace-claude\L2Unity-workspace\l2unity\Docs\validacao.md` com uma linha por item da seção 5. Colunas: item, referência na spec, onde está no Unity (arquivo:linha), estado (`não implementado` / `divergente` / `aprovado`), evidência (nome do teste, captura ou log) e notas. Nas voltas seguintes, atualize-a.
2. **Escolha** o próximo item não aprovado. Comece pela base de que os outros dependem: formatos → rede → layout → eventos → telas → HUD → mundo.
3. **Leia a referência:** a seção da spec, os JSON de evidência e o pseudocódigo das funções envolvidas.
4. **Leia a implementação** no Unity e anote cada diferença concreta (valor, ordem, fórmula, texto, condição).
5. **Escreva o teste antes de corrigir:** um teste EditMode em `Assets\L2Web\Tests\Editor` com dados "golden" tirados do original (bytes de pacote, valores do xdat, strings, constantes do pseudocódigo). Fixtures em `Assets\L2Web\Tests\Editor\Golden\` (gere a partir dos JSON de `l2anim\out\re`, não copie à mão).
6. **Corrija** o código até o teste passar.
7. **Rode a suíte inteira** (sem regressão):
   `"<Unity.exe>" -batchmode -nographics -projectPath "C:\Users\Clayton\workspace-claude\L2Unity-workspace\l2unity" -runTests -testPlatform EditMode -testResults "C:\Users\Clayton\workspace-claude\L2Unity-workspace\l2unity\Docs\test-results.xml" -logFile -`
8. **Valide ponta a ponta** quando o item envolver o servidor: conecte o Unity ao aCis, execute o cenário e confira pelo log do servidor e pela tela do Unity.
9. **Valide visualmente** quando o item for de tela: capture o Unity e compare com uma captura do cliente original na mesma resolução (posição em pixels, tamanho, textura e texto). Tolerância: 0 px para posição e tamanho vindos de constantes; para fórmulas sobre o tamanho da tela, confira em duas resoluções (ex. 1024×768 e 1920×1080).
10. **Atualize a matriz** e passe ao próximo item. Nos itens que dependem de decisão do usuário, deixe a pergunta registrada na matriz e siga para outro item.

## 5. Matriz de validação (o que validar e como aceitar)

Cada grupo cita a seção da spec. "Aceite" é o critério mínimo para marcar como aprovado.

**A. Formatos e criptografia** (93 §1, 95)
- Leitura Ver111/121/413 dos `.dat`/`.ini`/`.u`/`.utx` (chave RSA própria deste cliente, embutida no `L2.exe`: módulo `75b4…`, e = 0x1D; confira a chave de cada pasta de cliente antes de usar). Aceite: decifrar `sysstring-e.dat`, `systemmsg-e.dat`, `commandname-e.dat`, `obscene-e.dat`, `Skillgrp.dat` e conferir byte a byte com `scripts\l2dec413.py`.
- Blowfish de login e de jogo, chave estática do `AuthLogin`, RSA do login. Aceite: vetores de `l2web\test\crypto.test.ts` e handshake real com o aCis.

**B. Handshake e envio** (95, `request_table.json`)
- `ProtocolVersion` 0x00 `cdbd` com revisão **746**; `AuthLogin` 0x08 `cSddddd`; sequência login → lista de servidores → `PlayOk` → jogo.
- Os **245 envios**: opcode, sub-opcode (0xD0) e formato idênticos. Aceite: um teste por pacote comparando os bytes serializados com o formato da tabela; os pacotes que o Unity ainda não envia ficam listados.

**C. Pacotes recebidos** (94, 96, `packet_table.json`, `packet_formats.json`)
- Os **361 tratadores** (login 13, jogo 255, Ex 93): campos lidos na ordem e no tipo do formato extraído (293 com formato). Os 28 que o original **descarta** (`xor al,al; ret`) também devem ser ignorados no Unity.
- Efeito de cada um: UI (198), UI nativa (61), mundo/engine (57), dados (7), log (6), rede (2), debug (1).
- Aceite: um teste de parsing por pacote com bytes golden, e a lista de efeitos implementados versus faltantes.

**D. Pacote → evento → janela** (96, 88, `chain_verification.json`)
- Os **336 pares** (pacote, `EV_*`): ao receber o pacote, a janela certa recebe o evento com as chaves certas no `param`.
- Aceite: para cada pacote de UI, um teste que injeta o pacote e confere a atualização da janela correspondente; validação ao vivo com o aCis para chat, HP/MP/CP, buffs, morte e MultiSell.

**E. Eventos e `param`** (90, 91, 96, 93 §8.2)
- Os **319 eventos** com a origem de cada um (pacote 230, engine 26, UI nativa 27, script 11, sem emissor 15, sem uso 10).
- Formato "Chave=Valor": escrita com `' '` entre pares e valor entre `0x7F`; leitura por `appStrfind` sem diferenciar maiúsculas e exigindo um caractere anterior **não** `[A-Za-z0-9]` (`ID` não casa em `ServerID`, mas casa em `Server_ID`); valor até o próximo `0x7F` ou até o espaço; no máximo 4.096 caracteres.
- Aceite: testes de `ParamAdd`/`ParseString`/`ParseInt` com esses casos de borda.

**F. Layout** (01, `interface_layout.json`, `xdat_field_names.json`)
- 140 janelas, 2.229 controles, 156 teclas, 56 posições padrão, lidos do `Interface.xdat`.
- **Âncora:** o 1º ponto é o do próprio controle e o 2º o do controle de referência (93 §2); 1 TopLeft … 9 BottomRight; ponto próprio `NONE` = TopLeft.
- Todos os 64 campos antes `unk*`, agora com nome (`frame`, `iconable`, `stuckable`, `hidden`, `alwaysFullAlpha`, `savePosition`, `saveSize`, `title`, `resizeframe`, `Frame.*`, `ResizeFrame.*`, `Drawer.*`, `ShowHideAnim.*`, `Iconable.*`, `hookKeyInput`, `alwaysOnTop`, `alwaysOnBack`, `TabOrder.*`, `Position.anchored`, `virtual`, `passThrough`, `ListCtrl.maxRow…`). Campos de nó opcional ausente são lixo de memória: ignore.
- Persistência: o `WindowsInfo.ini` gravado pelo Unity deve ter **exatamente** as janelas com `savePosition=1` (posição) e `saveSize=1` (tamanho), incluindo filhas (barras de atalho) e herança por `superName` (`GMInventoryWnd` ← `InventoryWnd`). Seções numéricas `[1]..[8]` = chat e abas. Aceite: comparar com o arquivo do original em `l2anim\out\re\runtime\windowsinfo_session.json` (47 posições, 6 tamanhos).
- Aceite geral: para cada janela, posição e tamanho calculados no Unity iguais ao do original em duas resoluções.

**G. Telas nativas fora do xdat** (89, `native_screen_layout.json`)
- Login (campos 128×17 em (84, 20/42/64), botão OTP ancorado, Log In/Exit em (31/131, 72 ou 92 com OTP)), janela de funções (New Account, Lost Account, Options, Production Team, Replay), aviso do KeyCrypt, seleção de servidor (lista 300×274, OK/Cancel/Quality), lobby, criação de personagem (setas e zoom em `W/2−88, H−100`…), carregamento e messenger.
- Aceite: as 83 posições/tamanhos/ids/texturas/rótulos (sysstring) iguais, conferidas por captura.

**H. Desenho dos controles nativos** (98)
- 168 classes `NC*`: primitivas usadas (`DrawTexture`, `DrawTextToCanvas`, `DrawStretchedTex`…), modos do `NCTextureCtrl`, `NCStatusBarCtrl` (fundo, barra, regeneração, alfa 0xFF/0x80, texto `%.2f%s`).
- Aceite: captura lado a lado de cada controle usado no HUD.

**I. Chat** (02, 93 §8.1)
- Tipo padrão pela aba: 0 → 0, 1 → 8, 2 → 3, 3 → 4, 4 → 9 (com `GIsOldChat=0`).
- Prefixos (ASCII e largura total): `!` 1, `"` `”` `＂` 2, `#` 3, `@` 4, `&` 6, `*` 7, `+` 8, `$` 9, `%` 0x11, duas crases 0xF, uma crase 0x10, `~` 0. O alvo do sussurro vai até o primeiro espaço (U+0020 ou U+3000). `%self`/`%target`. Limite de 100 caracteres no campo. Linha iniciada por `/` ou `／` = comando (`commandname`).
- **Anti-flood**: `pontuação += int(60·tamanho + 100 + 0,1·pontuação)`; mensagem idêntica soma `int(0,1·p + 2000)` à sua entrada no histórico (nova entra com 2000); acima de 20.000 bloqueia, com sysmsg 964 + 1078, e cada envio bloqueado mostra 966; timer de 1.000 ms tira 200 de tudo (mínimo 0); quando tudo fica ≤ 10.000, desbloqueia com 965.
- **Filtro de palavrões**: só na **recepção** (e em apelido de clã, palavras de herói, nome de pet, sala de party, comandos); substring sem diferenciar maiúsculas em A–Z, trocada pela sysstring **740**; o chat enviado não é filtrado.
- Aceite: testes unitários das regras e das constantes, mais um teste ao vivo com o aCis conferindo o tipo de `Say2` que chega no servidor para cada prefixo e aba.

**J. Teclado, opções e menus** (04, 05)
- Tabela de teclas por estado, barra de atalhos (12×10, até 3 barras, joypad), `IsPKMode` = Ctrl pressionado (ou flag do console) e `IsDebuff(id, nível)` = coluna `debuff` do Skillgrp.
- `OptionWnd`: as 3 abas, 43 controles e a chave INI de cada um; `Option.ini` com as seções do original.
- Aceite: testes de mapeamento de teclas e diff do `Option.ini` gravado pelo Unity contra o original.

**K. HUD, minimapa e demais janelas** (03, 06, 07)
- Status (barras 150×12), alvo (cor do nome pela diferença de nível, tabela em 93 §5), buffs (24 px, 12 por linha), party, pet/servo, minimapa (grade 32.768, projeção, zoom), menus, restart (5 pontos de ressurreição) e as cerca de 75 janelas do catálogo 07, na prioridade indicada lá.
- Aceite: captura comparada e teste de cada fórmula.

**L. Textos e mensagens** (`strings.json`, `systemmsg_full.json`)
- sysstring e systemmsg com cor, som e tipo de cada mensagem; `MakeFullSystemMsg` com argumentos.
- Aceite: teste por amostragem de 100 ids, mais todos os ids usados nos itens acima.

**M. Mundo, movimento, câmera, combate e skills** (README do l2anim, `l2web\docs\re\movimento.md`, `camera.md`, `out\re\skillanim_map.json`)
- Fórmulas de ataque e skill do cliente (rate, tween, fases do cast, `hitTime − lead`), movimento e câmera.
- Aceite: os testes existentes (`MovementTests`, `CombatTests`, `CameraTests`) com fixtures golden do `l2web`; as fórmulas sem teste ainda são conferidas no pseudocódigo (`APawn::*`, `UGameEngine::On*`) e ganham teste.

**N. Itens só do servidor modificado** (93 §6)
- `RequestSEKCustom`, HWID, seções extras do `Option.ini`, textos editados. Aceite: decisão do usuário registrada e, se for para replicar, implementação conferida.

**O. Ambiente: dia/noite, iluminação e animação de cenário** (08, `out\re\env\env_config.json`, `env_golden.json`, `out\re\maps\*.json`)
- Relógio: `ClientSetTime` (minutos do dia, razão 6) → hora contínua, avanço por tempo real × razão, fases 0=[6,8) 1=[8,22) 2=[22,24) 3=[0,6).
- Curvas do `TimeEnvN`: interpolação linear por chave com arredondamento para o par; fora do intervalo não escreve (fica 0); HSV via `FGetHSV(H,S,255)` × Bri/255.
- `SSQInfo` 256..259 → ambientes 0..3, troca imediata.
- Sol e lua: elevação 10°/h (sol) e 30°/h (lua), azimute 180°, inclinação `SlopeSunAngle` 30° em torno de X; cor da luz do sol pelas curvas HSV (atores, static mesh, terreno, BSP).
- Modulação de luz dinâmica por `LightType` (Pulse 0,6+0,39·sen, SubtlePulse 0,9+0,09·sen, Flicker etc.); `bTimeLight` existe mas nenhum mapa liga (não ativar).
- Terreno: 8 mapas de intensidade por dia nas horas 1,5 + 3·i, mistura linear, atualização a cada 0,1 h de jogo.
- Neblina: nível pelo alcance de terreno das opções → `StartRange/EndRange` × 2048 unidades; `ZoneInfo` e `L2FogInfo` dos mapas.
- Cenário: luzes, sol/lua/céu (rolagem, lens flares), emissores, portas (`Mover` com `L2ServerObjectID`, estado pelos pacotes 0x4C/0x4D/0x99), `MovableStaticMeshActor` (oscilação por eixo), cinemáticas do lobby.
- Aceite: teste EditMode que compara, para as 96 horas de `env_golden.json` e os 4 ambientes, céu, sol, lua, ambientes, planos HSV, escalas, fase e direção do sol (cores exatas; floats com tolerância 1e-4); teste de que o inventário de cada mapa importado no Unity tem as mesmas contagens de luzes, emissores, movers e malhas animadas de `out\re\maps\<mapa>.json`; captura do mesmo ponto do mapa às 03h, 07h, 12h e 20h de jogo (comando de GM de hora no aCis) comparada com o original.

**P. Efeitos de skill e partículas** (09, `out\re\fx\*.json`)
- Efeitos: as classes de `lineageeffect.json` (defaults do ator e emissores, sobre `engine_defaults.json`), com as texturas e malhas dos pacotes de efeito.
- Disparo por fase (09 §2): `skill_visual_effect` do skillgrp → `SkillVisualEffect` (`skill_fx_map.json`), Casting no 1º tick, Shot no notify `AttackShot` com `SpecificStage`, Explosion na chegada do projétil, Channeling. Sem `skill_visual_effect`, usar a tabela legada `legacy_skill_fx.json` (09 §3).
- Posicionamento: `LocateEffect` (offset escalado pelo cilindro, Pitch=0, AttachOn, `CastingEffectScale`, `SpawnDelay`), duração do cast por `AdjustparticleLife`, rastro de espada (`RibbonSet`), efeitos de `weapongrp` e `Npcgrp`.
- Simulação (09 §4): `GetRand = Max+(Min−Max)·frand`, spawn por slots, `RelTime`, tabelas com `frac((Repeats+1)·RelTime)`, tamanho, cor e fade por `DrawStyle`, `SpeedRate`, `CoordinateSystem`, UV por subdivisão e o blending de cada `DrawStyle`.
- Aceite:
  - teste EditMode contra `fx_golden.json` (cor exata e floats com tolerância 1e-4);
  - teste de que cada skill de `skill_fx_map.json` e de `legacy_skill_fx.json` produz as mesmas classes por fase;
  - captura de 5 skills (uma de cada tipo: buff, projétil, área, golpe físico, canalização) comparada com o original.

## 6. Condição de parada

Pare somente quando:

1. todas as linhas da matriz estiverem `aprovado` com evidência (ou com decisão do usuário registrada nos itens do grupo N);
2. a suíte EditMode inteira passar;
3. o cenário ponta a ponta com o aCis passar: login → servidor → personagem → mundo → andar → chat com cada prefixo → abrir inventário/opções → mover janelas → sair. O `WindowsInfo.ini` e o `Option.ini` gravados pelo Unity devem bater com os do original;
4. as capturas das telas de login, servidor, lobby, criação, HUD e janelas principais baterem com o original nas duas resoluções.

Se ficar bloqueado (dado ausente, decisão do usuário, algo que só se observa executando o original), registre o bloqueio na matriz, faça a pergunta ao usuário e continue nos itens que não dependem dele. Ao final de cada volta, informe em poucas linhas: itens aprovados, divergências encontradas e corrigidas, e o que falta.
