# #0056 — Personagens e monstros flutuando fora de Giran

| Campo | Valor |
|---|---|
| Vaga | render |
| Branch | `feat/render-pawns-chao` (nasce de `main`) |
| Estado | fazendo |
| Spec | `analises\l2-interlude\client_spec\` (posição do pawn, terreno, geodata/colisão, `PawnMotion`/`PHYS_Walking`); `Render/GeoTerrain.cs`, `Render/UeTerrain.cs`, `Render/Actor.cs`, `World/PawnMotion.cs`, `World/Movement.cs`, `World/Coords.cs` |
| Sessão | render: pawns flutuando (#0056) |
| Criada | 2026-11-04 |

## Objetivo

O usuário validou o `main` no aCis local. Em Giran os pés ficam no chão, mas fora da cidade principal personagens e monstros aparecem flutuando acima do terreno. O exemplo foi Turek / Orc Barracks: o jogador e os orcs ficam no ar, longe do chão.

No original, todo pawn fica com os pés no chão do terreno ou da malha onde está. Esta tarefa acha a causa e corrige. Causas possíveis:
- o Z do servidor sem o ajuste ao chão;
- a altura do terreno do porte diferente da do original (heightmap, escala, deslocamento por zona);
- a meia altura de colisão aplicada duas vezes;
- outra causa.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Causa registrada em Decisões e REA com a evidência: pseudocódigo do engine no Tryskell ou na REA (como o cliente põe o pawn no chão: `PHYS_Walking`, `FindFloor`/trace para baixo, `CollisionHeight`, `PrePivot` do mesh do pawn), dados do terreno (`TerrainInfo`: escala, `Location`, heightmap) e o Z do servidor (aCis/geodata), comparando Giran, onde está certo, com o Turek, onde está errado.
- [ ] Jogador, outros jogadores, NPCs e monstros ficam com os pés no chão fora das cidades: Turek, campos de Gludio e Dion e mais uma zona com relevo. Também ficam no chão parados, andando, correndo, em combate e depois de teleporte. Giran continua certo.
- [ ] Se a causa for de outra área (por exemplo a posição em `World/` ou um pacote em `Net/`), o pedido vai para a vaga correspondente em `tarefas\pedidos\`, com o trecho exato. O que precisar de reexportação para o `shared` vira pedido para a coordenadora com o comando.
- [ ] Testes EditMode para a regra de altura (pawn sobre o terreno e sobre a malha, com e sem colisão). Suíte sem falhas novas em relação ao `main`, rodada pela sessão de testes.
- [ ] Capturas antes e depois em `Docs/evidencias/pawns-chao/`, tiradas pela sessão de testes no aCis local nas zonas acima, e uma linha em `Docs/validacao.md`.

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
