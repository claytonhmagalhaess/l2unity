# Varredura geodata × chão desenhado (#0056)

Gera os números de `Docs/pawns_chao_varredura.md`. Lê o `shared\StreamingAssets-L2Web` (geodata `.l2d`, `cache/terrain_ue`, `cache/bsp`, `cache/map`, `cache/statics`) e o aCis (`sql/spawnlist.sql`, `data/xml/npcs`, `data/xml/teleportLocations.xml`), só leitura. Precisa de numpy.

Rode de uma pasta de trabalho fora do repo (ela recebe `sweep/` com ~1 GB de `.npz`), nesta ordem:

```
python <tools>/pawns_chao/sweep_terrain.py sweep   # geodata (baixa/alta/n camadas) e terreno UE por célula, ~5 min
python <tools>/pawns_chao/sweep_floor.py           # BSP + StaticMeshes rasterizados: piso na janela [z-48, z+8], ~6 min
python <tools>/pawns_chao/spawns.py                # pontos do servidor (spawns, teleportes) -> spawns.json
python <tools>/pawns_chao/gen_doc.py               # camada certa nas células de 3+ andares; tabela.md e residuos.md
python <tools>/pawns_chao/far.py                   # o que sobra, com o trace descendo até z - 900 (FarDown)
```

`classify.py` tem a regra por célula (piso / terreno / fora) e `multi.py` lê todas as camadas de uma célula do `.l2d`.
