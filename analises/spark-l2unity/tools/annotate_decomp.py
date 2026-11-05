"""Anota a saída do Ghidra (IL2CPP) substituindo globais de 'metadata usage' por nomes legíveis:
   TypeInfo -> TI_<Classe>, literal -> LIT_"texto", FieldInfo -> FI_<n>, MethodRef -> MR_<n>.
   Uso: annotate_decomp.py <dir_in> <dir_out>"""
import sys,os,re,struct,json
base=os.path.dirname(os.path.dirname(os.path.abspath(__file__)))+'/'
root=os.path.dirname(base.rstrip('/'))+'/'
g=open(root+'GameAssembly.dll','rb').read()
pe=struct.unpack_from('<I',g,0x3c)[0]; nsec=struct.unpack_from('<H',g,pe+6)[0]; optsz=struct.unpack_from('<H',g,pe+20)[0]
imgbase=struct.unpack_from('<Q',g,pe+24+24)[0]; so=pe+24+optsz
secs=[struct.unpack_from('<8sIIII',g,so+i*40) for i in range(nsec)]
def va2off(va):
    for nm,vs,v,rs,ro in secs:
        if v<=va<v+max(vs,rs): return ro+(va-v)
M=json.load(open(base+'raw/global_metadata_parsed.json'))
types=M['types']; lits=open(base+'raw/il2cpp_string_literals.txt',encoding='utf-8').read().split('\n')
nested=M['nested']; parentOf={}
for ti,t in enumerate(types):
    for k in range(t['ncount']): parentOf[nested[t['nestedStart']+k]]=ti
def tname(t):
    n=t['name']
    return (tname(types[parentOf[t['idx']]])+'.'+n) if t['idx'] in parentOf else ((t['ns']+'.' if t['ns'] else '')+n)
byval={t['byval']:tname(t) for t in types}
# resolucao de Il2CppType / MethodSpec via MetadataRegistration
REG=json.load(open(base+'raw/metadata_registration.json'))
rv=REG['vals']; typesVA=rv[7]; typesCount=rv[6]; msCount=rv[8]; msVA=rv[9]; giCount=rv[2]; giVA=rv[3]
methods=M['methods']
def rd64(va): o=va2off(va-imgbase); return struct.unpack_from('<Q',g,o)[0] if o is not None else None
def typename_of_il2cpptype(ptr,depth=0):
    o=va2off(ptr-imgbase)
    if o is None or depth>4: return '?'
    data=struct.unpack_from('<Q',g,o)[0]; ty=g[o+10]
    if ty in (0x11,0x12): return tname(types[data]) if data<len(types) else 'td%d'%data
    if ty==0x15: # GENERICINST -> Il2CppGenericClass {typeDefinitionIndex/type ptr, context{class_inst ptr, method_inst}}
        go=va2off(data-imgbase)
        if go is None: return 'generic?'
        tdptr=struct.unpack_from('<Q',g,go)[0]; inst=struct.unpack_from('<Q',g,go+8)[0]
        base_=typename_of_il2cpptype(tdptr,depth+1) if tdptr>=imgbase else (tname(types[tdptr]) if tdptr<len(types) else '?')
        args=[]
        io=va2off(inst-imgbase) if inst else None
        if io is not None:
            argc=struct.unpack_from('<Q',g,io)[0]; argv=struct.unpack_from('<Q',g,io+8)[0]
            if argc<16:
                ao=va2off(argv-imgbase)
                for k in range(argc): args.append(typename_of_il2cpptype(struct.unpack_from('<Q',g,ao+8*k)[0],depth+1))
        return base_.split('`')[0]+'<'+', '.join(args)+'>'
    if ty==0x1d: return typename_of_il2cpptype(data,depth+1)+'[]'
    if ty==0x0e: return 'string'
    prim={0x01:'void',0x02:'bool',0x03:'char',0x04:'sbyte',0x05:'byte',0x06:'short',0x07:'ushort',0x08:'int',0x09:'uint',0x0a:'long',0x0b:'ulong',0x0c:'float',0x0d:'double',0x1c:'object',0x18:'IntPtr'}
    if ty in prim: return prim[ty]
    if ty==0x13: return 'T%d'%data
    if ty==0x1e: return 'M%d'%data
    return 'ty%02x'%ty
def tname_from_typeidx(i):
    if i>=typesCount: return 't%d'%i
    p=rd64(typesVA+8*i)
    return typename_of_il2cpptype(p) if p else 't%d'%i
def methodspec(i):
    if i>=msCount: return 'MR_%d'%i
    o=va2off(msVA-imgbase)+12*i
    md,ci,mi=struct.unpack_from('<iii',g,o)
    m=methods[md] if 0<=md<len(methods) else None
    nm=m['name'] if m else 'md%d'%md
    decl=tname(types[m['declType']]) if m and m['declType']<len(types) else ''
    def inst(ix):
        if ix<0 or ix>=giCount: return ''
        p=rd64(giVA+8*ix); io=va2off(p-imgbase)
        argc=struct.unpack_from('<Q',g,io)[0]; argv=struct.unpack_from('<Q',g,io+8)[0]; ao=va2off(argv-imgbase)
        return ', '.join(typename_of_il2cpptype(struct.unpack_from('<Q',g,ao+8*k)[0]) for k in range(min(argc,8)))
    cls_args=inst(ci); m_args=inst(mi)
    s=decl.split('`')[0]+('<'+cls_args+'>' if cls_args else '')+'.'+nm+('<'+m_args+'>' if m_args else '')
    return 'MR_'+re.sub(r'[^A-Za-z0-9_.<>,]','_',s.replace(' ',''))
cache={}
def decode(va):
    if va in cache: return cache[va]
    o=va2off(va-imgbase); r=None
    if o is not None:
        v=struct.unpack_from('<Q',g,o)[0]
        if v<0x100000000:
            typ=(v>>29)&7; idx=(v&0x1fffffff)>>1
            if typ==5 and idx<len(lits):
                s=lits[idx]
                if len(s)>60: s=s[:57]+'...'
                r='LIT_'+json.dumps(s,ensure_ascii=False)
            elif typ==1: r='TI_'+re.sub(r'[^A-Za-z0-9_.`<>,]','_',tname_from_typeidx(idx).replace(' ',''))
            elif typ==2: r='TYPE_'+re.sub(r'[^A-Za-z0-9_.`<>,]','_',tname_from_typeidx(idx).replace(' ',''))
            elif typ==3: r='MD_'+re.sub(r'[^A-Za-z0-9_.]','_',(tname(types[methods[idx]['declType']])+'.'+methods[idx]['name']) if idx<len(methods) else str(idx))
            elif typ==4: r='FI_%d'%idx
            elif typ==6: r=methodspec(idx)
            elif typ==7: r='RVA_%d'%idx
    cache[va]=r; return r
pat=re.compile(r'(?:_DAT_|&DAT_|DAT_|[ulic]Ram0*|PTR_[A-Za-z0-9_]*_)(1[0-9a-f]{8})\b|\b0x(1[0-9a-f]{8})\b')
def annotate(txt):
    def rep(m):
        h=m.group(1) or m.group(2); va=int(h,16); r=decode(va)
        return r if r else m.group(0)
    return pat.sub(rep,txt)
if __name__=='__main__':
    src,dst=sys.argv[1],sys.argv[2]; os.makedirs(dst,exist_ok=True); n=0
    for f in os.listdir(src):
        if f.endswith('.c'):
            open(os.path.join(dst,f),'w',encoding='utf-8').write(annotate(open(os.path.join(src,f),encoding='utf-8').read())); n+=1
    print('annotated',n)
