# #0035 — Cliques pequenos e divergências do HUD (T11)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-cliques-hud` |
| Estado | fazendo |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T11; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

Cliques pequenos e divergências do HUD, com o comportamento do Interlude levantado na #0024 (T11 do 05 §2). Tamanho estimado: P.

Ordem: 3ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-tooltips` (#0027). Depende de: nenhuma.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: StatusWnd → `RequestSelfTarget`; MagicSkillWnd com clique simples; MenuWnd com sysstrings e Map → minimapa; TargetStatusWnd sem os botões extras e com modo expandido.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes: `Action` sobre o próprio objectId [V].
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/cliques-hud/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — branch `feat/ui-cliques-hud` criado de `feat/ui-tooltips` (e0adc57); estado `fazendo`.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

Nenhum por enquanto.
