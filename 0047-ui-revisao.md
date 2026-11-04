# #0047 — Revisão de toda a interface já implementada

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-revisao` (nasce de `feat/ui-grupo-uniao-duelo`, fim da cadeia #0026–#0045) |
| Estado | fazendo |
| Spec | `analises\interface-p166\01_janelas.md`, `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` (UI em `01`–`07`, `89`, `90`, `91`, `96`, `98`) |
| Sessão | ui: revisão da interface |
| Criada | 2026-11-04 |

## Objetivo

O usuário testou o cliente no aCis local e encontrou coisas que já estavam marcadas como feitas e não funcionam como no Interlude. Exemplos:
- a janela de Options;
- o Community Board;
- a animação em cima do slot da barra de atalhos quando uma skill é usada ou o soulshot automático está ligado;
- os itens do System Menu (Community, Macro, Help, Petition, Options, Restart, Exit Game).

Esta tarefa revisa tudo o que já existe na UI do `l2unity` (o `main` e a cadeia #0026–#0045), compara com o original e corrige as divergências.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] `Docs/revisao_ui.md`: uma linha por janela e por elemento da HUD que o `l2unity` já tem. Cada linha registra:
  - o que o original faz (layout do xdat, comportamento do `Interface.u` e da `client_spec`, interações do `02_interacoes.md`);
  - o que o `l2unity` faz, conferido no jogo com o aCis local;
  - a divergência, se houver;
  - o estado: igual, corrigido, pedido ou fora do escopo.
- [ ] System Menu: cada item abre a janela ou faz a ação do original, sem botão morto:
  - Community: abre o Community Board (`RequestShowBoard`, `ShowBoard`);
  - Macro, Help, Petition e Options abrem as janelas correspondentes;
  - Restart e Exit Game pedem confirmação e fazem a ação.
- [ ] Options: abas, controles e valores iguais ao original, gravados e relidos em `L2Options`, e cada opção com efeito no jogo ou marcada como fora do escopo, com o motivo.
- [ ] Community Board: abre pelo System Menu e pela tecla do original. Os links e botões do HTML do servidor (`bypass`, voltar, páginas) funcionam com o aCis.
- [ ] Barra de atalhos, igual ao original:
  - a animação sobre o slot quando o soulshot ou spiritshot automático está ligado;
  - a animação de uso e o tempo de recarga ao usar uma skill ou um item;
  - o estado das skills de liga e desliga.

  Cada uma leva a textura e o handler do original como evidência.
- [ ] Todas as outras divergências do `revisao_ui.md` são corrigidas nesta tarefa ou registradas: o que depende de pacote vira pedido para a net, e o que depende de `App.cs` vira pedido para a coordenadora, em `tarefas\pedidos\`.
- [ ] Um commit por correção, com a evidência na mensagem, e testes EditMode para a lógica corrigida. `sh Docs/tools/run_tests.sh` sem falhas novas em relação a `feat/ui-grupo-uniao-duelo`.
- [ ] Capturas antes e depois em `Docs/evidencias/revisao/`, tiradas no aCis local.
- [ ] Linha em `Docs/validacao.md`.

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
