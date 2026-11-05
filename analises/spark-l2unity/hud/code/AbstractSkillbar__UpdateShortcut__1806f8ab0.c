// AbstractSkillbar__UpdateShortcut__1806f8ab0 @ 0x1806f8ab0

void AbstractSkillbar__UpdateShortcut__1806f8ab0(longlong param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (cRam00000001834b4159 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.get_Count);
    FUN_180315380();
    cRam00000001834b4159 = '\x01';
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  iVar4 = 0;
  do {
    if (lVar3 == 0) {
code_r0x0001806f8b6b:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(int *)(lVar3 + 0x18) <= iVar4) {
      return;
    }
    if ((*(longlong *)(param_1 + 0x38) == 0) ||
       (lVar2 = FUN_180bbafe0(*(longlong *)(param_1 + 0x38),iVar4,MR_System.Collections.Generic.List<SkillbarSlot>.get_Item), lVar2 == 0)
       ) goto code_r0x0001806f8b6b;
    lVar3 = *(longlong *)(param_1 + 0x38);
    if (*(int *)(lVar2 + 0x14) == param_3 + *(int *)(param_1 + 0x24) * 0xc) {
      if ((lVar3 != 0) && (lVar3 = FUN_180bbafe0(lVar3,iVar4,MR_System.Collections.Generic.List<SkillbarSlot>.get_Item), lVar3 != 0)) {
        SkillbarSlot__AssignShortcut__1807047c0(lVar3,param_2,0);
        return;
      }
      goto code_r0x0001806f8b6b;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

