# Verificação instrução a instrução das cadeias pacote → evento

Gerado por `scripts/verify_chains.py`. Para cada par (pacote, `EV_*`) do mapa (96), o script reconstrói um caminho concreto e exige que **cada salto seja uma instrução observada** no assembly: um `call` direto no corpo da função chamadora (seguindo thunks), a chamada virtual a um slot de `UGameEngine` ou do console (endereço registrado pelo rastreador de registradores) e, no fim, o `push` do id do evento antes do despachante `FUN_100d1790`. O caminho completo, com o endereço de cada salto, está em `out/re/chain_verification.json`.

| resultado | pares (pacote, evento) |
|---|---|
| verificado | 336 |

Pacotes com pelo menos uma cadeia verificada: **198 de 198**; eventos distintos alcançados por cadeia verificada: **230**.

## Exemplos

- **NSPacket** (game 0x2) → `EV_PartyMatchChatMessage`: `0x1040d250` [console slot 366] @`0x1040d2f6` → `0x10141760` @`0x1014183d` → `0x1013df30` [EV_PartyMatchChatMessage] @`0x1013e118`
- **NSPacket** (game 0x2) → `EV_ShowPetitionWnd`: `0x1040d250` [console slot 366] @`0x1040d2f6` → `0x10141760` @`0x1014183d` → `0x1013df30` [EV_ShowPetitionWnd] @`0x1013e377`
- **NSPacket** (game 0x2) → `EV_PetitionChatMessage`: `0x1040d250` [console slot 366] @`0x1040d2f6` → `0x10141760` @`0x1014183d` → `0x1013df30` [EV_PetitionChatMessage] @`0x1013e4bc`
- **NSPacket** (game 0x2) → `EV_ChatMessage`: `0x1040d250` [console slot 366] @`0x1040d2f6` → `0x10141760` @`0x1014183d` → `0x1013df30` @`0x1013e159` → `0x101392c0` [EV_ChatMessage] @`0x10139459`
- **CIPacket** (game 0x3) → `EV_FishViewportWndShow`: `0x104366f0` [UGameEngine slot 456 OnFishingStart] @`0x10437bc9` → `0x104932b0` [console slot 468] @`0x10493738` → `0x10167e50` [EV_FishViewportWndShow] @`0x10167eaf`
- **CIPacket** (game 0x3) → `EV_FishRankEventButtonHide`: `0x104366f0` [UGameEngine slot 456 OnFishingStart] @`0x10437bc9` → `0x104932b0` [console slot 470] @`0x1049374e` → `0x10149150` @`0x10149190` → `0x101ab8c0` [EV_FishRankEventButtonHide] @`0x101ab992`
