"""Gera a tabela de janelas do 01_janelas.md.

Cruza as classes da P166 com as do Interface.u do Interlude (exportado em
tools\\l2anim\\export\\uc\\Interface) e com as janelas do Interface.xdat
(analises\\l2-interlude\\re\\interface_layout.json). O estado no l2unity vem
da tabela ESTADO abaixo (levantamento manual do main, ver 01_janelas.md §3).

uso: python -I classify_windows.py <workspace> <saida.md>
"""
import json, os, re, sys

WS = sys.argv[1]
P166 = os.path.join(WS, 'analises', 'Interface_P166', 'Interface', 'Classes')
IL = os.path.join(WS, 'tools', 'l2anim', 'export', 'uc', 'Interface')
XDAT = os.path.join(WS, 'analises', 'l2-interlude', 're', 'interface_layout.json')

# Classe da P166 sem classe homonima no Interlude, mas com a mesma funcao numa
# janela (ou tela nativa) do Interlude: classe/tela equivalente e evidencia.
EQUIV = {
    'ClanWndClassic': ('ClanWnd', 'variante "Classic" do ClanWnd'),
    'ClanDrawerWndClassic': ('ClanDrawerWnd', 'variante "Classic"'),
    'ClanPledgeBonusDrawerWndClassic': (None, 'bônus de clã: posterior'),
    'DetailStatusWndClassic': ('DetailStatusWnd', 'variante "Classic"'),
    'InviteClanPopWndClassic': ('InviteClanPopWnd', 'variante "Classic"'),
    'SummonedWndClassic': ('SummonedWnd', 'variante "Classic"'),
    'UnionDetailWndClassic': ('UnionDetailWnd', 'variante "Classic"'),
    'Tooltip': ('ToolTip', 'mesmo papel: trata EV_RequestTooltipInfo'),
    'NPCDialogWnd': ('(nativo) HTML de NPC', 'no Interlude é nativo (NCHtmlViewer, spec 07 §18.2); pacote NpcHtmlMessage no aCis'),
    'RadarMapWnd': ('RadarWnd / RadarContainerWnd', 'radar reescrito'),
    'Login': ('(nativo) tela de login', 'no Interlude é C++ (spec 89)'),
    'LogInMenu': ('(nativo) tela de login', 'spec 89'),
    'LogInEula': ('(nativo) EULA', 'spec 89'),
    'LogInLoading': ('(nativo) login', 'spec 89'),
    'LoginServerSelect': ('(nativo) seleção de servidor', 'spec 89'),
    'LobbyMenuWnd': ('(nativo) lobby', 'spec 89'),
    'CharacterCreateMenuWnd': ('(nativo) criação de personagem', 'spec 89'),
    'SkillLearnWnd': ('SkillTrainListWnd', 'aprendizado de skill reescrito'),
    'MinimapWnd': ('MinimapWnd + MinimapWnd_Expand', 'a P166 junta as duas'),
}

# Estado no l2unity (main) por janela do Interlude. (estado, arquivo)
ESTADO = {
    'StatusWnd': ('parcial', 'UI/GameUi.cs:209,471-534'),
    'TargetStatusWnd': ('parcial', 'UI/GameUi.cs:210-214,403-468; UI/TargetStatus.cs'),
    'AbnormalStatusWnd': ('parcial', 'UI/GameUi.Hud.cs:113-190'),
    'ChatWnd': ('parcial', 'UI/GameUi.cs:220-247,536-611; UI/L2Log.cs'),
    'SystemMsgWnd': ('feito', 'UI/GameUi.cs:223,742-747'),
    'ChatFilterWnd': ('feito', 'UI/GameUi.cs:249-272,613-739; UI/ChatFilter.cs'),
    'ShortcutWnd': ('parcial', 'UI/GameUi.Windows.cs:379-689'),
    'Shortcut': ('parcial', 'UI/GameUi.Hud.cs:37-96; App.cs:2569-2621'),
    'MenuWnd': ('parcial', 'UI/GameUi.cs:281,362-372'),
    'SystemMenuWnd': ('parcial', 'UI/GameUi.cs:282,373-399'),
    'RadarContainerWnd': ('parcial', 'UI/GameUi.Hud.cs:219-245; UI/RadarView.cs'),
    'RadarWnd': ('parcial', 'UI/RadarView.cs (a RadarWnd do xdat não é usada)'),
    'PartyWnd': ('parcial', 'UI/PartyWnd.cs:321-579'),
    'PartyWndCompact': ('parcial', 'UI/PartyWnd.cs'),
    'PartyWndOption': ('feito', 'UI/PartyWnd.cs:363-380'),
    'ZoneTitleWnd': ('feito', 'UI/ZoneTitleWnd.cs:8-55'),
    'MinimapWnd': ('feito', 'UI/MinimapView.cs:336-610; UI/MinimapModel.cs'),
    'MinimapWnd_Expand': ('feito', 'UI/MinimapView.cs'),
    'TownMapWnd': ('parcial', 'UI/MinimapView.cs (embutido no minimapa)'),
    'MultiSellWnd': ('parcial', 'UI/MultiSellView.cs:172-289'),
    'RestartMenuWnd': ('feito', 'UI/GameUi.Windows.cs:21-56'),
    'DialogBox': ('parcial', 'UI/GameUi.Windows.cs:716-757 (só OK/Cancel)'),
    'InventoryWnd': ('parcial', 'UI/GameUi.Windows.cs:222-294'),
    'MainWnd': ('feito', 'UI/GameUi.cs:317-360'),
    'DetailStatusWnd': ('parcial', 'UI/GameUi.cs:502-534'),
    'MagicSkillWnd': ('parcial', 'UI/GameUi.Windows.cs:297-317'),
    'ActionWnd': ('parcial', 'UI/GameUi.Windows.cs:319-336'),
    'ClanWnd': ('falta', 'UI/GameUi.cs:317 (casca vazia)'),
    'QuestTreeWnd': ('falta', 'UI/GameUi.cs:317 (casca vazia)'),
    'OptionWnd': ('parcial', 'UI/OptionWnd.cs:10-408'),
    'HelpHtmlWnd': ('falta', 'UI/NpcHtmlWnd.cs usa o layout como molde'),
    'ShopWnd': ('parcial', 'UI/GameUi.Windows.cs:124-191 (janela genérica)'),
    'BoardWnd': ('parcial', 'UI/GameUi.Windows.cs:79-122 (janela genérica)'),
    'TradeWnd': ('parcial', 'UI/SocialUi.cs:195-314 (janela genérica)'),
    'PrivateShopWnd': ('parcial', 'UI/SocialUi.cs:316-364 (só comprar de outro)'),
    'LoadingWnd': ('parcial', 'UI/LoadingScreen.cs'),
    'GametipWnd': ('parcial', 'UI/GameTip.cs; UI/LoadingScreen.cs:136-145'),
    'ToolTip': ('parcial', 'UI/UiTooltip.cs (só texto)'),
    '(nativo) HTML de NPC': ('parcial', 'UI/NpcHtmlWnd.cs; UI/L2Html.cs'),
    '(nativo) tela de login': ('feito', 'UI/LobbyLoginScreen.cs'),
    '(nativo) seleção de servidor': ('feito', 'UI/LobbyServerScreen.cs'),
    '(nativo) lobby': ('feito', 'UI/LobbyCharsScreen.cs'),
    '(nativo) criação de personagem': ('feito', 'UI/LobbyCreateScreen.cs'),
}

# Janelas que nao sao de jogo (ferramentas, debug, GM interno, idioma)
TOOLS = re.compile(r'^(UIEditor_|UI\w*ToolWnd|DebugWnd|EffectTester|EnvTestWnd|HDRRenderTestWnd|PostEffectTestWnd|'
                   r'ArmorEnchantEffectTestWnd|ErtheiaTestWnd|PacketTest|Sample|ShaderBuild|SSAOWnd|DepthOfField|'
                   r'MSProfilerWnd|MSViewerWnd|NPCViewerWnd|PCViewerWnd|SceneEditor|SceneClipView|MovieCapture|'
                   r'UIDebugWnd|UICommandWnd|BuilderCmdWnd|PVBuilderCmdWnd|BenchMarkMenuWnd|W24HzWnd)')
SUPPORT = {'UICommonAPI', 'UIConstants', 'UIData', 'L2Util', 'L2UIGFxScript', 'L2UIGFxScriptNoneContainer',
           'ContainerWindow', 'ContainerHUD', 'ViewPortWndBase', 'PartyMatchWndCommon', 'BR_CashShopAPI',
           'MultiTimer', 'AlterSkill', 'AlterSkillJump'}


def rd(p):
    b = open(p, 'rb').read()
    for e in ('utf-8', 'cp949', 'latin-1'):
        try:
            return b.decode(e)
        except UnicodeDecodeError:
            pass


def info(path):
    t = rd(path)
    m = re.search(r'^\s*class\s+(\w+)\s+extends\s+(\w+)', t, re.I | re.M)
    return (m.group(2) if m else ''), bool(re.search(r'\b(event|function)\s+OnLoad\s*\(', t, re.I)), len(t.splitlines())


def main():
    il = {f[:-3] for f in os.listdir(IL) if f.endswith('.uc')}
    il_lower = {c.lower(): c for c in il}
    xdat = [w['name'] for w in json.load(open(XDAT, encoding='utf-8'))['windows']]
    xdat_lower = {n.lower() for n in xdat}
    rows = []
    for f in sorted(os.listdir(P166), key=str.lower):
        if not f.endswith('.uc'):
            continue
        c = f[:-3]
        ext, has_load, nl = info(os.path.join(P166, f))
        if c in SUPPORT or not has_load and ext not in ('LoadingWnd', 'ReplayLogoWnd') and c.lower() not in xdat_lower:
            tipo = 'apoio'
        elif ext in ('L2UIGFxScript', 'GFxUIScript', 'L2UIGFxScriptNoneContainer'):
            tipo = 'janela GFx'
        elif ext in ('LoadingWnd', 'ReplayLogoWnd'):
            tipo = 'idioma'
        elif TOOLS.match(c):
            tipo = 'ferramenta'
        else:
            tipo = 'janela'
        ilname = il_lower.get(c.lower())
        if ilname:
            ver, evid, alvo = 'Interlude', f'`{ilname}.uc` no Interface.u IL', ilname
        elif c in EQUIV and EQUIV[c][0]:
            ver, evid, alvo = 'Interlude (equivalente)', f'{EQUIV[c][0]}: {EQUIV[c][1]}', EQUIV[c][0]
        else:
            alvo = None
            ver = 'posterior'
            if tipo == 'janela GFx':
                evid = 'Scaleform/GFx (`extends ' + ext + '`); o Interlude não tem GFx'
            elif c in EQUIV:
                evid = EQUIV[c][1]
            else:
                evid = 'ausente no Interface.u IL (142 classes) e no xdat (140 janelas)'
        if tipo == 'apoio' and ver == 'posterior':
            evid = 'script de apoio sem OnLoad' if not has_load else evid
        base = ext if tipo == 'idioma' else alvo
        est, arq = ESTADO.get(base, ('falta', '—')) if ver != 'posterior' else ('—', '—')
        if ver != 'posterior' and tipo in ('apoio',):
            est, arq = ESTADO.get(alvo, ('—', '—'))
        rows.append((c, tipo, ver, evid, est, arq, nl))
    # classes do Interlude sem classe homonima na P166
    p_lower = {r[0].lower() for r in rows}
    for c in sorted(il, key=str.lower):
        if c.lower() in p_lower:
            continue
        est, arq = ESTADO.get(c, ('falta', '—'))
        rows.append((c, 'só IL', 'Interlude', f'`{c}.uc` no Interface.u IL; sem classe na P166', est, arq, 0))
    # janelas do xdat do Interlude sem classe .uc propria
    XSTATE = {'VideoTab': 'OptionWnd', 'AudioTab': 'OptionWnd', 'GameTab': 'OptionWnd', 'movingtext': 'RadarContainerWnd'}
    for n in sorted(xdat, key=str.lower):
        if n.lower() in il_lower or n.lower() in p_lower:
            continue
        est, arq = ESTADO.get(XSTATE.get(n), ('falta', '—'))
        rows.append((n, 'só xdat IL', 'Interlude', 'janela do Interface.xdat IL sem classe própria (script da janela-mãe)', est, arq, 0))
    with open(sys.argv[2], 'w', encoding='utf-8') as o:
        o.write('| Classe (P166) | Tipo | Versão | Evidência | Estado no l2unity | Arquivo do l2unity |\n')
        o.write('|---|---|---|---|---|---|\n')
        for r in rows:
            o.write(f'| {r[0]} | {r[1]} | {r[2]} | {r[3]} | {r[4]} | {r[5]} |\n')
    from collections import Counter
    print(Counter((r[1], r[2]) for r in rows))
    print(Counter(r[4] for r in rows if r[2] != 'posterior'))
    print('xdat sem classe:', sorted(n for n in xdat if n.lower() not in il_lower))


main()
