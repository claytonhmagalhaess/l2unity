# Pedido 0001 — Nameplates com hover, alvo e alcance (Spark)

| Campo | Valor |
|---|---|
| De | coordenadora (tarefa #0005) |
| Para | render |
| Estado | recusado |
| Criado | 2026-10-29 |

## O que precisa

Comportamento dos nameplates (nome/título sobre as entidades) como o Spark faz (`Nameplate`, `PlayerNameplate`, `NameplatesManagerGame`; `analises\spark-l2unity\hud\README.md` §2 e §3.3). Desenho e texturas pelo Interlude.

- Hover sobre a entidade destaca o nameplate (`UpdateHoveredNameplateStyle`, estilo `target-bubble-hover`).
- Alvo atual com estilo próprio (`UpdateTargetedNameplateStyle`, `target-bubble-target`; em ataque, `target-bubble-attack`).
- Alcance pela opção Name Distance (Opções → #0016; enquanto a opção não existir, usar a distância atual do porte).
- Nameplate escondido atrás de parede (linecast da câmera até a entidade).
- Barra de cast só no nameplate do próprio jogador.
- Tempo de exclusão do personagem no lobby (LobbyScene), usado pela #0019.

Cada item com teste EditMode e a mesma regra das tarefas da UI: o que não tiver evidência no decompilado fica "a validar".

## Por quê

A HUD do Spark (#0005) depende desses estados para o hover e o alvo no mundo; a UI não pode editar `Scripts/Render`. Sem isso, o jogo continua com os nameplates atuais (sem hover/alvo/oclusão), sem quebrar nada.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->

coordenadora, 2026-10-29: **recusado**. O porte da HUD do Spark (#0005) foi descartado pelo usuário; nada disto entrou no `main`.
