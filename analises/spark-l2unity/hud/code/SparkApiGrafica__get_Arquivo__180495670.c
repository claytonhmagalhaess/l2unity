// SparkApiGrafica__get_Arquivo__180495670 @ 0x180495670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkApiGrafica__get_Arquivo__180495670(void)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b3260 == '\0') {
    FUN_180315380(TI_System.IO.Path);
    FUN_180315380(TI_SparkApiGrafica);
    FUN_180315380(LIT_"'grafico.txt'");
    cRam00000001834b3260 = '\x01';
  }
  if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar7 = SparkApiGrafica__get_Pasta__1804958b0(0);
  if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar3 = LIT_"'grafico.txt'";
  if (DAT_1834b9464 == '\0') {
    FUN_180315380(TI_System.IO.Path);
    DAT_1834b9464 = '\x01';
  }
  if (lVar7 == 0) {
    uVar9 = func_0x0001803153a0(TI_System.ArgumentNullException);
    uVar9 = func_0x000180315580(uVar9);
    uVar10 = func_0x0001803153a0(LIT_"'path1'");
    System_ArgumentNullException___ctor(uVar9,uVar10,0);
    uVar10 = func_0x0001803153a0(MD_System.IO.Path.Combine);
    FUN_180315590(uVar9,uVar10);
    pcVar2 = (code *)swi(3);
    lVar7 = (*pcVar2)();
    return lVar7;
  }
  if (lVar3 == 0) {
    uVar9 = func_0x0001803153a0(TI_System.ArgumentNullException);
    uVar9 = func_0x000180315580(uVar9);
    uVar10 = func_0x0001803153a0(LIT_"'path2'");
    System_ArgumentNullException___ctor(uVar9,uVar10,0);
    uVar10 = func_0x0001803153a0(MD_System.IO.Path.Combine);
    FUN_180315590(uVar9,uVar10);
    pcVar2 = (code *)swi(3);
    lVar7 = (*pcVar2)();
    return lVar7;
  }
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(int *)(lVar3 + 0x10) == 0) {
      return lVar7;
    }
    if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
      func_0x000180315660(TI_System.IO.Path);
    }
    iVar6 = System_String__IndexOfAny(lVar7,**(undefined8 **)(TI_System.IO.Path + 0xb8),0);
    if (iVar6 != -1) {
      uVar9 = func_0x0001803153a0(TI_System.ArgumentException);
      uVar9 = func_0x000180315580(uVar9);
      uVar10 = func_0x0001803153a0(LIT_"'Illegal characters in path.'");
      System_ArgumentException___ctor(uVar9,uVar10,0);
      uVar10 = func_0x0001803153a0(MD_System.IO.Path.Combine);
      FUN_180315590(uVar9,uVar10);
      pcVar2 = (code *)swi(3);
      lVar7 = (*pcVar2)();
      return lVar7;
    }
    if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
      func_0x000180315660(TI_System.IO.Path);
    }
    iVar6 = System_String__IndexOfAny(lVar3,**(undefined8 **)(TI_System.IO.Path + 0xb8),0);
    if (iVar6 != -1) {
      uVar9 = func_0x0001803153a0(TI_System.ArgumentException);
      uVar9 = func_0x000180315580(uVar9);
      uVar10 = func_0x0001803153a0(LIT_"'Illegal characters in path.'");
      System_ArgumentException___ctor(uVar9,uVar10,0);
      uVar10 = func_0x0001803153a0(MD_System.IO.Path.Combine);
      FUN_180315590(uVar9,uVar10);
      pcVar2 = (code *)swi(3);
      lVar7 = (*pcVar2)();
      return lVar7;
    }
    if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = System_IO_Path__IsPathRooted(lVar3,0);
    if (cVar4 == '\0') {
      sVar5 = System_String__get_Chars(lVar7,*(int *)(lVar7 + 0x10) + -1,0);
      if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
        func_0x000180315660(TI_System.IO.Path);
      }
      lVar8 = lVar7;
      lVar11 = lVar3;
      if (sVar5 != *(short *)(*(longlong *)(TI_System.IO.Path + 0xb8) + 10)) {
        if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
          func_0x000180315660(TI_System.IO.Path);
        }
        if (sVar5 != *(short *)(*(longlong *)(TI_System.IO.Path + 0xb8) + 8)) {
          if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
            func_0x000180315660(TI_System.IO.Path);
          }
          if (sVar5 != *(short *)(*(longlong *)(TI_System.IO.Path + 0xb8) + 0x18)) {
            if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
              func_0x000180315660(TI_System.IO.Path);
            }
            lVar1 = *(longlong *)(*(longlong *)(TI_System.IO.Path + 0xb8) + 0x10);
            lVar8 = lVar1;
            if (((((lVar7 != 0) && (*(int *)(lVar7 + 0x10) != 0)) && (lVar8 = lVar7, lVar1 != 0)) &&
                ((*(int *)(lVar1 + 0x10) != 0 && (lVar11 = lVar1, lVar3 != 0)))) &&
               (*(int *)(lVar3 + 0x10) != 0)) {
              lVar8 = func_0x000180325580(*(int *)(lVar7 + 0x10) + *(int *)(lVar1 + 0x10) +
                                          *(int *)(lVar3 + 0x10));
              if (lVar8 == 0) {
                FUN_1803155d0();
                pcVar2 = (code *)swi(3);
                lVar7 = (*pcVar2)();
                return lVar7;
              }
              if (*(int *)(lVar8 + 0x10) < *(int *)(lVar7 + 0x10)) {
                uVar9 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
                uVar9 = func_0x000180315580(uVar9);
                System_IndexOutOfRangeException___ctor(uVar9,0);
                uVar10 = func_0x0001803153a0(MD_System.String.FillStringChecked);
                FUN_180315590(uVar9,uVar10);
                pcVar2 = (code *)swi(3);
                lVar7 = (*pcVar2)();
                return lVar7;
              }
              func_0x0001818cf950(lVar8 + 0x14,lVar7 + 0x14,*(int *)(lVar7 + 0x10) * 2,0,unaff_RDI);
              if (*(int *)(lVar8 + 0x10) - *(int *)(lVar7 + 0x10) < *(int *)(lVar1 + 0x10)) {
                uVar9 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
                uVar9 = func_0x000180315580(uVar9);
                System_IndexOutOfRangeException___ctor(uVar9,0);
                uVar10 = func_0x0001803153a0(MD_System.String.FillStringChecked);
                FUN_180315590(uVar9,uVar10);
                pcVar2 = (code *)swi(3);
                lVar7 = (*pcVar2)();
                return lVar7;
              }
              func_0x0001818cf950((longlong)*(int *)(lVar7 + 0x10) * 2 + 0x14 + lVar8,lVar1 + 0x14,
                                  *(int *)(lVar1 + 0x10) * 2,0,unaff_RDI);
              iVar6 = *(int *)(lVar7 + 0x10) + *(int *)(lVar1 + 0x10);
              if (*(int *)(lVar8 + 0x10) - iVar6 < *(int *)(lVar3 + 0x10)) {
                uVar9 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
                uVar9 = func_0x000180315580(uVar9);
                System_IndexOutOfRangeException___ctor(uVar9,0);
                uVar10 = func_0x0001803153a0(MD_System.String.FillStringChecked);
                FUN_180315590(uVar9,uVar10);
                pcVar2 = (code *)swi(3);
                lVar7 = (*pcVar2)();
                return lVar7;
              }
              func_0x0001818cf950((longlong)iVar6 * 2 + 0x14 + lVar8,lVar3 + 0x14,
                                  *(int *)(lVar3 + 0x10) * 2,0,unaff_RDI);
              return lVar8;
            }
          }
        }
      }
      if ((lVar8 == 0) || (*(int *)(lVar8 + 0x10) == 0)) {
        if ((lVar11 != 0) && (*(int *)(lVar11 + 0x10) != 0)) {
          return lVar11;
        }
        return **(longlong **)(_DAT_1834c62b0 + 0xb8);
      }
      if ((lVar11 == 0) || (*(int *)(lVar11 + 0x10) == 0)) {
        return lVar8;
      }
      iVar6 = *(int *)(lVar8 + 0x10);
      lVar7 = func_0x000180325580(*(int *)(lVar11 + 0x10) + iVar6,lVar11,0);
      if (lVar7 == 0) {
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        lVar7 = (*pcVar2)();
        return lVar7;
      }
      if (*(int *)(lVar7 + 0x10) < *(int *)(lVar8 + 0x10)) {
        uVar9 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
        uVar9 = func_0x000180315580(uVar9);
        System_IndexOutOfRangeException___ctor(uVar9,0);
        uVar10 = func_0x0001803153a0(MD_System.String.FillStringChecked);
        FUN_180315590(uVar9,uVar10);
        pcVar2 = (code *)swi(3);
        lVar7 = (*pcVar2)();
        return lVar7;
      }
      func_0x0001818cf950(lVar7 + 0x14,lVar8 + 0x14,*(int *)(lVar8 + 0x10) * 2,0,unaff_RDI);
      if (*(int *)(lVar7 + 0x10) - iVar6 < *(int *)(lVar11 + 0x10)) {
        uVar9 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
        uVar9 = func_0x000180315580(uVar9);
        System_IndexOutOfRangeException___ctor(uVar9,0);
        uVar10 = func_0x0001803153a0(MD_System.String.FillStringChecked);
        FUN_180315590(uVar9,uVar10);
        pcVar2 = (code *)swi(3);
        lVar7 = (*pcVar2)();
        return lVar7;
      }
      func_0x0001818cf950(lVar7 + ((longlong)iVar6 + 10) * 2,lVar11 + 0x14,
                          *(int *)(lVar11 + 0x10) * 2,0,unaff_RDI);
      return lVar7;
    }
  }
  return lVar3;
}

