# Pedido 0023 — App.cs: criar o InterfaceRouter junto com o GameClient

| Campo | Valor |
|---|---|
| De | net (tarefa #0046) |
| Para | coordenadora |
| Estado | feito |
| Criado | 2026-11-03 |

## O que precisa

Em `Assets/L2Web/Scripts/App.cs`, `ConnectGame` (hoje na linha ~1123, logo depois de `gc = new GameClient(...)`), criar o roteador dos pacotes das janelas novas e deixá-lo acessível para a UI:

```csharp
// campo da classe App
/// <summary>Pacotes das janelas da interface (#0046): eventos EV_* e o ultimo pacote lido de cada janela.</summary>
public InterfaceRouter Interface;

// em ConnectGame, depois de gc = new GameClient(...)
Interface?.Dispose();
Interface = new InterfaceRouter(gc);
```

Nada mais no `App.cs`: o `InterfaceRouter` (`Scripts/Net/InterfaceRouter.cs`) registra no `GameClient` só os opcodes que o `App.cs` ainda não trata, lê cada pacote e entrega os `EV_*` ao `L2Events.Dispatch`. Os pacotes Ex que ele trata têm um `On(0xfe, ...)` próprio, que ignora os sub-opcodes que o App já lê.

A UI usa `app.Interface` para os dados que o original lê por natives (por exemplo `Interface.Macros` = `UIDATA_MACRO`, `Interface.RequestMacroList()` = `RequestMacroList`) e os `OnXxx` para receber o pacote lido.

## Por quê

Sem isso os pacotes da #0046 (macro, armazém, frete, loja privada, pet, quest, clã, skill, henna, receitas, melhoria de item, busca de grupo, união, duelo, `ExShowScreenMessage`) continuam chegando sem tratador e nenhum `EV_*` deles é disparado: as janelas da vaga `ui` (#0025–#0045) ficam sem dados. Nada quebra hoje; o código atual só fica incompleto.

Opcodes que o router trata: ver `ReceivedPacketTests` / `Docs/cobertura_recebidos.md` no branch `feat/net-pacotes-interface` (a coluna "Unity" junta `App.cs` e `InterfaceRouter.cs`).

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
Aceito pela coordenadora em 2026-11-03. O `InterfaceRouter` só existe no branch `feat/net-pacotes-interface`; por isso o campo `Interface` e as duas linhas em `ConnectGame` entram num commit da coordenadora no `main` junto com o merge da #0046 (quando o usuário pedir o merge), não antes, para o `main` continuar compilando.
- 2026-11-03 — coordenadora: feito no `main` (`280ae40`), junto com o merge; `run_tests.sh` 588/588 (`5d398bb`).
