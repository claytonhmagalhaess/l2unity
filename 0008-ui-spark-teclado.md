# #0008 — Teclado remapeável

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-03-teclado` |
| Estado | fazendo |
| Spec | `05_barra_de_atalhos_e_teclado.md` |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Atalhos de teclado com os padrões do Spark, remapeáveis, com duas teclas por ação e persistência.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Padrões: I/Tab/Alt+V inventário, Alt+T ficha, C ações, K skills, X menu do sistema, U quests, N clã, Y amigos, M mapa, Alt+O/R/B/L/H/J/F/P, "." mudo, F1–F12 barra 1, 1–0 - = barra 2, Alt+F1–F5 página, F atacar, "," sentar, T alvo em si, Ctrl forçar ataque, Shift ficar parado, Enter chat, Esc
- [ ] Duas teclas por ação; captura: Esc cancela, Backspace limpa, Alt/Ctrl/Shift viram prefixo, recusa tecla que digita no chat ("That key types text in the chat…")
- [ ] Persistência das teclas (no mecanismo que a área já usa)
- [ ] Atalhos bloqueados enquanto se digita (`IsTyping`) e durante a captura
- [ ] Atalhos da barra repetem ao segurar (`PlayerShortcuts.ComecaRepeticao/Repete`)
- [ ] Divergências com a tabela `GamingStateShortcut` do Interlude registradas (ex.: Alt+L, Alt+P, Tab)
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
- `analises\spark-l2unity\hud\opcoes.md` (aba Shortcut, `spark.opt.teclas`/`spark.opt.binds`)

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
