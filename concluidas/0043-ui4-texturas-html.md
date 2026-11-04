# Pedido 0043 — Copiar para o `shared` as texturas `sek.*` e `Default.*` citadas pelos HTMLs do servidor

| Campo | Valor |
|---|---|
| De | ui4 (tarefa #0055) |
| Para | coordenadora |
| Estado | feito |
| Criado | 2026-11-04 |

## O que precisa

Rodar, da raiz do workspace (escreve só em `shared\StreamingAssets-L2Web\cache\ui`):

```
python -I worktrees\ui4\Docs\tools\copy_html_textures.py C:\Users\Clayton\workspace-claude\L2Unity-workspace
```

O script está no branch `feat/ui-html` (commit `dd93575`). Ele copia os PNGs que o `tools\l2anim\scripts\build_ui_sprites.py` já exportou em `tools\l2anim\out\tool\ui\sek\` (305) e `...\ui\default\` (104) para `cache\ui\sek\Texture\` e `cache\ui\default\Texture\`, e acrescenta as chaves `sek.<nome>`, `default.<grupo>.<nome>` e `default.<nome>` no `cache\ui\textures.json`, sem sobrescrever as que já existem. É idempotente. Testei num destino de rascunho: 409 chaves novas, `sek.cbui94` = `['/ui/sek/Texture/cbui94.png', 128, 32, 128, 32]`.

**Opcional** (só servidores privados, não é do Interlude): os pacotes `L2PvpZone`, `WeaponsPvp`, `l2atheris` e `l2ketralogo`, citados por 17 imagens dos merchants customizados do aCis local (`merchant\10004-10016.htm`), existem em `reference\l2-interlude\client\systextures\` mas não foram exportados. Para eles: acrescentar os nomes em `PACKAGES` do `build_ui_sprites.py` e rodar `python -I scripts\build_ui_sprites.py . <cliente>` em `tools\l2anim`, depois incluir os pacotes no `PACKAGES` do `copy_html_textures.py`.

## Por quê

Sem isso, os 738 botões `back="sek.cbui92" fore="sek.cbui94"` (painel do admin e várias páginas do servidor) aparecem com o botão genérico `btn1` no lugar da arte do cliente de referência, e o `Default.BlackTexture`/`WhiteTexture` (padrões do `<button>` sem back/fore) não existem. Os ícones `icon.*` e as texturas `L2UI*` já estão no `shared` e não dependem deste pedido. Nada quebra, só fica diferente do original.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
- 2026-11-04 — coordenadora: feito: `copy_html_textures.py` do `main`: 409 chaves novas (305 sek + 104 default), nenhuma alterada. `run_tests.sh` no `main`: 879/879 (`12a8e52`).
