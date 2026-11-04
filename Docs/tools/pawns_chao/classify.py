import numpy as np, sys, glob, os
TD, TU = 84, 20
def classify(tile):
    z = np.load(f'sweep/{tile}.npz'); c = np.load(f'sweep/{tile}_cls.npz')
    lo = z['lo'].astype(np.float32); hi = z['hi'].astype(np.float32); nl = z['nl']; ue = z['ue']
    has = nl > 0
    res = {}
    for name, zz, cov, mask in (('lo', lo, c['cov_lo'], has), ('hi', hi, c['cov_hi'], has & (hi != lo))):
        if ue.size:
            d = zz - ue
            ter = (d <= TD) & (d >= -TU)
            up = d > TD; down = d < -TU
        else:
            d = None; ter = np.zeros_like(mask); up = np.zeros_like(mask); down = np.zeros_like(mask)
        piso = cov
        fora_up = ~piso & ~ter & up & mask
        fora_down = ~piso & ~ter & down & mask
        res[name] = dict(n=int(mask.sum()), piso=int((piso & mask).sum()), ter=int((~piso & ter & mask).sum()), up=int(fora_up.sum()), down=int(fora_down.sum()), fu=fora_up, fd=fora_down, d=d)
    return res, ue.size > 0
if __name__ == '__main__':
    for t in sys.argv[1:]:
        r, hasue = classify(t)
        for k in ('lo', 'hi'):
            x = r[k]; n = max(1, x['n'])
            print(t, k, 'ue' if hasue else 'SEM-UE', f"n={x['n']} piso={x['piso']/n*100:.2f}% terreno={x['ter']/n*100:.2f}% flutua={x['up']/n*100:.3f}% afunda={x['down']/n*100:.3f}%")
