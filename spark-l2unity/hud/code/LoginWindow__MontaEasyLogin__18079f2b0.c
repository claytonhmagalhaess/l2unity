// LoginWindow__MontaEasyLogin__18079f2b0 @ 0x18079f2b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginWindow__MontaEasyLogin__18079f2b0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 auStack_50 [40];
  ulonglong uVar11;
  
  if (cRam00000001834b44cf == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MD_LoginWindow._MontaEasyLogin_b__50_0);
    FUN_180315380(TI_LoginWindow);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'+ Add'");
    FUN_180315380(LIT_"'SparkEasyLogin'");
    FUN_180315380(LIT_"'Easy Login'");
    cRam00000001834b44cf = '\x01';
  }
  lVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar3,0);
  if (lVar3 != 0) {
    UnityEngine_UIElements_VisualElement__set_name(lVar3,LIT_"'SparkEasyLogin'",0);
    UnityEngine_UIElements_VisualElement__set_pickingMode(lVar3,1,0);
    *(longlong *)(param_1 + 200) = lVar3;
    func_0x000180314690(param_1 + 200,lVar3);
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 200),0);
      uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
      if (lVar3 != 0) {
        FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
        if (*(longlong *)(param_1 + 200) != 0) {
          plVar5 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 200),0);
          puVar6 = (undefined8 *)
                   UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0x41c00000,0);
          if (plVar5 != (longlong *)0x0) {
            lVar3 = *plVar5;
            uVar12 = 0;
            uVar4 = *puVar6;
            uVar13 = *(undefined4 *)(puVar6 + 1);
            if (*(ushort *)(lVar3 + 0x12e) != 0) {
              uVar11 = uVar12;
              do {
                if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                  puVar6 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + uVar11 * 0x10) + 0x47) *
                            0x10 + 0x138 + lVar3);
                  goto code_r0x00018079f4e9;
                }
                uVar10 = (short)uVar11 + 1;
                uVar11 = (ulonglong)uVar10;
              } while (uVar10 < *(ushort *)(lVar3 + 0x12e));
            }
            puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x00018079f4e9:
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar13);
            uStack_88 = uVar4;
            (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
            if (*(longlong *)(param_1 + 200) != 0) {
              plVar5 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(param_1 + 200),0);
              puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0,0)
              ;
              if (plVar5 != (longlong *)0x0) {
                lVar3 = *plVar5;
                uVar4 = *puVar6;
                uVar13 = *(undefined4 *)(puVar6 + 1);
                if (*(ushort *)(lVar3 + 0x12e) != 0) {
                  uVar11 = uVar12;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle
                       ) {
                      puVar6 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + uVar11 * 0x10) + 0x73) *
                                0x10 + 0x138 + lVar3);
                      goto code_r0x00018079f589;
                    }
                    uVar10 = (short)uVar11 + 1;
                    uVar11 = (ulonglong)uVar10;
                  } while (uVar10 < *(ushort *)(lVar3 + 0x12e));
                }
                puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x00018079f589:
                uStack_80 = CONCAT44(uStack_80._4_4_,uVar13);
                uStack_88 = uVar4;
                (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                if (*(longlong *)(param_1 + 200) != 0) {
                  plVar5 = (longlong *)
                           UnityEngine_UIElements_VisualElement__get_style
                                     (*(longlong *)(param_1 + 200),0);
                  puVar6 = (undefined8 *)
                           UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,0,0);
                  if (plVar5 != (longlong *)0x0) {
                    lVar3 = *plVar5;
                    uVar4 = *puVar6;
                    uVar13 = *(undefined4 *)(puVar6 + 1);
                    if (*(ushort *)(lVar3 + 0x12e) != 0) {
                      uVar11 = uVar12;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + uVar11 * 0x10) ==
                            TI_UnityEngine.UIElements.IStyle) {
                          puVar6 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + uVar11 * 0x10) +
                                    0x2d) * 0x10 + 0x138 + lVar3);
                          goto code_r0x00018079f629;
                        }
                        uVar10 = (short)uVar11 + 1;
                        uVar11 = (ulonglong)uVar10;
                      } while (uVar10 < *(ushort *)(lVar3 + 0x12e));
                    }
                    puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x2d);
code_r0x00018079f629:
                    uStack_80 = CONCAT44(uStack_80._4_4_,uVar13);
                    uStack_88 = uVar4;
                    (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                    if (*(longlong *)(param_1 + 200) != 0) {
                      lVar3 = UnityEngine_UIElements_VisualElement__get_style
                                        (*(longlong *)(param_1 + 200),0);
                      uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                      if (lVar3 != 0) {
                        FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
                        lVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                        UnityEngine_UIElements_VisualElement___ctor(lVar3,0);
                        if (lVar3 != 0) {
                          plVar5 = (longlong *)
                                   UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
                          puVar6 = (undefined8 *)
                                   UnityEngine_UIElements_StyleLength__op_Implicit
                                             (&uStack_88,0x437c0000,0);
                          if (plVar5 != (longlong *)0x0) {
                            lVar7 = *plVar5;
                            uVar4 = *puVar6;
                            uVar13 = *(undefined4 *)(puVar6 + 1);
                            if (*(ushort *)(lVar7 + 0x12e) != 0) {
                              uVar11 = uVar12;
                              do {
                                if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar11 * 0x10) ==
                                    TI_UnityEngine.UIElements.IStyle) {
                                  puVar6 = (undefined8 *)
                                           ((longlong)
                                            (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                                     uVar11 * 0x10) + 0xad) * 0x10 + 0x138 + lVar7);
                                  goto code_r0x00018079f729;
                                }
                                uVar10 = (short)uVar11 + 1;
                                uVar11 = (ulonglong)uVar10;
                              } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
                            }
                            puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018079f729:
                            uStack_80 = CONCAT44(uStack_80._4_4_,uVar13);
                            uStack_88 = uVar4;
                            (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                            lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
                            uVar4 = func_0x000182601c10(0,0);
                            if (lVar7 != 0) {
                              FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar4);
                              plVar5 = (longlong *)
                                       UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
                              if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                                func_0x000180315660(TI_SparkEstilo);
                              }
                              uStack_88 = **(undefined8 **)(TI_SparkEstilo + 0xb8);
                              uStack_80 = (*(undefined8 **)(TI_SparkEstilo + 0xb8))[1];
                              puVar6 = (undefined8 *)
                                       UnityEngine_UIElements_StyleColor__op_Implicit
                                                 (auStack_50,&uStack_88,0);
                              if (plVar5 != (longlong *)0x0) {
                                lVar7 = *plVar5;
                                uVar4 = *puVar6;
                                uVar2 = puVar6[1];
                                uVar13 = *(undefined4 *)(puVar6 + 2);
                                if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                  uVar11 = uVar12;
                                  do {
                                    if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar11 * 0x10)
                                        == TI_UnityEngine.UIElements.IStyle) {
                                      puVar6 = (undefined8 *)
                                               ((longlong)
                                                (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                                         uVar11 * 0x10) + 9) * 0x10 + 0x138 + lVar7)
                                      ;
                                      goto code_r0x00018079f819;
                                    }
                                    uVar10 = (short)uVar11 + 1;
                                    uVar11 = (ulonglong)uVar10;
                                  } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
                                }
                                puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,9);
code_r0x00018079f819:
                                uStack_88 = uVar4;
                                uStack_80 = uVar2;
                                uStack_78 = uVar13;
                                (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                                uVar13 = 0;
                                uStack_88 = *(undefined8 *)
                                             (*(longlong *)(TI_SparkEstilo + 0xb8) + 0x20);
                                uStack_80 = *(undefined8 *)
                                             (*(longlong *)(TI_SparkEstilo + 0xb8) + 0x28);
                                SparkEstilo__Borda__18071da60
                                          (lVar3,&uStack_88,0x3f800000,0x40800000,0);
                                SparkEstilo__Espaco__18071fb80
                                          (lVar3,0x41000000,0x41200000,0x41200000,
                                           CONCAT44(uVar13,0x41200000),0);
                                if (*(longlong *)(param_1 + 200) != 0) {
                                  UnityEngine_UIElements_VisualElement__Add
                                            (*(longlong *)(param_1 + 200),lVar3,0);
                                  lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                  UnityEngine_UIElements_VisualElement___ctor(lVar7,0);
                                  if (lVar7 != 0) {
                                    lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0)
                                    ;
                                    uVar4 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                    if (lVar8 != 0) {
                                      FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar8,uVar4);
                                      lVar8 = UnityEngine_UIElements_VisualElement__get_style
                                                        (lVar7,0);
                                      uVar4 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                                      if (lVar8 != 0) {
                                        FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar8,uVar4);
                                        lVar8 = UnityEngine_UIElements_VisualElement__get_style
                                                          (lVar7,0);
                                        uVar4 = func_0x000182601c10(0,0);
                                        if (lVar8 != 0) {
                                          FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar8,uVar4);
                                          plVar5 = (longlong *)
                                                   UnityEngine_UIElements_VisualElement__get_style
                                                             (lVar7,0);
                                          puVar6 = (undefined8 *)
                                                   UnityEngine_UIElements_StyleLength__op_Implicit
                                                             (&uStack_88,0x41000000,0);
                                          if (plVar5 != (longlong *)0x0) {
                                            lVar8 = *plVar5;
                                            uVar4 = *puVar6;
                                            uVar13 = *(undefined4 *)(puVar6 + 1);
                                            if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                              do {
                                                if (*(longlong *)
                                                     (*(longlong *)(lVar8 + 0xb0) + uVar12 * 0x10)
                                                    == TI_UnityEngine.UIElements.IStyle) {
                                                  puVar6 = (undefined8 *)
                                                           ((longlong)
                                                            (*(int *)(*(longlong *)(lVar8 + 0xb0) +
                                                                      8 + uVar12 * 0x10) + 0x4b) *
                                                            0x10 + 0x138 + lVar8);
                                                  goto code_r0x00018079f9f9;
                                                }
                                                uVar10 = (short)uVar12 + 1;
                                                uVar12 = (ulonglong)uVar10;
                                              } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
                                            }
                                            puVar6 = (undefined8 *)
                                                     FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x00018079f9f9:
                                            uStack_80 = CONCAT44(uStack_80._4_4_,uVar13);
                                            uStack_88 = uVar4;
                                            (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                                            if (*(int *)(TI_LoginWindow + 0xe4) == 0) {
                                              func_0x000180315660();
                                            }
                                            uVar4 = LoginWindow__IconeDeConta(0x12,0);
                                            UnityEngine_UIElements_VisualElement__Add(lVar7,uVar4,0)
                                            ;
                                            uStack_88 = *(undefined8 *)
                                                         (*(longlong *)(TI_SparkEstilo + 0xb8) +
                                                         0x70);
                                            uStack_80 = *(undefined8 *)
                                                         (*(longlong *)(TI_SparkEstilo + 0xb8) +
                                                         0x78);
                                            uStack_58 = 0;
                                            uStack_68 = 0;
                                            uStack_60 = 0;
                                            func_0x000180cb7cb0(&uStack_68,&uStack_88,MR_System.Nullable<UnityEngine.Color>..ctor
                                                               );
                                            uStack_88 = uStack_68;
                                            uStack_80 = uStack_60;
                                            uStack_78 = uStack_58;
                                            lVar8 = SparkEstilo__Texto__180722af0
                                                              (LIT_"'Easy Login'",0xd,&uStack_88,1
                                                               ,0);
                                            if (lVar8 != 0) {
                                              lVar9 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar8,0);
                                              uVar4 = func_0x000182601c10(0x3f800000,0);
                                              if (lVar9 != 0) {
                                                FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar9,uVar4);
                                                plVar5 = (longlong *)
                                                                                                                  
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar8,0);
                                                puVar6 = (undefined8 *)
                                                                                                                  
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_88,0x40c00000,0);
                                                if (plVar5 != (longlong *)0x0) {
                                                  lVar9 = *plVar5;
                                                  uVar4 = *puVar6;
                                                  uVar13 = *(undefined4 *)(puVar6 + 1);
                                                  if (*(ushort *)(lVar9 + 0x12e) != 0) {
                                                    uVar10 = 0;
                                                    do {
                                                      if (*(longlong *)
                                                           (*(longlong *)(lVar9 + 0xb0) +
                                                           (ulonglong)uVar10 * 0x10) ==
                                                          TI_UnityEngine.UIElements.IStyle) {
                                                        puVar6 = (undefined8 *)
                                                                 ((longlong)
                                                                  (*(int *)(*(longlong *)
                                                                             (lVar9 + 0xb0) + 8 +
                                                                           (ulonglong)uVar10 * 0x10)
                                                                  + 0x4d) * 0x10 + 0x138 + lVar9);
                                                        goto code_r0x00018079fb69;
                                                      }
                                                      uVar10 = uVar10 + 1;
                                                    } while (uVar10 < *(ushort *)(lVar9 + 0x12e));
                                                  }
                                                  puVar6 = (undefined8 *)
                                                           FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x4d)
                                                  ;
code_r0x00018079fb69:
                                                  uStack_80 = CONCAT44(uStack_80._4_4_,uVar13);
                                                  uStack_88 = uVar4;
                                                  (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                                                  UnityEngine_UIElements_VisualElement__Add
                                                            (lVar7,lVar8,0);
                                                  uVar4 = func_0x000180315580(TI_System.Action);
                                                  FUN_1816a9c60(uVar4,param_1,MD_LoginWindow._MontaEasyLogin_b__50_0,0
                                                               );
                                                  uVar4 = SparkEstilo__Botao__18071e130
                                                                    (LIT_"'+ Add'",uVar4,0x3e
                                                                     ,0,0);
                                                  *(undefined8 *)(param_1 + 0x108) = uVar4;
                                                  func_0x000180314690(param_1 + 0x108,uVar4);
                                                  UnityEngine_UIElements_VisualElement__Add
                                                            (lVar7,*(undefined8 *)(param_1 + 0x108),
                                                             0);
                                                  UnityEngine_UIElements_VisualElement__Add
                                                            (lVar3,lVar7,0);
                                                  uVar4 = SparkEstilo__Lista__1807211b0(0);
                                                  *(undefined8 *)(param_1 + 0xd0) = uVar4;
                                                  func_0x000180314690(param_1 + 0xd0,uVar4);
                                                  if (*(longlong *)(param_1 + 0xd0) != 0) {
                                                    lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xd0),0);
                                                  uVar4 = func_0x000182601c10(0,0);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar7,uVar4);
                                                    if (*(longlong *)(param_1 + 0xd0) != 0) {
                                                      lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xd0),0);
                                                  uVar4 = func_0x000182601c10(0,0);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar4);
                                                    if (*(longlong *)(param_1 + 0xd0) != 0) {
                                                      plVar5 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xd0),0);
                                                  puVar6 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_88,0x431c0000,0);
                                                  if (plVar5 != (longlong *)0x0) {
                                                    lVar7 = *plVar5;
                                                    uVar4 = *puVar6;
                                                    uVar13 = *(undefined4 *)(puVar6 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar10 = 0;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             (ulonglong)uVar10 * 0x10) ==
                                                            TI_UnityEngine.UIElements.IStyle) {
                                                          puVar6 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             (ulonglong)uVar10 *
                                                                             0x10) + 0x53) * 0x10 +
                                                                    0x138 + lVar7);
                                                          goto code_r0x00018079fd39;
                                                        }
                                                        uVar10 = uVar10 + 1;
                                                      } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar6 = (undefined8 *)
                                                             FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,
                                                                           0x53);
code_r0x00018079fd39:
                                                    uStack_80 = CONCAT44(uStack_80._4_4_,uVar13);
                                                    uStack_88 = uVar4;
                                                    (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar3,*(undefined8 *)(param_1 + 0xd0)
                                                               ,0);
                                                    uVar4 = LoginWindow__MontaFormulario__18079fef0
                                                                      (param_1,0);
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar3,uVar4,0);
                                                    if (param_2 != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (param_2,*(undefined8 *)
                                                                          (param_1 + 200),0);
                                                      LoginWindow__PintaContas(param_1,0);
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
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

