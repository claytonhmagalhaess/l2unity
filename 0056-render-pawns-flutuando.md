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
- 2026-11-04 — escopo ampliado pela coordenadora: mapa inteiro. Varredura offline dos 139 tiles com geodata e de 41 803 pontos do servidor (`Docs/pawns_chao_varredura.md`, scripts em `Docs/tools/pawns_chao/`). Trace até z − 900 e camada certa do geodata em lugares de vários andares (`791b1c3`); pedido 0052 (`GeoTerrain.AllLayers` no `App.cs`, depende do 0051 da #0057).
- 2026-11-04 — teste 0056-1 (`6187e0a`): suíte 891/891, `PawnFloorTests` 12/12. No offline, o desenho coincide com o terreno UE em Turek, Gludio, Dion, Dragon Valley e fora de Giran; na praça de Giran fica igual (piso BSP). Ao vivo em Plains of Dion, o personagem e os monstros ficam com os pés na grama: parados, correndo, em combate e depois do teleporte. Evidências em `Docs/evidencias/pawns-chao/` (`ae08e57`). Falta o 0056-2 (`791b1c3`: mapa inteiro, andar do meio de Cruma e ToI).

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

### Causa

- **Observado (código do porte):** o pawn é desenhado em `Entities.DrawHeight(x, y, z)` (`World/Entity.cs:255`), que o `App.cs:110` liga a `GeoTerrain.VisualFloor`. O `VisualFloor` só procurava piso nos `Statics` (BSP e StaticMesh), por raio de `z + 8` até `z - 48`, e saía logo com `z` se a cena não tinha Statics. **O terreno do Unreal nunca entrava.** O movimento e os pacotes usam o z do servidor/geodata (`PawnMotion.Step` com `GeoTerrain.GroundHeight`).
- **Observado (dados):** o z do geodata fica ~30 unidades acima do chão desenhado, no BSP das cidades e no terreno dos campos. Medido com `geodata\*.l2d` × `cache\terrain_ue\<tile>\height.bin` (bilinear e pelos triângulos da malha), amostra a cada 48 unidades num quadrado de 6000 × 6000:

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

### Varredura do mapa inteiro (`791b1c3`)

Pedida pela coordenadora depois do novo relato: "numa área de farm o personagem voa ao andar e ao teleportar". Detalhes e tabela por tile em `Docs/pawns_chao_varredura.md`.

- **Observado:** a mediana de geodata − terreno nos 137 tiles com terreno UE fica entre 18 e 33. Nenhum tile tem deslocamento próprio: `Location`, escala e heightmap estão certos no mapa todo. As áreas grandes "fora" (20_18, 20_19, 21_18, 21_19) são blocos planos do geodata em montanhas fora do alcance (de 81 a 96% das células "fora" desses tiles), sem spawns.
- **Observado:** nos 41 803 pontos do servidor (spawns de monstros e NPCs e destinos de teleporte do aCis), com a camada do geodata mais perto do z do servidor:
  - pés no chão desenhado no `main`: 35,0%;
  - com a regra do `df7ea56` (janelas 48/84): 99,83%;
  - com o trace até z − 900: 99,998%. Sobra 1 ponto, com o geodata abaixo do terreno.
- **Observado — segunda causa ("voa ao andar"):** o `LocalAssets.Chunk` guarda só a camada mais baixa e a mais alta de cada célula. O `GeoTerrain.GroundHeight`, chamado pelo `PawnMotion.Step` a cada passo, escolhia entre as duas. Em 5 154 pontos o lugar tem 3 ou mais andares (Cruma Tower 20_21, Tower of Insolence 23_18, 25_12, 25_19...). Em 2 317 deles (6%), as duas camadas ficam a mais de 64 do z: parado o pawn fica certo, mas andando pula para o andar de cima ou de baixo. Com a camada certa, todos os 5 154 ficam sobre piso desenhado ou terreno, exceto 2.
- **Correção:**
  - `GroundHeight` passa por `NearestLayer`: numa célula multicamada sem as camadas do meio, não aceita uma camada a mais de 128 (`MaxLayerJump`) e devolve null, e o `PawnMotion` fica com o z interpolado do servidor.
  - Com o gancho `GeoTerrain.AllLayers` (pedido 0052, que usa o `LocalAssets.GeoLayers` do pedido 0051 da #0057), a escolha passa a ser entre todas as camadas.
  - A sessão world foi avisada: o truque do `Ground(x, y, ±1e6)` dela passa a dar null nas células multicamada; para a baixa e a alta, ela deve usar `GeoTerrain.CellAt`.
- **Correção (trace longo):** o `PickFloor` agora escolhe o chão desenhado mais alto abaixo de `z + 8` (Statics) ou `z + 20` (terreno), até `z − 900`, como o alargamento do trace do original. Pega o geodata sobre coisas que o porte não desenha: lojas de Giran ~150 acima do BSP, o pântano dos Stakato, os Ol Mahum de 21_21. Isso cobre 69 dos 70 pontos que a janela curta deixava. O piso de Statics usa dois raios (`z + 8` a `z − 48`, e só sem acerto até `z − 900`).
- **Divergência de propósito:** o trace do original também alarga para cima; aqui não. Assim, um pawn cujo piso não foi desenhado não sobe para o telhado. O geodata fica abaixo do chão em só 0,02% dos casos.
- **Consistência:** onde o próprio geodata ainda é desenhado (tile sem BSP nem StaticMeshes, células ≥ 48 acima do terreno, como no `BuildChunk`), o terreno não puxa o pawn para baixo.
- **Inferido / risco:** enquanto os StaticMeshes de um tile carregam, um pawn sobre uma ponte pode aparecer no terreno embaixo por um instante. O cache é limpo quando eles chegam (`Statics.cs:495`).

### A validar / fora

- **A validar ao vivo:** pés no chão nos campos (pedido de teste 0056-1).
- **Fora (World, não há nado/voo no porte):** o original não faz o ajuste para pawn nadando ou voando. O porte não tem esses estados (`ChangeMoveType.Swimming` é lido mas não usado); quando tiver, o `DrawHeight` deve devolver o z do servidor para eles.
- **#0057 (world, teleporte), combinado com a sessão world:** as causas são diferentes e se somam. No `/unstuck`, o aCis manda o Z do `TownZone.xml` + 10, sem consultar a geodata: 110 a 124 acima da geodata em Giran, fora das janelas do `VisualFloor`, e por isso o pawn não descia. A #0057 (`feat/world-teleporte-chao`, `303b026`) faz o pouso do `Motion.Z` no geodata (`Entity.Place`/`ValidateLocation` → `PawnMotion`, só em `World/`). A #0056 não mexe em `Motion.Z`, `Place` nem `Sync`: só muda o que o `DrawHeight` devolve (do geodata para o chão desenhado). Sem ajuste em dobro.

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

- `pedidos\0050-render-passos-terreno.md` (coordenadora, `App.cs`): som de passo compara o terreno com a altura desenhada.
- `pedidos\0052-render-geoterrain-camadas.md` (coordenadora, `App.cs` e `Dev/OfflineView.cs`): `GeoTerrain.AllLayers = LocalAssets.GeoLayers`, depois do 0051.
