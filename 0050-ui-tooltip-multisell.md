# #0050 — Tooltip e informações de item na multisell

| Campo | Valor |
|---|---|
| Vaga | ui, na pasta `worktrees\world` (emprestada: a `worktrees\ui` está com a #0048) |
| Branch | `feat/ui-tooltip-multisell` (nasce de `feat/ui-revisao`, #0047) |
| Estado | fazendo |
| Spec | `analises\interface-p166\02_interacoes.md` (tooltips, `InventoryWithIcon` e variantes), `analises\l2-interlude\client_spec\` (MultiSellWnd, ItemInfo/tooltip, 96); `ItemInfoText.cs` e `L2Tooltip.cs` |
| Sessão | ui: tooltip da multisell (#0050) |
| Criada | 2026-11-04 |

## Objetivo

O usuário abriu uma multisell (Armor Shop → Store) no aCis local e viu dois problemas:
- passar o mouse sobre um item da lista mostra só o nome;
- o painel "Item information" mostra P. Def. 0 e Weight 0.

No original, o tooltip e o painel mostram as informações completas do item, inclusive os bônus de conjunto (set) das armaduras. Esta tarefa deixa o tooltip e o painel da multisell iguais aos do original, com as informações de set.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Levantamento, com evidência (`MultiSellWnd.uc` do `Interface.u` exportado, NWindow no Tryskell ou na REA, `itemname-e.dat`, `armorgrp`/`weapongrp`/`etcitemgrp`, `setitemgrp` ou o equivalente do Interlude), de:
  - o que o original mostra no tooltip ao passar o mouse sobre um item da lista, sobre um ingrediente e sobre o item escolhido;
  - o que mostra no painel "Item information" (P. Def./P. Atk., peso, grade, tipo, descrição, set e encantamento);
  - os textos das linhas e as cores.
- [ ] O tooltip dos itens da multisell segue o tipo de tooltip do original, com todas as linhas de item, como o do inventário.
- [ ] As armaduras de set mostram as informações de set como no original: as peças do conjunto, as peças que o jogador já tem equipadas e os efeitos do set completo e do escudo. Se o Interlude não mostrar set em algum desses lugares, isso fica registrado em Decisões com a evidência.
- [ ] O painel "Item information" mostra os valores reais (defesa, ataque, peso etc.) lidos dos dados do cliente, e não 0.
- [ ] O que depender de dado que o `shared` não tem vira pedido de exportação para a coordenadora. O que for do `App.cs` ou de `Scripts\Net\` também vira pedido. Os pedidos vão em `tarefas\pedidos\`.
- [ ] Testes EditMode para a montagem das linhas do tooltip e do set. `sh Docs/tools/run_tests.sh` sem falhas novas em relação a `feat/ui-revisao`.
- [ ] Capturas antes e depois em `Docs/evidencias/tooltip-multisell/`, tiradas no aCis local, e uma linha em `Docs/validacao.md`.

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
