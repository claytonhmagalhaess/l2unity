// SparkTeclas__Texto__1804cf190 @ 0x1804cf190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkTeclas__Texto__1804cf190(longlong param_1,uint param_2)

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
  
  if (cRam00000001834b32fa == '\0') {
    FUN_180315380(TI_SparkTeclas);
    cRam00000001834b32fa = '\x01';
  }
  if ((param_1 == 0) || (lVar7 = *(longlong *)(param_1 + 0x28), lVar7 == 0)) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return uVar8;
  }
  if (*(uint *)(lVar7 + 0x18) <= param_2) {
    FUN_1803155c0();
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return uVar8;
  }
  lVar7 = *(longlong *)(lVar7 + 0x20 + (longlong)(int)param_2 * 8);
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b32fb == '\0') {
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(LIT_"'-'");
    FUN_180315380(LIT_"'Shift+'");
    FUN_180315380(LIT_"'Ctrl+'");
    FUN_180315380(LIT_"'Alt+'");
    FUN_180315380(LIT_"''");
    cRam00000001834b32fb = '\x01';
  }
  cVar5 = func_0x000181707e50(lVar7,0);
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
  lVar6 = LIT_"''";
  if (lVar7 != 0) {
    lVar6 = lVar7;
  }
  func_0x000180314690(&stack0x00000008);
  do {
    if (lVar6 == 0) {
DAT_1804cf182:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return uVar8;
    }
    cVar5 = System_String__StartsWith(lVar6,LIT_"'alt+'",0);
    if (cVar5 == '\0') {
      if (lVar6 == 0) goto DAT_1804cf182;
      cVar5 = System_String__StartsWith(lVar6,LIT_"'ctrl+'",0);
      if (cVar5 == '\0') {
        if (lVar6 == 0) goto DAT_1804cf182;
        cVar5 = System_String__StartsWith(lVar6,LIT_"'shift+'",0);
        if (cVar5 == '\0') {
          lVar7 = UnityEngine_InputSystem_InputControlPath__ToHumanReadableString(lVar6,2,0,0);
          cVar5 = System_String__IsNullOrWhiteSpace(lVar7,0);
          if (cVar5 != '\0') {
            lVar7 = lVar6;
          }
          if (lVar7 != 0) {
            if (*(int *)(lVar7 + 0x10) == 1) {
              lVar7 = System_String__ToUpperInvariant(lVar7,0);
            }
            lVar6 = LIT_"''";
            if (bVar2) {
              lVar6 = LIT_"'Ctrl+'";
            }
            lVar9 = LIT_"''";
            if (bVar3) {
              lVar9 = LIT_"'Shift+'";
            }
            lVar10 = LIT_"''";
            if (bVar4) {
              lVar10 = LIT_"'Alt+'";
            }
            uVar8 = System_String__Concat(lVar6,lVar9,lVar10,lVar7,0);
            return uVar8;
          }
          goto DAT_1804cf182;
        }
        if (lVar6 == 0) goto DAT_1804cf182;
        bVar3 = true;
        uVar8 = 6;
      }
      else {
        if (lVar6 == 0) goto DAT_1804cf182;
        bVar2 = true;
        uVar8 = 5;
      }
    }
    else {
      if (lVar6 == 0) goto DAT_1804cf182;
      bVar4 = true;
      uVar8 = 4;
    }
    lVar6 = func_0x00018170c060(lVar6,uVar8);
    func_0x000180314690(&stack0x00000008,lVar6);
  } while( true );
}

