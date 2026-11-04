# Pedido 0027 — `App.cs`: ponto do mundo sob o cursor para largar item (#0026)

| Campo | Valor |
|---|---|
| De | ui (tarefa #0026) |
| Para | coordenadora |
| Estado | aberto |
| Criado | 2026-11-03 |

## O que precisa

No `Assets\L2Web\Scripts\App.cs`, onde o `GameUi` é criado (depois de `ui = new GameUi(...)`), ligar o `GetClickLocation` do `InventoryWnd.uc`:

```csharp
// GetClickLocation (InventoryWnd.uc:354): ponto do mundo (L2) sob o cursor, para o RequestDropItem
ui.GroundAt = screen =>
{
    var hit = scene?.Pick(screen.x, screen.y);
    return hit == null ? (Vector3?)null : new Vector3(hit.X, hit.Y, hit.Z);
};
```

`GameUi.GroundAt` já existe no branch `feat/ui-inventario` (`d0c6e9a`) e recebe a posição do mouse em pixels da tela (a mesma do `ClickAt`).

## Por quê

Sem isso, arrastar um item do inventário para fora de qualquer janela larga o item nos pés do personagem, e não onde o mouse soltou. Nada quebra: o pedido só afina a posição.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
