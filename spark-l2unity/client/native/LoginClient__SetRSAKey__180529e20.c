// LoginClient__SetRSAKey__180529e20 @ 0x180529e20

void LoginClient__SetRSAKey__180529e20(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b3790 == '\0') {
    FUN_180315380(0x1832f3868);
    FUN_180315380(0x1832d31d8);
    FUN_180315380(0x1833126e8);
    cRam00000001834b3790 = '\x01';
  }
  uVar3 = func_0x000180315580(uRam00000001832d31d8);
  FUN_1804fd1b0(uVar3,param_2,1,0);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  func_0x000180314690(param_1 + 0x68,uVar3);
  if (*(int *)(lRam00000001832f3868 + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = uRam00000001833126e8;
  if (cRam00000001834bfa14 == '\0') {
    FUN_180315380(0x1832f3868,0);
    FUN_180315380(0x183315868);
    cRam00000001834bfa14 = '\x01';
  }
  if (*(int *)(lRam00000001832f3868 + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3803 == '\0') {
    FUN_180315380(0x1832f3868);
    cRam00000001834b3803 = '\x01';
  }
  if (*(int *)(lRam00000001832f3868 + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar1 = *(longlong *)(*(longlong *)(lRam00000001832f3868 + 0xb8) + 8);
  if (lVar1 != 0) {
    FUN_180036090(5,uRam0000000183315868,lVar1,3,uVar3);
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

