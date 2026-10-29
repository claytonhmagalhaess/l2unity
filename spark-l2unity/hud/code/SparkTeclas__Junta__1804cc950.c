// SparkTeclas__Junta__1804cc950 @ 0x1804cc950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkTeclas__Junta__1804cc950(char param_1,char param_2,char param_3,longlong param_4)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 unaff_RDI;
  longlong lVar10;
  int iVar11;
  
  if (cRam00000001834b32f7 == '\0') {
    FUN_180315380(LIT_"'alt+'");
    FUN_180315380(LIT_"'ctrl+'");
    FUN_180315380(LIT_"'shift+'");
    FUN_180315380(LIT_"''");
    cRam00000001834b32f7 = '\x01';
  }
  cVar2 = func_0x000181707e50(param_4,0);
  if (cVar2 != '\0') {
    return LIT_"''";
  }
  lVar6 = LIT_"''";
  if (param_2 != '\0') {
    lVar6 = LIT_"'ctrl+'";
  }
  lVar9 = LIT_"''";
  if (param_3 != '\0') {
    lVar9 = LIT_"'shift+'";
  }
  lVar7 = LIT_"''";
  if (param_1 != '\0') {
    lVar7 = LIT_"'alt+'";
  }
  lVar3 = lVar9;
  lVar8 = lVar7;
  lVar10 = param_4;
  if (((((lVar6 != 0) && (*(int *)(lVar6 + 0x10) != 0)) && (lVar3 = lVar6, lVar9 != 0)) &&
      ((*(int *)(lVar9 + 0x10) != 0 && (lVar8 = lVar9, lVar7 != 0)))) &&
     ((*(int *)(lVar7 + 0x10) != 0 &&
      ((lVar10 = lVar7, param_4 != 0 && (*(int *)(param_4 + 0x10) != 0)))))) {
    lVar3 = func_0x000180325580(*(int *)(lVar6 + 0x10) + *(int *)(lVar9 + 0x10) +
                                *(int *)(lVar7 + 0x10) + *(int *)(param_4 + 0x10));
    if (lVar3 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      lVar6 = (*pcVar1)();
      return lVar6;
    }
    if (*(int *)(lVar3 + 0x10) < *(int *)(lVar6 + 0x10)) {
      uVar4 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
      uVar4 = func_0x000180315580(uVar4);
      System_IndexOutOfRangeException___ctor(uVar4,0);
      uVar5 = func_0x0001803153a0(MD_System.String.FillStringChecked);
      FUN_180315590(uVar4,uVar5);
      pcVar1 = (code *)swi(3);
      lVar6 = (*pcVar1)();
      return lVar6;
    }
    func_0x0001818cf950(lVar3 + 0x14,lVar6 + 0x14,*(int *)(lVar6 + 0x10) * 2,0);
    if (*(int *)(lVar3 + 0x10) - *(int *)(lVar6 + 0x10) < *(int *)(lVar9 + 0x10)) {
      uVar4 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
      uVar4 = func_0x000180315580(uVar4);
      System_IndexOutOfRangeException___ctor(uVar4,0);
      uVar5 = func_0x0001803153a0(MD_System.String.FillStringChecked);
      FUN_180315590(uVar4,uVar5);
      pcVar1 = (code *)swi(3);
      lVar6 = (*pcVar1)();
      return lVar6;
    }
    func_0x0001818cf950(lVar3 + ((longlong)*(int *)(lVar6 + 0x10) + 10) * 2,lVar9 + 0x14,
                        *(int *)(lVar9 + 0x10) * 2,0);
    iVar11 = *(int *)(lVar6 + 0x10) + *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar3 + 0x10) - iVar11 < *(int *)(lVar7 + 0x10)) {
      uVar4 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
      uVar4 = func_0x000180315580(uVar4);
      System_IndexOutOfRangeException___ctor(uVar4,0);
      uVar5 = func_0x0001803153a0(MD_System.String.FillStringChecked);
      FUN_180315590(uVar4,uVar5);
      pcVar1 = (code *)swi(3);
      lVar6 = (*pcVar1)();
      return lVar6;
    }
    func_0x0001818cf950(lVar3 + ((longlong)iVar11 + 10) * 2,lVar7 + 0x14,*(int *)(lVar7 + 0x10) * 2,
                        0);
    iVar11 = *(int *)(lVar6 + 0x10) + *(int *)(lVar9 + 0x10) + *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar3 + 0x10) - iVar11 < *(int *)(param_4 + 0x10)) {
      uVar4 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
      uVar4 = func_0x000180315580(uVar4);
      System_IndexOutOfRangeException___ctor(uVar4,0);
      uVar5 = func_0x0001803153a0(MD_System.String.FillStringChecked);
      FUN_180315590(uVar4,uVar5);
      pcVar1 = (code *)swi(3);
      lVar6 = (*pcVar1)();
      return lVar6;
    }
    func_0x0001818cf950(lVar3 + ((longlong)iVar11 + 10) * 2,param_4 + 0x14,
                        *(int *)(param_4 + 0x10) * 2,0);
    return lVar3;
  }
  lVar6 = lVar8;
  lVar9 = lVar10;
  if ((((lVar3 == 0) || (*(int *)(lVar3 + 0x10) == 0)) || (lVar6 = lVar3, lVar8 == 0)) ||
     (((*(int *)(lVar8 + 0x10) == 0 || (lVar9 = lVar8, lVar10 == 0)) ||
      (*(int *)(lVar10 + 0x10) == 0)))) {
    if ((lVar6 == 0) || (*(int *)(lVar6 + 0x10) == 0)) {
      if ((lVar9 != 0) && (*(int *)(lVar9 + 0x10) != 0)) {
        return lVar9;
      }
      return **(longlong **)(_DAT_1834c62b0 + 0xb8);
    }
    if ((lVar9 == 0) || (*(int *)(lVar9 + 0x10) == 0)) {
      return lVar6;
    }
    iVar11 = *(int *)(lVar6 + 0x10);
    lVar7 = func_0x000180325580(*(int *)(lVar9 + 0x10) + iVar11,lVar9,0,0,unaff_RDI);
    if (lVar7 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      lVar6 = (*pcVar1)();
      return lVar6;
    }
    if (*(int *)(lVar7 + 0x10) < *(int *)(lVar6 + 0x10)) {
      uVar4 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
      uVar4 = func_0x000180315580(uVar4);
      System_IndexOutOfRangeException___ctor(uVar4,0);
      uVar5 = func_0x0001803153a0(MD_System.String.FillStringChecked);
      FUN_180315590(uVar4,uVar5);
      pcVar1 = (code *)swi(3);
      lVar6 = (*pcVar1)();
      return lVar6;
    }
    func_0x0001818cf950(lVar7 + 0x14,lVar6 + 0x14,*(int *)(lVar6 + 0x10) * 2,0);
    if (*(int *)(lVar7 + 0x10) - iVar11 < *(int *)(lVar9 + 0x10)) {
      uVar4 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
      uVar4 = func_0x000180315580(uVar4);
      System_IndexOutOfRangeException___ctor(uVar4,0);
      uVar5 = func_0x0001803153a0(MD_System.String.FillStringChecked);
      FUN_180315590(uVar4,uVar5);
      pcVar1 = (code *)swi(3);
      lVar6 = (*pcVar1)();
      return lVar6;
    }
    func_0x0001818cf950(lVar7 + ((longlong)iVar11 + 10) * 2,lVar9 + 0x14,*(int *)(lVar9 + 0x10) * 2,
                        0);
    return lVar7;
  }
  lVar6 = func_0x000180325580(*(int *)(lVar3 + 0x10) + *(int *)(lVar8 + 0x10) +
                              *(int *)(lVar10 + 0x10));
  if (lVar6 == 0) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    lVar6 = (*pcVar1)();
    return lVar6;
  }
  if (*(int *)(lVar6 + 0x10) < *(int *)(lVar3 + 0x10)) {
    uVar4 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
    uVar4 = func_0x000180315580(uVar4);
    System_IndexOutOfRangeException___ctor(uVar4,0);
    uVar5 = func_0x0001803153a0(MD_System.String.FillStringChecked);
    FUN_180315590(uVar4,uVar5);
    pcVar1 = (code *)swi(3);
    lVar6 = (*pcVar1)();
    return lVar6;
  }
  func_0x0001818cf950(lVar6 + 0x14,lVar3 + 0x14,*(int *)(lVar3 + 0x10) * 2,0);
  if (*(int *)(lVar6 + 0x10) - *(int *)(lVar3 + 0x10) < *(int *)(lVar8 + 0x10)) {
    uVar4 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
    uVar4 = func_0x000180315580(uVar4);
    System_IndexOutOfRangeException___ctor(uVar4,0);
    uVar5 = func_0x0001803153a0(MD_System.String.FillStringChecked);
    FUN_180315590(uVar4,uVar5);
    pcVar1 = (code *)swi(3);
    lVar6 = (*pcVar1)();
    return lVar6;
  }
  func_0x0001818cf950((longlong)*(int *)(lVar3 + 0x10) * 2 + 0x14 + lVar6,lVar8 + 0x14,
                      *(int *)(lVar8 + 0x10) * 2,0);
  iVar11 = *(int *)(lVar3 + 0x10) + *(int *)(lVar8 + 0x10);
  if (*(int *)(lVar6 + 0x10) - iVar11 < *(int *)(lVar10 + 0x10)) {
    uVar4 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
    uVar4 = func_0x000180315580(uVar4);
    System_IndexOutOfRangeException___ctor(uVar4,0);
    uVar5 = func_0x0001803153a0(MD_System.String.FillStringChecked);
    FUN_180315590(uVar4,uVar5);
    pcVar1 = (code *)swi(3);
    lVar6 = (*pcVar1)();
    return lVar6;
  }
  func_0x0001818cf950((longlong)iVar11 * 2 + 0x14 + lVar6,lVar10 + 0x14,*(int *)(lVar10 + 0x10) * 2,
                      0);
  return lVar6;
}

