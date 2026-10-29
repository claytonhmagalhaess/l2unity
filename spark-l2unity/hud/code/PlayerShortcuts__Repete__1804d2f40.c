// PlayerShortcuts__Repete__1804d2f40 @ 0x1804d2f40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool PlayerShortcuts__Repete__1804d2f40(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (DAT_1834b3404 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    DAT_1834b3404 = '\x01';
  }
  if (param_1 == 0) goto code_r0x0001804d305f;
  if (*(int *)(param_1 + 0x18) == 3) {
    return *(int *)(param_1 + 0x1c) == 5;
  }
  if (*(int *)(param_1 + 0x18) == 2) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 < 0xf9) {
      if (iVar1 == 0xac) {
        return false;
      }
      if (iVar1 == 0xf8) {
        return false;
      }
    }
    else {
      if (iVar1 == 0x41a) {
        return false;
      }
      if (iVar1 - 0x520U < 4) {
        return false;
      }
      if (iVar1 == 0x528) {
        return false;
      }
    }
    uVar5 = FUN_180458400(0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if (cVar3 != '\0') {
      lVar6 = FUN_180458400(0);
      if (lVar6 == 0) {
code_r0x0001804d305f:
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      lVar6 = PlayerSkill__GetSkillInfo(lVar6,*(undefined4 *)(param_1 + 0x1c),0);
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x18) == '\0')) {
        lVar7 = SkillgrpTable__get_Instance(0);
        if (lVar7 == 0) goto code_r0x0001804d305f;
        lVar6 = SkillgrpTable__GetSkill
                          (lVar7,*(undefined4 *)(lVar6 + 0x10),*(undefined4 *)(lVar6 + 0x14),0);
        if (lVar6 != 0) {
          return *(int *)(lVar6 + 0x24) != 3;
        }
      }
    }
  }
  return false;
}

