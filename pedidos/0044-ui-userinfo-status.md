# Pedido 0044 — `UserInfo`: rank (pledgeClass) e recomendações no `Stats` para a DetailStatusWnd (#0051)

| Campo | Valor |
|---|---|
| De | ui (tarefa #0051) |
| Para | net |
| Estado | aberto |
| Criado | 2026-11-04 |

## O que precisa

Em `Assets\L2Web\Scripts\Net\GamePackets.cs`, no `ParseUserInfo`, guardar no `u.Stats` campos que hoje são lidos e descartados. A ordem do aCis está em `UserInfo.java` (`writeImpl`):

| Chave | Campo do 0x04 | Hoje no `ParseUserInfo` |
|---|---|---|
| `"recomLeft"` | `writeH(getRecomLeft())`, logo depois do `clanPrivileges` | `r.H();` (1º) |
| `"recomHave"` | `writeH(getRecomHave())` | `r.H();` (2º) |
| `"pledgeClass"` | `writeD(getPledgeClass())`, logo depois do `isRunning` | o 1º `r.D()` dentro do `if (r.Remaining >= 12)` |
| `"noble"`, `"hero"` | `writeC(isNoble)`, `writeC(isHero)` | `r.C(); // noble`, `r.C(); // hero` |

`noble`, `hero`, `recomLeft` e `recomHave` já estão no pedido 0034 (item 1) e no 0031. Se um deles for atendido antes, basta acrescentar o `pledgeClass`.

```csharp
int recomLeft = r.H(), recomHave = r.H();
...
long pledgeClass = -1;
if (r.Remaining >= 12) { pledgeClass = r.D(); r.D(); u.TitleColor = r.D(); }
...
["recomLeft"] = recomLeft, ["recomHave"] = recomHave, ["noble"] = noble, ["hero"] = hero,
// e, quando veio: if (pledgeClass >= 0) u.Stats["pledgeClass"] = pledgeClass;
```

## Por quê

A DetailStatusWnd (`DetailStatusWnd.uc:245,283-284,346,387-395,495-496`) mostra:
- o rank pelo `GetUserRankString(nUserRank)`: nw:0x1014a3b0, de 0 a 8 → sysstring 1385, 1386 e 1388 a 1394;
- o ícone de herói ou de nobre;
- Sociality (`nSociality` = recomHave) e Votes (`nRemainSulffrage` = recomLeft).

O `DetailStatusScript` da #0051 já lê essas chaves. Sem elas, o rank fica vazio, o ícone não aparece e Sociality/Votes ficam em 0. Nada quebra.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
