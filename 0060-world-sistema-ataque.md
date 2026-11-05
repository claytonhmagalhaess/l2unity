# #0060 — Sistema de ataque: o que falta em relação ao original

| Campo | Valor |
|---|---|
| Vaga | world, na pasta `worktrees\net` (emprestada: a `worktrees\world` está com a #0059) |
| Branch | `feat/world-sistema-ataque` (nasce de `main`) |
| Estado | fazendo |
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

- [ ] `Docs/combate_lacunas.md`: uma linha por comportamento do combate no original, com a evidência (pseudocódigo do Engine.dll e do NWindow em `analises\` e no Tryskell, a spec, os dados de animação e pacotes do aCis, somente leitura) e o estado no porte: igual, corrigido, pedido ou proposta. A tabela cobre pelo menos:
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
- [ ] As lacunas da área world são corrigidas em ordem de impacto no jogo, com um commit por correção e a evidência na mensagem. As de outras áreas viram pedido em `tarefas\pedidos\`:
  - `App.cs` para a coordenadora, com o trecho exato;
  - pacotes para a net;
  - efeitos para a render;
  - interface para a ui.
- [ ] Não mexa na lógica de aproximação e parada em `Movement.cs`/`PawnMotion.cs`, que é da #0059. Se precisar, combine com a sessão dela antes. O efeito do soulshot no acerto é da #0058.
- [ ] Testes EditMode para cada regra corrigida. Suíte sem falhas novas em relação ao `main`, rodada pela sessão de testes.
- [ ] Capturas e logs ao vivo antes e depois, tirados pela sessão de testes no aCis local, em `Docs/evidencias/sistema-ataque/`:
  - ataque automático corpo a corpo, com arco e com dual;
  - crítico e miss;
  - alvo morrendo;
  - Ctrl em jogador.

  Some uma linha na `Docs/validacao.md`.

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
- **Divisão com as outras tarefas.** StopMove e AdjustPawnLocation no Attack são da #0059 (pedido 0054). O Widx dos NPCs e a rotação deles são da #0061.

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

- `pedidos2-world-app-sistema-ataque.md` (coordenadora, App.cs): golpes nos AttackShot, alvo automático, seleção pelo World, Die e Revive.
- `pedidos3-world-render-reacao-golpe.md` (render): reação do tronco ao golpe e regras do escudo no `OnHit`.
