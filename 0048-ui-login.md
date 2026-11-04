# #0048 — Login igual ao original: varredura e correções

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-login` (nasce de `feat/ui-revisao`, #0047) |
| Estado | fazendo |
| Spec | `analises\l2-interlude\client_spec\` (89 e as telas do lobby), `Docs/validacao.md` G1–G4 e G10; `analises\interface-p166\03_teclado.md` (estados fora do GamingState) |
| Sessão | ui: login (#0048) |
| Criada | 2026-11-04 |

## Objetivo

O usuário testou a tela de login e encontrou estes problemas:
- Tab não passa do ID para a senha, e Enter não faz o login;
- o botão Options abre as mesmas opções de dentro do jogo;
- as mensagens de senha errada e de outros erros estão diferentes das do original.

Esta tarefa levanta tudo o que o cliente original tem na parte de login, da tela de ID e senha até a lista de servidores, inclusive os avisos e as caixas de mensagem. Depois implementa o que falta, como no original.

Os botões New Account, Lost Account, Production Team e Replay não serão implementados e devem sair da tela, a pedido do usuário. Os cipós do cenário são da vaga render (#0049).

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] `Docs/login_lacunas.md`: uma linha para cada coisa que o original faz na parte de login, com a evidência (NWindow/engine no Tryskell ou na REA, `Interface.u`, `.int`, `.ini`, sysstring/systemmsg e pacotes do aCis) e o estado no `l2unity`: igual, corrigido, pedido ou fora do escopo. A tabela cobre pelo menos:
  - as teclas da tela de login (Tab, Shift+Tab, Enter, Esc) e da lista de servidores;
  - o foco inicial;
  - os limites e as máscaras dos campos;
  - a janela de opções do login;
  - cada motivo de LoginFail, AccountKicked, PlayFail e ServerList vazio, além dos erros de conexão, com o texto e a caixa de mensagem nativa (G10);
  - o contrato de licença, se o Interlude mostrar;
  - a lista de servidores (barra de rolagem, ajuda e qualidade);
  - a música e o som.
- [ ] Tab e Shift+Tab alternam entre ID e senha, e Enter faz o login, como no original. O foco inicial é o do original.
- [ ] O Options do login abre a janela que o original abre nessa tela.
- [ ] Mensagens: cada motivo de erro mostra o texto do original (sysstring/systemmsg com o id certo), na caixa de mensagem nativa (G10), com o botão e o comportamento do original.
- [ ] Os botões New Account, Lost Account, Production Team e Replay saem da tela, com a janela de funções ajustada ao que sobrar, e a decisão registrada em Decisões.
- [ ] Todas as outras lacunas do `login_lacunas.md` são corrigidas ou registradas: o que for de `Scripts\Net\` vira pedido para a net, o que for do `App.cs` ou da raiz de `Scripts\` vira pedido para a coordenadora, e o que for da cena 3D vira pedido para a render, todos em `tarefas\pedidos\`.
- [ ] Testes EditMode para a lógica (foco e teclas, escolha da mensagem por motivo). `sh Docs/tools/run_tests.sh` sem falhas novas em relação a `feat/ui-revisao`.
- [ ] Capturas antes e depois em `Docs/evidencias/login/`, tiradas no aCis local, e linhas G1–G4 e G10 atualizadas em `Docs/validacao.md`.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->
- 2026-11-04 — branch `feat/ui-login` a partir de `feat/ui-revisao` (b88e07c).
- 2026-11-04 — varredura do login no NWindow/Engine (pseudocódigo + assembly lido com capstone): `Docs/login_lacunas.md` (d631ad2).
- 2026-11-04 — tela de login como o NCAuthWnd (Tab/Shift+Tab, Enter só na senha, foco no ID, campos sem limite e 0x20..0x81, sysmsg 86/87, som 0), Options abre o OptionWnd, menu só com Options, `LobbyDialogBox` (NCGaraDialogBox do ServerClose) e `LoginScreenTests` (a3adac7, 2dc4e52).
- 2026-11-04 — pedidos 0037 (coordenadora, App.cs), 0038 (net, contrato e queda da conexão) e 0039 (render, música LS01_F) (tarefas 8463d73).
- 2026-11-04 — **parado para compilar e testar**: o Editor da vaga está em Play dentro do jogo (personagem ADMIN, antes dsadasdasd), com "Recompile After Finished Playing"; perguntei à coordenadora se posso parar o Play. O código ainda não foi compilado.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->
- **Observado:** o Options do login abre o **OptionWnd do xdat, o mesmo do jogo** (`NCLoginFunctionWnd` slot 0x1f8 → `NConsoleWnd::ShowOptionWnd` `FUN_10164450`, sons 5/6; `OptionWnd.uc:113` registra no `LoginState`). O porte abria a janela de conexão própria (login server, assets, protocolo), que não existe no original.
- **Decisão:** a janela de conexão do porte continua, só no atalho de desenvolvimento Ctrl+Alt+O da tela de login (fora do original), porque ainda é o único jeito de trocar o protocolo `hwid515`/`acis` sem editar o PlayerPrefs.
- **Decisão (usuário):** New Account, Lost Account, Production Team e Replay saíram. A `NCLoginFunctionWnd` ficou 120×39 com só o Options em (13, 8), mesma largura e x, borda de baixo em H−62 como a do 120×138 original (`NativeLayout.LoginFunctionWnd`); a arte `lobby_menuback` é pintada em duas partes (topo + 4 linhas de baixo).
- **Observado:** o `console+0x658` não é uma caixa com botão: é a faixa `NCMessageWnd` (0, H−52, W, 52) que já existe no porte (`LobbyMessageBand`). A caixa nativa com botão do lobby é o `NCGaraDialogBox` (306×128), usada pelo `ServerClose` com a sysmsg 127. Isso corrige a descrição da G10.
- **Observado:** Tab segue `SetTabOrder` (0x101822a9) com ID e PWD sendo próximo e anterior um do outro; Enter só loga no PWD com texto (`NCEditBox::OnKeyDown` 0x10019880 + `OnPasswordDone`); foco no ID em todo `ShowWindow`.
- **Observado:** o cliente não limita os campos (`SetLimitedCharNum` não é chamado); o `RequestAuthLogin` corta 14/16 (`wcsncpy`), como o `Rsa.CredentialBlock`.
- **Inferido:** falha de conexão com o login server → sysmsg 90 (o texto do `OnLoginBtnClick` para essa falha); o caminho assíncrono do erro (FD_CONNECT) não foi lido.
- **A validar:** o `OnKeyDown` do `NCGaraDialogBox` (Enter = OK na `LobbyDialogBox`); o caminho do `ServerClose` dentro do jogo (estado 5, `FUN_1016e1b0`).
- **Fora desta tarefa:** a janela do contrato (`NCEulaWnd`) depende do pedido 0038; o aCis local usa `ShowLicence = False` e nunca a mostra.

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

- `pedidos/0037-ui-login-app.md` (coordenadora): App.cs liga o Options ao OptionWnd, tira os textos próprios da faixa, Cancel da lista sem mensagem, caixa do ServerClose e a música.
- `pedidos/0038-ui-login-net.md` (net): LoginOk com o contrato (`ShowLicence`) e queda da conexão sem texto em português.
- `pedidos/0039-ui-login-musica.md` (render): `MusicPlayer.PlayIntro` (LS01_F).
