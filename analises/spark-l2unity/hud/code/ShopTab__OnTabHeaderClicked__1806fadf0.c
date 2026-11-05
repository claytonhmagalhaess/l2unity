// ShopTab__OnTabHeaderClicked__1806fadf0 @ 0x1806fadf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ShopTab__OnTabHeaderClicked__1806fadf0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  
  L2Tab__OnTabHeaderClicked__180795890(param_1,0);
  if (DAT_1834b3801 == '\0') {
    FUN_180315380(TI_ShopWindow);
    DAT_1834b3801 = '\x01';
  }
  lVar2 = **(longlong **)(TI_ShopWindow + 0xb8);
  if (lVar2 == 0) {
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = *(int *)(param_1 + 0x8c);
  if (cRam00000001834b40fb == '\0') {
    FUN_180315380(LIT_"'Buy'",iVar1,0);
    FUN_180315380(LIT_"'Sell'");
    cRam00000001834b40fb = '\x01';
  }
  plVar3 = *(longlong **)(lVar2 + 0xc0);
  if (plVar3 != (longlong *)0x0) {
    lVar2 = *plVar3;
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001806fc882. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0xe48))(plVar3,LIT_"'Sell'");
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001806fc89a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0xe48))(plVar3,LIT_"'Buy'",*(undefined8 *)(lVar2 + 0xe50));
    return;
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

