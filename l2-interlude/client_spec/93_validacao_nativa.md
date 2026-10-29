# Validação no binário (REA + Ghidra)

Esta seção registra o que foi conferido diretamente nos binários do cliente instalado em `C:\Program Files (x86)\Lineage II Interlude`, e não apenas no código UnrealScript. Cada item diz o que foi observado, onde e com que ferramenta. As seções 01–07 citam estes resultados.

- **Ferramentas:** REA (`rea-agents`, provedor Ghidra 12.1.4 em sessão headless) e Ghidra `analyzeHeadless` com o script `ghidra_scripts/ExtractUIEvents.java` para extração em lote.
- **Pacote de evidências do REA:** `out/re/rea_evidence_nwindow.json` (19 registros, com IDs de evidência, perfil de análise e limitações de cada consulta).
- **Alvo principal:** `System/NWindow.dll`, x86, base `0x10000000`, SHA-256 `af6c3437f3ccf1b26af8b066e0bbd791c7909c94bd3c7d9e3c68c5edcfe059a7`, 25.383 funções e 10.621 strings definidas pelo Ghidra. A extração em lote usou uma cópia byte a byte idêntica (mesmo SHA-256), porque o `analyzeHeadless.bat` não aceita os parênteses de `(x86)` no caminho.

Legenda: **Observado** = está no binário ou dado; **Inferido** = dedução, com a base indicada; **Não localizado** = procurado sem resultado, com o limite da busca indicado.

## 1. Formatos de arquivo e criptografia

| Arquivo | Formato | Como abrir | Status |
|---|---|---|---|
| `System/*.u`, `*.int`, `Localization.ini`, `TTFontInfo.ini` | `Lineage2Ver111`: cabeçalho UTF-16 de 28 bytes + XOR `0xAC` byte a byte | `scripts/extract_uc.py` (pacotes `.u`) | Observado: depois do XOR o pacote começa com a assinatura UE2 `0x9E2A83C1`, versão 123 |
| `System/user.ini`, `l2.ini`, `*.dat` | `Lineage2Ver413`: blocos RSA de 128 bytes + zlib + cauda de 20 bytes | `scripts/l2dec413.py` | Observado: decifra com o **módulo embutido no `L2.exe`** (`75b4d6de…2039`, expoente `0x1D`), não com a chave original da NCsoft |
| `System/Interface.xdat` | Binário sem criptografia, esquema "ct0" (Interlude) do xdat_editor de acmi | `scripts/xdat_parse.py` | Observado: o parser consome 534.247 bytes mais a cauda de 20, ou seja, o arquivo inteiro. O esquema bate byte a byte com este cliente |
| `Textures/*.utx`, `SysTextures/*.utx` e `SysTextures/*.bmp` | `Lineage2Ver121` | umodel (`ext/umodel_dl`); [O] `FL2FileDecryptArchive` (L2.exe 0x1090b6xx): XOR de cada byte depois dos 28 do cabeçalho com o byte baixo de `FUN_10906720`(nome) = soma dos caracteres do nome (de trás até `\` ou `/`, A–Z somados como minúsculas). Versões 111 = 0xAC; 121 = nome; as outras fora de 211/212/311/411–413 ficam com chave 0 (o Ver821 de pacotes customizados não é decifrado) | Observado: 7.102 texturas de UI exportadas (aba "Sprites da UI"); 646 `.utx` e 22 `.bmp` conferidos pelo `FileFormatTests` do Unity |

A chave original da NCsoft (módulo `97df3984…2d83`, `e=0x35`) também está no `Core.dll` e no `engine.dll`, mas não decifra nenhum `.dat`/`.ini` deste cliente. Para recriar o cliente, os arquivos de dados têm de ser lidos com a chave do `L2.exe`, ou reempacotados.

## 2. Layout: semântica da âncora no xdat

**Observado**, por geometria. O esquema de acmi chama o 1º int da âncora de `anchor_parent`, mas ele é o ponto **do próprio controle**; o 2º é o ponto do controle-alvo.

- `DialogBox.NumberPad.num2`: TOP_LEFT preso ao TOP_RIGHT de `num1`, com x=+1. Isso coloca `num2` à direita de `num1`.
- `num4`: TOP_LEFT preso ao BOTTOM_LEFT de `num1`, com y=+1. Isso coloca `num4` abaixo de `num1`.

O resultado é o teclado 3×3 que a calculadora desenha. Com os rótulos de acmi, o teclado ficaria invertido. O `ChatFilterWnd` e os botões Quest, Tutorial e Mail confirmam a mesma leitura: a âncora `BOTTOM_LEFT -> ChatWnd.TOP_LEFT` com y=−5 os coloca acima do chat. `scripts/xdat_parse.py` já grava `anchor.this` (ponto próprio) e `anchor.parent` (ponto do alvo) nessa ordem corrigida. Dois agentes chegaram ao mesmo resultado de forma independente.

## 3. API nativa da UI

- **Observado:** as 817 `native function` declaradas em `NWindow.u` (`export/uc/NWindow/*.uc`) têm implementação `exec<Nome>` exportada pelo `NWindow.dll`; nenhuma falta (exports: `out/re/nwindow_exports.txt`). A API do script está completa no binário.
- **Observado:** o `NWindow.dll` exporta os 46 callbacks que o framework chama nas classes de script (`NWINDOW_On*` e `UUIScript::eventOn*`; lista em `out/re/nwindow_script_callbacks.txt`). Eles batem 1:1 com os eventos de `UIScript.uc` (ver 01 §1.3.2).
- **Observado:** o `engine.dll` exporta 325 métodos nomeados de `UNetworkHandler` (todos os `Request*`/`Send*`/`Say2` do cliente) e a máquina de estados da UI em `UL2ConsoleWnd` (`GetState` → enum `L2ConsoleState`, `ExecLobbyEvent`, `MoveCameraByState`…). Lista em `out/re/engine_network_and_console.txt` (nomes MSVC sem desmembrar).

## 4. Eventos: do nativo para o script

O `NWindow.dll` entrega todos os eventos `EV_*` ao script por uma única função interna, **`FUN_100d1790(id, param)`**.

- Antes da chamada, o parâmetro é montado com `FUN_10040090(chave, int)` e `FUN_10040230(chave, string)`, com chaves wide-string.
- A função tem 303 chamadores diretos, todos decompilados em `out/re/nwindow_events.c`. A tabela cruzada está em `91_eventos_nativos.md` e em `out/re/native_events.json`.

| Medida | Valor |
|---|---|
| Eventos `EV_*` ativos no script (sem os `//const` comentados) | 319 |
| Disparados por algum ponto nativo do NWindow (ids lidos do assembly; ver §4.2) | 283 |
| Disparados pelo próprio script (`ExecuteEvent`) | 11 (`EV_DialogOK/Cancel`, `EV_MacroShowEditWnd`, `EV_OlympiadBuffShow`, `EV_RecipeShowRecipeTreeWnd` e 6 do Manor) |
| Chamadas com id não resolvido estaticamente | 1, a própria `execExecuteEvent`, que repassa o id do script |
| Eventos em que todas as chaves lidas pelo script aparecem na função nativa | **97 de 111** (as divergências são chaves indexadas montadas em tempo de execução, como `RoomName_`+n, ou chaves montadas em funções auxiliares) |

### 4.1 Exemplo totalmente validado: `EV_ChatMessage` (540 = `0x21C`)

Função `FUN_101392c0`, observada no C decompilado:

- `Type` (int) = tipo de chat; `Msg` (string) = texto. A chave `L"Msg"` fica em `DAT_1027c6f8` e foi lida do PE, porque o Ghidra não define strings curtas.
- `ColorR`/`ColorG`/`ColorB` são extraídos da cor ARGB recebida.
- `SysType` só é enviado quando `Type == 5`, isto é, mensagem de sistema.
- Depois do despacho, se `GL2TextCapture == 2`, o texto vai para o log de chat.
- O `ChatWnd.uc` lê exatamente essas chaves. A falta de `break` no `case EV_ChatMessage` (o fluxo cai em `HandleIMEStatusChange`) é do script original, não do nativo.

### 4.2 Resolvido: os 60 eventos "sem emissor"

A lacuna da primeira versão era um artefato do decompilador, não do binário. O padrão de despacho em código de máquina é:

```
push <param>      ; FString "Chave=Valor ..."
push <id EV_*>
call 0x10005c30   ; getter do gerenciador de eventos (não consome a pilha)
mov  ecx, eax
call 0x100d1790   ; despacha (thiscall)
```

Há uma variante com o gerenciador no global `[0x1035786c]`: `push param; push id; call 0x100d1790`. O Ghidra atribui os dois `push` ao getter e, em muitos pontos, mostra `FUN_100d1790()` sem argumentos. Por isso os ids passaram a ser lidos da desmontagem (`scripts/nwindow_event_sites.py`): 357 de 358 chamadas foram resolvidas, e a restante é `execExecuteEvent`. Resultado: 283 eventos têm emissor no NWindow.

A ligação até o engine também foi mapeada (§4.3 e `96_mapa_pacote_evento_janela.md`). A origem de **todos os 319 eventos** está classificada em `97_cobertura.md`: 230 vêm de pacote do servidor, 26 do engine fora de pacote (entrada, tick), 27 da UI nativa, 11 do script, 15 são registrados mas sem emissor neste build, e 10 não têm uso.

### 4.3 Ponte engine → UI (validada)

Cadeia: `pacote` → tratador (tabelas de despacho em `UNetworkHandler::Tick`, `FUN_104218b0`: login `PTR_10a572c0`, jogo `PTR_10a57310`, Ex `PTR_10a67610`, entradas de 0x104 bytes `{tratador, nome}` preenchidas por um inicializador estático) → `GE->vtbl[x]`, em que GE = `[[0x10b1f538]+0x54]` = **`UGameEngine`** (vtable exportada, 484 slots, 460 com nome `On*`) → `[GE+0x68]->vtbl[y]` (ou `GL2Console`) = slot do console `UL2ConsoleWnd` → sobrescrita no NWindow → `EV_*`.

Exemplo validado: `CreatureSay` (0x4A) → `FUN_10414ab0` → `UGameEngine::OnSay2` (GE `0x414`) → console `0x314` (slot 197) → `FUN_10163d90` → `FUN_101392c0` → `EV_ChatMessage`.

## 5. Comportamentos nativos conferidos

| Item | Função | Resultado |
|---|---|---|
| Cor do nome do alvo por diferença de nível | `UUIDATA_TARGET::execGetTargetNameColor` (`0x1012a950`) | **Observado**, tabela ARGB: `<−8` `FFFF0000` · `−8..−6` `FFFF9191` · `−5..−3` `FFFAFE91` · `−2..+2` `FFDCDCDC` · `+3..+5` `FFA2FFAB` · `+6..+8` `FFA2A8FC` · `>+8` `FF0000FF`. O `LevelDiff` vem pronto do nativo (`TargetStatusWnd.uc:110`). **Inferido:** é nível do jogador − nível do alvo, já que vermelho = alvo muito mais forte |
| Gravação de `WindowsInfo.ini` | `FUN_1014d380` | **Observado:** para cada janela móvel grava `[Nome] posX/posY`; para as redimensionáveis, `width/height`. Janela sem nome usa um número como seção, o que explica as seções `[1]`..`[8]` (**inferido:** abas destacadas do chat). Por fim grava `Height` e chama `GConfig->Flush("WindowsInfo.ini")` |
| `IsPKMode` | `UUIScript::execIsPKMode` (`0x100f5560`) | **Observado:** só delega ao método virtual `+0x590` de um objeto global da engine (`DAT_103663bc`); o `NWindow` não fixa tecla nenhuma. A tecla (normalmente Ctrl) fica a validar no engine |
| `IsDebuff(skill, nível)` | `UUIScript::execIsDebuff` (`0x10100fd0`) | **Observado:** consulta `FUN_10164a20(skillID, nível)`, uma tabela de dados de skill, e não uma lista fixa no código |
| Recarga e toggle de skills na barra | strings e classes `NCCooltimeManager`/`NCCoolTimeIcon` | **Observado** (05): o pacote `l2_skilltime` (`Rotation_Type.cooltime%d` com 360 quadros, `CooltimeEnd00%d`, `ToggleEffect001`, som `itemSound.cooltime_end`) é desenhado pelo nativo, e por isso não aparece no xdat nem no script |
| Tabela de prefixos de chat | dados em `0x10350e18` | **Observado** (02): 18 pares (ASCII e largura total) |

## 6. Itens que não são do Interlude original

Ao recriar o cliente "original", deixe estes itens de lado ou trate-os como recursos do servidor:

- `clmods.dll` (11 MB): empacotado e assinado, com poucas importações e 1 export. **Inferido:** proteção ou anti-cheat do servidor. Fora do escopo da UI; não foi analisado.
- `entry.dll` e `wsock32.dll` (proxy de Winsock) no `System`: **inferido:** parte da mesma proteção ou rede do servidor.
- `UNetworkHandler::RequestSEKCustom` no `engine.dll`, mais o pacote de texturas `sek.utx` (305 sprites `cbui*`): extensão personalizada (**observado** pelo nome; o uso ficou a validar).
- `Option.ini` com seções `[Neophron]`, `[AutoEnchant]`, `[Potions]` e `[Key]`, e chaves `Is3/Is4ExpandShortcutWnd`: nenhum `.uc` as lê (04, 05).
- `systemmsg-e.dat` com textos alterados por terceiros (ids até 6104, textos de fortaleza, palavrões em sm71/73/74/100). Use os textos oficiais.
- A chave RSA dos `.dat`/`.ini` (§1) é a do `L2.exe` deste cliente, não a da NCsoft.

## 7. Itens que estavam a validar no nativo

Consolidado das seções 01–07. Situação atual de cada item:

1. **Emissores dos eventos:** resolvido. Os 319 eventos têm origem concreta (§4.2, §4.3, 96, `out/re/event_origin_notes.json`).
2. **Desenho dos controles nativos:** mapeado até a primitiva do `UCanvas` e os formatos de texto nos 168 controles `NC*` (98); o posicionamento dos controles criados em C++ está em 89. Os parâmetros numéricos de cada chamada de desenho (cores, margens) vêm do xdat e do estado do controle e não foram tabelados um a um.
3. **Envio do chat:** resolvido (§8.1).
4. **Formato do `param`:** resolvido (§8.2). `ID` não casa dentro de `ServerID`.
5. **Telas nativas fora do jogo:** resolvido (89). As 19 telas e subjanelas (login, OTP, KeyCrypt, servidor, lista de servidores, lobby, criação, carregamento, messenger, visualizador de NPC) têm todos os controles transcritos do assembly: classe, id, `SetRect`/âncora/tamanho (constantes ou fórmula sobre a tela, ex. login em `W/2−128, H/2−64`, botões da criação em `W/2−88, H−100`), texturas e rótulos por sysstring. Um valor (x do OK do aviso do KeyCrypt = 65) foi resolvido à mão no assembly e está anotado.
6. **Campos `unk` do xdat:** resolvido (01 §1.2.2 e §1.2.4, `out/re/xdat_field_names.json`). Os 64 campos têm o nome do atributo XML original, cruzando o leitor XML (slot 1) com o serializador binário (slot 25) de cada classe `XML*Data`.
7. **`IsPKMode` e `IsDebuff`:** resolvidos (§8.3).

## 8. Semântica nativa confirmada na decompilação

Fontes: `out/re/nwindow_semantics.c`, `nwindow_semantics2.c`, `nwindow_chatsend.c`, `nwindow_pkmode.c`, `nwindow_obscene.c`, `core_appstrfind.c`, `engine_skillgrp.c`, `engine_obscene_refs.c`, e o assembly do `NWindow.dll`.

### 8.1 Envio e recepção do chat

`UUIScript::execProcessChatMessage(texto, aba)` → `FUN_1013c310`:

- **Classificação** (`FUN_101358a0`): se o 1º caractere não é `/` nem `／`, é chat (0x20000000). Senão, `FL2GameData::GetCommandType` (tabela `commandname`) dá o comando: 0x10000000/0x10000001 vão para `FUN_101382a0`, e qualquer outro id vai para o switch de comandos `FUN_1013a320`.
- **Macros de texto** (`FUN_10137b70`, conferido no assembly): o texto é lido em tokens pelo `FParser` do Engine
  (separadores `" \u3000\n\t\r={}$"`, colchetes agrupam e somem) e cada token igual a `%target`, `%self`, `%pet` ou
  `%party1..8` (`FUN_10135a20`, `appStricmp`) vira o nome; essa função devolve 1 quando substituiu (0x10135af2) e 0 quando
  não (0x10135bc0). Saída: o 1º token (com `$` na frente se o texto começa com `$`: `"%s%s"` se foi macro, `"%s %s"` se
  não), depois cada token com `" "` antes, **exceto quando o token anterior foi macro substituída** (fica colado:
  `oi %target eu` → `oi Alvoeu`). Sem nenhuma substituição o texto volta inalterado. `%partyN` sem membro esvazia o token
  mas devolve 0; `%target`/`%self` sem objeto e `%pet` sem nome ficam como estão.
- **Tipo padrão pela aba** (só com `GIsOldChat == 0`): aba 0 → 0 (geral), 1 → 8 (comércio), 2 → 3 (party), 3 → 4 (clã), 4 → 9 (aliança).
- **Prefixos** (tabela `0x10350e18…`, cada um em ASCII e na forma de largura total): `!` 1 grito, `"`/`＂`/`”` 2 sussurro, `#` 3 party, `@` 4 clã, `&` 6 e `*` 7 petição, `+` 8 comércio, `$` 9 aliança, `%` 0x11 voz de herói, duas crases 0xF e uma crase 0x10 (canais da sala de party matching), `~` 0 força o geral. O prefixo é removido do texto (2 caracteres no caso das duas crases).
- **Sussurro:** o alvo vai do caractere seguinte ao prefixo até o primeiro espaço (U+0020 ou U+3000), e a mensagem começa depois desse espaço. Sem alvo, o texto vai com tipo 2 e alvo vazio.
- **Limite de tamanho:** 100 caracteres, imposto pelo campo de edição (`ChatEditBox maxLength=100` no xdat). O envio não trunca.
- **Envio:** `FUN_10141990(tipo, texto, alvo)` empilha num `L2ParamStack` e chama o slot `0x2B0` do console no engine (pedido `Say2`, 95). Com `GIsOnlyL2Console`, só ecoa localmente.
- **Anti-flood** (`console+0x228`, construtor `FUN_10136b70`, verificação `FUN_10138860`, decaimento `FUN_10137d30`):
  - a cada mensagem: `pontuação += int(60·tamanho + 100 + 0,1·pontuação)`;
  - histórico de mensagens com pontuação própria: uma mensagem idêntica (`appStrcmp`, diferencia maiúsculas) soma `int(0,1·p + 2000)` à sua entrada; uma mensagem nova entra no histórico com 2000;
  - a pontuação geral ou a de alguma entrada acima de **20000** bloqueia o chat e mostra as mensagens de sistema 964 ("Chatting is prohibited for one minute.") e 1078 (explicação da pontuação). Enquanto durar o bloqueio, cada envio é recusado com a 966;
  - o timer `0xF017` roda a cada **1000 ms** e tira 200 da pontuação e de cada entrada, sem ficar abaixo de 0. Quando a pontuação e todas as entradas ficam ≤ **10000**, o bloqueio cai e aparece a 965 ("The chatting prohibition has been removed.");
  - o campo 100000 do construtor não é lido nos trechos analisados.
- **Filtro de palavrões** (`FUN_1014cff0`, lista `Obscene` do `obscene-e.dat` em `FL2GameData+0x3D1C`, carregada por `FL2GameData::ObsceneDataLoad` com registros `{int, string}`):
  - o texto é copiado em minúsculas (só A–Z); cada palavra da lista encontrada por `appStrstr` (substring) é trocada no texto original pela máscara em `FL2GameData+0x6CB8C`, repetindo até não sobrar ocorrência. A máscara é a **sysstring 740** (`-_-ㆀ` neste cliente): a tabela de sysstrings começa em `FL2GameData+0x6A8DC` com entradas `FString` de 12 bytes (`FL2GameData::SysStringLoad`), e (0x6CB8C − 0x6A8DC) / 12 = 740;
  - o filtro é aplicado **na recepção** (slot 197 do console = `OnSay2`, `FUN_10163d90`, incondicional), no apelido de clã, nas palavras de herói, no nome de pet, na sala de party e nos comandos `/`. O chat **enviado** não é filtrado no cliente;
  - em sussurros recebidos (tipo 2), o remetente entra na lista de respostas (`FUN_101394d0`).

### 8.2 Formato do `param` ("Chave=Valor")

- **Escrita** (`execParamAdd` → `FUN_1003fb30`): se o `param` não está vazio, acrescenta `' '`; depois `chave`, `'='`, 0x7F, valor e 0x7F. Ou seja, todo valor escrito pelo nativo fica entre 0x7F e pode conter espaços.
- **Leitura** (`execParseString`/`execParseInt` → `FUN_1003fc20`): `appStrfind(param, chave)`; a ocorrência só vale se o caractere seguinte for `=`, senão a busca continua. O valor termina no próximo 0x7F, se começar por 0x7F, ou senão no primeiro espaço; no máximo 4096 caracteres. Chave vazia ou `param` vazio = não encontrado.
- **`appStrfind` do `Core.dll`** (decompilado em `0x10103ea4`): não diferencia maiúsculas de minúsculas e só aceita uma ocorrência cujo caractere anterior **não** seja `[A-Za-z0-9]`. Por isso `ID` não casa dentro de `ServerID` (o `r` anterior é alfanumérico), mas casaria em `Server_ID` ou dentro de um valor como `0x7F…a ID=3…0x7F`, porque a busca não pula valores entre 0x7F.

### 8.3 `IsPKMode` e `IsDebuff`

- **`IsPKMode()`:** `[console]->slot 356 (0x590)` = `FUN_1014ce50`. Devolve 1 se **Ctrl** (VK 0x11) estiver pressionado, consultado por `UInput::KeyDown` no viewport, ou se a flag `console+0x50E4` estiver ativa. Com `GLanguageType == 0` (coreano), devolve 0 enquanto o IME compõe (slot 0x6C). `DAT_103663bc` é o próprio console (gravado no slot 387).
- **`IsDebuff(id, nível)`:** `FL2GameData::GetMSData(id, nível)` (tabela de skills `Skillgrp.dat`/`Skillgrp.txt`, carregada por `MSItemDataLoad`) e devolve `registro+0x4C != 0`. O campo `+0x4C` é a coluna **`debuff`** do Skillgrp; as demais colunas lidas são `skill_id`, `skill_level`, `icon`, `operate_type`, `is_magic`, `mp_consume`, `hp_consume`, `cast_range`, `hit_time`, `animation`, `cast_style`, `skill_visual_effect`, `enchanted`, `enchant_skill_level`, `rumble_self` e `rumble_target`.
