// SparkEstilo__Campo__18071f2b0 @ 0x18071f2b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkEstilo__Campo__18071f2b0(undefined4 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ushort uVar11;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if (cRam00000001834b4200 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b4200 = '\x01';
  }
  lVar5 = SparkUI__Campo(param_1,0);
  if (lVar5 != 0) {
    plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
    puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *plVar6;
      uVar1 = *puVar7;
      uVar2 = *(undefined4 *)(puVar7 + 1);
      if (*(ushort *)(lVar3 + 0x12e) != 0) {
        uVar11 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar7 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 0xad)
                      * 0x10 + 0x138 + lVar3);
            goto code_r0x00018071f389;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(ushort *)(lVar3 + 0x12e));
      }
      puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018071f389:
      uStack_48 = uVar1;
      uStack_40 = uVar2;
      (*(code *)*puVar7)(plVar6,&uStack_48,puVar7[1]);
      plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
      puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
      if (plVar6 != (longlong *)0x0) {
        lVar3 = *plVar6;
        uVar1 = *puVar7;
        uVar2 = *(undefined4 *)(puVar7 + 1);
        if (*(ushort *)(lVar3 + 0x12e) != 0) {
          uVar11 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar7 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 0x43
                        ) * 0x10 + 0x138 + lVar3);
              goto code_r0x00018071f429;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(ushort *)(lVar3 + 0x12e));
        }
        puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018071f429:
        uStack_48 = uVar1;
        uStack_40 = uVar2;
        (*(code *)*puVar7)(plVar6,&uStack_48,puVar7[1]);
        plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
        plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
        plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
        plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
        puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
        if (plVar10 != (longlong *)0x0) {
          lVar3 = *plVar10;
          uVar1 = *puVar7;
          uVar2 = *(undefined4 *)(puVar7 + 1);
          if (*(ushort *)(lVar3 + 0x12e) != 0) {
            uVar11 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar7 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) +
                          0x4b) * 0x10 + 0x138 + lVar3);
                goto code_r0x00018071f4f7;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(ushort *)(lVar3 + 0x12e));
          }
          puVar7 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x00018071f4f7:
          uStack_48 = uVar1;
          uStack_40 = uVar2;
          (*(code *)*puVar7)(plVar10,&uStack_48,puVar7[1]);
          if (plVar9 != (longlong *)0x0) {
            lVar3 = *plVar9;
            if (*(ushort *)(lVar3 + 0x12e) != 0) {
              uVar11 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar7 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) +
                            0x51) * 0x10 + 0x138 + lVar3);
                  goto code_r0x00018071f579;
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < *(ushort *)(lVar3 + 0x12e));
            }
            puVar7 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x00018071f579:
            uStack_48 = uVar1;
            uStack_40 = uVar2;
            (*(code *)*puVar7)(plVar9,&uStack_48,puVar7[1]);
            if (plVar8 != (longlong *)0x0) {
              lVar3 = *plVar8;
              if (*(ushort *)(lVar3 + 0x12e) != 0) {
                uVar11 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar7 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10)
                              + 0x4f) * 0x10 + 0x138 + lVar3);
                    goto code_r0x00018071f5e9;
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar11 < *(ushort *)(lVar3 + 0x12e));
              }
              puVar7 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x00018071f5e9:
              uStack_48 = uVar1;
              uStack_40 = uVar2;
              (*(code *)*puVar7)(plVar8,&uStack_48,puVar7[1]);
              if (plVar6 != (longlong *)0x0) {
                lVar3 = *plVar6;
                if (*(ushort *)(lVar3 + 0x12e) != 0) {
                  uVar11 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar7 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10
                                         ) + 0x4d) * 0x10 + 0x138 + lVar3);
                      goto code_r0x00018071f659;
                    }
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < *(ushort *)(lVar3 + 0x12e));
                }
                puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x00018071f659:
                uStack_48 = uVar1;
                uStack_40 = uVar2;
                (*(code *)*puVar7)(plVar6,&uStack_48,puVar7[1]);
                return lVar5;
              }
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  lVar5 = (*pcVar4)();
  return lVar5;
}

