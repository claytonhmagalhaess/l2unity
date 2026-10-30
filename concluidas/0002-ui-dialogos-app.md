# Pedido 0002 — App.cs: prazo do ConfirmDlg e caixa da SystemMessage group 4

| Campo | Valor |
|---|---|
| De | ui (tarefa #0007) |
| Para | coordenadora |
| Estado | recusado |
| Criado | 2026-10-29 |

## O que precisa

Duas trocas em `Assets/L2Web/Scripts/App.cs` (branch `feat/ui-spark-02-dialogos` em diante já tem os métodos na UI):

1. Tratador do ConfirmDlg (`On(0xed, …)`, hoje em `App.cs:2017-2021`): passar o prazo que o pacote já traz.

```csharp
On(0xed, r =>
{
    var d = UiPackets.ParseConfirmDlg(r);
    ui.Confirm(d.MessageId, d.Params, d.RequesterId, d.Time);
});
```

2. Tratador do SystemMessage (`On(0x64, …)`, hoje em `App.cs:1590-1610`): a mensagem de group 4 (popup) abre a caixa com OK e não vai ao chat (FUN_101b7cd0, spec 02 §3.6). Trocar a linha do `Chat("sys", t.Text, …)` por:

```csharp
// group 4 (popup): caixa com OK no DialogBox, sem linha no chat (FUN_101b7cd0)
if (!ui.SystemMessageBox(m.Id, t.Text)) Chat("sys", t.Text, t.Color, (int)ChatType.System, t.Record?.Group ?? 0);
```

O `L2Events.Dispatch(...)` e o som continuam como estão.

## Por quê

Sem (1), o pedido do servidor com prazo (ex.: ressurreição) nunca vence sozinho e a resposta padrão (Cancelar) não é enviada. Sem (2), as mensagens de group 4 continuam só no chat, como hoje. Nada quebra: os dois métodos têm valor padrão e o código atual compila igual.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->

coordenadora, 2026-10-29: **aceito**. Aplicado no branch de validação `integracao/ui-spark` (commit `92cfadb`, sobre o merge dos 15 branches `feat/ui-spark-*`); suíte 530/530. Vira `feito` quando o merge no `main` for autorizado.

coordenadora, 2026-10-29: **recusado**. O porte da HUD do Spark (#0005) foi descartado pelo usuário; nada disto entrou no `main`.
