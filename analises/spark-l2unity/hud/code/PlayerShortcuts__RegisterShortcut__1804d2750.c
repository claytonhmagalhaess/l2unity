// PlayerShortcuts__RegisterShortcut__1804d2750 @ 0x1804d2750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlayerShortcuts__RegisterShortcut__1804d2750(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined4 auStackX_8 [2];
  int aiStackX_10 [2];
  
  if (cRam00000001834b3409 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,Shortcut>.ContainsKey);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,Shortcut>..ctor);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,Shortcut>.set_Item);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<int,Shortcut>);
    FUN_180315380(LIT_"'Register shortcut {0} at {1}.'");
    cRam00000001834b3409 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar4 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<int,Shortcut>);
    FUN_1811e4340(uVar4,MR_System.Collections.Generic.Dictionary<int,Shortcut>..ctor);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    func_0x000180314690(param_1 + 0x30,uVar4);
  }
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x10) + *(int *)(param_2 + 0x14) * 0xc;
    auStackX_8[0] = *(undefined4 *)(param_2 + 0x1c);
    uVar4 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
    aiStackX_10[0] = iVar8;
    uVar5 = func_0x000180314670(_DAT_1834c6268,aiStackX_10);
    uVar4 = System_String__Format(LIT_"'Register shortcut {0} at {1}.'",uVar4,uVar5,0);
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__Log(uVar4,0);
    if (*(longlong *)(param_1 + 0x30) != 0) {
      cVar3 = FUN_1811f4d60(*(longlong *)(param_1 + 0x30),iVar8,MR_System.Collections.Generic.Dictionary<int,Shortcut>.ContainsKey);
      if (cVar3 != '\0') {
        PlayerShortcuts__RemoveShotcutLocally__1804d2910(param_1,iVar8,0);
      }
      if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_1812037f0(*(longlong *)(param_1 + 0x30),iVar8,param_2,MR_System.Collections.Generic.Dictionary<int,Shortcut>.set_Item);
        if (cRam00000001834b32cb == '\0') {
          FUN_180315380(TI_SkillbarWindow);
          cRam00000001834b32cb = '\x01';
        }
        lVar1 = **(longlong **)(TI_SkillbarWindow + 0xb8);
        if (lVar1 != 0) {
          if (DAT_1834b418e == '\0') {
            FUN_180315380(TI_System.Action<AbstractSkillbar>,param_2,0);
            FUN_180315380(TI_UnityEngine.Debug);
            FUN_180315380(MR_System.Collections.Generic.List<AbstractSkillbar>.ForEach);
            FUN_180315380(MD_SkillbarWindow.__c__DisplayClass57_0._UpdateBarShortcut_b__0);
            FUN_180315380(TI_SkillbarWindow.<>c__DisplayClass57_0);
            FUN_180315380(LIT_"'Slot value {0} is too high.'");
            DAT_1834b418e = '\x01';
          }
          lVar6 = func_0x000180315580(TI_SkillbarWindow.<>c__DisplayClass57_0);
          Gear__UpdateWeaponType__1803dadf0(lVar6,0);
          if (lVar6 != 0) {
            *(longlong *)(lVar6 + 0x10) = param_2;
            func_0x000180314690(lVar6 + 0x10,param_2);
            lVar7 = *(longlong *)(lVar6 + 0x10);
            if (lVar7 != 0) {
              if (0xb < *(int *)(lVar7 + 0x10)) {
                aiStackX_10[0] = *(int *)(lVar7 + 0x10);
                uVar4 = func_0x000180314670(_DAT_1834c6268,aiStackX_10);
                uVar4 = System_String__Format(LIT_"'Slot value {0} is too high.'",uVar4,0);
                if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
                  func_0x000180315660();
                }
                UnityEngine_Debug__LogError(uVar4,0);
                return;
              }
              lVar1 = *(longlong *)(lVar1 + 0xd0);
              lVar7 = func_0x000180315580(TI_System.Action<AbstractSkillbar>);
              FUN_18055b980(lVar7,lVar6,MD_SkillbarWindow.__c__DisplayClass57_0._UpdateBarShortcut_b__0,0);
              if (lVar1 != 0) {
                if (lVar7 == 0) {
                  System_ThrowHelper__ThrowArgumentNullException(0x21,0,MR_System.Collections.Generic.List<AbstractSkillbar>.ForEach);
                }
                iVar8 = *(int *)(lVar1 + 0x1c);
                uVar9 = 0;
                if (0 < *(int *)(lVar1 + 0x18)) {
                  do {
                    if (iVar8 != *(int *)(lVar1 + 0x1c)) goto LAB_180bad93f;
                    lVar6 = *(longlong *)(lVar1 + 0x10);
                    if (lVar6 == 0) {
LAB_180bad94f:
                      FUN_1803155d0();
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    if (*(uint *)(lVar6 + 0x18) <= uVar9) {
                      FUN_1803155c0();
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    if (lVar7 == 0) goto LAB_180bad94f;
                    (**(code **)(lVar7 + 0x18))
                              (*(undefined8 *)(lVar7 + 0x40),
                               *(undefined8 *)(lVar6 + 0x20 + (longlong)(int)uVar9 * 8),
                               *(undefined8 *)(lVar7 + 0x28));
                    uVar9 = uVar9 + 1;
                  } while ((int)uVar9 < *(int *)(lVar1 + 0x18));
                }
                if (iVar8 != *(int *)(lVar1 + 0x1c)) {
LAB_180bad93f:
                  System_ThrowHelper__ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                            (0);
                }
                return;
              }
            }
          }
          FUN_1803155d0();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

