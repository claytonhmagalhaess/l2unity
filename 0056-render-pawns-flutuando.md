# #0056 — Personagens e monstros flutuando fora de Giran

| Campo | Valor |
|---|---|
| Vaga | render |
| Branch | `feat/render-pawns-chao` (nasce de `main`) |
| Estado | fazendo |
| Spec | `analises\l2-interlude\client_spec\` (posição do pawn, terreno, geodata/colisão, `PawnMotion`/`PHYS_Walking`); `Render/GeoTerrain.cs`, `Render/UeTerrain.cs`, `Render/Actor.cs`, `World/PawnMotion.cs`, `World/Movement.cs`, `World/Coords.cs` |
| Sessão | render: pawns flutuando (#0056) |
| Criada | 2026-11-04 |

## Objetivo

O usuário validou o `main` no aCis local. Em Giran os pés ficam no chão, mas fora da cidade principal personagens e monstros aparecem flutuando acima do terreno. O exemplo foi Turek / Orc Barracks: o jogador e os orcs ficam no ar, longe do chão.

No original, todo pawn fica com os pés no chão do terreno ou da malha onde está. Esta tarefa acha a causa e corrige. Causas possíveis:
- o Z do servidor sem o ajuste ao chão;
- a altura do terreno do porte diferente da do original (heightmap, escala, deslocamento por zona);
- a meia altura de colisão aplicada duas vezes;
- outra causa.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Causa registrada em Decisões e REA com a evidência: pseudocódigo do engine no Tryskell ou na REA (como o cliente põe o pawn no chão: `PHYS_Walking`, `FindFloor`/trace para baixo, `CollisionHeight`, `PrePivot` do mesh do pawn), dados do terreno (`TerrainInfo`: escala, `Location`, heightmap) e o Z do servidor (aCis/geodata), comparando Giran, onde está certo, com o Turek, onde está errado.
- [ ] Jogador, outros jogadores, NPCs e monstros ficam com os pés no chão fora das cidades: Turek, campos de Gludio e Dion e mais uma zona com relevo. Também ficam no chão parados, andando, correndo, em combate e depois de teleporte. Giran continua certo.
- [ ] Se a causa for de outra área (por exemplo a posição em `World/` ou um pacote em `Net/`), o pedido vai para a vaga correspondente em `tarefas\pedidos\`, com o trecho exato. O que precisar de reexportação para o `shared` vira pedido para a coordenadora com o comando.
- [ ] Testes EditMode para a regra de altura (pawn sobre o terreno e sobre a malha, com e sem colisão). Suíte sem falhas novas em relação ao `main`, rodada pela sessão de testes.
- [ ] Capturas antes e depois em `Docs/evidencias/pawns-chao/`, tiradas pela sessão de testes no aCis local nas zonas acima, e uma linha em `Docs/validacao.md`.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->
- 2026-11-04 — branch `feat/render-pawns-chao` a partir de `main` (`eb1f39d`).
- 2026-11-04 — causa medida (geodata × terreno do Unreal em Giran, Turek, Gludio, Dion, Dragon Valley) e achada no `GeoTerrain.VisualFloor`; correção + `PawnFloorTests` (`df7ea56`).
- 2026-11-04 — conta `l2webtest7` em `Docs/contas_teste.md`; pedido 0050 (som de passo no `App.cs`); pedido de teste 0056-1 à sessão de testes.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

### Causa

- **Observado (código do porte):** o pawn é desenhado em `Entities.DrawHeight(x, y, z)` (`World/Entity.cs:255`), que o `App.cs:110` liga a `GeoTerrain.VisualFloor`. O `VisualFloor` só procurava piso nos `Statics` (BSP e StaticMesh), por raio de `z + 8` até `z - 48`, e saía logo com `z` se a cena não tinha Statics. **O terreno do Unreal nunca entrava.** O movimento e os pacotes usam o z do servidor/geodata (`PawnMotion.Step` com `GeoTerrain.GroundHeight`).
- **Observado (dados):** o z do geodata fica ~30 unidades acima do chão desenhado, no BSP das cidades e no terreno dos campos. Medido com `geodata\*.l2d` × `cache	errain_ue\<tile>\height.bin` (bilinear e pelos triângulos da malha), amostra a cada 48 unidades num quadrado de 6000 × 6000:

  | Zona | ponto | geodata | terreno UE | geodata − terreno (p5 / mediana / p95 / p99) |
  |---|---|---|---|---|
  | Turek / Orc Barracks (tile 17_21) | (−89839, 105362), teleporte 1044 do aCis z −3580 | −3584 | −3606,5 | 11 / 26,5 / 34 / 82 |
  | Campos de Gludio | (−12000, 170000) | −3536 | −3571,8 | 12 / 29 / 39 / 100 |
  | Campos de Dion | (23000, 154000) | −2960 | −2988,4 | 14 / 26,5 / 34 / 530 (construções) |
  | Fora de Giran | (90000, 140000) | | | 22 / 30 / 41 / 107 |
  | Giran, praça (tile 22_22) | (83400, 147943) | −3400 | −3563,3 | o chão é o BSP, ~30 abaixo do geodata; o terreno fica 137+ abaixo |

  Em Giran o raio achava o BSP 30 abaixo e o pawn ficava no chão; nos campos não há Statics embaixo e o pawn ficava no z do geodata, ~27 unidades (mais de meio corpo: `CollisionHeight` humano 23) acima da grama. É o "flutuando fora de Giran".
- **Observado (original, `analises\system_Tryskell_RE\engine.c:538645`, `UGameEngine::AdjustPawnLocation`, export 0x15046):** compara `Location.Z − CollisionHeight` (`+0x1c4 − +0x2f4`) com o z do servidor, ou seja, **o z do servidor é o dos pés**. Para reposicionar, faz um trace do cilindro de colisão (`GetCylinderExtent`, vtable `+0xe4` do nível) de `z + CollisionHeight + 20` até `z − 30`, alargando 30 para cada lado a cada volta (até 30 voltas), e põe o pawn no `Location` do acerto (`vtable +0xa8`, `FarMoveActor`). Pula o trace se o pawn nada/voa (`+0x778` 1 ou 2, `Physics` = 4). Depois o `APawn::physWalking` (`engine.c:513068`) o mantém sobre a superfície. Com o acerto muito no começo (`Time·12 < 1,9`) sobe até 2,15 unidades (ignorado aqui).
- **Descartado:** meia altura de colisão somada duas vezes (o root do modelo fica nos pés: `Coords.ToUnity(x, y, DrawHeight)`, e a câmera soma o `CollisionHeight` uma vez, `GameScene.cs:231`); `PrePivot` do mesh do pawn (o desvio é o mesmo para todos os pawns e some em Giran); escala/`Location` do `TerrainInfo` (o terreno bate com a malha desenhada e com o geodata a menos dos ~30 do próprio geodata em todas as zonas); z do servidor diferente por zona (o aCis manda o z do geodata, `GeoEngine.getHeight`).

### Correção (`df7ea56`)

- `GeoTerrain.VisualFloor` passa a considerar também o terreno do Unreal, quando é ele que está desenhado (`ueMode`), pela altura dos **triângulos da própria malha** (`UeTerrain.SurfaceAt`: diagonal de (i+1, j) a (i, j+1), coluna/linha da divisa tirada do vizinho como o `StitchAll`). Sem cache por célula, para não fazer degraus de 16 unidades nas encostas.
- `GeoTerrain.PickFloor(z, statics, terreno)`: entre os que estão nas suas janelas, o mais alto (o primeiro que um trace de cima acha). Statics: `[z − 48, z + 8]` (como antes, validado em Giran). Terreno: `[z − 84, z + 20]`. **Inferido:** `+20` é o fundo do cilindro no início do trace do original; `−84` são as duas primeiras voltas (30 + CollisionHeight ~24 + 30) e cobre o p99 das zonas medidas. Fora da janela fica o z do geodata (ponte ou andar cuja malha ainda não carregou não puxa o pawn para o terreno lá embaixo).
- `UeTerrain.fields` passou a usar a chave `(tx, ty)` em vez de string (o `SurfaceAt` roda por pawn a cada quadro). `UeTerrain.SetField` registra um heightmap sem montar a malha (testes).
- Nada muda em `World/` nem no `App.cs`: o movimento, os pacotes e o clique continuam com o z do geodata, como o servidor manda.

### A validar / fora

- **A validar ao vivo:** pés no chão nos campos (pedido de teste 0056-1).
- **Fora (World, não há nado/voo no porte):** o original não faz o ajuste para pawn nadando ou voando. O porte não tem esses estados (`ChangeMoveType.Swimming` é lido mas não usado); quando tiver, o `DrawHeight` deve devolver o z do servidor para eles.
- **#0057 (world, teleporte):** a altura desenhada depois do teleporte passa pelo mesmo `VisualFloor`. Nota para a sessão world na pasta de notas compartilhada.

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

- `pedidos\0050-render-passos-terreno.md` (coordenadora, `App.cs`): som de passo compara o terreno com a altura desenhada.
