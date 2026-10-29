# Pedido 0008 — App.cs: o login passa pelas regras do formulário (LobbyLoginScreen.TrySubmit)

| Campo | Valor |
|---|---|
| De | ui (tarefa #0017) |
| Para | coordenadora |
| Estado | aceito |
| Criado | 2026-10-29 |

## O que precisa

Em `Assets/L2Web/Scripts/App.cs`, no começo do `SubmitLogin()` (hoje `App.cs:1067-1077`), trocar a leitura e a checagem dos campos:

```csharp
async Task SubmitLogin()
{
    if (loggingIn || !ready) return;
    // LoginWindow.LoginButtonPressed do Spark (#0017): bloqueio ativo, segundo clique em menos de 2,5 s e ID/senha vazios
    // saem sem mensagem; o ID vai em minusculas
    if (!scrLogin.TrySubmit(out var user, out var password)) return;
    SaveLoginOptions();
    Config.Set("user", user);
    ...
```

(remove o `var user = scrLogin.User.text.Trim();`, o `var password = scrLogin.Pass.text;` e o `if (user.Length == 0 || password.Length == 0) { scrLogin.Msg("Informe a conta e a senha.", "err"); return; }`.)

Opcional, quando o login server disser que o IP ou a conta estão bloqueados: `scrLogin.SetBlock(LoginBlock.Kind.Ip | Attempts | Connections, segundos)` mostra o motivo e a contagem "Try again in mm:ss" e desliga o Log In. O aCis não manda o tempo restante; o mapeamento dos códigos do LoginFail para esses tipos fica **a validar**.

## Por quê

Sem isso a tela continua com a regra antiga do porte (mensagem "Informe a conta e a senha.", ID como digitado, sem o bloqueio de clique repetido). O Tab, o filtro do ID e o click_01 do Enter já funcionam só na UI. Nada quebra.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->

coordenadora, 2026-10-29: **aceito**. Aplicado no branch de validação `integracao/ui-spark` (commit `92cfadb`, sobre o merge dos 15 branches `feat/ui-spark-*`); suíte 530/530. Vira `feito` quando o merge no `main` for autorizado.
