# Pawns no chão (#0056)

Capturas e logs da sessão de testes. O "antes" é o `main` `eb1f39d` e o "depois" é o branch `feat/render-pawns-chao`.

## 0056-1 (`6187e0a`, correção do terreno)

- Suíte: 891/891, `PawnFloorTests` 12/12. O `main` dá 879/879.
- **Offline** (`OfflineView.Begin`, um Play por ponto, Game view 1024x768): `pawns-chao_<ponto>_antes.png` / `_depois.png` em turek, gludio_campo, dion_campo, dragon_valley, giran_fora e giran_praca, e os recortes lado a lado `cmp_gludio_campo.png` e `cmp_dion_campo.png`. A câmera segue o personagem, então a diferença de ~0,3 m aparece pouco nas imagens. Os números estão em `offline-depois-bonus.log`:

  | Ponto | Z do geodata | Desenho antes | Desenho depois | Terreno UE |
  |---|---|---|---|---|
  | Turek | −3584 | −3584 | −3606,5 | −3606,5 |
  | Campo de Gludio | −3536 | −3536 | −3570,4 | −3570,4 |
  | Campo de Dion | −2960 | −2960 | −2988,4 | −2988,4 |
  | Dragon Valley | −3704 | −3704 | −3725,8 | −3725,8 |
  | Fora de Giran | −3512 | −3512 | −3546,4 | −3546,4 |
  | Praça de Giran | −3400 | −3432 (piso BSP) | −3432 (piso BSP) | −3570,3 |

- **Ao vivo** (aCis local, conta `l2webtest7`, personagem Chao56): `giran_vivo` (pés no piso de Giran). Depois, gatekeeper para Dion e de lá para Plains of Dion (634, 179199, −3710): `campo_pos_teleporte`, `campo_parado`, `campo_correndo` e `campo_combate`/`_2`, atacando um Monster Eye Destroyer. O personagem, os Dire Wolf, os Kadif Werewolf, os Monster Eye e os Glass Jaguar ficam com os pés na grama, e ninguém flutua. Log em `e2e-vivo.log`.

## 0056-2 (`791b1c3`, mapa inteiro e andares), pasta `0056-2/`

- Suíte: 895/895, `PawnFloorTests` 16/16. O `main` dá 879/879.
- **Parado:** os mesmos números do 0056-1. Os "antes" são as capturas do 0056-1.
- **Andando** (`ServerMove` +300 em X; leituras parado / 1 s / 3 s; capturas `*_andando_*` com 1 s e `*_andando_3s_*` com 3 s; números em `offline-andar-antes.log` / `offline-andar-depois.log`):

  | Ponto | Antes: Self.Z | Depois: Self.Z | Desenho depois |
  |---|---|---|---|
  | Cruma Tower, 1º andar (15012, 109656) | −9048 → **−3720** → −3656: voa ~5300 e aparece fora da torre, sobre a grama | −9048 → −9048 → −9048 | −9075, sempre no piso de pedra |
  | Tower of Insolence (115956, 13896) | 5984 → **10112** → 7360: voa | 5984 → 5984 → 5984 | 5961, sempre no piso |
  | Turek | desenho = Z do geodata (−3584, −3584, −3552) | — | −3606,5 / −3608,8 / −3581,0, igual ao `SurfaceAt` (±0,001) |

- **Ao vivo** (aCis local, `l2webtest7`, Plains of Dion): `campo_parado`, `campo_andando`, `campo_correndo` e `campo_combate`. Os pés do personagem e dos monstros (Monster Eye Destroyer, Kadif Werewolf) ficam na grama: Self.Z −3720 e desenho −3753,3. Não foram feitos `giran_vivo`, `campo_pos_teleporte` nem `cruma_andando`, porque o servidor assumiu o personagem (autofarm do L2Ketra, ver `e2e-vivo.log`). Em `autofarm_orc_barracks.png`, em Orc Barracks, os pés ficam na grama: Z −3856, desenho −3874.

## 0056-3 (`6f1dcf2` sobre a prévia `integracao/pawns-chao` `954a22b`, com o `AllLayers` ligado), pasta `0056-3/`

Na prévia, o pawn caía um andar na Tower of Insolence: andando de (115956, 13896, 5984) até 116256, ia para 4976 por causa do buraco do piso entre 116020 e 116116. O `6f1dcf2` aplica o `MaxLayerJump` também com todas as camadas.

- Suíte: 912/912, `PawnFloorTests` 18/18.
- ToI: 3 rodadas, e o Z fica em 5984 (desenho 5961) em todas as leituras, inclusive no trecho do buraco.
- Cruma, 1º andar: −9048 em todas as leituras.
- Turek: o desenho é igual ao `SurfaceAt`.
