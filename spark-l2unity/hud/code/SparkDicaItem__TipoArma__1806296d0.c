// SparkDicaItem__TipoArma__1806296d0 @ 0x1806296d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkDicaItem__TipoArma__1806296d0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (cRam00000001834b3cf5 == '\0') {
    FUN_180315380(LIT_"'Blunt'");
    FUN_180315380(LIT_"'Two-Handed Sword'");
    FUN_180315380(LIT_"'Dual Swords'");
    FUN_180315380(LIT_"'pole'");
    FUN_180315380(LIT_"'Bow'");
    FUN_180315380(LIT_"'sword'");
    FUN_180315380(LIT_"'dual'");
    FUN_180315380(LIT_"'Etc'");
    FUN_180315380(LIT_"'dualfist'");
    FUN_180315380(LIT_"'etc'");
    FUN_180315380(LIT_"'bow'");
    FUN_180315380(LIT_"'bigblunt'");
    FUN_180315380(LIT_"'Two-Handed Blunt'");
    FUN_180315380(LIT_"'fist'");
    FUN_180315380(LIT_"'blunt'");
    FUN_180315380(LIT_"'Dagger'");
    FUN_180315380(LIT_"'Dual Fists'");
    FUN_180315380(LIT_"'dagger'");
    FUN_180315380(LIT_"'Sword'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'Polearm'");
    FUN_180315380(LIT_"'Fist'");
    FUN_180315380(LIT_"'bigsword'");
    cRam00000001834b3cf5 = '\x01';
  }
  if ((param_1 == 0) && (param_1 = LIT_"''", LIT_"''" == 0)) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    lVar5 = (*pcVar1)();
    return lVar5;
  }
  uVar4 = System_String__ToLowerInvariant(param_1,0);
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(uVar4,0);
  if (uVar3 < 0x8d9c244e) {
    if (uVar3 < 0x68d67d34) {
      if (uVar3 == 0x27535296) {
        cVar2 = func_0x0001817058a0(uVar4,LIT_"'sword'",0);
        if (cVar2 != '\0') {
          return LIT_"'Sword'";
        }
      }
      else if (uVar3 == 0x68d67d33) {
        cVar2 = func_0x0001817058a0(uVar4,LIT_"'pole'",0);
        if (cVar2 != '\0') {
          return LIT_"'Polearm'";
        }
      }
    }
    else if (uVar3 == 0x73c682eb) {
      cVar2 = func_0x0001817058a0(uVar4,LIT_"'bow'",0);
      if (cVar2 != '\0') {
        return LIT_"'Bow'";
      }
    }
    else if (uVar3 == 0x803cd2bb) {
      cVar2 = func_0x0001817058a0(uVar4,LIT_"'dagger'",0);
      if (cVar2 != '\0') {
        return LIT_"'Dagger'";
      }
    }
    else if (uVar3 == 0x8d9c244d) {
      cVar2 = func_0x0001817058a0(uVar4,LIT_"'etc'",0);
      if (cVar2 != '\0') {
        return LIT_"'Etc'";
      }
    }
  }
  else if (uVar3 < 0xbe36b560) {
    if (uVar3 == 0x962a7aa4) {
      cVar2 = func_0x0001817058a0(uVar4,LIT_"'bigblunt'",0);
      if (cVar2 != '\0') {
        return LIT_"'Two-Handed Blunt'";
      }
    }
    else if (uVar3 == 0xabad8317) {
      cVar2 = func_0x0001817058a0(uVar4,LIT_"'fist'",0);
      if (cVar2 != '\0') {
        return LIT_"'Fist'";
      }
    }
    else if (uVar3 == 0xbe36b55f) {
      cVar2 = func_0x0001817058a0(uVar4,LIT_"'dual'",0);
      if (cVar2 != '\0') {
        return LIT_"'Dual Swords'";
      }
    }
  }
  else if (uVar3 == 0xdebccd1a) {
    cVar2 = func_0x0001817058a0(uVar4,LIT_"'bigsword'",0);
    if (cVar2 != '\0') {
      return LIT_"'Two-Handed Sword'";
    }
  }
  else if (uVar3 == 0xe987f898) {
    cVar2 = func_0x0001817058a0(uVar4,LIT_"'blunt'",0);
    if (cVar2 != '\0') {
      return LIT_"'Blunt'";
    }
  }
  else if (uVar3 == 0xfb843b51) {
    cVar2 = func_0x0001817058a0(uVar4,LIT_"'dualfist'",0);
    if (cVar2 != '\0') {
      return LIT_"'Dual Fists'";
    }
  }
  return LIT_"''";
}

