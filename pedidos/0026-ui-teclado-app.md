# Pedido 0026 — `App.cs`: tecla pelo caminho do `HandleKeyboardInput` (#0033)

| Campo | Valor |
|---|---|
| De | ui (tarefa #0033) |
| Para | coordenadora |
| Estado | aberto |
| Criado | 2026-11-03 |

## O que precisa

No `Assets\L2Web\Scripts\App.cs`, `OnKey(Key key, bool alt, bool ctrl, bool shift)` (no `main` `0d71a77`, linha 2567), trocar a primeira consulta à tabela

```csharp
var action = L2Shortcuts.Find("GamingState", L2Shortcuts.Vk(key), ctrl, alt, shift);
if (action != null)
{
    RunCommand(action, ctrl, shift);
    return;
}
```

por

```csharp
// NConsoleWnd::HandleKeyboardInput (03 §1 da #0024): EnterChatting, prioridade dos modificadores, tabela do estado
var (kind, action) = L2Shortcuts.Handle("GamingState", L2Shortcuts.Vk(key), alt, shift, ctrl,
    L2Options.GetBool("Game", "EnterChatting", true), UiRoot.TypingInField());
if (kind == L2Shortcuts.KeyResult.ChatFocus)
{
    ui.Command("ChatWndSetFocus", new Dictionary<string, string>(), ctrl, shift);
    return;
}
if (kind == L2Shortcuts.KeyResult.Command)
{
    RunCommand(action, ctrl, shift);
    return;
}
```

O resto do `OnKey` (movimento, câmera, e as teclas do pedido 0024 da #0034) fica como está. Já está pronto no branch `feat/ui-teclado`: `L2Shortcuts.Handle`, o `KeyResult` e os comandos novos do `GameUi.Command` (`ChatWndSetFocus`, `ShowMacroListWindow`, `ApplyMinFrame`, `ShowGMPetitionWindow`).

Opcional, no mesmo `OnKey` ou no `Update` das telas de fora do jogo (pode ficar para depois):

- tela de login: `L2Shortcuts.Handle("LoginState", ...)` devolve `LoginFocus` para tecla de digitação sem caixa com foco (o nativo põe o foco na caixa de login);
- seleção de servidor: `Handle("ServerListState", 13, ...)` devolve `ServerSelectOKButton` (hoje o `App` trata o Enter à mão, `App.cs:2477-2478`).

## Por quê

Com a opção "Enter Chat" desligada (`EnterChatting=False`), o original manda toda tecla de digitação sem Alt para o chat (`EV_ChatWndSetFocus`) e ela não vira atalho; hoje as letras continuam abrindo janelas e os dígitos usando a barra. A regra precisa vir antes da tabela, e o `OnKey` é do `App.cs`. Sem o pedido nada quebra: com o "Enter Chat" ligado (o padrão) o resultado é o mesmo de hoje, e R, P e O passam a funcionar pela tabela do xdat assim que o branch entrar (o `ui.Command` já os trata).

Também muda: com três modificadores apertados (Alt+Shift+Ctrl), o nativo só considera os dois de maior prioridade (Alt e Shift); o `Find` atual exigia os três.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
