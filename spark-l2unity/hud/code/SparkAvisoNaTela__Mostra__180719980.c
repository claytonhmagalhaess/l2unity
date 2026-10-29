// SparkAvisoNaTela__Mostra__180719980 @ 0x180719980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkAvisoNaTela__Mostra__180719980
               (undefined8 param_1,int param_2,int param_3,byte param_4,char *param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ushort uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  float fStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  longlong lStack_88;
  
  if (cRam00000001834b41d3 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_SparkAvisoNaTela.Aviso);
    FUN_180315380(MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduledItem);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduler);
    FUN_180315380(MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.RemoveAt);
    FUN_180315380(MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.get_Item);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>.GetValueOrDefault);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>.get_HasValue);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MD_SparkAvisoNaTela.Anima);
    FUN_180315380(TI_SparkAvisoNaTela);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.FontStyle>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b41d3 = '\x01';
  }
  cVar5 = System_String__IsNullOrWhiteSpace(param_1,0);
  if (cVar5 != '\0') {
    return;
  }
  if (DAT_1834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  uVar8 = **(undefined8 **)(TI_L2GameUI + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar5 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if (cVar5 == '\0') {
    return;
  }
  if (DAT_1834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  if (**(longlong **)(TI_L2GameUI + 0xb8) == 0) goto code_r0x00018071a8b9;
  lVar10 = *(longlong *)(**(longlong **)(TI_L2GameUI + 0xb8) + 0x20);
  if (lVar10 == 0) {
    return;
  }
  if (*(int *)(TI_SparkAvisoNaTela + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (**(longlong **)(TI_SparkAvisoNaTela + 0xb8) == 0) {
code_r0x000180719c2a:
    uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(uVar8,0);
    if (*(int *)(TI_SparkAvisoNaTela + 0xe4) == 0) {
      func_0x000180315660();
    }
    **(undefined8 **)(TI_SparkAvisoNaTela + 0xb8) = uVar8;
    func_0x000180314690(*(undefined8 *)(TI_SparkAvisoNaTela + 0xb8),uVar8);
    if (**(longlong **)(TI_SparkAvisoNaTela + 0xb8) == 0) goto code_r0x00018071a8b9;
    UnityEngine_UIElements_VisualElement__set_pickingMode
              (**(longlong **)(TI_SparkAvisoNaTela + 0xb8),1,0);
    if (**(longlong **)(TI_SparkAvisoNaTela + 0xb8) == 0) goto code_r0x00018071a8b9;
    lVar6 = UnityEngine_UIElements_VisualElement__get_style
                      (**(longlong **)(TI_SparkAvisoNaTela + 0xb8),0);
    uVar8 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    if (lVar6 == 0) goto code_r0x00018071a8b9;
    FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar6,uVar8);
    if (**(longlong **)(TI_SparkAvisoNaTela + 0xb8) == 0) goto code_r0x00018071a8b9;
    lVar6 = UnityEngine_UIElements_VisualElement__get_style
                      (**(longlong **)(TI_SparkAvisoNaTela + 0xb8),0);
    if (**(longlong **)(TI_SparkAvisoNaTela + 0xb8) == 0) goto code_r0x00018071a8b9;
    lVar11 = UnityEngine_UIElements_VisualElement__get_style
                       (**(longlong **)(TI_SparkAvisoNaTela + 0xb8),0);
    puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_d8,0,0);
    if (lVar11 == 0) goto code_r0x00018071a8b9;
    uVar8 = *puVar9;
    uVar15 = *(undefined4 *)(puVar9 + 1);
    uStack_f8 = uVar8;
    uStack_f0 = uVar15;
    FUN_1800050f0(0x69,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_f8);
    if (lVar6 == 0) goto code_r0x00018071a8b9;
    uStack_f8 = uVar8;
    uStack_f0 = uVar15;
    FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar6,&uStack_f8);
    if (**(longlong **)(TI_SparkAvisoNaTela + 0xb8) == 0) goto code_r0x00018071a8b9;
    lVar6 = UnityEngine_UIElements_VisualElement__get_style
                      (**(longlong **)(TI_SparkAvisoNaTela + 0xb8),0);
    uVar8 = func_0x0001825fc350();
    puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_d8,uVar8,0);
    if (lVar6 == 0) goto code_r0x00018071a8b9;
    uStack_f8 = *puVar9;
    uStack_f0 = *(undefined4 *)(puVar9 + 1);
    FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,lVar6,&uStack_f8);
    if (**(longlong **)(TI_SparkAvisoNaTela + 0xb8) == 0) goto code_r0x00018071a8b9;
    lVar6 = UnityEngine_UIElements_VisualElement__get_style
                      (**(longlong **)(TI_SparkAvisoNaTela + 0xb8),0);
    uVar8 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    if (lVar6 == 0) goto code_r0x00018071a8b9;
    FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar6,uVar8);
    UnityEngine_UIElements_VisualElement__Add
              (lVar10,**(undefined8 **)(TI_SparkAvisoNaTela + 0xb8),0);
    *(undefined8 *)(*(longlong *)(TI_SparkAvisoNaTela + 0xb8) + 0x10) = 0;
    func_0x000180314690(*(longlong *)(TI_SparkAvisoNaTela + 0xb8) + 0x10,0);
    lVar10 = *(longlong *)(*(longlong *)(TI_SparkAvisoNaTela + 0xb8) + 8);
    if (lVar10 == 0) goto code_r0x00018071a8b9;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    iVar1 = *(int *)(lVar10 + 0x18);
    *(undefined4 *)(lVar10 + 0x18) = 0;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
    }
  }
  else {
    if (*(int *)(TI_SparkAvisoNaTela + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (**(longlong **)(TI_SparkAvisoNaTela + 0xb8) == 0) goto code_r0x00018071a8b9;
    lVar6 = func_0x0001825d76c0(**(longlong **)(TI_SparkAvisoNaTela + 0xb8),0);
    if (lVar6 == 0) goto code_r0x000180719c2a;
  }
  if (*(int *)(TI_SparkAvisoNaTela + 0xe4) == 0) {
    func_0x000180315660(TI_SparkAvisoNaTela);
  }
  if (**(longlong **)(TI_SparkAvisoNaTela + 0xb8) != 0) {
    plVar7 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style
                       (**(longlong **)(TI_SparkAvisoNaTela + 0xb8),0);
    uVar8 = func_0x0001825fc350(param_3 + -4,0);
    puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_d8,uVar8,0);
    if (plVar7 != (longlong *)0x0) {
      uVar8 = *puVar9;
      uVar15 = *(undefined4 *)(puVar9 + 1);
      lVar10 = *plVar7;
      uVar12 = 0;
      if (*(ushort *)(lVar10 + 0x12e) != 0) {
        do {
          if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar9 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0x73)
                      * 0x10 + 0x138 + lVar10);
            goto code_r0x000180719fd5;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ushort *)(lVar10 + 0x12e));
      }
      puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x000180719fd5:
      uStack_f8 = uVar8;
      uStack_f0 = uVar15;
      (*(code *)*puVar9)(plVar7,&uStack_f8,puVar9[1]);
      if (param_2 < 1) {
        fVar13 = 4.0;
      }
      else {
        fVar13 = (float)param_2 / 1000.0;
      }
      fVar19 = 1.5;
      if ((1.5 <= fVar13) && (fVar19 = 15.0, fVar13 <= 15.0)) {
        fVar19 = fVar13;
      }
      if (*(int *)(TI_SparkAvisoNaTela + 0xe4) == 0) {
        func_0x000180315660(TI_SparkAvisoNaTela);
      }
      lVar10 = *(longlong *)(*(longlong *)(TI_SparkAvisoNaTela + 0xb8) + 8);
      if (lVar10 != 0) {
        fStack_b8 = fVar19;
        FUN_180bada40(&uStack_b0,lVar10,MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.GetEnumerator);
        uStack_98 = uStack_b0;
        puStack_90 = puStack_a8;
        lStack_88 = CONCAT44(uStack_9c,uStack_a0);
        uStack_d8 = 0;
        uStack_d0 = &uStack_98;
        while (cVar5 = FUN_1812fa7e0(&uStack_98,MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.MoveNext), lVar10 = lStack_88,
              cVar5 != '\0') {
          if (lStack_88 == 0) goto code_r0x00018071a8c5;
          plVar7 = *(longlong **)(lStack_88 + 0x10);
          if (plVar7 == (longlong *)0x0) goto code_r0x00018071a8bf;
          uVar8 = (**(code **)(*plVar7 + 0xe38))(plVar7,*(undefined8 *)(*plVar7 + 0xe40));
          cVar5 = System_String__op_Inequality(uVar8,param_1,0);
          if (cVar5 == '\0') {
            fVar13 = *(float *)(lVar10 + 0x18);
            fVar14 = (float)FUN_1824366b0(0);
            fVar13 = fVar13 - fVar14;
            if (fVar13 < fVar19) {
              fVar14 = (float)FUN_1824366b0(0);
              *(float *)(lVar10 + 0x18) = fVar14 + fVar19;
              fVar13 = *(float *)(lVar10 + 0x1c) - fVar13;
              fVar14 = 0.0;
              if (0.0 <= fVar13) {
                fVar14 = fVar13;
              }
              *(float *)(lVar10 + 0x1c) = fVar14 + fVar19;
            }
            Gear__UpdateWeaponType__1803dadf0(&uStack_98,MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.Dispose);
            return;
          }
        }
        Gear__UpdateWeaponType__1803dadf0(&uStack_98,MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.Dispose);
        if (*param_5 == '\0') {
          uVar15 = 0x3f800000;
          uVar16 = 0x3f6ceced;
          uVar17 = 0x3f3ebebf;
          uVar18 = 0x3f800000;
        }
        else {
          uVar15 = *(undefined4 *)(param_5 + 4);
          uVar16 = *(undefined4 *)(param_5 + 8);
          uVar17 = *(undefined4 *)(param_5 + 0xc);
          uVar18 = *(undefined4 *)(param_5 + 0x10);
        }
        uStack_b0 = 0;
        puStack_a8 = (undefined8 *)0x0;
        uStack_a0 = 0;
        uStack_d8 = CONCAT44(uVar16,uVar15);
        uStack_d0 = (undefined8 *)CONCAT44(uVar18,uVar17);
        func_0x000180cb7cb0(&uStack_b0,&uStack_d8,MR_System.Nullable<UnityEngine.Color>..ctor);
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660();
        }
        uStack_d8 = uStack_b0;
        uStack_d0 = puStack_a8;
        uStack_c8 = uStack_a0;
        lVar10 = SparkEstilo__Texto__180722af0(param_1,(param_4 ^ 1) * 4 + 0xe,&uStack_d8,0,0);
        if (lVar10 != 0) {
          UnityEngine_UIElements_VisualElement__set_pickingMode(lVar10,1,0);
          lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
          uVar8 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
          if (lVar6 != 0) {
            FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar6,uVar8);
            lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
            uVar8 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.FontStyle>.op_Implicit);
            if (lVar6 != 0) {
              FUN_180005060(0x89,TI_UnityEngine.UIElements.IStyle,lVar6,uVar8);
              lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
              puVar9 = (undefined8 *)
                       UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_d8,0x40800000,0);
              if (lVar6 != 0) {
                uStack_f8 = *puVar9;
                uStack_f0 = *(undefined4 *)(puVar9 + 1);
                FUN_1800050f0(0x4b,TI_UnityEngine.UIElements.IStyle,lVar6,&uStack_f8);
                lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                puVar9 = (undefined8 *)
                         UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_d8,0x41900000,0);
                if (lVar11 != 0) {
                  uVar8 = *puVar9;
                  uVar15 = *(undefined4 *)(puVar9 + 1);
                  uStack_f8 = uVar8;
                  uStack_f0 = uVar15;
                  FUN_1800050f0(99,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_f8);
                  if (lVar6 != 0) {
                    uStack_f8 = uVar8;
                    uStack_f0 = uVar15;
                    FUN_1800050f0(0x61,TI_UnityEngine.UIElements.IStyle,lVar6,&uStack_f8);
                    lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                    lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                    puVar9 = (undefined8 *)
                             UnityEngine_UIElements_StyleLength__op_Implicit
                                       (&uStack_d8,0x40800000,0);
                    if (lVar11 != 0) {
                      uVar8 = *puVar9;
                      uVar15 = *(undefined4 *)(puVar9 + 1);
                      uStack_f8 = uVar8;
                      uStack_f0 = uVar15;
                      FUN_1800050f0(0x5f,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_f8);
                      if (lVar6 != 0) {
                        uStack_f8 = uVar8;
                        uStack_f0 = uVar15;
                        FUN_1800050f0(0x65,TI_UnityEngine.UIElements.IStyle,lVar6,&uStack_f8);
                        lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                        uStack_d8 = 0;
                        uStack_d0 = (undefined8 *)0x3eb3333300000000;
                        puVar9 = (undefined8 *)
                                 UnityEngine_UIElements_StyleColor__op_Implicit
                                           (&uStack_f8,&uStack_d8,0);
                        if (lVar6 != 0) {
                          uStack_d8 = *puVar9;
                          uStack_d0 = (undefined8 *)puVar9[1];
                          uStack_c8 = *(undefined4 *)(puVar9 + 2);
                          FUN_180004fc0(9,TI_UnityEngine.UIElements.IStyle,lVar6,&uStack_d8);
                          lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                          uVar8 = func_0x000182601c10();
                          if (lVar6 != 0) {
                            FUN_180005060(0xa5,TI_UnityEngine.UIElements.IStyle,lVar6,uVar8);
                            lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                            uStack_d8 = 0;
                            uStack_d0 = (undefined8 *)0x3f66666600000000;
                            puVar9 = (undefined8 *)
                                     UnityEngine_UIElements_StyleColor__op_Implicit
                                               (&uStack_f8,&uStack_d8,0);
                            if (lVar6 != 0) {
                              uStack_d8 = *puVar9;
                              uStack_d0 = (undefined8 *)puVar9[1];
                              uStack_c8 = *(undefined4 *)(puVar9 + 2);
                              FUN_180004fc0(0xa3,TI_UnityEngine.UIElements.IStyle,lVar6,&uStack_d8);
                              lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                              uVar8 = func_0x000182601c10();
                              if (lVar6 != 0) {
                                FUN_180005060(0x5b,TI_UnityEngine.UIElements.IStyle,lVar6,uVar8);
                                if (*(int *)(TI_SparkAvisoNaTela + 0xe4) == 0) {
                                  func_0x000180315660(TI_SparkAvisoNaTela);
                                }
                                if (**(longlong **)(TI_SparkAvisoNaTela + 0xb8) != 0) {
                                  UnityEngine_UIElements_VisualElement__Add
                                            (**(longlong **)(TI_SparkAvisoNaTela + 0xb8),lVar10,0);
                                  lVar6 = *(longlong *)
                                           (*(longlong *)(TI_SparkAvisoNaTela + 0xb8) + 8);
                                  lVar11 = func_0x000180315580(TI_SparkAvisoNaTela.Aviso);
                                  Gear__UpdateWeaponType__1803dadf0(lVar11,0);
                                  if (lVar11 != 0) {
                                    *(longlong *)(lVar11 + 0x10) = lVar10;
                                    func_0x000180314690(lVar11 + 0x10,lVar10);
                                    fVar13 = (float)FUN_1824366b0(0);
                                    *(float *)(lVar11 + 0x18) = fVar13 + fVar19;
                                    *(float *)(lVar11 + 0x1c) = fVar19;
                                    lVar10 = MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.Add;
                                    if (lVar6 != 0) {
                                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                      lVar3 = *(longlong *)(lVar6 + 0x10);
                                      if (lVar3 != 0) {
                                        uVar2 = *(uint *)(lVar6 + 0x18);
                                        if (uVar2 < *(uint *)(lVar3 + 0x18)) {
                                          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                          if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                                            FUN_1803155c0();
                                            pcVar4 = (code *)swi(3);
                                            (*pcVar4)();
                                            return;
                                          }
                                          *(longlong *)(lVar3 + 0x20 + (longlong)(int)uVar2 * 8) =
                                               lVar11;
                                          func_0x000180314690(lVar3 + (longlong)(int)uVar2 * 8 +
                                                              0x20,lVar11);
                                        }
                                        else {
                                          FUN_181645af0(lVar6,lVar11,
                                                        *(undefined8 *)
                                                         (*(longlong *)
                                                           (*(longlong *)(lVar10 + 0x20) + 0xc0) +
                                                         0x70));
                                        }
                                        while( true ) {
                                          if (*(int *)(TI_SparkAvisoNaTela + 0xe4) == 0) {
                                            func_0x000180315660();
                                          }
                                          lVar10 = *(longlong *)
                                                    (*(longlong *)(TI_SparkAvisoNaTela + 0xb8) + 8)
                                          ;
                                          if (lVar10 == 0) goto code_r0x00018071a8b9;
                                          if (*(int *)(lVar10 + 0x18) < 4) break;
                                          if (*(int *)(TI_SparkAvisoNaTela + 0xe4) == 0) {
                                            func_0x000180315660();
                                          }
                                          lVar10 = *(longlong *)
                                                    (*(longlong *)(TI_SparkAvisoNaTela + 0xb8) + 8)
                                          ;
                                          if (((lVar10 == 0) ||
                                              (lVar10 = FUN_180bbafe0(lVar10,0,MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.get_Item)
                                              , lVar10 == 0)) || (*(longlong *)(lVar10 + 0x10) == 0)
                                             ) goto code_r0x00018071a8b9;
                                          UnityEngine_UIElements_VisualElement__RemoveFromHierarchy
                                                    (*(longlong *)(lVar10 + 0x10),0);
                                          lVar10 = *(longlong *)
                                                    (*(longlong *)(TI_SparkAvisoNaTela + 0xb8) + 8)
                                          ;
                                          if (lVar10 == 0) goto code_r0x00018071a8b9;
                                          FUN_18164e790(lVar10,0,MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.RemoveAt);
                                        }
                                        if (*(int *)(TI_SparkAvisoNaTela + 0xe4) == 0) {
                                          func_0x000180315660();
                                        }
                                        if (*(longlong *)
                                             (*(longlong *)(TI_SparkAvisoNaTela + 0xb8) + 0x10) !=
                                            0) {
                                          return;
                                        }
                                        if (*(int *)(TI_SparkAvisoNaTela + 0xe4) == 0) {
                                          func_0x000180315660();
                                        }
                                        if (**(longlong **)(TI_SparkAvisoNaTela + 0xb8) != 0) {
                                          lVar10 = func_0x0001818f3de0(**(longlong **)
                                                                         (TI_SparkAvisoNaTela +
                                                                         0xb8),0);
                                          uVar8 = func_0x000180315580(TI_System.Action);
                                          FUN_1816a9c60(uVar8,0,MD_SparkAvisoNaTela.Anima,0);
                                          if ((lVar10 != 0) &&
                                             (lVar10 = FUN_180002030(1,TI_UnityEngine.UIElements.IVisualElementScheduler,lVar10,
                                                                     uVar8), lVar10 != 0)) {
                                            uVar8 = FUN_180002030(5,TI_UnityEngine.UIElements.IVisualElementScheduledItem,lVar10,0x1e
                                                                 );
                                            *(undefined8 *)
                                             (*(longlong *)(TI_SparkAvisoNaTela + 0xb8) + 0x10) =
                                                 uVar8;
                                            func_0x000180314690(*(longlong *)
                                                                 (TI_SparkAvisoNaTela + 0xb8) +
                                                                0x10,uVar8);
                                            return;
                                          }
                                        }
                                        goto code_r0x00018071a8b9;
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
          }
        }
        FUN_1803155d0();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
code_r0x00018071a8b9:
  FUN_1803155d0();
code_r0x00018071a8bf:
  FUN_1803155d0();
code_r0x00018071a8c5:
  FUN_1803155d0();
  FUN_180311490();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

