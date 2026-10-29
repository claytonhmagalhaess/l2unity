// L2ConfirmWindow__MontaTempo__18076fbf0 @ 0x18076fbf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2ConfirmWindow__MontaTempo__18076fbf0(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if (cRam00000001834b43dc == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.Label);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"''");
    cRam00000001834b43dc = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x98) != 0) &&
     (lVar5 = func_0x0001825d76d0(*(undefined8 *)(param_1 + 0x98),0), lVar5 != 0)) {
    if ((*(longlong *)(param_1 + 0x98) != 0) &&
       (lVar5 = func_0x0001825d76d0(*(longlong *)(param_1 + 0x98),0), lVar5 != 0)) {
      lVar5 = func_0x0001825d76d0(lVar5,0);
      if (lVar5 == 0) {
        return;
      }
      lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
      UnityEngine_UIElements_VisualElement___ctor(lVar5,0);
      if (lVar5 != 0) {
        UnityEngine_UIElements_VisualElement__set_pickingMode(lVar5,1,0);
        *(longlong *)(param_1 + 0xb8) = lVar5;
        func_0x000180314690(param_1 + 0xb8,lVar5);
        if (*(longlong *)(param_1 + 0xb8) != 0) {
          lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb8),0);
          uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
          if (lVar5 != 0) {
            FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
            if (*(longlong *)(param_1 + 0xb8) != 0) {
              lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                (*(longlong *)(param_1 + 0xb8),0);
              uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
              if (lVar5 != 0) {
                FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                if (*(longlong *)(param_1 + 0xb8) != 0) {
                  lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(param_1 + 0xb8),0);
                  uVar6 = func_0x000182601c10();
                  if (lVar5 != 0) {
                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                    if (*(longlong *)(param_1 + 0xb8) != 0) {
                      lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                        (*(longlong *)(param_1 + 0xb8),0);
                      puVar7 = (undefined8 *)
                               UnityEngine_UIElements_StyleLength__op_Implicit
                                         (&uStack_58,0x40800000,0);
                      if (lVar5 != 0) {
                        uStack_70 = *(undefined4 *)(puVar7 + 1);
                        uStack_78 = *puVar7;
                        FUN_1800050f0(0x51,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_78);
                        if (*(longlong *)(param_1 + 0xb8) != 0) {
                          lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                            (*(longlong *)(param_1 + 0xb8),0);
                          puVar7 = (undefined8 *)
                                   UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_58,0,0);
                          if (lVar5 != 0) {
                            uStack_70 = *(undefined4 *)(puVar7 + 1);
                            uStack_78 = *puVar7;
                            FUN_1800050f0(0x4b,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_78);
                            if (*(longlong *)(param_1 + 0xb8) != 0) {
                              lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                                (*(longlong *)(param_1 + 0xb8),0);
                              puVar7 = (undefined8 *)
                                       UnityEngine_UIElements_StyleLength__op_Implicit
                                                 (&uStack_58,0x41200000,0);
                              if (lVar5 != 0) {
                                uStack_70 = *(undefined4 *)(puVar7 + 1);
                                uStack_78 = *puVar7;
                                FUN_1800050f0(0x4d,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_78);
                                if (*(longlong *)(param_1 + 0xb8) != 0) {
                                  lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                                    (*(longlong *)(param_1 + 0xb8),0);
                                  puVar7 = (undefined8 *)
                                           UnityEngine_UIElements_StyleLength__op_Implicit
                                                     (&uStack_58,0x41200000,0);
                                  if (lVar5 != 0) {
                                    uStack_70 = *(undefined4 *)(puVar7 + 1);
                                    uStack_78 = *puVar7;
                                    FUN_1800050f0(0x4f,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_78);
                                    if (*(longlong *)(param_1 + 0xb8) != 0) {
                                      lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                                        (*(longlong *)(param_1 + 0xb8),0);
                                      uVar6 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                                      if (lVar5 != 0) {
                                        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                                        lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                        UnityEngine_UIElements_VisualElement___ctor(lVar5,0);
                                        if (lVar5 != 0) {
                                          UnityEngine_UIElements_VisualElement__set_pickingMode
                                                    (lVar5,1,0);
                                          lVar8 = UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                          uVar6 = func_0x000182601c10();
                                          if (lVar8 != 0) {
                                            FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar8,uVar6);
                                            lVar8 = UnityEngine_UIElements_VisualElement__get_style
                                                              (lVar5,0);
                                            puVar7 = (undefined8 *)
                                                     UnityEngine_UIElements_StyleLength__op_Implicit
                                                               (&uStack_58,0x40e00000,0);
                                            if (lVar8 != 0) {
                                              uStack_70 = *(undefined4 *)(puVar7 + 1);
                                              uStack_78 = *puVar7;
                                              FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,lVar8,&uStack_78);
                                              lVar8 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                              uStack_58 = 0x3d8f5c293da3d70a;
                                              uStack_50 = 0x3f6666663d75c28f;
                                              puVar7 = (undefined8 *)
                                                                                                              
                                                  UnityEngine_UIElements_StyleColor__op_Implicit
                                                            (&uStack_78,&uStack_58,0);
                                              if (lVar8 != 0) {
                                                uStack_58 = *puVar7;
                                                uStack_50 = puVar7[1];
                                                uStack_48 = *(undefined4 *)(puVar7 + 2);
                                                FUN_180004fc0(9,TI_UnityEngine.UIElements.IStyle,lVar8,&uStack_58);
                                                lVar8 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                lVar9 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                lVar10 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                lVar11 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                uVar6 = func_0x000182601c10();
                                                if ((((lVar11 != 0) &&
                                                     (FUN_180005060(0x23,TI_UnityEngine.UIElements.IStyle,lVar11,uVar6
                                                                   ), lVar10 != 0)) &&
                                                    (FUN_180005060(0x1f,TI_UnityEngine.UIElements.IStyle,lVar10,uVar6)
                                                    , lVar9 != 0)) &&
                                                   (FUN_180005060(0x1b,TI_UnityEngine.UIElements.IStyle,lVar9,uVar6),
                                                   lVar8 != 0)) {
                                                  FUN_180005060(0x2b,TI_UnityEngine.UIElements.IStyle,lVar8,uVar6);
                                                  lVar8 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  lVar9 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  lVar10 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  lVar11 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar5,0);
                                                  uStack_58 = 0x3ea8f5c33eb851ec;
                                                  uStack_50 = 0x3f6666663e851eb8;
                                                  puVar7 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleColor__op_Implicit
                                                            (&uStack_78,&uStack_58,0);
                                                  if (lVar11 != 0) {
                                                    uVar6 = *puVar7;
                                                    uVar3 = puVar7[1];
                                                    uVar1 = *(undefined4 *)(puVar7 + 2);
                                                    uStack_58 = uVar6;
                                                    uStack_50 = uVar3;
                                                    uStack_48 = uVar1;
                                                    FUN_180004fc0(0x21,TI_UnityEngine.UIElements.IStyle,lVar11,
                                                                  &uStack_58);
                                                    if (((lVar10 != 0) &&
                                                        (uStack_58 = uVar6, uStack_50 = uVar3,
                                                        uStack_48 = uVar1,
                                                        FUN_180004fc0(0x1d,TI_UnityEngine.UIElements.IStyle,lVar10,
                                                                      &uStack_58), lVar9 != 0)) &&
                                                       (uStack_58 = uVar6, uStack_50 = uVar3,
                                                       uStack_48 = uVar1,
                                                       FUN_180004fc0(0x15,TI_UnityEngine.UIElements.IStyle,lVar9,
                                                                     &uStack_58), lVar8 != 0)) {
                                                      uStack_58 = uVar6;
                                                      uStack_50 = uVar3;
                                                      uStack_48 = uVar1;
                                                      FUN_180004fc0(0x25,TI_UnityEngine.UIElements.IStyle,lVar8,
                                                                    &uStack_58);
                                                      lVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                      UnityEngine_UIElements_VisualElement___ctor
                                                                (lVar8,0);
                                                      if (lVar8 != 0) {
                                                                                                                
                                                  UnityEngine_UIElements_VisualElement__set_pickingMode
                                                            (lVar8,1,0);
                                                  *(longlong *)(param_1 + 0xc0) = lVar8;
                                                  func_0x000180314690(param_1 + 0xc0,lVar8);
                                                  if (*(longlong *)(param_1 + 0xc0) != 0) {
                                                    lVar8 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xc0),0);
                                                  uVar6 = func_0x0001825fc350();
                                                  puVar7 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_58,uVar6,0);
                                                  if (lVar8 != 0) {
                                                    uStack_78 = *puVar7;
                                                    uStack_70 = *(undefined4 *)(puVar7 + 1);
                                                    FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,lVar8,
                                                                  &uStack_78);
                                                    if (*(longlong *)(param_1 + 0xc0) != 0) {
                                                      lVar8 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xc0),0);
                                                  uVar6 = func_0x0001825fc350();
                                                  puVar7 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_58,uVar6,0);
                                                  if (lVar8 != 0) {
                                                    uStack_78 = *puVar7;
                                                    uStack_70 = *(undefined4 *)(puVar7 + 1);
                                                    FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar8,
                                                                  &uStack_78);
                                                    if (*(longlong *)(param_1 + 0xc0) != 0) {
                                                      lVar8 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xc0),0);
                                                  uStack_58 = 0x3f2e147b3f59999a;
                                                  uStack_50 = 0x3f8000003ea8f5c3;
                                                  puVar7 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleColor__op_Implicit
                                                            (&uStack_78,&uStack_58,0);
                                                  if (lVar8 != 0) {
                                                    uStack_58 = *puVar7;
                                                    uStack_50 = puVar7[1];
                                                    uStack_48 = *(undefined4 *)(puVar7 + 2);
                                                    FUN_180004fc0(9,TI_UnityEngine.UIElements.IStyle,lVar8,&uStack_58)
                                                    ;
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (lVar5,*(undefined8 *)(param_1 + 0xc0)
                                                               ,0);
                                                    if (*(longlong *)(param_1 + 0xb8) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xb8),lVar5
                                                                 ,0);
                                                      lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.Label);
                                                      UnityEngine_UIElements_Label___ctor
                                                                (lVar5,LIT_"''",0);
                                                      if (lVar5 != 0) {
                                                                                                                
                                                  UnityEngine_UIElements_VisualElement__set_pickingMode
                                                            (lVar5,1,0);
                                                  *(longlong *)(param_1 + 200) = lVar5;
                                                  func_0x000180314690(param_1 + 200,lVar5);
                                                  if (*(longlong *)(param_1 + 200) != 0) {
                                                    lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 200),0);
                                                  puVar7 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_58,0x41400000,0);
                                                  if (lVar5 != 0) {
                                                    uStack_70 = *(undefined4 *)(puVar7 + 1);
                                                    uStack_78 = *puVar7;
                                                    FUN_1800050f0(0x41,TI_UnityEngine.UIElements.IStyle,lVar5,
                                                                  &uStack_78);
                                                    if (*(longlong *)(param_1 + 200) != 0) {
                                                      lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 200),0);
                                                  uStack_58 = 0x3f59999a3f733333;
                                                  uStack_50 = 0x3f8000003f0ccccd;
                                                  puVar7 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleColor__op_Implicit
                                                            (&uStack_78,&uStack_58,0);
                                                  if (lVar5 != 0) {
                                                    uStack_58 = *puVar7;
                                                    uStack_50 = puVar7[1];
                                                    uStack_48 = *(undefined4 *)(puVar7 + 2);
                                                    FUN_180004fc0(0x2f,TI_UnityEngine.UIElements.IStyle,lVar5,
                                                                  &uStack_58);
                                                    if (*(longlong *)(param_1 + 200) != 0) {
                                                      lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 200),0);
                                                  puVar7 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_58,0x40c00000,0);
                                                  if (lVar5 != 0) {
                                                    uStack_70 = *(undefined4 *)(puVar7 + 1);
                                                    uStack_78 = *puVar7;
                                                    FUN_1800050f0(0x4d,TI_UnityEngine.UIElements.IStyle,lVar5,
                                                                  &uStack_78);
                                                    if (*(longlong *)(param_1 + 200) != 0) {
                                                      lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 200),0);
                                                  puVar7 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_58,0x42380000,0);
                                                  if (lVar5 != 0) {
                                                    uStack_70 = *(undefined4 *)(puVar7 + 1);
                                                    uStack_78 = *puVar7;
                                                    FUN_1800050f0(0x59,TI_UnityEngine.UIElements.IStyle,lVar5,
                                                                  &uStack_78);
                                                    if (*(longlong *)(param_1 + 200) != 0) {
                                                      lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 200),0);
                                                  uVar6 = FUN_180eb5810(5,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
                                                  if (lVar5 != 0) {
                                                    FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                                                    if (*(longlong *)(param_1 + 200) != 0) {
                                                      lVar5 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 200),0);
                                                  uVar6 = func_0x000182601c10();
                                                  if (lVar5 != 0) {
                                                    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
                                                    if (*(longlong *)(param_1 + 0xb8) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xb8),
                                                                 *(undefined8 *)(param_1 + 200),0);
                                                      if (((*(longlong *)(param_1 + 0x98) != 0) &&
                                                          (lVar5 = func_0x0001825d76d0(*(longlong *)
                                                                                        (param_1 +
                                                                                        0x98),0),
                                                          lVar5 != 0)) &&
                                                         (lVar8 = func_0x0001825d76d0(lVar5,0),
                                                         lVar8 != 0)) {
                                                        iVar4 = 
                                                  UnityEngine_UIElements_VisualElement__IndexOf
                                                            (lVar8,lVar5,0);
                                                  UnityEngine_UIElements_VisualElement__Insert
                                                            (lVar8,iVar4 + 1,
                                                             *(undefined8 *)(param_1 + 0xb8),0);
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
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

