# #0009 — Barra de atalhos e arrasto

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-04-barra` |
| Estado | pronta p/ merge |
| Spec | `05_barra_de_atalhos_e_teclado.md` |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Arrastar item/skill/ação para a barra, mover, remover, auto-soulshot e páginas, com os pacotes do Interlude.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Arrastar item/skill/ação para a barra envia RequestShortcutReg 0x33 com o formato da spec 95
- [ ] Mover e remover atalho (0x35 RequestShortcutDel)
- [ ] Botão direito em soulshot/spiritshot/blessed/summon shot = auto-soulshot (pacote do Interlude da spec 95)
- [ ] Páginas e setas; linhas expandidas salvas; a página atual não é salva
- [ ] Lock, girar e escala da barra (o lock fica **a validar**); botões do SkillbarMain **a validar**
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

- 2026-10-29 — branch `feat/ui-spark-04-barra` saído da ponta do `03` (`21f7ff5`).
- 2026-10-29 — `Tests/Editor/TestUi.cs`: o `GameUi` inteiro monta no EditMode (layout do xdat, Option.ini e PlayerPrefs guardados e devolvidos), usado daqui em diante.
- 2026-10-29 — barra: soltar registra, arrastar o atalho move/troca/remove, botão direito liga o automático dos shots, Ctrl+clique força, quest não vai para a barra, escala; 9 testes em `SparkBarTests.cs` (`7e4057a`). Pedido 0004 à net.

## Decisões e REA

- **Observado** `PlayerShortcuts.MoveShortcut@0x1804d21d0`: `Del(destino)`, `Del(origem)`, `Reg(destino ← atalho da origem)` e, se o destino estava ocupado, `Reg(origem ← atalho do destino)`: **troca**. Bate com o esperado do Interlude (05 §3.5, "o atalho de destino vai para a origem", [N]). `L2SlotManager.HandleSkillbarDrag`: sobre slot da barra move, fora remove (`RemoveSkillbarSlot` → `RequestShortCutDel`), igual ao [I] do Interlude.
- **Observado** `SkillbarSlot.HandleRightClick`: só itens com default action `action_soulshot`, `action_spiritshot`, `action_bless_spiritshot`, `action_summon_soulshot`, `action_summon_spiritshot` → `RequestToggleShortcutItem` → `RequestAutoSoulshotPacket`. O Interlude faz o mesmo no `NCShortcutItemWnd::OnRButtonDown` (05 §3.10, [I]). O porte não tem a default action dos itens: a lista são os handlers `SoulShots`, `SpiritShot`, `BlessedSpiritShot`, `BeastSoulShot` e `BeastSpiritShot` do aCis (`data/xml/items`: 1463–1467, 1835, 5789, 2509–2514, 5790, 3947–3952, 6645–6647).
- **Mudança de comportamento do porte** (nenhum dos dois clientes fazia assim): o botão direito na barra **removia** o atalho e Ctrl+clique num item ligava o automático. Agora remover é arrastar para fora, o direito liga o automático e Ctrl força o uso (`UseItem` com ctrl, como Ctrl+F1 no xdat, 05 §5.1).
- **Interlude** (05 §3.5): `QuestItem` não está na lista branca do `NCShortcutItemWnd::OnDropItem` → o slot de quest não arrasta para a barra (antes arrastava). Skills passivas já não arrastavam.
- **Trava**: o Spark só troca a classe USS `locked` (`SkillbarWindow.ToggleLockSkillBar`); o efeito não aparece no decompilado lido → **a validar**. Vale o do Interlude/porte: travada não registra, não move, não remove (05 §3.4 [I]); `IsLockShortcutWnd` com os nomes invertidos dos botões.
- **Páginas**: o Interlude tem 10 páginas por barra (setas circulam 1..10) e o Spark 5; mantidas as 10 do Interlude. Linhas expandidas gravadas (`Is1/Is2ExpandShortcutWnd`; o Spark grava `spark.atalhos.linhas.N`), página atual não gravada (nos dois).
- **Escala**: o Spark tem a opção `EscalaAtalhos` (Opções → UI, padrão 1); o Interlude não tem. Entrou `GameUi.SetBarScale` (0,5–2, `Config "bar.scale"`); o controle na janela de Opções é da #0016.
- **Girar**: já era o do Interlude (mantém o canto inferior direito, `IsShortcutWndVertical`); o Spark só troca `display` e reaplica a escala.
- **A validar**: botões do `SkillbarMain` (`HandleTooltipClick` alterna a classe `min` = desligar tooltip; `UpdateExpandInput`) — sem equivalente no ShortcutWnd do Interlude, não portados. Som `click_03` nos slots da barra: segue `null` (#0006).
- **Pacote**: o `RequestShortCutReg` do porte manda `UserShortCut = 0`; o Interlude manda 1 (jogador). Pedido 0004 à net.

## Entrega

- **Commits:** `7e4057a` UI: barra de atalhos com mover/trocar/remover por arrasto, automatico no botao direito e escala.
- **Testes:** `sh Docs/tools/run_tests.sh` → total 469, passou 469, falhou 0 (+9 em `SparkBarTests`).
- **Tabela comportamento Spark → l2unity → teste:**

| Comportamento Spark | Onde no l2unity | Teste (`SparkBarTests`) |
|---|---|---|
| Arrastar item/skill/ação para a barra → RequestShortCutReg 0x33 (cdddd) | `Scripts/UI/GameUi.Windows.cs:388` | `Soltar_ItemSkillAcao_RegistraNoSlot` |
| Arrastar o atalho para fora → RequestShortCutDel 0x35 | `GameUi.Windows.cs:399`, `GameUi.Windows.cs:598` | `Arrastar_ParaForaRemove_ParaOutroSlotTroca` |
| Arrastar para outro slot → troca (Del, Del, Reg, Reg) | `GameUi.Windows.cs:417` | `Arrastar_ParaForaRemove_ParaOutroSlotTroca` |
| Botão direito em soulshot/spiritshot/blessed/beast = automático (D0:05) | `GameUi.Windows.cs:433`, `GameUi.Windows.cs:443` | `BotaoDireito_SoulshotLigaEDesligaOAutomatico` |
| Clique esquerdo usa; Ctrl força | `GameUi.Windows.cs:452`, `GameUi.Windows.cs:755` | `Clique_UsaComCtrlForcado` |
| Páginas e setas; linhas expandidas gravadas; página não | `GameUi.Windows.cs:745`, `GameUi.Windows.cs:715` | `Paginas_SetasCirculam_ENaoSaoGravadas` |
| Travar (Interlude; Spark a validar) | `GameUi.Windows.cs:686`, `GameUi.Windows.cs:388`, `GameUi.Windows.cs:399` | `Travada_NaoRegistraNemMoveNemRemove` |
| Girar | `GameUi.Windows.cs:639` | `Girar_TrocaAOrientacaoEGrava` |
| Escala da barra | `GameUi.Windows.cs:662` | `Escala_AplicaEGrava` |
| Item de quest fora da barra (Interlude) | `GameUi.Windows.cs:291` | `ItemDeQuest_NaoVaiParaABarra` |

- **Falta / fora do escopo:**
  - Pedido 0004 (net): `UserShortCut = 1` no RequestShortCutReg.
  - A validar: efeito da trava no Spark; botões do `SkillbarMain` (tooltip/min); `click_03` dos slots.
  - Controle da escala na janela de Opções: #0016 (**bloqueado: decisão do usuário**).

## Pedidos

- [pedido 0004: net — RequestShortCutReg com UserShortCut = 1](pedidos/0004-ui-shortcutreg-usershortcut.md)
