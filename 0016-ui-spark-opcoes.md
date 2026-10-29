# #0016 — Opções (proposta antes do código)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-11-opcoes` |
| Estado | aberta |
| Spec | `04_opcoes_e_menus.md` (OptionWnd) |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Como as 6 abas de Opções do Spark convivem com a OptionWnd do xdat (e a versão do login, só Video e Audio).

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] **Primeiro passo:** proposta escrita neste arquivo (abas, controles, chaves, o que vem do xdat e o que é novo, versão do login). Código só depois da resposta do usuário; até lá **bloqueado: decisão do usuário**
- [ ] Video só aplica no Apply, exceto brilho e efeitos (prévia ao vivo); Cancel/X/Esc desfaz; Game Play e Chat gravam na hora; Reset só da aba atual
- [ ] A parte gráfica (URP, sombras, FSR, céu, clima) vira pedido à render
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
- `analises\spark-l2unity\hud\opcoes.md` (inteiro)

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
