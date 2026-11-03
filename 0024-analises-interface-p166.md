# #0024 — Interface P166 e Tryskell: o que falta no l2unity

| Campo | Valor |
|---|---|
| Vaga | analises (sem worktree; escreve só em `analises\`) |
| Branch | nenhum: commits direto em `analises` (`main`) |
| Estado | pronta p/ revisão |
| Spec | `analises\l2-interlude\client_spec\00_indice.md`; UI em `01`–`07`, `89`, `90`, `91`, `96`, `98` |
| Sessão | analises: interface P166 e lacunas |
| Criada | 2026-11-03 |

## Objetivo

Levantar, a partir da fonte UnrealScript da interface (`analises\Interface_P166\`) e do pseudocódigo das DLLs do cliente (`analises\system_Tryskell_RE\`), tudo o que a interface do jogo faz e o que o `l2unity` (`main`) ainda não faz. A atenção principal fica nas interações: o que aparece ao passar o mouse, o que cada botão do mouse e cada tecla faz em cada janela. O resultado é um inventário com evidência e uma lista de tarefas proposta. Nada é implementado nesta tarefa.

## Fontes

- `analises\Interface_P166\`: fonte da interface. `Interface\Classes\` tem 460 `.uc` de janelas e scripts. `Engine\Classes`, `Core\Classes` e `NWindow\Classes` têm as classes base e a API nativa que a interface chama. `Engine\Inc` e `NWindow\Inc` têm os cabeçalhos. `System\` tem os `.u`, `.int` e `.ini` compilados.
- `analises\system_Tryskell_RE\`: 28 `.c` do pseudocódigo das DLLs (`engine.c`, `Core.c`, `Window.c`, `nwindow.c`, `l2.c`, `LineageCreature.c`, `IpDrv.c` e outras), mais `engine.unpacked.dll` e `orc.unpacked.dll`.
- Base de comparação: `analises\l2-interlude\` (spec e REA do Interlude original) e `reference\l2-interlude\client\system\Interface.u` (somente leitura, não execute nada de `reference\`).
- Estado atual do cliente: `l2unity\` no `main`, somente leitura. A UI fica em `Assets\L2Web\Scripts\UI\`. Os eventos estão em `L2Events.cs`, `L2EventIds.cs`, `UiEvents.cs` e `PacketEvents.cs`, as teclas em `L2Input.cs`, `L2Shortcuts.cs` e `L2Commands.cs`, e os tooltips em `UiTooltip.cs`, `GameTip.cs` e `ItemInfoText.cs`. As regras da área estão em `Assets\L2Web\Scripts\UI\CLAUDE.md`.

## Cuidado com a versão

A P166 é uma interface de versão bem posterior ao Interlude: tem janelas de Alquimia, Arena, Ability e outras que o Interlude não tem. O `l2unity` é Interlude (aCis). Cada janela e cada interação precisa ser marcada como **existe no Interlude** ou **posterior**. A evidência vem do `Interface.u` do `reference\l2-interlude`, da `client_spec` ou dos pacotes do aCis (somente leitura em `C:\Workspace-java\aCis_gameserver`). O que for posterior entra no inventário, mas fica fora da lista de tarefas, a menos que o comportamento também valha para o Interlude.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [x] `analises\interface-p166\00_indice.md`: como a P166 e o Tryskell estão organizados, o que cada documento cobre e como reproduzir as buscas.
- [x] `analises\interface-p166\01_janelas.md`: uma linha por janela (`*Wnd.uc` e equivalentes) com versão (Interlude ou posterior), evidência, estado no `l2unity` (feito, parcial ou falta) e o arquivo do `l2unity` correspondente.
- [x] `analises\interface-p166\02_interacoes.md`: para cada janela do Interlude, o que acontece em:
  - passar o mouse (tooltip de item, skill, buff, atalho, alvo, membro de grupo, botões; campos e ordem do conteúdo; atraso; posição);
  - clique esquerdo, clique direito e clique duplo;
  - arrastar e soltar (inventário, atalhos, depósito, troca, lixeira);
  - clique com Shift, Ctrl ou Alt;
  - roda do mouse e redimensionar ou mover a janela.

  Cada linha leva o handler na fonte (`arquivo.uc:linha` ou função do `.c`) e o estado no `l2unity` com o arquivo.
- [x] `analises\interface-p166\03_teclado.md`: todas as teclas e combinações padrão (Alt+letra, Ctrl+letra, F1–F12, Enter, Esc, Tab, setas, teclas de chat e de câmera). Cada uma leva a origem (`.ini`, `.int`, `.uc` ou `.c`), o que faz e o estado no `l2unity`.
- [x] `analises\interface-p166\04_engine_core.md`: o que `Engine`, `Core`, `NWindow` e as DLLs do Tryskell fornecem à interface (eventos nativos, funções `native` chamadas pelos `.uc`, controles e desenho), comparado com o que o `l2unity` já cobre em `L2Events` / `L2EventIds` / `UiEvents`.
- [x] `analises\interface-p166\05_lacunas_e_tarefas.md`: lacunas do Interlude ordenadas por impacto no jogo. Cada uma vira uma proposta de tarefa por vaga (`ui`, `net`, `render` ou `world`), com o pacote do servidor de que depende, quando houver, e o tamanho estimado.
- [x] Divergências com a `client_spec`: corrigidas na spec quando a evidência for clara, ou listadas como "a validar" no `05`.
- [x] Commits em `analises` com a evidência em cada mensagem. As pastas `Interface_P166\` e `system_Tryskell_RE\` não entram no git (113 MB de fonte de terceiros e DLLs). Nenhuma alteração em `l2unity\`, `reference\`, `shared\` ou `C:\Workspace-java`.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->
- 2026-11-03 — Levantamento das fontes: P166 (460 `.uc`, cliente Classic 166), Tryskell (DLLs do Interlude com os mesmos endereços do NWindow de referência) e inventário da UI do l2unity no `main`.
- 2026-11-03 — `00_indice` e `01_janelas`, com os scripts (`0184ff2`).
- 2026-11-03 — `02_interacoes` (`fd7547e`).
- 2026-11-03 — `03_teclado` (`7addf8e`).
- 2026-11-03 — `04_engine_core` (`0aa9441`).
- 2026-11-03 — `05_lacunas_e_tarefas` (`e2d1833`).
- 2026-11-03 — Correções na `client_spec` 01, 02, 05 e 07 (`08a19ac`).

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->
- Observado: o Tryskell é Interlude. Os asserts apontam para `d:\work\interlude\2007_05_23` (`nwindow.c:7671`), e o `nwindow.c` tem os mesmos endereços do `NWindow.dll` de referência (ex. `FUN_1002eb00` = `NCItemWnd::<virtual 104>` nos dois). Os endereços servem nos dois, e os nomes vêm do `function_map_nwindow.json`.
- Observado: a P166 é um cliente Classic de 2016 (`System\UCC.log:5-6`). Conta como "Interlude" a classe homônima no `Interface.u` exportado em `tools\l2anim\export\uc\Interface` (142 classes) ou a janela do xdat (140). As variantes `*Classic` contam como equivalentes, não como prova.
- Observado: no Interlude, hover, tooltip, arrasto, roda e modificadores são nativos. Não há `OnMouseOver` nem `IsKeyDown` nos 142 `.uc` (`scripts\scan_uc.py`).
- Observado:
  - o tooltip aparece sem atraso, acima do slot (`0x10072da0`, `0x10054680`);
  - Alt no início do arrasto move a pilha toda (`0x1002eb00`);
  - o clique direito no atalho só alterna o auto-shot (`0x100477f0`);
  - arrastar de um slot para outro troca os dois (`0x100480c0`);
  - a opção EnterChatting decide se letras e dígitos são atalho ou chat (`0x101734e0`).

  Detalhes no 02 e no 03.
- Observado: 10 ids de `EV_*` mudaram na P166 (ex. `EV_RequestTooltipInfo` 2920 → 2960). Não copiar id de evento da P166.
- Observado: cancelar buff com clique (`RequestDispel`) e link de item com Shift+clique são posteriores: não há pacote no aCis.
- Decisão: a tabela do 01 tem uma linha por classe (inclusive apoio, idioma e ferramenta), para cumprir "uma linha por janela" sem filtrar à mão. O resumo separa as janelas de jogo.

## Entrega

- **Commits** (`analises`, `main`): `0184ff2` (00, 01 e scripts), `fd7547e` (02), `7addf8e` (03), `0aa9441` (04), `e2d1833` (05) e `08a19ac` (correções na `client_spec` 01, 02, 05 e 07).
- **Janelas:** 496 linhas no 01, das quais 460 são classes da P166, 15 são classes só do Interface.u IL e 21 são janelas só do xdat IL.
  - **Interlude:** 179 linhas. São 163 janelas de jogo, das quais 13 estão feitas, 33 parciais e 117 faltam no l2unity; as outras 16 são apoio, idioma ou ferramenta.
  - **Posteriores:** 317 linhas: 248 janelas (73 delas GFx) e 69 de apoio, idioma ou ferramenta.
- **Interações do Interlude:**
  - 7 mecanismos nativos: tooltip, arrasto, roda, modificadores, barra de atalhos, moldura e despacho por slot;
  - 22 tipos de tooltip;
  - cerca de 55 janelas com handler descrito no 02 §3;
  - no teclado: as 118 entradas do GamingState, 7 outros estados, 17 ligações do `user.ini` e 9 teclas dentro das janelas.
- **Interações posteriores:** 11 grupos no 02 §4 (entre eles cancelar buff, link de item, Alt+duplo clique, menu de contexto, `OnDropWnd`, Esc fechando a janela e cerca de 27 tipos novos de tooltip), mais o 03 §6.
- **Lacunas mais importantes:**
  1. DialogBox sem NumberPad, do qual dependem todas as perguntas de quantidade.
  2. Inventário: faltam o clique direito, arrastar, lixeira, largar no mundo, cristalizar e Alt.
  3. Tooltips só de texto, com atraso e posição diferentes do original.
  4. Barra de atalhos: o clique direito apaga, quando no original só alterna o auto-shot; falta arrastar entre slots e para fora.
  5. Comércio de duas listas.
  6. Armazém.
  7. Pet e servo.
  8. Macros.
  9. Regra do EnterChatting e as teclas que faltam.
  10. Cliques pequenos: o StatusWnd não seleciona a si mesmo; a skill é usada com duplo clique em vez de clique simples.

  São 21 propostas de tarefa no 05 §2 (T1–T21), com vaga, pacotes e tamanho.
- **Testes:** não se aplica (tarefa de análise).
- **Falta / fora do escopo:** nada foi implementado (é análise). Ficou a validar (05 §4):
  - a tecla que gera os códigos 3, 4 e 5 do chat (responder ao sussurro, percorrer os nomes);
  - se o caractere que deu foco ao chat entra no texto;
  - o efeito de `IsLockShortcutWnd` no arrasto;
  - a diferença entre `DrawTooltip` e `DrawSimpleTooltip`, e o valor de `TOOLTIP_MINIMUM_WIDTH`;
  - o passo da roda em `NCItemWnd`, `NCListCtrl` e `NCHtmlViewer`;
  - se o `RequestUseItem` manda o Ctrl;
  - o que o nativo fecha no Alt+W;
  - o pacote do `RequestSelfTarget`;
  - se o `engine.unpacked.dll` do Tryskell equivale ao `engine.dll` de referência;
  - o mouse para canhoto.

  As pastas `Interface_P166\` e `system_Tryskell_RE\` continuam fora do git.

## Pedidos

Nenhum por enquanto.
