// PlayerShortcuts__RepeteAtalho__1804d29a0 @ 0x1804d29a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong PlayerShortcuts__RepeteAtalho__1804d29a0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  char cVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float fVar10;
  int aiStackX_8 [2];
  longlong lStackX_18;
  
  if (DAT_1834b3405 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,Shortcut>.TryGetValue);
    in_RAX = FUN_180315380(TI_UnityEngine.Object);
    DAT_1834b3405 = '\x01';
  }
  lStackX_18 = 0;
  if (*(int *)(param_1 + 0x38) < 0) {
    return in_RAX;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  if (DAT_1834b3532 == '\0') {
    FUN_180315380(TI_InputManager);
    DAT_1834b3532 = '\x01';
  }
  if ((**(longlong **)(TI_InputManager + 0xb8) == 0) ||
     (lVar7 = *(longlong *)(**(longlong **)(TI_InputManager + 0xb8) + 0x110), lVar7 == 0))
  goto LAB_1804d2f25;
  if (*(uint *)(param_1 + 0x3c) < **(uint **)(lVar7 + 0x10)) {
    uVar6 = *(ulonglong *)(lVar7 + 0x10);
    if (uVar1 % 0xc < (uint)*(longlong *)(uVar6 + 0x10)) {
      if (*(char *)((longlong)(int)(uVar1 % 0xc) + 0x20 +
                   (longlong)(int)*(uint *)(param_1 + 0x3c) * *(longlong *)(uVar6 + 0x10) + lVar7)
          == '\0') goto LAB_1804d2f0e;
      lVar7 = *(longlong *)(param_1 + 0x20);
      if (lVar7 == 0) goto LAB_1804d2f25;
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(param_1 + 0x3c)) goto LAB_1804d2f31;
      uVar6 = (ulonglong)uVar1 * 0xaaaaaaab & 0xffffffff;
      if (*(uint *)(lVar7 + 0x20 + (longlong)(int)*(uint *)(param_1 + 0x3c) * 4) == uVar1 / 0xc) {
        if (*(longlong *)(param_1 + 0x30) == 0) {
LAB_1804d2f25:
          FUN_1803155d0();
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return uVar6;
        }
        uVar6 = FUN_1812007b0(*(longlong *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),
                              &lStackX_18,MR_System.Collections.Generic.Dictionary<int,Shortcut>.TryGetValue);
        if ((char)uVar6 != '\0') {
          if (lStackX_18 == 0) goto LAB_1804d2f25;
          uVar6 = (ulonglong)*(uint *)(param_1 + 0x40);
          if (*(uint *)(lStackX_18 + 0x1c) == *(uint *)(param_1 + 0x40)) {
            lVar7 = FUN_180416a30(0);
            uVar6 = FUN_182436650(0);
            if (*(float *)(param_1 + 0x44) <= extraout_XMM0_Da) {
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              uVar6 = UnityEngine_Object__op_Equality(lVar7,0,0);
              if ((char)uVar6 == '\0') {
                if (lVar7 == 0) goto LAB_1804d2f25;
                if (((*(int *)(lVar7 + 0x24) != 9) && (*(int *)(lVar7 + 0x24) != 3)) &&
                   (*(char *)(lVar7 + 0x2c) == '\0')) {
                  uVar8 = FUN_1804169f0(0);
                  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  uVar6 = UnityEngine_Object__op_Equality(uVar8,0,0);
                  if ((char)uVar6 == '\0') {
                    if (lStackX_18 != 0) {
                      if (*(int *)(lStackX_18 + 0x18) == 2) {
                        lVar9 = FUN_180458400(0);
                        if ((lStackX_18 != 0) && (lVar9 != 0)) {
                          lVar9 = PlayerSkill__GetSkillInfo
                                            (lVar9,*(undefined4 *)(lStackX_18 + 0x1c),0);
                          uVar6 = 0;
                          if (lVar9 == 0) goto LAB_1804d2f0e;
                          uVar6 = SkillInfo__get_IsSkillOnCooldown(lVar9,0);
                          if ((char)uVar6 != '\0') {
                            return uVar6;
                          }
                          if (*(int *)(lVar7 + 0x24) == 10) {
                            return uVar6;
                          }
                          lVar7 = FUN_1804169f0(0);
                          if ((lVar7 != 0) && (uVar6 = Entity__get_Combat(lVar7,0), uVar6 != 0)) {
                            if (*(char *)(uVar6 + 0x98) != '\0') {
                              return uVar6;
                            }
                            lVar7 = FUN_180458400(0);
                            if ((lStackX_18 != 0) && (lVar7 != 0)) {
                              PlayerSkill__UseSkill(lVar7,*(undefined4 *)(lStackX_18 + 0x1c),0);
                              *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
                              uVar6 = FUN_182436650(0);
                              fVar10 = (float)*(int *)(param_1 + 0x48) * 0.25;
                              if (1.0 <= fVar10) {
                                fVar10 = 1.0;
                              }
                              *(float *)(param_1 + 0x44) = fVar10 + extraout_XMM0_Da_02;
                              return uVar6;
                            }
                          }
                        }
                      }
                      else {
                        uVar8 = FUN_1804d0510();
                        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        cVar5 = UnityEngine_Object__op_Inequality(uVar8,0,0);
                        if (cVar5 != '\0') {
                          lVar7 = FUN_1804d0510(0);
                          if (lVar7 == 0) goto LAB_1804d2f25;
                          uVar6 = NewHumanoidAnimationController__get_PegandoItem(lVar7,0);
                          if ((char)uVar6 != '\0') {
                            return uVar6;
                          }
                        }
                        lVar7 = SparkItensNoChao__get_Instance(0);
                        if (lVar7 != 0) {
                          cVar5 = SparkItensNoChao__Tem(lVar7,*(undefined4 *)(lVar7 + 0x44),0);
                          if ((cVar5 != '\0') &&
                             (uVar6 = FUN_182436650(0),
                             extraout_XMM0_Da_00 - *(float *)(lVar7 + 0x48) < 1.0)) {
                            return uVar6;
                          }
                          lVar7 = lStackX_18;
                          if (DAT_1834b3407 == '\0') {
                            FUN_180315380(TI_UnityEngine.Debug);
                            FUN_180315380(TI_SparkMacros);
                            FUN_180315380(LIT_"'Unkown shortcut type.'");
                            FUN_180315380(LIT_"'Use shortcut {0}.'");
                            DAT_1834b3407 = '\x01';
                          }
                          if (lVar7 == 0) {
                            FUN_1803155d0();
                            pcVar4 = (code *)swi(3);
                            uVar6 = (*pcVar4)();
                            return uVar6;
                          }
                          aiStackX_8[0] = *(int *)(lVar7 + 0x10) + *(int *)(lVar7 + 0x14) * 0xc;
                          uVar8 = func_0x000180314670(_DAT_1834c6268,aiStackX_8);
                          uVar8 = System_String__Format(LIT_"'Use shortcut {0}.'",uVar8,0);
                          if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          UnityEngine_Debug__Log(uVar8,0);
                          iVar2 = *(int *)(lVar7 + 0x18);
                          if (iVar2 == 1) {
                            if (DAT_1834b3102 == '\0') {
                              FUN_180315380(TI_PlayerInventory);
                              DAT_1834b3102 = '\x01';
                            }
                            if (**(longlong **)(TI_PlayerInventory + 0xb8) == 0) goto LAB_1804d2f25;
                            PlayerInventory__UseItem
                                      (**(longlong **)(TI_PlayerInventory + 0xb8),
                                       *(undefined4 *)(lVar7 + 0x1c),0);
                          }
                          else if (iVar2 == 2) {
                            if (DAT_1834b3103 == '\0') {
                              FUN_180315380(TI_PlayerSkill);
                              DAT_1834b3103 = '\x01';
                            }
                            if (**(longlong **)(TI_PlayerSkill + 0xb8) == 0) goto LAB_1804d2f25;
                            PlayerSkill__UseSkill
                                      (**(longlong **)(TI_PlayerSkill + 0xb8),
                                       *(undefined4 *)(lVar7 + 0x1c),0);
                          }
                          else if (iVar2 == 3) {
                            if (DAT_1834b3104 == '\0') {
                              FUN_180315380(TI_PlayerActions);
                              DAT_1834b3104 = '\x01';
                            }
                            if (**(longlong **)(TI_PlayerActions + 0xb8) == 0) goto LAB_1804d2f25;
                            PlayerActions__UseAction
                                      (**(longlong **)(TI_PlayerActions + 0xb8),
                                       *(undefined4 *)(lVar7 + 0x1c),0);
                          }
                          else if (iVar2 == 4) {
                            uVar3 = *(undefined4 *)(lVar7 + 0x1c);
                            if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
                              func_0x000180315660();
                            }
                            SparkMacros__Executa__1804745f0(uVar3,0);
                          }
                          else {
                            if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
                              func_0x000180315660();
                            }
                            UnityEngine_Debug__LogWarning(LIT_"'Unkown shortcut type.'",0);
                          }
                          uVar6 = FUN_182436650(0);
                          *(float *)(param_1 + 0x44) = extraout_XMM0_Da_01 + 0.25;
                          return uVar6;
                        }
                      }
                    }
                    goto LAB_1804d2f25;
                  }
                }
              }
            }
            return uVar6;
          }
        }
      }
LAB_1804d2f0e:
      *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
      return uVar6;
    }
  }
LAB_1804d2f31:
  FUN_1803155c0();
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return uVar6;
}

