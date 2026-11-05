# L2Unity-workspace

Cliente Lineage II (Interlude) em Unity 6000.6.7f1 (URP, C#), com várias sessões do Claude trabalhando em paralelo: uma coordenadora e uma sub-sessão por vaga (worktree git).

## Estrutura

| Pasta | O que é | Git |
|---|---|---|
| `l2unity\` | Repo do código, branch `main`. Só recebe merges, ninguém desenvolve aqui. | sim |
| `worktrees\<vaga>\` | Vagas fixas `net`, `ui`, `render`, `world`: worktrees do `l2unity` com a Library do Unity já importada. Cada tarefa usa um branch `feat/*` novo. | sim |
| `analises\` | Base de conhecimento central (uma cópia, lida por todas as vagas): `l2-interlude\` (spec + REA do cliente original; comece por `client_spec\00_indice.md`) e `spark-l2unity\` (REA do cliente Spark). Ver `analises\README.md`. | sim, próprio |
| `reference\` | Só binários dos clientes de referência: `l2-interlude\client\` e `spark-l2unity\client\`. | não |
| `shared\StreamingAssets-L2Web\` | Os ~10 GB de assets; cada vaga e o `l2unity` têm uma junction em `Assets\StreamingAssets\L2Web` para cá. | não |
| `tools\l2anim\` | Ferramenta de exportação (modelos, animações, dados). `docs\client_spec`, `out\re`, `ghidra_proj` e `ghidra_scripts` são junctions para `analises\l2-interlude`. | não |
| `TAREFAS.md` | Quadro de tarefas, vagas e pedidos entre vagas. Depois da migração, vira só o índice (uma linha por tarefa). | não |
| `tarefas\` | Um arquivo por tarefa e por pedido, com andamento, decisões e entrega; `concluidas\` guarda o histórico. Regras e estados em `tarefas\README.md`. | sim, próprio |
| `github-mono\` | Monorepo espelho no GitHub (`claytonhmagalhaess/l2unity`, privado): `l2unity/`, `analises/` e `tarefas/` por `git subtree`, mais o `CLAUDE.md` e o `TAREFAS.md`. Só a coordenadora mexe aqui, com `sh github-mono/sync.sh` depois de um merge. Ninguém desenvolve nele: a fonte da verdade são os três repos locais. | sim, próprio |

Regras de cada área ficam no repo, em `l2unity\Assets\L2Web\Scripts\<Area>\CLAUDE.md`. Convenções de port em `Assets\L2Web\PORTING.md`. O `C:\Users\Clayton\projeto\l2web` (versão em TS) não é mais usado.

## Regras para todas as sessões

- Trabalhe só na sua vaga e na sua área. Precisa de algo fora dela: registre em "Pedidos entre vagas" no `TAREFAS.md`.
- Arquivos compartilhados são da coordenadora: `ProjectSettings\`, `Packages\manifest.json`, `Assets\Scenes\`, `Assets\L2Web\Scripts\App.cs` e os demais scripts da raiz de `Scripts\`. Peça em vez de editar.
- `reference\` e `shared\` são somente leitura. Não execute os binários de `reference\*\client\` nem conecte aos servidores do Spark.
- `analises\` é leitura livre; escreva só se a tarefa for de REA ou de correção da spec, e faça commit lá (`git -C analises`). As junctions do `tools\l2anim` apontam para os mesmos arquivos: apagar ali apaga a análise.
- Use caminhos relativos à vaga. `compile.sh`, `e2e.sh` e `Docs/tools/run_tests.sh` descobrem a pasta sozinhos.
- **Unity só na sessão de testes** (veja "Testes" abaixo). As sessões de vaga não abrem o Editor e não rodam `compile.sh`, `e2e.sh` nem `run_tests.sh`. Em vez disso, fazem commit no branch e mandam um pedido de teste.

## Testes

Uma sessão só, a de testes, abre o Unity, na pasta `worktrees\teste`. Ela atende os pedidos um por vez, na ordem de chegada.

- **Pedido** (por `SendMessage` para a sessão de testes; o id está na linha `teste` do quadro de vagas do `TAREFAS.md`):
  - a tarefa e o branch, com o commit já feito (`git log -1`);
  - o que rodar: compilar, a suíte EditMode inteira ou um filtro (`-testFilter`), e/ou um roteiro ao vivo no aCis local com o passo a passo do `e2e.sh` e as capturas desejadas;
  - o que se espera ver.
- **Resposta:** a sessão de testes devolve à sessão que pediu os erros de compilação, o total, as falhas, os logs e as capturas. Os arquivos ficam em `testes\<tarefa>-<n>\`, fora do git. Quem pediu copia o que precisa para `Docs/evidencias/` do próprio branch.
- A sessão de testes não edita código nem faz commit em branch de tarefa. Ela só faz checkout do commit pedido (detached) na `worktrees\teste`.
- **Ao vivo:** só no aCis local, com as contas de teste do projeto (nunca a do usuário), um login por vez.
- **Unity do usuário:** o Editor que o usuário abre para jogar é dele. Nenhuma sessão para o Play nem fecha esse Editor sem a confirmação dele.

## Transição para `tarefas\`

As tarefas que já estavam em andamento continuam no `TAREFAS.md`, do jeito de antes, até a coordenadora migrá-las (quando o usuário pedir). Tarefas criadas depois da migração seguem `tarefas\README.md`: a coordenadora cria `tarefas\NNNN-<vaga>-<assunto>.md` a partir do `_modelo.md` com o Critério de pronto, e a sub-sessão só edita o arquivo da própria tarefa e cria pedidos em `tarefas\pedidos\`. Até lá, os passos abaixo valem como estão.

## Fluxo de uma tarefa (sub-sessão)

1. Leia a sua linha no `TAREFAS.md`, o `CLAUDE.md` da sua área e a spec indicada.
2. `git switch -c feat/<vaga>-<assunto> main` (a vaga começa em `main`, sem branch).
3. Implemente, rode os testes da área e faça commits pequenos no branch.
4. Ao terminar: marque `pronta p/ merge` no `TAREFAS.md` e escreva em "Notas" o que ficou pronto, os testes rodados e o que falta.

## Sessão coordenadora (aberta na raiz `L2Unity-workspace`)

A coordenadora não programa: distribui tarefas, acompanha, cuida dos arquivos compartilhados e junta o trabalho.

- **Dar uma tarefa:** registre-a no `TAREFAS.md` e inicie a sub-sessão com `cwd` = `C:\Users\Clayton\workspace-claude\L2Unity-workspace\worktrees\<vaga>` e **sem criar worktree nova** (`use_worktree: false`), porque a pasta já é uma. Nunca duas sessões na mesma vaga. No brief: a tarefa, a área, a spec, o nome do branch e como saber que terminou.
- **Acompanhar:** `git -C l2unity log main..feat/<x>` e `git -C l2unity diff main...feat/<x>`.
- **Merge** (só quando o usuário pedir): em `l2unity`, `git merge feat/<x>`, rode `sh Docs/tools/run_tests.sh`, apague o branch e devolva a vaga com `git -C worktrees\<vaga> switch --detach main`. Marque `no main` no quadro.
- **Atualizar uma vaga em uso** com o que já entrou no `main`: `git -C worktrees\<vaga> merge main`.
- **Vaga nova:** `git -C l2unity worktree add --detach ..\worktrees\<vaga> main`, depois a junction:
  `New-Item -ItemType Junction -Path worktrees\<vaga>\Assets\StreamingAssets\L2Web -Target C:\Users\Clayton\workspace-claude\L2Unity-workspace\shared\StreamingAssets-L2Web`
  A primeira abertura no Unity reimporta a Library (~8 GB, demora).
