// SparkTextoDano__Palavra__18074d0b0 @ 0x18074d0b0

void SparkTextoDano__Palavra__18074d0b0
               (int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
               undefined4 *param_5,undefined4 *param_6,undefined8 *param_7,undefined8 *param_8,
               undefined4 *param_9)

{
  undefined8 uVar1;
  
  if (cRam00000001834b42b1 == '\0') {
    FUN_180315380(LIT_"'Over-hit'");
    FUN_180315380(LIT_"'Blocked_Alvo'");
    FUN_180315380(LIT_"'CriticalHeal_Servo'");
    FUN_180315380(LIT_"'Resisted'");
    FUN_180315380(LIT_"'OverHit'");
    FUN_180315380(LIT_"'Blocked'");
    FUN_180315380(LIT_"'+Critical Heal'");
    FUN_180315380(LIT_"'Critical'");
    FUN_180315380(LIT_"'Immune'");
    FUN_180315380(LIT_"'_Alvo'");
    FUN_180315380(LIT_"'CriticalHeal'");
    FUN_180315380(LIT_"'Blocked_Jogador'");
    FUN_180315380(LIT_"'_Servo'");
    FUN_180315380(LIT_"'Evaded'");
    FUN_180315380(LIT_"'_Jogador'");
    cRam00000001834b42b1 = '\x01';
  }
  *param_5 = 0x42f00000;
  *param_6 = 0x42200000;
  uVar1 = LIT_"'_Alvo'";
  if ((param_1 != 0) && (uVar1 = LIT_"'_Servo'", param_1 == 1)) {
    uVar1 = LIT_"'_Jogador'";
  }
  switch(param_2) {
  case 3:
    break;
  case 4:
    *param_5 = 0x437a0000;
    *param_6 = 0x42ae0000;
    *param_7 = LIT_"'OverHit'";
    func_0x000180314690(param_7,LIT_"'OverHit'");
    *param_8 = LIT_"'Over-hit'";
    func_0x000180314690(param_8,LIT_"'Over-hit'");
    *param_9 = 0xff50b0f0;
    *param_3 = 0xc2fa0000;
    *param_4 = 0xc2dc0000;
    return;
  default:
    *param_5 = 0x43340000;
    uVar1 = LIT_"'CriticalHeal'";
    if (param_1 == 2) {
      uVar1 = LIT_"'CriticalHeal_Servo'";
    }
    *param_7 = uVar1;
    func_0x000180314690();
    *param_8 = LIT_"'+Critical Heal'";
    func_0x000180314690(param_8,LIT_"'+Critical Heal'");
    *param_9 = 0xff50e0b0;
    if (param_1 != 0) {
      if (param_1 != 1) {
        *param_3 = 0xc1e80000;
        *param_4 = 0x41880000;
        return;
      }
      *param_3 = 0xc2080000;
      *param_4 = 0x41d80000;
      return;
    }
    *param_3 = 0xc2080000;
    *param_4 = 0xc28e0000;
    return;
  case 9:
    uVar1 = System_String__Concat(LIT_"'Resisted'",uVar1,0);
    *param_7 = uVar1;
    func_0x000180314690(param_7,uVar1);
    *param_8 = LIT_"'Resisted'";
    func_0x000180314690(param_8,LIT_"'Resisted'");
    *param_9 = 0xff90c0c8;
    if (param_1 == 0) {
      *param_3 = 0xc29a0000;
      *param_4 = 0xc2b60000;
      return;
    }
    if (param_1 != 1) {
      *param_3 = 0xc2ea0000;
      *param_4 = 0x42200000;
      return;
    }
    *param_3 = 0xc2fe0000;
    *param_4 = 0x426c0000;
    return;
  case 10:
    uVar1 = LIT_"'Blocked_Jogador'";
    if (param_1 == 0) {
      uVar1 = LIT_"'Blocked_Alvo'";
    }
    *param_7 = uVar1;
    func_0x000180314690();
    *param_8 = LIT_"'Blocked'";
    func_0x000180314690(param_8,LIT_"'Blocked'");
    *param_9 = 0xff88a8c0;
    if (param_1 != 0) {
      *param_3 = 0xc2e00000;
      *param_4 = 0x42300000;
      return;
    }
    *param_3 = 0xc2140000;
    *param_4 = 0xc28e0000;
    return;
  case 0xb:
    uVar1 = System_String__Concat(LIT_"'Evaded'",uVar1,0);
    *param_7 = uVar1;
    func_0x000180314690(param_7,uVar1);
    *param_8 = LIT_"'Evaded'";
    func_0x000180314690(param_8,LIT_"'Evaded'");
    *param_9 = 0xff98b890;
    if (param_1 == 0) {
      *param_3 = 0xc2640000;
      *param_4 = 0xc2de0000;
      return;
    }
    *param_3 = 0xc2c20000;
    if (param_1 != 1) {
      *param_4 = 0x42380000;
      return;
    }
    *param_4 = 0x42580000;
    return;
  case 0xc:
    uVar1 = System_String__Concat(LIT_"'Immune'",uVar1,0);
    *param_7 = uVar1;
    func_0x000180314690(param_7,uVar1);
    *param_8 = LIT_"'Immune'";
    func_0x000180314690(param_8,LIT_"'Immune'");
    *param_9 = 0xffb0c080;
    if (param_1 == 0) {
      *param_3 = 0xc2860000;
      *param_4 = 0xc2ac0000;
      return;
    }
    if (param_1 != 1) {
      *param_3 = 0xc2b80000;
      *param_4 = 0x42240000;
      return;
    }
    *param_3 = 0xc2900000;
    *param_4 = 0x42480000;
    return;
  }
  *param_5 = 0x43020000;
  uVar1 = System_String__Concat(LIT_"'Critical'",uVar1,0);
  *param_7 = uVar1;
  func_0x000180314690(param_7,uVar1);
  *param_8 = LIT_"'Critical'";
  func_0x000180314690(param_8,LIT_"'Critical'");
  *param_9 = 0xff3055e0;
  if (param_1 == 0) {
    *param_3 = 0xc2be0000;
    *param_4 = 0xc2980000;
    return;
  }
  *param_3 = 0xc22c0000;
  if (param_1 != 1) {
    *param_4 = 0x42c60000;
    return;
  }
  *param_4 = 0xc0000000;
  return;
}

