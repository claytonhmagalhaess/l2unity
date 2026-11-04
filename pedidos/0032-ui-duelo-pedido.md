# Pedido 0032 — Net: convite de duelo (`ExDuelAskStart`) e a resposta (`RequestDuelAnswerStart`) (#0045)

| Campo | Valor |
|---|---|
| De | ui (tarefa #0045) |
| Para | net |
| Estado | aberto |
| Criado | 2026-11-04 |

## O que precisa

1. **`InterfaceRouter`**: tratar o `ExDuelAskStart` (FE:4b, `Sd`: quem desafia e o tipo, 0 = 1×1 e 1 = grupo; spec 96 linha 447) e emitir `EV_DuelAskStart` com `userName` e `type`. Hoje o router começa no FE:4c.
2. **`PartyMatchPackets`**: o builder `RequestDuelAnswerStart(int partyDuel, int rejecting, int answer)` = D0:28 `ddd` (aCis `RequestDuelAnswerStart`: `_partyDuel`, `_unk1`, `_response`).
3. Opcional, mesma área: `RequestPartyMatchDetail` com local e nível (o `RequestJoinPartyRoomAuto(página, local, nível)` do PartyMatchWnd usa o 0x71 com a sala 0), e um builder para o `RequestCommandChannelInfo` / `RequestCommandChannelWithdraw` do UnionWnd, se o aCis tiver.

A UI já está pronta: o `DuelManager` registra `EV_DuelAskStart` e chama `PartyMatchView.DuelAnswer` (hoje nulo). Com o builder, basta a UI ligar `DuelAnswer = PartyMatchPackets.RequestDuelAnswerStart`.

## Por quê

Sem o FE:4b não aparece o convite de duelo (o Progress de 10 s com sm1938/sm1939). Sem o D0:28 não dá para aceitar nem recusar, e o desafio só expira no servidor. A opção `IsRejectingDuel` também não tem efeito.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
