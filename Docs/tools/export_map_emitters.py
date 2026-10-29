"""G8 (lobby, P2/P5 do lobby_env_plan): os Emitter do Lobby.unr com os sub-emissores (BeamEmitter dos feixes de luz das
janelas, SpriteEmitter dos vagalumes/nevoa/fumaca) para StreamingAssets/L2Web/cache/map/Lobby_emitters.json, e as
texturas das particulas exportadas com o umodel em cache/raw/<Pacote>/Texture.

Le o mapa com o ukx_parse/unr_inventory do l2anim; a TArray de referencias Emitters vira a lista de nomes (mesmo truque
do scratchpad scripts/lobby_em2.py). As propriedades saem como o UE2 as grava (so as que diferem do padrao da classe).

Uso: python -I Docs/tools/export_map_emitters.py [mapa=Lobby] [cliente]   (emissores, moveis e portas de qualquer mapa)
"""
import glob
import json
import os
import subprocess
import sys

L2ANIM = r'C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim'
sys.path.insert(0, os.path.join(L2ANIM, 'scripts'))
import ukx_parse  # noqa: E402
import unr_inventory as ui  # noqa: E402

MAP = sys.argv[1] if len(sys.argv) > 1 else 'Lobby'
CLIENT = sys.argv[2] if len(sys.argv) > 2 else r'C:\Program Files (x86)\Lineage II Interlude'
CACHE = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', 'Assets', 'StreamingAssets', 'L2Web', 'cache')
OUT = os.path.join(CACHE, 'map', MAP + '_emitters.json')
RAW = os.path.join(CACHE, 'raw')
UMODEL = os.path.join(L2ANIM, 'ext', 'umodel_dl', 'bin', 'umodel_64.exe')

orig = ukx_parse.Package._try_nested


def refs_array(self, is_array, start, size):
    v = orig(self, is_array, start, size)
    if v is not None or not is_array:
        return v
    r = self.r
    end = start + size
    try:
        r.p = start
        n = r.idx()
        refs = [r.idx() for _ in range(n)]
        if r.p == end and n > 0 and all(abs(x) <= len(self.exports) + len(self.imports) for x in refs):
            return ['@' + (self.obj_name(x) or 'None') for x in refs]
    except Exception:  # noqa: BLE001
        pass
    finally:
        r.p = start
    return None


ukx_parse.Package._try_nested = refs_array


def texture_url(ref):
    """'Pacote.Grupo.Nome' -> /raw/<Pacote>/Texture/<Nome>.png (exporta com o umodel se faltar)."""
    if not ref or not isinstance(ref, str):
        return None
    parts = ref.split('.')
    pkg, name = parts[0], parts[-1]
    hits = glob.glob(os.path.join(RAW, '*', 'Texture', name + '.png'))
    if not hits:
        subprocess.run([UMODEL, '-export', '-png', '-game=l2', '-path=' + CLIENT, '-out=' + RAW, pkg, name, 'Texture'], capture_output=True)
        hits = glob.glob(os.path.join(RAW, '*', 'Texture', name + '.png'))
    if not hits:
        print('sem textura', ref)
        return None
    return '/' + os.path.relpath(hits[0], CACHE).replace('\\', '/')


def main():
    p = ukx_parse.Package(os.path.join(CLIENT, 'Maps', MAP + '.unr'))
    rows = {}
    movers = []
    doors = []
    for e in p.exports:
        c = p.class_name(e)
        if c == 'Emitter' or c.endswith('Emitter'):
            rows[e['name']] = dict(cls=c, props=ui.props_of(p, e))
        elif c == 'Mover':
            pr = ui.props_of(p, e)
            keys = []
            for i in range(8):
                kp = pr.get('KeyPos' if i == 0 else 'KeyPos[%d]' % i)
                kr = pr.get('KeyRot' if i == 0 else 'KeyRot[%d]' % i)
                if kp is None and kr is None and i > 1:
                    break
                keys.append({'pos': list(kp) if kp else [0, 0, 0], 'rot': list(kr) if kr else [0, 0, 0]})
            doors.append({'name': e['name'], 'mesh': pr.get('StaticMesh'), 'loc': pr.get('Location'), 'rot': pr.get('Rotation', [0, 0, 0]),
                          'basePos': pr.get('BasePos'), 'baseRot': pr.get('BaseRot'), 'scale': pr.get('DrawScale', 1.0),
                          'scale3d': pr.get('DrawScale3D', [1, 1, 1]), 'keys': keys, 'serverId': pr.get('L2ServerObjectID'),
                          'serverRealId': pr.get('L2ServerObjectRealID'), 'serverType': pr.get('L2ServerObjectType'),
                          'openingSound': pr.get('OpeningSound'), 'openedSound': pr.get('OpenedSound'),
                          'closingSound': pr.get('ClosingSound'), 'closedSound': pr.get('ClosedSound'),
                          'moveTime': pr.get('MoveTime', 1.0), 'stayOpenTime': pr.get('StayOpenTime', 4.0)})
        elif c in ('StaticMeshActor', 'MovableStaticMeshActor'):
            pr = ui.props_of(p, e)
            # P6: moinho (Physics = PHYS_Rotating com RotationRate) e as vinhas que balancam (L2RotatorRate/Max)
            if c == 'MovableStaticMeshActor' or pr.get('Physics') == 5:
                movers.append({'name': e['name'], 'cls': c, 'mesh': pr.get('StaticMesh'), 'loc': pr.get('Location'),
                               'rot': pr.get('Rotation', [0, 0, 0]), 'scale': pr.get('DrawScale', 1.0), 'scale3d': pr.get('DrawScale3D', [1, 1, 1]),
                               'physics': pr.get('Physics', 0), 'rotationRate': pr.get('RotationRate'),
                               'l2RotatorRate': pr.get('L2RotatorRate'), 'l2RotatorMax': pr.get('L2RotatorMax'),
                               'l2AccelRatio': pr.get('L2AccelRatio'), 'groups': pr.get('Group', '')})
    json.dump({'movers': movers, 'doors': doors}, open(os.path.join(os.path.dirname(OUT), MAP + '_movers.json'), 'w'), indent=1, default=str)
    print('movers', len(movers), 'portas', len(doors))
    out = []
    for name, v in rows.items():
        if v['cls'] != 'Emitter':
            continue
        pr = v['props']
        subs = []
        for ref in pr.get('Emitters') or []:
            s = rows.get(str(ref).lstrip('@'))
            if not s:
                continue
            sp = {k: x for k, x in s['props'].items() if not (isinstance(x, str) and x.startswith('<'))}
            sp['cls'] = s['cls']
            sp['textureUrl'] = texture_url(sp.get('Texture'))
            subs.append(sp)
        out.append({'name': name, 'loc': pr.get('Location'), 'rot': pr.get('Rotation', [0, 0, 0]), 'drawScale': pr.get('DrawScale', 1.0),
                    'groups': pr.get('Group', ''), 'autoReset': bool(pr.get('AutoReset')), 'autoReplay': bool(pr.get('AutoReplay')), 'subs': subs})
    os.makedirs(os.path.dirname(OUT), exist_ok=True)
    json.dump({'emitters': out}, open(OUT, 'w'), indent=1, default=str)
    print('emissores', len(out), 'sub', sum(len(e['subs']) for e in out))


if __name__ == '__main__':
    main()
