# #0017 — Lobby: Login

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-L1-login` |
| Estado | aberta |
| Spec | `89_telas_nativas.md` (NCAuthWnd) |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Comportamento da tela de login, sobre as telas NC* do Interlude.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Tab alterna os campos; Enter/KeypadEnter = click_01 + login
- [ ] Usuário validado por ^[a-zA-Z0-9]{0,16}$ e enviado em minúsculas; segundo clique em menos de 2,5 s ignorado; usuário com senha vazia volta sem mensagem
- [ ] Bloqueio por IP, tentativas ou conexões mostra o motivo + "Try again in mm:ss" com contagem
- [ ] Quedas mostram "Could not connect to the login server…" / "The login server closed the connection without answering…" numa confirmação
- [ ] Exit e botão Options (Options do login: só Video e Audio, ver #0016)
- [ ] Sem o login automático "Shnok"/"1234" (decisão 4)
- [ ] Easy Login: **bloqueado: decisão do usuário** (a coordenadora levou a proposta ao usuário)
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
