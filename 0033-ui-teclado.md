# #0033 — Teclado igual ao nativo (T9)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-teclado` |
| Estado | no main |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T9; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

Teclado igual ao nativo, com o comportamento do Interlude levantado na #0024 (T9 do 05 §2). Tamanho estimado: M.

Ordem: 4ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-cliques-hud` (#0035). Depende de: nenhuma.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: regra do `EnterChatting` (03 §1); tabelas dos outros estados; P, O, R; teclas de sussurro no chat.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/teclado/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — branch `feat/ui-teclado` criado de `feat/ui-cliques-hud` (61d8222); estado `fazendo`.
- 2026-11-03 — `L2Shortcuts.Handle`, comandos R/P/O, EV_ChatWndSetFocus/SetString e nomes de sussurro (`038e8a2`).
- 2026-11-03 — `sh Docs/tools/run_tests.sh`: 499/499 (exit 0).
- 2026-11-03 — pedido 0026 (`App.cs` chama o `Handle` no `OnKey`).
- 2026-11-03 — evidências offline (`teclas.log` e capturas) e linha K16 do `Docs/validacao.md` (`a9edc14`). aCis fora do ar.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

- [O] `NConsoleWnd::HandleKeyboardInput` (`nw:0x101734e0`): Alt (0x12), Shift (0x10) e Ctrl (0x11) sozinhos retornam 0. Sem Alt, nos estados `GAMINGSTATE` e `OLYMPIADOBSERVERSTATE`, tecla de digitação com caixa de edição focada retorna 0; sem caixa e com `GIsEnterChatting == 0`, dispara o evento 0x23a = 570 (`EV_ChatWndSetFocus`) e retorna. No `LOGINSTATE`, tecla de digitação foca a caixa de login. Modificadores: Alt vira o 1º; Shift é o 1º se não houver Alt, senão o 2º; Ctrl entra só se houver vaga (com os três, fica de fora). Shift+Ctrl+Tab com `GetBuilderAuthority` alterna a janela de builder. Depois `GetCommand` na tabela do estado e na de estado vazio (o xdat do Interlude não tem tabela de estado vazio).
- [O] `NWndUtil::IsTypingKey` (`nw:0x100624e0`): falso só para 0x70–0x7b (F1–F12), Tab, Esc e NumLock. Setas, Espaço e o NumPad contam como digitação.
- [O] `NCChatWnd::OnChatEditBox` (`nw:0x1013bf90`): código 3 → `AttachWhisperName(0)` (`nw:0x10139700`: põe `"nome ` do mais recente por `EV_ChatWndSetString` e liga a troca); 4 → `ChangeWhisperName(1)`, 5 → `ChangeWhisperName(0)` (`nw:0x101398c0`: anda na lista; passando do último fica só o prefixo). `ChatWnd.uc:927-939`: `EV_ChatWndSetString` troca o texto do campo e `EV_ChatWndSetFocus` foca.
- [I] As setas para cima e para baixo do `NCEditBox::OnKeyDown` (`nw:0x10019880`, casos 0x26/0x28 no tipo CHAT) mandam ao pai os códigos 4 e 5 (os argumentos da chamada se perderam no pseudocódigo). [V] Qual tecla gera o código 3: sem ela, a troca só liga pelo `GameUi.AttachWhisperName` (usado por quem põe um nome no campo, como a lista de espera do grupo).
- [I] Nomes guardados: quem sussurrou e para quem se sussurrou (`CreatureSay` tipo 2, `->nome` no eco), o mais recente primeiro, até 10.
- [I] R: `ShowMacroListWindow` → `EV_MacroShowListWnd` (a MacroListWnd é da #0032). P: `ApplyMinFrame` alterna `Option.ini [Video] IsKeepMinFrameRate` e manda `EV_MinFrameRateChanged`. O: `ShowGMPetitionWindow` → `EV_ShowUserPetitionWnd` (a `UserPetitionWnd.uc` registra esse evento; a janela não existe no porte). Os efeitos dos três no nativo não foram lidos.
- [V] Se o caractere que fez o chat ganhar o foco entra no texto: no porte não entra.
- O `OnKey` é do `App.cs`: o `Handle` está pronto e testado, e a troca no `App` foi pedida (pedido 0026). Até o merge do pedido, com "Enter Chat" desligado as letras continuam virando atalho.

## Entrega

- **Commits:** `038e8a2` (código e `KeyboardTests`), `a9edc14` (evidências e K16).
- **Testes:** `KeyboardTests` (IsTypingKey, modificadores, EnterChatting ligado e desligado, caixa com foco, LoginState/ServerListState/EulaMsgState/BroadcastObserverState/OlympiadObserverState, builder, sussurros); `sh Docs/tools/run_tests.sh` 499/499.
- **Falta / fora do escopo:** pedido 0026 (o `App.cs` chamar o `Handle`); tecla do código 3; as janelas de macro (#0032) e de petição; teste ao vivo (aCis fora do ar). Pedidos: `pedidos/0026-ui-teclado-app.md`.

## Pedidos

- [0026 — App.cs: tecla pelo HandleKeyboardInput](pedidos/0026-ui-teclado-app.md)
