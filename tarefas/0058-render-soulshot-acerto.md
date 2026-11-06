# #0058 — Efeito do soulshot no alvo ao acertar

| Campo | Valor |
|---|---|
| Vaga | render |
| Branch | `feat/render-soulshot-acerto` (nasce de `main`) |
| Estado | no main |
| Spec | `analises\l2-interlude\client_spec\09_efeitos_skill.md`; `Docs/efeitos.md` linhas W3 (AssociateAttackedNotify, "soulshot (Atk/AtkCr/AtkDarkCr por grade) [N]"), L6 e L8 |
| Sessão | render: soulshot no acerto (#0058) |
| Criada | 2026-11-05 |

## Objetivo

No Interlude, quando o personagem acerta um monstro com o soulshot automático ligado, aparece um efeito no alvo, no ponto do golpe. O efeito depende da grade do shot e muda no crítico. No porte esse efeito não aparece: o efeito do shot na arma (L8, #0053) funciona, o do acerto não.

Esta tarefa levanta no material de análise como o original dispara e desenha esse efeito e replica no porte.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [x] Levantamento com evidência no pseudocódigo (Engine.dll em `analises\l2-interlude\re\` e no Tryskell; `AssociateAttackedNotify` 0x10310ba9, `UGameEngine::OnAttack`, o flag de soulshot no pacote Attack 0x05) e nos dados (`soulshot.int` com as seções `Atk`/`AtkCr`/`AtkDarkCr` por grade, `Npcgrp.effect`). Registre em Decisões e REA:
  - quando o efeito sai (golpe com SS, crítico, miss, shield);
  - qual classe por grade (D, C, B, A, S e sem grade);
  - onde aparece (posição e osso no alvo, rotação do golpe);
  - a escala;
  - a relação com o DamageEffect normal (substitui ou soma);
  - o caso de arco e o de golpe duplo (dual/pole com vários alvos).
- [x] O porte mostra o efeito do soulshot no alvo ao acertar, como no original, para todas as grades e para o crítico, e não mostra sem soulshot. A linha W3 do `Docs/efeitos.md` sai de `[N]`. **Feito:** ao vivo com SS D (3cf9dc0), 8 golpes: 0x11 deu p_u002_a + e_u506_c, 0x31 deu p_u002_a + e_u506_e sem p_u004_a, e 0x00 deu só p_u002_a. As outras grades (sem grade, C, B, A e S) não foram vistas ao vivo, porque não havia arma nem shot dessas grades. A escolha é a mesma tabela, conferida por `FxSoulshotHitTests` contra o `soulshot.int` do cliente; as 18 classes existem no `lineageeffect.json`. A W3 saiu de `[N]`.
- [x] Se o flag do soulshot no pacote Attack não chegar à camada de efeitos, ou se a mudança for no `App.cs` (`OnAttack`), abra o pedido com o trecho exato em `tarefas\pedidos\`. **Feito:** pedido 0053, aplicado pela coordenadora em 3cf9dc0.
- [x] Testes EditMode para a escolha da classe por grade e crítico e para a posição. Suíte sem falhas novas em relação ao `main`, rodada pela sessão de testes. **Feito:** `FxSoulshotHitTests` (10). 922/922 no 118b832 e no 3cf9dc0 contra 912/912 na base e40d43c; nenhuma falha nova (testes 0058-1 e 0058-2).
- [x] Capturas ao vivo antes e depois, tiradas pela sessão de testes no aCis local: golpe normal com soulshot D ou C e um crítico, quadros em sequência, em `Docs/evidencias/soulshot-acerto/`. **Feito:** `Docs/evidencias/soulshot-acerto/01`–`07` (sequências de 6 quadros a 0,1 s, antes e depois; normal, crítico e sem SS), mais `resumo_teste.md` e os logs `[ss]`/`[ssfx]` (testes 0058-1 e 0058-2).

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-05 — branch `feat/render-soulshot-acerto` a partir de `main` (e40d43c); levantamento no pseudocódigo e na montagem do Engine.dll (abaixo).
- 2026-11-05 — `FxPawnEffects`: `HitEffects`, `SoulshotHitClass`, `SoulshotOpacity`, `HitLocation`, `OnHit(flags, arrow)`; `FxSoulshotHitTests` (10 testes); W3 do `Docs/efeitos.md` (118b832).
- 2026-11-05 — pedido `pedidos\0053-render-soulshot-acerto-app.md` (App.cs: `OnAttack` passa `h.Flags`; `PawnFx.PartyMemberCount`).
- 2026-11-05 — pedido de teste 0058-1 à sessão de testes: compilação, suíte EditMode e `FxSoulshotHitTests` no 118b832, e as capturas de antes (`l2webtest4`/`FxGuerreiro`, Soulshot D). Pedi à coordenadora o trecho do pedido 0053 no branch, para as capturas de depois.
- 2026-11-05 — a coordenadora aplicou o pedido 0053 no branch (3cf9dc0). Pedido de teste 0058-2: compilação, EditMode e capturas de depois sobre o 3cf9dc0.
- 2026-11-05 — resultado das suítes. 118b832: compila, 922/922, `FxSoulshotHitTests` 10/10. 3cf9dc0: compila, 922/922. Base e40d43c: 912/912; a diferença são só os 10 testes novos. Saídas em `testes8-1\` e `testes8-2\`. **Bloqueada:** o ao vivo (antes e depois) espera o aCis local voltar; só o usuário liga o servidor.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

Fontes: `analises\l2-interlude\re\decomp_all\engine\` (índice em `index.tsv`) e a montagem de `tools\l2anim\bin\engine.dll` (llvm-objdump, só leitura).

**Caminho do flag até o efeito. [O]**
1. `FUN_10424e80` (tratador do Attack 0x05, `00020.c:18028`): lê `dddcdddh` e separa o byte de flags: miss = `flags < 0` (0x80), escudo = `0x40`, crítico = `0x20`, soulshot = `0x10`, grade = `flags & 0xF`. Chama `UGameEngine::OnAttack(atacante, alvo, dano, miss, escudo, crítico, ss, FVector, grade)` (vtable +0x12c). Os golpes extras (`h`) vão por +0x128 (`OnAssociatedAttack`).
2. `UGameEngine::OnAttack` (0x10313d81, `00011.c:17014`) guarda no pawn do atacante: `+0x634` bit0 miss, bit1 crítico, bit2 escudo, bit3 soulshot; `+0x630` dano; `+0x638` grade; `+0x63c` alvo.
3. O notify AttackItem (`00010.c:15610`) chama `APawn::Action_Attack(alvo, dano, b0, b2, b1, b3, grade, 1)` (0x10309480). Os alvos extras vêm do array `+0x64c`, cada um com os próprios flags e grade (`piVar8[1]`, `piVar8[2]`).
4. `Action_Attack`: com miss (`param_3`), sai sem som nem efeito. Senão, toca o som (escudo vfunc 0x204, crítico `CriticalSound`, soulshot `SoulShotSound`) e chama a vfunc 0x214 = `APawn::AssociateAttackedNotify(atacante, 0, 0, dano, 0, escudo, crítico, ss, GL2KeepMinFrameRate, alvo.vfunc0x218(), grade)`. A grade é o último `push 0x20(%ebp)` em 0x10626f5b; o pseudocódigo a omitiu. A vfunc 0x218 (0x10342750) é `bRendered` (`pawn+0x17fc.b0`).

**`APawn::AssociateAttackedNotify` (0x10310ba9, `00009.c:21668`). [O]**
- **Ponto:** `Location − (UnitCoords*Rotation)·(d,0,0)`, com `Rotation = Rotation(alvo − atacante)` e `d = CR_alvo/2`. Se `CR + CH` do alvo for maior que 150.0 (0x108a33d8), `d = Clamp(0.85·dist, 0, dist − CR_atacante)` (`FUN_103704b0`; 0.85 em 0x108ce330; montagem em 0x10628920). Spawn solto no mundo, com a rotação do golpe e sem escala.
- **Ramo do soulshot** (`ss != 0 && (uint)grade < 6`):
  - DamageEffect (`pawn+0x6e8`) se existir e `KeepMinFrameRate == 0`.
  - Depois a classe da tabela `FL2GameData+0x7f62c + grade·0x54`:
    - sem crítico, `0x10bbbeb4` = `Atk`;
    - crítico com `bUseDarkEffect` do atacante (`+0x1818.b0`), `0x10bbbec0` = `AtkDarkCr`;
    - crítico sem ele, `0x10bbbecc` = `AtkCr`.

    O layout vem de `FL2GameData::SoulShotDataLoad` (`00010.c:1340`): OnSticks +0x7f62c, OnBooks +0x638, Atk +0x644, AtkDarkCr +0x650, AtkCr +0x65c.
  - Nesse efeito, e só nele: `SetOpacity(0.9 − (n−3)·0.08)` se `n > 2`.
  - Esse ramo não tem p_u004_a nem it_zariche_ta, e o escudo não muda nada.
- **Sem soulshot:**
  - sem crítico, ou com escudo: DamageEffect (ou it_zariche_ta com `bIsCursedWeapon`, `+0x1820.b2`);
  - crítico sem escudo: o mesmo mais `Lineageeffect.p_u004_a`.
- Tudo exige `p10` (alvo desenhado; forçado a 1 se `pawn[0x35] == 0xf`).

**`n` = tamanho do grupo. [O]** `GEngine+0x68` é o console da NWindow. A vfunc 0x61c (slot 391, `NWindow!0x10142820`) devolve `m_pDataManager+0x38`. Esse mesmo contador é lido como `PartyMemberCount` nos tratadores de `EV_PartyMemberChanged` (slots 202/203, `0x1015eec0`/`0x1015f020`). [I] A contagem não inclui o próprio personagem, como `SocialUi.PartyCount` e o `PartyMemberCount` dos eventos do porte.

**`bUseDarkEffect`. [O]** É só declarado (`Pawn.uc:784`, Engine.u) e copiado nos construtores de cópia (`00001.c:14122` etc.). Nada no nativo, no Engine.u, no GamePlay.u, no Interface.u nem no LineageCreature.u o liga. No Interlude o crítico usa `AtkCr`. O porte implementa o ramo com `darkEffect = false`.

**Arco: `APawn::AttackedNotify` (0x103046e2, tipo 1 = a flecha crava), `00002.c:4235`. [O]** Usa os flags do atacante em `+0x634` e a grade em `+0x638`:
- **com soulshot:** escudo encurta a vida da flecha (0.01). A flecha crava no osso. Depois sai o DamageEffect (sem KeepMinFrameRate) e o mesmo Atk/AtkCr/AtkDarkCr, com a mesma regra de opacidade, no ponto e na rotação da flecha;
- **sem soulshot:** escudo sem crítico não mostra nada (vida 0.1); escudo com crítico mostra DamageEffect e p_u004_a; sem escudo, a flecha crava e sai o DamageEffect, sem p_u004_a.

**Golpe duplo e vários alvos. [O]** Cada golpe do pacote tem os próprios flags e grade. O dual dá um `Action_Attack` por notify, com o golpe seguinte do array. O pole dá todos os alvos extras no mesmo notify. O efeito sai em cada alvo cujo golpe tem o 0x10. No porte, o laço do `OnAttack` já é por golpe; com o pedido 0053, cada golpe passa o próprio `h.Flags`.

**Resumo por grade** (`soulshot.int`, Ver111 XOR 0xAC, em `fx_tables.json` `soulshot`):

| Grade (flags & 0xF) | Atk | AtkCr |
|---|---|---|
| 0 None | e_u505_c | e_u505_e |
| 1 D | e_u506_c | e_u506_e |
| 2 C | e_u507_c | e_u507_e |
| 3 B | e_u508_c | e_u508_e |
| 4 A | e_u509_c | e_u509_e |
| 5 S | e_u510_c | e_u510_e |

`AtkDarkCr` = `_d`. As 18 classes existem em `lineageeffect.json` (StreamingAssets).

**Decisões.**
- A atenuação antiga (`0.9−(n−3)·0.08` no DamageEffect com "n golpes simultâneos em 0,5 s") estava errada. Agora vale só para o efeito do shot, com o tamanho do grupo.
- O alvo grande ganhou a regra do Clamp 0.85.
- [I] Não reproduzido: o teste `bRendered`; o ponto exato onde a flecha crava (o porte usa o ponto do corpo a corpo); it_zariche_ta.
- Mantive `OnHit(..., bool crit, ...)` para o `App.cs` atual compilar. Ela equivale a `flags = crit ? 0x20 : 0`, corpo a corpo.

## Entrega

- **Commits:** `feat/render-soulshot-acerto`:
  - 118b832: `FxPawnEffects` (`HitEffects`, `SoulshotHitClass`, `SoulshotOpacity`, `HitLocation`, `OnHit(flags, arrow)`), `FxSoulshotHitTests` e a W3 do `Docs/efeitos.md`;
  - 3cf9dc0: `App.cs` (pedido 0053, pela coordenadora);
  - eb0a547: evidências ao vivo em `Docs/evidencias/soulshot-acerto/` e a W3.
- **Testes:** EditMode 922/922 no 118b832 e no 3cf9dc0 (base 912/912), `FxSoulshotHitTests` 10/10, sem erros de compilação. Ao vivo antes e depois com Soulshot D (normal, crítico e sem SS), 0 erros no console.
- **Falta / fora do escopo:**
  - Não visto ao vivo: as grades sem grade, C, B, A e S (sem arma nem shot dessas grades), a opacidade com grupo de mais de 2 e a flecha com SS. Esses casos estão cobertos só pelos testes EditMode.
  - Fora do escopo [I]: o teste de alvo visível (`bRendered`), o ponto exato onde a flecha crava e o `it_zariche_ta` da arma amaldiçoada.
  - Observado de passagem: no original, a flecha crítica sem escudo e sem soulshot não mostra o p_u004_a. O porte agora segue o original, porque o 3cf9dc0 marca a flecha.

## Pedidos

Nenhum por enquanto.
