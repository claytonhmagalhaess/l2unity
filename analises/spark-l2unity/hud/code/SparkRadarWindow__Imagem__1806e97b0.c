// SparkRadarWindow__Imagem__1806e97b0 @ 0x1806e97b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow__Imagem__1806e97b0
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 uVar12;
  ushort uVar13;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_30;
  
  if (cRam00000001834b4091 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkRadarWindow);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b4091 = '\x01';
  }
  lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar6,0);
  if (lVar6 != 0) {
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
    uVar8 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    if (lVar7 != 0) {
      FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar7,uVar8);
      plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
      puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,param_3,0);
      if (plVar9 != (longlong *)0x0) {
        lVar7 = *plVar9;
        uVar8 = *puVar10;
        uVar1 = *(undefined4 *)(puVar10 + 1);
        if (*(ushort *)(lVar7 + 0x12e) != 0) {
          uVar13 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar10 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) +
                         0x47) * 0x10 + 0x138 + lVar7);
              goto code_r0x0001806e9909;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
        }
        puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001806e9909:
        uStack_88 = uVar8;
        uStack_80 = uVar1;
        (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]);
        plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
        puVar10 = (undefined8 *)
                  UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,param_4,0);
        if (plVar9 != (longlong *)0x0) {
          lVar7 = *plVar9;
          uVar8 = *puVar10;
          uVar1 = *(undefined4 *)(puVar10 + 1);
          if (*(ushort *)(lVar7 + 0x12e) != 0) {
            uVar13 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar10 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) +
                           0x73) * 0x10 + 0x138 + lVar7);
                goto code_r0x0001806e9999;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
          }
          puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x0001806e9999:
          uStack_88 = uVar8;
          uStack_80 = uVar1;
          (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]);
          plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
          plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
          puVar10 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,param_5,0);
          if (plVar11 != (longlong *)0x0) {
            lVar7 = *plVar11;
            uVar8 = *puVar10;
            uVar1 = *(undefined4 *)(puVar10 + 1);
            if (*(ushort *)(lVar7 + 0x12e) != 0) {
              uVar13 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar10 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) +
                             0x43) * 0x10 + 0x138 + lVar7);
                  goto code_r0x0001806e9a47;
                }
                uVar13 = uVar13 + 1;
              } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
            }
            puVar10 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001806e9a47:
            uStack_88 = uVar8;
            uStack_80 = uVar1;
            (*(code *)*puVar10)(plVar11,&uStack_88,puVar10[1]);
            if (plVar9 != (longlong *)0x0) {
              lVar7 = *plVar9;
              if (*(ushort *)(lVar7 + 0x12e) != 0) {
                uVar13 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar10 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10)
                               + 0xad) * 0x10 + 0x138 + lVar7);
                    goto code_r0x0001806e9ac9;
                  }
                  uVar13 = uVar13 + 1;
                } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
              }
              puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001806e9ac9:
              uStack_88 = uVar8;
              uStack_80 = uVar1;
              (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]);
              plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
              if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
                func_0x000180315660();
              }
              uVar8 = SparkRadarWindow__Tex__1806eaca0(param_2,0);
              puVar10 = (undefined8 *)
                        UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_78,uVar8,0);
              if (plVar9 != (longlong *)0x0) {
                lVar7 = *plVar9;
                uVar12 = *puVar10;
                uVar3 = puVar10[1];
                uVar4 = puVar10[2];
                uVar5 = puVar10[3];
                uVar8 = puVar10[4];
                if (*(ushort *)(lVar7 + 0x12e) != 0) {
                  uVar13 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar10 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                          (ulonglong)uVar13 * 0x10) + 0xb) * 0x10 + 0x138 + lVar7);
                      goto code_r0x0001806e9b87;
                    }
                    uVar13 = uVar13 + 1;
                  } while (uVar13 < *(ushort *)(lVar7 + 0x12e));
                }
                puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001806e9b87:
                uStack_78 = uVar12;
                uStack_70 = uVar3;
                uStack_68 = uVar4;
                uStack_60 = uVar5;
                uStack_58 = uVar8;
                (*(code *)*puVar10)(plVar9,&uStack_78,puVar10[1]);
                UnityEngine_UIElements_VisualElement__set_pickingMode(lVar6,1,0);
                plVar9 = *(longlong **)(param_1 + 0x30);
                if (plVar9 != (longlong *)0x0) {
                  if (lVar6 != 0) {
                    puStack_30 = (undefined1 *)0x1825c42fe;
                    plVar11 = (longlong *)
                              (**(code **)(*plVar9 + 0x9d8))
                                        (plVar9,*(undefined8 *)(*plVar9 + 0x9e0),0);
                    if (plVar11 == (longlong *)0x0) {
                      puStack_30 = (undefined1 *)0x1825c435b;
                      uVar8 = func_0x0001803153a0(TI_System.InvalidOperationException);
                      puStack_30 = (undefined1 *)0x1825c4363;
                      uVar8 = func_0x000180315580(uVar8);
                      puStack_30 = (undefined1 *)0x1825c4372;
                      uVar12 = func_0x0001803153a0(LIT_"\"You can't add directly to this VisualElement. Use hierar...");
                      puStack_30 = (undefined1 *)0x1825c4380;
                      System_InvalidOperationException___ctor(uVar8,uVar12,0);
                      puStack_30 = (undefined1 *)0x1825c438c;
                      uVar12 = func_0x0001803153a0(MD_UnityEngine.UIElements.VisualElement.Add);
                      puStack_30 = (undefined1 *)0x1825c4397;
                      FUN_180315590(uVar8,uVar12);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    if (plVar11 == plVar9) {
                      puStack_30 = &LAB_1825c432e;
                      UnityEngine_UIElements_VisualElement_Hierarchy__Add(&stack0x00000010,lVar6,0);
                    }
                    else {
                      puStack_30 = (undefined1 *)0x1825c4316;
                      UnityEngine_UIElements_VisualElement__Add(plVar11);
                    }
                    *(longlong **)(lVar6 + 0x288) = plVar9;
                    puStack_30 = (undefined1 *)0x1825c4344;
                    func_0x000180314690(lVar6 + 0x288,plVar9);
                  }
                  return;
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
  (*pcVar2)();
  return;
}

