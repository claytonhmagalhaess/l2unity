// ExitWindow__BuildWindow__1805faa60 @ 0x1805faa60

longlong ExitWindow__BuildWindow__1805faa60(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (cRam00000001834b3bee == '\0') {
    FUN_180315380(TI_ExitWindow.<BuildWindow>d__19);
    cRam00000001834b3bee = '\x01';
  }
  lVar1 = func_0x000180315580(TI_ExitWindow.<BuildWindow>d__19);
  Gear__UpdateWeaponType__1803dadf0(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000180314690(lVar1 + 0x20,param_1);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  func_0x000180314690(lVar1 + 0x28,param_2);
  return lVar1;
}

