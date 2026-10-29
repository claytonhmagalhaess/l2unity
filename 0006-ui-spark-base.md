# #0006 — Base de interação da HUD (Spark)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-01-base` |
| Estado | aberta |
| Spec | `01_framework_e_fluxo.md`, `98_desenho_controles_nativos.md` |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Modelo único de clique, foco, Esc, tooltip, sons e trazer-para-frente que todas as janelas do porte usam.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Slot: botão 0 no down; Shift num slot de inventário = link do item no chat (consome o evento); senão intervalo > 300 ms = clique simples e ≤ 300 ms = duplo (`L2ClickableSlot.HandleSlotClickDown/Up`). Flags +0x68/+0x69 = disparar no UP em vez do down (não são "rightClickEnabled")
- [ ] Botão do meio: o modelo reconhece o gesto (down e up), mas nenhuma ação destrutiva é ligada — **bloqueado: decisão do usuário** (ver #0010)
- [ ] Cadeia do Esc (`CheckUIInputs`): ignorado durante captura de tecla → chat com foco: fecha o chat → senão HideWindow no último popup aberto → sem popup: ClearTarget (RequestCancel 0x37). Não cancela cast
- [ ] Trazer janela para frente com MouseDown em qualquer ponto dela (BringToFront: **a validar** — a regra exata não tem evidência)
- [ ] Alt+L: todas as janelas na posição padrão (WndDefPos/xdat) + chat no tamanho padrão, com a mensagem do Spark ("The interface was reset to the default layout."), registrando a divergência com o Interlude
- [ ] Sons de interface com o volume das Opções: click_03 no PointerDown de todo slot, click_01 nos botões, window_open ao trocar de aba, open/close próprios de inventário, ficha e menu de sistema, game_start ao entrar (mapeados para os sons do Interlude; o que não existir fica a validar)
- [ ] Tooltip ao entrar/sair do slot (`TooltipManipulator`); o atraso fica **a validar**
- [ ] Ponteiro sobre a UI bloqueia o clique no mundo (`MouseOverUI`): a UI expõe o estado e a ligação no clique do mundo vira pedido (App.cs/world)
- [ ] Cada comportamento implementado tem teste EditMode em `Assets/L2Web/Tests/Editor` que simula o evento (clique, tecla, arrasto, pacote recebido) e confere o efeito na UI ou os bytes do pacote montado
- [ ] Entrega com a tabela **comportamento Spark → onde ficou no l2unity (`arquivo:linha`) → teste**, uma linha por comportamento desta tarefa
- [ ] Itens sem evidência no decompilado do Spark nem na spec do Interlude aparecem como **a validar**, com o que falta, sem valor inventado
- [ ] Divergências Interlude × Spark registradas em "Decisões e REA"; o comportamento do Interlude fica valendo até o usuário confirmar o do Spark
- [ ] Nenhum pacote exclusivo do servidor Spark é enviado (decisão 3): o gesto existe, sem envio, marcado "pendente de decisão"
- [ ] Nada copiado do Spark (UXML, USS, texturas, código decompilado): uGUI montado em código no estilo de `Scripts/UI`; layout e texturas do `Interface.xdat`/spec do Interlude
- [ ] `sh Docs/tools/run_tests.sh` sem falhas novas; total de testes na Entrega

## Fontes

- `analises\spark-l2unity\hud\README.md` (inteiro; §1 arquitetura, §3 comportamento)
- `analises\spark-l2unity\hud\events.md`, `hud\code_summaries.md`, `hud\code\*.c` (confirmar cada detalhe)
- `analises\spark-l2unity\raw\InputActionAsset_strings.txt`

## Observações da coordenadora

- As tarefas #0007–#0021 dependem desta base: os componentes precisam ser reutilizáveis (slot, popup, tooltip, som).

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

## Decisões e REA

<!-- Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

## Entrega

- **Commits:** 
- **Testes:** 
- **Tabela comportamento Spark → l2unity → teste:** 
- **Falta / fora do escopo:** 

## Pedidos

- <!-- links para pedidos\NNNN-....md abertos por esta tarefa -->
