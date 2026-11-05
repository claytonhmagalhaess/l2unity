import re,sys
# uso: body.py arquivo.uc Func1,Func2 ...  -> imprime corpo com numero de linha
f=sys.argv[1]; names=set(sys.argv[2].split(','))
b=open(f,'rb').read()
for e in ('utf-8','cp949','latin-1'):
    try: t=b.decode(e); break
    except: pass
L=t.splitlines()
FN=re.compile(r'^\s*(?:simulated\s+|final\s+)*(?:event|function)\s+(?:\w+\s+)?(\w+)\s*\(')
i=0
while i<len(L):
    m=FN.match(L[i])
    if m and m.group(1) in names:
        depth=0; started=False; j=i
        while j<len(L):
            depth+=L[j].count('{')-L[j].count('}')
            if '{' in L[j]: started=True
            print(f'{j+1}: {L[j].rstrip()}')
            if started and depth<=0: break
            j+=1
        print('----'); i=j
    i+=1
