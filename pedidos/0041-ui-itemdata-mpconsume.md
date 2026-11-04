# Pedido 0041 — itemdata.json reexportado do cliente atual (itens customizados e mp_consume)

| Campo | Valor |
|---|---|
| De | ui (tarefa #0050) |
| Para | coordenadora |
| Estado | aberto |
| Criado | 2026-11-04 |

## O que precisa

Regerar `shared\StreamingAssets-L2Web\cache\itemdata.json` a partir do `weapongrp`, do `armorgrp` e do `ItemName-e` do cliente que está no `shared`. Hoje ele sai de `tools\l2anim\txt`, que foi exportado de um cliente mais antigo.

Rode com o `export_itemdata.py` do branch `feat/ui-tooltip-multisell` (commit `55350f5` ou depois), porque ele também grava a coluna `mp_consume` das armas. Os comandos foram testados numa pasta temporária.

Para não mexer nos `.txt` que o `build_data.py` do l2anim usa, a exportação vai para uma pasta nova, `txt-cliente`:

```sh
W=/c/Users/Clayton/workspace-claude/L2Unity-workspace
D=/c/Users/Clayton/L2FileEdit/data/l2asm-disasm
mkdir -p $W/tools/l2anim/txt-cliente && cd $W/tools/l2anim/txt-cliente
for f in armorgrp weapongrp ItemName-e; do
  python -I $W/tools/l2anim/scripts/l2dec413.py $W/shared/StreamingAssets-L2Web/client/System/$f.dat $f.dat
  "$D/l2disasm.exe" -d "$D/DAT_defs/Interlude/$f.ddf" $f.dat $f.txt
done
cd $W/worktrees/<pasta com o branch>
python -I Docs/tools/export_itemdata.py "C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim\txt-cliente" "C:\Users\Clayton\workspace-claude\L2Unity-workspace\shared\StreamingAssets-L2Web\cache\itemdata.json"
```

Para conferir:
- a saída deve dizer `armas 2014 armaduras 1908 nomes 9766`;
- `j["a"]["9516"]` deve começar por `[7620, 46, …]` e ter P. Def. 186 no índice 6;
- `j["w"]["13"][14]` deve ser 1;
- nenhuma das 1014 armaduras e 1313 armas antigas muda (conferido no teste).

## Por quê

- **Itens customizados (a causa do "P. Def. 0 / Weight 0" que o usuário viu).** O cliente do `shared` (igual ao `reference`) tem 1908 armaduras, 2014 armas e 11059 nomes. O `tools\l2anim\dec`/`txt` tem 1014, 1313 e 9208. Os itens customizados do servidor (ex. 9510–9584 da `custom-a-s-grade-armor`, a "Draconic Leather Armor" 9516) não estão no `itemdata.json`. Com isso, o painel "Item information" e o tooltip da lista saem com P. Def. 0 e Weight 0, e o inventário também perde os atributos desses itens.
- **mp_consume.** A linha "MP Consume" (ss320) do tooltip das armas que gastam MP (os arcos) só aparece com a coluna.

O código não quebra sem o pedido: o `ItemStats` só lê a coluna 14 quando ela existe. A diferença é só nos dados que aparecem.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
