// SlotAnimationManipulator__AnimateCoolTime__1807b26c0 @ 0x1807b26c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SlotAnimationManipulator__AnimateCoolTime__1807b26c0(longlong param_1,float param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  float fVar11;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong uVar10;
  
  if (cRam00000001834b4512 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b4512 = '\x01';
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if ((lVar2 != 0) && (lVar5 = *(longlong *)(lVar2 + 0x80), lVar5 != 0)) {
    if (param_2 < *(float *)(lVar5 + 0x20)) {
      if ((((lVar5 != 0) && (lVar2 != 0)) && (lVar5 != 0)) &&
         ((lVar2 = SkillbarImageTable__get_Instance(0), lVar2 != 0 &&
          (*(longlong *)(lVar2 + 0x20) != 0)))) {
        fVar11 = (float)FUN_180006040();
        lVar2 = SkillbarImageTable__get_Instance(0);
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x20) != 0)) {
          uVar10 = 0;
          if ((int)fVar11 < 0) {
            uVar9 = 0;
          }
          else {
            uVar7 = *(int *)(*(longlong *)(lVar2 + 0x20) + 0x18) - 1;
            uVar9 = (int)fVar11;
            if ((int)uVar7 < (int)fVar11) {
              uVar9 = uVar7;
            }
          }
          if ((*(longlong *)(param_1 + 0x20) != 0) &&
             (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x50), lVar2 != 0)) {
            plVar3 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar2,0);
            lVar2 = SkillbarImageTable__get_Instance(0);
            if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x20), lVar2 != 0)) {
              if (*(uint *)(lVar2 + 0x18) <= uVar9) {
                FUN_1803155c0();
                pcVar1 = (code *)swi(3);
                uVar6 = (*pcVar1)();
                return uVar6;
              }
              uStack_88 = 0;
              uStack_a8 = 0;
              uStack_a0 = 0;
              uStack_98 = 0;
              uStack_90 = 0;
              UnityEngine_UIElements_StyleBackground___ctor
                        (&uStack_a8,*(undefined8 *)(lVar2 + 0x20 + (longlong)(int)uVar9 * 8),0);
              uStack_58 = uStack_88;
              uStack_60 = uStack_90;
              uStack_68 = uStack_98;
              uStack_70 = uStack_a0;
              uStack_78 = uStack_a8;
              if (plVar3 != (longlong *)0x0) {
                lVar2 = *plVar3;
                if (*(ushort *)(lVar2 + 0x12e) != 0) {
                  do {
                    if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle
                       ) {
                      puVar4 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + uVar10 * 0x10) + 0xb) *
                                0x10 + 0x138 + lVar2);
                      goto code_r0x0001807b28c5;
                    }
                    uVar8 = (short)uVar10 + 1;
                    uVar10 = (ulonglong)uVar8;
                  } while (uVar8 < *(ushort *)(lVar2 + 0x12e));
                }
                puVar4 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001807b28c5:
                (*(code *)*puVar4)(plVar3,&uStack_78,puVar4[1]);
                return 0;
              }
            }
          }
        }
      }
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    if (lVar5 != 0) {
      if (param_2 < *(float *)(lVar5 + 0x20) + 0.25) {
        if ((((lVar2 != 0) && (lVar5 != 0)) &&
            (lVar2 = SkillbarImageTable__get_Instance(0), lVar2 != 0)) &&
           (*(longlong *)(lVar2 + 0x28) != 0)) {
          fVar11 = (float)FUN_180006040();
          lVar2 = SkillbarImageTable__get_Instance(0);
          if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x28) != 0)) {
            if ((int)fVar11 < 0) {
              uVar9 = 0;
            }
            else {
              uVar7 = *(int *)(*(longlong *)(lVar2 + 0x28) + 0x18) - 1;
              uVar9 = (int)fVar11;
              if ((int)uVar7 < (int)fVar11) {
                uVar9 = uVar7;
              }
            }
            if ((*(longlong *)(param_1 + 0x20) != 0) &&
               (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x50), lVar2 != 0)) {
              lVar2 = UnityEngine_UIElements_VisualElement__get_style(lVar2,0);
              lVar5 = SkillbarImageTable__get_Instance(0);
              if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 != 0)) {
                if (*(uint *)(lVar5 + 0x18) <= uVar9) {
                  FUN_1803155c0();
                  pcVar1 = (code *)swi(3);
                  uVar6 = (*pcVar1)();
                  return uVar6;
                }
                uStack_88 = 0;
                uStack_a8 = 0;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                UnityEngine_UIElements_StyleBackground___ctor
                          (&uStack_a8,*(undefined8 *)(lVar5 + 0x20 + (longlong)(int)uVar9 * 8),0);
                if (lVar2 != 0) {
                  uStack_78 = uStack_a8;
                  uStack_70 = uStack_a0;
                  uStack_58 = uStack_88;
                  uStack_68 = uStack_98;
                  uStack_60 = uStack_90;
                  FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar2,&uStack_78);
                  return 0;
                }
              }
            }
          }
        }
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return uVar6;
      }
      if ((lVar2 != 0) && (lVar5 != 0)) {
        if (param_2 < *(float *)(lVar5 + 0x20) + 0.5) {
          if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0x50) == 0)) ||
             (lVar2 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar2 + 0x50),0)
             , lVar2 == 0)) goto code_r0x0001807b2b13;
          uStack_58 = 0;
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_68 = 0;
          uStack_60 = 0;
          FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar2,&uStack_78);
        }
        return 1;
      }
    }
  }
code_r0x0001807b2b13:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}

