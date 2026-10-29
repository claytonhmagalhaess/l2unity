// Nameplate__Acima__180674540 @ 0x180674540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 Nameplate__Acima__180674540(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  ushort uVar12;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [56];
  
  if (cRam00000001834b3e02 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b3e02 = '\x01';
  }
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(uVar6,0);
    *(undefined8 *)(param_1 + 0xa8) = uVar6;
    func_0x000180314690(param_1 + 0xa8,uVar6);
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      UnityEngine_UIElements_VisualElement__set_pickingMode(*(longlong *)(param_1 + 0xa8),1,0);
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xa8),0);
        uVar6 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
        if (lVar7 != 0) {
          FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
          if (*(longlong *)(param_1 + 0xa8) != 0) {
            plVar8 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style
                               (*(longlong *)(param_1 + 0xa8),0);
            uVar6 = func_0x0001825fc350(0x42c80000,0);
            puVar9 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,uVar6,0);
            if (plVar8 != (longlong *)0x0) {
              lVar7 = *plVar8;
              uVar6 = *puVar9;
              uVar1 = *(undefined4 *)(puVar9 + 1);
              if (*(ushort *)(lVar7 + 0x12e) != 0) {
                uVar12 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar9 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10)
                              + 0x2d) * 0x10 + 0x138 + lVar7);
                    goto code_r0x0001806746e9;
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < *(ushort *)(lVar7 + 0x12e));
              }
              puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x2d);
code_r0x0001806746e9:
              uStack_78 = uVar6;
              uStack_70 = uVar1;
              (*(code *)*puVar9)(plVar8,&uStack_78,puVar9[1]);
              if (*(longlong *)(param_1 + 0xa8) != 0) {
                plVar8 = (longlong *)
                         UnityEngine_UIElements_VisualElement__get_style
                                   (*(longlong *)(param_1 + 0xa8),0);
                uVar6 = func_0x0001825fc350(0x42480000,0);
                puVar9 = (undefined8 *)
                         UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,uVar6,0);
                if (plVar8 != (longlong *)0x0) {
                  lVar7 = *plVar8;
                  uVar6 = *puVar9;
                  uVar1 = *(undefined4 *)(puVar9 + 1);
                  if (*(ushort *)(lVar7 + 0x12e) != 0) {
                    uVar12 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar9 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                           (ulonglong)uVar12 * 0x10) + 0x47) * 0x10 + 0x138 + lVar7)
                        ;
                        goto code_r0x000180674799;
                      }
                      uVar12 = uVar12 + 1;
                    } while (uVar12 < *(ushort *)(lVar7 + 0x12e));
                  }
                  puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x000180674799:
                  uStack_78 = uVar6;
                  uStack_70 = uVar1;
                  (*(code *)*puVar9)(plVar8,&uStack_78,puVar9[1]);
                  if (*(longlong *)(param_1 + 0xa8) != 0) {
                    plVar8 = (longlong *)
                             UnityEngine_UIElements_VisualElement__get_style
                                       (*(longlong *)(param_1 + 0xa8),0);
                    uVar6 = func_0x0001825fc350(0xc2480000,0);
                    uVar10 = func_0x0001825fc560(0,0);
                    uStack_48 = 0;
                    uStack_58 = 0;
                    uStack_50 = 0;
                    func_0x000182607f40(&uStack_58,uVar6,uVar10,0);
                    uStack_78 = uStack_58;
                    uStack_70 = (undefined4)uStack_50;
                    uStack_6c = uStack_50._4_4_;
                    uStack_68 = (undefined4)uStack_48;
                    uStack_64 = (undefined4)((ulonglong)uStack_48 >> 0x20);
                    puVar11 = (undefined4 *)
                              UnityEngine_UIElements_StyleRotate__op_Implicit
                                        (auStack_40,&uStack_78,0);
                    if (plVar8 != (longlong *)0x0) {
                      uStack_78._0_4_ = *puVar11;
                      uStack_78._4_4_ = puVar11[1];
                      uStack_70 = puVar11[2];
                      lVar7 = *plVar8;
                      uStack_6c = (undefined4)*(undefined8 *)(puVar11 + 3);
                      uVar1 = uStack_6c;
                      uStack_68 = (undefined4)((ulonglong)*(undefined8 *)(puVar11 + 3) >> 0x20);
                      uVar3 = uStack_68;
                      uStack_64 = (undefined4)*(undefined8 *)(puVar11 + 5);
                      uVar4 = uStack_64;
                      uStack_60 = (undefined4)((ulonglong)*(undefined8 *)(puVar11 + 5) >> 0x20);
                      uVar5 = uStack_60;
                      if (*(ushort *)(lVar7 + 0x12e) != 0) {
                        uVar12 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar12 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar9 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                               (ulonglong)uVar12 * 0x10) + 0x7f) * 0x10 + 0x138 +
                                     lVar7);
                            goto code_r0x000180674897;
                          }
                          uVar12 = uVar12 + 1;
                        } while (uVar12 < *(ushort *)(lVar7 + 0x12e));
                      }
                      puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x7f);
code_r0x000180674897:
                      uStack_6c = uVar1;
                      uStack_68 = uVar3;
                      uStack_64 = uVar4;
                      uStack_60 = uVar5;
                      (*(code *)*puVar9)(plVar8,&uStack_78,puVar9[1]);
                      if (*(longlong *)(param_1 + 0xa8) != 0) {
                        lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                          (*(longlong *)(param_1 + 0xa8),0);
                        uVar6 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                        if (lVar7 != 0) {
                          FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
                          if (*(longlong *)(param_1 + 0xa8) != 0) {
                            lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                              (*(longlong *)(param_1 + 0xa8),0);
                            uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                            if (lVar7 != 0) {
                              FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar7,uVar6);
                              if (*(longlong *)(param_1 + 0x10) != 0) {
                                UnityEngine_UIElements_VisualElement__Add
                                          (*(longlong *)(param_1 + 0x10),
                                           *(undefined8 *)(param_1 + 0xa8),0);
                                goto code_r0x000180674963;
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
          }
        }
      }
    }
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
code_r0x000180674963:
  return *(undefined8 *)(param_1 + 0xa8);
}

