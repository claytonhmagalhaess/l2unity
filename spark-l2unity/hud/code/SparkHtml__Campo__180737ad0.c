// SparkHtml__Campo__180737ad0 @ 0x180737ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkHtml__Campo__180737ad0(longlong param_1,longlong param_2,char param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ushort uVar11;
  undefined8 uVar12;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if (cRam00000001834b4257 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,System.Func<string>>.set_Item);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ChangeEvent<string>>);
    FUN_180315380(TI_System.Func<string>);
    FUN_180315380(MR_UnityEngine.UIElements.INotifyValueChangedExtensions.RegisterValueChangedCallback<string>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.TextInputBaseField<string>.set_maxLength);
    FUN_180315380(MD_SparkHtml.__c__DisplayClass26_0._Campo_b__0);
    FUN_180315380(MD_SparkHtml.__c__DisplayClass26_0._Campo_b__1);
    FUN_180315380(TI_SparkHtml.<>c__DisplayClass26_0);
    FUN_180315380(LIT_"'var'");
    FUN_180315380(LIT_"'height'");
    FUN_180315380(LIT_"'number'");
    FUN_180315380(LIT_"'width'");
    FUN_180315380(LIT_"'type'");
    cRam00000001834b4257 = '\x01';
  }
  lVar5 = func_0x000180315580(TI_SparkHtml.<>c__DisplayClass26_0);
  Gear__UpdateWeaponType__1803dadf0(lVar5,0);
  uVar12 = 1000;
  if (param_3 == '\0') {
    uVar12 = 200;
  }
  uVar12 = SparkUI__Campo(uVar12,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = uVar12;
    func_0x000180314690(lVar5 + 0x10,uVar12);
    if (param_2 != 0) {
      uVar12 = SparkHtml_No__Attr__180735120(param_2,LIT_"'width'",0);
      if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
        func_0x000180315660();
      }
      SparkHtml__Numero__18073daf0(uVar12,0);
      uVar12 = SparkHtml_No__Attr__180735120(param_2,LIT_"'height'",0);
      iVar4 = SparkHtml__Numero__18073daf0(uVar12,0);
      if (*(longlong *)(lVar5 + 0x10) != 0) {
        plVar6 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar5 + 0x10),0);
        puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
        if (plVar6 != (longlong *)0x0) {
          lVar8 = *plVar6;
          uVar12 = *puVar7;
          uVar1 = *(undefined4 *)(puVar7 + 1);
          if (*(ushort *)(lVar8 + 0x12e) != 0) {
            uVar11 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar7 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) +
                          0xad) * 0x10 + 0x138 + lVar8);
                goto code_r0x000180737d19;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(ushort *)(lVar8 + 0x12e));
          }
          puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180737d19:
          uStack_48 = uVar12;
          uStack_40 = uVar1;
          (*(code *)*puVar7)(plVar6,&uStack_48,puVar7[1]);
          if (param_3 == '\0') {
            if (0 < iVar4) {
              if (*(longlong *)(lVar5 + 0x10) == 0) goto code_r0x000180738207;
              plVar6 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(lVar5 + 0x10),0);
              puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
              if (plVar6 == (longlong *)0x0) goto code_r0x000180738207;
              lVar8 = *plVar6;
              uVar12 = *puVar7;
              uVar1 = *(undefined4 *)(puVar7 + 1);
              if (*(ushort *)(lVar8 + 0x12e) != 0) {
                uVar11 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar7 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10)
                              + 0x43) * 0x10 + 0x138 + lVar8);
                    goto code_r0x000180737dd5;
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar11 < *(ushort *)(lVar8 + 0x12e));
              }
              puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180737dd5:
              uStack_48 = uVar12;
              uStack_40 = uVar1;
              (*(code *)*puVar7)(plVar6,&uStack_48,puVar7[1]);
            }
          }
          else {
            if (*(longlong *)(lVar5 + 0x10) == 0) goto code_r0x000180738207;
            UnityEngine_UIElements_TextField__set_multiline(*(longlong *)(lVar5 + 0x10),1,0);
            if (*(longlong *)(lVar5 + 0x10) == 0) goto code_r0x000180738207;
            plVar6 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar5 + 0x10),0);
            puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
            if (plVar6 == (longlong *)0x0) goto code_r0x000180738207;
            lVar8 = *plVar6;
            uVar12 = *puVar7;
            uVar1 = *(undefined4 *)(puVar7 + 1);
            if (*(ushort *)(lVar8 + 0x12e) != 0) {
              uVar11 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar7 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) +
                            0x43) * 0x10 + 0x138 + lVar8);
                  goto code_r0x000180737ee9;
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < *(ushort *)(lVar8 + 0x12e));
            }
            puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180737ee9:
            uStack_48 = uVar12;
            uStack_40 = uVar1;
            (*(code *)*puVar7)(plVar6,&uStack_48,puVar7[1]);
            if (*(longlong *)(lVar5 + 0x10) == 0) goto code_r0x000180738207;
            lVar8 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar5 + 0x10),0);
            uVar12 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
            if (lVar8 == 0) goto code_r0x000180738207;
            FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar8,uVar12);
          }
          if (*(longlong *)(lVar5 + 0x10) != 0) {
            plVar6 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar5 + 0x10),0);
            if (*(longlong *)(lVar5 + 0x10) != 0) {
              plVar9 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(lVar5 + 0x10),0);
              puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
              if (plVar9 != (longlong *)0x0) {
                lVar8 = *plVar9;
                uVar12 = *puVar7;
                uVar1 = *(undefined4 *)(puVar7 + 1);
                if (*(ushort *)(lVar8 + 0x12e) != 0) {
                  uVar11 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar7 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10
                                         ) + 0x4b) * 0x10 + 0x138 + lVar8);
                      goto code_r0x000180737fe7;
                    }
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < *(ushort *)(lVar8 + 0x12e));
                }
                puVar7 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x000180737fe7:
                uStack_48 = uVar12;
                uStack_40 = uVar1;
                (*(code *)*puVar7)(plVar9,&uStack_48,puVar7[1]);
                if (plVar6 != (longlong *)0x0) {
                  lVar8 = *plVar6;
                  if (*(ushort *)(lVar8 + 0x12e) != 0) {
                    uVar11 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar7 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                           (ulonglong)uVar11 * 0x10) + 0x51) * 0x10 + 0x138 + lVar8)
                        ;
                        goto code_r0x000180738059;
                      }
                      uVar11 = uVar11 + 1;
                    } while (uVar11 < *(ushort *)(lVar8 + 0x12e));
                  }
                  puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x000180738059:
                  uStack_48 = uVar12;
                  uStack_40 = uVar1;
                  (*(code *)*puVar7)(plVar6,&uStack_48,puVar7[1]);
                  uVar12 = SparkHtml_No__Attr__180735120(param_2,LIT_"'type'",0);
                  cVar3 = System_String__Equals(uVar12,LIT_"'number'",5,0);
                  if (cVar3 != '\0') {
                    if (*(longlong *)(lVar5 + 0x10) == 0) goto code_r0x000180738207;
                    FUN_180f0a0c0(*(longlong *)(lVar5 + 0x10),10,MR_UnityEngine.UIElements.TextInputBaseField<string>.set_maxLength);
                    uVar12 = *(undefined8 *)(lVar5 + 0x10);
                    uVar10 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ChangeEvent<string>>);
                    FUN_18055b980(uVar10,lVar5,MD_SparkHtml.__c__DisplayClass26_0._Campo_b__0,0);
                    FUN_1809fd010(uVar12,uVar10,MR_UnityEngine.UIElements.INotifyValueChangedExtensions.RegisterValueChangedCallback<string>);
                  }
                  uVar12 = SparkHtml_No__Attr__180735120(param_2,LIT_"'var'",0);
                  cVar3 = func_0x000181707e50(uVar12,0);
                  if (cVar3 != '\0') {
code_r0x00018073816e:
                    return *(undefined8 *)(lVar5 + 0x10);
                  }
                  if (*(longlong *)(param_1 + 0x10) != 0) {
                    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
                    uVar10 = func_0x000180315580(TI_System.Func<string>);
                    FUN_1814af140(uVar10,lVar5,MD_SparkHtml.__c__DisplayClass26_0._Campo_b__1,0);
                    if (lVar8 != 0) {
                      FUN_18126c020(lVar8,uVar12,uVar10,MR_System.Collections.Generic.Dictionary<string,System.Func<string>>.set_Item);
                      goto code_r0x00018073816e;
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
code_r0x000180738207:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar12 = (*pcVar2)();
  return uVar12;
}

