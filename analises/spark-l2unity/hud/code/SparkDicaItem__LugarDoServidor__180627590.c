// SparkDicaItem__LugarDoServidor__180627590 @ 0x180627590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkDicaItem__LugarDoServidor__180627590(longlong param_1,char param_2)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b3cf6 == '\0') {
    FUN_180315380(LIT_"'Earring'");
    FUN_180315380(LIT_"'neck'");
    FUN_180315380(LIT_"'legs'");
    FUN_180315380(LIT_"'Two-Handed'");
    FUN_180315380(LIT_"'Gloves'");
    FUN_180315380(LIT_"'back'");
    FUN_180315380(LIT_"'hair'");
    FUN_180315380(LIT_"'Hair Accessory'");
    FUN_180315380(LIT_"'head'");
    FUN_180315380(LIT_"'Underwear'");
    FUN_180315380(LIT_"'Shield'");
    FUN_180315380(LIT_"'One-Handed'");
    FUN_180315380(LIT_"'rear,lear'");
    FUN_180315380(LIT_"'Upper Body'");
    FUN_180315380(LIT_"'gloves'");
    FUN_180315380(LIT_"'Boots'");
    FUN_180315380(LIT_"'Necklace'");
    FUN_180315380(LIT_"'Ring'");
    FUN_180315380(LIT_"'rfinger,lfinger'");
    FUN_180315380(LIT_"'Head'");
    FUN_180315380(LIT_"'Upper and Lower Body'");
    FUN_180315380(LIT_"'fullarmor'");
    FUN_180315380(LIT_"'chest'");
    FUN_180315380(LIT_"'underwear'");
    FUN_180315380(LIT_"'dhair'");
    FUN_180315380(LIT_"'lrhand'");
    FUN_180315380(LIT_"'face'");
    FUN_180315380(LIT_"'Cloak'");
    FUN_180315380(LIT_"'rhand'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'feet'");
    FUN_180315380(LIT_"'Lower Body'");
    cRam00000001834b3cf6 = '\x01';
  }
  if (param_2 != '\0') {
    return LIT_"'Shield'";
  }
  if ((param_1 == 0) && (param_1 = LIT_"''", LIT_"''" == 0)) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    lVar5 = (*pcVar1)();
    return lVar5;
  }
  uVar4 = System_String__ToLowerInvariant(param_1,0);
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(uVar4,0);
  if (uVar3 < 0x5bb421a3) {
    if (uVar3 < 0x1ada4ea7) {
      if (uVar3 < 0x116b77dd) {
        if (uVar3 == 0x2f04330) {
          cVar2 = func_0x0001817058a0(uVar4,LIT_"'rhand'",0);
          if (cVar2 == '\0') {
            return LIT_"''";
          }
          return LIT_"'One-Handed'";
        }
        if (uVar3 == 0x116b77dc) {
          cVar2 = func_0x0001817058a0(uVar4,LIT_"'face'",0);
          if (cVar2 != '\0') {
            return LIT_"'Hair Accessory'";
          }
          return LIT_"''";
        }
        return LIT_"''";
      }
      if (uVar3 == 0x194d360c) {
        cVar2 = func_0x0001817058a0(uVar4,LIT_"'legs'",0);
        if (cVar2 != '\0') {
          return LIT_"'Lower Body'";
        }
      }
      else if ((uVar3 == 0x1ada4ea6) &&
              (cVar2 = func_0x0001817058a0(uVar4,LIT_"'underwear'",0), cVar2 != '\0')) {
        return LIT_"'Underwear'";
      }
    }
    else if (uVar3 < 0x3fa8a03e) {
      if (uVar3 == 0x32694bc3) {
        cVar2 = func_0x0001817058a0(uVar4,LIT_"'head'",0);
        if (cVar2 != '\0') {
          return LIT_"'Head'";
        }
      }
      else if ((uVar3 == 0x3fa8a03d) &&
              (cVar2 = func_0x0001817058a0(uVar4,LIT_"'rfinger,lfinger'",0), cVar2 != '\0')) {
        return LIT_"'Ring'";
      }
    }
    else if (uVar3 == 0x4bf95912) {
      cVar2 = func_0x0001817058a0(uVar4,LIT_"'neck'",0);
      if (cVar2 != '\0') {
        return LIT_"'Necklace'";
      }
    }
    else if ((uVar3 == 0x5bb421a2) &&
            (cVar2 = func_0x0001817058a0(uVar4,LIT_"'back'",0), cVar2 != '\0')) {
      return LIT_"'Cloak'";
    }
  }
  else {
    if (uVar3 < 0xaf56ad5c) {
      if (uVar3 < 0x9afb6298) {
        if (uVar3 == 0x98484f56) {
          cVar2 = func_0x0001817058a0(uVar4,LIT_"'chest'",0);
          if (cVar2 == '\0') {
            return LIT_"''";
          }
          return LIT_"'Upper Body'";
        }
        if (uVar3 != 0x9afb6297) {
          return LIT_"''";
        }
        cVar2 = func_0x0001817058a0(uVar4,LIT_"'gloves'",0);
        if (cVar2 == '\0') {
          return LIT_"''";
        }
        return LIT_"'Gloves'";
      }
      if (uVar3 == 0xa07627fb) {
        cVar2 = func_0x0001817058a0(uVar4,LIT_"'fullarmor'",0);
        if (cVar2 == '\0') {
          return LIT_"''";
        }
        return LIT_"'Upper and Lower Body'";
      }
      uVar6 = LIT_"'dhair'";
      if (uVar3 != 0xaf56ad5b) {
        return LIT_"''";
      }
    }
    else {
      if (uVar3 < 0xb3767653) {
        if (uVar3 == 0xb34a93e1) {
          cVar2 = func_0x0001817058a0(uVar4,LIT_"'rear,lear'",0);
          if (cVar2 == '\0') {
            return LIT_"''";
          }
          return LIT_"'Earring'";
        }
        if (uVar3 != 0xb3767652) {
          return LIT_"''";
        }
        cVar2 = func_0x0001817058a0(uVar4,LIT_"'lrhand'",0);
        if (cVar2 == '\0') {
          return LIT_"''";
        }
        return LIT_"'Two-Handed'";
      }
      if (uVar3 == 0xbb357f55) {
        cVar2 = func_0x0001817058a0(uVar4,LIT_"'feet'",0);
        if (cVar2 == '\0') {
          return LIT_"''";
        }
        return LIT_"'Boots'";
      }
      uVar6 = LIT_"'hair'";
      if (uVar3 != 0xd4b676b9) {
        return LIT_"''";
      }
    }
    cVar2 = func_0x0001817058a0(uVar4,uVar6,0);
    if (cVar2 != '\0') {
      return LIT_"'Hair Accessory'";
    }
  }
  return LIT_"''";
}

