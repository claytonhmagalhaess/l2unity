# #0057 — Personagem flutuando depois do unstuck e do teleporte

| Campo | Valor |
|---|---|
| Vaga | world |
| Branch | `feat/world-teleporte-chao` (nasce de `main`) |
| Estado | fazendo |
| Spec | `analises\l2-interlude\client_spec\` (TeleportToLocation 0x28, ValidateLocation, StopMove, MoveToLocation, posição e Z do pawn, 94, 96); `World/Movement.cs`, `World/PawnMotion.cs`, `World/Entity.cs`, `World/World.cs`; despacho no `App.cs` |
| Sessão | world: teleporte e unstuck (#0057) |
| Criada | 2026-11-04 |

## Objetivo

O usuário usou o unstuck (`/unstuck`, que teleporta para a cidade) no aCis local. O personagem chegou a Giran flutuando, longe do chão, perto de um muro. A #0056 (vaga render) cuida dos pawns flutuando fora de Giran pelo lado do terreno. Esta tarefa cuida do caminho do teleporte, que pode estar errado mesmo onde o chão está certo. São três coisas:
- como o cliente recebe e aplica o teleporte (TeleportToLocation, o fade/loading, o Z do servidor, o ValidateLocation que o cliente manda depois);
- como põe o pawn no chão de novo;
- o que acontece com os outros pawns em volta.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Causa registrada em Decisões e REA com a evidência:
  - o pseudocódigo do engine no Tryskell ou na REA para o handler do TeleportToLocation, a física/ajuste ao chão logo depois e o `ValidatePosition`/`ValidateLocation` enviado;
  - o que o aCis manda no `/unstuck` (`Escape`, `TeleportToLocation`, Z da geodata), comparando o Z do pacote com o chão do porte no mesmo ponto.
- [ ] Depois do `/unstuck`, do teleporte pelo gatekeeper e do teleporte de GM, o personagem fica com os pés no chão no destino, em Giran e fora dela. Os pawns em volta também ficam no chão, e os pawns que somem e reaparecem no alcance também.
- [ ] Se a causa for a mesma da #0056 (terreno ou altura do chão na área render), a correção fica com a #0056. Esta tarefa registra a evidência do caminho do teleporte e combina pela coordenadora. Não mexa em `Render/GeoTerrain.cs`, `UeTerrain.cs` nem `Actor.cs`, que são da #0056.
- [ ] O que for do `App.cs` vira pedido para a coordenadora com o trecho exato, e o que for de `Net/` vira pedido para a net, em `tarefas\pedidos\`.
- [ ] Testes EditMode para a regra corrigida. Suíte sem falhas novas em relação ao `main`, rodada pela sessão de testes.
- [ ] Capturas antes e depois em `Docs/evidencias/teleporte-chao/`, tiradas pela sessão de testes no aCis local (unstuck, gatekeeper), e uma linha em `Docs/validacao.md`.

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
