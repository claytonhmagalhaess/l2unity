// SparkHtml__Combo__180738210 @ 0x180738210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkHtml__Combo__180738210(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ushort uVar14;
  uint uVar15;
  undefined8 uStackX_8;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if (cRam00000001834b4258 == '\0') {
    FUN_180315380(TI_ButtonClickSoundManipulator);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,System.Func<string>>.set_Item);
    FUN_180315380(TI_UnityEngine.UIElements.DropdownField);
    FUN_180315380(TI_System.Func<string>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<string>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(TI_System.Collections.Generic.List<string>);
    FUN_180315380(MR_UnityEngine.UIElements.PopupField<string>.set_index);
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(MD_SparkHtml.__c__DisplayClass27_0._Combo_b__0);
    FUN_180315380(TI_SparkHtml.<>c__DisplayClass27_0);
    FUN_180315380(LIT_"'var'");
    FUN_180315380(LIT_"'list'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'width'");
    cRam00000001834b4258 = '\x01';
  }
  lVar6 = func_0x000180315580(TI_SparkHtml.<>c__DisplayClass27_0);
  Gear__UpdateWeaponType__1803dadf0(lVar6,0);
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30), lVar7 != 0)) {
    lVar7 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(lVar7,0);
    if (lVar7 != 0) {
      plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_Item(lVar7,0,0);
      if (lVar6 != 0) {
        if (plVar8 == (longlong *)0x0) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
        }
        else {
          if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(TI_UnityEngine.UIElements.DropdownField + 0x130)) ||
             (*(longlong *)
               (*(longlong *)(*plVar8 + 200) + -8 +
               (ulonglong)*(byte *)(TI_UnityEngine.UIElements.DropdownField + 0x130) * 8) != TI_UnityEngine.UIElements.DropdownField)) {
            FUN_1803146d0(plVar8);
            pcVar3 = (code *)swi(3);
            uVar11 = (*pcVar3)();
            return uVar11;
          }
          *(longlong **)(lVar6 + 0x10) = plVar8;
          if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(TI_UnityEngine.UIElements.DropdownField + 0x130)) ||
             (*(longlong *)
               (*(longlong *)(*plVar8 + 200) + -8 +
               (ulonglong)*(byte *)(TI_UnityEngine.UIElements.DropdownField + 0x130) * 8) != TI_UnityEngine.UIElements.DropdownField)) {
            FUN_1803146d0(plVar8);
            pcVar3 = (code *)swi(3);
            uVar11 = (*pcVar3)();
            return uVar11;
          }
        }
        func_0x000180314690(lVar6 + 0x10,plVar8);
        lVar7 = func_0x000180315580(TI_System.Collections.Generic.List<string>);
        FUN_180bba2e0(lVar7,MR_System.Collections.Generic.List<string>..ctor);
        if (param_2 != 0) {
          lVar9 = SparkHtml_No__Attr__180735120(param_2,LIT_"'list'",0);
          if ((lVar9 != 0) || (lVar9 = LIT_"''", LIT_"''" != 0)) {
            lVar9 = System_String__Split(lVar9,0x3b,0,0);
            if (lVar9 != 0) {
              for (uVar15 = 0; (int)uVar15 < *(int *)(lVar9 + 0x18); uVar15 = uVar15 + 1) {
                if (*(uint *)(lVar9 + 0x18) <= uVar15) {
                  FUN_1803155c0();
                  pcVar3 = (code *)swi(3);
                  uVar11 = (*pcVar3)();
                  return uVar11;
                }
                lVar2 = *(longlong *)(lVar9 + 0x20 + (longlong)(int)uVar15 * 8);
                if (lVar2 == 0) goto code_r0x000180738839;
                lVar10 = func_0x00018170d270(lVar2,0);
                if (lVar10 == 0) goto code_r0x000180738839;
                if (0 < *(int *)(lVar10 + 0x10)) {
                  uVar11 = func_0x00018170d270(lVar2,0);
                  if (lVar7 == 0) goto code_r0x000180738839;
                  FUN_180002eb0(lVar7,uVar11,MR_System.Collections.Generic.List<string>.Add);
                }
              }
              plVar8 = *(longlong **)(lVar6 + 0x10);
              if (plVar8 != (longlong *)0x0) {
                (**(code **)(*plVar8 + 0xb78))(plVar8,lVar7,*(undefined8 *)(*plVar8 + 0xb80));
                if (lVar7 != 0) {
                  if (0 < *(int *)(lVar7 + 0x18)) {
                    if (*(longlong *)(lVar6 + 0x10) == 0) goto code_r0x000180738839;
                    FUN_180d268a0(*(longlong *)(lVar6 + 0x10),0,MR_UnityEngine.UIElements.PopupField<string>.set_index);
                  }
                  uVar11 = LIT_"'width'";
                  if (cRam00000001834b4268 == '\0') {
                    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
                    cRam00000001834b4268 = '\x01';
                  }
                  uStackX_8 = 0;
                  if (*(longlong *)(param_2 + 0x20) == 0) {
                    FUN_1803155d0();
                    pcVar3 = (code *)swi(3);
                    uVar11 = (*pcVar3)();
                    return uVar11;
                  }
                  cVar4 = FUN_1812698d0(*(longlong *)(param_2 + 0x20),uVar11,&uStackX_8,
                                        MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
                  uVar11 = 0;
                  if (cVar4 != '\0') {
                    uVar11 = uStackX_8;
                  }
                  if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  iVar5 = SparkHtml__Numero__18073daf0(uVar11,0);
                  if (0 < iVar5) {
                    if (*(longlong *)(lVar6 + 0x10) == 0) goto code_r0x000180738839;
                    plVar8 = (longlong *)
                             UnityEngine_UIElements_VisualElement__get_style
                                       (*(longlong *)(lVar6 + 0x10),0);
                    puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
                    if (plVar8 == (longlong *)0x0) goto code_r0x000180738839;
                    lVar7 = *plVar8;
                    uVar11 = *puVar12;
                    uVar1 = *(undefined4 *)(puVar12 + 1);
                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                      uVar14 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar12 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                              (ulonglong)uVar14 * 0x10) + 0xad) * 0x10 + 0x138 +
                                    lVar7);
                          goto code_r0x000180738629;
                        }
                        uVar14 = uVar14 + 1;
                      } while (uVar14 < *(ushort *)(lVar7 + 0x12e));
                    }
                    puVar12 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180738629:
                    uStack_48 = uVar11;
                    uStack_40 = uVar1;
                    (*(code *)*puVar12)(plVar8,&uStack_48,puVar12[1]);
                    if (*(longlong *)(lVar6 + 0x10) == 0) goto code_r0x000180738839;
                    plVar8 = (longlong *)
                             UnityEngine_UIElements_VisualElement__get_style
                                       (*(longlong *)(lVar6 + 0x10),0);
                    puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
                    if (plVar8 == (longlong *)0x0) goto code_r0x000180738839;
                    lVar7 = *plVar8;
                    uVar11 = *puVar12;
                    uVar1 = *(undefined4 *)(puVar12 + 1);
                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                      uVar14 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar12 = (undefined8 *)
                                    ((longlong)
                                     (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                              (ulonglong)uVar14 * 0x10) + 0x59) * 0x10 + 0x138 +
                                    lVar7);
                          goto code_r0x0001807386c9;
                        }
                        uVar14 = uVar14 + 1;
                      } while (uVar14 < *(ushort *)(lVar7 + 0x12e));
                    }
                    puVar12 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x59);
code_r0x0001807386c9:
                    uStack_48 = uVar11;
                    uStack_40 = uVar1;
                    (*(code *)*puVar12)(plVar8,&uStack_48,puVar12[1]);
                  }
                  uVar11 = *(undefined8 *)(lVar6 + 0x10);
                  uVar13 = func_0x000180315580(TI_ButtonClickSoundManipulator);
                  BlinkingCursorManipulator___ctor__1807aa3c0(uVar13,uVar11,0);
                  UnityEngine_UIElements_VisualElementExtensions__AddManipulator(uVar11,uVar13,0);
                  uVar11 = LIT_"'var'";
                  if (cRam00000001834b4268 == '\0') {
                    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
                    cRam00000001834b4268 = '\x01';
                  }
                  uStackX_8 = 0;
                  if (*(longlong *)(param_2 + 0x20) == 0) {
                    FUN_1803155d0();
                    pcVar3 = (code *)swi(3);
                    uVar11 = (*pcVar3)();
                    return uVar11;
                  }
                  cVar4 = FUN_1812698d0(*(longlong *)(param_2 + 0x20),uVar11,&uStackX_8,
                                        MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
                  uVar11 = 0;
                  if (cVar4 != '\0') {
                    uVar11 = uStackX_8;
                  }
                  cVar4 = func_0x000181707e50(uVar11,0);
                  if (cVar4 != '\0') {
code_r0x0001807387c8:
                    return *(undefined8 *)(lVar6 + 0x10);
                  }
                  if (*(longlong *)(param_1 + 0x10) != 0) {
                    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
                    uVar13 = func_0x000180315580(TI_System.Func<string>);
                    FUN_1814af140(uVar13,lVar6,MD_SparkHtml.__c__DisplayClass27_0._Combo_b__0,0);
                    if (lVar7 != 0) {
                      FUN_18126c020(lVar7,uVar11,uVar13,MR_System.Collections.Generic.Dictionary<string,System.Func<string>>.set_Item);
                      goto code_r0x0001807387c8;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x000180738839:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  uVar11 = (*pcVar3)();
  return uVar11;
}

