// PetWindow__ToggleHideWindow__1806b0780 @ 0x1806b0780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PetWindow__ToggleHideWindow__1806b0780(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  int iVar15;
  float fVar16;
  float afStackX_20 [2];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 auStack_b0 [2];
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  
  if (cRam00000001834b3fb5 == '\0') {
    FUN_180315380(TI_SparkComandos);
    FUN_180315380(TI_SparkPet);
    FUN_180315380(LIT_"'You do not have a pet or servitor out.'");
    cRam00000001834b3fb5 = '\x01';
  }
  if ((char)param_1[0x11] == '\0') {
    return;
  }
  if ((char)param_1[7] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001806b07e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c8))(param_1,0,*(undefined8 *)(*param_1 + 0x1d0));
    return;
  }
  if (*(int *)(TI_SparkPet + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834b3016 == '\0') {
    FUN_180315380(TI_SparkPet);
    DAT_1834b3016 = '\x01';
  }
  if (*(int *)(TI_SparkPet + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (**(longlong **)(TI_SparkPet + 0xb8) != 0) {
    if (DAT_1834b3fb9 == '\0') {
      FUN_180315380(TI_SparkPet,0);
      DAT_1834b3fb9 = '\x01';
    }
    if ((char)param_1[0x11] != '\0') {
      if (*(int *)(TI_SparkPet + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (DAT_1834b3016 == '\0') {
        FUN_180315380(TI_SparkPet);
        DAT_1834b3016 = '\x01';
      }
      if (*(int *)(TI_SparkPet + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (**(longlong **)(TI_SparkPet + 0xb8) != 0) {
        if ((char)param_1[7] != '\0') {
          (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
        }
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        if (DAT_1834b3fba == '\0') {
          FUN_180315380(TI_UnityEngine.UIElements.IStyle);
          FUN_180315380(MR_System.Collections.Generic.List<int>.ToArray);
          FUN_180315380(TI_PetWindow);
          FUN_180315380(TI_SparkPet);
          FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
          FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
          FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
          FUN_180315380(LIT_"'L2Bar'");
          FUN_180315380(LIT_"'Pet'");
          FUN_180315380(LIT_"'weight-'");
          FUN_180315380(LIT_"'{0}/{1}'");
          FUN_180315380(LIT_"'Servitor'");
          FUN_180315380(LIT_"'Lv. '");
          DAT_1834b3fba = '\x01';
        }
        uVar14 = 0;
        if (*(int *)(TI_SparkPet + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (DAT_1834b3016 == '\0') {
          FUN_180315380(TI_SparkPet);
          DAT_1834b3016 = '\x01';
        }
        if (*(int *)(TI_SparkPet + 0xe4) == 0) {
          func_0x000180315660();
        }
        if ((char)param_1[0x11] == '\0') {
          return;
        }
        lVar13 = **(longlong **)(TI_SparkPet + 0xb8);
        if (lVar13 == 0) {
          return;
        }
        plVar9 = (longlong *)param_1[0x12];
        cVar6 = func_0x000181707e50(*(undefined8 *)(lVar13 + 0x20),0);
        if (cVar6 == '\0') {
          uVar10 = *(undefined8 *)(lVar13 + 0x20);
        }
        else {
          if (*(int *)(TI_SparkPet + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar6 = SparkPet__get_EhPet(0);
          uVar10 = LIT_"'Servitor'";
          if (cVar6 != '\0') {
            uVar10 = LIT_"'Pet'";
          }
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0xe48))(plVar9,uVar10,*(undefined8 *)(*plVar9 + 0xe50));
          plVar9 = (longlong *)param_1[0x13];
          uVar10 = System_Int32__ToString(lVar13 + 0x44,0);
          uVar10 = System_String__Concat(LIT_"'Lv. '",uVar10,0);
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0xe48))(plVar9,uVar10,*(undefined8 *)(*plVar9 + 0xe50));
            fVar16 = *(float *)(lVar13 + 0x30);
            lVar4 = param_1[0x14];
            lVar5 = param_1[0x15];
            uVar1 = *(undefined4 *)(lVar13 + 0x34);
            lVar12 = param_1[0x16];
            afStackX_20[0] = fVar16;
            uVar10 = func_0x000180314670(_DAT_1834c6268,afStackX_20);
            uStack_b8 = *(undefined4 *)(lVar13 + 0x34);
            uVar11 = func_0x000180314670(_DAT_1834c6268,&uStack_b8);
            uVar10 = System_String__Format(LIT_"'{0}/{1}'",uVar10,uVar11,0);
            if (*(int *)(TI_PetWindow + 0xe4) == 0) {
              func_0x000180315660();
            }
            lStack_a8 = lVar4;
            lStack_a0 = lVar5;
            lStack_98 = lVar12;
            PetWindow__Enche(&lStack_a8,fVar16,uVar1,uVar10,0);
            uVar1 = *(undefined4 *)(lVar13 + 0x38);
            lVar4 = param_1[0x17];
            lVar5 = param_1[0x18];
            uVar2 = *(undefined4 *)(lVar13 + 0x3c);
            lVar12 = param_1[0x19];
            uStack_b4 = uVar1;
            uVar10 = func_0x000180314670(_DAT_1834c6268,&uStack_b4);
            auStack_b0[0] = *(undefined4 *)(lVar13 + 0x3c);
            uVar11 = func_0x000180314670(_DAT_1834c6268,auStack_b0);
            uVar10 = System_String__Format(LIT_"'{0}/{1}'",uVar10,uVar11,0);
            lStack_a8 = lVar4;
            lStack_a0 = lVar5;
            lStack_98 = lVar12;
            PetWindow__Enche(&lStack_a8,uVar1,uVar2,uVar10,0);
            if (*(int *)(TI_SparkPet + 0xe4) == 0) {
              func_0x000180315660();
            }
            bVar7 = SparkPet__get_EhPet(0);
            if (param_1[0x25] != 0) {
              lVar12 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x25],0);
              if ((bVar7 == 0) || (*(int *)(lVar13 + 0x2c) < 1)) {
                uVar14 = 1;
              }
              uVar14 = FUN_180eb5810(uVar14,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
              if (lVar12 != 0) {
                FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar12,uVar14);
                if (param_1[0x24] != 0) {
                  lVar12 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x24],0);
                  uVar14 = FUN_180eb5810(bVar7 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                  if (lVar12 != 0) {
                    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar12,uVar14);
                    if (param_1[0x23] != 0) {
                      lVar12 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x23],0);
                      uVar14 = FUN_180eb5810(bVar7 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                      if (lVar12 != 0) {
                        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar12,uVar14);
                        if (bVar7 != 0) {
                          if ((*(int *)(lVar13 + 0x2c) < 1) ||
                             (fVar16 = (float)*(int *)(lVar13 + 0x28) /
                                       (float)*(int *)(lVar13 + 0x2c), fVar16 < 0.0)) {
                            fVar16 = 0.0;
                          }
                          else if (1.0 < fVar16) {
                            fVar16 = 1.0;
                          }
                          lVar4 = param_1[0x1a];
                          lVar5 = param_1[0x1b];
                          lVar12 = param_1[0x1c];
                          if (*(int *)(TI_PetWindow + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          uVar14 = PetWindow__Pct();
                          lStack_a8 = lVar4;
                          lStack_a0 = lVar5;
                          lStack_98 = lVar12;
                          PetWindow__Enche(&lStack_a8,fVar16,uVar14,0);
                          fVar16 = 0.0;
                          lVar12 = *(longlong *)(lVar13 + 0x58) - *(longlong *)(lVar13 + 0x50);
                          if (0 < lVar12) {
                            fVar16 = (float)(*(longlong *)(lVar13 + 0x48) -
                                            *(longlong *)(lVar13 + 0x50)) / (float)lVar12;
                            if (fVar16 < 0.0) {
                              fVar16 = 0.0;
                            }
                            else if (1.0 < fVar16) {
                              fVar16 = 1.0;
                            }
                          }
                          lVar4 = param_1[0x1d];
                          lVar5 = param_1[0x1e];
                          lVar12 = param_1[0x1f];
                          if (*(int *)(TI_PetWindow + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          uVar14 = PetWindow__Pct();
                          lStack_a8 = lVar4;
                          lStack_a0 = lVar5;
                          lStack_98 = lVar12;
                          PetWindow__Enche(&lStack_a8,fVar16,uVar14,0);
                          plVar9 = (longlong *)param_1[0x26];
                          uVar14 = System_Int32__ToString(lVar13 + 0x40,0);
                          if (plVar9 == (longlong *)0x0) goto LAB_1806ad271;
                          (**(code **)(*plVar9 + 0xe48))
                                    (plVar9,uVar14,*(undefined8 *)(*plVar9 + 0xe50));
                          if ((*(int *)(lVar13 + 100) < 1) ||
                             (fVar16 = (float)*(int *)(lVar13 + 0x60) /
                                       (float)*(int *)(lVar13 + 100), fVar16 < 0.0)) {
                            fVar16 = 0.0;
                          }
                          else if (1.0 < fVar16) {
                            fVar16 = 1.0;
                          }
                          lVar4 = param_1[0x20];
                          lVar5 = param_1[0x21];
                          lVar12 = param_1[0x22];
                          if (*(int *)(TI_PetWindow + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          uVar14 = PetWindow__Pct();
                          lStack_a8 = lVar4;
                          lStack_a0 = lVar5;
                          lStack_98 = lVar12;
                          PetWindow__Enche(&lStack_a8,fVar16,uVar14,0);
                          lVar12 = param_1[0x20];
                          if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          lVar12 = FUN_180b0e310(lVar12,LIT_"'L2Bar'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
                          iVar8 = 1;
                          do {
                            uVar14 = System_Int32__ToString(&stack0x00000008,0);
                            System_String__Concat(LIT_"'weight-'",uVar14,0);
                            if (lVar12 == 0) goto LAB_1806ad271;
                            UnityEngine_UIElements_VisualElement__RemoveFromClassList(lVar12);
                            iVar8 = iVar8 + 1;
                          } while (iVar8 < 6);
                          func_0x0001803a9df0();
                          uVar14 = System_Int32__ToString(&stack0x00000018,0);
                          uVar14 = System_String__Concat(LIT_"'weight-'",uVar14,0);
                          UnityEngine_UIElements_VisualElement__AddToClassList(lVar12,uVar14,0);
                        }
                        plVar9 = (longlong *)param_1[0x27];
                        uVar14 = System_Int32__ToString(lVar13 + 0x68,0);
                        if (plVar9 != (longlong *)0x0) {
                          (**(code **)(*plVar9 + 0xe48))
                                    (plVar9,uVar14,*(undefined8 *)(*plVar9 + 0xe50));
                          plVar9 = (longlong *)param_1[0x28];
                          uVar14 = System_Int32__ToString(lVar13 + 0x6c,0);
                          if (plVar9 != (longlong *)0x0) {
                            (**(code **)(*plVar9 + 0xe48))
                                      (plVar9,uVar14,*(undefined8 *)(*plVar9 + 0xe50));
                            plVar9 = (longlong *)param_1[0x29];
                            uVar14 = System_Int32__ToString(lVar13 + 0x78,0);
                            if (plVar9 != (longlong *)0x0) {
                              (**(code **)(*plVar9 + 0xe48))
                                        (plVar9,uVar14,*(undefined8 *)(*plVar9 + 0xe50));
                              plVar9 = (longlong *)param_1[0x2a];
                              iVar8 = *(int *)(lVar13 + 0x80);
                              if (*(int *)(TI_PetWindow + 0xe4) == 0) {
                                func_0x000180315660();
                              }
                              if (DAT_1834b3fc6 == '\0') {
                                FUN_180315380(TI_System.Globalization.CultureInfo);
                                FUN_180315380(LIT_"'%'");
                                FUN_180315380(LIT_"'0.#'");
                                DAT_1834b3fc6 = '\x01';
                              }
                              iVar15 = 0;
                              if ((-1 < iVar8) && (iVar15 = iVar8, 1000 < iVar8)) {
                                iVar15 = 1000;
                              }
                              afStackX_20[0] = (float)iVar15 / 10.0;
                              if (*(int *)(TI_System.Globalization.CultureInfo + 0xe4) == 0) {
                                func_0x000180315660();
                              }
                              uVar14 = System_Globalization_CultureInfo__get_InvariantCulture(0);
                              uVar14 = System_Single__ToString(afStackX_20,LIT_"'0.#'",uVar14,0);
                              uVar14 = System_String__Concat(uVar14,LIT_"'%'",0);
                              if (plVar9 != (longlong *)0x0) {
                                (**(code **)(*plVar9 + 0xe48))
                                          (plVar9,uVar14,*(undefined8 *)(*plVar9 + 0xe50));
                                plVar9 = (longlong *)param_1[0x2b];
                                uVar14 = System_Int32__ToString(lVar13 + 0x88,0);
                                if (plVar9 != (longlong *)0x0) {
                                  (**(code **)(*plVar9 + 0xe48))
                                            (plVar9,uVar14,*(undefined8 *)(*plVar9 + 0xe50));
                                  plVar9 = (longlong *)param_1[0x2c];
                                  uVar14 = System_Int32__ToString(lVar13 + 0x70,0);
                                  if (plVar9 != (longlong *)0x0) {
                                    (**(code **)(*plVar9 + 0xe48))
                                              (plVar9,uVar14,*(undefined8 *)(*plVar9 + 0xe50));
                                    plVar9 = (longlong *)param_1[0x2d];
                                    uVar14 = System_Int32__ToString(lVar13 + 0x74,0);
                                    if (plVar9 != (longlong *)0x0) {
                                      (**(code **)(*plVar9 + 0xe48))
                                                (plVar9,uVar14,*(undefined8 *)(*plVar9 + 0xe50));
                                      plVar9 = (longlong *)param_1[0x2e];
                                      uVar14 = System_Int32__ToString(lVar13 + 0x7c,0);
                                      if (plVar9 != (longlong *)0x0) {
                                        (**(code **)(*plVar9 + 0xe48))
                                                  (plVar9,uVar14,*(undefined8 *)(*plVar9 + 0xe50));
                                        plVar9 = (longlong *)param_1[0x2f];
                                        uVar14 = System_Int32__ToString(lVar13 + 0x84,0);
                                        if (plVar9 != (longlong *)0x0) {
                                          (**(code **)(*plVar9 + 0xe48))
                                                    (plVar9,uVar14,*(undefined8 *)(*plVar9 + 0xe50))
                                          ;
                                          plVar9 = (longlong *)param_1[0x30];
                                          uVar14 = System_Int32__ToString(lVar13 + 0x8c,0);
                                          if (plVar9 != (longlong *)0x0) {
                                            (**(code **)(*plVar9 + 0xe48))
                                                      (plVar9,uVar14,
                                                       *(undefined8 *)(*plVar9 + 0xe50));
                                            plVar9 = (longlong *)param_1[0x31];
                                            uVar14 = System_Int32__ToString(lVar13 + 0x90,0);
                                            if (plVar9 != (longlong *)0x0) {
                                              (**(code **)(*plVar9 + 0xe48))
                                                        (plVar9,uVar14,
                                                         *(undefined8 *)(*plVar9 + 0xe50));
                                              plVar9 = (longlong *)param_1[0x32];
                                              uVar14 = System_Int32__ToString(lVar13 + 0x94,0);
                                              if (plVar9 != (longlong *)0x0) {
                                                (**(code **)(*plVar9 + 0xe48))
                                                          (plVar9,uVar14,
                                                           *(undefined8 *)(*plVar9 + 0xe50));
                                                iVar8 = (uint)(*(char *)(lVar13 + 0x98) != '\0') +
                                                        *(int *)(lVar13 + 0x14) * 2;
                                                if (iVar8 == (int)param_1[0x38]) {
                                                  return;
                                                }
                                                lVar13 = param_1[0x33];
                                                *(int *)(param_1 + 0x38) = iVar8;
                                                if (*(int *)(TI_SparkPet + 0xe4) == 0) {
                                                  func_0x000180315660();
                                                }
                                                lVar12 = SparkPet__Ordens(0);
                                                if (lVar12 != 0) {
                                                  uVar14 = FUN_180bb9850(lVar12,MR_System.Collections.Generic.List<int>.ToArray);
                                                  if (*(int *)(TI_PetWindow + 0xe4) == 0) {
                                                    func_0x000180315660();
                                                  }
                                                  PetWindow__Botoes(lVar13,uVar14,0);
                                                  lVar13 = SparkPet__Skills(0);
                                                  PetWindow__Botoes(param_1[0x34],lVar13,0);
                                                  if (((param_1[0x35] != 0) &&
                                                      (lVar12 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (param_1[0x35],0), lVar13 != 0)) &&
                                                  (uVar14 = FUN_180eb5810(*(longlong *)
                                                                           (lVar13 + 0x18) == 0,
                                                                          MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit),
                                                  lVar12 != 0)) {
                                                    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar12,uVar14)
                                                    ;
                                                    if (param_1[0x34] != 0) {
                                                      lVar12 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (param_1[0x34],0);
                                                  uVar14 = FUN_180eb5810(*(longlong *)
                                                                          (lVar13 + 0x18) == 0,
                                                                         MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                                                  if (lVar12 != 0) {
                                                    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar12,uVar14)
                                                    ;
                                                    PetWindow__DesenhaItens(param_1,0);
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
LAB_1806ad271:
              FUN_1803155d0();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    return;
  }
  if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar14 = LIT_"'You do not have a pet or servitor out.'";
  if (cRam00000001834b3b43 == '\0') {
    FUN_180315380(TI_ChatWindow,0);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
    FUN_180315380(TI_SMParam__);
    FUN_180315380(TI_SMParam);
    FUN_180315380(TI_SystemMessage);
    cRam00000001834b3b43 = '\x01';
  }
  plVar9 = (longlong *)func_0x000180314710(TI_SMParam__,1);
  lVar13 = func_0x000180315580(TI_SMParam);
  SMParam___ctor(lVar13,0,uVar14,0);
  if (plVar9 == (longlong *)0x0) {
code_r0x0001805ed19f:
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((lVar13 != 0) &&
     (lVar12 = func_0x0001803146b0(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0)) {
    uVar14 = func_0x000180314f80();
    FUN_180315590(uVar14,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((int)plVar9[3] == 0) {
    FUN_1803155c0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar9[4] = lVar13;
  func_0x000180314690(plVar9 + 4,lVar13);
  if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834b3105 == '\0') {
    FUN_180315380(TI_ChatWindow);
    DAT_1834b3105 = '\x01';
  }
  if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar13 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8);
  if (lVar13 != 0) {
    lVar12 = SystemMessageTable__get_Instance(0);
    if ((lVar12 == 0) || (*(longlong *)(lVar12 + 0x10) == 0)) goto code_r0x0001805ed19f;
    uVar14 = FUN_1812035e0(*(longlong *)(lVar12 + 0x10),0x266,MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
    uVar10 = func_0x000180315580(TI_SystemMessage);
    AllianceMessage___ctor(uVar10,plVar9,uVar14,0);
    ChatWindow__ReceiveSystemMessage__1805cdb10(lVar13,uVar10,0);
  }
  return;
}

