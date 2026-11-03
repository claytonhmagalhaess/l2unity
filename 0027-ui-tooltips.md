# #0027 — Mecanismo de tooltip do original e os tipos `Inventory*`, `Skill`, `Shortcut`, `AbnormalStatus`, `Action`, `Text` (T3)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-tooltips` |
| Estado | aberta |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T3; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

Mecanismo de tooltip do original e os tipos `Inventory*`, `Skill`, `Shortcut`, `AbnormalStatus`, `Action`, `Text`, com o comportamento do Interlude levantado na #0024 (T3 do 05 §2). Tamanho estimado: G (dividir: mecanismo + item; skill + buff + atalho).

Ordem: 2ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-dialogbox` (#0025). Depende de: nenhuma.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: §1.2 do 02 (sem atraso, posição, moldura, cache) e a ordem de campos do §2 do 02, com as sysstrings e as cores de `IL:ToolTip.uc`.
- [ ] Feito em duas partes, com commits separados: (a) mecanismo (sem atraso, acima do slot ou abaixo se não couber, moldura de 9 partes, cache) + tooltip de item e as 5 variantes de preço; (b) skill, buff (`AbnormalStatus`), atalho, ação e texto.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes: nenhum (dados de item e skill dos `.dat` do cliente; `GetOperateType`, `GetMpConsume`, `GetCastRange`).
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/tooltips/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

Nenhum por enquanto.
