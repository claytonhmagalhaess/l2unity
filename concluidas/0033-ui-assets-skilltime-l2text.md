# Pedido 0033 — Assets da interface no shared: L2_SkillTime e os .htm de ajuda

| Campo | Valor |
|---|---|
| De | ui (tarefa #0047) |
| Para | coordenadora |
| Estado | aberto |
| Criado | 2026-11-04 |

## O que precisa

Rodar uma vez, com o `shared\` gravável (a vaga ui não escreve lá):

```
python -I worktrees\ui\Docs\tools\copy_ui_assets.py C:\Users\Clayton\workspace-claude\L2Unity-workspace
```

O script (branch `feat/ui-revisao`, `Docs/tools/copy_ui_assets.py`) é idempotente e faz duas coisas:

1. Copia os 382 PNG do `L2_SkillTime`, já exportados pelo `build_ui_sprites.py` em `tools\l2anim\out\tool\ui\l2_skilltime\{ToggleEffect,Rotation_Type,CooltimeEnd}\`, para `shared\StreamingAssets-L2Web\cache\ui\l2_skilltime\Texture\`. Depois acrescenta ao `cache\ui\textures.json` as chaves `l2_skilltime.<grupo>.<nome>` e `l2_skilltime.<nome>` (formato `[url, 32, 32, 32, 32]`, igual às outras).
2. Copia os 111 `help*.htm` e `pet_help*.htm` de `reference\l2-interlude\client\l2text\` para `shared\StreamingAssets-L2Web\client\l2text\`. Eles continuam cifrados (Lineage2Ver111), e o `LobbyServerScreen.ReadL2Text` decifra, como já faz com o `server_help.htm`.

Testei contra uma cópia do `textures.json` no scratchpad da sessão: 382 texturas e 111 arquivos.

## Por quê

- **Barra de atalhos** (o que o usuário relatou): a animação sobre o slot do soulshot automático e da skill de liga e desliga é o `ToggleEffect001..013`. A varredura de recarga é o `cooltime0..359`, e o brilho final é o `CooltimeEnd001..009` (`NCShortcutItemWnd::OnPaint` nw:0x10047b40, commit `d2dc954`). Sem as texturas, o código roda mas não desenha nada: o slot fica sem a animação, como hoje.
- **System Menu → Help** e os links de ajuda da Macro: a `HelpHtmlWnd` abre o `..\L2text\help.htm`. **System Menu → Petition**: cada categoria carrega um `pet_help_*.htm`. Sem os arquivos, as janelas abrem vazias.

Nada quebra sem o pedido: as janelas só ficam sem conteúdo.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
