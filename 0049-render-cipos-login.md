# #0049 — Cipós balançando no cenário do login

| Campo | Valor |
|---|---|
| Vaga | render |
| Branch | `feat/render-cipos-login` (nasce de `main`) |
| Estado | pronta p/ merge |
| Spec | `Docs/validacao.md` G8 ("Moinho e vinhas"); `analises\l2-interlude\client_spec\` (cena do login); estudo `lobby_sway_re.md` da volta 23 (citado na `validacao.md`) |
| Sessão | render: cipós do login (#0049) |
| Criada | 2026-11-04 |

## Objetivo

No cenário da tela de login do original, os cipós pendurados nas árvores balançam. No `l2unity` eles não balançam ou nem aparecem. O usuário viu isso ao comparar com o original. Esta tarefa faz os cipós aparecerem e balançarem como no original, e confere os outros movimentos do cenário do login (moinho, folhagem) que estiverem na mesma situação.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [x] Levantamento, com evidência (.unr/.usx, propriedades do ator, código do engine no Tryskell ou na REA), de cada malha que se mexe no cenário do login: cipós, moinho e folhagem. Para cada uma, o tipo de movimento (MeshSway, WindSway, Mover, animação de material) e os parâmetros.
- [x] Os cipós aparecem e balançam com a amplitude, o período e o eixo do original. O mesmo vale para o resto do levantamento, ou o que faltar fica registrado em Decisões com o motivo. *(No jogo, só depois da reexportação do pedido 0036. A velocidade da folhagem ficou registrada em Decisões.)*
- [x] O que precisar de reexportação para `shared\` vira pedido para a coordenadora em `tarefas\pedidos\`, com o comando e o que muda. O que for do `App.cs` vira pedido também. *(Pedido 0036. Nada no `App.cs`.)*
- [x] Testes EditMode para os parâmetros lidos e para a função de movimento. `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [x] Captura ou gravação curta (quadros em sequência) antes e depois em `Docs/evidencias/cipos-login/`, e a linha G8 atualizada em `Docs/validacao.md`.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->
- 2026-11-04 — Lidos o estudo `lobby_sway_re.md` (volta 23), o `Lobby.unr` e os `.usx`/`.utx`. No Editor da vaga render, as 8 vinhas com physL2Movement apareciam acima do quadro do login (viewport y de 1,9 a 4,0). Causa: o `PrePivot (0, 0, 3000)` do .unr era descartado na exportação.
- 2026-11-04 — `Statics.ActorMatrix` passa a aplicar o PrePivot; `LobbyMovers.ActorOf` e `MapEnv` leem `prePivot`; `export_map_emitters.py` e `export_lobby_emitters.py` o exportam; `VinhasLoginTests` (`7fae141`).
- 2026-11-04 — Capturas antes/depois em `Docs/evidencias/cipos-login/` e G8 volta 35 em `Docs/validacao.md` (`69b0353`). Pedido 0036 (reexportação). `run_tests.sh`: 594/594.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->
**Resposta à pergunta da tarefa:** no porte, os cipós que balançam **não apareciam**. O balanço deles já estava certo (`Sway`, volta 23), mas o porte os desenhava 300 UU acima da posição, fora do quadro. As vinhas que se viam no alto do quadro eram as `INDeco000`, que também ficam paradas no original.

**Malhas que se mexem no cenário do login** (câmera `Logon_Warp` em (−8317, 238312, −6688), olhando para −X):

| Malhas | Atores | Movimento | Parâmetros | Evidência |
|---|---|---|---|---|
| Vinhas `Primitive_INDeco_Long003` | `MovableStaticMeshActor1-4`, `6-9` | `AMovableStaticMeshActor::physL2Movement` (Physics 19, padrão da classe): seno por eixo, no tempo | MSMA1/4/9: Rate (100, 80, 60) e Max (200, 120, 80). MSMA2/3/6/7/8: Rate (100, 60, 80) e Max (200, 150, 100). AccelRatio 1. Período 8·Max/Rate: pitch 16 s com 1,10°; yaw 12 a 20 s com 0,66° a 0,82°; roll 10 a 10,7 s com 0,44° a 0,55°. Fase inicial sorteada em [0, 1) s. DrawScale 0,1, DrawScale3D (1,2; 1,2; 1). **PrePivot (0, 0, 3000)** | [O] `Lobby.unr` (props lidas com `ukx_parse`, sem o filtro NOISE); [O] corpo 0x1063e7c0 (estudo da volta 23 §1.2; Tryskell `engine.c:487333`) |
| Árvore `Primitive_InDecotree002` | `MovableStaticMeshActor0` | Só `FWind::Sway`: sem Rate e sem Max, os 3 eixos do L2Movement ficam desligados | Frequency 15, MaxSwayAngle 1 | [O] .unr e `.usx` |
| Folhagem com `bSwayObject` | InDecotree001/002/003 e INtree001 (F 15), MDtree003 (F 23), gramas (F 5 e F 1) | `FWind::Sway` (0x10588960) a cada quadro desenhado: meio seno de até 1°, com passo de 0,05 por quadro | `sway.json`, sem mudança | [O] estudo da volta 23 §1.1 e `lobby_remaining_re.md` §1 |
| Vinhas `Primitive_INDeco000` (16 no quadro) e a `INDeco_Long003` estática (`StaticMeshActor345`) | StaticMeshActor | Nenhum | Sem `bSwayObject` no `.usx` | [O] `Primitive_FieldOBJ_S.usx` |
| Materiais das vinhas | `Primitive_BigLeaf_001_1`, `BigLong_Leaf001/002/003_1` | Nenhum | Shader com Diffuse/Opacity e AlphaTest, sem TexOscillator e sem TexPanner | [O] `Primitive_FieldOBJ_T.utx` |
| Moinho `Dion_SV_S.DS_Windmill_propeller` | `StaticMeshActor573` (Stage_Human, fora do login) | PHYS_Rotating com bFixedRotationDir | RotationRate (1500, 0, 0), sem PrePivot | [O] .unr; já estava no porte (`LobbyMovers.FixedTurn`) |

Perto do login, nenhum outro ator tem Physics ou PrePivot: são 198 StaticMeshActor e MovableStaticMeshActor na caixa x ∈ (−11000, −8000), |y − 238312| < 2500. No mapa inteiro, só as 8 vinhas têm PrePivot.

- **[O] PrePivot:** `AActor::LocalToWorld` (Engine.dll, export 0x4ad9; `analises/l2-interlude/re/decomp_all/engine/00002.c:9880`, igual ao Tryskell `engine.c:104765`). A linha de translação é `Location − PrePivot(+0x28c)·S·R`, com DrawScale em +0x27c e DrawScale3D em +0x280. Um ponto p da malha vai para `Location + (p − PrePivot)·S·R`. Nas vinhas, a malha (Z de 110 a 1430 no glb) fica de 157 a 289 UU abaixo de Location, e o balanço do physL2Movement gira em volta de Location, como um pêndulo. A ponta anda até 289·sen(1,18°) ≈ 6 UU, cerca de 1° visto da câmera, que está a 300–430 UU.
- **[O] Causa no porte:** o `unr_inventory.props_of` põe `PrePivot` no conjunto NOISE, e os exportadores herdavam isso. Com o PrePivot, as 8 vinhas entram no quadro (viewport y de 0,43 a 1,0), nas mesmas colunas das vinhas do original (`Docs/evidencias/original/1920_01_login.png`).
- **Decisão:** o PrePivot entra em `Statics.ActorMatrix` e vale para todo ator (estáticos, móveis e portas). Quem não tem a chave no json continua igual. O `Lobby.json` dos estáticos não precisa mudar, porque nenhum StaticMeshActor do Lobby tem PrePivot.
- **Decisão (registrada, fora do que mudou):** a folhagem (FWind::Sway) continua com 60 passos/s [I]. O original avança 0,05 por quadro desenhado e não limita o FPS (`lobby_remaining_re.md`). Numa máquina atual ela balança várias vezes mais rápido que no porte, e o binário não tem um valor certo. Para igualar ao que o usuário vê, é preciso o FPS do original na máquina dele [A validar com o usuário]. Basta trocar `WindSway.StepRate`.
- **[I] Captura do "depois":** o json do `shared` ainda não tem `prePivot` (pedido 0036). A captura injeta `PrePivot = (0, 0, 3000)` nos 8 atores já carregados, o que dá o mesmo resultado do json reexportado. Também rodei o exportador contra o `reference`, com a saída desviada para o scratchpad: só a chave `prePivot` muda.

## Entrega

- **Commits:** no branch `feat/render-cipos-login`: `7fae141` (PrePivot em `Statics.ActorMatrix`, `LobbyMovers.ActorOf`, `MapEnv`, exportadores e `VinhasLoginTests`) e `69b0353` (G8 volta 35 e `Docs/evidencias/cipos-login/`).
- **Testes:** `VinhasLoginTests`, 6 testes: json com prePivot e os parâmetros do .unr; malha pendurada de 157 a 289 UU abaixo; sem PrePivot, igual a antes; giro em volta de Location; ponta dentro do quadro do login; amplitude da ponta e período do pitch. `sh Docs/tools/run_tests.sh`: 594/594 (o `main` tinha 588/588; nenhuma falha nova). Ao vivo, no Editor da vaga render: entre quadros, mudavam 0,4% dos pixels do alto do quadro antes e cerca de 5% depois.
- **Falta / fora do escopo:** (1) Reexportar o `Lobby_movers.json` (pedido 0036). Até lá, o jogo fica como antes. (2) Velocidade da folhagem `bSwayObject` igual ao FPS do original [A validar com o usuário]. (3) Outros mapas do mundo podem ter móveis ou portas com PrePivot. Não foram levantados, mas o código já aceita.

## Pedidos

- [0036](pedidos/0036-render-prepivot-movers.md): reexportar o `Lobby_movers.json` com `prePivot` (coordenadora).
