# Pedido 0009 — Net: lastServer e personagens por servidor do ServerList

| Campo | Valor |
|---|---|
| De | ui (tarefa #0018) |
| Para | net (e uma linha no App.cs, coordenadora) |
| Estado | aberto |
| Criado | 2026-10-29 |

## O que precisa

1. `Assets/L2Web/Scripts/Net/LoginClient.cs`, no parse do ServerList (0x04): guardar o byte `lastServer` (3º byte, `ServerList.java:41` do aCis) e, se o pacote tiver a parte final, a contagem de personagens por servidor (`writeH(…)` + `serverId`, `charCount`; `ServerList.java:85-90`). Sugestão: `public int LastServer` no resultado e `public int Chars` no `ServerInfo` (0 quando não vier).
2. `App.cs:1110` (`ChooseServer`): `scrServers.SetServers(list, lastServer);` — a UI já escolhe o último servidor usado se estiver no ar.

## Por quê

O Spark mostra o número de personagens de cada servidor (`ServerElement`) e o Interlude/aCis manda o último servidor usado. Sem isso a lista continua escolhendo o primeiro servidor no ar e sem a contagem. O aCis local manda 0 personagens ("não rastreado", `ServerList.java:90`), então a contagem só vale com um servidor que a preencha. Nada quebra.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
