// SkillbarSlot__NivelDoJogador__1807058d0 @ 0x1807058d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SkillbarSlot__NivelDoJogador__1807058d0(undefined4 param_1,ulonglong param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (cRam00000001834b4171 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b4171 = '\x01';
  }
  if (DAT_1834b3103 == '\0') {
    FUN_180315380(TI_PlayerSkill);
    DAT_1834b3103 = '\x01';
  }
  lVar3 = **(longlong **)(TI_PlayerSkill + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Inequality(lVar3,0,0);
  if (cVar2 != '\0') {
    if (lVar3 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    if (*(char *)(lVar3 + 0x38) != '\0') {
      lVar3 = PlayerSkill__GetSkillInfo(lVar3,param_1,0);
      if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x14))) {
        return (ulonglong)*(uint *)(lVar3 + 0x14);
      }
    }
  }
  return param_2 & 0xffffffff;
}

