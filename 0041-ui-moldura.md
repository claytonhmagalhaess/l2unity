# #0041 — Moldura: minimizar, expandir e destacar abas do chat (T17)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-moldura` |
| Estado | no main |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T17; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

Moldura: minimizar, expandir e destacar abas do chat, com o comportamento do Interlude levantado na #0024 (T17 do 05 §2). Tamanho estimado: M.

Ordem: 5ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-teclado` (#0033). Depende de: nenhuma.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: `Iconize` com o ícone da aba; `OnFrameExpandClick`; `OnTabSplit`/`OnTabMerge` do chat; seções numéricas do `WindowsInfo.ini` [V].
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/moldura/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — branch `feat/ui-moldura` criado de `feat/ui-teclado` (a9edc14); estado `fazendo`.
- 2026-11-03 — minimizar/`Iconize` no `L2Wnd`, MainWnd com o ícone da aba, abas do chat destacáveis (`69568e8`).
- 2026-11-03 — `sh Docs/tools/run_tests.sh`: 501/501 (exit 0).
- 2026-11-03 — capturas offline e linha K17 do `Docs/validacao.md` (`fc17ab5`). aCis fora do ar.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

- [O] Só a MainWnd tem `iconable = 1` no xdat do Interlude; as outras com `Iconable.IconName` (Inventory, Minimap, Board, Macro*, Pet...) ficam com `iconable = -1` (não gravado). O porte só põe o botão quando é 1.
- [O] `NCFrameCtrl` (`nw:0x1001b580`): `FrameMiniBtn`/`FrameMiniOnBtn` com a âncora (3, −25, 3) quando há botão de fechar (o fechar fica em (3, −8, 3)). [I] 3 = canto superior direito: o minimizar fica 25 px antes da borda direita, em y = 3.
- [O] `NCWnd::MinimizeWindow` (`nw:0x10059860`): som 6, esconde a janela e mostra o objeto do ícone (`+0x50`). `MainWnd.uc:18-34`: `OnMinimize` chama `Iconize("MainWnd", "L2UI_CH3.TABBUTTON.MainWndTabIconN", dica)` pela aba de cima (194, 196, 197, 895, 198).
- [I] Lugar e tamanho do ícone (o canto da janela, 32×32) e o clique que devolve a janela: o código do ícone não foi lido.
- [O] `ChatWnd.uc:229-300`: `OnTabSplit` seleciona a aba, tira o tamanho relativo, solta a lista (`SetSettledWnd(true)`) e liga o fundo (`EnableTexture(true)`); `OnTabMerge` devolve para a posição da NormalChat com a largura dela e altura − 46, tamanho relativo de novo, sem fundo. [I] O gesto (o `NCTabCtrl` dispara os dois eventos) não foi lido: no porte, arrastar a aba para fora destaca e arrastar de volta para dentro junta. [I] Fundo da aba solta: `Chatting_Back3`.
- O botão de expandir da moldura (`OnFrameExpandClick`) ficou pronto na #0035, no `L2Wnd`, para toda janela com `Frame.expandbutton = 1`.
- [V] Seções numéricas `[1]..[8]` do `WindowsInfo.ini`: não foram ligadas às abas soltas (posição não é gravada na saída).

## Entrega

- **Commits:** `69568e8` (código e `FrameTests`), `fc17ab5` (evidências e K17).
- **Testes:** `FrameTests` (botão de minimizar só com iconable, posição, `Iconize`); `sh Docs/tools/run_tests.sh` 501/501.
- **Falta / fora do escopo:** comparar com o original (aCis fora do ar); lugar real do ícone e o gesto do `NCTabCtrl`; gravar a posição das abas soltas no `WindowsInfo.ini` (seções numéricas, [V]).

## Pedidos

Nenhum por enquanto.
