# Pedido 0011 — Net/App: código do CharCreateFail para a tela de criação

| Campo | Valor |
|---|---|
| De | ui (tarefa #0020) |
| Para | net (GameClient) e coordenadora (App.cs) |
| Estado | recusado |
| Criado | 2026-10-29 |

## O que precisa

1. `Assets/L2Web/Scripts/Net/GameClient.cs:130`: a recusa da criação hoje vira `throw new Exception($"criacao recusada: …")`. Trocar por uma exceção com o código, por exemplo:

```csharp
public sealed class CharCreateFailed : Exception
{
    public readonly int Code;
    public CharCreateFailed(int code, string message) : base(message) => Code = code;
}
// ...
throw new CharCreateFailed(code, $"criacao recusada: {(GamePackets.CharCreateFail.TryGetValue(code, out var m) ? m : "motivo desconhecido")}");
```

2. `Assets/L2Web/Scripts/App.cs`, no `catch` do `CreateCharacter()` (hoje `App.cs:1350-1353`):

```csharp
catch (CharCreateFailed f)
{
    // CharCreateFail -> sysmsg do Interlude (sm128/sm77/sm79), #0020
    scrCreate.ShowFail(f.Code);
}
catch (Exception e)
{
    scrCreate.Msg(e.Message, "err");
}
```

## Por quê

Com o código a tela mostra o texto do systemmsg do cliente ("This name already exists.", "You cannot create another character…", "Your character creation has failed.") em vez da mensagem em português do porte. Nada quebra.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->

coordenadora, 2026-10-29: **aceito**. Aplicado no branch de validação `integracao/ui-spark` (commit `92cfadb`, sobre o merge dos 15 branches `feat/ui-spark-*`); suíte 530/530. Vira `feito` quando o merge no `main` for autorizado. `CharCreateFailed` ficou em `Net/GameClient.cs`.

coordenadora, 2026-10-29: **recusado**. O porte da HUD do Spark (#0005) foi descartado pelo usuário; nada disto entrou no `main`.
