"""K6: exporta os indices de paleta (P8) das texturas de consulta da zona (SysTextures/l2zonename.utx, 128x128 por regiao
XX_YY, 256 unidades por pixel; 03 §4.3) para StreamingAssets/L2Web/cache/ui/l2zonename.bin. Os PNG exportados sao RGB e
perdem o indice, que e o id do ZoneName-e.dat.

Formato: int32 n; n x (int32 tileX, int32 tileY, int32 w, int32 h, w*h bytes de indice, linha a linha).

Uso: python -I Docs/tools/export_zonename.py [cliente] [saida]
"""
import os
import struct
import sys

L2ANIM = r'C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim'
sys.path.insert(0, os.path.join(L2ANIM, 'scripts'))
from ukx_parse import Package  # noqa: E402

CLIENT = sys.argv[1] if len(sys.argv) > 1 else r'C:\Program Files (x86)\Lineage II Interlude'
OUT = sys.argv[2] if len(sys.argv) > 2 else os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', 'Assets',
                                                         'StreamingAssets', 'L2Web', 'cache', 'ui', 'l2zonename.bin')


def mips(p, exp):
    """Texture::Serialize depois das propriedades: TArray<FMipmap> (TLazyArray: SkipPos se ver >= 63, contagem, bytes;
    depois USize, VSize int32 e UBits, VBits byte); no L2 vem um int32 antes da contagem."""
    r = p.r
    r.seek(exp['offset'])
    props = p.read_props()
    # pacote do L2 (licenca 28): um int32 a mais antes do TArray (0 nestas texturas)
    extra = r.i32()
    assert extra == 0, extra
    n = r.idx()
    out = []
    for _ in range(n):
        if p.ver >= 63:
            r.i32()
        cnt = r.idx()
        data = r.d[r.p:r.p + cnt]
        r.p += cnt
        u, v = r.i32(), r.i32()
        r.u8()
        r.u8()
        out.append((u, v, data))
    return props, out


def main():
    p = Package(os.path.join(CLIENT, 'SysTextures', 'l2zonename.utx'))
    tiles = []
    for e in p.exports:
        if p.class_name(e) != 'Texture':
            continue
        props, mm = mips(p, e)
        u, v, data = mm[0]
        assert len(data) == u * v, (e['name'], u, v, len(data))
        fmt = props.get('Format')
        assert fmt in (None, 0, 'TEXF_P8'), (e['name'], fmt)
        x, y = (int(a) for a in e['name'].split('_'))
        tiles.append((x, y, u, v, data))
    tiles.sort()
    os.makedirs(os.path.dirname(OUT), exist_ok=True)
    with open(OUT, 'wb') as f:
        f.write(struct.pack('<i', len(tiles)))
        for x, y, u, v, data in tiles:
            f.write(struct.pack('<4i', x, y, u, v))
            f.write(data)
    print('regioes', len(tiles), 'tamanho', os.path.getsize(OUT), 'formato', {t[2:4] for t in tiles})


if __name__ == '__main__':
    main()
