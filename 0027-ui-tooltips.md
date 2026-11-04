# #0027 — Mecanismo de tooltip do original e os tipos `Inventory*`, `Skill`, `Shortcut`, `AbnormalStatus`, `Action`, `Text` (T3)

| Campo | Valor |
|---|---|
| Vaga | ui |
| Branch | `feat/ui-tooltips` |
| Estado | no main |
| Spec | `analises\interface-p166\05_lacunas_e_tarefas.md` T3; `02_interacoes.md`, `03_teclado.md`; `analises\l2-interlude\client_spec\` |
| Sessão | ui: interface T1–T21 |
| Criada | 2026-11-03 |

## Objetivo

Mecanismo de tooltip do original e os tipos `Inventory*`, `Skill`, `Shortcut`, `AbnormalStatus`, `Action`, `Text`, com o comportamento do Interlude levantado na #0024 (T3 do 05 §2). Tamanho estimado: G (dividir: mecanismo + item; skill + buff + atalho).

Ordem: 2ª de 20 na cadeia da vaga `ui`; o branch nasce de `feat/ui-dialogbox` (#0025). Depende de: nenhuma.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Comportamento igual ao Interlude: §1.2 do 02 (sem atraso, posição, moldura, cache) e a ordem de campos do §2 do 02, com as sysstrings e as cores de `IL:ToolTip.uc`.
- [ ] Feito em duas partes, com commits separados: (a) mecanismo (sem atraso, acima do slot ou abaixo se não couber, moldura de 9 partes, cache) + tooltip de item e as 5 variantes de preço; (b) skill, buff (`AbnormalStatus`), atalho, ação e texto.
- [ ] Cada handler segue a linha correspondente de `analises\interface-p166\02_interacoes.md` e `03_teclado.md` (passar o mouse, cliques, Shift/Ctrl/Alt, arrastar, roda, teclas); divergências ficam em Decisões e REA com a evidência.
- [ ] Pacotes: nenhum (dados de item e skill dos `.dat` do cliente; `GetOperateType`, `GetMpConsume`, `GetCastRange`).
- [ ] Testes EditMode novos para a lógica (estado da janela, regras de clique e arrasto, montagem dos dados) e `sh Docs/tools/run_tests.sh` sem falhas novas em relação ao `main`.
- [ ] Capturas em `Docs/evidencias/tooltips/` (offline, ou no aCis local quando estiver no ar) mostrando cada interação do critério.
- [ ] Linha em `Docs/validacao.md` com o que foi validado e como.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->

- 2026-11-03 — branch `feat/ui-tooltips` criado de `feat/ui-dialogbox` (fabffe9); estado `fazendo`.
- 2026-11-03 — `feat/ui-dialogbox` ganhou `d679ae5` (fim de linha de cada arquivo igual ao do `main`); este branch foi refeito em cima dele.
- 2026-11-03 — parte (a): mecanismo + tooltip de item com as 5 variantes de preço (`5015593`).
- 2026-11-03 — parte (b): skill, buff, atalho e ação (`cc5bf41`).
- 2026-11-03 — `sh Docs/tools/run_tests.sh`: 476/476 (exit 0).
- 2026-11-03 — capturas offline em `Docs/evidencias/tooltips/` e linha K14 do `Docs/validacao.md` (`e0adc57`). aCis fora do ar.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

- [O] Layout (`NWndUtil::CalculateDrawItemListRect`, `nw:0x10065570`, e `DrawItemList`, `nw:0x10068be0`): item sem `bLineBreak` continua na linha em `x + OffX`; com quebra (ou branco) a linha desce a maior `OffY + altura` dela e o x volta a `OffX`; branco soma `b_nHeight`; texto que não é de uma linha quebra em `largura máxima já alcançada − x` (começa na `MinimumWidth`); `"`gradeX`"` (8 caracteres, `NConsoleWnd::IsGradeString` `nw:0x10146430`, tabela none/graded/gradec/gradeb/gradea/grades em `0x10350f70`) mede 12×12; a versão simples mede e desenha só até a linha `SimpleLineCount`.
- [O] Posição (`NCTooltip::DrawTooltip`, `nw:0x10054680`): x = referência, recua o excesso à direita ou vai a 0 se negativo; y = referência − altura, ou referência + 32 se sair pelo topo. Moldura: `L2UI_ch3.Tooltip.Tooltip1..9` (`FUN_10055020`), cantos 8×8. Conteúdo em (+5, +5).
- [O] Nativos de texto: `GetNumericColor` (`nw:0x10063020`): dígitos > 4 → `(dígitos − 2) % 4` = ff80ff / ffff00 / 00ff00 / 00ffff; senão dcdcdc. `MakeBuffTimeStr` = `MakeTimeStr` (`nw:0x100628f0`): só a maior unidade, "%d%s" com sysstring 1110 (horas) ou 1111 (minutos), e segundos com "초" fixo no binário (`DAT_10245b34`, lido no `NWindow.dll` de referência). `IsStackableItem`: ConsumeType 1, 2 ou 3.
- [O] `GetOperateType` (`NMagicSkillDataManager::GetMSOperateType`, `nw:0x101b5880`): registro+0x3c 0 → (+0x20 == 2 ? 312 "Passive Skill" : 311 "Active Skill"); 3 → 1500 "Song/Dance"; outro → 313 "Magic". [I] +0x3c = `is_magic` e +0x20 = `oper_type` do skillgrp.
- [O] `skillname-e.dat`: id, nível, nome, descrição, desc_add1, desc_add2 (FString; "none" = vazio). `actionname-e.dat`: tag, id, type, category, n, n categorias, nome, ícone, descrição, comando (colunas do `txt` do l2disasm).
- [I] Margem de 5 px também à direita e embaixo (o tamanho da caixa não aparece no pseudocódigo). [I] Cor padrão do texto sem `t_color`: #dcdcdc.
- [I] Nome do encantamento da skill = desc_add1 (ou add2) dos níveis ≥ 100; nível mostrado = `EnchantSkillLevel` do skillgrp.
- [I] Item do inventário: `ItemType` = Type2 do pacote (mesma ordem do `EItemType`); empilhável = Type2 ≥ 3 (o pacote não traz o ConsumeType).
- [V] `DrawSimpleTooltip` × `DrawTooltip`: o `NCItemWnd::OnPostPaint` (`nw:0x1002fb30`) usa a simples com o slot não selecionado e sem os campos `+0xa5`/`+0xa7`; com `SimpleLineCount` 0 ela não teria linha nenhuma, então o inventário deve ter um desses campos ligado. Ficou um `Simple` por elemento, desligado em todos (as janelas de loja da #0029 decidem).
- Divergências: o símbolo de grau sai como a letra (a textura do emoticon não foi achada no cache); faltam conjuntos (`GetSetItemIDList`), opções do augment (`UIDATA_REFINERYOPTION`), peso dos etcitem e mana máxima dos itens sombra: o porte não tem essas tabelas (sai "Weight : 0" nos etcitem). A PartyWnd mantém uma dica por janela (posição acima da janela, não do ícone).
- O `App.cs` lê `UiTooltip.box`/`label` e o `Text` dos slots por reflexão no modo de teste: os nomes foram mantidos e o `Text` guarda o resumo também nas dicas de dados.

## Entrega

- **Commits:** `5015593` (a: mecanismo, item e preços), `cc5bf41` (b: skill, buff, atalho, ação), `e0adc57` (evidências e K14).
- **Testes:** `TooltipTests` (construtores, nativos de texto, layout, posição, .dat); `sh Docs/tools/run_tests.sh` 476/476.
- **Falta / fora do escopo:** comparar com o original (aCis fora do ar, sem captura ao vivo); textura do grau; conjuntos, augment e etcitemgrp; os demais tipos (`Recipe*`, `QuestList`, `ClanInfo`, `PartyMatch`, `Manor*`) entram com as janelas deles; `MenuWnd` com sysstrings é da #0035.

## Pedidos

Nenhum por enquanto.
