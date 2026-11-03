# #0025 — DialogBox completo (NumberPad, edit, progresso, Enter = padrão) (T1)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-dialogbox` |
| Estado | fazendo |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T1; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

DialogBox completo (NumberPad, edit, progresso, Enter = padrão), com o comportamento do Interlude levantado na #0024 (T1 do 05 §2). Tamanho estimado: M.

Ordem: 1ª de 20 na cadeia da vaga `ui`; o branch nasce de `main`. Depende de: nenhuma.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: os 8 `EDialogType` de `IL:UICommonAPI.uc:4-14` com o layout de `layout/DialogBox.txt`; `EV_DialogOK/Cancel` com `DialogIsMine`.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/dialogbox/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — branch `feat/ui-dialogbox` criado do `main` (0d71a77); estado `fazendo`.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

Nenhum por enquanto.
