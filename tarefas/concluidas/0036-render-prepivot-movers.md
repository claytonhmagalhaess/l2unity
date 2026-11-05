# Pedido 0036 — Reexportar `Lobby_movers.json` com o `prePivot` das vinhas do login

| Campo | Valor |
|---|---|
| De | render (tarefa #0049) |
| Para | coordenadora |
| Estado | feito |
| Criado | 2026-11-04 |

## O que precisa

Depois do merge de `feat/render-cipos-login`, rodar no `l2unity` (o script grava em `Assets\StreamingAssets\L2Web\cache\map\`, que é o `shared`):

```
python -I Docs/tools/export_map_emitters.py Lobby "C:\Users\Clayton\workspace-claude\L2Unity-workspace\reference\l2-interlude\client"
```

O que muda no `shared`:

- `cache/map/Lobby_movers.json`: as 10 linhas de `movers` ganham a chave `prePivot`. Só as 8 vinhas (`MovableStaticMeshActor1-4` e `6-9`, `Primitive_INDeco_Long003`) recebem um valor, `[0.0, 0.0, 3000.0]`. O moinho (`StaticMeshActor573`) e a árvore (`MovableStaticMeshActor0`) ficam com `null`. Nenhum outro campo muda. Conferido rodando o script com a saída desviada para o scratchpad e comparando com o arquivo atual.
- `cache/map/Lobby_emitters.json`: é regravado com o mesmo conteúdo. As texturas que já estão em `cache/raw` não são exportadas de novo.

Opcional: os outros mapas que já têm `<mapa>_movers.json` (`MapEnv`) podem ser reexportados do mesmo jeito para as portas e os móveis ganharem `prePivot`. No `Lobby.unr`, só as 8 vinhas têm PrePivot. Os outros mapas não foram levantados.

## Por quê

O `Lobby.unr` grava `PrePivot = (0, 0, 3000)` nas 8 vinhas que balançam (`AMovableStaticMeshActor::physL2Movement`). O `AActor::LocalToWorld` (Engine.dll, export 0x4ad9) põe a malha em `Location + (p − PrePivot)·S·R`. Com DrawScale 0,1, cada vinha fica pendurada de 157 a 289 UU abaixo de `Location` e balança como um pêndulo preso nele. O exportador usava o `props_of` do inventário, que joga fora o `PrePivot`. Por isso o porte desenhava as vinhas 300 UU acima, fora do quadro do login.

O código do branch já lê `prePivot` (`LobbyMovers.ActorOf`, `MapEnv`, `Statics.ActorMatrix`). Sem a reexportação nada quebra, porque o json atual não tem a chave e tudo continua como hoje. Só que as vinhas continuam fora do quadro.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
- 2026-11-04 — coordenadora: feito: `export_map_emitters.py Lobby` rodado no `main`; só a chave `prePivot` mudou (8 vinhas com (0, 0, 3000), moinho e árvore `null`), `Lobby_emitters.json` igual. `run_tests.sh` no `main`: 879/879 (`12a8e52`).
