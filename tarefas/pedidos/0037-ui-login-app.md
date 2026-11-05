# Pedido 0037 — App.cs: login igual ao original (Options, mensagens, ServerClose, música)

| Campo | Valor |
|---|---|
| De | ui (tarefa #0048) |
| Para | coordenadora |
| Estado | aceito |
| Criado | 2026-11-04 |

## O que precisa

Tudo em `Assets/L2Web/Scripts/App.cs`, no branch `feat/ui-login` (depende dos commits da #0048: `LobbyLoginScreen.OptionWindow`, `LobbyUi.ShowServerClose`, `LoginAuth`). Evidências em `Docs/login_lacunas.md`.

1. **Options abre o OptionWnd** (`NConsoleWnd::ShowOptionWnd`, `OptionWnd.uc:113`). Em `BuildScreens()`, depois de `scrLogin.OnOptionsChanged = SaveLoginOptions;`:
   ```csharp
   // NCLoginFunctionWnd: Options abre o OptionWnd do xdat (o mesmo do GamingState)
   scrLogin.OptionWindow = OptionWindow;
   ```

2. **Sem textos próprios durante o login.** O original não escreve nada na faixa enquanto conecta (a faixa fica no copyright, systemmsg 94). Em `SubmitLogin()`:
   - apagar `scrLogin.Msg("Conectando ao login server…");` e `scrLogin.Msg("Entrando no servidor de jogo…");`;
   - trocar o teste de campos vazios por:
     ```csharp
     var empty = LoginAuth.CheckFields(user, password);
     if (empty != 0)
     {
         scrLogin.Msg(LoginMessages.Text(new[] { empty }));
         return;
     }
     ```
     (a tela já faz isso antes de chamar o `OnSubmit`; aqui cobre o `TestLogin`; `user` não deve mais levar `.Trim()`, o original não apara);
   - trocar o `catch` por:
     ```csharp
     catch (Exception e)
     {
         Show("scrLogin");
         Debug.Log("[login] recusado: " + e.Message);
         // RefuseLogOn: o texto do motivo na faixa; sem texto (PlayFail, Cancel da lista) nada; falha de conexao:
         // a systemmsg 90 do OnLoginBtnClick [I]
         if (e is LoginError le) { if (le.Message.Length > 0) scrLogin.Msg(le.Message); }
         else scrLogin.Msg(LoginMessages.Text(new[] { 90 }));
     }
     ```

3. **Cancel da lista de servidores sem mensagem** (`NCServerSelectWnd::OnCancelBtnClick` 0x101a8ed0: desconecta e volta ao LoginState). Em `BuildScreens()`:
   ```csharp
   scrServers.OnCancel = () => serverChoice?.TrySetException(new LoginError(""));
   ```

4. **Queda da conexão no lobby = caixa NCGaraDialogBox com a systemmsg 127** (`NConsoleWnd::ServerClose` 0x1016ee60; OK → `ContinueServerClose` → `GotoLogin`). Em `ConnectGame()`, no `gc.OnClose`, trocar as duas linhas de mensagem:
   ```csharp
   Show("scrLogin");
   // Re-Login (leaving) volta ao login sem texto; queda da conexao: a caixa do ServerClose e o OK fica no login
   if (!leaving) LobbyUi.ShowServerClose(() => Show("scrLogin"));
   ```
   No jogo (`inWorld`) o original usa outro caminho (estado 5: `FUN_1016e1b0`, não lido na #0048); a mesma caixa fica como aproximação. E no `OnExit` do login apagar `scrLogin.Msg("Saindo...");` (o Exit fecha direto).

5. **Música do login** (`UL2ConsoleWnd::PlayIntroMusic`: `LS01_F`), depois do pedido 0039 da render: em `Show(id)`, no ramo `if (inLobby)`, chamar `music?.PlayIntro();` (o `music.Stop()` ao entrar no jogo já existe).

6. **(Opcional, decisão do usuário) ID vazio ao abrir.** O original não preenche o ID (`NCAuthWnd::OnCreate`/`ShowWindow` não põem texto). Hoje `BuildScreens()` faz `scrLogin.User.text = Config.Get("user", "");`. Para ficar igual, apagar essa linha (e o `Config.Set("user", user)` do `SubmitLogin`). Se o usuário preferir a comodidade, deixar como está.

## Por quê

Sem 1, o botão Options não faz nada (a janela de conexão do porte foi para o atalho Ctrl+Alt+O). Sem 2–4, a faixa mostra textos em português que o original não tem ("Conectando ao login server…", "selecao de servidor cancelada", "Conexão com o jogo encerrada (...)", "Você saiu do jogo."). Sem 5, o login fica mudo. Nada disso quebra a compilação: o código atual só fica diferente do original.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
- 2026-11-04 — coordenadora: itens 1 a 4 feitos no `main` (`12a8e52`). Item 5 (música) espera o pedido 0039 da render; item 6 (ID vazio) é decisão do usuário, mantido como está. `run_tests.sh` no `main`: 879/879 (`12a8e52`).
