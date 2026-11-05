// NpcHtmlWindow__AddInputField__18067edd0 @ 0x18067edd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NpcHtmlWindow__AddInputField__18067edd0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ushort uVar11;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if (cRam00000001834b3e56 == '\0') {
    FUN_180315380(TI_BlinkingCursorManipulator);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ChangeEvent<string>>);
    FUN_180315380(MR_UnityEngine.UIElements.INotifyValueChangedExtensions.RegisterValueChangedCallback<string>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_System.Math);
    FUN_180315380(TI_UnityEngine.UIElements.TextField);
    FUN_180315380(MD_NpcHtmlWindow.__c__DisplayClass47_0._AddInputField_b__0);
    FUN_180315380(TI_NpcHtmlWindow.<>c__DisplayClass47_0);
    FUN_180315380(LIT_"'var'");
    FUN_180315380(LIT_"'height'");
    FUN_180315380(LIT_"'width'");
    cRam00000001834b3e56 = '\x01';
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lVar5 = func_0x000180315580(TI_NpcHtmlWindow.<>c__DisplayClass47_0);
  Gear__UpdateWeaponType__1803dadf0(lVar5,0);
  if (lVar5 != 0) {
    *(longlong *)(lVar5 + 0x10) = param_1;
    func_0x000180314690(lVar5 + 0x10,param_1);
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar6 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(*(longlong *)(param_1 + 0x90),0);
      if (lVar6 != 0) {
        plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_Item(lVar6,0,0);
        if (plVar7 != (longlong *)0x0) {
          if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(TI_UnityEngine.UIElements.TextField + 0x130)) ||
             (*(longlong *)
               (*(longlong *)(*plVar7 + 200) + -8 + (ulonglong)*(byte *)(TI_UnityEngine.UIElements.TextField + 0x130) * 8
               ) != TI_UnityEngine.UIElements.TextField)) {
            FUN_1803146d0(plVar7);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (param_3 != 0) {
          cVar3 = FUN_1812698d0(param_3,LIT_"'width'",&uStack_48,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
          if (cVar3 != '\0') {
            iVar4 = System_Int32__Parse(uStack_48,0);
            if (plVar7 == (longlong *)0x0) goto code_r0x00018067f3ba;
            plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar7,0);
            if (*(int *)(TI_System.Math + 0xe4) == 0) {
              func_0x000180315660();
            }
            func_0x00018189eb20(0x28,iVar4 + -0x32,0);
            puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
            if (plVar8 == (longlong *)0x0) goto code_r0x00018067f3ba;
            lVar6 = *plVar8;
            uVar10 = *puVar9;
            uVar1 = *(undefined4 *)(puVar9 + 1);
            if (*(ushort *)(lVar6 + 0x12e) != 0) {
              uVar11 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar9 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) +
                            0x59) * 0x10 + 0x138 + lVar6);
                  goto code_r0x00018067f039;
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < *(ushort *)(lVar6 + 0x12e));
            }
            puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x59);
code_r0x00018067f039:
            uStack_38 = uVar10;
            uStack_30 = uVar1;
            (*(code *)*puVar9)(plVar8,&uStack_38,puVar9[1]);
            plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar7,0);
            func_0x00018189eb20(0x28,iVar4 + -0x32,0);
            puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
            if (plVar8 == (longlong *)0x0) goto code_r0x00018067f3ba;
            lVar6 = *plVar8;
            uVar10 = *puVar9;
            uVar1 = *(undefined4 *)(puVar9 + 1);
            if (*(ushort *)(lVar6 + 0x12e) != 0) {
              uVar11 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar9 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) +
                            0xad) * 0x10 + 0x138 + lVar6);
                  goto code_r0x00018067f0e9;
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < *(ushort *)(lVar6 + 0x12e));
            }
            puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018067f0e9:
            uStack_38 = uVar10;
            uStack_30 = uVar1;
            (*(code *)*puVar9)(plVar8,&uStack_38,puVar9[1]);
          }
          cVar3 = FUN_1812698d0(param_3,LIT_"'height'",&uStack_40,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
          if (cVar3 != '\0') {
            System_Int32__Parse(uStack_40,0);
            if (plVar7 == (longlong *)0x0) goto code_r0x00018067f3ba;
            plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar7,0);
            puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
            if (plVar8 == (longlong *)0x0) goto code_r0x00018067f3ba;
            lVar6 = *plVar8;
            uVar10 = *puVar9;
            uVar1 = *(undefined4 *)(puVar9 + 1);
            if (*(ushort *)(lVar6 + 0x12e) != 0) {
              uVar11 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar9 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) +
                            0x57) * 0x10 + 0x138 + lVar6);
                  goto code_r0x00018067f1b9;
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < *(ushort *)(lVar6 + 0x12e));
            }
            puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x00018067f1b9:
            uStack_38 = uVar10;
            uStack_30 = uVar1;
            (*(code *)*puVar9)(plVar8,&uStack_38,puVar9[1]);
            plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(plVar7,0);
            puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
            if (plVar8 == (longlong *)0x0) goto code_r0x00018067f3ba;
            lVar6 = *plVar8;
            uVar10 = *puVar9;
            uVar1 = *(undefined4 *)(puVar9 + 1);
            if (*(ushort *)(lVar6 + 0x12e) != 0) {
              uVar11 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar9 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) +
                            0x43) * 0x10 + 0x138 + lVar6);
                  goto code_r0x00018067f259;
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < *(ushort *)(lVar6 + 0x12e));
            }
            puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018067f259:
            uStack_38 = uVar10;
            uStack_30 = uVar1;
            (*(code *)*puVar9)(plVar8,&uStack_38,puVar9[1]);
          }
          cVar3 = FUN_1812698d0(param_3,LIT_"'var'",lVar5 + 0x18,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
          if (cVar3 != '\0') {
            uVar10 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ChangeEvent<string>>);
            FUN_18055b980(uVar10,lVar5,MD_NpcHtmlWindow.__c__DisplayClass47_0._AddInputField_b__0,0);
            FUN_1809fd010(plVar7,uVar10,MR_UnityEngine.UIElements.INotifyValueChangedExtensions.RegisterValueChangedCallback<string>);
          }
          uVar10 = func_0x000180315580(TI_BlinkingCursorManipulator);
          BlinkingCursorManipulator___ctor__1807aa3c0(uVar10,plVar7,0);
          UnityEngine_UIElements_VisualElementExtensions__AddManipulator(plVar7,uVar10,0);
          if (param_2 != 0) {
            UnityEngine_UIElements_VisualElement__Add(param_2,plVar7,0);
            return;
          }
        }
      }
    }
  }
code_r0x00018067f3ba:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

