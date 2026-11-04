# Pedido 0038 — LoginClient: contrato (LoginOk) e queda da conexão sem texto próprio

| Campo | Valor |
|---|---|
| De | ui (tarefa #0048) |
| Para | net |
| Estado | aberto |
| Criado | 2026-11-04 |

## O que precisa

Em `Assets/L2Web/Scripts/Net/LoginClient.cs` (evidências em `Docs/login_lacunas.md`, linhas "Contrato" e "Queda da conexão"):

1. **Contrato de licença.** Hoje o `case 0x03` (LoginOk) manda o `RequestServerList` direto. No original (`FUN_1014ba00`, NWindow), com o texto `eula` do `EULA-e.dat` carregado, o LoginOk abre o `NCEulaWnd` no `EulaMsgState`; Agree (`OnOkBtnClick` 0x1018fed0) pede a lista (`console+0x7bc`), Disagree (`OnCancelBtnClick` 0x1018f7a0) desconecta e volta ao LoginState. Sem texto, vai direto para a lista. Sugestão:
   ```csharp
   // LoginOptions
   /// <summary>LoginOk: mostra o contrato e devolve true (Agree) ou false (Disagree); null = vai direto para a lista.</summary>
   public Func<Task<bool>> ShowLicence;
   ```
   ```csharp
   case 0x03:
   {
       loginOk1 = r.D();
       loginOk2 = r.D();
       log("LoginOk");
       AskLicence();
       break;
   }
   ...
   async void AskLicence()
   {
       try
       {
           var ok = opts.ShowLicence == null || await opts.ShowLicence();
           if (done) return;
           if (!ok) { Fail(new LoginError("")); return; }
           Send(LoginPackets.RequestServerList(loginOk1, loginOk2));
       }
       catch (Exception e) { Fail(e); }
   }
   ```
   O aCis local está com `ShowLicence = False` (manda o ServerList sem LoginOk), então isto só aparece com `ShowLicence = True`. A janela (UI) fica para uma tarefa da ui depois deste pedido; as medidas já estão na `NativeLayout` (`Eula*`).

2. **Queda da conexão sem texto em português.** `t.OnClose` hoje falha com `LoginError($"login server fechou a conexao ({reason})")`, e esse texto vai para a faixa do login. No original a queda chama o `NConsoleWnd::ServerClose` (caixa com a systemmsg 127). Sugestão: uma exceção própria, sem texto, que o App reconheça:
   ```csharp
   public sealed class LoginConnectionLost : LoginError { public LoginConnectionLost() : base("") { } }
   ...
   t.OnClose = reason => { if (!done) { log("login server fechou a conexao (" + reason + ")"); Fail(new LoginConnectionLost()); } };
   ```
   (`LoginError` precisa deixar de ser `sealed`, se for.) O mesmo vale para os outros textos internos ("checksum invalido...", "GGAuth antes do Init", "nenhum servidor disponivel"): mandar para o `log` e falhar com `LoginError("")`, porque o original não mostra nada disso.

## Por quê

Sem 1, um servidor com `ShowLicence = True` nunca mostra o contrato (o cliente concorda sozinho). Sem 2, a faixa mostra mensagens que o original não tem. Nada quebra hoje; o pedido 0037 (App.cs) já trata `LoginError` sem texto como "sem mensagem", e depois deste pedido a coordenadora pode trocar a `LoginConnectionLost` pela caixa `LobbyUi.ShowServerClose`.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
