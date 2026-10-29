// SkillbarWindow__RemoveShortcut__180707dc0 @ 0x180707dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarWindow__RemoveShortcut__180707dc0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  if (cRam00000001834b418f == '\0') {
    FUN_180315380(TI_System.Action<AbstractSkillbar>);
    FUN_180315380(MR_System.Collections.Generic.List<AbstractSkillbar>.ForEach);
    FUN_180315380(MD_SkillbarWindow.__c__DisplayClass59_0._RemoveShortcut_b__0);
    FUN_180315380(TI_SkillbarWindow.<>c__DisplayClass59_0);
    cRam00000001834b418f = '\x01';
  }
  lVar4 = func_0x000180315580(TI_SkillbarWindow.<>c__DisplayClass59_0);
  Gear__UpdateWeaponType__1803dadf0(lVar4,0);
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x14) = param_2;
    *(int *)(lVar4 + 0x10) = param_2 / 0xc;
    SkillbarWindow__RemoveToggledSlot__180707ef0(param_1,param_2 / 0xc,param_2 % 0xc,0);
    SkillbarWindow__RemoveOnCooldownSkill__1807079c0
              (param_1,*(undefined4 *)(lVar4 + 0x10),param_2 % 0xc,0);
    lVar2 = *(longlong *)(param_1 + 0xd0);
    lVar5 = func_0x000180315580(TI_System.Action<AbstractSkillbar>);
    FUN_18055b980(lVar5,lVar4,MD_SkillbarWindow.__c__DisplayClass59_0._RemoveShortcut_b__0,0);
    if (lVar2 != 0) {
      if (lVar5 == 0) {
        System_ThrowHelper__ThrowArgumentNullException(0x21,0,MR_System.Collections.Generic.List<AbstractSkillbar>.ForEach);
      }
      iVar1 = *(int *)(lVar2 + 0x1c);
      uVar6 = 0;
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
          if (*(uint *)(lVar4 + 0x18) <= uVar6) {
            FUN_1803155c0();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (lVar5 == 0) goto LAB_180bad94f;
          (**(code **)(lVar5 + 0x18))
                    (*(undefined8 *)(lVar5 + 0x40),
                     *(undefined8 *)(lVar4 + 0x20 + (longlong)(int)uVar6 * 8),
                     *(undefined8 *)(lVar5 + 0x28));
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < *(int *)(lVar2 + 0x18));
      }
      if (iVar1 != *(int *)(lVar2 + 0x1c)) {
LAB_180bad93f:
        System_ThrowHelper__ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion(0);
      }
      return;
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

