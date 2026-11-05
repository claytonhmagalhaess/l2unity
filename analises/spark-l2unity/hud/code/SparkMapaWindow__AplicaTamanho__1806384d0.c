// SparkMapaWindow__AplicaTamanho__1806384d0 @ 0x1806384d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__AplicaTamanho__1806384d0(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_28;
  undefined4 uStack_20;
  ulonglong uVar7;
  
  if (cRam00000001834b3d2a == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(LIT_"'Large Map'");
    FUN_180315380(LIT_"'Small Map'");
    FUN_180315380(LIT_"'Raid'");
    FUN_180315380(LIT_"'My position'");
    FUN_180315380(LIT_"'Raid Boss'");
    FUN_180315380(LIT_"'Next party member'");
    FUN_180315380(LIT_"'Party'");
    cRam00000001834b3d2a = '\x01';
  }
  if (*(char *)(param_1 + 0x1e0) == '\0') {
    fVar13 = 1.0;
  }
  else {
    fVar13 = 0.5;
  }
  uStack_28 = CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uStack_20 = unaff_XMM7_Dc;
    plVar3 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
    puVar4 = (undefined8 *)
             UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_48,fVar13 * 700.0,0);
    if (plVar3 != (longlong *)0x0) {
      lVar11 = *plVar3;
      uVar8 = 0;
      uVar1 = *puVar4;
      uVar9 = *(undefined4 *)(puVar4 + 1);
      if (*(ushort *)(lVar11 + 0x12e) != 0) {
        uVar7 = uVar8;
        do {
          if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + uVar7 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
            puVar4 = (undefined8 *)
                     ((longlong)(*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + uVar7 * 0x10) + 0xad) *
                      0x10 + 0x138 + lVar11);
            goto code_r0x000180638619;
          }
          uVar6 = (short)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while (uVar6 < *(ushort *)(lVar11 + 0x12e));
      }
      puVar4 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180638619:
      uStack_48 = uVar1;
      uStack_40 = uVar9;
      (*(code *)*puVar4)(plVar3,&uStack_48,puVar4[1]);
      if (*(longlong *)(param_1 + 0x30) != 0) {
        plVar3 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
        puVar4 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_48,fVar13 * 640.0,0);
        if (plVar3 != (longlong *)0x0) {
          lVar11 = *plVar3;
          uVar9 = *(undefined4 *)(puVar4 + 1);
          uVar1 = *puVar4;
          if (*(ushort *)(lVar11 + 0x12e) != 0) {
            uVar7 = uVar8;
            do {
              if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + uVar7 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                puVar4 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + uVar7 * 0x10) + 0x43) * 0x10
                          + 0x138 + lVar11);
                goto code_r0x0001806386c9;
              }
              uVar6 = (short)uVar7 + 1;
              uVar7 = (ulonglong)uVar6;
            } while (uVar6 < *(ushort *)(lVar11 + 0x12e));
          }
          puVar4 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001806386c9:
          uStack_48 = uVar1;
          uStack_40 = uVar9;
          (*(code *)*puVar4)(plVar3,&uStack_48,puVar4[1]);
          if (*(longlong *)(param_1 + 0x1e8) != 0) {
            plVar3 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style
                               (*(longlong *)(param_1 + 0x1e8),0);
            puVar4 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit
                               (&uStack_48,fVar13 * 640.0 - 38.0,0);
            if (plVar3 != (longlong *)0x0) {
              lVar11 = *plVar3;
              uVar1 = *puVar4;
              uVar9 = *(undefined4 *)(puVar4 + 1);
              if (*(ushort *)(lVar11 + 0x12e) != 0) {
                do {
                  if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                  {
                    puVar4 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + uVar8 * 0x10) + 0x43) *
                              0x10 + 0x138 + lVar11);
                    goto SparkMapaWindow__AjustaPainelRaid__180637cb0;
                  }
                  uVar6 = (short)uVar8 + 1;
                  uVar8 = (ulonglong)uVar6;
                } while (uVar6 < *(ushort *)(lVar11 + 0x12e));
              }
              puVar4 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0x43);
SparkMapaWindow__AjustaPainelRaid__180637cb0:
              uStack_48 = uVar1;
              uStack_40 = uVar9;
              (*(code *)*puVar4)(plVar3,&uStack_48,puVar4[1]);
              SparkMapaWindow__TextoDoBotao__180649a90
                        (param_1,*(undefined8 *)(param_1 + 0x1d0),LIT_"'My position'",100,
                         LIT_"'My position'",0x50,0);
              SparkMapaWindow__TextoDoBotao__180649a90
                        (param_1,*(undefined8 *)(param_1 + 0x158),LIT_"'Next party member'",0x8c,
                         LIT_"'Party'",0x32,0);
              SparkMapaWindow__TextoDoBotao__180649a90
                        (param_1,*(undefined8 *)(param_1 + 0x1d8),LIT_"'Raid Boss'",0x50,
                         LIT_"'Raid'",0x2c,0);
              SparkMapaWindow__TextoDoBotao__180649a90
                        (param_1,*(undefined8 *)(param_1 + 0x1f0),LIT_"'Small Map'",0x50,
                         LIT_"'Large Map'",0x48,0);
              if (cRam00000001834b3d2c == '\0') {
                FUN_180315380(TI_UnityEngine.UIElements.IStyle);
                cRam00000001834b3d2c = '\x01';
              }
              if (*(longlong *)(param_1 + 0x1b8) == 0) {
                return;
              }
              if (*(char *)(param_1 + 0x1e0) == '\0') {
                plVar3 = (longlong *)
                         UnityEngine_UIElements_VisualElement__get_style
                                   (*(undefined8 *)(param_1 + 0x1b8));
                puVar4 = (undefined8 *)
                         UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(&uStack_28,2,0);
                if (plVar3 == (longlong *)0x0) {
code_r0x000180637fcf:
                  FUN_1803155d0();
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                lVar11 = *plVar3;
                uVar6 = 0;
                uVar1 = *puVar4;
                uVar9 = *(undefined4 *)(puVar4 + 1);
                uVar5 = 0;
                if (*(ushort *)(lVar11 + 0x12e) != 0) {
                  do {
                    if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar5 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar4 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + (ulonglong)uVar5 * 0x10
                                         ) + 0x47) * 0x10 + 0x138 + lVar11);
                      goto code_r0x000180637d89;
                    }
                    uVar5 = uVar5 + 1;
                  } while (uVar5 < *(ushort *)(lVar11 + 0x12e));
                }
                puVar4 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x000180637d89:
                uStack_28 = uVar1;
                uStack_20 = uVar9;
                (*(code *)*puVar4)(plVar3,&uStack_28,puVar4[1]);
                if (*(longlong *)(param_1 + 0x1b8) == 0) goto code_r0x000180637fcf;
                plVar3 = (longlong *)
                         UnityEngine_UIElements_VisualElement__get_style
                                   (*(longlong *)(param_1 + 0x1b8),0);
                puVar4 = (undefined8 *)
                         UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,0x43870000,0);
                if (plVar3 == (longlong *)0x0) goto code_r0x000180637fcf;
                lVar11 = *plVar3;
                uVar12 = (undefined4)*puVar4;
                uVar14 = (undefined4)((ulonglong)*puVar4 >> 0x20);
                uVar9 = *(undefined4 *)(puVar4 + 1);
                if (*(ushort *)(lVar11 + 0x12e) != 0) {
                  lVar10 = *(longlong *)(lVar11 + 0xb0);
                  do {
                    if (*(longlong *)(lVar10 + (ulonglong)uVar6 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                    goto code_r0x000180637fab;
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < *(ushort *)(lVar11 + 0x12e));
                }
              }
              else {
                plVar3 = (longlong *)
                         UnityEngine_UIElements_VisualElement__get_style
                                   (*(undefined8 *)(param_1 + 0x1b8));
                puVar4 = (undefined8 *)
                         UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,0x40800000,0);
                if (plVar3 == (longlong *)0x0) goto code_r0x000180637fcf;
                lVar11 = *plVar3;
                uVar6 = 0;
                uVar1 = *puVar4;
                uVar9 = *(undefined4 *)(puVar4 + 1);
                if (*(ushort *)(lVar11 + 0x12e) != 0) {
                  uVar5 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar5 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar4 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + (ulonglong)uVar5 * 0x10
                                         ) + 0x47) * 0x10 + 0x138 + lVar11);
                      goto code_r0x000180637ef9;
                    }
                    uVar5 = uVar5 + 1;
                  } while (uVar5 < *(ushort *)(lVar11 + 0x12e));
                }
                puVar4 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x000180637ef9:
                uStack_28 = uVar1;
                uStack_20 = uVar9;
                (*(code *)*puVar4)(plVar3,&uStack_28,puVar4[1]);
                if (*(longlong *)(param_1 + 0x1b8) == 0) goto code_r0x000180637fcf;
                plVar3 = (longlong *)
                         UnityEngine_UIElements_VisualElement__get_style
                                   (*(longlong *)(param_1 + 0x1b8),0);
                puVar4 = (undefined8 *)
                         UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(&uStack_28,2,0);
                if (plVar3 == (longlong *)0x0) goto code_r0x000180637fcf;
                lVar11 = *plVar3;
                uVar12 = (undefined4)*puVar4;
                uVar14 = (undefined4)((ulonglong)*puVar4 >> 0x20);
                uVar9 = *(undefined4 *)(puVar4 + 1);
                if (*(ushort *)(lVar11 + 0x12e) != 0) {
                  lVar10 = *(longlong *)(lVar11 + 0xb0);
                  do {
                    if (*(longlong *)(lVar10 + (ulonglong)uVar6 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                    goto code_r0x000180637fab;
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < *(ushort *)(lVar11 + 0x12e));
                }
              }
              puVar4 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0xad);
              goto code_r0x000180637e26;
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
code_r0x000180637fab:
  puVar4 = (undefined8 *)
           ((longlong)(*(int *)(lVar10 + 8 + (ulonglong)uVar6 * 0x10) + 0xad) * 0x10 + 0x138 +
           lVar11);
code_r0x000180637e26:
  uStack_28 = CONCAT44(uVar14,uVar12);
  uStack_20 = uVar9;
  (*(code *)*puVar4)(plVar3,&uStack_28,puVar4[1]);
  return;
}

