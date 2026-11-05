# Pedido 0046 — SocialAction 0x2d: tocar a animação social no personagem (#0051)

| Campo | Valor |
|---|---|
| De | ui (tarefa #0051) |
| Para | world (com uma linha no `App.cs`, coordenadora) |
| Estado | aberto |
| Criado | 2026-11-04 |

## O que precisa

O servidor responde às ações sociais com `SocialAction` 0x2d (`dd`: objectId, actionId). O porte já tem `GamePackets.ParseSocialAction` (`Net/GamePackets.cs:784`), mas ninguém trata o pacote: **não existe `On(0x2d, …)` no `App.cs`**. O personagem fica parado (spec 96: 0x2d → mundo/engine, `OnSocialAction`).

1. **world/render:** um método no `Entity`/`Actor`, por exemplo `PlaySocial(int actionId)`, que toque uma vez a animação `Social_<nome>_<modelo>` e volte para o idle. O `LobbyScene` já usa `"Social_Victory_" + c.Model` (`Render/LobbyScene.cs:961-968`). O nome vem do `PcSocialAnimName` do pawn (`analises\l2-interlude\re\fx\layout_pawn.txt:200`, `0x100c PcSocialAnimName Name[20]`). As animações exportadas (`tools\l2anim\out\anims_raw.json`) são `Social_nod/victory/Atk/no/yes/bow/unaware/waiting/laugh/clap/dance/sad`. Mapa provável, **a validar** pelo `PcSocialAnimName`:

   | actionId | ação (actionname-e) | animação |
   |---|---|---|
   | 2 | Greeting | `Social_nod` [?] |
   | 3 | Victory | `Social_victory` |
   | 4 | Advance | `Social_Atk` |
   | 5 | No | `Social_no` |
   | 6 | Yes | `Social_yes` |
   | 7 | Bow | `Social_bow` |
   | 8 | Unaware | `Social_unaware` |
   | 9 | Social Waiting | `Social_waiting` |
   | 10 | Laugh | `Social_laugh` |
   | 11 | Applaud | `Social_clap` |
   | 12 | Dance | `Social_dance` |
   | 13 | Sorrow | `Social_sad` |

   Ids acima de 13 também chegam por esse pacote: level up 15, os fogos 2122 e outros. Fica a cargo da world tratar ou ignorar.

2. **coordenadora (`App.cs`):** junto dos outros `On(...)` do mundo (perto do `On(0x2f, …)`, `App.cs:1552`):

```csharp
On(0x2d, r =>
{
    var s = GamePackets.ParseSocialAction(r);
    world.Get(s.ObjectId)?.PlaySocial(s.ActionId);
});
```

## Por quê

Com o pedido 0045 (DoAction), as 12 sociais da ActionWnd mandam o `RequestSocialAction` certo. Conferido no aCis local: cada uma volta como `SocialAction` do próprio personagem, com o id da tabela acima. Sem este pedido, o servidor aceita a ação, os outros jogadores veem a animação e o próprio cliente não mostra nada. Nada quebra.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
