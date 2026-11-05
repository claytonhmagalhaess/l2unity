# #0013 — NpcHtml

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-08-npchtml` |
| Estado | cancelada (descartada pelo usuário em 2026-10-29; branches apagados, nada entrou no `main`) |
| Spec | `07_demais_janelas.md` (NpcHtmlWnd), `89_telas_nativas.md` |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Conferir o `NpcHtmlWnd`/`L2Html` contra o comportamento do `SparkHtml` e fechar as diferenças.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Tags: a, button, edit, multiedit, combobox, img, table, font, center, br/p/hr, title
- [ ] Entidades &#N; &$N; &nbsp; e as demais que o SparkHtml trata
- [ ] Hover em links e botões; $var dos campos substituídos na ação
- [ ] msg="id;param" pede confirmação antes de enviar
- [ ] bypass → RequestBypassToServer 0x21; link → RequestLinkHtml 0x20; a rolagem volta ao topo a cada página
- [ ] Bypass `spk_loot` (Spark) não é enviado
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

- 2026-10-29 — branch `feat/ui-spark-08-npchtml` saído da ponta do `07` (`88bc942`).
- 2026-10-29 — conferência do `L2Html` contra o `SparkHtml`/`NpcHtmlWindow` (literais da REA); entraram `&$N;`, `msg="id;param"` com confirmação e o bloqueio do bypass `spk_loot`; 7 testes em `SparkHtmlTests.cs` (`6ecd2e3`).
- 2026-10-29 — coordenadora: **cancelada a pedido do usuário** ("não ficou bom"). Branches `feat/ui-spark-*` e `integracao/ui-spark` apagados sem merge, worktrees e sub-sessões excluídas, `shared\...\client\spark_hud\` apagada.

## Decisões e REA

- **Tags**: `a`, `button`, `edit`, `multiedit`, `combobox`, `img`, `table`/`tr`/`td`, `font`, `center`, `br`/`br1`/`p`/`hr`, `title` já estavam no `L2Html` (NCHtmlTagInfo do Interlude). O Spark trata as mesmas (literais `<a `, `<button `, `<edit`, `<combobox`, `<img`, `<table`, `<td…>`, `<center>`, `<p>`, `<br`, `<br1`, `<title`, `hr`, `multiedit`, `font color=`). Nada de layout mudou.
- **Entidades**: o Spark trata `&#(\d+);`, `&\$(\d+);` (`ReplaceSysStrings`), `&amp;`, `&gt;`, `&lt;`, `&nbsp;`, `&quot;`. Faltava `&$N;` → **sysstring N** (`GameData.SysString`; desconhecida fica como veio). `&nbsp;` segue como espaço não separável (U+00A0).
- **$var**: os campos `edit`/`multiedit`/`combobox` trocam `$nome` na ação (já existia; o Spark usa `\$(\w+)`).
- **msg="id;param"**: literal `msg` no `NpcHtmlWindow` do Spark e atributo do HTML do Interlude: pergunta a sysmsg `id` com os parâmetros (diálogo da #0007) e só manda a ação no OK. Faltava; entrou em links e botões.
- **Pacotes**: bypass → `RequestBypassToServer 0x21`, `link` → `RequestLinkHtml 0x20` (já existiam). Rolagem volta ao topo a cada página (`NpcHtmlWnd.Clear`, já existia).
- **Decisão 3**: bypass `spk_loot` (do `SparkItensNoChao`) **não é enviado** (`L2Html.SparkOnlyBypass`).
- **Divergência hover**: o Interlude **não** realça o link ao passar o mouse (`NCHtmlTagInfo::Draw` 0x100857b0: link 0xFF6699FF sublinhado); o Spark troca o estilo (`HtmlHyperlink` + USS). Vale o do Interlude; os botões já trocam a textura `Over` do skin (como o NCButton). **Aguarda o usuário**; a cor de hover do Spark é **a validar** (está no USS, não no código).
- **Não portado (a validar / fora)**: `PerguntaGm`/`ComandoGmPerigoso` (o Spark pede "Run GM command: …" antes de `admin_ban`, `admin_kill`… — gesto de GM sem equivalente no Interlude); `%objectId%`/`%item%` (o aCis troca no servidor); botões `VIPmark_`/`Data/UI/Assets/Vip` (VIP é janela exclusiva, decisão 4); `ReplaceItemNames` (sem formato na REA).

## Entrega

- **Commits:** `6ecd2e3` UI: NpcHtml com &$N;, msg com confirmacao e bypass spk_loot do Spark bloqueado.
- **Testes:** `sh Docs/tools/run_tests.sh` → total 502, passou 502, falhou 0 (+7 em `SparkHtmlTests`).
- **Tabela comportamento Spark → l2unity → teste:**

| Comportamento Spark | Onde no l2unity | Teste (`SparkHtmlTests`) |
|---|---|---|
| Tags a, button, edit, multiedit, combobox, img, table, font, center, br/p/hr, title | `Scripts/UI/L2Html.cs` (Walk/Flush, já existiam), `L2Html.cs:488` | `Tags_DoCriterio_VirUiEAcoes` |
| Entidades &#N; &$N; &nbsp; &amp; &lt; &gt; &quot; | `L2Html.cs:198`, `L2Html.cs:201` | `Entidades` |
| $var dos campos na ação | `L2Html.cs:268` | `Acoes_BypassLinkVariaveis_SparkLootNaoVai`, `Tags_DoCriterio_VirUiEAcoes` |
| msg="id;param" pergunta antes | `L2Html.cs:28`, `L2Html.cs:268`, `L2Html.cs:292`, `L2Html.cs:639`, `L2Html.cs:712`, `GameUi.Windows.cs:64` | `Msg_IdEParametros`, `Msg_PerguntaAntesDeMandar`, `JanelaDoNpc_MsgPerguntaComODialogo` |
| bypass → 0x21; link → 0x20 | `L2Html.cs:268`, `GameUi.Windows.cs` (`HtmlAct`) | `JanelaDoNpc_BypassELinkMandam0x21E0x20_RolagemVoltaAoTopo` |
| Rolagem volta ao topo a cada página | `NpcHtmlWnd.cs:82` | `JanelaDoNpc_BypassELinkMandam0x21E0x20_RolagemVoltaAoTopo` |
| Bypass spk_loot não enviado | `L2Html.cs:262` | `Acoes_BypassLinkVariaveis_SparkLootNaoVai` |
| Hover em links (Interlude: sem realce) | `L2Html.cs:706` | — (divergência registrada; aguarda o usuário) |

- **Falta / fora do escopo:**
  - Hover nos links do Spark: **aguarda o usuário**; a cor é a validar.
  - Confirmação de comandos de GM perigosos do Spark: não portada (a validar se o usuário quiser).

## Pedidos

- nenhum.
