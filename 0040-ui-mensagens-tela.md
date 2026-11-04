# #0040 — `OnScreenMessageWnd1..8` (T16)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-mensagens-tela` |
| Estado | pronta p/ merge |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T16; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

`OnScreenMessageWnd1..8`, com o comportamento do Interlude levantado na #0024 (T16 do 05 §2). Tamanho estimado: P.

Ordem: 6ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-moldura` (#0041). Depende de: nenhuma.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: 8 posições, fade-in e fade-out, uma mensagem por vez (spec 02).
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes (S→C `ExShowScreenMessage` 0xfe:0x38) lidos e montados pelo código da #0046 (vaga `net`), depois que ela estiver no `main`; o que faltar lá vira pedido em `tarefas\pedidos\`, sem editar `Scripts\Net\`.
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/mensagens-tela/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — bloqueada: aguardando #0046 no main. S→C `ExShowScreenMessage` 0xfe:0x38 não é lido no `main`. Branch não criado (a vaga seguiu para a próxima tarefa da cadeia sem pacote novo).
- 2026-11-04 — branch `feat/ui-mensagens-tela` criado de `feat/ui-skill-henna` (o anterior da cadeia, como a coordenadora pediu).
- 2026-11-04 — `OnScreenMessageScript`/`OnScreenMessageView` e `OnScreenMessageTests` (`8937a16`); autosize do TextBox pelo ponto da âncora (`dc878a4`).
- 2026-11-04 — `sh Docs/tools/run_tests.sh`: 695/695 (exit 0).
- 2026-11-04 — capturas offline e linha K29 (`a36f409`). aCis fora do ar.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

- [O] `EV_ShowScreenMessage` (`IL:OnScreenMessageWnd.uc:365-396`): FontSize, MsgColor e ShadowType são lidos e ignorados; MsgColorR/G/B ficam em 255 sem a chave (o nativo não manda); `ResetAllMessage` antes, então só uma mensagem por vez; MsgType 1 = Msg, 0 = `GetSystemMessage(MsgNo)`.
- [O] `ShowMsg`: tira as crases, o 1º "#" passa para a 2ª linha (os seguintes só somem); FontType 0 = TextBoxN e as sombras -0/-1-0, 1 = TextBoxsmN; `texturetype1` só na Wnd2 com BackgroundType 1; droprate 0 = 255, 1 = 25, 11 = 15, 12 = 25, 13 = 35, e outro tipo fica com o anterior.
- [O] `OnTick`: fade-in de +droprate até 255, quando sobe o `m_TimerCount` e arma o timer do LifeTime na Wnd1; cada timer tira um da conta, e com a conta zerada começa o fade-out de −droprate até 0, que termina no `ResetAllMessage`. A conta não volta a 0 no reset, como no script.
- [O] `ValidateSystemMsg`: só com windowType ≠ 0; texto = onScreenMsg do systemmsg-e, tempo = lifeTime × 1000, cor B,G,R do arquivo, com 0/0/0 e 176/155/121 trocadas por branco; não chama o `ResetAllMessage` antes. O nativo manda o `EV_SystemMessage` só com `Index` (spec 91), então os $sN saem vazios.
- [I] OnTick por quadro (`UiTicker`); fonte grande 22 (a do nativo não foi lida).
- O TextBox com autosize (`RefreshTextCoords`) passou a encolher em volta do ponto da própria âncora: o `TextBox2` (TOP_CENTER) fica centrado, como o `PartyMatchWaitListWnd.MemberCount`. O `XdatLayoutTests` agora espera o X por esse ponto.

## Entrega

- **Commits:** `8937a16` (código e testes), `dc878a4` (autosize pela âncora), `a36f409` (evidências e K29).
- **Testes:** `OnScreenMessageTests` (evento, quebra e fonte; fades, tempo de vida e fim; animação 0 e droprate mantido; systemmsg com janela), `XdatLayoutTests`; `sh Docs/tools/run_tests.sh` 695/695.
- **Falta / fora do escopo:** teste ao vivo (mensagens do servidor no aCis); fonte do nativo.

## Pedidos

Nenhum por enquanto.
