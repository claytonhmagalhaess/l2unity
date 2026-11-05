# Pedido 0029 — `InterfaceEvents`: tipo do invocado trocado no 0xb0 e no 0xb1 (#0031)

| Campo | Valor |
|---|---|
| De | ui (tarefa #0031) |
| Para | net |
| Estado | aberto |
| Criado | 2026-11-03 |

## O que precisa

Em `Assets\L2Web\Scripts\Net\InterfaceEvents.cs` (código da #0046), o `SummonType` de `PetStatusShow` (0xb0) e de `PetInfo` (0xb1) está com os valores trocados. No aCis, `Pet.getSummonType()` = **2** e `Servitor.getSummonType()` = **1** (`model\actor\instance\Pet.java:132`, `Servitor.java:67`), e é esse valor que vai no `writeD` dos dois pacotes (`PetStatusShow.java:21`, `PetInfo.java:42`). No cliente, `GetIsPetOrSummoned()` usa a mesma convenção: o `PetStatusWnd` só fica aberto com **2** e o `SummonedStatusWnd` com **1** (`IL:PetStatusWnd.uc:31`, `IL:SummonedStatusWnd.uc:33`; spec 06 §5.2).

Trecho sugerido:

```csharp
// PetStatusShow
new() { E(s.SummonType == 2 ? Ev.EV_PetWndShow : Ev.EV_SummonedWndShow) };

// PetInfo
if (p.SummonType == 2 && string.IsNullOrEmpty(p.Name)) o.Add(E(Ev.EV_PetWndShowNameBtn, P("", "Show", 1)));
if (first) o.Add(E(p.SummonType == 2 ? Ev.EV_PetStatusShow : Ev.EV_SummonedStatusShow));
```

O `PartySpelled` (0xee) está certo como está, porque ali o aCis manda 2 para servo e 1 para pet (`PartySpelled.java:42`).

## Por quê

Hoje, ao invocar um pet, abre o `SummonedStatusWnd`, que se fecha sozinho no `OnShow` porque o tipo não confere, e o `PetStatusWnd` nunca aparece. Com um servo acontece o contrário. Clicar no próprio pet (0xb0) abre a `SummonedWnd` em vez da `PetWnd`. O botão de nome aparece para o servo sem nome, e não para o pet. As janelas da #0031 seguem o nativo e conferem o tipo pelo `InterfaceRouter.Pet.SummonType`, então só esses dois eventos ficam errados até a correção.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
