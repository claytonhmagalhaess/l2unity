# Análises

Base de conhecimento central do projeto: o que se sabe dos clientes de referência (binários em `..\reference\`).
Uma cópia só, lida por todas as worktrees. Não é copiada nem tem branches por tarefa.

| Pasta | Cliente | Por onde começar |
|---|---|---|
| `l2-interlude\` | Interlude original (`..\reference\l2-interlude\client`), base do `l2unity` | `client_spec\00_indice.md` |
| `spark-l2unity\` | Cliente Unity do Project SPARK (`..\reference\spark-l2unity\client`), só para estudo | `README.md` |

## l2-interlude

| Caminho | Conteúdo |
|---|---|
| `client_spec\` | Especificação da interface, protocolo, eventos, iluminação e efeitos. Cobertura em `97_cobertura.md`, mapa de funções em `99_mapa_funcoes.md`. |
| `re\` | Evidências brutas: JSON extraídos, call graphs, pseudocódigo em `decomp_all\<módulo>\` + `index.tsv`, `function_map_<módulo>.json`. |
| `ghidra_proj\` | Projeto Ghidra (fora do git). |
| `ghidra_scripts\` | Scripts Ghidra usados na análise. |

O `tools\l2anim` gera e lê esses dados por junctions (`docs\client_spec`, `out\re`, `ghidra_proj`, `ghidra_scripts` apontam para cá).

Buscar no pseudocódigo:

```
python -I C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim\scripts\decomp_get.py C:\Users\Clayton\workspace-claude\L2Unity-workspace\analises\l2-interlude\re <módulo> "<regex>"
```

## Regras

- Leitura livre para todas as sessões. Escrita só por sessões de REA ou quando a tarefa for corrigir a spec.
- Toda mudança vira commit aqui (`git -C analises`), com o que mudou e a evidência.
