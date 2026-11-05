# Pedido 0063 — Render: reação do alvo ao golpe (tronco) e regras de escudo e crítico no OnHit

| Campo | Valor |
|---|---|
| De | world (tarefa #0060) |
| Para | render |
| Estado | aberto |
| Criado | 2026-11-05 |

## O que precisa

São dois itens no desenho do golpe no alvo (`Render/Fx`, o `FxPawnEffects.OnHit` e o ator). O pedido 0053 da #0058 já passa os flags inteiros do golpe ao `OnHit`: `0x80` miss, `0x40` escudo, `0x20` crítico, `0x10` soulshot, `& 0xF` grade. `L2Web.World.Combat.Shielded(flags)` (branch `feat/world-sistema-ataque`) diz se o golpe foi defendido.

**1. O Interlude não tem animação de levar dano: a reação é procedural.** O .int não tem chave Damage, Dodge nem Defence. O engine também não toca esses getters fora do `GetAllAnimName` (lista de pré-carga). Em vez disso, cada golpe que não erra chama `APawn::AssociateAttackedNotify` (`00009.c:21668`), que liga `bDemageAct` (`pawn+0x73c` bit 0). O `APawn::SpineRotation` (Tryskell `engine.c:489395`) então:
- procura o osso `Bip01 Spine2` (ou `Bip01_Spine2`) e só age se o mesh tiver esse osso;
- ida: acumula `ang -= dt * 65536 * 1.3` (unidades de rotação do UE2, 65536 = 360°) até `-4915.2` (cerca de -27°), uns 0,06 s. O estado `pawn+0x740` vai de 0/1 para -1;
- volta: `ang += dt * 65536 * 0.4` até passar de 1e-5, uns 0,19 s. Aí zera `ang`, o estado e `bDemageAct`, e zera também `pawn+0x2a8`;
- aplica `ang` como rotação do osso sobre a pose da animação. O eixo sai de `FUN_011a6660(0)`/`func_0x10102fea(0, …)` e fica **A validar**: provavelmente o pitch, inclinando o tronco para trás.

Hoje o alvo não reage. Sugestão: um método no ator (`Actor`) que aplique esse deslocamento ao osso depois do `Update` da animação, com o estado por pawn, chamado pelo `OnHit` quando o golpe não é miss.

**2. Regras do `Action_Attack`/`AssociateAttackedNotify` que dependem do escudo** (`00005.c:3570`, `00009.c:21668`). Confira no `OnHit` com flags:
- **miss:** `Action_Attack` retorna antes de tudo: sem som, efeito ou reação (o porte já não chama o `OnHit`);
- **som:** escudo usa a vtable +0x204, crítico usa `CriticalSound` e soulshot `SoulShotSound` (`ALAudio.int [EtcSound]`), o normal +0x200; depois toca +0x208. Que essas vtables sejam dano, escudo e item é Inferido;
- **efeito de crítico** `Lineageeffect.p_u004_a`: **só sem escudo**;
- **`AddPawnLight`** (clarão no alvo): só sem escudo.

## Por quê

Levantamento em `Docs/combate_lacunas.md` (branch `feat/world-sistema-ataque`), linhas "levar dano" e "golpe com escudo". Nada quebra sem o pedido: o alvo continua sem reação, e um golpe crítico defendido mostra o efeito de crítico, que o original não mostra.

A #0058 afirma que o `Action_Attack` vem do notify `AttackItem`. O `UAnimNotify_AttackShot::Notify` (`engine.c:445644`) mostra que, no corpo a corpo (ActionID 1), quem aplica os golpes é o `AttackShot`. O `App.cs` passa a usar `Combat.MeleeHitSchedule` com os `AttackShot` (pedido 0062).

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
