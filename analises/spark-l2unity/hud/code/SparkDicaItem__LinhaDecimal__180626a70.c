// SparkDicaItem__LinhaDecimal__180626a70 @ 0x180626a70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkDicaItem__LinhaDecimal__180626a70(longlong param_1,undefined8 param_2,float param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  float afStackX_18 [4];
  
  if (cRam00000001834b3d01 == '\0') {
    FUN_180315380(LIT_"'\\n<color={0}>{1}:</color> {2:0.#}'");
    FUN_180315380(LIT_"'#A3A08A'");
    cRam00000001834b3d01 = '\x01';
  }
  if (0.0 < param_3) {
    afStackX_18[0] = param_3;
    uVar2 = func_0x000180314670(_DAT_1834c6298,afStackX_18);
    uVar2 = System_String__Format(LIT_"'\\n<color={0}>{1}:</color> {2:0.#}'",LIT_"'#A3A08A'",param_2,uVar2,0);
    if (param_1 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    System_Text_StringBuilder__Append(param_1,uVar2,0);
  }
  return;
}

