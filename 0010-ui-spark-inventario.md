# #0010 — Inventário

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-05-inventario` |
| Estado | aberta |
| Spec | `07_demais_janelas.md` (InventoryWnd) |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Seleção, uso e arrasto de itens do inventário com os pacotes do Interlude.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Clique seleciona (desmarca o anterior); duplo clique usa (UseItem 0x14); receita pede "Register X in your recipe book?"
- [ ] Arrastar para o paperdoll equipa (pacote do equipar por arrasto **a validar**)
- [ ] Arrastar para a lixeira: confirmação ou quantidade, depois RequestDestroyItem 0x59
- [ ] Arrastar para cristalizar: RequestCrystallizeItem 0x72
- [ ] Arrastar para fora/chão: RequestDropItem 0x12 com o ponto do raycast (raycast e ponto = pedido à world)
- [ ] Reordenar entre slots: RequestInventoryUpdateOrder 0x10
- [ ] Botão do meio = destruir sem confirmação no Spark: **bloqueado: decisão do usuário**; não ligar
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
