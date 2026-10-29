// StatusWindow__BuildWindow__180763100 @ 0x180763100

longlong StatusWindow__BuildWindow__180763100(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (cRam00000001834b42be == '\0') {
    FUN_180315380(TI_StatusWindow.<BuildWindow>d__27);
    cRam00000001834b42be = '\x01';
  }
  lVar1 = func_0x000180315580(TI_StatusWindow.<BuildWindow>d__27);
  Gear__UpdateWeaponType__1803dadf0(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000180314690(lVar1 + 0x20,param_1);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  func_0x000180314690(lVar1 + 0x28,param_2);
  return lVar1;
}

