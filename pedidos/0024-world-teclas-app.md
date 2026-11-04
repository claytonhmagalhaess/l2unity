# Pedido 0024 — `App.cs`: ligar as teclas de movimento e câmera do `user.ini` (#0034)

| Campo | Valor |
|---|---|
| De | world (tarefa #0034) |
| Para | coordenadora |
| Estado | aberto |
| Criado | 2026-11-03 |

## O que precisa

Aplicar no `Assets\L2Web\Scripts\App.cs` o patch que está no branch `feat/world-teclas-movimento`, em `Docs/evidencias/teclas-movimento/app-cs.patch` (feito sobre o `main` `0d71a77`; 165 linhas):

```
git -C l2unity apply Docs/evidencias/teclas-movimento/app-cs.patch
```

O que ele muda (tudo chama código novo de `Scripts\World\`):

1. **Campos de entrada:** sai o `MoveKeys` local e os `keyTimer`/`keyMoving`/`keyYaw`. Entram `keyMove` (`KeyboardMove`) e `camKeys` (`CameraKeys`); `moveKeys` passa a usar `UserIniKeys.MoveDirs`, com W/S, as setas, Espaço e Ctrl.
2. **`ReadInput`:** depois do teste de digitação, NumPad8/2 seguradas mudam `scene.Cam.ViewHeight` com `CameraKeys.ViewHeightHold` (±20 por segundo).
3. **`OnKey`:**
   - NumLock chama `keyMove.TogglePermanent(world.Self.Heading)`;
   - NumPad 7/9/4/6/1/3 chamam `camKeys.ZoomPress(...)` sobre `scene.Cam.Zoom`/`ViewHeight`, com `CamUtil.Cfg.ZoomMin/ZoomMax`, o `CollisionRadius` do pawn e o `DisableZoom` do preset.
4. **`ContinuousInput`:** o bloco de W/S vira `keyMove.Hold(bits)` + `keyMove.Tick(...)`, e o destino devolvido sai no mesmo `GamePackets.MoveTo(..., false)` (C→S `MoveBackwardToLocation`). W/S continuam iguais: mesmo destino, mesma parada e reenvio a cada 1 s ou 1000 de giro.
5. **`ClickAt`:** `keyMove.Cancel()` depois do `Lock()` (o clique desliga a corrida do NumLock).
6. **`LeaveWorld`:** `keyMove.Reset()`.
7. **`Update`:** PrintScrn solto (`OnRelease shot`) chama o novo `Shot()`, em qualquer tela, menos quando o jogador está digitando. O `Shot()` grava `Shot%05i.jpg/.bmp` em `Application.persistentDataPath` conforme o `Game.ScreenShotQuality` e, no mundo, despacha a mensagem de sistema 1204.
8. **Handler novo:** `On(0xf1, r => keyMove.FreeCamera = r.D() == 1)`, o S→C `CameraMode`. É ele que liga o modo câmera em que Espaço/Ctrl sobem e descem.

Compila: a suíte rodou com o patch aplicado na vaga world (ver Entrega da #0034). Conflito provável com a #0033 (ui, teclado) só se ela mexer no `OnKey`/`ReadInput`. Os trechos são pequenos e independentes.

## Por quê

Sem o patch, a lógica nova (`KeyboardMove`, `CameraKeys`, `ScreenShot`) fica no branch com testes, mas nenhuma tecla a usa: Espaço/Ctrl, NumLock, NumPad e PrintScrn continuam sem efeito no jogo. Nada quebra.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
