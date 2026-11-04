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
