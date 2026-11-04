# Varredura: pawns no chão no mapa inteiro (#0056)

Pergunta: em que lugares do mapa o pawn é desenhado longe do chão que o porte desenha, e por quê. Medido offline, sem Unity, com os scripts de `Docs/tools/pawns_chao/` (ver o README de lá), sobre o `shared` e o aCis local. Data: 2026-11-04, `main` `eb1f39d`.

## Regra do desenho

O pawn é desenhado em `Entities.DrawHeight(x, y, z)` = `GeoTerrain.VisualFloor`, com `z` do servidor/geodata (o mesmo dos pacotes e do movimento). Como o `UGameEngine::AdjustPawnLocation` do original (trace do cilindro de `z + CollisionHeight + 20` para baixo, alargando 30 a cada volta até 30 voltas), o `VisualFloor` põe os pés no chão desenhado mais alto abaixo de `z`:

| | `main` (antes) | `feat/render-pawns-chao` (depois) |
|---|---|---|
| Piso de Statics (BSP e StaticMesh, raio) | de `z + 8` até `z − 48` | de `z + 8` até `z − 48`; sem acerto, até `z − 900` |
| Terreno do Unreal (malha, `UeTerrain.SurfaceAt`) | nunca | de `z + 20` até `z − 900` (exceto onde o próprio geodata ainda é desenhado) |
| Nada achado | `z` | `z` |

E o movimento (`PawnMotion.Step` → `GeoTerrain.GroundHeight`) escolhe a camada do geodata mais perto do z do pawn. Antes ele só conhecia a camada mais baixa e a mais alta de cada célula. Depois, numa célula de vários andares, não pula para uma camada a mais de 128 do z (`MaxLayerJump`). Com o gancho `GeoTerrain.AllLayers` (pedido 0052, depende do 0051), usa todas as camadas.

## Resultado

**Pontos do servidor** (41 803 em tiles com geodata: 37 913 spawns de monstro, 2 901 de NPC e 1 008 destinos de teleporte do aCis; para cada um, a camada do geodata mais perto do z do servidor):

| | Pés no chão desenhado |
|---|---|
| `main` | 14 649 (35,0%): só quem fica sobre BSP/StaticMesh, quase só as cidades. Os outros 65% ficam ~27 acima da grama (mediana do geodata − terreno). |
| depois, janela curta (piso até `z − 48`, terreno até `z − 84`) | 41 733 (99,83%) |
| depois, com o trace descendo até `z − 900` (o que foi para o branch) | 41 802 (99,998%) |

Sobra 1 ponto: Conjurer Bat Lord (152214, −17572), com o geodata 37 abaixo do terreno e sem malha embaixo. Ele fica no z do servidor, meio enterrado.

**Andando, em lugares de vários andares:** 5 154 pontos ficam em células com 3 ou mais camadas. Em 2 317 deles (6% de todos), a camada baixa e a alta ficam a mais de 64 do z do servidor: Cruma Tower (20_21, 443 pontos), Tower of Insolence (23_18, 510), 25_12 (440), 25_19 (206), 24_12, 21_24 e outros. Ali, no `main`, o pawn parado fica certo, porque usa o z do servidor. Andando, ele ia a cada passo para a camada baixa ou a alta, a milhares de unidades: é o "voando ao andar" nas áreas de farm. Com a camada certa, todos os 5 154 estão sobre piso desenhado (4 956) ou terreno (196), exceto 2 em 25_14.

## Padrão por zona

- **Campos (terreno do Unreal):** o geodata fica de 20 a 33 acima do terreno, com a mesma mediana em todos os 137 tiles que têm terreno, de 18 a 33. Nenhum tile tem deslocamento próprio: não há erro de `Location`, escala nem heightmap.
- **Cidades e interiores (BSP/StaticMesh):** o geodata fica ~30 acima do piso. Isso já estava certo no `main`, porque o raio de Statics achava o piso.
- **Células "fora" de vários tiles** (20_18, 20_19, 21_18, 21_19 com 12 a 23% das células): são blocos planos do geodata, 8×8 células com a mesma altura (2672, 664, 1264, −352, −680), em montanhas fora do alcance. De 81 a 96% das células "fora" desses tiles estão nesses blocos, e não há spawn nem teleporte neles.
- **Tiles sem terreno do Unreal:** 19_11 e 20_11. Ali o próprio geodata é desenhado, e o pawn fica nele.
- **Tiles com o `map/<tile>.json` vazio** (0 atores, sem StaticMeshes): 31 tiles, quase todos de borda ou mar (16_19, 16_20, 16_22, 16_23, 17_12, 17_18, 17_19, 17_24, 18_11, 18_12, 18_13, 18_17, 18_18, 18_25, 19_11, 19_25, 20_11, 20_24, 20_25, 21_13, 23_10, 24_10, 24_13, 24_22, 24_24, 24_25, 25_10, 26_11, 26_12, 26_15, 26_16). Se algum deles tiver objetos no cliente original, eles não aparecem no porte. Isso é exportação e fica fora desta tarefa. O pawn sobre o geodata de um objeto que falta desce até o chão desenhado.

## Por tile

Colunas:
- **geodata − terreno:** só nas células de uma camada.
- **Células:** piso = há BSP/StaticMesh em `[z − 48, z + 8]`; terreno = o terreno está em `[z − 84, z + 20]`; fora = nenhum dos dois. Conta todas as camadas baixa e alta, alcançáveis ou não.
- **Fora sem blocos planos:** o mesmo "fora", sem os blocos planos de montanha.
- **No chão antes / depois:** fração dos pontos do servidor do tile com os pés no chão no `main` e com a janela curta. Com o trace até `z − 900`, todos menos 1.

| Tile | Terreno UE | geodata − terreno: p5 / mediana / p95 / p99 | Células: piso / terreno / fora | Fora sem blocos planos | Pontos do servidor | No chão antes | No chão depois | Pontos em 3+ andares |
|---|---|---|---|---|---|---|---|---|
| 16_10 | sim | 33 / 33 / 33 / 761 | 45.2% / 54.4% / 0.4% | 0.41% | 0 | — | — | 0 |
| 16_11 | sim | 30 / 30 / 294 / 734 | 8.8% / 89.7% / 1.5% | 1.48% | 17 | 94.1% | 100.0% | 0 |
| 16_12 | sim | 32 / 32 / 32 / 32 | 4.3% / 95.6% / 0.0% | 0.04% | 6 | 100.0% | 100.0% | 0 |
| 16_19 | sim | 33 / 33 / 33 / 33 | 0.0% / 99.7% / 0.3% | 0.34% | 0 | — | — | 0 |
| 16_20 | sim | 26 / 30 / 30 / 34 | 0.0% / 99.3% / 0.7% | 0.73% | 0 | — | — | 0 |
| 16_21 | sim | 22 / 28 / 33 / 36 | 0.4% / 99.5% / 0.1% | 0.09% | 12 | 0.0% | 100.0% | 0 |
| 16_22 | sim | 31 / 31 / 31 / 31 | 0.0% / 100.0% / 0.0% | 0.00% | 0 | — | — | 0 |
| 16_23 | sim | 31 / 31 / 31 / 31 | 0.0% / 99.9% / 0.1% | 0.13% | 0 | — | — | 0 |
| 16_24 | sim | 16 / 28 / 33 / 39 | 0.6% / 99.2% / 0.3% | 0.27% | 202 | 0.5% | 100.0% | 0 |
| 16_25 | sim | 14 / 28 / 34 / 341 | 2.4% / 96.0% / 1.6% | 0.95% | 335 | 2.1% | 99.7% | 0 |
| 17_10 | sim | 29 / 29 / 293 / 733 | 8.8% / 89.7% / 1.5% | 1.48% | 0 | — | — | 0 |
| 17_11 | sim | 29 / 29 / 293 / 733 | 8.8% / 89.3% / 1.9% | 1.86% | 0 | — | — | 0 |
| 17_12 | sim | 32 / 32 / 32 / 32 | 0.0% / 100.0% / 0.0% | 0.00% | 0 | — | — | 0 |
| 17_18 | sim | 33 / 33 / 33 / 33 | 0.0% / 99.3% / 0.7% | 0.68% | 0 | — | — | 0 |
| 17_19 | sim | 32 / 32 / 32 / 32 | 0.0% / 100.0% / 0.0% | 0.00% | 0 | — | — | 0 |
| 17_20 | sim | 14 / 28 / 36 / 291 | 3.7% / 95.2% / 1.0% | 1.00% | 298 | 2.0% | 99.7% | 0 |
| 17_21 | sim | 13 / 28 / 41 / 377 | 5.1% / 93.4% / 1.5% | 1.14% | 482 | 2.1% | 100.0% | 0 |
| 17_22 | sim | 11 / 28 / 92 / 442 | 9.4% / 89.6% / 1.0% | 0.97% | 129 | 62.0% | 98.4% | 3 |
| 17_23 | sim | 19 / 31 / 33 / 37 | 1.0% / 98.9% / 0.2% | 0.16% | 71 | 0.0% | 100.0% | 0 |
| 17_24 | sim | 24 / 28 / 33 / 34 | 0.0% / 100.0% / 0.0% | 0.00% | 0 | — | — | 0 |
| 17_25 | sim | 13 / 28 / 34 / 144 | 8.9% / 90.3% / 0.9% | 0.75% | 539 | 11.5% | 99.8% | 3 |
| 18_10 | sim | 32 / 32 / 32 / 32 | 5.0% / 95.0% / 0.0% | 0.03% | 224 | 100.0% | 100.0% | 0 |
| 18_11 | sim | 32 / 32 / 32 / 32 | 0.0% / 100.0% / 0.0% | 0.00% | 0 | — | — | 0 |
| 18_12 | sim | 32 / 32 / 32 / 32 | 0.0% / 100.0% / 0.0% | 0.00% | 0 | — | — | 0 |
| 18_13 | sim | 33 / 33 / 33 / 33 | 0.0% / 99.2% / 0.8% | 0.78% | 0 | — | — | 0 |
| 18_14 | sim | 10 / 29 / 44 / 319 | 3.4% / 94.3% / 2.3% | 2.26% | 415 | 13.3% | 100.0% | 3 |
| 18_17 | sim | 32 / 32 / 32 / 32 | 0.0% / 99.7% / 0.3% | 0.34% | 0 | — | — | 0 |
| 18_18 | sim | 32 / 32 / 32 / 32 | 0.0% / 100.0% / 0.0% | 0.00% | 0 | — | — | 0 |
| 18_19 | sim | -9 / 28 / 53 / 1000 | 15.2% / 82.7% / 2.2% | 2.09% | 474 | 65.8% | 100.0% | 0 |
| 18_20 | sim | 13 / 28 / 45 / 554 | 8.7% / 89.6% / 1.7% | 1.64% | 603 | 30.5% | 100.0% | 1 |
| 18_21 | sim | 12 / 28 / 37 / 190 | 4.5% / 94.5% / 1.1% | 1.05% | 389 | 2.6% | 99.5% | 2 |
| 18_22 | sim | 13 / 28 / 36 / 52 | 1.3% / 98.0% / 0.6% | 0.61% | 133 | 0.0% | 100.0% | 0 |
| 18_23 | sim | 13 / 29 / 42 / 363 | 7.1% / 91.3% / 1.7% | 1.63% | 408 | 39.7% | 100.0% | 22 |
| 18_24 | sim | 12 / 28 / 34 / 46 | 13.2% / 86.4% / 0.4% | 0.38% | 401 | 61.8% | 100.0% | 3 |
| 18_25 | sim | 31 / 31 / 31 / 31 | 0.0% / 99.7% / 0.3% | 0.34% | 0 | — | — | 0 |
| 19_10 | sim | 32 / 32 / 32 / 32 | 5.0% / 94.9% / 0.0% | 0.03% | 226 | 100.0% | 100.0% | 0 |
| 19_11 | não | — | 0.0% / 0.0% / 0.0% | 0.00% | 0 | — | — | 0 |
| 19_13 | sim | 11 / 32 / 38 / 88 | 0.4% / 98.0% / 1.6% | 1.60% | 186 | 0.0% | 100.0% | 0 |
| 19_14 | sim | 10 / 28 / 42 / 152 | 0.8% / 97.8% / 1.3% | 1.34% | 672 | 0.9% | 99.9% | 0 |
| 19_15 | sim | 12 / 30 / 40 / 135 | 2.5% / 96.4% / 1.1% | 1.11% | 492 | 0.0% | 100.0% | 0 |
| 19_16 | sim | 32 / 32 / 32 / 32 | 12.1% / 87.5% / 0.3% | 0.34% | 483 | 100.0% | 100.0% | 39 |
| 19_17 | sim | 27 / 33 / 33 / 252 | 1.8% / 97.3% / 0.9% | 0.90% | 0 | — | — | 0 |
| 19_18 | sim | 12 / 29 / 44 / 628 | 6.5% / 91.8% / 1.7% | 1.63% | 745 | 24.4% | 100.0% | 2 |
| 19_19 | sim | 14 / 27 / 39 / 2116 | 23.4% / 72.1% / 4.5% | 1.59% | 752 | 41.4% | 100.0% | 0 |
| 19_20 | sim | 13 / 27 / 36 / 330 | 8.4% / 90.5% / 1.1% | 1.05% | 315 | 59.4% | 99.7% | 0 |
| 19_21 | sim | 11 / 28 / 37 / 253 | 8.0% / 91.3% / 0.8% | 0.72% | 727 | 14.0% | 99.7% | 6 |
| 19_22 | sim | 11 / 29 / 40 / 1368 | 2.6% / 94.9% / 2.5% | 1.37% | 383 | 1.3% | 100.0% | 2 |
| 19_23 | sim | 11 / 29 / 125 / 573 | 14.1% / 83.5% / 2.4% | 2.31% | 738 | 48.4% | 99.9% | 2 |
| 19_24 | sim | 14 / 30 / 34 / 207 | 8.8% / 90.2% / 1.0% | 1.01% | 145 | 0.7% | 100.0% | 0 |
| 19_25 | sim | 31 / 31 / 31 / 31 | 0.0% / 100.0% / 0.0% | 0.00% | 0 | — | — | 0 |
| 20_10 | sim | 32 / 32 / 32 / 32 | 2.6% / 97.4% / 0.0% | 0.02% | 114 | 100.0% | 100.0% | 0 |
| 20_11 | não | — | 0.0% / 0.0% / 0.0% | 0.00% | 0 | — | — | 0 |
| 20_13 | sim | 12 / 33 / 42 / 309 | 6.4% / 91.8% / 1.7% | 1.58% | 128 | 25.0% | 100.0% | 0 |
| 20_14 | sim | 8 / 27 / 47 / 416 | 15.5% / 82.1% / 2.3% | 1.93% | 839 | 32.3% | 99.8% | 267 |
| 20_15 | sim | 15 / 31 / 41 / 96 | 1.0% / 98.0% / 1.0% | 1.03% | 200 | 0.5% | 100.0% | 0 |
| 20_16 | sim | 14 / 31 / 41 / 540 | 5.3% / 93.8% / 0.8% | 0.79% | 20 | 55.0% | 100.0% | 6 |
| 20_17 | sim | 11 / 30 / 48 / 268 | 6.7% / 90.7% / 2.6% | 2.55% | 70 | 8.6% | 100.0% | 2 |
| 20_18 | sim | 15 / 31 / 4876 / 10183 | 12.6% / 64.4% / 23.1% | 4.75% | 362 | 20.2% | 100.0% | 1 |
| 20_19 | sim | 13 / 28 / 2236 / 2968 | 3.2% / 80.7% / 16.1% | 2.06% | 729 | 1.5% | 99.9% | 0 |
| 20_20 | sim | 13 / 28 / 36 / 177 | 8.4% / 90.8% / 0.9% | 0.84% | 480 | 62.9% | 99.6% | 1 |
| 20_21 | sim | 13 / 27 / 36 / 125 | 41.5% / 57.0% / 1.5% | 1.02% | 1134 | 67.1% | 99.9% | 624 |
| 20_22 | sim | 11 / 28 / 36 / 251 | 5.3% / 93.7% / 1.0% | 0.95% | 690 | 13.2% | 99.6% | 14 |
| 20_23 | sim | 12 / 28 / 35 / 78 | 4.9% / 94.4% / 0.7% | 0.71% | 1005 | 1.5% | 100.0% | 1 |
| 20_24 | sim | 31 / 31 / 31 / 31 | 0.0% / 51.1% / 48.9% | 0.44% | 0 | — | — | 0 |
| 20_25 | sim | 31 / 31 / 31 / 31 | 0.0% / 99.2% / 0.8% | 0.78% | 0 | — | — | 0 |
| 21_13 | sim | 31 / 31 / 31 / 31 | 0.0% / 99.5% / 0.5% | 0.47% | 0 | — | — | 0 |
| 21_14 | sim | 8 / 27 / 179 / 1664 | 10.6% / 87.4% / 2.0% | 1.99% | 293 | 29.4% | 100.0% | 0 |
| 21_15 | sim | 10 / 29 / 51 / 278 | 3.1% / 95.0% / 1.9% | 1.91% | 75 | 0.0% | 100.0% | 0 |
| 21_16 | sim | 9 / 29 / 112 / 3336 | 10.3% / 86.6% / 3.0% | 2.87% | 157 | 52.9% | 99.4% | 19 |
| 21_17 | sim | 15 / 31 / 35 / 197 | 2.1% / 97.4% / 0.6% | 0.57% | 6 | 100.0% | 100.0% | 0 |
| 21_18 | sim | 14 / 30 / 2769 / 3653 | 8.7% / 75.5% / 15.7% | 4.43% | 251 | 5.6% | 99.2% | 6 |
| 21_19 | sim | 14 / 28 / 1616 / 2455 | 9.5% / 78.7% / 11.8% | 1.55% | 882 | 9.8% | 100.0% | 12 |
| 21_20 | sim | 12 / 27 / 39 / 98 | 5.4% / 93.9% / 0.7% | 0.71% | 20 | 10.0% | 100.0% | 0 |
| 21_21 | sim | 11 / 29 / 41 / 106 | 6.7% / 91.9% / 1.4% | 1.38% | 979 | 19.4% | 99.4% | 7 |
| 21_22 | sim | 13 / 29 / 41 / 359 | 5.8% / 93.0% / 1.2% | 1.18% | 414 | 6.3% | 99.3% | 0 |
| 21_23 | sim | 12 / 28 / 39 / 188 | 8.9% / 90.3% / 0.9% | 0.82% | 309 | 79.6% | 100.0% | 0 |
| 21_24 | sim | 15 / 28 / 44 / 185 | 13.9% / 84.4% / 1.7% | 1.66% | 492 | 95.3% | 99.2% | 190 |
| 21_25 | sim | 32 / 32 / 32 / 32 | 1.9% / 98.0% / 0.1% | 0.06% | 176 | 100.0% | 100.0% | 9 |
| 22_13 | sim | 9 / 30 / 73 / 777 | 8.4% / 89.1% / 2.5% | 2.41% | 155 | 74.2% | 99.4% | 26 |
| 22_14 | sim | 9 / 28 / 193 / 1162 | 15.6% / 79.8% / 4.6% | 3.07% | 452 | 18.4% | 99.8% | 38 |
| 22_15 | sim | 8 / 28 / 1153 / 3961 | 14.5% / 81.7% / 3.9% | 3.63% | 453 | 4.4% | 100.0% | 6 |
| 22_16 | sim | 12 / 29 / 92 / 294 | 29.5% / 68.1% / 2.4% | 2.24% | 926 | 70.6% | 99.1% | 13 |
| 22_17 | sim | 13 / 30 / 43 / 153 | 2.1% / 96.9% / 1.0% | 0.98% | 268 | 3.7% | 100.0% | 0 |
| 22_18 | sim | 12 / 28 / 52 / 351 | 7.3% / 90.9% / 1.8% | 1.66% | 436 | 9.2% | 100.0% | 32 |
| 22_19 | sim | 11 / 28 / 63 / 1631 | 6.6% / 91.9% / 1.6% | 1.51% | 333 | 28.2% | 99.7% | 8 |
| 22_20 | sim | 11 / 27 / 35 / 103 | 5.6% / 93.4% / 1.0% | 0.93% | 427 | 0.7% | 100.0% | 7 |
| 22_21 | sim | 12 / 29 / 443 / 1498 | 11.8% / 86.0% / 2.1% | 2.10% | 419 | 0.5% | 100.0% | 0 |
| 22_22 | sim | 20 / 30 / 79 / 455 | 10.5% / 88.2% / 1.3% | 1.23% | 200 | 60.0% | 98.5% | 6 |
| 22_23 | sim | 11 / 28 / 43 / 276 | 18.3% / 80.5% / 1.2% | 1.16% | 502 | 37.6% | 100.0% | 0 |
| 22_24 | sim | 10 / 28 / 35 / 53 | 30.8% / 68.9% / 0.3% | 0.30% | 1140 | 50.4% | 100.0% | 0 |
| 22_25 | sim | 18 / 31 / 33 / 41 | 16.4% / 83.5% / 0.1% | 0.11% | 305 | 99.3% | 100.0% | 50 |
| 23_10 | sim | 32 / 32 / 32 / 32 | 0.0% / 99.8% / 0.2% | 0.25% | 0 | — | — | 0 |
| 23_11 | sim | 12 / 29 / 36 / 54 | 1.9% / 97.7% / 0.4% | 0.44% | 251 | 0.0% | 100.0% | 0 |
| 23_12 | sim | 8 / 28 / 46 / 129 | 3.8% / 94.4% / 1.8% | 1.80% | 273 | 9.5% | 100.0% | 6 |
| 23_13 | sim | 10 / 28 / 45 / 235 | 5.3% / 92.9% / 1.9% | 1.81% | 153 | 0.0% | 100.0% | 0 |
| 23_14 | sim | 12 / 30 / 354 / 1408 | 13.7% / 81.4% / 4.8% | 4.64% | 467 | 6.9% | 100.0% | 0 |
| 23_15 | sim | 10 / 28 / 47 / 361 | 19.4% / 79.4% / 1.2% | 1.10% | 298 | 95.3% | 100.0% | 150 |
| 23_16 | sim | 11 / 29 / 471 / 1272 | 12.9% / 82.1% / 5.0% | 4.94% | 1165 | 2.8% | 100.0% | 0 |
| 23_17 | sim | 11 / 29 / 47 / 738 | 4.1% / 94.6% / 1.3% | 1.25% | 159 | 1.3% | 99.4% | 0 |
| 23_18 | sim | 18 / 27 / 38 / 745 | 12.3% / 86.0% / 1.7% | 1.48% | 607 | 96.0% | 100.0% | 578 |
| 23_19 | sim | 11 / 30 / 59 / 364 | 11.1% / 86.8% / 2.1% | 2.06% | 430 | 16.7% | 100.0% | 0 |
| 23_20 | sim | 10 / 29 / 48 / 140 | 4.3% / 93.7% / 1.9% | 1.88% | 199 | 8.5% | 100.0% | 0 |
| 23_21 | sim | 11 / 29 / 619 / 1572 | 14.4% / 82.9% / 2.8% | 2.68% | 318 | 3.5% | 100.0% | 0 |
| 23_22 | sim | 11 / 28 / 40 / 317 | 8.0% / 90.9% / 1.1% | 1.04% | 318 | 43.7% | 100.0% | 8 |
| 23_23 | sim | 12 / 28 / 48 / 473 | 26.6% / 71.0% / 2.4% | 2.39% | 731 | 69.4% | 99.9% | 0 |
| 23_24 | sim | 12 / 28 / 129 / 635 | 13.8% / 83.8% / 2.4% | 2.22% | 73 | 42.5% | 100.0% | 5 |
| 23_25 | sim | 14 / 30 / 36 / 199 | 7.5% / 91.3% / 1.2% | 1.13% | 16 | 93.8% | 100.0% | 4 |
| 24_10 | sim | 32 / 32 / 32 / 32 | 0.0% / 99.8% / 0.2% | 0.16% | 0 | — | — | 0 |
| 24_11 | sim | 11 / 29 / 38 / 164 | 3.9% / 95.3% / 0.8% | 0.77% | 330 | 0.9% | 100.0% | 0 |
| 24_12 | sim | 11 / 26 / 38 / 141 | 18.4% / 80.5% / 1.1% | 1.02% | 418 | 79.9% | 100.0% | 334 |
| 24_13 | sim | 23 / 29 / 75 / 119 | 0.0% / 96.6% / 3.4% | 3.37% | 0 | — | — | 0 |
| 24_14 | sim | 11 / 28 / 59 / 281 | 6.2% / 92.1% / 1.7% | 1.67% | 199 | 6.0% | 100.0% | 0 |
| 24_15 | sim | 10 / 28 / 59 / 508 | 4.4% / 93.1% / 2.6% | 2.54% | 1497 | 0.2% | 99.9% | 0 |
| 24_16 | sim | 10 / 28 / 103 / 729 | 9.9% / 88.2% / 1.9% | 1.80% | 428 | 34.3% | 99.1% | 31 |
| 24_17 | sim | 10 / 28 / 70 / 281 | 11.1% / 87.1% / 1.8% | 1.80% | 439 | 23.7% | 99.8% | 0 |
| 24_18 | sim | 12 / 28 / 552 / 1262 | 18.8% / 78.7% / 2.5% | 2.26% | 495 | 30.1% | 99.8% | 16 |
| 24_19 | sim | 12 / 28 / 43 / 606 | 11.4% / 87.8% / 0.9% | 0.82% | 8 | 87.5% | 100.0% | 0 |
| 24_20 | sim | 12 / 29 / 45 / 384 | 16.0% / 80.6% / 3.4% | 3.17% | 579 | 40.2% | 99.5% | 51 |
| 24_21 | sim | 18 / 18 / 33 / 49 | 11.0% / 88.0% / 0.9% | 0.93% | 621 | 99.5% | 100.0% | 14 |
| 24_22 | sim | 13 / 28 / 35 / 50 | 1.0% / 98.5% / 0.5% | 0.49% | 0 | — | — | 0 |
| 24_23 | sim | 22 / 28 / 31 / 37 | 0.2% / 99.7% / 0.1% | 0.02% | 0 | — | — | 0 |
| 24_24 | sim | 22 / 31 / 31 / 33 | 0.0% / 99.8% / 0.2% | 0.20% | 0 | — | — | 0 |
| 24_25 | sim | 25 / 31 / 32 / 52 | 0.2% / 99.3% / 0.5% | 0.50% | 0 | — | — | 0 |
| 25_10 | sim | 32 / 32 / 32 / 32 | 0.0% / 99.9% / 0.1% | 0.14% | 0 | — | — | 0 |
| 25_11 | sim | 12 / 28 / 36 / 66 | 2.4% / 97.1% / 0.5% | 0.52% | 367 | 0.5% | 100.0% | 0 |
| 25_12 | sim | 12 / 25 / 37 / 83 | 20.5% / 78.4% / 1.1% | 0.93% | 1134 | 90.3% | 100.0% | 1033 |
| 25_14 | sim | 9 / 27 / 40 / 101 | 28.3% / 70.8% / 0.9% | 0.79% | 512 | 98.4% | 99.6% | 505 |
| 25_15 | sim | 9 / 27 / 42 / 242 | 24.0% / 74.7% / 1.3% | 1.16% | 182 | 96.2% | 100.0% | 153 |
| 25_16 | sim | 9 / 29 / 195 / 1045 | 6.2% / 87.6% / 6.2% | 6.20% | 302 | 2.3% | 100.0% | 0 |
| 25_17 | sim | 10 / 28 / 42 / 101 | 15.5% / 83.5% / 1.0% | 0.81% | 718 | 32.6% | 100.0% | 264 |
| 25_18 | sim | 15 / 30 / 418 / 1449 | 27.0% / 71.2% / 1.8% | 1.68% | 462 | 54.1% | 98.9% | 0 |
| 25_19 | sim | 12 / 27 / 59 / 2386 | 20.9% / 77.5% / 1.5% | 1.40% | 755 | 74.6% | 100.0% | 569 |
| 25_20 | sim | 18 / 18 / 40 / 610 | 5.7% / 91.7% / 2.7% | 2.61% | 48 | 0.0% | 100.0% | 0 |
| 25_21 | sim | 33 / 33 / 33 / 33 | 4.9% / 94.7% / 0.4% | 0.37% | 4 | 100.0% | 100.0% | 0 |
| 26_11 | sim | 21 / 31 / 31 / 35 | 0.7% / 99.2% / 0.0% | 0.01% | 0 | — | — | 0 |
| 26_12 | sim | 20 / 31 / 33 / 38 | 1.1% / 98.8% / 0.1% | 0.08% | 0 | — | — | 0 |
| 26_14 | sim | 12 / 28 / 60 / 1156 | 5.2% / 90.3% / 4.5% | 4.25% | 4 | 25.0% | 100.0% | 0 |
| 26_15 | sim | 32 / 32 / 32 / 32 | 0.0% / 100.0% / 0.0% | 0.00% | 0 | — | — | 0 |
| 26_16 | sim | 32 / 32 / 32 / 32 | 0.0% / 100.0% / 0.0% | 0.00% | 0 | — | — | 0 |

## Pontos que a janela curta não pegava (e o trace até `z − 900` pega)

São 70 pontos. 69 acham o chão desenhado de 27 a 472 abaixo (mediana 79): geodata sobre algo que o porte não desenha. Exemplos:
- em Giran, lojas onde o geodata fica ~150 acima do piso BSP (Vokian, Manakia);
- o pântano dos Stakato (22_16), com o geodata ~84 acima do fundo e sem superfície de água exportada;
- os Ol Mahum de 21_21, com o geodata de 2 camadas sobre algo sem malha.

| Tile | Pontos | Exemplos (nome, x, y, z do servidor) |
|---|---|---|
| 22_16 | 8 | Splinter Stakato Worker (82285, -41179, -3208) flutua; Splinter Stakato Drone (73812, -42528, -3200) flutua; Splinter Stakato Drone (77481, -42905, -3144) flutua |
| 21_21 | 6 | Ol Mahum Shooter (40855, 126906, -1624) flutua; Ol Mahum Shooter (40822, 119437, -2112) flutua; Ol Mahum Guerilla (41447, 122290, -1640) flutua |
| 25_18 | 5 | Treasure Chest (171459, 21042, -3240) flutua; Grave Guard (180578, 22364, -3144) flutua; Taik Orc Supply Leader (179872, 18270, -3136) flutua |
| 21_24 | 4 | Zaken's Pikeman (41082, 197687, -4616) flutua; Pirate Zombie (41938, 197983, -4584) flutua; Doll Blader (53452, 216416, -3976) afunda |
| 24_16 | 4 | Kookaburra (156024, -46862, -3648) flutua; Borodin (146580, -58752, -2973) flutua; Gerard (148224, -56496, -2779) flutua |
| 21_22 | 3 | Mandragora Sprout (40921, 146521, -3744) flutua; Ghoul (45994, 147523, -3528) flutua; Nameless Revenant (56697, 142645, -2552) flutua |
| 20_22 | 3 | Dire Wolf (29483, 136039, -2736) flutua; Roughly Hewn Rock Golem (6533, 147868, -3144) flutua; Dowki (20040, 143308, -3047) flutua |
| 24_20 | 3 | Taik Orc Captain (143184, 74074, -3344) flutua; Taik Orc Captain (146184, 79659, -2928) flutua; Carinkain (146184, 79659, -2928) flutua |
| 22_22 | 3 | Vokian (80456, 144376, -3536) flutua; Manakia (80459, 144592, -3529) flutua; Adventure Guildsman (82768, 146320, -3536) flutua |
| 21_18 | 2 | Treasure Chest (45237, 23882, -4760) flutua; Trisalim Tarantula (45237, 23882, -4760) flutua |
| 20_20 | 2 | Shade Horror (13408, 76422, -4176) afunda; Dre Vanul Tracker (10744, 81953, -3800) afunda |
| 18_21 | 2 | Tracker Skeleton Leader (-44420, 117702, -3416) flutua; Raging Spartoi (-50214, 108772, -3640) flutua |
| 20_14 | 2 | Kasha Blade Spider (26944, -125168, -704) flutua; Kasha Bear (25504, -123950, -704) flutua |
| 25_14 | 2 | Tepra Scarab (185144, -120861, -3064) afunda; Assassin Beetle (186509, -117640, -3264) afunda |
| 17_22 | 2 | Kasman (-80448, 153408, -3176) flutua; Umos (-80448, 153208, -3176) flutua |
| 19_21 | 2 | Racoy (-12788, 124976, -3117) flutua; Adventure Guildsman (-13328, 122720, -3055) flutua |
| 20_19 | 1 | Dryad (24425, 60712, -3328) flutua |
| 17_20 | 1 | Arachnid Tracker (-68741, 83630, -3480) flutua |
| 19_23 | 1 | Granite Golem (-29887, 193097, -3288) flutua |
| 20_21 | 1 | Marsh Stakato Worker (15772, 103956, -3552) flutua |
| 19_14 | 1 | Greystone Golem (-19041, -121635, -1976) flutua |
| 24_17 | 1 | Conjurer Bat Lord (152214, -17572, -2824) afunda |
| 23_23 | 1 | Nos Lad (119612, 169009, -3368) flutua |
| 24_15 | 1 | Grazing Kookaburra (134268, -70660, -3032) flutua |
| 22_14 | 1 | Varangka's Succubus (69214, -104866, -987) flutua |
| 17_25 | 1 | Silvia (-83789, 240799, -3717) flutua |
| 16_25 | 1 | Tiramisa (-115744, 235924, -4032) flutua |
| 22_19 | 1 | Pekiron (83712, 56000, -1523) flutua |
| 21_16 | 1 | Rahorakti (38432, -49184, -1105) flutua |
| 23_17 | 1 | Border Patrol (111328, -10236, -1696) flutua |
| 19_20 | 1 | Bloody Pixy (-29574, 83336, -3512) flutua |
| 22_13 | 1 | Owaki (86282, -139682, -1528) flutua |
| 24_18 | 1 | Gatekeeper (147552, 2128, 221) flutua |
