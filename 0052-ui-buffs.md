# #0052 — Janela de buffs: tempo, tooltip e tipos iguais ao original

| Campo | Valor |
|---|---|
| Vaga | ui2 (vaga nova, `worktrees\ui2`) |
| Branch | `feat/ui-buffs` (nasce de `feat/ui-revisao`, #0047) |
| Estado | fazendo |
| Spec | `analises\interface-p166\02_interacoes.md` (tooltip `AbnormalStatus`, AbnormalStatusWnd), `analises\l2-interlude\client_spec\` (AbnormalStatusWnd, 96, pacotes AbnormalStatusUpdate/PartySpelled/ShortBuffStatusUpdate); `Docs/revisao_ui.md` (#0047) |
| Sessão | ui: buffs (#0052) |
| Criada | 2026-11-04 |

## Objetivo

O usuário testou a janela de buffs (AbnormalStatusWnd) no aCis local e viu dois problemas:
- os buffs com menos de 60 s de duração restante não mostram o tempo sobre o ícone, como no original;
- o tooltip ao passar o mouse não está como o do original.

Há tipos diferentes para validar:
- buff;
- debuff;
- dança e canção;
- buff curto de poção/ShortBuff;
- skills passivas e de liga e desliga (toggle) que aparecem na janela;
- buffs de pet e de grupo.

Esta tarefa compara tudo com o original e implementa igual.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Levantamento, com evidência (`AbnormalStatusWnd.uc` e as janelas de buff do grupo e do pet no `Interface.u` exportado, NWindow no Tryskell ou na REA, `skillname-e.dat`/`skillgrp`, pacotes no aCis), de:
  - a ordem e o agrupamento dos ícones por tipo (buff, debuff, dança/canção, toggle) e as linhas;
  - o número máximo e a quebra de linha;
  - o texto do tempo restante sobre o ícone: a partir de quantos segundos aparece, o formato, a fonte, a cor e a posição;
  - o piscar perto do fim, se existir;
  - o tooltip de cada tipo: nome, nível, descrição, tempo restante e formato, e as diferenças entre buff, debuff, toggle e passiva;
  - o clique, com e sem modificador, e se cancela ou não no Interlude.
- [ ] O tempo restante aparece sobre o ícone como no original, inclusive para os buffs com menos de 60 s, e conta regressivamente sem pedir nada ao servidor.
- [ ] O tooltip de cada tipo é igual ao do original.
- [ ] Os toggles e as passivas que o original mostra na janela aparecem e somem conforme liga e desliga, com o visual do original.
- [ ] A janela de buffs do grupo (PartySpelled) e a do pet seguem o mesmo comportamento, quando o original faz assim.
- [ ] Todas as divergências são corrigidas ou registradas. O que for de `Scripts\Net\` vira pedido para a net, e o que for do `App.cs` vira pedido para a coordenadora, em `tarefas\pedidos\`.
- [ ] Testes EditMode para a lógica (formato do tempo, ordem e agrupamento, linhas do tooltip por tipo). `sh Docs/tools/run_tests.sh` sem falhas novas em relação a `feat/ui-revisao`.
- [ ] Capturas antes e depois em `Docs/evidencias/buffs/`, tiradas no aCis local, e uma linha em `Docs/validacao.md`.

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
