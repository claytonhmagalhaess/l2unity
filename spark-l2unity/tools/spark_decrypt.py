#!/usr/bin/env python3
"""Reconstrucao (a partir da engenharia reversa em REA/client/native_analysis.md) dos
contêineres do cliente Infinity:
  SPK1 (.spk/.spi): AES-256-CBC/PKCS7, chave = SHA256("Pr0j3ct-SP4RK-Inf1nity-d4t4-2026|l2-spark::conteudo::v1"), IV nos bytes 4..20
  SPA1 (.spa)     : XOR com keystream splitmix64 semeado por SHA256(K-mix | '|' | nome do pacote)
Uso: spark_decrypt.py spk <arquivo.spk> [saida]
     spark_decrypt.py spa <arquivo.spa> [saida] [--nome NOME] [--bytes N]
"""
import sys, hashlib, struct, os

PASS_PARTS = ["Pr0j3ct", "SP4RK", "Inf1nity", "d4t4", "2026"]   # SparkCripto._p
SAL = "l2-spark::conteudo::v1"                                   # SparkCripto._sal
K = [0x6c32a9f01d7e5b33, 0xc4e1093b7a2d86f5, 0x15f7d2c08e6b4a91, 0xa03e5b7c19d2f468]  # SparkCifraStream._k
OURO = 0x9E3779B97F4A7C15
M64 = (1 << 64) - 1

def spk_key():
    return hashlib.sha256(("-".join(PASS_PARTS) + "|" + SAL).encode("utf-8")).digest()

# ---- AES-256-CBC decrypt (puro Python, sem dependências) ----
_sbox = [0]*256; _inv = [0]*256
def _init_sbox():
    p = q = 1
    while True:
        p = p ^ ((p << 1) & 0xff) ^ (0x1b if p & 0x80 else 0)
        q ^= q << 1; q ^= q << 2; q ^= q << 4; q &= 0xff
        if q & 0x80: q ^= 0x09
        x = q ^ (q << 1) ^ (q << 2) ^ (q << 3) ^ (q << 4)
        x = (x ^ (x >> 8) ^ 0x63) & 0xff
        _sbox[p] = x; _inv[x] = p
        if p == 1: break
    _sbox[0] = 0x63; _inv[0x63] = 0
_init_sbox()
def _xt(a): return ((a << 1) ^ 0x1b) & 0xff if a & 0x80 else a << 1
def _mul(a, b):
    r = 0
    while b:
        if b & 1: r ^= a
        a = _xt(a); b >>= 1
    return r
def _expand(key):
    nk = len(key)//4; w = [list(key[4*i:4*i+4]) for i in range(nk)]; rcon = 1
    for i in range(nk, 4*15):
        t = list(w[i-1])
        if i % nk == 0:
            t = t[1:]+t[:1]; t = [_sbox[b] for b in t]; t[0] ^= rcon; rcon = _xt(rcon)
        elif nk > 6 and i % nk == 4: t = [_sbox[b] for b in t]
        w.append([w[i-nk][j] ^ t[j] for j in range(4)])
    return [sum(w[4*r:4*r+4], []) for r in range(15)]
def _dec_block(rk, blk):
    s = [blk[i] ^ rk[14][i] for i in range(16)]
    for rnd in range(13, -1, -1):
        s = [s[(i - 4*(i % 4)) % 16] for i in range(16)]           # inv shift rows
        s = [_inv[b] for b in s]
        s = [s[i] ^ rk[rnd][i] for i in range(16)]
        if rnd:
            o = []
            for c in range(4):
                a = s[4*c:4*c+4]
                o += [_mul(a[0],14)^_mul(a[1],11)^_mul(a[2],13)^_mul(a[3],9),
                      _mul(a[0],9)^_mul(a[1],14)^_mul(a[2],11)^_mul(a[3],13),
                      _mul(a[0],13)^_mul(a[1],9)^_mul(a[2],14)^_mul(a[3],11),
                      _mul(a[0],11)^_mul(a[1],13)^_mul(a[2],9)^_mul(a[3],14)]
            s = o
    return bytes(s)
def aes_cbc_decrypt(key, iv, data):
    try:
        from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes
        d = Cipher(algorithms.AES(key), modes.CBC(iv)).decryptor(); return d.update(data) + d.finalize()
    except ImportError:
        pass
    rk = _expand(key); out = bytearray(); prev = iv
    for i in range(0, len(data), 16):
        c = data[i:i+16]; p = _dec_block(rk, c); out += bytes(a ^ b for a, b in zip(p, prev)); prev = c
    return bytes(out)

def spk_decrypt(blob):
    if blob[:4] != b"SPK1": raise ValueError("sem carimbo SPK1")
    iv, body = blob[4:20], blob[20:]
    plain = aes_cbc_decrypt(spk_key(), iv, body)
    return plain[:-plain[-1]]  # PKCS7

# ---- SPA1 ----
def splitmix(seed, block):
    z = (seed + block * OURO) & M64
    z = ((z ^ (z >> 30)) * 0xBF58476D1CE4E5B9) & M64
    z = ((z ^ (z >> 27)) * 0x94D049BB133111EB) & M64
    return z ^ (z >> 31)
def spa_seed(nome):
    nb = nome.encode("utf-8"); buf = bytearray(0x21 + len(nb))
    for i in range(4):
        v = ((K[(i+1) & 3] >> 7) ^ K[i] ^ ((i+1) * 0x2545F4914F6CDD1D)) & M64
        buf[i*8:i*8+8] = struct.pack("<Q", v)
    buf[0x20] = 0x7c; buf[0x21:] = nb
    return struct.unpack("<Q", hashlib.sha256(bytes(buf)).digest()[:8])[0]
def spa_xor(seed, pos, data):
    out = bytearray(data)
    for i in range(len(out)):
        p = pos + i; k = splitmix(seed, p >> 3)
        out[i] ^= (k >> (8 * (p & 7))) & 0xff
    return bytes(out)
def spa_decrypt(blob, nome, n=None):
    if blob[:4] != b"SPA1": raise ValueError("nao e um pacote de arte")
    body = blob[8:] if n is None else blob[8:8+n]
    return spa_xor(spa_seed(nome), 0, body)

if __name__ == "__main__":
    a = sys.argv[1:]
    if len(a) < 2: print(__doc__); sys.exit(1)
    kind, path = a[0], a[1]; out = a[2] if len(a) > 2 and not a[2].startswith("--") else None
    blob = open(path, "rb").read()
    if kind == "spk":
        res = spk_decrypt(blob)
    else:
        nome = os.path.splitext(os.path.basename(path))[0].lower()
        if "--nome" in a: nome = a[a.index("--nome")+1]
        n = int(a[a.index("--bytes")+1]) if "--bytes" in a else None
        res = spa_decrypt(blob, nome, n)
    if out: open(out, "wb").write(res); print("gravado", out, len(res), "bytes")
    else: sys.stdout.buffer.write(res[:4096])
