// SparkDicaItem__TituloComNivel__18062a1c0 @ 0x18062a1c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkDicaItem__TituloComNivel__18062a1c0(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined8 unaff_RDI;
  int iVar14;
  
  if (cRam00000001834b3cf7 == '\0') {
    FUN_180315380(TI_System.Text.RegularExpressions.Regex);
    FUN_180315380(TI_SparkDicaItem);
    FUN_180315380(TI_string__);
    FUN_180315380(LIT_"'</color> <color='");
    FUN_180315380(LIT_"'<color=#E8D4A0>'");
    FUN_180315380(LIT_"'</color>'");
    FUN_180315380(LIT_"'^(.*?)\\\\s*(Level\\\\s+(\\\\d+))\\\\s*$'");
    FUN_180315380(LIT_"'>'");
    cRam00000001834b3cf7 = '\x01';
  }
  if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
    func_0x000180315660();
  }
  plVar6 = (longlong *)System_Text_RegularExpressions_Regex__Match(param_1,LIT_"'^(.*?)\\\\s*(Level\\\\s+(\\\\d+))\\\\s*$'",0);
  if (plVar6 != (longlong *)0x0) {
    cVar3 = func_0x000181db51d0(plVar6,0);
    lVar9 = LIT_"'<color=#E8D4A0>'";
    lVar7 = LIT_"'</color>'";
    if (cVar3 == '\0') {
      lVar11 = param_1;
      lVar12 = LIT_"'</color>'";
      if (((((LIT_"'<color=#E8D4A0>'" == 0) || (*(int *)(LIT_"'<color=#E8D4A0>'" + 0x10) == 0)) ||
           (lVar11 = LIT_"'<color=#E8D4A0>'", param_1 == 0)) ||
          ((*(int *)(param_1 + 0x10) == 0 || (lVar12 = param_1, LIT_"'</color>'" == 0)))) ||
         (*(int *)(LIT_"'</color>'" + 0x10) == 0)) {
        if ((lVar11 == 0) || (*(int *)(lVar11 + 0x10) == 0)) {
          if ((lVar12 != 0) && (*(int *)(lVar12 + 0x10) != 0)) {
            return lVar12;
          }
          return **(longlong **)(_DAT_1834c62b0 + 0xb8);
        }
        if ((lVar12 == 0) || (*(int *)(lVar12 + 0x10) == 0)) {
          return lVar11;
        }
        iVar14 = *(int *)(lVar11 + 0x10);
        lVar7 = func_0x000180325580(*(int *)(lVar12 + 0x10) + iVar14,lVar12,0,0,unaff_RDI);
        if (lVar7 == 0) {
          FUN_1803155d0();
          pcVar2 = (code *)swi(3);
          lVar7 = (*pcVar2)();
          return lVar7;
        }
        if (*(int *)(lVar11 + 0x10) <= *(int *)(lVar7 + 0x10)) {
          func_0x0001818cf950(lVar7 + 0x14,lVar11 + 0x14,*(int *)(lVar11 + 0x10) * 2,0);
          if (*(int *)(lVar12 + 0x10) <= *(int *)(lVar7 + 0x10) - iVar14) {
            func_0x0001818cf950(lVar7 + ((longlong)iVar14 + 10) * 2,lVar12 + 0x14,
                                *(int *)(lVar12 + 0x10) * 2,0);
            return lVar7;
          }
          uVar8 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
          uVar8 = func_0x000180315580(uVar8);
          System_IndexOutOfRangeException___ctor(uVar8,0);
          uVar10 = func_0x0001803153a0(MD_System.String.FillStringChecked);
          FUN_180315590(uVar8,uVar10);
          pcVar2 = (code *)swi(3);
          lVar7 = (*pcVar2)();
          return lVar7;
        }
        uVar8 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
        uVar8 = func_0x000180315580(uVar8);
        System_IndexOutOfRangeException___ctor(uVar8,0);
        uVar10 = func_0x0001803153a0(MD_System.String.FillStringChecked);
        FUN_180315590(uVar8,uVar10);
        pcVar2 = (code *)swi(3);
        lVar7 = (*pcVar2)();
        return lVar7;
      }
      lVar11 = func_0x000180325580(*(int *)(LIT_"'<color=#E8D4A0>'" + 0x10) + *(int *)(param_1 + 0x10)
                                   + *(int *)(LIT_"'</color>'" + 0x10));
      if (lVar11 == 0) {
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        lVar7 = (*pcVar2)();
        return lVar7;
      }
      if (*(int *)(lVar11 + 0x10) < *(int *)(lVar9 + 0x10)) {
        uVar8 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
        uVar8 = func_0x000180315580(uVar8);
        System_IndexOutOfRangeException___ctor(uVar8,0);
        uVar10 = func_0x0001803153a0(MD_System.String.FillStringChecked);
        FUN_180315590(uVar8,uVar10);
        pcVar2 = (code *)swi(3);
        lVar7 = (*pcVar2)();
        return lVar7;
      }
      func_0x0001818cf950(lVar11 + 0x14,lVar9 + 0x14,*(int *)(lVar9 + 0x10) * 2,0);
      if (*(int *)(lVar11 + 0x10) - *(int *)(lVar9 + 0x10) < *(int *)(param_1 + 0x10)) {
        uVar8 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
        uVar8 = func_0x000180315580(uVar8);
        System_IndexOutOfRangeException___ctor(uVar8,0);
        uVar10 = func_0x0001803153a0(MD_System.String.FillStringChecked);
        FUN_180315590(uVar8,uVar10);
        pcVar2 = (code *)swi(3);
        lVar7 = (*pcVar2)();
        return lVar7;
      }
      func_0x0001818cf950((longlong)*(int *)(lVar9 + 0x10) * 2 + 0x14 + lVar11,param_1 + 0x14,
                          *(int *)(param_1 + 0x10) * 2,0);
      iVar14 = *(int *)(lVar9 + 0x10) + *(int *)(param_1 + 0x10);
      if (*(int *)(lVar7 + 0x10) <= *(int *)(lVar11 + 0x10) - iVar14) {
        func_0x0001818cf950((longlong)iVar14 * 2 + 0x14 + lVar11,lVar7 + 0x14,
                            *(int *)(lVar7 + 0x10) * 2,0);
        return lVar11;
      }
      uVar8 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
      uVar8 = func_0x000180315580(uVar8);
      System_IndexOutOfRangeException___ctor(uVar8,0);
      uVar10 = func_0x0001803153a0(MD_System.String.FillStringChecked);
      FUN_180315590(uVar8,uVar10);
      pcVar2 = (code *)swi(3);
      lVar7 = (*pcVar2)();
      return lVar7;
    }
    lVar7 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    if ((lVar7 != 0) && (lVar7 = func_0x000181db4940(lVar7,3,0), lVar7 != 0)) {
      uVar8 = System_Text_RegularExpressions_Capture__ToString(lVar7,0);
      uVar4 = System_Int32__Parse(uVar8,0);
      if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
        func_0x000180315660(TI_SparkDicaItem);
      }
      lVar7 = *(longlong *)(*(longlong *)(TI_SparkDicaItem + 0xb8) + 0x20);
      if (lVar7 != 0) {
        if ((int)uVar4 < 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(int *)(lVar7 + 0x18) - 1;
          if ((int)uVar4 <= (int)uVar5) {
            uVar5 = uVar4;
          }
        }
        if (uVar5 < *(uint *)(lVar7 + 0x18)) {
          uVar8 = *(undefined8 *)(lVar7 + 0x20 + (longlong)(int)uVar5 * 8);
          lVar7 = func_0x000180314710(TI_string__,7);
          if (lVar7 == 0) goto code_r0x00018062a4c3;
          if (*(int *)(lVar7 + 0x18) != 0) {
            *(longlong *)(lVar7 + 0x20) = LIT_"'<color=#E8D4A0>'";
            func_0x000180314690(lVar7 + 0x20);
            lVar9 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
            if ((lVar9 == 0) || (lVar9 = func_0x000181db4940(lVar9,1,0), lVar9 == 0))
            goto code_r0x00018062a4c3;
            uVar10 = System_Text_RegularExpressions_Capture__ToString(lVar9,0);
            if (1 < *(uint *)(lVar7 + 0x18)) {
              *(undefined8 *)(lVar7 + 0x28) = uVar10;
              func_0x000180314690(lVar7 + 0x28,uVar10);
              if (2 < *(uint *)(lVar7 + 0x18)) {
                *(undefined8 *)(lVar7 + 0x30) = LIT_"'</color> <color='";
                func_0x000180314690(lVar7 + 0x30);
                if (3 < *(uint *)(lVar7 + 0x18)) {
                  *(undefined8 *)(lVar7 + 0x38) = uVar8;
                  func_0x000180314690(lVar7 + 0x38,uVar8);
                  if (4 < *(uint *)(lVar7 + 0x18)) {
                    *(undefined8 *)(lVar7 + 0x40) = LIT_"'>'";
                    func_0x000180314690(lVar7 + 0x40);
                    lVar9 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
                    if ((lVar9 == 0) || (lVar9 = func_0x000181db4940(lVar9,2,0), lVar9 == 0))
                    goto code_r0x00018062a4c3;
                    uVar8 = System_Text_RegularExpressions_Capture__ToString(lVar9,0);
                    if (5 < *(uint *)(lVar7 + 0x18)) {
                      *(undefined8 *)(lVar7 + 0x48) = uVar8;
                      func_0x000180314690(lVar7 + 0x48,uVar8);
                      if (6 < *(uint *)(lVar7 + 0x18)) {
                        *(longlong *)(lVar7 + 0x50) = LIT_"'</color>'";
                        func_0x000180314690(lVar7 + 0x50);
                        if (DAT_1834b89b5 == '\0') {
                          FUN_180315380(TI_string__,0);
                          DAT_1834b89b5 = '\x01';
                        }
                        if (lVar7 == 0) {
                          uVar8 = func_0x0001803153a0(TI_System.ArgumentNullException);
                          uVar8 = func_0x000180315580(uVar8);
                          uVar10 = func_0x0001803153a0(LIT_"'values'");
                          System_ArgumentNullException___ctor(uVar8,uVar10,0);
                          uVar10 = func_0x0001803153a0(MD_System.String.Concat);
                          FUN_180315590(uVar8,uVar10);
                          pcVar2 = (code *)swi(3);
                          lVar7 = (*pcVar2)();
                          return lVar7;
                        }
                        if (*(int *)(lVar7 + 0x18) < 2) {
                          if (*(longlong *)(lVar7 + 0x18) == 0) {
                            return **(longlong **)(_DAT_1834c62b0 + 0xb8);
                          }
                          if (*(int *)(lVar7 + 0x18) == 0) {
LAB_181703500:
                            FUN_1803155c0();
                            pcVar2 = (code *)swi(3);
                            lVar7 = (*pcVar2)();
                            return lVar7;
                          }
                          if (*(longlong *)(lVar7 + 0x20) != 0) {
                            return *(longlong *)(lVar7 + 0x20);
                          }
                        }
                        else {
                          uVar4 = *(uint *)(lVar7 + 0x18);
                          lVar9 = 0;
                          for (uVar5 = 0; (int)uVar5 < (int)uVar4; uVar5 = uVar5 + 1) {
                            uVar4 = *(uint *)(lVar7 + 0x18);
                            if (uVar4 <= uVar5) goto LAB_181703500;
                            lVar11 = *(longlong *)(lVar7 + 0x20 + (longlong)(int)uVar5 * 8);
                            if (lVar11 != 0) {
                              lVar9 = lVar9 + *(int *)(lVar11 + 0x10);
                            }
                          }
                          if (0x7fffffff < lVar9) {
                            uVar8 = func_0x0001803153a0(TI_System.OutOfMemoryException);
                            uVar8 = func_0x000180315580(uVar8);
                            System_OutOfMemoryException___ctor(uVar8,0);
                            uVar10 = func_0x0001803153a0(MD_System.String.Concat);
                            FUN_180315590(uVar8,uVar10);
                            pcVar2 = (code *)swi(3);
                            lVar7 = (*pcVar2)();
                            return lVar7;
                          }
                          iVar14 = (int)lVar9;
                          if (iVar14 != 0) {
                            lVar9 = func_0x000180325580();
                            iVar13 = 0;
                            uVar4 = 0;
                            do {
                              if (*(int *)(lVar7 + 0x18) <= (int)uVar4) {
LAB_181703381:
                                if (iVar13 == iVar14) {
                                  return lVar9;
                                }
                                lVar7 = func_0x00018180f450(lVar7,0);
                                uVar8 = TI_string__;
                                if (lVar7 == 0) {
                                  lVar7 = System_String__Concat(0,0);
                                  return lVar7;
                                }
                                lVar9 = func_0x0001803146b0(lVar7,TI_string__);
                                if (lVar9 != 0) {
                                  lVar7 = System_String__Concat(lVar9,0);
                                  return lVar7;
                                }
                                FUN_1803146d0(lVar7,uVar8);
                                pcVar2 = (code *)swi(3);
                                lVar7 = (*pcVar2)();
                                return lVar7;
                              }
                              if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_181703500;
                              lVar11 = *(longlong *)(lVar7 + 0x20 + (longlong)(int)uVar4 * 8);
                              if ((lVar11 != 0) && (*(int *)(lVar11 + 0x10) != 0)) {
                                iVar1 = *(int *)(lVar11 + 0x10);
                                if (iVar14 - iVar13 < iVar1) {
                                  iVar13 = -1;
                                  goto LAB_181703381;
                                }
                                if (lVar9 == 0) {
                                  FUN_1803155d0();
                                  pcVar2 = (code *)swi(3);
                                  lVar7 = (*pcVar2)();
                                  return lVar7;
                                }
                                if (*(int *)(lVar9 + 0x10) - iVar13 < iVar1) {
                                  uVar8 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
                                  uVar8 = func_0x000180315580(uVar8);
                                  System_IndexOutOfRangeException___ctor(uVar8,0);
                                  uVar10 = func_0x0001803153a0(MD_System.String.FillStringChecked);
                                  FUN_180315590(uVar8,uVar10);
                                  pcVar2 = (code *)swi(3);
                                  lVar7 = (*pcVar2)();
                                  return lVar7;
                                }
                                func_0x0001818cf950(lVar9 + ((longlong)iVar13 + 10) * 2,
                                                    lVar11 + 0x14,iVar1 * 2,0);
                                iVar13 = iVar13 + iVar1;
                              }
                              uVar4 = uVar4 + 1;
                            } while( true );
                          }
                        }
                        return **(longlong **)(_DAT_1834c62b0 + 0xb8);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        lVar7 = (*pcVar2)();
        return lVar7;
      }
    }
  }
code_r0x00018062a4c3:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  lVar7 = (*pcVar2)();
  return lVar7;
}

