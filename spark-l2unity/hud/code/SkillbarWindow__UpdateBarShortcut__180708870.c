// SkillbarWindow__UpdateBarShortcut__180708870 @ 0x180708870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarWindow__UpdateBarShortcut__180708870(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 auStackX_10 [2];
  
  if (DAT_1834b418e == '\0') {
    FUN_180315380(TI_System.Action<AbstractSkillbar>);
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_System.Collections.Generic.List<AbstractSkillbar>.ForEach);
    FUN_180315380(MD_SkillbarWindow.__c__DisplayClass57_0._UpdateBarShortcut_b__0);
    FUN_180315380(TI_SkillbarWindow.<>c__DisplayClass57_0);
    FUN_180315380(LIT_"'Slot value {0} is too high.'");
    DAT_1834b418e = '\x01';
  }
  lVar4 = func_0x000180315580(TI_SkillbarWindow.<>c__DisplayClass57_0);
  Gear__UpdateWeaponType__1803dadf0(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = param_2;
    func_0x000180314690(lVar4 + 0x10,param_2);
    lVar2 = *(longlong *)(lVar4 + 0x10);
    if (lVar2 != 0) {
      if (0xb < *(int *)(lVar2 + 0x10)) {
        auStackX_10[0] = *(undefined4 *)(lVar2 + 0x10);
        uVar5 = func_0x000180314670(_DAT_1834c6268,auStackX_10);
        uVar5 = System_String__Format(LIT_"'Slot value {0} is too high.'",uVar5,0);
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        UnityEngine_Debug__LogError(uVar5,0);
        return;
      }
      lVar2 = *(longlong *)(param_1 + 0xd0);
      lVar6 = func_0x000180315580(TI_System.Action<AbstractSkillbar>);
      FUN_18055b980(lVar6,lVar4,MD_SkillbarWindow.__c__DisplayClass57_0._UpdateBarShortcut_b__0,0);
      if (lVar2 != 0) {
        if (lVar6 == 0) {
          System_ThrowHelper__ThrowArgumentNullException(0x21,0,MR_System.Collections.Generic.List<AbstractSkillbar>.ForEach);
        }
        iVar1 = *(int *)(lVar2 + 0x1c);
        uVar7 = 0;
        if (0 < *(int *)(lVar2 + 0x18)) {
          do {
            if (iVar1 != *(int *)(lVar2 + 0x1c)) goto LAB_180bad93f;
            lVar4 = *(longlong *)(lVar2 + 0x10);
            if (lVar4 == 0) {
LAB_180bad94f:
              FUN_1803155d0();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(uint *)(lVar4 + 0x18) <= uVar7) {
              FUN_1803155c0();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (lVar6 == 0) goto LAB_180bad94f;
            (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),
                       *(undefined8 *)(lVar4 + 0x20 + (longlong)(int)uVar7 * 8),
                       *(undefined8 *)(lVar6 + 0x28));
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < *(int *)(lVar2 + 0x18));
        }
        if (iVar1 != *(int *)(lVar2 + 0x1c)) {
LAB_180bad93f:
          System_ThrowHelper__ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion(0);
        }
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

