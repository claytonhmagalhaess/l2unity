# #0052 — Janela de buffs: tempo, tooltip e tipos iguais ao original

| Campo | Valor |
|---|---|
| Vaga | ui2 (vaga nova, `worktrees\ui2`) |
| Branch | `feat/ui-buffs` (nasce de `feat/ui-revisao`, #0047) |
| Estado | no main |
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

- [x] Levantamento, com evidência (`AbnormalStatusWnd.uc` e as janelas de buff do grupo e do pet no `Interface.u` exportado, NWindow no Tryskell ou na REA, `skillname-e.dat`/`skillgrp`, pacotes no aCis), de:
  - a ordem e o agrupamento dos ícones por tipo (buff, debuff, dança/canção, toggle) e as linhas;
  - o número máximo e a quebra de linha;
  - o texto do tempo restante sobre o ícone: a partir de quantos segundos aparece, o formato, a fonte, a cor e a posição;
  - o piscar perto do fim, se existir;
  - o tooltip de cada tipo: nome, nível, descrição, tempo restante e formato, e as diferenças entre buff, debuff, toggle e passiva;
  - o clique, com e sem modificador, e se cancela ou não no Interlude.
- [x] O tempo restante aparece sobre o ícone como no original, inclusive para os buffs com menos de 60 s, e conta regressivamente sem pedir nada ao servidor. (Ao vivo com buffs injetados: "43" → "40" e "23" → "20" em ~1 s; poção "7" → "4". Os buffs reais deste servidor (L2Ketra) duram ~4 h, canções e danças inclusive, então nenhum baixou de 60 s numa sessão.)
- [x] O tooltip de cada tipo é igual ao do original. (Conferido contra o `ToolTip.uc` e o `MakeTimeStr` nativo, e ao vivo para buff, dança, poção, debuff, toggle e Etc. Não há captura do cliente original para comparar lado a lado, porque os binários de `reference\` não podem ser executados.)
- [x] Os toggles e as passivas que o original mostra na janela aparecem e somem conforme liga e desliga, com o visual do original. (Toggle: Normal com -1, sem número nem tempo; visto ao vivo com o Vicious Stance injetado. Passivas: o aCis não as manda e o original não as gera sozinho; ver Decisões.)
- [x] A janela de buffs do grupo (PartySpelled) e a do pet seguem o mesmo comportamento, quando o original faz assim.
- [x] Todas as divergências são corrigidas ou registradas. O que for de `Scripts\Net\` vira pedido para a net, e o que for do `App.cs` vira pedido para a coordenadora, em `tarefas\pedidos\`.
- [x] Testes EditMode para a lógica (formato do tempo, ordem e agrupamento, linhas do tooltip por tipo). `sh Docs/tools/run_tests.sh` sem falhas novas em relação a `feat/ui-revisao`.
- [x] Capturas antes e depois em `Docs/evidencias/buffs/`, tiradas no aCis local, e uma linha em `Docs/validacao.md`.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->
- 2026-11-04 — `feat/ui-buffs` criado de `feat/ui-revisao` (b88e07c). Suíte de base em batchmode: 750/750.
- 2026-11-04 — Levantamento no `AbnormalStatusWnd.uc`, `PartyWnd(Compact).uc`, `PetStatusWnd.uc`, `ToolTip.uc`, NWindow decompilado (NCStatusIconCtrl, FUN_1015e410, MakeTimeStr), `Interface.xdat` e aCis (ver Decisões).
- 2026-11-04 — AbnormalStatusWnd como o NCStatusIconCtrl: número pela fonte de dígitos, piscar nos últimos 30 s, EV_Die (`69e831f`). Lógica em `UI/StatusIcon.cs`.
- 2026-11-04 — PartyWnd/PartyWndCompact desenham as grades de buff e debuff do EV_PartySpelledList (`76b81f7`).
- 2026-11-04 — `StatusIconTests` (26 casos) (`36d24ed`). Suíte em batchmode: 776/776.
- 2026-11-04 — `Docs/contas_teste.md` com a conta `l2webtest3` (`2b706c5`). Pedido 0040 para a net (params do PartySpelled).
- 2026-11-04 — Novo protocolo de testes: Editor da ui2 fechado. Teste ao vivo (antes no b88e07c, depois no 2b706c5) pedido à sessão de testes.
- 2026-11-04 — Sessão de testes (`testes\0052-1\`): 776/776 em 2b706c5, 0 erros no console nas duas rodadas, capturas antes/depois. Capturas recortadas em `Docs/evidencias/buffs/` e K3/K4/K10 do `Docs/validacao.md` (`84876bf`).

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->
Endereços `nw:` = `analises\l2-interlude\re\decomp_all\nwindow` (00002.c, salvo indicação).

**Por que o tempo não aparecia.** O porte desenhava o número com um `Text` de fonte 10 numa caixa de 12 px e só o atualizava no `Tick` de 0,25 s. O original desenha pela fonte de dígitos do engine (`DrawSpecialDigit`), que o porte já tinha em `L2Digits`. [O] no código; a confirmar na captura do antes.

- [O] **Contagem.** `NCStatusIconCtrl::OnCreate` (nw:0x1004d1b0) cria o timer 0x1f9 de 1000 ms e o 0x1e9 de 100 ms. No `OnTimer` (nw:0x1004e040), o 0x1f9 tira 1 do RemainTime (+0x1f64) enquanto ele for > 0, copia o valor para o Reserved do tooltip (+0x1e7c; -1 no debuff) e refaz o item `Type=RemainTime` do tooltip aberto. Nada é pedido ao servidor. [I] O timer é do controle, então o 1º desconto vem entre 0 e 1 s depois do pacote; o porte conta a partir da chegada.
- [O] **Número.** `OnPaint` (nw:0x1004db50): só com noClip desligado (+0x2d8), RemainTime em [0, 60) e sem IsDebuff (+0x1f7c, `FUN_10164a20`). Texto `"%d"` (DAT_10233718), cor 0xffdcdcdc. Normal/Etc: fonte tipo 2 (`L2UI_CH3.Etc.XLargeNumber` 11×14, `FUN_100212f0` em 00001.c:3941), alfa 0xcc, em (x+7, y+10) com um dígito e (x+2, y+10) com dois. Short (bShortItem, +0x1f74): tipo 1 (`L2UI.NWindow.Number` 8×8), alfa 0xff, em x + 12 − GetTextExtent/2, y + 8. x, y = canto do fundo (Size+2).
- [O] **Piscar.** Timer 0x1e9 (100 ms): com noClip desligado e RemainTime em [0, 30], o alfa do ícone (+0x1f68) vai e volta de 25 em 25 entre 0 e 255. Começa em 0xff, descendo (construtor do item, nw:0x1004d7a0); o ciclo tem 22 passos (~2,2 s). O alfa vale para o ícone e para a moldura do debuff; o fundo fica em 0xff. Debuffs piscam também (a condição não olha IsDebuff). Em 0 o número fica "0" e o ícone continua piscando até o servidor tirar o efeito.
- [O] **Debuff.** Moldura `L2UI_CH3.PlayerStatusWnd.debuff` (UV 26×26) no lugar do número, com qualquer RemainTime e também com noClip.
- [O] **Ordem e linhas.** `AbnormalStatusWnd.uc:180-356`: Normal em linhas de 12 (`NSTATUSICON_MAXCOL`), na ordem do pacote. Short e Etc numa linha só, logo abaixo: as Short no início (`InsertCol` 0..n), as Etc depois (`AddCol`), sem limite de 12. Morrer (`EV_Die`) limpa Normal e Short; `EV_Restart` limpa tudo. O cliente não tem máximo.
- [O] **Agrupamento por tipo.** O cliente não separa buff, dança/canção, toggle e debuff: tudo é Normal, na ordem do pacote. Quem agrupa é o servidor: `CharEffectList.updateEffectIcons` manda os buffs e depois os debuffs, e o `AbnormalStatusUpdate` põe os efeitos, depois os toggles (TreeSet por id, duração -1), depois os scrolls (aCis `network\serverpackets\AbnormalStatusUpdate.java`).
- [O] **Passivas.** O aCis não manda passivas no AbnormalStatusUpdate (passiva não cria efeito com ícone). O cliente mostraria qualquer id que viesse; não há o que fazer no porte.
- [O] **Toggle.** Chega com RemainTime -1: sem número, sem piscar e sem linha de tempo no tooltip. Aparece e some a cada AbnormalStatusUpdate. A moldura animada na barra de atalhos (`IsToggleOn`) já seguia a lista Normal.
- [O] **Tooltip.** `ToolTip.uc:1001-1134`, igual para todos os tipos: nome; AdditionalName (encantamento) em (255,217,105) com `GetEnchantSkillLevel`; " " + ss88 "Lv" (163) + " nível" (176,155,121); se não for debuff e Reserved ≥ 0, ss1199 + " : " + `MakeBuffTimeStr` com a Condition `Type=RemainTime`; descrição (178,190,207). `MakeBuffTimeStr` = `NWndUtil::MakeTimeStr` (nw:0x100628f0): só a maior unidade, hora (ss1110), minuto (ss1111) ou segundos com o "초" fixo no binário (DAT_10245b34 = U+CD08, lido do `NWindow.dll`). O `L2Tooltip.AbnormalStatus` do porte já fazia isso; a mudança foi passar o Reserved que conta (`StatusIcon.Reserved`). **Não mexi no `L2Tooltip.cs`**, então não há conflito com a #0050.
- [O] **Clique.** A AbnormalStatusWnd não tem `OnLButton*`/`OnRButton*`, e o Interlude não tem dispel pelo cliente (spec 06 §3.6). Nada acontece, com ou sem modificador.
- [O] **Grupo.** O nativo `FUN_1015e410` (00012.c) trata o PartySpelled 0xee e emite pelo tipo: 0 → EV_PartySpelledList (1180), 1 → EV_PetStatusSpelledList (1050), 2 → EV_SummonedStatusSpelledList (1110), com `Max`, `ID`, `SkillID_i`, `Level_i` e `Sec_i`. **A spec está errada** em `96_mapa_pacote_evento_janela.md:84` e `06_hud_status.md:241` ("sem emissor neste build") e em `97_cobertura.md:60` ("o Interlude não mostra buffs da party"): o Interlude mostra. Não corrigi a spec, porque o brief proíbe mexer no `analises\`; fica para uma tarefa de correção.
- [O] **Grades do grupo e do pet.** `PartyWnd.uc:422-493` limpa as duas grades do membro e divide por `IsDebuff(id, nível)`, 12 por linha em cada; `Size` 16 (10 na compacta, `PartyWndCompact.uc`), sem BackTex (passo = Size), ancoradas em `SetAnchor(slot, "TopRight", "TopLeft", -3, 5)`. O `Interface.xdat` (`analises\l2-interlude\re\interface_layout.json`) liga `noClip` e `noTooltip` nas grades da PartyWnd, PartyWndCompact, PetStatusWnd e SummonedStatusWnd: **sem número, sem piscar e sem tooltip**, só a moldura do debuff. AbnormalStatusWnd e OlympiadBuff1/2Wnd têm os dois desligados. Pet/servo: 10 por linha, ícone do nível 1 (`PetStatusWnd.uc`), já feito no porte (`PetView`).
- [O] O aCis manda o PartySpelled do jogador para o grupo todo, inclusive para ele mesmo (a PartyWnd ignora o próprio id, que não está na lista), e o do pet/servo para o grupo ou só para o dono.
- [I] O `PetStatusWnd.uc` não filtra o ID: num grupo, o pet de outro membro também chega como EV_PetStatusSpelledList. Mantido como no original.
- Decisão: a contagem usa o relógio (`LoadTrack.Now`) a partir da chegada do pacote; o piscar anda em passos de 100 ms, por quadro (`UiTicker`).
- Fora do escopo, registrado: o param do EV_*SpelledList da net não traz `ID`/`Level_i`/`Sec_i` em todos os tipos (pedido 0040; os scripts não leem esses campos). A Olimpíada (OlympiadBuffWnd) não existe no porte.

## Entrega

- **Commits** em `feat/ui-buffs` (sobre `feat/ui-revisao` b88e07c):
  - `69e831f` UI: AbnormalStatusWnd como o NCStatusIconCtrl (`UI/StatusIcon.cs` novo, `GameUi.Hud.cs`, `GameUi.cs`, `GameUi.Windows.cs`);
  - `76b81f7` UI: PartyWnd desenha as grades de buff e debuff do EV_PartySpelledList (`PartyWnd.cs`);
  - `36d24ed` Testes: `StatusIconTests` (26 casos);
  - `2b706c5` Docs: `Docs/contas_teste.md` (conta `l2webtest3`);
  - `84876bf` Docs: `Docs/evidencias/buffs/` e K3/K4/K10 do `Docs/validacao.md`.
  - Nenhum commit no `L2Tooltip.cs`, `ItemInfoText.cs` ou `MultiSell*`, então não há conflito com a #0050. No `GameUi.cs` mudaram três trechos: a declaração de `buffs`, o registro do `EV_Die` junto da AbnormalStatusWnd e o `UiTicker` chamando `AnimateBuffs`.
- **Testes:** `sh Docs/tools/run_tests.sh` em batchmode: base `feat/ui-revisao` 750/750; `feat/ui-buffs` 776/776, sem falhas (repetido pela sessão de testes em 2b706c5). Ao vivo no aCis local (`l2webtest3`, personagem Buffs52), antes e depois: buffs do servidor, buffs injetados de cada tipo com os tooltips e grupo injetado com os três modos do F (`Docs/evidencias/buffs/`, `e2e-antes.log`, `e2e-depois.log`).
- **O que muda para o usuário:** o tempo abaixo de 60 s aparece grande, na fonte de dígitos, e conta sozinho; o ícone pisca nos últimos 30 s; a poção mostra o tempo pequeno e centrado; o tooltip mostra o tempo que conta; os membros do grupo mostram buffs ou debuffs à direita do slot (tecla F).
- **Falta / fora do escopo:**
  - Comparar lado a lado com uma captura do cliente original (precisa que o usuário rode o cliente oficial).
  - Ver ao vivo um buff real abaixo de 60 s: no L2Ketra os buffs duram ~4 h. Uma poção de buff curto ou um servidor com as durações padrão mostra isso.
  - Corrigir a spec (`96_mapa_pacote_evento_janela.md:84`, `06_hud_status.md:241`, `97_cobertura.md:60`): o EV_PartySpelledList tem emissor (`FUN_1015e410`). Fica para uma tarefa de REA/spec.
  - Pedido 0040 para a net (params `ID`/`Level_i`/`Sec_i` em todos os tipos do PartySpelled). Não bloqueia.
  - "19Minutes" sem espaço: é o `"%d%s"` do `MakeTimeStr` com a sysstring 1111 como está no `sysstring-e.dat`, igual ao nativo. O "초" dos segundos também vem do binário.
  - A OlympiadBuff1/2Wnd não existe no porte.

## Pedidos

- `pedidos\0040-ui-partyspelled-params.md` (para a net): params do EV_*SpelledList como no `FUN_1015e410`. Não bloqueia.
