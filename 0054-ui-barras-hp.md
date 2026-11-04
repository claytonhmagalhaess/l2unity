# #0054 — Texto das barras de CP/HP/MP sobreposto

| Campo | Valor |
|---|---|
| Vaga | ui3 (vaga nova, `worktrees\ui3`) |
| Branch | `feat/ui-barras-hp` (nasce de `feat/ui-revisao`, #0047) |
| Estado | fazendo |
| Spec | `analises\interface-p166\01_janelas.md`, `02_interacoes.md`; `analises\l2-interlude\client_spec\` (StatusWnd, NCStatusBarCtrl/gauge, 89, 90); `Docs/revisao_ui.md` (#0047) |
| Sessão | ui: barras de HP (#0054) |
| Criada | 2026-11-04 |

## Objetivo

O usuário recebeu um buff que aumenta o HP máximo, com a vida ainda não cheia. Na StatusWnd, o texto do HP (por exemplo "4087/5630") passou a ficar sobreposto e ilegível.

Esta tarefa confere como o original desenha o texto das barras (fonte, tamanho, formato, centralização, recorte ou encolhimento quando o número cresce) e corrige no porte. A correção vale para a StatusWnd e para as outras barras que usam o mesmo controle: alvo, grupo, pet e servo.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Levantamento, com evidência (xdat da StatusWnd, `StatusWnd.uc`, o controle de barra do NWindow no Tryskell ou na REA, fonte do `L2Font`), de:
  - como o original desenha o texto "atual/máximo" das barras de CP/HP/MP (e da EXP);
  - a fonte, os dígitos, o espaçamento, o alinhamento e a posição;
  - o que acontece quando o texto não cabe;
  - quais janelas usam o mesmo controle.
- [ ] O texto das barras fica legível e igual ao original com valores de 1 a 5 dígitos, inclusive depois de um buff que aumenta o máximo sem a barra estar cheia, e se atualiza na hora quando o máximo e o atual mudam.
- [ ] A mesma correção vale para as outras janelas que usam o mesmo controle, ou fica registrado por que não vale.
- [ ] O que for de `Scripts\Net\` (por exemplo, o StatusUpdate do máximo de HP com buff) vira pedido para a net, e o que for do `App.cs` vira pedido para a coordenadora, em `tarefas\pedidos\`.
- [ ] Testes EditMode (texto e layout da barra com vários valores). `sh Docs/tools/run_tests.sh` sem falhas novas em relação a `feat/ui-revisao`.
- [ ] Capturas antes e depois em `Docs/evidencias/barras-hp/`, tiradas no aCis local com um buff de HP máximo, e uma linha em `Docs/validacao.md`.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->
- 2026-11-04 — branch `feat/ui-barras-hp` criado de `feat/ui-revisao` (`b88e07c`); linha de base `run_tests.sh` em batchmode: 750/750.
- 2026-11-04 — causa achada e corrigida: `L2Digits.Draw` reaproveita container e glifos; recorte da barra; `StatusBarTextTests` (11). `run_tests.sh` 761/761 (`851bc82`).

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

Nenhum por enquanto.
