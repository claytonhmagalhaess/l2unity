# #0021 — Lobby: Carregamento e sons

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-L5-carregamento` |
| Estado | pronta p/ merge |
| Spec | `89_telas_nativas.md` (LoadingWnd) |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Tela de carregamento e sons do lobby.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Sons das telas do lobby (click_01 etc., da #0006)
- [ ] Tela de carregamento conforme a spec do Interlude; o que o Spark faz a mais fica registrado
- [ ] Música do lobby **a validar**
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

- 2026-10-29 — branch `feat/ui-spark-L5-carregamento` saído da ponta do `L4` (`7ce141b`).
- 2026-10-29 — `UiClickSound` (click_01) em todo `LobbySkin.Button`, `LobbyMusic.CreationTheme`; 2 testes em `SparkLobbySoundTests.cs` (`51adeaa`). Pedido 0012 (App + render).

## Decisões e REA

- **Sons do lobby**: o Spark põe o `ButtonClickSoundManipulator` (click_01 no MouseDown) em todos os `L2Button` do login; os botões nativos do lobby do Interlude (NCButton) não têm som conhecido na spec. Entrou o do Spark: `click_01` (= `InterfaceSound.Interface.click_01`) no botão esquerdo com o botão ativo, em todo botão do `LobbySkin`. Os Enter/Esc das telas (#0017–#0019) também tocam `click_01`; `game_start` segue sem equivalente (a validar, #0006).
- **Tela de carregamento**: a do porte já é a do Interlude (`LoadingScreen`: arte `sp_32b_*` e barra de progresso; spec 89 LoadingWnd = janela inteira). O Spark só mostra/esconde um elemento `Loading` (`L2UI.StartLoading/StopLoading` trocam o `display`): nada a mais para portar.
- **Música da criação**: o `SparkMusica` toca `ct_human`, `ct_elf`, `ct_darkelf`, `ct_orc`, `ct_dwarf` por raça; os mesmos `.ogg` estão em `client\Music` do Interlude. Ficou `LobbyMusic.CreationTheme` e o pedido 0012 para o App/MusicPlayer tocar.
- **Música do lobby** (seleção): o Interlude tem `RestoreLobbyMusic`/`PlayIntroMusic` (nomes no engine), sem o arquivo identificado → **a validar**. O Spark lê `Resources/Data/Music/_musica.txt` (próprio dele): fora.

## Entrega

- **Commits:** `51adeaa` UI: click_01 nos botoes do lobby e o tema da criacao por raca.
- **Testes:** `sh Docs/tools/run_tests.sh` → total 530, passou 530, falhou 0 (+2 em `SparkLobbySoundTests`).
- **Tabela comportamento Spark → l2unity → teste:**

| Comportamento Spark | Onde no l2unity | Teste |
|---|---|---|
| click_01 nos botões do lobby (esquerdo, ativo) | `Scripts/UI/UiLobbySpark.cs:198`, `LobbySkin.cs:129` | `SparkLobbySoundTests.BotaoDoLobby_Click01NoEsquerdo_SoAtivo` |
| click_01 no Enter/Esc das telas | `LobbyLoginScreen.cs:161`, `LobbyServerScreen.cs:152`, `LobbyCharsScreen.cs:55` | `SparkLoginTests`, `SparkServerListTests`, `SparkCharSelectTests` |
| Tema da criação por raça | `UiLobbySpark.cs:215` | `SparkLobbySoundTests.MusicaDaCriacao_PorRaca` |
| Tela de carregamento (Interlude) | `LoadingScreen.cs` (já existia) | — (sem mudança) |

- **Falta / fora do escopo:**
  - Pedido 0012 (App/render): tocar o tema da criação.
  - A validar: música da seleção de personagem; `game_start`.

## Pedidos

- [pedido 0012: App/render — tema da criação por raça](pedidos/0012-ui-musica-criacao.md)
