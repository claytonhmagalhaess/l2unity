// SparkHtml__Le__18073bd70 @ 0x18073bd70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkHtml__Le__18073bd70(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  longlong lStack_38;
  longlong lStack_30;
  
  if (cRam00000001834b4247 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.HashSet<string>.Contains);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.RemoveRange);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.get_Item);
    FUN_180315380(TI_System.Collections.Generic.List<SparkHtml.No>);
    FUN_180315380(TI_SparkHtml.No);
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(TI_System.Text.StringBuilder);
    FUN_180315380(LIT_"'<!--'");
    FUN_180315380(LIT_"'!'");
    FUN_180315380(LIT_"'button'");
    FUN_180315380(LIT_"'tr'");
    FUN_180315380(LIT_"'#raiz'");
    FUN_180315380(LIT_"'/'");
    FUN_180315380(LIT_"'-->'");
    FUN_180315380(LIT_"'table'");
    FUN_180315380(LIT_"'</button>'");
    FUN_180315380(LIT_"'td'");
    cRam00000001834b4247 = '\x01';
  }
  lStack_38 = 0;
  lVar9 = func_0x000180315580(TI_SparkHtml.No);
  SparkHtml_No___ctor__180735190(lVar9,0);
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x10) = LIT_"'#raiz'";
    func_0x000180314690(lVar9 + 0x10,LIT_"'#raiz'");
    lVar10 = func_0x000180315580(TI_System.Collections.Generic.List<SparkHtml.No>);
    FUN_180bba2e0(lVar10,MR_System.Collections.Generic.List<SparkHtml.No>..ctor);
    lVar11 = MR_System.Collections.Generic.List<SparkHtml.No>.Add;
    if (lVar10 != 0) {
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      lVar12 = *(longlong *)(lVar10 + 0x10);
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          if (*(uint *)(lVar12 + 0x18) <= uVar1) {
            FUN_1803155c0();
            pcVar2 = (code *)swi(3);
            lVar9 = (*pcVar2)();
            return lVar9;
          }
          *(longlong *)(lVar12 + 0x20 + (longlong)(int)uVar1 * 8) = lVar9;
          func_0x000180314690(lVar12 + (longlong)(int)uVar1 * 8 + 0x20,lVar9);
        }
        else {
          FUN_181645af0(lVar10,lVar9,
                        *(undefined8 *)(*(longlong *)(*(longlong *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        lStack_30 = lVar10;
        func_0x000180314690(&lStack_30,lVar10);
        lVar11 = func_0x000180315580(TI_System.Text.StringBuilder);
        System_Text_StringBuilder___ctor(lVar11,0);
        lStack_38 = lVar11;
        func_0x000180314690(&lStack_38,lVar11);
        iVar15 = 0;
        if (param_1 != 0) {
code_r0x00018073bfb5:
          do {
            if (*(int *)(param_1 + 0x10) <= iVar15) {
code_r0x00018073c5f2:
              if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
                func_0x000180315660();
              }
              SparkHtml___Le_g__Descarrega_2_0(&lStack_38,0);
              return lVar9;
            }
            sVar5 = System_String__get_Chars(param_1,iVar15,0);
            if (sVar5 != 0x3c) {
              if (lStack_38 == 0) break;
              System_Text_StringBuilder__Append(lStack_38,sVar5);
              iVar15 = iVar15 + 1;
              goto code_r0x00018073bfb5;
            }
            iVar7 = System_String__CompareOrdinal(param_1,iVar15,LIT_"'<!--'",0,4,0);
            if (iVar7 == 0) {
              if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
                func_0x000180315660();
              }
              SparkHtml___Le_g__Descarrega_2_0(&lStack_38,0);
              iVar15 = System_String__IndexOf(param_1,LIT_"'-->'",iVar15 + 4,4,0);
              if (iVar15 < 0) {
                iVar15 = *(int *)(param_1 + 0x10);
              }
              else {
                iVar15 = iVar15 + 3;
              }
            }
            else {
              if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
                func_0x000180315660();
              }
              iVar7 = SparkHtml__FimDaTag__18073aa10(param_1,iVar15,0);
              if (iVar7 < 0) {
                if (lStack_38 == 0) break;
                System_Text_StringBuilder__Append
                          (lStack_38,param_1,iVar15,*(int *)(param_1 + 0x10) - iVar15,0);
                goto code_r0x00018073c5f2;
              }
              lVar11 = System_String__Substring(param_1);
              if ((lVar11 == 0) || (lVar11 = func_0x00018170d270(lVar11), lVar11 == 0)) break;
              iVar15 = iVar7 + 1;
              if ((*(int *)(lVar11 + 0x10) != 0) &&
                 (cVar3 = System_String__StartsWith(lVar11), cVar3 == '\0')) {
                if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
                  func_0x000180315660();
                }
                SparkHtml___Le_g__Descarrega_2_0(&lStack_38,0);
                cVar3 = System_String__StartsWith(lVar11,LIT_"'/'");
                if (cVar3 == '\0') {
                  cVar3 = System_String__EndsWith(lVar11,LIT_"'/'");
                  if (cVar3 != '\0') {
                    lVar11 = System_String__Substring(lVar11,0,*(int *)(lVar11 + 0x10) + -1);
                  }
                  iVar7 = 0;
                  if (lVar11 == 0) break;
                  for (; iVar7 < *(int *)(lVar11 + 0x10); iVar7 = iVar7 + 1) {
                    uVar6 = System_String__get_Chars(lVar11,iVar7,0);
                    if (*(int *)(_DAT_1834c62a8 + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    cVar4 = System_Char__IsWhiteSpace(uVar6,0);
                    if (cVar4 != '\0') break;
                  }
                  lVar10 = func_0x000180315580(TI_SparkHtml.No);
                  SparkHtml_No___ctor__180735190(lVar10,0);
                  lVar12 = System_String__Substring(lVar11,0,iVar7);
                  if ((lVar12 == 0) ||
                     (uVar13 = System_String__ToLowerInvariant(lVar12,0), lVar10 == 0)) break;
                  *(undefined8 *)(lVar10 + 0x10) = uVar13;
                  func_0x000180314690(lVar10 + 0x10,uVar13);
                  uVar14 = func_0x00018170c060(lVar11,iVar7,0);
                  uVar13 = *(undefined8 *)(lVar10 + 0x20);
                  if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  SparkHtml__LeAtributos__18073ba30(uVar14,uVar13,0);
                  cVar4 = func_0x0001817058a0(*(undefined8 *)(lVar10 + 0x10),LIT_"'tr'",0);
                  if ((cVar4 != '\0') ||
                     (cVar4 = func_0x0001817058a0(*(undefined8 *)(lVar10 + 0x10),
                                                  LIT_"'td'",0), cVar4 != '\0')) {
                    if (lStack_30 == 0) break;
                    iVar7 = *(int *)(lStack_30 + 0x18);
                    do {
                      iVar7 = iVar7 + -1;
                      if (iVar7 < 1) goto code_r0x00018073c2ce;
                      if ((lStack_30 == 0) ||
                         (lVar11 = FUN_180bbafe0(lStack_30,iVar7,MR_System.Collections.Generic.List<SparkHtml.No>.get_Item), lVar11 == 0)
                         ) goto code_r0x00018073c63d;
                      uVar13 = *(undefined8 *)(lVar11 + 0x10);
                      cVar4 = func_0x0001817058a0(uVar13,LIT_"'table'",0);
                      if (cVar4 != '\0') goto code_r0x00018073c2ce;
                      cVar4 = func_0x0001817058a0(uVar13,*(undefined8 *)(lVar10 + 0x10),0);
                    } while ((cVar4 == '\0') &&
                            ((cVar4 = func_0x0001817058a0(*(undefined8 *)(lVar10 + 0x10),
                                                          LIT_"'tr'",0), cVar4 == '\0' ||
                             (cVar4 = func_0x0001817058a0(uVar13,LIT_"'td'",0),
                             cVar4 == '\0'))));
                    if (lStack_30 == 0) break;
                    FUN_180bb1f20(lStack_30,iVar7,*(int *)(lStack_30 + 0x18) - iVar7);
                  }
code_r0x00018073c2ce:
                  if (((lStack_30 == 0) ||
                      (lVar11 = FUN_180bbafe0(lStack_30,*(int *)(lStack_30 + 0x18) + -1,
                                              MR_System.Collections.Generic.List<SparkHtml.No>.get_Item), lVar11 == 0)) ||
                     (*(longlong *)(lVar11 + 0x28) == 0)) break;
                  FUN_180002eb0(*(longlong *)(lVar11 + 0x28),lVar10);
                  cVar4 = func_0x0001817058a0(*(undefined8 *)(lVar10 + 0x10));
                  if (cVar4 == '\0') {
                    if (cVar3 == '\0') {
                      if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
                        func_0x000180315660(TI_SparkHtml);
                      }
                      if (**(longlong **)(TI_SparkHtml + 0xb8) == 0) break;
                      cVar3 = FUN_1814cf450();
                      if (cVar3 == '\0') {
                        if (lStack_30 == 0) break;
                        FUN_180002eb0();
                      }
                    }
                  }
                  else {
                    if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    iVar7 = System_String__IndexOf(param_1,LIT_"'</button>'",iVar15,5,0);
                    iVar8 = System_String__IndexOf(param_1);
                    if ((-1 < iVar7) && (iVar7 == iVar8)) {
                      lVar11 = System_String__Substring(param_1);
                      if ((lVar11 == 0) || (lVar12 = func_0x00018170d270(lVar11), lVar12 == 0))
                      break;
                      if (0 < *(int *)(lVar12 + 0x10)) {
                        lVar10 = *(longlong *)(lVar10 + 0x28);
                        lVar12 = func_0x000180315580(TI_SparkHtml.No);
                        SparkHtml_No___ctor__180735190(lVar12,0);
                        if (lVar12 == 0) break;
                        *(longlong *)(lVar12 + 0x18) = lVar11;
                        func_0x000180314690(lVar12 + 0x18,lVar11);
                        if (lVar10 == 0) break;
                        FUN_180002eb0(lVar10);
                      }
                      if (LIT_"'</button>'" == 0) break;
                      iVar15 = *(int *)(LIT_"'</button>'" + 0x10) + iVar7;
                    }
                  }
                }
                else {
                  lVar11 = func_0x00018170c060(lVar11);
                  if (((lVar11 == 0) || (lVar11 = func_0x00018170d270(lVar11), lVar11 == 0)) ||
                     (System_String__ToLowerInvariant(lVar11), lStack_30 == 0)) break;
                  iVar7 = *(int *)(lStack_30 + 0x18);
                  do {
                    iVar7 = iVar7 + -1;
                    if (iVar7 < 1) goto code_r0x00018073bfb5;
                    if ((lStack_30 == 0) || (lVar11 = FUN_180bbafe0(lStack_30,iVar7), lVar11 == 0))
                    goto code_r0x00018073c63d;
                    cVar3 = func_0x0001817058a0(*(undefined8 *)(lVar11 + 0x10));
                  } while (cVar3 == '\0');
                  if (lStack_30 == 0) break;
                  FUN_180bb1f20();
                }
              }
            }
          } while( true );
        }
      }
    }
  }
code_r0x00018073c63d:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  lVar9 = (*pcVar2)();
  return lVar9;
}

