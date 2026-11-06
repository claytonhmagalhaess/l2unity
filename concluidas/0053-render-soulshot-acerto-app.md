# Pedido 0053 — OnAttack: passar os flags do golpe (soulshot e grade) ao efeito no alvo

| Campo | Valor |
|---|---|
| De | render (tarefa #0058) |
| Para | coordenadora |
| Estado | feito |
| Criado | 2026-11-05 |

## O que precisa

Duas mudanças em `Assets\L2Web\Scripts\App.cs`. As duas usam métodos que já estão no branch `feat/render-soulshot-acerto` (`FxPawnEffects.OnHit(Entity, Entity, int flags, bool arrow, Func<Entity,string>)` e `FxPawnEffects.PartyMemberCount`).

**1. `OnAttack(AttackInfo a)`**, por volta das linhas 2085 e 2090: trocar o `hk == "crit"` pelos flags inteiros do golpe, marcando a flecha.

```csharp
                if (res.Ranged)
                {
                    var shot = res.Shots.Count > 0 ? res.Shots[0] : res.Items.Count > 0 ? res.Items[0] : 0.2f;
                    var land = Mathf.Max(shot + 0.08f, srv.Hits[0] / 1000f);
                    fx.Later(shot, () => scene.PawnFx.OnBowShot(attacker, victim));
                    if (hk != "miss") fx.Later(land, () => scene.PawnFx.OnHit(victim, attacker, h.Flags, true, scene.DamageEffectOf));
                }
                else if (hk != "miss")
                {
                    var hitAt = i < res.Items.Count ? res.Items[i] : res.Items.Count > 0 ? res.Items[0] : srv.Hits[Math.Min(i, srv.Hits.Length - 1)] / 1000f;
                    fx.Later(hitAt, () => scene.PawnFx.OnHit(victim, attacker, h.Flags, false, scene.DamageEffectOf));
                }
```

(`h` já é local do laço, `var h = a.Hits[i];`; a captura fica por golpe.)

**2. Logo depois de `scene.WireFx(sfx);`**, por volta da linha 1403:

```csharp
                    scene.WireFx(sfx);
                    scene.PawnFx.PartyMemberCount = () => social.PartyCount;
```

## Por quê

O efeito do soulshot no alvo (`soulshot.int[grade].Atk`, e `AtkCr` no crítico) depende do flag `0x10` e da grade (`flags & 0xF`) do golpe no pacote Attack 0x05. Hoje o `OnAttack` passa só `hk == "crit"` e esses bits se perdem: o efeito não aparece. No original, o tratador `FUN_10424e80` passa miss, escudo, crítico, soulshot e grade a `UGameEngine::OnAttack`; eles ficam em `pawn+0x634`/`+0x638` e chegam a `APawn::AssociateAttackedNotify` pelo `Action_Attack` do notify AttackItem. O levantamento está em `tarefas\0058-render-soulshot-acerto.md`.

O `PartyMemberCount` é o `n` do `SetOpacity(0.9 − (n − 3)·0.08)` que o original aplica só ao efeito do shot quando o grupo tem mais de 2 membros (`m_pDataManager+0x38` da NWindow, o `PartyMemberCount` dos eventos de party).

Sem o pedido nada quebra: a sobrecarga antiga (`bool crit`) continua no branch, e o golpe sai como antes, sem o efeito do soulshot. Os testes EditMode da #0058 não dependem dele. A captura ao vivo da #0058 depende do item 1.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
- 2026-11-05 — coordenadora: feito, aplicado no branch da #0058 (`3cf9dc0`) e no `main` pela prévia `integracao/combate`. Merge no `main` em `7c4c342`; suíte 970/970 no `57df023` (depois só Docs); o usuário conferiu a prévia no Editor.
