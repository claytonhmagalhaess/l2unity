# #0034 — Teclas de movimento e câmera que faltam do `user.ini` (T10)

| Campo | Valor |
|---|---|
| Vaga | world |
| Branch | `feat/world-teclas-movimento` |
| Estado | pronta p/ merge |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T10; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | world: teclas de movimento e câmera |
| Criada | 2026-11-03 |

## Objetivo

Teclas de movimento e câmera que faltam do `user.ini`, com o comportamento do Interlude levantado na #0024 (T10 do 05 §2). Tamanho estimado: M.

Ordem: única tarefa da vaga `world` nesta rodada; o branch nasce de `main`. Depende de: nenhuma.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [x] Comportamento igual ao Interlude: Espaço/Ctrl sobem e descem voando ou nadando; NumLock corre sem parar; NumPad 7/9/4/6/1/3 zoom e 8/2 altura; PrintScrn captura a tela. — lógica em `Scripts\World` com a REA do engine; **divergência**: Espaço/Ctrl só sobem/descem no modo câmera do 0xf1 `CameraMode` (Decisões). As teclas só agem no jogo depois do pedido 0024 (`App.cs`).
- [x] Cada handler segue a linha correspondente de `analises\interface-p166_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [x] Pacotes: C→S `MoveBackwardToLocation`, `ValidatePosition` (já usados). — o teclado manda `MoveBackwardToLocation` (`GamePackets.MoveTo`); o `ValidatePosition` não mudou.
- [x] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`. — `UserIniKeysTests` (14); 427/427.
- [x] Capturas em `Docs/evidencias/teclas-movimento/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério. — offline (aCis fora do ar); ver o `README.md` da pasta.
- [x] Linha em `Docs/validacao.md` com o que foi validado e como. — M6.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->
- 2026-11-03 — branch `feat/world-teclas-movimento` criado do `main` (`0d71a77`); REA das ligações no engine.dll.
- 2026-11-03 — `KeyboardMove`/`UserIniKeys`, `CameraKeys`, `ScreenShot` e `UserIniKeysTests` (`6738869`, `.meta` em `d314cdf`; a mensagem do `6738869` diz 15 testes, são 14).
- 2026-11-03 — ligação no `App.cs` feita só localmente e salva em `Docs/evidencias/teclas-movimento/app-cs.patch` → pedido 0024. `run_tests.sh` com o patch aplicado: 427/427.
- 2026-11-03 — capturas offline e linha M6 do `Docs/validacao.md` (`96f404e`). `App.cs` devolvido ao `main` no branch.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

Fontes: `analises\l2-interlude\re\decomp_all\engine\` (`00004.c` ResetKeyboardMoving, `00025.c` FUN_10563f60/FUN_10563fd0, `00006.c` Tick, `00000.c` OnCameraMode/StopMove, `retry.c` UInput::Exec, `00005.c` UViewport::Exec) e `tools\l2anim\export\client_cfg\user.ini` (oficial) e `l2.ini`.

**Divergência da spec: Espaço/Ctrl não sobem nem descem "voando ou nadando".** [O] Espaço é `KeyboardMoveStart Dir=16` e Ctrl é `KeyboardMoveStart Dir=32` (`user.ini:291-292`).
- No modo normal, `ResetKeyboardMoving` (`0x103086f7`) usa `FUN_10563f60(bits)`, que só dá rumo com frente (0) ou trás (0x8000). Os bits 16/32 sozinhos, ou junto com W, dão 100000, isto é, sem movimento.
- [O] Os bits 16/32 só contam com `+0xa90 & 1`. Esse bit é ligado por `UGameEngine::OnCameraMode(1)` (`0x103016cc`), que é o S→C `0xf1 CameraMode` (spec 96). Esse modo põe o pawn em `SetPhysics(4)` (voo), velocidade 800 e `GIsEnterChatting=1`.
- [O] Nesse modo, `FUN_10563fd0` monta o vetor: frente = (pitch, yaw) da câmera, trás = (−pitch, yaw+0x8000) e os lados = yaw ±0x4000. Dir=16/32 somam (0,0,±1) e o resultado é normalizado. O destino é a posição + vetor × 800, enviado pelo mesmo `MoveBackwardToLocation`.
- [I] Nadar no Interlude não usa o teclado para subir: o rumo do modo normal é `FRotator(0, yaw, 0)`, sem pitch. A spec 04 §7.4 já anotava "câmera livre".
- No porte: `KeyboardMove.FreeCamera` liga com o 0xf1 (pedido 0024). Fora dele, Espaço/Ctrl não movem.

**Espaço/Ctrl desligam o NumLock.** [O] `KEYBOARDMOVESTART` limpa `+0xa08 bit 2` depois do `ResetKeyboardMoving` para qualquer Dir. [O] O ramo 100000 só manda a parada com `+0xa08 & 5`, que é o movimento por teclado, e não com o bit 2. Logo, Espaço ou Ctrl durante a corrida (inclusive o Ctrl de um Ctrl+F1) acabam com ela sem pedido de parada: o servidor segue até o último destino. Implementado assim (`KeyboardMove.Hold`). [V] no cliente oficial.

**NumLock (`KeyboardPermanentMove`).** [O] Alterna `+0xa08 bit 2`. Ao ligar, grava `+0xa0c` = yaw do **pawn** (não o da câmera). Ao desligar, sem W/S, chama a vfunc 800 (StopMove) e o envio de rede `+0x118` [I: `CannotMoveAnymore` 0x36, pela assinatura (x, y, z, yaw)].
- [O] `KEYBOARDMOVEFINISH` com o bit 2 ligado mantém a corrida, então soltar W depois do NumLock continua correndo.
- [O] O `Tick` (`0x1030acd1`) reenvia posição + rumo × velocidade × 5 enquanto `+0xa08 & 3`. O giro A/D (`pawn+0x6dc & 2`) atualiza `+0xa0c` e reenvia a cada 0,1 s.
- Decisão: o reenvio usa a regra do porte que já valia para W/S (1 s ou 1000 de giro; o original reenvia a cada 3 s fora do giro). A parada ao desligar usa a parada do porte (0,2 s à frente, `MoveBackwardToLocation`), e não o `+0x118`. [V] se o aCis precisa do 0x36.
- [I] O clique no mundo desliga a corrida (`KeyboardMove.Cancel`), porque o `StopMove` (`0x10301ccb`) zera o bit 2. O caminho exato do `PLAYERPAWNMOVETO` não decompilou (`FUN_105a9600`, timeout).

**NumPad (zoom e altura).** [O] Pelo `user.ini:347-360`: NumPad7/9 = `ZoomOut/InPress Speed=2.0`, 4/6 = 0.1, 1/3 = 0.01, 8/2 = `CameraViewHeightAdjust Speed=±20`.
- [O] `ZOOMIN/OUTPRESS` só age no aperto (`+0xe90 == 1`). Não age com `+0x9b4 & 3` nem com o preset `DisableZoom` (`+0x960 & 0x80`). Abaixo de 2×`CollisionRadius`+mínimo, o passo cai para 1/8. O zoom fica entre `+0xa2c` e `+0xa28`. Ao bater no mínimo, `ViewHeight += raio×4/5` uma vez (`DAT_10c67368`), e o primeiro ZoomOut desfaz.
- [O] `CAMERAVIEWHEIGHTADJUST` age enquanto a tecla está segurada (`+0xe90 == 2`): `ViewHeight += DeltaTime × Speed`, sem limite.
- [O] Os passos do NumPad são **mínimos** (2, 0,1 e 0,01 unidades por aperto, contra 50 da roda): quase invisíveis, como no original.
- `CameraKeys` implementa isso sobre `L2Camera.Zoom`/`ViewHeight`.
- Achado fora do escopo: o `L2Camera.Wheel` (render) usa passo 20, mas o `user.ini` oficial tem `Speed=50` (`:345-346`). Ele também não tem a regra de 1/8 nem a de altura no mínimo.

**PrintScrn (`OnRelease shot`).** [O] `UViewport::Exec "SHOT"` (`0x10309a70`):
- usa o primeiro `Shot%05i` livre de 0 a 65535, com `.bmp` se `ScreenShotQuality=0` e `.jpg` com `appCreateJpeg` 20/35/50 para 1/2/3;
- com `GIsL2Console && GIsL2NetLogin` (`l2.ini:16 IsL2Console=True`), mostra a mensagem 1204 com nome, largura e altura.
- [I] O parâmetro 20/35/50 cresce do High para o Low, então é compressão. O porte usa a qualidade 100−p (80/65/50) no `EncodeToJPG`.
- Decisão: o arquivo vai para `Application.persistentDataPath`, como o `Option.ini` do porte (o original grava em `System\`). O BMP é de 24 bits.
- [V] Se no Windows o Input System entrega o PrintScreen solto (o Windows não manda WM_KEYDOWN dessa tecla). Por isso é `wasReleasedThisFrame`.

**W/S sem mudança.** O bloco de W/S do `App.cs` foi para `KeyboardMove` com o mesmo destino, a mesma parada e o mesmo reenvio. [I] Detalhe não portado: no original, W+S dão 100000, o que para e zera os bits, e o `Hold` de uma das teclas reinicia o movimento no quadro seguinte. O porte para e retoma ao soltar uma delas.

[V] As teclas do NumPad com o NumLock desligado: o Windows as traduz em Home/PgUp etc. O Input System lê por scan code e deve entregar `Numpad7`, mas não foi conferido ao vivo.

## Entrega

- **Commits** (`feat/world-teclas-movimento`): `6738869` (código e testes), `d314cdf` (`.meta`), `96f404e` (evidências e M6). O branch não mexe no `App.cs`.
- **Testes:** `sh Docs/tools/run_tests.sh` com o patch do pedido 0024 aplicado: **427 total, 427 passaram, 0 falhas**, sem avisos novos de compilação (só os 5 antigos de `LobbyScene`/`VideoOptions`). `UserIniKeysTests`: 14, todos passaram.
- **Falta / fora do escopo:**
  - **pedido 0024:** aplicar o `app-cs.patch` no `App.cs`. Sem ele, nenhuma tecla nova age.
  - teste ao vivo das teclas no aCis (estava fora do ar), com destaque para PrintScreen e NumPad com o NumLock desligado ([V] em Decisões).
  - [V] se o aCis precisa do `CannotMoveAnymore` ao desligar o NumLock.
  - Fora do escopo:
    - a correção da spec 05 §5.6 e do `03_teclado.md` §4 ("voo/nado" → modo câmera do 0xf1), que é da sessão de análise;
    - o `L2Camera.Wheel` (render) com passo 20 em vez do `Speed=50` do `user.ini` e sem as regras de 1/8 e de altura no mínimo (o `CameraKeys.ZoomPress` já as tem e pode ser reaproveitado);
    - o resto do modo câmera do 0xf1 (física de voo, câmera livre);
    - GreyPlus/GreyMinus etc. (baixa prioridade).

## Pedidos

- `pedidos4-world-teclas-app.md`: ligar as teclas no `App.cs` (coordenadora). Aberto.
