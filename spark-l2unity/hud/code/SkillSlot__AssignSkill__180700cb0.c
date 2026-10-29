// SkillSlot__AssignSkill__180700cb0 @ 0x180700cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillSlot__AssignSkill__180700cb0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ushort uVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b4113 == '\0') {
    FUN_180315380(TI_ButtonClickSoundManipulator);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SlotAnimationManipulator);
    FUN_180315380(LIT_"'empty'");
    cRam00000001834b4113 = '\x01';
  }
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar5 = func_0x000180315580(TI_ButtonClickSoundManipulator);
  BlinkingCursorManipulator___ctor__1807aa3c0(uVar5,uVar7,0);
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  func_0x000180314690(param_1 + 0x90,uVar5);
  UnityEngine_UIElements_VisualElementExtensions__AddManipulator
            (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x90),0);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = func_0x000180315580(TI_SlotAnimationManipulator);
  SlotAnimationManipulator___ctor__1807b2d00(uVar5,uVar7,param_1,0);
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  func_0x000180314690(param_1 + 0x98,uVar5);
  lVar6 = IconTable__get_Instance(0);
  if ((param_2 != 0) && (lVar6 != 0)) {
    uVar7 = IconTable__LoadTextureByName(lVar6,*(undefined8 *)(param_2 + 0x38),0);
    UnityEngine_UIElements_StyleBackground___ctor(&uStack_98,uVar7,0);
    if (*(longlong *)(param_1 + 0x48) != 0) {
      plVar8 = (longlong *)
               UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x48),0);
      uVar4 = uStack_78;
      uVar3 = uStack_80;
      uVar2 = uStack_88;
      uVar5 = uStack_90;
      uVar7 = uStack_98;
      if (plVar8 != (longlong *)0x0) {
        lVar6 = *plVar8;
        if (*(ushort *)(lVar6 + 0x12e) != 0) {
          uVar10 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar9 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0xb)
                        * 0x10 + 0x138 + lVar6);
              goto code_r0x000180700e89;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(ushort *)(lVar6 + 0x12e));
        }
        puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x000180700e89:
        uStack_68 = uVar7;
        uStack_60 = uVar5;
        uStack_58 = uVar2;
        uStack_50 = uVar3;
        uStack_48 = uVar4;
        (*(code *)*puVar9)(plVar8,&uStack_68,puVar9[1]);
        if (*(longlong *)(param_1 + 0x40) != 0) {
          UnityEngine_UIElements_VisualElement__RemoveFromClassList
                    (*(longlong *)(param_1 + 0x40),LIT_"'empty'",0);
          if (*(longlong *)(param_1 + 0x78) != 0) {
            *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x59) = 1;
            *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
            if (DAT_1834b3103 == '\0') {
              FUN_180315380(TI_PlayerSkill);
              DAT_1834b3103 = '\x01';
            }
            if (**(longlong **)(TI_PlayerSkill + 0xb8) != 0) {
              uVar7 = PlayerSkill__GetSkillInfo
                                (**(longlong **)(TI_PlayerSkill + 0xb8),
                                 *(undefined4 *)(param_1 + 0x10),0);
              *(undefined8 *)(param_1 + 0x80) = uVar7;
              func_0x000180314690(param_1 + 0x80,uVar7);
              *(longlong *)(param_1 + 0xa0) = param_2;
              func_0x000180314690(param_1 + 0xa0,param_2);
              lVar6 = *(longlong *)(param_1 + 0x58);
              if (lVar6 != 0) {
                *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(param_1 + 0xa0);
                func_0x000180314690(lVar6 + 0x18);
              }
              return;
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

