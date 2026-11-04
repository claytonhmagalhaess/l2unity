# #0054 — Texto das barras de CP/HP/MP sobreposto

| Campo | Valor |
|---|---|
| Vaga | ui3 (vaga nova, `worktrees\ui3`) |
| Branch | `feat/ui-barras-hp` (nasce de `feat/ui-revisao`, #0047) |
| Estado | fazendo |
| Spec | `analises\interface-p166\01_janelas.md`, `02_interacoes.md`; `analises\l2-interlude\client_spec\` (StatusWnd, NCStatusBarCtrl/gauge, 89, 90); `Docs/revisao_ui.md` (#0047) |
| Sessão | ui: barras de HP (#0054) |
| Criada | 2026-11-04 |

## Objetivo

O usuário recebeu um buff que aumenta o HP máximo, com a vida ainda não cheia. Na StatusWnd, o texto do HP (por exemplo "4087/5630") passou a ficar sobreposto e ilegível.

Esta tarefa confere como o original desenha o texto das barras (fonte, tamanho, formato, centralização, recorte ou encolhimento quando o número cresce) e corrige no porte. A correção vale para a StatusWnd e para as outras barras que usam o mesmo controle: alvo, grupo, pet e servo.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] Levantamento, com evidência (xdat da StatusWnd, `StatusWnd.uc`, o controle de barra do NWindow no Tryskell ou na REA, fonte do `L2Font`), de:
  - como o original desenha o texto "atual/máximo" das barras de CP/HP/MP (e da EXP);
  - a fonte, os dígitos, o espaçamento, o alinhamento e a posição;
  - o que acontece quando o texto não cabe;
  - quais janelas usam o mesmo controle.
- [ ] O texto das barras fica legível e igual ao original com valores de 1 a 5 dígitos, inclusive depois de um buff que aumenta o máximo sem a barra estar cheia, e se atualiza na hora quando o máximo e o atual mudam.
- [ ] A mesma correção vale para as outras janelas que usam o mesmo controle, ou fica registrado por que não vale.
- [ ] O que for de `Scripts\Net\` (por exemplo, o StatusUpdate do máximo de HP com buff) vira pedido para a net, e o que for do `App.cs` vira pedido para a coordenadora, em `tarefas\pedidos\`.
- [ ] Testes EditMode (texto e layout da barra com vários valores). `sh Docs/tools/run_tests.sh` sem falhas novas em relação a `feat/ui-revisao`.
- [ ] Capturas antes e depois em `Docs/evidencias/barras-hp/`, tiradas no aCis local com um buff de HP máximo, e uma linha em `Docs/validacao.md`.

## Andamento

<!-- uma linha por passo: AAAA-MM-DD — o que foi feito (commit) -->
- 2026-11-04 — branch `feat/ui-barras-hp` criado de `feat/ui-revisao` (`b88e07c`); linha de base `run_tests.sh` em batchmode: 750/750.
- 2026-11-04 — causa achada e corrigida: `L2Digits.Draw` reaproveita container e glifos; recorte da barra; `StatusBarTextTests` (11). `run_tests.sh` 761/761 (`851bc82`).
- 2026-11-04 — conta `l2webtest5` em `Docs/contas_teste.md` (`1eeba74`). Pelo novo fluxo, o Editor da ui3 foi fechado e o teste ao vivo (antes em `b88e07c`, depois em `1eeba74`) e a suíte foram pedidos à sessão de testes.

## Decisões e REA

<!-- o que foi descoberto ou decidido, marcado como Observado / Inferido / A validar, com a evidência (endereço, arquivo:linha) -->

**Como o original desenha o texto** (`NCStatusBarCtrl::OnPaint`, `NWindow.dll` 0x1004c7c0; assembly lido pelo REA em `reference\l2-interlude\client\System\NWindow.dll`):
- [O] Abre com `SetClip` no retângulo do controle (`FUN_10021df0(x, y, ftol(W), ftol(H))`, 0x1004c832) e fecha com `ReleaseClip` (`FUN_100212e0`, 0x1004cc26). Entre eles: fundo (alfa 0xFF), barra (`W*atual/max`), regeneração (alfa 0x80), aviso.
- [O] Modo atual/máximo (`+0x35c == 0`). Tudo em y = 2, cor 0xffdcdcdc, `DrawSpecialDigit` tipo 1:
  - título (`FString +0x350`) em x = 9 (0x1004ca25);
  - `"/"` (0x1023d810) em `ftol(W*0.5 - ext/2)` (0x1004ca6c–0x1004ca90; 0.5 em 0x1022f270);
  - atual, `"%d"` (0x10233718) de `+0x2f8`, em `ftol(W*0.5 - ext(atual) - 6.0 - 2.0)` (0x1004cada–0x1004caff; 6.0 em 0x1023c280, 2.0 em 0x10232580);
  - máximo, `"%d"` de `+0x2f0`, em `ftol(W*0.5 + 6.0 - 2.0)` (0x1004cb42–0x1004cc17).
  `ext` é o `GetTextExtent` (`FUN_10020bb0`) da fonte normal, não da fonte de dígitos. O `"%d"` lê só os 32 bits baixos do valor de 64 bits.
- [O] Modo EXP (`+0x35c == 1`): `"%.2f%s"` de `(atual-base)*100/(max-base)` e `"%"`, centrado em `W*0.5 - ext/2` (0x1004cb68–0x1004cc17).
- [O] Fonte: `FUN_100212f0` tipo 1 = células 8×8 da textura em `+0x64` (`L2UI.NWindow.Number`), na origem do canvas (`+0x38/+0x3c`). Na tira `shared\…\cache\ui\l2ui\Texture\number.png` (256×8), o traço claro ocupa as colunas 0–5 da célula e o contorno escuro as colunas 6–7. Avanço = 8 px.
- [O] Quando não cabe: o texto não encolhe nem muda de formato. A posição do máximo não depende da largura dele, e o atual cresce para a esquerda. O que passa do controle é cortado pelo `SetClip`.
- [Inferido, já era assim] Larguras da fonte normal: 6,5 px por dígito e 4 px para a `/` (`L2Digits.NormalExtent`), medidas antes na captura do original. A métrica exata da fonte TT não foi conferida (o `TTFontInfo.ini` é cifrado) e não mudou. Com elas, de 1 a 5 dígitos as células só se tocam nas 2 colunas de contorno (`StatusBarTextTests.StatusWnd_TextoLegivelDe1a5Digitos`).
- [O] Quem usa o mesmo controle: no `layout.json` do xdat, só a StatusWnd usa `StatusBar` (CPBar, HPBar, MPBar e EXPBar, W = 176 - 26 = 150).
  - Usam `BarCtrl`: alvo (`TargetStatusWnd.barHP/barMP`), grupo (`PartyWnd`, `PartyWndCompact`), pet (`PetStatusWnd`), servo (`SummonedStatusWnd`), `DuelManager` e `EventMatchObserverWnd`. O `NCBarCtrl` (0x10002f70) só faz SetClip, DrawTexture e ReleaseClip, **sem texto**: não há texto a corrigir nelas, e o porte já não desenha nenhum (`BarCtrl_SemTexto`).
  - `Progress` (0x1000d670) também não tem texto.
  - A mesma fonte de dígitos com `L2Digits.Draw` aparece ainda na tela de personagens (`LobbyCharInfo`), que ganha a mesma correção.

**Causa do texto sobreposto** [O, no código do porte]:
- O `L2Digits.Draw` apagava o container anterior com `Object.Destroy`, que só age no fim do quadro, e o procurava pelo nome (`Transform.Find`).
- Com dois redesenhos da barra no mesmo quadro e textos diferentes, a 2ª chamada achava de novo o container antigo (ainda na hierarquia) e o destruía outra vez. O container criado pela 1ª chamada ficava para sempre por baixo do novo.
- Isso acontece quando UserInfo (0x04) e StatusUpdate (0x0e) chegam juntos: os dois chamam `UpdateBars`/`SetBars` (`App.cs:1474`, `App.cs:1563`), e a fila de pacotes é despachada num `Update` só. É o caso do buff que muda o máximo e depois o atual.
- O texto e a barra já seguiam o máximo novo na hora: o StatusUpdate do `MaxHp` e o UserInfo passam pelo `UpdateBars`. Não falta nada na net nem no `App.cs`, por isso não há pedidos.

**Decisões**
- O `L2Digits.Draw` reaproveita o container e os glifos com o mesmo nome (os que sobram ficam inativos) e não destrói nada. O `L2Digits.Hide` esconde. Assim o resultado não depende de quantas vezes a barra é redesenhada no quadro, e também deixam de ser criados e destruídos objetos a cada StatusUpdate.
- A StatusBar ganha um `RectMask2D` no papel do `SetClip`.

**Arquivos compartilhados tocados** (para o merge):
- `Assets\L2Web\Scripts\UI\L2Digits.cs` (`Draw` e `Hide`).
- `Assets\L2Web\Scripts\UI\L2Wnd.cs` (`BuildBar`, ~l.570, e `Bar`, ~l.1225). A vaga net (#0051) tem alteração ainda não commitada no mesmo arquivo, nas linhas 362–430: regiões diferentes.
- `Docs\contas_teste.md`, novo aqui. Os branches das vagas net e render e o `feat/ui-buffs` também criam este arquivo: juntar as tabelas.

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

Nenhum: o máximo de HP com buff já chega à barra pelo StatusUpdate e pelo UserInfo (ver Decisões), e não houve mudança no `App.cs`.
