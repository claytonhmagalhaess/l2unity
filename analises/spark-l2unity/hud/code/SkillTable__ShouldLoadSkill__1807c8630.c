// SkillTable__ShouldLoadSkill__1807c8630 @ 0x1807c8630

undefined1 SkillTable__ShouldLoadSkill__1807c8630(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  
  if (cRam00000001834b459e == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<int>.Contains);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Count);
    cRam00000001834b459e = '\x01';
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 == 0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    if (*(int *)(lVar1 + 0x18) != 0) {
      cVar3 = FUN_18162e860(lVar1,param_2,MR_System.Collections.Generic.List<int>.Contains);
      if (cVar3 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}

