# NPCs, monstros e bosses: movimento, rotação, animação e combate (#0061)

Levantamento do que o cliente original (Interlude) faz com o pawn de um NPC e do estado no porte.

**Fontes:**
- pseudocódigo do `engine.dll` em `analises\l2-interlude\re\decomp_all\engine\` (`arquivo.c:linha`, endereço do export);
- o `.int` decifrado pelo l2anim (`tools\l2anim\dec\int`), o `Npcgrp` e o `data.js` do l2anim;
- o aCis local, somente leitura (`C:\Workspace-java\aCis_gameserver`), para saber quais pacotes o servidor manda e quando.

Notas completas do estudo: `0061-engine-npcs.md` e `0061-acis-npcs.md`, na pasta de notas da coordenadora.

**Marcas:**
- **O** = observado no código; **I** = inferido; **V** = a validar.
- **Estado:**
  - igual;
  - corrigido (commit);
  - pedido NNNN;
  - proposta: lacuna conhecida, sem mudança agora;
  - da #0059 / #0060: feito ou pedido pela outra tarefa.

O relato do usuário: o Archer of Greed (20660, `skeleton_archer`, arco) bate sem estar de frente para o jogador, e o movimento parece "meio bugado". As causas no porte eram as linhas R4, M2, M3 e A5. A R3 (seguir o alvo e parar de seguir no golpe) é da #0059, e está neste branch por merge.

## Rotação

| # | Comportamento do original | Evidência | Porte | Estado |
|---|---|---|---|---|
| R1 | Gira para o `DesiredRotation` a `RotationRate.Yaw` por segundo (`fixedTurn`, `_ftol(rate·dt)`). | `APawn::physicsRotation` 0x1030b7da, `00006.c:15682` (O); `FUN_107a6660` = `_ftol` (I) | `PawnMotion.Step`: `Movement.RotationRate` = 65000 (`LineageWarrior.u`) para todos | igual. O valor por classe de NPC está no `.u`, não exportado (V) |
| R2 | Andando, o `MoveTo` sem Focus põe o `FocalPoint` além do destino: o pawn vira para a direção do movimento. | `AController::MoveTo` 0x10308ef4, `00004.c:32393` (O) | `PawnMotion.Step`: `DesiredYaw` = direção do destino | igual |
| R3 | `MoveToPawn`: o alvo é Focus e o pawn olha para ele andando e parado. O `StopMove` limpa o Focus e mantém o heading. | `AController::MoveToward` 0x103015a5, `StopMove` 0x10310140 `00009.c:8736` (O) | `Entity.Step` com `Follow` | da #0059 (`7fccefe`) |
| R4 | No golpe: o `SwordAttackProcess` grava `DesiredRotation.Yaw` para o alvo **em todo tick**, em todas as fases. O `BowAttackProcess` grava nos estados 1, 4 e 5, até soltar a flecha (`AttackShot`), e não no 6. | `00001.c:8845` (antes do `switch`), `00004.c:1576` (O) | `Entity.Animate` vira para o alvo até `Combat.TrackTime` | corrigido (`9c610a7`): o arco parava de virar só no fim do clipe |
| R5 | No fim do golpe, nenhuma rotação: fica o último yaw. O `OnAttack` grava o `FocalPoint` = centro do alvo + 30 z, e o `AController::Tick` continua o `rotateToward` enquanto `bRotateToDesired`. | `AttackStop` 0x1030635c `00003.c:6041`, `00001.c:25047-25063`, `AController::Tick` 0x103137aa (O/I) | Fica o último yaw do golpe | proposta: virar de volta para o ponto do início do golpe depende da ordem de tick entre controller e pawn (V) |
| R6 | `StopMove` (0x47) não usa o heading do pacote. `ValidateLocation` (0x61) só usa o heading no próprio jogador. | `OnStopMove` 0x1030a53d `00005.c:25215`, `OnValidateLocation` 0x1030b668 (O) | idem | igual |
| R7 | O servidor não manda rotação em combate. `StartRotation`/`StopRotation` só no Bluff. | aCis `EffectBluff.java:31-32`, `AbstractAI.java:541` (O) | 0x62/0x63 no `App.cs` | igual |
| R8 | A cabeça olha para o alvo (até 2048 unidades, yaw ±90°, pitch ±5000). | `APawn::TickSpecial` 0x10314f4c `00012.c:9804-9903` (O) | — | pedido 0065 (render) |
| R9 | Cast de skill: giro de 0x50000/s (quase instantâneo); os NPCs 12211, 12372 e 12375 giram a 0x3a2e/s. | `SetMagicInfo`, `MagicProcess` (O, nota Engine §2) | `Entity.Cast` vira para o alvo a 65000/s | proposta |

## Movimento

| # | Comportamento do original | Evidência | Porte | Estado |
|---|---|---|---|---|
| M1 | Velocidade = base do `NpcInfo` (runSpd/walkSpd) × moveMul (`0x6b4`). O `ChangeMoveType` troca run/walk, e o aCis manda junto um `NpcInfo` inteiro. | `OnChangeMoveType` 0x103024dc `00000.c:24824` (O); aCis `Creature.java:2052-2071` | `Entity.SetSpeeds`, `World.UpsertNpc` | igual |
| M2 | **NPC corre desde o primeiro tick.** A fase de caminhada antes de correr (`pawn+0x6cc`/30) só vale para jogadores: o `0x6cc` (walkanimframe do chargrp) só é gravado pelo `OnUserInfo` e pelo `OnCharInfo`. | `APawn::GetCurSpeed` 0x103138bd `00011.c:12472`; gravações em `00011.c:12871`, `18326`, `00022.c:21543`, `22051` (O); `UpdateMovementAnimation` com `bNpc` (O) | `PawnMotion.WalkPhase` = 0 para NPC | corrigido (`1de4edf`): o monstro andava 0,4 s a 40 em vez de 174 no começo de cada perseguição |
| M3 | `ValidateLocation` em outro pawn parado: só anda até a posição (2 < d < 200) com `pawn+0x62c == 0` (sem golpe nem cast). Acima de 200 reposiciona sempre. | `OnValidateLocation` `00006.c:14322` (O) | `PawnMotion.ServerValidate(…, inAction)`, `Entity.InAction` | corrigido (`9c610a7`): o aCis manda `ValidateLocation` ao selecionar o alvo (`Player.java:3364`), e o NPC andava no meio do golpe, cancelava o ataque e virava para o ponto da correção |
| M4 | Correção de sincronia: `AddMoveTo` / `AddMoveToward` e `AdjustPawnLocation` > 200. | `OnMoveToLocation` 0x1030f1e1 `00008.c:21324` (O) | `PawnMotion.ServerMove`/`ServerMoveToPawn` | igual (#0059 no `MoveToPawn`) |
| M5 | Seguir o alvo: o aCis manda `MoveToPawn` com offset = raios + alcance (+15/−30), reenviado a cada tick da AI (1 s), com trava de 500 ms (local). Com caminho de geodata, manda `MoveToLocation` por nó. Chegada: `StopMove` só depois de um `MoveToPawn`. | aCis `AttackableAI.java:439-448,707-716`, `AbstractAI.java:427-487,547-555` | `Entity.ServerMoveToPawn`, regra de parada | da #0059 |
| M6 | Voltar ao spawn: walk (`ChangeMoveType`), `MoveToLocation` em linha reta, sem `StopMove` na chegada. RaidBoss e GrandBoss voltam por teleporte (local). | aCis `Attackable.java:403-427`, `RaidBoss.java:65-130` | `ServerMove` + `Running = false` | igual |
| M7 | Andar aleatório: 1/30 por tick (~30 s), até 100 do spawn, em walk. Boss e guarda não andam. | aCis `AttackableAI.java:378-395` | `ServerMove` | igual |
| M8 | Fugir: o Fear manda `StopMove` e depois `MoveToLocation` ±500 em run a cada tick. O arqueiro com o alvo a ≤ 60 + raios recua ±300 com 50% de chance. Não existe fuga por HP no core. | aCis `EffectFear.java:73-86`, `AttackableAI.java:690-701` | `ServerMove` | igual |
| M9 | Z no chão. | #0056/#0057 | `Movement.Land` | igual (no `main`) |
| M10 | Movimento cancela a ação: `OnMoveToLocation` e `OnMoveToPawn` chamam `NActionStop`. | `00008.c:21363`; nota da #0059 (O) | `Entity.Animate`: andar cancela golpe e cast | igual |

## Animações

| # | Comportamento do original | Evidência | Porte | Estado |
|---|---|---|---|---|
| A1 | Parado: `GetCurWaitAnimName`. Em combate (`ctrl+0x41c` bit1, `AutoAttackStart` ou `isInCombat` do `NpcInfo`) toca AtkWait; senão Wait. Taxa moveMul, tween 0.2. | `00003.c:21124`, `OnAutoAttackStart` 0x10313a98 (O) | `Entity.Animate` (`InCombat`) | igual. O aCis manda `AutoAttackStop` 15–16 s depois do último golpe |
| A2 | Girando parado a mais de 1000 u/s: TurnAnim. | `UpdateMovementAnimation` 0x10302699 `00000.c:27127` (O) | `Movement.TurnAnimRate` | igual |
| A3 | Andar/correr: Run desde o primeiro quadro no NPC; tween 0.1 (0.4 saindo de nenhuma animação). | idem (O) | `Entity.Animate` + M2 | corrigido (`1de4edf`) |
| A4 | **Taxa de Walk/Run = XxxAnimRate[arma] × `npc_speed` do Npcgrp × moveMul.** | `GetWalkAnimRate` 0x1030f65a `00008.c:27141`, `GetRunAnimRate` 0x10313a70 `00011.c:14212`; `npc_speed` → `FL2NpcData+0x58` em `FL2GameData::NpcDataLoad` 0x10307888 `00004.c:1206` (O) | `Movement.MoveAnimRate`, `Entity.NpcSpeed` | corrigido (`b968f71`): o Archer of Greed (`npc_speed` 1,243) corria com as pernas 20% lentas |
| A5 | **Índice de arma do NPC** (`CurWeaponType`, `pawn[0x71d]`) = `User::GetAnimType` pelo handness, igual ao do jogador. Indexa todas as linhas do `.int`. | `User::GetAnimType` 0x103036fc `00001.c:15851`, `User::SetPawnResource` 0x10314583 `00011.c:30459` (O) | `World.UpsertNpc`: `Widx = WeaponIndex(rhand)` | corrigido (`05e2b56`): 1732 NPCs armados usavam as animações de mão vazia (B16 da #0060) |
| A6 | Golpe: Atk01..03 por `appRand()%3`, taxa `atkMul·AtkNNAnimRate·1.1`, tween `0.1/(atkMul·AtkNNAnimRate)`. Arco: Atk01, taxa `atkMul·Atk01AnimRate`, tween 0.2/…. | `00001.c:8941`, `00004.c:1576` (O) | `Combat.AttackAnim` | igual (M3 da `validacao.md`) |
| A7 | Fim do golpe: `AttackStop` toca o wait com tween 0.1 se a animação de ataque ainda estiver ativa. | `00003.c:6075-6080` (O) | Volta ao wait com tween 0.2 | proposta (diferença de 0,1 s na mistura) |
| A8 | Cast de skill do NPC: a última fase usa o `MobSkillAnimgrp` (npcId, skillId). | `SetSkillAnim` (O) | `Skills.CastPlan("npc", …)` com o `msa` do `data.js` | igual |
| A9 | Levar dano: não existe animação de dano nativa. A reação é o Spine2 dobrando ~27° em 0,06 s e voltando em 0,19 s. | `GetDamageAnimName` só como getter; `APawn::SpineRotation` 0x103134c6 `00011.c:8601` (O) | — | pedido 0063 (#0060), vale para NPC |
| A10 | Morte: `OnDie` faz `StopMove`, sai do combate, `NActionStop` e toca Death (SitDeath se sentado); depois DeathWait. | `00006.c:14535-14716` (O) | `Entity.SetDead` | igual (a limpeza do estado é da #0060, `810e9dd`) |
| A11 | Corpo: o aCis manda `DeleteObject` 7 s depois do `Die` (14 s com spoil). O cliente faz fade de 2 s e afunda o corpo (`FNDeleteNpcAction`); o NPC vivo some com fade sem afundar. | `OnDeleteUser` 0x10307914, `00023.c:15650/15714` (O); aCis `Npc.java:453`, `DecayTaskManager.java:67` | `World.Remove`: some na hora | pedido 0065 (render; a troca no `World.Remove` fica comigo) |
| A12 | Spoil: efeito `s_u008_spoil` no corpo. | `OnDie` (O) | — | pedido 0065 |
| A13 | SocialAction: ids 1..5 tocam `NpcSocialAnimName[id-1]` (do `.int`) com moveMul, tween 0.1, uma vez; o 15 é efeito. O aCis manda 2/3 ocioso (10–40 s) e 0–7 ao falar. | `OnSocialAction` 0x1030c243 `00006.c:29124` (O); `Pawn.uc:361`; aCis `RandomAnimationTaskManager.java` | `Entity.Social` | corrigido (`747da34`); falta o handler e a tabela: pedido 0064 |
| A14 | Taxa da animação pela velocidade: as de mover e parar usam moveMul (0x6b4); as de golpe, atkMul (0x6b0); as de skill, mAtkSpd/333 (0x6b8). | `OnNpcInfo` (I forte: a ordem dos dois doubles), `00022.c:2088+` | `Entity.Animate`, `Combat`, `Skills` | igual |
| A15 | Tamanho: `SetCollisionSize(collisionRadius, collisionHeight)` do pacote. O `OnNpcInfo` não aplica escala do npcgrp. | `OnNpcInfo` (O); escala de classe (V) | `CollisionRadius`/`Height`, modelo na escala do asset | igual |

## Combate do NPC

| # | Comportamento do original | Evidência | Porte | Estado |
|---|---|---|---|---|
| C1 | Ciclo: o aCis manda `AutoAttackStart` uma vez (renova sem pacote), depois `Attack` a cada `timeAtk` (470000/PAtkSpd; arco 1500·345/PAtkSpd) e `AutoAttackStop` 15 s depois do último. Sem `StopMove` quando o alvo está andando dentro da tolerância. | aCis `Creature.java:740-841`, `AttackableAI.java:719`, `AttackStanceTaskManager.java:20` | `Combat.ServerHits`, `Entity.Attack` com `StopMoving` | igual (#0059 para o `StopMove`) |
| C2 | `OnAttack`: `AdjustPawnLocation` pela posição do pacote, `StopMove`, `NActionStop`; ação 1 corpo a corpo, 2 arco, 7 arremesso (índice 6), 8 especial. | `00011.c:17014` (O) | `Entity.Attack(alvo, x, y, z)` | igual (#0059 / #0060) |
| C3 | Golpes duplos (dual): dois golpes em `timeAtk/4` e `timeAtk/2`. Pole: vários alvos no mesmo `Attack`. | aCis `Creature.java:757-770` | `Combat.ServerHits("dual")`, `OnAttack` | igual |
| C4 | Boss com área e skills: `StopMove` antes do cast. Aura e área têm o lançador como alvo, sem pacote de rotação. | aCis `AttackableAI.java:504-1101`, `Creature.java:1189-1194,1444` | `OnMagicSkillUse`, `Entity.Cast` (não vira para si mesmo) | igual |
| C5 | NPC contra NPC (guarda × monstro, faction): mesmos pacotes. O atingido por NPC não recebe `AutoAttackStart` por ter sido atingido. | aCis `AttackableAI.java:110-138,1340-1380`, `Creature.java:3983` | Sem diferença por tipo de alvo | igual |
| C6 | Golpe de arco: a flecha sai no `AttackPreShot` (presa ao osso) e voa no `AttackShot`. | `BowAttackProcess` estados 4/5 (O); `skeleton_archer` atk01: PreShot 0,2945, Shot 0,6142 | `res.Shots` (AttackShot) para o `OnBowShot` | igual |

## Fora do escopo e a validar

- Os defaults por classe no `.u` (`RotationRate`, `bSpineRotation`): sem exportação no projeto.
- A ordem de tick entre `AController::Tick` e `APawn::TickSpecial` (R5).
- Os flags do `OnDeleteUser` (A11).
- Os corpos de `Enable/DisableSpineRotation`.
- A ordem atkMul/moveMul no `NpcInfo` (A14): precisa de um dump de pacote.
