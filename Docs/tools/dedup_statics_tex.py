"""Tira as texturas de dentro dos .glb do cenario (cache/statics/*.glb) e guarda cada uma uma vez so, em
cache/statics_tex/<sha256>.png (tarefa #0023). As malhas do l2web embutiam o PNG de cada material em todo .glb que o usa:
5,8 GB de imagem para 1,16 GB de conteudo diferente.

Cada image[] com bufferView vira {"uri": "../statics_tex/<sha256>.png", "mimeType", "name"} (o nome fica, o glTFast da
o nome da imagem a textura); os bytes da imagem saem do buffer e os demais bufferViews sao copiados na mesma ordem
(alinhados em 4), com os indices refeitos nos accessors. Malha, materiais, samplers, UV e nomes ficam iguais. O glTFast
resolve a uri relativa pela URL do .glb (file:// da copia local ou http:// do servidor de assets): /statics_tex/ tem
que ser servido ao lado de /statics/.

Reexecutavel: um .glb sem imagem embutida fica como esta e um PNG que ja existe nao e regravado (rodar duas vezes nao
muda nenhum byte). Antes de reescrever um .glb, copia o original para --backup (se ainda nao estiver la).

Uso: python -I Docs/tools/dedup_statics_tex.py [--statics PASTA] [--tex PASTA] [--backup PASTA] [--only a.glb,b.glb]
                                               [--check] [--dry-run]
  --check    so confere: todo .glb sem imagem embutida e toda uri apontando para um PNG que existe
"""
import hashlib
import json
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
CACHE = os.path.join(HERE, '..', '..', 'Assets', 'StreamingAssets', 'L2Web', 'cache')
BACKUP = r'C:\Users\Clayton\workspace-claude\L2Unity-workspace\backup\0023\statics'
GLB_MAGIC, CHUNK_JSON, CHUNK_BIN = 0x46546C67, 0x4E4F534A, 0x004E4942
PNG_MAGIC = b'\x89PNG\r\n\x1a\n'
EXT = {'image/png': '.png', 'image/jpeg': '.jpg'}


def arg(name, default=None):
    return sys.argv[sys.argv.index(name) + 1] if name in sys.argv else default


def read_glb(b):
    magic, version, length = struct.unpack_from('<III', b, 0)
    if magic != GLB_MAGIC or version != 2 or length != len(b):
        raise ValueError('cabecalho glb invalido')
    jl, jt = struct.unpack_from('<II', b, 12)
    if jt != CHUNK_JSON:
        raise ValueError('primeiro chunk nao e JSON')
    j = json.loads(b[20:20 + jl])
    pos = 20 + jl
    bin_ = b''
    if pos < len(b):
        bl, bt = struct.unpack_from('<II', b, pos)
        if bt != CHUNK_BIN or pos + 8 + bl != len(b):
            raise ValueError('chunk BIN inesperado')
        bin_ = b[pos + 8:pos + 8 + bl]
    return j, bin_


def write_glb(j, bin_):
    js = json.dumps(j, separators=(',', ':'), ensure_ascii=False).encode('utf-8')
    js += b' ' * (-len(js) % 4)
    bin_ += b'\0' * (-len(bin_) % 4)
    out = [struct.pack('<II', len(js), CHUNK_JSON), js]
    if bin_:
        out += [struct.pack('<II', len(bin_), CHUNK_BIN), bin_]
    body = b''.join(out)
    return struct.pack('<III', GLB_MAGIC, 2, 12 + len(body)) + body


def embedded(j):
    return [im for im in j.get('images', []) if 'bufferView' in im]


def remap(node, m):
    """Troca todo "bufferView" (accessors, sparse) pelo indice novo."""
    if isinstance(node, dict):
        for k, v in node.items():
            if k == 'bufferView' and isinstance(v, int):
                node[k] = m[v]
            else:
                remap(v, m)
    elif isinstance(node, list):
        for v in node:
            remap(v, m)


def write_atomic(path, data):
    tmp = path + '.tmp'
    with open(tmp, 'wb') as f:
        f.write(data)
    os.replace(tmp, path)


def dedup(j, bin_, tex_dir, dry):
    """Reescreve j/bin_ sem as imagens embutidas; devolve (glb novo, [(png, bytes, novo?)])."""
    if len(j.get('buffers', [])) != 1:
        raise ValueError('esperado um buffer so')
    views = j['bufferViews']
    img_views = {im['bufferView'] for im in embedded(j)}
    pngs = []
    for im in j['images']:
        if 'bufferView' not in im:
            continue
        bv = views[im['bufferView']]
        o = bv.get('byteOffset', 0)
        data = bin_[o:o + bv['byteLength']]
        mime = im.get('mimeType', 'image/png')
        if mime == 'image/png' and not data.startswith(PNG_MAGIC):
            raise ValueError('imagem %r nao e PNG' % im.get('name'))
        name = hashlib.sha256(data).hexdigest() + EXT[mime]
        path = os.path.join(tex_dir, name)
        new = not os.path.exists(path)
        if not new and os.path.getsize(path) != len(data):
            raise ValueError('%s ja existe com outro tamanho' % name)
        if new and not dry:
            write_atomic(path, data)
        pngs.append((name, len(data), new))
        keep = {k: v for k, v in im.items() if k not in ('bufferView', 'mimeType')}
        im.clear()
        im.update({'uri': '../statics_tex/' + name, 'mimeType': mime}, **keep)
    out = bytearray()
    m, kept = {}, []
    for i, bv in enumerate(views):
        if i in img_views:
            continue
        o = bv.get('byteOffset', 0)
        chunk = bin_[o:o + bv['byteLength']]
        out += b'\0' * (-len(out) % 4)
        nb = dict(bv)
        nb['byteOffset'] = len(out)
        out += chunk
        m[i] = len(kept)
        kept.append(nb)
    j['bufferViews'] = kept
    remap(j.get('accessors', []), m)
    j['buffers'][0]['byteLength'] = len(out)
    return write_glb(j, bytes(out)), pngs


def main():
    statics = arg('--statics', os.path.join(CACHE, 'statics'))
    tex_dir = arg('--tex', os.path.join(os.path.dirname(os.path.abspath(statics)), 'statics_tex'))
    backup = arg('--backup', BACKUP)
    only = arg('--only')
    dry = '--dry-run' in sys.argv
    check = '--check' in sys.argv
    files = sorted(f for f in os.listdir(statics) if f.endswith('.glb'))
    if only:
        want = set(only.split(','))
        files = [f for f in files if f in want]
        missing = want - set(files)
        if missing:
            sys.exit('nao achei: ' + ', '.join(sorted(missing)))
    if not dry and not check:
        os.makedirs(tex_dir, exist_ok=True)
        os.makedirs(backup, exist_ok=True)
    stats = dict(glb=0, rewritten=0, untouched=0, before=0, after=0, png_new=0, png_new_bytes=0, png_refs=0, errors=0)
    for n, f in enumerate(files):
        p = os.path.join(statics, f)
        b = open(p, 'rb').read()
        stats['glb'] += 1
        try:
            j, bin_ = read_glb(b)
            if check:
                for im in j.get('images', []):
                    if 'bufferView' in im:
                        raise ValueError('imagem embutida')
                    if not os.path.exists(os.path.join(statics, im['uri'].replace('/', os.sep))):
                        raise ValueError('falta ' + im['uri'])
                    stats['png_refs'] += 1
                continue
            if not embedded(j):
                stats['untouched'] += 1
                stats['before'] += len(b)
                stats['after'] += len(b)
                continue
            out, pngs = dedup(j, bin_, tex_dir, dry)
            # confere antes de gravar: o glb novo le de volta e cada accessor aponta para os mesmos bytes
            j2, bin2 = read_glb(out)
            j1, bin1 = read_glb(b)
            for a1, a2 in zip(j1['accessors'], j2['accessors']):
                v1, v2 = j1['bufferViews'][a1['bufferView']], j2['bufferViews'][a2['bufferView']]
                o1, o2 = v1.get('byteOffset', 0), v2.get('byteOffset', 0)
                if bin1[o1:o1 + v1['byteLength']] != bin2[o2:o2 + v2['byteLength']] or v1.get('byteStride') != v2.get('byteStride'):
                    raise ValueError('accessor mudou')
            stats['rewritten'] += 1
            stats['before'] += len(b)
            stats['after'] += len(out)
            stats['png_refs'] += len(pngs)
            for _, size, new in pngs:
                if new:
                    stats['png_new'] += 1
                    stats['png_new_bytes'] += size
            if not dry:
                bk = os.path.join(backup, f)
                if not os.path.exists(bk):
                    write_atomic(bk, b)
                write_atomic(p, out)
        except Exception as e:  # noqa: BLE001
            stats['errors'] += 1
            print('ERRO', f, e)
        if (n + 1) % 500 == 0:
            print('...', n + 1, 'de', len(files), flush=True)
    print(json.dumps(stats))
    if stats['errors']:
        sys.exit(1)


if __name__ == '__main__':
    main()
