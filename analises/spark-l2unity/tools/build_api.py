import json,struct,collections,re
base='C:/Users/Clayton/Downloads/Launcher/'
M=json.load(open(base+'REA/raw/global_metadata_parsed.json'))
images,types,methods,params,fields,props,nested=M['images'],M['types'],M['methods'],M['params'],M['fields'],M['props'],M['nested']
# method pointers from GameAssembly
g=open(base+'GameAssembly.dll','rb').read()
pe=struct.unpack_from('<I',g,0x3c)[0]; nsec=struct.unpack_from('<H',g,pe+6)[0]; optsz=struct.unpack_from('<H',g,pe+20)[0]
imgbase=struct.unpack_from('<Q',g,pe+24+24)[0]; so=pe+24+optsz
secs=[struct.unpack_from('<8sIIII',g,so+i*40) for i in range(nsec)]
def va2off(va):
    for nm,vs,v,rs,ro in secs:
        if v<=va<v+max(vs,rs): return ro+(va-v)
mods={}
for modname,cnt,mp in [('Assembly-CSharp.dll',11469,0x183249f10),('Assembly-CSharp-firstpass.dll',29,0x183249e20)]:
    o=va2off(mp-imgbase)
    ptrs=struct.unpack_from('<%dQ'%cnt,g,o)
    mods[modname]=ptrs
imgmap={im['name']:im for im in images}
parentOf={}
for ti,t in enumerate(types):
    for k in range(t['ncount']):
        parentOf[nested[t['nestedStart']+k]]=ti
def typename(t):
    n=t['name']; ti=t['idx']
    if ti in parentOf:
        return typename(types[parentOf[ti]])+'.'+n
    return (t['ns']+'.' if t['ns'] else '')+n
flagstr=lambda f: ('static ' if f&0x10 else '')+('abstract ' if f&0x400 else '')+('virtual ' if f&0x40 else '')
lines=[]; tsv=['rva\tva\ttype\tmethod\tparams\ttoken']
summary=collections.Counter()
for modname in ['Assembly-CSharp.dll','Assembly-CSharp-firstpass.dll']:
    im=imgmap[modname]; ptrs=mods[modname]
    lines.append('\n\n# %s  (types %d..%d, %d tipos, %d ponteiros de método)'%(modname,im['typeStart'],im['typeStart']+im['typeCount']-1,im['typeCount'],len(ptrs)))
    for ti in range(im['typeStart'],im['typeStart']+im['typeCount']):
        t=types[ti]
        kind='interface' if t['flags']&0x20 else 'class'
        lines.append('\n## %s %s   [typedef %d, token 0x%08x, flags 0x%x]'%(kind,typename(t),ti,t['token'],t['flags']))
        if t['fcount']:
            lines.append('fields:')
            for fi in range(t['fieldStart'],t['fieldStart']+t['fcount']):
                f=fields[fi]; lines.append('  - %s  (typeIdx %d)'%(f['name'],f['type']))
        if t['pcount']:
            lines.append('properties:')
            for pi in range(t['propStart'],t['propStart']+t['pcount']):
                lines.append('  - '+props[pi]['name'])
        if t['mcount']:
            lines.append('methods:')
            for mi in range(t['methodStart'],t['methodStart']+t['mcount']):
                m=methods[mi]
                ps=[]
                for k in range(m['paramCount']):
                    p=params[m['paramStart']+k]; ps.append('%s:t%d'%(p['name'],p['type']))
                tok=(m['u1']<<0)  # unused
                tokidx=m['tokLo']|(m['paramCount_hi'] if 'paramCount_hi' in m else 0)
                tokidx=m['tokLo']|(m['paramCount']<<16) if False else m['tokLo']|(m['paramCount']<<16)
                # token index: tokLo | (field@24 <<16) ; our parse: m['paramCount'] field is offset24 (token hi), m['u2'] is real paramCount
                tokidx=m['tokLo']|(m['paramCount']<<16); pc=m['u2']
                ps=['%s:t%d'%(params[m['paramStart']+k]['name'],params[m['paramStart']+k]['type']) for k in range(pc)] if m['paramStart']>=0 else []
                va=ptrs[tokidx-1] if 0<tokidx<=len(ptrs) else 0
                rva=va-imgbase if va else 0
                lines.append('  - %s%s(%s) -> t%d   @0x%x (rva 0x%x) tok 0x%08x'%(flagstr(m['flags']),m['name'],', '.join(ps),m['retType'],va,rva,0x06000000|tokidx))
                tsv.append('0x%x\t0x%x\t%s\t%s\t%s\t0x%08x'%(rva,va,typename(t),m['name'],', '.join(ps),0x06000000|tokidx))
        summary[modname]+=1
open(base+'REA/client/assembly_csharp_api.md','w',encoding='utf-8').write('# API gerenciada reconstruída do global-metadata.dat + ponteiros de método do GameAssembly.dll\n\nTipos de parâmetro/retorno aparecem como índices tN da tabela Il2CppType (não resolvidos).\n'+'\n'.join(lines))
open(base+'REA/client/method_rvas.tsv','w',encoding='utf-8').write('\n'.join(tsv))
# assemblies list
al=['# Imagens (assemblies) no global-metadata.dat\n','| idx | assembly | typeStart | typeCount |','|---|---|---|---|']
for im in images: al.append('| %d | %s | %d | %d |'%(im['idx'],im['name'],im['typeStart'],im['typeCount']))
open(base+'REA/client/assemblies.md','w',encoding='utf-8').write('\n'.join(al))
# spark class index
im=imgmap['Assembly-CSharp.dll']
cls=[]
for ti in range(im['typeStart'],im['typeStart']+im['typeCount']):
    t=types[ti]
    if ti not in parentOf: cls.append((typename(t),t['mcount'],t['fcount']))
print('top-level types in Assembly-CSharp:',len(cls))
print('Spark*:',len([c for c in cls if c[0].startswith('Spark')]))
# print non-Spark top-level class names
print(' '.join(sorted(c[0] for c in cls if not c[0].startswith('Spark') and not c[0].startswith('<'))))
