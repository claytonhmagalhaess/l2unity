# #0059 — Personagem continua andando até o alvo mesmo ao lado dele

| Campo | Valor |
|---|---|
| Vaga | world |
| Branch | `feat/world-aproximacao-alvo` (nasce de `main`) |
| Estado | no main |
| Spec | `analises\l2-interlude\client_spec\` (movimento do pawn, `MoveToPawn` 0x60, `MoveToLocation` 0x01, `StopMove` 0x47, `ValidateLocation` 0x61, `Attack` 0x05, alcance e raio de colisão); `World/Movement.cs`, `World/PawnMotion.cs`, `World/ActionLatch.cs`, `World/Combat.cs` |
| Sessão | world: aproximação do alvo (#0059) |
| Criada | 2026-11-05 |

## Objetivo

Ao pegar um alvo e atacar ou interagir, às vezes o personagem continua andando em direção ao alvo mesmo já estando ao lado dele. Ele encosta, empurra ou anda no lugar em vez de parar e atacar ou falar.

No Interlude ele para à distância certa (alcance da arma, ou da interação mais os raios de colisão) e se vira para o alvo. Esta tarefa levanta no material de análise como o original aproxima e para, e replica no porte.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [x] Levantamento com evidência no pseudocódigo (Engine.dll em `analises\l2-interlude\re\` e no Tryskell: o handler do `MoveToPawn` 0x60 e a distância de parada que ele usa; `StopMove` 0x47; a física de andar até um pawn com `CollisionRadius`; o que o cliente faz quando já está dentro do alcance; a rotação para o alvo) e no aCis, somente leitura (o que o servidor manda ao atacar ou interagir de perto e de longe, e o `offset` do MoveToPawn). Registre em Decisões e REA a regra de parada do original e onde o porte diverge.
  - Feito em Decisões e REA. O Tryskell confirma o mesmo código: `OnMoveToPawn` em `engine.c:506997` e o uso do `0x6c4` no `ReachedDestination` em `engine.c:16774`.
- [x] O personagem para à distância certa e se vira para o alvo, sem continuar andando, em:
  - ataque corpo a corpo (alvo parado e alvo andando);
  - arco;
  - falar com NPC;
  - pegar item;
  - alvo que já está ao lado no momento do clique.

  O mesmo vale para os outros pawns que o servidor move até um alvo (monstros atacando o jogador).

  Ao vivo (`d9a7f7d`), o "chegou" sempre ficou com d <= offset + 1 e nenhum caso andou no lugar:
  - corpo a corpo parado: d = 62,0 com offset 61;
  - corpo a corpo andando: d = 63,3 e 63,0 com offset 63;
  - já ao lado: d = 38, sem andar;
  - NPC de longe: d = 60,1 com offset 60;
  - NPC de perto: offset 150, sem andar;
  - monstros até o jogador: d = 61,2 e 55,8 com offset 61. No antes, um deles ficava a 26, entrando no corpo.

  **Arco e item: só cobertos pelos testes EditMode, sem verificação ao vivo.** A regra é a mesma (`Arco_ParaNoAlcanceDoArco`, `PegarItem_ParaEViraParaOItem`). O personagem de teste não tinha arco nem GM. O servidor recusa largar itens ("This item cannot be discarded.") e o drop vai direto para o inventário. O aCis manda o movimento até item como `MoveToLocation`, que esta tarefa não muda; o `GetItem` agora para e vira o personagem (pedido 0054).
- [x] O que for do `App.cs` vira pedido para a coordenadora com o trecho exato; o que for de `Net/` vira pedido para a net. A física de terreno e o desenho no chão são da render (#0056, no `main`): não mexa em `Render/GeoTerrain.cs`.
  - Pedido 0054, aplicado pela coordenadora no branch (`d9a7f7d`). Nada em `Net/` nem no `GeoTerrain`.
- [x] Testes EditMode para a regra de parada (distâncias, raios, alvo em movimento). Suíte sem falhas novas em relação ao `main`, rodada pela sessão de testes.
  - `PawnApproachTests`, 13 testes. Suíte 925/925 no `d9a7f7d`, contra 912/912 na base `f8627bb`.
- [x] Capturas ao vivo antes e depois, tiradas pela sessão de testes no aCis local (ataque a um monstro perto e longe, falar com NPC), com o log das distâncias, em `Docs/evidencias/aproximacao-alvo/`.
  - Capturas `0059_<passo>_<antes|depois>.jpg` (convertidas dos PNGs), `depois-aproximacao.log` e os `e2e.log` (`206d601`).

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-05 — Levantamento no Engine.dll (`analises\l2-interlude\re\decomp_all\engine\`) e no aCis, registrado abaixo.
- 2026-11-05 — Regra de parada, rotação para o alvo, fim do seguimento no Attack, `ServerMoveToPawn`/`PickUp`/`Attack(x,y,z)`, log `[aproximacao]` e `PawnApproachTests` (13) (`7fccefe`).
- 2026-11-05 — Pedido 0054 (App.cs) para a coordenadora. Pedido de teste para a sessão de testes: compilar, suíte EditMode e roteiro ao vivo antes e depois.
- 2026-11-05 — A coordenadora aplicou o pedido 0054 no branch (`d9a7f7d`). O "depois" ao vivo foi repedido sobre esse commit.
- 2026-11-05 — Suíte EditMode, rodada pela sessão de testes:
  - `d9a7f7d`: compila, 925/925, `PawnApproachTests` 13/13;
  - `7fccefe`: 925/925;
  - base `f8627bb`: 912/912 (a diferença são só os 13 novos).

  Evidências em `Docs/evidencias/aproximacao-alvo/` (`bbd9529`). O ao vivo ficou esperando o aCis voltar.
- 2026-11-05 — Ao vivo no aCis local, com o l2webtest5/BarrasHp54: ANTES no `f8627bb` e DEPOIS no `d9a7f7d`. As evidências estão em `Docs/evidencias/aproximacao-alvo/` (`206d601`). Estado: `pronta p/ merge`.

## Decisões e REA

**Regra de parada no original (Observado).** O caminho é este:

1. O handler do 0x60 (`FUN_104248f0`, formato `dddddd`) chama `UGameEngine::OnMoveToPawn(User*, User* alvo, int distância, FVector origem)` (export `0x1031407e`, `00011.c:22892`).
2. Se o pawn do alvo não existe, o pacote não faz nada.
3. Senão, o pawn faz `NActionStop` e depois:
   - **Outro pawn:** `AdjustPawnLocation(origem)`, depois `AController::AddMoveToward(origem, alvo, distância)` (`0x1030a213`, `00005.c`). Ele grava `pawn+0x6c4 = distância`, monta a correção `0x6d0 = |alvo − origem| / GetCurSpeed(-1)` (sem o moveMul, ao contrário do `AddMoveTo`) e `0x6d4 = (|alvo − pawn| − |alvo − origem|) / 0x6d0`, e chama `MoveToward(alvo, alvo)`.
   - **Próprio jogador:** zera a trava `GEngine+0x64`, grava `pawn+0x6c4 = distância` e chama `AController::MoveToward(alvo, alvo, 1.0)`, sem ajuste nem correção.
4. O `AController::MoveToward` (`0x103015a5`, `00000.c`) põe o alvo como `MoveTarget` (`+0x3f0`) e `Focus` (`+0x40c`) e troca o `Destination` pela posição do alvo. O destino do `MoveToLocation` anterior acaba aí.
5. A cada tick, `AController::execPollMoveToward` (`0x1031064f`, `00009.c`) atualiza o `Destination` para a posição do alvo e chama `APawn::moveToward` (`0x1031050a`). Em `PHYS_Walking` este zera o Z da direção e chama `APawn::ReachedDestination` (`0x10301415`, `00000.c:4864`).
6. Para alvo pawn, o limiar é `pawn+0x6c4` (a distância do pacote) + `DestinationOffset` (`+0x152c`). O teste é `|Δ|² ≤ limiar²` com Δz = 0, ou seja, **distância horizontal entre os centros ≤ offset**.
7. Ao chegar, o `moveToward` zera a aceleração e devolve 1. O latente **não** termina: se o alvo se afasta, o pawn volta a andar. Ele termina quando o alvo some (`LAB_10567760`) ou com o `StopMove`.

Mais três pontos sobre essa regra:
- **(Inferido)** O `DestinationOffset` é 0 no `MoveToward` nativo: só o `execMoveToward` de script e o `execMoveTo` o gravam, e o `execMoveTo` grava 0.
- **(Observado)** Para item (`APickup`) e outros atores, o `ReachedDestination` usa o próprio raio (até 30) e a soma dos raios. O aCis manda o movimento até item como `MoveToLocation`, então isso não entra.
- **(Observado)** Os raios não entram no cliente: o aCis já os soma no offset. Em `CreatureAI.maybeMoveToPawn`, `offset += actor.collisionRadius + target.collisionRadius`, e tira 30 se o alvo está andando (mínimo 5). O `moveToPawn` sobe o offset para no mínimo 10.

**Rotação (Observado).** O `MoveToward` põe o alvo no `Focus`, então o pawn olha para o alvo andando e também parado ao lado. O aCis usa isso: `Npc.onAction`, com o jogador já no alcance, manda `MoveToPawn(player, npc, 150)` só para virá-lo, sem `StopMove` depois.

**Quem para o pawn (Observado).** Três pacotes chamam o slot `+0x320` do controller (Inferido: é o `AController::StopMove`, `0x10310140`, que zera `MoveTarget` e `Focus` e põe o `Destination` na posição atual):
- `UGameEngine::OnStopMove` (`0x1030a53d`);
- `UGameEngine::OnAttack(User*,User*,…)` (`0x10313d81`): faz antes `AdjustPawnLocation` pela posição do atacante no pacote;
- `UGameEngine::OnGetItem` (`0x1030d918`): faz `AdjustPawnLocation` e vira para o item.

**O que o aCis manda (Observado, `AbstractAI`/`CreatureAI`).**
- **Longe:** `startFollow(alvo, offset)`. O `FollowTask` roda a cada 500 ms e manda `MoveToPawn` enquanto o ator não está no raio (teste 3D).
- **Chegada no servidor:** `onEvtArrived` → `clientStoppedMoving` → `StopMove`, se o offset for > 0. Depois vem o `Attack`.
- **Alvo andando:** se o alvo está entre offset e offset + 100, `maybeMoveToPawn` só cancela o `FollowTask` e ataca, **sem `StopMove`**.
- **Já perto no clique:** não manda `MoveToPawn` e ataca direto.

**Onde o porte divergia, e a correção:**
1. O porte parava exatamente na borda (`d <= Distance`). Com o arredondamento, o d recalculado ficava um fio acima, e o pawn dava um passo de fração de unidade por quadro: andava no lugar ao lado do alvo, com a animação de correr. O original anda o passo inteiro e só testa no começo do tick, então para um pouco *dentro* do raio. O porte agora usa `Movement.PawnReached`, com folga de 1 (`ReachSlack`, o mesmo limiar de encaixe do `PawnMotion.Step`).
2. O `Attack` não encerrava o seguimento. No caso do alvo andando, em que o aCis ataca sem `StopMove`, o personagem atacava andando até o centro do alvo. Agora `Entity.Attack` chama `StopMoving()`, como o `OnAttack`. Este é o caso mais provável do relato do usuário.
3. Parado dentro do alcance, o pawn não virava para o alvo. Agora o `Focus` é o alvo do seguimento.
4. Se o alvo sumia, o pawn voltava ao `Destination` de um `MoveToLocation` antigo. Agora para ali.
5. O handler do 0x60, no `App.cs`, só grava o `Follow`. Faltam três coisas: ignorar o pacote com o alvo desconhecido, e, para os outros pawns, o `AdjustPawnLocation` e a correção do `AddMoveToward`. O `Attack` também não usa a posição do pacote, e o `GetItem` não para nem vira o personagem. Os métodos estão prontos no `Entity` (`ServerMoveToPawn`, `Attack(alvo, x, y, z)`, `PickUp`), e a troca no `App.cs` está no pedido 0054.

**Fora do escopo (A validar).** Ficaram de fora o `NActionStop` do `OnMoveToPawn` (cancela ataque ou magia em curso, animação) e se o `MagicSkillUse` também para o movimento. São da #0060 (sistema de ataque).

## Entrega

- **Commits** (`feat/world-aproximacao-alvo`):
  - `7fccefe`: regra de parada, Focus, fim do seguimento no Attack, `ServerMoveToPawn`/`PickUp`/`Attack(x,y,z)`, log `[aproximacao]` e `PawnApproachTests`;
  - `d9a7f7d`: `App.cs`, pedido 0054, pela coordenadora;
  - `bbd9529` e `206d601`: evidências.
- **Testes:**
  - Suíte EditMode pela sessão de testes: 925/925 no `d9a7f7d`, sem erros de compilação. A base `f8627bb` tem 912/912; a diferença são os 13 `PawnApproachTests`.
  - Ao vivo, antes e depois, no aCis local: passos a, b, c, e e g, com 0 erros no console.
  - No passo c, o aCis mandou `MoveToPawn` com offset 33 (o -30 do alvo andando) e atacou a d = 66 sem "chegou". É o ataque dentro de offset + 100 que o `Attack` agora encerra, como o `OnAttack` do original.
- **Falta / fora do escopo:**
  - arco e pegar item ao vivo (motivo no Critério de pronto);
  - o `NActionStop` do `OnMoveToPawn` (cancela golpe ou magia em curso) e se o `MagicSkillUse` para o movimento: ficam para a #0060;
  - a #0060 e a #0061 mexem no `Entity.Attack`. A #0061 já fez merge deste branch até `bbd9529`. A #0058 mexe nas chamadas do `PawnFx.OnHit` no mesmo `OnAttack` do `App.cs`, e a coordenadora junta as duas no merge.

## Pedidos

- [0054](pedidos/0054-world-app-movetopawn.md): `App.cs` (coordenadora). O 0x60 passa a usar `ServerMoveToPawn`, o `OnAttack` passa a posição do pacote e o 0x0d chama `PickUp`.
