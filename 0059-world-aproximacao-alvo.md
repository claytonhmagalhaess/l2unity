# #0059 — Personagem continua andando até o alvo mesmo ao lado dele

| Campo | Valor |
|---|---|
| Vaga | world |
| Branch | `feat/world-aproximacao-alvo` (nasce de `main`) |
| Estado | fazendo |
| Spec | `analises\l2-interlude\client_spec\` (movimento do pawn, `MoveToPawn` 0x60, `MoveToLocation` 0x01, `StopMove` 0x47, `ValidateLocation` 0x61, `Attack` 0x05, alcance e raio de colisão); `World/Movement.cs`, `World/PawnMotion.cs`, `World/ActionLatch.cs`, `World/Combat.cs` |
| Sessão | world: aproximação do alvo (#0059) |
| Criada | 2026-11-05 |

## Objetivo

Ao pegar um alvo e atacar ou interagir, às vezes o personagem continua andando em direção ao alvo mesmo já estando ao lado dele. Ele encosta, empurra ou anda no lugar em vez de parar e atacar ou falar.

No Interlude ele para à distância certa (alcance da arma, ou da interação mais os raios de colisão) e se vira para o alvo. Esta tarefa levanta no material de análise como o original aproxima e para, e replica no porte.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Levantamento com evidência no pseudocódigo (Engine.dll em `analises\l2-interlude\re\` e no Tryskell: o handler do `MoveToPawn` 0x60 e a distância de parada que ele usa; `StopMove` 0x47; a física de andar até um pawn com `CollisionRadius`; o que o cliente faz quando já está dentro do alcance; a rotação para o alvo) e no aCis, somente leitura (o que o servidor manda ao atacar ou interagir de perto e de longe, e o `offset` do MoveToPawn). Registre em Decisões e REA a regra de parada do original e onde o porte diverge.
- [ ] O personagem para à distância certa e se vira para o alvo, sem continuar andando, em:
  - ataque corpo a corpo (alvo parado e alvo andando);
  - arco;
  - falar com NPC;
  - pegar item;
  - alvo que já está ao lado no momento do clique.

  O mesmo vale para os outros pawns que o servidor move até um alvo (monstros atacando o jogador).
- [ ] O que for do `App.cs` vira pedido para a coordenadora com o trecho exato; o que for de `Net/` vira pedido para a net. A física de terreno e o desenho no chão são da render (#0056, no `main`): não mexa em `Render/GeoTerrain.cs`.
- [ ] Testes EditMode para a regra de parada (distâncias, raios, alvo em movimento). Suíte sem falhas novas em relação ao `main`, rodada pela sessão de testes.
- [ ] Capturas ao vivo antes e depois, tiradas pela sessão de testes no aCis local (ataque a um monstro perto e longe, falar com NPC), com o log das distâncias, em `Docs/evidencias/aproximacao-alvo/`.

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
