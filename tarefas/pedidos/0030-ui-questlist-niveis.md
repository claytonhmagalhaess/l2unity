# Pedido 0030 — `InterfaceEvents.QuestList`: um `EV_QuestList` por nível do diário (#0037)

| Campo | Valor |
|---|---|
| De | ui (tarefa #0037) |
| Para | net |
| Estado | aberto |
| Criado | 2026-11-03 |

## O que precisa

Em `Assets\L2Web\Scripts\Net\InterfaceEvents.cs`, `QuestList(List<QuestInfo>)` manda hoje um só `EV_QuestList` por quest, com `Level = cond` e `Completed = 0`. O nativo (`NConsoleWnd::AddQuestID`, `nw:0x1016ac70`, uma chamada por quest do pacote 0x80) faz assim com o 2º `d` de cada quest:

1. Sem o bit 31 (`value & 0x80000000 == 0`), o valor é o `cond`, e a máscara passa a ter os bits 0..cond−1.
2. Com o bit 31, o valor já é a máscara (`__compltdStateFlags` do aCis, `QuestList.java`).
3. Para cada bit 0..29 ligado, vai um nível `bit + 1`, em ordem crescente.
4. Cada nível sai como um `EV_QuestList` com `QuestID`, `Level` e `Completed`. `Completed = 1` em todos, menos no último, que leva `Completed = 0`.

Trecho sugerido:

```csharp
foreach (var q in l)
{
    var mask = (uint)q.Cond;
    if ((mask & 0x80000000u) == 0)
    {
        mask = 0;
        for (var i = 0; i < q.Cond && i < 31; i++) mask |= 1u << i;
    }
    var levels = new List<int>();
    for (var b = 0; b < 30; b++) if ((mask & (1u << b)) != 0) levels.Add(b + 1);
    for (var k = 0; k < levels.Count; k++)
        o.Add(E(Ev.EV_QuestList, P(P(P("", "QuestID", q.QuestId), "Level", levels[k]), "Completed", k == levels.Count - 1 ? 0 : 1)));
}
```

O nativo também pula a quest que não existe no `questname-e.dat`. Essa tabela fica na UI (`UI\QuestData.cs`), então essa parte não entra aqui. Sem ela, a árvore mostra o nó com o nome vazio.

## Por quê

O `QuestTreeWnd.uc` só cria o nó da quest quando chega o `Level == 1` (`IL:QuestTreeWnd.uc:440-560`). Com um evento só e `Level = cond`, toda quest com `cond > 1` fica com o diário solto no topo da árvore, sem o nó da quest, e o nível seguinte vai parar dentro do nó da quest anterior. Também se perdem os diários anteriores e a marca "Completed". As janelas da #0037 já seguem o nativo (um evento por nível).

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
