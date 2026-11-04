# #0051 — Character Status, Actions e Clã: validar e corrigir

| Campo | Valor |
|---|---|
| Vaga | ui, na pasta `worktrees\net` (emprestada: a `worktrees\ui` está com a #0048 e a `worktrees\world` com a #0050) |
| Branch | `feat/ui-status-acoes-cla` (nasce de `feat/ui-revisao`, #0047) |
| Estado | fazendo |
| Spec | `analises\interface-p166\01_janelas.md`, `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` (DetailStatusWnd, ActionWnd, ClanWnd, 89, 90, 91, 96); `Docs/revisao_ui.md` (#0047) |
| Sessão | ui: status, ações e clã (#0051) |
| Criada | 2026-11-04 |

## Objetivo

O usuário testou no aCis local e encontrou estes problemas:
- **Character Status** (DetailStatusWnd): o HP não aparece e os valores estão desalinhados.
- **Actions** (ActionWnd): as ações não funcionam (dança, convidar para o grupo e outras). Todas precisam ser revisadas.
- **Clã**: há texto em outro idioma, e o padrão é inglês.

Esta tarefa compara as três janelas com o original, item por item, e corrige tudo o que estiver diferente.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] **Character Status:** cada campo do original (nome, classe, nível, HP/MP/CP/EXP com barra e valor, STR/DEX/CON/INT/WIT/MEN, P. Atk., M. Atk., defesas, precisão, evasão, crítico, velocidades, peso, karma, PvP/PK, Sociality/Votes, clã, título etc.) aparece:
  - na posição, no alinhamento e no formato do original (xdat, `DetailStatusWnd.uc`);
  - com o valor certo do personagem, conferido contra o aCis.
- [ ] **Actions:** cada ação da `actionname-e.dat` (básicas, de grupo, sociais e de pet/servo) faz o que faz no original, conferido no aCis. Exemplos: sentar e levantar, andar e correr, atacar, pegar, convidar para o grupo, loja privada, fabricação, as 13+ sociais com a animação do personagem e o duelo. O resultado de cada uma fica numa tabela em `Docs/acoes.md`, com a ação, o pacote enviado (RequestActionUse id, RequestSocialAction id ou outro) e o estado: ok, corrigido ou pedido.
- [ ] **Atalhos de ação:** o clique simples, o duplo clique, o arrasto para a barra de atalhos e o uso pela barra seguem o original.
- [ ] **Clã:** nenhum texto fora do inglês. Cada rótulo, botão, coluna e mensagem vem da sysstring/systemmsg/`.int` em inglês do original, com o id certo, nunca de texto fixo no código. O mesmo vale para as outras janelas: os textos em português ou em outro idioma achados pelo caminho também são corrigidos ou listados.
- [ ] Todas as divergências são corrigidas ou registradas:
  - o que for de `Scripts\Net\` vira pedido para a net;
  - o que for do `App.cs` (por exemplo, o despacho de `RunCommand`/`DoAction`) vira pedido para a coordenadora, com o trecho exato;
  - a animação social que depender do personagem e não da UI vira pedido para a vaga correspondente.

  Os pedidos vão em `tarefas\pedidos\`.
- [ ] Testes EditMode para a lógica corrigida (montagem dos campos do status, mapa ação → pacote, textos por id). `sh Docs/tools/run_tests.sh` sem falhas novas em relação a `feat/ui-revisao`.
- [ ] Capturas antes e depois em `Docs/evidencias/status-acoes-cla/`, tiradas no aCis local, e uma linha em `Docs/validacao.md`.

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
