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

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

Nenhum por enquanto.
