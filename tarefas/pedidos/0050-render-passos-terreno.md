# Pedido 0050 — Som de passo: comparar o terreno com a altura desenhada do pawn

| Campo | Valor |
|---|---|
| De | render (tarefa #0056) |
| Para | coordenadora |
| Estado | aberto |
| Criado | 2026-11-04 |

## O que precisa

Em `Assets\L2Web\Scripts\App.cs`, no `world.OnNotify` (por volta da linha 210, o passo sem `Sound`), trocar o `e.Z` pela altura em que o pawn é desenhado:

```csharp
                    var h = UeTerrain.UeHeightAt(e.X, e.Y);
                    var surf = h.HasValue && Mathf.Abs(h.Value - Entities.DrawHeight(e.X, e.Y, e.Z)) < 24 ? "default" : "stone_hard";
```

(`Entities` é `L2Web.World.Entities`; o `App.cs` já usa `Entities.SetDrawHeight` na linha 110.)

## Por quê

O `e.Z` é o z do servidor/geodata, que fica 26 a 32 unidades acima do terreno do Unreal nos campos (mediana medida no Turek, Gludio e Dion; tarefa #0056). Com o limite de 24, o passo na grama sai quase sempre `stone_hard`. Depois da #0056 o pawn é desenhado sobre o terreno (`GeoTerrain.VisualFloor`), então a diferença para o terreno fica perto de 0 nos campos e continua ~160 sobre o piso BSP de Giran (`stone_hard`, como hoje).

Sem isso nada quebra: só o som de passo nos campos fica o de pedra.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
