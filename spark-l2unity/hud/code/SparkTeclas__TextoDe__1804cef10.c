// SparkTeclas__TextoDe__1804cef10 @ 0x1804cef10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkTeclas__TextoDe__1804cef10(longlong param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lStackX_8;
  
  if (cRam00000001834b32fb == '\0') {
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(LIT_"'-'");
    FUN_180315380(LIT_"'Shift+'");
    FUN_180315380(LIT_"'Ctrl+'");
    FUN_180315380(LIT_"'Alt+'");
    FUN_180315380(LIT_"''");
    cRam00000001834b32fb = '\x01';
  }
  cVar5 = func_0x000181707e50(param_1,0);
  if (cVar5 != '\0') {
    return LIT_"'-'";
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834b32f8 == '\0') {
    FUN_180315380(LIT_"'alt+'");
    FUN_180315380(LIT_"'ctrl+'");
    FUN_180315380(LIT_"'shift+'");
    FUN_180315380(LIT_"''");
    DAT_1834b32f8 = '\x01';
  }
  bVar3 = false;
  bVar2 = false;
  bVar4 = false;
  lStackX_8 = LIT_"''";
  if (param_1 != 0) {
    lStackX_8 = param_1;
  }
  func_0x000180314690(&lStackX_8);
  do {
    if (lStackX_8 == 0) {
DAT_1804cf182:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return uVar8;
    }
    cVar5 = System_String__StartsWith(lStackX_8,LIT_"'alt+'",0);
    if (cVar5 == '\0') {
      if (lStackX_8 == 0) goto DAT_1804cf182;
      cVar5 = System_String__StartsWith(lStackX_8,LIT_"'ctrl+'",0);
      if (cVar5 == '\0') {
        if (lStackX_8 == 0) goto DAT_1804cf182;
        cVar5 = System_String__StartsWith(lStackX_8,LIT_"'shift+'",0);
        if (cVar5 == '\0') {
          lVar6 = UnityEngine_InputSystem_InputControlPath__ToHumanReadableString(lStackX_8,2,0,0);
          cVar5 = System_String__IsNullOrWhiteSpace(lVar6,0);
          if (cVar5 != '\0') {
            lVar6 = lStackX_8;
          }
          if (lVar6 != 0) {
            if (*(int *)(lVar6 + 0x10) == 1) {
              lVar6 = System_String__ToUpperInvariant(lVar6,0);
            }
            lVar7 = LIT_"''";
            if (bVar2) {
              lVar7 = LIT_"'Ctrl+'";
            }
            lVar9 = LIT_"''";
            if (bVar3) {
              lVar9 = LIT_"'Shift+'";
            }
            lVar10 = LIT_"''";
            if (bVar4) {
              lVar10 = LIT_"'Alt+'";
            }
            uVar8 = System_String__Concat(lVar7,lVar9,lVar10,lVar6,0);
            return uVar8;
          }
          goto DAT_1804cf182;
        }
        if (lStackX_8 == 0) goto DAT_1804cf182;
        bVar3 = true;
        uVar8 = 6;
      }
      else {
        if (lStackX_8 == 0) goto DAT_1804cf182;
        bVar2 = true;
        uVar8 = 5;
      }
    }
    else {
      if (lStackX_8 == 0) goto DAT_1804cf182;
      bVar4 = true;
      uVar8 = 4;
    }
    lStackX_8 = func_0x00018170c060(lStackX_8,uVar8);
    func_0x000180314690(&lStackX_8,lStackX_8);
  } while( true );
}

