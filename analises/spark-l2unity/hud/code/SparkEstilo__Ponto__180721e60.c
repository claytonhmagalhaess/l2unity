// SparkEstilo__Ponto__180721e60 @ 0x180721e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkEstilo__Ponto__180721e60(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  ushort uVar12;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_68 [64];
  
  if (cRam00000001834b41fc == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b41fc = '\x01';
  }
  lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar4,0);
  if (lVar4 != 0) {
    plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar6 != (longlong *)0x0) {
      lVar10 = *plVar6;
      uVar11 = *puVar7;
      uVar1 = *(undefined4 *)(puVar7 + 1);
      if (*(ushort *)(lVar10 + 0x12e) != 0) {
        uVar12 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar7 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0x43)
                      * 0x10 + 0x138 + lVar10);
            goto code_r0x000180721f87;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ushort *)(lVar10 + 0x12e));
      }
      puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180721f87:
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
      uStack_88 = uVar11;
      (*(code *)*puVar7)(plVar6,&uStack_88,puVar7[1]);
      if (plVar5 != (longlong *)0x0) {
        lVar10 = *plVar5;
        if (*(ushort *)(lVar10 + 0x12e) != 0) {
          uVar12 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar7 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) +
                        0xad) * 0x10 + 0x138 + lVar10);
              goto code_r0x000180721ff9;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(ushort *)(lVar10 + 0x12e));
        }
        puVar7 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180721ff9:
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
        uStack_88 = uVar11;
        (*(code *)*puVar7)(plVar5,&uStack_88,puVar7[1]);
        plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        puVar7 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,(float)param_2 * 0.5,0);
        if (plVar9 != (longlong *)0x0) {
          lVar10 = *plVar9;
          uVar11 = *puVar7;
          uVar1 = *(undefined4 *)(puVar7 + 1);
          if (*(ushort *)(lVar10 + 0x12e) != 0) {
            uVar12 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar7 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) +
                          0x19) * 0x10 + 0x138 + lVar10);
                goto code_r0x0001807220c7;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < *(ushort *)(lVar10 + 0x12e));
          }
          puVar7 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x19);
code_r0x0001807220c7:
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
          uStack_88 = uVar11;
          (*(code *)*puVar7)(plVar9,&uStack_88,puVar7[1]);
          if (plVar8 != (longlong *)0x0) {
            lVar10 = *plVar8;
            if (*(ushort *)(lVar10 + 0x12e) != 0) {
              uVar12 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar7 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) +
                            0x17) * 0x10 + 0x138 + lVar10);
                  goto code_r0x000180722139;
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < *(ushort *)(lVar10 + 0x12e));
            }
            puVar7 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x17);
code_r0x000180722139:
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
            uStack_88 = uVar11;
            (*(code *)*puVar7)(plVar8,&uStack_88,puVar7[1]);
            if (plVar6 != (longlong *)0x0) {
              lVar10 = *plVar6;
              if (*(ushort *)(lVar10 + 0x12e) != 0) {
                uVar12 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar7 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10)
                              + 0x29) * 0x10 + 0x138 + lVar10);
                    goto code_r0x0001807221a9;
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < *(ushort *)(lVar10 + 0x12e));
              }
              puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x29);
code_r0x0001807221a9:
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
              uStack_88 = uVar11;
              (*(code *)*puVar7)(plVar6,&uStack_88,puVar7[1]);
              if (plVar5 != (longlong *)0x0) {
                lVar10 = *plVar5;
                if (*(ushort *)(lVar10 + 0x12e) != 0) {
                  uVar12 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar7 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 +
                                         (ulonglong)uVar12 * 0x10) + 0x27) * 0x10 + 0x138 + lVar10);
                      goto code_r0x000180722219;
                    }
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < *(ushort *)(lVar10 + 0x12e));
                }
                puVar7 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x27);
code_r0x000180722219:
                uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
                uStack_88 = uVar11;
                (*(code *)*puVar7)(plVar5,&uStack_88,puVar7[1]);
                plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                uStack_88 = *param_1;
                uStack_80 = param_1[1];
                puVar7 = (undefined8 *)
                         UnityEngine_UIElements_StyleColor__op_Implicit(auStack_68,&uStack_88,0);
                if (plVar5 != (longlong *)0x0) {
                  lVar10 = *plVar5;
                  uVar11 = *puVar7;
                  uVar3 = puVar7[1];
                  uVar1 = *(undefined4 *)(puVar7 + 2);
                  if (*(ushort *)(lVar10 + 0x12e) != 0) {
                    uVar12 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar7 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 +
                                           (ulonglong)uVar12 * 0x10) + 9) * 0x10 + 0x138 + lVar10);
                        goto code_r0x0001807222b9;
                      }
                      uVar12 = uVar12 + 1;
                    } while (uVar12 < *(ushort *)(lVar10 + 0x12e));
                  }
                  puVar7 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,9);
code_r0x0001807222b9:
                  uStack_88 = uVar11;
                  uStack_80 = uVar3;
                  uStack_78 = uVar1;
                  (*(code *)*puVar7)(plVar5,&uStack_88,puVar7[1]);
                  lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
                  uVar11 = func_0x000182601c10(0,0);
                  if (lVar10 != 0) {
                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar10,uVar11);
                    UnityEngine_UIElements_VisualElement__set_pickingMode(lVar4,1,0);
                    return lVar4;
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
  lVar4 = (*pcVar2)();
  return lVar4;
}

