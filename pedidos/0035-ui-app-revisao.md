# Pedido 0035 — App.cs: tirar respostas duplicadas que a UI já faz (duelo e troca)

| Campo | Valor |
|---|---|
| De | ui (tarefa #0047) |
| Para | coordenadora |
| Estado | aberto |
| Criado | 2026-11-04 |

## O que precisa

1. **Duelo (`App.cs:1708-1709`, ramo `sub == 0x4b` do ExDuelAskStart).** Tirar as duas linhas depois do `L2Events.Dispatch(... EV_DuelAskStart ...)`:
   ```csharp
   if (L2Options.GetBool("Game", "IsRejectingDuel")) gc.Send(SocialPackets.DuelAnswerStart(duelType, false));
   else Chat("sys", GameData.SystemMessage(duelType == 1 ? 1939 : 1938, new List<string> { requestor }).Text);
   ```
   A `PartyMatchView` (DuelManager.uc:104-132) já responde: com `IsRejectingDuel` recusa na hora, e sem ele mostra o DialogBox de 10 s. Desde o commit `c4f9742` ela envia de fato, porque o `DuelAnswer` agora está ligado ao `SocialPackets.DuelAnswerStart`. Com as duas linhas, a recusa automática sai duas vezes, e o pedido de duelo aparece no chat além do diálogo.
2. **Troca (`App.cs:1884`, handler do SendTradeRequest).** Tirar `social.AskTrade(t.SenderId);`. O `PacketEvents.TradeRequest(t)` da linha anterior já dispara o `EV_TradeRequestStartExchange`. Na mesma tarefa, a UI passa a tratá-lo como o `TradeWnd.uc:309-354`: DialogBox Progress de 10 s com sm100, OK → `AnswerTradeRequest(true)`, Cancel ou fim do tempo → `false`. Hoje a pergunta sai na `UiWindow "ask"` genérica.

   Essa parte da UI ainda não está no branch, porque, enquanto o `AskTrade` existir, as duas perguntas apareceriam juntas. Avise quando o pedido for aceito, que a UI entra no mesmo merge.

## Por quê

O item 1 manda pacote em dobro ao servidor; o 2 deixa a troca fora do DialogBox do original. Nenhum dos dois quebra o jogo hoje.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
