"""G8 / spec 08: zonas (ZoneInfo: neblina, ambiente, sol), NMovableSunLight, luzes (Light: cor HSV, raio, LightType, fase e
periodo, corona, bDynamicLight) e projetores de um mapa, do inventario l2anim/out/re/maps/<mapa>.json, para
StreamingAssets/L2Web/cache/map/<mapa>_env.json. Padroes da classe Light do Engine.u (spec 08 secao 5.2): Steady,
Brightness 64, Radius 64, Saturation 255, Period 32, DrawScale 1. Skins das coronas: LIGHT_GLOW01 (o inventario so
guarda "<3 bytes>").

Uso: python -I Docs/tools/export_map_env.py [mapa=Lobby] [saida]
"""
import json
import os
import sys

MAP = sys.argv[1] if len(sys.argv) > 1 else 'Lobby'
SRC = os.path.join('C:\\Users\\Clayton\\workspace-claude\\L2Unity-workspace\\tools\\l2anim\\out\\re\\maps', MAP + '.json')
OUT = sys.argv[2] if len(sys.argv) > 2 else os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', 'Assets',
                                                         'StreamingAssets', 'L2Web', 'cache', 'map', MAP + '_env.json')


def main():
    d = json.load(open(SRC, encoding='utf-8'))
    zones, sun, level, lights, projectors, fogs = [], None, None, [], [], []
    for a in d['atores_ambiente']:
        p = a.get('props', {})
        if a['classe'] == 'ZoneInfo' and not p.get('bDeleteMe'):
            c = p.get('DistanceFogColor', {})
            zones.append({'name': a['nome'], 'loc': p.get('Location'), 'fog': p.get('bDistanceFog', False),
                          'fogColor': [c.get('R', 0), c.get('G', 0), c.get('B', 0)],
                          'fogStart': p.get('DistanceFogStart', 0.0), 'fogEnd': p.get('DistanceFogEnd', 0.0),
                          'ambient': p.get('AmbientVector'), 'sunAffect': p.get('bSunAffect', True), 'terrain': p.get('bTerrainZone', False),
                          'groups': p.get('Group', '')})
        elif a['classe'] in ('Light', 'Spotlight'):
            lights.append({'name': a['nome'], 'loc': p.get('Location'), 'type': p.get('LightType', 1), 'effect': p.get('LightEffect', 0),
                           'brightness': p.get('LightBrightness', 64.0), 'hue': p.get('LightHue', 0), 'sat': p.get('LightSaturation', 255),
                           'radius': p.get('LightRadius', 64.0), 'period': p.get('LightPeriod', 32), 'phase': p.get('LightPhase', 0),
                           'cone': p.get('LightCone', 128), 'rot': p.get('Rotation', [0, 0, 0]),
                           'dynamic': bool(p.get('bDynamicLight')), 'corona': bool(p.get('bCorona')), 'drawScale': p.get('DrawScale', 1.0),
                           'skin': '/raw/FX_E_T/Texture/LIGHT_GLOW01.png' if p.get('bCorona') else None, 'groups': p.get('Group', '')})
        elif a['classe'] == 'Projector':
            tex = (p.get('ProjTexture') or '').split('.')
            projectors.append({'name': a['nome'], 'loc': p.get('Location'), 'rot': p.get('Rotation', [0, 0, 0]), 'fov': p.get('FOV', 0),
                               'maxTrace': p.get('MaxTraceDistance', 1000.0), 'materialOp': p.get('MaterialBlendingOp', 0),
                               'frameOp': p.get('FrameBufferBlendingOp', 1), 'drawScale': p.get('DrawScale', 1.0),
                               'terrain': p.get('bProjectTerrain', True), 'bsp': p.get('bProjectBSP', True),
                               'staticMesh': p.get('bProjectStaticMesh', True),
                               'texture': '/raw/%s/Texture/%s.png' % (tex[0].lower(), tex[-1]) if len(tex) > 1 else None})
        elif a['classe'] == 'L2FogInfo':
            # spec 08 Apendice A: AffectRange (peso 3D), FogRange1..5 (nivel do alcance), Colors[] por hora
            def rgb(c):
                return [c.get('R', 0), c.get('G', 0), c.get('B', 0)] if isinstance(c, dict) else [0, 0, 0]
            keys = []
            for k in p.get('Colors') or []:
                keys.append({'time': k.get('Time', 0.0), 'fog': rgb(k.get('FogColor')), 'sky': rgb(k.get('SkyColor')),
                             'clouds': [rgb(c) for c in (k.get('CloudColor') or [])], 'hazes': [rgb(c) for c in (k.get('HazeRingColor') or [])]})
            ar = p.get('AffectRange') or {}
            fogs.append({'name': a['nome'], 'loc': p.get('Location'), 'affectMin': ar.get('Min', 0.0), 'affectMax': ar.get('Max', 0.0),
                         'ranges': [[(p.get('FogRange%d' % i) or {}).get('Min', 0.0), (p.get('FogRange%d' % i) or {}).get('Max', 0.0)] for i in range(1, 6)],
                         'colors': keys})
        elif a['classe'] == 'NMovableSunLight' and sun is None:
            sun = {'brightness': p.get('LightBrightness'), 'rot': p.get('Rotation')}
        elif a['classe'] == 'LevelInfo' and level is None:
            level = {'ambient': p.get('AmbientVector')}
    os.makedirs(os.path.dirname(OUT), exist_ok=True)
    json.dump({'zones': zones, 'sun': sun, 'level': level, 'lights': lights, 'projectors': projectors, 'fogs': fogs}, open(OUT, 'w', encoding='utf-8'), indent=1)
    print(MAP, 'zonas', len(zones), 'luzes', len(lights), 'projetores', len(projectors), 'neblinas', len(fogs))


if __name__ == '__main__':
    main()
