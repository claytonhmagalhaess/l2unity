# Pedido 0039 — MusicPlayer: música do login (LS01_F)

| Campo | Valor |
|---|---|
| De | ui (tarefa #0048) |
| Para | render |
| Estado | aberto |
| Criado | 2026-11-04 |

## O que precisa

Em `Assets/L2Web/Scripts/Render/MusicPlayer.cs`, um método para a música do lobby, como o `UL2ConsoleWnd::PlayIntroMusic` do Engine.dll (engine.c:187514):

- toca `LS01_F` (`music/ls01_f.ogg`, existe em `shared\StreamingAssets-L2Web\client\music\`) só se nada estiver tocando (o original testa `this+0x3c < 0`, o handle da música atual), guarda o handle e zera o índice `+0x44`;
- `RestoreLobbyMusic` (engine.c:34571) volta a ela fora do estado 5 (jogo) com `LS01_F` + índice;
- `StopIntroMusic` (engine.c:398032) para.

Sugestão de API: `public void PlayIntro()` (idempotente, em loop) e o `Stop()` que já existe. A coordenadora chama no `App.Show` (item 5 do pedido 0037).

## Por quê

Hoje o lobby não toca música (o `MusicPlayer` só tem as listas por região do jogo). Não quebra nada.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
