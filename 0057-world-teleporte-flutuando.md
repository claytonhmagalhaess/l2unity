# #0057 — Personagem flutuando depois do unstuck e do teleporte

| Campo | Valor |
|---|---|
| Vaga | world |
| Branch | `feat/world-teleporte-chao` (nasce de `main`) |
| Estado | fazendo |
| Spec | `analises\l2-interlude\client_spec\` (TeleportToLocation 0x28, ValidateLocation, StopMove, MoveToLocation, posição e Z do pawn, 94, 96); `World/Movement.cs`, `World/PawnMotion.cs`, `World/Entity.cs`, `World/World.cs`; despacho no `App.cs` |
| Sessão | world: teleporte e unstuck (#0057) |
| Criada | 2026-11-04 |

## Objetivo

O usuário usou o unstuck (`/unstuck`, que teleporta para a cidade) no aCis local. O personagem chegou a Giran flutuando, longe do chão, perto de um muro. A #0056 (vaga render) cuida dos pawns flutuando fora de Giran pelo lado do terreno. Esta tarefa cuida do caminho do teleporte, que pode estar errado mesmo onde o chão está certo. São três coisas:
- como o cliente recebe e aplica o teleporte (TeleportToLocation, o fade/loading, o Z do servidor, o ValidateLocation que o cliente manda depois);
- como põe o pawn no chão de novo;
- o que acontece com os outros pawns em volta.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Causa registrada em Decisões e REA com a evidência:
  - o pseudocódigo do engine no Tryskell ou na REA para o handler do TeleportToLocation, a física/ajuste ao chão logo depois e o `ValidatePosition`/`ValidateLocation` enviado;
  - o que o aCis manda no `/unstuck` (`Escape`, `TeleportToLocation`, Z da geodata), comparando o Z do pacote com o chão do porte no mesmo ponto.
- [ ] Depois do `/unstuck`, do teleporte pelo gatekeeper e do teleporte de GM, o personagem fica com os pés no chão no destino, em Giran e fora dela. Os pawns em volta também ficam no chão, e os pawns que somem e reaparecem no alcance também.
- [ ] Se a causa for a mesma da #0056 (terreno ou altura do chão na área render), a correção fica com a #0056. Esta tarefa registra a evidência do caminho do teleporte e combina pela coordenadora. Não mexa em `Render/GeoTerrain.cs`, `UeTerrain.cs` nem `Actor.cs`, que são da #0056.
- [ ] O que for do `App.cs` vira pedido para a coordenadora com o trecho exato, e o que for de `Net/` vira pedido para a net, em `tarefas\pedidos\`.
- [ ] Testes EditMode para a regra corrigida. Suíte sem falhas novas em relação ao `main`, rodada pela sessão de testes.
- [ ] Capturas antes e depois em `Docs/evidencias/teleporte-chao/`, tiradas pela sessão de testes no aCis local (unstuck, gatekeeper), e uma linha em `Docs/validacao.md`.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->
- 2026-11-04 — REA do `OnTeleportToLocation`/`L2_Teleport`/`OnValidateLocation` (Tryskell `engine.c`), aCis (`Escape`, `Creature.teleportTo`, `TownZone.xml`, `ValidatePosition`, `Appearing`) e geodata `22_22.l2d` nos spawns de Giran.
- 2026-11-04 — pouso depois do teleporte/surgimento em `PawnMotion`/`Movement`/`Entity` + `TeleportLandingTests` (9) (`5fb74d9`); log `[pouso]` (`303b026`).
- 2026-11-04 — pedido de teste enviado à sessão de testes (compilar, suíte, roteiro ao vivo antes/depois: unstuck e gatekeeper). Aviso à #0056 com a evidência.
- 2026-11-04 — relato novo (farm pelo Global Gatekeeper): medidos os 2119 destinos de teleporte do aCis contra a geodata (`Docs/teleporte_z.md`/`.tsv`). Achado e corrigido o pouso em célula multicamada (`6080d43`). Pedido 0051 (todas as camadas). Pedido de teste atualizado para `6080d43`, com farm e unstuck saindo do farm.
- 2026-11-04 — teste ao vivo 0057-1 (A = `eb1f39d`, B = `303b026`), em `testes\0057-1\`. Suíte 888/888. Unstuck em Giran: A fica em −3340 flutuando; B pousa de −3290 para −3400 com os pés no chão. Bug achado em B: os NPCs das lojas de Giran subiam até o telhado do geodata. Corrigido em `ea03f2f`: o pouso fica na faixa [pé − queda máxima, pé + 30], com queda máxima de 900 para jogadores e 100 para NPCs e itens. Medido também nos 40 814 spawns do `spawnlist`. Evidências em `Docs/evidencias/teleporte-chao/` (`a075a25`). Reteste 0057-2 pedido.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->
**Causa (Observado):** o aCis manda no TeleportToLocation o Z do destino + 10 sem consultar a geodata, e o porte punha o pawn nesse Z sem nunca assentá-lo. O pawn parado não passa pelo `ground` (só o `Step` em movimento usa) e o `VisualFloor` só procura de z+8 a z−48.
- aCis `Escape.java`: o `/unstuck` lança a skill 2099 (2100 para GM), que teleporta para `MapRegionData.getLocationToTeleport(TOWN)`, isto é, `getClosestTown().getRandomLoc()`, um dos `<spawn>` de `data/xml/zones/TownZone.xml`. Os de Giran são z=−3350 e −3300.
- aCis `Creature.teleportTo` (`Creature.java:518`): soma 20 de deslocamento aleatório em x/y e `z += 10`, manda `TeleportToLocation(x, y, z, false)` e faz `setXYZ` sem geodata. O `Appearing` só reenvia o UserInfo. O `ValidatePosition` aceita o Z do cliente e só manda ValidateLocation se dz > 200 (com outros limites).
- Geodata `shared\StreamingAssets-L2Web\geodata\22_22.l2d` nos 14 spawns de Giran: o pacote traz −3340 e o chão está em −3464 (10 spawns); o pacote traz −3290 e o chão está em −3400 (4 spawns, x ≈ 83 400). São **110 a 124 unidades acima do chão**, o que explica o "flutuando" do relato.
- Original, `UGameEngine::OnTeleportToLocation` (Tryskell `engine.c:246343`): `z = CollisionHeight + 10 + z` (o pé fica 10 acima do Z do pacote). Para outro pawn, chama `FarMoveActor` direto e a física (queda) o leva ao chão. Para o próprio, guarda o destino, faz `ScreenFadeOut` e chama `L2_Teleport` (o caminho sem fade chama direto).
- Original, `UGameEngine::L2_Teleport` (`engine.c:408172`): carrega o mapa e faz o `AdjustTerrain`. Depois procura o lugar de pouso com até 30 `SingleLineCheck` cilíndricos, cada um de z+30i até z−30i (i = 1..30). Para no primeiro contato e faz `FarMoveActor` nele; sem contato até ±900, loga "Couldn't find landing place" e fica no Z dado. Há também um ajuste menor que 3 unidades quando `Time*12 < 1,9`, que não portei.
- Original, `UGameEngine::OnValidateLocation` (`engine.c:287958`): para o próprio, chama `L2_Teleport` (mesma busca de pouso); para os outros, `AdjustPawnLocation`, sem mudança.

**Decisões:**
- `Entity.Place` (0x28 e criação por UserInfo/CharInfo/NpcInfo/item) e `PawnMotion.ServerValidate` do próprio armam um pouso (`PawnMotion.Drop`): pé = Z + `TeleportLift` (10). O primeiro `Step` com chão conhecido resolve o pouso (`TryLand`). Enquanto a geodata do destino não carrega (o teleporte longo carrega depois do 0x28), o pouso fica pendente. Por isso o handler do `App.cs` não precisa mudar e não há pedido para a coordenadora. (Inferido: no surgimento por CharInfo/NpcInfo o original também cai pela física; não achei o +10 no handler, A validar.)
- Para o próprio, `Movement.LandingZ` segue a regra do L2_Teleport: vale a primeira janela de ±30·i com chão e, dentro dela, o chão mais alto; sem chão até 900, cai. Para os outros, `Movement.FallZ` pega o chão mais alto abaixo do pé, ou o mais próximo se não houver chão abaixo.
- As camadas vêm do `World.Ground` (contrato: "a altura mais próxima de zRef"), consultado em zRef = pé, +1e6 e −1e6: a mais próxima, a mais alta e a mais baixa. Assim `Render/GeoTerrain.cs` fica intocado (é da #0056).
- Causa diferente da #0056 (terreno/altura visual fora de Giran). Mandei a evidência para a sessão dela (`local_02fce849…`) e combinei não assentar duas vezes: o Z do movimento fica comigo e a altura do desenho (`DrawHeight`/terreno UE) com ela.
- Combinado com a #0056 (2026-11-04): as correções se somam e não há ajuste em dobro. A #0057 põe o `Motion.Z` na geodata (Place/ValidateLocation). A #0056 (`df7ea56`, `GeoTerrain.VisualFloor`/`PickFloor`) só muda o que o `DrawHeight` devolve: o piso desenhado mais alto entre BSP/Statics em [z−48, z+8] e o terreno UE em [z−84, z+20]. A #0056 não mexe em `Motion.Z`, `Place` nem `Sync`. Sem a #0057, o Z do TownZone (+110 a +124) fica fora dessas janelas e o pawn não desce.
- **Todos os teleportes (Observado):** `Gatekeeper` e `GlobalTeleport` (`goto`, `randomTeleport`, `goto_chaotic_zone`, `gotoPvpZone`), o unstuck e a volta à cidade usam todos `teleportTo(loc, 20 ou 50)`, isto é, o Z fixo do XML + 10, sem geodata. Medição em `Docs/teleporte_z.md`. Nos 2108 destinos com geodata, o pacote fica de −26 a +1054 do chão: 437 ficam mais de 24 acima e 64 mais de 8 abaixo. No Global Gatekeeper, as páginas de farm (`levelup`, `solo-zone`) ficam até 26 da geodata, exceto 12035 (+78) e 40047 (+98). Os destinos de cidade ficam até 24 abaixo. Inferido: a flutuação grande nos farms vem do chão desenhado (#0056), não do Z do teleporte.
- **Multicamada (Observado na medição, corrigido em `6080d43`):** o `GroundHeight` só guarda a camada mais baixa e a mais alta (o `LocalAssets.LoadRegion` descarta as do meio). Na versão `5fb74d9`, a queda em Baium/ToI/catacumbas ia para a camada do fundo, até 14 mil abaixo. Agora a célula multicamada só pousa até `Movement.MultiLayerTrust` = 150 do pé e, mais longe, fica no Z do servidor. Nas 18 972 amostras, isso dá zero camadas erradas; com limite de 200 já seriam 108. Ficam 10 destinos acima: Dark Elven Village +166, Elven Village +124, Baium 1 e o 213 +25, o 211 +1054. Eles ficam com o pedido 0051, que dá ao `World.GroundLayers` todas as camadas e aplica a regra exata do original.
- **Limite de 900:** só o teleporte 211 passa dele. O original loga "Couldn't find landing place" e cai; o porte fica no Z sem as camadas e cai como o original com elas.
- **Não subir e NPC não cair longe (Observado no 0057-1, corrigido em `ea03f2f`):** o original pousa na colisão real (BSP/StaticMesh). O geodata, dentro dos prédios, às vezes só tem o telhado: a Grocer Helvetia tem NpcInfo em −3506 e o geodata só em −3080. A regra antiga, sem chão abaixo, ia para o chão mais próximo e subia +348 a +458. Agora `Movement.MaxRise` = 30 (1452 NPCs do spawnlist têm o geodata até 30 acima do pé; os 358 acima disso são telhado). `Movement.NpcMaxFall` = 100 para NPCs e itens, porque o Z do spawnlist acima disso é estrutura que o geodata não tem. Os jogadores continuam com 900 (`TeleportMaxFall`). Nos teleportes, nenhum destino cai em camada errada. Ficam acima os mesmos 83 casos multicamada, e 46 ficam abaixo do geodata (Oren Castle e outros, telhado provável). Tabela em `Docs/teleporte_z.md`.
- **Flutuação restante sobre o terreno UE (Observado no 0057-1, `gk-ida-B`):** em (−89894, 105455), com o Self.Z = geodata (−3576), o personagem ainda fica 0,5 a 1 m acima do terreno. É o chão desenhado, da #0056 (`df7ea56`, que não está neste branch). Evidência enviada àquela sessão.

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

- [0051](pedidos/0051-world-geodata-camadas.md) — coordenadora: `LocalAssets.GeoLayers` + `world.GroundLayers` no `App.cs` (todas as camadas do geodata para o pouso). Aceito pela coordenadora. Ela aplica o pedido inteiro (`LocalAssets.GeoLayers` e a linha do `App.cs`) no branch de prévia, main + #0056 + #0057, junto com a linha `GeoTerrain.AllLayers = LocalAssets.GeoLayers` da #0056. Nada muda neste branch.
