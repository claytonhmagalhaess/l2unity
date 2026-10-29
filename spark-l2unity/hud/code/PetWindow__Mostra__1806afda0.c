// PetWindow__Mostra__1806afda0 @ 0x1806afda0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PetWindow__Mostra__1806afda0(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  int aiStackX_8 [4];
  int aiStackX_18 [2];
  float afStackX_20 [2];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 auStack_b0 [2];
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  
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
      uVar13 = 0;
      aiStackX_8[0] = 0;
      aiStackX_18[0] = 0;
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
      lVar12 = **(longlong **)(TI_SparkPet + 0xb8);
      if (lVar12 == 0) {
        return;
      }
      plVar3 = (longlong *)param_1[0x12];
      cVar7 = func_0x000181707e50(*(undefined8 *)(lVar12 + 0x20),0);
      if (cVar7 == '\0') {
        uVar9 = *(undefined8 *)(lVar12 + 0x20);
      }
      else {
        if (*(int *)(TI_SparkPet + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar7 = SparkPet__get_EhPet(0);
        uVar9 = LIT_"'Servitor'";
        if (cVar7 != '\0') {
          uVar9 = LIT_"'Pet'";
        }
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0xe48))(plVar3,uVar9,*(undefined8 *)(*plVar3 + 0xe50));
        plVar3 = (longlong *)param_1[0x13];
        uVar9 = System_Int32__ToString(lVar12 + 0x44,0);
        uVar9 = System_String__Concat(LIT_"'Lv. '",uVar9,0);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0xe48))(plVar3,uVar9,*(undefined8 *)(*plVar3 + 0xe50));
          fVar16 = *(float *)(lVar12 + 0x30);
          lVar5 = param_1[0x14];
          lVar6 = param_1[0x15];
          uVar1 = *(undefined4 *)(lVar12 + 0x34);
          lVar11 = param_1[0x16];
          afStackX_20[0] = fVar16;
          uVar9 = func_0x000180314670(_DAT_1834c6268,afStackX_20);
          uStack_b8 = *(undefined4 *)(lVar12 + 0x34);
          uVar10 = func_0x000180314670(_DAT_1834c6268,&uStack_b8);
          uVar9 = System_String__Format(LIT_"'{0}/{1}'",uVar9,uVar10,0);
          if (*(int *)(TI_PetWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          lStack_a8 = lVar5;
          lStack_a0 = lVar6;
          lStack_98 = lVar11;
          PetWindow__Enche(&lStack_a8,fVar16,uVar1,uVar9,0);
          uVar1 = *(undefined4 *)(lVar12 + 0x38);
          lVar5 = param_1[0x17];
          lVar6 = param_1[0x18];
          uVar2 = *(undefined4 *)(lVar12 + 0x3c);
          lVar11 = param_1[0x19];
          uStack_b4 = uVar1;
          uVar9 = func_0x000180314670(_DAT_1834c6268,&uStack_b4);
          auStack_b0[0] = *(undefined4 *)(lVar12 + 0x3c);
          uVar10 = func_0x000180314670(_DAT_1834c6268,auStack_b0);
          uVar9 = System_String__Format(LIT_"'{0}/{1}'",uVar9,uVar10,0);
          lStack_a8 = lVar5;
          lStack_a0 = lVar6;
          lStack_98 = lVar11;
          PetWindow__Enche(&lStack_a8,uVar1,uVar2,uVar9,0);
          if (*(int *)(TI_SparkPet + 0xe4) == 0) {
            func_0x000180315660();
          }
          bVar8 = SparkPet__get_EhPet(0);
          if (param_1[0x25] != 0) {
            lVar11 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x25],0);
            if ((bVar8 == 0) || (*(int *)(lVar12 + 0x2c) < 1)) {
              uVar13 = 1;
            }
            uVar13 = FUN_180eb5810(uVar13,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
            if (lVar11 != 0) {
              FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar11,uVar13);
              if (param_1[0x24] != 0) {
                lVar11 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x24],0);
                uVar13 = FUN_180eb5810(bVar8 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                if (lVar11 != 0) {
                  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar11,uVar13);
                  if (param_1[0x23] != 0) {
                    lVar11 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x23],0);
                    uVar13 = FUN_180eb5810(bVar8 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                    if (lVar11 != 0) {
                      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar11,uVar13);
                      if (bVar8 != 0) {
                        if ((*(int *)(lVar12 + 0x2c) < 1) ||
                           (fVar16 = (float)*(int *)(lVar12 + 0x28) / (float)*(int *)(lVar12 + 0x2c)
                           , fVar16 < 0.0)) {
                          fVar16 = 0.0;
                        }
                        else if (1.0 < fVar16) {
                          fVar16 = 1.0;
                        }
                        lVar5 = param_1[0x1a];
                        lVar6 = param_1[0x1b];
                        lVar11 = param_1[0x1c];
                        if (*(int *)(TI_PetWindow + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        uVar13 = PetWindow__Pct();
                        lStack_a8 = lVar5;
                        lStack_a0 = lVar6;
                        lStack_98 = lVar11;
                        PetWindow__Enche(&lStack_a8,fVar16,uVar13,0);
                        fVar16 = 0.0;
                        lVar11 = *(longlong *)(lVar12 + 0x58) - *(longlong *)(lVar12 + 0x50);
                        if (0 < lVar11) {
                          fVar16 = (float)(*(longlong *)(lVar12 + 0x48) -
                                          *(longlong *)(lVar12 + 0x50)) / (float)lVar11;
                          if (fVar16 < 0.0) {
                            fVar16 = 0.0;
                          }
                          else if (1.0 < fVar16) {
                            fVar16 = 1.0;
                          }
                        }
                        lVar5 = param_1[0x1d];
                        lVar6 = param_1[0x1e];
                        lVar11 = param_1[0x1f];
                        if (*(int *)(TI_PetWindow + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        uVar13 = PetWindow__Pct();
                        lStack_a8 = lVar5;
                        lStack_a0 = lVar6;
                        lStack_98 = lVar11;
                        PetWindow__Enche(&lStack_a8,fVar16,uVar13,0);
                        plVar3 = (longlong *)param_1[0x26];
                        uVar13 = System_Int32__ToString(lVar12 + 0x40,0);
                        if (plVar3 == (longlong *)0x0) goto LAB_1806ad271;
                        (**(code **)(*plVar3 + 0xe48))
                                  (plVar3,uVar13,*(undefined8 *)(*plVar3 + 0xe50));
                        if ((*(int *)(lVar12 + 100) < 1) ||
                           (fVar16 = (float)*(int *)(lVar12 + 0x60) / (float)*(int *)(lVar12 + 100),
                           fVar16 < 0.0)) {
                          fVar16 = 0.0;
                        }
                        else if (1.0 < fVar16) {
                          fVar16 = 1.0;
                        }
                        lVar5 = param_1[0x20];
                        lVar6 = param_1[0x21];
                        lVar11 = param_1[0x22];
                        if (*(int *)(TI_PetWindow + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        uVar13 = PetWindow__Pct();
                        lStack_a8 = lVar5;
                        lStack_a0 = lVar6;
                        lStack_98 = lVar11;
                        PetWindow__Enche(&lStack_a8,fVar16,uVar13,0);
                        lVar11 = param_1[0x20];
                        if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        lVar11 = FUN_180b0e310(lVar11,LIT_"'L2Bar'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
                        aiStackX_8[0] = 1;
                        do {
                          uVar13 = System_Int32__ToString(aiStackX_8,0);
                          System_String__Concat(LIT_"'weight-'",uVar13,0);
                          if (lVar11 == 0) goto LAB_1806ad271;
                          UnityEngine_UIElements_VisualElement__RemoveFromClassList(lVar11);
                          aiStackX_8[0] = aiStackX_8[0] + 1;
                        } while (aiStackX_8[0] < 6);
                        fVar16 = (float)func_0x0001803a9df0();
                        aiStackX_18[0] = (int)fVar16 + 1;
                        if (5 < (int)fVar16 + 1) {
                          aiStackX_18[0] = 5;
                        }
                        uVar13 = System_Int32__ToString(aiStackX_18,0);
                        uVar13 = System_String__Concat(LIT_"'weight-'",uVar13,0);
                        UnityEngine_UIElements_VisualElement__AddToClassList(lVar11,uVar13,0);
                      }
                      plVar3 = (longlong *)param_1[0x27];
                      uVar13 = System_Int32__ToString(lVar12 + 0x68,0);
                      if (plVar3 != (longlong *)0x0) {
                        (**(code **)(*plVar3 + 0xe48))
                                  (plVar3,uVar13,*(undefined8 *)(*plVar3 + 0xe50));
                        plVar3 = (longlong *)param_1[0x28];
                        uVar13 = System_Int32__ToString(lVar12 + 0x6c,0);
                        if (plVar3 != (longlong *)0x0) {
                          (**(code **)(*plVar3 + 0xe48))
                                    (plVar3,uVar13,*(undefined8 *)(*plVar3 + 0xe50));
                          plVar3 = (longlong *)param_1[0x29];
                          uVar13 = System_Int32__ToString(lVar12 + 0x78,0);
                          if (plVar3 != (longlong *)0x0) {
                            (**(code **)(*plVar3 + 0xe48))
                                      (plVar3,uVar13,*(undefined8 *)(*plVar3 + 0xe50));
                            plVar3 = (longlong *)param_1[0x2a];
                            iVar14 = *(int *)(lVar12 + 0x80);
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
                            if ((-1 < iVar14) && (iVar15 = iVar14, 1000 < iVar14)) {
                              iVar15 = 1000;
                            }
                            afStackX_20[0] = (float)iVar15 / 10.0;
                            if (*(int *)(TI_System.Globalization.CultureInfo + 0xe4) == 0) {
                              func_0x000180315660();
                            }
                            uVar13 = System_Globalization_CultureInfo__get_InvariantCulture(0);
                            uVar13 = System_Single__ToString(afStackX_20,LIT_"'0.#'",uVar13,0);
                            uVar13 = System_String__Concat(uVar13,LIT_"'%'",0);
                            if (plVar3 != (longlong *)0x0) {
                              (**(code **)(*plVar3 + 0xe48))
                                        (plVar3,uVar13,*(undefined8 *)(*plVar3 + 0xe50));
                              plVar3 = (longlong *)param_1[0x2b];
                              uVar13 = System_Int32__ToString(lVar12 + 0x88,0);
                              if (plVar3 != (longlong *)0x0) {
                                (**(code **)(*plVar3 + 0xe48))
                                          (plVar3,uVar13,*(undefined8 *)(*plVar3 + 0xe50));
                                plVar3 = (longlong *)param_1[0x2c];
                                uVar13 = System_Int32__ToString(lVar12 + 0x70,0);
                                if (plVar3 != (longlong *)0x0) {
                                  (**(code **)(*plVar3 + 0xe48))
                                            (plVar3,uVar13,*(undefined8 *)(*plVar3 + 0xe50));
                                  plVar3 = (longlong *)param_1[0x2d];
                                  uVar13 = System_Int32__ToString(lVar12 + 0x74,0);
                                  if (plVar3 != (longlong *)0x0) {
                                    (**(code **)(*plVar3 + 0xe48))
                                              (plVar3,uVar13,*(undefined8 *)(*plVar3 + 0xe50));
                                    plVar3 = (longlong *)param_1[0x2e];
                                    uVar13 = System_Int32__ToString(lVar12 + 0x7c,0);
                                    if (plVar3 != (longlong *)0x0) {
                                      (**(code **)(*plVar3 + 0xe48))
                                                (plVar3,uVar13,*(undefined8 *)(*plVar3 + 0xe50));
                                      plVar3 = (longlong *)param_1[0x2f];
                                      uVar13 = System_Int32__ToString(lVar12 + 0x84,0);
                                      if (plVar3 != (longlong *)0x0) {
                                        (**(code **)(*plVar3 + 0xe48))
                                                  (plVar3,uVar13,*(undefined8 *)(*plVar3 + 0xe50));
                                        plVar3 = (longlong *)param_1[0x30];
                                        uVar13 = System_Int32__ToString(lVar12 + 0x8c,0);
                                        if (plVar3 != (longlong *)0x0) {
                                          (**(code **)(*plVar3 + 0xe48))
                                                    (plVar3,uVar13,*(undefined8 *)(*plVar3 + 0xe50))
                                          ;
                                          plVar3 = (longlong *)param_1[0x31];
                                          uVar13 = System_Int32__ToString(lVar12 + 0x90,0);
                                          if (plVar3 != (longlong *)0x0) {
                                            (**(code **)(*plVar3 + 0xe48))
                                                      (plVar3,uVar13,
                                                       *(undefined8 *)(*plVar3 + 0xe50));
                                            plVar3 = (longlong *)param_1[0x32];
                                            uVar13 = System_Int32__ToString(lVar12 + 0x94,0);
                                            if (plVar3 != (longlong *)0x0) {
                                              (**(code **)(*plVar3 + 0xe48))
                                                        (plVar3,uVar13,
                                                         *(undefined8 *)(*plVar3 + 0xe50));
                                              iVar14 = (uint)(*(char *)(lVar12 + 0x98) != '\0') +
                                                       *(int *)(lVar12 + 0x14) * 2;
                                              if (iVar14 == (int)param_1[0x38]) {
                                                return;
                                              }
                                              lVar12 = param_1[0x33];
                                              *(int *)(param_1 + 0x38) = iVar14;
                                              if (*(int *)(TI_SparkPet + 0xe4) == 0) {
                                                func_0x000180315660();
                                              }
                                              lVar11 = SparkPet__Ordens(0);
                                              if (lVar11 != 0) {
                                                uVar13 = FUN_180bb9850(lVar11,MR_System.Collections.Generic.List<int>.ToArray);
                                                if (*(int *)(TI_PetWindow + 0xe4) == 0) {
                                                  func_0x000180315660();
                                                }
                                                PetWindow__Botoes(lVar12,uVar13,0);
                                                lVar12 = SparkPet__Skills(0);
                                                PetWindow__Botoes(param_1[0x34],lVar12,0);
                                                if (((param_1[0x35] != 0) &&
                                                    (lVar11 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (param_1[0x35],0), lVar12 != 0)) &&
                                                  (uVar13 = FUN_180eb5810(*(longlong *)
                                                                           (lVar12 + 0x18) == 0,
                                                                          MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit),
                                                  lVar11 != 0)) {
                                                  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar11,uVar13);
                                                  if (param_1[0x34] != 0) {
                                                    lVar11 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (param_1[0x34],0);
                                                  uVar13 = FUN_180eb5810(*(longlong *)
                                                                          (lVar12 + 0x18) == 0,
                                                                         MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                                                  if (lVar11 != 0) {
                                                    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar11,uVar13)
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
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      FUN_1803155d0();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

