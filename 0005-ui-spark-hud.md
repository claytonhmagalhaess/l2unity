# #0005 — Porte do comportamento da HUD do Spark (tarefa-mãe)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | um por tarefa filha: `feat/ui-spark-<NN>-<assunto>` (a 1ª sai do `main`; cada uma sai da ponta da anterior) |
| Estado | aberta |
| Spec | Interlude: `analises\l2-interlude\client_spec\` (layout, medidas, texturas, pacotes). Spark: `analises\spark-l2unity\` (comportamento) |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |

## Objetivo

Portar para o l2unity o **comportamento de interação** de toda a HUD do cliente Spark (Project SPARK / "Infinity"): lobby, jogo, Opções e diálogos. O comportamento inclui clique esquerdo, direito, do meio e duplo, Shift/Alt/Ctrl+clique, hover, arrastar e soltar, teclado, opções ligadas e desligadas, persistência, sons e mensagens de erro. Layout, medidas e texturas continuam vindo do `Interface.xdat` e da spec do Interlude.

## Tarefas filhas (ordem de execução)

| Ordem | Tarefa | Branch |
|---|---|---|
| 1 | [#0006 Base de interação](0006-ui-spark-base.md) | `feat/ui-spark-01-base` |
| 1 | [#0007 Diálogos genéricos](0007-ui-spark-dialogos.md) (junto com a #0006) | `feat/ui-spark-02-dialogos` |
| 2 | [#0008 Teclado remapeável](0008-ui-spark-teclado.md) | `feat/ui-spark-03-teclado` |
| 3 | [#0009 Barra de atalhos e arrasto](0009-ui-spark-barra.md) | `feat/ui-spark-04-barra` |
| 4 | [#0010 Inventário](0010-ui-spark-inventario.md) | `feat/ui-spark-05-inventario` |
| 5 | [#0011 Chat](0011-ui-spark-chat.md) | `feat/ui-spark-06-chat` |
| 6 | [#0012 Janelas da HUD](0012-ui-spark-janelas-hud.md) | `feat/ui-spark-07-janelas-hud` |
| 7 | [#0013 NpcHtml](0013-ui-spark-npchtml.md) | `feat/ui-spark-08-npchtml` |
| 8 | [#0014 Lojas, troca e armazém](0014-ui-spark-lojas.md) | `feat/ui-spark-09-lojas` |
| 9 | [#0015 Clã e amigos](0015-ui-spark-cla-amigos.md) | `feat/ui-spark-10-cla-amigos` |
| 10 | [#0017 Lobby: Login](0017-ui-spark-login.md) | `feat/ui-spark-L1-login` |
| 11 | [#0018 Lobby: Licença e servidores](0018-ui-spark-servidores.md) | `feat/ui-spark-L2-servidores` |
| 12 | [#0019 Lobby: CharSelect](0019-ui-spark-charselect.md) | `feat/ui-spark-L3-charselect` |
| 13 | [#0020 Lobby: CharCreation](0020-ui-spark-charcreation.md) | `feat/ui-spark-L4-charcreation` |
| 14 | [#0021 Lobby: Carregamento e sons](0021-ui-spark-carregamento.md) | `feat/ui-spark-L5-carregamento` |
| 15 | [#0016 Opções](0016-ui-spark-opcoes.md) (proposta primeiro; código só depois da resposta do usuário) | `feat/ui-spark-11-opcoes` |

Pedido à render criado pela coordenadora: [pedido 0001: nameplates](pedidos/0001-coordenadora-nameplates.md).

## Decisões do usuário (já tomadas)

1. O Spark é referência de **comportamento**. Layout, medidas e texturas vêm do `Interface.xdat` e da spec do Interlude (regra do `Scripts\UI\CLAUDE.md`). O lobby segue as telas NC* do original. Onde Interlude e Spark divergirem num comportamento, registre na tarefa e siga o Spark só com confirmação do usuário.
2. Nada copiado do Spark (UXML, USS, texturas, código decompilado): é projeto de terceiros. Reescrever em uGUI montado em código, no estilo da área.
3. Pacotes que só existem no servidor Spark ficam fora: D0:0x48 cancelar buff, D0:0x1D4 ping, D0:0x1D3 máscara do texto de dano, bypass `spk_loot`, D0:0x1C0/1C1, 0x106, 0x66/0x6B (correio), craft 0xAC–0xB3, macros 0xC1/0xC2, 0x7B/0x7D, 0x7F–0x81, 0x3C e H 0x1A/0x1E do clã. A UI pode ter o gesto, sem enviar nada, marcado "pendente de decisão". Só entram pacotes que o aCis entende. Teste ao vivo sempre contra o aCis local.
4. Não portar: o login automático com "Shnok"/"1234" quando ID e senha estão vazios (debug do l2-unity), o correio do Spark e as janelas exclusivas do Spark (Mapa/Radar/QuestHud próprios, Macro, AutoPotion, Craft, LojaCristal, Enchant, Refino, Henna, GM, Tutorial, Drop, VIP).
5. Pendentes de decisão do usuário antes de qualquer código: Easy Login (#0017) e o botão do meio no inventário (#0010). Também o desenho das Opções (#0016).

## Fatos e correções ao README do Spark (confirmados no decompilado)

- **Slot** (`L2ClickableSlot.HandleSlotClickDown/Up`): botão 0 no down → Shift num `InventorySlot` = link do item no chat (StopPropagation); senão, intervalo > 300 ms = clique simples e ≤ 300 ms = duplo. Os flags +0x68 (esq.) e +0x69 (dir.) fazem disparar no UP em vez do down (não são "rightClickEnabled"). O meio dispara no down E no up; no `InventorySlot` é RequestDestroyItem sem confirmação: não replicar sem decisão.
- **Esc** (`CheckUIInputs`): ignorado durante a captura de tecla → chat com foco: fecha o chat → senão, HideWindow no último popup aberto → sem popup: ClearTarget (RequestCancel). NÃO cancela cast.
- **Sons**: todo slot toca click_03 no PointerDown; botões, click_01; trocar de aba, window_open; inventário, ficha e menu de sistema têm open/close próprios; entrar no jogo, game_start.
- **Login**: Tab alterna os campos; Enter/KeypadEnter = click_01 + login; usuário validado por `^[a-zA-Z0-9]{0,16}$` e enviado em minúsculas; um segundo clique em menos de 2,5 s é ignorado; usuário com senha vazia volta sem mensagem; bloqueio por IP, por tentativas ou por conexões mostra o motivo + "Try again in mm:ss"; quedas mostram "Could not connect to the login server…" / "The login server closed the connection without answering…" numa confirmação.
- **Licença, servidores e CharSelect**: Enter confirma e Esc volta (com click_01) em cada tela. A licença envia RequestServerList; a lista de servidores mostra o status (Light/Normal/Heavy/Full/Down/GM Only) e a contagem de personagens; CharSelect: Start sem seleção = "Please select a character"; clique no personagem 3D só quando o mouse não está sobre a UI.
- **Lacunas sem evidência** (não inventar; registrar como "a validar"): BringToFront; botões do SkillbarMain; itens do MenuWindow, do SystemMenu e do menu do membro da party; atraso do tooltip e do hover da party; lock da barra; pacote do equipar por arrasto; chaves de posição e tamanho de janela; botão do menu da aba do chat; duplo clique na lista de servidores e no personagem; girar e zoom no CharSelect; o fluxo de apagar/restaurar/criar personagem e a validação do nome (usar a spec do Interlude); música do lobby; pacote final de compra, venda e multisell.

## Observação da coordenadora sobre a decisão 3

Pela spec 92 (tabela do aCis), vários números da lista são opcodes **retail do Interlude** que o aCis trata: 0x3c RequestPledgeMemberList, 0x66 RequestPledgeInfo, 0x6b RequestAcquireSkillInfo, 0x7b RequestTutorialLinkHtml, 0x7d RequestTutorialQuestionMark, 0x7f RequestPetition, 0x80 RequestPetitionCancel, 0x81 RequestGmList, 0xac–0xb3 receitas (RecipeBook/RecipeShop), 0xc1 RequestMakeMacro e 0xc2 RequestDeleteMacro. O que fica fora é o **uso que o Spark faz** desses números. Levado ao usuário em 2026-10-29. Até a resposta, nenhuma tarefa envia esses opcodes.

## Fontes que as sessões devem ler

- `analises\spark-l2unity\hud\README.md` (arquitetura, janelas, §3 comportamento): inteiro.
- `hud\opcoes.md` (6 abas de Opções: controles, chaves `spark.opt.*`, padrões, Apply/Cancel; no login só Video e Audio).
- `hud\events.md` (fiação RegisterCallback → handler), `hud\code_summaries.md` (por função), `hud\code\*.c` (confirmar detalhes), `hud\uxml_inventory.md`, `raw\InputActionAsset_strings.txt` (teclas), `client\network.md` (opcodes).
- Destino: `l2unity\Assets\L2Web\Scripts\UI\` (jogo: L2Wnd, UiWindow, UiTooltip, GameUi*, L2Shortcuts, L2Chat, ChatFilter, L2Commands, PartyWnd, NpcHtmlWnd, L2Html, MultiSell*, OptionWnd, SettingsUi, L2Input, L2Cursor; lobby: LobbyUi, LobbyLoginScreen, LobbyServerScreen, LobbyCharsScreen, LobbyCharInfo, LobbySelect, LobbyCreateScreen, CreatePanel, CreateState, LoadingScreen, LobbyMessageBand, LobbySkin).

## Critério de pronto

- [ ] Todas as tarefas filhas `concluída`, ou com os pontos restantes registrados como decisão do usuário
- [ ] Cada filha com a tabela comportamento Spark → l2unity → teste na Entrega
- [ ] Pedidos abertos pelas filhas atendidos ou recusados com motivo

## Andamento

- 2026-10-29 — coordenadora criou as tarefas #0005–#0021 e o pedido 0001.

## Decisões e REA

<!-- respostas do usuário às decisões pendentes entram aqui, com a data -->

## Entrega

- **Commits:** 
- **Testes:** 
- **Falta / fora do escopo:** 

## Pedidos

- [pedido 0001: nameplates (render)](pedidos/0001-coordenadora-nameplates.md)
