# #0020 — Lobby: CharCreation

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-L4-charcreation` |
| Estado | pronta p/ merge |
| Spec | `89_telas_nativas.md` (NCPawnSetupWnd) |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Criação de personagem com setas, câmeras e validação do nome do Interlude.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Setas de raça/classe/sexo/cabelo/cor/rosto
- [ ] Câmeras por classe/sexo/cabeça, girar e zoom (pawns e câmeras = pedido à render)
- [ ] Validação do nome pela spec do Interlude; Create/Previous
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

- 2026-10-29 — branch `feat/ui-spark-L4-charcreation` saído da ponta do `L3` (`46487cf`).
- 2026-10-29 — levantamento: setas, regras dos setters (sm81/82/83), girar e zoom já existiam no porte (NCPawnSetupWnd/NCPawnCreateWnd). Entrou `CreateRules` (nome, recusas → sysmsg), `LobbyCreateScreen.ShowFail`, `CreatePanel.Step` público; 4 testes em `SparkCharCreationTests.cs` (`7ce141b`). Pedido 0011 (net + App).

## Decisões e REA

- **Setas**: o Spark usa o `L2ArrowInput` (`ArrowInputManipulator.OnLeftArrowClick/OnRightArrowClick/SelectIndex`); o Interlude usa o `NCSelectCtrl` com `PREV1`/`NEXT1` (já no porte, `CreatePanel`). Os dois circulam; sem escolha, a seta vai para o primeiro (ou o último com ←). As regras dos setters são as do Interlude (raça limpa o resto; sem raça sm81, sem classe sm82, sem sexo sm83; anão com uma classe; penteados por sexo).
- **Câmeras, girar e zoom**: já no porte (botões do NCPawnCreateWnd → App → LobbyScene). O `ToggleZoomin` do Spark alterna `LoginCameraManager.ZoomIn/ZoomOut` como o botão de zoom. As câmeras por classe/sexo/cabeça são da render (LobbyScene), sem mudança nesta tarefa.
- **Nome**: a spec do Interlude deixa a validação em aberto (01 §NCPawnCreateWnd "[N] layout e validação de nome"). O campo do porte (NCEditBox 0x1503) já aceita só letras e dígitos até 16; `CreateRules.NameOk` repete a regra; a decisão final é do servidor (`CharacterCreate` do aCis: `REASON_INCORRECT_NAME`, `REASON_16_ENG_CHARS`).
- **Recusas** (CharCreateFail 0x1a do aCis 0..6) → systemmsg do Interlude **[inferido pelos textos]**: 0 → sm128 "Your character creation has failed.", 1 → sm77 (limite de personagens), 2 → sm79 "This name already exists."; 3–6 → sm128 (**a validar** o texto do cliente original para "16 caracteres", "nome inválido", "criação não permitida", "outro servidor").
- **Create/Previous**: já no porte (Create Character ou Enter no nome; Previous volta). O `CreateButtonPressed` do Spark abre um `L2ConfirmWindow` antes do `ValidateCharacterCreation`, sem texto na REA → **a validar** (não portado).

## Entrega

- **Commits:** `7ce141b` UI: criacao de personagem com as recusas do servidor no systemmsg e as setas testadas.
- **Testes:** `sh Docs/tools/run_tests.sh` → total 528, passou 528, falhou 0 (+4 em `SparkCharCreationTests`).
- **Tabela comportamento Spark → l2unity → teste:**

| Comportamento Spark | Onde no l2unity | Teste (`SparkCharCreationTests`) |
|---|---|---|
| Setas de raça/classe/sexo/cabelo/cor/rosto | `Scripts/UI/CreatePanel.cs:94` (já existia) | `Setas_CirculamOsValores` |
| Regras dos setters (Interlude sm81/82/83) | `CreatePanel.cs:108` (já existia) | `Setas_SemOAnterior_AvisamComASysmsg` |
| Validação do nome | `UiLobbySpark.cs:180`, `LobbyCreateScreen.cs:43` | `Nome_E_Recusas` |
| Recusa do servidor → systemmsg | `UiLobbySpark.cs:186`, `LobbyCreateScreen.cs:103` | `Nome_E_Recusas` |
| Create/Previous, girar e zoom | `LobbyCreateScreen.cs:45`, `LobbyCreateScreen.cs:64`, `LobbyCreateScreen.cs:68` (já existiam) | `CriarEVoltar_EGirarEZoom` |
| Câmeras por classe/sexo/cabeça | Render (LobbyScene), já existia | — |

- **Falta / fora do escopo:**
  - Pedido 0011 (net/App): o código do CharCreateFail para a tela.
  - A validar: textos das recusas 3–6, confirmação antes de criar do Spark.

## Pedidos

- [pedido 0011: net/App — código do CharCreateFail](pedidos/0011-ui-charcreatefail.md)
