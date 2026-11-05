// PlayerShortcuts__ComecaRepeticao__1804d1d90 @ 0x1804d1d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlayerShortcuts__ComecaRepeticao__1804d1d90
               (longlong param_1,longlong param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  
  if (DAT_1834b3404 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    DAT_1834b3404 = '\x01';
  }
  if (param_2 == 0) goto LAB_1804d1f16;
  if (*(int *)(param_2 + 0x18) == 3) {
    bVar7 = *(int *)(param_2 + 0x1c) == 5;
LAB_1804d1efd:
    if (!bVar7) goto LAB_1804d1e08;
    iVar6 = *(int *)(param_2 + 0x10) + *(int *)(param_2 + 0x14) * 0xc;
  }
  else {
    if (*(int *)(param_2 + 0x18) == 2) {
      iVar6 = *(int *)(param_2 + 0x1c);
      if (iVar6 < 0xf9) {
        if ((iVar6 != 0xac) && (iVar6 != 0xf8)) goto LAB_1804d1e62;
      }
      else if ((iVar6 != 0x41a) && ((3 < iVar6 - 0x520U && (iVar6 != 0x528)))) {
LAB_1804d1e62:
        uVar3 = FUN_180458400(0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if (cVar2 != '\0') {
          lVar4 = FUN_180458400(0);
          if (lVar4 == 0) goto LAB_1804d1f16;
          lVar4 = PlayerSkill__GetSkillInfo(lVar4,*(undefined4 *)(param_2 + 0x1c),0);
          if ((lVar4 != 0) && (*(char *)(lVar4 + 0x18) == '\0')) {
            lVar5 = SkillgrpTable__get_Instance(0);
            if (lVar5 == 0) goto LAB_1804d1f16;
            lVar4 = SkillgrpTable__GetSkill
                              (lVar5,*(undefined4 *)(lVar4 + 0x10),*(undefined4 *)(lVar4 + 0x14),0);
            if (lVar4 != 0) {
              bVar7 = *(int *)(lVar4 + 0x24) != 3;
              goto LAB_1804d1efd;
            }
          }
        }
      }
    }
LAB_1804d1e08:
    iVar6 = -1;
  }
  if (param_1 != 0) {
    *(int *)(param_1 + 0x38) = iVar6;
    *(undefined4 *)(param_1 + 0x3c) = param_3;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x1c);
    fVar8 = (float)FUN_182436650(0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    *(float *)(param_1 + 0x44) = fVar8 + 0.25;
    return;
  }
LAB_1804d1f16:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

