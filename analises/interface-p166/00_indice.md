# Interface P166 e Tryskell: o que falta no l2unity (tarefa #0024)

Levantamento da interface do jogo a partir de duas fontes novas: a fonte UnrealScript de uma interface posterior ao Interlude (`analises\Interface_P166\`) e o pseudocódigo das DLLs de um cliente Interlude (`analises\system_Tryskell_RE\`). As duas foram comparadas com o `l2unity` (`main`, 2026-11-03). Foco nas interações: mouse em cima, cliques, arrastar e soltar, modificadores, roda e teclado.

Legenda (a mesma da `client_spec`): **[O]** observado (com `arquivo:linha` ou endereço), **[I]** inferido (com a base), **[V]** a validar.

## 1. Documentos

| # | Arquivo | O que cobre |
|---|---|---|
| 00 | este | organização das fontes, documentos e como reproduzir |
| 01 | [01_janelas.md](01_janelas.md) | uma linha por classe da P166, mais as classes e janelas só do Interlude (496 linhas): versão, evidência, estado e arquivo no l2unity |
| 02 | [02_interacoes.md](02_interacoes.md) | mecanismos nativos de mouse (tooltip, arrasto, roda, modificadores, barra de atalhos); conteúdo do tooltip por tipo; tabela por janela do Interlude; o que só a P166 faz |
| 03 | [03_teclado.md](03_teclado.md) | caminho de uma tecla no nativo; as 118 entradas do GamingState e os outros estados; `user.ini`; teclas dentro das janelas; o que só a P166 tem |
| 04 | [04_engine_core.md](04_engine_core.md) | o que Engine, Core, NWindow e as DLLs entregam à UI (callbacks, `EV_*`, natives, controles) × `L2Events`/`L2EventIds`/`UiEvents`/`PacketEvents` |
| 05 | [05_lacunas_e_tarefas.md](05_lacunas_e_tarefas.md) | 21 lacunas do Interlude por impacto; 21 propostas de tarefa por vaga, com pacotes e tamanho; correções feitas na spec; itens a validar |

Por onde começar: 05 §1 (o que falta) e 02 §1 (como o original se comporta).

## 2. As fontes

### 2.1 `Interface_P166\` (fora do git, só leitura)

| Pasta | Conteúdo |
|---|---|
| `Interface\Classes\` | 460 `.uc` de janelas e scripts. 262 estendem `UICommonAPI`, 77 são GFx (`L2UIGFxScript`, `GFxUIScript`, `L2UIGFxScriptNoneContainer`) e 28 são variantes de idioma (`LoadingWnd_*`, `ReplayLogoWnd_*`) |
| `NWindow\Classes\` | 134 classes da API nativa (2.073 `native`), entre elas `UIScript.uc`, `UIEventManager.uc` (1.209 `EV_*`), `WindowHandle.uc`, `InputAPI.uc` |
| `NWindow\Inc\NWindowClasses.h`, `Engine\Inc\EngineClasses.h` | cabeçalhos C++ gerados (12.683 e 10.079 linhas) |
| `Engine\Classes\` (270), `Core\Classes\` (6) | classes base do UE2 com as extensões L2 |
| `System\` | só as ferramentas de compilação (`UCC.exe`, `Make_Interface.bat`, `Core/Engine/Editor.dll/.u/.int`, `l2.ini`, `User.ini`). **Não traz `Interface.xdat`, `Interface.int` nem `user.ini`** |

[O] **Versão.** É um cliente **Classic** (protocolo 166). O `System\UCC.log:6` mostra a pasta de origem `fafurion classic secret of empire166`, e o `UCC.log:5`, `Compiled: May 14 2016`. As classes `*Classic` (`ClanWndClassic`, `DetailStatusWndClassic`…) confirmam. É muito posterior ao Interlude (2007), por isso cada janela e interação foi marcada como Interlude ou posterior (01 §1).

### 2.2 `system_Tryskell_RE\` (fora do git, só leitura)

28 `.c` (pseudocódigo Ghidra) de `engine`, `Core`, `nwindow`, `Window`, `WinDrv`, `IpDrv`, `l2`, `LineageCreature`, `D3DDrv`, `ALAudio`, `Fire` e das bibliotecas de terceiros (`msxml4`, `ogg`, `vorbis`, `openal32`…), mais `engine.unpacked.dll` (30 MB) e `orc.unpacked.dll`.

- [O] **É Interlude.** Os asserts apontam para `d:\work\interlude\2007_05_23\warfare2110\core\inc\UnTemplate.h` (`nwindow.c:7671`, `engine.c:12236`).
- [O] **O `nwindow.c` tem os mesmos endereços do `NWindow.dll` de referência.** Exemplo: `FUN_1002eb00` aparece no `nwindow.c` (`:45873`) e no índice `analises\l2-interlude\re\decomp_all\nwindow\index.tsv`, e é `NCItemWnd::<virtual 104>` no `function_map_nwindow.json`. O mesmo vale para `FUN_101734e0` (`NConsoleWnd::HandleKeyboardInput`), `FUN_100480c0` (`NCShortcutItemWnd::OnDropItem`) e as demais citadas no 02 e no 03. Por isso os endereços `nw:0x…` servem nos dois, e os nomes vêm do `function_map`.
- [I] Para o NWindow, o Tryskell é uma segunda decompilação do mesmo binário. Ele foi útil aqui porque traz os nomes exportados nas funções `exec*` (ex. `UUIScript::execUseSkill`, `nwindow.c:230582`) e permite ler sem abrir o Ghidra. [V] Se o `engine.unpacked.dll` equivale ao `engine.dll` de referência (05 §4).

### 2.3 Base de comparação (só leitura)

- `reference\l2-interlude\client\system\Interface.u`: as 142 classes já exportadas em `tools\l2anim\export\uc\Interface\`, `NWindow\` (87), `Engine\` e `Core\`. Neste levantamento, "Interlude" quer dizer essa fonte.
- `analises\l2-interlude\client_spec\`: spec 01 (framework), 02 (chat), 05 (atalhos e teclado), 06 (HUD), 07 (janelas), 89, 90, 91, 92/95 (opcodes), 98.
- `C:\Workspace-java\aCis_gameserver\java\net\sf\l2j\gameserver\network\clientpackets\` (191 pacotes): serve para dizer se um pedido existe no Interlude (ex. não há `RequestDispel`).
- `l2unity\Assets\L2Web\Scripts\` no `main`: a UI fica em `UI\`. `L2Events.cs`, `L2EventIds.cs`, `UiEvents.cs`, `PacketEvents.cs`, `L2Input.cs`, `L2Shortcuts.cs`, `L2Commands.cs`, `UiTooltip.cs`, `GameTip.cs` e `ItemInfoText.cs` também estão em `UI\`. O teclado e o mouse no mundo ficam em `App.cs:2456-2710`.

## 3. Achados principais

1. [O] No Interlude, hover, tooltip, início de arrasto, roda e modificadores são **nativos**. O script não tem `OnMouseOver`, não lê Shift/Ctrl/Alt e não trata teclas (02 §1).
2. [O] Tooltip sem atraso, acima do slot, com o conteúdo montado no script uma vez por item (02 §1.2). O l2unity usa 0,5 s, posição no cursor e só texto.
3. [O] **Alt** no início do arrasto move a pilha toda (`AllItemCount`), em todas as janelas de itens (02 §1.3). Estava [N] na spec.
4. [O] Na barra de atalhos, o clique direito só alterna o soulshot automático; arrastar slot → slot troca; soltar fora apaga (02 §1.6). O l2unity apaga com o clique direito e liga o automático com Ctrl+clique.
5. [O] A opção "Enter Chat" decide se letras e dígitos são atalhos ou vão para o chat (`HandleKeyboardInput`, 03 §1). Estava [I] na spec.
6. [O] 10 eventos `EV_*` mudaram de id entre o Interlude e a P166 (ex. `EV_RequestTooltipInfo` 2920 → 2960). O l2unity usa os ids certos, os do Interlude (04 §3).
7. Lacunas maiores: DialogBox com NumberPad, interações do inventário, tooltips de verdade, comércio de duas listas, armazém, pet e servo, macros (05).

## 4. Como reproduzir

Scripts em `analises\interface-p166\scripts\` (Python 3, sem dependências; rodar com `-I`, a partir da raiz do workspace):

| Saída | Comando |
|---|---|
| Callbacks `On*`, `IsKeyDown`/`IK_*`, tooltips e roda por classe, nas duas versões (JSON) | `python -I analises\interface-p166\scripts\scan_uc.py tools\l2anim\export\uc\Interface analises\Interface_P166\Interface\Classes <saida.json>` |
| Corpo de handlers com o número de linha | `python -I analises\interface-p166\scripts\body.py <arquivo.uc> OnDropItem,OnDBClickItem,...` |
| Tabela do 01 (versão, evidência e estado) | `python -I analises\interface-p166\scripts\classify_windows.py . <saida.md>` |

Buscas feitas à mão (Git Bash, na raiz do workspace):

- Função do NWindow pelo endereço: `grep -n "^[a-zA-Z_][^;]* FUN_1002eb00(" analises/system_Tryskell_RE/nwindow.c`; nome e classe em `analises/l2-interlude/re/function_map_nwindow.json` (chave `"0x1002eb00"`).
- Slots virtuais por classe: filtrar `method` com `<virtual N>` no `function_map_nwindow.json` (02 §1.1).
- Natives por classe nas duas versões: regex `^\s*native\b[^(]*?(\w+)\s*\(` sobre `tools\l2anim\export\uc\NWindow` e `Interface_P166\NWindow\Classes` (04 §1).
- Ids de evento: regex `const\s+(EV_\w+)\s*=\s*(\d+)` nos dois `UIEventManager.uc` (04 §3).
- Modificadores na P166: `grep -n "IsShiftPressed\|IsCtrlPressed\|IsAltPressed\|IsKeyDown" analises/Interface_P166/Interface/Classes/*.uc`.
- Pacote no aCis: `ls C:/Workspace-java/aCis_gameserver/java/net/sf/l2j/gameserver/network/clientpackets | grep -i <nome>`.
- Os `.uc` da P166 estão em CP949: `iconv -f cp949 -t utf-8 -c <arquivo>` para ler os comentários.

Nada aqui executa binário de `reference\`, as DLLs ou o `UCC.exe` da P166.
