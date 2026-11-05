// CharacterSelector__SelectCharacter__1807ba450 @ 0x1807ba450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharacterSelector__SelectCharacter__1807ba450(longlong param_1,undefined4 param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (cRam00000001834b45f7 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_UnityEngine.GameObject.GetComponent<SelectableCharacterEntity>);
    FUN_180315380(MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<Logongrp>.get_Item);
    FUN_180315380(MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.GameObject>.get_Item);
    FUN_180315380(MD_CharacterSelector.__c__DisplayClass28_0._SelectCharacter_b__0);
    FUN_180315380(MD_CharacterSelector.__c__DisplayClass28_0._SelectCharacter_b__1);
    FUN_180315380(TI_CharacterSelector.<>c__DisplayClass28_0);
    cRam00000001834b45f7 = '\x01';
  }
  lVar2 = func_0x000180315580(TI_CharacterSelector.<>c__DisplayClass28_0);
  Gear__UpdateWeaponType__1803dadf0(lVar2,0);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x10) = param_2;
    *(longlong *)(lVar2 + 0x18) = param_1;
    func_0x000180314690(lVar2 + 0x18,param_1);
    if (*(int *)(lVar2 + 0x10) < 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x98) != 0) {
      if (*(int *)(*(longlong *)(param_1 + 0x98) + 0x18) <= *(int *)(lVar2 + 0x10)) {
        return;
      }
      if (*(int *)(param_1 + 0x20) == *(int *)(lVar2 + 0x10)) {
        return;
      }
      if (*(int *)(param_1 + 0x20) != -1) {
        if ((*(longlong *)(param_1 + 0xc0) == 0) ||
           (lVar3 = FUN_180bbafe0(*(longlong *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0x20),
                                  MR_System.Collections.Generic.List<UnityEngine.GameObject>.get_Item), lVar3 == 0)) goto code_r0x0001807ba7ca;
        lVar3 = FUN_1809e9ef0(lVar3,MR_UnityEngine.GameObject.GetComponent<SelectableCharacterEntity>);
        if ((*(longlong *)(param_1 + 0xb8) == 0) ||
           (uVar4 = FUN_180bbafe0(*(longlong *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x20),
                                  MR_System.Collections.Generic.List<Logongrp>.get_Item), lVar3 == 0)) goto code_r0x0001807ba7ca;
        SelectableCharacterEntity__SetDestination(lVar3,uVar4,0);
      }
      if ((*(longlong *)(param_1 + 0xc0) != 0) &&
         (lVar3 = FUN_180bbafe0(*(longlong *)(param_1 + 0xc0),*(undefined4 *)(lVar2 + 0x10),
                                MR_System.Collections.Generic.List<UnityEngine.GameObject>.get_Item), lVar3 != 0)) {
        lVar3 = FUN_1809e9ef0(lVar3,MR_UnityEngine.GameObject.GetComponent<SelectableCharacterEntity>);
        if ((*(longlong *)(param_1 + 0xb8) != 0) &&
           (uVar4 = FUN_180bbafe0(*(longlong *)(param_1 + 0xb8),7,MR_System.Collections.Generic.List<Logongrp>.get_Item), lVar3 != 0)
           ) {
          SelectableCharacterEntity__SetDestination(lVar3,uVar4,0);
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar2 + 0x10);
          if (*(longlong *)(param_1 + 0x98) != 0) {
            FUN_1815f9940(&uStack_88,*(longlong *)(param_1 + 0x98),*(undefined4 *)(lVar2 + 0x10),
                          MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item);
            *(undefined4 *)(param_1 + 0x28) = uStack_88;
            *(undefined4 *)(param_1 + 0x2c) = uStack_84;
            *(undefined4 *)(param_1 + 0x30) = uStack_80;
            *(undefined4 *)(param_1 + 0x34) = uStack_7c;
            *(undefined4 *)(param_1 + 0x38) = uStack_78;
            *(undefined4 *)(param_1 + 0x3c) = uStack_74;
            *(undefined4 *)(param_1 + 0x40) = uStack_70;
            *(undefined4 *)(param_1 + 0x44) = uStack_6c;
            *(undefined4 *)(param_1 + 0x48) = uStack_68;
            *(undefined4 *)(param_1 + 0x4c) = uStack_64;
            *(undefined4 *)(param_1 + 0x50) = uStack_60;
            *(undefined4 *)(param_1 + 0x54) = uStack_5c;
            *(undefined4 *)(param_1 + 0x58) = uStack_58;
            *(undefined4 *)(param_1 + 0x5c) = uStack_54;
            *(undefined4 *)(param_1 + 0x60) = uStack_50;
            *(undefined4 *)(param_1 + 100) = uStack_4c;
            *(undefined8 *)(param_1 + 0x68) = uStack_48;
            *(undefined8 *)(param_1 + 0x70) = uStack_40;
            *(undefined8 *)(param_1 + 0x78) = uStack_38;
            *(undefined8 *)(param_1 + 0x80) = uStack_30;
            *(undefined8 *)(param_1 + 0x88) = uStack_28;
            *(undefined8 *)(param_1 + 0x90) = uStack_20;
            func_0x000180314690(param_1 + 0x30,0);
            if (cRam00000001834b31c3 == '\0') {
              FUN_180315380(TI_CharSelectWindow);
              cRam00000001834b31c3 = '\x01';
            }
            if (**(longlong **)(TI_CharSelectWindow + 0xb8) != 0) {
              CharSelectWindow__SelectSlot__18078d9b0
                        (**(longlong **)(TI_CharSelectWindow + 0xb8),*(undefined4 *)(lVar2 + 0x10),
                         0);
              if (*(int *)(param_1 + 0x8c) < 1) {
                plVar5 = (longlong *)FUN_180458300();
                if (plVar5 != (longlong *)0x0) {
                  (**(code **)(*plVar5 + 0x1c8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x1d0));
                  return;
                }
              }
              else {
                lVar3 = FUN_180458300();
                uVar4 = func_0x000180315580(TI_System.Action);
                FUN_1816a9c60(uVar4,lVar2,MD_CharacterSelector.__c__DisplayClass28_0._SelectCharacter_b__0,0);
                uVar6 = func_0x000180315580(TI_System.Action);
                FUN_1816a9c60(uVar6,lVar2,MD_CharacterSelector.__c__DisplayClass28_0._SelectCharacter_b__1,0);
                if (lVar3 != 0) {
                  L2ConfirmWindow__ShowWindow__180770e10(lVar3,0x613,uVar4,uVar6,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x0001807ba7ca:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

