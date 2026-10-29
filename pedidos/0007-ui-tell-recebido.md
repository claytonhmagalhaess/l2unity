# Pedido 0007 — App.cs: registrar quem sussurrou (CreatureSay tipo 2)

| Campo | Valor |
|---|---|
| De | ui (tarefa #0011) |
| Para | coordenadora |
| Estado | aberto |
| Criado | 2026-10-29 |

## O que precisa

No tratador do CreatureSay (`On(0x4a, …)`, hoje em `App.cs:1566`), logo depois do `ParseCreatureSay`, registrar o nome de quem mandou um sussurro, para o `"` do chat virar `"<último> ` e as setas percorrerem os nomes (Spark `ChatWindow.RegistraTell`, chamada pelo `Distribui` em mensagem de sussurro recebida):

```csharp
var s = GamePackets.ParseCreatureSay(r);
// RegistraTell (#0011): quem sussurrou entra na frente da lista de nomes do chat
if (s.Type == 2 && s.ObjectId != world.SelfId) ui.RegisterTell(s.Name);
```

(Os nomes dos campos são os do `CreatureSayInfo`; ajustar se forem outros.)

## Por quê

Sem isso só os sussurros **enviados** entram na lista (a UI já registra no envio). Nada quebra.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
