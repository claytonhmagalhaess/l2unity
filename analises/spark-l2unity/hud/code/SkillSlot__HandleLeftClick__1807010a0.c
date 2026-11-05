// SkillSlot__HandleLeftClick__1807010a0 @ 0x1807010a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillSlot__HandleLeftClick__1807010a0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 auStackX_8 [2];
  
  if (cRam00000001834b4114 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(LIT_"'Use bar slot {0}.'");
    cRam00000001834b4114 = '\x01';
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    cVar2 = func_0x0001804d5330(*(undefined8 *)(param_1 + 0xa0),0);
    if (cVar2 == '\0') {
      auStackX_8[0] = *(undefined4 *)(param_1 + 0x14);
      uVar3 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
      uVar3 = System_String__Format(LIT_"'Use bar slot {0}.'",uVar3,0);
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Debug__Log(uVar3,0);
      if (DAT_1834b3103 == '\0') {
        FUN_180315380(TI_PlayerSkill);
        DAT_1834b3103 = '\x01';
      }
      if ((*(longlong *)(param_1 + 0xa0) == 0) || (**(longlong **)(TI_PlayerSkill + 0xb8) == 0)) {
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      PlayerSkill__UseSkill
                (**(longlong **)(TI_PlayerSkill + 0xb8),
                 *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x10),0);
    }
  }
  return;
}

