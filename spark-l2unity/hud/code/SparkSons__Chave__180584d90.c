// SparkSons__Chave__180584d90 @ 0x180584d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkSons__Chave__180584d90(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (DAT_1834b38e3 == '\0') {
    FUN_180315380(TI_char__);
    FUN_180315380(LIT_"'none'");
    FUN_180315380(LIT_"'.'");
    DAT_1834b38e3 = '\x01';
  }
  cVar2 = func_0x000181707e50(param_1,0);
  if (cVar2 != '\0') {
    return 0;
  }
  if (param_1 != 0) {
    lVar3 = func_0x00018170d270(param_1,0);
    lVar4 = func_0x000180314710(TI_char__,2);
    if (lVar4 != 0) {
      if ((*(int *)(lVar4 + 0x18) == 0) ||
         (*(undefined2 *)(lVar4 + 0x20) = 0x5b, *(uint *)(lVar4 + 0x18) < 2)) {
        FUN_1803155c0();
        pcVar1 = (code *)swi(3);
        lVar3 = (*pcVar1)();
        return lVar3;
      }
      *(undefined2 *)(lVar4 + 0x22) = 0x5d;
      if (((lVar3 != 0) && (lVar3 = System_String__Trim(lVar3,lVar4,0), lVar3 != 0)) &&
         (lVar3 = System_String__ToLowerInvariant(lVar3,0), lVar3 != 0)) {
        if (*(int *)(lVar3 + 0x10) == 0) {
          return 0;
        }
        cVar2 = func_0x0001817058a0(lVar3,LIT_"'none'",0);
        if (cVar2 != '\0') {
          return 0;
        }
        cVar2 = System_String__Contains(lVar3,LIT_"'.'",0);
        if (cVar2 == '\0') {
          return 0;
        }
        return lVar3;
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  lVar3 = (*pcVar1)();
  return lVar3;
}

