# L2Unity

Cliente Lineage II (Interlude) em Unity 6000.6.7f1 (URP, C#).

Monorepo espelho do workspace local, montado com `git subtree` (histórico completo de cada parte):

| Pasta | O que é |
|---|---|
| `l2unity/` | Projeto Unity (código, cenas, testes e documentação em `Docs/`). |
| `analises/` | Base de conhecimento: spec e engenharia reversa do cliente original e do Spark. |
| `tarefas/` | Uma página por tarefa e por pedido entre vagas; `concluidas/` guarda o histórico. |
| `CLAUDE.md`, `TAREFAS.md` | Regras do workspace e quadro de tarefas (cópias da raiz do workspace). |

Os assets (`StreamingAssets/L2Web`, ~6 GB) não ficam no git: vão para o Cloudflare R2.

A fonte da verdade é o workspace local; este repositório é atualizado por `sync.sh`.
