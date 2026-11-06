# #0061 — NPCs, monstros e bosses: movimento e ataque iguais ao original

| Campo | Valor |
|---|---|
| Vaga | world, na pasta `worktrees\ui2` (emprestada: `world` está com a #0059 e `net` com a #0060) |
| Branch | `feat/world-npcs-movimento` (nasce de `main`) |
| Estado | no main |
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

- [x] `Docs/npcs_movimento.md`: uma linha por comportamento do original para NPC, monstro e boss, com a evidência (pseudocódigo do Engine.dll e do LineageCreature em `analises\` e no Tryskell; `npcgrp`, as animações exportadas pelo `l2anim`; o aCis, somente leitura, para os pacotes e quando o servidor manda cada um) e o estado no porte: igual, corrigido, pedido ou proposta. A tabela cobre pelo menos:
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
- [x] As lacunas da área world são corrigidas por ordem de impacto, com um commit por correção e a evidência na mensagem. As de outras áreas viram pedido em `tarefas\pedidos\`:
  - `App.cs` para a coordenadora, com o trecho exato;
  - pacotes para a net;
  - animação e desenho do ator (`Render/Actor.cs`) para a render.
- [x] Testes EditMode para cada regra corrigida (rotação, velocidade, escolha de animação). Suíte sem falhas novas em relação ao `main`, rodada pela sessão de testes.
- [ ] Capturas e logs ao vivo antes e depois, tirados pela sessão de testes no aCis local, em `Docs/evidencias/npcs-movimento/`:
  - monstro corpo a corpo e arqueiro atacando o jogador;
  - monstro fugindo e voltando;
  - NPC andando aleatoriamente;
  - um boss, se houver um acessível.

  Some uma linha na `Docs/validacao.md`.

  **Feito em parte:** a linha M9 da `validacao.md` entrou. O ao vivo `0061-3` rodou com o antes no `e40d43c` e o depois no `cfa73ce` (conta `l2webtest9`, Breka's Stronghold). Evidências em `Docs/evidencias/npcs-movimento/aovivo-0061-3/` (`29c62bd`); as rajadas inteiras ficaram em `testes\0061-3\`.
  - Arqueiro (Breka Orc Archer 20268): coberto.
  - Corpo a corpo (Breka Orc 20267): coberto.
  - Andar aleatório: coberto.
  - Monstro fugindo e voltando: não reproduzido (o orc não perseguiu e morreu antes).
  - Boss: não há um perto.

  Detalhes na Entrega.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-05 — Branch `feat/world-npcs-movimento` criado de `main` (`e40d43c`), com merge do `feat/world-aproximacao-alvo` da #0059 até `bbd9529` (fast-forward). Motivo: a #0059 mexe no mesmo `Entity.Attack`/`Step`/`PawnMotion` (StopMove no Attack, Focus no seguimento). Combinado com a sessão da #0059 por mensagem.
- 2026-11-05 — ValidateLocation não anda o NPC durante golpe ou cast; o arqueiro só vira até soltar a flecha (`9c610a7`).
- 2026-11-05 — NPC corre desde o primeiro tick, sem a fase de caminhada do chargrp (`1de4edf`).
- 2026-11-05 — Pedido de teste EditMode à sessão de testes (compilar, suíte, `NpcMotionTests`, `PawnApproachTests`), sobre `1de4edf`. Queda de energia às 20:03; trabalho retomado sem perda.
- 2026-11-05 — Suíte EditMode em `1de4edf`, rodada pela sessão de testes: compila, 933/933, `NpcMotionTests` 8/8, `PawnApproachTests` 13/13; +8 contra o `d9a7f7d` da #0059 (925). Evidências em `Docs/evidencias/npcs-movimento/` (`19cb9cd`).
- 2026-11-05 — Estudo completo no `engine.dll` e no aCis. As notas estão em `0061-engine-npcs.md` e `0061-acis-npcs.md`, na pasta de notas da coordenadora.
- 2026-11-05 — Taxa de Walk/Run do NPC com o `npc_speed` do Npcgrp (`b968f71`).
- 2026-11-05 — Índice de arma do NPC pelo handness, o B16 que a #0060 deixou para esta tarefa (`05e2b56`).
- 2026-11-05 — `Entity.Social` para o SocialAction de NPC (`747da34`).
- 2026-11-05 — Pedidos 0064 (`App.cs` e `anim_tables.json`) e 0065 (render), no commit `0a4cb95` deste repo.
- 2026-11-05 — `Docs/npcs_movimento.md` e a linha M9 da `validacao.md` (`623b62b`); conta `l2webtest9` (`cfa73ce`).
- 2026-11-05 — Suíte EditMode em `cfa73ce`: compila, 936/936, `NpcMotionTests` 11/11 (`4042e14`). Estado `pronta p/ merge`; o ao vivo fica na fila (`0061-3`).
- 2026-11-05 — Ao vivo `0061-3`, rodado pela sessão de testes e repassado pela coordenadora. As evidências foram copiadas para o branch (`29c62bd`). Resultado na Entrega.
- 2026-11-05 — Segundo pedido de teste à sessão de testes, sobre `cfa73ce`: (A) EditMode; (B) roteiro ao vivo antes (`e40d43c`) e depois (`cfa73ce`) na Breka's Stronghold, com arqueiro, corpo a corpo, volta ao spawn, andar aleatório e boss se houver. O (B) espera o aCis, que está fora do ar.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

A tabela completa, com uma linha por comportamento, está em `Docs/npcs_movimento.md` (branch). O que muda o porte:

- **Merge da #0059 (decisão).** O branch contém o `feat/world-aproximacao-alvo` até `bbd9529`. A #0059 já faz o `StopMove` no `Attack`, o Focus no `MoveToPawn` e o `Attack(x, y, z)`. Sem isso, o NPC que ataca sem `StopMove` (o aCis faz isso com o alvo andando dentro da tolerância, `AttackableAI.java:719`) atacava andando, e o golpe era cancelado. Combinado com a sessão da #0059.
- **"Bate virado" (Observado).** O original vira para o alvo em todo tick do golpe: o `SwordAttackProcess` (`00001.c:8845`) antes do `switch`, e o `BowAttackProcess` (`00004.c:1576`) até soltar a flecha. O servidor nunca manda rotação em combate (aCis). No porte, havia três causas:
  1. o seguimento que continuava depois do `Attack` (corrigido pela #0059);
  2. a `ValidateLocation`, que o aCis manda ao selecionar o alvo, fazia o NPC andar no meio do golpe, cancelar o ataque e virar para o ponto da correção. O `OnValidateLocation` (`00006.c:14322`) só anda com `pawn+0x62c == 0`. Corrigido em `9c610a7`;
  3. o arqueiro continuava virando depois de soltar a flecha (menor). Corrigido em `9c610a7`.
- **Movimento "meio bugado" (Observado).** O `APawn::GetCurSpeed` (`00011.c:12472`) só faz a fase de caminhada com o `pawn+0x6cc`, que só o `OnUserInfo` e o `OnCharInfo` gravam. No porte, o NPC andava 0,4 s a 40 (Archer of Greed: run 174) no começo de cada perseguição, com a animação Walk. Corrigido em `1de4edf`. O valor padrão do `0x6cc` para NPC é 0 (Inferido: nenhum caminho do NpcInfo o grava).
- **Pernas lentas (Observado).** `GetWalkAnimRate`/`GetRunAnimRate` multiplicam pelo `FL2NpcData+0x58`, que o `FL2GameData::NpcDataLoad` (`00004.c:1206`) lê do `npc_speed` do Npcgrp. Corrigido em `b968f71`.
- **Animação da arma (Observado).** `CurWeaponType` = `User::GetAnimType` (`00001.c:15851`), gravado pelo `User::SetPawnResource` para todo pawn. Corrigido em `05e2b56`.
- **SocialAction (Observado).** `OnSocialAction` (`00006.c:29124`): NPC com id 1..5 toca `NpcSocialAnimName[id-1]`, que é `localized` (no `.int`). Corrigido em `747da34`, mais o pedido 0064.
- **A validar / proposta:**
  - `RotationRate` e `bSpineRotation` por classe estão no `.u`, não exportado. O porte usa 65000 para todos.
  - A volta do yaw para o `FocalPoint` do `OnAttack` depende da ordem de tick.
  - O giro de cast a 0x50000/s.
  - O tween 0.1 do `AttackStop`.
  - Os flags do `OnDeleteUser`.

## Entrega

- **Commits** (branch `feat/world-npcs-movimento`, sobre `main` `e40d43c` + a #0059 até `bbd9529`):

  | Commit | O quê |
  |---|---|
  | `9c610a7` | ValidateLocation não anda o NPC no golpe nem no cast; o arqueiro vira só até soltar a flecha |
  | `1de4edf` | NPC corre desde o primeiro tick |
  | `19cb9cd` | Evidências da suíte em `1de4edf` |
  | `b968f71` | Walk/Run do NPC × `npc_speed` |
  | `05e2b56` | Índice de arma do NPC pelo handness |
  | `747da34` | `Entity.Social` |
  | `623b62b` | `Docs/npcs_movimento.md` e a linha M9 |
  | `cfa73ce` | Conta `l2webtest9` |
  | `4042e14` | Evidências da suíte em `cfa73ce` |

- **Testes:** `NpcMotionTests` (11) novos. A sessão de testes rodou a suíte EditMode duas vezes, sem falhas e sem testes removidos:
  - `1de4edf`: 933/933;
  - `cfa73ce`: 936/936.

  Evidências em `Docs/evidencias/npcs-movimento/`.
- **Ao vivo `0061-3`** (antes `e40d43c`, depois `cfa73ce`): 0 erros de log nas duas rodadas.
  - **Confirmado:**
    - O Breka Orc e o arqueiro batem de frente para o personagem (`orc_golpe2_mosaico.png`).
    - O arqueiro recua e volta: `Attack`, `MoveToLocation`, dois `StopMove` e `run=0`, depois `run=1`. O padrão é igual antes e depois, como no aCis (`AttackableAI.java:690-701`). O `StopMove` duplo também confere.
    - Andar aleatório: um `MoveToLocation` a cada ~25–30 s, a ~120–150 do ponto, igual nas duas versões.
    - Selecionar o alvo manda `ValidateLocation` só no primeiro clique. Nesta rodada não houve reclique durante o golpe com `ValidateLocation`, então a M3 continua coberta só pelo EditMode.
  - **Sem diferença visível antes/depois:** o arqueiro e o orc já estavam no alcance quando entraram em combate (o `run=1` chega junto com o primeiro `Attack`). Por isso o "bate virado" do relato não se reproduziu nesta posição; ele dependia do NPC andando ou corrigindo a posição durante o golpe.
  - **Não reproduzido:**
    - o começo da perseguição (M2): o orc não perseguiu, e morreu antes do recuo;
    - a fuga e volta ao spawn;
    - o boss: não há um perto.
  - **A5 sem prova ao vivo:** o Breka Orc (Doom Dagger, índice 1) tem a mesma animação nas linhas [0] e [1] do `.int` (`batur_orc`), então não muda nada visível. Precisa de um NPC cuja linha [1] seja diferente (por exemplo, `wait_1hs`).
- **Merge:**
  - Só o branch da #0059 entrou neste (fast-forward). Se a #0059 for para o `main` antes, este merge fica limpo.
  - Com o `feat/world-sistema-ataque` (#0060), `git merge-tree` mostra conflitos de "manter os dois lados":
    - `Combat.cs`: `TrackTime` junto com `MeleeHitSchedule`;
    - `Entity.cs`: `Social` junto com `Revive`, no mesmo ponto;
    - `Docs/contas_teste.md` e `Docs/validacao.md`: linhas vizinhas (M8 e M9; `l2webtest8` e `l2webtest9`).
- **Falta / fora do escopo:**
  - pedido 0064: handler 0x2d e a tabela social; sem ele o `Entity.Social` não é chamado;
  - pedido 0065 (render): fade do corpo, cabeça, armas na social e spoil. Quando a render der o `Actor.FadeOut`, a troca no `World.Remove` é da world;
  - pedido 0063 da #0060: tronco no golpe;
  - as propostas e os itens "a validar" da `Docs/npcs_movimento.md`: R5, R9, A7, os defaults do `.u` e os flags do `OnDeleteUser`;
  - o ao vivo.

## Pedidos

- [0064](pedidos/0064-world-app-socialaction-npc.md): coordenadora. Handler 0x2d no `App.cs`, e `NpcSocialAnimName`/`NpcSocialHide*Weapon` no `anim_tables.json`, que vem do `anim_tables.py` do l2web.
- [0065](pedidos/0065-world-render-npc-corpo-cabeca.md): render.
  - O corpo do NPC some com fade de 2 s e afunda; o vivo some só com o fade.
  - A cabeça olha para o alvo.
  - As armas ficam escondidas na social.
  - O efeito de spoil no corpo.

  A troca no `World.Remove` fica comigo quando houver o `Actor.FadeOut`.
- Já pedido pela #0060: [0063](pedidos/0063-world-render-reacao-golpe.md). É o tronco dobrando no golpe recebido, e vale também para NPC.
