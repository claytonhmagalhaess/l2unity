# #0017 — Lobby: Login

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-L1-login` |
| Estado | pronta p/ merge |
| Spec | `89_telas_nativas.md` (NCAuthWnd) |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Comportamento da tela de login, sobre as telas NC* do Interlude.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Tab alterna os campos; Enter/KeypadEnter = click_01 + login
- [ ] Usuário validado por ^[a-zA-Z0-9]{0,16}$ e enviado em minúsculas; segundo clique em menos de 2,5 s ignorado; usuário com senha vazia volta sem mensagem
- [ ] Bloqueio por IP, tentativas ou conexões mostra o motivo + "Try again in mm:ss" com contagem
- [ ] Quedas mostram "Could not connect to the login server…" / "The login server closed the connection without answering…" numa confirmação
- [ ] Exit e botão Options (Options do login: só Video e Audio, ver #0016)
- [ ] Sem o login automático "Shnok"/"1234" (decisão 4)
- [ ] Easy Login: **bloqueado: decisão do usuário** (a coordenadora levou a proposta ao usuário)
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

- 2026-10-29 — branch `feat/ui-spark-L1-login` saído da ponta do `10` (`8973c9c`).
- 2026-10-29 — `Scripts/UI/UiLobbySpark.cs` (LoginForm, LoginBlock, LoginTexts); `LobbyLoginScreen`: filtro do ID, Tab, Enter com click_01, `TrySubmit`, `SetBlock`; 4 testes em `SparkLoginTests.cs` (`f2e45bb`). Pedido 0008 ao App.

## Decisões e REA

- **Observado** `LoginWindow.LoginButtonPressed@0x18079e420`: bloqueio ativo sai; segundo clique com menos de **2,5 s** desde o anterior é ignorado (só um aviso no log); ID **e** senha vazios preenchem "Shnok"/"1234" (login de depuração — **não portado**, decisão 4); senha vazia sai **sem mensagem**; o ID vai com `ToLower`; guarda o instante e conecta.
- **Observado** `OnLoginInputChanged`: o texto novo só fica se casar com `^[a-zA-Z0-9]{0,16}$`. `OnKeyPressed`: Enter/KeypadEnter tocam `click_01` e chamam o login.
- **Observado** `LoginWindow.Update@0x1807a3340`: com bloqueio por IP (`+0x10`) mostra "This IP address is blocked from logging in."; senão, com prazo (`+0xc`), "Too many login attempts." (ou "Too many connections in a short time." quando `+0x14 == 2`) + " Try again in " + mm:ss, refazendo o texto quando o segundo muda; o botão fica desligado.
- **Interlude**: o NCAuthWnd tem o ID em 128×17 e o porte já limitava a **14** caracteres alfanuméricos (o campo do RequestAuthLogin); vale o 14 do Interlude dentro do padrão do Spark (até 16). O aCis também põe o ID em minúsculas no servidor.
- **Divergência**: o porte mostrava "Informe a conta e a senha." com campo vazio; o Spark sai calado. Sem evidência do NCAuthWnd, vale o Spark (pedido 0008 para o App usar o `TrySubmit`).
- **Enter no ID**: o porte movia o foco para a senha; o Spark tenta o login (e sai calado se a senha está vazia). Ficou: com a senha preenchida entra (Spark); vazia, vai para a senha (porte).
- **Bloqueio**: o gatilho do Spark vem do servidor dele (tempo restante); o aCis não manda o tempo → `LobbyLoginScreen.SetBlock` existe, o mapeamento a partir do LoginFail fica **a validar**.
- **Quedas**: `LoginClient.OnConnectionFailed` = "Could not connect to the login server. Please try again …" e `OnDisconnect` = "The login server closed the connection without answering…" num `L2ConfirmWindow`. A REA corta os dois literais em 60 caracteres (o resto: **a validar**); ficaram em `LoginTexts`. No porte as falhas do login aparecem na faixa de mensagem da tela (App); trocar para uma confirmação é **a validar** (o lobby não tem DialogBox; o NCKeyCryptWarningDialogBox do Interlude é outro diálogo).
- **Exit e Options**: já existiam (NCAuthWnd Exit; NCLoginFunctionWnd Options). As Opções do login do Spark (só Video e Audio) são da #0016.
- **Easy Login**: **bloqueado: decisão do usuário** (SparkEasyLogin; não implementado).

## Entrega

- **Commits:** `f2e45bb` UI: login do lobby com Tab, Enter com click_01, filtro do ID, 2,5 s, senha vazia silenciosa e aviso de bloqueio.
- **Testes:** `sh Docs/tools/run_tests.sh` → total 517, passou 517, falhou 0 (+4 em `SparkLoginTests`).
- **Tabela comportamento Spark → l2unity → teste:**

| Comportamento Spark | Onde no l2unity | Teste (`SparkLoginTests`) |
|---|---|---|
| Tab alterna os campos | `Scripts/UI/LobbyLoginScreen.cs:78`, `LobbyLoginScreen.cs:150`, `LobbyLoginScreen.cs:158` | `Tela_FiltroEnterComClickETab` |
| Enter/KeypadEnter = click_01 + login | `LobbyLoginScreen.cs:161` | `Tela_FiltroEnterComClickETab` |
| ID por ^[a-zA-Z0-9]{0,16}$ (no limite de 14 do Interlude) | `UiLobbySpark.cs:79`, `LobbyLoginScreen.cs:61` | `Usuario_SoLetrasEDigitos`, `Tela_FiltroEnterComClickETab` |
| ID em minúsculas; 2,5 s; senha vazia sem mensagem; sem Shnok/1234 | `UiLobbySpark.cs:86`, `LobbyLoginScreen.cs:171` | `Envio_RepetidoVazioEMinusculas` |
| Bloqueio: motivo + "Try again in mm:ss" | `UiLobbySpark.cs:49`, `UiLobbySpark.cs:59`, `LobbyLoginScreen.cs:174` | `Bloqueio_MotivoEContagem`, `Tela_FiltroEnterComClickETab` |
| Textos de queda | `UiLobbySpark.cs:17` | — (texto cortado na REA; a validar) |

- **Falta / fora do escopo:**
  - **Bloqueado: decisão do usuário** — Easy Login.
  - Pedido 0008 (App.cs): `SubmitLogin` pelo `TrySubmit`.
  - A validar: o resto dos textos de queda; quedas numa confirmação; gatilho do bloqueio no aCis.
  - Opções do login (Video/Audio): #0016.

## Pedidos

- [pedido 0008: App.cs — login pelo TrySubmit](pedidos/0008-ui-login-app.md)
