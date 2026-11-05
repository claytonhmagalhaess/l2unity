# #0039 — Aprender skill e henna (T15)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-skill-henna` |
| Estado | no main |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T15; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

Aprender skill e henna, com o comportamento do Interlude levantado na #0024 (T15 do 05 §2). Tamanho estimado: M.

Ordem: 17ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-cla` (#0038). Depende de: nenhuma.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: `SkillTrainListWnd`/`SkillTrainInfoWnd`, `HennaListWnd`/`HennaInfoWnd`.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes (S→C `AcquireSkillList` 0x8a, `AcquireSkillInfo` 0x8b, `HennaEquipList` 0xe2, `HennaInfo` 0xe4; C→S `RequestAcquireSkillInfo` 0x6b, `RequestAcquireSkill` 0x6c, `RequestHennaEquip` 0xbc) lidos e montados pelo código da #0046 (vaga `net`), depois que ela estiver no `main`; o que faltar lá vira pedido em `tarefas\pedidos\`, sem editar `Scripts\Net\`.
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/skill-henna/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — bloqueada: aguardando #0046 no main. S→C `AcquireSkillList`/`AcquireSkillInfo`/`HennaEquipList`/`HennaInfo` e C→S `RequestAcquireSkill*`/`RequestHennaEquip` não existem no `main`. Branch não criado (a vaga seguiu para a próxima tarefa da cadeia sem pacote novo).
- 2026-11-03 — desbloqueada (#0046 no `main`); branch `feat/ui-skill-henna` criado de `feat/ui-cla` (afb7427).
- 2026-11-03 — `TreeModel` e `L2TreeCtrl` saem do QuestTreeWnd (`aa2e818`).
- 2026-11-03 — `SkillTrainScript`, `HennaScript`, `HennaGrp`, `SkillHennaView`, `SkillHennaTests` (`a90909d`); âncoras da sub-janela embutida no host e ícones da árvore (`78a9225`).
- 2026-11-03 — `sh Docs/tools/run_tests.sh`: 691/691 (exit 0).
- 2026-11-03 — capturas offline e linha K28. aCis fora do ar.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

- [O] SkillTrainListWnd: `EV_SkillTrainListWndShow` limpa, guarda o tipo (0 normal, 1 pesca, 2 clã, 3 encantamento), fecha o SkillTrainInfoWnd, título 477 (1436 no clã) e "ss92 / SP" ("ss1372 / reputação" no clã); o encantamento esconde o SP (OnShow). Nó "id,nível" sem botão, fundo IconSelect2 38 de altura em (−7, 2), molduras 34/35, ícone 32, nome, "ss88 nível" e "ss365 : SP" (ss1437 no clã) na 2ª linha; no encantamento, o nome do encantamento. Clique = `RequestAcquireSkillInfo(id, nível, tipo)`, fecha e volta a rolagem ao topo.
- [O] SkillTrainInfoWnd: título por tipo; SubWndNormal ou SubWndEnchant (as duas são janelas do xdat embutidas); nome, nível, tipo de uso, MP, descrição, SP necessário; alcance só com ≥ 0; o item necessário fica escondido até o `EV_SkillTrainInfoWndAddExtendInfo` ("nome X n"); Learn = `RequestAcquireSkill(id, nível, tipo)`; List fecha e mostra a lista.
- [O] HennaListWnd: pintar = título ss651, texto ss659; apagar = ss652, ss660; adena com o número por extenso na dica; nó do id (IconSelect2 46 em (−7, 8)), ícone 32 em y 15, nome (y 17 ao pintar, 10 ao apagar), descrição na 2ª linha só ao apagar, "ss637 : " (168) + a taxa na cor do número (`GetNumericColor`); clique = `RequestHennaItemInfo` / `RequestHennaItemRemoveInfo`.
- [O] HennaInfoWnd: corante e tatuagem nos dois painéis (ao apagar, a tatuagem vem primeiro e o nome sai "ss652:nome"), "ss637 : " em 168, a taxa na cor do número, "ss469" em amarelo, e os 6 atributos antes e depois; todo botão fecha antes; OK = `RequestHennaEquip`/`RequestHennaRemove`; Back = `RequestHennaList`/`RequestHennaRemoveList`.
- [O] `hennagrp-e.dat`: d id, d item do corante, ASCF nome, ícone, descrição e nome adicional (180 registros). O ícone vem com o pacote "icon." e o porte usa o nome sem ele.
- [I] Nome, ícone e descrição da skill e do item pelos .dat do porte (skillname, skillgrp e itemname), como o `InterfaceEvents` pede; reputação do clã (`GetClanNameValue`) pela do ClanWnd.
- O L2Wnd passou a resolver a âncora de um controle de sub-janela embutida que aponta para um controle da janela que a embute (`SkillTrainInfoWnd.txtName` dentro do `SubWndNormal`).
- Divergência: o Net não tem `RequestExEnchantSkillInfo`/`RequestExEnchantSkill`, então o encantamento de skill mostra a janela, mas não pede nada.

## Entrega

- **Commits:** `aa2e818` (TreeModel e L2TreeCtrl), `a90909d` (código e `SkillHennaTests`), `78a9225` (âncoras e ícones), `c635cae` (evidências e K28).
- **Testes:** `SkillHennaTests` (lista e clique, detalhe e aprender, lista de tatuagens e taxa, detalhe e botões, hennagrp-e.dat do cliente); `sh Docs/tools/run_tests.sh` 691/691.
- **Falta / fora do escopo:** encantamento de skill (pacotes `ExEnchantSkill*` no Net); teste ao vivo no aCis.

## Pedidos

Nenhum por enquanto.
