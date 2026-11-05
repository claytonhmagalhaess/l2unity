# Pedido 0062 — App.cs: golpes nos AttackShot, alvo automático, Die e Revive pelo World

| Campo | Valor |
|---|---|
| De | world (tarefa #0060) |
| Para | coordenadora |
| Estado | aberto |
| Criado | 2026-11-05 |

## O que precisa

Cinco mudanças em `Assets\L2Web\Scripts\App.cs`. Todas usam métodos que já estão no branch `feat/world-sistema-ataque`, nos commits `c729c42` e `810e9dd`.

O item 1 está escrito já com o pedido 0053 da #0058 aplicado: `OnHit` recebe os flags inteiros e o `bool arrow`. Se o 0053 ainda não estiver no branch, troque `h.Flags, false` por `hk == "crit"`.

O item 1 também é compatível com o pedido 0054 da #0059 (`attacker.Attack(target, a.X, a.Y, a.Z)`); a linha do `Attack` não muda.

**1. `OnAttack(AttackInfo a)`** (por volta da linha 2064): os golpes de corpo a corpo saem nos notifies `AttackShot`, pela regra do engine em `Combat.MeleeHitSchedule`. Hoje saem nos `AttackItem`, e um golpe extra além dos notifies sai no primeiro. O arco não muda. Troque o laço `for (var i = 0; i < a.Hits.Count; i++) { ... }` inteiro por:

```csharp
            if (res.Ranged)
            {
                for (var i = 0; i < a.Hits.Count; i++)
                {
                    var h = a.Hits[i];
                    var victim = world.Get(h.TargetId);
                    if (victim == null) continue;
                    var hk = Combat.HitKind(h.Flags);
                    var shot = res.Shots.Count > 0 ? res.Shots[0] : res.Items.Count > 0 ? res.Items[0] : 0.2f;
                    var land = Mathf.Max(shot + 0.08f, srv.Hits[0] / 1000f);
                    fx.Later(shot, () => scene.PawnFx.OnBowShot(attacker, victim));
                    if (hk != "miss") fx.Later(land, () => scene.PawnFx.OnHit(victim, attacker, h.Flags, true, scene.DamageEffectOf));
                }
            }
            else
            {
                // UAnimNotify_AttackShot::Notify (engine.c:445644): 1o AttackShot = golpe principal (e todos os extras se o
                // clipe so tem um notify, pole); cada notify seguinte = proximo extra; sem extras repete o principal
                foreach (var (i, at) in Combat.MeleeHitSchedule(res.Shots, a.Hits.Count, k => srv.Hits[Math.Min(k, srv.Hits.Length - 1)] / 1000f))
                {
                    var h = a.Hits[i];
                    var victim = world.Get(h.TargetId);
                    if (victim == null || Combat.HitKind(h.Flags) == "miss") continue;
                    fx.Later(at, () => scene.PawnFx.OnHit(victim, attacker, h.Flags, false, scene.DamageEffectOf));
                }
            }
```

**2. Tratador do `0x05`** (por volta da linha 1637), logo depois de `world.Answered(a.AttackerId);`: o alvo automático de quem ataca. O original manda `Action` com o id do atacante, a posição do próprio pawn e o Shift.

```csharp
                if (a.Hits.Count > 0 && world.AutoTargetOnAttack(a.AttackerId, a.Hits[0].TargetId, targetId) && world.Self is { } me)
                    gc?.Send(GamePackets.Action(a.AttackerId, Mathf.RoundToInt(me.X), Mathf.RoundToInt(me.Y), Mathf.RoundToInt(me.Z),
                        Keyboard.current?.shiftKey.isPressed ?? false));
```

**3. Seleção de alvo** (por volta das linhas 1779-1801): troque as chamadas diretas pelos métodos do `World`, que também mexem no `AutoTargetPawn` e no `PendingTime`.
- `0xa6`: `world.Request.MyTargetSelected();` passa a ser `world.OnMyTargetSelected();`.
- `0x2a`: `world.Answered(u.ObjectId);` passa a ser `world.OnTargetUnselected(u.ObjectId);`.
- `0x29`: `world.Answered(t.ObjectId);` passa a ser `world.OnTargetSelected(t.ObjectId);`.

**4. `0x06` Die** (por volta da linha 1803): o bloco

```csharp
                if (e != null)
                {
                    e.SetDead(true);
                    e.InCombat = false;
                }
```

passa a ser só `world.OnDie(d.ObjectId);`. O `Entity.SetDead(true)` agora faz o que o `OnDie` do engine faz: StopMove, sai da postura de combate e corta ataque e cast. O `var e = world.Get(d.ObjectId);` pode sair se não for mais usado.

**5. `0x07` Revive** (por volta da linha 1817): `world.Get(id)?.SetDead(false);` passa a ser `world.OnRevive(id);`. O pawn toca a `Rebirth_*`, e o próprio jogador destrava o clique, como no `OnRevive`.

## Por quê

O levantamento está em `Docs/combate_lacunas.md`, no branch.

Sem o pedido nada quebra: os métodos novos existem, mas ninguém os chama. Fica faltando, contra o original:
1. O golpe aparece no `AttackItem`, uns 0,03 a 0,05 s antes do `AttackShot`. Com punho (dois notifies e um golpe), o segundo impacto não aparece.
2. Atacado sem alvo, o jogador não seleciona o atacante. O original seleciona (`UGameEngine::OnAttack`, `00011.c:17080-17095`).
3. Sem o item 3, o alvo automático pede de novo a cada golpe enquanto o servidor não responde. Também não espera os 10 s depois de perder o alvo.
4. Sem o item 4, um pawn que morre andando ou castando continua até o destino ou volta ao cast depois da Death.
5. Sem o item 5, o pawn revive sem a animação de levantar, e a trava do clique fica ligada se estava pendente.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
