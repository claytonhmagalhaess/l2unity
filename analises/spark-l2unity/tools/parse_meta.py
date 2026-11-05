import struct,json,sys,re,collections
base='C:/Users/Clayton/Downloads/Launcher/'
d=open(base+'L2_Data/il2cpp_data/Metadata/global-metadata.dat','rb').read()
hdr=struct.unpack('<96I',d[:0x180])
secs=[(hdr[i],hdr[i+1],hdr[i+2]) for i in range(2,95,3)]
SL,SLD,STR,EV,PROP,METH,PDEF,FDEF,FPDATA,FMS,PARAM,FIELD,GP,GPC,GC,NEST,IFACE,VT,IOFF,TD,IMG,ASM=secs[:22]
S=d[STR[0]:STR[0]+STR[1]]
def name(i):
    if i<0 or i>=len(S): return '<bad %d>'%i
    e=S.find(b'\0',i); return S[i:e].decode('utf-8','replace')
# images
images=[]
for k in range(IMG[2]):
    o=IMG[0]+k*36
    nm,asm,tc,x1,x2,ep,tok,cas,cac=struct.unpack('<9I',d[o:o+36])
    images.append(dict(idx=k,name=name(nm),typeStart=tc&0xffff,typeCount=tc>>16))
# typedefs
types=[]
for k in range(TD[2]):
    o=TD[0]+k*76
    r=struct.unpack('<IIHHHHIiiiiiiiiHHHHHHHHII',d[o:o+76])
    types.append(dict(idx=k,name=name(r[0]),ns=name(r[1]),byval=r[2],declaring=r[3],parent=r[4],generic=r[5],flags=r[6],
        fieldStart=r[7],methodStart=r[8],eventStart=r[9],propStart=r[10],nestedStart=r[11],ifaceStart=r[12],vtStart=r[13],ioffStart=r[14],
        mcount=r[15],pcount=r[16],fcount=r[17],ecount=r[18],ncount=r[19],vcount=r[20],icount=r[21],iocount=r[22],bitfield=r[23],token=r[24]))
methods=[]
for k in range(METH[2]):
    o=METH[0]+k*30
    r=struct.unpack('<IHHIiHHHHHHH',d[o:o+30])
    methods.append(dict(idx=k,name=name(r[0]),declType=r[1],retType=r[2],retTok=r[3],paramStart=r[4],generic=r[5],tokLo=r[6],u1=r[7],flags=r[8],paramCount=r[9],slot=r[10],u2=r[11]))
params=[]
for k in range(PARAM[2]):
    o=PARAM[0]+k*10
    r=struct.unpack('<IIH',d[o:o+10]); params.append(dict(name=name(r[0]),tok=r[1],type=r[2]))
fields=[]
for k in range(FIELD[2]):
    o=FIELD[0]+k*10
    r=struct.unpack('<IHHH',d[o:o+10]); fields.append(dict(name=name(r[0]),type=r[1],u1=r[2],u2=r[3]))
props=[]
for k in range(PROP[2]):
    o=PROP[0]+k*20
    r=struct.unpack('<IiiII',d[o:o+20]); props.append(dict(name=name(r[0]),get=r[1],set=r[2],attrs=r[3],tok=r[4]))
nested=struct.unpack('<%di'%NEST[2],d[NEST[0]:NEST[0]+NEST[1]])
# sanity prints
print('images',len(images),'types',len(types),'methods',len(methods),'params',len(params),'fields',len(fields),'props',len(props))
# verify a method with params
for m in methods[:40]:
    if m['paramStart']>=0: print('M',m['name'],m['paramStart'],m['paramCount'],m['u1'],m['slot'],m['u2'],[params[m['paramStart']+i]['name'] for i in range(m['paramCount'])] if m['paramCount']<10 else '?'); break
# tokens monotonic? check tokLo/u2
print('tok sample',[(m['tokLo'],m['u2']) for m in methods[65530:65540]])
json.dump(dict(images=images,types=types,methods=methods,params=params,fields=fields,props=props,nested=list(nested)),open(base+'REA/raw/global_metadata_parsed.json','w'))
