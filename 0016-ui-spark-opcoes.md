# #0016 — Opções (proposta antes do código)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-spark-11-opcoes` |
| Estado | bloqueada |
| Spec | `04_opcoes_e_menus.md` (OptionWnd) |
| Sessão | ui: porte da HUD Spark |
| Criada | 2026-10-29 |
| Tarefa-mãe | [#0005](0005-ui-spark-hud.md) |

## Objetivo

Como as 6 abas de Opções do Spark convivem com a OptionWnd do xdat (e a versão do login, só Video e Audio).

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] **Primeiro passo:** proposta escrita neste arquivo (abas, controles, chaves, o que vem do xdat e o que é novo, versão do login). Código só depois da resposta do usuário; até lá **bloqueado: decisão do usuário**
- [ ] Video só aplica no Apply, exceto brilho e efeitos (prévia ao vivo); Cancel/X/Esc desfaz; Game Play e Chat gravam na hora; Reset só da aba atual
- [ ] A parte gráfica (URP, sombras, FSR, céu, clima) vira pedido à render
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
- `analises\spark-l2unity\hud\opcoes.md` (inteiro)

## Andamento

- 2026-10-29 — proposta escrita abaixo (Decisões e REA), a partir de `analises\spark-l2unity\hud\opcoes.md`, da spec 04 §2 (OptionWnd do Interlude) e do `OptionWnd.cs` do porte. **Sem código e sem branch**: a tarefa fica **bloqueada: decisão do usuário** (desenho das Opções). O que as outras tarefas já deixaram pronto para as Opções usar: `SparkKeys.BeginCapture`/`Feed`/`Save` (#0008), `GameUi.SetBarScale` (#0009), `GameUi.SetBuffIconSize` (#0012), `GameUi.ResetLayout` (#0006).

## Decisões e REA

### Proposta (para o usuário escolher)

**O que já existe.** O porte tem a `OptionWnd` do Interface.xdat (256×480, abas Video/Audio/Game de 74×23, rodapé OK/Cancel/Apply, `Option.ini`), com o ciclo do `OptionWnd.uc`: `OnShow` relê o INI; OK = Apply + FirstRun=2 + fecha; Apply grava sem fechar; Cancel desfaz **só o áudio** (prévia dos sliders) e fecha. O Spark tem 6 abas (Video · System/Audio · Game Play · Shortcut · Chat · UI), com prévia ao vivo de brilho/efeitos, Cancel/X/Esc desfazendo tudo, Game Play e Chat gravando na hora, Reset Settings só da aba atual e Reset Window Location.

**Opção recomendada (C): manter a OptionWnd do Interlude e pôr o que é só do Spark numa janela à parte.**

| Aba do Spark | Onde fica | Observação |
|---|---|---|
| Video | aba **Video** do Interlude (como está) | os itens só do Spark (render scale, FSR, SMAA, Bloom/DOF/Cinema, céu, clima, efeitos, distância de nome/detalhe, limite de FPS/FPS sem foco, mostrar FPS/ping) são da render → **pedido à render** depois da resposta, com a lista de cada item |
| System/Audio | aba **Audio** do Interlude | Music = `MusicVolume`, SFX = `SoundVolume`, Mute All = `AudioMuteOn`; novos: Total, Ambiente, Interface, "Mute in background" (chaves novas) |
| Game Play | aba **Game** do Interlude | party loot do Spark manda o bypass `spk_loot` (decisão 3: fora); o combo `PartyLooting` do Interlude já existe. Anel da party e cor (render), inverter Y/roda (câmera: world/render) |
| Chat | **não** vira aba: o Interlude já tem `EnterChatting` (aba Game) e a `ChatFilterWnd` (filtros por aba + SystemMsgWnd) | o "Chat Options" do Spark é o mesmo conteúdo |
| Shortcut | janela nova **"Shortcut"** montada com os controles do xdat (caixa `EditBox`, botões `BTN1_normal`, abas `normal_tab`) | lista do `SparkKeys` em grupos, 2 caixas por ação, "Press a key...", Reset com "Reset every key to the default?" |
| UI | mesma janela nova, aba **"UI"** | escala da barra (#0009), ícone de buff 24–30 (#0012), opacidade do fundo do chat; texto de dano e céu/clima são da render |

A janela nova abriria por um botão no rodapé da OptionWnd ou pelo menu do sistema — **não há botão no xdat**: é invenção de layout e precisa do seu OK.

**Alternativa (B):** alargar o `TabCtrl` da OptionWnd para 6 abas. Fica igual ao Spark, mas muda o layout do Interface.xdat (as 3 abas de 74×23 ocupam os 224 px).

**Alternativa (A):** não portar as abas novas; só as chaves que o Interlude já tem e os gestos por tecla (Alt+L, ".", etc.).

### Pontos que precisam da sua resposta

1. **Desenho**: C (recomendada), B ou A.
2. **Cancel/X/Esc**: Interlude (desfaz só o áudio; vídeo e jogo só gravam no OK/Apply) ou Spark (prévia ao vivo de brilho e efeitos, e o Cancel desfaz tudo).
3. **Game Play e Chat**: gravar na hora (Spark) ou no OK/Apply (Interlude).
4. **Opções no login**: só Video e Audio (Spark `SoVideoEAudio`) ou as 3 abas (o `OptionWnd.uc` registra `LoginState` com todas). Hoje o login do porte tem uma janela própria de servidor/assets/protocolo.
5. **Reset**: "Reset Settings" só da aba atual (Spark) — o Interlude não tem; "Reset Window Location" já existe (`WindowInitBtn`).
6. **Chaves novas**: no `Option.ini` (seção nova, ex. `[L2Web]`) ou no `Config` (PlayerPrefs `l2web.opt.*`, como as teclas da #0008).
7. **Quais itens gráficos do Spark** entram no pedido à render (lista na linha Video acima).

### Evidência usada

- `opcoes.md` §1–§4 (abertura/fechamento, controles, cada opção com campo/chave/padrão); spec 04 §2.1–§2.6 e §7.1 (OptionWnd e Option.ini); `OptionWnd.cs` do porte.

## Entrega

- **Commits:** nenhum no repo (só a proposta neste arquivo).
- **Testes:** não rodados (sem código).
- **Tabela comportamento Spark → l2unity → teste:** depois da resposta.
- **Falta / fora do escopo:** tudo o que é código, até a resposta aos 7 pontos acima. O pedido à render da parte gráfica é aberto junto com o código.

## Pedidos

- nenhum ainda (o da render sai depois da resposta).
