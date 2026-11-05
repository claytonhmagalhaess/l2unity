// SparkDicaItem__Linha__180626b20 @ 0x180626b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkDicaItem__Linha__180626b20(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  int aiStackX_18 [4];
  
  if (cRam00000001834b3d00 == '\0') {
    FUN_180315380(LIT_"'#6FC3FF'");
    FUN_180315380(LIT_"'\\n<color={0}>{1}:</color> {2}'");
    FUN_180315380(LIT_"' <color={0}>(+{1})</color>'");
    FUN_180315380(LIT_"'#A3A08A'");
    cRam00000001834b3d00 = '\x01';
  }
  if (0 < param_3) {
    aiStackX_18[0] = param_3;
    uVar2 = func_0x000180314670(_DAT_1834c6268,aiStackX_18);
    uVar2 = System_String__Format(LIT_"'\\n<color={0}>{1}:</color> {2}'",LIT_"'#A3A08A'",param_2,uVar2,0);
    if (param_1 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    System_Text_StringBuilder__Append(param_1,uVar2,0);
    if (0 < param_4) {
      aiStackX_18[0] = param_4;
      uVar2 = func_0x000180314670(_DAT_1834c6268,aiStackX_18);
      uVar2 = System_String__Format(LIT_"' <color={0}>(+{1})</color>'",LIT_"'#6FC3FF'",uVar2,0);
      System_Text_StringBuilder__Append(param_1,uVar2,0);
    }
  }
  return;
}

