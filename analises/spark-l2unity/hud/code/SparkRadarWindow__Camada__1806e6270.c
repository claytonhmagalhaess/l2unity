// SparkRadarWindow__Camada__1806e6270 @ 0x1806e6270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkRadarWindow__Camada__1806e6270(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  ushort uVar13;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (cRam00000001834b4090 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkRadarWindow);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b4090 = '\x01';
  }
  lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar7,0);
  if (lVar7 != 0) {
    lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
    uVar9 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    if (lVar8 != 0) {
      FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar8,uVar9);
      plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
      plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
      puVar12 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0,0);
      if (plVar11 != (longlong *)0x0) {
        lVar8 = *plVar11;
        uVar9 = *puVar12;
        uVar1 = *(undefined4 *)(puVar12 + 1);
        if (*(ushort *)(lVar8 + 0x12e) != 0) {
          uVar13 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar12 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) +
                         0x73) * 0x10 + 0x138 + lVar8);
              goto code_r0x0001806e63d7;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(ushort *)(lVar8 + 0x12e));
        }
        puVar12 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x0001806e63d7:
        uStack_88 = uVar9;
        uStack_80 = uVar1;
        (*(code *)*puVar12)(plVar11,&uStack_88,puVar12[1]);
        if (plVar10 != (longlong *)0x0) {
          lVar8 = *plVar10;
          if (*(ushort *)(lVar8 + 0x12e) != 0) {
            uVar13 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar12 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) +
                           0x47) * 0x10 + 0x138 + lVar8);
                goto code_r0x0001806e6459;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < *(ushort *)(lVar8 + 0x12e));
          }
          puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001806e6459:
          uStack_88 = uVar9;
          uStack_80 = uVar1;
          (*(code *)*puVar12)(plVar10,&uStack_88,puVar12[1]);
          plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
          puVar12 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0x43380000,0);
          if (plVar10 != (longlong *)0x0) {
            lVar8 = *plVar10;
            uVar9 = *puVar12;
            uVar1 = *(undefined4 *)(puVar12 + 1);
            if (*(ushort *)(lVar8 + 0x12e) != 0) {
              uVar13 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar12 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) +
                             0xad) * 0x10 + 0x138 + lVar8);
                  goto code_r0x0001806e64f9;
                }
                uVar13 = uVar13 + 1;
              } while (uVar13 < *(ushort *)(lVar8 + 0x12e));
            }
            puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001806e64f9:
            uStack_88 = uVar9;
            uStack_80 = uVar1;
            (*(code *)*puVar12)(plVar10,&uStack_88,puVar12[1]);
            plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
            puVar12 = (undefined8 *)
                      UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0x43480000,0);
            if (plVar10 != (longlong *)0x0) {
              lVar8 = *plVar10;
              uVar9 = *puVar12;
              uVar1 = *(undefined4 *)(puVar12 + 1);
              if (*(ushort *)(lVar8 + 0x12e) != 0) {
                uVar13 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar12 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10)
                               + 0x43) * 0x10 + 0x138 + lVar8);
                    goto code_r0x0001806e6599;
                  }
                  uVar13 = uVar13 + 1;
                } while (uVar13 < *(ushort *)(lVar8 + 0x12e));
              }
              puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001806e6599:
              uStack_88 = uVar9;
              uStack_80 = uVar1;
              (*(code *)*puVar12)(plVar10,&uStack_88,puVar12[1]);
              if (param_2 != 0) {
                plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
                  func_0x000180315660();
                }
                uVar9 = SparkRadarWindow__Tex__1806eaca0(param_2,0);
                puVar12 = (undefined8 *)
                          UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_78,uVar9,0);
                if (plVar10 == (longlong *)0x0) goto DAT_1806e6795;
                lVar8 = *plVar10;
                uVar3 = *puVar12;
                uVar4 = puVar12[1];
                uVar5 = puVar12[2];
                uVar6 = puVar12[3];
                uVar9 = puVar12[4];
                if (*(ushort *)(lVar8 + 0x12e) != 0) {
                  uVar13 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar12 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                          (ulonglong)uVar13 * 0x10) + 0xb) * 0x10 + 0x138 + lVar8);
                      goto code_r0x0001806e6667;
                    }
                    uVar13 = uVar13 + 1;
                  } while (uVar13 < *(ushort *)(lVar8 + 0x12e));
                }
                puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001806e6667:
                uStack_78 = uVar3;
                uStack_70 = uVar4;
                uStack_68 = uVar5;
                uStack_60 = uVar6;
                uStack_58 = uVar9;
                (*(code *)*puVar12)(plVar10,&uStack_78,puVar12[1]);
              }
              UnityEngine_UIElements_VisualElement__set_pickingMode(lVar7,1,0);
              if (*(longlong *)(param_1 + 0x30) != 0) {
                UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x30),lVar7,0);
                return lVar7;
              }
            }
          }
        }
      }
    }
  }
DAT_1806e6795:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  lVar7 = (*pcVar2)();
  return lVar7;
}

