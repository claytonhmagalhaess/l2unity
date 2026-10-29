import sys,struct,re,bisect
sys.path.insert(0,sys.argv[1])
from capstone import *
from capstone.x86 import *
dll=open(r"C:/Users/Clayton/Downloads/Launcher/GameAssembly.dll","rb").read()
pe=struct.unpack_from("<I",dll,0x3c)[0]; nsec=struct.unpack_from("<H",dll,pe+6)[0]; opt=struct.unpack_from("<H",dll,pe+20)[0]
base=struct.unpack_from("<Q",dll,pe+24+24)[0]
secs=[]
for i in range(nsec):
    o=pe+24+opt+40*i; vs,va,rs,ro=struct.unpack_from("<IIII",dll,o+8); secs.append((va,vs,ro,rs))
def va2off(va):
    rva=va-base
    for v,vs,ro,rs in secs:
        if v<=rva<v+max(vs,rs): return ro+(rva-v)
lits=[l.rstrip("\r\n") for l in open("raw/il2cpp_string_literals.txt",encoding="utf-8",errors="replace")]
lab={}
for l in open("tools/labels_all.tsv"):
    p=l.rstrip("\r\n").split("\t")
    if len(p)==2: lab[int(p[1],16)]=p[0]
addrs=sorted(lab)
def glob(t):
    o=va2off(t)
    if o is None: return None
    raw=struct.unpack_from("<Q",dll,o)[0]
    if raw>>32: return None
    ty=(raw>>29)&7; idx=(raw&0x1fffffff)>>1
    if ty==5 and idx<len(lits): return lits[idx]
def dump(start):
    end=addrs[bisect.bisect_right(addrs,start)]
    code=dll[va2off(start):va2off(end)]
    md=Cs(CS_ARCH_X86,CS_MODE_64); md.detail=True
    out=[]; lastimm=None
    for ins in md.disasm(code,start):
        ops=ins.operands
        if ins.mnemonic=="mov" and len(ops)==2 and ops[1].type==X86_OP_MEM and ops[1].mem.base==X86_REG_RIP:
            g=glob(ins.address+ins.size+ops[1].mem.disp)
            if g: out.append(g); continue
        if ins.mnemonic=="mov" and len(ops)==2 and ops[1].type==X86_OP_IMM:
            if ops[0].type==X86_OP_REG and ops[0].reg in (X86_REG_EDX,X86_REG_RDX): lastimm=ops[1].imm
            if ops[0].type==X86_OP_MEM:
                v=ops[1].imm
                if ops[0].size==4 and v>0x10000: out.append("f%.3g"%struct.unpack("<f",struct.pack("<I",v&0xffffffff))[0])
                else: out.append(str(v))
        if ins.mnemonic=="movss" and ops[1].type==X86_OP_MEM and ops[1].mem.base==X86_REG_RIP:
            o=va2off(ins.address+ins.size+ops[1].mem.disp); out.append("f%.4g"%struct.unpack_from("<f",dll,o)[0])
        if ins.mnemonic=="call" and ops[0].type==X86_OP_IMM:
            n=lab.get(ops[0].imm)
            if n and "il2cpp" not in n.lower(): out.append("→"+n.split("__")[-1])
            elif not n and lastimm is not None: out.append("NEW[%d]"%lastimm); lastimm=None
    return out
for a in sys.argv[2:]:
    seq=dump(int(a,16)); res=[]
    for s in seq:
        if res and res[-1]==s: continue
        res.append(s)
    print("=== "+a); print(" ".join(res))
