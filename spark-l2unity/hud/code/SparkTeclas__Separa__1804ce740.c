// SparkTeclas__Separa__1804ce740 @ 0x1804ce740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTeclas__Separa__1804ce740
               (longlong param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
               longlong *param_5)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (DAT_1834b32f8 == '\0') {
    FUN_180315380(LIT_"'alt+'");
    FUN_180315380(LIT_"'ctrl+'");
    FUN_180315380(LIT_"'shift+'");
    FUN_180315380(LIT_"''");
    DAT_1834b32f8 = '\x01';
  }
  *param_4 = 0;
  *param_3 = 0;
  *param_2 = 0;
  lVar3 = LIT_"''";
  if (param_1 != 0) {
    lVar3 = param_1;
  }
  *param_5 = lVar3;
  func_0x000180314690(param_5);
  lVar3 = *param_5;
  while (lVar3 != 0) {
    cVar2 = System_String__StartsWith(lVar3,LIT_"'alt+'",0);
    if (cVar2 == '\0') {
      if (*param_5 == 0) break;
      cVar2 = System_String__StartsWith(*param_5,LIT_"'ctrl+'",0);
      if (cVar2 == '\0') {
        if (*param_5 == 0) break;
        cVar2 = System_String__StartsWith(*param_5,LIT_"'shift+'",0);
        if (cVar2 == '\0') {
          return;
        }
        *param_4 = 1;
        lVar3 = *param_5;
        if (lVar3 == 0) break;
        uVar4 = 6;
      }
      else {
        *param_3 = 1;
        lVar3 = *param_5;
        if (lVar3 == 0) break;
        uVar4 = 5;
      }
    }
    else {
      *param_2 = 1;
      lVar3 = *param_5;
      if (lVar3 == 0) break;
      uVar4 = 4;
    }
    lVar3 = func_0x00018170c060(lVar3,uVar4);
    *param_5 = lVar3;
    func_0x000180314690(param_5,lVar3);
    lVar3 = *param_5;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

