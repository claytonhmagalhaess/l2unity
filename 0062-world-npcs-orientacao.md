# #0062 — NPCs andando e atacando de lado

| Campo | Valor |
|---|---|
| Vaga | world (com permissão para `Render/Actor.cs`, ver abaixo) |
| Branch | `feat/world-npcs-orientacao` (nasce de `integracao/combate`, a prévia com #0058–#0061) |
| Estado | fazendo |
| Spec | `analises\l2-interlude\client_spec\` (rotação do pawn, `Rotation`/`DesiredRotation`, `RotationRate`, `physicsRotation`, animação de andar e correr, orientação da malha); `World/PawnMotion.cs`, `World/Movement.cs`, `World/Entity.cs`, `Render/Actor.cs` (hierarquia Root → Yaw → Model, correção da frente) |
| Sessão | world: orientação dos NPCs (#0062) |
| Criada | 2026-11-05 |

## Objetivo

O usuário testou a prévia `integracao/combate`. O soulshot funcionou, mas as animações dos NPCs estão erradas:
- o NPC caminha de lado (o corpo não aponta para onde ele anda);
- ao atacar, ele vira de lado em vez de ficar de frente para o alvo.

Esta tarefa acha a causa e corrige, para o NPC andar, correr, girar e atacar com o corpo na direção certa, como no original. A causa pode estar em vários lugares:
- a rotação do pawn (o heading do servidor, o giro pelo `Focus`/`DesiredRotation` das #0059 e #0061);
- a correção da frente da malha no `Actor` (`Model`, `FootDirection`);
- o yaw vindo do pacote;
- a mistura do giro do tronco.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] **Regressão ou antigo:** primeiro, compare o `main` (`e40d43c`) com a prévia (`4ccc06c`) no mesmo lugar e com os mesmos monstros, pela sessão de testes. Registre se o defeito é antigo ou se veio da #0059, da #0060 ou da #0061, e qual commit o introduziu (bisect se precisar).
- [ ] Causa registrada em Decisões e REA com evidência: o pseudocódigo do engine (como o pawn ganha a rotação andando, no `MoveToward`/`MoveTo`, e no golpe, no `SwordAttackProcess`/`BowAttackProcess`; a `RotationRate`; o `bRotateToDesired`), o heading que o aCis manda e os dados da malha (a frente do modelo, para cada raça e tipo de NPC afetado).
- [ ] NPCs e monstros andam, correm, param e atacam com o corpo na direção certa, para corpo a corpo, arqueiro e mago. O jogador e os outros jogadores continuam certos.
- [ ] A mudança mínima. A área é a world, e `Render/Actor.cs` está liberado só para a correção da orientação, registrada em Decisões. O que for do `App.cs` vira pedido para a coordenadora.
- [ ] Testes EditMode para a regra corrigida. Suíte sem falhas novas em relação à prévia (959/959), rodada pela sessão de testes.
- [ ] Capturas ao vivo antes e depois (rajadas de quadros), tiradas pela sessão de testes no aCis local: monstro andando, correndo até o jogador e atacando (corpo a corpo e arqueiro). Ficam em `Docs/evidencias/npcs-orientacao/`.

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
