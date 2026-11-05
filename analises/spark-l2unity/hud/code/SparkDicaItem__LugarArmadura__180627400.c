// SparkDicaItem__LugarArmadura__180627400 @ 0x180627400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkDicaItem__LugarArmadura__180627400(uint param_1)

{
  undefined8 uVar1;
  
  if (cRam00000001834b3cfa == '\0') {
    FUN_180315380(LIT_"'Earring'");
    FUN_180315380(LIT_"'Gloves'");
    FUN_180315380(LIT_"'Shield'");
    FUN_180315380(LIT_"'Upper Body'");
    FUN_180315380(LIT_"'Boots'");
    FUN_180315380(LIT_"'Necklace'");
    FUN_180315380(LIT_"'Ring'");
    FUN_180315380(LIT_"'Head'");
    FUN_180315380(LIT_"'Upper and Lower Body'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'Lower Body'");
    cRam00000001834b3cfa = '\x01';
  }
  if ((int)param_1 < 0x401) {
    if ((int)param_1 < 0x41) {
      if (param_1 == 8) {
        return LIT_"'Necklace'";
      }
      if (param_1 == 0x40) {
        return LIT_"'Head'";
      }
    }
    else {
      if (param_1 == 0x200) {
        return LIT_"'Gloves'";
      }
      if (param_1 == 0x400) {
        return LIT_"'Upper Body'";
      }
    }
  }
  else if ((int)param_1 < 0x1001) {
    if (param_1 == 0x800) {
      return LIT_"'Lower Body'";
    }
    if (param_1 == 0x1000) {
      return LIT_"'Boots'";
    }
  }
  else {
    if (param_1 == 0x4000) {
      return LIT_"'Shield'";
    }
    if (param_1 == 0x8000) {
      return LIT_"'Upper and Lower Body'";
    }
  }
  if ((param_1 & 6) == 0) {
    uVar1 = LIT_"'Ring'";
    if ((param_1 & 0x30) == 0) {
      uVar1 = LIT_"''";
    }
    return uVar1;
  }
  return LIT_"'Earring'";
}

