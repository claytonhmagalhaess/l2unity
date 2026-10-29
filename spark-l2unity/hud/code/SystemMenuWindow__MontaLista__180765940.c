// SystemMenuWindow__MontaLista__180765940 @ 0x180765940

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SystemMenuWindow__MontaLista__180765940(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ushort uVar11;
  ulonglong uVar13;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 auStack_58 [64];
  ulonglong uVar12;
  
  if (cRam00000001834b42cd == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MD_SystemMenuWindow.HandleExitButtonClick);
    FUN_180315380(MD_SystemMenuWindow.HandleRestartButtonClick);
    FUN_180315380(MD_SystemMenuWindow._MontaLista_b__12_0);
    FUN_180315380(MD_SystemMenuWindow._MontaLista_b__12_1);
    FUN_180315380(MD_SystemMenuWindow._MontaLista_b__12_2);
    FUN_180315380(MD_SystemMenuWindow.__c._MontaLista_b__12_3);
    FUN_180315380(MD_SystemMenuWindow.__c._MontaLista_b__12_4);
    FUN_180315380(MD_SystemMenuWindow.__c._MontaLista_b__12_5);
    FUN_180315380(MD_SystemMenuWindow.__c._MontaLista_b__12_6);
    FUN_180315380(MD_SystemMenuWindow.__c._MontaLista_b__12_7);
    FUN_180315380(MD_SystemMenuWindow.__c._MontaLista_b__12_8);
    FUN_180315380(MD_SystemMenuWindow.__c._MontaLista_b__12_9);
    FUN_180315380(TI_SystemMenuWindow.<>c);
    FUN_180315380(LIT_"'Friend Manager'");
    FUN_180315380(LIT_"'Facebook'");
    FUN_180315380(LIT_"'Shortcut'");
    FUN_180315380(LIT_"'Macro'");
    FUN_180315380(LIT_"'YouTube'");
    FUN_180315380(LIT_"'Discord'");
    FUN_180315380(LIT_"'Post'");
    FUN_180315380(LIT_"'Exit'");
    FUN_180315380(LIT_"'Option'");
    FUN_180315380(LIT_"'Exit Game'");
    FUN_180315380(LIT_"'Restart'");
    FUN_180315380(LIT_"'Community'");
    FUN_180315380(LIT_"'Friend'");
    FUN_180315380(LIT_"'Attendance / VIP'");
    FUN_180315380(LIT_"'Bbs'");
    FUN_180315380(LIT_"'Mailbox'");
    FUN_180315380(LIT_"'Attend'");
    FUN_180315380(LIT_"'Options'");
    FUN_180315380(LIT_"'Youtube'");
    cRam00000001834b42cd = '\x01';
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0x30),0);
    if (*(longlong *)(param_1 + 0x30) != 0) {
      plVar5 = (longlong *)
               UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
      puVar6 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,0x43240000,0);
      if (plVar5 != (longlong *)0x0) {
        lVar7 = *plVar5;
        uVar13 = 0;
        uVar9 = *puVar6;
        uVar1 = *(undefined4 *)(puVar6 + 1);
        if (*(ushort *)(lVar7 + 0x12e) != 0) {
          uVar12 = uVar13;
          do {
            if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
              puVar6 = (undefined8 *)
                       ((longlong)(*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar12 * 0x10) + 0xad)
                        * 0x10 + 0x138 + lVar7);
              goto code_r0x000180765be9;
            }
            uVar11 = (short)uVar12 + 1;
            uVar12 = (ulonglong)uVar11;
          } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
        }
        puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180765be9:
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
        uStack_78 = uVar9;
        (*(code *)*puVar6)(plVar5,&uStack_78,puVar6[1]);
        if (*(longlong *)(param_1 + 0x30) != 0) {
          plVar5 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
          puVar6 = (undefined8 *)
                   UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit(&uStack_78,2,0);
          if (plVar5 != (longlong *)0x0) {
            lVar7 = *plVar5;
            uVar9 = *puVar6;
            uVar1 = *(undefined4 *)(puVar6 + 1);
            if (*(ushort *)(lVar7 + 0x12e) != 0) {
              uVar12 = uVar13;
              do {
                if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                  puVar6 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar12 * 0x10) + 0x43) *
                            0x10 + 0x138 + lVar7);
                  goto code_r0x000180765c89;
                }
                uVar11 = (short)uVar12 + 1;
                uVar12 = (ulonglong)uVar11;
              } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
            }
            puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180765c89:
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
            uStack_78 = uVar9;
            (*(code *)*puVar6)(plVar5,&uStack_78,puVar6[1]);
            if (*(longlong *)(param_1 + 0x30) != 0) {
              plVar5 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(param_1 + 0x30),0);
              uStack_78 = 0x3d6147ae3d75c28f;
              uStack_70 = 0x3f6b851f3d3851ec;
              puVar6 = (undefined8 *)
                       UnityEngine_UIElements_StyleColor__op_Implicit(auStack_58,&uStack_78,0);
              if (plVar5 != (longlong *)0x0) {
                lVar7 = *plVar5;
                uVar9 = *puVar6;
                uVar3 = puVar6[1];
                uVar1 = *(undefined4 *)(puVar6 + 2);
                if (*(ushort *)(lVar7 + 0x12e) != 0) {
                  uVar12 = uVar13;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle
                       ) {
                      puVar6 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar12 * 0x10) + 9) *
                                0x10 + 0x138 + lVar7);
                      goto code_r0x000180765d39;
                    }
                    uVar11 = (short)uVar12 + 1;
                    uVar12 = (ulonglong)uVar11;
                  } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
                }
                puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,9);
code_r0x000180765d39:
                uStack_78 = uVar9;
                uStack_70 = uVar3;
                uStack_68 = uVar1;
                (*(code *)*puVar6)(plVar5,&uStack_78,puVar6[1]);
                if (*(longlong *)(param_1 + 0x30) != 0) {
                  lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(param_1 + 0x30),0);
                  if (*(longlong *)(param_1 + 0x30) != 0) {
                    lVar8 = UnityEngine_UIElements_VisualElement__get_style
                                      (*(longlong *)(param_1 + 0x30),0);
                    uVar9 = func_0x000182601c10();
                    if (lVar8 != 0) {
                      FUN_180005060(0x1b,TI_UnityEngine.UIElements.IStyle,lVar8,uVar9);
                      if (lVar7 != 0) {
                        FUN_180005060(0x2b,TI_UnityEngine.UIElements.IStyle,lVar7,uVar9);
                        if (*(longlong *)(param_1 + 0x30) != 0) {
                          lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                            (*(longlong *)(param_1 + 0x30),0);
                          if (*(longlong *)(param_1 + 0x30) != 0) {
                            lVar8 = UnityEngine_UIElements_VisualElement__get_style
                                              (*(longlong *)(param_1 + 0x30),0);
                            uVar9 = func_0x000182601c10();
                            if (lVar8 != 0) {
                              FUN_180005060(0x23,TI_UnityEngine.UIElements.IStyle,lVar8,uVar9);
                              if (lVar7 != 0) {
                                FUN_180005060(0x1f,TI_UnityEngine.UIElements.IStyle,lVar7,uVar9);
                                if (*(longlong *)(param_1 + 0x30) != 0) {
                                  plVar5 = (longlong *)
                                           UnityEngine_UIElements_VisualElement__get_style
                                                     (*(longlong *)(param_1 + 0x30),0);
                                  if (*(longlong *)(param_1 + 0x30) != 0) {
                                    plVar10 = (longlong *)
                                              UnityEngine_UIElements_VisualElement__get_style
                                                        (*(longlong *)(param_1 + 0x30),0);
                                    uStack_78 = 0x3ea8f5c33eb851ec;
                                    uStack_70 = 0x3f6666663e851eb8;
                                    puVar6 = (undefined8 *)
                                             UnityEngine_UIElements_StyleColor__op_Implicit
                                                       (auStack_58,&uStack_78,0);
                                    if (plVar10 != (longlong *)0x0) {
                                      lVar7 = *plVar10;
                                      uVar9 = *puVar6;
                                      uVar3 = puVar6[1];
                                      uVar1 = *(undefined4 *)(puVar6 + 2);
                                      if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                        uVar12 = uVar13;
                                        do {
                                          if (*(longlong *)
                                               (*(longlong *)(lVar7 + 0xb0) + uVar12 * 0x10) ==
                                              TI_UnityEngine.UIElements.IStyle) {
                                            puVar6 = (undefined8 *)
                                                     ((longlong)
                                                      (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                                               uVar12 * 0x10) + 0x15) * 0x10 + 0x138
                                                     + lVar7);
                                            goto code_r0x000180765ef7;
                                          }
                                          uVar11 = (short)uVar12 + 1;
                                          uVar12 = (ulonglong)uVar11;
                                        } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
                                      }
                                      puVar6 = (undefined8 *)
                                               FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x15);
code_r0x000180765ef7:
                                      uStack_78 = uVar9;
                                      uStack_70 = uVar3;
                                      uStack_68 = uVar1;
                                      (*(code *)*puVar6)(plVar10,&uStack_78,puVar6[1]);
                                      if (plVar5 != (longlong *)0x0) {
                                        lVar7 = *plVar5;
                                        if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                          uVar12 = uVar13;
                                          do {
                                            if (*(longlong *)
                                                 (*(longlong *)(lVar7 + 0xb0) + uVar12 * 0x10) ==
                                                TI_UnityEngine.UIElements.IStyle) {
                                              puVar6 = (undefined8 *)
                                                       ((longlong)
                                                        (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                                                 uVar12 * 0x10) + 0x25) * 0x10 +
                                                        0x138 + lVar7);
                                              goto code_r0x000180765f69;
                                            }
                                            uVar11 = (short)uVar12 + 1;
                                            uVar12 = (ulonglong)uVar11;
                                          } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
                                        }
                                        puVar6 = (undefined8 *)
                                                 FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x25);
code_r0x000180765f69:
                                        uStack_78 = uVar9;
                                        uStack_70 = uVar3;
                                        uStack_68 = uVar1;
                                        (*(code *)*puVar6)(plVar5,&uStack_78,puVar6[1]);
                                        if (*(longlong *)(param_1 + 0x30) != 0) {
                                          plVar5 = (longlong *)
                                                   UnityEngine_UIElements_VisualElement__get_style
                                                             (*(longlong *)(param_1 + 0x30),0);
                                          if (*(longlong *)(param_1 + 0x30) != 0) {
                                            plVar10 = (longlong *)
                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x30),0);
                                            uStack_78 = 0x3ea8f5c33eb851ec;
                                            uStack_70 = 0x3f6666663e851eb8;
                                            puVar6 = (undefined8 *)
                                                     UnityEngine_UIElements_StyleColor__op_Implicit
                                                               (auStack_58,&uStack_78,0);
                                            if (plVar10 != (longlong *)0x0) {
                                              lVar7 = *plVar10;
                                              uVar9 = *puVar6;
                                              uVar3 = puVar6[1];
                                              uVar1 = *(undefined4 *)(puVar6 + 2);
                                              if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                uVar12 = uVar13;
                                                do {
                                                  if (*(longlong *)
                                                       (*(longlong *)(lVar7 + 0xb0) + uVar12 * 0x10)
                                                      == TI_UnityEngine.UIElements.IStyle) {
                                                    puVar6 = (undefined8 *)
                                                             ((longlong)
                                                              (*(int *)(*(longlong *)(lVar7 + 0xb0)
                                                                        + 8 + uVar12 * 0x10) + 0x21)
                                                              * 0x10 + 0x138 + lVar7);
                                                    goto code_r0x000180766027;
                                                  }
                                                  uVar11 = (short)uVar12 + 1;
                                                  uVar12 = (ulonglong)uVar11;
                                                } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
                                              }
                                              puVar6 = (undefined8 *)
                                                       FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x21);
code_r0x000180766027:
                                              uStack_78 = uVar9;
                                              uStack_70 = uVar3;
                                              uStack_68 = uVar1;
                                              (*(code *)*puVar6)(plVar10,&uStack_78,puVar6[1]);
                                              if (plVar5 != (longlong *)0x0) {
                                                lVar7 = *plVar5;
                                                if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                  uVar12 = uVar13;
                                                  do {
                                                    if (*(longlong *)
                                                         (*(longlong *)(lVar7 + 0xb0) +
                                                         uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                      puVar6 = (undefined8 *)
                                                               ((longlong)
                                                                (*(int *)(*(longlong *)
                                                                           (lVar7 + 0xb0) + 8 +
                                                                         uVar12 * 0x10) + 0x1d) *
                                                                0x10 + 0x138 + lVar7);
                                                      goto code_r0x000180766099;
                                                    }
                                                    uVar11 = (short)uVar12 + 1;
                                                    uVar12 = (ulonglong)uVar11;
                                                  } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
                                                }
                                                puVar6 = (undefined8 *)
                                                         FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x1d);
code_r0x000180766099:
                                                uStack_78 = uVar9;
                                                uStack_70 = uVar3;
                                                uStack_68 = uVar1;
                                                (*(code *)*puVar6)(plVar5,&uStack_78,puVar6[1]);
                                                if (*(longlong *)(param_1 + 0x30) != 0) {
                                                  plVar5 = (longlong *)
                                                                                                                      
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x30),0);
                                                  if (*(longlong *)(param_1 + 0x30) != 0) {
                                                    plVar10 = (longlong *)
                                                                                                                            
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x30),0);
                                                  puVar6 = (undefined8 *)
                                                                                                                      
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_78,0x40400000,0);
                                                  if (plVar10 != (longlong *)0x0) {
                                                    lVar7 = *plVar10;
                                                    uVar9 = *puVar6;
                                                    uVar1 = *(undefined4 *)(puVar6 + 1);
                                                    if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                      uVar12 = uVar13;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar7 + 0xb0) +
                                                             uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar6 = (undefined8 *)
                                                                   ((longlong)
                                                                    (*(int *)(*(longlong *)
                                                                               (lVar7 + 0xb0) + 8 +
                                                                             uVar12 * 0x10) + 0x5f)
                                                                    * 0x10 + 0x138 + lVar7);
                                                          goto code_r0x000180766157;
                                                        }
                                                        uVar11 = (short)uVar12 + 1;
                                                        uVar12 = (ulonglong)uVar11;
                                                      } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
                                                    }
                                                    puVar6 = (undefined8 *)
                                                             FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,
                                                                           0x5f);
code_r0x000180766157:
                                                    uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
                                                    uStack_78 = uVar9;
                                                    (*(code *)*puVar6)(plVar10,&uStack_78,puVar6[1])
                                                    ;
                                                    if (plVar5 != (longlong *)0x0) {
                                                      lVar7 = *plVar5;
                                                      if (*(ushort *)(lVar7 + 0x12e) != 0) {
                                                        do {
                                                          if (*(longlong *)
                                                               (*(longlong *)(lVar7 + 0xb0) +
                                                               uVar13 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                            puVar6 = (undefined8 *)
                                                                     ((longlong)
                                                                      (*(int *)(*(longlong *)
                                                                                 (lVar7 + 0xb0) + 8
                                                                               + uVar13 * 0x10) +
                                                                      0x65) * 0x10 + 0x138 + lVar7);
                                                            goto code_r0x0001807661c9;
                                                          }
                                                          uVar11 = (short)uVar13 + 1;
                                                          uVar13 = (ulonglong)uVar11;
                                                        } while (uVar11 < *(ushort *)(lVar7 + 0x12e)
                                                                );
                                                      }
                                                      puVar6 = (undefined8 *)
                                                               FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,
                                                                             0x65);
code_r0x0001807661c9:
                                                      uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
                                                      uStack_78 = uVar9;
                                                      (*(code *)*puVar6)(plVar5,&uStack_78,puVar6[1]
                                                                        );
                                                      if (*(longlong *)(param_1 + 0x30) != 0) {
                                                        lVar7 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x30),0);
                                                  uVar9 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                                                  if (lVar7 != 0) {
                                                    FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar7,uVar9);
                                                    uVar9 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar9,param_1,MD_SystemMenuWindow._MontaLista_b__12_0
                                                                  ,0);
                                                    SystemMenuWindow__Item
                                                              (param_1,LIT_"'Youtube'",
                                                               LIT_"'YouTube'",uVar9,0);
                                                    uVar9 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar9,param_1,MD_SystemMenuWindow._MontaLista_b__12_1
                                                                  ,0);
                                                    SystemMenuWindow__Item
                                                              (param_1,LIT_"'Discord'",
                                                               LIT_"'Discord'",uVar9,0);
                                                    uVar9 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar9,param_1,MD_SystemMenuWindow._MontaLista_b__12_2
                                                                  ,0);
                                                    SystemMenuWindow__Item
                                                              (param_1,LIT_"'Facebook'",
                                                               LIT_"'Facebook'",uVar9,0);
                                                    SystemMenuWindow__Separador(param_1,0);
                                                    if (*(int *)(TI_SystemMenuWindow.<>c + 0xe4) == 0)
                                                    {
                                                      func_0x000180315660();
                                                    }
                                                    uVar3 = LIT_"'Attendance / VIP'";
                                                    uVar9 = LIT_"'Attend'";
                                                    lVar7 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SystemMenuWindow.<>c + 0xb8) + 8);
                                                    if (lVar7 == 0) {
                                                      if (*(int *)(TI_SystemMenuWindow.<>c + 0xe4) == 0
                                                         ) {
                                                        func_0x000180315660();
                                                      }
                                                      uVar2 = **(undefined8 **)
                                                                (TI_SystemMenuWindow.<>c + 0xb8);
                                                      lVar7 = func_0x000180315580(TI_System.Action);
                                                      FUN_1816a9c60(lVar7,uVar2,MD_SystemMenuWindow.__c._MontaLista_b__12_3
                                                                    ,0);
                                                      *(longlong *)
                                                       (*(longlong *)(TI_SystemMenuWindow.<>c + 0xb8) +
                                                       8) = lVar7;
                                                      func_0x000180314690(*(longlong *)
                                                                           (TI_SystemMenuWindow.<>c +
                                                                           0xb8) + 8,lVar7);
                                                    }
                                                    SystemMenuWindow__Item
                                                              (param_1,uVar9,uVar3,lVar7,0);
                                                    if (*(int *)(TI_SystemMenuWindow.<>c + 0xe4) == 0)
                                                    {
                                                      func_0x000180315660();
                                                    }
                                                    uVar3 = LIT_"'Post'";
                                                    uVar9 = LIT_"'Mailbox'";
                                                    lVar7 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SystemMenuWindow.<>c + 0xb8) + 0x10)
                                                    ;
                                                    if (lVar7 == 0) {
                                                      if (*(int *)(TI_SystemMenuWindow.<>c + 0xe4) == 0
                                                         ) {
                                                        func_0x000180315660();
                                                      }
                                                      uVar2 = **(undefined8 **)
                                                                (TI_SystemMenuWindow.<>c + 0xb8);
                                                      lVar7 = func_0x000180315580(TI_System.Action);
                                                      FUN_1816a9c60(lVar7,uVar2,MD_SystemMenuWindow.__c._MontaLista_b__12_4
                                                                    ,0);
                                                      *(longlong *)
                                                       (*(longlong *)(TI_SystemMenuWindow.<>c + 0xb8) +
                                                       0x10) = lVar7;
                                                      func_0x000180314690(*(longlong *)
                                                                           (TI_SystemMenuWindow.<>c +
                                                                           0xb8) + 0x10,lVar7);
                                                    }
                                                    SystemMenuWindow__Item
                                                              (param_1,uVar3,uVar9,lVar7,0);
                                                    if (*(int *)(TI_SystemMenuWindow.<>c + 0xe4) == 0)
                                                    {
                                                      func_0x000180315660();
                                                    }
                                                    uVar3 = LIT_"'Friend Manager'";
                                                    uVar9 = LIT_"'Friend'";
                                                    lVar7 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SystemMenuWindow.<>c + 0xb8) + 0x18)
                                                    ;
                                                    if (lVar7 == 0) {
                                                      if (*(int *)(TI_SystemMenuWindow.<>c + 0xe4) == 0
                                                         ) {
                                                        func_0x000180315660();
                                                      }
                                                      uVar2 = **(undefined8 **)
                                                                (TI_SystemMenuWindow.<>c + 0xb8);
                                                      lVar7 = func_0x000180315580(TI_System.Action);
                                                      FUN_1816a9c60(lVar7,uVar2,MD_SystemMenuWindow.__c._MontaLista_b__12_5
                                                                    ,0);
                                                      *(longlong *)
                                                       (*(longlong *)(TI_SystemMenuWindow.<>c + 0xb8) +
                                                       0x18) = lVar7;
                                                      func_0x000180314690(*(longlong *)
                                                                           (TI_SystemMenuWindow.<>c +
                                                                           0xb8) + 0x18,lVar7);
                                                    }
                                                    SystemMenuWindow__Item
                                                              (param_1,uVar9,uVar3,lVar7,0);
                                                    if (*(int *)(TI_SystemMenuWindow.<>c + 0xe4) == 0)
                                                    {
                                                      func_0x000180315660();
                                                    }
                                                    uVar3 = LIT_"'Community'";
                                                    uVar9 = LIT_"'Bbs'";
                                                    lVar7 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SystemMenuWindow.<>c + 0xb8) + 0x20)
                                                    ;
                                                    if (lVar7 == 0) {
                                                      if (*(int *)(TI_SystemMenuWindow.<>c + 0xe4) == 0
                                                         ) {
                                                        func_0x000180315660();
                                                      }
                                                      uVar2 = **(undefined8 **)
                                                                (TI_SystemMenuWindow.<>c + 0xb8);
                                                      lVar7 = func_0x000180315580(TI_System.Action);
                                                      FUN_1816a9c60(lVar7,uVar2,MD_SystemMenuWindow.__c._MontaLista_b__12_6
                                                                    ,0);
                                                      *(longlong *)
                                                       (*(longlong *)(TI_SystemMenuWindow.<>c + 0xb8) +
                                                       0x20) = lVar7;
                                                      func_0x000180314690(*(longlong *)
                                                                           (TI_SystemMenuWindow.<>c +
                                                                           0xb8) + 0x20,lVar7);
                                                    }
                                                    SystemMenuWindow__Item
                                                              (param_1,uVar9,uVar3,lVar7,0);
                                                    SystemMenuWindow__Separador(param_1,0);
                                                    if (*(int *)(TI_SystemMenuWindow.<>c + 0xe4) == 0)
                                                    {
                                                      func_0x000180315660();
                                                    }
                                                    uVar9 = LIT_"'Shortcut'";
                                                    lVar7 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SystemMenuWindow.<>c + 0xb8) + 0x28)
                                                    ;
                                                    if (lVar7 == 0) {
                                                      if (*(int *)(TI_SystemMenuWindow.<>c + 0xe4) == 0
                                                         ) {
                                                        func_0x000180315660();
                                                      }
                                                      uVar3 = **(undefined8 **)
                                                                (TI_SystemMenuWindow.<>c + 0xb8);
                                                      lVar7 = func_0x000180315580(TI_System.Action);
                                                      FUN_1816a9c60(lVar7,uVar3,MD_SystemMenuWindow.__c._MontaLista_b__12_7
                                                                    ,0);
                                                      *(longlong *)
                                                       (*(longlong *)(TI_SystemMenuWindow.<>c + 0xb8) +
                                                       0x28) = lVar7;
                                                      func_0x000180314690(*(longlong *)
                                                                           (TI_SystemMenuWindow.<>c +
                                                                           0xb8) + 0x28,lVar7);
                                                    }
                                                    SystemMenuWindow__Item
                                                              (param_1,uVar9,uVar9,lVar7,0);
                                                    if (*(int *)(TI_SystemMenuWindow.<>c + 0xe4) == 0)
                                                    {
                                                      func_0x000180315660();
                                                    }
                                                    uVar9 = LIT_"'Macro'";
                                                    lVar7 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SystemMenuWindow.<>c + 0xb8) + 0x30)
                                                    ;
                                                    if (lVar7 == 0) {
                                                      if (*(int *)(TI_SystemMenuWindow.<>c + 0xe4) == 0
                                                         ) {
                                                        func_0x000180315660();
                                                      }
                                                      uVar3 = **(undefined8 **)
                                                                (TI_SystemMenuWindow.<>c + 0xb8);
                                                      lVar7 = func_0x000180315580(TI_System.Action);
                                                      FUN_1816a9c60(lVar7,uVar3,MD_SystemMenuWindow.__c._MontaLista_b__12_8
                                                                    ,0);
                                                      *(longlong *)
                                                       (*(longlong *)(TI_SystemMenuWindow.<>c + 0xb8) +
                                                       0x30) = lVar7;
                                                      func_0x000180314690(*(longlong *)
                                                                           (TI_SystemMenuWindow.<>c +
                                                                           0xb8) + 0x30,lVar7);
                                                    }
                                                    SystemMenuWindow__Item
                                                              (param_1,uVar9,uVar9,lVar7,0);
                                                    if (*(int *)(TI_SystemMenuWindow.<>c + 0xe4) == 0)
                                                    {
                                                      func_0x000180315660();
                                                    }
                                                    uVar3 = LIT_"'Options'";
                                                    uVar9 = LIT_"'Option'";
                                                    lVar7 = *(longlong *)
                                                             (*(longlong *)
                                                               (TI_SystemMenuWindow.<>c + 0xb8) + 0x38)
                                                    ;
                                                    if (lVar7 == 0) {
                                                      if (*(int *)(TI_SystemMenuWindow.<>c + 0xe4) == 0
                                                         ) {
                                                        func_0x000180315660();
                                                      }
                                                      uVar2 = **(undefined8 **)
                                                                (TI_SystemMenuWindow.<>c + 0xb8);
                                                      lVar7 = func_0x000180315580(TI_System.Action);
                                                      FUN_1816a9c60(lVar7,uVar2,MD_SystemMenuWindow.__c._MontaLista_b__12_9
                                                                    ,0);
                                                      *(longlong *)
                                                       (*(longlong *)(TI_SystemMenuWindow.<>c + 0xb8) +
                                                       0x38) = lVar7;
                                                      func_0x000180314690(*(longlong *)
                                                                           (TI_SystemMenuWindow.<>c +
                                                                           0xb8) + 0x38,lVar7);
                                                    }
                                                    SystemMenuWindow__Item
                                                              (param_1,uVar9,uVar3,lVar7,0);
                                                    SystemMenuWindow__Separador(param_1,0);
                                                    uVar9 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar9,param_1,MD_SystemMenuWindow.HandleRestartButtonClick
                                                                  ,0);
                                                    SystemMenuWindow__Item
                                                              (param_1,LIT_"'Restart'",
                                                               LIT_"'Restart'",uVar9,0);
                                                    uVar9 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar9,param_1,MD_SystemMenuWindow.HandleExitButtonClick
                                                                  ,0);
                                                    SystemMenuWindow__Item
                                                              (param_1,LIT_"'Exit'",
                                                               LIT_"'Exit Game'",uVar9,0);
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
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

