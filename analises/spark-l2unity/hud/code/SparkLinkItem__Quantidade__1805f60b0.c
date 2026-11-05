// SparkLinkItem__Quantidade__1805f60b0 @ 0x1805f60b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkLinkItem__Quantidade__1805f60b0(int param_1)

{
  undefined8 uVar1;
  int aiStackX_8 [8];
  
  if (cRam00000001834b3b4b == '\0') {
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"' ({0:n0})'");
    cRam00000001834b3b4b = '\x01';
  }
  if (1 < param_1) {
    aiStackX_8[0] = param_1;
    uVar1 = func_0x000180314670(_DAT_1834c6268,aiStackX_8);
    uVar1 = System_String__Format(LIT_"' ({0:n0})'",uVar1,0);
    return uVar1;
  }
  return LIT_"''";
}

