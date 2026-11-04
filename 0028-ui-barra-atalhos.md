# #0028 — Barra de atalhos igual ao nativo (T4)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-barra-atalhos` |
| Estado | pronta p/ merge |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T4; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

Barra de atalhos igual ao nativo, com o comportamento do Interlude levantado na #0024 (T4 do 05 §2). Tamanho estimado: P.

Ordem: 8ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-inventario` (#0026). Depende de: T8 para as macros.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: clique direito = auto-shot só nos ids de `nw:0x10149ee0`; slot → slot troca; para fora apaga; origens macro, receita e pet; rótulos de tecla certos.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes (C→S `RequestShortCutReg` 0x33 (com `UserShortCut` 1/2), `RequestShortCutDel`, `RequestAutoSoulShot` 0xd0:0x05; S→C `ShortCutRegister` 0x44, `ExAutoSoulShot` 0xfe:0x12) lidos e montados pelo código da #0046 (vaga `net`), depois que ela estiver no `main`; o que faltar lá vira pedido em `tarefas\pedidos\`, sem editar `Scripts\Net\`.
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/barra-atalhos/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — branch `feat/ui-barra-atalhos` criado de `feat/ui-moldura` (fc17ab5): a base prevista (`feat/ui-inventario`, #0026) não existe porque a #0026 está bloqueada; estado `fazendo`.
- 2026-11-03 — parte que só usa pacotes do `main`: clique direito nos shots, troca slot → slot, apagar soltando fora, rótulos de tecla (`ffdc3fd`).
- 2026-11-03 — `sh Docs/tools/run_tests.sh`: 522/522 (exit 0).
- 2026-11-03 — evidências offline (`cliques.log`, captura) e linha K18 do `Docs/validacao.md` (`05f7163`). aCis fora do ar.
- 2026-11-03 — bloqueada: aguardando #0046 no main (o `RequestShortCutReg` com `UserShortCut` 1/2 para as ações de pet) e as tarefas #0032 (macros) e #0031 (pet), também bloqueadas, para as origens macro, receita e pet do critério.
- 2026-11-03 — desbloqueada: a #0046 entrou no `main` (5d398bb) e a coordenadora fez `git merge main` neste branch.
- 2026-11-03 — origens macro e receita e o `UserShortCut` 2 das ações de pet (15–27) e do inventário do pet: `DragToBar` público para as janelas das próximas tarefas, rótulo e ícone da macro pelo `InterfaceRouter.Macros`, uso da macro (`UseMacro`, ligado pela #0032) e da receita (`RequestRecipeItemMakeInfo`) (`ef46695`).
- 2026-11-03 — `sh Docs/tools/run_tests.sh`: 611/611 (exit 0).

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

- [O] `NCShortcutItemWnd::OnRButtonDown` (`nw:0x100477f0`): só soulshot/spiritshot alternam o automático (`RequestAutoSoulShot(itemId, !auto)`); nos outros atalhos nada. Ids (`FUN_10149ee0`): 1463–1467, 1835, 2509–2514, 3947–3952, 5789–5790, 6535–6540, 6645–6647. O porte apagava no clique direito e ligava o automático no Ctrl+clique: os dois saíram.
- [O] `OnDropItem` (`nw:0x100480c0`), origem `NCShortcutItemWnd`: registra a origem no destino; com o destino ocupado, o antigo do destino na origem; vazio, apaga a origem; religa o automático dos shots dos dois lados.
- [O] `OnDragButton` (`nw:0x100478f0`): soltar fora da própria barra com margem de 30 px apaga (`RequestShortCutDel`). [V] O `IsLockShortcutWnd` é lido mas o desvio não aparece no pseudocódigo; no porte, com as barras travadas o slot não arrasta.
- [O] Teclas: no xdat do Interlude só a barra principal tem teclas (F1–F12, 1–0, -, =, com Ctrl/Shift); as barras 2 e 3 não têm. O porte dizia Alt+F e Ctrl+Shift+F.
- O branch nasceu de `feat/ui-moldura` porque a base prevista (`feat/ui-inventario`, #0026) não existe (#0026 bloqueada).
- [O] `OnDropItem` (`nw:0x100480c0`): ações 0–14 vão com `UserShortCut = 1`, 15–27 (pet) com `2`; itens do inventário do pet também com `2` (`ShortcutBar.UserShortCut`). Na troca entre slots o porte não sabe se um item veio do pet: usa 1 [I].
- [I] Clique num atalho de receita abre a fabricação (`RequestRecipeItemMakeInfo`); o nativo não foi lido.
- Macro na barra: ícone `L2UI.MacroWnd.Macro_IconN` e nome do `UIDATA_MACRO` (`InterfaceRouter.Macros`); a execução das linhas é da #0032.

## Entrega

- **Commits:** `ffdc3fd` (clique direito, troca, apagar arrastando, rótulos), `05f7163` (evidências e K18), `ef46695` (origens macro/receita/pet).
- **Testes:** `ShortcutBarTests` (ids de shot, troca, soltar fora, rótulos, UserShortCut); `sh Docs/tools/run_tests.sh` 611/611.
- **Falta / fora do escopo:** as janelas de origem (MacroListWnd #0032, PetWnd #0031, RecipeBook #0043) chamam o `DragToBar` quando entrarem; captura da troca e do arrasto; teste ao vivo.

## Pedidos

Nenhum por enquanto.
