# Evidências da #0034: teclas de movimento e câmera do `user.ini`

Gravadas **offline** em 2026-11-03, porque o aCis local estava fora do ar.

Como foram gravadas:
- Editor da vaga world, cena `L2Web`, `L2Web.Dev.OfflineView.Begin(83400, 147950, -3400)` (Giran).
- Cada passo chama a lógica de `Scripts\World` pelo `e2e.sh eval`, sobre a câmera e o pawn do `OfflineView`. É a mesma chamada que o patch do `App.cs` (pedido 0024) faz quando a tecla é apertada.
- As teclas físicas não passaram pelo `App.cs` nesta vaga, porque a ligação é o pedido 0024. O teste ao vivo fica para depois do merge, com o aCis no ar.
- Números de cada passo: `teclas.log`.

| Arquivo | Interação | O que mostra |
|---|---|---|
| `01_base.png` | — | câmera no preset 0 (zoom −20, altura 0) |
| `02_numpad8_altura.png` | NumPad8 segurada 5 s (`CameraViewHeightAdjust Speed=+20`) | altura 0 → 100: o alvo da câmera sobe e o personagem sai pela parte de baixo do quadro. NumPad2 por 5 s volta a 0 (log) |
| `03_numpad9_zoom_minimo.png` | NumPad9 (`ZoomInPress Speed=2.0`) até passar do mínimo | 140 apertos de −20 a −200. O passo cai para 0,25 abaixo de −184 (2×raio + mínimo). No mínimo, a altura sobe 6,4 (4/5 do raio 8), e o NumPad7 seguinte desfaz (log). Os passos de 4/6 e 1/3 (0,1 e 0,01) estão no log |
| `04_printscrn_Shot00000.jpg` | PrintScrn (`OnRelease shot`) com `ScreenShotQuality=1` | o próprio arquivo gravado pelo `ScreenShot.Capture`. Com qualidade 0 saiu o `Shot00000.bmp` de 24 bits, 1920×1080, com 6 220 854 bytes; foi conferido no log e apagado pelo tamanho |
| `05a_numlock_antes.png` / `05b_numlock_correndo.png` | NumLock (`KeyboardPermanentMove`) no heading 32768 | a corrida segue o rumo do pawn com reenvio a cada 1 s (eco do servidor simulado com `ServerMove`). Em 2,6 s o pawn andou ~190 unidades em −X. Na 05b a câmera está perto porque a parede atrás a puxa (hit-check). NumLock de novo manda a parada (log `[keys2]`) |

A primeira rodada do log (`[keys]`, heading 0) tem as ordens de Ctrl durante a corrida (acaba sem parada), Espaço no modo normal (nada) e Espaço/Ctrl/W+Espaço no modo câmera (destino com Z ±800). O Z do pawn nela vai a −1376 porque o pawn offline subiu num telhado: sem servidor, o chão vem da camada mais alta do geodata. A captura dessa rodada foi descartada.

`app-cs.patch`: a ligação no `App.cs` do pedido 0024 (`git apply`).
