# #0061 — NPCs, monstros e bosses: movimento e ataque iguais ao original

| Campo | Valor |
|---|---|
| Vaga | world, na pasta `worktrees\ui2` (emprestada: `world` está com a #0059 e `net` com a #0060) |
| Branch | `feat/world-npcs-movimento` (nasce de `main`) |
| Estado | fazendo |
| Spec | `analises\l2-interlude\client_spec\` (movimento e rotação do pawn, animação de NPC, 94/96: NpcInfo, MoveToLocation, MoveToPawn, StopMove, StopRotation/BeginRotation, Attack, AutoAttackStart/Stop, Die, SocialAction); `World/PawnMotion.cs`, `World/Movement.cs`, `World/Entity.cs`, `World/Combat.cs` |
| Sessão | world: NPCs e monstros (#0061) |
| Criada | 2026-11-05 |

## Objetivo

O usuário viu que a movimentação e o ataque de NPCs, monstros e bosses estão com defeitos. Exemplos:
- o monstro bate virado para o lado errado (na captura, o Archer of Greed atacando o jogador sem estar de frente para ele);
- movimento "meio bugado".

Esta tarefa estuda no material de análise como o cliente oficial move, gira e anima esses pawns e deixa o porte idêntico.

Divisão com as tarefas em andamento:
- **#0059** (vaga world): regra de parada à distância certa do alvo e o `Focus` no `MoveToPawn`, para todos os pawns. Use o que ela fizer; não reescreva.
- **#0060** (pasta net): sistema de ataque do lado do **jogador** (ataque automático, travas, Ctrl/Shift, animações do personagem).
- **Esta tarefa:** o lado dos NPCs, monstros e bosses.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] `Docs/npcs_movimento.md`: uma linha por comportamento do original para NPC, monstro e boss, com a evidência (pseudocódigo do Engine.dll e do LineageCreature em `analises\` e no Tryskell; `npcgrp`, as animações exportadas pelo `l2anim`; o aCis, somente leitura, para os pacotes e quando o servidor manda cada um) e o estado no porte: igual, corrigido, pedido ou proposta. A tabela cobre pelo menos:
  - **Rotação:** para onde o NPC olha ao atacar, ao ser atacado, ao andar e parado; a velocidade de giro (RotationRate); `BeginRotation`/`StopRotation`; virar para o alvo antes e durante o golpe; o arqueiro mirando.
  - **Movimento:**
    - andar e correr (velocidades do `NpcInfo` e do `ChangeMoveType`), interpolação, aceleração e parada;
    - seguir o alvo (`MoveToPawn`) e voltar ao spawn;
    - andar aleatório (wander);
    - fugir;
    - o Z no chão (já no `main`, #0056/#0057).
  - **Animações:**
    - parado, andando, correndo e em combate (wait, battle wait);
    - golpe e golpe de arco;
    - cast de skill do NPC;
    - levar dano, morte e corpo (fade e despawn);
    - SocialAction;
    - a velocidade da animação pela velocidade de ataque e de corrida;
    - o tamanho do NPC (`collisionRadius`/`Height`, escala do boss).
  - **Combate do NPC:** o ciclo de ataque com AutoAttackStart/Stop e Attack, o tempo do golpe, golpes duplos, o boss com área e skills, e o NPC que ataca outro NPC.
- [ ] As lacunas da área world são corrigidas por ordem de impacto, com um commit por correção e a evidência na mensagem. As de outras áreas viram pedido em `tarefas\pedidos\`:
  - `App.cs` para a coordenadora, com o trecho exato;
  - pacotes para a net;
  - animação e desenho do ator (`Render/Actor.cs`) para a render.
- [ ] Testes EditMode para cada regra corrigida (rotação, velocidade, escolha de animação). Suíte sem falhas novas em relação ao `main`, rodada pela sessão de testes.
- [ ] Capturas e logs ao vivo antes e depois, tirados pela sessão de testes no aCis local, em `Docs/evidencias/npcs-movimento/`:
  - monstro corpo a corpo e arqueiro atacando o jogador;
  - monstro fugindo e voltando;
  - NPC andando aleatoriamente;
  - um boss, se houver um acessível.

  Some uma linha na `Docs/validacao.md`.

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
