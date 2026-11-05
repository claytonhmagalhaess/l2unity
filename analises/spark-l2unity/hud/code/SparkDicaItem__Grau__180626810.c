// SparkDicaItem__Grau__180626810 @ 0x180626810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte SparkDicaItem__Grau__180626810(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b3ced == '\0') {
    FUN_180315380(LIT_"'a'");
    FUN_180315380(LIT_"'b'");
    FUN_180315380(LIT_"'c'");
    FUN_180315380(LIT_"'d'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'s'");
    cRam00000001834b3ced = '\x01';
  }
  if ((param_1 == 0) && (param_1 = LIT_"''", LIT_"''" == 0)) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  uVar4 = System_String__ToLowerInvariant(param_1,0);
  cVar2 = func_0x0001817058a0(uVar4,LIT_"'d'",0);
  if (cVar2 != '\0') {
    return 1;
  }
  cVar2 = func_0x0001817058a0(uVar4,LIT_"'c'",0);
  if (cVar2 != '\0') {
    return 2;
  }
  cVar2 = func_0x0001817058a0(uVar4,LIT_"'b'",0);
  if (cVar2 != '\0') {
    return 3;
  }
  cVar2 = func_0x0001817058a0(uVar4,LIT_"'a'",0);
  if (cVar2 != '\0') {
    return 4;
  }
  cVar2 = func_0x0001817058a0(uVar4,LIT_"'s'",0);
  return -(cVar2 != '\0') & 5;
}

