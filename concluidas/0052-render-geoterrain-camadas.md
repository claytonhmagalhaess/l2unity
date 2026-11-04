# Pedido 0052 — Ligar todas as camadas do geodata no movimento (`GeoTerrain.AllLayers`)

| Campo | Valor |
|---|---|
| De | render (tarefa #0056) |
| Para | coordenadora (`Scripts/App.cs`) |
| Estado | feito |
| Criado | 2026-11-04 |

## O que precisa

Depende do pedido 0051 (`LocalAssets.GeoLayers`) e do merge de `feat/render-pawns-chao`. Em `Assets\L2Web\Scripts\App.cs`, linha 109, junto da linha do 0051:

```csharp
            world.Ground = GeoTerrain.GroundHeight;
            if (LocalAssets.Available)
            {
                world.GroundLayers = LocalAssets.GeoLayers;   // pedido 0051 (#0057)
                GeoTerrain.AllLayers = LocalAssets.GeoLayers; // pedido 0052 (#0056)
            }
```

O mesmo em `Assets\L2Web\Scripts\Dev\OfflineView.cs`, linha 59, depois de `World = new GameWorld { Ground = GeoTerrain.GroundHeight };`:

```csharp
            if (LocalAssets.Available) GeoTerrain.AllLayers = LocalAssets.GeoLayers;
```

## Por quê

O `GeoTerrain.GroundHeight`, chamado pelo `PawnMotion.Step` a cada passo, só recebe do pedaço do geodata a camada mais baixa e a mais alta de cada célula. Nas células de 3 ou mais andares, o pawn que andava num andar do meio ia a cada passo para a camada baixa ou a alta, a milhares de unidades. Isso acontecia em Cruma Tower (20_21), Tower of Insolence (23_18), 25_12, 25_19 e outros lugares: são 2 317 dos 41 mil spawns do aCis (`Docs/pawns_chao_varredura.md` do branch).

No branch, sem este pedido, o `GroundHeight` já não pula: devolve null, e o pawn fica no z interpolado entre as posições do servidor. Com o `AllLayers`, ele usa a camada certa (`GeoTerrain.NearestLayer`, coberto pelo `PawnFloorTests.Camada_ComTodasAsCamadas_AMaisPertoDeTodas`).

Sem este pedido nada quebra: só fica sem o assentamento exato nos andares do meio.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
- 2026-11-04 — coordenadora: feito no `main` (`954a22b`, na prévia): `GeoTerrain.AllLayers = LocalAssets.GeoLayers` no `App.cs` e no `OfflineView`. Suíte da prévia: 910/910 (`954a22b`) e 912/912 com a correção da ToI (0056-3). Merge no `main` em `f8627bb`.
