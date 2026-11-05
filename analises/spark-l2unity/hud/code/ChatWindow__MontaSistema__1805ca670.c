// ChatWindow__MontaSistema__1805ca670 @ 0x1805ca670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__MontaSistema__1805ca670(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  ushort uVar14;
  ulonglong uVar16;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_30;
  ulonglong uVar15;
  
  if (cRam00000001834b3abb == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_ChatWindow.BordaDoSistema);
    FUN_180315380(MD_ChatWindow._MontaSistema_b__50_0);
    FUN_180315380(MD_ChatWindow._MontaSistema_b__50_1);
    FUN_180315380(TI_ChatWindow);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'UpBTN_down'");
    FUN_180315380(LIT_"'spark_sysmsg_h'");
    FUN_180315380(LIT_"'Data/UI/Assets/SparkChat/ChatWndBg'");
    FUN_180315380(LIT_"'DownBTN_nomal'");
    FUN_180315380(LIT_"'DownBTN_down'");
    FUN_180315380(LIT_"'UpBTN_nomal'");
    cRam00000001834b3abb = '\x01';
  }
  UnityEngine_PlayerPrefs__GetInt(LIT_"'spark_sysmsg_h'",0xe8,0);
  uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(uVar7,0);
  *(undefined8 *)(param_1 + 0xc0) = uVar7;
  func_0x000180314690(param_1 + 0xc0,uVar7);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    lVar8 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
    uVar7 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    if (lVar8 != 0) {
      FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar8,uVar7);
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        plVar9 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
        puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_98);
        if (plVar9 != (longlong *)0x0) {
          uVar7 = *puVar10;
          uVar1 = *(undefined4 *)(puVar10 + 1);
          lVar8 = *plVar9;
          uVar16 = 0;
          if (*(ushort *)(lVar8 + 0x12e) != 0) {
            uVar15 = uVar16;
            do {
              if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                puVar10 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar15 * 0x10) + 0x47) * 0x10
                           + 0x138 + lVar8);
                goto code_r0x0001805ca8c9;
              }
              uVar14 = (short)uVar15 + 1;
              uVar15 = (ulonglong)uVar14;
            } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
          }
          puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001805ca8c9:
          uStack_98 = uVar7;
          uStack_90 = uVar1;
          (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]);
          if (*(longlong *)(param_1 + 0xc0) != 0) {
            plVar9 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style
                               (*(longlong *)(param_1 + 0xc0),0);
            puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_98);
            if (plVar9 != (longlong *)0x0) {
              uVar7 = *puVar10;
              uVar1 = *(undefined4 *)(puVar10 + 1);
              lVar8 = *plVar9;
              if (*(ushort *)(lVar8 + 0x12e) != 0) {
                uVar15 = uVar16;
                do {
                  if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle)
                  {
                    puVar10 = (undefined8 *)
                              ((longlong)
                               (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar15 * 0x10) + 0x69) *
                               0x10 + 0x138 + lVar8);
                    goto code_r0x0001805ca969;
                  }
                  uVar14 = (short)uVar15 + 1;
                  uVar15 = (ulonglong)uVar14;
                } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
              }
              puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x69);
code_r0x0001805ca969:
              uStack_98 = uVar7;
              uStack_90 = uVar1;
              (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]);
              if (*(longlong *)(param_1 + 0xc0) != 0) {
                plVar9 = (longlong *)
                         UnityEngine_UIElements_VisualElement__get_style
                                   (*(longlong *)(param_1 + 0xc0),0);
                uVar7 = func_0x0001825fc350(0x42c80000,0);
                puVar10 = (undefined8 *)
                          UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_98,uVar7,0);
                if (plVar9 != (longlong *)0x0) {
                  uVar7 = *puVar10;
                  uVar1 = *(undefined4 *)(puVar10 + 1);
                  lVar8 = *plVar9;
                  if (*(ushort *)(lVar8 + 0x12e) != 0) {
                    uVar15 = uVar16;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar15 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar10 = (undefined8 *)
                                  ((longlong)
                                   (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar15 * 0x10) + 0x2d
                                   ) * 0x10 + 0x138 + lVar8);
                        goto code_r0x0001805caa19;
                      }
                      uVar14 = (short)uVar15 + 1;
                      uVar15 = (ulonglong)uVar14;
                    } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
                  }
                  puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x2d);
code_r0x0001805caa19:
                  uStack_98 = uVar7;
                  uStack_90 = uVar1;
                  (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]);
                  if (*(longlong *)(param_1 + 0xc0) != 0) {
                    plVar9 = (longlong *)
                             UnityEngine_UIElements_VisualElement__get_style
                                       (*(longlong *)(param_1 + 0xc0),0);
                    puVar10 = (undefined8 *)
                              UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_98);
                    if (plVar9 != (longlong *)0x0) {
                      uVar7 = *puVar10;
                      uVar1 = *(undefined4 *)(puVar10 + 1);
                      lVar8 = *plVar9;
                      if (*(ushort *)(lVar8 + 0x12e) != 0) {
                        uVar15 = uVar16;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar15 * 0x10) ==
                              TI_UnityEngine.UIElements.IStyle) {
                            puVar10 = (undefined8 *)
                                      ((longlong)
                                       (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar15 * 0x10) +
                                       0x4b) * 0x10 + 0x138 + lVar8);
                            goto code_r0x0001805caac9;
                          }
                          uVar14 = (short)uVar15 + 1;
                          uVar15 = (ulonglong)uVar14;
                        } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
                      }
                      puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x0001805caac9:
                      uStack_98 = uVar7;
                      uStack_90 = uVar1;
                      (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]);
                      if (*(longlong *)(param_1 + 0xc0) != 0) {
                        plVar9 = (longlong *)
                                 UnityEngine_UIElements_VisualElement__get_style
                                           (*(longlong *)(param_1 + 0xc0),0);
                        puVar10 = (undefined8 *)
                                  UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_98);
                        if (plVar9 != (longlong *)0x0) {
                          uVar7 = *puVar10;
                          uVar1 = *(undefined4 *)(puVar10 + 1);
                          lVar8 = *plVar9;
                          if (*(ushort *)(lVar8 + 0x12e) != 0) {
                            uVar15 = uVar16;
                            do {
                              if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar15 * 0x10) ==
                                  TI_UnityEngine.UIElements.IStyle) {
                                puVar10 = (undefined8 *)
                                          ((longlong)
                                           (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + uVar15 * 0x10
                                                    ) + 0x43) * 0x10 + 0x138 + lVar8);
                                goto code_r0x0001805cab79;
                              }
                              uVar14 = (short)uVar15 + 1;
                              uVar15 = (ulonglong)uVar14;
                            } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
                          }
                          puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001805cab79:
                          uStack_98 = uVar7;
                          uStack_90 = uVar1;
                          (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]);
                          if (*(longlong *)(param_1 + 0xc0) != 0) {
                            plVar9 = (longlong *)
                                     UnityEngine_UIElements_VisualElement__get_style
                                               (*(longlong *)(param_1 + 0xc0),0);
                            if (*(int *)(TI_SparkArte + 0xe4) == 0) {
                              func_0x000180315660();
                            }
                            uVar7 = FUN_180a90ae0(LIT_"'Data/UI/Assets/SparkChat/ChatWndBg'",MR_SparkArte.Load<UnityEngine.Texture2D>);
                            puVar10 = (undefined8 *)
                                      UnityEngine_UIElements_StyleBackground__op_Implicit
                                                (&uStack_88,uVar7,0);
                            if (plVar9 != (longlong *)0x0) {
                              uVar13 = *puVar10;
                              uVar4 = puVar10[1];
                              uVar5 = puVar10[2];
                              uVar6 = puVar10[3];
                              uVar7 = puVar10[4];
                              lVar8 = *plVar9;
                              if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                uVar15 = uVar16;
                                do {
                                  if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + uVar15 * 0x10) ==
                                      TI_UnityEngine.UIElements.IStyle) {
                                    puVar10 = (undefined8 *)
                                              ((longlong)
                                               (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                        uVar15 * 0x10) + 0xb) * 0x10 + 0x138 + lVar8
                                              );
                                    goto code_r0x0001805cac49;
                                  }
                                  uVar14 = (short)uVar15 + 1;
                                  uVar15 = (ulonglong)uVar14;
                                } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
                              }
                              puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001805cac49:
                              uStack_88 = uVar13;
                              uStack_80 = uVar4;
                              uStack_78 = uVar5;
                              uStack_70 = uVar6;
                              uStack_68 = uVar7;
                              (*(code *)*puVar10)(plVar9,&uStack_88,puVar10[1]);
                              if (*(longlong *)(param_1 + 0xc0) != 0) {
                                UnityEngine_UIElements_VisualElement__set_pickingMode
                                          (*(longlong *)(param_1 + 0xc0),0,0);
                                if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
                                  func_0x000180315660();
                                }
                                uVar7 = ChatWindow__Lista__1805c7760(0);
                                *(undefined8 *)(param_1 + 0x100) = uVar7;
                                func_0x000180314690(param_1 + 0x100,uVar7);
                                if (*(longlong *)(param_1 + 0x100) != 0) {
                                  plVar9 = (longlong *)
                                           UnityEngine_UIElements_VisualElement__get_style
                                                     (*(longlong *)(param_1 + 0x100),0);
                                  puVar10 = (undefined8 *)
                                            UnityEngine_UIElements_StyleLength__op_Implicit
                                                      (&uStack_98);
                                  if (plVar9 != (longlong *)0x0) {
                                    uVar7 = *puVar10;
                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                    lVar8 = *plVar9;
                                    if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                      uVar15 = uVar16;
                                      do {
                                        if (*(longlong *)
                                             (*(longlong *)(lVar8 + 0xb0) + uVar15 * 0x10) ==
                                            TI_UnityEngine.UIElements.IStyle) {
                                          puVar10 = (undefined8 *)
                                                    ((longlong)
                                                     (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                              uVar15 * 0x10) + 0x47) * 0x10 + 0x138
                                                    + lVar8);
                                          goto code_r0x0001805cad49;
                                        }
                                        uVar14 = (short)uVar15 + 1;
                                        uVar15 = (ulonglong)uVar14;
                                      } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
                                    }
                                    puVar10 = (undefined8 *)
                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x0001805cad49:
                                    uStack_98 = uVar7;
                                    uStack_90 = uVar1;
                                    (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]);
                                    if (*(longlong *)(param_1 + 0x100) != 0) {
                                      plVar9 = (longlong *)
                                               UnityEngine_UIElements_VisualElement__get_style
                                                         (*(longlong *)(param_1 + 0x100),0);
                                      puVar10 = (undefined8 *)
                                                UnityEngine_UIElements_StyleLength__op_Implicit
                                                          (&uStack_98);
                                      if (plVar9 != (longlong *)0x0) {
                                        uVar7 = *puVar10;
                                        uVar1 = *(undefined4 *)(puVar10 + 1);
                                        lVar8 = *plVar9;
                                        if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                          uVar15 = uVar16;
                                          do {
                                            if (*(longlong *)
                                                 (*(longlong *)(lVar8 + 0xb0) + uVar15 * 0x10) ==
                                                TI_UnityEngine.UIElements.IStyle) {
                                              puVar10 = (undefined8 *)
                                                        ((longlong)
                                                         (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                                  uVar15 * 0x10) + 0x73) * 0x10 +
                                                         0x138 + lVar8);
                                              goto code_r0x0001805cadf9;
                                            }
                                            uVar14 = (short)uVar15 + 1;
                                            uVar15 = (ulonglong)uVar14;
                                          } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
                                        }
                                        puVar10 = (undefined8 *)
                                                  FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x0001805cadf9:
                                        uStack_98 = uVar7;
                                        uStack_90 = uVar1;
                                        (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]);
                                        if (*(longlong *)(param_1 + 0x100) != 0) {
                                          plVar9 = (longlong *)
                                                   UnityEngine_UIElements_VisualElement__get_style
                                                             (*(longlong *)(param_1 + 0x100),0);
                                          puVar10 = (undefined8 *)
                                                    UnityEngine_UIElements_StyleLength__op_Implicit
                                                              (&uStack_98);
                                          if (plVar9 != (longlong *)0x0) {
                                            uVar7 = *puVar10;
                                            uVar1 = *(undefined4 *)(puVar10 + 1);
                                            lVar8 = *plVar9;
                                            if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                              uVar15 = uVar16;
                                              do {
                                                if (*(longlong *)
                                                     (*(longlong *)(lVar8 + 0xb0) + uVar15 * 0x10)
                                                    == TI_UnityEngine.UIElements.IStyle) {
                                                  puVar10 = (undefined8 *)
                                                            ((longlong)
                                                             (*(int *)(*(longlong *)(lVar8 + 0xb0) +
                                                                       8 + uVar15 * 0x10) + 0x69) *
                                                             0x10 + 0x138 + lVar8);
                                                  goto code_r0x0001805caea9;
                                                }
                                                uVar14 = (short)uVar15 + 1;
                                                uVar15 = (ulonglong)uVar14;
                                              } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
                                            }
                                            puVar10 = (undefined8 *)
                                                      FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x69);
code_r0x0001805caea9:
                                            uStack_98 = uVar7;
                                            uStack_90 = uVar1;
                                            (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]);
                                            if (*(longlong *)(param_1 + 0x100) != 0) {
                                              plVar9 = (longlong *)
                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0x100),0);
                                              puVar10 = (undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_98);
                                              if (plVar9 != (longlong *)0x0) {
                                                uVar7 = *puVar10;
                                                uVar1 = *(undefined4 *)(puVar10 + 1);
                                                lVar8 = *plVar9;
                                                if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                                  uVar15 = uVar16;
                                                  do {
                                                    if (*(longlong *)
                                                         (*(longlong *)(lVar8 + 0xb0) +
                                                         uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                      puVar10 = (undefined8 *)
                                                                ((longlong)
                                                                 (*(int *)(*(longlong *)
                                                                            (lVar8 + 0xb0) + 8 +
                                                                          uVar15 * 0x10) + 0x2d) *
                                                                 0x10 + 0x138 + lVar8);
                                                      goto code_r0x0001805caf59;
                                                    }
                                                    uVar14 = (short)uVar15 + 1;
                                                    uVar15 = (ulonglong)uVar14;
                                                  } while (uVar14 < *(ushort *)(lVar8 + 0x12e));
                                                }
                                                puVar10 = (undefined8 *)
                                                          FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x2d);
code_r0x0001805caf59:
                                                uStack_98 = uVar7;
                                                uStack_90 = uVar1;
                                                (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]);
                                                if (*(longlong *)(param_1 + 0xc0) != 0) {
                                                  UnityEngine_UIElements_VisualElement__Add
                                                            (*(longlong *)(param_1 + 0xc0),
                                                             *(undefined8 *)(param_1 + 0x100),0);
                                                  uVar7 = func_0x000180315580(TI_System.Action);
                                                  FUN_1816a9c60(uVar7,param_1,MD_ChatWindow._MontaSistema_b__50_0,0
                                                               );
                                                  lVar8 = ChatWindow__Botao__1805c55e0
                                                                    (LIT_"'UpBTN_nomal'",
                                                                     LIT_"'UpBTN_nomal'",
                                                                     LIT_"'UpBTN_down'",0,0,0x10,
                                                                     10,uVar7,1,0);
                                                  if (lVar8 != 0) {
                                                    plVar9 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar8,0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit
                                                            (&uStack_98,2,0);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    uVar7 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    lVar11 = *plVar9;
                                                    if (*(ushort *)(lVar11 + 0x12e) != 0) {
                                                      uVar15 = uVar16;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar11 + 0xb0) +
                                                             uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar11 + 0xb0) + 8
                                                                              + uVar15 * 0x10) +
                                                                     0x47) * 0x10 + 0x138 + lVar11);
                                                          goto code_r0x0001805cb079;
                                                        }
                                                        uVar14 = (short)uVar15 + 1;
                                                        uVar15 = (ulonglong)uVar14;
                                                      } while (uVar14 < *(ushort *)(lVar11 + 0x12e))
                                                      ;
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0x47);
code_r0x0001805cb079:
                                                    uStack_98 = uVar7;
                                                    uStack_90 = uVar1;
                                                    (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]
                                                                       );
                                                    plVar9 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar8,0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit
                                                            (&uStack_98,2,0);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    uVar7 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    lVar11 = *plVar9;
                                                    if (*(ushort *)(lVar11 + 0x12e) != 0) {
                                                      uVar15 = uVar16;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar11 + 0xb0) +
                                                             uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar11 + 0xb0) + 8
                                                                              + uVar15 * 0x10) +
                                                                     0x2d) * 0x10 + 0x138 + lVar11);
                                                          goto code_r0x0001805cb119;
                                                        }
                                                        uVar14 = (short)uVar15 + 1;
                                                        uVar15 = (ulonglong)uVar14;
                                                      } while (uVar14 < *(ushort *)(lVar11 + 0x12e))
                                                      ;
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0x2d);
code_r0x0001805cb119:
                                                    uStack_98 = uVar7;
                                                    uStack_90 = uVar1;
                                                    (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]
                                                                       );
                                                    plVar9 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar8,0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_98);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    uVar7 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    lVar11 = *plVar9;
                                                    if (*(ushort *)(lVar11 + 0x12e) != 0) {
                                                      uVar15 = uVar16;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar11 + 0xb0) +
                                                             uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar11 + 0xb0) + 8
                                                                              + uVar15 * 0x10) +
                                                                     0x69) * 0x10 + 0x138 + lVar11);
                                                          goto code_r0x0001805cb1b9;
                                                        }
                                                        uVar14 = (short)uVar15 + 1;
                                                        uVar15 = (ulonglong)uVar14;
                                                      } while (uVar14 < *(ushort *)(lVar11 + 0x12e))
                                                      ;
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0x69);
code_r0x0001805cb1b9:
                                                    uStack_98 = uVar7;
                                                    uStack_90 = uVar1;
                                                    (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]
                                                                       );
                                                    plVar9 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar8,0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_98);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    uVar7 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    lVar11 = *plVar9;
                                                    if (*(ushort *)(lVar11 + 0x12e) != 0) {
                                                      uVar15 = uVar16;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar11 + 0xb0) +
                                                             uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar11 + 0xb0) + 8
                                                                              + uVar15 * 0x10) +
                                                                     0x73) * 0x10 + 0x138 + lVar11);
                                                          goto code_r0x0001805cb259;
                                                        }
                                                        uVar14 = (short)uVar15 + 1;
                                                        uVar15 = (ulonglong)uVar14;
                                                      } while (uVar14 < *(ushort *)(lVar11 + 0x12e))
                                                      ;
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0x73);
code_r0x0001805cb259:
                                                    uStack_98 = uVar7;
                                                    uStack_90 = uVar1;
                                                    (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]
                                                                       );
                                                    uVar7 = func_0x000180315580(TI_System.Action);
                                                    FUN_1816a9c60(uVar7,param_1,MD_ChatWindow._MontaSistema_b__50_1
                                                                  ,0);
                                                    lVar11 = ChatWindow__Botao__1805c55e0
                                                                       (LIT_"'DownBTN_nomal'",
                                                                        LIT_"'DownBTN_nomal'",
                                                                        LIT_"'DownBTN_down'",0,0,
                                                                        0x10,10,uVar7,1,0);
                                                    if (lVar11 != 0) {
                                                      plVar9 = (longlong *)
                                                                                                                              
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar11,0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit
                                                            (&uStack_98,2,0);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    uVar7 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    lVar2 = *plVar9;
                                                    if (*(ushort *)(lVar2 + 0x12e) != 0) {
                                                      uVar15 = uVar16;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar2 + 0xb0) +
                                                             uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar2 + 0xb0) + 8 +
                                                                              uVar15 * 0x10) + 0x47)
                                                                     * 0x10 + 0x138 + lVar2);
                                                          goto code_r0x0001805cb359;
                                                        }
                                                        uVar14 = (short)uVar15 + 1;
                                                        uVar15 = (ulonglong)uVar14;
                                                      } while (uVar14 < *(ushort *)(lVar2 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0x47);
code_r0x0001805cb359:
                                                    uStack_98 = uVar7;
                                                    uStack_90 = uVar1;
                                                    (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]
                                                                       );
                                                    plVar9 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar11,0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit
                                                            (&uStack_98,2,0);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    uVar7 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    lVar2 = *plVar9;
                                                    if (*(ushort *)(lVar2 + 0x12e) != 0) {
                                                      uVar15 = uVar16;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar2 + 0xb0) +
                                                             uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar2 + 0xb0) + 8 +
                                                                              uVar15 * 0x10) + 0x2d)
                                                                     * 0x10 + 0x138 + lVar2);
                                                          goto code_r0x0001805cb3f9;
                                                        }
                                                        uVar14 = (short)uVar15 + 1;
                                                        uVar15 = (ulonglong)uVar14;
                                                      } while (uVar14 < *(ushort *)(lVar2 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0x2d);
code_r0x0001805cb3f9:
                                                    uStack_98 = uVar7;
                                                    uStack_90 = uVar1;
                                                    (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]
                                                                       );
                                                    plVar9 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar11,0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_98);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    uVar7 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    lVar2 = *plVar9;
                                                    if (*(ushort *)(lVar2 + 0x12e) != 0) {
                                                      uVar15 = uVar16;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar2 + 0xb0) +
                                                             uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar2 + 0xb0) + 8 +
                                                                              uVar15 * 0x10) + 0x69)
                                                                     * 0x10 + 0x138 + lVar2);
                                                          goto code_r0x0001805cb499;
                                                        }
                                                        uVar14 = (short)uVar15 + 1;
                                                        uVar15 = (ulonglong)uVar14;
                                                      } while (uVar14 < *(ushort *)(lVar2 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0x69);
code_r0x0001805cb499:
                                                    uStack_98 = uVar7;
                                                    uStack_90 = uVar1;
                                                    (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]
                                                                       );
                                                    plVar9 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar11,0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_98);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    uVar7 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    lVar2 = *plVar9;
                                                    if (*(ushort *)(lVar2 + 0x12e) != 0) {
                                                      uVar15 = uVar16;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar2 + 0xb0) +
                                                             uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar2 + 0xb0) + 8 +
                                                                              uVar15 * 0x10) + 0x73)
                                                                     * 0x10 + 0x138 + lVar2);
                                                          goto code_r0x0001805cb529;
                                                        }
                                                        uVar14 = (short)uVar15 + 1;
                                                        uVar15 = (ulonglong)uVar14;
                                                      } while (uVar14 < *(ushort *)(lVar2 + 0x12e));
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0x73);
code_r0x0001805cb529:
                                                    uStack_98 = uVar7;
                                                    uStack_90 = uVar1;
                                                    (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]
                                                                       );
                                                    if (*(longlong *)(param_1 + 0xc0) != 0) {
                                                      UnityEngine_UIElements_VisualElement__Add
                                                                (*(longlong *)(param_1 + 0xc0),lVar8
                                                                 ,0);
                                                      if (*(longlong *)(param_1 + 0xc0) != 0) {
                                                        UnityEngine_UIElements_VisualElement__Add
                                                                  (*(longlong *)(param_1 + 0xc0),
                                                                   lVar11,0);
                                                        lVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                                                        UnityEngine_UIElements_VisualElement___ctor
                                                                  (lVar8,0);
                                                        if (lVar8 != 0) {
                                                          lVar11 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar8,0);
                                                  uVar7 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
                                                  if (lVar11 != 0) {
                                                    FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar11,uVar7);
                                                    plVar9 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar8,0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_98);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    uVar7 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    lVar11 = *plVar9;
                                                    if (*(ushort *)(lVar11 + 0x12e) != 0) {
                                                      uVar15 = uVar16;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar11 + 0xb0) +
                                                             uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar11 + 0xb0) + 8
                                                                              + uVar15 * 0x10) +
                                                                     0x47) * 0x10 + 0x138 + lVar11);
                                                          goto code_r0x0001805cb659;
                                                        }
                                                        uVar14 = (short)uVar15 + 1;
                                                        uVar15 = (ulonglong)uVar14;
                                                      } while (uVar14 < *(ushort *)(lVar11 + 0x12e))
                                                      ;
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0x47);
code_r0x0001805cb659:
                                                    uStack_98 = uVar7;
                                                    uStack_90 = uVar1;
                                                    (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]
                                                                       );
                                                    plVar9 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar8,0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_98);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    uVar7 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    lVar11 = *plVar9;
                                                    if (*(ushort *)(lVar11 + 0x12e) != 0) {
                                                      uVar15 = uVar16;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar11 + 0xb0) +
                                                             uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar11 + 0xb0) + 8
                                                                              + uVar15 * 0x10) +
                                                                     0x69) * 0x10 + 0x138 + lVar11);
                                                          goto code_r0x0001805cb6f9;
                                                        }
                                                        uVar14 = (short)uVar15 + 1;
                                                        uVar15 = (ulonglong)uVar14;
                                                      } while (uVar14 < *(ushort *)(lVar11 + 0x12e))
                                                      ;
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0x69);
code_r0x0001805cb6f9:
                                                    uStack_98 = uVar7;
                                                    uStack_90 = uVar1;
                                                    (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]
                                                                       );
                                                    plVar9 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar8,0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_98);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    uVar7 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    lVar11 = *plVar9;
                                                    if (*(ushort *)(lVar11 + 0x12e) != 0) {
                                                      uVar15 = uVar16;
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar11 + 0xb0) +
                                                             uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar11 + 0xb0) + 8
                                                                              + uVar15 * 0x10) +
                                                                     0x73) * 0x10 + 0x138 + lVar11);
                                                          goto code_r0x0001805cb789;
                                                        }
                                                        uVar14 = (short)uVar15 + 1;
                                                        uVar15 = (ulonglong)uVar14;
                                                      } while (uVar14 < *(ushort *)(lVar11 + 0x12e))
                                                      ;
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0x73);
code_r0x0001805cb789:
                                                    uStack_98 = uVar7;
                                                    uStack_90 = uVar1;
                                                    (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]
                                                                       );
                                                    plVar9 = (longlong *)
                                                                                                                          
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (lVar8,0);
                                                  puVar10 = (undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_StyleLength__op_Implicit
                                                            (&uStack_98);
                                                  if (plVar9 != (longlong *)0x0) {
                                                    uVar7 = *puVar10;
                                                    uVar1 = *(undefined4 *)(puVar10 + 1);
                                                    lVar11 = *plVar9;
                                                    if (*(ushort *)(lVar11 + 0x12e) != 0) {
                                                      do {
                                                        if (*(longlong *)
                                                             (*(longlong *)(lVar11 + 0xb0) +
                                                             uVar16 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                                                          puVar10 = (undefined8 *)
                                                                    ((longlong)
                                                                     (*(int *)(*(longlong *)
                                                                                (lVar11 + 0xb0) + 8
                                                                              + uVar16 * 0x10) +
                                                                     0x43) * 0x10 + 0x138 + lVar11);
                                                          goto code_r0x0001805cb829;
                                                        }
                                                        uVar14 = (short)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar14;
                                                      } while (uVar14 < *(ushort *)(lVar11 + 0x12e))
                                                      ;
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,
                                                                            0x43);
code_r0x0001805cb829:
                                                    uStack_98 = uVar7;
                                                    uStack_90 = uVar1;
                                                    (*(code *)*puVar10)(plVar9,&uStack_98,puVar10[1]
                                                                       );
                                                    lVar11 = func_0x000180315580(
                                                  TI_ChatWindow.BordaDoSistema);
                                                  UnityEngine_UIElements_MouseManipulator___ctor
                                                            (lVar11,0);
                                                  *(longlong *)(lVar11 + 0x38) = param_1;
                                                  func_0x000180314690(lVar11 + 0x38,param_1);
                                                  UnityEngine_UIElements_VisualElementExtensions__AddManipulator
                                                            (lVar8,lVar11,0);
                                                  if (*(longlong *)(param_1 + 0xc0) != 0) {
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (*(longlong *)(param_1 + 0xc0),lVar8,0
                                                              );
                                                    plVar9 = *(longlong **)(param_1 + 0xb8);
                                                    if (plVar9 != (longlong *)0x0) {
                                                      lVar8 = *(longlong *)(param_1 + 0xc0);
                                                      if (lVar8 != 0) {
                                                        puStack_30 = (undefined1 *)0x1825c42fe;
                                                        plVar12 = (longlong *)
                                                                  (**(code **)(*plVar9 + 0x9d8))
                                                                            (plVar9,*(undefined8 *)
                                                                                     (*plVar9 +
                                                                                     0x9e0),0);
                                                        if (plVar12 == (longlong *)0x0) {
                                                          puStack_30 = (undefined1 *)0x1825c435b;
                                                          uVar7 = func_0x0001803153a0(TI_System.InvalidOperationException
                                                                                     );
                                                          puStack_30 = (undefined1 *)0x1825c4363;
                                                          uVar7 = func_0x000180315580(uVar7);
                                                          puStack_30 = (undefined1 *)0x1825c4372;
                                                          uVar13 = func_0x0001803153a0(LIT_"\"You can't add directly to this VisualElement. Use hierar...");
                                                          puStack_30 = (undefined1 *)0x1825c4380;
                                                          System_InvalidOperationException___ctor
                                                                    (uVar7,uVar13,0);
                                                          puStack_30 = (undefined1 *)0x1825c438c;
                                                          uVar13 = func_0x0001803153a0(MD_UnityEngine.UIElements.VisualElement.Add);
                                                          puStack_30 = (undefined1 *)0x1825c4397;
                                                          FUN_180315590(uVar7,uVar13);
                                                          pcVar3 = (code *)swi(3);
                                                          (*pcVar3)();
                                                          return;
                                                        }
                                                        if (plVar12 == plVar9) {
                                                          puStack_30 = &LAB_1825c432e;
                                                                                                                    
                                                  UnityEngine_UIElements_VisualElement_Hierarchy__Add
                                                            (&stack0x00000010,lVar8,0);
                                                  }
                                                  else {
                                                    puStack_30 = (undefined1 *)0x1825c4316;
                                                    UnityEngine_UIElements_VisualElement__Add
                                                              (plVar12);
                                                  }
                                                  *(longlong **)(lVar8 + 0x288) = plVar9;
                                                  puStack_30 = (undefined1 *)0x1825c4344;
                                                  func_0x000180314690(lVar8 + 0x288,plVar9);
                                                  }
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
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

