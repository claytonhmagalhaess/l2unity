# Pedido 0041 — itemdata.json com o mp_consume das armas

| Campo | Valor |
|---|---|
| De | ui (tarefa #0050) |
| Para | coordenadora |
| Estado | aberto |
| Criado | 2026-11-04 |

## O que precisa

Regerar `shared\StreamingAssets-L2Web\cache\itemdata.json` com o `export_itemdata.py` do branch `feat/ui-tooltip-multisell` (commit `55350f5`). Ele acrescenta `mp_consume` como 15ª coluna das armas (`wcols`). Rode a partir de uma pasta com esse branch (ou depois do merge):

```sh
python -I Docs/tools/export_itemdata.py "C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim\txt" "C:\Users\Clayton\workspace-claude\L2Unity-workspace\shared\StreamingAssets-L2Web\cache\itemdata.json"
```

Para conferir: a saída deve dizer `armas 1313 armaduras 1014`, e `j["w"]["13"][14]` deve ser 1.

## Por quê

O tooltip "Inventory" do `ToolTip.uc` mostra "MP Consume" (ss320) nas armas que gastam MP (93 arcos no `weapongrp`). O `GetItemInfo` da lista da multisell e o inventário copiam esse campo. Sem a coluna, a linha não aparece. Nada quebra: o `ItemStats` só lê a coluna 14 quando ela existe.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
