# #0013 — NpcHtml

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-08-npchtml` |
| Estado | aberta |
| Spec | `07_demais_janelas.md` (NpcHtmlWnd), `89_telas_nativas.md` |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Conferir o `NpcHtmlWnd`/`L2Html` contra o comportamento do `SparkHtml` e fechar as diferenças.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Tags: a, button, edit, multiedit, combobox, img, table, font, center, br/p/hr, title
- [ ] Entidades &#N; &$N; &nbsp; e as demais que o SparkHtml trata
- [ ] Hover em links e botões; $var dos campos substituídos na ação
- [ ] msg="id;param" pede confirmação antes de enviar
- [ ] bypass → RequestBypassToServer 0x21; link → RequestLinkHtml 0x20; a rolagem volta ao topo a cada página
- [ ] Bypass `spk_loot` (Spark) não é enviado
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
