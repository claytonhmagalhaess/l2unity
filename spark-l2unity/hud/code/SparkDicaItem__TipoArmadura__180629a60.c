// SparkDicaItem__TipoArmadura__180629a60 @ 0x180629a60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkDicaItem__TipoArmadura__180629a60(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (cRam00000001834b3cf9 == '\0') {
    FUN_180315380(LIT_"'light'");
    FUN_180315380(LIT_"'magic'");
    FUN_180315380(LIT_"'Robe'");
    FUN_180315380(LIT_"'Heavy Armor'");
    FUN_180315380(LIT_"'heavy'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'Light Armor'");
    cRam00000001834b3cf9 = '\x01';
  }
  if ((param_1 == 0) && (param_1 = LIT_"''", LIT_"''" == 0)) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    lVar4 = (*pcVar1)();
    return lVar4;
  }
  uVar3 = System_String__ToLowerInvariant(param_1,0);
  cVar2 = func_0x0001817058a0(uVar3,LIT_"'light'",0);
  if (cVar2 != '\0') {
    return LIT_"'Light Armor'";
  }
  cVar2 = func_0x0001817058a0(uVar3,LIT_"'heavy'",0);
  if (cVar2 != '\0') {
    return LIT_"'Heavy Armor'";
  }
  cVar2 = func_0x0001817058a0(uVar3,LIT_"'magic'",0);
  lVar4 = LIT_"''";
  if (cVar2 != '\0') {
    lVar4 = LIT_"'Robe'";
  }
  return lVar4;
}

