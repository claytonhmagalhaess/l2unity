// SparkQuestHud__LateUpdate__1806b1120 @ 0x1806b1120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkQuestHud__LateUpdate__1806b1120(longlong param_1)

{
  float fVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uStackX_8;
  undefined8 uStackX_18;
  float fStackX_20;
  undefined8 uStack_148;
  float fStack_140;
  ulonglong uStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  undefined4 uStack_f0;
  undefined1 auStack_e8 [192];
  
  if (cRam00000001834b3fe0 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkQuests);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'{0}  ({1})'");
    cRam00000001834b3fe0 = '\x01';
  }
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  lVar6 = UnityEngine_Camera__get_main(0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(lVar6,0,0);
  if (cVar4 == '\0') {
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    uVar9 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Equality(uVar9,0,0);
    if (cVar4 != '\0') goto code_r0x0001806b1a1e;
    if (*(longlong *)(param_1 + 0x30) == 0) goto code_r0x0001806b1a63;
    lVar7 = func_0x0001825d76c0(*(longlong *)(param_1 + 0x30),0);
    if (lVar7 == 0) goto code_r0x0001806b1a1e;
    if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = SparkQuests__AlvoDoLocal(&uStack_120,&uStack_110,0);
    if (cVar4 == '\0') goto code_r0x0001806b1a1e;
    lVar7 = FUN_1804169f0(0);
    if ((lVar7 == 0) || (lVar7 = UnityEngine_Component__get_transform(lVar7,0), lVar7 == 0))
    goto code_r0x0001806b1a63;
    pfVar8 = (float *)UnityEngine_Transform__get_position(&uStack_148,lVar7,0);
    fVar18 = 0.0;
    fVar21 = *pfVar8;
    fVar17 = pfVar8[2];
    fVar19 = uStack_120._4_4_ / 52.5 - fVar21;
    fVar20 = (float)uStack_120 / 52.5 - fVar17;
    uStackX_8 = CONCAT44(uStackX_8._4_4_,pfVar8[1]);
    uStack_138 = (ulonglong)(uint)fVar19;
    uStack_130 = CONCAT44(uStack_130._4_4_,fVar20);
    fStackX_20 = (float)FUN_18043b850(&uStack_138,0);
    fStackX_20 = fStackX_20 * 52.5;
    if (fStackX_20 < 300.0) {
      if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b33d2 == '\0') {
        FUN_180315380(TI_SparkQuests);
        cRam00000001834b33d2 = '\x01';
      }
      if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (*(longlong *)(*(longlong *)(TI_SparkQuests + 0xb8) + 0x48) != 0) {
        if (DAT_1834b2e67 == '\0') {
          FUN_180315380(TI_UnityEngine.Vector3);
          DAT_1834b2e67 = '\x01';
        }
        uVar9 = **(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8);
        fVar19 = *(float *)(*(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8) + 1);
        if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
          func_0x000180315660();
        }
        uStack_148 = uVar9;
        fStack_140 = fVar19;
        SparkQuests__MostraRadar__1804c6a60(0,&uStack_148,0);
      }
      goto code_r0x0001806b1a1e;
    }
    uStack_148 = CONCAT44(uStack_148._4_4_,fVar21);
    fStack_140 = fVar17;
    if (DAT_1834b2f30 == '\0') {
      FUN_180315380(TI_UnityEngine.Vector3);
      DAT_1834b2f30 = '\x01';
    }
    if (lVar6 == 0) goto code_r0x0001806b1a63;
    lVar7 = *(longlong *)(TI_UnityEngine.Vector3 + 0xb8);
    fVar21 = *(float *)(lVar7 + 0x18);
    fVar17 = *(float *)(lVar7 + 0x1c);
    fVar22 = *(float *)(lVar7 + 0x20);
    lVar7 = UnityEngine_Component__get_transform(lVar6,0);
    if (lVar7 == 0) goto code_r0x0001806b1a63;
    pfVar8 = (float *)UnityEngine_Transform__get_forward(&uStack_108,lVar7,0);
    fVar1 = *pfVar8;
    fVar13 = pfVar8[1];
    uStackX_18 = CONCAT44(uStackX_18._4_4_,pfVar8[2]);
    lVar7 = UnityEngine_Component__get_transform(lVar6,0);
    if (lVar7 == 0) goto code_r0x0001806b1a63;
    fVar21 = (float)uStack_148 + fVar21;
    fVar17 = fVar17 + (float)uStackX_8;
    fVar22 = fStack_140 + fVar22;
    pfVar8 = (float *)UnityEngine_Transform__get_position(&uStack_108,lVar7,0);
    lVar7 = *(longlong *)(param_1 + 0x30);
    if (lVar7 == 0) goto code_r0x0001806b1a63;
    if (0.0 < (fVar17 - pfVar8[1]) * fVar13 + (fVar21 - *pfVar8) * fVar1 +
              (fVar22 - pfVar8[2]) * (float)uStackX_18) {
      uVar9 = func_0x0001825d76c0();
      uStack_148 = CONCAT44(fVar17,fVar21);
      fStack_140 = fVar22;
      uVar9 = UnityEngine_UIElements_RuntimePanelUtils__CameraTransformWorldToPanel
                        (uVar9,&uStack_148,lVar6,0);
      uStackX_8 = uVar9;
      if (*(longlong *)(param_1 + 0x30) != 0) {
        uStackX_8._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
        fVar1 = uStackX_8._4_4_;
        uVar10 = func_0x0001825d76c0(*(longlong *)(param_1 + 0x30),0);
        if (cRam00000001834b3023 == '\0') {
          FUN_180315380(TI_UnityEngine.Vector3);
          cRam00000001834b3023 = '\x01';
        }
        fVar13 = (float)FUN_18043b850(&uStack_138,0);
        if (fVar13 <= 1e-05) {
          pfVar8 = *(float **)(TI_UnityEngine.Vector3 + 0xb8);
          fVar19 = *pfVar8;
          fVar16 = pfVar8[1];
          fVar20 = pfVar8[2];
        }
        else {
          fVar16 = 0.0 / fVar13;
          fVar19 = fVar19 / fVar13;
          fVar20 = fVar20 / fVar13;
        }
        fStack_140 = fVar20 + fVar20 + fVar22;
        uStack_148 = CONCAT44(fVar16 + fVar16 + fVar17,fVar19 + fVar19 + fVar21);
        uVar10 = UnityEngine_UIElements_RuntimePanelUtils__CameraTransformWorldToPanel
                           (uVar10,&uStack_148,lVar6,0);
        fVar19 = (float)uVar10 - (float)uVar9;
        uStackX_8._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
        fVar20 = uStackX_8._4_4_ - fVar1;
        uStackX_8 = uVar10;
        if (fVar20 * fVar20 + fVar19 * fVar19 < 0.0001) {
          if (cRam00000001834b2e59 == '\0') {
            FUN_180315380(TI_UnityEngine.Vector2);
            cRam00000001834b2e59 = '\x01';
          }
          fVar19 = *(float *)(*(longlong *)(TI_UnityEngine.Vector2 + 0xb8) + 0x18);
          fVar20 = *(float *)(*(longlong *)(TI_UnityEngine.Vector2 + 0xb8) + 0x1c);
        }
        if (DAT_1834b2e52 == '\0') {
          FUN_180315380(TI_System.Math);
          DAT_1834b2e52 = '\x01';
        }
        if (*(int *)(TI_System.Math + 0xe4) == 0) {
          func_0x000180315660();
        }
        dVar14 = (double)(fVar20 * fVar20 + fVar19 * fVar19);
        if (dVar14 < 0.0) {
          dVar14 = (double)FUN_1803a9930();
        }
        else {
          auVar15._8_8_ = 0;
          auVar15._0_8_ = dVar14;
          auVar15 = sqrtpd(ZEXT816(0),auVar15);
          dVar14 = auVar15._0_8_;
        }
        fVar21 = (float)dVar14;
        if (1e-05 < fVar21) {
          fVar18 = fVar19 / fVar21;
          fVar20 = fVar20 / fVar21;
        }
        else {
          fVar20 = 0.0;
        }
        if (*(longlong *)(param_1 + 0x30) != 0) {
          lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
          uVar10 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
          if (lVar6 != 0) {
            FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar10);
            if (*(longlong *)(param_1 + 0x30) != 0) {
              lVar6 = UnityEngine_UIElements_VisualElement__get_style
                                (*(longlong *)(param_1 + 0x30),0);
              puVar11 = (undefined8 *)
                        UnityEngine_UIElements_StyleLength__op_Implicit
                                  (&uStack_108,(fVar18 * 78.0 + (float)uVar9) - 80.0,0);
              if (lVar6 != 0) {
                uStack_148 = *puVar11;
                fStack_140 = *(float *)(puVar11 + 1);
                FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar6,&uStack_148);
                if (*(longlong *)(param_1 + 0x30) != 0) {
                  lVar6 = UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(param_1 + 0x30),0);
                  puVar11 = (undefined8 *)
                            UnityEngine_UIElements_StyleLength__op_Implicit
                                      (&uStack_108,(fVar20 * 78.0 + fVar1) - 20.0,0);
                  if (lVar6 != 0) {
                    uStack_148 = *puVar11;
                    fStack_140 = *(float *)(puVar11 + 1);
                    FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,lVar6,&uStack_148);
                    if (*(longlong *)(param_1 + 0x38) != 0) {
                      lVar6 = UnityEngine_UIElements_VisualElement__get_style
                                        (*(longlong *)(param_1 + 0x38),0);
                      uStackX_18 = 0;
                      fVar19 = (float)func_0x0001803a7a00();
                      UnityEngine_UIElements_Angle___ctor(&uStackX_18,fVar19 * 57.29578,0,0);
                      uStack_128 = 0;
                      uStack_138 = 0;
                      uStack_130 = 0;
                      UnityEngine_UIElements_Rotate___ctor(&uStack_138,uStackX_18,0);
                      uStack_108 = uStack_138;
                      uStack_100 = uStack_130;
                      uStack_f8 = uStack_128;
                      puVar12 = (ulonglong *)
                                UnityEngine_UIElements_StyleRotate__op_Implicit
                                          (auStack_e8,&uStack_108,0);
                      if (lVar6 != 0) {
                        uStack_108 = *puVar12;
                        uStack_100 = puVar12[1];
                        uStack_f8 = puVar12[2];
                        uStack_f0 = (undefined4)puVar12[3];
                        FUN_180005190(0x6b,TI_UnityEngine.UIElements.IStyle,lVar6,&uStack_108);
                        uVar9 = uStack_110;
                        plVar2 = *(longlong **)(param_1 + 0x58);
                        uVar5 = FUN_1803fb530();
                        uStackX_8 = CONCAT44(uStackX_8._4_4_,uVar5);
                        uVar10 = func_0x000180314670(_DAT_1834c6268,&uStackX_8);
                        uVar9 = System_String__Format(LIT_"'{0}  ({1})'",uVar9,uVar10,0);
                        if (plVar2 != (longlong *)0x0) {
                          (**(code **)(*plVar2 + 0xe48))
                                    (plVar2,uVar9,*(undefined8 *)(*plVar2 + 0xe50));
                          return;
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
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto code_r0x0001806b1a63;
    }
  }
  else {
code_r0x0001806b1a1e:
    lVar7 = *(longlong *)(param_1 + 0x30);
    if (lVar7 == 0) goto code_r0x0001806b1a63;
  }
  lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
  uVar9 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
  if (lVar6 != 0) {
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar9);
    return;
  }
code_r0x0001806b1a63:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

