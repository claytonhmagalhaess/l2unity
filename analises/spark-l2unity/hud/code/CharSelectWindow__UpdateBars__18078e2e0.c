// CharSelectWindow__UpdateBars__18078e2e0 @ 0x18078e2e0

longlong CharSelectWindow__UpdateBars__18078e2e0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (cRam00000001834b44a9 == '\0') {
    FUN_180315380(TI_CharSelectWindow.<UpdateBars>d__26);
    cRam00000001834b44a9 = '\x01';
  }
  lVar1 = func_0x000180315580(TI_CharSelectWindow.<UpdateBars>d__26);
  Gear__UpdateWeaponType__1803dadf0(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000180314690(lVar1 + 0x20,param_1);
  *(undefined4 *)(lVar1 + 0x28) = param_2;
  return lVar1;
}

