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

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

Nenhum por enquanto.
