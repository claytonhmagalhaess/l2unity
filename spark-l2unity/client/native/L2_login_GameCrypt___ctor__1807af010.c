// L2_login_GameCrypt___ctor__1807af010 @ 0x1807af010

void L2_login_GameCrypt___ctor__1807af010(longlong param_1)

{
  undefined8 uVar1;
  
  if (cRam00000001834b4561 == '\0') {
    FUN_180315380(0x183331868);
    cRam00000001834b4561 = '\x01';
  }
  uVar1 = func_0x000180314710(uRam0000000183331868,0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  func_0x000180314690(param_1 + 0x10,uVar1);
  uVar1 = func_0x000180314710(uRam0000000183331868,0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  func_0x000180314690(param_1 + 0x18,uVar1);
  return;
}

