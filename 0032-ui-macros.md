# #0032 — Macros: `MacroListWnd`, `MacroEditWnd`, `MacroInfoWnd`, tecla R (T8)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-macros` |
| Estado | pronta p/ merge |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T8; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

Macros: `MacroListWnd`, `MacroEditWnd`, `MacroInfoWnd`, tecla R, com o comportamento do Interlude levantado na #0024 (T8 do 05 §2). Tamanho estimado: M.

Ordem: 9ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-barra-atalhos` (#0028). Depende de: nenhuma.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: criar, editar, apagar e executar; arrastar para a barra, a lixeira e as linhas do editor.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes (S→C `SendMacroList` 0xe7; C→S `RequestMakeMacro` 0xc1, `RequestDeleteMacro` 0xc2) lidos e montados pelo código da #0046 (vaga `net`), depois que ela estiver no `main`; o que faltar lá vira pedido em `tarefas\pedidos\`, sem editar `Scripts\Net\`.
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/macros/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — bloqueada: aguardando #0046 no main. S→C `SendMacroList` 0xe7 e C→S `RequestMakeMacro` 0xc1 / `RequestDeleteMacro` 0xc2 não existem no `main`. Branch não criado (a vaga seguiu para a próxima tarefa da cadeia sem pacote novo).
- 2026-11-03 — desbloqueada (#0046 no `main`); branch `feat/ui-macros` criado de `feat/ui-inventario` (5d75c28).
- 2026-11-03 — `MacroScript`, `MacroView` e a ligação no `GameUi` (`b32c5e9`); ScrollArea do xdat (`3f3067b`).
- 2026-11-03 — `sh Docs/tools/run_tests.sh`: 627/627 (exit 0).
- 2026-11-03 — capturas offline e linha K20 (`11e6563`). aCis fora do ar.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

- [O] `MacroListWnd.uc`: `OnEnterState`/`EV_MacroUpdate` → `RequestMacroList` (sem pacote: o `InterfaceRouter.RequestMacroList` monta o `EV_MacroList` da `MacroBook`); clique → `RequestUseMacro`; soltar em `btnTrash` → Warning sm828 e `RequestDeleteMacro` no OK; em `btnEdit` → `EV_MacroShowEditWnd(MacroID)`; Add limpa a descrição e abre o editor; Help → `EV_ShowHelp help_macro.htm`.
- [O] `MacroEditWnd.uc`: sem id e com 24 macros, sm797 e não abre; sem id e aberto, fecha; com id preenche tudo; ícone 1..7 circular; Save → `RequestMakeMacro` com o ícone em base 0; `EV_MacroDeleted` fecha o editor da macro apagada. `MacroInfoWnd.uc`: OK guarda até 32 caracteres, Cancel volta ao anterior.
- [O] aCis `RequestMakeMacro`: tipos 1 skill, 3 ação, 4 atalho; d1 = skill ou página; d2 = slot. [I] O porte converte `/useskill nome` → 1 (id pelo nome), `/useshortcut p s` → 4, outro comando → 3, texto → 0; linhas vazias não vão (o conversor do nativo não foi lido).
- [I] `RequestUseMacro` é nativo e não tem pacote no Interlude: as linhas rodam em ordem como texto do chat (o `App` classifica e manda), e `/delay n` espera n segundos.
- [I] Skill ou ação soltas numa linha do editor viram `/useskill <nome>` e `/<comando do actionname-e>`; item só entra por atalho (help da macro).
- A `ScrollArea` do xdat (`areaEdit`, 318 de conteúdo em 239) passou a recortar e rolar no `L2Wnd`; só a MacroEditWnd usa esse controle.
- Divergências: Tab entre os campos (`SetTabOrder`) não foi feito; o `MultiEdit` da descrição é uma caixa simples.

## Entrega

- **Commits:** `b32c5e9` (macros e `MacroTests`), `3f3067b` (ScrollArea), `11e6563` (evidências e K20).
- **Testes:** `MacroTests` (EV_MacroList, contador, ícone, RequestMakeMacro, plano com /delay, linha solta); `sh Docs/tools/run_tests.sh` 627/627.
- **Falta / fora do escopo:** Tab entre os campos; teste ao vivo (criar, editar, apagar e executar no aCis).

## Pedidos

Nenhum por enquanto.
