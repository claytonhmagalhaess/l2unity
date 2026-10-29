# #0012 — Janelas da HUD (Status, Target, Buff, Party, menus, Exit, Restart)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-07-janelas-hud` |
| Estado | fazendo |
| Spec | `06_hud_status.md`, `04_opcoes_e_menus.md` |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Comportamento de clique e hover das janelas fixas da HUD.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Status: clique = alvo em si; Shift+clique = RequestAction 0x04; HP pisca quando baixo
- [ ] Target: cor do nome pela diferença de nível; fechar = RequestCancel 0x37
- [ ] Buff: Alt+clique só como gesto (cancelar buff é pacote do Spark: pendente de decisão); tamanho do ícone
- [ ] Party: hover mostra buffs (atraso **a validar**), clique abre o menu do membro (itens **a validar**), clique fora fecha, Alt+F alterna Buffs/Debuffs/Canções/Nada
- [ ] SystemMenu (itens **a validar**), Exit (Restart 0x46, Exit 0x09, resumo da sessão), RestartPoint 0x6D; itens do MenuWindow **a validar**
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
