# #0031 — Pet e servo: `PetStatusWnd`, `SummonedStatusWnd`, `PetWnd`, `SummonedWnd` (T7)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-pet-servo` |
| Estado | no main |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T7; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

Pet e servo: `PetStatusWnd`, `SummonedStatusWnd`, `PetWnd`, `SummonedWnd`, com o comportamento do Interlude levantado na #0024 (T7 do 05 §2). Tamanho estimado: G.

Ordem: 14ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-frete` (#0042). Depende de: T1.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: barras e clique de seleção; inventário do pet com uso e arrastar ↔ inventário; ações do pet e do servo; ações de pet arrastáveis para a barra.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes (S→C `PetStatusShow` 0xb0, `PetInfo` 0xb1, `PetItemList` 0xb2, `PetInventoryUpdate` 0xb3, `PetStatusUpdate`; C→S `RequestPetUseItem` 0x8a, `RequestGiveItemToPet` 0x8b, `RequestGetItemFromPet` 0x8c, `RequestActionUse`) lidos e montados pelo código da #0046 (vaga `net`), depois que ela estiver no `main`; o que faltar lá vira pedido em `tarefas\pedidos\`, sem editar `Scripts\Net\`.
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/pet-servo/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — bloqueada: aguardando #0046 no main. C→S `RequestPetUseItem` 0x8a, `RequestGiveItemToPet` 0x8b e `RequestGetItemFromPet` 0x8c não existem no `main` (o `PetPackets` só lê parte do S→C). Branch não criado (a vaga seguiu para a próxima tarefa da cadeia sem pacote novo).
- 2026-11-03 — desbloqueada (#0046 no `main`); branch `feat/ui-pet-servo` criado de `feat/ui-frete` (78caef4).
- 2026-11-03 — `PetScript`, `PetView`, `PetTests`; `ListItem.Equipped`; `GameUi.DoAction`/`DropOnInventory` (`3d8e973`).
- 2026-11-03 — parser do `actionname-e.dat` corrigido (`61c9cc0`).
- 2026-11-03 — pedido 0029 para a vaga `net`: tipo do invocado trocado no 0xb0/0xb1.
- 2026-11-03 — `sh Docs/tools/run_tests.sh`: 669/669 (exit 0).
- 2026-11-03 — capturas offline e linha K25 (`e1c588b`). aCis fora do ar.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

- [O] Tipo: `GetIsPetOrSummoned` 2 = pet, 1 = servo; o `OnShow` de cada barrinha fecha se o tipo não confere (`IL:PetStatusWnd.uc:23-39`, `IL:SummonedStatusWnd.uc:25-43`). No aCis, `Pet.getSummonType()` = 2 e `Servitor` = 1, valor do 0xb0/0xb1; o `InterfaceEvents` da #0046 usa o contrário (pedido 0029). O `PartySpelled` usa 2 = servo e está certo.
- [O] Barrinhas: `Handle*StatusShow` = Clear e mostra; `EV_UpdatePetInfo` = nome, HP, MP e fome (pet); `EV_SummonedStatusRemainTime` na 1ª vez limpa os buffs e começa, depois `SetPos` (`IL:SummonedStatusWnd.uc:104-124`); `EV_PetSummonedStatusClose` fecha as quatro e zera o tempo; buffs com ícone de nível 1, 16 px, 10 por linha; btnBuff alterna, `EV_ShowBuffIcon` Show == 1 liga; clique em x ∈ (13, largura − 10) = `RequestAction(m_PetID)` (pelo `Party.Action`).
- [O] PetWnd: barras `85*cur/max` (HP, MP, peso), `206` (EXP com `int(rate)` de 100, fome), cheia se cur ≥ max e 0 sem máximo; peso ps_weightbar1 até 50%, 2 até 66.66, 3 até 80, 4 acima; `txtLvName = Level $ " " $ Name`; nome: OKCancelInput sm535 → `RequestChangePetName`, `EV_PetWndRegPetNameFailed` escreve a mensagem em (176,155,121) e reabre, repondo o texto só no MsgNo 80; `EV_PetWndShowNameBtn` liga e desliga o botão.
- [O] Inventário do pet: Start limpa, List adiciona, Update com `WorkType` 1/2/3 pelo `FindItemWithClassID` (classID < 1 ignora); equipado com `ForeTexture` petitem_click; duplo clique e clique direito = `RequestPetUseItem`; do InventoryItem para o `PetInvenWnd`: empilhável com mais de 1 pede o número sm72 (sem DefaultOK) ou vai tudo com Alt, senão 1 (`IL:PetWnd.uc:46-69`); para o inventário passa pelo `InventoryWnd.OnDropItem` (`RequestGetItemFromPet`, já da #0026); para a barra com UserShortCut 2.
- [O] Ações: `HandleActionPetList` só aceita `Type == ACTION_PET` (4) e o servo `ACTION_SUMMON` (5) (`UIEventManager.uc:491-499`); clique = `DoAction` (RequestActionUse); arrastáveis para a barra (15–27 com UserShortCut 2, da #0028).
- [I] `RequestPetActionList`/`RequestSummonedActionList` montam a lista no cliente: as ações do `actionname-e` da categoria cuja lista de NPCs tem -2 ou o NPC do invocado. Kat the Cat (14111) fica com 21, 22, 23, 45, 52, 53; o lobo com 15–19 e 54.
- [I] `RequestPetInventoryItemList` repete a lista do router (`PetItemList` + `PetInventoryUpdate`), sem pacote.
- [O] `actionname-e.dat`: tag, id, type, category, **índice compacto** n, n × d (NPCs), ASCF nome, ícone e descrição, e o comando em **UNICODE** (d bytes + UTF-16); 102 ações, 13 bytes de rodapé. O parser antigo lia o n como d e desalinhava no 1º registro, deixando a tabela vazia (as dicas e o comando das ações nunca vinham). O txt do l2disasm tem o mesmo erro.
- [I] GetPetInfo: o último PetInfo e, por cima, o PetStatusUpdate mais novo do mesmo objectId (HP, MP, fome, nível, EXP).
- [A validar] Escala do `GetPetEXPRate` (usei 0..100) e o float → texto (duas casas, como o EXP do DetailStatusWnd); unidade do tempo do servo (ms, pelo aCis).
- Divergências: sem os sons de abrir/fechar das barrinhas (não têm moldura); OnEnterState não desliga os buffs.

## Entrega

- **Commits:** `3d8e973` (código e `PetTests`), `61c9cc0` (parser do actionname-e e `TooltipTests`), `e1c588b` (evidências e K25).
- **Testes:** `PetTests` (dados do PetInfo e do status, barras, peso, textos, inventário pelo WorkType, dar item, nome, ações pela categoria e NPC no sintético e no arquivo do cliente, buffs, tempo do servo), `TooltipTests.SkillName_E_ActionName` com o formato certo; `sh Docs/tools/run_tests.sh` 669/669.
- **Falta / fora do escopo:** pedido 0029 (net); teste ao vivo (invocar pet e servo no aCis); escala do EXP do pet.

## Pedidos

- `pedidos/0029-ui-tipo-invocado.md` (net): tipo do invocado trocado no 0xb0/0xb1.
