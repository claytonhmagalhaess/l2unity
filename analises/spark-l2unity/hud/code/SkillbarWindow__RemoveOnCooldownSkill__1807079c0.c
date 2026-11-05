// SkillbarWindow__RemoveOnCooldownSkill__1807079c0 @ 0x1807079c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarWindow__RemoveOnCooldownSkill__1807079c0
               (longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  ushort uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b4196 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator);
    cRam00000001834b4196 = '\x01';
  }
  lVar5 = SkillbarWindow__GetAllSlotsAt__180707190(param_1,param_2,param_3,0);
  if (lVar5 == 0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_180bada40(&uStack_a0,lVar5,MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator);
  uStack_88 = (undefined4)uStack_a0;
  uStack_84 = uStack_a0._4_4_;
  uStack_80 = (undefined4)uStack_98;
  uStack_7c = uStack_98._4_4_;
  lStack_78 = lStack_90;
  uStack_a0 = 0;
  uStack_98 = &uStack_88;
code_r0x000180707a80:
  do {
    cVar3 = FUN_1812fa7e0(&uStack_88,MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext);
    lVar5 = lStack_78;
    if (cVar3 == '\0') {
      Gear__UpdateWeaponType__1803dadf0(&uStack_88,MR_System.Collections.Generic.List<SkillbarSlot>.Dispose);
      return;
    }
    if (cRam00000001834b4198 == '\0') {
      FUN_180315380(TI_UnityEngine.UIElements.IStyle);
      FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Contains);
      FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Remove);
      cRam00000001834b4198 = '\x01';
    }
    if (*(longlong *)(param_1 + 0xe0) == 0) goto code_r0x000180707c20;
    cVar3 = FUN_181647ac0(*(longlong *)(param_1 + 0xe0),lVar5,MR_System.Collections.Generic.List<SkillbarSlot>.Contains);
  } while (cVar3 == '\0');
  if (lVar5 != 0) {
    if (*(longlong *)(lVar5 + 0x50) != 0) {
      plVar6 = (longlong *)
               UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar5 + 0x50),0);
      if (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        uVar4 = 0;
        if (*(ushort *)(lVar1 + 0x12e) != 0) {
          do {
            if (*(longlong *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)uVar4 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar7 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar1 + 0xb0) + 8 + (ulonglong)uVar4 * 0x10) + 0xb)
                        * 0x10 + 0x138 + lVar1);
              goto code_r0x000180707b69;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(ushort *)(lVar1 + 0x12e));
        }
        puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x000180707b69:
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        (*(code *)*puVar7)(plVar6,&uStack_68,puVar7[1]);
        if (*(longlong *)(param_1 + 0xe0) != 0) {
          FUN_18164eb60(*(longlong *)(param_1 + 0xe0),lVar5,MR_System.Collections.Generic.List<SkillbarSlot>.Remove);
          goto code_r0x000180707a80;
        }
        FUN_1803155d0();
      }
      FUN_1803155d0();
    }
    FUN_1803155d0();
  }
  FUN_1803155d0();
code_r0x000180707c20:
  FUN_1803155d0();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

