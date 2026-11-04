# Z dos teleportes do aCis contra a geodata (#0057)

Mede, em todos os destinos de teleporte do servidor, a diferença entre o Z que o aCis manda e o chão da geodata, e o que o pouso do porte faz com ela (`Movement.Land`, `TeleportLandingTests`). A tabela completa, uma linha por destino, fica em [`teleporte_z.tsv`](teleporte_z.tsv).

## De onde vem o Z (Observado, aCis somente leitura)

Todos os teleportes de jogador passam por `Creature.teleportTo(x, y, z, randomOffset)` (`Creature.java:518`). Ele soma ±`randomOffset` em x/y e `z += 10`, manda o `TeleportToLocation` e faz `setXYZ`. **Não consulta a geodata.** O Z é o valor fixo do XML + 10.

| Caminho | Quem chama | Destinos |
|---|---|---|
| `/unstuck` (`Escape`, skill 2099/2100) e volta à cidade | `MapRegionData.getLocationToTeleport` → `getRandomLoc()` (offset 20) | `<spawn>` de `data/xml/zones/TownZone.xml`; em cerco, `SiegeZone`; com karma, `isChaotic`; em arena, `ArenaZone`; clã, `ClanHallZone`/`CastleZone` |
| Gatekeeper comum: `npc_<id>_goto N`, `randomTeleport` | `Gatekeeper.onBypassFeedback` → `teleportTo(list, 20)` | `data/xml/teleportLocations.xml` |
| Global Gatekeeper (NPC 10003, `teleporter/10003.htm` e `teleporter/custom/*.htm`): `goto`, `randomTeleport`, `goto_chaotic_zone`, `gotoPvpZone` | `Gatekeeper` e `GlobalTeleport` (`cmd_goto…`) → `teleportTo(list, 20)` ou `teleportTo(zone.getRandomLoc(), 50)` | `teleportLocations.xml` e os `<spawn>` de `PvpZone`/`ChaoticZone` |
| Prisão, olimpíada, `BlockZone`, `PeaceZone` | `getRandomLoc()` da zona | `<spawn>` dessas zonas |

## Método

`tele_geo.py`, `an.py`, `rule.py` e `doc.py` (rascunhos da sessão, fora do git) leem os `.l2d` de `shared\StreamingAssets-L2Web\geodata` com **todas** as camadas. Para cada destino, aplicam o Z do pacote (XML + 10) e o pé do original (pacote + 10, `OnTeleportToLocation`) e calculam três coisas:
- o pouso do original: `L2_Teleport` com janelas de ±30·i até 900 e, sem chão nesse alcance, a queda;
- o pouso do porte, só com as duas camadas que o `GeoTerrain.GroundHeight` conhece (a mais alta e a mais baixa);
- as duas coisas em 9 pontos da área do `randomOffset` (±20 em x e y).

Na coluna "acima", diff = Z do pacote − chão do original. Positivo é o pacote acima do chão; negativo, abaixo.

## Resultado (2119 destinos, 2108 com geodata)

| Fonte | Destinos | Pacote > 24 acima | Maior acima | Pacote abaixo (< −8) | Pouso do porte = original | Fica no Z (multicamada) |
|---|---:|---:|---:|---:|---:|---:|
| teleportLocations.xml | 997 (+11 sem geodata) | 79 | 1054 | 45 | 994 | 3 |
| TownZone (unstuck) | 262 | 180 | 202 | 0 | 255 | 7 |
| SiegeZone | 233 | 140 | 106 | 4 | 233 | 0 |
| PvpZone | 158 | 0 | 10 | 0 | 158 | 0 |
| ChaoticZone | 156 | 0 | 10 | 0 | 156 | 0 |
| ClanHallZone | 98 | 22 | 274 | 11 | 98 | 0 |
| CastleZone | 73 | 16 | 334 | 4 | 73 | 0 |
| OlympiadStadiumZone | 60 | 0 | 12 | 0 | 60 | 0 |
| JailZone | 42 | 0 | 10 | 0 | 42 | 0 |
| BlockZone | 22 | 0 | 10 | 0 | 22 | 0 |
| ArenaZone | 6 | 0 | 12 | 0 | 6 | 0 |
| PeaceZone | 1 | 0 | 13 | 0 | 1 | 0 |

**Nenhum destino pousa em camada errada**, conferido nas 9 amostras de cada um. O porte acerta 2098 dos 2108. Os 10 restantes ficam no Z do servidor porque a célula é multicamada e o porte só conhece a camada mais alta e a mais baixa. Corrigir esses fica para o pedido 0051 (`LocalAssets.GeoLayers` → `World.GroundLayers`):

| Destino | Pacote | Chão do original | Fica acima | Camadas |
|---|---:|---:|---:|---|
| TownZone Dark Elven Village (4 spawns, ex.: 11404, 16699) | −4490 | −4656 | 166 | 7136, −4656 |
| TownZone Elven Village (3 spawns, ex.: 45576, 49412) | −2940 | −3064 | 124 | −2544, −3064, −3928 |
| teleportLocations 50021 Baium 1 (Global GK, `epic.htm`) | 9017 | 8992 | 25 | 10 camadas, 10080 … −5104 |
| teleportLocations 213 (Tower of Insolence) | 9017 | 8992 | 25 | 14 camadas |
| teleportLocations 211 (Tower of Insolence) | 7038 | 5984 | 1054 | 16 camadas; o original também não acha pouso a 900 e cai |

### Regra do porte (`Movement.Land`)

- **Célula de uma camada** (a mais alta igual à mais baixa): regra do original. O próprio jogador procura com janelas de ±30 até 900 e, sem chão nesse alcance, cai. Os outros pawns caem até o chão mais alto abaixo do pé.
- **Célula multicamada sem `GroundLayers`:** a mesma regra, mas o pouso só vale até `MultiLayerTrust` = 150 do pé. Mais longe, o pawn fica no Z do servidor. Medido nas 18 972 amostras:

  | Limite | Certo | Fica acima > 24 | Camada errada | Pior erro |
  |---:|---:|---:|---:|---:|
  | 120 | 18 801 | 171 | 0 | 0 |
  | **150** | **18 889** | **83** | **0** | **0** |
  | 200 | 18 817 | 47 | 108 | 144 |
  | 900 (sem limite) | 18 553 | 27 | 392 | 872 |

  A primeira versão da #0057 (`5fb74d9`) não tinha esse limite. Em Baium e nas catacumbas, a queda iria para a camada mais baixa, até 14 mil unidades abaixo.
- **Com `GroundLayers`** (todas as camadas, pedido 0051): regra exata do original em qualquer célula.
- **Limite de 900:** só o teleporte 211 tem o chão a mais de 900 do pé. Ali o original loga "Couldn't find landing place" e cai. O porte, sem as camadas, fica no Z; com elas, cai em 5984, como o original.

## Global Gatekeeper (NPC 10003): destinos de farm e de cidade

| Página | Destinos | Pacote > 24 acima | Maior acima | Maior abaixo |
|---|---:|---:|---:|---:|
| `custom/towns.htm` | 17 | 0 | 21 | −24 |
| `custom/levelup.htm` (farm) | 24 | 1 (12035: 159641, −13415, +78) | 78 | −26 |
| `custom/solo-zone.htm` (farm, `randomTeleport`) | 33 | 0 | 16 | — |
| `custom/bossed.htm` | 19 | 1 (40047 Near Gludin Village 1: +98) | 98 | −8 |
| `custom/epic.htm` | 18 | 1 (50021 Baium 1: +25, multicamada) | 25 | — |
| `10003.htm` | 1 | 0 | 10 | — |

**Inferido:** nos teleportes de farm do Global Gatekeeper, o Z do pacote fica em geral a até 26 unidades da geodata, acima ou abaixo. Nos de cidade, ele fica até 24 abaixo e a pessoa aparece afundada no chão. A #0057 corrige essas duas diferenças. Mesmo assim, uma flutuação grande numa área de farm não vem principalmente do Z do teleporte: vem da distância entre a geodata e o chão desenhado (terreno UE, BSP). Isso é da #0056 (`GeoTerrain.VisualFloor`/`PickFloor`, `feat/render-pawns-chao`), e as duas correções se somam. A validar ao vivo (pedido de teste 0057).
