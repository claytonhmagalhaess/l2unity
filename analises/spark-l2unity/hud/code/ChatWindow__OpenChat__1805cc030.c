// ChatWindow__OpenChat__1805cc030 @ 0x1805cc030

longlong ChatWindow__OpenChat__1805cc030(undefined8 param_1)

{
  longlong lVar1;
  
  if (cRam00000001834b3acb == '\0') {
    FUN_180315380(TI_ChatWindow.<OpenChat>d__73);
    cRam00000001834b3acb = '\x01';
  }
  lVar1 = func_0x000180315580(TI_ChatWindow.<OpenChat>d__73);
  Gear__UpdateWeaponType__1803dadf0(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000180314690(lVar1 + 0x20,param_1);
  return lVar1;
}

