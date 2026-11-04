# HTML do servidor: o que o NCHtmlViewer aceita e o estado no porte (#0055)

O porte desenha o HTML que o servidor manda (NpcHtmlMessage 0x0f, ShowBoard 0x6e, TutorialShowHtml 0xa0) e os `.htm` locais (help, petição, lobby). Estes são os arquivos:
- `UI/L2HtmlDoc.cs`: parser e tabela de suporte;
- `UI/L2HtmlLayout.cs`: layout em pixels, sem Unity;
- `UI/L2Html.cs`: montagem em uGUI e ações.

Este documento compara cada tag e atributo com o `NCHtmlViewer` do NWindow.dll do Interlude.

**Fontes.** A REA é só de leitura:
- `analises\system_Tryskell_RE\nwindow.c`, citado como `nw:<linha>`;
- `analises\l2-interlude\re\function_map_nwindow.json`;
- tabelas internas lidas por VA no `reference\l2-interlude\client\system\NWindow.dll`;
- `analises\l2-interlude\re\decomp_all\engine\00003.c`, citado como `en3:<linha>`.

O relatório completo da REA está nas notas da sessão (`0055-rea-nchtmlviewer.md`).

**Legenda.** **[O]** observado no código ou nos dados · **[I]** inferido · **[V]** a validar ao vivo ou na Engine. Os estados do porte são:
- **igual**: segue o original;
- **igual [V]**: segue a leitura, mas o número ou o efeito ainda precisa de conferência;
- **ignorado**: o original lê e descarta, e o porte também;
- **falta**: não implementado.

## 1. Caminho do HTML no original

| Etapa | Função | Evidência |
|---|---|---|
| Entrada | `NCHtmlViewer::LoadHtml` 0x10088300 (arquivo) e `LoadHtmlFormString` 0x10088440. O BBS entra por `SetHtmlBuffData`. | nw:125062, 125128 [O] |
| Tokenizador | `ListParser::CreateElementList` 0x10090a50 | nw:132438 [O] |
| Tag | `FUN_1008e480`: o nome é comparado sem caixa, por busca binária na tabela de 51 tags `0x1034e9a8`; o tipo vem de `0x1034ef00` | nw:130614-130712 [O] |
| Atributos | `FUN_10090650`, busca na lista de atributos da tag | nw:132251 [O] |
| Título e raiz | `NCHtmlViewer::AnalyzeHtml` 0x10087c90 | nw:124654 [O] |
| Árvore e layout | `NCHtmlFrame::LoadHtml`/`Align`, `NCHtmlTable::LoadHtml`/`Align`, `NCHtmlTagInfo::LoadHtml`/`Align` | nw:124333, 123084, 122081, 120091, 121120 [O] |
| Desenho | `NCHtmlViewer::OnPaint` 0x100833e0 | nw:120582 [O] |

No porte, a mesma sequência é: `HtmlDoc.Tokens` → `HtmlDoc.Parse` (árvore) → `HtmlLayout.Load` (unidades) → `HtmlLayout.Place`/`AlignTable` (pixels) → `L2Html.Build` (uGUI em posição absoluta, dentro do conteúdo rolável do HtmlCtrl).

## 2. Tags

A comparação do nome não diferencia maiúsculas [O]. Sem `<html>`, nada aparece: o `AnalyzeHtml` só cria o frame raiz no primeiro elemento HTML, e o conteúdo vai até `</html>` ou até o fim do texto (nw:124760-124775) [O]. O porte faz o mesmo (`HtmlLayout.Run`).

| Tag | Original | Porte |
|---|---|---|
| `html` | Raiz. `IMGSRC` é o fundo do viewer; `TEXTANI="1"` liga a animação do texto (nw:124720-124734) | igual (raiz e `imgsrc`). `textani` é lido, mas o texto não é animado: **falta** |
| `head`, `body` | tipos 46/45, ignoradas | ignorado |
| `title` | O texto até o próximo `<` vira o título da janela-mãe e não é desenhado (nw:124705-124716) | igual (`NpcHtmlWnd.TitleFor`) |
| `br` | Unidade de 1×9 px que fecha a linha | igual |
| `br1` | Unidade de 1×0 px que fecha a linha | igual |
| `p` | tipo 28, ignorada: sem quebra e sem espaço; `ALIGN` não é lido | ignorado (antes da #0055, o porte quebrava a linha e punha margem) |
| `center` | Empilha o alinhamento central; `</center>` desempilha | igual |
| `font` | Só `COLOR`. A abertura sem cor não empilha, mas o fechamento sempre desempilha (nw:124474-124487) | igual (`HtmlNode.Closed`) |
| `a` | Marca o tipo de link da **próxima** unidade: `LINK` (FileLinker), `ACTION` (ActionLinker, com `MSG`) ou `CMD` (nw:124424-124466) | igual. Antes da #0055, o porte só via `action`; `<a link>` (os 406 links dos `help*.htm`) e `<a cmd>` não faziam nada |
| `b`, `i`, `u`, `tt`, `strike`, `sub`, `sup` | tipos 21-27, ignoradas: sem negrito nem itálico | ignorado (antes da #0055, o porte usava negrito e itálico) |
| `h1`…`h7`, `pre`, `address`, `ul`, `ol`, `li`, `left`, `right`, `var` | ignoradas | ignorado |
| `input`, `select`, `option`, `textarea`, `spin`, `bar`, `volumn` | ignoradas (os atributos são lidos e descartados) | ignorado |
| `extend` | O conteúdo é engolido até `</extend>` (`FUN_1008fe60`, nw:131865) | igual |
| `img` | Unidade de imagem | igual (§4) |
| `button`, `edit`, `multiedit`, `combobox` | Controles (`TagInfo::AlignPosition` → `Register*`, nw:127141) | igual (§4, §6) |
| `table`, `tr`, `td` | Tabela. `tr` só vale dentro de `table` e `td` só dentro de `tr`; o que fica dentro de `table` fora de `tr`/`td` (inclusive texto) é ignorado (nw:123222-123228) | igual |
| Tag desconhecida | Tipo 2: o parser pula até o primeiro `>` ou `<`, e o texto que vem depois aparece (`<foo>txt</foo>` mostra "txt") (nw:130703-130716) | igual |
| `<!-- ... -->`, `<!DOCTYPE>` | Tipo 3 ou desconhecida. O pulo termina no **primeiro `>` ou `<`**, não em `-->` (nw:130636-130642) | igual |
| `<` sem letra ou dígito depois | Vira texto (nw:130655-130658) | igual |

## 3. Atributos

Os valores aceitam só aspas duplas. Sem aspas, o valor vai até um espaço, `>` ou `<`. As aspas simples ficam como parte do valor. Os valores não passam por entidades, e um atributo repetido vale o primeiro (nw:132350-132375, 118064) [O]. O porte faz igual.

| Tag | Atributo | Original | Porte |
|---|---|---|---|
| html | `imgsrc` | Textura de fundo; `Transparent` (o padrão) = sem fundo | igual |
| html | `textani` | `"1"` liga `SetTextAnim(true, 0.007)` | lido; a animação **falta** |
| html | `width` `height` `x` `y` `noscrollbar` `querydelay` | não lidos | ignorado |
| font | `color` | Empilha a cor (§5.3) | igual |
| font | `face` `size` | não lidos | ignorado |
| a | `action` | ActionLinker | igual |
| a | `link` | FileLinker: carrega o HTML local (`OnLink` → `LoadHtml`, nw:125553) | igual: `HtmlActions.File`, ou, sem ele, `..\l2text` no mesmo viewer |
| a | `cmd` | `NCChatWnd::ExecuteCommand` (nw:132718) | igual: `HtmlActions.Command`, no `GameUi` pelo `OnChatSubmit` |
| a | `msg` | Só com `action`. `atoi`: systemmsg N com o texto depois do último `;` no primeiro `$s1`, num diálogo do sistema; N ≤ 0 usa o texto como está (0x10095860, nw:136082). A ação só sai no OK [I] | igual: `L2Html.ConfirmText` e o DialogBox OKCancel no `GameUi.HtmlAct` |
| a | `href` | não lido | ignorado |
| button | `value` | Texto do botão; `&$N;` vira sysstring N (nw:125373) | igual (`ButtonLabel`) |
| button | `action` | Enviado no clique | igual |
| button | `width` `height` | Padrão 10×10; a unidade tem h+6 | igual |
| button | `fore` / `back` | Normal / pressionado; padrões `Default.BlackTexture` / `Default.WhiteTexture` | igual (§6) |
| button | `msg` | **Não existe na lista**: o botão envia a ação direto | ignorado (antes da #0055, o porte perguntava) |
| img | `src` | Objeto UE `Pacote[.Grupo].Textura` | igual: `icon.*` pelo Icon.utx e o resto pelo textures.json |
| img | `width` `height` | Padrão 0×0: sem os dois, nada é desenhado, mas a unidade ocupa a altura | igual (o `<img height=7 />` do board é espaçador) |
| img | `align` `tooltip` | não lidos | ignorado |
| table | `width` | Número, ou `N%` da largura disponível | igual |
| table | `height` | Altura mínima: as linhas esticam na proporção | igual |
| table | `bgcolor` | Retângulo da tabela inteira (`Default.WhiteTexture` tingida) | igual (Fill). Antes da #0055, era ignorado |
| table | `border` | Padrão 0: N retângulos de 1 px em 0xFFDCDCDC na tabela e em cada célula | igual |
| table | `cellpadding` / `cellspacing` | Padrões **1** e **2** (ctor nw:122959) | igual. Antes da #0055, padding 3×1 fixo e spacing 0 |
| table | `align` | Na tabela do cliente está escrito `"ALIGN,"`, então nunca casa | ignorado |
| table | `background` | não lido | ignorado |
| td | `align` | CENTER, RIGHT, LEFT; sem o atributo empilha 0 (esquerda), o que **cancela o `<center>` de fora** | igual. Antes da #0055, a célula herdava o centro, e o board saía centrado |
| td | `valign` | Sem atributo ou `CENTER` = meio; `BOTTOM` = base; `TOP` e qualquer outro (inclusive `middle`) = topo | igual |
| td | `width` | Largura mínima, que cresce com o conteúdo; `%` é ignorado | igual |
| td | `fixwidth` | Fixa a largura depois do conteúdo (ainda vale a unidade mais larga que não quebra) | igual |
| td | `height` | Altura mínima da célula (a tabela desconta 6) | igual |
| td | `bgcolor` `background` `border` `fixheight` | não existem na lista | ignorado (antes da #0055, o porte pintava o `bgcolor` da célula) |
| edit | `var` `width` `height` | Padrão 50×15; controle e unidade com h+6 | igual |
| edit | `type` | `password` desenha `*`; `number` só aceita dígitos; `date`/`time` não foram rastreados | igual (`InputField.ContentType`); `date`/`time` como `normal` [V] |
| edit | `length` | Máximo de caracteres; 0 = limite pela largura | igual: `characterLimit`. O limite pela largura **falta** |
| edit | `action` | Enter executa a ação (`OnEditAction`) [I] | igual (`onSubmit`) |
| multiedit | `var` `width` `height` | Padrão 50×40, h+6 | igual |
| combobox | `var` `list` `width` | Padrão w=30, **altura fixa 21**, `list` separado por `;` | igual. A lista abre (`L2Combo`); antes da #0055, só alternava a cada clique |
| combobox | `sel` | Item com o texto igual; vazio = item 0 | igual |
| combobox | `height` | não existe | ignorado |

## 4. Texto, entidades e cores

### 4.1 Espaços e quebras (`FUN_1008d690`, nw:130802, 129655-129818) [O]
- CR e LF são **removidos**, não viram espaço: `abc\ndef` → `abcdef`. O porte faz igual. Antes da #0055, todo espaço em branco virava um espaço.
- Os espaços e tabs do começo de um trecho caem, a não ser que o elemento anterior seja `<font>`/`</font>`. Os do fim caem quando o seguinte não é FONT. Por isso `texto <a>link</a>` gruda o link. Igual no porte.
- Espaços internos repetidos não são colapsados. Igual no porte.

### 4.2 Entidades (`FUN_1008e880`, tabelas `0x1034efcc`/`0x1034efec`) [O]
Diferenciam maiúsculas e são aplicadas na ordem abaixo. No porte, tudo isso está em `HtmlDoc.Decode`.

| Entrada | Saída |
|---|---|
| `&nbsp;` | espaço |
| `&apos;` `&quot;` `&amp;` `&lt;` | `'` `"` `&` `<` |
| `&gt;` | `> ` (com um espaço depois) |
| `&#160;` | espaço |
| `&#10;` | `&$`: o dado está na tabela; o efeito é [V] |

Depois vêm os nomes:

| Código | Vira | No porte (`GameNames`) |
|---|---|---|
| `&$N;` | SysString N | `GameData.SysString` |
| `&@N;` | nome do NPC N | `GameData.NpcName` |
| `&#N;` | nome do item N: qualquer `&#N;` numérico, menos 160 e 10, é nome de item | `GameData.ItemName` |
| `&%N;` `&^N;` `&*N;` | campos da tabela de castelos (nw:292598-292642) | "-" (o porte não tem a tabela): **falta** |

Sem nome, o código vira `-`. Com N = 0 ou não numérico, o trecho até o `;` some e o `;` fica.

### 4.3 Cores (`GetMatchedColor` 0x100825d0, nw:119811) [O]
- `LEVEL`, exato, = **0xFFFFCC00**. Antes da #0055, o porte usava `#e8c56e`.
- Qualquer outro valor passa por `wcstoul("0xff" + valor, 16)`:
  - `RRGGBB` → 0xFFRRGGBB;
  - `#RRGGBB` e nomes (`red`, `level` em minúsculas) → **0x000000FF**, porque o `wcstoul` para no primeiro caractere que não é hexa;
  - mais de 8 dígitos → 0xFFFFFFFF.
- O porte calcula igual (`HtmlDoc.Color`). O que o canvas desenha com alfa 0 é [V]: o porte desenha opaco (`L2Html.C`). No corpus do aCis só aparece um `#`.
- Cores padrão: texto **0xFFDCDCDC**; link **0xFF6699FF** sublinhado, ou a cor do `<font>` em volta; borda 0xFFDCDCDC. Não há cor de hover.

## 5. Layout

### 5.1 Unidades e linhas (`Frame::Align` 0x10082a10, nw:120091-120215) [O]
- **Só o texto corre na linha.** Trechos de texto seguidos, inclusive com `<font>`, `<a>` e tags ignoradas entre eles, continuam na mesma linha e quebram na largura do frame.
- Imagem, botão, edit, multiedit, combobox, tabela, `<br>` e `<br1>` ocupam **cada um a sua linha**, em x = 0 ou alinhados pelo topo da pilha (`<center>` = (W − w)/2; `td align=right` = W − w). Para pôr lado a lado é preciso tabela.
  - Antes da #0055, o porte punha botões, imagens e campos lado a lado, como um navegador. Os 5 botões do gatekeeper do aCis ficavam dois por linha.
- Altura das unidades:
  - texto: linhas × (altura do 'A' + 6);
  - botão, edit, multiedit: h + 6;
  - combobox: 21 + 6 [I];
  - img: h;
  - br: 9; br1: 0.
- Quebra do texto: o porte quebra por palavra e, numa palavra maior que a linha, por caractere (a Engine testa `x + largura do glifo > largura`, en3:27410). Se a Engine respeita palavras é [V].
- Centro do texto: x = (W − largura da linha)/2, linha a linha.

### 5.2 Medidas da fonte [V]
- Fonte do viewer: SmallFont-r (slot +0x220 = 0, nw:126616).
- O porte usa a fonte embutida do Unity em 11 px (`L2Html.FontSize`) e **13 px para o 'A'** (`L2Html.GlyphH`), a leitura fraca do `.gly` na spec 02. Isso dá linha de 19 px e 28 px com `<br>`.
- Os dois números precisam de captura do original na mesma resolução.

### 5.3 Tabela (`Table::LoadHtml` 0x100860a0, `Table::Align` 0x10083d10, nw:121120-121275) [O]
1. Largura da coluna = maior td da coluna (`width` como mínimo, crescendo até a maior unidade; `fixwidth` fixa). Largura natural = Σ(col + 2·(border + padding) + spacing) + spacing + 2·border.
2. Largura da tabela: com `width`, o número ou `N%`; sem `width`, se a natural ≥ largura disponível, a disponível; senão, a natural.
3. Com `width` ou estouro, cada coluna escala: col × largura / natural.
4. Célula = max(`height`, conteúdo) − 6; linha = maior célula; com `height` da tabela maior, as linhas esticam na proporção.
5. x da 1ª célula = spacing + 2·border + padding; a próxima soma w + 2·(border + padding) + spacing. O y segue a mesma conta.
6. `bgcolor` = um retângulo sobre a tabela inteira.
- [V] A REA viu, na 1ª linha, um desconto extra de 2×padding na largura da coluna (nw:123230-123250). O porte não aplica.
- Antes da #0055, o porte dividia o resto da largura entre as colunas sem width (como um navegador) e usava LayoutGroups do uGUI, que se perdiam em tabelas aninhadas.

## 6. Botão e texturas (`NCHtmlButton` 0x10091980 → `NCButton::DrawButton` 0x100034b0) [O]
- `NCButton::Initialize(fore, back, "", "")`: normal = `fore`, pressionado = `back`, realce = `<fore>_over` se existir (senão `fore`) (nw:10094-10152). Uma textura que não existe vira `Default.BlackTexture` (nw:58422). Igual no porte (`L2Html.ButtonSkin`).
- A textura é desenhada **1:1 a partir do canto de cima, sem esticar**: UV (0, 0, w, h) em texels, repetida se a caixa for maior (nw:122560-122566). Vale também para `<img>`. O porte usa `L2Html.Uv1To1` com wrap Repeat.
  - Por isso `L2UI.SquareGray` 8×8 numa `img width=300 height=1` vira uma linha cinza.
  - Nos botões da interface (`bigbutton3` 256×32, arte 136×23 no canto), `width=134 height=21` mostra só a arte.
  - Antes da #0055, o porte esticava a área da arte e desenhava `L2UI.SquareGray` como um traço quase transparente.
- `value` centrado nos dois eixos, em **0xFFE6DCBE** (desabilitado 0xFFA0A0A0) (nw:9300-9345). Igual no porte.
- `icon.*`: o pacote Icon.utx está exportado em `cache/icons/Icon/Texture`, onde 3989 dos 4002 ícones têm 32×32.
  - **Este era o defeito do buffer:** os botões do aCis usam `fore="icon.skill1040" back="icon.skill0000"`, e o porte só procurava a textura no textures.json, então caía no botão genérico. Agora o ícone aparece.
- Estado do botão: o NCHtmlButton volta ao normal no próprio LButtonUp, depois de enviar a ação (nw:132843). Igual no porte (UiTexButton).

## 7. Rolagem, teclado e clique

| Item | Original | Porte |
|---|---|---|
| Roda | `NCScrollWnd::OnMouseWheel`: (delta/120) × unidade × 3, limitado a [0, máx] (nw:63319-63350). A unidade é a altura do 'A' no viewer (≈13, então 39 px por entalhe) e 15 no BBS (45 px) | igual (`L2Html.WheelStep`, `Wheel`); antes, `ScrollRect` com sensibilidade 20 |
| Barra de rolagem | ▲▼ = ± unidade; arrastar encaixa em múltiplos da unidade | **falta**: o HtmlCtrl do porte não tem barra (só a roda e o arrasto do ScrollRect) |
| Tab | Percorre EDIT e MULTIEDIT em roda, na ordem do documento; o combobox fica de fora (`InitTabOrder`, nw:123363) | igual (`HtmlTabOrder`) |
| Teclado | `OnKeyDown`: só ESC na tela de login | — |
| Clique | 0x501 → `OnLink` / `OnAction` / `OnHtmlButton` / `OnEditAction` (nw:121326) | igual (`L2Html.Click`) |
| Área do link de várias linhas | Até 3 retângulos (`NCDynamicLinker::OnCreate`, nw:135208) | um trecho clicável por linha (mesmo efeito) |

### 7.1 Ações (`FUN_1014cae0` nw:298890, `NCConsole` 0x1013d1e0 nw:285302) [O]
- `bypass ...` (sem caixa), por `L2Html.BypassCommand`:
  1. tokens separados por espaço, e aspas agrupam;
  2. o `-h` sai;
  3. um token `$nome` inteiro vira o texto do controle com `var=nome`, e some se o controle não existe ou o texto é recusado;
  4. os tokens são juntados com um espaço e vão para o `RequestBypassToServer`.
  - Antes da #0055, o porte trocava `$x` em qualquer posição e mandava o resto como estava.
- `GetData` (nw:123760):
  - edit e combobox recusam `&` e mais de 16 bytes MBCS (sysmsg 204), e texto só de espaços (329);
  - multiedit aceita de 2 a 3000 bytes (329).
  - O porte faz igual (`L2Html.GetData`) e mostra a systemmsg no chat. A recusa de glifos que faltam na fonte **falta**.
- `link X` → `RequestLinkHtml`. `Write ...` → `RequestBBSWrite`: o pacote não existe (pedido 0034 da net); `HtmlActions.Write` fica nulo.
- Viewer do tutorial (`viewType="Tutorial"`, +0x214 = 1): o bypass vai por `RequestTutorialPassCmdToServer` 0x7c e o link por `RequestTutorialLinkHtml` 0x7b (`TutorialViewerView`, pedido 0044).

## 8. Community Board (NCBBSHtmlViewer)

| Item | Original | Porte |
|---|---|---|
| Tamanho | 633×474 (`BoardWnd` do xdat) | igual (`BoardView.HtmlViewerWidth`) |
| Partes | `SetHtmlBuffData`: 101+102+103 juntos (`MergeListBuff`, nw:125647); 1..4 = leitura com 18 marcas `<!--...-->` (`MergeReadBuff`, nw:127279); 1001/1002 = escrita (`MergeWriteBuff`, nw:127413) | 101/102/103: igual. **Falta**: 1..4 e 1001/1002 (o aCis local só manda 101-103; o 1001/1002 vem com o `RequestBBSWrite`, pedido 0034) |
| Trava | `OnAction`/`OnHtmlButton` ignoram o clique com a trava; uma ação aceita liga a trava, que desliga com o timer de 10 s ou uma página nova (nw:119106-119355) | igual (`BoardView.BoardActions`) |
| GetData | Sem o limite de 16 bytes: Title/ToList ≤ 160 (327), Comment ≤ 256 (330), o resto ≤ 3000 (2009); vazio: Title 328, Content 2008, ToList 2007, o resto 329 | igual (`HtmlActions.Board`) |
| OnPaint | Clip deslocado (+3, +10), sem fundo, sem animação | o deslocamento do clip **falta** [V] |

**Board "sem conteúdo" (relato do usuário).** Com qualquer aba que não fosse a 7ª, o HtmlViewer do board ficava escondido. A #0047 corrigiu isso (`29f1a2f`, no `feat/ui-revisao`), mas a correção ainda não estava no `main`. A #0055 nasce desse branch. Além disso, o layout antigo, feito com LayoutGroups, centralizava as células e perdia os fundos das tabelas aninhadas do `CommunityBoard/index.htm`.

## 9. Corpus do aCis (`C:\Workspace-java\aCis_gameserver\data\html`, 3751 arquivos)

Teste: `L2HtmlTests.Corpus_aCis_TodasAsTagsEAtributosConhecidos`. Ele passa cada arquivo pelo parser e pelo layout e falha em tag ou atributo que não esteja em `HtmlDoc.Supported`, `HtmlDoc.Ignored` ou na tabela do cliente. Os 3751 arquivos passam sem nenhum desconhecido.

Uso no corpus, para dar o peso de cada item:

| Tag | Usos | Atributos (usos) |
|---|---|---|
| `a` | 44318 | action 22162, msg 993 |
| `br` | 14119 | |
| `td` | 12037 | width 1812, align 845, fixwidth 147, height 60, valign 34, background 12 (ignorado), fixheight 2 (ignorado) |
| `font` | 6370 | color 3186 (LEVEL 2030, RRGGBB 1478, `#` 1) |
| `tr` | 5455 | |
| `table` | 2520 | width 716, bgcolor 323, cellspacing 90, border 51, cellpadding 50, height 35, align 11 (ignorado) |
| `button` | 2289 | width/height 2289, value 2117, back/fore 1656, msg 48 (ignorado) |
| `center` | 2187 | |
| `br1` | 1602 | |
| `img` | 926 | height 926, src/width 756 |
| `title` | 596 | |
| `edit` | 494 | var/width 494, height 32, type 15 |
| `b` | 24 | (ignorado) |
| `head` | 16 | |
| `combobox` | 11 | var, list, width, height 8 (ignorado) |
| `p` | 4 | (ignorado) |
| `multiedit` | 2 | |

Os erros de digitação do servidor, que o cliente também ignora, estão registrados em `HtmlDoc.Ignored`:
- `<conter>`;
- `<table with=...>`;
- `<td width 90>`;
- os marcadores `%button%`, `%nobuff%` (o servidor troca antes de enviar).

Cinco arquivos não têm `<html>` (pedaços do `CommunityBoard/ranking` que o servidor inclui em outra página) e, sozinhos, não mostrariam nada. No original é igual.

### 9.1 Texturas citadas pelo corpus
São 291 referências distintas em `src`/`fore`/`back`/`background`. Faltam 33 no `shared`, todas de pacotes que não são do Interlude padrão:
- `sek.cbui94`/`sek.cbui92` (738 botões do admin): o `sek.utx` está no cliente de referência e já foi exportado pelo l2anim em `tools\l2anim\out\tool\ui\sek`, mas não foi copiado para o `shared`. O `Docs/tools/copy_html_textures.py` faz a cópia (**pedido 0043**), junto com o `Default.*`.
- `L2UI_CT1.*` (12 `td background`, que o cliente ignora), `interface.*`, `bigbutton.*`, `clbutton.*`, `buttons_bs.*`, `dema.*`: não existem nem no cliente de referência.
- `L2PvpZone`, `WeaponsPvp`, `l2atheris`, `l2ketralogo`: estão em `reference\...\systextures`, mas não foram exportados. São 17 imagens dos merchants customizados (opcional no pedido 0043).

## 10. Janelas que usam o viewer

| Janela | Viewer do original | Porte |
|---|---|---|
| NPC (NpcHtmlMessage 0x0f) | `NCNPCHtmlViewer` 310×401, NCHtmlViewer filho em (7, 30, W−14, H−37) | `NpcHtmlWnd` (largura 296), ações do `GameUi.HtmlAct` |
| Community Board (ShowBoard 0x6e) | `NCBBSHtmlViewer` 633×474 | `BoardView` |
| Tutorial (TutorialShowHtml 0xa0 / TutorialCloseHtml 0xa3) | `TutorialViewerWnd` do xdat, `viewType=Tutorial`; a altura acompanha o HTML (`TutorialViewerWnd.uc`) | `TutorialViewerView` (nova). O despacho no `App.cs` é o **pedido 0042** |
| Help / Petição / lobby | NCHtmlViewer com `<a link>` local | `HelpHtmlView`, `PetitionView`, `LobbyServerScreen` (agora com `HtmlActions.File`) |

## 11. A validar e falta

- [V] Altura do 'A' (13) e largura da SmallFont-r contra a fonte do porte: precisam de captura do original na mesma resolução.
- [V] Quebra por palavra ou por glifo, `&#10;`, cores com `#` (alfa 0), `edit type=date/time`, ação do `msg` só no OK.
- Falta:
  - animação do texto (`textani`);
  - barra de rolagem do HtmlCtrl;
  - limite do edit pela largura;
  - nomes de castelo (`&%N;`);
  - partes 1..4 e 1001/1002 do BBS;
  - deslocamento do clip do BBS;
  - `RequestBBSWrite` (pedido 0034).
