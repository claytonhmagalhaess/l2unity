# #0055 — HTML do servidor renderizado como no original

| Campo | Valor |
|---|---|
| Vaga | ui4 (vaga nova, `worktrees\ui4`) |
| Branch | `feat/ui-html` (nasce de `feat/ui-revisao`, #0047) |
| Estado | fazendo |
| Spec | `analises\l2-interlude\client_spec\` (NCHtmlViewer, NpcHtmlMessage, ShowBoard, 89, 96); `analises\interface-p166\02_interacoes.md` (roda e cliques no `NCHtmlViewer`); `UI/L2Html.cs` |
| Sessão | ui: HTML do servidor (#0055) |
| Criada | 2026-11-04 |

## Objetivo

Os HTMLs que o servidor manda (NpcHtmlMessage, ShowBoard/Community Board, TutorialShowHtml e as janelas de quest) aparecem quebrados no porte. O usuário viu dois exemplos:
- o Community Board abre com as abas e as linhas, mas sem o conteúdo;
- o buffer mostra a lista de buffs com os botões, mas os ícones das skills não aparecem.

No cliente original, tudo isso funciona. Esta tarefa faz o visualizador de HTML do porte suportar o que o NCHtmlViewer do original suporta, com o mesmo layout.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Levantamento, com evidência (`NCHtmlViewer` e o parser no NWindow do Tryskell ou na REA, a spec), de cada tag e atributo que o original aceita, e de como desenha:
  - `html`, `body`, `title`, `br`, `p`, `center`, `font` (color), `a` (action bypass/link/url);
  - `button` (value, action, width, height, back, fore), `img` (src com `icon.*`/`L2UI*`, width, height), `table`/`tr`/`td` (width, height, align, valign, bgcolor, background, cellpadding, cellspacing, border);
  - `edit`, `multiedit`, `combobox` e as variáveis `$`;
  - as entidades, as cores por nome e #hex e as quebras de linha.

  A tabela fica em `Docs/html_suporte.md`, com o estado de cada item no porte.
- [ ] O tamanho e a rolagem do texto, a roda do mouse e o clique nos links e botões são iguais ao original.
- [ ] Todos os HTMLs do `data\html` do aCis (somente leitura em `C:\Workspace-java\aCis_gameserver`) passam pelo parser do porte sem erro. Um teste percorre a pasta e falha em tag ou atributo não suportado. O que o original ignora fica registrado como ignorado.
- [ ] Os ícones (`img src="icon.skill0000"` e outros pacotes de textura), as texturas de fundo e os botões com `back`/`fore` aparecem. O que faltar no `shared` vira pedido de exportação para a coordenadora, com o comando exato.
- [ ] O Community Board mostra o conteúdo de todas as abas como no original (`ShowBoard` com as várias partes do HTML).
- [ ] A janela do buffer da captura do usuário (lista de buffs com ícone, nome e descrição) fica igual ao original.
- [ ] O que for de `Scripts\Net\` vira pedido para a net, e o que for do `App.cs` vira pedido para a coordenadora, em `tarefas\pedidos\`.
- [ ] Testes EditMode (parser e layout de amostras: tabela com ícone, botão com textura, fontes e cores, board). `sh Docs/tools/run_tests.sh` sem falhas novas em relação a `feat/ui-revisao`.
- [ ] Capturas antes e depois em `Docs/evidencias/html/`, tiradas no aCis local (buffer, gatekeeper, board, uma quest), e uma linha em `Docs/validacao.md`.

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
