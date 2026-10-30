# #0011 — Chat

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-06-chat` |
| Estado | cancelada (descartada pelo usuário em 2026-10-29; branches apagados, nada entrou no `main`) |
| Spec | `02_chat.md` |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Canais, comandos, tell e links de item no chat, partindo do que `L2Chat`/`ChatFilter` já fazem.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Levantamento do que `L2Chat`/`ChatFilter`/`L2Commands` já fazem antes de mudar (na Entrega)
- [ ] Prefixos ! (1) "Nome (2) # (3) @ (4) + (8) $ (9) % (17); // = comando GM (0x5b); / = comandos de cliente
- [ ] Tell: ↑/↓ percorrem os últimos, Tab/→ completam o nome
- [ ] Link de item no chat (Shift+clique, da #0006) com tooltip no hover do link
- [ ] Menu e filtros por aba (botão do menu da aba **a validar**); redimensionar com persistência; Alt+J esconde
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

- 2026-10-29 — branch `feat/ui-spark-06-chat` saído da ponta do `05` (`aadb039`).
- 2026-10-29 — levantamento do que já existia (abaixo, na Entrega).
- 2026-10-29 — `Scripts/UI/UiChatSpark.cs` (TellNames, ItemLinks, ChatLinkHover), `ChatListModel.LineAt`, ligação no `GameUi` (campo do chat, envio, Shift+clique no inventário, dica nas linhas); 9 testes em `SparkChatTests.cs` (`877df00`). Pedido 0007 ao App.
- 2026-10-29 — coordenadora: **cancelada a pedido do usuário** ("não ficou bom"). Branches `feat/ui-spark-*` e `integracao/ui-spark` apagados sem merge, worktrees e sub-sessões excluídas, `shared\...\client\spark_hud\` apagada.

## Decisões e REA

- **Prefixos** (critério `! " # @ + $ %`, `//`, `/`): já estavam no porte pelo NWindow.dll (`L2Chat.Prefixes`/`Classify` = FUN_10139c50, com os de largura cheia, `&`, `*`, `` ` ``/``` `` ```, `~`); `//cmd` = `SendBypassBuildCmd 0x5b` e `/cmd` pela tabela commandname-e (`L2Commands`). O Spark faz o mesmo (`SparkChatFiltro`, `SendGMCommand`, `SparkComandos.Executa`). Nada mudou; coberto por teste novo.
- **Observado** `ChatWindow.RegistraTell`: nome com espaço não entra; já presente volta para a frente; lista de **20** (`0x14`, `RemoveRange`). `TellMudou`: o campo igual a `"` com a lista não vazia vira `"<último> `; começando com `"` → `AtualizaTell` (sugestões). `TeclaDoTell` (KeyDown, só com sugestões `+0x9c`): ↑ (0x111) / ↓ (0x112) trocam a escolhida (`TrocaTell`), Tab (9) ou → (0x113) sem Shift aceitam (`AceitaSugestao` → `PoeTell` = `"nome `). Sem sugestões e com o campo num sussurro, `TrocaTell` percorre a lista inteira.
- **Inferido**: as sugestões são os nomes que **começam** com o que foi digitado, sem diferenciar maiúsculas (o `AtualizaTell` compara cada nome com o prefixo; o tipo exato da comparação não aparece no trecho decompilado). **A validar**: ↑/↓ com o campo vazio (o README do Spark diz "mensagem anterior"; o código lido só trata o sussurro) — não ligado.
- **Interlude**: o nativo também tem "responder ao último sussurro" (FUN_10139700, `"%s `) e percorrer os nomes (FUN_101398c0), mas as teclas e o tamanho da lista estão em aberto na spec (02 §9 item 3). Não há conflito conhecido: entrou o do Spark.
- **Link de item**: `SparkLinkItem.Rotulo` = `[` + `+N ` + nome + ` (qtd n0)` + `]`; `InsereLink` põe no cursor e respeita o `maxLength` (100 do ChatEditBox), depois abre o chat; Shift+clique **consome** o clique (não seleciona). O Spark troca o rótulo por `ID=…` no envio (`ParaEnvio`) e o desfaz na recepção (`ParaChat`): é um formato do servidor/cliente Spark — **não enviado** (decisão 3). Aqui o rótulo vai como texto puro no Say2 (o aCis e os clientes Interlude o veem como texto).
- **Dica do link**: o `PointerOverLinkTagEvent` do Spark vira `ChatLinkHover` nas listas do chat (linha sob o ponteiro → rótulo conhecido → dica). Como o texto não carrega o id, só os rótulos que **este** cliente inseriu têm dica (**a validar** um formato que o aCis repasse).
- **Menu e filtros por aba**: o filtro é o `ChatFilterWnd` do Interlude (já no porte, por aba, `chatfilter.ini`). O menu da aba do Spark (`AbreMenuDaAba` no PointerDown da aba) não tem equivalente no xdat: **a validar** o botão/gesto; não portado.
- **Redimensionar com persistência**: já no porte (faixa `ResizeFrame` do ChatWnd, tamanho gravado no `WindowsInfo.ini` [6] ao sair; `ChatResizeTests`). O Spark grava `spark_chat_w/h` e `spark_sysmsg_h` em PlayerPrefs; vale o do Interlude. Alt+L volta ao tamanho do xdat (#0006).
- **Alt+J**: `ShowChatWindow` do xdat (Interlude, também esconde a SystemMsgWnd) e `HideChat` do mapa do Spark levam ao mesmo comando.

## Entrega

- **Levantamento antes de mudar:**
  - `L2Chat`: prefixos do NWindow (ASCII e largura cheia) → tipo do Say2; aba padrão (All 0, Trade 8, Party 3, Clan 4, Ally 9) e OldChatting; `%target`/`%self`/`%party1..8`; anti-flood por pontuação (sysmsg 964/965/966/1078); filtro de palavrões na recepção (obscene-e, máscara sysstring 740); limite de 100 no campo.
  - `ChatFilter`: `m_filterInfo` das 5 abas + sistema, `chatfilter.ini` com as seções trocadas do original, `CheckFilter` (roteamento por tipo/aba/SystemMsgWnd com SystemMsgWndDamage/ExpendableItem).
  - `L2Commands`: `/cmd` pelo commandname-e.dat (114 entradas) → pacote, ação, sysmsg, evento, diálogo ou rotina local; `//cmd` = 0x5b; `///` local; desconhecido = RequestUserCommand 0xAA.
  - `GameUi` (chat): abas do ChatWnd, campo `ChatEditBox`, Enter foca/envia (EnterChatting), ChatFilterWnd, Alt+PageUp/Down troca de aba, Alt+J.
- **Commits:** `877df00` UI: chat com nomes de sussurro (setas, Tab), link de item e dica no hover.
- **Testes:** `sh Docs/tools/run_tests.sh` → total 486, passou 486, falhou 0 (+9 em `SparkChatTests`).
- **Tabela comportamento Spark → l2unity → teste:**

| Comportamento Spark | Onde no l2unity | Teste (`SparkChatTests`) |
|---|---|---|
| Prefixos ! " # @ + $ %; // = GM (0x5b); / = cliente | `Scripts/UI/L2Chat.cs:124`, `L2Commands.cs:174` (já existiam) | `Prefixos_DoCriterio` |
| RegistraTell: 20 nomes, mais recente na frente | `UiChatSpark.cs:32`, `GameUi.cs:722` | `Tell_ListaDe20_MaisRecenteNaFrente`, `Tell_NoCampoDoChat_EnviarRegistra` |
| `"` vira `"<último> `; sugestões; ↑/↓ trocam; Tab/→ completam | `UiChatSpark.cs:45`, `UiChatSpark.cs:63`, `GameUi.cs:654`, `GameUi.Hud.cs:213` | `Tell_AspasViramOUltimo_SugestoesETabAceita`, `Tell_NoCampoDoChat_EnviarRegistra` |
| ↑/↓ percorrem os nomes no sussurro | `UiChatSpark.cs:63` | `Tell_SetasPercorremOsNomesNoSussurro` |
| Link de item: rótulo, cursor, limite | `UiChatSpark.cs:100`, `UiChatSpark.cs:115`, `GameUi.cs:667` | `Link_RotuloDoSpark` |
| Shift+clique no inventário = link (consome) | `GameUi.Windows.cs:403` (UiSlot.Link), `GameUi.cs:667` | `Link_ShiftCliqueNoInventario_PoeNoChat_SemSelecionar` |
| Dica no hover do link | `UiChatSpark.cs:124`, `UiChatSpark.cs:153`, `L2Log.cs:51`, `GameUi.cs:637`, `GameUi.cs:680` | `Link_ShiftCliqueNoInventario_PoeNoChat_SemSelecionar`, `LinhaDoChat_PelaAltura` |
| Alt+J esconde o chat | `GameUi.Hud.cs` (`ShowChatWindow`/`HideChat`) | `AltJ_EscondeEMostraOChat` |
| Redimensionar com persistência | `L2Wnd.cs` (`ResizeBy`), `L2WindowsInfo` [6] (já existiam) | `ChatResizeTests` (existente) |

- **Falta / fora do escopo:**
  - Pedido 0007 (App.cs): registrar quem sussurrou.
  - Formato `ID=` do link do Spark: não enviado (decisão 3); a dica só vale para os rótulos deste cliente.
  - A validar: menu da aba do Spark; ↑/↓ com o campo vazio; teclas do sussurro no nativo do Interlude.
  - Lista visual das sugestões (`PintaSugestoes`): o modelo existe (`TellNames.Suggestions`); o desenho sob o campo não foi feito (sem desenho no xdat do Interlude).

## Pedidos

- [pedido 0007: App.cs — registrar quem sussurrou](pedidos/0007-ui-tell-recebido.md)
