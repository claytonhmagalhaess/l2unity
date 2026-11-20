"""Assets do cliente (StreamingAssets/L2Web, ~6 GB) no bucket R2 l2unity-assets, so com a biblioteca padrao do Python.

Uso (na raiz do l2unity):
  python -I Docs/tools/r2_assets.py status            # compara a pasta local com o bucket
  python -I Docs/tools/r2_assets.py baixar            # baixa o que falta ou mudou
  python -I Docs/tools/r2_assets.py enviar            # envia o que falta ou mudou (precisa do token de escrita)
  python -I Docs/tools/r2_assets.py manifesto         # regrava Docs/tools/r2_manifesto.tsv a partir do bucket
Opcoes: --pasta <dir> (padrao: Assets/StreamingAssets/L2Web), --env <arquivo> (padrao: env/r2-leitura.env),
        --limite N (so os N primeiros arquivos, para teste), --threads N (padrao 24).

Sem credenciais, status e baixar usam a URL publica do bucket (R2_PUBLIC_URL, padrao abaixo) e a lista de
arquivos em Docs/tools/r2_manifesto.tsv (chave, tamanho, MD5), porque a URL publica nao lista o bucket.
Depois de enviar, rode manifesto e faca commit do .tsv.

Credenciais (enviar, manifesto, ou para ler pelo S3): o arquivo --env (R2_ACCOUNT_ID, R2_BUCKET, R2_ACCESS_KEY_ID, R2_SECRET_ACCESS_KEY). Variaveis de ambiente
com os mesmos nomes tem preferencia. Um arquivo e igual ao do bucket quando o tamanho e o MD5 (ETag) batem.
Nada e apagado: arquivos que so existem de um lado sao listados no status.
"""
import argparse
import datetime
import hashlib
import hmac
import http.client
import os
import sys
import threading
import time
import urllib.parse
import xml.etree.ElementTree as ET
from concurrent.futures import ThreadPoolExecutor, as_completed

RAIZ = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..'))
NS = '{http://s3.amazonaws.com/doc/2006-03-01/}'
URL_PUBLICA = 'https://pub-ff57f61d05554ed188283f757a6166fc.r2.dev'
MANIFESTO = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'r2_manifesto.tsv')
CHAVES = ('R2_ACCOUNT_ID', 'R2_BUCKET', 'R2_ACCESS_KEY_ID', 'R2_SECRET_ACCESS_KEY')


def credenciais(caminho, obrigatorio=True):
    c = {}
    if os.path.exists(caminho):
        for linha in open(caminho, encoding='utf-8-sig'):
            linha = linha.strip()
            if linha and not linha.startswith('#') and '=' in linha:
                k, v = linha.split('=', 1)
                c[k.strip()] = v.strip()
    for k in CHAVES + ('R2_PUBLIC_URL',):
        if os.environ.get(k):
            c[k] = os.environ[k]
    falta = [k for k in CHAVES if not c.get(k) or '<' in c[k]]
    if falta and not obrigatorio:
        return None
    if falta:
        sys.exit(f'faltam credenciais em {caminho} ou no ambiente: {", ".join(falta)}')
    return c


class R2:
    """Cliente S3 minimo (SigV4, uma conexao keep-alive por thread)."""

    def __init__(self, c):
        self.c = c
        self.host = f"{c['R2_ACCOUNT_ID']}.r2.cloudflarestorage.com"
        self.local = threading.local()

    def _conn(self):
        if getattr(self.local, 'conn', None) is None:
            self.local.conn = http.client.HTTPSConnection(self.host, timeout=120)
        return self.local.conn

    def _assinar(self, metodo, uri, query, extra):
        agora = datetime.datetime.now(datetime.timezone.utc)
        amz, dia = agora.strftime('%Y%m%dT%H%M%SZ'), agora.strftime('%Y%m%d')
        h = {'host': self.host, 'x-amz-content-sha256': 'UNSIGNED-PAYLOAD', 'x-amz-date': amz}
        h.update({k.lower(): v for k, v in extra.items()})
        nomes = sorted(h)
        assinados = ';'.join(nomes)
        canon = '\n'.join([metodo, uri, query, ''.join(f'{k}:{h[k]}\n' for k in nomes), assinados, 'UNSIGNED-PAYLOAD'])
        escopo = f'{dia}/auto/s3/aws4_request'
        texto = '\n'.join(['AWS4-HMAC-SHA256', amz, escopo, hashlib.sha256(canon.encode()).hexdigest()])
        k = ('AWS4' + self.c['R2_SECRET_ACCESS_KEY']).encode()
        for parte in (dia, 'auto', 's3', 'aws4_request'):
            k = hmac.new(k, parte.encode(), hashlib.sha256).digest()
        sig = hmac.new(k, texto.encode(), hashlib.sha256).hexdigest()
        h['Authorization'] = (f"AWS4-HMAC-SHA256 Credential={self.c['R2_ACCESS_KEY_ID']}/{escopo}, "
                              f"SignedHeaders={assinados}, Signature={sig}")
        del h['host']
        return h

    def pedir(self, metodo, chave='', params=None, corpo=None, extra=None, tentativas=4):
        uri = '/' + urllib.parse.quote(self.c['R2_BUCKET'], safe='-_.~')
        if chave:
            uri += '/' + '/'.join(urllib.parse.quote(s, safe='-_.~') for s in chave.split('/'))
        query = '&'.join(f"{urllib.parse.quote(k, safe='-_.~')}={urllib.parse.quote(str(v), safe='-_.~')}"
                         for k, v in sorted((params or {}).items()))
        for n in range(tentativas):
            try:
                h = self._assinar(metodo, uri, query, extra or {})
                conn = self._conn()
                conn.request(metodo, uri + (f'?{query}' if query else ''), body=corpo, headers=h)
                r = conn.getresponse()
                dados = r.read()
                if r.status >= 500:
                    raise IOError(f'HTTP {r.status}')
                return r.status, dict(r.getheaders()), dados
            except (OSError, http.client.HTTPException) as e:
                self.local.conn = None
                if n == tentativas - 1:
                    raise IOError(f'{metodo} {chave}: {e}')
                time.sleep(1 + 2 * n)

    def listar(self):
        objs, token = {}, None
        while True:
            p = {'list-type': '2', 'max-keys': '1000'}
            if token:
                p['continuation-token'] = token
            st, _, dados = self.pedir('GET', params=p)
            if st != 200:
                sys.exit(f'listar o bucket: HTTP {st} {dados[:200]!r}')
            raiz = ET.fromstring(dados)
            for o in raiz.iter(NS + 'Contents'):
                objs[o.find(NS + 'Key').text] = (int(o.find(NS + 'Size').text), o.find(NS + 'ETag').text.strip('"'))
            if raiz.findtext(NS + 'IsTruncated') != 'true':
                return objs
            token = raiz.findtext(NS + 'NextContinuationToken')


class Publico:
    """Leitura pela URL publica (sem assinatura); a lista vem do manifesto."""

    def __init__(self, url):
        u = urllib.parse.urlsplit(url)
        self.host, self.base = u.netloc, u.path.rstrip('/')
        self.local = threading.local()

    def pedir(self, metodo, chave='', tentativas=4, **_):
        uri = self.base + '/' + '/'.join(urllib.parse.quote(s, safe='-_.~') for s in chave.split('/'))
        for n in range(tentativas):
            try:
                if getattr(self.local, 'conn', None) is None:
                    self.local.conn = http.client.HTTPSConnection(self.host, timeout=120)
                self.local.conn.request(metodo, uri, headers={'User-Agent': 'r2_assets'})
                r = self.local.conn.getresponse()
                dados = r.read()
                if r.status >= 500:
                    raise IOError(f'HTTP {r.status}')
                return r.status, dict(r.getheaders()), dados
            except (OSError, http.client.HTTPException) as e:
                self.local.conn = None
                if n == tentativas - 1:
                    raise IOError(f'{metodo} {chave}: {e}')
                time.sleep(1 + 2 * n)

    def listar(self):
        if not os.path.exists(MANIFESTO):
            sys.exit(f'sem credenciais e sem {MANIFESTO}')
        objs = {}
        for linha in open(MANIFESTO, encoding='utf-8'):
            if linha.strip() and not linha.startswith('#'):
                k, n, e = linha.rstrip('\n').split('\t')
                objs[k] = (int(n), e)
        return objs


def gravar_manifesto(objs):
    with open(MANIFESTO, 'w', encoding='utf-8', newline='\n') as f:
        f.write('# chave\ttamanho\tmd5 (gerado por r2_assets.py manifesto)\n')
        for k in sorted(objs):
            f.write(f'{k}\t{objs[k][0]}\t{objs[k][1]}\n')
    print(f'manifesto: {len(objs)} arquivos em {MANIFESTO}')


def arquivos_locais(pasta):
    out = {}
    for d, _, fs in os.walk(pasta):
        for f in fs:
            p = os.path.join(d, f)
            out[os.path.relpath(p, pasta).replace(os.sep, '/')] = (os.path.getsize(p), p)
    return out


def md5(caminho):
    h = hashlib.md5()
    with open(caminho, 'rb') as f:
        for bloco in iter(lambda: f.read(1 << 20), b''):
            h.update(bloco)
    return h.hexdigest()


def diferentes(locais, remotos, threads):
    """Chaves cujo tamanho ou MD5 difere entre os dois lados (so as que existem nos dois)."""
    mesmos = [k for k in locais if k in remotos and locais[k][0] == remotos[k][0]]
    dif = [k for k in locais if k in remotos and locais[k][0] != remotos[k][0]]
    with ThreadPoolExecutor(threads) as ex:
        fut = {ex.submit(md5, locais[k][1]): k for k in mesmos if '-' not in remotos[k][1]}
        for f in as_completed(fut):
            if f.result() != remotos[fut[f]][1]:
                dif.append(fut[f])
    return dif


def executar(tarefas, fn, threads, rotulo):
    total, feitos, erros, inicio = len(tarefas), 0, [], time.time()
    tam = sum(t[1] for t in tarefas)
    enviados = 0
    with ThreadPoolExecutor(threads) as ex:
        fut = {ex.submit(fn, chave): (chave, n) for chave, n in tarefas}
        for f in as_completed(fut):
            chave, n = fut[f]
            try:
                f.result()
                feitos += 1
                enviados += n
            except Exception as e:  # noqa: BLE001 - registra e segue com os outros
                erros.append(f'{chave}: {e}')
            if (feitos + len(erros)) % 2000 == 0 or feitos + len(erros) == total:
                dt = max(time.time() - inicio, 1e-6)
                print(f'  {rotulo}: {feitos + len(erros)}/{total} arquivos, {enviados / 2**30:.2f}/{tam / 2**30:.2f} GB, '
                      f'{enviados / 2**20 / dt:.1f} MB/s, {len(erros)} erros', flush=True)
    for e in erros[:20]:
        print('  ERRO', e)
    return erros


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('acao', choices=['status', 'enviar', 'baixar', 'manifesto'])
    ap.add_argument('--pasta', default=os.path.join(RAIZ, 'Assets', 'StreamingAssets', 'L2Web'))
    ap.add_argument('--env', default=os.path.join(RAIZ, 'env', 'r2-leitura.env'))
    ap.add_argument('--limite', type=int, default=0)
    ap.add_argument('--threads', type=int, default=24)
    a = ap.parse_args()

    c = credenciais(a.env, obrigatorio=a.acao in ('enviar', 'manifesto'))
    if c:
        r2 = R2(c)
        print(f"bucket {c['R2_BUCKET']} (S3), pasta {a.pasta}")
    else:
        url = os.environ.get('R2_PUBLIC_URL', URL_PUBLICA)
        r2 = Publico(url)
        print(f'URL publica {url} + manifesto, pasta {a.pasta}')
    remotos = {k: v for k, v in r2.listar().items() if not k.endswith('/')}  # sem marcadores de pasta
    if a.acao == 'manifesto':
        gravar_manifesto(remotos)
        return 0
    os.makedirs(a.pasta, exist_ok=True)
    locais = arquivos_locais(a.pasta)
    print(f'local: {len(locais)} arquivos, {sum(s for s, _ in locais.values()) / 2**30:.2f} GB; '
          f'bucket: {len(remotos)} arquivos, {sum(s for s, _ in remotos.values()) / 2**30:.2f} GB')
    so_local = sorted(k for k in locais if k not in remotos)
    so_remoto = sorted(k for k in remotos if k not in locais)

    if a.acao == 'status':
        dif = diferentes(locais, remotos, a.threads)
        print(f'so no local: {len(so_local)}; so no bucket: {len(so_remoto)}; diferentes: {len(dif)}')
        for nome, lista in (('so no local', so_local), ('so no bucket', so_remoto), ('diferentes', dif)):
            for k in lista[:5]:
                print(f'  {nome}: {k}')
        return 0 if not (so_local or so_remoto or dif) else 1

    if a.acao == 'enviar':
        alvo = so_local + diferentes(locais, remotos, a.threads)
        if a.limite:
            alvo = alvo[:a.limite]

        def enviar(chave):
            caminho = locais[chave][1]
            with open(caminho, 'rb') as f:
                corpo = f.read()
            st, h, dados = r2.pedir('PUT', chave, corpo=corpo, extra={'content-length': str(len(corpo))})
            if st != 200:
                raise IOError(f'HTTP {st} {dados[:120]!r}')
            etag = {k.lower(): v for k, v in h.items()}.get('etag', '').strip('"')
            if etag != hashlib.md5(corpo).hexdigest():
                raise IOError('ETag diferente do MD5 local')

        print(f'a enviar: {len(alvo)} arquivos')
        erros = executar([(k, locais[k][0]) for k in alvo], enviar, a.threads, 'enviar')
    else:
        alvo = so_remoto + diferentes(locais, remotos, a.threads)
        if a.limite:
            alvo = alvo[:a.limite]

        def baixar(chave):
            st, _, dados = r2.pedir('GET', chave)
            if st != 200:
                raise IOError(f'HTTP {st}')
            etag = remotos[chave][1]
            if '-' not in etag and hashlib.md5(dados).hexdigest() != etag:
                raise IOError('MD5 diferente do ETag')
            destino = os.path.join(a.pasta, *chave.split('/'))
            os.makedirs(os.path.dirname(destino), exist_ok=True)
            tmp = destino + '.baixando'
            with open(tmp, 'wb') as f:
                f.write(dados)
            os.replace(tmp, destino)

        print(f'a baixar: {len(alvo)} arquivos')
        erros = executar([(k, remotos[k][0]) for k in alvo], baixar, a.threads, 'baixar')
    print('pronto' if not erros else f'{len(erros)} erros (rode de novo para tentar so os que faltam)')
    return 1 if erros else 0


if __name__ == '__main__':
    sys.exit(main())
