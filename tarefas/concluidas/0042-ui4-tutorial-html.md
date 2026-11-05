# Pedido 0042 — App.cs: despachar o TutorialShowHtml (0xa0) e o TutorialCloseHtml (0xa3)

| Campo | Valor |
|---|---|
| De | ui4 (tarefa #0055) |
| Para | coordenadora |
| Estado | feito |
| Criado | 2026-11-04 |

## O que precisa

Em `Assets\L2Web\Scripts\App.cs`, no bloco `// interface (Fase 9)`, logo depois do `On(0x6e, ...)` do ShowBoard, acrescentar:

```csharp
            // TutorialShowHtml 0xa0 "S" / TutorialCloseHtml 0xa3 (sem corpo): TutorialViewerWnd (#0055)
            On(0xa0, r =>
            {
                var html = r.S();
                LogHtmlLinks("tutorial", html);
                L2Events.Dispatch(PacketEvents.TutorialShowHtml(html));
            });
            On(0xa3, _ => L2Events.Dispatch(PacketEvents.TutorialCloseHtml()));
```

`PacketEvents.TutorialShowHtml` e `TutorialCloseHtml` estão no branch `feat/ui-html` (commit `4d735d9`), junto com a `TutorialViewerView`, que já está registrada no `GameUi`. Formato do pacote no aCis: `TutorialShowHtml.java` (`writeC(0xa0); writeS(_html)`) e `TutorialCloseHtml.java` (`writeC(0xa3)`); spec 94 linhas 187 e 190. Não precisa de parser na `Net`: o corpo é só uma string.

## Por quê

Sem isso, a janela do tutorial dos novatos (o "?" do aCis e as quests de tutorial) nunca abre: o 0xa0 chega e é descartado. O resto do porte continua funcionando. É só a janela que fica faltando.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
- 2026-11-04 — coordenadora: feito no `main` (`12a8e52`): handlers 0xa0 e 0xa3. `run_tests.sh` no `main`: 879/879 (`12a8e52`).
