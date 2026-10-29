// SparkMapaWindow__AlternaTamanho__180638100 @ 0x180638100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__AlternaTamanho__180638100(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_28;
  undefined4 uStack_20;
  ulonglong uVar8;
  
  if (cRam00000001834b3d29 == '\0') {
    puStack_40 = &UNK_180638122;
    FUN_180315380(LIT_"'spark.mapa.pequeno'");
    cRam00000001834b3d29 = '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x1e0);
  *(bool *)(param_1 + 0x1e0) = cVar2 == '\0';
  puStack_40 = &UNK_180638151;
  UnityEngine_PlayerPrefs__SetInt(LIT_"'spark.mapa.pequeno'",cVar2 == '\0',0);
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
    fVar14 = 1.0;
  }
  else {
    fVar14 = 0.5;
  }
  uStack_28 = CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uStack_20 = unaff_XMM7_Dc;
    plVar4 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
    puVar5 = (undefined8 *)
             UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_48,fVar14 * 700.0,0);
    if (plVar4 != (longlong *)0x0) {
      lVar12 = *plVar4;
      uVar9 = 0;
      uVar1 = *puVar5;
      uVar10 = *(undefined4 *)(puVar5 + 1);
      if (*(ushort *)(lVar12 + 0x12e) != 0) {
        uVar8 = uVar9;
        do {
          if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
            puVar5 = (undefined8 *)
                     ((longlong)(*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + uVar8 * 0x10) + 0xad) *
                      0x10 + 0x138 + lVar12);
            goto code_r0x000180638619;
          }
          uVar7 = (short)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < *(ushort *)(lVar12 + 0x12e));
      }
      puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180638619:
      puStack_40 = (undefined *)CONCAT44(puStack_40._4_4_,uVar10);
      uStack_48 = uVar1;
      (*(code *)*puVar5)(plVar4,&uStack_48,puVar5[1]);
      if (*(longlong *)(param_1 + 0x30) != 0) {
        plVar4 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
        puVar5 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_48,fVar14 * 640.0,0);
        if (plVar4 != (longlong *)0x0) {
          lVar12 = *plVar4;
          uVar10 = *(undefined4 *)(puVar5 + 1);
          uVar1 = *puVar5;
          if (*(ushort *)(lVar12 + 0x12e) != 0) {
            uVar8 = uVar9;
            do {
              if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                puVar5 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + uVar8 * 0x10) + 0x43) * 0x10
                          + 0x138 + lVar12);
                goto code_r0x0001806386c9;
              }
              uVar7 = (short)uVar8 + 1;
              uVar8 = (ulonglong)uVar7;
            } while (uVar7 < *(ushort *)(lVar12 + 0x12e));
          }
          puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001806386c9:
          puStack_40 = (undefined *)CONCAT44(puStack_40._4_4_,uVar10);
          uStack_48 = uVar1;
          (*(code *)*puVar5)(plVar4,&uStack_48,puVar5[1]);
          if (*(longlong *)(param_1 + 0x1e8) != 0) {
            plVar4 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style
                               (*(longlong *)(param_1 + 0x1e8),0);
            puVar5 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit
                               (&uStack_48,fVar14 * 640.0 - 38.0,0);
            if (plVar4 != (longlong *)0x0) {
              lVar12 = *plVar4;
              uVar1 = *puVar5;
              uVar10 = *(undefined4 *)(puVar5 + 1);
              if (*(ushort *)(lVar12 + 0x12e) != 0) {
                do {
                  if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + uVar9 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                  {
                    puVar5 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + uVar9 * 0x10) + 0x43) *
                              0x10 + 0x138 + lVar12);
                    goto SparkMapaWindow__AjustaPainelRaid__180637cb0;
                  }
                  uVar7 = (short)uVar9 + 1;
                  uVar9 = (ulonglong)uVar7;
                } while (uVar7 < *(ushort *)(lVar12 + 0x12e));
              }
              puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x43);
SparkMapaWindow__AjustaPainelRaid__180637cb0:
              puStack_40 = (undefined *)CONCAT44(puStack_40._4_4_,uVar10);
              uStack_48 = uVar1;
              (*(code *)*puVar5)(plVar4,&uStack_48,puVar5[1]);
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
                plVar4 = (longlong *)
                         UnityEngine_UIElements_VisualElement__get_style
                                   (*(undefined8 *)(param_1 + 0x1b8));
                puVar5 = (undefined8 *)
                         UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(&uStack_28,2,0);
                if (plVar4 == (longlong *)0x0) {
code_r0x000180637fcf:
                  FUN_1803155d0();
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                lVar12 = *plVar4;
                uVar7 = 0;
                uVar1 = *puVar5;
                uVar10 = *(undefined4 *)(puVar5 + 1);
                uVar6 = 0;
                if (*(ushort *)(lVar12 + 0x12e) != 0) {
                  do {
                    if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar6 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar5 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + (ulonglong)uVar6 * 0x10
                                         ) + 0x47) * 0x10 + 0x138 + lVar12);
                      goto code_r0x000180637d89;
                    }
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < *(ushort *)(lVar12 + 0x12e));
                }
                puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x000180637d89:
                uStack_28 = uVar1;
                uStack_20 = uVar10;
                (*(code *)*puVar5)(plVar4,&uStack_28,puVar5[1]);
                if (*(longlong *)(param_1 + 0x1b8) == 0) goto code_r0x000180637fcf;
                plVar4 = (longlong *)
                         UnityEngine_UIElements_VisualElement__get_style
                                   (*(longlong *)(param_1 + 0x1b8),0);
                puVar5 = (undefined8 *)
                         UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,0x43870000,0);
                if (plVar4 == (longlong *)0x0) goto code_r0x000180637fcf;
                lVar12 = *plVar4;
                uVar13 = (undefined4)*puVar5;
                uVar15 = (undefined4)((ulonglong)*puVar5 >> 0x20);
                uVar10 = *(undefined4 *)(puVar5 + 1);
                if (*(ushort *)(lVar12 + 0x12e) != 0) {
                  lVar11 = *(longlong *)(lVar12 + 0xb0);
                  do {
                    if (*(longlong *)(lVar11 + (ulonglong)uVar7 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                    goto code_r0x000180637fab;
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < *(ushort *)(lVar12 + 0x12e));
                }
              }
              else {
                plVar4 = (longlong *)
                         UnityEngine_UIElements_VisualElement__get_style
                                   (*(undefined8 *)(param_1 + 0x1b8));
                puVar5 = (undefined8 *)
                         UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_28,0x40800000,0);
                if (plVar4 == (longlong *)0x0) goto code_r0x000180637fcf;
                lVar12 = *plVar4;
                uVar7 = 0;
                uVar1 = *puVar5;
                uVar10 = *(undefined4 *)(puVar5 + 1);
                if (*(ushort *)(lVar12 + 0x12e) != 0) {
                  uVar6 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar6 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar5 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 + (ulonglong)uVar6 * 0x10
                                         ) + 0x47) * 0x10 + 0x138 + lVar12);
                      goto code_r0x000180637ef9;
                    }
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < *(ushort *)(lVar12 + 0x12e));
                }
                puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x000180637ef9:
                uStack_28 = uVar1;
                uStack_20 = uVar10;
                (*(code *)*puVar5)(plVar4,&uStack_28,puVar5[1]);
                if (*(longlong *)(param_1 + 0x1b8) == 0) goto code_r0x000180637fcf;
                plVar4 = (longlong *)
                         UnityEngine_UIElements_VisualElement__get_style
                                   (*(longlong *)(param_1 + 0x1b8),0);
                puVar5 = (undefined8 *)
                         UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(&uStack_28,2,0);
                if (plVar4 == (longlong *)0x0) goto code_r0x000180637fcf;
                lVar12 = *plVar4;
                uVar13 = (undefined4)*puVar5;
                uVar15 = (undefined4)((ulonglong)*puVar5 >> 0x20);
                uVar10 = *(undefined4 *)(puVar5 + 1);
                if (*(ushort *)(lVar12 + 0x12e) != 0) {
                  lVar11 = *(longlong *)(lVar12 + 0xb0);
                  do {
                    if (*(longlong *)(lVar11 + (ulonglong)uVar7 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                    goto code_r0x000180637fab;
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < *(ushort *)(lVar12 + 0x12e));
                }
              }
              puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0xad);
              goto code_r0x000180637e26;
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
code_r0x000180637fab:
  puVar5 = (undefined8 *)
           ((longlong)(*(int *)(lVar11 + 8 + (ulonglong)uVar7 * 0x10) + 0xad) * 0x10 + 0x138 +
           lVar12);
code_r0x000180637e26:
  uStack_28 = CONCAT44(uVar15,uVar13);
  uStack_20 = uVar10;
  (*(code *)*puVar5)(plVar4,&uStack_28,puVar5[1]);
  return;
}

