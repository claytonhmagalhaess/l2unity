# Pedido 0004 — RequestShortCutReg: UserShortCut = 1 (jogador)

| Campo | Valor |
|---|---|
| De | ui (tarefa #0009) |
| Para | net |
| Estado | aberto |
| Criado | 2026-10-29 |

## O que precisa

Em `Assets/L2Web/Scripts/Net/UiPackets.cs:356`, o último `D` do `ShortCutReg` é o `UserShortCut` (spec 05 §3.5: `RequestShortCutReg Type=%d RoomNum=%d ID=%d UserShortCut=%d`, 1 = jogador, 2 = pet; `engine.dll@0x57e7ec`). Hoje vai 0:

```csharp
public static byte[] ShortCutReg(string type, int slot, int id) => new PacketWriter().C(0x33).D(ScCode[type]).D(slot).D(id).D(0).Bytes();
```

Sugestão:

```csharp
/// <summary>RequestShortCutReg 0x33 (cdddd): tipo, RoomNum (pagina*12+slot), id, UserShortCut (1 jogador, 2 pet; 05 §3.5).</summary>
public static byte[] ShortCutReg(string type, int slot, int id, int userShortCut = 1) => new PacketWriter().C(0x33).D(ScCode[type]).D(slot).D(id).D(userShortCut).Bytes();
```

## Por quê

O aCis guarda esse valor no atalho (`RequestShortCutReg.java:22`, `new Shortcut(..., _characterType)`) e o devolve no ShortCutInit/ShortCutRegister. Com 0 o atalho fica com um tipo de personagem que o cliente original nunca manda. Não quebra nada hoje; é fidelidade ao pacote do Interlude. Os testes da UI (`SparkBarTests`) montam o pacote esperado com `D(0)` e precisam passar para `D(1)` junto com a troca.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
