// SparkHtml__Cor__180738870 @ 0x180738870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkHtml__Cor__180738870(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if (cRam00000001834b425e == '\0') {
    FUN_180315380(TI_System.Text.RegularExpressions.Regex);
    FUN_180315380(LIT_"'808080'");
    FUN_180315380(LIT_"'green'");
    FUN_180315380(LIT_"'gray'");
    FUN_180315380(LIT_"'red'");
    FUN_180315380(LIT_"'FFFFFF'");
    FUN_180315380(LIT_"'0000FF'");
    FUN_180315380(LIT_"'grey'");
    FUN_180315380(LIT_"'FF0000'");
    FUN_180315380(LIT_"'FFC900'");
    FUN_180315380(LIT_"'blue'");
    FUN_180315380(LIT_"'^[0-9a-fA-F]{6}$'");
    FUN_180315380(LIT_"'FFFF00'");
    FUN_180315380(LIT_"'yellow'");
    FUN_180315380(LIT_"'LEVEL'");
    FUN_180315380(LIT_"'white'");
    FUN_180315380(LIT_"'00FF00'");
    cRam00000001834b425e = '\x01';
  }
  cVar2 = func_0x000181707e50(param_1,0);
  if (cVar2 == '\0') {
    if (((param_1 == 0) || (lVar4 = func_0x00018170d270(param_1,0), lVar4 == 0)) ||
       (lVar4 = System_String__TrimStart(lVar4,0x23,0), lVar4 == 0)) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    cVar2 = System_String__Equals(lVar4,LIT_"'LEVEL'",5,0);
    if (cVar2 != '\0') {
      return LIT_"'FFC900'";
    }
    if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = System_Text_RegularExpressions_Regex__IsMatch(lVar4,LIT_"'^[0-9a-fA-F]{6}$'",0);
    if (cVar2 != '\0') {
      if (cRam00000001834b89cb == '\0') {
        FUN_180315380(TI_System.Globalization.CultureInfo,0);
        cRam00000001834b89cb = '\x01';
      }
      if (*(int *)(TI_System.Globalization.CultureInfo + 0xe4) == 0) {
        func_0x000180315660();
      }
      plVar6 = (longlong *)System_Globalization_CultureInfo__get_InvariantCulture(0);
      if ((plVar6 != (longlong *)0x0) &&
         (plVar6 = (longlong *)
                   (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0)),
         plVar6 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00018170cc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(*plVar6 + 0x1d8))(plVar6,lVar4,*(undefined8 *)(*plVar6 + 0x1e0));
        return uVar5;
      }
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    uVar5 = System_String__ToLowerInvariant();
    uVar3 = _PrivateImplementationDetails___ComputeStringHash(uVar5,0);
    if (uVar3 < 0x40f480dd) {
      if (uVar3 == 0x11decbc) {
        cVar2 = func_0x0001817058a0(uVar5,LIT_"'green'",0);
        if (cVar2 != '\0') {
          return LIT_"'00FF00'";
        }
      }
      else if (uVar3 == 0x5bf6449) {
        cVar2 = func_0x0001817058a0(uVar5,LIT_"'yellow'",0);
        if (cVar2 != '\0') {
          return LIT_"'FFFF00'";
        }
      }
      else if ((uVar3 == 0x40f480dc) &&
              (cVar2 = func_0x0001817058a0(uVar5,LIT_"'red'",0), cVar2 != '\0')) {
        return LIT_"'FF0000'";
      }
    }
    else {
      if (uVar3 < 0xb29019a7) {
        if (uVar3 == 0x82fbf5cd) {
          cVar2 = func_0x0001817058a0(uVar5,LIT_"'blue'",0);
          if (cVar2 == '\0') {
            return 0;
          }
          return LIT_"'0000FF'";
        }
        if (uVar3 != 0xb29019a6) {
          return 0;
        }
        cVar2 = func_0x0001817058a0(uVar5,LIT_"'grey'",0);
      }
      else {
        if (uVar3 != 0xba9ab39a) {
          if (uVar3 != 0xde020766) {
            return 0;
          }
          cVar2 = func_0x0001817058a0(uVar5,LIT_"'white'",0);
          if (cVar2 == '\0') {
            return 0;
          }
          return LIT_"'FFFFFF'";
        }
        cVar2 = func_0x0001817058a0(uVar5,LIT_"'gray'",0);
      }
      if (cVar2 != '\0') {
        return LIT_"'808080'";
      }
    }
  }
  return 0;
}

