// SparkRadarWindow__NomeCurto__1806ea810 @ 0x1806ea810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkRadarWindow__NomeCurto__1806ea810(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined2 auStackX_8 [4];
  
  if (cRam00000001834b40a1 == '\0') {
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'F'");
    cRam00000001834b40a1 = '\x01';
  }
  cVar2 = func_0x000181707e50(param_1,0);
  if (cVar2 != '\0') {
    return LIT_"''";
  }
  iVar6 = 0;
  if (param_1 == 0) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    lVar5 = (*pcVar1)();
    return lVar5;
  }
  while( true ) {
    if (*(int *)(param_1 + 0x10) <= iVar6) {
      iVar6 = func_0x0001817079f0(param_1,0x20,0);
      if (iVar6 < 1) {
        return param_1;
      }
      lVar5 = System_String__Substring(param_1,0,iVar6,0);
      return lVar5;
    }
    uVar3 = System_String__get_Chars(param_1,iVar6);
    auStackX_8[0] = uVar3;
    if (*(int *)(_DAT_1834c62a8 + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = System_Char__IsDigit(uVar3,0);
    if (cVar2 != '\0') break;
    iVar6 = iVar6 + 1;
  }
  if (*(int *)(_DAT_1834c62a8 + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar4 = System_Char__ToString(auStackX_8,0);
  lVar5 = System_String__Concat(uVar4,LIT_"'F'",0);
  return lVar5;
}

