# Pedido 0051 — Todas as camadas do geodata para o pouso do teleporte

| Campo | Valor |
|---|---|
| De | world (tarefa #0057) |
| Para | coordenadora (`Scripts/LocalAssets.cs`, `Scripts/App.cs`) |
| Estado | feito |
| Criado | 2026-11-04 |

## O que precisa

**1. `Scripts/LocalAssets.cs`:** guardar todas as camadas das células multicamada e expô-las.

Na classe `Region` (perto da linha 222), acrescente:

```csharp
            /// <summary>Celulas com mais de uma camada (bloco 0xd2): indice (y*RegionCells + x) -> todas as alturas.</summary>
            public Dictionary<int, short[]> Multi;
```

Em `LoadRegion`, logo depois de `reg = new Region { ... }`:

```csharp
                reg.Multi = new Dictionary<int, short[]>();
```

No ramo `type == 0xd2`, no laço `for (var c = 0; c < 64; c++)`: troque o laço das camadas para guardar as alturas e grave-as depois de calcular `i`:

```csharp
                                int layers = buf[p++];
                                short best = 32767, top = -32768;
                                var bestN = 0;
                                var all = layers > 1 ? new short[layers] : null;
                                for (var l = 0; l < layers; l++)
                                {
                                    var nswe = buf[p++];
                                    var h = I16();
                                    if (all != null) all[l] = h;
                                    if (h < best)
                                    {
                                        best = h;
                                        bestN = nswe;
                                    }
                                    if (h > top) top = h;
                                }
                                var i = (y0 + c % 8) * RegionCells + x0 + c / 8;
                                reg.Height[i] = best;
                                reg.High[i] = top;
                                reg.Flags[i] = (byte)((bestN & 0x0f) | (layers > 1 ? 0x10 : 0));
                                if (all != null) reg.Multi[i] = all;
```

Depois de `LoadRegion`, acrescente o método público:

```csharp
        /// <summary>
        /// Todas as camadas do geodata no ponto (x, y) do mundo L2 (pouso do teleporte, #0057); null se a regiao nao estiver
        /// no disco. Celula de uma camada devolve um elemento.
        /// </summary>
        public static IReadOnlyList<float> GeoLayers(float x, float y)
        {
            var gx = (int)Math.Floor((x + 294912f) / 16f); // 294912 = (20 - 11) * 32768: origem do tile 11
            var gy = (int)Math.Floor((y + 262144f) / 16f); // 262144 = (18 - 10) * 32768: origem do tile 10
            if (gx < 0 || gy < 0) return null;
            var reg = LoadRegion(11 + gx / RegionCells, 10 + gy / RegionCells);
            if (reg == null) return null;
            var i = (gy % RegionCells) * RegionCells + gx % RegionCells;
            if (reg.Multi != null && reg.Multi.TryGetValue(i, out var all))
            {
                var o = new float[all.Length];
                for (var k = 0; k < all.Length; k++) o[k] = all[k];
                return o;
            }
            return new float[] { reg.Height[i] };
        }
```

**2. `Scripts/App.cs`, linha 109:** depois de `world.Ground = GeoTerrain.GroundHeight;`, acrescente:

```csharp
            if (LocalAssets.Available) world.GroundLayers = LocalAssets.GeoLayers;
```

`World.GroundLayers` já existe em `feat/world-teleporte-chao` (`World/World.cs`). Este pedido depende do merge desse branch.

## Por quê

O aCis manda no TeleportToLocation o Z do XML + 10, sem consultar a geodata. A #0057 faz o pawn pousar no chão como o `L2_Teleport` do original. O `GeoTerrain.GroundHeight` só conhece duas camadas por célula, a mais baixa e a mais alta (o `LoadRegion` descarta as do meio). Por isso, nas células multicamada, o porte só confia num pouso a até 150 unidades do pé (`Movement.MultiLayerTrust`). Mais longe, fica no Z do servidor, porque a queda iria para a camada errada: em Baium seriam 14 mil unidades abaixo.

Sem este pedido, o código não quebra: só fica incompleto. A medição em todos os destinos do servidor (`Docs/teleporte_z.md` do branch) mostra 10 destinos que continuam flutuando:
- os 4 spawns de Dark Elven Village (o unstuck dos dark elves), a +166;
- 3 de Elven Village, a +124;
- Baium 1 e o teleporte 213, a +25;
- o teleporte 211, a +1054.

Com o `GroundLayers`, o `Movement.Land` usa a regra exata do original em todas as camadas. O teste `TeleportLandingTests.Land_ComTodasAsCamadas_RegraDoOriginal` já cobre esse caminho.

O `LoadRegion` é síncrono e fica em cache por região: a primeira consulta lê o `.l2d` (cerca de 1 MB) e as seguintes não leem nada. A consulta só acontece enquanto um pouso está pendente, logo depois de um teleporte ou de um pawn surgir.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
- 2026-11-04 — coordenadora: feito no `main` (`954a22b`, na prévia `integracao/pawns-chao`): `LocalAssets.GeoLayers` + `world.GroundLayers` no `App.cs`. Suíte da prévia: 910/910 (`954a22b`) e 912/912 com a correção da ToI (0056-3). Merge no `main` em `f8627bb`.
