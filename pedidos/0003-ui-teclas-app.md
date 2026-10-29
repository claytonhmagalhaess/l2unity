# Pedido 0003 — App.cs: tecla passa pela UI antes da tabela do xdat; ações de jogo do mapa de teclas

| Campo | Valor |
|---|---|
| De | ui (tarefa #0008) |
| Para | coordenadora |
| Estado | aberto |
| Criado | 2026-10-29 |

## O que precisa

Duas trocas em `Assets/L2Web/Scripts/App.cs` (os métodos existem na UI a partir do branch `feat/ui-spark-03-teclado`):

1. No laço das teclas do quadro (hoje `App.cs:2551-2556`, o `foreach (var key in kb.allKeys)` que chama `OnKey`), deixar a UI ver a tecla primeiro:

```csharp
foreach (var key in kb.allKeys)
{
    if (key == null || !key.wasPressedThisFrame) continue;
    // mapa de teclas do Spark e captura de tecla das Opções (#0008); false = segue para a GamingStateShortcut
    if (ui.Key(new KeyEvent(key.keyCode, alt, ctrl, shift))) continue;
    OnKey(key.keyCode, alt, ctrl, shift);
}
```

2. Em `new UiDeps { … }` (hoje `App.cs:127-149`), ligar as ações do mapa de teclas que são do App:

```csharp
GameAction = act =>
{
    switch (act)
    {
        case "Attack":     // F: ataca o alvo atual (RequestAttack com a posição do próprio pawn)
        case "TargetSelf": // T: RequestAction no próprio objectId
        case "NextTarget": // sem tecla padrão
        case "Mute":       // ".": liga/desliga todo o som (sfx + música); mensagem "Sound muted. Press . again." / "Sound on."
        case "LowDetail":  // Alt+P: o ApplyMinFrame do Interlude, se existir no App
            return false;   // <- trocar por cada implementação; false deixa a tecla seguir para a tabela do xdat
        default:
            return false;
    }
},
```

Cada `case` pode virar `return true` assim que o App tiver a implementação; até lá a tecla segue como hoje.

## Por quê

Sem (1), nada do mapa de teclas do Spark nem a captura de tecla funciona no jogo (a UI nunca recebe a tecla); com `SparkParity.Keymap` desligada (padrão), a UI só trata as teclas que a GamingStateShortcut do Interlude não usa (Alt+L, ".", ","), então o comportamento atual não muda. Sem (2), Attack/TargetSelf/NextTarget/Mute/LowDetail ficam sem efeito. Nada quebra: `GameAction` tem padrão `_ => false`.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
