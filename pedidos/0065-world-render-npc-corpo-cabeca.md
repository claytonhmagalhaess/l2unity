# Pedido 0065 — Render: corpo do NPC some em 2 s, cabeça olha para o alvo, armas na social, spoil

| Campo | Valor |
|---|---|
| De | world (tarefa #0061) |
| Para | render |
| Estado | aberto |
| Criado | 2026-11-05 |

## O que precisa

Quatro itens de desenho do ator (`Render/Actor.cs`, `Render/Fx`) para NPCs. As evidências estão no levantamento da #0061 (`Docs/npcs_movimento.md`, branch `feat/world-npcs-movimento`). O pseudocódigo é do `engine.dll`, em `analises\l2-interlude\re\decomp_all\engine\`.

**1. O corpo some com fade de 2 s em vez de sumir na hora.** `UGameEngine::OnDeleteUser` (0x10307914, `00004.c:1999-2090`):
- NPC morto → `FNDeleteNpcAction` (`FUN_104bdcd0`, `00023.c:15650`). Por 2,0 s: alpha `255 − t·127,5`, `bUnlit`, e o corpo afunda no chão (o valor exato do afundamento está corrompido no Ghidra, **A validar**). Depois, `Destroy`.
- NPC vivo → `FNDisappearAction` (`FUN_104bdf10`, `00023.c:15714`): o mesmo fade de 2 s, sem afundar.
- Os dois flags do `OnDeleteUser` (`a`, `b`) que decidem entre "na hora" e "com fade" vêm de um caminho que não foi rastreado (**A validar**). A sugestão é usar o fade para NPC sempre que o `DeleteObject` chega com o modelo carregado.

Proposta: `Actor.FadeOut(float seconds, bool sink, Action done)`. Do lado do mundo, `World.Remove` passa a chamar o `FadeOut` para NPC e só faz `Dispose` no `done`. Isso eu faço quando o método existir (me avise pela #0061 ou pelo quadro). O aCis manda o `DeleteObject` 7 s depois do `Die` (`corpseTime`; 14 s com spoil).

**2. A cabeça olha para o alvo.** `APawn::TickSpecial` (0x10314f4c, `00012.c:9804-9903`), depois do `NActionProcess`:
- a cabeça (osso alias `e_bone`) olha para o alvo da ação (`pawn+0x63c`) ou para o alvo do controller, se ele estiver a menos de 2048 unidades;
- o yaw relativo ao corpo fica em ±0x4000 (90°) e o pitch em ±5000;
- passou de ±0x3ffe, volta ao neutro.

Sem isso, o NPC que acompanha o alvo só com o corpo parece "duro".

**3. SocialAction esconde as armas.** O `OnSocialAction` (0x1030c243, `00006.c:29124`) liga `NpcSocialHideRightWeapon[id-1]` → `0x5c bit 0x100` e `NpcSocialHideLeftWeapon[id-1]` → `bit 0x200` enquanto toca a social. Depois do pedido 0064, a tabela vem no `anim_tables.json`: 129 seções do `.int` escondem as duas armas. O `id == 15` é o efeito transiente 0x4e22, sem animação.

**4. Spoil no corpo.** O `OnDie` (0x1030b6c2, `00006.c:14535-14716`), com o flag de sweep do `Die` ligado, prende à pawn um `FNPawnLight` e o efeito `LineageEffect.s_u008_spoil`.

## Por quê

Nenhum quebra o jogo. Sem eles:
- o corpo do monstro some de uma vez;
- a cabeça não acompanha o alvo;
- o NPC social (depois do 0064) toca a animação segurando a arma;
- o corpo com spoil não brilha.

O tronco que dobra no golpe recebido já está no pedido 0063 (#0060), e vale também para NPCs.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
