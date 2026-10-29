# Área UI (vaga `worktrees\ui`)

Interface do cliente: janelas do `Interface.xdat`, HUD, chat, atalhos, telas do lobby. uGUI montado em código (sem cena e sem prefabs); texto com `UnityEngine.UI.Text` legado (TMP não está importado).

**Specs** (em `C:\Users\Clayton\workspace-claude\L2Unity-workspace\analises\l2-interlude\client_spec\`): `01_framework_e_fluxo.md` (comece aqui), `02_chat.md`, `03_minimapa.md`, `04_opcoes_e_menus.md`, `05_barra_de_atalhos_e_teclado.md`, `06_hud_status.md`, `07_demais_janelas.md`, `89_telas_nativas.md`, `90_catalogo_eventos.md`, `91_eventos_nativos.md`, `98_desenho_controles_nativos.md`. Para comparar com outra HUD: `C:\Users\Clayton\workspace-claude\L2Unity-workspace\analises\spark-l2unity\hud\README.md`.

**Arquivos**: núcleo em `UiRoot`, `UiWindow`, `L2Wnd`, `L2Ctrl`/`L2Controls`, `L2Events`/`PacketEvents`/`UiEvents`; janelas em `GameUi.*`, `*Wnd`, `*View`, `Lobby*`.

**Testes**: `Chat*`, `Option*`, `Xdat*`, `NativeLayout*`, `ReceivedLayoutTests`, `Minimap*`, `Radar*`, `Party*`, `TargetStatus*`, `MultiSell*`, `NpcHtmlWnd*`, `Messenger*`, `ShortcutKey*`, `WindowsInfo*`, `TextureCtrl*`, `DigitFont*`, `GameTip*`, `MessageBand*`, `ParamTests`, `CommandTests`, `InputTests`.

**Regras**
- `L2EventIds.cs` e `L2XdatFields.cs` são gerados (`Docs/tools/gen_events.py`, `gen_xdat_fields.py`): não edite à mão, rode o gerador.
- Layouts e posições vêm do `Interface.xdat` e da spec 89; não invente medidas.
- Precisa de pacote novo: peça à vaga `net` pelo `TAREFAS.md`.
