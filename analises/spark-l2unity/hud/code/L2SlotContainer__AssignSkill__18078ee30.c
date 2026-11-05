// L2SlotContainer__AssignSkill__18078ee30 @ 0x18078ee30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2SlotContainer__AssignSkill__18078ee30(longlong param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ushort uVar12;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
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
  undefined8 uStack_30;
  
  if (cRam00000001834b443e == '\0') {
    uStack_30 = &UNK_18078ee5d;
    FUN_180315380(TI_SkillSlot);
    cRam00000001834b443e = '\x01';
  }
  lVar8 = *(longlong *)(param_1 + 0x38);
  if (lVar8 != 0) {
    if (*(uint *)(lVar8 + 0x18) <= param_2) {
      uStack_30 = &UNK_18078eecd;
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    plVar1 = *(longlong **)(lVar8 + 0x20 + (longlong)(int)param_2 * 8);
    if (plVar1 != (longlong *)0x0) {
      if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TI_SkillSlot + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(*plVar1 + 200) + -8 +
           (ulonglong)*(byte *)(TI_SkillSlot + 0x130) * 8) != TI_SkillSlot)) {
        uStack_30 = &UNK_18078eed6;
        FUN_1803146d0(plVar1,TI_SkillSlot);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (cRam00000001834b4113 == '\0') {
        FUN_180315380(TI_ButtonClickSoundManipulator,param_3,0);
        FUN_180315380(TI_UnityEngine.UIElements.IStyle);
        FUN_180315380(TI_SlotAnimationManipulator);
        FUN_180315380(LIT_"'empty'");
        cRam00000001834b4113 = '\x01';
      }
      lVar8 = plVar1[8];
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      lVar7 = func_0x000180315580(TI_ButtonClickSoundManipulator);
      BlinkingCursorManipulator___ctor__1807aa3c0(lVar7,lVar8,0);
      plVar1[0x12] = lVar7;
      func_0x000180314690(plVar1 + 0x12,lVar7);
      UnityEngine_UIElements_VisualElementExtensions__AddManipulator(plVar1[8],plVar1[0x12],0);
      lVar8 = plVar1[8];
      lVar7 = func_0x000180315580(TI_SlotAnimationManipulator);
      SlotAnimationManipulator___ctor__1807b2d00(lVar7,lVar8,plVar1,0);
      plVar1[0x13] = lVar7;
      func_0x000180314690(plVar1 + 0x13,lVar7);
      lVar8 = IconTable__get_Instance(0);
      if ((param_3 != 0) && (lVar8 != 0)) {
        uVar9 = IconTable__LoadTextureByName(lVar8,*(undefined8 *)(param_3 + 0x38),0);
        UnityEngine_UIElements_StyleBackground___ctor(&uStack_98,uVar9,0);
        if (plVar1[9] != 0) {
          plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar1[9],0);
          uVar6 = uStack_78;
          uVar5 = uStack_80;
          uVar4 = uStack_88;
          uVar3 = uStack_90;
          uVar9 = uStack_98;
          if (plVar10 != (longlong *)0x0) {
            lVar8 = *plVar10;
            uStack_30 = (undefined *)CONCAT44(unaff_XMM8_Dd,unaff_XMM8_Dc);
            if (*(ushort *)(lVar8 + 0x12e) != 0) {
              uVar12 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar11 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) +
                             0xb) * 0x10 + 0x138 + lVar8);
                  goto code_r0x000180700e89;
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < *(ushort *)(lVar8 + 0x12e));
            }
            puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x000180700e89:
            uStack_68 = uVar9;
            uStack_60 = uVar3;
            uStack_58 = uVar4;
            uStack_50 = uVar5;
            uStack_48 = uVar6;
            (*(code *)*puVar11)(plVar10,&uStack_68,puVar11[1]);
            if (plVar1[8] != 0) {
              UnityEngine_UIElements_VisualElement__RemoveFromClassList(plVar1[8],LIT_"'empty'",0);
              if (plVar1[0xf] != 0) {
                *(undefined1 *)(plVar1[0xf] + 0x59) = 1;
                *(undefined4 *)(plVar1 + 2) = *(undefined4 *)(param_3 + 0x10);
                if (DAT_1834b3103 == '\0') {
                  FUN_180315380(TI_PlayerSkill);
                  DAT_1834b3103 = '\x01';
                }
                if (**(longlong **)(TI_PlayerSkill + 0xb8) != 0) {
                  lVar8 = PlayerSkill__GetSkillInfo
                                    (**(longlong **)(TI_PlayerSkill + 0xb8),(int)plVar1[2],0);
                  plVar1[0x10] = lVar8;
                  func_0x000180314690(plVar1 + 0x10,lVar8);
                  plVar1[0x14] = param_3;
                  func_0x000180314690(plVar1 + 0x14,param_3);
                  lVar8 = plVar1[0xb];
                  if (lVar8 != 0) {
                    *(longlong *)(lVar8 + 0x18) = plVar1[0x14];
                    func_0x000180314690(lVar8 + 0x18);
                  }
                  return;
                }
              }
            }
          }
        }
      }
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uStack_30 = &UNK_18078eec7;
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

