# Pedido 0049 — Spec 09: mistura em gama e casos de shot da tabela legada

| Campo | Valor |
|---|---|
| De | render (tarefa #0053) |
| Para | coordenadora (tarefa de REA/correção da spec em `analises\`) |
| Estado | aberto |
| Criado | 2026-11-04 |

## O que precisa

Correções no `analises\l2-interlude\client_spec\09_efeitos_skill.md`. A #0053 não escreve em `analises\`.

1. **§4.5.1 (blending)**, acrescentar [O]: o D3DDrv mistura em espaço de gama. Em `FUN_100427cb` (`re\decomp_all\d3ddrv\00001.c:1530` e `:1560`), a inicialização do device chama `SetRenderState(D3DRS_SRGBWRITEENABLE = 0xC2, 0)` e `SetSamplerState(0, D3DSAMP_SRGBTEXTURE = 0xB, 0)`. Textura, TFactor/cor de vértice e framebuffer são bytes, e os blends da tabela operam neles. Uma engine linear precisa reproduzir isso (no porte: `Render/Fx/FxGammaPass.cs`).
2. **§3 (SpawnNTransientEffect, casos dos shots)**, acrescentar [O], de 0x104efb30 (`re\decomp_all\engine\00023.c`, casos 0x7f7, 0x7ff/0x80d, 0x866–0x874, a partir de ~44000):
   - grau = `(id − base) % 5 + 1`;
   - para cada mão (LH, depois RH): `v = soulshot.int[CurWeaponType].LH|RH`, com `CurWeaponType` = byte pawn+0x71d = `GetAnimType` (`00011.c:30459`) e as seções HAND, 1HS, 2HS, DUAL, POLE, BOW, THROW, DUALFIST na ordem de `FL2GameData::SoulShotDataLoad` (`00021.c` ~6500, LH em +0x7f5ec+i·8, RH em +0x7f5f0+i·8);
   - malha da mão (`FUN_104b4270`, ou `ExtraMeshDatas` com slot 0xb/10): sem malha, nada;
   - `v == 1`: se o array +0x150/+0x154 da malha está vazio ou o 1º valor é > 12 → `[Spirit]OnSticks` com `Emitters[0..1].StartVelocityRange.X = valor` (30 se vazio); senão → `[Spirit]OnBooks`;
   - `v == 0` → `[Spirit]OnBooks`; `v == −1` → nada;
   - preso ao osso da mão; `OnBooks` na LH com `RelativeRotation (0, 0x4000, 0)`.
3. **`scripts\legacy_fx_table.py` / `legacy_skill_fx.json`**: para esses casos a 1ª variante gerada (`when_any_of [[LeftHandMesh == 0], …]`, sequência vazia) casa com o caso comum (arma só na mão direita). Um executor que escolhe a primeira variante não spawna nada. Corrigir a exploração (falta o ramo da RH depois do ramo da LH) ou marcar esses casos como "implementar à mão" no `_meta`.

## Por quê

Com a mistura linear, os efeitos saíam com outra aparência: aditivos fracos sobre fundo claro, AlphaBlend leitoso, Modulated escurecendo, e os raios do lobby quase invisíveis. Pela tabela, nenhum soulshot ou spiritshot mostrava efeito. O porte já está corrigido (#0053); a spec continua dizendo o contrário ("[I] o projeto é linear") e induziria o erro de novo.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
