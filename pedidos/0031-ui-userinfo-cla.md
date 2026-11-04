# Pedido 0031 — `UserInfo`: privilégios do clã, relação, nobre e herói no `Stats` (#0038)

| Campo | Valor |
|---|---|
| De | ui (tarefa #0038) |
| Para | net |
| Estado | aberto |
| Criado | 2026-11-03 |

## O que precisa

Em `Assets\L2Web\Scripts\Net\GamePackets.cs`, no `ParseUserInfo`, quatro campos que hoje são lidos e descartados devem entrar no `u.Stats`:

| Chave | Campo do 0x04 (aCis `UserInfo.java`) | Hoje |
|---|---|---|
| `"relation"` | o 4º `d` do `r.Skip(4 * 4); // crest, ally, allyCrest, relation` (`_relation`: 0x40 = líder do clã, linha 24) | pulado |
| `"clanPrivileges"` | `r.D(); // clan privileges` (`getClanPrivileges()`, linha 319) | descartado |
| `"noble"` | `r.C(); // noble` (linha 344) | descartado |
| `"hero"` | `r.C(); // hero` (linha 348) | descartado |

Basta trocar as leituras para variáveis e acrescentar no dicionário do fim:

```csharp
["relation"] = relation, ["clanPrivileges"] = privileges, ["noble"] = noble, ["hero"] = hero,
```

## Por quê

O `ClanWnd` habilita os botões pela autoridade do jogador (`EV_ClanMyAuth`). No nativo, esse evento vem do `UserInfo` (`NConsoleWnd::ReceivePledgeMyAuth`, `nw:0x1015c020`; spec 96: 0x04 → `OnReceivePledgeMyAuth`). O `GameUi.SetUser` da #0038 já monta o evento quando `Stats` tem `"clanPrivileges"`. Nobre e herói decidem o `HeroBtn` e a troca de título (`NoblessMenuValidate`, `Proc_AuthValidation`). Sem os campos, o evento não sai, e quem não é líder fica com os botões do drawer desligados. Nada quebra.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
