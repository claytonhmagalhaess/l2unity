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
- 2026-11-05 — branch `feat/world-npcs-orientacao` criado de `integracao/combate` (4ccc06c). Pedido de teste 0062-1 à sessão de testes: ao vivo `e40d43c` × `4ccc06c`, monstro andando, correndo, golpeando e arqueiro, com o log `[orient]` (Heading, DesiredYaw, FacingHeading, direção do movimento, ângulo do Model).
- 2026-11-05 — causa achada fora do Unity: os NPCs ficam sem a correção da frente da malha (detalhe em Decisões). Correção e `ActorFrontTests` em `57df023`. Pedido 0062-2: suíte em 57df023 (esperado 970) e ao vivo da correção.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->
**Causa: o `Model` dos NPCs ficava sem a correção da frente (antigo, desde a importação `0f6ba27`; regressão a confirmar no 0062-1).**
- **Observado** (`Render/Actor.cs`, `AlignForward`/`FootDirection`): o porte media a frente do rig pelos ossos do pé com os nomes que o three.js usava (`bip01_l_toe0`), porque o `PropertyBinding.sanitizeNodeName` do three troca espaço por `_`. O glTFast mantém o nome do nó (`GameObjectInstantiator`, `m_Nodes[i].name = name`). Os rigs de jogador já vêm com `_` (`Bip01_L_Toe0`), mas os de NPC vêm com espaço (`Bip01 L Toe0`). Nos NPCs o `FootDirection` devolvia null, o `Model` ficava em identidade e o corpo apontava 90° à esquerda do heading.
- **Observado** (glb do cache, `l2anim/export/cache/anim`, 467 rigs medidos): na pose de referência, a frente do rig é +Z do glTF/Unity em 378 rigs com pés. Em 32, o `Toe0` aponta para trás (−Z), com a cabeça à frente (+Z): wyvern, Valakas, avestruzes, dinossauros, ant, ogre, crokian e outros. Nesses, a medida pelos pés daria 180° de erro. 55 rigs não têm pé.
- **Observado** (umodel `-uc`, `#exec MESH ORIGIN`): o `RotOrigin` das malhas esqueléticas é `P=0 Y=49152 R=0` (−90°) em 474 dos 478 meshes do npcgrp (todos os meshes de NPC, com o `MFighter_m001_b` de amostra de jogador). As exceções, com `Y=0`, são `susceptor_prime_m00`, `skill_dummy_00_m00`, `skill_dummy_01_m00` e `valakas_f_dummy_m00`. O psk/glb do umodel sai sem o `RotOrigin`, e o engine o aplica entre o mesh e o ator: a frente (+Y do mesh do UE) vira +X do ator, o heading 0. Isso dá os mesmos −90° que a medida pelos pés já dava aos jogadores.
- **Inferido / A validar** (pseudocódigo): `USubSkeletalMeshInstance::MeshToWorld` (0x1404c, `system_Tryskell_RE/engine.c:506301`) monta a matriz do mesh a partir de triplas do `USkeletalMesh` (+0x84 e +0x9c), que seriam `MeshScale`/`MeshOrigin`/`RotOrigin` do `ULodMesh`. O papel de cada offset não foi confirmado.
- **Decisão:** o `Model` usa o `RotOrigin` por nome da malha principal (`Actor.MeshRotOriginYawOf`): 49152, ou 0 nas 4 exceções, pela primeira parte do manifesto. Sai a medida pelos pés no `AlignForward`. O `FootDirection` passa a aceitar os dois nomes e fica só para o diagnóstico (`FacingHeading`). `Render/Actor.cs` foi liberado para esta correção.

**O que não é a causa (rotação do pawn):**
- **Observado:** andando, o porte põe `DesiredYaw` na direção do passo (`PawnMotion.Step`), como o `AController::MoveTo` (FocalPoint além do destino, `00004.c:32393-32408`) com o `rotateToward` a cada tick do `AController::Tick` (`00011.c:11589-11599`). No golpe, ele vira para o alvo enquanto dura o clipe (o arco só até soltar a flecha), como o `SwordAttackProcess`/`BowAttackProcess` (`00001.c:8933-8940`). O `physicsRotation` gira a `RotationRate` (`00006.c:15686`), e o porte usa 65000/s (o valor do `LineageMonster.u` está **A validar**, mas não muda a direção final).
- **Observado (aCis):** em combate o servidor não manda pacote de rotação. O heading do `doAttack` fica só no servidor (`Creature.java:747`), e o `StopRotation`/`StartRotation` de NPC só aparece no Bluff (nota da #0061). Os headings dos pacotes (NpcInfo, ValidateLocation) só valem para o pawn parado.
- Com o `Model` certo, o `Heading` que o porte já calculava passa a ser o que se vê.

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

Nenhum por enquanto.
