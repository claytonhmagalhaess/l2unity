# #0060 — Sistema de ataque: o que falta em relação ao original

| Campo | Valor |
|---|---|
| Vaga | world, na pasta `worktrees\net` (emprestada: a `worktrees\world` está com a #0059) |
| Branch | `feat/world-sistema-ataque` (nasce de `main`) |
| Estado | pronta p/ merge |
| Spec | `analises\l2-interlude\client_spec\` (combate, animação do pawn, 94/96 Attack 0x05, MagicSkillUse, StopMove, AutoAttackStart/Stop, Die); `Docs/validacao.md` M3, M4 e M5; `World/Combat.cs`, `World/ActionLatch.cs`, `World/Skills.cs`, `World/L2Calc.cs` |
| Sessão | world: sistema de ataque (#0060) |
| Criada | 2026-11-05 |

## Objetivo

O usuário pediu uma validação completa do sistema de ataque do porte contra o Interlude: o ciclo de ataque, as animações, as travas e o resto do que o original faz no combate e o porte ainda não faz.

Esta tarefa faz o inventário com evidência, corrige o que for da área e deixa o resto como pedido ou proposta.

Fora do escopo, porque já tem tarefa própria em andamento:
- a parada à distância certa do alvo e o andar até ele (#0059, vaga world);
- o efeito do soulshot no alvo ao acertar (#0058, vaga render).

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [x] `Docs/combate_lacunas.md`: uma linha por comportamento do combate no original, com a evidência (pseudocódigo do Engine.dll e do NWindow em `analises\` e no Tryskell, a spec, os dados de animação e pacotes do aCis, somente leitura) e o estado no porte: igual, corrigido, pedido ou proposta. A tabela cobre pelo menos:
  - **Ataque automático:** início (clique, Ctrl+clique para forçar, Shift+clique para não andar, atalho), repetição pelo AutoAttackStart/Stop, parada (alvo morto, alvo fora do alcance, troca de alvo, mover, sentar, Esc), e o que acontece com o alvo morto (desselecionar ou manter).
  - **Animações:**
    - de ataque por tipo de arma e por raça e sexo, incluindo dual, pole, arco (puxar e soltar), punho e fist;
    - velocidade de animação pela pAtkSpd/AtkSpd;
    - a postura de combate (idle de batalha) e a volta ao idle normal depois de quanto tempo;
    - a animação de levar dano, de esquiva, de crítico, de bloqueio com escudo;
    - morte e levantar;
    - virar para o alvo antes do golpe.
  - **Tempos e golpes:** hitTime, o golpe duplo (dual e Attack com vários Hit), o pole com vários alvos, o arco com a recarga.
  - **Travas:**
    - a do clique (M5), a de skill durante o cast e o golpe;
    - não poder andar ou usar item durante a animação, quando o original não deixa;
    - os pacotes de recusa (AttackOutofRange, AttackinCoolTime, ActionFail) e o que o cliente faz com eles.
  - **Retorno visual e textual:** miss e evade, crítico, golpe com escudo, as mensagens de dano no chat (systemmsg) e quem as gera (servidor ou cliente).
  - **Alvo e PK:** atacar jogador (flag e karma), Ctrl obrigatório para jogador não flagado, atacar NPC não agressivo.
- [x] As lacunas da área world são corrigidas em ordem de impacto no jogo, com um commit por correção e a evidência na mensagem. As de outras áreas viram pedido em `tarefas\pedidos\`:
  - `App.cs` para a coordenadora, com o trecho exato;
  - pacotes para a net;
  - efeitos para a render;
  - interface para a ui.
- [x] Não mexa na lógica de aproximação e parada em `Movement.cs`/`PawnMotion.cs`, que é da #0059. Se precisar, combine com a sessão dela antes. O efeito do soulshot no acerto é da #0058.
- [x] Testes EditMode para cada regra corrigida. Suíte sem falhas novas em relação ao `main`, rodada pela sessão de testes.
- [ ] Capturas e logs ao vivo antes e depois, tirados pela sessão de testes no aCis local, em `Docs/evidencias/sistema-ataque/`:
  - ataque automático corpo a corpo, com arco e com dual;
  - crítico e miss;
  - alvo morrendo;
  - Ctrl em jogador.

  Some uma linha na `Docs/validacao.md`.

  **Justificativa:** a linha M8 da `Docs/validacao.md` está feita. O ao vivo foi feito em parte, pela sessão de testes no aCis local (`testes\0060-1`, copiado em `Docs/evidencias/sistema-ataque/`, `3df795a`). Antes = `e40d43c`, depois = `efd8fb5`, conta `l2webtest8`, figurante `l2webtest2`, logs de erro: 0.
  - **Feito:**
    - corpo a corpo até matar 3 Turek: o morto fica parado e o alvo continua no corpo;
    - "Critical hit!" no chat;
    - Ctrl+clique no figurante em Giran: o servidor recusa ("peaceful zone").

    Tudo igual antes e depois, como esperado: essas regras já estavam certas, ou a mudança só aparece com o 0062.
  - **Ficou de fora:**
    - arco e dual: o personagem não tinha as armas;
    - miss do próprio personagem: não houve nenhum;
    - alvo automático e Revive com animação: o monstro provocado bateu com o alvo em 0 e o alvo continuou 0, porque o `App.cs` ainda não chama `World.AutoTargetOnAttack`. Dependem do pedido 0062 e devem ser repetidos depois dele;
    - os golpes nos `AttackShot`: também dependem do 0062.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-05 — Levantamento:
  - Engine.dll: `OnAttack`, `UAnimNotify_AttackShot`, `OnDie`, `OnRevive`, `SpineRotation`, alvo automático;
  - .int e notifies do l2anim;
  - aCis: pacotes, tempos, recusas e mensagens.
- 2026-11-05 — Tempo do arco do aCis e golpes nos `AttackShot` (`c729c42`).
- 2026-11-05 — Alvo automático, OnDie/OnRevive e o Attack corta o cast, com `CombatSystemTests` (13) (`810e9dd`).
- 2026-11-05 — `Docs/combate_lacunas.md` e a linha M8 da `Docs/validacao.md` (`d624cdd`).
- 2026-11-05 — Pedidos 0062 (App.cs) e 0063 (render). A #0061 foi avisada do que mudou em `Entity.cs`.
- 2026-11-05 — Conta `l2webtest8` (`a7b11b1`). Pedido de teste à sessão de testes: compilar, suíte EditMode em `a7b11b1` contra o `main` `e40d43c`, e o roteiro ao vivo antes e depois (corpo a corpo, arco, dual, crítico e miss, alvo morrendo, Ctrl em jogador, alvo automático).
- 2026-11-05 — Queda de energia às 20:03. O pedido de teste foi reenviado para o `efd8fb5`: compilar e suíte EditMode contra o `main` `e40d43c`. O ao vivo fica na fila até o aCis voltar.
- 2026-11-05 — Suíte EditMode em `efd8fb5`: 925/925, 0 falhas (`main` 912/912). Evidências no branch (`e16e9b4`, `3c4a597`). Estado `pronta p/ merge`; o ao vivo fica na fila.
- 2026-11-05 — A #0061 resolveu a B13 (reapontar no golpe, `9c610a7`) e a B16 (`Widx` do NPC, `05e2b56`) no branch dela. O merge com o meu toca `Entity.Attack`, o fim do `Combat.cs` e a linha do `Widx` no `World.UpsertNpc`; o conflito esperado é pequeno e mecânico. O pedido 0065 da #0061 aponta para o 0063 no caso do tronco do NPC.
- 2026-11-05 — Ao vivo da sessão de testes, repassado pela coordenadora:
  - corpo a corpo, morto e alvo, crítico e Ctrl em jogador: igual antes e depois, logs de erro: 0;
  - o alvo automático não dispara porque o `App.cs` não o chama (pedido 0062);
  - arco e dual não rodados.

  Evidências no branch (`3df795a`).

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

A tabela completa está em `Docs/combate_lacunas.md` do branch. O principal:

- **Golpes no cliente (O).** Saem nos notifies `AttackShot`, não nos `AttackItem` (`UAnimNotify_AttackShot::Notify`, Tryskell `engine.c:445644`, só ActionID 1). A regra:
  - o 1º notify aplica o golpe principal e, se o clipe só tem um, todos os extras (pole);
  - cada notify seguinte aplica um extra;
  - sem extras, repete o principal (punho, com dois notifies);
  - extras além dos notifies não saem.
- **Reação do alvo (O).** Não existe animação de dano, esquiva nem bloqueio: o .int não tem essas chaves e os getters não são chamados. A reação é procedural, no `SpineRotation` (`Bip01 Spine2`, cerca de 27°, `engine.c:489395`), e virou o pedido 0063.
- **Alvo automático (O).** `OnAttack` (`00011.c:17080-17095`): com o próprio jogador sem alvo, `PendingTime` = 0 e `AutoTargetPawn` nulo, o cliente manda `Action(atacante)`. Os dois campos são zerados ou preenchidos pelo MyTargetSelected, pelo TargetSelected e pelo TargetUnselected do próprio (10 s). Que o 5º argumento seja o Shift é Inferido.
- **OnDie/OnRevive (O).** O OnDie para o pawn e corta ataque e cast antes da Death. O OnRevive toca a DeathStand (Rebirth_*) com moveMul e tween 0,1 e zera a trava do próprio. Achar o clipe pelo prefixo `rebirth` é Inferido, porque o `anim_tables.json` não exporta a DeathStand.
- **Arco no aCis local (O).** `1500*333/PAtkSpd` e `timeAtk - 50`. O 345 é só do reuso. O porte vinha com o 345 e o -100 do calc.js (L2J).
- **Recusas (O).** O aCis não tem 0x08/0x09/0x0a: toda recusa é ActionFailed. O cliente não trava andar, item nem skill durante o golpe (`engine.c:89823`, `129943`, `158420`).
- **Postura de combate (O).** Não há timer no cliente; o AutoAttackStop chega 15 s depois do último golpe (aCis). O alvo morto continua selecionado até o corpo sumir.
- **Divisão com as outras tarefas** (decidida pela coordenadora em 2026-11-05):
  - **#0060:** o lado do jogador: ataque automático, Ctrl/Shift, travas, animações do personagem, recusas, retorno visual e atacar jogador.
  - **#0061:** o lado dos NPCs, monstros e bosses: rotação ao atacar, movimento, animações e ciclo de combate deles.
  - **#0059:** StopMove e AdjustPawnLocation no Attack (pedido 0054).
  - **O que é comum a todos os pawns:** uma sessão só implementa. Combinado com a #0061 por mensagem:
    - a #0060 já fez `Entity.Attack` (postura e corte do cast), `SetDead`/`Revive`, `Combat.MeleeHitSchedule` e o tempo do arco;
    - a regra de virar para o alvo no `OnAttack`/`SwordAttackProcess`/`BowAttackProcess` (linha B13 do `combate_lacunas.md`) fica com a #0061, que trata a rotação;
    - o `Widx` dos NPCs (B16) também.

## Entrega

- **Commits** (branch `feat/world-sistema-ataque`, base `main` `e40d43c`):
  - `c729c42`: tempo do arco do aCis (1500·333/P, timeAtk − 50) e `Combat.MeleeHitSchedule` (golpes nos `AttackShot`), mais `Combat.Shielded`;
  - `810e9dd`:
    - `World/AutoTarget.cs` e os métodos do `World` (`AutoTargetOnAttack`, `OnMyTargetSelected`, `OnTargetSelected`, `OnTargetUnselected`, `OnDie`, `OnRevive`);
    - `Entity.SetDead` como o OnDie e `Entity.Revive` (Rebirth);
    - `Entity.Attack` liga a postura e corta o cast;
    - `CombatSystemTests` (13);
  - `d624cdd`, `efd8fb5`: `Docs/combate_lacunas.md` e a linha M8 da `Docs/validacao.md`;
  - `a7b11b1`: conta `l2webtest8`;
  - `e16e9b4`, `3c4a597`: evidências da suíte em `Docs/evidencias/sistema-ataque/`;
  - `b8140e2`: B13 e B16 resolvidas pela #0061;
  - `3df795a`, `05db993`: evidências do ao vivo e a linha M8.
- **Testes:** sessão de testes, `testes\0060-1\suite-efd8fb5`:
  - compila sem erros;
  - EditMode 925/925, 0 falhas, contra 912/912 no `main` `e40d43c`. Os +13 são os `CombatSystemTests`;
  - `CombatTests` 9/9, `CombatParityTests` 2/2, `ActionFailTests` 6/6.
- **Falta / fora do escopo:**
  - **Pedido 0062** (coordenadora, `App.cs`): sem ele o código novo não é chamado. Ficam esperando os golpes nos `AttackShot`, o alvo automático, a seleção pelo `World`, o Die e o Revive.
  - **Pedido 0063** (render): a reação do tronco ao golpe (`SpineRotation`) e as regras do escudo no `OnHit`.
  - **Ao vivo depois do 0062:** alvo automático, Revive, golpes nos `AttackShot`, arco e dual (com um personagem que tenha as armas).
  - **Propostas** (`combate_lacunas.md`):
    - exportar a `DeathStandAnimName` no `anim_tables.json` (tools);
    - SitDeath e SwimDeath;
    - ataque montado;
    - conferir a cor do `SetupGauge` do arco (ui);
    - o `EV_ReceiveAttack` só para o golpe principal.
  - **De outras tarefas:**
    - virar para o alvo no golpe e o `Widx` dos NPCs (#0061, combinado);
    - StopMove e AdjustPawnLocation no Attack (#0059);
    - efeito do soulshot (#0058).

## Pedidos

- `pedidos2-world-app-sistema-ataque.md` (coordenadora, App.cs): golpes nos AttackShot, alvo automático, seleção pelo World, Die e Revive.
- `pedidos3-world-render-reacao-golpe.md` (render): reação do tronco ao golpe e regras do escudo no `OnHit`.
