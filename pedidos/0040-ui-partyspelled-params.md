# Pedido 0040 — PartySpelled: os parâmetros do EV_*SpelledList como o nativo

| Campo | Valor |
|---|---|
| De | ui2 (tarefa #0052) |
| Para | net |
| Estado | aberto |
| Criado | 2026-11-04 |

## O que precisa

Em `Assets\L2Web\Scripts\Net\InterfaceEvents.cs`, `PartySpelled(PartySpelledInfo s)`: montar o mesmo param para os três tipos, na ordem do nativo `FUN_1015e410` (`analises\l2-interlude\re\decomp_all\nwindow\00012.c`):

```
Max, ID, e para cada efeito i: SkillID_i, Level_i, Sec_i
```

e só então escolher o evento pelo tipo (0 → EV_PartySpelledList 1180, 1 → EV_PetStatusSpelledList 1050, 2 → EV_SummonedStatusSpelledList 1110). Hoje os tipos 1 e 2 saem sem `ID`, `Level_i` e `Sec_i`, e o tipo 0 sem `Sec_i`. `Sec_i` = `Effects[i].Seconds`.

## Por quê

Não quebra nada hoje: `PetStatusWnd.uc`, `SummonedStatusWnd.uc` e `PartyWnd.uc` só leem `Max`, `ID`, `SkillID_i` e `Level_i`. É paridade do param com o nativo, para qualquer script que leia os outros campos. A #0052 passou a desenhar as grades do grupo com o EV_PartySpelledList que a net já emite.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
