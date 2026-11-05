// SparkDicaItem__TipoComum__180629b70 @ 0x180629b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkDicaItem__TipoComum__180629b70(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (cRam00000001834b3cfe == '\0') {
    FUN_180315380(LIT_"'potion'");
    FUN_180315380(LIT_"'Pet Collar'");
    FUN_180315380(LIT_"'herb'");
    FUN_180315380(LIT_"'lure'");
    FUN_180315380(LIT_"'Dye'");
    FUN_180315380(LIT_"'Recipe'");
    FUN_180315380(LIT_"'scroll'");
    FUN_180315380(LIT_"'recipe'");
    FUN_180315380(LIT_"'seed'");
    FUN_180315380(LIT_"'Spellbook'");
    FUN_180315380(LIT_"'material'");
    FUN_180315380(LIT_"'Arrow'");
    FUN_180315380(LIT_"'Mercenary'");
    FUN_180315380(LIT_"'dye'");
    FUN_180315380(LIT_"'quest'");
    FUN_180315380(LIT_"'Herb'");
    FUN_180315380(LIT_"'Currency'");
    FUN_180315380(LIT_"'Lure'");
    FUN_180315380(LIT_"'Scroll'");
    FUN_180315380(LIT_"'arrow'");
    FUN_180315380(LIT_"'money'");
    FUN_180315380(LIT_"'Potion'");
    FUN_180315380(LIT_"'spellbook'");
    FUN_180315380(LIT_"'Race Ticket'");
    FUN_180315380(LIT_"'shot'");
    FUN_180315380(LIT_"'pet_collar'");
    FUN_180315380(LIT_"'race_ticket'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'Quest Item'");
    FUN_180315380(LIT_"'castle_guard'");
    FUN_180315380(LIT_"'Material'");
    FUN_180315380(LIT_"'Shot'");
    FUN_180315380(LIT_"'Seed'");
    cRam00000001834b3cfe = '\x01';
  }
  if ((param_1 == 0) && (param_1 = LIT_"''", LIT_"''" == 0)) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    lVar5 = (*pcVar1)();
    return lVar5;
  }
  uVar4 = System_String__ToLowerInvariant(param_1,0);
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(uVar4,0);
  if (uVar3 < 0xac47e6f6) {
    if (uVar3 < 0x263b6dab) {
      if (uVar3 < 0x23834c3) {
        if (uVar3 == 0xe52227) {
          cVar2 = func_0x0001817058a0(uVar4,LIT_"'lure'",0);
          if (cVar2 != '\0') {
            return LIT_"'Lure'";
          }
        }
        else if (uVar3 == 0x23834c2) {
          cVar2 = func_0x0001817058a0(uVar4,LIT_"'pet_collar'",0);
          if (cVar2 != '\0') {
            return LIT_"'Pet Collar'";
          }
        }
      }
      else if (uVar3 == 0x9d0cf3d) {
        cVar2 = func_0x0001817058a0(uVar4,LIT_"'quest'",0);
        if (cVar2 != '\0') {
          return LIT_"'Quest Item'";
        }
      }
      else if (uVar3 == 0x263b6daa) {
        cVar2 = func_0x0001817058a0(uVar4,LIT_"'herb'",0);
        if (cVar2 != '\0') {
          return LIT_"'Herb'";
        }
      }
    }
    else if (uVar3 < 0x69caa966) {
      if (uVar3 == 0x5045bcac) {
        cVar2 = func_0x0001817058a0(uVar4,LIT_"'seed'",0);
        if (cVar2 != '\0') {
          return LIT_"'Seed'";
        }
      }
      else if (uVar3 == 0x69caa965) {
        cVar2 = func_0x0001817058a0(uVar4,LIT_"'race_ticket'",0);
        if (cVar2 != '\0') {
          return LIT_"'Race Ticket'";
        }
      }
    }
    else if (uVar3 == 0x84542686) {
      cVar2 = func_0x0001817058a0(uVar4,LIT_"'arrow'",0);
      if (cVar2 != '\0') {
        return LIT_"'Arrow'";
      }
    }
    else if (uVar3 == 0xac47e6f5) {
      cVar2 = func_0x0001817058a0(uVar4,LIT_"'shot'",0);
      if (cVar2 != '\0') {
        return LIT_"'Shot'";
      }
    }
  }
  else if (uVar3 < 0xdd4ec22d) {
    if (uVar3 < 0xbdfad7eb) {
      if (uVar3 == 0xbc4804ec) {
        cVar2 = func_0x0001817058a0(uVar4,LIT_"'spellbook'",0);
        if (cVar2 != '\0') {
          return LIT_"'Spellbook'";
        }
      }
      else if (uVar3 == 0xbdfad7ea) {
        cVar2 = func_0x0001817058a0(uVar4,LIT_"'potion'",0);
        if (cVar2 != '\0') {
          return LIT_"'Potion'";
        }
      }
    }
    else if (uVar3 == 0xd2e4d060) {
      cVar2 = func_0x0001817058a0(uVar4,LIT_"'material'",0);
      if (cVar2 != '\0') {
        return LIT_"'Material'";
      }
    }
    else if (uVar3 == 0xdd4ec22c) {
      cVar2 = func_0x0001817058a0(uVar4,LIT_"'scroll'",0);
      if (cVar2 != '\0') {
        return LIT_"'Scroll'";
      }
    }
  }
  else if (uVar3 < 0xe6e0f03c) {
    if (uVar3 == 0xe150c94f) {
      cVar2 = func_0x0001817058a0(uVar4,LIT_"'money'",0);
      if (cVar2 != '\0') {
        return LIT_"'Currency'";
      }
    }
    else if (uVar3 == 0xe6e0f03b) {
      cVar2 = func_0x0001817058a0(uVar4,LIT_"'castle_guard'",0);
      if (cVar2 != '\0') {
        return LIT_"'Mercenary'";
      }
    }
  }
  else if (uVar3 == 0xec7e97cf) {
    cVar2 = func_0x0001817058a0(uVar4,LIT_"'recipe'",0);
    if (cVar2 != '\0') {
      return LIT_"'Recipe'";
    }
  }
  else if (uVar3 == 0xf83bb9c1) {
    cVar2 = func_0x0001817058a0(uVar4,LIT_"'dye'",0);
    if (cVar2 != '\0') {
      return LIT_"'Dye'";
    }
  }
  return LIT_"''";
}

