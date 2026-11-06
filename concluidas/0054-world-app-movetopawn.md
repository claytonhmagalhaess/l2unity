# Pedido 0054 — App.cs: MoveToPawn, Attack e GetItem pelos métodos novos do Entity

| Campo | Valor |
|---|---|
| De | world (tarefa #0059) |
| Para | coordenadora |
| Estado | feito |
| Criado | 2026-11-05 |

## O que precisa

Três trocas no `Assets\L2Web\Scripts\App.cs`, usando métodos que o branch `feat/world-aproximacao-alvo` (commit `7fccefe`) acrescenta ao `World/Entity.cs`. Aplicar depois do merge desse branch (os métodos não existem no `main` antes dele).

**1. Handler do 0x60 (MoveToPawn), hoje em `On(0x60, ...)`:**

```csharp
On(0x60, r =>
{
    var m = GamePackets.ParseMoveToPawn(r);
    var e = world.Get(m.ObjectId);
    if (e != null) e.Follow = new FollowInfo { TargetId = m.TargetId, Distance = m.Distance };
    world.Answered(m.ObjectId);
});
```

passa a ser:

```csharp
On(0x60, r =>
{
    var m = GamePackets.ParseMoveToPawn(r);
    // UGameEngine::OnMoveToPawn: sem o pawn do alvo nao faz nada; outros pawns: AdjustPawnLocation + AddMoveToward
    world.Get(m.ObjectId)?.ServerMoveToPawn(world.Get(m.TargetId), m.Distance, m.X, m.Y, m.Z);
    world.Answered(m.ObjectId);
});
```

**2. `void OnAttack(AttackInfo a)`, a linha**

```csharp
var res = attacker.Attack(target);
```

passa a ser:

```csharp
// UGameEngine::OnAttack: AdjustPawnLocation pela posicao do atacante no pacote, depois o StopMove
var res = attacker.Attack(target, a.X, a.Y, a.Z);
```

**3. Handler do 0x0d (GetItem), logo depois de `var who = world.Get(g.PlayerId);`:**

```csharp
// UGameEngine::OnGetItem: StopMove, AdjustPawnLocation e vira para o item
who?.PickUp(g.X, g.Y, g.Z);
```

## Por quê

O original (Engine.dll) faz, nesses três pacotes:

- `UGameEngine::OnMoveToPawn` (export `0x1031407e`): ignora o pacote se o alvo não for conhecido; para outro pawn faz `AdjustPawnLocation` pela origem do pacote e `AController::AddMoveToward` (correção de velocidade para chegar junto com o servidor); o `MoveToward` troca o destino, então o `MoveToLocation` anterior acaba.
- `UGameEngine::OnAttack(User*,User*,...)` (export `0x10313d81`): `AdjustPawnLocation` pela posição do atacante e depois o `StopMove` do controller.
- `UGameEngine::OnGetItem` (export `0x1030d918`): `StopMove`, `AdjustPawnLocation` e rotação para o item.

Sem o pedido, o porte continua correto no principal, porque a parada no alcance, a rotação para o alvo e o fim do seguimento no `Attack` já estão no `Entity` e não dependem do `App.cs`. Fica incompleto em três pontos:

- os outros pawns que vêm até um alvo não ganham a correção de sincronia nem o ajuste pela origem;
- o destino de um `MoveToLocation` anterior só é limpo quando o seguimento termina;
- o atacante não é reposicionado pela posição do `Attack`, e o personagem não para nem se vira ao pegar um item.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
- 2026-11-05 — coordenadora: feito, aplicado no branch da #0059 (`d9a7f7d`) e no `main` pela prévia `integracao/combate`. Merge no `main` em `7c4c342`; suíte 970/970 no `57df023` (depois só Docs); o usuário conferiu a prévia no Editor.
