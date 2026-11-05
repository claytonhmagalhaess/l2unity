// MultisellWindow__BuildWindow__180753b80 @ 0x180753b80

longlong MultisellWindow__BuildWindow__180753b80(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (cRam00000001834b4300 == '\0') {
    FUN_180315380(TI_MultisellWindow.<BuildWindow>d__37);
    cRam00000001834b4300 = '\x01';
  }
  lVar1 = func_0x000180315580(TI_MultisellWindow.<BuildWindow>d__37);
  Gear__UpdateWeaponType__1803dadf0(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000180314690(lVar1 + 0x20,param_1);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  func_0x000180314690(lVar1 + 0x28,param_2);
  return lVar1;
}

