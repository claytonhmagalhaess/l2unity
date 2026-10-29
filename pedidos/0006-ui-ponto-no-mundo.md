# Pedido 0006 — App.cs: ponto do mundo sob o cursor para soltar item no chão

| Campo | Valor |
|---|---|
| De | ui (tarefa #0010) |
| Para | coordenadora (App.cs; o raycast é o `scene.Pick` da world/render) |
| Estado | aberto |
| Criado | 2026-10-29 |

## O que precisa

Em `Assets/L2Web/Scripts/App.cs`, no `new UiDeps { … }` (hoje `App.cs:127-149`), ligar o `GroundAt` (o `GetClickLocation` do Interlude, `L2SlotManager.PontoDoDrop` no Spark) com o mesmo raycast do clique no mundo (`ClickAt`, `App.cs:2610`):

```csharp
// GetClickLocation (InventoryWnd.OnDropItemSource "Console"): ponto do chao sob a posicao de tela
GroundAt = screen =>
{
    var hit = scene?.Pick(screen.x, screen.y);
    if (hit == null || hit.Kind != "ground") return null;
    return (Mathf.RoundToInt(hit.X), Mathf.RoundToInt(hit.Y), Mathf.RoundToInt(hit.Z));
},
```

## Por quê

Sem isso, arrastar um item do inventário para fora da interface não faz nada (a UI pede o ponto e recebe null). Com ele, a UI mostra a confirmação sm400 (ou a quantidade sm71) e manda `RequestDropItem 0x12` com o ponto. Nada quebra: o padrão é `_ => null`.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
