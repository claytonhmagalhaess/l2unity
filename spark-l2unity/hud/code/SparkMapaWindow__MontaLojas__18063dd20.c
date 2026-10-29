// SparkMapaWindow__MontaLojas__18063dd20 @ 0x18063dd20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__MontaLojas__18063dd20(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  ushort uVar19;
  ushort uVar20;
  uint uVar21;
  float fVar22;
  longlong *plStack_238;
  undefined8 uStack_230;
  longlong lStack_228;
  longlong lStack_220;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [112];
  
  if (cRam00000001834b3d40 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.JsonUtility.FromJson<SparkMapaWindow.ListaDeLojas>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.TextAsset>);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Data/UI/Assets/Mapa/spark_lojas'");
    FUN_180315380(LIT_"'SparkMapaWindow: sem Data/UI/Assets/Mapa/spark_lojas.jso...");
    FUN_180315380(LIT_"'Data/UI/Assets/Mapa/spark_lojas_icones'");
    cRam00000001834b3d40 = '\x01';
  }
  if (*(int *)(TI_SparkArte + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar10 = FUN_180a90ae0(LIT_"'Data/UI/Assets/Mapa/spark_lojas'",MR_SparkArte.Load<UnityEngine.TextAsset>);
  plVar11 = (longlong *)FUN_180a90ae0(LIT_"'Data/UI/Assets/Mapa/spark_lojas_icones'",MR_SparkArte.Load<UnityEngine.Texture2D>);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar8 = UnityEngine_Object__op_Equality(lVar10,0,0);
  if (cVar8 == '\0') {
    plStack_238 = plVar11;
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar8 = UnityEngine_Object__op_Equality(plVar11,0,0);
    if (cVar8 == '\0') {
      uVar21 = 0;
      if (lVar10 == 0) {
        FUN_1803155d0();
      }
      else {
        uVar12 = UnityEngine_TextAsset__ToString(lVar10,0);
        lStack_228 = FUN_180a18af0(uVar12,MR_UnityEngine.JsonUtility.FromJson<SparkMapaWindow.ListaDeLojas>);
        if (lStack_228 == 0) {
          return;
        }
        if (*(longlong *)(lStack_228 + 0x18) == 0) {
          return;
        }
        if (*(int *)(lStack_228 + 0x10) < 1) {
          return;
        }
        if (*(int *)(lStack_228 + 0x14) < 1) {
          return;
        }
        lStack_220 = *(longlong *)(lStack_228 + 0x18);
        fVar22 = 24.0 / (float)*(int *)(lStack_228 + 0x14);
        while( true ) {
          if (*(int *)(lStack_220 + 0x18) <= (int)uVar21) {
            return;
          }
          if (*(uint *)(lStack_220 + 0x18) <= uVar21) break;
          plStack_238 = *(longlong **)(lStack_220 + 0x20 + (longlong)(int)uVar21 * 8);
          lVar10 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
          UnityEngine_UIElements_VisualElement___ctor(lVar10,0);
          if (lVar10 == 0) {
code_r0x00018063ecc2:
            FUN_1803155d0();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar13 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
          uVar12 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
          if (lVar13 == 0) goto code_r0x00018063ecc2;
          FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar13,uVar12);
          plVar14 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
          plVar15 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
          puVar16 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_118);
          if (plVar15 == (longlong *)0x0) goto code_r0x00018063ecc2;
          uVar12 = *puVar16;
          uVar1 = *(undefined4 *)(puVar16 + 1);
          lVar13 = *plVar15;
          uVar20 = 0;
          if (*(ushort *)(lVar13 + 0x12e) != 0) {
            uVar19 = uVar20;
            do {
              if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar16 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) +
                           0x43) * 0x10 + 0x138 + lVar13);
                goto code_r0x00018063e0f9;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(lVar13 + 0x12e));
          }
          puVar16 = (undefined8 *)FUN_180312860(plVar15,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018063e0f9:
          uStack_208 = uVar12;
          uStack_200 = uVar1;
          (*(code *)*puVar16)(plVar15,&uStack_208,puVar16[1]);
          if (plVar14 == (longlong *)0x0) goto code_r0x00018063ecc2;
          lVar13 = *plVar14;
          if (*(ushort *)(lVar13 + 0x12e) != 0) {
            uVar19 = uVar20;
            do {
              if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar16 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) +
                           0xad) * 0x10 + 0x138 + lVar13);
                goto code_r0x00018063e169;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(lVar13 + 0x12e));
          }
          puVar16 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018063e169:
          uStack_1f8 = uVar12;
          uStack_1f0 = uVar1;
          (*(code *)*puVar16)(plVar14,&uStack_1f8,puVar16[1]);
          UnityEngine_UIElements_VisualElement__set_pickingMode(lVar10,1,0);
          lVar13 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
          UnityEngine_UIElements_VisualElement___ctor(lVar13,0);
          if (lVar13 == 0) goto code_r0x00018063ecc2;
          lVar17 = UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
          uVar12 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
          if (lVar17 == 0) goto code_r0x00018063ecc2;
          FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar17,uVar12);
          plVar14 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
          plVar15 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
          puVar16 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_108);
          if (plVar15 == (longlong *)0x0) goto code_r0x00018063ecc2;
          uVar12 = *puVar16;
          uVar1 = *(undefined4 *)(puVar16 + 1);
          lVar17 = *plVar15;
          if (*(ushort *)(lVar17 + 0x12e) != 0) {
            uVar19 = uVar20;
            do {
              if (*(longlong *)(*(longlong *)(lVar17 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar16 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar17 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) +
                           0x73) * 0x10 + 0x138 + lVar17);
                goto code_r0x00018063e289;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(lVar17 + 0x12e));
          }
          puVar16 = (undefined8 *)FUN_180312860(plVar15,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x00018063e289:
          uStack_1e8 = uVar12;
          uStack_1e0 = uVar1;
          (*(code *)*puVar16)(plVar15,&uStack_1e8,puVar16[1]);
          if (plVar14 == (longlong *)0x0) goto code_r0x00018063ecc2;
          lVar17 = *plVar14;
          if (*(ushort *)(lVar17 + 0x12e) != 0) {
            uVar19 = uVar20;
            do {
              if (*(longlong *)(*(longlong *)(lVar17 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar16 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar17 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) +
                           0x47) * 0x10 + 0x138 + lVar17);
                goto code_r0x00018063e2f9;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(lVar17 + 0x12e));
          }
          puVar16 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x00018063e2f9:
          uStack_1d8 = uVar12;
          uStack_1d0 = uVar1;
          (*(code *)*puVar16)(plVar14,&uStack_1d8,puVar16[1]);
          plVar14 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
          plVar15 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
          puVar16 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_f8);
          if (plVar15 == (longlong *)0x0) goto code_r0x00018063ecc2;
          uVar12 = *puVar16;
          uVar1 = *(undefined4 *)(puVar16 + 1);
          lVar17 = *plVar15;
          if (*(ushort *)(lVar17 + 0x12e) != 0) {
            uVar19 = uVar20;
            do {
              if (*(longlong *)(*(longlong *)(lVar17 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar16 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar17 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) +
                           0x43) * 0x10 + 0x138 + lVar17);
                goto code_r0x00018063e3a9;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(lVar17 + 0x12e));
          }
          puVar16 = (undefined8 *)FUN_180312860(plVar15,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018063e3a9:
          uStack_1c8 = uVar12;
          uStack_1c0 = uVar1;
          (*(code *)*puVar16)(plVar15,&uStack_1c8,puVar16[1]);
          if (plVar14 == (longlong *)0x0) goto code_r0x00018063ecc2;
          lVar17 = *plVar14;
          if (*(ushort *)(lVar17 + 0x12e) != 0) {
            uVar19 = uVar20;
            do {
              if (*(longlong *)(*(longlong *)(lVar17 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar16 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar17 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) +
                           0xad) * 0x10 + 0x138 + lVar17);
                goto code_r0x00018063e429;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(lVar17 + 0x12e));
          }
          puVar16 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018063e429:
          uStack_1b8 = uVar12;
          uStack_1b0 = uVar1;
          (*(code *)*puVar16)(plVar14,&uStack_1b8,puVar16[1]);
          plVar14 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
          uVar12 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit);
          if (plVar14 == (longlong *)0x0) goto code_r0x00018063ecc2;
          lVar17 = *plVar14;
          if (*(ushort *)(lVar17 + 0x12e) != 0) {
            uVar19 = uVar20;
            do {
              if (*(longlong *)(*(longlong *)(lVar17 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar16 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar17 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) +
                           0x5d) * 0x10 + 0x138 + lVar17);
                goto code_r0x00018063e4c9;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(lVar17 + 0x12e));
          }
          puVar16 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0x5d);
code_r0x00018063e4c9:
          (*(code *)*puVar16)(plVar14,uVar12,puVar16[1]);
          UnityEngine_UIElements_VisualElement__set_pickingMode(lVar13,1,0);
          lVar17 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
          UnityEngine_UIElements_VisualElement___ctor(lVar17,0);
          if (lVar17 == 0) goto code_r0x00018063ecc2;
          lVar18 = UnityEngine_UIElements_VisualElement__get_style(lVar17,0);
          uVar12 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
          if (lVar18 == 0) goto code_r0x00018063ecc2;
          FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar18,uVar12);
          plVar14 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar17,0);
          if (plVar11 == (longlong *)0x0) goto code_r0x00018063ecc2;
          iVar9 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
          puVar16 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit
                              (auStack_e8,(float)iVar9 * fVar22,0);
          if (plVar14 == (longlong *)0x0) goto code_r0x00018063ecc2;
          uVar12 = *puVar16;
          uVar1 = *(undefined4 *)(puVar16 + 1);
          lVar18 = *plVar14;
          if (*(ushort *)(lVar18 + 0x12e) != 0) {
            uVar19 = uVar20;
            do {
              if (*(longlong *)(*(longlong *)(lVar18 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar16 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar18 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) +
                           0xad) * 0x10 + 0x138 + lVar18);
                goto code_r0x00018063e5f9;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(lVar18 + 0x12e));
          }
          puVar16 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018063e5f9:
          uStack_1a8 = uVar12;
          uStack_1a0 = uVar1;
          (*(code *)*puVar16)(plVar14,&uStack_1a8,puVar16[1]);
          plVar14 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar17,0);
          iVar9 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
          puVar16 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit
                              (auStack_d8,(float)iVar9 * fVar22,0);
          if (plVar14 == (longlong *)0x0) goto code_r0x00018063ecc2;
          uVar12 = *puVar16;
          uVar1 = *(undefined4 *)(puVar16 + 1);
          lVar18 = *plVar14;
          if (*(ushort *)(lVar18 + 0x12e) != 0) {
            uVar19 = uVar20;
            do {
              if (*(longlong *)(*(longlong *)(lVar18 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar16 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar18 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) +
                           0x43) * 0x10 + 0x138 + lVar18);
                goto code_r0x00018063e6b9;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(lVar18 + 0x12e));
          }
          puVar16 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018063e6b9:
          uStack_198 = uVar12;
          uStack_190 = uVar1;
          (*(code *)*puVar16)(plVar14,&uStack_198,puVar16[1]);
          plVar14 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar17,0);
          lVar18 = lStack_228;
          if ((plStack_238 == (longlong *)0x0) ||
             (puVar16 = (undefined8 *)
                        UnityEngine_UIElements_StyleLength__op_Implicit
                                  (auStack_c8,
                                   (float)-(((int)plStack_238[5] % *(int *)(lStack_228 + 0x10)) *
                                           *(int *)(lStack_228 + 0x14)) * fVar22,0),
             plVar14 == (longlong *)0x0)) goto code_r0x00018063ecc2;
          uVar12 = *puVar16;
          uVar1 = *(undefined4 *)(puVar16 + 1);
          lVar2 = *plVar14;
          if (*(ushort *)(lVar2 + 0x12e) != 0) {
            uVar19 = uVar20;
            do {
              if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar16 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) +
                           0x47) * 0x10 + 0x138 + lVar2);
                goto code_r0x00018063e789;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(lVar2 + 0x12e));
          }
          puVar16 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x00018063e789:
          uStack_188 = uVar12;
          uStack_180 = uVar1;
          (*(code *)*puVar16)(plVar14,&uStack_188,puVar16[1]);
          plVar14 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar17,0);
          puVar16 = (undefined8 *)
                    UnityEngine_UIElements_StyleLength__op_Implicit
                              (auStack_b8,
                               (longlong)(int)plStack_238[5] % (longlong)*(int *)(lVar18 + 0x10) &
                               0xffffffff,0);
          if (plVar14 == (longlong *)0x0) goto code_r0x00018063ecc2;
          uVar12 = *puVar16;
          uVar1 = *(undefined4 *)(puVar16 + 1);
          lVar18 = *plVar14;
          if (*(ushort *)(lVar18 + 0x12e) != 0) {
            uVar19 = uVar20;
            do {
              if (*(longlong *)(*(longlong *)(lVar18 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar16 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar18 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) +
                           0x73) * 0x10 + 0x138 + lVar18);
                goto code_r0x00018063e849;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(lVar18 + 0x12e));
          }
          puVar16 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x00018063e849:
          uStack_178 = uVar12;
          uStack_170 = uVar1;
          (*(code *)*puVar16)(plVar14,&uStack_178,puVar16[1]);
          plVar14 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar17,0);
          puVar16 = (undefined8 *)
                    UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_148,plVar11,0);
          if (plVar14 == (longlong *)0x0) goto code_r0x00018063ecc2;
          uVar4 = *puVar16;
          uVar5 = puVar16[1];
          uVar6 = puVar16[2];
          uVar7 = puVar16[3];
          uVar12 = puVar16[4];
          lVar18 = *plVar14;
          if (*(ushort *)(lVar18 + 0x12e) != 0) {
            uVar19 = uVar20;
            do {
              if (*(longlong *)(*(longlong *)(lVar18 + 0xb0) + (ulonglong)uVar19 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar16 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar18 + 0xb0) + 8 + (ulonglong)uVar19 * 0x10) +
                           0xb) * 0x10 + 0x138 + lVar18);
                goto code_r0x00018063e8f9;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < *(ushort *)(lVar18 + 0x12e));
          }
          puVar16 = (undefined8 *)FUN_180312860(plVar14,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x00018063e8f9:
          uStack_148 = uVar4;
          uStack_140 = uVar5;
          uStack_138 = uVar6;
          uStack_130 = uVar7;
          uStack_128 = uVar12;
          (*(code *)*puVar16)(plVar14,&uStack_148,puVar16[1]);
          UnityEngine_UIElements_VisualElement__set_pickingMode(lVar17,1,0);
          UnityEngine_UIElements_VisualElement__Add(lVar13,lVar17,0);
          UnityEngine_UIElements_VisualElement__Add(lVar10,lVar13,0);
          plVar14 = plStack_238;
          lVar13 = plStack_238[3];
          if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
            func_0x000180315660(TI_SparkMapaWindow);
          }
          plStack_238 = *(longlong **)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x58);
          uStack_230 = *(undefined8 *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x60);
          lVar13 = SparkMapaWindow__Rotulo__180648b00(lVar13,0xb,&plStack_238,0);
          if (lVar13 == 0) goto code_r0x00018063ecc2;
          plVar15 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar13,0);
          puVar16 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a8);
          if (plVar15 == (longlong *)0x0) goto code_r0x00018063ecc2;
          uVar12 = *puVar16;
          uVar1 = *(undefined4 *)(puVar16 + 1);
          lVar17 = *plVar15;
          if (*(ushort *)(lVar17 + 0x12e) != 0) {
            do {
              if (*(longlong *)(*(longlong *)(lVar17 + 0xb0) + (ulonglong)uVar20 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar16 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar17 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10) +
                           0x47) * 0x10 + 0x138 + lVar17);
                goto code_r0x00018063ea29;
              }
              uVar20 = uVar20 + 1;
            } while (uVar20 < *(ushort *)(lVar17 + 0x12e));
          }
          puVar16 = (undefined8 *)FUN_180312860(plVar15,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x00018063ea29:
          uStack_168 = uVar12;
          uStack_160 = uVar1;
          (*(code *)*puVar16)(plVar15,&uStack_168,puVar16[1]);
          UnityEngine_UIElements_VisualElement__Add(lVar10,lVar13,0);
          UnityEngine_UIElements_VisualElement__set_userData(lVar10,plVar14,0);
          if (*(longlong *)(param_1 + 0x90) == 0) goto code_r0x00018063ecc2;
          UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x90),lVar10,0);
          uVar21 = uVar21 + 1;
        }
      }
      FUN_1803155c0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
    func_0x000180315660();
  }
  UnityEngine_Debug__LogWarning(LIT_"'SparkMapaWindow: sem Data/UI/Assets/Mapa/spark_lojas.jso...",0);
  return;
}

