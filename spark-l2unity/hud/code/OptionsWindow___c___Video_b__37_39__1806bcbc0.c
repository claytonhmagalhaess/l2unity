// OptionsWindow___c___Video_b__37_39__1806bcbc0 @ 0x1806bcbc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong OptionsWindow___c___Video_b__37_39__1806bcbc0(void)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 unaff_RDI;
  int iVar10;
  
  if (cRam00000001834b3eca == '\0') {
    FUN_180315380(TI_SparkApiGrafica);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"'Already running '");
    FUN_180315380(LIT_"'.'");
    cRam00000001834b3eca = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  iVar10 = *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x58);
  if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
    func_0x000180315660();
  }
  iVar3 = SparkApiGrafica__get_Atual(0);
  if (iVar10 != iVar3) {
    return 0;
  }
  if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar4 = SparkApiGrafica__get_NomeAtual(0);
  lVar2 = LIT_"'.'";
  lVar8 = LIT_"'Already running '";
  lVar5 = lVar4;
  lVar9 = LIT_"'.'";
  if (((((LIT_"'Already running '" == 0) || (*(int *)(LIT_"'Already running '" + 0x10) == 0)) ||
       (lVar5 = LIT_"'Already running '", lVar4 == 0)) ||
      ((*(int *)(lVar4 + 0x10) == 0 || (lVar9 = lVar4, LIT_"'.'" == 0)))) ||
     (*(int *)(LIT_"'.'" + 0x10) == 0)) {
    if ((lVar5 == 0) || (*(int *)(lVar5 + 0x10) == 0)) {
      if ((lVar9 != 0) && (*(int *)(lVar9 + 0x10) != 0)) {
        return lVar9;
      }
      return **(longlong **)(_DAT_1834c62b0 + 0xb8);
    }
    if ((lVar9 == 0) || (*(int *)(lVar9 + 0x10) == 0)) {
      return lVar5;
    }
    iVar10 = *(int *)(lVar5 + 0x10);
    lVar8 = func_0x000180325580(*(int *)(lVar9 + 0x10) + iVar10,lVar9,0,0,unaff_RDI);
    if (lVar8 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      lVar8 = (*pcVar1)();
      return lVar8;
    }
    if (*(int *)(lVar8 + 0x10) < *(int *)(lVar5 + 0x10)) {
      uVar6 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
      uVar6 = func_0x000180315580(uVar6);
      System_IndexOutOfRangeException___ctor(uVar6,0);
      uVar7 = func_0x0001803153a0(MD_System.String.FillStringChecked);
      FUN_180315590(uVar6,uVar7);
      pcVar1 = (code *)swi(3);
      lVar8 = (*pcVar1)();
      return lVar8;
    }
    func_0x0001818cf950(lVar8 + 0x14,lVar5 + 0x14,*(int *)(lVar5 + 0x10) * 2,0);
    if (*(int *)(lVar8 + 0x10) - iVar10 < *(int *)(lVar9 + 0x10)) {
      uVar6 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
      uVar6 = func_0x000180315580(uVar6);
      System_IndexOutOfRangeException___ctor(uVar6,0);
      uVar7 = func_0x0001803153a0(MD_System.String.FillStringChecked);
      FUN_180315590(uVar6,uVar7);
      pcVar1 = (code *)swi(3);
      lVar8 = (*pcVar1)();
      return lVar8;
    }
    func_0x0001818cf950(lVar8 + ((longlong)iVar10 + 10) * 2,lVar9 + 0x14,*(int *)(lVar9 + 0x10) * 2,
                        0);
    return lVar8;
  }
  lVar5 = func_0x000180325580(*(int *)(LIT_"'Already running '" + 0x10) + *(int *)(lVar4 + 0x10) +
                              *(int *)(LIT_"'.'" + 0x10));
  if (lVar5 == 0) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    lVar8 = (*pcVar1)();
    return lVar8;
  }
  if (*(int *)(lVar5 + 0x10) < *(int *)(lVar8 + 0x10)) {
    uVar6 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
    uVar6 = func_0x000180315580(uVar6);
    System_IndexOutOfRangeException___ctor(uVar6,0);
    uVar7 = func_0x0001803153a0(MD_System.String.FillStringChecked);
    FUN_180315590(uVar6,uVar7);
    pcVar1 = (code *)swi(3);
    lVar8 = (*pcVar1)();
    return lVar8;
  }
  func_0x0001818cf950(lVar5 + 0x14,lVar8 + 0x14,*(int *)(lVar8 + 0x10) * 2,0);
  if (*(int *)(lVar5 + 0x10) - *(int *)(lVar8 + 0x10) < *(int *)(lVar4 + 0x10)) {
    uVar6 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
    uVar6 = func_0x000180315580(uVar6);
    System_IndexOutOfRangeException___ctor(uVar6,0);
    uVar7 = func_0x0001803153a0(MD_System.String.FillStringChecked);
    FUN_180315590(uVar6,uVar7);
    pcVar1 = (code *)swi(3);
    lVar8 = (*pcVar1)();
    return lVar8;
  }
  func_0x0001818cf950((longlong)*(int *)(lVar8 + 0x10) * 2 + 0x14 + lVar5,lVar4 + 0x14,
                      *(int *)(lVar4 + 0x10) * 2,0);
  iVar10 = *(int *)(lVar8 + 0x10) + *(int *)(lVar4 + 0x10);
  if (*(int *)(lVar5 + 0x10) - iVar10 < *(int *)(lVar2 + 0x10)) {
    uVar6 = func_0x0001803153a0(TI_System.IndexOutOfRangeException);
    uVar6 = func_0x000180315580(uVar6);
    System_IndexOutOfRangeException___ctor(uVar6,0);
    uVar7 = func_0x0001803153a0(MD_System.String.FillStringChecked);
    FUN_180315590(uVar6,uVar7);
    pcVar1 = (code *)swi(3);
    lVar8 = (*pcVar1)();
    return lVar8;
  }
  func_0x0001818cf950((longlong)iVar10 * 2 + 0x14 + lVar5,lVar2 + 0x14,*(int *)(lVar2 + 0x10) * 2,0)
  ;
  return lVar5;
}

