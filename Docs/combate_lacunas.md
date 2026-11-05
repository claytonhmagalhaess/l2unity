# Combate: o original contra o porte (#0060)

Uma linha por comportamento do combate no Interlude, com a evidência e o estado no porte.

- **Estados:**
  - **igual:** o porte já faz como o original;
  - **corrigido:** a #0060 corrigiu (commit);
  - **pedido:** fora da área world, virou pedido em `tarefas\pedidos\`;
  - **proposta:** fica para depois;
  - **outra tarefa:** já está com outra tarefa.
- **Marcas:** O = Observado no código, I = Inferido, V = A validar.
- **Referências:**
  - `NNNNN.c:linha`: `analises\l2-interlude\re\decomp_all\engine\`;
  - `engine.c:linha`: `analises\system_Tryskell_RE\engine.c`;
  - aCis: `C:\Workspace-java\aCis_gameserver\java\net\sf\l2j\gameserver\`;
  - .int: `tools\l2anim\dec\int\`.

Commits do branch `feat/world-sistema-ataque`:
- `c729c42`: tempo do arco, golpes nos `AttackShot`;
- `810e9dd`: alvo automático, OnDie/OnRevive, o Attack corta o cast.

## Ataque automático

| # | Original | Evidência | Porte | Estado |
|---|---|---|---|---|
| A1 | O 1º clique num pawn manda `Action` (0x04). O servidor só seleciona (MyTargetSelected 0xa6 com a cor). O 2º clique ataca se o alvo é atacável. | O: `Npc.onAction` (aCis `Npc.java:208-256`), `Player.onAction` (`Player.java:2764-2804`) | `App.ClickAt` manda `Action` | igual |
| A2 | Ctrl+clique e o atalho Attack com Ctrl mandam `AttackRequest` (0x0a, ataque forçado). Sem Ctrl, `Action`. | O: `FUN_1014ca10` (vtable +0xe8 / +0x100); aCis `AttackRequest.java:64-71` | `ClickAt`, `L2Commands` caso 2 e `attackforce` | igual |
| A3 | Shift+clique manda o `Action` com shift=1. O aCis só trata o shift como info de GM (`onActionShift`). | O: aCis `Action.java:69-72` | o Shift vai no byte do pacote | igual (o efeito é do servidor) |
| A4 | A repetição é do servidor: a AI manda um `Attack` por golpe. O cliente só anima cada pacote. | O: aCis `Creature.doAttack`, `PlayerAI.thinkAttack` | um `Entity.Attack` por pacote | igual |
| A5 | AutoAttackStart/Stop (0x2b/0x2c) ligam e desligam o bit 1 do controller +0x41c. O Wait parado vira AtkWait. Não existe timer no cliente; o aCis manda o Stop 15 s depois do último golpe. | O: `00011.c:14298`, `00011.c:12058`, `GetCurWaitAnimName 00003.c:21124`; aCis `AttackStanceTaskManager.java:278` | `Entity.InCombat` e `Animate` | igual |
| A6 | O `OnAttack` também liga o bit 1 (postura de combate) do atacante vivo. | O: `00011.c:17043-17046` | `Entity.Attack` liga `InCombat` | corrigido `810e9dd` |
| A7 | Alvo morto: o servidor manda ActionFailed e para. O alvo continua selecionado no corpo até ele sumir; aí vêm TargetUnselected e DeleteObject. O cliente não desseleciona sozinho. | O: aCis `Creature.java:3939-3946`, `5501-5506`; `Player.java:3382-3389` | o porte só limpa o alvo no 0x2a/0x12 | igual |
| A8 | Alvo fora do alcance: o servidor segue com MoveToPawn (alcance + raios). | O: aCis `CreatureAI.java:482-533` | — | outra tarefa (#0059) |
| A9 | Andar durante o golpe: o `OnMoveToLocation` faz `NActionStop`, que corta a animação. O servidor adia o MOVE_TO até o READY_TO_ACT. | O: `engine.c:376232`; aCis `PlayerAI.java:127-131` | andar cancela o `attacking` no `Animate` | igual |
| A10 | Sentar durante o golpe: o servidor recusa (`isAttackingDisabled`). Esc: `TargetCancel` manda CancelTarget (0x37). | O: aCis `Player.java:1711-1733` | `TargetCancel` em `App.cs` | igual |
| A11 | **Alvo automático de quem ataca.** Golpe no próprio jogador sem alvo, com `fAutoTargetPendingTime` (+0x18cc) = 0 e `AutoTargetPawn` (+0x18d0) nulo: o cliente manda `Action(atacante, posição própria, Shift)` e guarda o atacante. MyTargetSelected e TargetSelected do próprio zeram o `AutoTargetPawn`. TargetUnselected do próprio dá 10 s sem alvo automático. | O: `00011.c:17080-17095`; `engine.c:294998`, `497392`, `359729` (0x41200000), `221144` (tick). I: o 5º argumento (+0xedc) é o Shift | `World/AutoTarget.cs`, `World.AutoTargetOnAttack` | corrigido `810e9dd` + pedido 0062 (App.cs) |

## Animações

| # | Original | Evidência | Porte | Estado |
|---|---|---|---|---|
| B1 | Corpo a corpo: Atk01/02/03 por `appRand()%3`, da tabela do tipo de arma (`0x9ac/0x9cc/0x9ec`). Velocidade `AttackSpeedRate * AtkNNAnimRate * 1.1`, tween `0.1/(...)`. AnimRate 0 vale 1,0. | O: `00001.c:8930-8960`, `00003.c:1684` | `Combat.AttackAnim` | igual (M3) |
| B2 | Arco (tipo 5): sempre Atk01, velocidade `AnimRate * AttackSpeedRate`, tween `0.2/(...)`. Arremesso (tipo 6, `ThrowAttackProcess`) segue o mesmo padrão. | O: `00004.c:1655-1667`; `ThrowAttackProcess` | `RangedWidx {5,6}` | igual |
| B3 | Índice de arma pelo `weapongrp.handness`: 0 mão vazia, 1 1HS/adaga, 2 2HS, 3 dual (e punhos de raça), 4 pole/cajado, 5 arco, 6 só armas de monstro, 7 luva de soco. O Atk03 do dual é o Atk01_Dual; o arco e o Hand repetem o Atk01. | O: `lineagewarrior.int` l.152-306; `build_data.py:195-203` | `GameData.WeaponIndex` | igual |
| B4 | AtkAnimRate: 0,8333 em quase tudo; 1,1111 só no `[5]` do MFighter. Não há taxa própria para o dual. | O: `lineagewarrior.int` l.204, 251, 295, 355 | lida do .int; o comentário do `Combat.cs` dizia "1,1111 arco" | igual (comentário corrigido) |
| B5 | Montaria (ActionID 8, `ShotAttackProcess`): o pawn montado toca o próprio ataque. | O: `00011.c:17053-17057` | sem montaria no porte | proposta |
| B6 | Postura de combate: AtkWait (SwimAttackWait na água) com `NonAttackSpeedRate` e tween 0,2. Volta ao Wait só com AutoAttackStop ou Die. | O: `00000.c:27269`, `00003.c:21124` | `Animate`: AtkWait × moveMul, `TweenWait` | igual |
| B7 | **Levar dano:** não há animação, nem chave Damage no .int, nem getter chamado. A reação é procedural: `SpineRotation` enverga o `Bip01 Spine2` até -4915,2 (cerca de 27°) a 1,3·65536/s e volta a 0,4·65536/s, quando `bDemageAct` está ligado. | O: `engine.c:489395`; .int sem Damage/Dodge/Defence. V: o eixo | sem reação | pedido 0063 (render) |
| B8 | **Esquiva (miss):** sem animação. `Action_Attack` retorna antes de som, efeito e reação. | O: `00005.c:3570` | o `OnAttack` não chama `OnHit` no miss | igual |
| B9 | **Crítico:** efeito `Lineageeffect.p_u004_a` só sem escudo, `CriticalSound`, clarão (`AddPawnLight`) só sem escudo. | O: `00009.c:21668`, `00005.c:3570` | `PawnFx.OnHit(crit)` | pedido 0063 (regras com escudo) |
| B10 | **Escudo:** sem animação de bloqueio (`ShieldAtk` é ataque e nada a usa). Som próprio (vtable +0x204), sem efeito de crítico e sem clarão. | O: `00005.c:3570`; I: os slots de som | o `OnHit` não sabe do escudo (o 0053 da #0058 passa os flags) | pedido 0063 |
| B11 | **Morte:** o `OnDie` limpa bTurning, faz StopMove, liga bDead, desliga a postura, `NActionStop` (ataque e cast), zera o ActionTarget e toca a Death. Morto sentado usa SitDeath; na água, SwimDeath. | O: `00006.c:14535` | `SetDead(true)` só tocava a Death: o pawn seguia andando e o cast voltava depois da Death | corrigido `810e9dd` + pedido 0062; SitDeath/SwimDeath: proposta |
| B12 | **Levantar (Revive):** desliga bDead e toca `DeathStandAnimName` (Rebirth_*) com `NonAttackSpeedRate` e tween 0,1. Para o próprio jogador, zera a trava 0x64. | O: `00003.c:18075`; `lineagewarrior.int:31` | `SetDead(false)` voltava direto ao Wait | corrigido `810e9dd` (`Entity.Revive`, `World.OnRevive`) + pedido 0062. I: clipe pelo prefixo `rebirth`, porque o `anim_tables.json` não exporta a DeathStand (proposta: exportar) |
| B13 | **Virar para o alvo:** `SwordAttackProcess` aponta a DesiredRotation (só o Yaw) para o alvo. O giro respeita a RotationRate. O arco reaponta a cada tick até soltar. | O: `00001.c:8918-8925`, `00004.c:1689`, `00006.c:15738` | `Motion.DesiredYaw` reapontado a cada tick durante todo o golpe | igual (V: o corpo a corpo reaponta só no início?) |
| B14 | O `OnAttack` faz `AdjustPawnLocation` pela posição do pacote e depois o StopMove do controller. | O: `00011.c:17038-17044` | — | outra tarefa (#0059, pedido 0054) |
| B15 | O `OnAttack` faz `NActionStop`: o golpe interrompe o cast em andamento. | O: `00011.c:17045` | `Entity.Attack` não limpava o `casting`, e o cast cobria o golpe | corrigido `810e9dd` |
| B16 | NPC com arma: o índice da arma vem do handness, e o .int dos NPCs tem entradas `[1]`. | O: dados (475 entradas `[1]`) | `World.UpsertNpc` só usa 5 ou 0 | outra tarefa (#0061, avisada) |

## Tempos e golpes

| # | Original | Evidência | Porte | Estado |
|---|---|---|---|---|
| C1 | Servidor: `timeAtk = 470000/PAtkSpd` (2700 se <2); golpe em timeAtk/2. | O: aCis `Formulas.java:930-936`, `Creature.java:775` | `Combat.ServerHits` | igual |
| C2 | Arco: `timeAtk = 1500*333/PAtkSpd`, `_attackEndTime = timeAtk - 50`, reuso `reuseDelay*345/PAtkSpd`, golpe em timeAtk. | O: aCis `Creature.java:4252`, `740`, `896`, `909` | usava 345 e -100 (o L2J do calc.js) | corrigido `c729c42` |
| C3 | **Golpes no cliente pelos notifies `AttackShot`** (só ActionID 1): o 1º aplica o principal e, com um notify só, todos os extras (pole); cada notify seguinte aplica um extra; sem extras, repete o principal (punho com dois notifies). Extras além dos notifies não saem. | O: `UAnimNotify_AttackShot::Notify engine.c:445644`; `GetAtkShotNum 00010.c:35569` | usava os `AttackItem`, uns 0,03-0,05 s antes, e um extra além dos notifies saía no primeiro | corrigido `c729c42` (`Combat.MeleeHitSchedule`) + pedido 0062 |
| C4 | Dual: 2 golpes no mesmo alvo, metade do dano cada, em timeAtk/4 e /2 no servidor. O clipe dual tem 2 AttackShot (0,2674 e 0,613 no Atk01_Dual). | O: aCis `Creature.java:960-984`; `data.js` animsets | `MeleeHitSchedule` | corrigido `c729c42` |
| C5 | Pole: o alvo principal e até ATTACK_COUNT_MAX-1 extras (85%, ângulo 120, alcance 66) num pacote só. Todos no 1º AttackShot. | O: aCis `Creature.java:1006-1075` | `MeleeHitSchedule` | corrigido `c729c42` |
| C6 | Arco: o cliente cria a flecha no `AttackShotNotifyTime(…,1)` e dispara no `(…,0)`. O servidor manda SM 41, `SetupGauge(RED, timeAtk+reuso)` e trava a próxima flecha. | O: `00004.c:1680`, `1755`; aCis `Creature.java:896-912` | flecha no AttackShot; o 0x6d abre a barra de cast para qualquer cor | igual; a cor do gauge: V (ui) |
| C7 | Todos os golpes erram: o servidor manda ActionFailed antes do Attack. O cliente não cancela nada. | O: aCis `Creature.java:787-789` | o 0x25 só destrava | igual |

## Travas

| # | Original | Evidência | Porte | Estado |
|---|---|---|---|---|
| D1 | Trava do clique `GEngine+0x64`: liga ao mandar o pedido, ignora cliques até a resposta. Destravam: OnAttack (atacante sou eu), OnAttacked, OnAttackCanceled, OnMoveToLocation/MoveToPawn, OnTargetSelected, OnMyTargetSelected, OnActionFail, 0x08-0x0a e OnRevive. | O: `UInput::Exec engine.c:532344`; spec 05 §5.7 | `ActionLatch` (M5); faltava o OnRevive | corrigido `810e9dd` (`World.OnRevive`) + pedido 0062 |
| D2 | Skill durante o cast ou o golpe: o cliente não trava, e o servidor enfileira até o READY_TO_ACT. | O: `engine.c:158420` sem checagem; aCis `RequestMagicSkillUse.java:62-65` | sem trava | igual |
| D3 | Andar e usar item durante a animação: o cliente não trava (`MoveBackwardToLocation`, `RequestUseItem` sem checagem). Trocar de arma no servidor aborta o golpe. | O: `engine.c:89823`, `129943`; aCis `UseItem.java:183-194` | sem trava | igual |
| D4 | Recusas: o aCis não tem 0x08/0x09/0x0a; toda recusa é ActionFailed (0x25), às vezes com SM (181 sem visão, 85 zona de paz, 144 alvo inválido). O cliente só destrava. | O: aCis `serverpackets` (sem essas opcodes), `Creature.java:594-675` | `World.OnActionFailed`, `OnAttack*` | igual |

## Retorno visual e textual

| # | Original | Evidência | Porte | Estado |
|---|---|---|---|---|
| E1 | O cliente não gera texto nem número de dano. As mensagens são SystemMessage do servidor: 35 (você deu X), 36 (X te deu Y), 43 (errou), 42 (você esquivou), 44 (crítico), 111/1281 (escudo), 342 (soulshot). | O: `OnAttack` sem mensagem (`00011.c:17014`); aCis `Player.java:8778-8801`, `PlayerStatus.java:151`, `Formulas.java:1032-1036` | só o 0x64 SystemMessage | igual |
| E2 | `EV_ReceiveAttack` (atacante, defensor, crítico, escudo) para a interface: só a `OlympiadPlayerWnd` usa. | O: `00011.c:17097-17099` (+0x6e8) | `PacketEvents.Attack`, um por golpe | igual (V: o original manda só o principal e só com o atacante vivo) |
| E3 | Efeito do soulshot no alvo, por grade. | O: `00009.c:21668` | — | outra tarefa (#0058) |

## Alvo e PK

| # | Original | Evidência | Porte | Estado |
|---|---|---|---|---|
| F1 | Jogador sem flag: o 2º clique só segue (FOLLOW). Atacar exige Ctrl (`onForcedAttack`). | O: aCis `Player.java:2764-2804`, `6040-6124` | Ctrl manda AttackRequest | igual |
| F2 | Flag de PvP: cada golpe em Playable sem karma liga a flag por 20 s (30 s contra PvP); o servidor manda UserInfo e RelationChanged. Matar alguém sem flag dá karma. | O: aCis `Player.java:3958-3978`, `3883`, `3924` | `PvpFlag`/`Karma` do UserInfo/CharInfo e o cursor | igual |
| F3 | NPC não agressivo: o 2º clique fala (INTERACT). Ctrl+clique ataca se `isAutoAttackable`. | O: aCis `Npc.java:208-256` | — | igual (é do servidor) |
