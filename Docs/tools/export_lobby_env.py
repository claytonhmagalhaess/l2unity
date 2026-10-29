"""G8 (lobby, P1 do lobby_env_plan): zonas do Lobby.unr (ZoneInfo: neblina, ambiente, sol) e o NMovableSunLight, do inventario
do mapa em l2anim/out/re/maps/Lobby.json, para StreamingAssets/L2Web/cache/map/Lobby_env.json. P4: as Light (cor HSV, raio,
LightType, corona). Os padroes da classe Light vem do Engine.u (spec 08 secao 5.2): Steady, Brightness 64, Radius 64,
Saturation 255, DrawScale 1. Skins das coronas: todas LIGHT_GLOW01 (scratchpad/scripts/skins.py; o inventario so guarda
"<3 bytes>"), exportada em cache/raw/FX_E_T/Texture.

Uso: python -I Docs/tools/export_lobby_env.py [Lobby.json] [saida]
"""
import json
import os
import sys

SRC = sys.argv[1] if len(sys.argv) > 1 else r'C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim\out\re\maps\Lobby.json'
OUT = sys.argv[2] if len(sys.argv) > 2 else os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', 'Assets',
                                                         'StreamingAssets', 'L2Web', 'cache', 'map', 'Lobby_env.json')


def main():
    d = json.load(open(SRC, encoding='utf-8'))
    zones, sun, level, lights, projectors = [], None, None, [], []
    for a in d['atores_ambiente']:
        p = a.get('props', {})
        if a['classe'] == 'ZoneInfo' and not p.get('bDeleteMe'):
            c = p.get('DistanceFogColor', {})
            zones.append({'name': a['nome'], 'loc': p.get('Location'), 'fog': p.get('bDistanceFog', False),
                          'fogColor': [c.get('R', 0), c.get('G', 0), c.get('B', 0)],
                          'fogStart': p.get('DistanceFogStart', 0.0), 'fogEnd': p.get('DistanceFogEnd', 0.0),
                          'ambient': p.get('AmbientVector'), 'sunAffect': p.get('bSunAffect', True), 'terrain': p.get('bTerrainZone', False),
                          'groups': p.get('Group', '')})
        elif a['classe'] == 'Light':
            lights.append({'name': a['nome'], 'loc': p.get('Location'), 'type': p.get('LightType', 1),
                           'brightness': p.get('LightBrightness', 64.0), 'hue': p.get('LightHue', 0), 'sat': p.get('LightSaturation', 255),
                           'radius': p.get('LightRadius', 64.0), 'corona': bool(p.get('bCorona')), 'drawScale': p.get('DrawScale', 1.0),
                           'skin': '/raw/FX_E_T/Texture/LIGHT_GLOW01.png' if p.get('bCorona') else None, 'groups': p.get('Group', '')})
        elif a['classe'] == 'Projector':
            # defaults do Engine.u (scratchpad/lobby_sway_re.md 2.1): FrameBufferBlendingOp 1, MaxTraceDistance 1000,
            # bProject* = True; textura exportada com o umodel em cache/raw/<pacote>/Texture
            tex = (p.get('ProjTexture') or '').split('.')
            projectors.append({'name': a['nome'], 'loc': p.get('Location'), 'rot': p.get('Rotation', [0, 0, 0]), 'fov': p.get('FOV', 0),
                               'maxTrace': p.get('MaxTraceDistance', 1000.0), 'materialOp': p.get('MaterialBlendingOp', 0),
                               'frameOp': p.get('FrameBufferBlendingOp', 1), 'drawScale': p.get('DrawScale', 1.0),
                               'terrain': p.get('bProjectTerrain', True), 'bsp': p.get('bProjectBSP', True),
                               'staticMesh': p.get('bProjectStaticMesh', True),
                               'texture': '/raw/%s/Texture/%s.png' % (tex[0].lower(), tex[-1]) if len(tex) > 1 else None})
        elif a['classe'] == 'NMovableSunLight' and sun is None:
            sun = {'brightness': p.get('LightBrightness'), 'rot': p.get('Rotation')}
        elif a['classe'] == 'LevelInfo' and level is None:
            level = {'ambient': p.get('AmbientVector')}
    os.makedirs(os.path.dirname(OUT), exist_ok=True)
    json.dump({'zones': zones, 'sun': sun, 'level': level, 'lights': lights, 'projectors': projectors}, open(OUT, 'w', encoding='utf-8'), indent=1)
    print('zonas', [z['name'] for z in zones])


if __name__ == '__main__':
    main()
