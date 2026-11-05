# Quadro de tarefas

Mantido pela sessão coordenadora. Cada sub-sessão lê a sua linha ao começar e, ao terminar, atualiza o estado e escreve a entrega em "Notas".

Estados: `livre` · `fazendo` · `pronta p/ merge` · `no main` · `bloqueada`

## Vagas

| Vaga | Pasta | Branch atual | Estado |
|---|---|---|---|
| render | `worktrees\render` | — (livre, no `main`) | livre |
| ui | `worktrees\ui` | — (livre, no `main`) | livre |
| net | `worktrees\net` | — (livre, no `main`) | livre |
| world | `worktrees\world` | — (livre, no `main`) | livre |
| ui2 | `worktrees\ui2` | — (livre, no `main`) | livre |
| ui3 | `worktrees\ui3` | — (livre, no `main`) | livre |
| ui4 | `worktrees\ui4` | — (livre, no `main`) | livre |
| teste | `worktrees\teste` | — (checkout do commit pedido; sessão de testes `local_4903e3f5-6ce1-4e70-84a2-a1f7932933f2`) | fazendo |

As vagas `net`, `ui` e `world` foram removidas em 2026-10-29 a pedido do usuário; a `render` foi recriada do `main` (`0d71a77`) para a #0023. Para recriar outra, ver "Vaga nova" no `CLAUDE.md`.

## Índice (tarefas em `tarefas\`)

| # | Tarefa | Vaga | Estado |
|---|---|---|---|
| 0023 | [Assets menores: textura guardada uma vez só](tarefas/0023-render-texturas-unicas.md) | render | no main |
| 0024 | [Interface P166 e Tryskell: o que falta no l2unity](tarefas/0024-analises-interface-p166.md) | analises | pronta p/ revisão |
| 0025 | [DialogBox completo (NumberPad, edit, progresso, Enter = padrão) (T1)](tarefas/0025-ui-dialogbox.md) | ui | no main |
| 0026 | [Inventário: clique direito, arrastar (reordenar, desequipar, equipar), lixeira, largar no mundo, cristalizar, confirmações, Alt = pilha (T2)](tarefas/0026-ui-inventario.md) | ui | no main |
| 0027 | [Mecanismo de tooltip do original e os tipos `Inventory*`, `Skill`, `Shortcut`, `AbnormalStatus`, `Action`, `Text` (T3)](tarefas/0027-ui-tooltips.md) | ui | no main |
| 0028 | [Barra de atalhos igual ao nativo (T4)](tarefas/0028-ui-barra-atalhos.md) | ui | no main |
| 0029 | [`ShopWnd` e `TradeWnd` pelo xdat, com o padrão de duas listas (T5)](tarefas/0029-ui-loja-troca.md) | ui | no main |
| 0030 | [`WarehouseWnd` (privado e de clã) (T6)](tarefas/0030-ui-armazem.md) | ui | no main |
| 0031 | [Pet e servo: `PetStatusWnd`, `SummonedStatusWnd`, `PetWnd`, `SummonedWnd` (T7)](tarefas/0031-ui-pet-servo.md) | ui | no main |
| 0032 | [Macros: `MacroListWnd`, `MacroEditWnd`, `MacroInfoWnd`, tecla R (T8)](tarefas/0032-ui-macros.md) | ui | no main |
| 0033 | [Teclado igual ao nativo (T9)](tarefas/0033-ui-teclado.md) | ui | no main |
| 0034 | [Teclas de movimento e câmera que faltam do `user.ini` (T10)](tarefas/0034-world-teclas-movimento.md) | world | no main |
| 0035 | [Cliques pequenos e divergências do HUD (T11)](tarefas/0035-ui-cliques-hud.md) | ui | no main |
| 0036 | [Loja privada: montar venda e compra (T12)](tarefas/0036-ui-loja-privada.md) | ui | no main |
| 0037 | [Quests: `QuestTreeWnd` e `QuestListWnd` (T13)](tarefas/0037-ui-quests.md) | ui | no main |
| 0038 | [Clã: `ClanWnd`, `ClanDrawerWnd`, `InviteClanPopWnd` (T14)](tarefas/0038-ui-cla.md) | ui | no main |
| 0039 | [Aprender skill e henna (T15)](tarefas/0039-ui-skill-henna.md) | ui | no main |
| 0040 | [`OnScreenMessageWnd1..8` (T16)](tarefas/0040-ui-mensagens-tela.md) | ui | no main |
| 0041 | [Moldura: minimizar, expandir e destacar abas do chat (T17)](tarefas/0041-ui-moldura.md) | ui | no main |
| 0042 | [Frete: `SelectDeliverWnd` + `DeliverWnd` (T18)](tarefas/0042-ui-frete.md) | ui | no main |
| 0043 | [Fabricação: `Recipe*` (6 janelas) (T19)](tarefas/0043-ui-fabricacao.md) | ui | no main |
| 0044 | [Melhoria de item: `ItemEnchantWnd`, `RefineryWnd`, `UnrefineryWnd` (T20)](tarefas/0044-ui-melhoria-item.md) | ui | no main |
| 0045 | [Busca de grupo, união e duelo (T21)](tarefas/0045-ui-grupo-uniao-duelo.md) | ui | no main |
| 0046 | [Pacotes das janelas da interface (T2–T21)](tarefas/0046-net-pacotes-interface.md) | net | no main |
| 0047 | [Revisão de toda a interface já implementada](tarefas/0047-ui-revisao.md) | ui | no main |
| 0048 | [Login igual ao original: varredura e correções](tarefas/0048-ui-login.md) | ui | no main |
| 0049 | [Cipós balançando no cenário do login](tarefas/0049-render-cipos-login.md) | render | no main |
| 0050 | [Tooltip e informações de item na multisell](tarefas/0050-ui-tooltip-multisell.md) | ui (pasta world) | no main |
| 0051 | [Character Status, Actions e Clã: validar e corrigir](tarefas/0051-ui-status-acoes-cla.md) | ui (pasta net) | no main |
| 0052 | [Janela de buffs: tempo, tooltip e tipos iguais ao original](tarefas/0052-ui-buffs.md) | ui2 | no main |
| 0053 | [Efeitos visuais das skills iguais ao original](tarefas/0053-render-efeitos-skill.md) | render | no main |
| 0054 | [Texto das barras de CP/HP/MP sobreposto](tarefas/0054-ui-barras-hp.md) | ui3 | no main |
| 0055 | [HTML do servidor renderizado como no original](tarefas/0055-ui-html.md) | ui4 | no main |
| 0056 | [Personagens e monstros flutuando fora de Giran](tarefas/0056-render-pawns-flutuando.md) | render | no main |
| 0057 | [Personagem flutuando depois do unstuck e do teleporte](tarefas/0057-world-teleporte-flutuando.md) | world | no main |

#0005–#0022 (porte da HUD do Spark) e os pedidos 0001–0013 foram cancelados em 2026-10-29 e estão em `tarefas\concluidas\`.

## Tarefas (rodada de 2026-10-29, formato antigo)

| # | Tarefa | Vaga | Branch | Spec de referência | Estado |
|---|---|---|---|---|---|
| 1 | G11 MessengerWnd nativa (256×401 em (384,180), NCFrameCtrl + NCTabControl) no lugar da janela de amigos do porte | ui | `feat/ui-messenger` | 89 (messenger), 98, 07 | no main (`6211b95`) |
| 2 | Parsers dos pacotes de pet/servo (0xb0 PetStatusShow, 0xb1 PetInfo, 0xb2 PetItemList, 0xb3 PetInventoryUpdate, 0xb5 PetStatusUpdate, 0xb6 PetDelete, 0xd1 SetSummonRemainTime, 0xee PartySpelled) com teste de layout; base para a K5 | net | `feat/net-pet-packets` | 94, 96, 88 | no main (`6211b95`) |
| 3 | G8 cena 3D do login/lobby: enquadramento da câmera (~1,24×), céu com nuvens e luz assada das malhas | render | `feat/render-lobby-scene` | 08, 89 | no main (`6211b95`) |
| 4 | Recusas de ataque/ação: 0x08 AttackOutofRange, 0x09 AttackinCoolTime, 0x0a AttackDeadTarget, 0x25 ActionFailed (sem campos): efeito do engine no pawn, ataque e movimento previstos | world | `feat/world-action-fail` | 94, 96, 92, 09 | no main (`6211b95`) |

## Pedidos entre vagas

Quando uma vaga precisa de algo fora da sua área (pacote novo, setting, pacote UPM, exportação de assets), registre aqui em vez de editar.

| De | Para | Pedido | Estado |
|---|---|---|---|
| render (#3) | coordenadora | Depois do merge do `feat/render-lobby-scene`, reexportar a luz embutida do Lobby para a pasta compartilhada: `python -I Docs/tools/export_smlight.py hours --map Lobby --out shared/StreamingAssets-L2Web/cache/map/Lobby_smlight.json` (e o mesmo com `--map 22_22` para `22_22_smlight.json`). A única mudança é o campo `"collide": false` (13 atores no Lobby, 45 no 22_22; conferido: o resto sai igual ao arquivo atual). Sem a reexportação, o código continua funcionando como antes. | feito: reexportados em 2026-10-29; conferido contra a cópia anterior, só entrou `"collide": false` (13 no Lobby, 45 no 22_22) |
| world (#4) | coordenadora | Ligar no `App.cs` a trava de pedido do clique: handlers 0x08/0x09/0x0a/0x25, `world.Answered`/`Request.*` em 0x01, 0x05, 0x12, 0x29, 0x2a, 0x60 e 0xa6, e a trava no `ClickAt`. As linhas exatas estão logo abaixo da tabela. Sem mudança para a vaga render. | feito: aplicado no `main` (`602065f`), com o 0x05 corrigido pela validação: sem o `foreach` dos golpes; o atacante só zera com o alvo conhecido |
| net (#2) | coordenadora / ui | Despachar no `App.cs` os 8 parsers de `Net/PetPackets.cs` (pet/servo) quando a HUD de pet (K5) for feita. Trecho sugerido e eventos de cada pacote logo abaixo da tabela. Ao ligar, tirar as 8 linhas `parsers["0x.."] = "PetPackets..."` do `ReceivedLayoutTests` (passam a vir do `App.cs`) e regenerar `Docs/cobertura_recebidos.md` (C5). | aberto até a K5 |
| ui (#1) | coordenadora | No `App.cs`, handler do 0xfa (FriendList, ~linha 1913): apagar a linha `social.FriendList(fl);`. A lista já vai para `ui.Messenger.M.SetList(...)` logo abaixo, e a janela "Amigos" do porte saiu do `SocialUi`. Depois disso a vaga ui apaga o `SocialUi.FriendList`, que ficou vazio. Sem a mudança, nada quebra. | App.cs aplicado no `main` (`602065f`); aberto: falta a vaga ui apagar o `SocialUi.FriendList` |

**Pedido net (#2): despacho sugerido para o `App.cs`.** Os `PacketEvents.*` e os `Ev.EV_*` são da vaga ui (ainda não existem). Eventos e profundidade conforme a spec 96; chaves conforme a spec 90/91.

```csharp
On(0xb0, r => { var s = PetPackets.ParsePetStatusShow(r); /* OnShowPetStatusWnd -> EV_PetWndShow (PetWnd) */ });
On(0xb1, r =>
{
    var p = PetPackets.ParsePetInfo(r);
    // EV_PetWndShowNameBtn{Show = p.Name == "" ? 1 : 0} (PetWnd), EV_PetStatusShow (PetStatusWnd),
    // EV_UpdatePetInfo (sem chaves: a janela lê GetPetInfo -> guardar p). Também cria/atualiza o pawn (OnNpcInfo).
});
On(0xb2, r => { var l = PetPackets.ParsePetItemList(r); /* EV_PetInventoryItemStart + 1 EV_PetInventoryItemList por item (PetWnd) */ });
On(0xb3, r =>
{
    var u = PetPackets.ParsePetInventoryUpdate(r);
    // EV_PetInventoryItemUpdate{WorkType = item.Change, + chaves do item} por item; Change 2 ou 3 -> EV_ShortcutUpdate (OnUpdatePetShortCutItem)
});
On(0xb5, r => { var s = PetPackets.ParsePetStatusUpdate(r); /* OnReceivePetStatusInfo -> EV_UpdatePetInfo (Pet/Summoned Status/Wnd) */ });
On(0xb6, r => { var d = PetPackets.ParsePetDelete(r); /* OnHidePetWnd(SummonType) -> EV_PetSummonedStatusClose */ });
On(0xd1, r => { var t = PetPackets.ParseSetSummonRemainTime(r); /* EV_SummonedStatusRemainTime{RemainTime, MaxTime} (SummonedStatusWnd) */ });
On(0xee, r => { var p = PetPackets.ParsePartySpelled(r); /* EV_SummonedStatusSpelledList{Max = Effects.Count, SkillID_i} (SummonedStatusWnd; tipo 1/2) */ });
```

**Pedido world (#4): trava de pedido do clique no `App.cs`** (spec 05 §5.7, `World/ActionLatch.cs`).

No original, o clique (`PlayerPawnMoveTo`) só envia com a trava `UGameEngine+0x64` livre e a liga ao enviar; as respostas do servidor a zeram. Os quatro pacotes sem campos **só** zeram a trava: não param o ataque automático, não mexem na animação nem no movimento. Por isso não há nada para a vaga render.

Ligue tudo junto. Com a trava no `ClickAt` e sem os handlers que a zeram, o clique fica travado. No `BindWorldHandlers`:

```csharp
// pacotes novos (sem campos)
On(0x08, _ => world.OnAttackOutofRange());
On(0x09, _ => world.OnAttackinCoolTime());
On(0x0a, _ => world.OnAttackDeadTarget());
On(0x25, _ => world.OnActionFailed());
// nos handlers que já existem, acrescentar:
// 0x01 MoveToLocation:   world.Answered(m.ObjectId);
// 0x60 MoveToPawn:       world.Answered(m.ObjectId);
// 0x05 Attack:           world.Answered(a.AttackerId); foreach (var h in a.Hits) world.Answered(h.TargetId);
// 0x29 TargetSelected:   world.Answered(t.ObjectId);
// 0x2a TargetUnselected: world.Answered(u.ObjectId);
// 0xa6 MyTargetSelected: world.Request.MyTargetSelected();
// 0x12 DeleteObject:     world.Request.Deleted(id, targetId);   // antes do SetTarget(0)
```

No `ClickAt`, logo depois de `if (self == null) return;`:

```csharp
if (!world.Request.CanClick) return;   // PLAYERPAWNMOVETO 0x105af027: trava ligada = clique ignorado
```

Depois de cada `gc.Send(...)` do `ClickAt` (Action, AttackRequest e MoveTo), chamar `world.Request.Lock();`.

[I] No `ContinuousInput`, o reenvio do destino com o mouse segurado deve seguir a mesma regra: só enviar com `world.Request.CanClick` e chamar `Lock()` depois. É o mesmo comando ligado ao LeftMouse.

## Notas

<!-- #<n> (vaga): o que ficou pronto, commits, testes rodados, o que falta -->

**#V (validação):** relatório em `analises\validacoes\2026-10-29_entregas.md` (commit `53c7e30` em `analises`).
- **#1 ui: igual.** O layout do OnCreate, do AddTab e do Draw bate com o NWindow, e a ss996/997 bate com a tabela de sysstrings. O título do NCFrameCtrl está sem evidência (a vaga já declarou).
- **#2 net: igual.** Os 8 pacotes batem em tipos, ordem e sinal. Ponto para a K5: no 0xb1, o `Team` é descartado pelo engine e o `MoveEnv` é interpretação do aCis.
- **#4 world: igual no branch. No pedido do `App.cs`, o 0x05 diverge.** Tirar o `foreach (var h in a.Hits) world.Answered(h.TargetId)`: os alvos do Attack não destravam o clique, só o atacante. Isso também corrige a spec 05 §5.7.
- **#3 render: parcial.** Só o commit `f7c9890` (UV do céu) foi validado, e ele bate. O resto ainda não está commitado.

**#3 (render):** pronto em `feat/render-lobby-scene`. O G8 continua `divergente`, pelas causas abaixo; a volta 34 está no `Docs/validacao.md`.
- **Enquadramento:** já estava resolvido desde a volta 24 (FOV horizontal 50 do PlayerController; tan 30°/tan 25° = 1,238). Medi de novo contra o `1024_*` do original: a correlação de bordas é máxima na escala 0,98. Em 1,24 ela cai de 0,094 para 0,036 na criação. Sem mudança no código.
- **Céu:** (1) O anel de névoa estava de cabeça para baixo. O `Lobby_sky.json` traz o V do UE e o Unity lê o PNG invertido, então o anel ficava opaco em cima e pintava o céu de amarelo. Corrigido com 1 − v (`L2Sky.Uv`). (2) Nuvens e anel passam a misturar em gama, como o D3D (`L2WebFx` `_GammaOver`). Meio do céu da criação: era (196,184,178), agora (153,170,190); o original tem (64,169,192). A posição das nuvens depende do tempo do panner.
- **Salão "mais escuro e mais quente":** a luz assada das malhas e o lightmap já batiam (piso (68,54,44), original (64,52,42)). O quente vinha das coronas e dos feixes.
  - Coronas pelo `FCoronaRender::RenderCoronas` 0x10658690: a cor vem só de hue/sat, sem LightBrightness (passa de 0,21 para 1,0). O tamanho angular é constante, pela fórmula da desmontagem.
  - Os 2 feixes `rhion_orc_light_S01` não colidem no .unr, mas o porte punha colisor neles, e isso apagava 5 das 13 coronas (conferido no Editor). Agora o `export_smlight.py` grava `collide: false` e o `Statics` não cria o colisor (pedido de reexportação acima).
  - Os feixes sem instância passam a ser acesos pela luz de hardware, como os pawns.
  - Tocha esq.: era (87,64,54), agora (141,90,62); original (184,134,95). Janela dir.: era (50,41,49), agora (121,71,57); original (179,138,110).
- **Commits:** `f7c9890` UV do céu, `2da6aba` feixes (colisão e luz de hardware), `6a362b2` mistura em gama do céu, `81f6984` coronas, `2534295` evidências e docs.
- **Testes:** novos `LobbyEnvTests.Ceu_AnelDeNevoa_TransparenteEmCimaOpacoNoHorizonte`, `LobbyEnvTests.Corona_CorSemBrilhoETamanhoAngular`, `BakedLightTests.LuzDeHardware_MaterialDeEfeitoViraActorAditivo` e `BakedLightTests.PlanosDeLuz_SemInstanciaSemUnlit_SemColisao`. Este último fica ignorado até a reexportação; conferi os mesmos dados no json gerado em scratch. Suíte em batchmode: **395 testes, 393 passam, 1 ignorado, 1 falha.** A falha é `ChatResizeTests`, a do `WindowsInfo.ini` compartilhado, que o `b0acec2` da ui corrige. Não há falha nova.
- **Evidência:** `Docs/evidencias/comparacoes/g8_v34_{login,criacao,lobby}.png` (Unity à esquerda, original à direita), mais `g8_v34_criacao_so_uv.png` e `g8_v34_lobby_antes.png`. Os quadros soltos estão em `Docs/evidencias/unity/g8_v34/`. Capturei no Editor da vaga, sem servidor, por RenderTexture de 1280×960. No salão, tirei os 2 colisores para simular a reexportação.
- **Ainda diverge:**
  - (a) O feixe forte da direita (parede: original (156,143,136), porte (71,54,54)). O `Orc_Dgn_light001_shader` tem uma camada `Specular = Orc_Dgn_light002_pan` (TexPanner 0,02) × `SpecularityMask` que o `fxmat` não exporta, e a textura `Orc_Dgn_light002` não está no cache. Precisa de exportação nova.
  - (b) A seção 0 desse feixe usa a textura crua (DXT3, sem flags de alfa), que o glb exporta como MASK [I].
  - (c) Os BeamEmitters estão vivos, mas fracos.
  - (d) As casas da criação estão ~1,26× mais claras.
  - (e) A ordem das 3 luzes de hardware é [I].
  - Moinho e vinhas não mudaram desde a volta 33.

**#4 (world):**
- **REA.** Os 4 pacotes sem campos só zeram a trava de pedido do clique `UGameEngine+0x64`: `OnActionFail` 0x10314376, `OnAttackOutofRange` 0x1030bfa5, `OnAttackinCoolTime` 0x10305a1f, `OnAttackDeadTarget` 0x1030c1bc. As recusas de ataque só zeram quando o próprio jogador existe. O `PLAYERPAWNMOVETO` ignora o clique com a trava ligada e a liga ao enviar Action/movimento; o `ATTACK` a liga sempre. Nenhum dos quatro pacotes para o ataque automático, muda a animação ou mexe no movimento ou na skill.
- **Spec.** Escrevi a seção nova 05 §5.7, com a tabela de todas as respostas que zeram a trava (commit `b7f4dbd` em `analises`).
- **Código.** `World/ActionLatch.cs`, e no `World` os métodos `OnActionFailed`, `OnAttackOutofRange`, `OnAttackinCoolTime`, `OnAttackDeadTarget` e `Answered`. O `Clear` zera a trava.
- **Commits** em `feat/world-action-fail`: `17b199c` (código e testes) e `d715844` (linha M5 no `Docs/validacao.md`).
- **Testes.** `ActionFailTests` (6). Suíte: 397 testes, 396 passam e 1 falha. A falha é a mesma da base antes da mudança (391/390/1): `ChatResizeTests.ChatWnd_CresceParaCimaAteMaxIncrease`, da área ui.
- **Falta:**
  - O `App.cs` (pedido acima). Sem ele o efeito não aparece no jogo.
  - Não portados: o flag `+0x564 & 0x40000` do controller, que no MoveToLocation/MoveToPawn impede zerar a trava, e o filtro `0x1031405b(0x10bdc628, alvo)` do envio.
  - O original não tem prazo para a trava. Se algum pedido ficar sem resposta do aCis, o clique trava. Vale testar com o servidor depois de ligar.

**#2 (net):** pronto em `feat/net-pet-packets`.
- **O que ficou pronto:** `Net/PetPackets.cs` com os 8 parsers (`ParsePetStatusShow`, `ParsePetInfo`, `ParsePetItemList`, `ParsePetInventoryUpdate`, `ParsePetStatusUpdate`, `ParsePetDelete`, `ParseSetSummonRemainTime`, `ParsePartySpelled`) e as classes `*Info`. Os itens usam o `InvItem` do inventário, e o `Change` é o `WorkType`. Os efeitos usam o `AbnormalInfo`. Cada um lê os mesmos tipos que o handler do Engine.dll, conferido no pseudocódigo.
- **Achado:** no fim do PetInfo, o aCis escreve `hchc` (montável, água/voo, 0, equipe) e o engine lê os mesmos 6 bytes como `dcc`. O parser segue o engine e separa os bits.
- **Commits:** `53594b6` parsers, `60fde97` testes, `b1dcbf4` docs (C2 do `validacao.md`, `Net/CLAUDE.md`).
- **Testes:** os 8 entraram no `ReceivedLayoutTests` (74 conferidos, eram 66). Acrescentei o `PetPacketTests`, com 11 testes que montam cada pacote como o aCis o escreve. Suíte: 401 testes, 400 passam. A rodada foi feita com `TEMP` isolado, porque a vaga render rodava a dela ao mesmo tempo e os testes de ini colidiam em `%TEMP%\l2web_*_test.ini`.
- **Falha que não é desta tarefa:** a única falha é `ChatResizeTests.ChatWnd_CresceParaCimaAteMaxIncrease` (esperava 187, veio 487). O teste lê o `WindowsInfo.ini` real em `%USERPROFILE%\AppData\LocalLow\DefaultCompany\L2Web\`, gravado hoje às 16:44 com o chat em altura 487. No `main` ela passava porque o arquivo ainda não tinha esse valor. Os testes de UI deveriam isolar o `persistentDataPath`/`%TEMP%`.
- **O que falta:** ligar no `App.cs` (pedido acima, com os `EV_*`). Até lá o C5 e o `Docs/cobertura_recebidos.md` não mudam. A unidade do 0xd1 (s ou ms) continua a validar ao vivo (spec 06); não houve teste ao vivo no aCis.

**#1 (ui):** pronto em `feat/ui-messenger`.
- **O que ficou pronto:** `NativeLayout.Messenger*` com a janela 256×401 em (384,180), o NCFrameCtrl 0xa03 (0,0,256,20), o NCTabControl 0xa02 (12,25,224,41), as páginas MsnWnd e L2FriendWnd (0,48,256,353), o `msn_back` (0,20) e as abas 114×23 (rótulos ss996 "MSN Messenger" e ss997 "Chat with Friends", texturas `msn_tab2` normal e `msn_tab1` escolhida). Tudo foi conferido no assembly do `NWindow.dll` (`FUN_100bd480`, `FUN_10050440`). O `MessengerView`, que já existia, agora monta as abas dentro do NCTabControl. A 2ª aba estava em x = 126 e agora fica em x = 115, porque o AddTab avança largura + 1. O `MessengerBtn` do chat abre a janela (`ToggleMsnWindow`, antes marcado "indisponível"). A `UiWindow` "Amigos" do porte saiu do `SocialUi`.
- **Commits:** `51164a6` layout e teste golden, `60da931` MessengerBtn e saída da janela "Amigos", `b0acec2` isolamento do `ChatResizeTests`, `a51ea77` G11 `aprovado` no `validacao.md`.
- **Testes:** suíte inteira em batchmode, **393 testes, 393 passam** (o `main` tem 391; +2 em `MessengerWndTests`). `NativeLayoutTests` confere a janela, o frame e o tab control contra `Golden/native_layout.json`. `MessengerWndTests` confere o layout do OnCreate e a janela montada (abas, páginas, aba inicial e troca de aba).
- **`ChatResizeTests`:** é a mesma falha que a vaga net anotou em #2 (o teste lia o `WindowsInfo.ini` real, com o chat em 487). Corrigi no teste: o SetUp carrega um ini inexistente e o TearDown devolve o real (`b0acec2`). Com isso a falha some nas outras vagas depois do merge.
- **O que falta:** o pedido acima no `App.cs`, depois apagar o `SocialUi.FriendList` vazio. [?] O título do NCFrameCtrl não foi rastreado; a janela usa ss999 sem "(Alt+Y)". A aba do MSN fica vazia (serviço extinto). Não há captura comparada. A tabela da spec 89 não lista as páginas (0,48,256,353) nem o id 0xa03 do frame, porque o script perdeu esses SetRect. Fica para uma sessão de REA corrigir.

**Integração (coordenadora, 2026-10-29):** branch `integracao/entregas-2026-10-29`, criado a partir do `main` (`6f95294`) para o usuário validar. Contém os merges `--no-ff` de `feat/ui-messenger`, `feat/net-pet-packets`, `feat/world-action-fail` e `feat/render-lobby-scene`, mais o `602065f` (pedidos de ui e world no `App.cs`). Compila no Editor com 0 erros e 0 avisos. A suíte em batchmode não rodou porque o Editor do `l2unity` estava aberto. Nada entrou no `main`. A reexportação do smlight (pedido da render) continua pendente porque mexe na pasta compartilhada.

**Merge (coordenadora, 2026-10-29):** `integracao/entregas-2026-10-29` entrou no `main` em `6211b95` (`--no-ff`). Suíte: integração 413 testes (412 passaram, 0 falharam, 1 ignorado); `main` depois do merge, idem. O ignorado, `BakedLightTests.PlanosDeLuz_SemInstanciaSemUnlit_SemColisao`, dependia da reexportação do smlight, feita em seguida. `0d71a77` regenera `Docs/cobertura_recebidos.md` (mundo/engine 19 → 23). Apagados os 4 `feat/*` e o `integracao/*`; as vagas voltaram para o `main` em detached HEAD.
