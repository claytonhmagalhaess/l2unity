# #0024 — Interface P166 e Tryskell: o que falta no l2unity

| Campo | Valor |
|---|---|
| Vaga | analises (sem worktree; escreve só em `analises\`) |
| Branch | nenhum: commits direto em `analises` (`main`) |
| Estado | aberta |
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

- [ ] `analises\interface-p166\00_indice.md`: como a P166 e o Tryskell estão organizados, o que cada documento cobre e como reproduzir as buscas.
- [ ] `analises\interface-p166\01_janelas.md`: uma linha por janela (`*Wnd.uc` e equivalentes) com versão (Interlude ou posterior), evidência, estado no `l2unity` (feito, parcial ou falta) e o arquivo do `l2unity` correspondente.
- [ ] `analises\interface-p166\02_interacoes.md`: para cada janela do Interlude, o que acontece em:
  - passar o mouse (tooltip de item, skill, buff, atalho, alvo, membro de grupo, botões; campos e ordem do conteúdo; atraso; posição);
  - clique esquerdo, clique direito e clique duplo;
  - arrastar e soltar (inventário, atalhos, depósito, troca, lixeira);
  - clique com Shift, Ctrl ou Alt;
  - roda do mouse e redimensionar ou mover a janela.

  Cada linha leva o handler na fonte (`arquivo.uc:linha` ou função do `.c`) e o estado no `l2unity` com o arquivo.
- [ ] `analises\interface-p166\03_teclado.md`: todas as teclas e combinações padrão (Alt+letra, Ctrl+letra, F1–F12, Enter, Esc, Tab, setas, teclas de chat e de câmera). Cada uma leva a origem (`.ini`, `.int`, `.uc` ou `.c`), o que faz e o estado no `l2unity`.
- [ ] `analises\interface-p166\04_engine_core.md`: o que `Engine`, `Core`, `NWindow` e as DLLs do Tryskell fornecem à interface (eventos nativos, funções `native` chamadas pelos `.uc`, controles e desenho), comparado com o que o `l2unity` já cobre em `L2Events` / `L2EventIds` / `UiEvents`.
- [ ] `analises\interface-p166\05_lacunas_e_tarefas.md`: lacunas do Interlude ordenadas por impacto no jogo. Cada uma vira uma proposta de tarefa por vaga (`ui`, `net`, `render` ou `world`), com o pacote do servidor de que depende, quando houver, e o tamanho estimado.
- [ ] Divergências com a `client_spec`: corrigidas na spec quando a evidência for clara, ou listadas como "a validar" no `05`.
- [ ] Commits em `analises` com a evidência em cada mensagem. As pastas `Interface_P166\` e `system_Tryskell_RE\` não entram no git (113 MB de fonte de terceiros e DLLs). Nenhuma alteração em `l2unity\`, `reference\`, `shared\` ou `C:\Workspace-java`.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** não se aplica (tarefa de análise).
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

Nenhum por enquanto.
