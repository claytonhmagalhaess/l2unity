// UnionWindow__Botao__1806c5bc0 @ 0x1806c5bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong UnionWindow__Botao__1806c5bc0(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ushort uVar9;
  undefined8 in_stack_00000028;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if (cRam00000001834b3f9c == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_ButtonClickSoundManipulator);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.UIElements.VisualTreeAsset>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(MD_UnionWindow.__c__DisplayClass35_0._Botao_b__0);
    FUN_180315380(TI_UnionWindow.<>c__DisplayClass35_0);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button>);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'L2Button'");
    FUN_180315380(LIT_"'ButtonLabel'");
    FUN_180315380(LIT_"'Data/UI/_Elements/Components/L2Button/L2Button'");
    FUN_180315380(LIT_"'union-botao'");
    cRam00000001834b3f9c = '\x01';
  }
  lVar4 = func_0x000180315580(TI_UnionWindow.<>c__DisplayClass35_0);
  Gear__UpdateWeaponType__1803dadf0(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = in_stack_00000028;
    func_0x000180314690(lVar4 + 0x10);
    if (*(int *)(TI_SparkArte + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar5 = FUN_180a90ae0(LIT_"'Data/UI/_Elements/Components/L2Button/L2Button'",MR_SparkArte.Load<UnityEngine.UIElements.VisualTreeAsset>);
    if (lVar5 != 0) {
      uVar6 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(lVar5,0);
      if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar5 = FUN_180b0e310(uVar6,LIT_"'L2Button'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button>);
      if (lVar5 != 0) {
        UnityEngine_UIElements_VisualElement__RemoveFromHierarchy(lVar5,0);
        plVar7 = (longlong *)FUN_180b0e310(lVar5,LIT_"'ButtonLabel'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0xe48))(plVar7,param_1,*(undefined8 *)(*plVar7 + 0xe50));
          UnityEngine_UIElements_VisualElement__AddToClassList(lVar5,LIT_"'union-botao'",0);
          plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
          puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
          if (plVar7 != (longlong *)0x0) {
            lVar2 = *plVar7;
            uVar6 = *puVar8;
            uVar1 = *(undefined4 *)(puVar8 + 1);
            if (*(ushort *)(lVar2 + 0x12e) != 0) {
              uVar9 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar8 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) +
                            0x47) * 0x10 + 0x138 + lVar2);
                  goto code_r0x0001806c5e39;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < *(ushort *)(lVar2 + 0x12e));
            }
            puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001806c5e39:
            uStack_38 = uVar6;
            uStack_30 = uVar1;
            (*(code *)*puVar8)(plVar7,&uStack_38,puVar8[1]);
            plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
            puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
            if (plVar7 != (longlong *)0x0) {
              lVar2 = *plVar7;
              uVar6 = *puVar8;
              uVar1 = *(undefined4 *)(puVar8 + 1);
              if (*(ushort *)(lVar2 + 0x12e) != 0) {
                uVar9 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar8 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) +
                              0x73) * 0x10 + 0x138 + lVar2);
                    goto code_r0x0001806c5ed9;
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 < *(ushort *)(lVar2 + 0x12e));
              }
              puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x0001806c5ed9:
              uStack_38 = uVar6;
              uStack_30 = uVar1;
              (*(code *)*puVar8)(plVar7,&uStack_38,puVar8[1]);
              plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
              puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
              if (plVar7 != (longlong *)0x0) {
                lVar2 = *plVar7;
                uVar6 = *puVar8;
                uVar1 = *(undefined4 *)(puVar8 + 1);
                if (*(ushort *)(lVar2 + 0x12e) != 0) {
                  uVar9 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar8 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10)
                                + 0xad) * 0x10 + 0x138 + lVar2);
                      goto code_r0x0001806c5f79;
                    }
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < *(ushort *)(lVar2 + 0x12e));
                }
                puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001806c5f79:
                uStack_38 = uVar6;
                uStack_30 = uVar1;
                (*(code *)*puVar8)(plVar7,&uStack_38,puVar8[1]);
                uVar6 = func_0x000180315580(TI_ButtonClickSoundManipulator);
                BlinkingCursorManipulator___ctor__1807aa3c0(uVar6,lVar5,0);
                UnityEngine_UIElements_VisualElementExtensions__AddManipulator(lVar5,uVar6,0);
                uVar6 = func_0x000180315580(TI_System.Action);
                FUN_1816a9c60(uVar6,lVar4,MD_UnionWindow.__c__DisplayClass35_0._Botao_b__0,0);
                UnityEngine_UIElements_Button__add_clicked(lVar5,uVar6,0);
                return lVar5;
              }
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  lVar4 = (*pcVar3)();
  return lVar4;
}

