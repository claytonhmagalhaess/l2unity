# Cobertura do mapeamento do cliente

O que foi mapeado do cliente, medido sobre inventários finitos extraídos dos próprios binários (os 11 módulos de código do cliente, `Interface.u`, `Interface.xdat`). "100%" aqui quer dizer que **todos os itens de cada inventário** foram ligados à sua função e classificados. A lista do que é observado e do que é inferido está no fim.

Binários analisados, decompilados no Ghidra 12.1.4 via REA (`out/re/rea_evidence_nwindow.json`, `out/re/rea_evidence_engine.json`) e headless (projetos persistentes em `ghidra_proj/l2engine`, `ghidra_proj/l2nwindow` e `ghidra_proj/l2mods`):

- `engine.dll`: base `0x10300000`, SHA-256 `4ec15a0e8d5d99e0af8dfcfbeda014b11b28e82986426a309c6429821ce5f219`, 45.804 funções.
- `NWindow.dll`: base `0x10000000`, SHA-256 `af6c3437f3ccf1b26af8b066e0bbd791c7909c94bd3c7d9e3c68c5edcfe059a7`, 24.783 funções (28 criadas a partir de entradas de vtable que o Ghidra não tinha reconhecido).
- `Core.dll`, `D3DDrv.dll`, `Window.dll`, `IpDrv.dll`, `L2.exe`, `ALAudio.dll`, `Fire.dll`, `WinDrv.dll`, `LineageCreature.dll`: 24.473 funções no total (tabela em 99).

## Inventários e cobertura

| Inventário | Total | Mapeado | Onde |
|---|---|---|---|
| Pacotes servidor → cliente (tabelas de despacho do `engine.dll`: login 13 + jogo 255 + Ex 93) | 361 | 361 (nome do cliente, tratador, efeito); 293 com formato de campos lido (os demais não têm campos ou são ignorados) | 94, 96 |
| Pedidos cliente → servidor (`UNetworkHandler::*` mais 2 envios do handshake) | 323 métodos | 237 enviam pacote; 245 envios, **todos** com opcode e formato; os 86 métodos restantes são consultas locais (`GetNearest*`, `GetPledgeInfo`, …) ou recursos vazios | 95 |
| Pacotes cliente → servidor do aCis (referência) | 216 | 208 enviados pelo cliente; os 8 restantes não estão implementados no cliente (respostas de guerra de clã e rendição, métodos vazios) ou têm outro sub-opcode (`RequestChangePartyLeader` = `RequestHandOverPartyMaster` 0xD0:0x04) | 95 |
| Ambiente: arquivos `Env.int` + `TimeEnv0..3.INT` | 5 | 5 decifrados e em JSON (`out/re/env/env_config.json`), com leitor e uso de cada chave no engine; valores de referência por hora em `env_golden.json` | 08 |
| Mapas `Maps/*.unr` | 158 (658.518 exports) | 158 lidos sem erro: contagem por classe e propriedades de todos os atores de luz, céu, neblina, água, partículas, movers, malhas animadas e cinemáticas (`out/re/maps/`) | 08 §8 |
| Pacotes de efeito (`lineageeffect.u`, `LineageKetraEffect.u`, `Rider_Effect.u`; os 3 `*HighEffect.u` são cifrados pelo servidor) | 886 classes, 3.828 emissores | 886 extraídas com defaults e emissores, 0 propriedades não decodificadas; 482 de 495 assets referenciados encontrados | 09 §1 |
| Skills com efeito visual (`skillgrp` → `skill.usk`) | 953 com `skill_visual_effect` + 477 ativas só pelo código legado | todas mapeadas por fase (`skill_fx_map.json`, `legacy_skill_fx.json`); 3 referências inexistentes no `skill.usk` | 09 §1, §3 |
| Eventos de UI `EV_*` ativos | 319 | 319 com origem classificada (tabela abaixo) | 90, 91, 96 |
| Funções `native` do `NWindow.u` | 817 | 817 com `exec*` exportado | 93 §3 |
| Funções `native` do `Engine.u` | 262 | 262 com `exec*` exportado | este documento |
| Callbacks do framework para o script (`NWINDOW_On*`) | 46 | 46 | 01, 93 §3 |
| Slots da vtable do console (`UL2ConsoleWnd`, classe derivada no NWindow) | 518 | 518; alinhamento com a vtable base do engine conferido em 44/44 slots não sobrescritos | `out/re/console_vtable.json` |
| Slots da vtable de `UGameEngine` | 484 | 484; 460 com nome exportado | `out/re/engine_ui_calls.json` |
| Chamadas ao despachante de eventos do NWindow | 358 | 357 com id lido do assembly; a restante é `execExecuteEvent`, que repassa o id vindo do script | 91 |
| Layout (`Interface.xdat`) | 140 janelas, 2.229 controles, 156 teclas, 56 posições padrão | 100% (o parser consome o arquivo inteiro) | 01, `out/re/layout/` |
| Código da interface (`Interface.u`) | 142 classes | 142 `.uc` extraídos | `export/uc/Interface` |
| **Funções de todos os módulos de código do cliente** (11 binários) | 95.058 | 95.058 com classe C++ e subsistema; 82.119 (86,4%) por evidência observada (nome exportado, RTTI, string de `guard` do Unreal, escrita de vtable em construtor/destrutor, funclet de exceção ou thunk), o resto com a classe por inferência marcada; 1.350 identificadas como código morto | 99 |
| Pseudocódigo de todas as funções (decompilação completa) | 95.058 | **95.058**: 88.153 em C, 6.903 thunks (registram o destino, cujo C está exportado) e 2 em P-code de alto nível (o decompilador em C cai nelas; estilo `normalize`); nenhuma sem saída | `out/re/decomp_all/<módulo>/` (blocos `.c` + `index.tsv`), `out/re/decomp_all/status.json` |
| Pares (pacote, evento) do mapa | 336 | **336 verificados instrução a instrução**: cada salto é um `call`/`jmp` de cauda real, uma chamada virtual registrada a `UGameEngine`/console ou o `push` do id antes do despachante; 198 de 198 pacotes de UI, 230 eventos | 88 |
| Controles das telas nativas (criados em C++, fora do xdat) | 83 em 19 telas | 83 com posição exata ou fórmula sobre o tamanho da tela (1 resolvida à mão e anotada), classe, id, texturas e rótulos por sysstring | 89 |
| Campos sem nome do `Interface.xdat` (`unk*` do esquema do acmi) | 64 | 64 com o nome do atributo XML original (leitor XML × serializador binário de cada `XML*Data`) | 01, `out/re/xdat_field_names.json` |
| Classes de controle nativo `NCWnd` (método `Draw`, slot 99 da vtable) | 168 | 142 desenham com primitivas do `UCanvas` identificadas; 26 têm `Draw` vazio (base, IME, linkers, viewport 3D); nenhuma sem classificação | 98 |

### Efeito dos 361 pacotes recebidos

| Efeito | Pacotes | Significado |
|---|---|---|
| UI | 198 | dispara `EV_*` para janelas do script (cadeia completa em 96) |
| mundo/engine | 57 | age no mundo (atores, animação, movimento, efeitos) via `UGameEngine::On*` ou funções nomeadas do engine, sem evento de UI |
| UI nativa (C++, sem `EV_`) | 61 | chama o console, que desenha direto em C++ (telas de login e servidor, HTML de NPC, diálogos nativos) |
| ignorado | 28 | tratador vazio `xor al,al; ret`: o cliente descarta o pacote (amigos, guerra de clã/aliança, brasão de aliança, block list…) |
| dados | 7 | só atualiza dados de objeto lidos depois (título, mensagem de loja, clã, posição da party) |
| log | 6 | só registra no log de rede (`DummyPacket`, `VehicleCheckLocation`, `ExRequestHackShield`) |
| rede | 2 | `PlayOk` (troca para o servidor de jogo) e `NetPing` (resposta) |
| debug | 1 | `ExServerPrimitive` (primitivas de depuração) |
| sem tratador | 1 | `ExDummyPacket` (0xFE:0x00) |

### Origem dos 319 eventos de UI

| Origem | Eventos | Como foi ligado |
|---|---|---|
| pacote do servidor | 230 | pacote → tratador → `UGameEngine::On*` → slot do console → NWindow → `EV_*` |
| engine fora de pacote | 26 | entrada (`UGameEngine::InputEvent` → comandos de teclado; `UInput::ExecJoyPad`), `ALineagePlayerController::Tick` (zona e minimapa), `FL2ReplayManager::Tick`, `WinDrv` (`ResolutionChanged` por `[Viewport+0x68]`→slot 0x510, `ShortcutJoypad`, `ReplayQuit` por `WM_SYSCOMMAND SC_CLOSE`), menu de reinício (`FUN_104bac30`), Tick do console (`ChatWndMacroCommand`). Todos com o chamador concreto (`out/re/event_origin_notes.json`) |
| UI nativa | 27 | emitidos pelo próprio NWindow (cliques, timers, natives chamadas pelo script; ex.: `ServerAgeLimitChange` por `NCServerSelectWnd` slot 125, `UserPetition` por `UUIScript::execExecuteCommand`) |
| script (`ExecuteEvent`) | 11 | disparados por outra janela do script |
| registrado, sem emissor neste build | 15 | a janela registra o evento, mas nenhum código o dispara (ex.: `EV_PartySpelledList`: o Interlude não mostra buffs da party) |
| sem uso | 10 | nem registrado nem disparado (ex.: `EV_LoginOK`, `EV_ShortcutPageUp`) |

## O que é observado e o que é inferido

**Observado** (lido do binário ou do dado):
- as tabelas de despacho e os nomes dos pacotes;
- os tratadores e as strings de formato;
- os opcodes e formatos dos envios;
- as vtables e o alinhamento entre elas;
- as vtables com RTTI MSVC de todos os módulos (`out/re/rtti_*.json`) e as estruturas `FuncInfo` que ligam cada funclet de exceção à sua função;
- o slot `Draw` de cada controle nativo e as primitivas do `UCanvas` que ele chama (98);
- os ids de evento em cada chamada ao despachante;
- os exports;
- o layout.

**Inferido pela ferramenta de cruzamento** (e depois verificado, ver 88):
- Pacote → evento é um fecho transitivo pelo grafo de chamadas do Ghidra, com as arestas virtuais de `UGameEngine` resolvidas. A profundidade vai até 3 no engine e até 6 no NWindow, e funções chamadas por mais de 60 outras não são expandidas.
- A profundidade fica registrada por evento em 96. De 0 a 3 a ligação é forte. Com profundidade maior, o evento pode vir de um ramo condicional do tratador (por exemplo, `SayPacket2` alcança `EV_PartyMatchChatMessage` e `EV_PetitionChatMessage`, que são os tipos de chat de party matching e petição).
- O rastreador de registradores é linear. Em métodos de `UGameEngine`, `[reg+0x68]` sem marca é tratado como o console. Assim ficam cobertos o idioma de `switch` com chamada compartilhada e o `this` recarregado da pilha.

**Verificado instrução a instrução (88):** os 336 pares (pacote, evento). A verificação prova que existe um caminho estático em que cada salto é uma instrução real; quando o tratador tem ramos (ex. tipos de chat), qual ramo roda depende do conteúdo do pacote em tempo de execução.

**Validado ponta a ponta à mão:**
- `CreatureSay` → `OnSay2` → slot 197 → `EV_ChatMessage` → `ChatWnd`;
- `AbnormalStatusUpdate` → `OnReceiveAbnormalStatus` → `EV_AbnormalStatusNormalItem`;
- `MultiSellList` → `OnAddVIPItemList`… → `EV_MultiSell*`;
- `StatusUpdate` → `OnHpUpdate`… → `EV_UpdateHP`/`MP`/`CP`;
- `Die` → `OnDie` → `EV_Die`;
- o handshake de login e de jogo (95);
- o envio e a recepção do chat (prefixos, tipo por aba, sussurro, anti-flood com as constantes, filtro de palavrões), o formato `param` com o `appStrfind` do `Core.dll`, `IsPKMode` e `IsDebuff` → coluna `debuff` do Skillgrp (93 §8).

**Inferido no mapa de funções (99):**
- `inferido`: classe majoritária entre chamadores e chamados no grafo do Ghidra (iterado até estabilizar). O código dessas funções está decompilado e no grafo; só o rótulo de classe é inferido, porque elas não têm símbolo, string de `guard`, entrada de vtable nem escrita de vtable;
- `vizinhanca`: classe da função vizinha na mesma unidade de compilação.
- As duas ficam marcadas função por função em `out/re/function_map_<módulo>.json`. O `D3DDrv.dll` é o módulo com menos evidência direta (52,7%), porque exporta poucos nomes: quase todo o código é de `UD3DRenderDevice`/`FD3DRenderInterface`, sem símbolo.
- Código morto: nenhuma chamada, nenhum ponteiro em dados ou código e nenhuma relocação no `.reloc`. O `L2.exe` não tem `.reloc`, então ali vale qualquer dword de qualquer seção que caia no `.text`, o que só pode marcar função a mais como viva.

**Não coberto (limites do método):**
- execução: uma sessão real foi observada de forma passiva (87): servidor aCis local, entrada no mundo, arquivos gravados; `WindowsInfo.ini` confirma `savePosition` em 47 de 47 janelas e `saveSize` em 6 de 6. O interior do processo (chamadas, pacotes decifrados, eventos) não foi rastreado, porque a proteção bloqueia a leitura de memória e esconde os módulos; contornar a proteção ficou fora de propósito;
- prosa: o pseudocódigo de todas as 95.058 funções está exportado (decompilação completa), mas a explicação em texto do algoritmo existe só para o que foi estudado e documentado (rede, ponte para a UI, chat, `param`, desenho e posição dos controles, layout, criptografia dos arquivos). O pseudocódigo do Ghidra é uma reconstrução, não o código-fonte original: nomes de variáveis e tipos locais são do decompilador;
- física, animação de personagens e render internos do engine: classe, método e pseudocódigo de cada função (99, `out/re/decomp_all/`), sem texto explicativo por algoritmo. O ambiente (relógio, curvas por hora, Sete Selos, sol e lua, luzes dinâmicas, sombras do terreno por hora, alcance da neblina, malhas animadas) está explicado em 08, que lista o que ainda falta ali (mistura do `L2FogInfo`, lightmaps de BSP e static mesh por hora, vento e Matinee). Os efeitos de skill e a simulação de partículas estão em 09, com as lacunas em 09 §6;
- 12.941 funções (13,6%) têm a classe só por inferência (grafo ou vizinhança de endereço);
- os acréscimos do servidor ficaram fora de propósito: `clmods.dll` (proteção empacotada), `entry.dll`, `wsock32.dll` (proxy de Winsock) e `Vmfx.dll` (UPX, carregado por um import acrescentado ao `Window.dll`). Foram identificados só por imports e exports; a proteção não foi revertida.
