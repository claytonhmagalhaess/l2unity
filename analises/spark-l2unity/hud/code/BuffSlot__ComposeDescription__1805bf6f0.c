// BuffSlot__ComposeDescription__1805bf6f0 @ 0x1805bf6f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong BuffSlot__ComposeDescription__1805bf6f0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  int aiStackX_10 [2];
  
  if (cRam00000001834b3a8e == '\0') {
    FUN_180315380(LIT_"'$s{0}'");
    cRam00000001834b3a8e = '\x01';
  }
  if (param_2 != 0) {
    uVar4 = 0;
    while( true ) {
      if (*(int *)(param_2 + 0x18) <= (int)uVar4) {
        return param_1;
      }
      aiStackX_10[0] = uVar4 + 1;
      uVar2 = func_0x000180314670(_DAT_1834c6268,aiStackX_10);
      uVar2 = System_String__Format(LIT_"'$s{0}'",uVar2,0);
      if (*(uint *)(param_2 + 0x18) <= uVar4) break;
      if (param_1 == 0) {
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        lVar3 = (*pcVar1)();
        return lVar3;
      }
      param_1 = System_String__Replace
                          (param_1,uVar2,*(undefined8 *)(param_2 + 0x20 + (longlong)(int)uVar4 * 8),
                           0);
      uVar4 = uVar4 + 1;
    }
    FUN_1803155c0();
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  lVar3 = (*pcVar1)();
  return lVar3;
}

