# #0015 — Clã e amigos

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-10-cla-amigos` |
| Estado | cancelada (descartada pelo usuário em 2026-10-29; branches apagados, nada entrou no `main`) |
| Spec | `07_demais_janelas.md` (clã, amigos) |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Ações e textos das janelas de clã e amigos com os pacotes do Interlude.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Ações e textos das janelas de clã e amigos
- [ ] Add com nome vazio convida o alvo
- [ ] Listas de bloqueio
- [ ] 0x3C e H 0x1A/0x1E do clã: gesto sem envio, pendente de decisão (ver observação)
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

## Observações da coordenadora

- 0x3C é `RequestPledgeMemberList` no Interlude/aCis (spec 92). A coordenadora perguntou ao usuário se ele vale como pacote do Interlude; até a resposta, não enviar.

## Andamento

- 2026-10-29 — branch `feat/ui-spark-10-cla-amigos` saído da ponta do `09` (`2326fb9`).
- 2026-10-29 — `Scripts/UI/UiFriends.cs` (FriendActions: textos e RequestBlock/RequestFriendList); `GameUi` FriendAdd/Delete/Refresh/Whisper, BlockAction, ClanRequest (gesto); 5 testes em `SparkFriendsTests.cs` (`8973c9c`).
- 2026-10-29 — coordenadora: **cancelada a pedido do usuário** ("não ficou bom"). Branches `feat/ui-spark-*` e `integracao/ui-spark` apagados sem merge, worktrees e sub-sessões excluídas, `shared\...\client\spark_hud\` apagada.

## Decisões e REA

- **Fonte**: `FriendWindow.MontaAmigos` (botões Whisper, Delete, Refresh, campo + Add; "Leave the name empty to invite your target."; "Friends: {0}   Online: {1}"; "Your friend list is empty."), `FriendWindow.MontaBloqueio` (Block, Unblock, Block list, Block all, Unblock all; texto "Blocked players cannot whisper you or invite you…") e `ClanWindow` (abas Info, Membros, Ranks, Privilégios, Guerras, Aliança, Crest, Skills).
- **Pacotes (aCis, spec 95)**: Add = `RequestFriendInvite 0x5e` (cS); Delete = `RequestFriendDel 0x61` (cS); Refresh = `RequestFriendList 0x60` (c); bloqueio = `RequestBlock 0xa0` (cd, +S nos tipos 0 e 1: 0 block, 1 unblock, 2 blocklist, 3 allblock, 4 allunblock — `RequestBlock.java`). Whisper abre o chat com `"nome ` (o `PoeTell` da #0011). Os comandos `/friendinvite`, `/frienddel`, `/friendlist`, `/block`… já existiam no `L2Commands` com os mesmos pacotes.
- **Add com nome vazio**: convida o alvo atual; sem alvo, mostra a dica do Spark no chat e não manda nada.
- **Desenho**: o `L2FriendWnd` do Interlude é nativo e a spec não traz os botões dele (89 só tem a moldura do MessengerWnd); os botões do Spark são feitos em código pelo `SparkEstilo`. As ações ficaram no `GameUi` (prontas para os botões); **a validar** os controles do L2FriendWnd no NWindow.dll antes de desenhar. Os textos do Spark são em inglês; os equivalentes em sysstring do Interlude: **a validar**.
- **Clã**: `0x3C RequestPledgeMemberList` é opcode do Interlude/aCis (spec 92), mas o uso que o Spark faz dele e os `H 0x1A/0x1E` (Ex do servidor Spark) ficam **sem envio** até a decisão do usuário (observação da #0005): `GameUi.ClanRequest` guarda o gesto em `PendingClanRequest`. As abas do `ClanWindow` do Spark não têm equivalente direto no `ClanWnd` do xdat (já embutido na MainWnd do porte): **a validar**.

## Entrega

- **Commits:** `8973c9c` UI: amigos (Add com alvo, Delete, Whisper, Refresh), bloqueio 0xa0 e pedidos do cla do Spark so como gesto.
- **Testes:** `sh Docs/tools/run_tests.sh` → total 513, passou 513, falhou 0 (+5 em `SparkFriendsTests`).
- **Tabela comportamento Spark → l2unity → teste:**

| Comportamento Spark | Onde no l2unity | Teste (`SparkFriendsTests`) |
|---|---|---|
| Add (nome vazio = alvo) → 0x5e | `Scripts/UI/GameUi.Hud.cs:299`, `UiFriends.cs:19` | `Add_NomeVazioConvidaOAlvo` |
| Delete → 0x61; Refresh → 0x60; Whisper → `"nome ` | `GameUi.Hud.cs:312`, `GameUi.Hud.cs:318`, `GameUi.Hud.cs:321`, `UiFriends.cs:36` | `Apagar_Atualizar_Sussurrar` |
| Block/Unblock/Block list/Block all/Unblock all → 0xa0 | `GameUi.Hud.cs:329`, `UiFriends.cs:28` | `Bloqueio_OsCincoTiposDoRequestBlock` |
| Textos do FriendWindow | `UiFriends.cs:16` | `Textos_DoFriendWindow` |
| 0x3C e H 0x1A/0x1E do clã: gesto sem envio | `GameUi.Hud.cs:341` | `Cla_PedidosDoSpark_SoGesto` |

- **Falta / fora do escopo:**
  - **Pendente de decisão do usuário**: 0x3C e H 0x1A/0x1E do clã.
  - A validar: controles do `L2FriendWnd` nativo (para desenhar os botões), textos em sysstring, abas do `ClanWindow` do Spark contra o `ClanWnd` do xdat.

## Pedidos

- nenhum.
