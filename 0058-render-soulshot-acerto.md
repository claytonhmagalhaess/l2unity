# #0058 — Efeito do soulshot no alvo ao acertar

| Campo | Valor |
|---|---|
| Vaga | render |
| Branch | `feat/render-soulshot-acerto` (nasce de `main`) |
| Estado | fazendo |
| Spec | `analises\l2-interlude\client_spec\09_efeitos_skill.md`; `Docs/efeitos.md` linhas W3 (AssociateAttackedNotify, "soulshot (Atk/AtkCr/AtkDarkCr por grade) [N]"), L6 e L8 |
| Sessão | render: soulshot no acerto (#0058) |
| Criada | 2026-11-05 |

## Objetivo

No Interlude, quando o personagem acerta um monstro com o soulshot automático ligado, aparece um efeito no alvo, no ponto do golpe. O efeito depende da grade do shot e muda no crítico. No porte esse efeito não aparece: o efeito do shot na arma (L8, #0053) funciona, o do acerto não.

Esta tarefa levanta no material de análise como o original dispara e desenha esse efeito e replica no porte.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Levantamento com evidência no pseudocódigo (Engine.dll em `analises\l2-interlude\re\` e no Tryskell; `AssociateAttackedNotify` 0x10310ba9, `UGameEngine::OnAttack`, o flag de soulshot no pacote Attack 0x05) e nos dados (`soulshot.int` com as seções `Atk`/`AtkCr`/`AtkDarkCr` por grade, `Npcgrp.effect`). Registre em Decisões e REA:
  - quando o efeito sai (golpe com SS, crítico, miss, shield);
  - qual classe por grade (D, C, B, A, S e sem grade);
  - onde aparece (posição e osso no alvo, rotação do golpe);
  - a escala;
  - a relação com o DamageEffect normal (substitui ou soma);
  - o caso de arco e o de golpe duplo (dual/pole com vários alvos).
- [ ] O porte mostra o efeito do soulshot no alvo ao acertar, como no original, para todas as grades e para o crítico, e não mostra sem soulshot. A linha W3 do `Docs/efeitos.md` sai de `[N]`.
- [ ] Se o flag do soulshot no pacote Attack não chegar à camada de efeitos, ou se a mudança for no `App.cs` (`OnAttack`), abra o pedido com o trecho exato em `tarefas\pedidos\`.
- [ ] Testes EditMode para a escolha da classe por grade e crítico e para a posição. Suíte sem falhas novas em relação ao `main`, rodada pela sessão de testes.
- [ ] Capturas ao vivo antes e depois, tiradas pela sessão de testes no aCis local: golpe normal com soulshot D ou C e um crítico, quadros em sequência, em `Docs/evidencias/soulshot-acerto/`.

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
