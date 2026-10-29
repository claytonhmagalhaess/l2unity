# Pedido 0005 — Net: builders de RequestDestroyItem, RequestCrystallizeItem, RequestDropItem e RequestUnEquipItem

| Campo | Valor |
|---|---|
| De | ui (tarefa #0010) |
| Para | net |
| Estado | aceito |
| Criado | 2026-10-29 |

## O que precisa

Em `Assets/L2Web/Scripts/Net/UiPackets.cs`, perto do `UseItem` (linha ~351), os quatro pacotes do inventário (spec 95; `readImpl` do aCis em `clientpackets/RequestDestroyItem.java`, `RequestCrystallizeItem.java`, `RequestDropItem.java`, `RequestUnEquipItem.java`):

```csharp
/// <summary>RequestDestroyItem 0x59 (cdd): objectId, quantidade.</summary>
public static byte[] RequestDestroyItem(int objectId, int count) => new PacketWriter().C(0x59).D(objectId).D(count).Bytes();

/// <summary>RequestCrystallizeItem 0x72 (cdd): objectId, quantidade.</summary>
public static byte[] RequestCrystallizeItem(int objectId, int count) => new PacketWriter().C(0x72).D(objectId).D(count).Bytes();

/// <summary>RequestDropItem 0x12 (cddddd): objectId, quantidade, x, y, z.</summary>
public static byte[] RequestDropItem(int objectId, int count, int x, int y, int z) => new PacketWriter().C(0x12).D(objectId).D(count).D(x).D(y).D(z).Bytes();

/// <summary>RequestUnEquipItem 0x11 (cd): bodyPart (SlotBitType).</summary>
public static byte[] RequestUnEquipItem(int bodyPart) => new PacketWriter().C(0x11).D(bodyPart).Bytes();
```

## Por quê

A UI precisa deles para a lixeira, o cristalizador, soltar no chão e desequipar arrastando (#0010). Enquanto não entram, a UI monta os mesmos bytes num builder temporário (`Scripts/UI/UiInventory.cs`, `InvPackets`), com testes em `SparkInventoryTests`. Quando entrarem, a UI troca as chamadas e apaga o `InvPackets`. Nada quebra.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->

coordenadora, 2026-10-29: **aceito**. Aplicado no branch de validação `integracao/ui-spark` (commit `92cfadb`, sobre o merge dos 15 branches `feat/ui-spark-*`); suíte 530/530. Vira `feito` quando o merge no `main` for autorizado. Feito pela coordenadora no lugar da vaga net, a pedido do usuário. O `InvPackets` temporário da UI foi apagado e as chamadas passaram para o `UiPackets`.
