# Pedido 0010 — App.cs: Start e Delete da seleção de personagem pelas regras da UI

| Campo | Valor |
|---|---|
| De | ui (tarefa #0019) |
| Para | coordenadora |
| Estado | recusado |
| Criado | 2026-10-29 |

## O que precisa

Em `Assets/L2Web/Scripts/App.cs`:

1. `Enter()` (hoje `App.cs:1364-1366`): trocar a primeira linha por

```csharp
if (gc == null) return;
// StartGamePressed (#0019): sem personagem = "Please select a character"; com ele toca game_start
if (!scrChars.TryStart(selectedSlot, chars.Count)) return;
```

2. `DeleteCharacter()` (hoje `App.cs:1209-1228`): trocar o "segundo clique em 5 s" pela confirmação no DialogBox (sm78 "Do you wish to delete $s1?"; marcado para exclusão, sm180 com os dias e o Restore):

```csharp
void DeleteCharacter()
{
    if (selectedSlot < 0 || selectedSlot >= chars.Count || gc == null) return;
    var c = chars[selectedSlot];
    var slot = selectedSlot;
    scrChars.AskDelete(c.Name, c.DeleteSeconds,
        () => gc?.Send(GamePackets.CharacterDelete(slot)),
        () => gc?.Send(GamePackets.CharacterRestore(slot)));
}
```

(o campo `deleteArmed` deixa de ser usado.)

O texto do prazo ao lado do nome (`CharSelectRules.DeletionText(segundos)`) é desenhado pela render na LobbyScene — já está no pedido 0001.

## Por quê

Sem (1) o Start sem personagem não avisa e o som de entrar não toca; sem (2) continua a confirmação improvisada do porte ("clique em Delete de novo") em vez da do Interlude. O Enter/Esc da tela já funcionam pela UI (`OnStart`/`OnReLogin`). Nada quebra.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->

coordenadora, 2026-10-29: **aceito**. Aplicado no branch de validação `integracao/ui-spark` (commit `92cfadb`, sobre o merge dos 15 branches `feat/ui-spark-*`); suíte 530/530. Vira `feito` quando o merge no `main` for autorizado.

coordenadora, 2026-10-29: **recusado**. O porte da HUD do Spark (#0005) foi descartado pelo usuário; nada disto entrou no `main`.
