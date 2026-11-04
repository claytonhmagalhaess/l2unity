# #0043 — Fabricação: `Recipe*` (6 janelas) (T19)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-fabricacao` |
| Estado | pronta p/ merge |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T19; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

Fabricação: `Recipe*` (6 janelas), com o comportamento do Interlude levantado na #0024 (T19 do 05 §2). Tamanho estimado: G.

Ordem: 18ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-skill-henna` (#0039). Depende de: T1, T3.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: livro de receitas, fabricar, loja de fabricação.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes (S→C `RecipeBookItemList` 0xd6, `RecipeShopManageList` 0xd8 e os `Recipe*`; C→S `RequestRecipeBookOpen` 0xac, `RequestRecipeItemMakeSelf` 0xaf…) lidos e montados pelo código da #0046 (vaga `net`), depois que ela estiver no `main`; o que faltar lá vira pedido em `tarefas\pedidos\`, sem editar `Scripts\Net\`.
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/fabricacao/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — bloqueada: aguardando #0046 no main. S→C `RecipeBookItemList` 0xd6 / `RecipeShopManageList` 0xd8 e C→S `RequestRecipeBookOpen` 0xac / `RequestRecipeItemMakeSelf` 0xaf não existem no `main`. Branch não criado (a vaga seguiu para a próxima tarefa da cadeia sem pacote novo).
- 2026-11-04 — branch `feat/ui-fabricacao` criado de `feat/ui-mensagens-tela` (o anterior da cadeia).
- 2026-11-04 — `RecipeData` (recipe-c.dat), scripts e `RecipeView` das 6 janelas, `GameUi.RecipeName`, `RecipeTests` (`8be034d`).
- 2026-11-04 — `sh Docs/tools/run_tests.sh`: 701/701 (exit 0).
- 2026-11-04 — capturas offline e linha K30 (`1efb192`). aCis fora do ar.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

- [O] `recipe-c.dat`: d n; por receita: ASCF nome, d id, d item da receita, d nível, d produto, d quantidade, d MP, d chance, d m, m × (d id, d qtd); 871 receitas e 13 bytes de rodapé. Não tem o tipo (comum/anão): o livro só usa o Type do pacote.
- [O] RecipeBookWnd: `EV_RecipeShowBookWnd` limpa, vai para a posição da RecipeManufactureWnd e põe o título 1214 (Type 1) ou 1215; o slot tem o ClassID do item da receita, o ServerID = id da receita e o ícone do produto; "(n/max)" com o `EV_SetMaxCount` (recipe/dwarvenRecipe); duplo clique = `RequestRecipeItemMakeInfo`; lixeira (selecionado) ou soltar nela = Warning sm74 com o nome e, no OK, `RequestRecipeItemDelete`.
- [O] RecipeManufactureWnd e RecipeBuyManufactureWnd: o mesmo desenho; fecham a janela de onde vieram e tomam a posição dela; nome = produto + "`grau`"; MP, chance "%", resultado, quantidade do produto no inventário; sm960 (falhou) ou sm959 (n feitos); materiais com a quantidade do inventário, desligados com menos do que pedem, e relidos no `EV_InventoryAdd/UpdateItem` pelo classID; barra de MP = 165 × MP / max (no máximo 165) pelo `EV_UpdateMP` do próprio jogador ou do dono da loja; Create = `RequestRecipeItemMakeSelf` ou `RequestRecipeShopMakeDo(dono, id, adena)`; Back = `RequestRecipeBookOpen(tipo)` ou `RequestRecipeShopSellList(dono)`; o botão de árvore alterna a RecipeTreeWnd.
- [O] RecipeShopWnd: título 1212/1213; duplo clique no livro tira da loja se já estiver, senão pede a taxa (NumberPad sm963, ParamInt −1, DefaultOK); taxa ≥ 2.000.000.000 = Warning sm1369; o mesmo ClassID não entra duas vezes; duplo clique ou arrastar para o livro tira; setas: ↑ tira a escolhida da loja, ↓ pede a taxa da escolhida do livro; "(n/20)"; Msg = OKCancelInput sm334 até 29 com o título atual; Start = `RequestRecipeShopListSet` (id, taxa); End e fechar pela moldura = `RequestRecipeShopManageQuit`.
- [O] RecipeBuyListWnd: título "ss663 - nome do dono", barra de MP, adena com o número por extenso; nó do id com ícone (BlackTexture sem ícone), nome do produto e "ss641 : taxa" na cor do número; clique = `RequestRecipeShopMakeInfo(dono, Mid(nome, 5))`.
- [O] RecipeTreeWnd: nome + grau, MP, chance, "Lv.n"; o produto com receita vira nó com botão (TreePlus/TreeMinus), ícone e o nome do item da receita, e os materiais "(tem/precisa)" com o fundo ChatBack sem o bastante; material sem receita = item simples.
- [I] `GetRecipe*By2Condition`: a receita do produto com a chance pedida; para os materiais (sem chance), a do produto, de preferência a de 100%.
- [I] `GetRecipeShopMsg`: o porte não guarda o título da própria loja (`GameUi.RecipeShopMsg` começa vazio); a dica da lista da loja de outro saiu como texto (nome e taxa).
- `GameUi.RecipeName` agora dá o nome do item da receita (dica e arrasto do atalho de receita).

## Entrega

- **Commits:** `8be034d` (código e `RecipeTests`), `1efb192` (evidências e K30).
- **Testes:** `RecipeTests` (recipe-c.dat do cliente; livro e apagar; fabricar com MP, chance e materiais; loja com taxa, limite e repetidos; lista da loja de outro; árvore); `sh Docs/tools/run_tests.sh` 701/701.
- **Falta / fora do escopo:** título da própria loja (`GetRecipeShopMsg`); teste ao vivo no aCis (anão com receitas).

## Pedidos

Nenhum por enquanto.
