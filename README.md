# L2Unity

Cliente Lineage II (Interlude) em Unity 6000.6.7f1 (URP, C#).

Monorepo espelho do workspace local, montado com `git subtree` (histórico completo de cada parte):

| Pasta | O que é |
|---|---|
| `l2unity/` | Projeto Unity (código, cenas, testes e documentação em `Docs/`). |
| `analises/` | Base de conhecimento: spec e engenharia reversa do cliente original e do Spark. |
| `tarefas/` | Uma página por tarefa e por pedido entre vagas; `concluidas/` guarda o histórico. |
| `CLAUDE.md`, `TAREFAS.md` | Regras do workspace e quadro de tarefas (cópias da raiz do workspace). |

## Assets

Os assets (`StreamingAssets/L2Web`, ~6 GB, ~105 mil arquivos) não ficam no git: ficam no bucket privado `l2unity-assets`
do Cloudflare R2. Para baixar, com Python 3 (nada para instalar):

```sh
cd l2unity
python -I Docs/tools/r2_assets.py baixar
```

Eles vão para `l2unity/Assets/StreamingAssets/L2Web`. As credenciais ficam em `l2unity/env/r2-leitura.env`
(`R2_ACCOUNT_ID`, `R2_BUCKET`, `R2_ACCESS_KEY_ID`, `R2_SECRET_ACCESS_KEY`); variáveis de ambiente com esses nomes têm
preferência. `status` compara a pasta com o bucket e `enviar` sobe o que mudou. Rodar de novo só transfere o que falta.

A fonte da verdade é o workspace local; este repositório é atualizado por `sync.sh`.
