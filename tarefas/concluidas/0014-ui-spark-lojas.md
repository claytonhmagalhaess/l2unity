# #0014 — Lojas, troca e armazém

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-09-lojas` |
| Estado | cancelada (descartada pelo usuário em 2026-10-29; branches apagados, nada entrou no `main`) |
| Spec | `07_demais_janelas.md` |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Shop, Multisell, loja privada, troca e armazém só com pacotes do Interlude.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Shop com abas Buy/Sell; duplo clique ou arrasto para a cesta com quantidade; confirmação "{Buy/Sell} N item(s) for X Adena?"
- [ ] Multisell com custo "(have N)"
- [ ] Private Store; Trade (fechar cancela); Warehouse fecha sozinho fora do alcance
- [ ] Pacote final de compra, venda e multisell: o do Interlude (spec 95); o do Spark fica **a validar**
- [ ] Cada comportamento implementado tem teste EditMode em `Assets/L2Web/Tests/Editor` que simula o evento (clique, tecla, arrasto, pacote recebido) e confere o efeito na UI ou os bytes do pacote montado
- [ ] Entrega com a tabela **comportamento Spark → onde ficou no l2unity (`arquivo:linha`) → teste**, uma linha por comportamento desta tarefa
- [ ] Itens sem evidência no decompilado do Spark nem na spec do Interlude aparecem como **a validar**, com o que falta, sem valor inventado
- [ ] Divergências Interlude × Spark registradas em "Decisões e REA"; o comportamento do Interlude fica valendo até o usuário confirmar o do Spark
- [ ] Nenhum pacote exclusivo do servidor Spark é enviado (decisão 3): o gesto existe, sem envio, marcado "pendente de decisão"
- [ ] Nada copiado do Spark (UXML, USS, texturas, código decompilado): uGUI montado em código no estilo de `Scripts/UI`; layout e texturas do `Interface.xdat`/spec do Interlude
- [ ] `sh Docs/tools/run_tests.sh` sem falhas novas; total de testes na Entrega

## Fontes

- `analises\spark-l2unity\hud\README.md` (inteiro; §1 arquitetura, §3 comportamento)
- `analises\spark-l2unity\hud\events.md`, `hud\code_summaries.md`, `hud\code\*.c` (confirmar cada detalhe)

## Andamento

- 2026-10-29 — branch `feat/ui-spark-09-lojas` saído da ponta do `08` (`6ecd2e3`).
- 2026-10-29 — `Scripts/UI/UiShop.cs` (ShopBasket); a BuyList/SellList passa a abrir a `ShopWnd` do Interface.xdat (antes uma janela genérica com campos); `MultiSellListCtrl.NeededText` com o "(have N)" do Spark atrás de chave; `SparkParity.ShopConfirm`/`MultisellHave`; 6 testes em `SparkShopTests.cs` (`2326fb9`).
- 2026-10-29 — coordenadora: **cancelada a pedido do usuário** ("não ficou bom"). Branches `feat/ui-spark-*` e `integracao/ui-spark` apagados sem merge, worktrees e sub-sessões excluídas, `shared\...\client\spark_hud\` apagada.

## Decisões e REA

- **Fonte**: `ShopWnd.uc` do Interlude (`MoveItemTopToBottom`/`MoveItemBottomToTop`, `HandleDialogOK`, `HandleOKButton`, `AddPrice`) e `ShopWindow`/`MultisellWindow` do Spark (literais).
- **Cesta (Interlude)**: duplo clique ou arrastar move entre a lista de cima e a de baixo; empilhável com quantidade ≠ 1 pede a quantidade (NumberPad **sm72**, `DialogSetDefaultOK` = Enter confirma); na venda o máximo é o que se tem e sai da lista de cima, na compra não há máximo e a lista do NPC não muda; empilhável soma na mesma linha da cesta; 0 não move; o preço soma (`AddPrice`, nunca negativo). OK: compra com item limitado acima do limite = **sm1338** e nada sai; senão `RequestBuyItem 0x1f` (classID, quantidade) / `RequestSellItem 0x1e` (serverID, classID, quantidade). Cancel limpa e fecha.
- **Divergência abas**: o Spark tem uma janela com abas Buy/Sell; o Interlude abre a `ShopWnd` no modo do pacote recebido (BuyList ou SellList, `m_shopType`). Vale o do Interlude (layout do xdat, sem abas).
- **Divergência confirmação**: o Spark pergunta "{Buy/Sell} N item(s) for X Adena?" (`'{0} {1:n0} item(s) for {2:n0} Adena?'`) antes de mandar; o Interlude manda no OK. Ficou `SparkParity.ShopConfirm` = false. **Aguarda o usuário.**
- **Divergência multisell**: o Spark mostra o custo como `'{0:n0}  (have {1:n0})'`; o `MultiSellWnd` do Interlude mostra "x N". Ficou `SparkParity.MultisellHave` = false. **Aguarda o usuário.**
- **Empilhável**: o `ConsumeType` não vem no BuyList do porte; ficou `type2 ≥ 3` (quest/adena/outros) e, na venda, também quantidade > 1 (**a validar** pelo tipo do item).
- **Peso** (`InvenWeight` da ShopWnd, `AddWeight`/`ReduceWeight`): **a validar** — o porte não tem o peso de cada item no BuyList; não desenhado.
- **Troca**: fechar a janela de troca manda `TradeDone(0)` 0x17 (já no `SocialUi`).
- **Loja privada**: já existe no `SocialUi` como janela genérica; a `PrivateShopWnd` do xdat e o comportamento do Spark (Package Sale, Wanted Items) ficam fora desta tarefa (**a validar**/nova tarefa).
- **Armazém**: o porte não tem a `WarehouseWnd`; "fecha sozinho fora do alcance" do Spark não tem o raio na REA → **a validar**. Fica para uma tarefa da janela.
- **Pacote final**: o do Interlude (spec 95). O do Spark (o que o `ShopWindow` manda) não aparece nos literais lidos → **a validar**.

## Entrega

- **Commits:** `2326fb9` UI: ShopWnd do xdat com a cesta do Interlude (quantidade, preco, limite) e os textos do Spark atras de chave.
- **Testes:** `sh Docs/tools/run_tests.sh` → total 508, passou 508, falhou 0 (+6 em `SparkShopTests`).
- **Tabela comportamento Spark → l2unity → teste:**

| Comportamento Spark | Onde no l2unity | Teste (`SparkShopTests`) |
|---|---|---|
| Duplo clique/arrasto para a cesta com quantidade | `Scripts/UI/UiShop.cs:36`, `UiShop.cs:59`, `GameUi.Windows.cs:198` | `Compra_UnicoVaiDireto_EmpilhavelPedeQuantidadeESoma`, `ShopWnd_CompraMandaRequestBuyItem` |
| Voltar da cesta | `UiShop.cs:78`, `GameUi.Windows.cs:217` | `Compra_*`, `Venda_TiraDoInventarioEVolta` |
| Venda tira do inventário / limita ao que tem | `UiShop.cs:59` | `Venda_TiraDoInventarioEVolta` |
| Compra/venda → RequestBuyItem 0x1f / RequestSellItem 0x1e | `GameUi.Windows.cs:240` | `ShopWnd_CompraMandaRequestBuyItem`, `ShopWnd_VendaELimiteEConfirmacaoDoSpark` |
| Limite do item (sm1338) | `UiShop.cs:99`, `GameUi.Windows.cs:240` | `Limite_E_TextosDoSpark`, `ShopWnd_VendaELimiteEConfirmacaoDoSpark` |
| Confirmação "{Buy/Sell} N item(s) for X Adena?" (desligada) | `UiShop.cs:106`, `UiInteract.cs:57` | `Limite_E_TextosDoSpark`, `ShopWnd_VendaELimiteEConfirmacaoDoSpark` |
| Multisell "(have N)" (desligado) | `UiShop.cs:110`, `MultiSellView.cs:161`, `UiInteract.cs:60` | `Limite_E_TextosDoSpark` |
| Troca: fechar cancela | `SocialUi.cs:80` (já existia) | `Troca_FecharCancela` |
| ShopWnd do xdat (sem abas) | `GameUi.Windows.cs:140`, `GameUi.Windows.cs:159`, `GameUi.Windows.cs:269`, `GameUi.Windows.cs:280` | `ShopWnd_*` |

- **Falta / fora do escopo:**
  - **Aguardam o usuário**: `SparkParity.ShopConfirm`, `SparkParity.MultisellHave`.
  - A validar: empilhável pelo tipo do item, peso na ShopWnd, raio do armazém, pacote final do Spark.
  - `WarehouseWnd` e `PrivateShopWnd` do xdat: não existem no porte (proposta: tarefa própria).

## Pedidos

- nenhum.
