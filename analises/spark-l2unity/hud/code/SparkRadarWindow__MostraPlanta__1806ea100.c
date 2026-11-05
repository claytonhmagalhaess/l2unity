// SparkRadarWindow__MostraPlanta__1806ea100 @ 0x1806ea100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow__MostraPlanta__1806ea100(longlong param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  byte bVar3;
  char cVar4;
  undefined2 uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined2 auStackX_8 [4];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  if (cRam00000001834b409f == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkRadarWindow);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"''");
    cRam00000001834b409f = '\x01';
  }
  *(longlong *)(param_1 + 0x1c8) = param_3;
  func_0x000180314690(param_1 + 0x1c8,param_3);
  uVar11 = *(undefined8 *)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e0) = param_2;
  func_0x000180314690(param_1 + 0x1e0,param_2);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  bVar3 = UnityEngine_Object__op_Inequality(param_2,0,0);
  lVar9 = *(longlong *)(param_1 + 0x1b0);
  if (lVar9 == 0) goto code_r0x0001806ea77a;
  if (bVar3 == 0) {
    plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
    puVar7 = (undefined4 *)UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_88,3,0);
    if (plVar6 == (longlong *)0x0) goto code_r0x0001806ea77a;
    lVar9 = *plVar6;
    uVar16 = *puVar7;
    uVar17 = puVar7[1];
    uVar18 = puVar7[2];
    uVar19 = puVar7[3];
    uVar20 = puVar7[4];
    uVar21 = puVar7[5];
    uVar22 = puVar7[6];
    uVar23 = puVar7[7];
    uVar24 = (undefined4)*(undefined8 *)(puVar7 + 8);
    uVar25 = (undefined4)((ulonglong)*(undefined8 *)(puVar7 + 8) >> 0x20);
    uVar13 = 0;
    if (*(ushort *)(lVar9 + 0x12e) != 0) {
      lVar12 = *(longlong *)(lVar9 + 0xb0);
      do {
        if (*(longlong *)(lVar12 + (ulonglong)uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        goto code_r0x0001806ea409;
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(ushort *)(lVar9 + 0x12e));
    }
  }
  else {
    plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
    puVar7 = (undefined4 *)UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_88,param_2,0)
    ;
    if (plVar6 == (longlong *)0x0) goto code_r0x0001806ea77a;
    lVar9 = *plVar6;
    uVar16 = *puVar7;
    uVar17 = puVar7[1];
    uVar18 = puVar7[2];
    uVar19 = puVar7[3];
    uVar20 = puVar7[4];
    uVar21 = puVar7[5];
    uVar22 = puVar7[6];
    uVar23 = puVar7[7];
    uVar24 = (undefined4)*(undefined8 *)(puVar7 + 8);
    uVar25 = (undefined4)((ulonglong)*(undefined8 *)(puVar7 + 8) >> 0x20);
    uVar13 = 0;
    if (*(ushort *)(lVar9 + 0x12e) != 0) {
      lVar12 = *(longlong *)(lVar9 + 0xb0);
      do {
        if (*(longlong *)(lVar12 + (ulonglong)uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        goto code_r0x0001806ea409;
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(ushort *)(lVar9 + 0x12e));
    }
  }
  puVar8 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001806ea289:
  uStack_68 = CONCAT44(uVar25,uVar24);
  uStack_88 = uVar16;
  uStack_84 = uVar17;
  uStack_80 = uVar18;
  uStack_7c = uVar19;
  uStack_78 = uVar20;
  uStack_74 = uVar21;
  uStack_70 = uVar22;
  uStack_6c = uVar23;
  (*(code *)*puVar8)(plVar6,&uStack_88,puVar8[1]);
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x1b0),0);
    uVar10 = FUN_180eb5810(bVar3 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar9 != 0) {
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar9,uVar10);
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xa8),0);
        uVar10 = FUN_180eb5810(bVar3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar9 != 0) {
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar9,uVar10);
          if (*(longlong *)(param_1 + 0x90) != 0) {
            plVar6 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style
                               (*(longlong *)(param_1 + 0x90),0);
            if (bVar3 == 0) {
              if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
                func_0x000180315660(TI_SparkRadarWindow);
              }
              lVar9 = *(longlong *)(TI_SparkRadarWindow + 0xb8);
              uVar16 = *(undefined4 *)(lVar9 + 0x10);
              uVar17 = *(undefined4 *)(lVar9 + 0x14);
              uVar18 = *(undefined4 *)(lVar9 + 0x18);
              uVar19 = *(undefined4 *)(lVar9 + 0x1c);
            }
            else {
              if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
                func_0x000180315660(TI_SparkRadarWindow);
              }
              lVar9 = *(longlong *)(TI_SparkRadarWindow + 0xb8);
              uVar16 = *(undefined4 *)(lVar9 + 0x3c);
              uVar17 = *(undefined4 *)(lVar9 + 0x40);
              uVar18 = *(undefined4 *)(lVar9 + 0x44);
              uVar19 = *(undefined4 *)(lVar9 + 0x48);
            }
            uStack_a8 = CONCAT44(uVar17,uVar16);
            uStack_a0 = CONCAT44(uVar19,uVar18);
            puVar8 = (undefined8 *)
                     UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_88,&uStack_a8,0);
            if (plVar6 != (longlong *)0x0) {
              lVar9 = *plVar6;
              uVar10 = *puVar8;
              uVar2 = puVar8[1];
              uVar16 = *(undefined4 *)(puVar8 + 2);
              if (*(ushort *)(lVar9 + 0x12e) != 0) {
                uVar14 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + uVar14 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                  {
                    puVar8 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + uVar14 * 0x10) + 9) * 0x10
                              + 0x138 + lVar9);
                    goto code_r0x0001806ea4c9;
                  }
                  uVar13 = (short)uVar14 + 1;
                  uVar14 = (ulonglong)uVar13;
                } while (uVar13 < *(ushort *)(lVar9 + 0x12e));
              }
              puVar8 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,9);
code_r0x0001806ea4c9:
              uStack_a8 = uVar10;
              uStack_a0 = uVar2;
              uStack_98 = uVar16;
              (*(code *)*puVar8)(plVar6,&uStack_a8,puVar8[1]);
              *(undefined4 *)(param_1 + 0x1e8) = 0xbf800000;
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
              if (cVar4 != '\0') {
                if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                  func_0x000180315660();
                }
                cVar4 = UnityEngine_Object__op_Inequality(uVar11,param_2,0);
                if (cVar4 != '\0') {
                  if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  cVar4 = SparkRadarWindow__MapaUsaPlanta__1806e9fc0(uVar11,0);
                  if (cVar4 == '\0') {
                    UnityEngine_Resources__UnloadAsset(uVar11,0);
                  }
                }
              }
              lVar9 = LIT_"''";
              if (bVar3 != 0) {
                SparkRadarWindow__LiberaTiles__1806e9df0(param_1,0);
                if (param_3 == 0) goto code_r0x0001806ea77a;
                lVar12 = *(longlong *)(param_3 + 0x10);
                if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
                  func_0x000180315660();
                }
                if (cRam00000001834b40a1 == '\0') {
                  FUN_180315380(LIT_"''");
                  FUN_180315380(LIT_"'F'");
                  cRam00000001834b40a1 = '\x01';
                }
                auStackX_8[0] = 0;
                cVar4 = func_0x000181707e50(lVar12,0);
                lVar9 = LIT_"''";
                if (cVar4 == '\0') {
                  iVar15 = 0;
                  if (lVar12 == 0) {
                    FUN_1803155d0();
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  for (; iVar15 < *(int *)(lVar12 + 0x10); iVar15 = iVar15 + 1) {
                    uVar5 = System_String__get_Chars(lVar12,iVar15);
                    auStackX_8[0] = uVar5;
                    if (*(int *)(_DAT_1834c62a8 + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    cVar4 = System_Char__IsDigit(uVar5,0);
                    if (cVar4 != '\0') {
                      if (*(int *)(_DAT_1834c62a8 + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      uVar11 = System_Char__ToString(auStackX_8,0);
                      lVar9 = System_String__Concat(uVar11,LIT_"'F'",0);
                      goto code_r0x0001806ea6c1;
                    }
                  }
                  iVar15 = func_0x0001817079f0(lVar12,0x20,0);
                  lVar9 = lVar12;
                  if (0 < iVar15) {
                    lVar9 = System_String__Substring(lVar12,0,iVar15,0);
                  }
                }
              }
code_r0x0001806ea6c1:
              plVar6 = *(longlong **)(param_1 + 0x1b8);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 0xe48))(plVar6,lVar9,*(undefined8 *)(*plVar6 + 0xe50));
                if (((*(longlong *)(param_1 + 0x1b8) != 0) &&
                    (lVar12 = UnityEngine_UIElements_VisualElement__get_style
                                        (*(longlong *)(param_1 + 0x1b8),0), lVar9 != 0)) &&
                   (uVar11 = FUN_180eb5810(*(int *)(lVar9 + 0x10) < 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit), lVar12 != 0))
                {
                  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar12,uVar11);
                  *(undefined4 *)(param_1 + 0x154) = 0;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x0001806ea77a:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
code_r0x0001806ea409:
  puVar8 = (undefined8 *)
           ((longlong)(*(int *)(lVar12 + 8 + (ulonglong)uVar13 * 0x10) + 0xb) * 0x10 + 0x138 + lVar9
           );
  goto code_r0x0001806ea289;
}

