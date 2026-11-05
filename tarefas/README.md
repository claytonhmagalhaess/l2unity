# Tarefas

Um arquivo por tarefa e um por pedido entre vagas. É o registro do que foi pedido, do andamento, das decisões e da entrega. O `..\TAREFAS.md` vira só o índice (uma linha por tarefa), mantido pela coordenadora.

```
tarefas\
├── _modelo.md                 modelo de tarefa
├── NNNN-<vaga>-<assunto>.md   tarefas abertas
├── pedidos\
│   ├── _modelo.md             modelo de pedido
│   └── NNNN-<de>-<assunto>.md
└── concluidas\                tarefas e pedidos encerrados (o histórico fica)
```

Numeração: a próxima tarefa usa o maior `NNNN` existente em `tarefas\` e `tarefas\concluidas\` + 1. Pedidos têm numeração própria.

## Quem escreve o quê

| Quem | Pode editar |
|---|---|
| Coordenadora | Cria as tarefas (a partir do `_modelo.md`), edita o `..\TAREFAS.md`, muda o estado para `no main` e `concluída`, move arquivos para `concluidas\`. |
| Sub-sessão | Só o arquivo da **própria** tarefa (Andamento, Decisões e REA, Entrega, estado até `pronta p/ merge`) e cria arquivos novos em `pedidos\`. |

Ninguém edita o arquivo de tarefa de outra sessão. Assim duas sessões nunca escrevem no mesmo arquivo.

## Estados de uma tarefa

| Estado | Quem marca | Significa |
|---|---|---|
| `aberta` | coordenadora | criada, ainda sem sessão |
| `fazendo` | sub-sessão | em andamento no branch |
| `bloqueada` | sub-sessão | parada esperando um pedido ou uma decisão (diga qual em Andamento) |
| `pronta p/ merge` | sub-sessão | a sessão acha que terminou; **ainda não está no jogo** |
| `no main` | coordenadora | merge feito e `run_tests.sh` rodado no `main` |
| `concluída` | coordenadora | todos os itens do Critério de pronto marcados; arquivo movido para `concluidas\` |

Conferência: uma tarefa só está no main se o branch dela aparece em `git -C ..\l2unity branch --merged main`.

## Estados de um pedido

`aberto` → `aceito` → `feito` (com o commit) ou `recusado` (com o motivo). Quem atende muda o estado; pedido `feito` ou `recusado` vai para `concluidas\`.

## Commits

Toda mudança aqui vira commit (`git -C tarefas`), com a mensagem `#NNNN: <o que mudou>`.
