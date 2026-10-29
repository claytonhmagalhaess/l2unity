# Especificação da interface do cliente Lineage II Interlude (para recriação)

Especificação da interface (HUD, janelas, teclado, eventos e protocolo) do cliente instalado em `C:\Program Files (x86)\Lineage II Interlude`, extraída do próprio cliente e validada no binário com REA/Ghidra. Objetivo: servir de base para recriar o cliente.

**Legenda usada em todas as seções:**
- **Observado:** está no código, no dado ou no binário (com `arquivo:linha` ou endereço).
- **Inferido:** dedução, com a base indicada.
- **A validar no nativo:** comportamento que vive em C++ e ainda não foi confirmado.

## Seções

| # | Arquivo | Conteúdo |
|---|---|---|
| 01 | [01_framework_e_fluxo.md](01_framework_e_fluxo.md) | Arquitetura da UI (xdat declarativo + UnrealScript + NWindow.dll), tipos de controle, âncoras, ciclo de vida (46 callbacks), modelo `param`, estados de UI, fluxo de telas, natives que enviam ao servidor |
| 02 | [02_chat.md](02_chat.md) | Chat: layout, 5 abas, 18 prefixos de canal, filtros e `chatfilter.ini` (seções trocadas!), 114 comandos `/`, roteamento das system messages, mensagens na tela |
| 03 | [03_minimapa.md](03_minimapa.md) | Minimapa normal e expandido, World Info, radar, título de zona, mapa de cidade; grade do mundo (32768), projeção do mapa-múndi, tiles `l2zonename`, `ZoneName`/`huntingzone` |
| 04 | [04_opcoes_e_menus.md](04_opcoes_e_menus.md) | OptionWnd (3 abas, 43 controles, chave INI de cada um), SystemMenuWnd, MenuWnd, RestartMenuWnd, diálogos, persistência (`Option.ini`, `l2.ini`, `user.ini`, `WindowsInfo.ini`) |
| 05 | [05_barra_de_atalhos_e_teclado.md](05_barra_de_atalhos_e_teclado.md) | Barra de atalhos (12×10, até 3 barras, joypad), drag & drop, recarga e toggle, soulshot automático; tabela completa de teclas por estado; trava de pedido do clique (`UGameEngine+0x64`, ActionFailed e recusas de ataque); Ações e Macros |
| 06 | [06_hud_status.md](06_hud_status.md) | Status do personagem, alvo, buffs/debuffs, grupo, pet/servo, Alt+T, Olimpíada, duelo, Seven Signs, pesca |
| 07 | [07_demais_janelas.md](07_demais_janelas.md) | Catálogo das cerca de 75 janelas restantes (inventário, comércio, lojas, armazém, augment, skills, quests, clã, manor, GM…) |
| 08 | [08_ambiente_iluminacao.md](08_ambiente_iluminacao.md) | Ciclo dia/noite (relógio, `Env.int`/`TimeEnv*.INT`, curvas por hora, céu dos Sete Selos), sol/lua, luzes dinâmicas, sombras do terreno por hora, neblina e inventário de animação de cenário dos 158 mapas |
| 09 | [09_efeitos_skill.md](09_efeitos_skill.md) | Efeitos visuais: 886 classes de efeito e 3.828 emissores extraídos; skill → `skill_visual_effect` → fases → ações; tabela legada de efeitos fixos no código (707 IDs); posicionamento, projéteis, rastro de espada; simulação de partículas UE2+L2 (spawn, update, cor/tamanho/fade, render e blending); valores de referência |
| — | [PROMPT_agente_unity.md](PROMPT_agente_unity.md) | Prompt para o agente que reescreve o cliente no Unity validar tudo isto em loop até a paridade com o original |
| 87 | [87_observacao_execucao.md](87_observacao_execucao.md) | Sessão em execução (passiva): proteção do processo, servidor aCis local, arquivos gravados; `WindowsInfo.ini` confirma `savePosition` (47/47) e `saveSize` (6/6) |
| 88 | [88_verificacao_cadeias.md](88_verificacao_cadeias.md) | Os 336 pares (pacote, evento) verificados instrução a instrução, com o endereço de cada salto |
| 89 | [89_telas_nativas.md](89_telas_nativas.md) | Layout das telas criadas em C++ (login, servidor, lobby, criação, carregamento, messenger): 83 controles com posição, id, texturas e rótulos |
| 90 | [90_catalogo_eventos.md](90_catalogo_eventos.md) | Os 322 eventos `EV_*`: quem registra, quem trata, chaves lidas |
| 91 | [91_eventos_nativos.md](91_eventos_nativos.md) | Os mesmos eventos vistos pelo nativo: função que dispara e chaves montadas (decompilação Ghidra) |
| 92 | [92_protocolo_opcodes.md](92_protocolo_opcodes.md) | Opcodes do protocolo de jogo Interlude (referência aCis 382): 272 pacotes servidor→cliente e 212 cliente→servidor |
| 93 | [93_validacao_nativa.md](93_validacao_nativa.md) | O que foi conferido no binário: formatos e criptografia, semântica das âncoras, API nativa completa, despacho de eventos, ponte engine → UI, tabelas nativas, itens não originais e lacunas |
| 94 | [94_pacotes_servidor_cliente.md](94_pacotes_servidor_cliente.md) | Os 361 pacotes que o `engine.dll` trata (login 13, jogo 255, Ex 93), com o nome que o próprio cliente dá a cada opcode e o tratador |
| 95 | [95_pacotes_cliente_servidor.md](95_pacotes_cliente_servidor.md) | Tudo o que o cliente envia: 245 envios (opcode, sub-opcode, formato), handshake de login e de jogo (revisão 746, chave Blowfish) |
| 96 | [96_mapa_pacote_evento_janela.md](96_mapa_pacote_evento_janela.md) | O mapa de ponta a ponta: pacote → formato lido → efeito → `UGameEngine::On*` → `EV_*` → janelas; e a origem de cada evento |
| 97 | [97_cobertura.md](97_cobertura.md) | Cobertura medida de cada inventário (pacotes, pedidos, eventos, natives, vtables, layout, funções, controles nativos) e o que é observado, inferido ou não coberto |
| 98 | [98_desenho_controles_nativos.md](98_desenho_controles_nativos.md) | Como cada um dos 168 controles nativos `NC*` se desenha: método `Draw` (slot 99) e primitivas do `UCanvas` |
| 99 | [99_mapa_funcoes.md](99_mapa_funcoes.md) | As 95.058 funções dos 11 módulos de código do cliente, cada uma com classe C++, subsistema e tipo de evidência; módulos de terceiros e do servidor excluídos |

## Visão geral da interface

```
Interface.xdat ──(layout declarativo: 140 janelas, 2.229 controles, 156 teclas, 56 posições padrão)──┐
                                                                                                    ▼
servidor ──pacote──► engine.dll (UNetworkHandler) ──► NWindow.dll ──EV_* + "Chave=Valor"──► Interface.u (142 classes .uc)
    ▲                                                   (controles nativos,                 │ OnEvent / OnClickButton / ...
    └──────────── Request* (UIScript natives, 817) ◄─────  desenho, ini)  ◄────── natives ──┘
```

- **Layout:** `System/Interface.xdat`. Cada controle tem tamanho absoluto ou percentual e uma âncora "ponto deste controle → ponto do alvo + (x, y)" (93 §2).
- **Lógica:** `System/Interface.u`. São 142 classes UnrealScript; o código-fonte original está dentro do pacote (TextBuffer) e foi extraído para `export/uc/Interface`.
- **Framework e controles:** `NWindow.u` (API) e `NWindow.dll` (implementação). Desenho de barras, ícones, minimapa, chat e recarga é nativo.
- **Dados de texto:** `sysstring-e.dat` e `systemmsg-e.dat` (rótulos e mensagens), `commandname`, `actionname`, `ZoneName`, `huntingzone`, todos Ver413 com a chave do `L2.exe`.
- **Texturas:** `SysTextures/L2UI_CH3.utx` e outros 15 pacotes. São 7.102 sprites, visíveis na aba "Sprites da UI" da ferramenta.

## HUD em jogo: resumo

| Elemento | Janela(s) | Pontos principais | Seção |
|---|---|---|---|
| Status (HP/CP/MP/EXP) | `StatusWnd` 176×84, canto superior esquerdo | barras 150×12 com textura fore/back/warn/regen; clique = selecionar a si mesmo | 06 |
| Alvo | `TargetStatusWnd` | cor do nome por diferença de nível (tabela nativa em 93 §5); MP só para não-mob | 06, 93 |
| Buffs/debuffs | `AbnormalStatusWnd` | ícones de 24 px, 12 por linha; Normal → Short/Etc | 06 |
| Grupo | `PartyWnd`/`PartyWndCompact` | 8 slots; botão de buffs com 3 estados; clique direito = assist | 06 |
| Pet/servo | `PetStatusWnd`/`SummonedStatusWnd` | fome no pet × tempo restante no servo | 06 |
| Barra de atalhos | `ShortcutWnd` | 12 slots × 10 páginas, até 3 barras, vertical/horizontal/joypad; recarga nativa (`l2_skilltime`) | 05 |
| Chat | `ChatWnd` 348×187, canto inferior esquerdo | abas All/+Trade/#Party/@Clan/$Alliance; prefixos `! " # @ + $ % & * ~` e crase | 02 |
| Minimapa e radar | `MinimapWnd`, `MinimapWnd_Expand`, `RadarContainerWnd` | abre por pedido ao servidor (`RequestOpenMinimap`); 2 níveis de zoom (mundo/cidade); dia/noite; armas amaldiçoadas | 03 |
| Menus | `MenuWnd` (canto inferior direito), `SystemMenuWnd` (Esc), `RestartMenuWnd` (morte) | 4 botões + submenus; 7 itens no menu do sistema; 5 pontos de ressurreição | 04 |
| Opções | `OptionWnd` | Vídeo, Áudio e Jogo; sem aba de teclado | 04 |

## Como as evidências foram geradas (e como regenerar)

| Saída | Comando |
|---|---|
| Código UnrealScript (`export/uc/<Pacote>/*.uc`) | `python -I scripts/extract_uc.py "<cliente>/System/Interface.u" export/uc/Interface` (idem `NWindow`, `UWindow`, `Engine`, `Core`) |
| Layout xdat (`out/re/interface_layout.json`) | `python -I scripts/xdat_parse.py "<cliente>/System/Interface.xdat" out/re/interface_layout.json` |
| Árvore legível por janela (`out/re/layout/*.txt`, `_shortcuts.txt`, `_wnddefpos.txt`) | `python -I scripts/xdat_tree.py out/re/interface_layout.json out/re/layout` |
| Decifrar Ver413 (`.dat`/`.ini`) | `python -I scripts/l2dec413.py <entrada> <saida>` |
| Textos (`out/re/strings.json`) | `python -I scripts/sysstr_dump.py export/client_cfg/sysstring-e.dat.bin export/client_cfg/systemmsg-e.dat.bin out/re/strings.json` |
| System messages completas (`out/re/systemmsg_full.json`) | `python -I scripts/systemmsg_parse.py export/client_cfg/systemmsg-e.dat.bin out/re/systemmsg_full.json` |
| Zonas (`out/re/zonename.tsv`, `huntingzone.tsv`) | `python -I scripts/zonename_parse.py export/client_cfg/ZoneName-e.bin > out/re/zonename.tsv` (idem `huntingzone_parse.py`) |
| Eventos no script (`out/re/events_script.json`, seção 90) | `python -I scripts/events_catalog.py export/uc out/re/events_script.json docs/client_spec/90_catalogo_eventos.md` |
| Decompilação dos emissores de eventos (`out/re/nwindow_events.c`) | `analyzeHeadless <proj> nwin -import NWindow.dll -scriptPath ghidra_scripts -postScript ExtractUIEvents.java out/re/nwindow_events.c 0x100d1790 -deleteProject` (use um caminho sem parênteses) |
| Cruzamento nativo × script (`out/re/native_events.json`, seção 91) | `python -I scripts/native_events.py out/re/nwindow_events.c export/uc out/re/native_events.json docs/client_spec/91_eventos_nativos.md` |
| Opcodes do protocolo, referência aCis (seção 92) | `python -I scripts/acis_packets.py ext/src/acis docs/client_spec/92_protocolo_opcodes.md` |
| Projeto Ghidra persistente do engine/NWindow | `analyzeHeadless ghidra_proj l2engine -import engine.dll` (e `l2nwindow`); depois `-process <dll> -noanalysis` com `CreateFuncsAt.java out/re/packet_handlers.txt`, `ExportCallGraph.java`, `ExtractFuncsByName.java "^UNetworkHandler::"` |
| Tabelas de pacotes recebidos (94) | `python -I scripts/packet_table.py <engine.dll> docs/client_spec/92_protocolo_opcodes.md out/re/packet_table.json docs/client_spec/94_pacotes_servidor_cliente.md` |
| Pedidos ao servidor (95) | `python -I scripts/request_table.py <engine.dll> out/re/engine_networkhandler.c docs/client_spec/92_protocolo_opcodes.md out/re/request_table.json docs/client_spec/95_pacotes_cliente_servidor.md` |
| Desmontagem (entrada dos varredores) | `llvm-objdump -d --no-show-raw-insn -M intel --section=.text engine.dll > engine_text.asm` (idem `NWindow.dll`) |
| Ids de evento por chamada (assembly) | `python -I scripts/nwindow_event_sites.py nwindow_text.asm out/re/nwindow_callgraph.tsv export/uc out/re/nwindow_event_sites.json` |
| Vtable do console e ponte de slots | `python -I scripts/vtable_bridge.py "<cliente>/System" out/re/native_events.json out/re/console_vtable.json` |
| Chamadas engine → UGameEngine/console | `python -I scripts/ui_call_scan.py <engine.dll> engine_text.asm out/re/engine_callgraph.tsv out/re/engine_ui_calls.json` |
| Formatos dos pacotes recebidos | `python -I scripts/packet_formats.py <engine.dll> engine_text.asm out/re/engine_callgraph.tsv out/re/packet_table.json out/re/packet_formats.json` |
| Mapa final e cobertura (96) | `python -I scripts/game_map.py out/re export/uc docs/client_spec` (usa também `out/re/packet_notes.json`, anotação manual dos 16 tratadores especiais) |
| Formatos dos pacotes recebidos (tratadores) | ver linha anterior; anotações manuais em `out/re/packet_notes.json` e `out/re/event_origin_notes.json` |
| Demais módulos no Ghidra (`ghidra_proj/l2mods`, `out/re/<modulo>_callgraph.tsv`) | `analyzeHeadless ghidra_proj l2mods -import <pasta com Core/WinDrv/D3DDrv/Window/IpDrv/ALAudio/Fire/LineageCreature/L2.exe> -recursive -postScript ExportCallGraphDir.java out/re` |
| Vtables com RTTI (`out/re/rtti_<modulo>.json`) | `python -I scripts/rtti_vtables.py <dll> out/re/rtti_<modulo>.json` |
| Mapa de funções de um módulo (`out/re/function_map_<modulo>.json`) | `python -I scripts/function_map.py <dll> <modulo>_text.asm out/re/<modulo>_callgraph.tsv out/re/rtti_<modulo>.json out/re/function_map_<modulo>` |
| Pseudocódigo de todas as funções (`out/re/decomp_all/`) | `analyzeHeadless ghidra_proj <projeto> -process <dll> -noanalysis -readOnly -postScript DecompileAll.java out/re/decomp_all`; falhas: `DecompileRetry.java <saida.c> 600 [style:normalize] <endereços>`; status: `python -I scripts/decomp_status.py out/re` |
| Ambiente (08): `out/re/env/`, `out/re/maps/`, `out/re/maps_resumo.json` | `python -I scripts/env_parse.py "<cliente>/system" out/re/env/env_config.json`; `python -I scripts/env_golden.py out/re/env/env_config.json out/re/env/env_golden.json`; `python -I scripts/unr_inventory.py "<cliente>/Maps" out/re/maps`; pseudocódigo por nome: `python -I scripts/decomp_get.py out/re engine '<regex>'` |
| Efeitos (09): `out/re/fx/` | `python -I scripts/fx_parse.py "<cliente>/System" out/re/fx`; `python -I scripts/fx_map.py . "<cliente>"`; `python -I scripts/legacy_fx_table.py bin/engine.dll out/re/fx/legacy_skill_fx.json`; `python -I scripts/fx_golden.py out/re/fx` |
| Documento 99 | `python -I scripts/function_map_doc.py out/re docs/client_spec/99_mapa_funcoes.md` |
| Verificação das cadeias (88) | `python -I scripts/verify_chains.py engine_text.asm nwindow_text.asm out/re docs/client_spec/88_verificacao_cadeias.md` |
| Telas nativas (89) | `python -I scripts/native_screen_layout.py <NWindow.dll> nwindow_text.asm out/re docs/client_spec/89_telas_nativas.md` |
| Nomes dos campos do xdat | `python -I scripts/xdat_field_names.py nwindow_text.asm out/re <classe XML*Data>` (lista leitor × serializador); `python -I scripts/xdat_field_names_table.py out/re` grava `out/re/xdat_field_names.json` |
| Desenho dos controles nativos (98) | `ExtractCallTree.java` sobre os `Draw` de `out/re/nc_draw_methods.json` → `out/re/nc_draw_all.c`; depois `python -I scripts/nc_draw_map.py out/re docs/client_spec/98_desenho_controles_nativos.md` |
| Sprites da UI (`out/tool/ui/`, `out/tool/ui_data.js`) | `python -I scripts/build_ui_sprites.py . "<cliente>"` |

Referências externas usadas: o esquema "ct0" do xdat_editor de acmi (`ext/src/xdat_schema_ct0`, `ext/src/xdat_commons`) e o servidor aCis 382 (`ext/src/acis`), este só como referência de protocolo e marcado como tal.

## Ordem sugerida para recriar

1. **Base de dados e formatos:** leitores Ver111/Ver413, xdat (layout), sysstring/systemmsg, texturas (já exportadas). Sem isso nada renderiza com os textos e as posições certas.
2. **Framework de janelas:** âncoras (93 §2), tamanhos percentuais, estados de UI, `param` "Chave=Valor", os 46 callbacks, foco/teclado, drag & drop, tooltips, `WindowsInfo.ini` (01, 93 §5).
3. **Barramento de eventos:** os eventos `EV_*` com as chaves das seções 90/91, ligados aos pacotes da seção 92.
4. **HUD essencial para jogar:** Status, Alvo, Buffs, Barra de atalhos + teclado, Chat, Minimapa, Menu/Esc/Restart (02–06).
5. **Janelas de sistema** em ordem de uso: inventário → skills → ações/macros → comércio/lojas/armazém → grupo/clã → quests → o resto (07, que tem a prioridade de cada uma).
6. **Telas fora do jogo** (login, servidor, lobby, criação): são nativas e não estão no xdat (01 §3, 93 §7); os pacotes que as alimentam estão em 94–96.

## Limites desta especificação

- **Controles nativos:** o desenho de cada controle está mapeado até a primitiva do `UCanvas` e o formato de texto (98), e o posicionamento dos controles das telas criadas em C++ está em 89. Os parâmetros exatos de cada chamada de desenho (cores, margens) vêm do xdat e do estado do controle e não foram tabelados um a um.
- **Eventos e pacotes:** todos os 319 eventos têm origem concreta e todos os 361 pacotes têm efeito classificado (96, 97). Os 336 pares (pacote, evento) foram verificados instrução a instrução (88). Qual ramo de um tratador roda depende do conteúdo do pacote.
- **Funções:** todas as 95.058 funções do código próprio do cliente têm classe e subsistema (99), 86,4% por evidência observada. O algoritmo interno de cada uma (física, animação, render) não foi escrito função por função; as exceções são o ambiente (dia/noite, iluminação e animação de cenário), descrito em 08, e os efeitos de skill e o sistema de partículas, descritos em 09.
- **Layout:** todos os campos do `Interface.xdat` têm nome; os 64 que o esquema do acmi deixava como `unk*` receberam o nome do atributo XML original (01).
- Este cliente é **modificado pelo servidor** (93 §6). Valores exportados de `Option.ini`/`systemmsg` não são os padrões oficiais. `clmods.dll`, `entry.dll`, `wsock32.dll` e `Vmfx.dll` são acréscimos do servidor e ficaram fora de propósito.
- Execução: uma sessão passiva foi observada (87). A proteção do cliente bloqueia leitura de memória e esconde os módulos, então o interior do processo não foi rastreado em execução.
