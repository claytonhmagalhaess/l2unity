# #0025 — DialogBox completo (NumberPad, edit, progresso, Enter = padrão) (T1)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-dialogbox` |
| Estado | pronta p/ merge |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T1; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

DialogBox completo (NumberPad, edit, progresso, Enter = padrão), com o comportamento do Interlude levantado na #0024 (T1 do 05 §2). Tamanho estimado: M.

Ordem: 1ª de 20 na cadeia da vaga `ui`; o branch nasce de `main`. Depende de: nenhuma.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: os 8 `EDialogType` de `IL:UICommonAPI.uc:4-14` com o layout de `layout/DialogBox.txt`; `EV_DialogOK/Cancel` com `DialogIsMine`.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/dialogbox/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — branch `feat/ui-dialogbox` criado do `main` (0d71a77); estado `fazendo`.
- 2026-11-03 — DialogBox completo, ConvertNumToText e testes (`335b9de`).
- 2026-11-03 — `sh Docs/tools/run_tests.sh`: 446/446 (exit 0).
- 2026-11-03 — capturas offline em `Docs/evidencias/dialogbox/` e linha K13 do `Docs/validacao.md` (`ae3b7f1`, `fabffe9`). aCis fora do ar (2106 e 7777 fechados): nada ao vivo.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

- [O] Comportamento portado linha a linha de `IL:DialogBox.uc` (ShowDialog recusa com `m_bInUse`; OK/Cancel escondem, liberam e só então disparam o evento; o dono não é apagado em OK/Cancel, só em `DialogHide`/`Initialize`; `Initialize` zera `ParamInt`, `Reserved` e `Reserved2`, mas não o `Reserved3`; `DoDefaultAction` volta a None depois de executar, mesmo que o OK tenha aberto outro diálogo com DefaultOK).
- [O] Botões com as sysstrings 1337 "Confirm" / 1342 "Cancel" (`OnLoad`, `SetButtonName`). O porte usava 140/141 ("OK"/"Cancel").
- [O] Texto por extenso: `NWndUtil::ConvertNumToText` (`nw:0x100676e0`). No inglês (GLanguageType 1/6) agrupa de 3 em 3, escreve os dígitos como número, põe " " + o nome do grupo (sysstring 1281 "Thousand, Million, Billion", partida em "," sem tirar espaços) e "," entre grupos; um grupo só de zeros some. `GL2GameData+0x6e4e8` = sysstring 1281 e `+0x6bed8` = 469 "Adena" (tabela de FString de 12 bytes a partir de `+0x6a8dc`). Strings conferidas no `NWindow.dll` de referência (`0x10246d48` = ",", `0x1023d5d0` = " ", leitura dos bytes, sem executar). Com 13 dígitos ou mais o nativo vai para `FUN_10062ee0` [V]: o porte devolve o próprio texto.
- [O] Barra do Progress (`NCProgressCtrl::OnPaint`, `nw:0x1000d670`): soma o tempo do quadro, desenha em (gap, gap) com largura `(W − 2·gap) − decorrido·(W − 2·gap)/total` (encolhe) e chama `OnProgressTimeUp` (= Cancel) ao chegar no total. [I] altura `H − 2·gap`.
- [I] Quem chama `DoDefaultAction` no Enter não aparece no `nwindow.c` (o `OnKeyUp` do script está comentado). No porte: Enter no campo (onSubmit) ou o comando `FocusChatWindow` com o diálogo aberto. [V] no original.
- [I] Edit "number": só aceita dígitos (`onValidateInput`). `AddString` do NumberPad acrescenta no fim e `SimulateBackspace` apaga o último caractere (caret no fim).
- Decisão: fechar o DialogBox por fora (Alt+W, logout) = `DialogHide` (sem evento), para não deixar `m_bInUse` preso. ConfirmDlg (0xed) é nativo no original; aqui usa o DialogBox em OKCancel e responde com DlgAnswer; um ConfirmDlg aberto que é substituído por outro pedido recebe "cancelado".
- Captura: a prévia (UiPreview) não tem câmera, e sem câmera o Game View não limpa o quadro anterior. Nas capturas foi criada uma câmera só de limpeza (em tempo de execução, nada salvo).

## Entrega

- **Commits:** `335b9de` (DialogBoxScript, DialogBoxView, L2NumText, UiTicker, L2Wnd.SetAnchor, GameUi Confirm/Ask/Enter, UiPreview `dlg=<tipo>`), `ae3b7f1` e `fabffe9` (evidências e K13).
- **Testes:** `DialogBoxTests` (33 casos); `sh Docs/tools/run_tests.sh` 446/446.
- **Falta / fora do escopo:** comparar com o original e testar ao vivo no aCis (estava fora do ar); os usos do NumberPad nas janelas (inventário, lojas, armazém) entram nas tarefas delas (#0026, #0029, #0030...). O caminho de 13+ dígitos do `ConvertNumToText` [V].

## Pedidos

Nenhum por enquanto.
