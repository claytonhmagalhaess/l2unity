// SparkDicaItem__EhLinhaDeTipo__1806264f0 @ 0x1806264f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte SparkDicaItem__EhLinhaDeTipo__1806264f0(longlong param_1)

{
  char cVar1;
  byte bVar2;
  
  if (cRam00000001834b3cf0 == '\0') {
    FUN_180315380(LIT_"'<color=#A3A08A>'");
    FUN_180315380(LIT_"':</color>'");
    FUN_180315380(LIT_"'</color>'");
    FUN_180315380(LIT_"'['");
    cRam00000001834b3cf0 = '\x01';
  }
  if (param_1 != 0) {
    cVar1 = System_String__StartsWith(param_1,LIT_"'<color=#A3A08A>'",0);
    if (cVar1 != '\0') {
      cVar1 = System_String__EndsWith(param_1,LIT_"'</color>'",0);
      if (cVar1 != '\0') {
        cVar1 = System_String__Contains(param_1,LIT_"':</color>'",0);
        if (cVar1 == '\0') {
          bVar2 = System_String__Contains(param_1,LIT_"'['",0);
          return bVar2 ^ 1;
        }
      }
    }
  }
  return 0;
}

