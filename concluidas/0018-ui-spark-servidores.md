# #0018 — Lobby: Licença e lista de servidores

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-L2-servidores` |
| Estado | cancelada (descartada pelo usuário em 2026-10-29; branches apagados, nada entrou no `main`) |
| Spec | `89_telas_nativas.md` (NCLoginServerWnd) |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Licença e escolha de servidor com Enter/Esc, status e contagem de personagens.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Enter confirma e Esc volta (com click_01) em cada tela; a licença envia RequestServerList
- [ ] Lista mostra o status (Light/Normal/Heavy/Full/Down/GM Only) e a contagem de personagens
- [ ] Autologin quando houver; duplo clique na lista **a validar**
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

- 2026-10-29 — branch `feat/ui-spark-L2-servidores` saído da ponta do `L1` (`f2e45bb`).
- 2026-10-29 — `LobbyServerScreen`: Enter/KeypadEnter/Esc com click_01, último servidor escolhido, `SparkStatus`; 3 testes em `SparkServerListTests.cs` (`93e994f`). Pedido 0009 (net + App).
- 2026-10-29 — coordenadora: **cancelada a pedido do usuário** ("não ficou bom"). Branches `feat/ui-spark-*` e `integracao/ui-spark` apagados sem merge, worktrees e sub-sessões excluídas, `shared\...\client\spark_hud\` apagada.

## Decisões e REA

- **Enter/Esc**: o Interlude liga Enter a `ServerSelectOKButton` no `ServerListState` (spec 05 §5.2); o Spark (`ServerSelectWindow.Update`, literal `click_01`) confirma no Enter e volta no Esc, com `click_01`. O Esc não existe na tabela do Interlude: entrou como gesto novo. Sem servidor escolhido o Enter não faz nada.
- **Licença**: o Spark tem a `LicenseWindow` (Agree → `RequestServerList`, Disagree → volta). O porte **não tem** a tela de licença: o `LoginClient` pede a lista logo depois do LoginOk. O Interlude também tem o `EulaMsgState` (Enter = `EulaWndOKButton`). Pôr a tela no meio do fluxo é mudança do `LoginClient` (net) e do App: fica **fora desta tarefa** (proposta: tarefa própria com net + ui).
- **Status**: a lista mostra o Traffic do Interlude (FUN_101a99d0: Down/Normal/Heavy/Light, já no porte). O Spark acrescenta "Full" e "GM Only" (literais do `ServerElement`); ficou `LobbyServerScreen.SparkStatus` com "Full" na lotação cheia — **divergência** (o Interlude mostra Heavy), os limites do Spark são **a validar**, e o aCis manda GM Only como Down para quem não é GM (`ServerList.java:29`), então "GM Only" não é detectável. **Aguarda o usuário** para trocar o texto da lista.
- **Personagens por servidor**: o Spark mostra a contagem; o aCis manda a parte final do ServerList com 0 ("não rastreado", `ServerList.java:85-90`). Pedido 0009 para a net ler; a coluna não existe no NCServerSelectListCtrl do Interlude: **a validar** onde desenhar.
- **Autologin**: o `L2LoginUI.AutoLogin` do Spark é uma corrotina sem corpo na REA (**a validar**). O que existe: o último servidor usado (byte `lastServer` do ServerList) fica escolhido se estiver no ar (`SetServers(list, lastServer)`; pedido 0009 para o valor chegar).
- **Duplo clique** na lista: já entrava no servidor (porte); o do Spark e o do Interlude: **a validar**.

## Entrega

- **Commits:** `93e994f` UI: lista de servidores com Enter/Esc (click_01), ultimo servidor escolhido e status do Spark registrado.
- **Testes:** `sh Docs/tools/run_tests.sh` → total 520, passou 520, falhou 0 (+3 em `SparkServerListTests`).
- **Tabela comportamento Spark → l2unity → teste:**

| Comportamento Spark | Onde no l2unity | Teste (`SparkServerListTests`) |
|---|---|---|
| Enter confirma e Esc volta (click_01) | `Scripts/UI/LobbyServerScreen.cs:54`, `LobbyServerScreen.cs:152` | `EnterConfirmaEscVolta_ComClick01` |
| Status Light/Normal/Heavy/Full/Down (GM Only: aCis manda Down) | `LobbyServerScreen.cs:140`, `LobbyServerScreen.cs:125` | `Status_InterludeESpark` |
| Último servidor / autologin | `LobbyServerScreen.cs:177` | `UltimoServidorUsado_FicaEscolhido` |
| Duplo clique na lista (a validar) | `LobbyServerScreen.cs:344` (já existia) | — |
| Licença → RequestServerList | — (o porte não tem a tela) | — |

- **Falta / fora do escopo:**
  - Pedido 0009 (net/App): `lastServer` e personagens por servidor.
  - Tela de licença: fora (fluxo do LoginClient); proposta de tarefa própria.
  - **Aguarda o usuário**: "Full" do Spark no lugar do "Heavy" do Interlude.
  - A validar: limites do Spark, autologin, duplo clique, coluna de personagens.

## Pedidos

- [pedido 0009: net/App — lastServer e personagens por servidor](pedidos/0009-ui-serverlist-lastserver.md)
