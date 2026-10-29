// SparkTeclas_Item__get_Chave__1804b53e0 @ 0x1804b53e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkTeclas_Item__get_Chave__1804b53e0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 unaff_RDI;
  int iVar9;
  
  if (cRam00000001834b3308 == '\0') {
    FUN_180315380(LIT_"'/'");
    cRam00000001834b3308 = '\x01';
  }
  if (((*(longlong *)(param_1 + 0x20) == 0) ||
      (lVar3 = func_0x000181e83e90(*(longlong *)(param_1 + 0x20),0), lVar7 = LIT_"'/'",
      lVar3 == 0)) || (*(longlong *)(param_1 + 0x20) == 0)) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    lVar7 = (*pcVar2)();
    return lVar7;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
  lVar3 = *(longlong *)(lVar3 + 0x10);
  lVar4 = LIT_"'/'";
  lVar8 = lVar1;
  if ((((lVar3 == 0) || (*(int *)(lVar3 + 0x10) == 0)) ||
      ((lVar4 = lVar3, LIT_"'/'" == 0 ||
       ((*(int *)(LIT_"'/'" + 0x10) == 0 || (lVar8 = LIT_"'/'", lVar1 == 0))))
      )) || (*(int *)(lVar1 + 0x10) == 0)) {
    if ((lVar4 == 0) || (*(int *)(lVar4 + 0x10) == 0)) {
      if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) != 0)) {
        return lVar8;
      }
      return **(longlong **)(_DAT_1834c62b0 + 0xb8);
    }
    if ((lVar8 == 0) || (*(int *)(lVar8 + 0x10) == 0)) {
      return lVar4;
    }
    iVar9 = *(int *)(lVar4 + 0x10);
    lVar7 = func_0x000180325580(*(int *)(lVar8 + 0x10) + iVar9,lVar8,0,0,unaff_RDI);
    if (lVar7 == 0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      lVar7 = (*pcVar2)();
      return lVar7;
    }
    if (*(int *)(lVar7 + 0x10) < *(int *)(lVar4 + 0x10)) {
      uVar5 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
      uVar5 = func_0x000180315580(uVar5);
      System_IndexOutOfRangeException___ctor(uVar5,0);
      uVar6 = func_0x0001803153a0(MD_System.String.FillStringChecked);
      FUN_180315590(uVar5,uVar6);
      pcVar2 = (code *)swi(3);
      lVar7 = (*pcVar2)();
      return lVar7;
    }
    func_0x0001818cf950(lVar7 + 0x14,lVar4 + 0x14,*(int *)(lVar4 + 0x10) * 2,0);
    if (*(int *)(lVar7 + 0x10) - iVar9 < *(int *)(lVar8 + 0x10)) {
      uVar5 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
      uVar5 = func_0x000180315580(uVar5);
      System_IndexOutOfRangeException___ctor(uVar5,0);
      uVar6 = func_0x0001803153a0(MD_System.String.FillStringChecked);
      FUN_180315590(uVar5,uVar6);
      pcVar2 = (code *)swi(3);
      lVar7 = (*pcVar2)();
      return lVar7;
    }
    func_0x0001818cf950(lVar7 + ((longlong)iVar9 + 10) * 2,lVar8 + 0x14,*(int *)(lVar8 + 0x10) * 2,0
                       );
    return lVar7;
  }
  lVar4 = func_0x000180325580(*(int *)(lVar3 + 0x10) + *(int *)(LIT_"'/'" + 0x10) +
                              *(int *)(lVar1 + 0x10));
  if (lVar4 == 0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    lVar7 = (*pcVar2)();
    return lVar7;
  }
  if (*(int *)(lVar4 + 0x10) < *(int *)(lVar3 + 0x10)) {
    uVar5 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
    uVar5 = func_0x000180315580(uVar5);
    System_IndexOutOfRangeException___ctor(uVar5,0);
    uVar6 = func_0x0001803153a0(MD_System.String.FillStringChecked);
    FUN_180315590(uVar5,uVar6);
    pcVar2 = (code *)swi(3);
    lVar7 = (*pcVar2)();
    return lVar7;
  }
  func_0x0001818cf950(lVar4 + 0x14,lVar3 + 0x14,*(int *)(lVar3 + 0x10) * 2,0);
  if (*(int *)(lVar4 + 0x10) - *(int *)(lVar3 + 0x10) < *(int *)(lVar7 + 0x10)) {
    uVar5 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
    uVar5 = func_0x000180315580(uVar5);
    System_IndexOutOfRangeException___ctor(uVar5,0);
    uVar6 = func_0x0001803153a0(MD_System.String.FillStringChecked);
    FUN_180315590(uVar5,uVar6);
    pcVar2 = (code *)swi(3);
    lVar7 = (*pcVar2)();
    return lVar7;
  }
  func_0x0001818cf950((longlong)*(int *)(lVar3 + 0x10) * 2 + 0x14 + lVar4,lVar7 + 0x14,
                      *(int *)(lVar7 + 0x10) * 2,0);
  iVar9 = *(int *)(lVar3 + 0x10) + *(int *)(lVar7 + 0x10);
  if (*(int *)(lVar4 + 0x10) - iVar9 < *(int *)(lVar1 + 0x10)) {
    uVar5 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
    uVar5 = func_0x000180315580(uVar5);
    System_IndexOutOfRangeException___ctor(uVar5,0);
    uVar6 = func_0x0001803153a0(MD_System.String.FillStringChecked);
    FUN_180315590(uVar5,uVar6);
    pcVar2 = (code *)swi(3);
    lVar7 = (*pcVar2)();
    return lVar7;
  }
  func_0x0001818cf950((longlong)iVar9 * 2 + 0x14 + lVar4,lVar1 + 0x14,*(int *)(lVar1 + 0x10) * 2,0);
  return lVar4;
}

