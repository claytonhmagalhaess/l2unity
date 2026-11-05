// SparkTeclas__NomeDoModificador__1804cdd70 @ 0x1804cdd70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkTeclas__NomeDoModificador__1804cdd70(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b32f6 == '\0') {
    FUN_180315380(LIT_"'alt'");
    FUN_180315380(LIT_"'ctrl'");
    FUN_180315380(LIT_"'shift'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'control'");
    cRam00000001834b32f6 = '\x01';
  }
  if (param_1 != 0) {
    lVar3 = System_String__ToLowerInvariant(param_1,0);
    if (lVar3 != 0) {
      cVar2 = System_String__Contains(lVar3,LIT_"'alt'",0);
      if (cVar2 != '\0') {
        return LIT_"'alt'";
      }
      cVar2 = System_String__Contains(lVar3,LIT_"'ctrl'",0);
      if (cVar2 == '\0') {
        cVar2 = System_String__Contains(lVar3,LIT_"'control'",0);
        if (cVar2 == '\0') {
          cVar2 = System_String__Contains(lVar3,LIT_"'shift'",0);
          uVar4 = LIT_"'shift'";
          if (cVar2 == '\0') {
            uVar4 = LIT_"''";
          }
          return uVar4;
        }
      }
      return LIT_"'ctrl'";
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}

